// Part 6 (1BE6Ah): a feedback zoomer. Each frame: dots on sine paths and a
// moving point drawn into a 256-wide picture A, a title written in, A
// blurred into B (15143h), B rotozoomed back onto A about the point, B
// shown; a scroll of words runs down the screen's sides. At most 80
// frames a second (15000 PIT ticks).
#include "demo.h"

namespace lasse {

// 1BE56h: the generator (seed at 2842Ch)
int32_t Demo::rnd() {
    const uint32_t s = m_.r32(0x2842C) * 0x15A4E35u + 1;
    m_.w32(0x2842C, s);
    return (int32_t)s >> 16;
}

// 15143h: the 4-neighbour average, 256 wide (150ECh's twin)
void Demo::blurRow256(uint32_t edi, uint32_t esi, uint32_t& carry, int n) {
    for (; n; n--, esi += 8, edi += 8) {
        for (uint32_t k = 0; k < 8; k += 4) {
            const uint32_t sum = carry + m_.r32(esi + k + 0x100) + m_.r32(esi + k - 1) + m_.r32(esi + k - 0x100) +
                                 m_.r32(esi + k + 1);
            carry = sum & 0x03030303u;
            m_.w32(edi + k, (sum & 0xFCFCFCFCu) >> 2);
        }
    }
}

// 1BD5Eh: string S down the screen from (X, 0), 16x15 glyphs from FONT
void Demo::textDown(uint32_t x, uint32_t s, uint32_t font) {
    uint32_t dst = kVram + x;
    for (uint8_t c; (c = m_.r8(s)) != 0; s++, dst += 0x12C0) {
        uint32_t d = dst;
        for (uint32_t g = font; g != font + 0xF00; g += 0x100, d += 0x140)
            copy(d, g + (c >> 4) * 0x1000 + (c & 15) * 0x10, 0x10);
    }
}

// 1BDC4h: string S centred on row Y of the 256-wide picture DST, the
// glyphs' zero pixels left as they are
void Demo::textOver(uint32_t dst, int32_t y, uint32_t s, uint32_t font) {
    uint32_t len = 0;
    while (m_.r8(s + len)) len++;
    dst += (uint32_t)(y << 8) + 0x80 - len * 8;
    for (uint8_t c; (c = m_.r8(s)) != 0; s++, dst += 0x10) {
        const uint32_t g = font + (c >> 4) * 0x1000 + (c & 15) * 0x10;
        for (uint32_t row = 0; row != 0x1000; row += 0x100)
            for (uint32_t col = 0; col < 0x10; col++)
                if (m_.r8(g + row + col)) m_.w8(dst + row + col, m_.r8(g + row + col));
    }
}

void Demo::part6() {
    Frame fr(*this, 5, 0x1F8);
    const uint32_t B = fr.ebp - 0x82;
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    if (position(0x1BE7E) >= 0x1100) return;
    const int32_t t0 = clock(0x1BE91);
    const uint32_t blk = malloc(0x40000);
    const uint32_t A = (blk + 0xFFFF) & 0xFFFF0000u, Bf = A + 0x10000, font = A + 0x20000;
    const uint32_t dots = malloc(0x7D0);
    for (uint32_t k = 0; k < 0x10000; k++) {
        m_.w8(A + k, rnd() & 0x3F);
        m_.w8(A + 0x10000 + k, rnd() & 0x3F);
    }
    plasma(0x12313123, font, 0x2710, 6);
    rle(font, 0x21EBA, 0, 0x3F);
    plasma(0x17091977, A, 0x7530, 6);
    plasma(0x17091977, A + 0x10000, 0x7530, 6);
    const uint32_t pal = B - 0x176, pal2 = B - 0xB6;
    gradient(B - 0x176, 0, 0, 0, 0, 0, 0x10, 0x10);
    gradient(B - 0x146, 0, 0, 0x10, 0, 0x10, 0x20, 0x10);
    gradient(B - 0x116, 0, 0x10, 0x20, 0x20, 0x30, 0x30, 0x10);
    gradient(B - 0xE6, 0x20, 0x30, 0x30, 0x3F, 0x3F, 0x3F, 0x10);
    gradient(B - 0xB6, 0x19, 0x19, 0x19, 0, 0, 0, 0x10);
    gradient(B - 0x86, 0, 0, 0, 0x0A, 0x0A, 0x20, 0x10);
    gradient(B - 0x56, 0x0A, 0x0A, 0x20, 0x3F, 0, 0, 0x10);
    gradient(B - 0x26, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x10);
    setPal(pal, 0, 0x40);
    for (uint32_t d = dots; d != dots + 0x7D0; d += 0x14) {
        F.fld((X)rnd()), F.fmul(Fl(0x292FC)), F.fmul(D(0x29300));
        m_.wf32(d, F.fstpf());
        F.fld((X)rnd()), F.fmul(Fl(0x292FC));
        m_.wf32(d + 4, F.fstpf());
        F.fld((X)rnd()), F.fmul(Fl(0x292FC)), F.fmul(Fl(0x29308));
        m_.wf32(d + 8, F.fstpf());
        F.fld((X)rnd()), F.fmul(Fl(0x292FC)), F.fmul(Fl(0x29308));
        m_.wf32(d + 0x0C, F.fstpf());
        m_.wf32(d + 0x10, (float)(X)((rnd() & 0x1F) + 0x20));
    }
    for (;;) {
        if (escape()) break;
        const int32_t until = (int32_t)((uint32_t)clock(0x1C0EF) + 0x3A98);
        F.fld((X)(int32_t)((uint32_t)clock(0x1C0FC) - (uint32_t)t0));
        F.fmul(D(0x2930C));
        const float T = F.fstpf();
        if (position(0x1C113) >= 0x1100) break;
        F.fld(T);
        if (F.fcomp(Fl(0x2938C)).ja()) {
            F.fld(T);
            if (F.fcomp(Fl(0x29390)).jb()) {
                F.fld(Fl(0x29390)), F.fsub(T), F.fmul(Fl(0x29314));
                F.frndint();
                mixPal(pal, pal2, 0, 0x40, F.fistp());
            }
        }
        // the point (PX, PY), the zoom and turn
        F.fld(T);
        const double dT = F.fstd();
        F.fmul(D(0x29318)), F.fadd(D(0x29394)), F.fsin(), F.fmul(D(0x29320));
        F.fld(dT);
        F.fxch(), F.fadd(D(0x2939C));
        F.fxch(), F.fmul(D(0x29328));
        F.fxch();
        F.frndint();
        const int32_t px = F.fistp();
        F.fadd(D(0x293A4));
        F.fsin(), F.fmul(D(0x29330));
        F.fld(T), F.fmul(Fl(0x29338));
        F.fxch(), F.fadd(D(0x293AC));
        float angle = 0;
        F.frndint();
        F.fxch(), F.fsubr(Fl(0x293B4));
        F.fxch();
        const int32_t py = F.fistp();
        float zoom = F.fstpf();
        F.fld(zoom);
        if (F.fcomp(Fl(0x293B8)).jb()) {
            const uint32_t z = 0x473F6800;
            std::memcpy(&zoom, &z, 4);
        }
        F.fld(T);
        if (!F.fcomp(Fl(0x293BC)).jb()) {
            F.fld(T), F.fadd(Fl(0x293C0));
            const float f42 = F.fstf();
            F.fmul(Fl(0x2933C)), F.fsin(), F.fmul(D(0x29340));
            F.fld(f42), F.fmul(Fl(0x29358));
            F.fxch(), F.fmul(D(0x29348));
            F.fxch(), F.fadd(Fl(0x293B8));
            F.fxch(), F.fmul(D(0x29350));
            F.fxch();
            zoom = F.fstpf();
            angle = F.fstpf();
        }
        F.fld(T);
        if (!F.fcomp(Fl(0x293C4)).jb()) {
            F.fld(T), F.fadd(Fl(0x293C8));
            const float f42 = F.fstf();
            F.fmul(Fl(0x2935C)), F.fcos(), F.fmul(D(0x29360));
            F.fld(f42), F.fmul(D(0x29368));
            F.fxch(), F.fsubr(D(0x293CC));
            F.fxch(), F.fadd(D(0x293D4));
            F.fxch();
            zoom = F.fstpf();
            F.fsin(), F.fmul(D(0x29340)), F.fmul(D(0x29348)), F.fmul(D(0x29350));
            angle = F.fstpf();
        }
        F.fld1();
        F.fld(T), F.fmul(D(0x29370)), F.fadd(D(0x293DC));
        F.fprem();
        F.fxch(), F.fstp(0);
        const uint32_t at = A + ((uint32_t)(uint16_t)py << 8) + (uint16_t)px;
        m_.w8(at, F.fcomp(D(0x293E4)).jb() ? 0x3F : 0);
        for (uint32_t d = dots; d != dots + 0x7D0; d += 0x14) {
            F.fld(m_.f32(d)), F.fmul(T), F.fadd(m_.f32(d + 8)), F.fsin(), F.fmul(D(0x29378));
            F.fld(m_.f32(d + 4));
            F.fxch(), F.fadd(D(0x2939C));
            F.fxch(), F.fmul(T);
            F.fxch();
            F.frndint();
            F.fxch(), F.fadd(m_.f32(d + 0x0C));
            F.fxch();
            const int32_t qx = F.fistp();
            F.fsin(), F.fmul(D(0x29380)), F.fadd(D(0x293AC));
            F.frndint();
            const int32_t qy = F.fistp();
            const uint32_t p = A + (uint32_t)(qy << 8) + (uint32_t)qx;
            F.fld(m_.f32(d + 0x10));
            F.frndint();
            const uint8_t v = (uint8_t)F.fistp();
            m_.w8(p, v), m_.w8(p - 1, v), m_.w8(p + 1, v), m_.w8(p - 0x100, v), m_.w8(p + 0x100, v);
        }
        // the side scroll: a word every so often
        F.fld(T);
        F.fldst(0);
        F.fmul(D(0x29370));
        F.fld1();
        F.fxch(2);
        F.fmul(D(0x29370));
        F.fxch();
        const double dTc = F.fstpd();
        F.fprem();
        F.fxch(), F.fstp(0);
        F.fsubr(dTc);
        F.frndint();
        const uint32_t k = (uint32_t)F.fistp();
        if (k < 0x70) textDown((k & 1) ? 0x128 : 8, 0x28430 + k * 0x0E, font);
        F.fld1();
        F.fld(T), F.fmul(Fl(0x29388)), F.fmul(D(0x29370));
        F.fprem();
        F.fxch(), F.fstp(0);
        textOver(A, 0xA0, F.fcomp(D(0x293D4)).jb() ? 0x292DD : 0x292ED, font);
        // A blurred into B, B's border cleared
        uint32_t carry = 0;
        for (uint32_t s = A + 0x104, d = Bf + 0x104; s != A + 0xC704; s += 0x100, d += 0x100) blurRow256(d, s, carry, 0x1F);
        for (uint32_t e = A + 0x100; e != A + 0xC800; e += 0x100) m_.w32(e + 0xFFFC, 0), m_.w32(e + 0xFF00, 0);
        memset(Bf, 0, 0x200);
        memset(A + 0x1C600, 0, 0x200);
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
        mapper(A, Bf, u0, v0, (int32_t)a, (int32_t)b, (int32_t)c, (int32_t)d, 0x20, 0x19, 0x100, 0x89);
        for (uint32_t dst = 0xA0160, src = Bf + 0x100; dst != 0xAF8E0; dst += 0x140, src += 0x100) copy(dst, src, 0x100);
        for (int32_t cl; (cl = clock(0x1C5A4)) < until;) m_.clockSpin(cl, until);
    }
    free(dots);
    free(blk);
}

}  // namespace lasse
