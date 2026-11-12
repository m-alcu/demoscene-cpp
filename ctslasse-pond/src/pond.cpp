// The texture, the light tables and the palettes, the intro's frame (part
// 8, 1C776h, up to the tunnel at T 33) and the endless pond.
#include <algorithm>
#include <cmath>
#include <cstring>

#include "pond.h"

namespace pond {

namespace {

#include "data.inc"

// 16D9Ch: the precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

}  // namespace

double Pond::f64(uint32_t a) {
    double v;
    std::memcpy(&v, kConst + (a - 0x28C00), 8);
    return v;
}

float Pond::f32(uint32_t a) {
    float v;
    std::memcpy(&v, kConst + (a - 0x28C00), 4);
    return v;
}

uint32_t Pond::r32(uint32_t a) const {
    uint32_t v;
    std::memcpy(&v, mem_ + a, 4);
    return v;
}

void Pond::w16(uint32_t a, uint32_t v) {
    const uint16_t h = (uint16_t)v;
    std::memcpy(mem_ + a, &h, 2);
}

void Pond::w32(uint32_t a, uint32_t v) { std::memcpy(mem_ + a, &v, 4); }

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
        F.fmul(f64(0x28D20));
        F.fsin();
        F.fmul(f64(0x28D28));
        F.fld(di), F.fmul(f64(0x28D20));
        F.fxch();
        F.frndint();
        tx[i] = (uint8_t)F.fistp();
        F.fcos();
        F.fmul(f64(0x28D30));
        F.frndint();
        ty[i] = (uint8_t)F.fistp();
    }
    displace(t2, t0, t1, mem_ + kTex, tx, ty);
}

// Part 8's light tables, 65 levels of 256 (1C7C0h): level L maps a texel J
// to J f + 128 (1 - f), f = e^(L/13 - 1.5) - 0.02 at most 1: low levels
// greyed. Then 65 more (+4100h) for the highlights: J + row (255 - J) / 64,
// towards white.
void Pond::lightTables() {
    const uint32_t light = kLight;
    int32_t lvl = 0x40, acc = 0;
    for (int32_t row = 0; row <= 0x40; row++, lvl--, acc += 0xFF) {
        const int32_t step = -row;
        F.fld((X)lvl), F.fmul(f64(0x29444)), F.fsubr(f64(0x294B8));
        F.fldl2e(), F.fmulp();
        F.exp2();
        F.fadd(f64(0x294F8));
        F.fld1();
        F.fxch();
        float f = F.fstpf();
        if (F.fcomp(f).jb()) f = 1.0f;
        int32_t s = acc;
        for (int32_t j = 0; j < 0x100; j++, s += step) {
            F.fld(f), F.fld((X)j), F.fmulst(1), F.fld1(), F.fsubrp(2), F.fxch(), F.fmul(f32(0x29440)), F.faddp();
            F.frndint();
            w8(light + row * 0x100 + j, (uint32_t)F.fistp());
            w8(light + 0x4100 + row * 0x100 + j, (uint32_t)(s / 64 + j));
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

Pond::Pond() : memory_(0x40000, 0), mem_(memory_.data()) {
    precalc();
    lightTables();
    // pal1: green-grey - purple - light blue - black - red - yellow;
    // pal2: black - blue - white; pal3: black - white
    gradient(pal1_ + 0x000, 5, 8, 1, 6, 3, 0x1E, 0x40);
    gradient(pal1_ + 0x0C0, 6, 3, 0x1E, 0x0A, 0x23, 0x3C, 0x40);
    gradient(pal1_ + 0x180, 0x0A, 0x23, 0x3C, 0, 0, 0, 0x40);
    gradient(pal1_ + 0x240, 0, 0, 0, 0x3F, 0, 0, 0x20);
    gradient(pal1_ + 0x2A0, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x20);
    gradient(pal3_, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x100);
    gradient(pal2_, 0, 0, 0, 0x10, 0x20, 0x40, 0x80);
    gradient(pal2_ + 0x180, 0x10, 0x20, 0x40, 0x3F, 0x3F, 0x3F, 0x80);
    std::memset(dac_, 0x3F, sizeof dac_);  // the part before ends in white
}

// The DAC: MODE 0 SRC towards white (K 0: white, 64: SRC), 1 SRC and MIX
// mixed (K 0: MIX, 64: SRC), 2 SRC faded (K 0: black)
void Pond::setDac(const uint8_t* src, int32_t k, const uint8_t* mix, int mode) {
    for (int i = 0; i < 768; i++) {
        int32_t v;
        if (mode == 0) v = ((int32_t)src[i] * k + 0xFC0 - k * 0x3F) >> 6;
        else if (mode == 1) v = ((int32_t)mix[i] * (0x40 - k) + (int32_t)src[i] * k) >> 6;
        else v = ((int32_t)src[i] * k) >> 6;
        dac_[i] = (uint8_t)(v & 0x3F);
    }
}

// --- the intro's frame ------------------------------------------------------------------------

void Pond::frame(int32_t clock) {
    auto D = [&](uint32_t a) { return (X)f64(a); };
    auto Fl = [&](uint32_t a) { return (X)f32(a); };
    auto cmpF = [&](float v, uint32_t c) { F.fld(v); return F.fcomp(f32(c)); };
    const uint32_t grid = kGrid, grid2 = kGrid + 0x31F8;
    (void)grid2;
    F.fld((X)clock);
    F.fdiv(D(0x29500));
    const float T = F.fstf();
    const double dT = F.fstd();
    // the palettes: in from white over T 0-0.5 (black-white), to black-blue-
    // white over 0.5-1.5, to pal1 over 8-12, out over 68-72
    if (F.fcomp(D(0x294EC)).jb()) {
        F.fld(T), F.fmul(Fl(0x29454)), F.fmul(Fl(0x29458));
        F.frndint();
        setDac(pal3_, F.fistp(), nullptr, 0);
    } else if (F.fld(dT), F.fcomp(D(0x294B8)).jb()) {
        F.fld(dT), F.fadd(D(0x2954C)), F.fmul(D(0x2944C));
        F.frndint();
        setDac(pal2_, F.fistp(), pal3_, 1);
    }
    else if (!dacSet_) {
        // started past the fade-in (never in the intro): the palette in full
        std::memcpy(dac_, pal2_, sizeof dac_);
    }
    dacSet_ = true;
    if (cmpF(T, 0x294C0).ja() && cmpF(T, 0x29508).jb()) {
        F.fld(T), F.fadd(Fl(0x2950C)), F.fmul(Fl(0x2945C));
        F.frndint();
        setDac(pal1_, F.fistp(), pal2_, 1);
    }
    if (cmpF(T, 0x29510).ja()) {
        F.fld(Fl(0x29554)), F.fsub(T), F.fmul(Fl(0x2945C));
        F.frndint();
        setDac(pal1_, F.fistp(), nullptr, 2);
    }
    // the drops until T 12, the plane from T 8 (the tunnel from T 33 is not here)
    if (cmpF(T, 0x29508).jb()) bubbles(grid, T);
    if (cmpF(T, 0x294C0).ja() && cmpF(T, 0x29514).jb()) wobble(grid, T);
    // grid = grid a + grid2 b, b rising over T 8-12
    float w = 0;
    if (cmpF(T, 0x294C0).ja()) {
        F.fld(T), F.fadd(Fl(0x2950C)), F.fmul(Fl(0x294A4)), F.fmul(D(0x29484)), F.fcos();
        F.fld1(), F.fsubrp(1), F.fmul(D(0x294EC));
        w = F.fstpf();
    }
    if (cmpF(T, 0x29508).ja()) w = 1.0f;
    if (F.fldz(), F.fcomp(w).ja()) w = 0;
    if (F.fld1(), F.fcomp(w).jb()) w = 1.0f;
    F.fld(Fl(0x29460));
    F.fld(w), F.fmulst(1);
    w = F.fstf();
    F.frndint();
    F.fxch(), F.fsub(w);
    F.fxch();
    const int32_t wb = F.fistp();
    F.frndint();
    const int32_t wa = F.fistp();
    blend(grid, grid, grid + 0x31F8, wa, wb);
    gridMap(kScreen, grid, kTex, kLight);
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
    if (t < 0.5f) setDac(pal3_, (int32_t)std::lround(t * 128), nullptr, 0);
    else if (t < 1.5f) setDac(pal2_, (int32_t)std::lround((t - 0.5) * 64), pal3_, 1);
    else std::memcpy(dac_, pal2_, sizeof dac_);
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
            const uint32_t p = kGrid + (uint32_t)(gy * 41 + gx) * 12;
            // as the blend leaves them: times 4096
            w32(p, (uint32_t)(int32_t)std::lround(u) << 12);
            w32(p + 4, (uint32_t)(int32_t)std::lround(v) << 12);
            w32(p + 8, (uint32_t)(int32_t)std::lround(light) << 12);
        }
    gridMap(kScreen, kGrid, kTex, kLight);
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

}  // namespace pond
