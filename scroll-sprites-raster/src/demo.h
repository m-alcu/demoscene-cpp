// Raster bars, sprites and a sine scroller in the style of 1990-1994 PC demos: 320x200 with
// 256 colours (mode 13h), one frame per 70 Hz retrace.
//
// Layers, back to front:
//   rasters  - colour 0 of the "DAC" is changed on every scan line (as a demo does in the
//              horizontal retrace), so the background shows bars that weave through each other;
//   sprites  - shaded balls (colour 0 transparent) on a Lissajous path;
//   scroller - text whose columns ride a sine wave, with a shadow and a gradient that cycles.
#pragma once

#include <cstdint>
#include <vector>

namespace ssr {

constexpr int W = 320, H = 200;

class Demo {
public:
    Demo();
    void frame();                          // advance one 70 Hz frame and draw it
    void to_argb(uint32_t* out) const;     // through the palette, colour 0 per scan line

    bool rasters = true, sprites = true, scroller = true;

private:
    void draw_rasters();
    void draw_sprites();
    void draw_scroller();

    std::vector<uint8_t> screen_;
    uint32_t pal_[256];                    // ARGB
    uint32_t line0_[H];                    // colour 0 on each scan line (the raster bars)
    uint8_t sin_[256];                     // 128 + 127*sin
    std::vector<uint8_t> ball_;            // the sprite, kBall x kBall, 0 = transparent
    uint32_t t_ = 0;
    int scroll_ = 0;                       // scroller position in pixels
};

}  // namespace ssr
