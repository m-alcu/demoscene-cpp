// The bars part of Wish (Majic 12, 1993; In Bloom '93 winner), ported from the 8086 code of the
// part's overlay in WISH.EXE (part 18 of 21, the first of the two "full processor time" parts).
//
// The part sets the CRTC offset to 0, so all 200 rows of mode 13h show the same 320 bytes, and
// rewrites that line while the beam runs down the screen: in every second horizontal blank it
// writes a 16-pixel bar at x = three summed sines. A bar written before row r is drawn is
// visible on row r and every row below it, up to the end of the frame, when the line is cleared. So row r shows bars
// 0..r-1 on top of each other, and the trails form a twisting ribbon.
//
// This port renders what the beam shows: frame() is the 320x200 picture of one 70 Hz frame,
// dac() the palette it was shown with.
#pragma once
#include <cstdint>

namespace wb {

constexpr int W = 320, H = 200;

class Bars {
  public:
    Bars() { reset(); }
    void reset();
    // Runs one turn of the part's frame loop: one displayed frame. esc is whether the Esc key is
    // down when the original reads the keyboard port, after drawing. Returns false when the part
    // has ended (no new frame): after the last motion's closing wipe, or after the Esc fade.
    bool step(bool esc = false);
    const uint8_t* frame() const { return pic; }   // W x H colour indices
    const uint8_t* dac() const { return dac6; }    // 6-bit DAC values, the frame's palette
    void to_argb(uint32_t* out) const;
    void to_rgb24(uint8_t* out) const;

  private:
    uint8_t pic[W * H] = {};
    uint8_t dac6[768] = {};
    uint8_t next_dac[768] = {};    // written after the bar loop: the next frame's palette

    // the part's variables (data offsets 279h-295h)
    uint8_t esc_down = 0;          // 279h
    uint8_t esc_fade = 0;          // 27Ah
    uint16_t phase[3] = {};        // 27Bh: start phases of the 3 sines (mod 256)
    uint8_t ending = 0;            // 281h: the last motion's wipe is running
    uint16_t limit = 200;          // 282h: bar n of a frame (n = 199..1) is drawn if n <= limit;
                                   // the closing wipe lowers it, emptying the screen from the top
    uint8_t fade_state = 0;        // 284h: 0 fading in, 1 shown, 2 fading out
    uint8_t fade = 0x40;           // 285h
    uint16_t count = 0;            // 286h: frames into the motion
    uint16_t line_step[3] = {};    // 288h
    uint16_t frame_step[3] = {};   // 28Eh
    uint16_t next_set = 0;         // 294h: offset of the next motion, 12 bytes each
    bool done = false;

    void start_set();
};

uint32_t crc32(const uint8_t* p, unsigned n);

}  // namespace wb
