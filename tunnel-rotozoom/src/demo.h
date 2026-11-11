// A textured tunnel and a rotozoomer in the style of 1993-1996 PC demos: 320x200 with 256
// colours (mode 13h), one frame per 70 Hz retrace, both drawn from one 256x256 texture.
//
// Palette: 4 brightness levels x 64 texture colours (index = level*64 + texel), so the tunnel
// can darken with depth using only table lookups.
#pragma once

#include <cstdint>
#include <vector>

namespace tr {

constexpr int W = 320, H = 200;

class Demo {
public:
    Demo();
    void frame();                       // advance one 70 Hz frame and draw it
    void to_argb(uint32_t* out) const;

    void switch_effect() { effect_ ^= 1; }
    bool autoswitch = true;             // switch effect every 10 s

private:
    void tunnel();
    void rotozoom();

    std::vector<uint8_t> screen_, tex_;    // tex: 256x256 texels 0-63
    // Tunnel tables at twice the screen size, so the centre can move: a window of W x H is
    // read at an offset. Per pixel: angle (0-255), depth (texture v) and brightness level.
    std::vector<uint8_t> angle_, depth_, level_;
    uint32_t pal_[256];
    int effect_ = 0;
    uint32_t t_ = 0;
};

}  // namespace tr
