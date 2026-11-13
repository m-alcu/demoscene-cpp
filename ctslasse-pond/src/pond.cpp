// The texture, the light tables and the palettes, the intro's frame (part
// 8, 1C776h, up to the tunnel at T 33) and the endless pond.
#include <algorithm>
#include <cmath>
#include <cstring>

#include "pond.h"

namespace pond {

namespace {

// 16D9Ch: the precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

}  // namespace

// --- the texture --------------------------------------------------------------------------

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level). Row by row, left to right,
// as the intro draws its random numbers in that order.
void Pond::plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits) {
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

// 16E81h: D = B, each pixel moved by TX[S] across and TY[A] down (S may be D:
// each pixel is read before it is written)
void Pond::displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const uint8_t* tx,
                    const uint8_t* ty) {
    for (uint32_t k = 0; k < 0x10000; k++) {
        const uint8_t dx = tx[s[k]], dy = ty[a[k]];
        d[k] = b[(((k >> 8) + dy) & 0xFF) << 8 | ((k + dx) & 0xFF)];
    }
}

// The texture part 8 shows: a marble (a fractal warped by two more through
// sine tables). The intro (18A6Ch) also embosses its logo into it; that step
// is left out, so only the background remains.
void Pond::precalc() {
    std::vector<uint8_t> t(0x30000);
    uint8_t *t0 = t.data(), *t1 = t0 + 0x10000, *t2 = t0 + 0x20000;
    uint8_t tx[256], ty[256];
    plasma(0x12345678, t0, 0x2710, 8);
    plasma(0x4D3, t1, 0x64, 8);
    plasma(0x477, t2, 0x190, 8);
    for (int32_t i = 0; i < 0x100; i++) {   // 18EAFh
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(0.05);
        F.fsin();
        F.fmul(-70.0);
        F.fld(di), F.fmul(0.05);
        F.fxch();
        F.frndint();
        tx[i] = (uint8_t)F.fistp();
        F.fcos();
        F.fmul(70.0);
        F.frndint();
        ty[i] = (uint8_t)F.fistp();
    }
    displace(t2, t0, t1, tex_.data(), tx, ty);
}

// Part 8's light tables, 65 levels of 256 (1C7C0h): level L maps a texel J
// to J f + 128 (1 - f), f = e^(L/13 - 1.5) - 0.02 at most 1: low levels
// greyed. Then 65 more (+4100h) for the highlights: J + row (255 - J) / 64,
// towards white.
void Pond::lightTables() {
    int32_t lvl = 0x40, acc = 0;
    for (int32_t row = 0; row <= 0x40; row++, lvl--, acc += 0xFF) {
        const int32_t step = -row;
        F.fld((X)lvl), F.fmul(0.07692307692307693), F.fsubr(1.5);   // 1/13
        F.fldl2e(), F.fmulp();
        F.exp2();
        F.fadd(-0.02);
        F.fld1();
        F.fxch();
        float f = F.fstpf();
        if (F.fcomp(f).jb()) f = 1.0f;
        int32_t s = acc;
        for (int32_t j = 0; j < 0x100; j++, s += step) {
            F.fld(f), F.fld((X)j), F.fmulst(1), F.fld1(), F.fsubrp(2), F.fxch(), F.fmul(128.0f), F.faddp();
            F.frndint();
            light_[row * 0x100 + j] = (uint8_t)F.fistp();
            light_[0x4100 + row * 0x100 + j] = (uint8_t)(s / 64 + j);
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
    auto cmpF = [&](float v, float c) { F.fld(v); return F.fcomp(c); };
    F.fld((X)clock);
    F.fdiv(kUnit);
    const float T = F.fstf();
    const double dT = F.fstd();
    // the palettes: in from white over T 0-0.5 (black-white), to black-blue-
    // white over 0.5-1.5, to pal1 over 8-12, out over 68-72
    if (F.fcomp(0.5).jb()) {
        F.fld(T), F.fmul(2.0f), F.fmul(64.0f);
        F.frndint();
        setDac(3, F.fistp(), 0, 0);
    } else if (F.fld(dT), F.fcomp(1.5).jb()) {
        F.fld(dT), F.fadd(-0.5), F.fmul(64.0);
        F.frndint();
        setDac(2, F.fistp(), 3, 1);
    }
    else if (!dacSet_) {
        // started past the fade-in (never in the intro): the palette in full
        copyDac(2);
    }
    dacSet_ = true;
    if (cmpF(T, 8.0f).ja() && cmpF(T, 12.0f).jb()) {
        F.fld(T), F.fadd(-8.0f), F.fmul(16.0f);
        F.frndint();
        setDac(1, F.fistp(), 2, 1);
    }
    if (cmpF(T, 68.0f).ja()) {
        F.fld(72.0f), F.fsub(T), F.fmul(16.0f);
        F.frndint();
        setDac(1, F.fistp(), 0, 2);
    }
    // the drops until T 12, the plane from T 8 (the tunnel from T 33 is not here)
    if (cmpF(T, 12.0f).jb()) bubbles(T);
    if (cmpF(T, 8.0f).ja() && cmpF(T, 38.0f).jb()) wobble(T);
    // grid = grid a + plane b, b rising over T 8-12
    float w = 0;
    if (cmpF(T, 8.0f).ja()) {
        F.fld(T), F.fadd(-8.0f), F.fmul(0.25f), F.fmul(3.141592653589793), F.fcos();
        F.fld1(), F.fsubrp(1), F.fmul(0.5);
        w = F.fstpf();
    }
    if (cmpF(T, 12.0f).ja()) w = 1.0f;
    if (F.fldz(), F.fcomp(w).ja()) w = 0;
    if (F.fld1(), F.fcomp(w).jb()) w = 1.0f;
    F.fld(4096.0f);
    F.fld(w), F.fmulst(1);
    w = F.fstf();
    F.frndint();
    F.fxch(), F.fsub(w);
    F.fxch();
    const int32_t wb = F.fistp();
    F.frndint();
    const int32_t wa = F.fistp();
    blend(wa, wb);
    gridMap();
}

// --- the endless pond --------------------------------------------------------------------------

std::vector<Drop> Pond::introDrops() {
    // 1CB2Bh: centres (20, 12), (10, 7), (27, 9); the second and third rings
    // start 10 and 18 cells behind, at T 1.25 and 2.25
    return {{20, 12, 0, true}, {10, 7, 1.25f, false}, {27, 9, 2.25f, false}};
}

namespace {
// a ring's radius, and the fade once it has left the screen (cells)
constexpr float kFadeFrom = 56, kFadeTo = 80;
}  // namespace

bool Pond::dropDone(const Drop& d, float t) { return 8 * (t - d.t) >= kFadeTo; }

// The intro's ring for each drop (1CB2Bh), in doubles: inside the ring
// (A = distance - radius < 0) a point is pushed out from the centre by
// sin(A) S times its distance, S = 2048 · 8 / (8 - A) for the first drop and
// 2730.67 · 4 / (4 - A) for the others: the ring's front strongest, the
// ripples behind it dying out. The light rises by max(cos A, 0) · S · 50.
void Pond::pondFrame(float t, const std::vector<Drop>& drops) {
    dacSet_ = false;                // frame() after this: set it again
    // the palette: in from white (pal3) over T 0-0.5, to blue over 0.5-1.5
    if (t < 0.5f) setDac(3, (int32_t)std::lround(t * 128), 0, 0);
    else if (t < 1.5f) setDac(2, (int32_t)std::lround((t - 0.5) * 64), 3, 1);
    else copyDac(2);
    for (int gy = 0; gy <= 25; gy++)
        for (int gx = 0; gx <= 40; gx++) {
            double u = gx * 32768.0, v = gy * 32768.0, light = 258048.0;
            for (const Drop& d : drops) {
                const double r = 8.0 * (t - d.t);
                if (r <= 0) continue;
                const double dx = gx - d.x, dy = gy - d.y;
                const double a = std::sqrt(dx * dx + dy * dy) - r;
                if (a > 0) continue;
                double s = d.first ? 2048.0 * 8 / (8 - a) : 2730.666666666666 * 4 / (4 - a);
                if (r > kFadeFrom) s *= (kFadeTo - r) / (kFadeTo - kFadeFrom);
                const double g = std::sin(a) * s;
                u += dx * g, v += dy * g;
                light += std::max(std::cos(a), 0.0) * s * 50;
            }
            light = std::min(light, (double)(0x81 << 12) + 4095);
            // as the blend leaves them: times 4096
            grid_[gy * kGridW + gx] = {(uint32_t)(int32_t)std::lround(u) << 12,
                                       (uint32_t)(int32_t)std::lround(v) << 12,
                                       (uint32_t)(int32_t)std::lround(light) << 12};
        }
    gridMap();
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

// The grid mapper's picture without its roundings. Per 8x8 block, the four
// corners' u, v and light are interpolated bilinearly at the same pixel
// positions as the mapper's (corner + i/8, j/8), but kept fractional:
// - the marble is sampled bilinearly between its four nearest texels (it
//   wraps at 256, as the mapper's byte does);
// - the light level is continuous: below 64, the texel J goes to
//   J f + 128 (1 - f) with f at the fractional level; from 65, towards
//   white by (L - 65) / 64; between, J as it is (both tables give J there);
// - the palette index this gives is fractional too, read between two DAC
//   entries of the unrounded palette.
void Pond::toTrueColor(uint32_t* out) const {
    const uint8_t* tex = texture();
    constexpr double kTexel = 1.0 / 16777216.0;   // the grid's u, v and light: 8.24
    float lut[256 * 3];                           // the DAC in 0-255
    for (int i = 0; i < 768; i++) lut[i] = dacF_[i] * (255.0f / 63.0f);
    auto marble = [&](double u, double v) {
        u -= 0.5, v -= 0.5;                       // texel centres
        const double fu = std::floor(u), fv = std::floor(v);
        const int x0 = (int)((int64_t)fu & 0xFF), y0 = (int)((int64_t)fv & 0xFF);
        const int x1 = (x0 + 1) & 0xFF, y1 = (y0 + 1) & 0xFF;
        const double au = u - fu, av = v - fv;
        const double top = tex[y0 << 8 | x0] + (tex[y0 << 8 | x1] - tex[y0 << 8 | x0]) * au;
        const double bot = tex[y1 << 8 | x0] + (tex[y1 << 8 | x1] - tex[y1 << 8 | x0]) * au;
        return top + (bot - top) * av;
    };
    auto lit = [&](double j, double level) {
        if (level < 64) {
            // as lightTables(): f = e^(1.5 - (64 - L) / 13) - 0.02, at most 1
            double f = std::exp(1.5 - (64 - level) * 0.07692307692307693) - 0.02;
            f = std::min(f, 1.0);
            return j * f + 128 * (1 - f);
        }
        if (level < 65) return j;
        return j + std::min(level - 65, 64.0) * (255 - j) / 64;
    };
    for (int by = 0; by < 25; by++)
        for (int bx = 0; bx < 40; bx++) {
            const Point* p = &grid_[by * kGridW + bx];
            const Point* corner[4] = {p, p + 1, p + kGridW, p + kGridW + 1};
            auto field = [](const Point* q, int k) { return k == 0 ? q->u : k == 1 ? q->v : q->light; };
            // the corners relative to the top left one (u and v wrap: their differences are what count)
            double c[3][4];
            for (int k = 0; k < 3; k++) {
                const uint32_t a = field(p, k);
                c[k][0] = k == 2 ? (double)a : (double)(int32_t)a;
                for (int n = 1; n < 4; n++) c[k][n] = c[k][0] + (int32_t)(field(corner[n], k) - a);
                for (double& v : c[k]) v *= kTexel;
            }
            for (int j = 0; j < 8; j++) {
                const double fy = j / 8.0;
                uint32_t* o = out + (by * 8 + j) * W + bx * 8;
                for (int i = 0; i < 8; i++) {
                    const double fx = i / 8.0;
                    double q[3];
                    for (int k = 0; k < 3; k++) {
                        const double top = c[k][0] + (c[k][1] - c[k][0]) * fx;
                        const double bot = c[k][2] + (c[k][3] - c[k][2]) * fx;
                        q[k] = top + (bot - top) * fy;
                    }
                    const double idx = std::clamp(lit(marble(q[0], q[1]), std::clamp(q[2], 0.0, 129.0)), 0.0, 255.0);
                    const int i0 = std::min((int)idx, 254);
                    const float a = (float)(idx - i0);
                    const float* e = lut + 3 * i0;
                    auto ch = [&](int k) { return (uint32_t)std::clamp(std::lround(e[k] + (e[k + 3] - e[k]) * a), 0L, 255L); };
                    o[i] = 0xFF000000u | ch(0) << 16 | ch(1) << 8 | ch(2);
                }
            }
        }
}

}  // namespace pond
