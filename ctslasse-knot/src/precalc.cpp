// The textures and the palette the knot needs, made as the intro's
// precalculation (18A6Ch) makes them. Each texture is a 256x256 tile
// addressed by (row << 8 | column), so x and y wrap.
//
//   hexes_  ([2B4C0h] + 80000h): hexagons in three colours, blurred: the
//           background;
//   plasma_ ([2B4C0h] + 70000h): an 8-level fractal noise displaced by two
//           sine-warped tables, times 32: which of the 8 colour ramps;
//   light_  ([2B4C0h] + 60000h): a lighting table, a soft spot with a hot
//           centre: the shade within the ramp, environment-mapped.
#include "knot.h"

namespace knot {

namespace {

// 16D9Ch: the generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// 2^Y as the intro's pow tail computes it (FPREM, F2XM1, FSCALE)
X pow2(X y) {
    Fpu f;
    f.fld(y);
    f.exp2();
    return f.st(0);
}

// The 3x3 sum around (X, Y), wrapping.
int32_t boxSum(const uint8_t* t, int32_t x, int32_t y) {
    int32_t s = 0;
    for (int32_t dy = -1; dy <= 1; dy++)
        for (int32_t dx = -1; dx <= 1; dx++) s += t[((y + dy) & 0xFF) << 8 | ((x + dx) & 0xFF)];
    return s;
}

}  // namespace

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level). Eight levels, the step
// from 256 down to 2: first the square's centres (the average of its four
// corners plus a random part times 3), then the midpoints of its left and
// top sides (the average of the two corners and the two centres beside
// them, plus a random part times 2). Row by row, left to right, as the
// intro draws its random numbers in that order.
void Knot::plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits) {
    const int32_t top = (int32_t)(~(0xFFFFFFFFu << (bits & 31)));
    auto at = [&](int32_t x, int32_t y) -> uint8_t& { return t[(y & 0xFF) << 8 | (x & 0xFF)]; };
    // 16DAFh: SUM / 4 plus the random part, clamped
    auto put = [&](int32_t x, int32_t y, int32_t sum, int32_t mul) {
        const int32_t r = (int32_t)next(seed) * mul * (int32_t)amp >> 17;
        const int32_t v = (sum + r + 2) >> 2;
        at(x, y) = (uint8_t)(v < 0 ? 0 : v > top ? top : v);
    };
    t[0] = (uint8_t)(next(seed) & (uint32_t)top);
    for (int32_t half = 0x80; half; half >>= 1, amp = (uint32_t)((int32_t)amp >> 1)) {
        const int32_t step = 2 * half;
        for (int32_t y = 0; y < 0x100; y += step)          // 16DE6h: the centres
            for (int32_t x = 0; x < 0x100; x += step)
                put(x + half, y + half, at(x, y) + at(x + step, y) + at(x + step, y + step) + at(x, y + step), 3);
        for (int32_t y = 0; y < 0x100; y += step)          // 16E19h: the sides
            for (int32_t x = 0; x < 0x100; x += step) {
                put(x, y + half, at(x, y) + at(x, y + step) + at(x + half, y + half) + at(x - half, y + half), 2);
                put(x + half, y, at(x, y) + at(x + step, y) + at(x + half, y + half) + at(x + half, y - half), 2);
            }
    }
}

// 16EA6h: the 3x3 average of the tile (wrapping).
void Knot::blur(const uint8_t* src, uint8_t* dst) {
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) dst[y << 8 | x] = (uint8_t)(boxSum(src, x, y) / 9);
}

// 185D5h: hexagons in three colours. Down, bands of 128 (DY a row, so 16
// rows), every other one shifted by 128 across; across, cells 256/3 wide
// (DX a column), so the shift is a cell and a half. The slanted sides are
// where the position across the cell meets the height in the band. A
// cell's number mod 3 picks its colour, so no two neighbours share one.
void Knot::hexes(uint8_t* out, uint32_t dx, uint32_t dy, uint8_t c0, uint8_t c1, uint8_t c2) {
    const uint8_t colour[3] = {c0, c1, c2};
    for (int32_t y = 0; y < 0x100; y++) {
        const int32_t v = (int32_t)((uint32_t)y * dy & 0xFF);
        const int32_t shift = v & 0x80 ? 0x80 : 0;      // odd bands: a cell and a half across
        const int32_t h = (v & 0x7F) * 3;               // the height in the band
        for (int32_t x = 0; x < 0x100; x++) {
            const int32_t u = ((int32_t)dx * x + shift) * 3;
            const int32_t f = u & 0xFF;                 // the position across the cell
            int32_t cell = u >> 8;
            if (f + h < 0x80) cell++;
            if (f - h >= 0x80) cell += 2;
            *out++ = colour[cell % 3];
        }
    }
}

// 18FF9h: the lighting table, a soft spot around the tile's centre. With R
// the squared distance over 128^2 (at most 0.9):
//
//     (128 (1 - R/6)^100 + 96 (1 - R) + 30) / 8
//
// a hot, narrow peak on a broad slope, 5 at the edge, 31 at the centre.
// The intro makes 14 tables in this loop, against two centres; the knot
// reads only this one, and each point's x87 work leaves the stack as it
// found it, so the others are left out. The arithmetic is the intro's: 80
// bits, R and 1 - R/6 stored as singles, 96 (1 - R) as a double, the
// power through FYL2X and the pow tail.
void Knot::lighting() {
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) {
            const int32_t dx = x - 0x80, dy = y - 0x80;
            const X d = (X)(dx * dx + dy * dy) * (X)6.103515625e-05;     // / 16384
            const float r = d > (X)0.9 ? 0.9f : (float)d;
            const float base = (float)(1 - (X)r * (X)0.1666666716337204f);
            const double slope = (double)((1 - (X)r) * (X)96.0f);
            const X v = pow2(x87::fyl2x(100, base)) * 128 + (X)slope + 30;
            light_[y << 8 | x] = (uint8_t)(x87::fist32(v) >> 3);
            // truecolor: unrounded; (round(v) >> 3) is v / 8 - 7/16 on average
            const float l = (float)(double)v * 0.125f - 0.4375f;
            lightF_[y << 8 | x] = l < 0 ? 0 : l > 31 ? 31 : l;
        }
}

// 189ECh: eight ramps of 32 colours, each black -> a colour (18 steps) ->
// white (14 steps), the colours stepping through bluish greys and purples.
void Knot::palette8() {
    // 18493h: N entries from C0 towards C1 (not reaching it)
    auto gradient = [](uint8_t* d, const int32_t* c0, const int32_t* c1, int32_t n) {
        for (int32_t i = 0; i < n; i++)
            for (int k = 0; k < 3; k++) *d++ = (uint8_t)((c0[k] * (n - i) + c1[k] * i) / n);
    };
    const int32_t black[3] = {0, 0, 0}, white[3] = {0x3F, 0x3F, 0x3F};
    for (int32_t i = 0; i < 8; i++) {
        const int32_t c[3] = {0x10 + 4 * i + 3 * ((i + 2) % 3), 0x10 + 3 * i + 4 * (i & 1), 0x10 + 2 * i + 2 * (i % 3)};
        for (int k = 0; k < 3; k++) base_[i][k] = (float)c[k];
        uint8_t* d = pal_ + i * 0x60;
        gradient(d, black, c, 0x12);                                // 18547h
        gradient(d + 0x12 * 3, c, white, 0x0E);
    }
}

void Knot::precalc() {
    static uint8_t t0[0x10000], t1[0x10000], t2[0x10000];

    // the knot's texture: a 3-bit noise (T0) displaced by two tables made
    // from two 8-bit noises (T1, T2) and sines (18B76h)
    plasma(0x17091977, t0, 0x1F4, 3);
    plasma(0x4D3, t1, 0x1F4, 8);
    plasma(0x477, t2, 0x1F4, 8);
    uint8_t tx[0x100], ty[0x100];
    for (int32_t i = 0; i < 0x100; i++) {
        const X a = (X)i * (X)0.04;
        tx[i] = (uint8_t)x87::fist32((X)(t2[i] / 2) - x87::fsin(a) * (X)80.0);
        ty[i] = (uint8_t)x87::fist32((X)(t1[i] / 2) + x87::fcos(a) * (X)80.0);
    }
    // 16E81h: each pixel of T0 moved by TX[T1] across and TY[T2] down
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) {
            const int32_t k = y << 8 | x;
            plasma_[k] = (uint8_t)(t0[((y + ty[t2[k]]) & 0xFF) << 8 | ((x + tx[t1[k]]) & 0xFF)] << 5);
        }

    // the background
    hexes(t0, 5, 8, 0x45, 0x4C, 0x54);
    blur(t0, hexes_);
    // truecolor: the same 3x3 box, not truncated, as the shade in ramp 2 (40h)
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) hexF_[y << 8 | x] = (float)boxSum(t0, x, y) / 9.0f - 0x40;

    lighting();
    palette8();
}

}  // namespace knot
