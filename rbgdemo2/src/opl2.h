// A Yamaha YM3812 (OPL2), enough for the melodic channels a music driver uses:
// 9 two-operator channels, FM and additive connection, feedback, the four
// waveforms, ADSR with key scaling, key scale level, tremolo and vibrato.
// Rhythm mode and the timers are not emulated; the demo's driver uses neither.
//
// It runs at the chip's own rate, 3.579545 MHz / 72 = 49716 Hz. Operator
// output follows the real chip: a log-sine lookup plus the attenuation, then
// an exponential table, giving a 13-bit signed value.
#pragma once

#include <cstdint>

namespace rbg {

class Opl2 {
public:
    static constexpr double kRate = 3579545.0 / 72.0;

    Opl2() { reset(); }
    void reset();
    void write(uint8_t reg, uint8_t val);
    // n samples at kRate, the sum of the 9 channels, clipped to 16 bits.
    void generate(int16_t* out, int n);

private:
    enum class Env : uint8_t { Off, Attack, Decay, Sustain, Release };

    struct Op {
        // registers
        bool am = false, vib = false, egt = false, ksr = false;
        uint8_t mult = 0, ksl = 0, tl = 0, ar = 0, dr = 0, sl = 0, rr = 0, ws = 0;
        // state
        uint32_t phase = 0;   // 19 bits, the top 10 index the waveform
        int env = 511;        // attenuation, 0.1875 dB steps
        Env state = Env::Off;
        bool key = false;
        int out[2] = {0, 0};  // last two outputs, for feedback
    };
    struct Channel {
        uint16_t fnum = 0;
        uint8_t block = 0;
        bool key = false;
        uint8_t fb = 0;
        bool additive = false;
    };

    void keyOn(Op& op);
    void keyOff(Op& op);
    int rateFor(const Op& op, const Channel& ch, int rate) const;
    void stepEnvelope(Op& op, const Channel& ch);
    int opOutput(Op& op, const Channel& ch, int phaseMod);

    Op ops_[18];
    Channel ch_[9];
    bool waveSelect_ = false;
    bool deepAm_ = false, deepVib_ = false;
    uint32_t egCounter_ = 0;
    uint32_t sampleCounter_ = 0;
    int tremoloPos_ = 0;
    int vibratoPos_ = 0;
};

}  // namespace rbg
