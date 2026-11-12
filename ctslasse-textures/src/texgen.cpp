// The generators, as ctslasse-knot/src/precalc.cpp has them, parameterised.
#include "texgen.h"

#include <cmath>
#include <vector>

namespace texlab {

namespace {

// 16D9Ch: the generator; the new seed's high half (signed)
inline int32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (int32_t)seed >> 16;
}

inline int32_t at(int32_t x, int32_t y) { return (y & 0xFF) << 8 | (x & 0xFF); }

void blur(const uint8_t* src, uint8_t* dst) {
    for (int32_t y = 0; y < kSize; y++)
        for (int32_t x = 0; x < kSize; x++) {
            int32_t s = 0;
            for (int32_t dy = -1; dy <= 1; dy++)
                for (int32_t dx = -1; dx <= 1; dx++) s += src[at(x + dx, y + dy)];
            dst[at(x, y)] = (uint8_t)(s / 9);
        }
}

}  // namespace

void plasma(const PlasmaParams& p, uint8_t* t) {
    const int32_t bits = p.bits < 1 ? 1 : p.bits > 8 ? 8 : p.bits;
    const int32_t top = (1 << bits) - 1;
    uint32_t seed = p.seed;
    int32_t amp = p.amp;
    // SUM / 4 plus the random part, clamped (16DAFh)
    auto put = [&](int32_t x, int32_t y, int32_t sum, int32_t mul) {
        const int32_t r = (int32_t)((int64_t)next(seed) * mul * amp >> 17);
        const int32_t v = (sum + r + 2) >> 2;
        t[at(x, y)] = (uint8_t)(v < 0 ? 0 : v > top ? top : v);
    };
    for (int i = 0; i < kTexels; i++) t[i] = 0;
    t[0] = (uint8_t)(next(seed) & top);
    for (int32_t half = 0x80; half; half >>= 1) {
        const int32_t step = 2 * half;
        for (int32_t y = 0; y < kSize; y += step)
            for (int32_t x = 0; x < kSize; x += step)
                put(x + half, y + half, t[at(x, y)] + t[at(x + step, y)] + t[at(x + step, y + step)] + t[at(x, y + step)],
                    p.centreMul);
        for (int32_t y = 0; y < kSize; y += step)
            for (int32_t x = 0; x < kSize; x += step) {
                put(x, y + half, t[at(x, y)] + t[at(x, y + step)] + t[at(x + half, y + half)] + t[at(x - half, y + half)],
                    p.sideMul);
                put(x + half, y, t[at(x, y)] + t[at(x + step, y)] + t[at(x + half, y + half)] + t[at(x + half, y - half)],
                    p.sideMul);
            }
        // the intro halves with a shift; any other factor rounds towards zero
        amp = p.decay == 0.5f ? amp >> 1 : (int32_t)(amp * p.decay);
    }
}

void warp(const WarpParams& p, uint8_t* out) {
    std::vector<uint8_t> t0(kTexels), u(kTexels), v(kTexels);
    plasma(p.base, t0.data());
    plasma(p.u, u.data());
    plasma(p.v, v.data());
    const int32_t div = p.div < 1 ? 1 : p.div;
    uint8_t tx[256], ty[256];
    for (int32_t i = 0; i < 256; i++) {
        const double a = (double)i * p.freq + p.phase;
        tx[i] = (uint8_t)(int32_t)std::nearbyint(v[i] / div - std::sin(a) * p.amplitude);
        ty[i] = (uint8_t)(int32_t)std::nearbyint(u[i] / div + std::cos(a) * p.amplitude);
    }
    for (int32_t y = 0; y < kSize; y++)
        for (int32_t x = 0; x < kSize; x++) {
            const int32_t k = at(x, y);
            out[k] = (uint8_t)(t0[at(x + tx[u[k]], y + ty[v[k]])] << (p.shift & 7));
        }
}

void hexes(const HexParams& p, uint8_t* out) {
    std::vector<uint8_t> a(kTexels), b(kTexels);
    for (int32_t y = 0; y < kSize; y++) {
        const int32_t band = y * p.dy & 0xFF;
        const int32_t shift = band & 0x80 ? 0x80 : 0;  // every other band shifted across
        const int32_t h = (band & 0x7F) * 3;           // the height in the band
        for (int32_t x = 0; x < kSize; x++) {
            const int32_t w = (p.dx * x + shift) * 3;
            const int32_t f = w & 0xFF;                // the position across the cell
            int32_t cell = w >> 8;
            if (f + h < 0x80) cell++;
            if (f - h >= 0x80) cell += 2;
            a[at(x, y)] = (uint8_t)p.colour[((cell % 3) + 3) % 3];
        }
    }
    for (int i = 0; i < p.blur; i++) {
        blur(a.data(), b.data());
        a.swap(b);
    }
    for (int i = 0; i < kTexels; i++) out[i] = a[i];
}

void lighting(const LightParams& p, uint8_t* out) {
    const double r2 = (double)p.radius * p.radius;
    for (int32_t y = 0; y < kSize; y++)
        for (int32_t x = 0; x < kSize; x++) {
            const double dx = x - p.cx, dy = y - p.cy;
            double r = r2 > 0 ? (dx * dx + dy * dy) / r2 : 1;
            if (r > p.rmax) r = p.rmax;
            r = (float)r;                               // the intro keeps R as a single
            const double base = 1 - r / p.div;
            const double peak = base > 0 ? std::pow(base, (double)p.power) : 0;
            const double v = p.peak * peak + p.slope * (1 - r) + p.offset;
            // the intro rounds, then divides (a shift right by 3)
            const int32_t s = (int32_t)std::floor(std::nearbyint(v) / (p.scale > 0 ? p.scale : 1));
            out[at(x, y)] = (uint8_t)(s < 0 ? 0 : s > 255 ? 255 : s);
        }
}

void palette8Colours(int c[8][3]) {
    for (int i = 0; i < 8; i++) {
        c[i][0] = 0x10 + 4 * i + 3 * ((i + 2) % 3);
        c[i][1] = 0x10 + 3 * i + 4 * (i & 1);
        c[i][2] = 0x10 + 2 * i + 2 * (i % 3);
    }
}

PaletteParams::PaletteParams() { palette8Colours(colour); }

void palette(const PaletteParams& p, uint8_t* rgb) {
    // N entries from C0 towards C1, not reaching it (18493h)
    auto gradient = [](uint8_t* d, const int* c0, const int* c1, int n) {
        for (int i = 0; i < n; i++)
            for (int k = 0; k < 3; k++) *d++ = (uint8_t)((c0[k] * (n - i) + c1[k] * i) / n);
    };
    const int black[3] = {0, 0, 0}, white[3] = {0x3F, 0x3F, 0x3F};
    const int split = p.split < 1 ? 1 : p.split > 31 ? 31 : p.split;
    for (int i = 0; i < 8; i++) {
        uint8_t* d = rgb + i * 32 * 3;
        gradient(d, black, p.colour[i], split);
        gradient(d + split * 3, p.colour[i], white, 32 - split);
    }
}

uint32_t crc32(const uint8_t* p, unsigned n) {
    static uint32_t table[256];
    if (!table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

}  // namespace texlab
