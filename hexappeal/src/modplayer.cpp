#include "modplayer.h"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iterator>

namespace hex {

namespace {

constexpr double kPaulaClock = 3546894.6;    // PAL Amiga, Hz x period
constexpr int kMinPeriod = 113, kMaxPeriod = 856;
constexpr float kGain = 0.5f;

// ProTracker's periods for finetune 0, C-1 to B-3.
constexpr int kPeriods[36] = {
    856, 808, 762, 720, 678, 640, 604, 570, 538, 508, 480, 453,
    428, 404, 381, 360, 339, 320, 302, 285, 269, 254, 240, 226,
    214, 202, 190, 180, 170, 160, 151, 143, 135, 127, 120, 113,
};

constexpr uint8_t kVibratoSine[32] = {
    0, 24, 49, 74, 97, 120, 141, 161, 180, 197, 212, 224, 235, 244, 250, 253,
    255, 253, 250, 244, 235, 224, 212, 197, 180, 161, 141, 120, 97, 74, 49, 24,
};

int semitonesUp(int period, int n) {
    int i = 0;
    while (i < 35 && kPeriods[i] > period) i++;
    return kPeriods[std::min(i + n, 35)];
}

}  // namespace

bool ModPlayer::load(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) {
        error_ = "cannot open " + path;
        return false;
    }
    std::vector<uint8_t> d((std::istreambuf_iterator<char>(f)), {});
    return loadMemory(d);
}

bool ModPlayer::loadMemory(const std::vector<uint8_t>& d) {
    if (d.size() < 1084) {
        error_ = "not a module";
        return false;
    }
    const std::string tag(d.begin() + 1080, d.begin() + 1084);
    if (tag == "M.K." || tag == "M!K!" || tag == "FLT4" || tag == "4CHN")
        channels_ = 4;
    else if (tag == "6CHN")
        channels_ = 6;
    else if (tag == "8CHN" || tag == "FLT8" || tag == "OCTA")
        channels_ = 8;
    else {
        error_ = "unknown module type " + tag;
        return false;
    }
    data_ = d;
    songLength_ = std::clamp<int>(d[950], 1, 128);
    restart_ = d[951] < songLength_ ? d[951] : 0;
    std::memcpy(orders_, &d[952], 128);
    int patterns = 0;
    for (int i = 0; i < 128; i++) patterns = std::max(patterns, orders_[i] + 1);
    patternBase_ = 1084;
    size_t at = patternBase_ + (size_t)patterns * 64 * channels_ * 4;
    pcm_.clear();
    for (int i = 1; i <= 31; i++) {
        const uint8_t* h = &d[20 + 30 * (i - 1)];
        Sample& s = samples_[i];
        s = Sample{};
        uint32_t len = (h[22] << 8 | h[23]) * 2u;
        s.finetune = (h[24] & 15) > 7 ? (h[24] & 15) - 16 : (h[24] & 15);
        s.volume = std::min<int>(h[25], 64);
        uint32_t ls = (h[26] << 8 | h[27]) * 2u, ll = (h[28] << 8 | h[29]) * 2u;
        if (at + len > d.size()) len = at < d.size() ? (uint32_t)(d.size() - at) : 0;
        s.start = (uint32_t)pcm_.size();
        s.length = len;
        for (uint32_t k = 0; k < len; k++) pcm_.push_back((int8_t)d[at + k]);
        at += len;
        if (ll > 2 && ls < len) {
            s.loopStart = ls;
            s.loopLength = std::min(ll, len - ls);
        }
    }
    pcm_.push_back(0);
    seek(0, 0);
    return true;
}

void ModPlayer::seek(int position, int row) {
    for (int i = 0; i < kMaxChannels; i++) {
        ch_[i] = Channel{};
        // Left, right, right, left, as on the Amiga, and on for 6 and 8.
        const bool left = (i & 3) == 0 || (i & 3) == 3;
        ch_[i].pan = left ? 0.2f : 0.8f;
    }
    pos_ = row_ = tick_ = 0;
    speed_ = 6;
    tempo_ = 125;
    nextPos_ = nextRow_ = -1;
    patternDelay_ = 0;
    tickLeft_ = 0.0;
    rowsPlayed_ = 0;
    // Play the song silently up to there; a scratch buffer of one tick.
    std::vector<float> scratch(4096);
    const int saved = volume_;
    volume_ = 0;
    long guard = 0;
    while (!(pos_ == position && row_ == row && tick_ == 0 && tickLeft_ < 1.0) && guard++ < 1000000) {
        const int n = std::max(1, std::min(2048, (int)tickLeft_));
        render(scratch.data(), tickLeft_ < 1.0 ? 1 : n);
    }
    volume_ = saved;
}

void ModPlayer::trigger(Channel& c, int period) {
    c.period = c.outPeriod = period;
    c.pos = c.offset;
    c.offset = 0;
    c.playing = c.smp && c.smp->length > 0;
    if (c.vibWave < 4) c.vibPos = 0;
    if (c.tremWave < 4) c.tremPos = 0;
}

int ModPlayer::vibratoValue(int wave, int pos) {
    pos &= 63;
    switch (wave & 3) {
    case 1: return pos < 32 ? 255 - pos * 8 : -(255 - (pos - 32) * 8);   // ramp down
    case 2: return pos < 32 ? 255 : -255;                                // square
    default: return pos < 32 ? kVibratoSine[pos] : -kVibratoSine[pos - 32];
    }
}

void ModPlayer::processRow() {
    const uint8_t* rowData = &data_[patternBase_ + ((size_t)orders_[pos_] * 64 + row_) * channels_ * 4];
    for (int i = 0; i < channels_; i++) {
        Channel& c = ch_[i];
        const uint8_t* n = rowData + i * 4;
        const int sample = (n[0] & 0xF0) | (n[2] >> 4);
        const int period = (n[0] & 0x0F) << 8 | n[1];
        c.effect = n[2] & 0x0F;
        c.param = n[3];
        const int x = c.param >> 4, y = c.param & 15;

        if (sample >= 1 && sample <= 31) {
            c.sample = sample;
            c.smp = &samples_[sample];
            c.volume = c.smp->volume;
            c.finetune = c.smp->finetune;
        }
        if (c.effect == 0x9 && period) {
            if (c.param) c.offset = c.param << 8;
            if (c.smp && (uint32_t)c.offset >= c.smp->length)
                c.offset = c.smp->loopLength ? (int)c.smp->loopStart : (int)c.smp->length;
        }
        if (c.effect == 0xE && x == 0x5) c.finetune = y > 7 ? y - 16 : y;
        if (period) {
            c.note = period;
            if (c.effect == 0x3 || c.effect == 0x5)
                c.target = period;
            else if (!(c.effect == 0xE && x == 0xD && y))
                trigger(c, period);
        }
        c.outPeriod = c.period;
        c.outVolume = c.volume;

        switch (c.effect) {
        case 0x3:
            if (c.param) c.portaSpeed = c.param;
            break;
        case 0x4:
            if (x) c.vibSpeed = x;
            if (y) c.vibDepth = y;
            break;
        case 0x7:
            if (x) c.tremSpeed = x;
            if (y) c.tremDepth = y;
            break;
        case 0xB:
            nextPos_ = c.param;
            if (nextRow_ < 0) nextRow_ = 0;
            break;
        case 0xC:
            c.volume = c.outVolume = std::min(c.param, 64);
            break;
        case 0xD:
            if (nextPos_ < 0) nextPos_ = pos_ + 1;
            nextRow_ = std::min(x * 10 + y, 63);
            break;
        case 0xE:
            switch (x) {
            case 0x1: c.period = c.outPeriod = std::max(kMinPeriod, c.period - y); break;
            case 0x2: c.period = c.outPeriod = std::min(kMaxPeriod, c.period + y); break;
            case 0x4: c.vibWave = y; break;
            case 0x6:
                if (y == 0)
                    c.loopRow = row_;
                else if (c.loopCount == 0 || --c.loopCount > 0) {
                    if (c.loopCount == 0) c.loopCount = y;
                    nextPos_ = pos_;
                    nextRow_ = c.loopRow;
                }
                break;
            case 0x7: c.tremWave = y; break;
            case 0xA: c.volume = c.outVolume = std::min(64, c.volume + y); break;
            case 0xB: c.volume = c.outVolume = std::max(0, c.volume - y); break;
            case 0xE: if (!patternDelay_) patternDelay_ = y; break;
            }
            break;
        case 0xF:
            if (c.param == 0) break;
            if (c.param < 0x20)
                speed_ = c.param;
            else
                tempo_ = c.param;
            break;
        }
    }
}

void ModPlayer::processTick() {
    for (int i = 0; i < channels_; i++) {
        Channel& c = ch_[i];
        const int x = c.param >> 4, y = c.param & 15;
        auto volumeSlide = [&] {
            c.volume = x ? std::min(64, c.volume + x) : std::max(0, c.volume - y);
            c.outVolume = c.volume;
        };
        auto tonePorta = [&] {
            if (!c.target) return;
            if (c.period < c.target)
                c.period = std::min(c.target, c.period + c.portaSpeed);
            else
                c.period = std::max(c.target, c.period - c.portaSpeed);
            c.outPeriod = c.period;
        };
        auto vibrato = [&] {
            c.outPeriod = c.period + (vibratoValue(c.vibWave, c.vibPos) * c.vibDepth >> 7);
            c.vibPos = (c.vibPos + c.vibSpeed) & 63;
        };
        switch (c.effect) {
        case 0x0:
            if (c.param) {
                const int k = tick_ % 3;
                c.outPeriod = k == 0 ? c.period : semitonesUp(c.period, k == 1 ? x : y);
            }
            break;
        case 0x1: c.period = c.outPeriod = std::max(kMinPeriod, c.period - c.param); break;
        case 0x2: c.period = c.outPeriod = std::min(kMaxPeriod, c.period + c.param); break;
        case 0x3: tonePorta(); break;
        case 0x4: vibrato(); break;
        case 0x5: tonePorta(); volumeSlide(); break;
        case 0x6: vibrato(); volumeSlide(); break;
        case 0x7:
            c.outVolume = std::clamp(c.volume + (vibratoValue(c.tremWave, c.tremPos) * c.tremDepth >> 6), 0, 64);
            c.tremPos = (c.tremPos + c.tremSpeed) & 63;
            break;
        case 0xA: volumeSlide(); break;
        case 0xE:
            if (x == 0x9 && y && tick_ % y == 0) trigger(c, c.period);
            if (x == 0xC && tick_ == y) c.volume = c.outVolume = 0;
            if (x == 0xD && tick_ == y && c.note) trigger(c, c.note);
            break;
        }
    }
}

void ModPlayer::advanceRow() {
    rowsPlayed_++;
    if (nextPos_ >= 0 || nextRow_ >= 0) {
        if (nextPos_ >= 0) pos_ = nextPos_;
        row_ = std::max(nextRow_, 0);
        nextPos_ = nextRow_ = -1;
    } else if (++row_ >= 64) {
        row_ = 0;
        pos_++;
    }
    if (pos_ >= songLength_) pos_ = restart_;
}

void ModPlayer::render(float* out, int frames) {
    while (frames > 0) {
        if (tickLeft_ < 1.0) {
            if (tick_ == 0)
                processRow();
            else
                processTick();
            if (++tick_ >= speed_ * (1 + patternDelay_)) {
                tick_ = 0;
                patternDelay_ = 0;
                advanceRow();
            }
            tickLeft_ += kRate * 2.5 / tempo_;
        }
        const int n = std::min(frames, (int)tickLeft_);
        mix(out, n);
        out += 2 * n;
        frames -= n;
        tickLeft_ -= n;
    }
}

void ModPlayer::mix(float* out, int frames) {
    std::fill(out, out + 2 * frames, 0.0f);
    const float master = kGain * (float)std::clamp(volume_, 0, 64) / 64.0f;
    for (int i = 0; i < channels_; i++) {
        Channel& c = ch_[i];
        if (!c.playing || !c.smp || c.outPeriod <= 0) continue;
        const Sample& s = *c.smp;
        const double period = c.outPeriod * std::pow(2.0, -c.finetune / 96.0);
        const double step = kPaulaClock / period / kRate;
        const float vol = master * (float)c.outVolume / (64.0f * 128.0f);
        const float vl = vol * (1.0f - c.pan), vr = vol * c.pan;
        const uint32_t end = s.loopLength ? s.loopStart + s.loopLength : s.length;
        const int8_t* pcm = &pcm_[s.start];
        for (int k = 0; k < frames; k++) {
            if (c.pos >= end) {
                if (!s.loopLength) {
                    c.playing = false;
                    break;
                }
                c.pos = s.loopStart + std::fmod(c.pos - s.loopStart, (double)s.loopLength);
            }
            const uint32_t a = (uint32_t)c.pos;
            uint32_t b = a + 1;
            if (b >= end) b = s.loopLength ? s.loopStart : a;
            const float frac = (float)(c.pos - a);
            const float v = pcm[a] + (pcm[b] - pcm[a]) * frac;
            out[2 * k] += v * vl;
            out[2 * k + 1] += v * vr;
            c.pos += step;
        }
    }
    for (int k = 0; k < 2 * frames; k++) out[k] = std::clamp(out[k], -1.0f, 1.0f);
}

}  // namespace hex
