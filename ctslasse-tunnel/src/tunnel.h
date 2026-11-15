// The water tunnel of Lasse Reinbøng (Cubic Team & $eeN, 1995): part 8 of
// the intro (1C776h) from T 12 to its end. A marble texture (by default
// without the intro's embossed logo) on a rippling plane in red, yellow and blue, then a tunnel faded in over it:
// its walls wave like water, it twists, zooms and breathes with the music,
// until it fades out at T 72.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200. Translated
// from the ctslasse port routine by routine, into C++ expressions with the
// order of the intro's x87 operations kept; every frame of the part matches
// the original (tests/ref.txt). The whole part is here
// (from T 0, the drops of ctslasse-pond); each frame depends on the time
// only, so any T can be drawn on its own.
#pragma once

#include <array>
#include <cstdint>
#include <limits>
#include <vector>

namespace tunnel {

// The intro's floating point is the x87's: 80 bits, rounding to nearest.
// That is long double with GCC or Clang on x86; the code evaluates its
// expressions in it, in the intro's order, rounded to float or double where
// the intro stores a value. Elsewhere the picture would not be exact.
using X = long double;
static_assert(std::numeric_limits<X>::digits == 64,
              "long double must be the x87's 80-bit format (GCC or Clang on x86) for the exact picture");

constexpr int W = 320, H = 200;
constexpr double kPit = 1193182.0;
constexpr double kUnit = 813440.2376280001;   // the part's time unit in PIT ticks (about 0.68 s)
constexpr float kEnd = 72.0f;                 // T: faded out (the music moves on just before)

class Tunnel {
public:
    // LOGO: the intro's texture, the "cubic team & $een" logo embossed in the
    // marble (the original's picture); without it, the marble alone
    explicit Tunnel(bool logo = false);
    // The frame at CLOCK (PIT ticks since the part began): the grid, the
    // picture and the DAC as the intro has them.
    void frame(int32_t clock);
    // The frames at CLOCK and at CLOCK_TO, mixed (W 0: CLOCK's, 1: CLOCK_TO's):
    // their grids (u and v the shorter way round the 256-texel wrap) and
    // their DACs, then drawn. The loop's end turns into its start with it.
    // (Not in the intro.)
    void morph(int32_t clock, int32_t clockTo, float w);
    static float partTime(int32_t clock) { return (float)((double)clock / kUnit); }
    bool fadeOut = true;            // false: no fade over T 68-72 (it runs on)

    const uint8_t* screen() const { return screen_.data(); }  // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit
    const uint8_t* texture() const { return tex_.data(); }      // 256x256; with the logo: the intro's [2B4C0h] + 130000h
    const uint8_t* lightTable() const { return light_.data(); } // 130 x 256: level x texel
    // the grid as the intro holds it: 41 x 26 x (u, v, light), 3198 dwords
    const uint8_t* grid() const { return reinterpret_cast<const uint8_t*>(grid_.data()); }
    // the picture in 256 colours, as the intro shows it (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, at any size (WxH, shown at 4:3 as
    // 320x200 is): u, v and the light interpolated per pixel from the grid
    // at full precision (SMOOTH: Catmull-Rom between the 4x4 points around,
    // else bilinearly, as the mapper does), the texture filtered
    // (Catmull-Rom), the light levels and the palettes computed without
    // rounding. Call after frame().
    void toTrueColor(uint32_t* out, int w = W, int h = H, bool smooth = true) const;

    // What the frame drew, for the inspector (none of it is used to draw)
    struct Info {
        float t = 0;                // the part's time
        bool drops = false, plane = false, tunnel = false;
        float planeShare = 0;       // the plane's weight in the blend (0-1), the rest the drops' or the tunnel's
        float twist = 0, zoom = 0, phase = 0, wave = 0;   // the tunnel's
        float u0 = 0, v0 = 0;       // its turn and its forward movement, in texels
        float morph = 0;            // the loop's morph into its start (0-1), and the time it goes to
        float morphTo = 0;
    };
    const Info& info() const { return info_; }
    static constexpr int kGridW = 41, kGridH = 26;

private:
    // A point of the grid: the texture's u and v (texels) and the light
    // level, in 8.24 fixed point (u and v wrap at 256 texels). The routines
    // leave them in 16.16, and they are then multiplied by 4096.
    struct Point {
        uint32_t u, v, light;
    };
    static_assert(sizeof(Point) == 12, "the intro's layout");
    using Grid = std::array<Point, kGridW * kGridH>;

    void precalc(bool logo);        // the texture, as 18A6Ch makes [2B4C0h] + 130000h
    void lightTables();             // part 8's set-up
    static void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits);
    static void blur(const uint8_t* src, uint8_t* dst);
    static void displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const int8_t* tx,
                         const int8_t* ty);
    static void rle(uint8_t* dst, const uint8_t* data, int c1, int c2);
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    // the same gradient unrounded (32-bit colour)
    static void gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);

    void update(int32_t clock);     // frame() without drawing: the grid and the DAC
    // grid.cpp: the intro's routines
    void gridMap();                 // the grid onto the screen
    // into the grid: a tunnel (twist, zoom, phase, turn, depth, wave)
    void tunnel(float twist, float zoom, float phase, int32_t u0, int32_t v0, float wave);
    void bubbles(float t);          // the drops, into the grid
    void wobble(float t);           // the plane, into plane_
    void blend(int32_t wa, int32_t wb);   // grid = grid wa + plane wb

    enum { kPal1, kPal2, kPal3 };   // red - yellow - blue, black - blue - white, black - white
    void setDac(int src, int32_t k, int mix, int mode);

    Grid grid_{}, plane_{};
    std::vector<uint8_t> tex_, light_, screen_;
    uint8_t pal_[3][768], dac_[768];
    float palF_[3][768], dacF_[768];    // the same, unrounded (6-bit scale, 0-63)
    Info info_;
    bool dacSet_ = false;           // the palette written (else a start past the fades stays white)
    float lastT_ = 0;
};

}  // namespace tunnel
