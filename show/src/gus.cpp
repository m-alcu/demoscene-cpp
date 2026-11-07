#include "gus.h"

#include <algorithm>
#include <cmath>

namespace show {

namespace {
constexpr int kRampFract = 10;
constexpr uint16_t kBase = 0x220;

bool highByteReg(int r) {               // registers whose 3x5 byte is their high byte
    switch (r) {
    case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x09:
    case 0x0A: case 0x0B: case 0x0C: case 0x43:
        return true;
    default:
        return false;
    }
}
}  // namespace

Gus::Gus() : dram_(1 << 20, 0), regs_(33 * 128, 0) {
    double out = 1.0;
    for (int i = 4095; i >= 0; i--) {
        volTable_[i] = (float)out;
        out /= 1.002709201;
    }
    volTable_[0] = 0.0f;
}

void Gus::out8(uint16_t port, uint8_t v, double t) {
    const int o = port - kBase;
    switch (o) {
    case 0x103: regSel_ = v; break;
    case 0x102: voiceSel_ = v & 31; break;
    case 0x104: writeReg(v, 8, t); break;
    case 0x105: writeReg(v, 9, t); break;
    case 0x107: dram_[((reg(-1, 0x43) & 0xFFFF) | (reg(-1, 0x44) & 0x0F) << 16) & 0xFFFFF] = v; break;
    default:
        if (log) log(t, -1, 0x1000 + o, v);
        if (o == 0x008) {
            adlibIdx_ = v;
        } else if (o == 0x009 && adlibIdx_ == 4) {
            // timer control: bit 0 starts timer 1, which counts from then on
            if ((v & 1) && !t1run_) t0_ = t;
            t1run_ = v & 1;
            if (v & 0x80) irqStatus_ &= ~0x0C;
            sched(t);
        }
        break;
    }
}

void Gus::out16(uint16_t port, uint16_t v, double t) {
    if (port == kBase + 0x104) {
        writeReg(v, 16, t);
        return;
    }
    out8(port, (uint8_t)v, t);
    out8((uint16_t)(port + 1), (uint8_t)(v >> 8), t);
}

uint8_t Gus::in8(uint16_t port, double t) {
    const int o = port - kBase;
    switch (o) {
    case 0x103: return regSel_;
    case 0x102: return voiceSel_;
    case 0x104:
    case 0x105: {
        const int r = regSel_;
        uint32_t val = reg((r & 0x7F) < 0x40 ? voiceSel_ : -1, r & 0x7F);
        if (r == 0x89) val = (uint32_t)volume(voiceSel_, t) << 4;
        if (r == 0x8F) val = 0xE0;                  // no voice interrupts
        if (r == 0x49) val = 0;
        if (o == 0x105) {
            switch (r & 0x7F) {         // an 8-bit register reads back through 3x5
            case 0x00: case 0x06: case 0x07: case 0x08: case 0x0D: case 0x0E: case 0x0F: case 0x41:
            case 0x42: case 0x45: case 0x46: case 0x47: case 0x48: case 0x49: case 0x4C:
                return (uint8_t)val;
            default: break;
            }
        }
        return o == 0x104 ? (uint8_t)val : (uint8_t)(val >> 8);
    }
    case 0x107: return dram_[((reg(-1, 0x43) & 0xFFFF) | (reg(-1, 0x44) & 0x0F) << 16) & 0xFFFFF];
    case 0x006: return irqStatus_;
    default: return 0;
    }
}

void Gus::writeReg(uint32_t v, int kind, double t) {
    const int r = regSel_;
    const int voice = r < 0x40 ? voiceSel_ : -1;
    uint32_t& slot = regs_[(voice < 0 ? 32 : voice) * 128 + (r & 0x7F)];
    const uint32_t old = slot;
    uint32_t nv;
    if (kind == 16) nv = v;
    else if (kind == 8) nv = (old & 0xFF00) | v;
    else nv = (highByteReg(r) || r == 0x44) ? ((old & 0x00FF) | v << 8) : v;
    switch (r) {                        // registers a byte write sets whole
    case 0x00: case 0x06: case 0x07: case 0x08: case 0x0D: case 0x0E: case 0x41: case 0x42:
    case 0x44: case 0x45: case 0x46: case 0x47: case 0x48: case 0x49: case 0x4C: case 0x0F:
        if (kind == 9) nv = v;
        break;
    default: break;
    }
    if (r < 0x20 && (r == 0x06 || r == 0x07 || r == 0x08 || r == 0x09 || r == 0x0D)) rampWrite(voiceSel_, r, nv, t);
    slot = nv;
    if (r == 0x0E) voices_ = std::max(14, (int)(nv & 31) + 1);
    if (r == 0x45) {
        if (!(nv & 0x04)) irqStatus_ &= ~0x04;
        if (!(nv & 0x08)) irqStatus_ &= ~0x08;
        sched(t);
    } else if (r == 0x46 || r == 0x47) {
        sched(t);
    }
    if (r == 0x43 || r == 0x44) return;
    if (log) log(t, r < 0x20 ? voiceSel_ : -1, r, (r < 0x20 && kind == 8) ? v : nv);
    if (r >= 0x20 && r != 0x0E) return;
    const uint32_t byte = kind == 9 ? v : kind == 16 ? (v >> 8) & 0xFF : v & 0xFF;
    apply(voice, r, (r == 0x01 || r == 0x02 || r == 0x03 || r == 0x04 || r == 0x05 || r == 0x09 ||
                     r == 0x0A || r == 0x0B) ? nv : byte);
}

// The harness's ramp formula (emu.py gus_volume).
int Gus::volume(int voice, double t) {
    const Ramp& r = ramp_[voice];
    if (!r.run) return r.vol;
    const int rate = reg(voice, 0x06) & 0xFF;
    const int lo = (reg(voice, 0x07) & 0xFF) << 4, hi = (reg(voice, 0x08) & 0xFF) << 4;
    const double per = voices_ / 617400.0 * std::pow(8.0, rate >> 6);
    const long steps = (long)((t - r.t0) / per);
    const long inc = (long)(rate & 63) * steps;
    if (r.down) return r.vol > lo ? (int)std::max<long>(lo, r.vol - inc) : r.vol;
    return r.vol < hi ? (int)std::min<long>(hi, r.vol + inc) : r.vol;
}

void Gus::rampWrite(int voice, int r, uint32_t v, double t) {
    const int cur = volume(voice, t);
    Ramp& p = ramp_[voice];
    p.vol = cur, p.t0 = t;
    if (r == 0x09) {
        p.vol = (int)((v & 0xFFFF) >> 4);
    } else if (r == 0x0D) {
        p.run = !(v & 3);
        p.down = v & 0x40;
    }
}

// Timer 1 counts 80 us units up to 256: free running from its start, so its
// interrupts stay on the grid t0 + k * period.
void Gus::sched(double t) {
    const uint32_t ctl = reg(-1, 0x45);
    per_ = (256 - (reg(-1, 0x46) & 0xFF)) * 80e-6;
    const bool active = t1run_ && (ctl & 0x04);
    if (!active) {
        tnext_ = -1;
    } else if (tnext_ < 0) {
        tnext_ = t0_ + per_ * ((long)((t - t0_) / per_ + 1e-6) + 1);   // as the harness: slack on the edge
    }
}

void Gus::irqDue(double t) {
    while (tnext_ <= t) tnext_ += per_;
    irqStatus_ |= 0x04;
}

void Gus::apply(int voice, int r, uint32_t v) {
    if (r == 0x0E) return;
    if (voice < 0 || r >= 0x20) return;
    Voice& c = v_[voice];
    auto addr = [&](int hi, int lo) { return ((reg(voice, hi) & 0x1FFF) << 16) | (reg(voice, lo) & 0xFFFF); };
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

void Gus::render(float* out, int frames) {
    for (int k = 0; k < voices_ && k < 32; k++) {
        Voice& c = v_[k];
        const bool still = c.ctrl & 3, rampStill = c.rampCtrl & 3;
        if (still && rampStill) continue;
        const float l = std::cos(c.pan / 15.0f * 1.5707963f), r = std::sin(c.pan / 15.0f * 1.5707963f);
        int32_t vol = (int32_t)c.vol << kRampFract | volFrac_[k];
        const int scale = c.rampRate & 63;
        const int every = 1 << (3 * (c.rampRate >> 6));
        for (int i = 0; i < frames; i++) {
            if (!(c.ctrl & 3)) {
                const uint32_t a = c.pos >> 9;
                const int s0 = (int8_t)dram_[a & 0xFFFFF], s1 = (int8_t)dram_[(a + 1) & 0xFFFFF];
                const float s = (s0 + (s1 - s0) * (float)(c.pos & 0x1FF) / 512.0f) / 128.0f;
                const float g = volTable_[(vol >> kRampFract) & 4095] * s;
                out[2 * i] += g * l;
                out[2 * i + 1] += g * r;
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
            if (!(c.rampCtrl & 3) && ++c.rampCount >= every) {
                c.rampCount = 0;
                const int32_t step = scale << kRampFract;
                const int32_t lo = (int32_t)c.rampStart << kRampFract, hi = (int32_t)c.rampEnd << kRampFract;
                if (c.rampCtrl & 0x40) {
                    vol -= step;
                    if (vol <= lo) vol = lo, c.rampCtrl |= 1;
                } else {
                    vol += step;
                    if (vol >= hi) vol = hi, c.rampCtrl |= 1;
                }
                vol = std::clamp(vol, 0, (4095 << kRampFract) | ((1 << kRampFract) - 1));
            }
        }
        c.vol = (uint16_t)(vol >> kRampFract);
        volFrac_[k] = vol & ((1 << kRampFract) - 1);
    }
}

}  // namespace show

namespace show {

void Gus::loadReg(int voice, int r, uint32_t v) {
    reg(voice, r) = v;
    if (r == 0x0E) voices_ = std::max(14, (int)(v & 31) + 1);
    apply(voice, r, v);
}

}  // namespace show
