// The scene: a bump-mapped snowflake lit by a moving light, over a slowly filling star field.
// Everything is drawn in software into a 512x768 canvas.
#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace ks {

constexpr int W = 512, H = 768;   // canvas; the window shows each pixel two pixels wide
constexpr int kFlakeW = 256, kFlakeH = 192;   // normal map; each texel is 2x4 canvas pixels
constexpr int kStarsW = 512, kStarsH = 384;   // star field; each pixel is 1x2 canvas pixels

class Demo {
  public:
    bool init(const std::string& data);   // loads data/normals.png and data/stars.bin
    void step();                          // draws the current frame, then advances the timeline
    bool finished() const { return done; }
    long frame() const { return frame_; } // number of the frame the next step() draws
    const uint32_t* pixels() const { return canvas.data(); }   // W*H ARGB8888
    void to_rgb24(uint8_t* out) const;

  private:
    enum Phase { Prep, Arm, Run, Fade, End };

    std::vector<uint8_t> normals;          // kFlakeW*kFlakeH bytes: normal x << 4 | normal y
    std::vector<uint32_t> star_list;       // star words, one per frame
    std::vector<uint32_t> canvas = std::vector<uint32_t>(W * H);

    long frame_ = 0;
    bool done = false;
    Phase phase = Prep;
    uint32_t pos;            // music position in frames (60 per second, 112 per bar)
    bool blank_on = false;   // the part's vertical-blank handler is installed
    uint32_t count = 0;      // vertical blanks since then
    uint32_t fade = 0;       // vertical blanks since the light started leaving
    int32_t light_x = 0, light_y = 0;
    int32_t flake_x = 0;     // horizontal wobble of the snowflake
    uint32_t stars_x = 0, stars_y = 0;   // scroll of the star field
    int32_t next_star = 0;   // index of the next star; negative: still waiting
    uint8_t flake[kFlakeH][kFlakeW] = {};       // lit snowflake: pixel values, 0 = transparent
    uint8_t stars[kStarsH][kStarsW] = {};       // star field pixel values

    void tick();
    void light();
    void vblank();
    void add_star();
    void draw();
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace ks
