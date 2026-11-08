// The scene: a spinning faceted solid flying down a checkered tunnel. Everything is drawn in
// software into a 512x768 canvas.
#pragma once
#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace kt {

constexpr int W = 512, H = 768;   // canvas; the window shows each pixel two pixels wide
constexpr int kRows = H / 2;      // the solid is drawn in rows of two lines

// An indexed image: one 4-bit pixel value per byte.
struct Image {
    int w = 0, h = 0;
    std::vector<uint8_t> px;
    uint8_t at(int x, int y) const { return px[y * w + x]; }
};

class Demo {
  public:
    bool init(const std::string& data);   // loads data/tunnel.png
    void step();                          // draws the current frame, then advances the timeline
    bool finished() const { return done; }
    long frame() const { return frame_; } // number of the frame the next step() draws
    const uint32_t* pixels() const { return canvas.data(); }   // W*H ARGB8888
    void to_rgb24(uint8_t* out) const;

  private:
    // One of the two tunnel views: the main loop fills the back one while the other is shown.
    struct View {
        int x = 0, y = 0;     // scroll: x 0..240 pixels, y 0..189 rows
        int image = 0;        // which of the 8 tunnel images (music position mod 8)
    };
    // What the next frame shows: set up during the vertical blank.
    struct Screen {
        bool on = false;                 // false: black (before the scene's first blank)
        View view;
        uint16_t back = 0;               // colour behind the tunnel
        uint16_t tunnel[16] = {};        // colour per tunnel pixel value
        uint16_t solid[2][16] = {};      // colour per solid pixel value, on even and odd rows
        uint8_t pix[kRows][W] = {};      // the solid: 4-bit pixel values, 0 = transparent
    };
    enum Phase { Prep, Arm, Run, Fade, End };

    Image tunnel;
    std::vector<uint32_t> canvas = std::vector<uint32_t>(W * H);

    long frame_ = 0;
    bool done = false;
    Phase phase = Prep;
    uint32_t pos;          // music position in frames (60 per second, 112 per bar)
    bool blank_on = false; // the scene's vertical-blank handler is installed
    uint32_t count = 0;    // vertical blanks since then
    uint32_t fade = 0;     // vertical blanks since the fade to white started
    View views[2];
    int front = 0;         // view shown by the next vertical blank
    Screen screen;

    void tick();
    void main_loop();
    void vblank();
    void draw_solid(int32_t x, int32_t y, int32_t size);
    void edge(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint8_t value);
    void draw();
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace kt
