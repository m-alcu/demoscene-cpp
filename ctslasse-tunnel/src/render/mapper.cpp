// The intro's grid mapper (14DF4h).
#include "render/mapper.h"

#include <cmath>

namespace tunnel {

// The grid over 40x25 blocks of 8x8 pixels. In each block, u, v and the
// light level are interpolated bilinearly from the four corners: down the
// left edge row by row, then across each row pixel by pixel. A pixel is
// light[L][tex[v][u]], each taken at its whole part: the texture wraps at
// 256 texels, and the level L picks the light table's row.
//
// In texels and levels, as doubles. The intro's mapper works to 1/65536:
// the corners are cut down to that, and so are the steps (each a corner's
// difference divided by 8, rounded down), and the step across changes each
// row by 1/8 of the difference between the bottom and top edges' steps
// (rounded down too). These are all multiples of 1/65536 of a few hundred
// at most, which a double holds exactly (a float's 24 bits would not), so
// the sums are the intro's to the bit.
void drawGrid(const Grid& grid, const uint8_t* tex, const uint8_t* light, uint8_t* screen) {
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
    for (int by = 0; by < 25; by++)
        for (int bx = 0; bx < 40; bx++) {
            const Point& p00 = grid[by * kGridW + bx];
            const Point& p10 = (&p00)[1];
            const Point& p01 = (&p00)[kGridW];
            const Point& p11 = (&p00)[kGridW + 1];
            Uvl across = step(p00, p10);              // per pixel along the row
            const Uvl down = step(p00, p01);          // the left edge, per row
            const Uvl bottom = step(p01, p11);
            const Uvl turn = {cut((bottom.u - across.u) / 8), cut((bottom.v - across.v) / 8),
                              cut((bottom.l - across.l) / 8)};   // the step across, per row
            Uvl left = {cut(value(p00.u)), cut(value(p00.v)), cut(value(p00.light))};
            uint8_t* row = screen + by * 8 * W + bx * 8;
            for (int y = 0; y < 8; y++, row += W) {
                Uvl q = left;
                for (int x = 0; x < 8; x++) {
                    row[x] = light[whole(q.l) << 8 | tex[whole(q.v) << 8 | whole(q.u)]];
                    q += across;
                }
                left += down;
                across += turn;
            }
        }
}

void toArgb(const uint8_t* screen, const uint8_t* dac, uint32_t* out) {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)(dac[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    for (int i = 0; i < W * H; i++) out[i] = lut[screen[i]];
}

}  // namespace tunnel
