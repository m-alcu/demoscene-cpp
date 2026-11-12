// Part 6 (1BE6Ah): its set-up and its frame, the picture in the middle only.
//
// Left out: the scroll of words the intro writes straight to the screen down
// its left and right edges (1BD5Eh). It only touches the screen, never A or
// B, so the picture in the middle is the same without it.
#include <cstring>

#include "feedback.h"

namespace feedback {

namespace {

#include "font.inc"

// 16D9Ch: the precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// The part's constants (the intro's data at 292FCh-293E4h)
constexpr float kRnd = 3.0517578125e-05f;     // 292FCh: 2^-15
constexpr double kTicks = 8.381906481393007e-07;   // 2930Ch: 1/1193182, T in seconds

}  // namespace

uint32_t Feedback::r32(uint32_t a) const {
    uint32_t v;
    std::memcpy(&v, mem_ + a, 4);
    return v;
}

void Feedback::w32(uint32_t a, uint32_t v) { std::memcpy(mem_ + a, &v, 4); }

// 1BE56h: the part's generator (seed at 2842Ch, 1 when the part begins)
int32_t Feedback::rnd() {
    seed_ = seed_ * 0x15A4E35u + 1;
    return (int32_t)seed_ >> 16;
}

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level). Row by row, left to right,
// as the intro draws its random numbers in that order.
void Feedback::plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits) {
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

// N entries from (R0, G0, B0) towards (R1, G1, B1), the last one short of it
void Feedback::gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                        int32_t n) {
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

Feedback::Feedback() {
    std::memset(mem_, 0, sizeof mem_);
    // A and B filled with noise, then both overwritten by the same fractal:
    // only the generator's state is left of it, for the dots
    for (uint32_t k = 0; k < 0x10000; k++) {
        mem_[kA + k] = (uint8_t)(rnd() & 0x3F);
        mem_[kB + k] = (uint8_t)(rnd() & 0x3F);
    }
    // the font: a fractal (12313123h) masked by runs of 0 and 3Fh (18588h);
    // the runs cover the whole tile, so only the mask is left
    {
        uint32_t at = kFont;
        for (int i = 0; i < 1544; i += 2) {
            std::memset(mem_ + at, 0, kFontRuns[i]);
            at += kFontRuns[i];
            std::memset(mem_ + at, 0x3F, kFontRuns[i + 1]);
            at += kFontRuns[i + 1];
        }
    }
    plasma(0x17091977, mem_ + kA, 0x7530, 6);
    plasma(0x17091977, mem_ + kB, 0x7530, 6);
    // black - dark blue - light blue - white, and grey - black - blue - red - yellow
    gradient(pal_ + 0x00, 0, 0, 0, 0, 0, 0x10, 0x10);
    gradient(pal_ + 0x30, 0, 0, 0x10, 0, 0x10, 0x20, 0x10);
    gradient(pal_ + 0x60, 0, 0x10, 0x20, 0x20, 0x30, 0x30, 0x10);
    gradient(pal_ + 0x90, 0x20, 0x30, 0x30, 0x3F, 0x3F, 0x3F, 0x10);
    gradient(pal2_ + 0x00, 0x19, 0x19, 0x19, 0, 0, 0, 0x10);
    gradient(pal2_ + 0x30, 0, 0, 0, 0x0A, 0x0A, 0x20, 0x10);
    gradient(pal2_ + 0x60, 0x0A, 0x0A, 0x20, 0x3F, 0, 0, 0x10);
    gradient(pal2_ + 0x90, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x10);
    std::memcpy(dac_, pal_, sizeof dac_);
    // the dots: speeds and phases of their sine paths, and their values (20h-3Fh)
    for (Dot& d : dots_) {
        F.fld((X)rnd()), F.fmul(kRnd), F.fmul(0.6666666666666666);
        d.fx = F.fstpf();
        F.fld((X)rnd()), F.fmul(kRnd);
        d.fy = F.fstpf();
        F.fld((X)rnd()), F.fmul(kRnd), F.fmul(6.0f);
        d.px = F.fstpf();
        F.fld((X)rnd()), F.fmul(kRnd), F.fmul(6.0f);
        d.py = F.fstpf();
        d.v = (float)(X)((rnd() & 0x1F) + 0x20);
    }
}

// 1BDC4h: S centred on row Y of A, the glyphs' zero pixels left as they are
void Feedback::textOver(int32_t y, const char* s) {
    const uint32_t len = (uint32_t)std::strlen(s);
    uint32_t dst = kA + (uint32_t)(y << 8) + 0x80 - len * 8;
    for (uint8_t c; (c = (uint8_t)*s) != 0; s++, dst += 0x10) {
        const uint32_t g = kFont + (c >> 4) * 0x1000 + (c & 15) * 0x10;
        for (uint32_t row = 0; row != 0x1000; row += 0x100)
            for (uint32_t col = 0; col < 0x10; col++)
                if (mem_[g + row + col]) mem_[dst + row + col] = mem_[g + row + col];
    }
}

// 15143h: the 4-neighbour average, 256 wide, four pixels at a time: the
// low 2 bits of each byte's sum carried into the next four
void Feedback::blurRow(uint32_t edi, uint32_t esi, uint32_t& carry, int n, bool keepCarry) {
    for (; n; n--, esi += 8, edi += 8) {
        for (uint32_t k = 0; k < 8; k += 4) {
            const uint32_t sum =
                carry + r32(esi + k + 0x100) + r32(esi + k - 1) + r32(esi + k - 0x100) + r32(esi + k + 1);
            carry = keepCarry ? sum & 0x03030303u : 0;
            w32(edi + k, (sum & 0xFCFCFCFCu) >> 2);
        }
    }
}

void Feedback::clearPictures() { std::memset(mem_ + kA, 0, kFont - kA); }

void Feedback::frame(int32_t clock, const Params& P) {
    F.fld((X)clock);
    F.fmul(kTicks);
    const float T = F.fstpf();
    // the palette: over T 16-24 from the first to the second, in 64 steps
    F.fld(T);
    if (F.fcomp(16.0f).ja()) {
        F.fld(T);
        if (F.fcomp(24.0f).jb()) {
            F.fld(24.0f), F.fsub(T), F.fmul(8.0f);
            F.frndint();
            const int32_t k = F.fistp();
            for (int i = 0; i < 0xC0; i++) dac_[i] = (uint8_t)(((int32_t)pal2_[i] * (0x40 - k) + (int32_t)pal_[i] * k) >> 6);
        }
    }
    // the point (PX, PY), on two sines; the zoom shrinking from 65536 to
    // 49000 by T 8.3, then breathing and turning from T 15, swaying from T 20
    F.fld(T);
    const double dT = F.fstd();
    F.fmul(0.4545454545454546), F.fadd(0.123), F.fsin(), F.fmul(110.0);
    F.fld(dT);
    F.fxch(), F.fadd(128.0);
    F.fxch(), F.fmul(0.3448275862068966);
    F.fxch();
    F.frndint();
    int32_t px = F.fistp();
    F.fadd(123.0);
    F.fsin(), F.fmul(85.0);
    F.fld(T), F.fmul(2000.0f);
    F.fxch(), F.fadd(100.0);
    float angle = 0;
    F.frndint();
    F.fxch(), F.fsubr(65536.0f);
    F.fxch();
    int32_t py = F.fistp();
    float zoom = F.fstpf();
    F.fld(zoom);
    if (F.fcomp(49000.0f).jb()) zoom = 49000.0f;
    F.fld(T);
    if (!F.fcomp(15.0f).jb()) {
        F.fld(T), F.fadd(-15.0f);
        const float f42 = F.fstf();
        F.fmul(0.1f), F.fsin(), F.fmul(3.141592653589793);
        F.fld(f42), F.fmul(1600.0f);
        F.fxch(), F.fmul(2.0);
        F.fxch(), F.fadd(49000.0f);
        F.fxch(), F.fmul(0.2);
        F.fxch();
        zoom = F.fstpf();
        angle = F.fstpf();
    }
    F.fld(T);
    if (!F.fcomp(20.0f).jb()) {
        F.fld(T), F.fadd(-20.0f);
        const float f42 = F.fstf();
        F.fmul(0.5f), F.fcos(), F.fmul(5000.0);
        F.fld(f42), F.fmul(0.2857142857142857);
        F.fxch(), F.fsubr(62000.0);
        F.fxch(), F.fadd(0.5);
        F.fxch();
        zoom = F.fstpf();
        F.fsin(), F.fmul(3.141592653589793), F.fmul(2.0), F.fmul(0.2);
        angle = F.fstpf();
    }
    // the workbench's camera (the x87's work above still done, as it is)
    if (!P.introCamera) zoom = P.step * 65536.0f, angle = P.turn;
    if (!P.introCentre) px = P.cx, py = P.cy;
    // the point: lit for the first third of each 1/2.93 s
    F.fld1();
    F.fld(T), F.fmul(2.9333333411555556), F.fadd(0.9);
    F.fprem();
    F.fxch(), F.fstp(0);
    const uint32_t at = kA + ((uint32_t)(uint16_t)py << 8) + (uint16_t)px;
    const bool lit = F.fcomp(0.33333).jb();
    if (P.blink == Params::kBlinkIntro) mem_[at] = lit ? 0x3F : 0;
    else if (P.blink == Params::kBlinkOn) mem_[at] = 0x3F;
    info_ = Info{T, zoom, angle, px, py, P.blink == Params::kBlinkIntro ? lit : P.blink == Params::kBlinkOn};
    // the dots, crosses of 5 pixels
    for (int i = 0; i < P.dots && i < 100; i++) {
        const Dot& d = dots_[i];
        F.fld(d.fx), F.fmul(T), F.fadd(d.px), F.fsin(), F.fmul(120.0);
        F.fld(d.fy);
        F.fxch(), F.fadd(128.0);
        F.fxch(), F.fmul(T);
        F.fxch();
        F.frndint();
        F.fxch(), F.fadd(d.py);
        F.fxch();
        const int32_t qx = F.fistp();
        F.fsin(), F.fmul(90.0), F.fadd(100.0);
        F.frndint();
        const int32_t qy = F.fistp();
        const uint32_t p = kA + (uint32_t)(qy << 8) + (uint32_t)qx;
        F.fld(d.v);
        F.frndint();
        const uint8_t v = (uint8_t)F.fistp();
        mem_[p] = v, mem_[p - 1] = v, mem_[p + 1] = v, mem_[p - 0x100] = v, mem_[p + 0x100] = v;
    }
    // (here the intro writes a word of the side scroll to the screen)
    // the title on row 160: the two names in turn, each for 8/2.93 s
    F.fld1();
    F.fld(T), F.fmul(0.0625f), F.fmul(2.9333333411555556);
    F.fprem();
    F.fxch(), F.fstp(0);
    const char* title = F.fcomp(0.5).jb() ? "CUBIC TEAM SEEN" : "LASSE REINBONG";
    if (P.title) textOver(0xA0, title);
    // A blurred into B, B's border cleared (the stores reach from A's rows into B)
    uint32_t carry = 0;
    if (P.blur)
        for (uint32_t s = kA + 0x104, d = kB + 0x104; s != kA + 0xC704; s += 0x100, d += 0x100)
            blurRow(d, s, carry, 0x1F, P.carry);
    else
        std::memcpy(mem_ + kB + 0x104, mem_ + kA + 0x104, 0xC600);
    for (uint32_t e = kA + 0x100; e != kA + 0xC800; e += 0x100) w32(e + 0xFFFC, 0), w32(e + 0xFF00, 0);
    std::memset(mem_ + kB, 0, 0x200);
    std::memset(mem_ + kA + 0x1C600, 0, 0x200);
    // B back onto A, turned and zoomed about the point
    F.fld(angle), F.fcos();
    F.fld(zoom);
    const double dz = F.fstpd();
    F.fmul(dz);
    const uint32_t upx = (uint16_t)px, upy = (uint16_t)py;
    F.frndint();
    const uint32_t a = (uint32_t)x87::fist64(F.pop());
    const uint32_t e1 = upx * (0x10000 - a);
    F.fld(angle), F.fsin(), F.fmul(dz);
    F.fld(angle);
    F.fld(zoom), F.fchs();
    const double mz = F.fstpd();
    F.fxch();
    F.frndint();
    const uint32_t b = (uint32_t)x87::fist64(F.pop());
    F.fsin(), F.fmul(mz);
    F.frndint();
    const uint32_t c = (uint32_t)x87::fist64(F.pop());
    F.fld(angle), F.fcos(), F.fmul(dz);
    F.frndint();
    const uint32_t d = (uint32_t)x87::fist64(F.pop());
    const uint32_t u0 = e1 - c * upy + 0x8000;
    const uint32_t v0 = (0x10000 - d) * upy - upx * b + 0x8000;
    if (P.feed) mapper(u0, v0, (int32_t)a, (int32_t)b, (int32_t)c, (int32_t)d);
    else std::memset(mem_ + kA, 0, 0x10000);
}

void Feedback::toArgb(uint32_t* out) const {
    uint32_t lut[64];
    for (int i = 0; i < 64; i++) {
        auto c = [&](int k) { return (uint32_t)(dac_[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    const uint8_t* s = screen();
    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++) out[y * W + x] = lut[s[y * 256 + x] & 0x3F];
}

// --- the texture mapper (14BDBh) ---------------------------------------------------------

namespace {
// The texture mapper's registers: 8.16 fixed point split across two
// registers, EDX = (u fraction << 16) | ... | v integer (DL), ECX = (v
// fraction << 16) | ... | u integer (CL); each add carries the fraction's
// overflow into the other register's integer byte. BX is the texel's
// address (BH row, BL column); EDI the destination offset.
struct Regs {
    uint32_t eax = 0, ebx = 0, ecx = 0, edx = 0, edi = 0, esi = 0;
    uint32_t cf = 0;
    void add(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v + cf;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc8lo(uint32_t& r, uint32_t v) {
        const uint32_t s = (r & 0xFF) + (v & 0xFF) + cf;
        r = (r & ~0xFFu) | (s & 0xFF), cf = s >> 8;
    }
    void sbb8lo(uint32_t& r, uint32_t v) {
        const int32_t s = (int32_t)(r & 0xFF) - (int32_t)(v & 0xFF) - (int32_t)cf;
        r = (r & ~0xFFu) | (uint32_t)(s & 0xFF), cf = s < 0;
    }
    void bhdl() { ebx = (ebx & 0xFFFF00FFu) | (edx & 0xFF) << 8; }
    void blcl() { ebx = (ebx & 0xFFFFFF00u) | (ecx & 0xFF); }
    static uint32_t bswap(uint32_t v) { return v >> 24 | (v >> 8 & 0xFF00) | (v << 8 & 0xFF0000) | v << 24; }
};

// The immediates the mapper patches into its inner loop (14B14h), by the
// address they are patched at.
struct Imm {
    uint32_t i14B16, i14B23, i14B2B, i14B35, i14B3D, i14B49, i14B51, i14B5B, i14B63, i14B74, i14B7C, i14B86,
        i14B8E, i14B9A, i14BA2, i14BAC, i14BB4, i14BC6, i14BD3;
};

// 14B14h: ESI rows of 8 pixels from the texture to the destination (stored, mode 89h).
void mapLoop(Regs& r, const Imm& I, const uint8_t* tex, uint8_t* fb) {
    auto al = [&](uint8_t v) { r.eax = (r.eax & ~0xFFu) | v; };
    auto ah = [&](uint8_t v) { r.eax = (r.eax & ~0xFF00u) | (uint32_t)v << 8; };
    auto texel = [&]() { return tex[r.ebx & 0xFFFF]; };
    auto store = [&](uint32_t at) { std::memcpy(fb + at, &r.eax, 4); };
    r.add(r.ecx, I.i14B16);
    r.bhdl();
    r.adc8lo(r.edx, 0);
    r.blcl();
    do {
        r.add(r.edx, I.i14B23);
        al(texel());
        r.adc(r.ecx, I.i14B2B);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B35);
        ah(texel());
        r.adc(r.ecx, I.i14B3D);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I.i14B49);
        ah(texel());
        r.adc(r.ecx, I.i14B51);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B5B);
        al(texel());
        r.adc(r.ecx, I.i14B63);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi);
        r.blcl();
        r.add(r.edx, I.i14B74);
        al(texel());
        r.adc(r.ecx, I.i14B7C);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B86);
        ah(texel());
        r.adc(r.ecx, I.i14B8E);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I.i14B9A);
        ah(texel());
        r.adc(r.ecx, I.i14BA2);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14BAC);
        al(texel());
        r.adc(r.ecx, I.i14BB4);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi + 4);
        r.blcl();
        r.add(r.edi, I.i14BC6);
    } while (--r.esi);
    const uint64_t d = (uint64_t)r.ecx - I.i14BD3;
    r.ecx = (uint32_t)d, r.cf = (uint32_t)(d >> 63);
    r.sbb8lo(r.edx, 0);
}
}  // namespace

// 14BDBh: B over A in 32 x 25 blocks of 8x8 (256 x 200, pitch 256), from
// (U0, V0) stepping (DU, DV) a pixel and (DUY, DVY) a row (16.16).
void Feedback::mapper(uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy, int32_t dvy) {
    const int32_t bx = 0x20, by = 0x19, pitch = 0x100;
    const uint8_t* tex = mem_ + kB;
    uint8_t* fb = mem_ + kA;
    Imm I;
    I.i14BC6 = pitch;
    const uint32_t A = (uint32_t)du << 16 | (((uint32_t)dv >> 16) & 0xFF);
    I.i14B23 = I.i14B35 = I.i14B49 = I.i14B5B = I.i14B74 = I.i14B86 = I.i14B9A = A;
    {
        uint32_t e = (A & ~0xFFu) | ((((uint32_t)dvy - 7u * (uint32_t)dv) >> 16) & 0xFF);
        e = e - ((uint32_t)du << 19) + ((uint32_t)duy << 16);
        I.i14BAC = e;
    }
    const uint32_t I0 = (uint32_t)dv << 16;
    I.i14B16 = I.i14BD3 = I0;
    const uint32_t B = I0 | (((uint32_t)du >> 16) & 0xFF);
    I.i14B2B = I.i14B3D = I.i14B51 = I.i14B63 = I.i14B7C = I.i14B8E = B;
    {
        uint32_t e = (B & ~0xFFu) | ((((uint32_t)duy - 7u * (uint32_t)du) >> 16) & 0xFF);
        I.i14BB4 = e;
        e = e - ((uint32_t)dv << 19) + ((uint32_t)dvy << 16);
        e = (e & ~0xFFu) | (((uint32_t)du >> 16) & 0xFF);
        I.i14BA2 = e;
    }
    const uint32_t du8 = (uint32_t)du << 3, dv8 = (uint32_t)dv << 3, duy8 = (uint32_t)duy << 3, dvy8 = (uint32_t)dvy << 3;
    // a step (EDX += a high part, CL += its byte; ECX likewise, DL)
    struct Step {
        uint32_t ed, ec, ad;
        uint8_t bc, bd;
    };
    auto split = [](uint32_t v, uint32_t& hiPart, uint8_t& byte) {
        const uint32_t r = v << 16 | v >> 16;
        byte = (uint8_t)r;
        hiPart = r & 0xFFFF0000u;
    };
    Regs r;
    r.ebx = 0, r.edi = 0;
    r.edx = u0 << 16 | u0 >> 16;
    r.ecx = v0 << 16 | v0 >> 16;
    {
        const uint32_t dl = r.edx & 0xFF, cl = r.ecx & 0xFF;
        r.edx = (r.edx & ~0xFFu) | cl, r.ecx = (r.ecx & ~0xFFu) | dl;
    }
    auto step = [&](const Step& s) {
        r.add(r.edx, s.ed);
        r.adc8lo(r.ecx, s.bc);
        r.add(r.ecx, s.ec);
        r.adc8lo(r.edx, s.bd);
        r.edi += s.ad;
    };
    const int32_t a1 = (int32_t)du8 < 0 ? -(int32_t)du8 : (int32_t)du8;
    const int32_t a2 = (int32_t)dv8 < 0 ? -(int32_t)dv8 : (int32_t)dv8;
    if (a1 > a2) {                              // across, block by block
        Step col, row;
        split(du8 - duy8, col.ed, col.bc);
        split(dv8 - dvy8, col.ec, col.bd);
        col.ad = (uint32_t)(1 - pitch) << 3;
        split((uint32_t)(-bx) * du8 + duy8, row.ed, row.bc);
        split((uint32_t)(-bx) * dv8 + dvy8, row.ec, row.bd);
        row.ad = (uint32_t)(pitch - bx) << 3;
        for (int32_t y = by; y; y--) {
            for (int32_t x = bx; x; x--) {
                r.esi = 8;
                mapLoop(r, I, tex, fb);
                step(col);
            }
            step(row);
        }
    } else {                                    // down, a column of blocks at a time
        Step col;
        split((uint32_t)(-by) * duy8 + du8, col.ed, col.bc);
        split((uint32_t)(-by) * dvy8 + dv8, col.ec, col.bd);
        col.ad = ((uint32_t)(-by) * (uint32_t)pitch + 1) << 3;
        for (int32_t x = bx; x; x--) {
            r.esi = (uint32_t)by << 3;
            mapLoop(r, I, tex, fb);
            step(col);
        }
    }
}

}  // namespace feedback
