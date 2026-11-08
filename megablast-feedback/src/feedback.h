// The checker feedback scene of Megablast (Orange, 1996), ported from the demo's code (DEMO.EXE,
// routines 192A1h set-up, 193C1h update, 19359h/19226h frame). Every frame each screen pixel
// samples the previous frame through a fixed lens table plus a moving shift, and the result,
// darkened, becomes the next frame's texture: nested, ever smaller copies of the picture.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace mf {

constexpr int W = 320, H = 200;
constexpr int kFeed = 200;           // the left 200x200 of each frame is fed back
constexpr int kFirstPattern = 36;    // the scene plays during song patterns 24h and 25h
constexpr int kTicksPerPattern = 384;   // 64 rows x 6 ticks at 70 Hz

class Feedback {
  public:
    bool init(const std::string& data);   // loads warp.bin, checker.png, shade.bin
    void reset();                         // the scene's set-up: both buffers hold the checker
    void tick(int pattern);               // one 70 Hz update (the shift, the fades)
    void frame();                         // draws a frame (and feeds it back)
    const uint8_t* pixels() const { return screen.data(); }  // W*H palette indices
    void to_rgb24(uint8_t* out) const;    // with the faded palette, 6-bit DAC values to 8 bits
    void to_argb(uint32_t* out) const;

    // state, for the info overlay and the tests
    uint16_t shift() const { return si; }
    int level() const { return shade_level; }
    int fade_level() const { return fade; }

  private:
    std::vector<uint16_t> warp;          // W*H: texel (v << 8 | u) per screen pixel
    std::vector<uint8_t> shade;          // 64 x 256 colour maps, darker with the row
    std::vector<uint8_t> checker;        // 256x256 texture
    uint8_t pal6[768] = {};              // the texture's palette, 6-bit VGA values
    uint8_t dac[768] = {};               // the faded palette sent to the DAC this frame
    std::vector<uint8_t> buf[2] = {std::vector<uint8_t>(65536), std::vector<uint8_t>(65536)};
    int src = 0;                         // buffer sampled this frame; the other one is written
    std::vector<uint8_t> screen = std::vector<uint8_t>(W * H);

    // update state (the demo's variables)
    int fade = 0;                // palette brightness 0..256, +4 per tick
    int shade_level = 0;         // 0..176, +2 per tick once drawing has started; row = level/8
    bool drawing = false;
    int last_pattern = -1;
    int32_t w_new = 0, w_old = 256;   // crossfade between the velocities of two patterns
    int32_t pos_x = 0, pos_y = 0;     // position, 1/16 texel
    uint16_t si = 0;                  // the shift added to every table entry
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace mf
