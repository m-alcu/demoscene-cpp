#include "opl2.h"

#include <algorithm>
#include <cmath>

namespace rbg {
namespace {

// The chip's two ROMs: the first quarter of a log2-sine and a 2^x mantissa,
// both in 1/256 steps. Attenuation is added in the log domain.
struct Roms {
    uint16_t logSin[256];
    uint16_t exp[256];
    Roms() {
        for (int i = 0; i < 256; i++) {
            logSin[i] = (uint16_t)std::lround(-std::log2(std::sin((i + 0.5) * M_PI / 512.0)) * 256.0);
            exp[i] = (uint16_t)std::lround((std::pow(2.0, i / 256.0) - 1.0) * 1024.0);
        }
    }
};
const Roms kRom;

int pow2Out(int x) {
    if (x >= 0x1A00) return 0;
    return ((kRom.exp[(x & 0xFF) ^ 0xFF] | 0x400) << 1) >> (x >> 8);
}

// Frequency multiplier, doubled (0 means one half).
constexpr uint8_t kMult2[16] = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 24, 30, 30};
// Key scale level for the top four F-number bits at block 7, in 0.75 dB.
constexpr uint8_t kKsl[16] = {0, 24, 32, 37, 40, 43, 45, 47, 48, 50, 51, 52, 53, 54, 55, 56};
// Envelope increments: eight steps for each rate fraction, as the counter
// bits select them; row 13 makes the fastest attacks instant, row 14 is still.
constexpr uint8_t kEgInc[15][8] = {
    {0, 1, 0, 1, 0, 1, 0, 1}, {0, 1, 0, 1, 1, 1, 0, 1}, {0, 1, 1, 1, 0, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 2, 1, 1, 1, 2},
    {1, 2, 1, 2, 1, 2, 1, 2}, {1, 2, 2, 2, 1, 2, 2, 2}, {2, 2, 2, 2, 2, 2, 2, 2},
    {2, 2, 2, 4, 2, 2, 2, 4}, {2, 4, 2, 4, 2, 4, 2, 4}, {2, 4, 4, 4, 2, 4, 4, 4},
    {4, 4, 4, 4, 4, 4, 4, 4}, {8, 8, 8, 8, 8, 8, 8, 8}, {0, 0, 0, 0, 0, 0, 0, 0},
};
// Register offset (low 5 bits) -> operator slot 0..17, or -1.
constexpr int8_t kSlot[32] = {0,  1,  2,  3,  4,  5,  -1, -1, 6,  7,  8,  9,  10, 11, -1, -1,
                              12, 13, 14, 15, 16, 17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

constexpr int kMaxAtt = 511;

int slotChannel(int s) { return (s / 6) * 3 + s % 3; }

}  // namespace

void Opl2::reset() {
    for (Op& o : ops_) o = Op{};
    for (Channel& c : ch_) c = Channel{};
    waveSelect_ = deepAm_ = deepVib_ = false;
    egCounter_ = sampleCounter_ = 0;
    tremoloPos_ = vibratoPos_ = 0;
}

void Opl2::keyOn(Op& op) {
    if (op.key) return;
    op.key = true;
    op.phase = 0;
    op.state = Env::Attack;
}

void Opl2::keyOff(Op& op) {
    if (!op.key) return;
    op.key = false;
    if (op.state != Env::Off) op.state = Env::Release;
}

void Opl2::write(uint8_t reg, uint8_t val) {
    if (reg == 0x01) {
        waveSelect_ = val & 0x20;
        return;
    }
    if (reg == 0xBD) {
        deepAm_ = val & 0x80;
        deepVib_ = val & 0x40;
        return;
    }
    const int hi = reg & 0xF0;
    if ((hi == 0xA0 || hi == 0xB0 || hi == 0xC0) && (reg & 0x0F) < 9) {
        Channel& c = ch_[reg & 0x0F];
        if (hi == 0xA0) {
            c.fnum = (uint16_t)((c.fnum & 0x300) | val);
        } else if (hi == 0xB0) {
            c.fnum = (uint16_t)((c.fnum & 0xFF) | ((val & 3) << 8));
            c.block = (val >> 2) & 7;
            const bool key = val & 0x20;
            const int ci = reg & 0x0F;
            Op& mod = ops_[(ci / 3) * 6 + ci % 3];
            Op& car = ops_[(ci / 3) * 6 + ci % 3 + 3];
            if (key && !c.key) {
                keyOn(mod);
                keyOn(car);
            } else if (!key && c.key) {
                keyOff(mod);
                keyOff(car);
            }
            c.key = key;
        } else {
            c.fb = (val >> 1) & 7;
            c.additive = val & 1;
        }
        return;
    }
    const int s = kSlot[reg & 0x1F];
    if (s < 0) return;
    Op& o = ops_[s];
    switch (reg & 0xE0) {
    case 0x20:
        o.am = val & 0x80;
        o.vib = val & 0x40;
        o.egt = val & 0x20;
        o.ksr = val & 0x10;
        o.mult = val & 0x0F;
        break;
    case 0x40:
        o.ksl = val >> 6;
        o.tl = val & 0x3F;
        break;
    case 0x60:
        o.ar = val >> 4;
        o.dr = val & 0x0F;
        break;
    case 0x80:
        o.sl = val >> 4;
        o.rr = val & 0x0F;
        break;
    case 0xE0:
        o.ws = val & 3;
        break;
    default:
        break;
    }
}

// Rate register (0..15) to effective rate 0..63, with key scale rate.
int Opl2::rateFor(const Op& op, const Channel& ch, int rate) const {
    if (rate == 0) return 0;
    const int kcode = (ch.block << 1) | ((ch.fnum >> 9) & 1);
    return std::min(63, rate * 4 + (op.ksr ? kcode : kcode >> 2));
}

void Opl2::stepEnvelope(Op& op, const Channel& ch) {
    int rate;
    switch (op.state) {
    case Env::Attack: rate = rateFor(op, ch, op.ar); break;
    case Env::Decay: rate = rateFor(op, ch, op.dr); break;
    case Env::Sustain: rate = op.egt ? 0 : rateFor(op, ch, op.rr); break;
    case Env::Release: rate = rateFor(op, ch, op.rr); break;
    default: return;
    }
    if (rate == 0) return;
    const int group = rate >> 2;
    int shift, row;
    if (group <= 12) {
        shift = 12 - group;
        row = rate & 3;
    } else {
        shift = 0;
        row = group == 13 ? 4 + (rate & 3) : group == 14 ? 8 + (rate & 3) : 12;
    }
    if (op.state == Env::Attack && rate >= 62) row = 13;
    if (egCounter_ & ((1u << shift) - 1)) return;
    const int inc = kEgInc[row][(egCounter_ >> shift) & 7];
    switch (op.state) {
    case Env::Attack:
        op.env += (~op.env * inc) >> 3;
        if (op.env <= 0) {
            op.env = 0;
            op.state = Env::Decay;
        }
        break;
    case Env::Decay: {
        op.env += inc;
        const int sl = (op.sl == 15 ? 31 : op.sl) * 16;
        if (op.env >= sl) op.state = Env::Sustain;
        break;
    }
    case Env::Sustain:
    case Env::Release:
        op.env += inc;
        if (op.env >= kMaxAtt) {
            op.env = kMaxAtt;
            if (op.state == Env::Release) op.state = Env::Off;
        }
        break;
    default:
        break;
    }
}

int Opl2::opOutput(Op& op, const Channel& ch, int phaseMod) {
    const int idx = (int)((op.phase >> 9) + phaseMod) & 1023;

    uint32_t f = ch.fnum;
    if (op.vib) {
        int range = (f >> 7) & 7;
        if (!(vibratoPos_ & 3))
            range = 0;
        else if (vibratoPos_ & 1)
            range >>= 1;
        if (!deepVib_) range >>= 1;
        f = (vibratoPos_ & 4) ? f - range : f + range;
    }
    op.phase = (op.phase + ((((f << ch.block) >> 1) * kMult2[op.mult]) >> 1)) & 0x7FFFF;

    int att = op.env + op.tl * 4;
    if (op.ksl) {
        const int k = std::max(0, kKsl[ch.fnum >> 6] - 8 * (7 - ch.block));
        att += op.ksl == 1 ? k * 2 : op.ksl == 2 ? k : k * 4;
    }
    if (op.am) {
        const int t = tremoloPos_ >= 105 ? 210 - tremoloPos_ : tremoloPos_;
        att += t >> (deepAm_ ? 2 : 4);
    }
    if (att >= kMaxAtt) return 0;

    const int ws = waveSelect_ ? op.ws : 0;
    int quarter = idx & 0xFF;
    bool negative = false;
    switch (ws) {
    case 0:
        if (idx & 0x100) quarter ^= 0xFF;
        negative = idx & 0x200;
        break;
    case 1:
        if (idx & 0x200) return 0;
        if (idx & 0x100) quarter ^= 0xFF;
        break;
    case 2:
        if (idx & 0x100) quarter ^= 0xFF;
        break;
    default:
        if (idx & 0x100) return 0;
        break;
    }
    const int out = pow2Out(kRom.logSin[quarter] + (att << 3));
    return negative ? -out : out;
}

void Opl2::generate(int16_t* out, int n) {
    for (int i = 0; i < n; i++) {
        if ((sampleCounter_ & 0x3F) == 0x3F) tremoloPos_ = (tremoloPos_ + 1) % 210;
        if ((sampleCounter_ & 0x3FF) == 0x3FF) vibratoPos_ = (vibratoPos_ + 1) & 7;
        egCounter_++;
        for (int s = 0; s < 18; s++) stepEnvelope(ops_[s], ch_[slotChannel(s)]);

        int sum = 0;
        for (int c = 0; c < 9; c++) {
            Channel& ch = ch_[c];
            Op& mod = ops_[(c / 3) * 6 + c % 3];
            Op& car = ops_[(c / 3) * 6 + c % 3 + 3];
            const int fb = ch.fb ? (mod.out[0] + mod.out[1]) >> (9 - ch.fb) : 0;
            const int m = opOutput(mod, ch, fb);
            mod.out[1] = mod.out[0];
            mod.out[0] = m;
            const int co = opOutput(car, ch, ch.additive ? 0 : m);
            sum += ch.additive ? m + co : co;
        }
        out[i] = (int16_t)std::clamp(sum, -32768, 32767);
        sampleCounter_++;
    }
}

}  // namespace rbg
