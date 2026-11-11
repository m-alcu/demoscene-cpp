// Plasma and palette effects the way PC demos did them around 1992-1995: 320x200 with 256
// colours (mode 13h), plasmas built from byte sine tables, and the motion done mostly by the
// palette: colour cycling and fades from one palette to the next.
#pragma once

#include <cstdint>
#include <vector>

namespace pp {

constexpr int W = 320, H = 200;
constexpr int kPlasmas = 3, kPalettes = 4;

class Plasma {
public:
    Plasma();
    // Advance one 70 Hz frame (like a VGA retrace) and draw it.
    void frame();
    void to_argb(uint32_t* out) const;

    void next_plasma() { plasma_ = (plasma_ + 1) % kPlasmas; }
    void next_palette();  // starts a 64-step fade to the next palette
    bool cycling = true;  // rotate the palette
    int plasma() const { return plasma_; }
    int palette() const { return target_; }

private:
    void draw();
    std::vector<uint8_t> screen_;
    uint8_t sin_[256];               // 128 + 127*sin, one period over 256 entries
    uint8_t pal_[kPalettes][256][3]; // 6-bit, like the VGA DAC
    uint8_t dac_[256][3];            // what the "DAC" shows now
    int plasma_ = 0, from_ = 0, target_ = 0, fade_ = 64, shift_ = 0;
    uint32_t t_ = 0;                 // frames
};

}  // namespace pp
