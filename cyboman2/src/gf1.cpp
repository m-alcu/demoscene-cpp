#include "gf1.h"

#include <algorithm>
#include <cmath>

namespace cyb {

namespace {
constexpr int kRampFract = 10;
}

Gf1::Gf1() : dram_(1 << 20, 0), regs_(33 * 128, 0) {
    // 0.0235 dB a step, 4096 steps; the top one is full scale.
    double out = 1.0;
    for (int i = 4095; i >= 0; i--) {
        volTable_[i] = (float)out;
        out /= 1.002709201;
    }
    volTable_[0] = 0.0f;
}

void Gf1::out8(uint16_t port, uint8_t v) {
    const int o = port - 0x220;
    switch (o) {
    case 0x103: regSel_ = v; break;
    case 0x102: voiceSel_ = v & 31; break;
    case 0x104: writeReg(v, 8); break;
    case 0x105: writeReg(v, 9); break;
    case 0x107: {
        const uint32_t a = (reg(-1, 0x43) & 0xFFFF) | (reg(-1, 0x44) & 0x0F) << 16;
        dram_[a] = v;
        break;
    }
    default:
        if (log) log(-1, 0x1000 + o, v);
        break;
    }
}

void Gf1::out16(uint16_t port, uint16_t v) {
    if (port == 0x324) {
        writeReg(v, 16);
        return;
    }
    out8(port, (uint8_t)v);
    out8((uint16_t)(port + 1), (uint8_t)(v >> 8));
}

// As the harness's register file: an 8-bit register written through 3x5
// holds the byte; a 16-bit one keeps its low byte.
void Gf1::writeReg(uint32_t v, int kind) {
    const int r = regSel_;
    const int voice = r < 0x40 ? voiceSel_ : -1;
    uint32_t& slot = reg(voice, r & 0x7F);
    const uint32_t old = slot;
    uint32_t nv;
    if (kind == 16) {
        nv = v;
    } else if (kind == 8) {
        nv = (old & 0xFF00) | v;
    } else {
        switch (r) {
        case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x09:
        case 0x0A: case 0x0B: case 0x0C: case 0x43:
            nv = (old & 0x00FF) | v << 8;
            break;
        default:
            nv = v;
            break;
        }
    }
    slot = nv;
    if (r == 0x43 || r == 0x44) return;
    if (log) log(r < 0x20 ? voiceSel_ : -1, r, (r < 0x20 && kind == 8) ? v : nv);
    // the byte an 8-bit register gets: 3x5's (the high one of a word)
    const uint32_t byte = kind == 9 ? v : kind == 16 ? (v >> 8) & 0xFF : v & 0xFF;
    apply(voice, r, (r == 0x01 || r == 0x02 || r == 0x03 || r == 0x04 || r == 0x05 || r == 0x09 ||
                     r == 0x0A || r == 0x0B) ? nv : byte);
}

void Gf1::apply(int voice, int r, uint32_t v) {
    if (r == 0x0E) {
        voices_ = std::max(14, (int)(v & 31) + 1);
        return;
    }
    if (voice < 0 || r >= 0x20) return;
    Voice& c = v_[voice];
    auto addr = [&](int hi, int lo) {
        return ((reg(voice, hi) & 0x1FFF) << 16) | (reg(voice, lo) & 0xFFFF);
    };
    switch (r) {
    case 0x00: c.ctrl = (uint8_t)v; break;
    case 0x01: c.inc = (v & 0xFFFF) >> 1; break;
    case 0x02: case 0x03: c.start = addr(2, 3); break;
    case 0x04: case 0x05: c.end = addr(4, 5); break;
    case 0x06: c.rampRate = (uint8_t)v; break;
    case 0x07: c.rampStart = (uint16_t)((v & 0xFF) << 4); break;
    case 0x08: c.rampEnd = (uint16_t)((v & 0xFF) << 4); break;
    case 0x09: c.vol = (uint16_t)((v & 0xFFFF) >> 4); c.rampCount = 0; volFrac_[voice] = 0; break;
    case 0x0A: case 0x0B: c.pos = addr(0x0A, 0x0B); break;
    case 0x0C: c.pan = (uint8_t)(v & 15); break;
    case 0x0D: c.rampCtrl = (uint8_t)v; break;
    default: break;
    }
}

void Gf1::render(float* out, int frames) {
    for (int k = 0; k < voices_ && k < 32; k++) {
        Voice& c = v_[k];
        if (c.ctrl & c.rampCtrl & 3) continue;
        const float l = std::cos(c.pan / 15.0f * 1.5707963f), r = std::sin(c.pan / 15.0f * 1.5707963f);
        // the volume in 1/1024 steps while it ramps
        int32_t vol = (int32_t)c.vol << kRampFract | volFrac_[k];
        const int scale = c.rampRate & 63;
        const int every = 1 << (3 * (c.rampRate >> 6));
        for (int i = 0; i < frames; i++) {
            const uint32_t a = c.pos >> 9;
            const int s0 = (int8_t)dram_[a & 0xFFFFF], s1 = (int8_t)dram_[(a + 1) & 0xFFFFF];
            const float s = (s0 + (s1 - s0) * (float)(c.pos & 0x1FF) / 512.0f) / 128.0f;
            const float g = volTable_[(vol >> kRampFract) & 4095] * s;
            out[2 * i] += g * l;
            out[2 * i + 1] += g * r;
            // the wave
            if (!(c.ctrl & 3)) {
                int32_t left;
                if (c.ctrl & 0x40) {
                    c.pos -= c.inc;
                    left = (int32_t)(c.start - c.pos);
                } else {
                    c.pos += c.inc;
                    left = (int32_t)(c.pos - c.end);
                }
                if (left >= 0) {
                    if (c.ctrl & 0x08) {
                        if (c.ctrl & 0x10) c.ctrl ^= 0x40;
                        c.pos = (c.ctrl & 0x40) ? c.end - left : c.start + left;
                    } else {
                        c.ctrl |= 1;
                        c.pos = (c.ctrl & 0x40) ? c.start : c.end;
                    }
                }
            }
            // the volume ramp
            if (!(c.rampCtrl & 3) && ++c.rampCount >= every) {
                c.rampCount = 0;
                const int32_t step = scale << kRampFract;
                const int32_t lo = (int32_t)c.rampStart << kRampFract, hi = (int32_t)c.rampEnd << kRampFract;
                int32_t left;
                if (c.rampCtrl & 0x40) {
                    vol -= step;
                    left = lo - vol;
                } else {
                    vol += step;
                    left = vol - hi;
                }
                if (left >= 0) {
                    if (c.rampCtrl & 0x08) {
                        if (c.rampCtrl & 0x10) c.rampCtrl ^= 0x40;
                        vol = (c.rampCtrl & 0x40) ? hi - left : lo + left;
                    } else {
                        c.rampCtrl |= 1;
                        vol = (c.rampCtrl & 0x40) ? lo : hi;
                    }
                }
                vol = std::clamp(vol, 0, (4095 << kRampFract) | ((1 << kRampFract) - 1));
            }
        }
        c.vol = (uint16_t)(vol >> kRampFract);
        volFrac_[k] = vol & ((1 << kRampFract) - 1);
    }
}

}  // namespace cyb
