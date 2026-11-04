// The intro's machine state and its two routines. DESERT.ASM is 103 bytes of
// x86 that keep everything in registers, and the look depends on it: the
// random generator shares AX with the pixel being built, and the palette is
// computed from CL. So rather than re-deriving the algorithm, this keeps the
// registers the code uses and runs its instructions on them, one by one.
//
// The routine names are labels of DESERT.ASM (in ../original/).
#pragma once

#include <cstdint>

namespace desert {

constexpr int kScreenW = 320;
constexpr int kScreenH = 200;

// What DOS leaves in the registers when it starts a .COM (MS-DOS and DOSBox
// agree), plus what the BIOS returns in AL after setting mode 13h. The intro
// relies on CX, BP and AL without setting them.
struct StartState {
    uint16_t ax = 0x0020;  // INT 10h AH=00 returns AL=20h for modes above 7
    uint16_t bx = 0x0000;
    uint16_t cx = 0x00FF;
    uint16_t bp = 0x091C;
};

class Desert {
public:
    explicit Desert(const StartState& start = StartState());

    // One vertical retrace: what the main loop does from `l1` to `jz @y_loop`
    // and back round to the next retrace. Scrolls the screen up a line and
    // computes the new bottom line. The original does this once per 70 Hz
    // retrace.
    void retrace();

    // The 64000 visible bytes of VRAM, one palette index per pixel.
    const uint8_t* screen() const { return vram_; }
    // 256 DAC entries, R, G, B, 6 bits each.
    const uint8_t* dac() const { return dac_; }

private:
    void setPalette();  // start .. @pal_loop
    void computeRows(); // @y_loop .. jne @y_loop
    void scroll();      // sub di,bx .. rep movsd

    // Segment A000h, all 64 KB of it: the code writes a line below the
    // visible 64000 bytes before scrolling it into view.
    uint8_t vram_[65536] = {};
    uint8_t dac_[256 * 3] = {};

    uint16_t ax_, bx_, cx_, dx_ = 0, si_ = 0, di_ = 0, bp_;
};

}  // namespace desert
