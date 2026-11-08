// The scene: a dark blue screen, a rotating wipe that uncovers a scrolling carbon background,
// and the twisted vertical bars. Everything is drawn in software into a 512x768 canvas.
#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace kb {

constexpr int W = 512, H = 768;   // canvas; the window shows each pixel two pixels wide

// An ARGB8888 image; alpha 0 marks transparent pixels.
struct Image {
    int w = 0, h = 0;
    std::vector<uint32_t> px;
    uint32_t at(int x, int y) const { return px[y * w + x]; }
};

class Demo {
  public:
    bool init(const std::string& data);   // loads data/bars.png and data/carbon.png
    void step();                          // draws the current frame, then advances the timeline
    bool finished() const { return done; }
    long frame() const { return frame_; } // number of the frame the next step() draws
    const uint32_t* pixels() const { return canvas.data(); }   // W*H ARGB8888
    void to_rgb24(uint8_t* out) const;

    // What the last drawn frame did, for the info panel. bars_shown() is false before the bars
    // part; bar_row(r) is the bars.png row shown on screen row r (0..383, two lines each), and
    // bar_shift() the horizontal offset common to all rows.
    bool bars_shown() const { return shown_; }
    int bar_row(int r) const { return rows_[r]; }
    uint32_t bar_shift() const { return shift_; }
    uint32_t position() const { return shown_pos_; }   // music position of the last drawn frame

  private:
    enum Part { Blue, Wipe, Bars };

    Image bars, carbon;
    std::vector<uint32_t> canvas = std::vector<uint32_t>(W * H);
    uint8_t mask[385][W] = {};   // the wipe: 0 = background visible, 4/8/12 = blue

    Part part = Blue;
    long frame_ = 0;
    bool done = false;
    uint32_t pos;                // music position in frames (60 per second, 112 per bar)
    int t = 0;                   // frames into the current part
    bool shown_ = false;         // last drawn frame: bars on screen, rows, shift, position
    int rows_[384] = {};
    uint32_t shift_ = 0, shown_pos_ = 0;
    int fade = 0;                // frames since the bars started leaving
    bool covered = false, held = false, leaving = false;

    void update();
    void draw_mask();
    void edge(int x0, int x1, int y0, int y1, uint8_t value);
    void draw();
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace kb
