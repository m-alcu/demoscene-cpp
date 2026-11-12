// The pond of Lasse Reinbøng (Cubic Team & $eeN, 1995): the start of part 8
// of the intro (1C776h), without its logo: a marble texture seen through
// water: drops fall in it and their rings run out,
// pushing the picture outwards and catching the light.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200. Two ways to
// move the grid:
//
//   frame(clock)  the intro, exactly: its three drops (1CB2Bh), and from
//                 T 8 its wobbling plane blending in (1CDF8h), with its
//                 palettes. Translated from the ctslasse port routine by
//                 routine, x87 order kept; matches the original
//                 (tests/ref.txt).
//   pondFrame(t)  the same water, endless: the intro's ring formula for any
//                 number of drops, falling at random or where asked (not
//                 the original's picture).
#pragma once

#include <cstdint>
#include <vector>

#include "x87.h"

namespace pond {

constexpr int W = 320, H = 200;
constexpr double kPit = 1193182.0;
constexpr double kUnit = 813440.2376280001;   // the part's time unit in PIT ticks (about 0.68 s)
constexpr float kIntroEnd = 12.0f;            // T: the plane alone from here; the drops are gone

// A drop in the pond: where (grid cells, 0-40 across, 0-25 down) and when
// (T) it fell. The ring's radius is 8 cells per T.
struct Drop {
    float x, y, t;
    bool first = false;     // the intro's first drop: its own strength
};

class Pond {
public:
    Pond();
    // The intro at CLOCK (PIT ticks since the part began): the grid, the
    // picture and the DAC as the intro has them.
    void frame(int32_t clock);
    static float partTime(int32_t clock) { return (float)((double)clock / kUnit); }

    // The endless pond at T: DROPS are the drops fallen so far (finished ones
    // may be removed). The palette comes in from white over T 0-1.5 and stays
    // blue.
    void pondFrame(float t, const std::vector<Drop>& drops);
    // The intro's three drops
    static std::vector<Drop> introDrops();
    // A drop is done when its ring has left the screen
    static bool dropDone(const Drop& d, float t);

    const uint8_t* screen() const { return mem_ + kScreen; }  // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit
    const uint8_t* texture() const { return mem_ + kTex; }      // the intro's [2B4C0h] + 130000h
    const uint8_t* lightTable() const { return mem_ + kLight; } // 130 x 256
    const uint8_t* grid() const { return mem_ + kGrid; }        // 41 x 26 x (u, v, light), 3198 dwords
    void toArgb(uint32_t* out) const;

private:
    // the flat memory: the grid mapper's variables (1E500h-1E57Fh), the two
    // grids (the drops', +31F8h the plane's), the texture and light tables
    // (64K-aligned, as the mapper puts their base in a register's high half),
    // the screen
    static constexpr uint32_t kGrid = 0x100, kTex = 0x10000, kLight = 0x20000, kScreen = 0x30000;

    void precalc();                 // the texture, as 18A6Ch makes [2B4C0h] + 130000h
    void lightTables();             // part 8's set-up
    void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits);
    static void displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const uint8_t* tx,
                         const uint8_t* ty);
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);

    // grid.cpp: the port's routines
    void gridMap(uint32_t dst, uint32_t grid, uint32_t tex, uint32_t light);
    void cosPos(float x);
    void blend(uint32_t dst, uint32_t a, uint32_t b, int32_t wa, int32_t wb);
    void bubbles(uint32_t grid, float t);
    void wobble(uint32_t grid, float t);

    // the DAC
    void setDac(const uint8_t* src, int32_t k0, const uint8_t* mix, int mode);

    uint8_t r8(uint32_t a) const { return mem_[a]; }
    uint32_t r32(uint32_t a) const;
    void w8(uint32_t a, uint32_t v) { mem_[a] = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v);
    void w32(uint32_t a, uint32_t v);
    static double f64(uint32_t a);  // the intro's constants, by address
    static float f32(uint32_t a);

    Fpu F;
    std::vector<uint8_t> memory_;
    uint8_t* mem_;
    uint8_t pal1_[768], pal2_[768], pal3_[768], dac_[768];
    bool dacSet_ = false;           // the palette written (else a start past the fades stays white)
};

}  // namespace pond
