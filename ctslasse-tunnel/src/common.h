// What every module shares: the intro's floating point, the screen, the
// part's clock and the grid.
#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <limits>

namespace tunnel {

// The intro's floating point is the x87's: 80 bits, rounding to nearest.
// That is long double with GCC or Clang on x86; the code evaluates its
// expressions in it, in the intro's order, rounded to float or double where
// the intro stores a value. Elsewhere the picture would not be exact.
using X = long double;
static_assert(std::numeric_limits<X>::digits == 64,
              "long double must be the x87's 80-bit format (GCC or Clang on x86) for the exact picture");

// The screen: VGA mode 13h
constexpr int W = 320, H = 200;

// The clock: PIT ticks since the part began. The part counts in its own
// unit, T (about 0.68 s, a beat of the music).
constexpr double kPit = 1193182.0;            // PIT ticks per second
constexpr double kUnit = 813440.2376280001;   // PIT ticks per T
constexpr float kEnd = 72.0f;                 // T: faded out (the music moves on just before)
inline float partTime(int32_t clock) { return (float)((double)clock / kUnit); }

// The grid: 41 x 26 points, the corners of the screen's 40 x 25 blocks of
// 8x8 pixels. A point holds where it reads the texture, u and v (texels),
// and its light level, in 8.24 fixed point (u and v wrap at 256 texels).
// The effects write them 4096 times smaller (a texel or a level is 4096
// there); blend() or a shift by 12 brings them to this.
constexpr int kGridW = 41, kGridH = 26;
struct Point {
    uint32_t u, v, light;
};
static_assert(sizeof(Point) == 12, "the intro's layout");
using Grid = std::array<Point, kGridW * kGridH>;   // 3198 dwords, as the intro holds it

}  // namespace tunnel
