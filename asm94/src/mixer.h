// The music's sound: a software mixer the player drives directly. It has
// 32 voices playing 8-bit samples from its own sample memory, with linear
// interpolation, loops, and logarithmic volume ramps. The player was
// written for the GUS, so the mixer keeps its units, at the rate the GUS
// ran at with its 32 voices on (617400 / 32 = 19293.75 Hz, 7/16 of the
// mixer's 44100): positions in samples, a frequency step of fc/1024
// samples per GUS sample, volumes 12-bit logarithmic (shifted up by 4, as
// the player stores them), ramps of 63 steps per GUS sample. Channels 0
// and 3 are panned left, 1 and 2 right.
#pragma once

#include <cstdint>
#include <vector>

namespace asm94 {

class Mixer {
public:
    static constexpr int kRate = 44100;

    Mixer();

    // sample bytes at ADDR in the sample memory
    void load(uint32_t addr, const uint8_t* p, uint32_t n);

    // a voice played from POS, stopping at END or looping back to LOOP
    void start(int v, uint32_t pos, uint32_t loop, uint32_t end, bool looped);
    void stopAll();
    void frequency(int v, uint16_t fc);
    // the volume now (16 bits: the 12-bit level shifted left 4)
    uint16_t volume(int v) const { return (uint16_t)(voices_[v].vol >> kFrac << 4); }
    void setVolume(int v, uint16_t vol);
    // a ramp between FROM and TO (high bytes of 16-bit volumes) from the
    // volume now, up or down; holdVolume() stops it where it is
    void ramp(int v, uint8_t from, uint8_t to, bool down);
    void holdVolume(int v) { voices_[v].ramping = false; }

    // stereo frames, interleaved, added to OUT
    void render(float* out, int frames);

private:
    static constexpr int kFrac = 10;            // the ramps' fraction bits
    static constexpr int kPosFrac = 13;         // positions': 9 of the GUS's, x 16
    struct Voice {
        bool playing = false, looped = false;
        uint64_t pos = 0, loop = 0, end = 0, inc = 0;
        int32_t vol = 0;                        // 12-bit level << kFrac
        bool ramping = false, down = false;
        int32_t lo = 0, hi = 0;
    };
    std::vector<uint8_t> samples_;
    Voice voices_[32];
    float gain_[4096];
};

}  // namespace asm94
