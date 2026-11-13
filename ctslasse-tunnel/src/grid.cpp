// Part 8's grid routines, translated from the ctslasse port as they are,
// over this project's flat memory (Tunnel::mem_): the grid mapper (14DF4h)
// with its variables at 1E500h moved to offsets 0-7Fh, the ease (1C706h),
// the tunnel (1C5CBh), the drops (1CB2Bh), the wobbling plane (1CDF8h) and the grids' blend
// (150BEh).
#include <cstring>

#include "tunnel.h"

namespace tunnel {

// 14DF4h: the grid at GRID (41 points a row, 12 bytes each) over 40x25
// blocks of 8x8 at DST (pitch 320), texels from TEX (256 wide) lit through
// the table at LIGHT (256 x levels). Its variables are at 1E500h: some
// read as dwords straddling two of them, some added to in memory, as the
// original does; each pixel's texel lands in the low byte of the v sum.
void Tunnel::gridMap(uint32_t dst, uint32_t grid, uint32_t tex, uint32_t light) {
    auto R = [&](uint32_t a) { return r32(a); };
    w32(0x74, dst), w32(0x70, grid), w32(0x6C, tex), w32(0x78, light);
    uint32_t eax, ebx, ecx, edx, esi, edi, ebp, cf = 0;
    auto add = [&](uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    };
    auto adcLo = [&](uint32_t& r, uint32_t v) {     // adc on the low byte
        const uint32_t s = (r & 0xFF) + (v & 0xFF) + cf;
        r = (r & ~0xFFu) | (s & 0xFF), cf = s >> 8;
    };
    auto adcHi = [&](uint32_t& r, uint32_t v) {     // adc on byte 1
        const uint32_t s = ((r >> 8) & 0xFF) + (v & 0xFF) + cf;
        r = (r & ~0xFF00u) | (s & 0xFF) << 8, cf = s >> 8;
    };
    auto setLo = [](uint32_t& r, uint32_t v) { r = (r & ~0xFFu) | (v & 0xFF); };
    auto setHi = [](uint32_t& r, uint32_t v) { r = (r & ~0xFF00u) | (v & 0xFF) << 8; };
    for (w32(0x64, 0x19); r32(0x64); w32(0x64, r32(0x64) - 1)) {
        for (w32(0x68, 0x28); r32(0x68); w32(0x68, r32(0x68) - 1)) {
            esi = R(0x70);
            eax = (uint32_t)((int32_t)(R(esi + 0x0C) - R(esi)) >> 11);
            ebx = (uint32_t)((int32_t)(R(esi + 0x10) - R(esi + 4)) >> 11);
            edi = (uint32_t)((int32_t)(R(esi + 0x14) - R(esi + 8)) >> 11);
            w32(0x08, eax), w32(0x10, ebx), w32(0x18, edi);
            ecx = (uint32_t)((int32_t)(R(esi + 0x1EC) - R(esi)) >> 11);
            edx = (uint32_t)((int32_t)(R(esi + 0x1F0) - R(esi + 4)) >> 11);
            ebp = (uint32_t)((int32_t)(R(esi + 0x1F4) - R(esi + 8)) >> 11);
            w32(0x20, ecx), w32(0x28, edx), w32(0x30, ebp);
            ecx = (uint32_t)((int32_t)(R(esi + 0x1F8) - R(esi + 0x1EC)) >> 11);
            edx = (uint32_t)((int32_t)(R(esi + 0x1FC) - R(esi + 0x1F0)) >> 11);
            ebp = (uint32_t)((int32_t)(R(esi + 0x200) - R(esi + 0x1F4)) >> 11);
            w32(0x38, (uint32_t)((int32_t)(ecx - eax) >> 3));
            w32(0x40, (uint32_t)((int32_t)(edx - ebx) >> 3));
            w32(0x48, (uint32_t)((int32_t)(ebp - edi) >> 3));
            ecx = R(0x78), ebx = R(0x6C), edi = R(0x74);
            setLo(ebx, r8(esi + 3));
            edx = R(esi - 1);
            setHi(ebx, r8(esi + 7));
            eax = R(esi + 3);
            setHi(ecx, r8(esi + 0x0B));
            esi = R(esi + 7);
            ebp = R(0x0E);
            setLo(edx, r8(0x0A));
            setHi(edx, r8(0x12));
            for (w32(0x60, 8); r32(0x60); w32(0x60, r32(0x60) - 1)) {
                w32(0x54, eax), w32(0x50, edx), w32(0x58, ecx), w32(0x5C, esi);
                w32(0x4C, ebx);
                auto chain = [&]() {
                    add(edx, R(0x06)), adcLo(ebx, edx);
                    add(eax, ebp), adcHi(ebx, edx >> 8);
                    add(esi, R(0x16)), adcHi(ecx, r8(0x1A));
                };
                for (int k = 0; k < 4; k++) {
                    setLo(ecx, r8(ebx));
                    setLo(eax, r8(ecx));
                    chain();
                    setLo(ecx, r8(ebx));
                    setHi(eax, r8(ecx));
                    if (k < 3) chain();
                    w16(edi + 2 * k, eax);
                }
                edx = R(0x50), eax = R(0x54), ecx = R(0x58), esi = R(0x5C);
                edi += 0x140;
                ebx = R(0x36);
                {
                    uint32_t v = R(0x06);
                    add(v, ebx);
                    w32(0x06, v);
                }
                adcLo(edx, r8(0x3A));
                add(ebp, R(0x3E)), adcHi(edx, r8(0x42));
                ebx = R(0x48);
                w32(0x18, R(0x18) + ebx);
                ebx = R(0x4C);
                add(edx, R(0x1E)), adcLo(ebx, r8(0x22));
                add(eax, R(0x26)), adcHi(ebx, r8(0x2A));
                add(esi, R(0x2E)), adcHi(ecx, r8(0x32));
            }
            w32(0x70, R(0x70) + 0x0C);
            w32(0x74, R(0x74) + 8);
        }
        w32(0x70, R(0x70) + 0x0C);
        w32(0x74, R(0x74) + 0x8C0);
    }
}

// 1C706h: an ease: (1 - cos(clamp(X, 0, 1) * k)) * k2
void Tunnel::ease(float x) {
    if (F.fldz(), F.fcomp(x).ja()) x = 0;
    if (F.fld1(), F.fcomp(x).jb()) x = 1.0f;
    F.fld(x), F.fmul(f64(0x29430)), F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(f64(0x29438));
}

// 1C746h: max(cos X, 0), as a float
void Tunnel::cosPos(float x) {
    F.fld(x), F.fcos();
    F.fldz();
    F.fxch();
    const float c = F.fstpf();
    F.fld(F.fcomp(c).ja() ? 0.0f : c);
}

// 1C5CBh: a tunnel into the grid: for each point its angle (u, P4 + the
// angle in 256ths), depth (v, P5 + P2 / r), light; the walls waving by P6
// at a phase P3, P1 the angle's twist.
void Tunnel::tunnel(uint32_t grid, float p1, float p2, float p3, int32_t p4, int32_t p5, float p6) {
    auto D = [&](uint32_t a) { return (X)f64(a); };
    F.fld(p2), F.fmul(D(0x293EC));
    F.fld(p1), F.fldst(0), F.fmul(D(0x293F4));
    F.fxch(2);
    const float f10 = F.fstpf();
    F.fxch(), F.fstp(1);
    p1 = F.fstpf();
    uint32_t edx = grid;
    for (int32_t y = 0; y <= 0x19; y++) {
        for (int32_t x = 0; x <= 0x28; x++) {
            F.fld((X)y);
            double d24 = F.fstd();
            F.fadd(D(0x2940C));
            F.fld((X)x);
            double d2c = F.fstd();
            F.fadd(D(0x29414));
            F.fpatan();
            F.fmul(D(0x293FC)), F.fdiv(D(0x2941C)), F.fadd(D(0x29424)), F.fmul(D(0x29404));
            F.frndint();
            const int32_t ang = F.fist();
            F.fmul(p1), F.fadd(p3), F.fsin(), F.fmul(p6);
            F.fld(d2c);
            F.fld1();
            F.faddp(2);
            F.fadd(D(0x29414));
            F.fxch();
            d2c = F.fstpd();
            F.fmulst(0);
            F.fld(d24), F.fadd(D(0x2940C));
            F.fxch();
            d24 = F.fstpd();
            F.fmulst(0);
            F.fadd(d24);
            F.fsqrt();
            F.fdivr(D(0x29404));
            F.fmul(d2c);
            F.fld(p2), F.fmulst(1);
            F.fld(f10);
            F.fmulp(2);
            w32(edx, (uint32_t)(p4 + ang));
            edx += 4;
            F.frndint();
            F.fxch(), F.fsubr(f32(0x2942C));
            F.fxch();
            const int32_t dv = F.fistp();
            F.frndint();
            const int32_t l = F.fistp();
            w32(edx, (uint32_t)(p5 + dv));
            edx += 4;
            w32(edx, (uint32_t)(l >= 0x1000 ? (l < 0x3F000 ? l : 0x3F000) : 0x1000));
            edx += 4;
        }
    }
}

// 150BEh: DST = A * a + B * b (3198 dwords)
void Tunnel::blend(uint32_t dst, uint32_t a, uint32_t b, int32_t wa, int32_t wb) {
    for (uint32_t i = 0; i < 0xC7E; i++)
        w32(dst + 4 * i, r32(a + 4 * i) * (uint32_t)wa + r32(b + 4 * i) * (uint32_t)wb);
}

// 1CB2Bh: three bubbles rising through the plane (T scaling their radii):
// each pushes the points around it outwards (by sin of the distance inside
// it), lit by its cosine.
void Tunnel::bubbles(uint32_t grid, float t) {
    auto D = [&](uint32_t a) { return (X)f64(a); };
    auto Fl = [&](uint32_t a) { return (X)f32(a); };
    F.fld(t), F.fmul(Fl(0x294C0));
    const float r0 = F.fstpf();
    int32_t y1 = -12, y2 = -7, y3 = -9;
    uint32_t row = grid;
    for (int32_t gy = 0; gy != 0xD0000; gy += 0x8000, row += 0x1EC, y1++, y2++, y3++) {
        uint32_t edx = row;
        int32_t x1 = -20, x2 = -10, x3 = -27, gx = 0;
        do {
            // the distance into each: A (zero outside), its strength S
            auto dist = [&](int32_t d2) {
                F.fld(r0);
                const double dr = F.fstpd();
                F.fld((X)d2), F.fsqrt(), F.fsub(dr);
            };
            dist(x1 * x1 + y1 * y1);
            F.fld(Fl(0x294C0)), F.fldst(0), F.fxch(2);
            float a1 = F.fstpf();
            F.fxch(), F.fsub(a1), F.fdivr(Fl(0x29590)), F.fmulp(1);
            F.fldz(), F.fxch();
            float s1 = F.fstpf();
            if (F.fcomp(a1).jb()) s1 = 0, a1 = 0;
            float a[2], s[2];
            const int32_t d2[2] = {x2 * x2 + y2 * y2, x3 * x3 + y3 * y3};
            const uint32_t off[2] = {0x29594, 0x2959C};
            for (int k = 0; k < 2; k++) {
                dist(d2[k]);
                F.fadd(D(off[k]));
                F.fld(Fl(0x294C8)), F.fxch();
                a[k] = F.fstpf();
                F.fsub(a[k]), F.fdivr(D(0x29534)), F.fmul(D(0x294CC));
                F.fldz(), F.fxch();
                s[k] = F.fstpf();
                if (F.fcomp(a[k]).jb()) s[k] = 0, a[k] = 0;
            }
            const float a2 = a[0], s2 = s[0], a3 = a[1], s3 = s[1];
            F.fld(a1), F.fsin(), F.fmul(s1);
            F.fld(a2), F.fxch();
            const float g1 = F.fstpf();
            F.fsin(), F.fmul(s2);
            F.fld(a3), F.fxch();
            const float g2 = F.fstpf();
            F.fsin();
            F.fld((X)x1), F.fmul(g1);
            F.fld((X)y1), F.fmul(g1);
            F.fld(s1), F.fmul(Fl(0x294C4));
            F.fld(s3), F.fmulp(4);
            F.fld((X)gy), F.fld((X)gx);
            F.faddp(4), F.faddp(2);
            F.fld((X)x2), F.fmul(g2);
            F.fld((X)y2), F.fmul(g2);
            F.fxch(), F.faddp(4), F.faddp(2);
            F.fld((X)x3), F.fmulst(4);
            F.fld((X)y3), F.fmulp(5);
            F.faddp(3);
            F.fxch(3), F.faddp(1);
            F.fxch(), F.frndint(), F.fxch(), F.frndint(), F.fxch();
            w32(edx, (uint32_t)F.fistp());
            w32(edx + 4, (uint32_t)F.fistp());
            float t2 = F.fstpf();
            cosPos(a1), F.fmul(t2);
            F.fld(s2), F.fmul(Fl(0x294C4));
            F.fxch();
            float t7e = F.fstpf();
            t2 = F.fstpf();
            cosPos(a2), F.fmul(t2);
            F.fld(s3), F.fmul(Fl(0x294C4));
            F.fld(t7e), F.fadd(Fl(0x2958C));
            F.faddp(2);
            t7e = F.fstpf();
            t2 = F.fstpf();
            cosPos(a3), F.fmul(t7e);
            F.fadd(t2);
            x1++, gx += 0x8000, x2++, x3++;
            edx += 12;
            F.frndint();
            w32(edx - 4, (uint32_t)F.fistp());
        } while (gx != 0x148000);
    }
}

// 1CDF8h: the plane waving (three sines, strengths K1-K3 growing with T)
// and twisting, a ring of light moving out from the centre; into the
// second grid (+31F8h).
void Tunnel::wobble(uint32_t grid, float t) {
    auto D = [&](uint32_t a) { return (X)f64(a); };
    auto Fl = [&](uint32_t a) { return (X)f32(a); };
    auto bits = [](uint32_t b) { float f; std::memcpy(&f, &b, 4); return f; };
    F.fld(t), F.fadd(Fl(0x2950C));
    const float u = F.fstf();
    F.fmul(Fl(0x294D4));
    float k1 = F.fstf();
    if (F.fcomp(D(0x294EC)).ja()) k1 = 0.5f;
    F.fld(u), F.fadd(Fl(0x2953C)), F.fmul(Fl(0x294D8));
    float k2 = F.fstf();
    if (F.fcomp(D(0x295A4)).ja()) k2 = bits(0x3EA8F5C3);
    if (F.fldz(), F.fcomp(k2).ja()) k2 = 0;
    F.fld(u), F.fadd(Fl(0x295AC)), F.fmul(Fl(0x294D8));
    float k3 = F.fstf();
    if (F.fcomp(D(0x2948C)).ja()) k3 = bits(0x3E4CCCCD);
    if (F.fldz(), F.fcomp(k3).ja()) k3 = 0;
    F.fld(u), F.fldst(0), F.fmul(Fl(0x294C0));
    F.fldst(1), F.fmul(Fl(0x29470));
    F.fxch(2), F.fmul(Fl(0x294DC));
    F.fxch();
    const float p = F.fstpf();
    F.fxch();
    const float ph = F.fstpf();
    const float q = F.fstpf();
    uint32_t row = grid;
    for (int32_t y = -12, ys = -4, yc = 4; y != 14; y++, ys++, yc++, row += 0x1EC) {
        uint32_t edx = row;
        for (int32_t x = -20, xs = -4, xc = 4; x != 21; x++, xs++, xc++, edx += 12) {
            F.fld(ph), F.fcos();
            F.fld(ph), F.fxch();
            const float cph = F.fstpf();
            F.fsin();
            F.fld((X)ys), F.fmul(cph);
            F.fld((X)xc), F.fmul(cph);
            F.fld((X)xs), F.fmulst(3);
            F.fld((X)yc);
            F.fxch(), F.faddp(3), F.fmulp(3);
            F.fxch();
            float py = F.fstf();
            F.fmul(Fl(0x294E0));
            F.fxch(2), F.fsubp(1);
            F.fxch(), F.fadd(u);
            F.fxch();
            float px = F.fstpf();
            F.fsin(), F.fmul(k1), F.fld1(), F.faddp(), F.fmul(px);
            px = F.fstf();
            F.fmul(Fl(0x294A4)), F.fadd(ph), F.fsin(), F.fmul(k2), F.fld1(), F.faddp(), F.fmul(py);
            py = F.fstf();
            F.fmul(Fl(0x294DC)), F.fadd(q), F.fsin(), F.fmul(k3), F.fld1(), F.faddp();
            F.fld(px), F.fxch(), F.fmulst(1);
            F.fld(Fl(0x294C0));
            F.fld(py), F.fmulst(1);
            F.fxch(2), F.fstp(3);
            F.fxch(2);
            px = F.fstf();
            F.fmulp(2);
            F.fld(Fl(0x29460));
            F.fxch(), F.fmulst(1);
            F.fxch(2), F.fmulp(1);
            F.fxch(), F.frndint(), F.fxch(), F.frndint();
            w32(edx + 0x31F8, (uint32_t)F.fistp());
            w32(edx + 0x31FC, (uint32_t)F.fistp());
            F.fld(p);
            const double dp = F.fstpd();
            w32(edx + 0x3200, 0x3F000);
            F.fld((X)(x * x + y * y)), F.fsqrt(), F.fsub(dp), F.fadd(D(0x29540));
            F.fldz(), F.fxch();
            const float z = F.fstpf();
            if (!F.fcomp(z).ja()) continue;
            if (F.fld(z), !F.fcomp(D(0x295B0)).ja()) continue;
            // inside the ring: pushed outwards
            F.fld(z), F.fsin(), F.fmul(D(0x294E4));
            F.fld(px), F.fmulst(1);
            F.fld(py), F.fmulp(2);
            F.fld((X)(int32_t)r32(edx + 0x31F8));
            F.fld((X)(int32_t)r32(edx + 0x31FC));
            F.fxch(2), F.faddst(1);
            F.fxch(3), F.faddst(2);
            F.fxch(3), F.fstp(1);
            F.fxch(2), F.fstp(1);
            F.fxch(), F.frndint(), F.fxch(), F.frndint(), F.fxch();
            w32(edx + 0x31F8, (uint32_t)F.fistp());
            w32(edx + 0x31FC, (uint32_t)F.fistp());
        }
    }
}

}  // namespace tunnel
