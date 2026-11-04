// Part 8 (1C776h): a texture through a deformed grid. A 41x26 grid of
// points (texture u, v and a light level, 32-bit fixed point) is drawn by
// the grid mapper (14DF4h) in 8x8 blocks, the light through a table. The
// grid: bubbles rising (until 2C508h), then a wobbling plane (to 2C514h),
// a tunnel faded in over it, then the tunnel alone, its zoom and twist
// changing with the music. Three palettes are cross-faded.
#include <cstring>

#include "demo.h"

namespace lasse {

// 14DF4h: the grid at GRID (41 points a row, 12 bytes each) over 40x25
// blocks of 8x8 at DST (pitch 320), texels from TEX (256 wide) lit through
// the table at LIGHT (256 x levels). Its variables are at 1E500h: some
// read as dwords straddling two of them, some added to in memory, as the
// original does; each pixel's texel lands in the low byte of the v sum.
void Demo::gridMap(uint32_t dst, uint32_t grid, uint32_t tex, uint32_t light) {
    auto R = [&](uint32_t a) { return m_.r32(a); };
    m_.w32(0x1E574, dst), m_.w32(0x1E570, grid), m_.w32(0x1E56C, tex), m_.w32(0x1E578, light);
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
    for (m_.w32(0x1E564, 0x19); m_.r32(0x1E564); m_.w32(0x1E564, m_.r32(0x1E564) - 1)) {
        for (m_.w32(0x1E568, 0x28); m_.r32(0x1E568); m_.w32(0x1E568, m_.r32(0x1E568) - 1)) {
            esi = R(0x1E570);
            eax = (uint32_t)((int32_t)(R(esi + 0x0C) - R(esi)) >> 11);
            ebx = (uint32_t)((int32_t)(R(esi + 0x10) - R(esi + 4)) >> 11);
            edi = (uint32_t)((int32_t)(R(esi + 0x14) - R(esi + 8)) >> 11);
            m_.w32(0x1E508, eax), m_.w32(0x1E510, ebx), m_.w32(0x1E518, edi);
            ecx = (uint32_t)((int32_t)(R(esi + 0x1EC) - R(esi)) >> 11);
            edx = (uint32_t)((int32_t)(R(esi + 0x1F0) - R(esi + 4)) >> 11);
            ebp = (uint32_t)((int32_t)(R(esi + 0x1F4) - R(esi + 8)) >> 11);
            m_.w32(0x1E520, ecx), m_.w32(0x1E528, edx), m_.w32(0x1E530, ebp);
            ecx = (uint32_t)((int32_t)(R(esi + 0x1F8) - R(esi + 0x1EC)) >> 11);
            edx = (uint32_t)((int32_t)(R(esi + 0x1FC) - R(esi + 0x1F0)) >> 11);
            ebp = (uint32_t)((int32_t)(R(esi + 0x200) - R(esi + 0x1F4)) >> 11);
            m_.w32(0x1E538, (uint32_t)((int32_t)(ecx - eax) >> 3));
            m_.w32(0x1E540, (uint32_t)((int32_t)(edx - ebx) >> 3));
            m_.w32(0x1E548, (uint32_t)((int32_t)(ebp - edi) >> 3));
            ecx = R(0x1E578), ebx = R(0x1E56C), edi = R(0x1E574);
            setLo(ebx, m_.r8(esi + 3));
            edx = R(esi - 1);
            setHi(ebx, m_.r8(esi + 7));
            eax = R(esi + 3);
            setHi(ecx, m_.r8(esi + 0x0B));
            esi = R(esi + 7);
            ebp = R(0x1E50E);
            setLo(edx, m_.r8(0x1E50A));
            setHi(edx, m_.r8(0x1E512));
            for (m_.w32(0x1E560, 8); m_.r32(0x1E560); m_.w32(0x1E560, m_.r32(0x1E560) - 1)) {
                m_.w32(0x1E554, eax), m_.w32(0x1E550, edx), m_.w32(0x1E558, ecx), m_.w32(0x1E55C, esi);
                m_.w32(0x1E54C, ebx);
                auto chain = [&]() {
                    add(edx, R(0x1E506)), adcLo(ebx, edx);
                    add(eax, ebp), adcHi(ebx, edx >> 8);
                    add(esi, R(0x1E516)), adcHi(ecx, m_.r8(0x1E51A));
                };
                for (int k = 0; k < 4; k++) {
                    setLo(ecx, m_.r8(ebx));
                    setLo(eax, m_.r8(ecx));
                    chain();
                    setLo(ecx, m_.r8(ebx));
                    setHi(eax, m_.r8(ecx));
                    if (k < 3) chain();
                    m_.w16(edi + 2 * k, eax);
                }
                edx = R(0x1E550), eax = R(0x1E554), ecx = R(0x1E558), esi = R(0x1E55C);
                edi += 0x140;
                ebx = R(0x1E536);
                {
                    uint32_t v = R(0x1E506);
                    add(v, ebx);
                    m_.w32(0x1E506, v);
                }
                adcLo(edx, m_.r8(0x1E53A));
                add(ebp, R(0x1E53E)), adcHi(edx, m_.r8(0x1E542));
                ebx = R(0x1E548);
                m_.w32(0x1E518, R(0x1E518) + ebx);
                ebx = R(0x1E54C);
                add(edx, R(0x1E51E)), adcLo(ebx, m_.r8(0x1E522));
                add(eax, R(0x1E526)), adcHi(ebx, m_.r8(0x1E52A));
                add(esi, R(0x1E52E)), adcHi(ecx, m_.r8(0x1E532));
            }
            m_.w32(0x1E570, R(0x1E570) + 0x0C);
            m_.w32(0x1E574, R(0x1E574) + 8);
        }
        m_.w32(0x1E570, R(0x1E570) + 0x0C);
        m_.w32(0x1E574, R(0x1E574) + 0x8C0);
    }
}

// 1C706h: an ease: (1 - cos(clamp(X, 0, 1) * k)) * k2
void Demo::ease(float x) {
    if (F.fldz(), F.fcomp(x).ja()) x = 0;
    if (F.fld1(), F.fcomp(x).jb()) x = 1.0f;
    F.fld(x), F.fmul(m_.f64(0x29430)), F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(m_.f64(0x29438));
}

// 1C746h: max(cos X, 0), as a float
void Demo::cosPos(float x) {
    F.fld(x), F.fcos();
    F.fldz();
    F.fxch();
    const float c = F.fstpf();
    F.fld(F.fcomp(c).ja() ? 0.0f : c);
}

// 1C5CBh: a tunnel into the grid: for each point its angle (u, P4 + the
// angle in 256ths), depth (v, P5 + P2 / r), light; the walls waving by P6
// at a phase P3, P1 the angle's twist.
void Demo::tunnel(uint32_t grid, float p1, float p2, float p3, int32_t p4, int32_t p5, float p6) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
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
            m_.w32(edx, (uint32_t)(p4 + ang));
            edx += 4;
            F.frndint();
            F.fxch(), F.fsubr(m_.f32(0x2942C));
            F.fxch();
            const int32_t dv = F.fistp();
            F.frndint();
            const int32_t l = F.fistp();
            m_.w32(edx, (uint32_t)(p5 + dv));
            edx += 4;
            m_.w32(edx, (uint32_t)(l >= 0x1000 ? (l < 0x3F000 ? l : 0x3F000) : 0x1000));
            edx += 4;
        }
    }
}

// 150BEh: DST = A * a + B * b (3198 dwords)
void Demo::blend(uint32_t dst, uint32_t a, uint32_t b, int32_t wa, int32_t wb) {
    for (uint32_t i = 0; i < 0xC7E; i++)
        m_.w32(dst + 4 * i, m_.r32(a + 4 * i) * (uint32_t)wa + m_.r32(b + 4 * i) * (uint32_t)wb);
}

// 1CB2Bh: three bubbles rising through the plane (T scaling their radii):
// each pushes the points around it outwards (by sin of the distance inside
// it), lit by its cosine.
void Demo::bubbles(uint32_t grid, float t) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
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
            m_.w32(edx, (uint32_t)F.fistp());
            m_.w32(edx + 4, (uint32_t)F.fistp());
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
            m_.w32(edx - 4, (uint32_t)F.fistp());
        } while (gx != 0x148000);
    }
}

// 1CDF8h: the plane waving (three sines, strengths K1-K3 growing with T)
// and twisting, a ring of light moving out from the centre; into the
// second grid (+31F8h).
void Demo::wobble(uint32_t grid, float t) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
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
            m_.w32(edx + 0x31F8, (uint32_t)F.fistp());
            m_.w32(edx + 0x31FC, (uint32_t)F.fistp());
            F.fld(p);
            const double dp = F.fstpd();
            m_.w32(edx + 0x3200, 0x3F000);
            F.fld((X)(x * x + y * y)), F.fsqrt(), F.fsub(dp), F.fadd(D(0x29540));
            F.fldz(), F.fxch();
            const float z = F.fstpf();
            if (!F.fcomp(z).ja()) continue;
            if (F.fld(z), !F.fcomp(D(0x295B0)).ja()) continue;
            // inside the ring: pushed outwards
            F.fld(z), F.fsin(), F.fmul(D(0x294E4));
            F.fld(px), F.fmulst(1);
            F.fld(py), F.fmulp(2);
            F.fld((X)(int32_t)m_.r32(edx + 0x31F8));
            F.fld((X)(int32_t)m_.r32(edx + 0x31FC));
            F.fxch(2), F.faddst(1);
            F.fxch(3), F.faddst(2);
            F.fxch(3), F.fstp(1);
            F.fxch(2), F.fstp(1);
            F.fxch(), F.frndint(), F.fxch(), F.frndint(), F.fxch();
            m_.w32(edx + 0x31F8, (uint32_t)F.fistp());
            m_.w32(edx + 0x31FC, (uint32_t)F.fistp());
        }
    }
}

void Demo::part8() {
    Frame fr(*this, 5, 0xA14);
    const uint32_t B = fr.ebp - 0x82;
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    auto cmpF = [&](float v, uint32_t c) { F.fld(v); return F.fcomp(m_.f32(c)); };
    if (position(0x1C78A) >= 0x1D00) return;
    const int32_t t0 = clock(0x1C79D);
    const uint32_t blk = malloc(0x40000);
    const uint32_t A = (blk + 0xFFFF) & 0xFFFF0000u, light = A + 0x10000;
    copy(A, m_.r32(0x2B4C0) + 0x130000, 0x10000);
    const uint32_t grid = malloc(0x95E8), grid2 = grid + 0x31F8;
    // the light tables (65 levels): A+10000h scaled, A+14100h shifted
    {
        int32_t lvl = 0x40, acc = 0;
        for (int32_t row = 0; row <= 0x40; row++, lvl--, acc += 0xFF) {
            const int32_t step = -row;
            F.fld((X)lvl), F.fmul(D(0x29444)), F.fsubr(D(0x294B8));
            F.fldl2e(), F.fmulp();
            F.exp2();
            F.fadd(D(0x294F8));
            F.fld1();
            F.fxch();
            float f = F.fstpf();
            if (F.fcomp(f).jb()) f = 1.0f;
            int32_t s = acc;
            for (int32_t j = 0; j < 0x100; j++, s += step) {
                F.fld(f), F.fld((X)j), F.fmulst(1), F.fld1(), F.fsubrp(2), F.fxch(), F.fmul(Fl(0x29440)), F.faddp();
                F.frndint();
                m_.w8(light + row * 0x100 + j, F.fistp());
                m_.w8(A + 0x14100 + row * 0x100 + j, s / 64 + j);
            }
        }
    }
    const uint32_t pal1 = B - 0x992, pal2 = B - 0x692, pal3 = B - 0x392;
    gradient(B - 0x992, 5, 8, 1, 6, 3, 0x1E, 0x40);
    gradient(B - 0x8D2, 6, 3, 0x1E, 0x0A, 0x23, 0x3C, 0x40);
    gradient(B - 0x812, 0x0A, 0x23, 0x3C, 0, 0, 0, 0x40);
    gradient(B - 0x752, 0, 0, 0, 0x3F, 0, 0, 0x20);
    gradient(B - 0x6F2, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x20);
    gradient(pal3, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x100);
    ramp(pal2, 0x10, 0x20, 0x40, 0x80, 0x80);
    whiteDac();
    for (;;) {
        if (escape()) break;
        if (position(0x1C9D5) >= 0x1D00) break;
        F.fld((X)(int32_t)((uint32_t)clock(0x1C9E8) - (uint32_t)t0));
        F.fdiv(D(0x29500));
        const float T = F.fstf();
        const double dT = F.fstd();
        // the palettes
        if (F.fcomp(D(0x294EC)).jb()) {
            F.fld(T), F.fmul(Fl(0x29454)), F.fmul(Fl(0x29458));
            F.frndint();
            whitePal(pal3, 0, 0x100, F.fistp());
        } else if (F.fld(dT), F.fcomp(D(0x294B8)).jb()) {
            F.fld(dT), F.fadd(D(0x2954C)), F.fmul(D(0x2944C));
            F.frndint();
            mixPal(pal2, pal3, 0, 0x100, F.fistp());
        }
        if (cmpF(T, 0x294C0).ja() && cmpF(T, 0x29508).jb()) {
            F.fld(T), F.fadd(Fl(0x2950C)), F.fmul(Fl(0x2945C));
            F.frndint();
            mixPal(pal1, pal2, 0, 0x100, F.fistp());
        }
        if (cmpF(T, 0x29510).ja()) {
            F.fld(Fl(0x29554)), F.fsub(T), F.fmul(Fl(0x2945C));
            F.frndint();
            fadePal(pal1, 0, 0x100, F.fistp());
        }
        if (cmpF(T, 0x29514).jb()) {
            if (cmpF(T, 0x29508).jb()) bubbles(grid, T);
            if (cmpF(T, 0x294C0).ja() && cmpF(T, 0x29514).jb()) wobble(grid, T);
            if (cmpF(T, 0x29548).ja()) {
                F.fld(T), F.fadd(Fl(0x29518)), F.fmul(Fl(0x29460));
                F.fldst(0), F.fmul(D(0x29464));
                F.fxch(), F.fmul(Fl(0x2946C));
                F.fxch();
                F.frndint();
                F.fxch();
                F.frndint();
                const int32_t p = F.fistp();
                const int32_t q = F.fistp();
                tunnel(grid, 5.0f, 500.0f, 0.0f, q, p, 0.0f);
            }
            // grid = grid a + grid2 b, b rising (and falling back)
            float w = 0;
            if (cmpF(T, 0x294C0).ja()) {
                F.fld(T), F.fadd(Fl(0x2950C)), F.fmul(Fl(0x294A4)), F.fmul(D(0x29484)), F.fcos();
                F.fld1(), F.fsubrp(1), F.fmul(D(0x294EC));
                w = F.fstpf();
            }
            if (cmpF(T, 0x29508).ja()) w = 1.0f;
            if (cmpF(T, 0x29548).ja() && cmpF(T, 0x29514).jb()) {
                F.fld(T), F.fadd(Fl(0x295B8)), F.fmul(Fl(0x294F4)), F.fmul(D(0x29484)), F.fcos();
                F.fld1(), F.faddp(), F.fmul(D(0x294EC));
                w = F.fstpf();
            }
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
            blend(grid, grid, grid2, wa, wb);
        } else {
            // the tunnel alone
            F.fld(T), F.fldst(0), F.fldst(1);
            F.fxch(), F.fadd(Fl(0x29518));
            F.fxch(), F.fmul(Fl(0x29454));
            F.fxch(), F.fmul(Fl(0x29460));
            F.fldst(0), F.fmul(D(0x29464));
            F.fxch(), F.fmul(Fl(0x2946C));
            float zoom = 500.0f, twist = 1.0f, wave = 0;
            F.fxch(2);
            float phase = F.fstpf();
            F.frndint();
            F.fxch();
            F.frndint();
            F.fxch();
            const int32_t q = F.fistp();
            const int32_t p = F.fistp();
            if (F.fcomp(Fl(0x29558)).ja()) {
                F.fld(T), F.fadd(Fl(0x2955C)), F.fmul(Fl(0x29470));
                ease(F.fstpf());
                F.fmul(D(0x29474));
                wave = F.fstpf();
            }
            if (cmpF(T, 0x29560).ja()) {
                F.fld(T);
                F.fld(Fl(0x294C4)), F.fsubst(1), F.fmul(D(0x2947C));
                F.fldst(1);
                F.fxch(2), F.fadd(Fl(0x29568));
                F.fxch(2), F.fadd(Fl(0x29564));
                F.fxch(2), F.fmul(D(0x29484));
                F.fxch(2);
                F.frndint();
                twist = F.fstpf();
                const double d8a = F.fstpd();
                F.fcos(), F.fmul(d8a);
                wave = F.fstpf();
            }
            if (cmpF(T, 0x2956C).ja()) {
                F.fld(T), F.fadd(Fl(0x29570));
                const float f7e = F.fstf();
                F.fmul(Fl(0x29454));
                ease(F.fstpf());
                F.fmul(D(0x2948C)), F.fsubr(D(0x29574));
                wave = F.fstpf();
                ease(f7e);
                F.fmul(f7e), F.fmul(Fl(0x29494)), F.fadd(phase);
                twist = 5.0f;
                phase = F.fstpf();
            }
            if (cmpF(T, 0x2957C).ja()) {
                F.fld(T), F.fadd(Fl(0x2951C));
                const float f7e = F.fstf();
                F.fmul(Fl(0x29498));
                ease(F.fstpf());
                F.fmul(D(0x29474));
                F.fld(f7e), F.fmul(D(0x29484));
                F.fxch();
                const double d8a = F.fstpd();
                F.fsin(), F.fmul(d8a), F.fld1(), F.faddp(), F.fmul(D(0x2949C));
                zoom = F.fstpf();
            }
            if (F.fld(T), F.fcomp(D(0x29580)).ja()) {
                F.fld(T), F.fmul(Fl(0x29454));
                twist = 3.0f;
                const uint32_t w6 = 0x3F19999A;
                std::memcpy(&wave, &w6, 4);
                phase = F.fstpf();
            }
            if (cmpF(T, 0x29520).ja()) {
                F.fld(Fl(0x29524)), F.fsub(T), F.fmul(Fl(0x294A4));
                ease(F.fstpf());
                F.fld(T), F.fadd(Fl(0x2951C));
                F.fxch(), F.fmul(D(0x29474));
                F.fxch(), F.fmul(D(0x29484));
                F.fxch();
                const double d8a = F.fstpd();
                F.fsin(), F.fmul(d8a), F.fld1(), F.faddp(), F.fmul(D(0x2949C));
                zoom = F.fstpf();
            }
            if (cmpF(T, 0x29524).ja()) {
                F.fld(T), F.fadd(Fl(0x29528)), F.fmul(D(0x29484)), F.fcos();
                F.fld(Fl(0x2952C)), F.fsub(T);
                F.fxch(), F.fmul(D(0x294A8));
                F.fxch(), F.fmul(Fl(0x294A4));
                const float e = F.fstpf();
                const double d8a = F.fstpd();
                ease(e);
                F.fmul(d8a);
                wave = F.fstpf();
            }
            if (cmpF(T, 0x29530).ja()) {
                F.fld(T), F.fadd(Fl(0x29588));
                ease(F.fstpf());
                F.fmul(D(0x294B0));
                F.fld(T), F.fmul(D(0x294B8));
                F.fxch();
                const double d8a = F.fstpd();
                F.fsin(), F.fmul(d8a), F.fld1(), F.faddp(), F.fmul(D(0x2949C));
                zoom = F.fstpf();
            }
            tunnel(grid, twist, zoom, phase, q, p, wave);
            for (uint32_t i = 0; i < 0xC7E; i++) m_.w32(grid + 4 * i, m_.r32(grid + 4 * i) << 12);
        }
        gridMap(kVram, grid, A, light);
    }
    memset(kVram, 0, 0xFA00);
    free(blk);
    free(grid);
}

}  // namespace lasse
