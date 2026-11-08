// The scene: a bouncing sphere of 1373 dots, turning in 3D. Everything is drawn in software into
// a 512x768 canvas.
#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace kd {

constexpr int W = 512, H = 768;   // canvas; the window shows each pixel two pixels wide
constexpr int kRows = H / 2;      // the dots are drawn in rows of two lines

class Demo {
  public:
    bool init(const std::string& data);   // loads data/points.bin and data/squash.bin
    void step();                          // draws the current frame, then advances the timeline
    bool finished() const { return done; }
    long frame() const { return frame_; } // number of the frame the next step() draws
    const uint32_t* pixels() const { return canvas.data(); }   // W*H ARGB8888
    void to_rgb24(uint8_t* out) const;

  private:
    enum Phase { Prep, Arm, Run, Fade, End };
    struct Point { int16_t x, y, z; };

    // A frame buffer as the original has it: 256 bytes per row, two 4-bit pixels per byte
    // (the left one in the low nibble), plus slack for dots that run off the bottom right.
    static constexpr size_t kBufBytes = kRows * 256 + 4096;

    std::vector<Point> points;
    std::vector<int16_t> squash;          // 1025 entries, for offsets -512..512
    std::vector<uint32_t> canvas = std::vector<uint32_t>(W * H);

    long frame_ = 0;
    bool done = false;
    Phase phase = Prep;
    uint32_t pos;            // music position in frames (60 per second, 112 per bar)
    bool blank_on = false;   // the part's vertical-blank handler is installed
    uint32_t count = 0;      // vertical blanks since then
    uint32_t fade = 0;       // vertical blanks since the dots started going
    int32_t dots = 0;        // how many dots to draw
    int32_t shift_x = 0, shift_y = 0;   // sway and bounce
    std::vector<uint8_t> buf[2] = {std::vector<uint8_t>(kBufBytes), std::vector<uint8_t>(kBufBytes)};
    int shown = 0;           // buffer on screen
    int pending = -1;        // buffer finished too late for the last frame; shown from the next

    void tick();
    void main_loop();
    void vblank();
    void plot(uint8_t* b, int32_t col, int32_t row, int size);
    void draw();
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace kd
