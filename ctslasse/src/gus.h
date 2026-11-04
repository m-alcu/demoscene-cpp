// A Gravis UltraSound at the port level, as the music player sees it:
// (from the DRIFT port)
// the register file (kept the way the analysis harness keeps it, so that
// the player's writes can be compared one by one), the reads it makes
// (IRQ status, the volume a ramp has reached), timer 1, the DRAM, and the
// GF1's synthesis for the sound itself.
//
// Time is given by the caller (seconds since the program started): the
// timer's interrupts and the volume ramps the player reads back depend on
// it. The ramps the player reads follow a closed formula (gusVolume), the
// same as the harness's; the synthesis runs its own sample-by-sample ramps.
#pragma once

#include <cstdint>
#include <functional>
#include <map>
#include <vector>

namespace lasse {

class Gus {
public:
    Gus();

    void out8(uint16_t port, uint8_t v, double t);
    void out16(uint16_t port, uint16_t v, double t);
    uint8_t in8(uint16_t port, double t);

    // Timer 1: the time of its next interrupt (1e9: none), and the
    // interrupt itself (sets the status bit, moves the timer on).
    double nextIrq() const { return tnext_ < 0 ? 1e9 : tnext_; }
    void irqDue(double t);

    double rate() const { return 617400.0 / voices_; }
    // The register selected (3x3).
    uint8_t selected() const { return regSel_; }
    // The end of the selected voice's volume ramp as the register model has
    // it (the harness's): -1 if it has stopped by T.
    double rampEnd(double t) const;
    // Stereo frames at rate(), interleaved, added to out.
    void render(float* out, int frames);

    // Every register write: time, voice (-1 for the global registers and
    // other ports), register (1000h + port offset for the other ports),
    // value. As the harness's log.
    std::function<void(double, int, int, uint32_t)> log;

private:
    struct Voice {
        uint8_t ctrl = 3;
        uint32_t inc = 0;
        uint32_t start = 0, end = 0, pos = 0;
        uint8_t rampRate = 0;
        uint16_t rampStart = 0, rampEnd = 0;
        uint16_t vol = 0;
        uint8_t rampCtrl = 3;
        int rampCount = 0;
        uint8_t pan = 7;
    };
    struct Ramp {                       // the register model's ramp (harness formula)
        int vol = 0;
        double t0 = 0;
        bool run = false, down = false;
    };

    uint32_t& reg(int voice, int r) { return regs_[(voice < 0 ? 32 : voice) * 128 + (r & 0x7F)]; }
    void writeReg(uint32_t v, int kind, double t);
    void apply(int voice, int r, uint32_t v);
    int volume(int voice, double t);
    void rampWrite(int voice, int r, uint32_t v, double t);
    void sched(double t);

    std::vector<uint8_t> dram_;
    std::vector<uint32_t> regs_;        // 33 x 128
    Voice v_[32];
    int32_t volFrac_[32] = {};
    Ramp ramp_[32];
    uint8_t regSel_ = 0, voiceSel_ = 0, adlibIdx_ = 0;
    int voices_ = 14;
    uint8_t irqStatus_ = 0;
    bool t1run_ = false;
    double t0_ = 0, tnext_ = -1, per_ = 0;
    float volTable_[4096];
};

}  // namespace lasse
