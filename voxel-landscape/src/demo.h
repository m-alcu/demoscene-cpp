// A voxel landscape flight in the style of Comanche (NovaLogic, 1992) and the PC demos that
// followed: 320x200 with 256 colours (mode 13h), one frame per 70 Hz retrace.
//
// A 256x256 heightmap and colour map (wrapping); every screen column marches a ray front to
// back over the map and fills vertical spans above a per-column "y-buffer", so nearer terrain
// hides farther terrain without any depth test.
//
// Palette: indices 0-191 are 64 terrain colours at 3 fog levels (index = fog*64 + colour);
// 192-255 are the sky gradient.
#pragma once

#include <cstdint>
#include <vector>

namespace vl {

constexpr int W = 320, H = 200;

class Demo {
public:
    Demo();
    void frame();                       // advance one 70 Hz frame and draw it
    void to_argb(uint32_t* out) const;

    bool paused = false;

private:
    void render(float cx, float cy, float angle, float height, float horizon, float bank);

    std::vector<uint8_t> screen_;
    std::vector<uint8_t> height_, colour_;  // 256x256 each
    uint32_t pal_[256];
    uint32_t t_ = 0;
    float cam_h_ = 200;                 // camera height, eased
};

}  // namespace vl
