// Part 8's grid routines: the grid mapper and the intro's drops.
//
// They give the intro's results bit for bit (the grid: tests/ref.txt). The floating
// point is the x87's (see X in pool.h): each expression is evaluated in long
// double, in the intro's order, and rounded to float or double where the
// intro stores a value, or to the nearest integer (lrint) where it does
// FRNDINT/FISTP.
#include <algorithm>
#include <cmath>

#include "pool.h"

namespace piscina {

namespace {

// max(cos A, 0), as a float
float cosPos(float a) {
    const float c = (float)std::cos(X(a));
    return 0 > c ? 0.0f : c;
}

}  // namespace

// The grid over 40x25 blocks of 8x8 pixels. In each block, u, v
// and the light level are interpolated bilinearly from the four corners:
// down the left edge row by row, then across each row pixel by pixel. A
// pixel is light[S][tex[v][u]], each taken at its whole part: the texture
// wraps at 256 texels, and S = level - 65 is the table's row (under 65,
// the light at rest: row 0, the texel as it is).
//
// In texels and levels, as doubles. The intro's mapper works to 1/65536:
// the corners are cut down to that, and so are the steps (each a corner's
// difference divided by 8, rounded down), and the step across changes each
// row by 1/8 of the difference between the bottom and top edges' steps
// (rounded down too). These are all multiples of 1/65536 of a few hundred
// at most, which a double holds exactly (a float's 24 bits would not), so
// the sums are the intro's to the bit.
void Pool::gridMap() {
    struct Uvl {
        double u, v, l;
        Uvl& operator+=(const Uvl& o) { return u += o.u, v += o.v, l += o.l, *this; }
    };
    constexpr double kFrac = 65536.0;                                       // the mapper's precision
    auto cut = [](double x) { return std::floor(x * kFrac) / kFrac; };      // down to a multiple of 1/65536
    auto value = [](uint32_t x) { return x / 16777216.0; };                 // the grid's 8.24: 0-256
    // b - a, the shorter way round the 256 (as the grid's values wrap)
    auto diff = [&](uint32_t a, uint32_t b) { return (int32_t)(b - a) / 16777216.0; };
    auto step = [&](const Point& a, const Point& b) {   // (b - a) / 8
        return Uvl{cut(diff(a.u, b.u) / 8), cut(diff(a.v, b.v) / 8), cut(diff(a.light, b.light) / 8)};
    };
    auto whole = [](double x) { return (int)std::floor(x) & 0xFF; };     // the integer part, modulo 256
    const uint8_t* tex = tex_.data();
    const uint8_t* light = light_.data();
    for (int by = 0; by < 25; by++)
        for (int bx = 0; bx < 40; bx++) {
            const Point& p00 = grid_[by * kGridW + bx];
            const Point& p10 = (&p00)[1];
            const Point& p01 = (&p00)[kGridW];
            const Point& p11 = (&p00)[kGridW + 1];
            Uvl across = step(p00, p10);              // per pixel along the row
            const Uvl down = step(p00, p01);          // the left edge, per row
            const Uvl bottom = step(p01, p11);
            const Uvl turn = {cut((bottom.u - across.u) / 8), cut((bottom.v - across.v) / 8),
                              cut((bottom.l - across.l) / 8)};   // the step across, per row
            Uvl left = {cut(value(p00.u)), cut(value(p00.v)), cut(value(p00.light))};
            uint8_t* row = screen_.data() + by * 8 * W + bx * 8;
            for (int y = 0; y < 8; y++, row += W) {
                Uvl q = left;
                for (int x = 0; x < 8; x++) {
                    const int s = std::clamp(whole(q.l) - kHighlight, 0, kSteps);
                    row[x] = light[s << 8 | tex[whole(q.v) << 8 | whole(q.u)]];
                    q += across;
                }
                left += down;
                across += turn;
            }
        }
}

// The intro's three drops, into the grid. Each is a ring whose
// radius grows by 8 cells per T; the second and third start 10 and 18 cells
// behind the first. For a point inside a ring, A = its distance from the
// ring (negative):
// - it is pushed out from the centre by sin(A) · S times its distance, with
//   S = 2048 · 8 / (8 - A) for the first drop, 2730.67 · 4 / (4 - A) for
//   the others;
// - its light rises by max(cos A, 0) · S · 50 over 3F000h.
// u and v are in 16.16 here (a cell is 8000h: 8 texels).
void Pool::bubbles(float t) {
    const float radius = (float)(X(t) * 8.0f);
    struct Ring {
        float a = 0, s = 0;     // A and S, both 0 outside the ring
    };
    auto first = [&](int dx, int dy) {
        Ring r;
        r.a = (float)(std::sqrt(X(dx * dx + dy * dy)) - X(radius));
        r.s = (float)(X(8.0f) * (X(2048.0f) / (X(8.0f) - r.a)));
        return 0 < r.a ? Ring{} : r;
    };
    auto later = [&](int dx, int dy, double behind) {
        Ring r;
        r.a = (float)(std::sqrt(X(dx * dx + dy * dy)) - X(radius) + behind);
        r.s = (float)(X(2730.666666666666) / (X(4.0f) - r.a) * 4.0);
        return 0 < r.a ? Ring{} : r;
    };
    for (int gy = 0; gy < kGridH; gy++)
        for (int gx = 0; gx < kGridW; gx++) {
            // from the centres (20, 12), (10, 7), (27, 9)
            const int x1 = gx - 20, y1 = gy - 12, x2 = gx - 10, y2 = gy - 7, x3 = gx - 27, y3 = gy - 9;
            const Ring r1 = first(x1, y1), r2 = later(x2, y2, 10.0), r3 = later(x3, y3, 18.0);
            const float g1 = (float)(std::sin(X(r1.a)) * r1.s);
            const float g2 = (float)(std::sin(X(r2.a)) * r2.s);
            const X g3 = std::sin(X(r3.a)) * r3.s;
            const X u = X(x1) * g1 + gx * 0x8000 + X(x2) * g2 + X(x3) * g3;
            const X v = X(y1) * g1 + gy * 0x8000 + X(y2) * g2 + X(y3) * g3;
            // the light, summed through floats
            const float l1 = (float)(X(cosPos(r1.a)) * (float)(X(r1.s) * 50.0f));
            const float l12 = (float)(X(cosPos(r2.a)) * (float)(X(r2.s) * 50.0f) + (X(l1) + 258048.0f));
            const X light = X(cosPos(r3.a)) * (float)(X(r3.s) * 50.0f) + l12;
            grid_[gy * kGridW + gx] = {(uint32_t)std::lrint(u), (uint32_t)std::lrint(v),
                                       (uint32_t)std::lrint(light)};
        }
}

}  // namespace piscina
