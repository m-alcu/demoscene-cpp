// The texture, the light tables and the palettes, the intro's frame (part
// 8, up to the tunnel at T 33) and the endless pond.
#include <algorithm>
#include <cmath>
#include <cstring>
#include <thread>
#include <type_traits>

#include "pond.h"

namespace pond {

namespace {

// The precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// ROWS(from, to) over rows 0..H, in bands, one per thread (or in this one)
template <class F>
void inBands(int h, bool threaded, const F& rows) {
    const int n = threaded ? (int)std::clamp(std::thread::hardware_concurrency(), 1u, 16u) : 1;
    std::vector<std::thread> threads;
    for (int b = 1; b < n; b++) threads.emplace_back(rows, h * b / n, h * (b + 1) / n);
    rows(0, h / n);
    for (std::thread& t : threads) t.join();
}

}  // namespace

// --- the texture --------------------------------------------------------------------------

namespace {

// One level of a diamond-square fractal on a SIZE x SIZE tile (wrapping):
// the points HALF apart between those already there, first the centres of
// their squares, then the sides. Each is the mean of its four neighbours
// plus a random part (scaled by AMP), clamped to 0..TOP. Row by row, left
// to right, as the intro draws its random numbers in that order. In bytes
// the mean is rounded, as the intro does; in floats it is kept whole.
template <class T>
void plasmaLevel(uint32_t& seed, T* t, int size, int32_t half, int32_t amp, int32_t top) {
    const int32_t mask = size - 1, shift = size == 512 ? 9 : 8;
    auto at = [&](int32_t x, int32_t y) -> T& { return t[(y & mask) << shift | (x & mask)]; };
    using Sum = std::conditional_t<std::is_same_v<T, uint8_t>, int32_t, T>;
    auto put = [&](int32_t x, int32_t y, Sum sum, int32_t mul) {
        const int32_t r = (int32_t)next(seed) * mul * amp >> 17;
        if constexpr (std::is_same_v<T, uint8_t>) {
            const int32_t v = (sum + r + 2) >> 2;
            at(x, y) = (uint8_t)(v < 0 ? 0 : v > top ? top : v);
        } else {
            at(x, y) = std::clamp((sum + (T)r) * (T)0.25, (T)0, (T)top);
        }
    };
    const int32_t step = 2 * half;
    for (int32_t y = 0; y < size; y += step)          // the centres
        for (int32_t x = 0; x < size; x += step)
            put(x + half, y + half, at(x, y) + at(x + step, y) + at(x + step, y + step) + at(x, y + step), 3);
    for (int32_t y = 0; y < size; y += step)          // the sides
        for (int32_t x = 0; x < size; x += step) {
            put(x, y + half, at(x, y) + at(x, y + step) + at(x + half, y + half) + at(x - half, y + half), 2);
            put(x + half, y, at(x, y) + at(x + step, y) + at(x + half, y + half) + at(x + half, y - half), 2);
        }
}

// A diamond-square fractal over the 256x256 tile: values 0..255, the random
// part scaled by AMP, halved each level. SEED is left as the last level left
// it.
template <class T>
void plasma(uint32_t& seed, T* t, uint32_t amp) {
    t[0] = (T)(next(seed) & 0xFF);
    for (int32_t half = 0x80; half; half >>= 1, amp = (uint32_t)((int32_t)amp >> 1))
        plasmaLevel(seed, t, 256, half, (int32_t)amp, 0xFF);
}

// the three fractals: seeds and strengths
constexpr uint32_t kSeed[3] = {0x12345678, 0x4D3, 0x477}, kAmp[3] = {0x2710, 0x64, 0x190};

// The marble's warp: across by -70 sin(S / 20) texels, down by
// 70 cos(A / 20), S and A the second and third fractals
template <class T> T warpX(T s) { return std::sin(s * (T)0.05) * -70; }
template <class T> T warpY(T a) { return std::cos(a * (T)0.05) * 70; }

}  // namespace

// The texture part 8 shows: a marble, the first fractal warped by the other
// two: D = B, each texel moved across by TX[S] and down by TY[A] (the warp
// rounded to whole texels, in tables of signed bytes). The intro also
// embosses its logo into it; that step is left out, so only the background
// remains.
void Pond::precalc() {
    std::vector<uint8_t> t(0x30000);
    for (int n = 0; n < 3; n++) {
        uint32_t seed = kSeed[n];
        plasma(seed, t.data() + 0x10000 * n, kAmp[n]);
    }
    const uint8_t *b = t.data(), *s = b + 0x10000, *a = b + 0x20000;
    int8_t tx[256], ty[256];
    for (int i = 0; i < 256; i++) tx[i] = (int8_t)std::lrint(warpX(X(i))), ty[i] = (int8_t)std::lrint(warpY(X(i)));
    for (uint32_t k = 0; k < 0x10000; k++)
        tex_[k] = b[(((k >> 8) + ty[a[k]]) & 0xFF) << 8 | ((k + tx[s[k]]) & 0xFF)];
}

// The same marble at 512x512, for the 32-bit picture, without the intro's
// roundings, which show as steps when the picture is magnified: each
// fractal made at 256 with the intro's random numbers but its means kept
// fractional, spread over the even texels of a 512 tile, and given one more
// level for the odd ones (half the last level's strength, the generator
// going on from where it was). Then warped as the intro does, twice as far,
// by the warp itself, not its table rounded to whole texels, and the first
// fractal is read between its four texels around the place the warp gives.
// (The intro's 1-level steps of S and A move the marble by up to 3.5 texels
// at once: that is the 256 marble's jagged edges.)
void Pond::precalc512() {
    std::vector<float> small(0x10000), t(3 * 0x40000);
    for (int n = 0; n < 3; n++) {
        uint32_t seed = kSeed[n];
        plasma(seed, small.data(), kAmp[n]);
        float* big = t.data() + 0x40000 * n;
        for (int y = 0; y < 256; y++)
            for (int x = 0; x < 256; x++) big[(2 * y) << 9 | 2 * x] = small[y << 8 | x];
        plasmaLevel(seed, big, 512, 1, (int32_t)(kAmp[n] >> 8), 0xFF);
    }
    const float *b = t.data(), *s = b + 0x40000, *a = b + 0x80000;
    tex512_.resize(0x40000);
    for (int y = 0; y < 512; y++)
        for (int x = 0; x < 512; x++) {
            const int k = y << 9 | x;
            const double px = x + 2 * warpX<double>(s[k]), py = y + 2 * warpY<double>(a[k]);
            const double fx = std::floor(px), fy = std::floor(py);
            const int x0 = (int)fx & 511, y0 = (int)fy & 511, x1 = (x0 + 1) & 511, y1 = (y0 + 1) & 511;
            const double ax = px - fx, ay = py - fy;
            const double t0 = b[y0 << 9 | x0] + (b[y0 << 9 | x1] - b[y0 << 9 | x0]) * ax;
            const double t1 = b[y1 << 9 | x0] + (b[y1 << 9 | x1] - b[y1 << 9 | x0]) * ax;
            tex512_[k] = (uint8_t)std::lround(std::clamp(t0 + (t1 - t0) * ay, 0.0, 255.0));
        }
}

void Pond::setMarble(int size) {
    marble_ = size == 512 ? 512 : 256;
    if (marble_ == 512 && tex512_.empty()) precalc512();
}

// Part 8's light tables, 65 levels of 256: level L maps a texel J
// to J f + 128 (1 - f), f = e^(L/13 - 1.5) - 0.02 at most 1: low levels
// greyed. Then 65 more (+4100h) for the highlights: J + row (255 - J) / 64,
// towards white.
void Pond::lightTables() {
    for (int32_t row = 0; row <= 0x40; row++) {
        const int32_t lvl = 0x40 - row;
        // (the intro computes e^ as Watcom does, through FPREM, F2XM1 and
        // FSCALE; std::exp gives the same float)
        float f = (float)(std::exp(1.5 - X(lvl) * 0.07692307692307693) + -0.02);   // 1/13
        if (1 < f) f = 1.0f;
        for (int32_t j = 0; j < 0x100; j++) {
            light_[row * 0x100 + j] = (uint8_t)std::lrint(X(j) * f + (1 - X(f)) * 128.0f);
            light_[0x4100 + row * 0x100 + j] = (uint8_t)((0xFF - j) * row / 64 + j);
        }
    }
}

void Pond::gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
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

void Pond::gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    for (int32_t i = 0; i < n; i++) {
        *dst++ = (float)(r0 * (n - i) + r1 * i) / n;
        *dst++ = (float)(g0 * (n - i) + g1 * i) / n;
        *dst++ = (float)(b0 * (n - i) + b1 * i) / n;
    }
}

// pal1: green-grey - purple - light blue - black - red - yellow;
// pal2: black - blue - white; pal3: black - white. Each also unrounded.
void Pond::palettes() {
    auto both = [&](int pal, int at, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                    int32_t n) {
        gradient(pal_[pal] + at, r0, g0, b0, r1, g1, b1, n);
        gradient(palF_[pal] + at, r0, g0, b0, r1, g1, b1, n);
    };
    both(1, 0x000, 5, 8, 1, 6, 3, 0x1E, 0x40);
    both(1, 0x0C0, 6, 3, 0x1E, 0x0A, 0x23, 0x3C, 0x40);
    both(1, 0x180, 0x0A, 0x23, 0x3C, 0, 0, 0, 0x40);
    both(1, 0x240, 0, 0, 0, 0x3F, 0, 0, 0x20);
    both(1, 0x2A0, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x20);
    both(3, 0, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x100);
    both(2, 0, 0, 0, 0, 0x10, 0x20, 0x40, 0x80);
    both(2, 0x180, 0x10, 0x20, 0x40, 0x3F, 0x3F, 0x3F, 0x80);
}

Pond::Pond() : tex_(0x10000), light_(0x10000), screen_(W * H) {
    precalc();
    lightTables();
    palettes();
    std::memset(dac_, 0x3F, sizeof dac_);  // the part before ends in white
    std::fill(dacF_, dacF_ + 768, 63.0f);
    // the 32-bit picture's light, as J A + B, levels 0-129 by 1/256
    for (int n = 0; n <= 129 * 256; n++) {
        const double level = n / 256.0;
        double a = 1, b = 0;
        if (level < 64) {
            // as lightTables(): f = e^(1.5 - (64 - L) / 13) - 0.02, at most 1
            a = std::min(std::exp(1.5 - (64 - level) * 0.07692307692307693) - 0.02, 1.0);
            b = 128 * (1 - a);
        } else if (level >= 65) {
            const double up = (level - 65) / 64;   // J + up (255 - J)
            a = 1 - up, b = 255 * up;
        }
        litA_.push_back((float)a), litB_.push_back((float)b);
    }
    fieldFromGrid();
}

// The DAC: MODE 0 SRC towards white (K 0: white, 64: SRC), 1 SRC and MIX
// mixed (K 0: MIX, 64: SRC), 2 SRC faded (K 0: black). The unrounded DAC
// alongside.
void Pond::setDac(int srcPal, int32_t k, int mixPal, int mode) {
    const uint8_t *src = pal_[srcPal], *mix = pal_[mixPal];
    for (int i = 0; i < 768; i++) {
        int32_t v;
        if (mode == 0) v = ((int32_t)src[i] * k + 0xFC0 - k * 0x3F) >> 6;
        else if (mode == 1) v = ((int32_t)mix[i] * (0x40 - k) + (int32_t)src[i] * k) >> 6;
        else v = ((int32_t)src[i] * k) >> 6;
        dac_[i] = (uint8_t)(v & 0x3F);
    }
    const float kf = std::clamp(k, 0, 64) / 64.0f;
    const float *sf = palF_[srcPal], *mf = palF_[mixPal];
    for (int i = 0; i < 768; i++) {
        float v;
        if (mode == 0) v = sf[i] * kf + 63 * (1 - kf);
        else if (mode == 1) v = mf[i] * (1 - kf) + sf[i] * kf;
        else v = sf[i] * kf;
        dacF_[i] = std::clamp(v, 0.0f, 63.0f);
    }
}

void Pond::copyDac(int pal) {
    std::memcpy(dac_, pal_[pal], sizeof dac_);
    std::memcpy(dacF_, palF_[pal], sizeof dacF_);
}

// --- the intro's frame ------------------------------------------------------------------------

void Pond::frame(int32_t clock) {
    const X t = X(clock) / kUnit;
    const float T = (float)t;
    const double dT = (double)t;
    // the palettes: in from white over T 0-0.5 (black-white), to black-blue-
    // white over 0.5-1.5, to pal1 over 8-12, out over 68-72
    if (t < 0.5) {
        setDac(3, std::lrint(X(T) * 2.0f * 64.0f), 0, 0);
    } else if (dT < 1.5) {
        setDac(2, std::lrint((X(dT) - 0.5) * 64.0), 3, 1);
    } else if (!dacSet_) {
        // started past the fade-in (never in the intro): the palette in full
        copyDac(2);
    }
    dacSet_ = true;
    if (T > 8 && T < 12) setDac(1, std::lrint((X(T) - 8.0f) * 16.0f), 2, 1);
    if (T > 68) setDac(1, std::lrint((72.0f - X(T)) * 16.0f), 0, 2);
    // the drops until T 12, the plane from T 8 (the tunnel from T 33 is not here)
    if (T < 12) bubbles(T);
    if (T > 8 && T < 38) wobble(T);
    // grid = grid a + plane b, b rising over T 8-12 as (1 - cos) / 2
    float w = 0;
    if (T > 8) w = (float)((1 - std::cos((X(T) - 8.0f) * 0.25f * 3.141592653589793)) * 0.5);
    if (T > 12) w = 1.0f;
    if (0 > w) w = 0;
    if (1 < w) w = 1.0f;
    const X wx = X(w) * 4096.0f;
    const int32_t wb = (int32_t)std::lrint(wx);
    const int32_t wa = (int32_t)std::lrint(4096.0f - X((float)wx));
    blend(wa, wb);
    gridMap();
    fieldFromGrid();
}

// --- the endless pond --------------------------------------------------------------------------

std::vector<Drop> Pond::introDrops() {
    // centres (20, 12), (10, 7), (27, 9); the second and third rings
    // start 10 and 18 cells behind, at T 1.25 and 2.25
    return {{20, 12, 0, true}, {10, 7, 1.25f, false}, {27, 9, 2.25f, false}};
}

namespace {
// a ring's radius, and the fade once it has left the screen (cells)
constexpr float kFadeFrom = 56, kFadeTo = 80;
}  // namespace

bool Pond::dropDone(const Drop& d, float t) { return 8 * (t - d.t) >= kFadeTo; }

namespace {

// The water at a point (cells across and down, fractional allowed): u and v
// in 16.16 (a cell is 8000h), the light (3F000h at rest).
template <class T>
struct Uvl {
    T u, v, light;
};

// The intro's ring for each drop (bubbles()), in doubles for the grid, in
// floats for the water at each pixel (faster, and as good for the picture):
// inside the ring (A = distance - radius < 0) a point is pushed out from the
// centre by sin(A) S times its distance, S = 2048 · 8 / (8 - A) for the
// first drop and 2730.67 · 4 / (4 - A) for the others: the ring's front
// strongest, the ripples behind it dying out. The light rises by
// max(cos A, 0) · S · 50. EDGE: the width (cells) over which the light
// comes in at the ring's front, for an edge without steps (0: at once).
template <class T>
Uvl<T> water(T gx, T gy, float t, const std::vector<Drop>& drops, T edge = 0) {
    Uvl<T> w = {gx * 32768, gy * 32768, 258048};
    for (const Drop& d : drops) {
        const T r = 8 * ((T)t - d.t);
        if (r <= 0) continue;
        const T dx = gx - d.x, dy = gy - d.y;
        const T a = std::sqrt(dx * dx + dy * dy) - r;
        if (a > 0) continue;
        T s = d.first ? 2048 * 8 / (8 - a) : (T)2730.666666666666 * 4 / (4 - a);
        if (r > kFadeFrom) s *= (kFadeTo - r) / (kFadeTo - kFadeFrom);
        const T g = std::sin(a) * s;
        w.u += dx * g, w.v += dy * g;
        const T in = edge > 0 ? std::min(-a / edge, (T)1) : 1;
        w.light += std::max(std::cos(a), (T)0) * s * 50 * in;
    }
    w.light = std::min(w.light, (T)((0x81 << 12) + 4095));   // the last level
    return w;
}

}  // namespace

void Pond::pondFrame(float t, const std::vector<Drop>& drops, int w, int h) {
    dacSet_ = false;                // frame() after this: set it again
    // the palette: in from white (pal3) over T 0-0.5, to blue over 0.5-1.5
    if (t < 0.5f) setDac(3, (int32_t)std::lround(t * 128), 0, 0);
    else if (t < 1.5f) setDac(2, (int32_t)std::lround((t - 0.5) * 64), 3, 1);
    else copyDac(2);
    for (int gy = 0; gy < kGridH; gy++)
        for (int gx = 0; gx < kGridW; gx++) {
            const Uvl<double> w = water<double>(gx, gy, t, drops);
            // as the blend leaves them: times 4096
            grid_[gy * kGridW + gx] = {(uint32_t)(int32_t)std::lround(w.u) << 12,
                                       (uint32_t)(int32_t)std::lround(w.v) << 12,
                                       (uint32_t)(int32_t)std::lround(w.light) << 12};
        }
    gridMap();
    if (w <= 0 || h <= 0) {
        fieldFromGrid();
        return;
    }
    // The water at each pixel's centre: the ring's front is a step in the
    // light, which interpolated between points further apart shows as a
    // zigzag. Here the step is spread over a pixel. 16.16 / 4096 is texels (u, v) and levels (the light).
    Field& f = field_;
    f.nx = w, f.ny = h, f.cx = (double)W / w, f.cy = (double)H / h, f.ox = f.cx / 2 - 0.5, f.oy = f.cy / 2 - 0.5;
    f.u.resize((size_t)w * h), f.v.resize((size_t)w * h), f.l.resize((size_t)w * h);
    const float edge = (float)(f.cx / 8);   // a pixel
    auto rows = [&](int from, int to) {
        for (int j = from; j < to; j++)
            for (int i = 0; i < w; i++) {
                const size_t k = (size_t)j * w + i;
                const Uvl<float> q = water<float>((float)((f.ox + i * f.cx) / 8), (float)((f.oy + j * f.cy) / 8), t, drops, edge);
                f.u[k] = q.u / 4096, f.v[k] = q.v / 4096, f.l[k] = q.light / 4096;
            }
    };
    inBands(h, w * h >= 200000, rows);
}

void Pond::toArgb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)(dac_[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    const uint8_t* s = screen();
    for (int i = 0; i < W * H; i++) out[i] = lut[s[i]];
}

// --- 32-bit colour --------------------------------------------------------------------------

// The water at the grid's points, from 8.24 to texels and levels. u and v
// wrap at 256 texels (2^32): each point is placed from its left neighbour
// (the first of a row from the one above) by their difference, so that
// they stay continuous to interpolate.
void Pond::fieldFromGrid() {
    Field& f = field_;
    f.cx = f.cy = 8, f.ox = f.oy = 0, f.nx = kGridW, f.ny = kGridH;
    f.u.resize(grid_.size()), f.v.resize(grid_.size()), f.l.resize(grid_.size());
    constexpr double k = 1.0 / 16777216.0;
    for (int i = 0; i < (int)grid_.size(); i++) {
        const Point& p = grid_[i];
        const int from = i % kGridW ? i - 1 : i - kGridW;
        if (from < 0) {
            f.u[i] = (int32_t)p.u * k, f.v[i] = (int32_t)p.v * k;
        } else {
            f.u[i] = f.u[from] + (int32_t)(p.u - grid_[from].u) * k;
            f.v[i] = f.v[from] + (int32_t)(p.v - grid_[from].v) * k;
        }
        f.l[i] = p.light * k;
    }
}

// The grid mapper's picture without its roundings, at any size. Each
// pixel's place on the 320x200 screen (its centre) is found in the water,
// whose u, v and light are interpolated between the points around it:
// from the grid bilinearly (at 320x200 the mapper's own positions), from
// pondFrame()'s finer water between the 4x4 around it (Catmull-Rom: the
// curve goes through the points, and its slope is continuous, so the waves
// show no facets between them). Then, kept fractional:
// - the marble is sampled between its 4x4 nearest texels, also Catmull-Rom
//   (bilinear, magnified, shows the texels as diamonds); it wraps at 256,
//   as the mapper's byte does;
// - the light level is continuous: below 64, the texel J goes to
//   J f + 128 (1 - f) with f at the fractional level; from 65, towards
//   white by (L - 65) / 64; between, J as it is (both tables give J there).
//   This is J A + B, tabled per 1/256 level;
// - the palette index this gives is fractional too, read between two DAC
//   entries of the unrounded palette.
void Pond::toTrueColor(uint32_t* out, int w, int h) const {
    // the marble: 256 texels to the grid's 256, or 512
    const bool big = marble_ == 512;
    const uint8_t* tex = big ? tex512_.data() : texture();
    const int mask = big ? 511 : 255, shift = big ? 9 : 8;
    const float texScale = big ? 2.0f : 1.0f;
    const Field& f = field_;
    float lut[257 * 3];                           // the DAC in 0-255 (the last entry repeated)
    for (int i = 0; i < 768; i++) lut[i] = dacF_[i] * (255.0f / 63.0f);
    for (int c = 0; c < 3; c++) lut[768 + c] = lut[765 + c];
    // Catmull-Rom's weights for the points before and after: at 0 the
    // second point, at 1 the third
    struct Cubic {
        float w[4];
    };
    auto cubic = [](float t) {
        const float t2 = t * t, t3 = t2 * t;
        return Cubic{{0.5f * (-t3 + 2 * t2 - t), 0.5f * (3 * t3 - 5 * t2 + 2), 0.5f * (-3 * t3 + 4 * t2 + t),
                      0.5f * (t3 - t2)}};
    };
    // a pixel's place in the field: its four points (clamped at the edges)
    // and their weights. The grid (8 pixels apart) is interpolated linearly,
    // as the mapper does: its rings are only a few points wide, and the
    // curve would overshoot them.
    const bool fine = f.cx < 8;
    struct Place {
        int at[4];
        Cubic c;
    };
    auto place = [&](int p, int size, int screen, int points, double first, double apart) {
        const double s = ((p + 0.5) * screen / size - 0.5 - first) / apart;
        const double c = std::clamp(s, 0.0, points - 1.0);
        const int i = std::min((int)c, points - 2);
        const float t = (float)(c - i);
        Place r{{}, fine ? cubic(t) : Cubic{{0, 1 - t, t, 0}}};
        for (int k = 0; k < 4; k++) r.at[k] = std::clamp(i - 1 + k, 0, points - 1);
        return r;
    };
    std::vector<Place> cols(w);
    for (int px = 0; px < w; px++) cols[px] = place(px, w, W, f.nx, f.ox, f.cx);
    const int top = (int)litA_.size() - 1;
    auto rows = [&](int from, int to) {
        // one row of the field, interpolated down to this pixel row
        std::vector<float> u(f.nx), v(f.nx), l(f.nx);
        for (int py = from; py < to; py++) {
            const Place r = place(py, h, H, f.ny, f.oy, f.cy);
            for (int i = 0; i < f.nx; i++) {
                float su = 0, sv = 0, sl = 0;
                for (int k = 0; k < 4; k++) {
                    const int n = r.at[k] * f.nx + i;
                    su += f.u[n] * r.c.w[k], sv += f.v[n] * r.c.w[k], sl += f.l[n] * r.c.w[k];
                }
                u[i] = (float)su, v[i] = (float)sv, l[i] = (float)sl;
            }
            uint32_t* o = out + (size_t)py * w;
            for (int px = 0; px < w; px++) {
                const Place& c = cols[px];
                auto at = [&](const std::vector<float>& q) {
                    return q[c.at[0]] * c.c.w[0] + q[c.at[1]] * c.c.w[1] + q[c.at[2]] * c.c.w[2] +
                           q[c.at[3]] * c.c.w[3];
                };
                // the marble, between its 4x4 nearest texels (u and v stay well within an int)
                const float tu = at(u) * texScale - 0.5f, tv = at(v) * texScale - 0.5f;
                const float fu = std::floor(tu), fv = std::floor(tv);
                const Cubic cu = cubic(tu - fu), cv = cubic(tv - fv);
                const int x = (int)fu - 1, y = (int)fv - 1;
                int xs[4];
                for (int k = 0; k < 4; k++) xs[k] = (x + k) & mask;
                float j = 0;
                for (int m = 0; m < 4; m++) {
                    const uint8_t* line = tex + (((y + m) & mask) << shift);
                    j += (line[xs[0]] * cu.w[0] + line[xs[1]] * cu.w[1] + line[xs[2]] * cu.w[2] +
                          line[xs[3]] * cu.w[3]) * cv.w[m];
                }
                j = std::clamp(j, 0.0f, 255.0f);   // Catmull-Rom overshoots a little at edges
                // lit, then between two palette entries
                const int lvl = std::clamp((int)(at(l) * 256 + 0.5f), 0, top);
                const float idx = std::clamp(j * litA_[lvl] + litB_[lvl], 0.0f, 255.0f);
                const int i0 = (int)idx;
                const float a = idx - i0;
                const float* e = lut + 3 * i0;
                auto ch = [&](int n) { return (uint32_t)std::min(e[n] + (e[n + 3] - e[n]) * a + 0.5f, 255.0f); };
                o[px] = 0xFF000000u | ch(0) << 16 | ch(1) << 8 | ch(2);
            }
        }
    };
    inBands(h, w * h >= 200000, rows);
}

}  // namespace pond
