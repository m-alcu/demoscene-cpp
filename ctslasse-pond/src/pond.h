// The pond of Lasse Reinbøng (Cubic Team & $eeN, 1995): the start of part 8
// of the intro, without its logo: a marble texture seen through
// water: drops fall in it and their rings run out,
// pushing the picture outwards and catching the light.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200. Two ways to
// move the grid:
//
//   pondFrame(t)  the pond: the intro's ring formula for any number of
//                 drops, falling at random or where asked.
//   frame(clock)  the intro's own three drops, exactly, up to T 8 (where
//                 the intro goes on to other effects, not kept here).
//                 Translated from the ctslasse port routine by routine, x87
//                 order kept; matches the original (tests/ref.txt). Only the
//                 test uses it.
#pragma once

#include <array>
#include <cstdint>
#include <limits>
#include <vector>

namespace pond {

// The intro's floating point is the x87's: 80 bits, rounding to nearest.
// That is long double with GCC or Clang on x86; the code evaluates its
// expressions in it, in the intro's order, rounded to float or double where
// the intro stores a value. Elsewhere the picture would not be exact.
using X = long double;
static_assert(std::numeric_limits<X>::digits == 64,
              "long double must be the x87's 80-bit format (GCC or Clang on x86) for the exact picture");

constexpr int W = 320, H = 200;
constexpr int kGridW = 41, kGridH = 26;      // the grid's points: one per 8x8 block's corner
constexpr double kPit = 1193182.0;
constexpr double kUnit = 813440.2376280001;   // the part's time unit in PIT ticks (about 0.68 s)
constexpr float kIntroEnd = 8.0f;             // T: the intro's drops alone up to here
// The light: 63 at rest (and up to 65, the texel as it is), then 64 steps
// towards white (S = level - 65: 0-64, white at 129). The table has a row
// per step; 64 = 2^6, so S / 64 is a shift.
constexpr int kRest = 63, kHighlight = 65, kShift = 6, kSteps = 1 << kShift, kTop = kHighlight + kSteps,
              kRows = kSteps + 1;

// A drop in the pond: where (grid cells, 0-40 across, 0-25 down) and when
// (T) it fell. The ring's radius is 8 cells per T.
struct Drop {
    float x, y, t;
    bool first = false;     // the intro's first drop: its own strength
};

class Pond {
public:
    Pond();
    // The intro at CLOCK (PIT ticks since the part began, up to T 8): the
    // grid, the picture and the DAC as the intro has them.
    void frame(int32_t clock);
    static float partTime(int32_t clock) { return (float)((double)clock / kUnit); }

    // The endless pond at T: DROPS are the drops fallen so far (finished ones
    // may be removed). The palette comes in from white over T 0-1.5 and stays
    // blue. The 32-bit picture is drawn from the water computed at each of
    // its pixels when WxH is given (sharp ring fronts), else from the grid's
    // points (the 256-colour picture always uses the grid).
    void pondFrame(float t, const std::vector<Drop>& drops, int w = 0, int h = 0);
    // The intro's three drops
    static std::vector<Drop> introDrops();
    // A drop is done when its ring has left the screen
    static bool dropDone(const Drop& d, float t);

    const uint8_t* screen() const { return screen_.data(); }   // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit, as the intro writes it
    // the DAC as shown: the same, but 64 (which a 6-bit DAC wraps to 0) kept at 63
    const uint8_t* shownDac() const { return shown_; }
    const uint8_t* texture() const { return tex_.data(); }     // 256x256, the marble
    // the light table: kRows rows (S = level - 65, 0-64) of 256 texels
    const uint8_t* lightTable() const { return light_.data(); }
    // the grid as the intro holds it: 41 x 26 x (u, v, light), 3198 dwords
    const uint8_t* grid() const { return reinterpret_cast<const uint8_t*>(grid_.data()); }
    // the picture in 256 colours, as the intro shows it (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, at any size (WxH, shown at 4:3 as
    // 320x200 is): u, v and the light interpolated per pixel at full
    // precision from the water (the grid, or pondFrame()'s at each pixel), the
    // marble filtered (Catmull-Rom), the light levels and the palettes computed
    // without rounding. Call after frame() or pondFrame().
    void toTrueColor(uint32_t* out, int w = W, int h = H) const;
    // The marble the 32-bit picture uses: 256 (the intro's) or 512 (the same
    // marble without the steps of the intro's warp, with one more octave of
    // detail; made on first use)
    void setMarble(int size);
    int marble() const { return marble_; }
    const uint8_t* texture512() const { return tex512_.data(); }   // 512x512, after setMarble(512)

private:
    // A point of the grid: the texture's u and v (texels) and the light
    // level, in 8.24 fixed point. The drops leave them in 16.16, and they
    // are then multiplied by 4096.
    struct Point {
        uint32_t u, v, light;
    };
    static_assert(sizeof(Point) == 12, "the intro's layout");
    using Grid = std::array<Point, kGridW * kGridH>;

    void precalc();                 // the texture, as the intro's precalculation makes it
    void makeLightTable();          // the light table
    void precalc512();              // the marble at 512x512 (32-bit picture)
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    // the same gradient unrounded (32-bit colour)
    static void gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    void palettes();

    // grid.cpp: the intro's routines
    void gridMap();                     // the grid onto the screen
    void bubbles(float t);              // the three drops, into the grid

    // the palettes and the DAC
    enum { kBlue, kGrey };              // black - blue - white, black - white
    void fromWhite(int32_t k);          // grey from white (K 0: white, 64: grey)
    void toBlue(int32_t k);             // grey to blue (K 0: grey, 64: blue)
    void blue();                        // the blue palette as it is

    Grid grid_{};
    // The water the 32-bit picture is drawn from: u and v (texels) and the
    // light level at NX x NY points, CX and CY pixels apart (of 320x200), the
    // first at (OX, OY).
    struct Field {
        int nx = 0, ny = 0;
        double cx = 8, cy = 8, ox = 0, oy = 0;
        std::vector<float> u, v, l;
    };
    Field field_;
    void fieldFromGrid();                   // the field at the grid's points
    // the texture, the light table, the screen
    std::vector<uint8_t> tex_, light_, screen_;
    std::vector<uint8_t> tex512_;           // the 512x512 marble, once asked for
    int marble_ = 256;
    uint8_t pal_[2][768], dac_[768], shown_[768];
    float palF_[2][768], dacF_[768];        // the same, unrounded (6-bit scale, 0-63)
    bool dacSet_ = false;           // the palette written (else a start past the fades stays white)
};

}  // namespace pond
