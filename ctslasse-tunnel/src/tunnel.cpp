// The texture, the light tables and the palettes, and the frame of part 8
// (1C776h).
#include <algorithm>
#include <cmath>
#include <cstring>
#include <thread>

#include "tunnel.h"

namespace tunnel {

namespace {

#include "data.inc"

// 16D9Ch: the precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// ROWS(from, to) over rows 0..H, in bands, one per thread (or in this one)
template <class Rows>
void inBands(int h, bool threaded, const Rows& rows) {
    const int n = threaded ? (int)std::clamp(std::thread::hardware_concurrency(), 1u, 16u) : 1;
    std::vector<std::thread> threads;
    for (int b = 1; b < n; b++) threads.emplace_back(rows, h * b / n, h * (b + 1) / n);
    rows(0, h / n);
    for (std::thread& t : threads) t.join();
}

}  // namespace

// --- the texture --------------------------------------------------------------------------

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level). Row by row, left to right,
// as the intro draws its random numbers in that order.
void Tunnel::plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits) {
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
void Tunnel::blur(const uint8_t* src, uint8_t* dst) {
    for (int32_t y = 0; y < 0x100; y++)
        for (int32_t x = 0; x < 0x100; x++) {
            int32_t s = 0;
            for (int32_t dy = -1; dy <= 1; dy++)
                for (int32_t dx = -1; dx <= 1; dx++) s += src[((y + dy) & 0xFF) << 8 | ((x + dx) & 0xFF)];
            dst[y << 8 | x] = (uint8_t)(s / 9);
        }
}

// 18588h: alternate runs of C1 and C2 (-1: left as they are) over 64K
void Tunnel::rle(uint8_t* dst, const uint8_t* data, int c1, int c2) {
    for (uint32_t at = 0; at < 0x10000; data += 2) {
        if (c1 >= 0) std::memset(dst + at, c1, data[0]);
        at += data[0];
        if (c2 >= 0) std::memset(dst + at, c2, data[1]);
        at += data[1];
    }
}

// 16E81h: D = B, each pixel moved by TX[S] across and TY[A] down (S may be D:
// each pixel is read before it is written)
void Tunnel::displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const int8_t* tx,
                      const int8_t* ty) {
    for (uint32_t k = 0; k < 0x10000; k++) {
        const int dx = tx[s[k]], dy = ty[a[k]];
        d[k] = b[(((k >> 8) + dy) & 0xFF) << 8 | ((k + dx) & 0xFF)];
    }
}

// The texture part 8 shows ([2B4C0h] + 130000h, 18A6Ch's last tile): a
// marble (a fractal warped by two more through sine tables). With LOGO, as
// in the intro, it is then displaced by the logo's mask blurred four times,
// so the letters stand out of it; without, the marble is the texture.
void Tunnel::precalc(bool logo) {
    std::vector<uint8_t> t(0x30000);
    uint8_t *t0 = t.data(), *t1 = t0 + 0x10000, *t2 = t0 + 0x20000;
    // 18EAFh, 18F6Fh: the warp's tables, sin and cos of i/20 radians, by AMP
    int8_t tx[256], ty[256];
    auto warp = [&](double amp) {
        for (int i = 0; i < 256; i++) {
            const X a = X(i) * 0.05;
            tx[i] = (int8_t)std::lrint(std::sin(a) * -amp);
            ty[i] = (int8_t)std::lrint(std::cos(a) * amp);
        }
    };
    plasma(0x12345678, t0, 0x2710, 8);
    plasma(0x4D3, t1, 0x64, 8);
    plasma(0x477, t2, 0x190, 8);
    warp(70.0);
    tex_.resize(0x10000);
    if (!logo) {
        displace(t2, t0, t1, tex_.data(), tx, ty);
        return;
    }
    displace(t2, t0, t1, t1, tx, ty);
    rle(t2, kLogoRuns, 0, 0xFF);
    blur(t2, t0);
    blur(t0, t2);
    blur(t2, t0);
    blur(t0, t2);
    warp(10.0);
    displace(t2, t1, t2, tex_.data(), tx, ty);
}

// Part 8's light tables, 130 rows of 256 (1C7C0h), one per light level L:
// - 0-64 map a texel J to J f + 128 (1 - f), f = e^(1.5 - (64 - L)/13) - 0.02,
//   at most 1 (1 from L 45): the low levels fogged towards index 128;
// - 65-129, the highlights: J + (L - 65)(255 - J) / 64, towards white.
// (Rows above 129 are never reached; they are left at 0.)
void Tunnel::lightTables() {
    light_.assign(0x10000, 0);
    for (int32_t row = 0; row <= 0x40; row++) {
        float f = (float)(std::exp(1.5 - X(0x40 - row) * 0.07692307692307693) + -0.02);
        if (1 < f) f = 1.0f;
        for (int32_t j = 0; j < 0x100; j++) {
            light_[row * 0x100 + j] = (uint8_t)std::lrint(X(j) * f + (1 - X(f)) * 128.0f);
            light_[(0x41 + row) * 0x100 + j] = (uint8_t)(row * (0xFF - j) / 64 + j);
        }
    }
}

void Tunnel::gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    int32_t ra = r0 * n, ga = g0 * n, ba = b0 * n, rb = 0, gb = 0, bb = 0;
    for (int32_t i = 0; i < n; i++) {
        *dst++ = (uint8_t)((rb + ra) / n);
        *dst++ = (uint8_t)((gb + ga) / n);
        *dst++ = (uint8_t)((bb + ba) / n);
        rb += r1, ra -= r0;
        gb += g1, ga -= g0;
        bb += b1, ba -= b0;
    }
}

void Tunnel::gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    for (int32_t i = 0; i < n; i++) {
        *dst++ = (float)(r1 * i + r0 * (n - i)) / n;
        *dst++ = (float)(g1 * i + g0 * (n - i)) / n;
        *dst++ = (float)(b1 * i + b0 * (n - i)) / n;
    }
}

Tunnel::Tunnel(bool logo) : screen_(W * H, 0) {
    precalc(logo);
    lightTables();
    // pal1: green-grey - purple - light blue - black - red - yellow;
    // pal2: black - blue - white; pal3: black - white. Rounded as the intro
    // has them, and unrounded for the 32-bit picture.
    auto both = [&](int p, int at, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
        gradient(pal_[p] + at, r0, g0, b0, r1, g1, b1, n);
        gradient(palF_[p] + at, r0, g0, b0, r1, g1, b1, n);
    };
    both(kPal1, 0x000, 5, 8, 1, 6, 3, 0x1E, 0x40);
    both(kPal1, 0x0C0, 6, 3, 0x1E, 0x0A, 0x23, 0x3C, 0x40);
    both(kPal1, 0x180, 0x0A, 0x23, 0x3C, 0, 0, 0, 0x40);
    both(kPal1, 0x240, 0, 0, 0, 0x3F, 0, 0, 0x20);
    both(kPal1, 0x2A0, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x20);
    both(kPal3, 0, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x100);
    both(kPal2, 0, 0, 0, 0, 0x10, 0x20, 0x40, 0x80);
    both(kPal2, 0x180, 0x10, 0x20, 0x40, 0x3F, 0x3F, 0x3F, 0x80);
    std::memset(dac_, 0x3F, sizeof dac_);  // the part before ends in white
    std::fill(dacF_, dacF_ + 768, 63.0f);
}

// The DAC: MODE 0 SRC towards white (K 0: white, 64: SRC), 1 SRC and MIX
// mixed (K 0: MIX, 64: SRC), 2 SRC faded (K 0: black). The unrounded DAC
// with it: the same mix, held at 63 (the 6-bit DAC wraps 64, the blue
// palette's middle, to 0).
void Tunnel::setDac(int src, int32_t k, int mix, int mode) {
    const uint8_t *s = pal_[src], *m = mix >= 0 ? pal_[mix] : nullptr;
    const float *sf = palF_[src], *mf = mix >= 0 ? palF_[mix] : nullptr;
    for (int i = 0; i < 768; i++) {
        int32_t v;
        float vf;
        if (mode == 0) {
            v = ((int32_t)s[i] * k + 0xFC0 - k * 0x3F) >> 6;
            vf = (sf[i] * k + 63.0f * (64 - k)) / 64;
        } else if (mode == 1) {
            v = ((int32_t)m[i] * (0x40 - k) + (int32_t)s[i] * k) >> 6;
            vf = (mf[i] * (64 - k) + sf[i] * k) / 64;
        } else {
            v = ((int32_t)s[i] * k) >> 6;
            vf = sf[i] * k / 64;
        }
        dac_[i] = (uint8_t)(v & 0x3F);
        dacF_[i] = std::clamp(vf, 0.0f, 63.0f);
    }
}

// --- the frame ---------------------------------------------------------------------------------

void Tunnel::frame(int32_t clock) {
    update(clock);
    gridMap();
}

void Tunnel::morph(int32_t clock, int32_t clockTo, float w) {
    // each frame on its own: the DAC as it stands at its time (the intro
    // writes it only while it changes)
    dacSet_ = false;
    update(clockTo);
    const Grid to = grid_;
    uint8_t dac[768];
    float dacF[768];
    std::memcpy(dac, dac_, sizeof dac), std::memcpy(dacF, dacF_, sizeof dacF);
    const float tTo = info_.t;
    dacSet_ = false;
    update(clock);
    const int64_t k = std::lround(std::clamp(w, 0.0f, 1.0f) * 4096);
    // u and v by their difference, wrapped (8.24: 2^32 is 256 texels); the light as it is
    auto wrapped = [&](uint32_t a, uint32_t b) { return (uint32_t)(a + (int64_t)(int32_t)(b - a) * k / 4096); };
    for (size_t i = 0; i < grid_.size(); i++) {
        Point& p = grid_[i];
        p.u = wrapped(p.u, to[i].u), p.v = wrapped(p.v, to[i].v);
        p.light = (uint32_t)(p.light + ((int64_t)to[i].light - p.light) * k / 4096);
    }
    for (int i = 0; i < 768; i++) {
        dac_[i] = (uint8_t)((dac_[i] * (4096 - k) + dac[i] * k + 2048) >> 12);
        dacF_[i] += (dacF[i] - dacF_[i]) * (float)k / 4096;
    }
    info_.morph = (float)k / 4096, info_.morphTo = tTo;
    gridMap();
}

namespace {

// 1C706h: an ease, (1 - cos(pi x)) / 2, X held to 0-1
X ease(float x) {
    if (0 > x) x = 0;
    if (1 < x) x = 1.0f;
    return (1 - std::cos(X(x) * 3.141592653589793)) * 0.5;
}

}  // namespace

// 1C776h: part 8 at CLOCK. T, in the part's unit, is float, as the intro
// keeps it; each value is computed in long double in the intro's order and
// rounded where the intro stores it.
void Tunnel::update(int32_t clock) {
    constexpr double pi = 3.141592653589793;
    const X t80 = X(clock) / 813440.2376280001;
    const float T = (float)t80;
    const double dT = (double)t80;
    // back in time (a loop, a seek), or the fade-out skipped: the palette as
    // it stands at T (the intro writes it only while it changes)
    if (T < lastT_ || (!fadeOut && T > 68)) dacSet_ = false;
    lastT_ = T;
    info_ = Info{};
    info_.t = T;
    if (!dacSet_) {
        // started past the fades (never in the intro): the palette in full
        const int p = T >= 12 ? kPal1 : T >= 1.5f ? kPal2 : -1;
        if (p >= 0) {
            std::memcpy(dac_, pal_[p], sizeof dac_);
            for (int i = 0; i < 768; i++) dacF_[i] = std::min(palF_[p][i], 63.0f);
        }
        dacSet_ = true;
    }
    // the palettes: in from white as greys (T 0-0.5), greys to blue
    // (0.5-1.5), blue to red (8-12), out to black (68-72)
    if (t80 < 0.5) setDac(kPal3, (int32_t)std::lrint(X(T) * 2.0f * 64.0f), -1, 0);
    else if (dT < 1.5) setDac(kPal2, (int32_t)std::lrint((X(dT) + -0.5) * 64.0), kPal3, 1);
    if (T > 8 && T < 12) setDac(kPal1, (int32_t)std::lrint((X(T) + -8.0f) * 16.0f), kPal2, 1);
    if (fadeOut && T > 68) setDac(kPal1, (int32_t)std::lrint((X(72.0f) - T) * 16.0f), -1, 2);

    if (T < 38) {
        // the drops (to T 12), the plane (from T 8), the tunnel (from T 33)
        if (T < 12) bubbles(T);
        if (T > 8 && T < 38) wobble(T);
        if (T > 33) {
            const X a = (X(T) + -38.0f) * 4096.0f;
            tunnel(5.0f, 500.0f, 0.0f, (int32_t)std::lrint(a * 23.1234), (int32_t)std::lrint(a * 70.0f), 0.0f);
        }
        // grid = grid a + plane b: b rising with the plane (T 8-12), and
        // falling as the tunnel comes in (T 33-38)
        float w = 0;
        if (T > 8) w = (float)((1 - std::cos((X(T) + -8.0f) * 0.25f * pi)) * 0.5);
        if (T > 12) w = 1.0f;
        if (T > 33 && T < 38) w = (float)((std::cos((X(T) + -33.0f) * 0.2f * pi) + 1) * 0.5);
        if (0 > w) w = 0;
        if (1 < w) w = 1.0f;
        w = (float)(X(w) * 4096.0f);
        const int32_t wb = (int32_t)std::lrint(X(w)), wa = (int32_t)std::lrint(X(4096.0f) - w);
        info_.planeShare = wb / 4096.0f;
        blend(wa, wb);
        return;
    }
    // the tunnel alone: its flight (u turning, v forward), then its twist,
    // zoom, wave and phase, set by one span of T after another
    const X a = (X(T) + -38.0f) * 4096.0f;
    const int32_t u0 = (int32_t)std::lrint(a * 23.1234), v0 = (int32_t)std::lrint(a * 70.0f);
    float zoom = 500.0f, twist = 1.0f, wave = 0;
    float phase = (float)(X(T) * 2.0f);
    if (T > 39) wave = (float)(ease((float)((X(T) + -39.0f) * 0.5f)) * 0.8);   // the walls start to wave
    if (T > 42) {   // the twist steps up, the wave swings
        twist = (float)std::nearbyint(X(T) + -41.0f);
        const double d = (double)((50.0f - X(T)) * 0.1);
        wave = (float)(std::cos((X(T) + -42.0f) * pi) * d);
    }
    if (T > 46) {   // twist 5, the wave eased down to 0.2, the phase spinning
        const float s = (float)(X(T) + -46.0f);
        wave = (float)(0.4 - ease((float)((X(T) + -46.0f) * 2.0f)) * 0.2);
        twist = 5.0f;
        phase = (float)(ease(s) * s * 3.0f + phase);
    }
    if (T > 48) {   // the zoom breathes
        const float s = (float)(X(T) + -48.0f);
        const double d = (double)(ease((float)((X(T) + -48.0f) * 0.125f)) * 0.8);
        zoom = (float)((std::sin(X(s) * pi) * d + 1) * 500.0);
    }
    if (T > 55.5) {   // twist 3, wave 0.6, the phase at 2T
        twist = 3.0f, wave = 0.6f;
        phase = (float)(X(T) * 2.0f);
    }
    if (T > 56) {
        const double d = (double)(ease((float)((60.0f - X(T)) * 0.25f)) * 0.8);
        zoom = (float)((std::sin((X(T) + -48.0f) * pi) * d + 1) * 500.0);
    }
    if (T > 60) {   // the wave dies out, swinging
        const double d = (double)(std::cos((X(T) + -60.0f) * pi) * 0.6);
        wave = (float)(ease((float)((66.0f - X(T)) * 0.25f)) * d);
    }
    if (T > 62) {   // the zoom breathes at 1.5T, +-85%
        const double d = (double)(ease((float)(X(T) + -62.0f)) * 0.85);
        zoom = (float)((std::sin(X(T) * 1.5) * d + 1) * 500.0);
    }
    tunnel(twist, zoom, phase, u0, v0, wave);
    for (Point& p : grid_) p.u <<= 12, p.v <<= 12, p.light <<= 12;
}

void Tunnel::toArgb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)(dac_[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    const uint8_t* s = screen();
    for (int i = 0; i < W * H; i++) out[i] = lut[s[i]];
}

// --- 32-bit colour --------------------------------------------------------------------------

// The grid mapper's picture without its roundings, at any size. The grid's
// points are taken from 8.24 to texels and levels. u and v wrap at 256
// texels (2^32), as the mapper's bytes do: the points around a pixel are
// placed from one of them by their differences, so they interpolate
// without jumps. (Not the whole grid from one point, as ctslasse-pond
// does: the tunnel's u, its angle, goes once round the centre, and the
// rows above and below it would come out 256 texels apart.) Each pixel's centre is placed on the 320x200 screen and u, v
// and the light there are interpolated between the points around it:
// bilinearly as the mapper does, or (SMOOTH) with Catmull-Rom between the
// 4x4 around, which goes through the points with a continuous slope: the
// tunnel's depth, zoom / r, is curved, and bilinear shows it as 8x8
// facets. Then, kept fractional:
// - the texture is sampled between its 4x4 nearest texels (Catmull-Rom),
//   wrapping at 256 as the mapper's byte does;
// - the light level is continuous, the table's formulas at it: under 64,
//   fog, J f + 128 (1 - f) with f = e^(1.5 - (64 - L) / 13) - 0.02 (at
//   most 1); from 65, towards white by (L - 65) / 64;
// - the palette index this gives is fractional too, read between two DAC
//   entries of the unrounded palette.
// The tunnel's centre (the far end) has u and v changing faster than the
// grid can follow, as in the intro: there the fog leaves only index 128.
void Tunnel::toTrueColor(uint32_t* out, int w, int h, bool smooth) const {
    constexpr int nx = kGridW, ny = kGridH, n = nx * ny;
    // the grid: u and v as they are (8.24, wrapping), the light in levels
    uint32_t gu[n], gv[n];
    float fl[n];
    {
        const uint8_t* g = grid();
        for (int i = 0; i < n; i++) {
            uint32_t l;
            std::memcpy(&gu[i], g + 12 * i, 4), std::memcpy(&gv[i], g + 12 * i + 4, 4), std::memcpy(&l, g + 12 * i + 8, 4);
            fl[i] = (float)(l / 16777216.0);
        }
    }
    // the fog, per level (0-64, by tenths)
    constexpr int fogSteps = 640;
    float fog[fogSteps + 2];
    for (int i = 0; i <= fogSteps + 1; i++)
        fog[i] = (float)std::min(1.0, std::exp(1.5 - (64.0 - i * 64.0 / fogSteps) / 13.0) - 0.02);
    const uint8_t* tex = texture();
    float lut[257 * 3];                           // the DAC in 0-255 (the last entry repeated)
    for (int i = 0; i < 768; i++) lut[i] = dacF_[i] * (255.0f / 63.0f);
    for (int c = 0; c < 3; c++) lut[768 + c] = lut[765 + c];
    struct Cubic {
        float w[4];
    };
    // Catmull-Rom's weights for the points before and after: at 0 the
    // second point, at 1 the third
    auto cubic = [](float t) {
        const float t2 = t * t, t3 = t2 * t;
        return Cubic{{0.5f * (-t3 + 2 * t2 - t), 0.5f * (3 * t3 - 5 * t2 + 2), 0.5f * (-3 * t3 + 4 * t2 + t),
                      0.5f * (t3 - t2)}};
    };
    // a pixel's place in the grid: its four points (clamped at the edges)
    // and their weights
    struct Place {
        int at[4];
        Cubic c;
    };
    auto place = [&](int p, int size, int screen, int points) {
        const double s = ((p + 0.5) * screen / size - 0.5) / 8;
        const double c = std::clamp(s, 0.0, points - 1.0);
        const int i = std::min((int)c, points - 2);
        const float t = (float)(c - i);
        Place r{{}, smooth ? cubic(t) : Cubic{{0, 1 - t, t, 0}}};
        for (int k = 0; k < 4; k++) r.at[k] = std::clamp(i - 1 + k, 0, points - 1);
        return r;
    };
    std::vector<Place> cols(w);
    for (int px = 0; px < w; px++) cols[px] = place(px, w, W, nx);
    auto rows = [&](int from, int to) {
        // one row of the grid, interpolated down to this pixel row: u and v
        // from the second of the four points, by their differences
        constexpr float k = 1.0f / 16777216.0f;
        float u[nx], v[nx], l[nx];
        for (int py = from; py < to; py++) {
            const Place r = place(py, h, H, ny);
            for (int i = 0; i < nx; i++) {
                const int ref = r.at[1] * nx + i;
                float su = 0, sv = 0, sl = 0;
                for (int q = 0; q < 4; q++) {
                    const int m = r.at[q] * nx + i;
                    su += (float)(int32_t)(gu[m] - gu[ref]) * r.c.w[q];
                    sv += (float)(int32_t)(gv[m] - gv[ref]) * r.c.w[q];
                    sl += fl[m] * r.c.w[q];
                }
                u[i] = (float)(gu[ref] >> 8) / 65536.0f + su * k, v[i] = (float)(gv[ref] >> 8) / 65536.0f + sv * k;
                l[i] = sl;
            }
            uint32_t* o = out + (size_t)py * w;
            for (int px = 0; px < w; px++) {
                const Place& c = cols[px];
                auto at = [&](const float* q) {
                    return q[c.at[0]] * c.c.w[0] + q[c.at[1]] * c.c.w[1] + q[c.at[2]] * c.c.w[2] +
                           q[c.at[3]] * c.c.w[3];
                };
                // across, from the second column by the differences, wrapped to +-128
                auto wrapped = [&](const float* q) {
                    const float b = q[c.at[1]];
                    float s = b;
                    for (int m = 0; m < 4; m++) {
                        const float d = q[c.at[m]] - b;
                        s += (d - 256.0f * std::nearbyint(d / 256.0f)) * c.c.w[m];
                    }
                    return s;
                };
                // the texture, between its 4x4 nearest texels
                const float tu = wrapped(u) - 0.5f, tv = wrapped(v) - 0.5f;
                const float fu0 = std::floor(tu), fv0 = std::floor(tv);
                const Cubic cu = cubic(tu - fu0), cv = cubic(tv - fv0);
                const int x = (int)fu0 - 1, y = (int)fv0 - 1;
                int xs[4];
                for (int k = 0; k < 4; k++) xs[k] = (x + k) & 0xFF;
                float j = 0;
                for (int m = 0; m < 4; m++) {
                    const uint8_t* line = tex + (((y + m) & 0xFF) << 8);
                    j += (line[xs[0]] * cu.w[0] + line[xs[1]] * cu.w[1] + line[xs[2]] * cu.w[2] +
                          line[xs[3]] * cu.w[3]) * cv.w[m];
                }
                j = std::clamp(j, 0.0f, 255.0f);   // Catmull-Rom overshoots a little at edges
                // lit (or fogged), then between two palette entries
                const float lv = std::clamp(at(l), 0.0f, 129.0f);
                float idx;
                if (lv < 64) {
                    const float s = lv * (fogSteps / 64.0f);
                    const int s0 = (int)s;
                    const float f = fog[s0] + (fog[s0 + 1] - fog[s0]) * (s - s0);
                    idx = j * f + 128 * (1 - f);
                } else {
                    idx = j + (255 - j) * std::max(lv - 65, 0.0f) / 64;
                }
                idx = std::clamp(idx, 0.0f, 255.0f);
                const int i0 = (int)idx;
                const float a = idx - i0;
                const float* e = lut + 3 * i0;
                auto ch = [&](int k) { return (uint32_t)std::min(e[k] + (e[k + 3] - e[k]) * a + 0.5f, 255.0f); };
                o[px] = 0xFF000000u | ch(0) << 16 | ch(1) << 8 | ch(2);
            }
        }
    };
    inBands(h, w * h >= 200000, rows);
}

}  // namespace tunnel
