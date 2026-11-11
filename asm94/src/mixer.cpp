#include "mixer.h"

#include <algorithm>
#include <cstring>

namespace asm94 {

Mixer::Mixer() : samples_(1 << 20, 0) {
    // 256 steps an octave, 4095 full scale
    double g = 1.0;
    for (int i = 4095; i >= 0; i--, g /= 1.002709201) gain_[i] = (float)g;
    gain_[0] = 0.0f;
}

void Mixer::load(uint32_t addr, const uint8_t* p, uint32_t n) {
    for (uint32_t i = 0; i < n; i++) samples_[(addr + i) & 0xFFFFF] = p[i];
}

void Mixer::start(int v, uint32_t pos, uint32_t loop, uint32_t end, bool looped) {
    Voice& c = voices_[v];
    c.pos = (uint64_t)(pos & 0xFFFFF) << kPosFrac;
    c.loop = (uint64_t)(loop & 0xFFFFF) << kPosFrac;
    c.end = (uint64_t)(end & 0xFFFFF) << kPosFrac;
    c.looped = looped;
    c.playing = true;
}

void Mixer::stopAll() {
    for (Voice& c : voices_) c.playing = c.ramping = false;
}

// fc/1024 samples a GUS sample: (fc >> 1) / 512 x 7/16 a mixer sample
void Mixer::frequency(int v, uint16_t fc) { voices_[v].inc = (uint64_t)(fc >> 1) * 7; }

void Mixer::setVolume(int v, uint16_t vol) { voices_[v].vol = (int32_t)(vol >> 4) << kFrac; }

void Mixer::ramp(int v, uint8_t from, uint8_t to, bool down) {
    Voice& c = voices_[v];
    c.lo = (int32_t)from << 4 << kFrac;
    c.hi = (int32_t)to << 4 << kFrac;
    c.down = down;
    c.ramping = true;
}

void Mixer::render(float* out, int frames) {
    for (int k = 0; k < 32; k++) {
        Voice& c = voices_[k];
        if (!c.playing && !c.ramping) continue;
        const bool right = (k & 3) == 1 || (k & 3) == 2;
        for (int i = 0; i < frames; i++) {
            if (c.playing) {
                const uint32_t a = (uint32_t)(c.pos >> kPosFrac);
                const int s0 = (int8_t)samples_[a & 0xFFFFF], s1 = (int8_t)samples_[(a + 1) & 0xFFFFF];
                const float f = (float)(c.pos & ((1 << kPosFrac) - 1)) / (1 << kPosFrac);
                const float s = (s0 + (s1 - s0) * f) / 128.0f;
                out[2 * i + right] += gain_[c.vol >> kFrac] * s;
                c.pos += c.inc;
                if (c.pos >= c.end) {
                    if (c.looped) {
                        c.pos = c.loop + (c.pos - c.end);
                    } else {
                        c.playing = false;
                        c.pos = c.end;
                    }
                }
            }
            if (c.ramping) {
                const int32_t step = (63 << kFrac) * 7 / 16;
                if (c.down) {
                    c.vol -= step;
                    if (c.vol <= c.lo) c.vol = c.lo, c.ramping = false;
                } else {
                    c.vol += step;
                    if (c.vol >= c.hi) c.vol = c.hi, c.ramping = false;
                }
                c.vol = std::clamp(c.vol, 0, (4095 << kFrac) | ((1 << kFrac) - 1));
            }
        }
    }
}

}  // namespace asm94
