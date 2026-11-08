// ARNIAL (LCUB, 1995): rotation, zoom and pan of a 256x256 bitmap in mode X, ported from the
// original assembler (ARNIAL.ASM). Every frame each screen pixel steps through the bitmap along
// a rotated, scaled grid in 8.8 fixed point; the 16-bit wrap-around tiles the bitmap.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace arn {

constexpr int W = 160;            // 80 bytes per row, 2 pixels per byte (planes 0-1 and 2-3)

class Arnial {
  public:
    // resol 1: 160x120 (the original's build); resol 2: 160x240, the source's other setting
    explicit Arnial(int resol = 1);       // also computes the sine table
    bool init(const std::string& data);   // loads arnial.png
    void reset();
    // One turn of the main loop: show the page drawn last time (the retrace), then draw the
    // next one into the other page and advance the angle and the pan.
    void step();
    int height() const { return h; }
    int cell_height() const { return 4 / resol; }   // scan lines per row in the 480-line mode
    const uint8_t* pixels() const { return page[shown].data(); }   // W x height(), the shown page
    const uint8_t* dac() const { return dac6; }     // 6-bit DAC values
    void to_argb(uint32_t* out) const;
    void to_rgb24(uint8_t* out) const;

  private:
    int resol, h;
    std::vector<uint8_t> bitmap;     // 65536 bytes: texel (v << 8) | u
    int16_t sine[320] = {};          // round(256 sin(2 pi i / 256)); Cosine = Sine + 64
    uint8_t dac6[768] = {};
    std::vector<uint8_t> page[2];
    int shown = 0;

    // the program's variables
    uint8_t rot = 192;               // angle, 0-255
    uint16_t xx = 0, yy = 0;         // pan, 8.8 texels

    void draw(std::vector<uint8_t>& out);
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace arn
