// The texture, as the intro's precalculation (18A6Ch) makes it: three
// fractal tiles from a random generator, one warped by the other two, and
// the logo pressed into the result.
#include "precalc/texture.h"

#include <cmath>

#include "common.h"
#include "precalc/logo.h"

namespace tunnel {

namespace {

// 16D9Ch: the precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level). Row by row, left to right,
// as the intro draws its random numbers in that order.
void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits) {
    const int32_t top = (int32_t)(~(0xFFFFFFFFu << (bits & 31)));
    auto at = [&](int32_t x, int32_t y) -> uint8_t& { return t[(y & 0xFF) << 8 | (x & 0xFF)]; };
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
void blur(const uint8_t* src, uint8_t* dst) {
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) {
            int32_t s = 0;
            for (int32_t dy = -1; dy <= 1; dy++)
                for (int32_t dx = -1; dx <= 1; dx++) s += src[((y + dy) & 0xFF) << 8 | ((x + dx) & 0xFF)];
            dst[y << 8 | x] = (uint8_t)(s / 9);
        }
}

// The warp's tables (18EAFh, 18F6Fh): how far a value 0-255 moves a pixel,
// across and down: -sin and cos of value/20 radians, by AMP pixels
struct Warp {
    int8_t tx[256], ty[256];
    explicit Warp(double amp) {
        for (int i = 0; i < 256; i++) {
            const X a = X(i) * 0.05;
            tx[i] = (int8_t)std::lrint(std::sin(a) * -amp);
            ty[i] = (int8_t)std::lrint(std::cos(a) * amp);
        }
    }
};

// 16E81h: D = B, each pixel moved by TX[S] across and TY[A] down (S may be D:
// each pixel is read before it is written)
void displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const Warp& w) {
    for (uint32_t k = 0; k < 0x10000; k++) {
        const int dx = w.tx[s[k]], dy = w.ty[a[k]];
        d[k] = b[(((k >> 8) + dy) & 0xFF) << 8 | ((k + dx) & 0xFF)];
    }
}

}  // namespace

// A marble: a fractal warped by two more through sine tables. With LOGO, as
// in the intro, it is then displaced by the logo's mask blurred four times,
// so the letters stand out of it; without, the marble is the texture.
std::vector<uint8_t> makeTexture(bool logo) {
    std::vector<uint8_t> t(0x30000), tex(0x10000);
    uint8_t *t0 = t.data(), *t1 = t0 + 0x10000, *t2 = t0 + 0x20000;
    plasma(0x12345678, t0, 0x2710, 8);   // rough: the marble itself
    plasma(0x4D3, t1, 0x64, 8);          // smooth: moves it across
    plasma(0x477, t2, 0x190, 8);         // moves it down
    const Warp marble(70.0);
    if (!logo) {
        displace(t2, t0, t1, tex.data(), marble);
        return tex;
    }
    displace(t2, t0, t1, t1, marble);
    logoMask(t2);
    blur(t2, t0);
    blur(t0, t2);
    blur(t2, t0);
    blur(t0, t2);
    displace(t2, t1, t2, tex.data(), Warp(10.0));
    return tex;
}

}  // namespace tunnel
