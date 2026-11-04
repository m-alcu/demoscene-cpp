// The music as the program plays it: the replay set up and its module
// loaded at the start, the song started, GUS timer 2 running from then on;
// its interrupts get through from the 75th (72 ms, frame 5: the intro keeps
// interrupts off while it measures the frame), every 960 us. No SDL.
#pragma once

#include <cstdint>
#include <vector>

#include "gf1.h"
#include "music.h"

namespace cyb {

class Soundtrack {
public:
    static constexpr int kRate = 38587;         // 617400 Hz / 16 voices
    static constexpr long kFirstIrq = 75;

    explicit Soundtrack(const std::vector<uint8_t>& image);

    // Stereo float frames at kRate up to SECONDS from the start, appended.
    void render(double seconds, std::vector<float>& out);
    void stop() { music_.stop(); }              // the end: the voices off
    long irqs() const { return irq_; }

private:
    Gf1 gus_;
    Music music_;
    int64_t pos_ = 0;                           // frames made
    long irq_ = kFirstIrq;                      // the next interrupt's number
};

}  // namespace cyb
