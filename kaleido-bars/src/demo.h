// Core 0: the vertical-blank interrupt and the part sequencer (0x10008aec) for parts 15-17
// of the part table at 0x10008624, plus the routines those parts use.
#pragma once
#include "machine.h"
#include "video.h"
#include <string>
#include <vector>

namespace kb {

// Global frames (counted from power-on under the harness) that the port shows.
constexpr long kFirstFrame = 4739;   // song position 4553 at the start of this frame
constexpr long kLastFrame = 5625;    // after this frame's vblank part 18 would be prepared

struct Demo {
    Mem m;
    Video video{m};
    long frame = kFirstFrame;  // global number of the next frame run_frame() shows
    bool finished = false;

    bool init(const std::string& data);  // reads data/bars.png and data/carbon.png
    void run_frame();          // render one frame (and run core 0 at its vblank)

  private:
    enum Hook { H_P15, H_P16, H_P17, H_P17_FADE };
    enum Wait { W_AFTER_PREP, W_MAIN, W_FADE };
    Hook hook = H_P15;
    Wait wait = W_FADE;
    int entry = 15;
    uint32_t tp = 1;           // the sequencer's tp register: main's flag in and out

    void vblank_irq();
    void call_hook();
    void prep(int e);
    void main_(int e);
    int32_t end_pos(int e);

    std::vector<uint8_t> bars, carbon;  // textures, two 4-bit pixels per byte

    void put(uint32_t dst, const uint16_t* hw, size_t n);    // halfwords into SRAM
    void bg_prep();                                            // 0x10003740
    void bg_vblank();                                          // 0x1000377c
    // part 15: dark blue screen
    void p15_prep();                                           // 0x100085f4
    void p15_vblank();                                         // 0x10008618
    // part 16: two rotating edges wipe in the carbon background
    void p16_prep();                                           // 0x10000710
    void p16_main();                                           // 0x1000074c
    void p16_vblank();                                         // 0x1000087c
    void p16_edge(int32_t x0, int32_t x1, int32_t y0, int32_t y1, uint32_t nib, uint32_t buf);  // 0x100008be
    // part 17: the vertical bars
    void p17_prep();                                           // 0x1000057c
    void p17_main();                                           // 0x100005f2
    void p17_fade_vblank();                                    // 0x10000602
    void p17_vblank();                                         // 0x1000060c
};

}  // namespace kb
