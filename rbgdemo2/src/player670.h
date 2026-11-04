// Renaissance's ".670" player: the "fm digital combo muzik driver" Tran wrote
// for Black Glass ][, translated from the protected-mode code at 34B0h..4C81h
// of the unpacked RBGDEMO2. No SDL; the tests drive it directly.
//
// The demo starts it with AL=0Ah: FM mode 2 and digital mode 2. On a
// SoundBlaster Pro that means
//   - FM: both OPL2 chips (left at base+0, right at base+2), 18 voices,
//     voice v on chip v & 1, channel v >> 1;
//   - digital: 4 channels mixed in software, 8-bit mono at 8000 Hz
//     (DSP time constant 83h), 140 bytes per DMA block (8Bh + 1).
// Everything happens in the SB interrupt that ends each block, so the
// driver's clock is 8000 / 140 = 57.14 ticks a second.
//
// The .670 file: speed, order count, pattern count, sample count, instrument
// count, restart position, then a dword: where the sample data starts. Then
// the orders, a dword offset per pattern, 16-byte sample records (offset,
// length, loop start, loop end - FFFFFFh for none) and 11-byte FM
// instruments (C0h, then 20h/40h/60h/80h/E0h for modulator and carrier).
// Patterns are event streams; see sequencer().
#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "opl2.h"

namespace rbg {

class Player670 {
public:
    static constexpr int kDigitalRate = 8000;
    static constexpr int kBlock = 140;             // digital samples per tick
    static constexpr int kOutRate = 48000;
    static constexpr int kOutPerTick = kOutRate / kDigitalRate * kBlock;   // 840

    struct OplWrite {
        uint8_t chip, reg, val;
    };

    Player670();
    bool load(const std::string& path);
    bool loadMemory(std::vector<uint8_t> file);
    const std::string& error() const { return error_; }
    bool loaded() const { return loaded_; }

    // One SB interrupt (3746h): start the block mixed last time, update the
    // FM chips, run the sequencer, mix the next block.
    void tick();
    // The block the DSP plays during the tick just run.
    const uint8_t* dmaBlock() const { return mix_[1 - next_]; }
    // The tick's sound, kOutPerTick stereo frames at kOutRate.
    void render(float* stereo);

    // Every OPL write, for the tests; nothing reads it otherwise.
    std::vector<OplWrite> writes;
    bool logWrites = false;

    // 34A3h: the volume of the last note on each channel (0..3 digital,
    // 4.. FM). The demo's music objects read these and decay them.
    uint8_t noteVolume[32] = {};
    // 32D8h: incremented at the end of every tick; the demo waits for 2.
    uint8_t ticks = 0;

private:
    struct Digital {          // 3304h + 1Ch * n
        uint32_t pos = 0, end = 0, loopStart = 0, loopEnd = 0xFFFFFFFF;
        uint8_t vol = 0;
        uint32_t step = 0;    // 8.8 samples per output sample
        uint8_t frac = 0;     // fractional part of step
        uint8_t acc = 0;      // fractional position
        int8_t whole = 0;     // integer part of step, minus the one lodsb adds
    };
    struct Voice {            // the 18-entry tables at 33F7h..3448h
        uint8_t curIns = 0xFF, curVol = 0xFF, note = 0xFF, ins = 0xFF, vol = 0xFF;
    };

    void opl(int chip, uint8_t reg, uint8_t val);
    void initChip(int chip);                          // 3533h
    void resetChip(int chip);                         // 354Eh
    void reset();                                     // 4951h
    void loadInstrument(int chip, int ch, int ins);   // 3575h
    void setVolume(int chip, int ch, uint8_t tl);     // 3612h
    void fmUpdate();                                  // 38D8h
    void sequencer();                                 // 39F2h
    void mixer();                                     // 3BC9h

    std::vector<uint8_t> file_;
    std::string error_;
    bool loaded_ = false;
    bool playing_ = false;

    // song layout (3463h..347Bh)
    uint8_t speed_ = 0, orderCount_ = 0, restart_ = 0;
    size_t orders_ = 0, patterns_ = 0, samples_ = 0, instruments_ = 0, patData_ = 0;
    // sequencer state
    uint8_t speedLeft_ = 0, rowsLeft_ = 0, order_ = 0xFF;
    size_t stream_ = 0;
    bool atStart_ = true;     // 347Fh: the built-in "next pattern" the stream starts on

    Digital dig_[4];
    Voice voice_[18];
    uint8_t shadowC0_[18] = {}, shadowMod40_[18] = {}, shadowCar40_[18] = {};

    uint8_t mix_[2][kBlock];
    int next_ = 0;

    Opl2 chip_[2];
    double oplPos_ = 0.0;
    std::vector<int16_t> oplBuf_[2];
    float digLast_ = 0.0f;
};

}  // namespace rbg
