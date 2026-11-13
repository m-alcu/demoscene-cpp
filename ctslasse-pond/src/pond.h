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

#include <array>
#include <cstdint>
#include <vector>

#include "x87.h"

namespace pond {

constexpr int W = 320, H = 200;
constexpr int kGridW = 41, kGridH = 26;      // the grid's points: one per 8x8 block's corner
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

    const uint8_t* screen() const { return screen_.data(); }   // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit
    const uint8_t* texture() const { return tex_.data(); }     // 256x256, the intro's [2B4C0h] + 130000h
    const uint8_t* lightTable() const { return light_.data(); } // 130 x 256 (the rest zero)
    // the grid as the intro holds it: 41 x 26 x (u, v, light), 3198 dwords
    const uint8_t* grid() const { return reinterpret_cast<const uint8_t*>(grid_.data()); }
    // the picture in 256 colours, as the intro shows it (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, from the same grid: u, v and the light
    // interpolated per pixel at full precision, the marble filtered
    // bilinearly, the light levels and the palettes computed without
    // rounding. Call after frame() or pondFrame().
    void toTrueColor(uint32_t* out) const;

private:
    // A point of the grid: the texture's u and v (texels) and the light
    // level, in 8.24 fixed point. The drops and the plane leave them in
    // 16.16; the blend multiplies by 4096.
    struct Point {
        uint32_t u, v, light;
    };
    static_assert(sizeof(Point) == 12, "the intro's layout");
    using Grid = std::array<Point, kGridW * kGridH>;

    void precalc();                 // the texture, as 18A6Ch makes [2B4C0h] + 130000h
    void lightTables();             // part 8's set-up
    void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits);
    static void displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const uint8_t* tx,
                         const uint8_t* ty);
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    // the same gradient unrounded (32-bit colour)
    static void gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    void palettes();

    // grid.cpp: the intro's routines
    void gridMap();                     // the grid onto the screen
    void blend(int32_t a, int32_t b);   // the grid = grid · A + plane · B
    void bubbles(float t);              // the three drops, into the grid
    void wobble(float t);               // the plane, into the plane's grid

    // the DAC
    void setDac(int src, int32_t k0, int mix, int mode);   // palettes by number: 1-3
    void copyDac(int src);

    Grid grid_{}, plane_{};                 // the drops' grid (shown), the plane's
    // the texture and the light tables (64K each: the mapper's levels wrap
    // at 256), the screen
    std::vector<uint8_t> tex_, light_, screen_;
    uint8_t pal_[4][768], dac_[768];        // pal_[1-3]: the intro's three palettes (0 unused)
    float palF_[4][768], dacF_[768];        // the same, unrounded (6-bit scale, 0-63)
    bool dacSet_ = false;           // the palette written (else a start past the fades stays white)
};

}  // namespace pond
