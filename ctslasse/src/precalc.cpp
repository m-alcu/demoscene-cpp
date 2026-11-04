// The precalculation (18A6Ch): textures for the parts, made from seeded
// fractal noise, sine tables, displacement, blurs, run-length masks, a
// polar map and lighting tables, into the 64K-aligned buffer at [2B4C0h].
//
// Work buffers: T (three 64K tiles, aligned, from a block allocated here)
// and two 256-byte tables on the stack (aligned down to 256: 2C200h and
// 2C300h for this stack). Each texture is a 256x256 tile addressed by
// (row << 8 | column), so x and y wrap.
#include "demo.h"

namespace lasse {

namespace {
// 16D9Ch: the generator; ECX gets the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}
inline void setLo(uint32_t& r, uint32_t v) { r = (r & ~0xFFu) | (v & 0xFF); }
inline void setHi(uint32_t& r, uint32_t v) { r = (r & ~0xFF00u) | ((v & 0xFF) << 8); }
inline uint32_t lo(uint32_t r) { return r & 0xFF; }
inline uint32_t hi(uint32_t r) { return (r >> 8) & 0xFF; }
}  // namespace

// 16DCAh: a diamond-square fractal in the tile at DST: values 0..2^BITS-1,
// the random part scaled by AMP (halved each level).
void Demo::plasma(uint32_t seed, uint32_t ebx, uint32_t edi, uint32_t bits) {
    const uint32_t mask = ~(0xFFFFFFFFu << (bits & 31));
    // 16DAFh: the average of 4 plus the random part, clamped
    auto put = [&](uint32_t eax, uint32_t ecx) {
        ecx = (uint32_t)((int32_t)(ecx * edi) >> 17);
        eax = (uint32_t)((int32_t)(eax + ecx + 2) >> 2);
        if ((int32_t)eax < 0) eax = 0;
        if (!(eax < mask)) eax = mask;
        m_.w8(ebx, eax);
    };
    m_.w8(ebx, next(seed) & mask);
    uint32_t dl = 0x80, dh = 0;
    for (;;) {
        do {
            do {                                    // 16DE6h: the centres
                uint32_t eax = m_.r8(ebx);
                setLo(ebx, lo(ebx) + dh), eax += m_.r8(ebx);
                setHi(ebx, hi(ebx) + dh), eax += m_.r8(ebx);
                setLo(ebx, lo(ebx) - dh), eax += m_.r8(ebx);
                setHi(ebx, hi(ebx) - dl), setLo(ebx, lo(ebx) + dl);
                put(eax, next(seed) * 3);
                setHi(ebx, hi(ebx) - dl), setLo(ebx, lo(ebx) + dl);
            } while (lo(ebx) != 0);
            setHi(ebx, hi(ebx) + dh);
        } while (hi(ebx) != 0);
        do {
            do {                                    // 16E19h: the edges
                uint32_t eax = m_.r8(ebx);
                setHi(ebx, hi(ebx) + dh), eax += m_.r8(ebx);
                setHi(ebx, hi(ebx) - dl), setLo(ebx, lo(ebx) + dl), eax += m_.r8(ebx);
                setLo(ebx, lo(ebx) - dh), eax += m_.r8(ebx);
                setLo(ebx, lo(ebx) + dl);
                put(eax, next(seed) * 2);
                setHi(ebx, hi(ebx) - dl);
                eax = m_.r8(ebx);
                setLo(ebx, lo(ebx) + dh), eax += m_.r8(ebx);
                setLo(ebx, lo(ebx) - dl), setHi(ebx, hi(ebx) + dl), eax += m_.r8(ebx);
                setHi(ebx, hi(ebx) - dh), eax += m_.r8(ebx);
                setHi(ebx, hi(ebx) + dl);
                put(eax, next(seed) * 2);
                setLo(ebx, lo(ebx) + dl);
            } while (lo(ebx) != 0);
            setHi(ebx, hi(ebx) + dh);
        } while (hi(ebx) != 0);
        edi = (uint32_t)((int32_t)edi >> 1);
        dh = dl;
        dl >>= 1;
        if (!dl) break;
    }
}

// 16EA6h: the 3x3 average of the tile at SRC (wrapping) to DST.
void Demo::blur(uint32_t ebx, uint32_t edi) {
    do {
        uint32_t s = m_.r8(ebx);
        static const int8_t path[8][2] = {{0, -1}, {-1, 0}, {0, 1}, {0, 1}, {1, 0}, {1, 0}, {0, -1}, {0, -1}};
        for (const auto& p : path) {
            if (p[0]) setLo(ebx, lo(ebx) + p[0]);
            else setHi(ebx, hi(ebx) + p[1]);
            s += m_.r8(ebx);
        }
        setHi(ebx, hi(ebx) + 1), setLo(ebx, lo(ebx) - 1);
        m_.w8(edi++, s / 9);
        ebx = (ebx & 0xFFFF0000u) | ((ebx + 1) & 0xFFFF);
    } while (ebx & 0xFFFF);
}

// 16E81h: D = the tile at B, each pixel moved by TX[S] across and TY[A]
// down (TX, TY: 256-byte tables).
void Demo::displace(uint32_t a, uint32_t b, uint32_t s, uint32_t d, uint32_t tx, uint32_t ty) {
    for (uint32_t k = 0; k < 0x10000; k++) {
        const uint8_t dx = m_.r8((tx & ~0xFFu) | m_.r8(s + k));
        const uint8_t dy = m_.r8((ty & ~0xFFu) | m_.r8(a + k));
        m_.w8(d + k, m_.r8((b & 0xFFFF0000u) | (((k >> 8) + dy) & 0xFF) << 8 | ((k + dx) & 0xFF)));
    }
}

// 18588h: alternate runs of C1 and C2 (-1: left as they are), lengths from
// DATA, over 64K at DST.
void Demo::rle(uint32_t esi, uint32_t data, uint32_t c1, uint32_t c2) {
    const uint32_t end = esi + 0x10000;
    while (esi < end) {
        if (c1 != 0xFFFFFFFFu) for (uint32_t n = m_.r8(data), p = esi; n; n--) m_.w8(p++, c1);
        esi += m_.r8(data++);
        if (c2 != 0xFFFFFFFFu) for (uint32_t n = m_.r8(data), p = esi; n; n--) m_.w8(p++, c2);
        esi += m_.r8(data++);
    }
}

// 185D5h: a 256x256 tile of hexagons in three colours (C0 C1 C2), DX and
// DY the steps.
void Demo::hexes(uint32_t esi, uint32_t dx, uint32_t dy, uint32_t c0, uint32_t c1, uint32_t c2) {
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
            m_.w8(esi++, r == 0 ? c0 : r == 1 ? c1 : c2);
        }
    }
}

// 1868Ah: a bump texture: for each of 256x256 points a vector from a
// parametric surface, wound four times through a cross product, then a
// sum of sines of it, /16.
void Demo::bumps(uint32_t ecx) {
    Frame fr(*this, 5, 0x58);
    const uint32_t ebp = fr.ebp;
    const uint32_t P = ebp - 0x40, Q = ebp - 0x4C, R = ebp - 0x58;
    auto C = [&](uint32_t a) { return (X)m_.f64(a); };
    for (int32_t row = -200; row != 0x138; row += 2) {
        for (int32_t col = -320; col != 0xC0; col += 2) {
            // 1873Fh
            F.fld((X)row);
            F.fmul(C(0x28AF0)), F.fmul(C(0x28B10)), F.fmul(C(0x28B18));
            const double d24 = F.fstd();
            F.fadd(C(0x28B30));
            F.fcos();
            F.fld((X)col);
            F.fxch(), F.fadd(C(0x28B18));
            F.fxch(), F.fmul(C(0x28AF0));
            F.fxch(), F.fmul(C(0x28B20));
            F.fxch(), F.fmul(C(0x28B10));
            F.fld1();
            F.fxch();
            double d34 = F.fstpd();
            F.fadd(d34);
            F.fxch();
            const double d2c = F.fstpd();
            F.fsin();
            F.fmul(d2c);
            F.fld(d24), F.fadd(C(0x28B30));
            F.fxch();
            const float fc = F.fstpf();
            F.fsin();
            F.fmul(C(0x28B20));
            F.fld(d24), F.fadd(C(0x28B30));
            F.fxch();
            const float f18 = F.fstpf();
            F.fcos();
            F.fadd(C(0x28B18));
            F.fmul(C(0x28B20));
            F.fld1();
            F.fadd(d34);
            F.fxch();
            d34 = F.fstpd();
            F.fcos();
            F.fmul(d34);
            const float f1c = F.fstpf();
            m_.wf32(P, f1c), m_.wf32(P + 4, f18), m_.wf32(P + 8, fc);
            m_.wf32(Q, fc), m_.wf32(Q + 4, f1c), m_.wf32(Q + 8, f18);
            float s = 0.2f;                         // 3E4CCCCDh
            for (int k = 0; k < 4; k++) {           // 18804h
                cross(P, Q, R);
                F.fld(s);
                vscale(R, R);
                vadd(P, R, P);
                F.fld(m_.f32(Q + 8)), F.fmul(m_.f32(0x28B28));
                F.fld(m_.f32(Q + 4)), F.fmul(m_.f32(0x28B28));
                F.fld(s), F.fmul(m_.f32(0x28B2C));
                F.fxch(2);
                m_.wf32(Q + 8, F.fstpf());
                m_.wf32(Q + 4, F.fstpf());
                s = F.fstpf();
            }
            // 186C1h
            F.fld(m_.f32(P)), F.fmul(C(0x28AE8)), F.fmul(C(0x28AF0));
            F.fsin();
            F.fld(m_.f32(P + 4)), F.fmul(C(0x28AE8)), F.fmul(C(0x28AF0));
            F.fxch();
            d34 = F.fstpd();
            F.fcos();
            F.fld(m_.f32(P + 8)), F.fmul(C(0x28AF8));
            F.fxch(), F.fadd(d34);
            F.fxch(), F.fmul(C(0x28AF0));
            F.fxch();
            d34 = F.fstpd();
            F.fsin();
            F.fadd(d34);
            F.fmul(C(0x28B00)), F.fmul(C(0x28B08));
            F.frndint();
            const uint8_t v = (uint8_t)F.fistp();
            m_.w8(ecx++, v >> 4);
        }
    }
}

// 18A6Ch
void Demo::precalc() {
    Frame fr(*this, 5, 0x37C);
    const uint32_t ebp = fr.ebp;
    const uint32_t tx = (ebp - 0x27D) & ~0xFFu, ty = (ebp - 0x17D) & ~0xFFu;
    const uint32_t big = m_.r32(0x2B4C0);
    const uint32_t blk = malloc(0x40000);
    const uint32_t T = (blk + 0xFFFF) & 0xFFFF0000u;
    auto C = [&](uint32_t a) { return (X)m_.f64(a); };
    // two sine-warped tables from a tile's bytes (the loops at 18B76h, ...)
    plasma(0x17091977, T, 0x7D0, 6);
    rle(T, 0x21392, 0, 0xFFFFFFFFu);
    for (uint32_t a = T; a != T + 0x10000; a++) m_.w8(a, m_.r8(a) + 0xC0);
    blur(T, big + 0x50000);
    rle(big + 0x40000, 0x20EBC, 0, 0xC0);
    plasma(0x17091977, T, 0x1F4, 3);
    plasma(0x4D3, T + 0x10000, 0x1F4, 8);
    plasma(0x477, T + 0x20000, 0x1F4, 8);
    for (int32_t i = 0; i < 0x100; i++) {   // 18B76h
        int32_t a = m_.r8(T + 0x20000 + i) / 2;
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(C(0x28CF0));
        const double da = (double)a;
        F.fsin();
        F.fmul(C(0x28CF8));
        F.fsubr(da);
        F.frndint();
        m_.w8(tx + i, F.fistp());
        a = m_.r8(T + 0x10000 + i) / 2;
        F.fld(di), F.fmul(C(0x28CF0));
        const double db = (double)a;
        F.fcos();
        F.fmul(C(0x28CF8));
        F.fadd(db);
        F.frndint();
        m_.w8(ty + i, F.fistp());
    }
    displace(T + 0x20000, T, T + 0x10000, big + 0x70000, tx, ty);
    for (uint32_t a = big + 0x70000; a != big + 0x80000; a++) m_.w8(a, m_.r8(a) << 5);
    hexes(T, 5, 8, 0x45, 0x4C, 0x54);
    blur(T, big + 0x80000);
    plasma(0x17091977, T, 0x7D0, 6);
    plasma(0x12D53B, T + 0x10000, 0x1F4, 8);
    plasma(0x116E47, T + 0x20000, 0x64, 8);
    for (int32_t i = 0; i < 0x100; i++) {   // 18CBBh
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(C(0x28D00));
        F.fsin();
        F.fmul(C(0x28D08));
        F.fld(di), F.fmul(C(0x28D00));
        F.fxch();
        F.frndint();
        m_.w8(tx + i, F.fistp());
        F.fsin();
        F.fmul(C(0x28D10));
        F.frndint();
        m_.w8(ty + i, F.fistp());
    }
    displace(T + 0x20000, T, T + 0x10000, T + 0x10000, tx, ty);
    rle(T + 0x10000, 0x2179E, 0, 0xFFFFFFFFu);
    for (uint32_t a = T + 0x10000; a != T + 0x20000; a++) m_.w8(a, m_.r8(a) + 0xC0);
    blur(T + 0x10000, big + 0xC0000);
    // 18D83h: a polar map, 320x200 (words: angle, 2048 / radius)
    for (int32_t k = 0, p = (int32_t)big + 0x100000; k < 0xFA00; k++, p += 2) {
        const int32_t x = ((k >> 6) % 0x28) * 8 + (k & 7) - 0xA0;
        const int32_t y = (k / 0xA00) * 8 + ((k >> 3) & 7) - 0x64;
        if (x == 0 && y == 0) {
            m_.w16(p, 0);
            continue;
        }
        F.fld((X)x), F.fld((X)y);
        F.fpatan();
        F.fmul(C(0x28D18)), F.fdiv(C(0x28D84));
        F.fadd(C(0x28D4C));
        F.frndint();
        const uint32_t ang = (uint8_t)F.fistp();
        F.fld((X)(int32_t)(x * x + y * y));
        F.fsqrt();
        F.fdivr(C(0x28D8C));
        F.frndint();
        const uint32_t r = (uint8_t)F.fistp();
        m_.w16(p, r << 8 | ang);
    }
    bumps(T);
    blur(T, big + 0x120000);
    plasma(0x12345678, T, 0x2710, 8);
    plasma(0x4D3, T + 0x10000, 0x64, 8);
    plasma(0x477, T + 0x20000, 0x190, 8);
    for (int32_t i = 0; i < 0x100; i++) {   // 18EAFh
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(C(0x28D20));
        F.fsin();
        F.fmul(C(0x28D28));
        F.fld(di), F.fmul(C(0x28D20));
        F.fxch();
        F.frndint();
        m_.w8(tx + i, F.fistp());
        F.fcos();
        F.fmul(C(0x28D30));
        F.frndint();
        m_.w8(ty + i, F.fistp());
    }
    displace(T + 0x20000, T, T + 0x10000, T + 0x10000, tx, ty);
    rle(T + 0x20000, 0x2179E, 0, 0xFF);
    blur(T + 0x20000, T);
    blur(T, T + 0x20000);
    blur(T + 0x20000, T);
    blur(T, T + 0x20000);
    for (int32_t i = 0; i < 0x100; i++) {   // 18F6Fh
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(C(0x28D20));
        F.fsin();
        F.fmul(C(0x28D38));
        F.fld(di), F.fmul(C(0x28D20));
        F.fxch();
        F.frndint();
        m_.w8(tx + i, F.fistp());
        F.fcos();
        F.fmul(C(0x28D40));
        F.frndint();
        m_.w8(ty + i, F.fistp());
    }
    displace(T + 0x20000, T + 0x10000, T + 0x20000, big + 0x130000, tx, ty);
    // 18FF9h: lighting tables, 256x256, from the distance to two centres
    uint32_t out = big;
    for (int32_t row = 0, yi = -0x50, xi = -0x80; row < 0x100; row++, yi++, xi++) {
        const int32_t yy = yi * yi, xx = xi * xi;
        int32_t v30 = -0x64;
        for (int32_t c = -0x80; c != 0x80; c++) {
            // the distance to the first centre, its light
            F.fld((X)(xx + c * c));
            F.fmul(C(0x28D6C));
            float r1 = F.fstf();
            if (F.fcomp(C(0x28DA4)).ja()) r1 = 0.9f;
            F.fld(r1);
            const int32_t n1 = F.fcomp(C(0x28DAC)).jae() ? 0 : 0x20;
            F.fld(C(0x28D94));
            F.fld(r1), F.fmul(m_.f32(0x28D48));
            F.fld((X)n1);
            F.fld1();
            F.fsubrp(2);
            const double dn1 = F.fstpd();
            const float f50 = F.fstf();
            F.fyl2x();
            F.exp2();
            F.fmul(C(0x28D4C)), F.fadd(C(0x28D9C)), F.fadd(dn1);
            F.fld1(), F.fsub(r1);
            F.fldst(0), F.fmul(m_.f32(0x28D54));
            const float f6c = F.fstf();
            F.faddp(2);
            F.fmul(m_.f32(0x28D74));
            F.fxch();
            F.fmul(C(0x28D58));
            F.frndint();
            uint8_t al = (uint8_t)F.fistp();
            F.fld(C(0x28D94));
            m_.w8(out, al);
            m_.w8(out + 0x90000, al);
            al += 0x40;
            F.fld(f50);
            m_.w8(out + 0x10000, al);
            F.fxch(2);
            double d74 = F.fstpd();
            m_.w8(out + 0xA0000, al);
            F.fxch();
            F.fyl2x();
            F.exp2();
            F.fmul(C(0x28D4C));
            F.fld(f6c);
            F.fxch(), F.fadd(d74);
            F.fld(C(0x28DB4));
            F.fxch(), F.fadd(C(0x28D10));
            F.fld(f50);
            F.fxch();
            F.frndint();
            const int32_t v48 = F.fistp() >> 3;
            F.fxch(2);
            F.fadd(m_.f32(0x28D60));
            const float fc = F.fstpf();
            F.fld(fc);
            d74 = F.fstpd();
            m_.w8(out + 0x60000, (uint8_t)v48);
            F.fxch();
            F.fyl2x();
            F.exp2();
            F.fmul(C(0x28D78));
            F.fld(fc);
            F.fxch(), F.fadd(d74);
            F.fxch(), F.fmul(m_.f32(0x28D80));
            F.fxch(), F.fmul(C(0x28D58));
            F.fxch();
            F.frndint();
            F.fxch();
            F.frndint();
            const uint8_t b8 = (uint8_t)F.fistp();
            const uint8_t b4 = (uint8_t)F.fistp();
            // the second centre
            F.fld((X)(yy + v30 * v30));
            F.fmul(C(0x28D6C));
            float r2 = F.fstf();
            if (F.fcomp(C(0x28DA4)).ja()) r2 = 0.9f;
            F.fld(r2);
            const int32_t n2 = F.fcomp(C(0x28DAC)).jae() ? 0 : 0x20;
            F.fld(C(0x28D94));
            F.fld(r2), F.fmul(m_.f32(0x28D48));
            F.fld((X)n2);
            F.fld1();
            F.fsubrp(2);
            const double dn2 = F.fstpd();
            F.fyl2x();
            F.exp2();
            F.fmul(C(0x28D4C)), F.fadd(C(0x28D9C)), F.fadd(dn2);
            F.fld1(), F.fsub(r2);
            F.fmul(m_.f32(0x28D54));
            F.faddto(1);
            F.fadd(m_.f32(0x28D60));
            F.fxch(), F.fmul(C(0x28D58));
            F.fxch(), F.fmul(m_.f32(0x28D64));
            F.fxch();
            F.frndint();
            const uint8_t v = (uint8_t)F.fistp();
            v30++;
            m_.w8(out + 0xF0000, v + 0x40);
            F.fadd(m_.f32(0x28D68));
            m_.w8(out + 0xE0000, v + 0xC0);
            F.frndint();
            m_.w8(out + 0x30000, b8 + 0x80);
            m_.w8(out + 0xD0000, F.fistp());
            m_.w8(out + 0x20000, b8);
            m_.w8(out + 0xB0000, b4);
            out++;
        }
    }
    free(blk);
}

}  // namespace lasse
