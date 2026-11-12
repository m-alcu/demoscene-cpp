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

// The intro walks its tiles with a 16-bit address in BX: BL the column, BH
// the row, each wrapping on its own.
struct At {
    uint32_t r = 0;
    uint32_t lo() const { return r & 0xFF; }
    uint32_t hi() const { return (r >> 8) & 0xFF; }
    void setLo(uint32_t v) { r = (r & ~0xFFu) | (v & 0xFF); }
    void setHi(uint32_t v) { r = (r & ~0xFF00u) | ((v & 0xFF) << 8); }
};

}  // namespace

// 16DCAh: a diamond-square fractal over the tile: values 0..2^BITS-1, the
// random part scaled by AMP (halved each level).
void Knot::plasma(uint32_t seed, uint8_t* t, uint32_t edi, uint32_t bits) {
    const uint32_t mask = ~(0xFFFFFFFFu << (bits & 31));
    At b;
    auto put = [&](uint32_t eax, uint32_t ecx) {        // 16DAFh: the average of 4 plus the random part
        ecx = (uint32_t)((int32_t)(ecx * edi) >> 17);
        eax = (uint32_t)((int32_t)(eax + ecx + 2) >> 2);
        if ((int32_t)eax < 0) eax = 0;
        if (!(eax < mask)) eax = mask;
        t[b.r] = (uint8_t)eax;
    };
    t[0] = (uint8_t)(next(seed) & mask);
    uint32_t dl = 0x80, dh = 0;
    for (;;) {
        do {
            do {                                        // 16DE6h: the centres
                uint32_t eax = t[b.r];
                b.setLo(b.lo() + dh), eax += t[b.r];
                b.setHi(b.hi() + dh), eax += t[b.r];
                b.setLo(b.lo() - dh), eax += t[b.r];
                b.setHi(b.hi() - dl), b.setLo(b.lo() + dl);
                put(eax, next(seed) * 3);
                b.setHi(b.hi() - dl), b.setLo(b.lo() + dl);
            } while (b.lo() != 0);
            b.setHi(b.hi() + dh);
        } while (b.hi() != 0);
        do {
            do {                                        // 16E19h: the edges
                uint32_t eax = t[b.r];
                b.setHi(b.hi() + dh), eax += t[b.r];
                b.setHi(b.hi() - dl), b.setLo(b.lo() + dl), eax += t[b.r];
                b.setLo(b.lo() - dh), eax += t[b.r];
                b.setLo(b.lo() + dl);
                put(eax, next(seed) * 2);
                b.setHi(b.hi() - dl);
                eax = t[b.r];
                b.setLo(b.lo() + dh), eax += t[b.r];
                b.setLo(b.lo() - dl), b.setHi(b.hi() + dl), eax += t[b.r];
                b.setHi(b.hi() - dh), eax += t[b.r];
                b.setHi(b.hi() + dl);
                put(eax, next(seed) * 2);
                b.setLo(b.lo() + dl);
            } while (b.lo() != 0);
            b.setHi(b.hi() + dh);
        } while (b.hi() != 0);
        edi = (uint32_t)((int32_t)edi >> 1);
        dh = dl;
        dl >>= 1;
        if (!dl) break;
    }
}

// 16EA6h: the 3x3 average of the tile (wrapping).
void Knot::blur(const uint8_t* src, uint8_t* dst) {
    static const int8_t path[8][2] = {{0, -1}, {-1, 0}, {0, 1}, {0, 1}, {1, 0}, {1, 0}, {0, -1}, {0, -1}};
    for (uint32_t k = 0; k < 0x10000; k++) {
        At b{k};
        uint32_t s = src[b.r];
        for (const auto& p : path) {
            if (p[0]) b.setLo(b.lo() + p[0]);
            else b.setHi(b.hi() + p[1]);
            s += src[b.r];
        }
        dst[k] = (uint8_t)(s / 9);
    }
}

// 185D5h: hexagons in three colours, DX and DY the steps.
void Knot::hexes(uint8_t* out, uint32_t dx, uint32_t dy, uint8_t c0, uint8_t c1, uint8_t c2) {
    uint32_t acc = 0;
    for (int row = 0; row < 0x100; row++, acc += dy) {
        const uint32_t v = acc & 0xFF;
        for (uint32_t x = 0; x < 0x100; x++) {
            int32_t eax = (int32_t)(dx * x);
            if (v & 0x80) eax += 0x80;
            int32_t ebx = (int32_t)(v & 0x7F);
            eax *= 3, ebx *= 3;
            int32_t edx = eax >> 8;
            eax &= 0xFF;
            if (eax + ebx < 0x80) edx++;
            if (eax - ebx >= 0x80) edx += 2;
            const int32_t r = edx % 3;
            *out++ = r == 0 ? c0 : r == 1 ? c1 : c2;
        }
    }
}

// 18FF9h: the lighting tables, 256x256 points against two centres. The
// intro keeps 14 tables from it; the knot uses one, the soft spot around
// the first centre (+60000h). The whole computation is kept, as the values
// it leaves on the x87 stack feed the next ones.
void Knot::lighting() {
    uint8_t* out = light_;
    for (int32_t row = 0, yi = -0x50, xi = -0x80; row < 0x100; row++, yi++, xi++) {
        const int32_t yy = yi * yi, xx = xi * xi;
        int32_t v30 = -0x64;
        for (int32_t c = -0x80; c != 0x80; c++) {
            // the distance to the first centre, its light
            F.fld((X)(xx + c * c));
            F.fmul(6.103515625e-05);                    // 1/16384
            float r1 = F.fstf();
            if (F.fcomp(0.9).ja()) r1 = 0.9f;
            F.fld(r1);
            const int32_t n1 = F.fcomp(0.003).jae() ? 0 : 0x20;
            F.fld(100.0);
            F.fld(r1), F.fmul(0.1666666716337204f);
            F.fld((X)n1);
            F.fld1();
            F.fsubrp(2);
            const double dn1 = F.fstpd();
            const float f50 = F.fstf();
            F.fyl2x();
            F.exp2();
            F.fmul(128.0), F.fadd(59.0), F.fadd(dn1);
            F.fld1(), F.fsub(r1);
            F.fldst(0), F.fmul(32.0f);
            const float f6c = F.fstf();
            F.faddp(2);
            F.fmul(96.0f);
            F.fxch();
            F.fmul(0.25);
            F.frndint();
            F.pop();                                    // (+00000h, +10000h, +90000h, +A0000h)
            F.fld(100.0);
            F.fld(f50);
            F.fxch(2);
            double d74 = F.fstpd();
            F.fxch();
            F.fyl2x();
            F.exp2();
            F.fmul(128.0);
            F.fld(f6c);
            F.fxch(), F.fadd(d74);
            F.fld(50.0);
            F.fxch(), F.fadd(30.0);
            F.fld(f50);
            F.fxch();
            // truecolor: the value unrounded; (round(v) >> 3) is v / 8 - 7/16 on average
            {
                const float v = (float)F.fstd() * 0.125f - 0.4375f;
                lightF_[out - light_] = v < 0 ? 0 : v > 31 ? 31 : v;
            }
            F.frndint();
            *out++ = (uint8_t)(F.fistp() >> 3);         // +60000h
            F.fxch(2);
            F.fadd(59.0f);
            const float fc = F.fstpf();
            F.fld(fc);
            d74 = F.fstpd();
            F.fxch();
            F.fyl2x();
            F.exp2();
            F.fmul(48.0);
            F.fld(fc);
            F.fxch(), F.fadd(d74);
            F.fxch(), F.fmul(0.25f);
            F.fxch(), F.fmul(0.25);
            F.fxch();
            F.frndint();
            F.fxch();
            F.frndint();
            F.pop();                                    // (+20000h, +30000h)
            F.pop();                                    // (+B0000h)
            // the second centre (+D0000h, +E0000h, +F0000h)
            F.fld((X)(yy + v30 * v30));
            F.fmul(6.103515625e-05);
            float r2 = F.fstf();
            if (F.fcomp(0.9).ja()) r2 = 0.9f;
            F.fld(r2);
            const int32_t n2 = F.fcomp(0.003).jae() ? 0 : 0x20;
            F.fld(100.0);
            F.fld(r2), F.fmul(0.1666666716337204f);
            F.fld((X)n2);
            F.fld1();
            F.fsubrp(2);
            const double dn2 = F.fstpd();
            F.fyl2x();
            F.exp2();
            F.fmul(128.0), F.fadd(59.0), F.fadd(dn2);
            F.fld1(), F.fsub(r2);
            F.fmul(32.0f);
            F.faddto(1);
            F.fadd(59.0f);
            F.fxch(), F.fmul(0.25);
            F.fxch(), F.fmul(0.5f);
            F.fxch();
            F.frndint();
            F.pop();
            v30++;
            F.fadd(128.0f);
            F.frndint();
            F.pop();
        }
    }
}

// 189ECh: eight ramps of 32 colours, each black -> a colour (18 steps) ->
// white (14 steps), the colours stepping through bluish greys and purples.
void Knot::palette8() {
    // 18493h: N entries from (R0 G0 B0) towards (R1 G1 B1)
    auto gradient = [](uint8_t* d, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                       int32_t n) {
        int32_t ra = r0 * n, ga = g0 * n, ba = b0 * n, rb = 0, gb = 0, bb = 0;
        for (int32_t i = 0; i < n; i++) {
            *d++ = (uint8_t)((rb + ra) / n);
            *d++ = (uint8_t)((gb + ga) / n);
            *d++ = (uint8_t)((bb + ba) / n);
            rb += r1, ra -= r0;
            gb += g1, ga -= g0;
            bb += b1, ba -= b0;
        }
    };
    uint8_t* dst = pal_;
    int32_t r = 0x10, gb = 0x10, b = 0x10, k = 2;
    for (int32_t i = 0; i < 8; i++, dst += 0x60) {
        const int32_t bb = b + 2 * (i % 3);
        const int32_t g = (i & 1) * 4 + gb;
        const int32_t rr = (k % 3) * 3 + r;
        b += 2, k++, gb += 3;
        base_[i][0] = (float)rr, base_[i][1] = (float)g, base_[i][2] = (float)bb;
        gradient(dst, 0, 0, 0, rr, g, bb, 0x12);                     // 18547h
        gradient(dst + 0x12 * 3, rr, g, bb, 0x3F, 0x3F, 0x3F, 0x0E);
        r += 4;
    }
}

void Knot::precalc() {
    static uint8_t t0[0x10000], t1[0x10000], t2[0x10000];
    uint8_t tx[0x100], ty[0x100];

    // the knot's texture: a 3-bit noise (T0) displaced by two tables made
    // from two 8-bit noises (T1, T2) and sines (18B76h)
    plasma(0x17091977, t0, 0x1F4, 3);
    plasma(0x4D3, t1, 0x1F4, 8);
    plasma(0x477, t2, 0x1F4, 8);
    for (int32_t i = 0; i < 0x100; i++) {
        int32_t a = t2[i] / 2;
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(0.04);
        const double da = (double)a;
        F.fsin();
        F.fmul(80.0);
        F.fsubr(da);
        F.frndint();
        tx[i] = (uint8_t)F.fistp();
        a = t1[i] / 2;
        F.fld(di), F.fmul(0.04);
        const double db = (double)a;
        F.fcos();
        F.fmul(80.0);
        F.fadd(db);
        F.frndint();
        ty[i] = (uint8_t)F.fistp();
    }
    // 16E81h: each pixel of T0 moved by TX[T1] across and TY[T2] down
    for (uint32_t k = 0; k < 0x10000; k++) {
        const uint8_t dx = tx[t1[k]], dy = ty[t2[k]];
        plasma_[k] = (uint8_t)(t0[(((k >> 8) + dy) & 0xFF) << 8 | ((k + dx) & 0xFF)] << 5);
    }

    // the background
    hexes(t0, 5, 8, 0x45, 0x4C, 0x54);
    blur(t0, hexes_);
    // truecolor: the same 3x3 box, not truncated, as the shade in ramp 2 (40h)
    for (int32_t k = 0; k < 0x10000; k++) {
        const int32_t r = k >> 8, c = k & 0xFF;
        int32_t s = 0;
        for (int32_t dy = -1; dy <= 1; dy++)
            for (int32_t dx = -1; dx <= 1; dx++) s += t0[((r + dy) & 0xFF) << 8 | ((c + dx) & 0xFF)];
        hexF_[k] = (float)s / 9.0f - 0x40;
    }

    lighting();
    palette8();
}

}  // namespace knot
