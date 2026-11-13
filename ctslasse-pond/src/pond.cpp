// The texture, the light tables and the palettes, the intro's frame (part
// 8, up to the tunnel at T 33) and the endless pond.
#include <algorithm>
#include <cmath>
#include <cstring>
#include <thread>

#include "pond.h"

namespace pond {

namespace {

// The precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

}  // namespace

// --- the texture --------------------------------------------------------------------------

// One level of a diamond-square fractal on a SIZE x SIZE tile (wrapping):
// the points HALF apart between those already there, first the centres of
// their squares, then the sides. Each is the mean of its four neighbours
// plus a random part (scaled by AMP), clamped to 0..TOP. Row by row, left
// to right, as the intro draws its random numbers in that order.
void Pond::plasmaLevel(uint32_t& seed, uint8_t* t, int size, int32_t half, int32_t amp, int32_t top) {
    const int32_t mask = size - 1, shift = size == 512 ? 9 : 8;
    auto at = [&](int32_t x, int32_t y) -> uint8_t& { return t[(y & mask) << shift | (x & mask)]; };
    auto put = [&](int32_t x, int32_t y, int32_t sum, int32_t mul) {
        const int32_t r = (int32_t)next(seed) * mul * amp >> 17;
        const int32_t v = (sum + r + 2) >> 2;
        at(x, y) = (uint8_t)(v < 0 ? 0 : v > top ? top : v);
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

// A diamond-square fractal over the 256x256 tile: values 0..2^BITS-1, the
// random part scaled by AMP, halved each level. SEED is left as the last
// level left it.
void Pond::plasma(uint32_t& seed, uint8_t* t, uint32_t amp, uint32_t bits) {
    const int32_t top = (int32_t)(~(0xFFFFFFFFu << (bits & 31)));
    t[0] = (uint8_t)(next(seed) & (uint32_t)top);
    for (int32_t half = 0x80; half; half >>= 1, amp = (uint32_t)((int32_t)amp >> 1))
        plasmaLevel(seed, t, 256, half, (int32_t)amp, top);
}

// D = B, each pixel moved by TX[S] · SCALE across and TY[A] · SCALE down,
// on a SIZE x SIZE tile (S may be D: each pixel is read before it is
// written). The tables hold signed bytes.
void Pond::displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const uint8_t* tx,
                    const uint8_t* ty, int size, int scale) {
    const uint32_t mask = size - 1, shift = size == 512 ? 9 : 8;
    for (uint32_t k = 0; k < (uint32_t)(size * size); k++) {
        const int32_t dx = (int8_t)tx[s[k]] * scale, dy = (int8_t)ty[a[k]] * scale;
        d[k] = b[(((k >> shift) + dy) & mask) << shift | ((k + dx) & mask)];
    }
}

namespace {
// the three fractals: seeds and strengths
constexpr uint32_t kSeed[3] = {0x12345678, 0x4D3, 0x477}, kAmp[3] = {0x2710, 0x64, 0x190};
}  // namespace

// The displacement tables, +-70 texels
void Pond::warpTables(uint8_t* tx, uint8_t* ty) {
    for (int32_t i = 0; i < 0x100; i++) {
        tx[i] = (uint8_t)std::lrint(std::sin(X(i) * 0.05) * -70.0);
        ty[i] = (uint8_t)std::lrint(std::cos(X(i) * 0.05) * 70.0);
    }
}

// The texture part 8 shows: a marble (a fractal warped by two more through
// sine tables). The intro also embosses its logo into it; that step
// is left out, so only the background remains.
void Pond::precalc() {
    std::vector<uint8_t> t(0x30000);
    for (int n = 0; n < 3; n++) {
        uint32_t seed = kSeed[n];
        plasma(seed, t.data() + 0x10000 * n, kAmp[n], 8);
    }
    uint8_t tx[256], ty[256];
    warpTables(tx, ty);
    displace(t.data() + 0x20000, t.data(), t.data() + 0x10000, tex_.data(), tx, ty, 256, 1);
}

// The same marble at 512x512, for the 32-bit picture: each fractal made at
// 256 as the intro does, spread over the even texels of a 512 tile, and
// given one more level for the odd ones (with half the last level's
// strength, the generator going on from where it was); then warped by the
// same tables, twice as far. Its even texels are the 256 marble's; the rest
// is a finer octave of detail.
void Pond::precalc512() {
    std::vector<uint8_t> small(0x10000), t(3 * 0x40000);
    for (int n = 0; n < 3; n++) {
        uint32_t seed = kSeed[n];
        plasma(seed, small.data(), kAmp[n], 8);
        uint8_t* big = t.data() + 0x40000 * n;
        for (int y = 0; y < 256; y++)
            for (int x = 0; x < 256; x++) big[(2 * y) << 9 | 2 * x] = small[y << 8 | x];
        plasmaLevel(seed, big, 512, 1, (int32_t)(kAmp[n] >> 8), 0xFF);
    }
    uint8_t tx[256], ty[256];
    warpTables(tx, ty);
    tex512_.resize(0x40000);
    displace(t.data() + 0x80000, t.data(), t.data() + 0x40000, tex512_.data(), tx, ty, 512, 2);
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
struct Uvl {
    double u, v, light;
};

// The intro's ring for each drop (bubbles()), in doubles: inside the ring
// (A = distance - radius < 0) a point is pushed out from the centre by
// sin(A) S times its distance, S = 2048 · 8 / (8 - A) for the first drop and
// 2730.67 · 4 / (4 - A) for the others: the ring's front strongest, the
// ripples behind it dying out. The light rises by max(cos A, 0) · S · 50.
Uvl water(double gx, double gy, float t, const std::vector<Drop>& drops) {
    Uvl w = {gx * 32768.0, gy * 32768.0, 258048.0};
    for (const Drop& d : drops) {
        const double r = 8.0 * (t - d.t);
        if (r <= 0) continue;
        const double dx = gx - d.x, dy = gy - d.y;
        const double a = std::sqrt(dx * dx + dy * dy) - r;
        if (a > 0) continue;
        double s = d.first ? 2048.0 * 8 / (8 - a) : 2730.666666666666 * 4 / (4 - a);
        if (r > kFadeFrom) s *= (kFadeTo - r) / (kFadeTo - kFadeFrom);
        const double g = std::sin(a) * s;
        w.u += dx * g, w.v += dy * g;
        w.light += std::max(std::cos(a), 0.0) * s * 50;
    }
    w.light = std::min(w.light, (double)(0x81 << 12) + 4095);   // the last level
    return w;
}

}  // namespace

void Pond::pondFrame(float t, const std::vector<Drop>& drops, int cell) {
    dacSet_ = false;                // frame() after this: set it again
    // the palette: in from white (pal3) over T 0-0.5, to blue over 0.5-1.5
    if (t < 0.5f) setDac(3, (int32_t)std::lround(t * 128), 0, 0);
    else if (t < 1.5f) setDac(2, (int32_t)std::lround((t - 0.5) * 64), 3, 1);
    else copyDac(2);
    for (int gy = 0; gy < kGridH; gy++)
        for (int gx = 0; gx < kGridW; gx++) {
            const Uvl w = water(gx, gy, t, drops);
            // as the blend leaves them: times 4096
            grid_[gy * kGridW + gx] = {(uint32_t)(int32_t)std::lround(w.u) << 12,
                                       (uint32_t)(int32_t)std::lround(w.v) << 12,
                                       (uint32_t)(int32_t)std::lround(w.light) << 12};
        }
    gridMap();
    if (cell >= 8) {
        fieldFromGrid();
        return;
    }
    // the finer water: 16.16 / 4096 is texels (u, v) and levels (the light)
    Field& f = field_;
    f.cell = cell, f.nx = W / cell + 1, f.ny = H / cell + 1;
    f.u.resize(f.nx * f.ny), f.v.resize(f.nx * f.ny), f.l.resize(f.nx * f.ny);
    for (int j = 0, k = 0; j < f.ny; j++)
        for (int i = 0; i < f.nx; i++, k++) {
            const Uvl w = water(i * cell / 8.0, j * cell / 8.0, t, drops);
            f.u[k] = w.u / 4096, f.v[k] = w.v / 4096, f.l[k] = w.light / 4096;
        }
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
    f.cell = 8, f.nx = kGridW, f.ny = kGridH;
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
// whose u, v and light are interpolated bilinearly between the four points
// around it (at 320x200 from the grid: the mapper's own positions). Then,
// kept fractional:
// - the marble is sampled bilinearly between its four nearest texels (it
//   wraps at 256, as the mapper's byte does);
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
    // a pixel's place in the field: the point before it and the fraction
    struct Place {
        int at;
        float frac;
    };
    auto place = [&](int p, int size, int screen, int points) {
        const double s = ((p + 0.5) * screen / size - 0.5) / f.cell;
        const double c = std::clamp(s, 0.0, points - 1.0);
        const int at = std::min((int)c, points - 2);
        return Place{at, (float)(c - at)};
    };
    std::vector<Place> cols(w);
    for (int px = 0; px < w; px++) cols[px] = place(px, w, W, f.nx);
    const int top = (int)litA_.size() - 1;
    auto rows = [&](int from, int to) {
        // one row of the field, interpolated down to this pixel row
        std::vector<float> u(f.nx), v(f.nx), l(f.nx);
        for (int py = from; py < to; py++) {
            const Place r = place(py, h, H, f.ny);
            for (int i = 0, k = r.at * f.nx; i < f.nx; i++, k++) {
                u[i] = (float)(f.u[k] + (f.u[k + f.nx] - f.u[k]) * r.frac);
                v[i] = (float)(f.v[k] + (f.v[k + f.nx] - f.v[k]) * r.frac);
                l[i] = (float)(f.l[k] + (f.l[k + f.nx] - f.l[k]) * r.frac);
            }
            uint32_t* o = out + (size_t)py * w;
            for (int px = 0; px < w; px++) {
                const Place c = cols[px];
                auto at = [&](const std::vector<float>& q) { return q[c.at] + (q[c.at + 1] - q[c.at]) * c.frac; };
                // the marble, between its four nearest texels (u and v stay well within an int)
                const float tu = at(u) * texScale - 0.5f, tv = at(v) * texScale - 0.5f;
                const float fu = std::floor(tu), fv = std::floor(tv);
                const int x0 = (int)fu & mask, y0 = ((int)fv & mask) << shift;
                const int x1 = (x0 + 1) & mask, y1 = (y0 + (1 << shift)) & (mask << shift);
                const float au = tu - fu, av = tv - fv;
                const float t0 = tex[y0 | x0] + (tex[y0 | x1] - tex[y0 | x0]) * au;
                const float t1 = tex[y1 | x0] + (tex[y1 | x1] - tex[y1 | x0]) * au;
                const float j = t0 + (t1 - t0) * av;
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
    // in bands of rows, one per thread (small pictures in one)
    const int n = w * h < 200000 ? 1 : (int)std::clamp(std::thread::hardware_concurrency(), 1u, 16u);
    std::vector<std::thread> threads;
    for (int b = 1; b < n; b++) threads.emplace_back(rows, h * b / n, h * (b + 1) / n);
    rows(0, h / n);
    for (std::thread& t : threads) t.join();
}

}  // namespace pond
