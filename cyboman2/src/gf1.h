// A Gravis UltraSound GF1 at the port level: what the music player writes
// to 2x0-2x9 and 3x2-3x7 (base 220h), the voices played from its DRAM.
//
// The register file keeps the values as the ports leave them (an 8-bit
// write to 3x5 lands in the high byte of a 16-bit register, a 16-bit write
// to 3x4 sets it whole), the way the analysis harness keeps them, so that a
// log of the writes can be compared with the harness's. The synthesis
// follows the GF1: 8-bit samples, addresses 20.9, frequency control in
// 1/512 sample steps per output sample, a 12-bit logarithmic volume with
// its ramp, pan 0-15, an output rate of 617400 Hz / active voices.
#pragma once

#include <cstdint>
#include <functional>
#include <vector>

namespace cyb {

class Gf1 {
public:
    Gf1();

    void out8(uint16_t port, uint8_t v);
    void out16(uint16_t port, uint16_t v);
    void poke(uint32_t addr, uint8_t v) { dram_[addr & 0xFFFFF] = v; }

    // Samples per second with the voices now active.
    double rate() const { return 617400.0 / voices_; }
    // Stereo frames at rate(), interleaved, added to out.
    void render(float* out, int frames);

    // Every register write: voice (-1 for the global registers and other
    // ports), register (1000h + port offset for the other ports), value.
    std::function<void(int, int, uint32_t)> log;

private:
    struct Voice {
        uint8_t ctrl = 3;           // reg 0: bit 0 stopped, 1 stop, 3 loop, 4 bidirectional, 6 backwards
        uint32_t inc = 0;           // reg 1 >> 1: 1/512 sample steps
        uint32_t start = 0, end = 0, pos = 0;   // 20.9
        uint8_t rampRate = 0;       // reg 6
        uint16_t rampStart = 0, rampEnd = 0;    // reg 7, 8: 12-bit volumes
        uint16_t vol = 0;           // reg 9: 12-bit volume
        uint8_t rampCtrl = 3;       // reg D: bit 0 stopped, 1 stop, 3 loop, 4 bidirectional, 6 down
        int rampCount = 0;
        uint8_t pan = 7;
    };

    void writeReg(uint32_t v, int kind);    // kind: 8 (3x4 byte), 9 (3x5 byte), 16 (3x4 word)
    void apply(int voice, int reg, uint32_t v);
    uint32_t& reg(int voice, int r) { return regs_[(voice < 0 ? 32 : voice) * 128 + r]; }

    std::vector<uint8_t> dram_;
    std::vector<uint32_t> regs_;    // 33 x 128: the register file
    Voice v_[32];
    int32_t volFrac_[32] = {};      // the ramp's volume below the 12 bits
    uint8_t regSel_ = 0, voiceSel_ = 0;
    int voices_ = 14;
    float volTable_[4096];
};

}  // namespace cyb
