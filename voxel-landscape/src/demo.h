// A voxel landscape flight in the style of Comanche (NovaLogic, 1992) and the PC demos that
// followed: 320x200 in 32-bit colour, one frame per 70 Hz retrace.
//
// A 256x256 heightmap and colour map (wrapping); every screen column marches a ray front to
// back over the map and fills vertical spans above a per-column "y-buffer", so nearer terrain
// hides farther terrain without any depth test.
//
// The colour map holds ARGB per cell; fog mixes it continuously towards the horizon haze.
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

    std::vector<uint32_t> screen_;      // ARGB
    std::vector<uint8_t> height_;       // 256x256
    std::vector<uint32_t> colour_;      // 256x256, ARGB
    uint32_t t_ = 0;
    float cam_h_ = 200;                 // camera height, eased
};

}  // namespace vl
