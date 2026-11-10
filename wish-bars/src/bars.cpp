// Comments give the offsets in the part's code blob (file offset 58927h of WISH.EXE).
#include "bars.h"

#include <cstring>

#include "bars_data.h"

namespace wb {

void Bars::reset() {
    std::memset(pic, 0, sizeof pic);
    std::memset(dac6, 0, sizeof dac6);   // 0002: the whole DAC black
    std::memset(next_dac, 0, sizeof next_dac);
    esc_down = esc_fade = 0;
    done = false;
    next_set = 0;                        // 0031
    limit = 200;                         // 0037
    ending = 0;                          // 003D
    start_set();
}

// 0043: load the next motion and start it, fading in
void Bars::start_set() {
    const uint16_t* s = kSets[next_set / 12];
    next_set += 12;
    for (int i = 0; i < 3; i++) line_step[i] = s[i], frame_step[i] = s[3 + i];
    count = 0;
    fade_state = 0;
    fade = 0x40;
    phase[0] = phase[1] = phase[2] = 0;
}

bool Bars::step(bool esc) {
    if (done) return false;
    // 0083: after Esc, 48h more frames, fading out
    if (esc_down) {
        if (++esc_fade >= 0x48) return false;
    }
    // 0098: vertical retrace. The palette written after the last frame's bars is now shown.
    std::memcpy(dac6, next_dac, sizeof dac6);
    // 00A0-0145: 199 bars, one per two scan lines, each visible from the next row on. The line
    // is all 0 at the start: cleared after the last frame's bars (0147) and here (00A0).
    uint8_t line[W] = {};
    std::memset(pic, 0, W);              // row 0
    uint16_t p[3] = {phase[0], phase[1], phase[2]};
    for (int bp = 199; bp >= 1; bp--) {
        unsigned x = 0;
        for (int i = 0; i < 3; i++) {
            x += kSine[p[i] & 0xFF];
            p[i] += line_step[i];
        }
        if (bp <= limit) std::memcpy(line + x, kBar, 16);   // x <= 300
        std::memcpy(pic + (200 - bp) * W, line, W);
    }
    // 0150: the fades and the end of the motions
    bool check_end = false;
    if (fade_state == 0) {
        if (--fade == 0) fade_state = 1, check_end = true;
    } else if (fade_state == 2) {
        if (++fade > 0x40) {             // 017A: faded out, the next motion starts (at 0043)
            start_set();
            return true;
        }
    } else {
        check_end = true;
    }
    if (check_end && ending == 1) {      // 017D: the last motion's wipe
        if (--limit == 0) {              // 023F: this frame is shown, then the part returns
            done = true;
            return true;
        }
    }
    // 0192: colours 1-16, darkened by the fades
    const uint8_t cl = uint8_t(fade + esc_fade);
    for (int c = 0; c < 48; c++) {
        uint8_t al = uint8_t(kPalette[c] - cl);
        if (int8_t(al) < 0) al = 0;      // a signed test: a big fade wraps to a bright value
        next_dac[3 + c] = al & 0x3F;     // the DAC keeps 6 bits
    }
    if (esc) esc_down = 1;               // 01D9: Esc (scan code 1) at port 60h
    for (int i = 0; i < 3; i++) phase[i] = (phase[i] + frame_step[i]) & 0xFF;   // 01E4
    if (++count >= 400) {                // 020B: each motion runs 400 frames
        count = 0;
        if (next_set == 0x30) ending = 1;   // the last one: start the wipe
        else fade_state = 2, fade = 0;      // else fade out
    }
    return true;
}

void Bars::to_argb(uint32_t* out) const {
    for (int i = 0; i < W * H; i++) {
        const uint8_t* c = dac6 + 3 * pic[i];
        out[i] = 0xFF000000u | uint32_t(c[0] << 2 | c[0] >> 4) << 16 | uint32_t(c[1] << 2 | c[1] >> 4) << 8 |
                 uint32_t(c[2] << 2 | c[2] >> 4);
    }
}

void Bars::to_rgb24(uint8_t* out) const {
    for (int i = 0; i < W * H; i++)
        for (int k = 0; k < 3; k++) {
            const uint8_t v = dac6[3 * pic[i] + k];
            out[3 * i + k] = uint8_t(v << 2 | v >> 4);
        }
}

uint32_t crc32(const uint8_t* p, unsigned n) {
    uint32_t c = 0xFFFFFFFFu;
    for (unsigned i = 0; i < n; i++) {
        c ^= p[i];
        for (int k = 0; k < 8; k++) c = c >> 1 ^ (0xEDB88320u & -(c & 1));
    }
    return ~c;
}

}  // namespace wb
