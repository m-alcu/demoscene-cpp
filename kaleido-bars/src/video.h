// Core 1's per-scanline video loop (SCRATCH_Y 0x200810b8..0x20081750) with the DMA and the
// three PIO0 pixel state machines it feeds, reduced to what they put on the VGA pins.
//
// Each layer is a 4-bit pixel stream: 0 = transparent (the state machine stops driving the
// pins), 2 = keep the last state, 4/6/8/10/12/14 = one of the layer's six colours. Layer 2 is
// on top. Where no layer drives the pins they keep their last value; every line starts black.
#pragma once
#include "machine.h"
#include <functional>

namespace kb {

struct Video {
    explicit Video(Mem& m) : m(m) {}
    Mem& m;
    uint16_t frame[768][512];          // 12-bit 0xRGB per pixel; each pixel is two VGA pixels wide
    std::function<void()> vblank;      // core 1's doorbell to core 0 at line 768

    void frame_start();
    void run_frame();                  // lines 0..805; calls vblank at line 768
    void to_rgb(uint8_t* out) const;   // 512x768 RGB24 (each 4-bit gun times 17)

  private:
    struct Layer { bool on = true; uint16_t col = 0; };
    Layer st[3];                       // what each state machine drives (sticky output)
    uint32_t l1 = 0, l2 = 0;           // copper list pointers (s11, s9)
    int line = 0;                      // s10
    void copper();
    void layer_line(int L, Layer out[512]);
    void run_line();
};

}  // namespace kb
