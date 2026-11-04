// Part 4 (1B9DDh): layers of rotozoomed textures (the bump texture, a
// hexagon pattern under a logo mask), the first drawn, the others added
// on as the song goes, the sum blurred onto the screen, the palette fading
// from white each beat.
#include "demo.h"

namespace lasse {

void Demo::part4() {
    Frame fr(*this, 5, 0x34);
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    if (position(0x1B9EB) >= 0x800) return;
    const uint32_t blk = malloc(0x50000);
    const uint32_t A = (blk + 0xFFFF) & 0xFFFF0000u, A3 = A + 0x30000;
    copy(A, m_.r32(0x2B4C0) + 0x120000, 0x10000);
    rle(A3, 0x21392, 0, 8);
    rle(A3, 0x20EBC, 0xFFFFFFFFu, 0x0F);
    blur(A3, A + 0x20000);
    hexes(A3, 5, 8, 9, 0x0C, 0x0F);
    blur(A3, A + 0x10000);
    blackDac();
    while (position(0x1BA9F) < 0x518) {
    }
    const int32_t t0 = clock(0x1BAAE);
    for (;;) {
        if (escape()) break;
        if (position(0x1BAD9) >= 0x800) break;
        F.fld((X)(int32_t)((uint32_t)clock(0x1BAEC) - (uint32_t)t0));
        F.fdiv(D(0x29291));
        const float T = F.fstpf();
        const int32_t pos = position(0x1BB03);
        F.fld(D(0x29299));
        F.fld(T);
        F.fprem();
        F.fxch(), F.fstp(0);
        F.fadd(D(0x292A1)), F.fabs_(), F.fadd(D(0x292A9)), F.fmul(D(0x29235));
        roto(F.fstpf(), (int32_t)0xFFFF8000, 0xA0, 0x64, A + 0x10000, 1);
        if (pos >= 0x600 && pos < 0x710) {
            F.fld(T), F.fmul(Fl(0x2923D)), F.fsin(), F.fmul(D(0x29241));
            F.fld(T);
            F.fxch(), F.fadd(D(0x292B1));
            F.fxch(), F.fmul(Fl(0x29249));
            F.fxch();
            F.frndint();
            const int32_t cy = F.fistp();
            F.fcos(), F.fmul(D(0x29241)), F.fadd(D(0x292B9));
            F.frndint();
            const int32_t cx = F.fistp();
            F.fld(T), F.fmul(Fl(0x2924D));
            roto(F.fstpf(), 0x20000, cx, cy, A + 0x20000, 0);
        }
        if (pos >= 0x608 && pos < 0x718) {
            F.fld(T), F.fadd(Fl(0x292C1)), F.fsin(), F.fmul(D(0x29251));
            F.fld(T);
            const double dT = F.fstd();
            F.fmul(D(0x29259));
            F.fxch(), F.fadd(D(0x292B1));
            F.fld1();
            F.fxch();
            F.frndint();
            const int32_t cy = F.fistp();
            F.faddp();
            F.fsin(), F.fmul(D(0x29261));
            F.fld(dT);
            F.fxch(), F.fadd(D(0x292C5));
            F.fxch(), F.fmul(D(0x29269));
            F.fxch();
            F.frndint();
            F.fxch(), F.fadd(D(0x29299));
            F.fxch();
            const int32_t cx = F.fistp();
            F.fsin(), F.fmul(D(0x29271));
            F.fld(T);
            F.fxch(), F.fadd(D(0x292CD));
            F.fxch(), F.fchs();
            F.fxch();
            F.frndint();
            const int32_t zoom = F.fistp();
            F.fmul(D(0x29279));
            roto(F.fstpf(), zoom, cx, cy, A, 0);
        }
        if (pos >= 0x610 && pos < 0x708) {
            F.fld(T), F.fsin(), F.fmul(D(0x29281)), F.fadd(D(0x29271));
            F.fld(T);
            F.fxch();
            F.frndint();
            const int32_t zoom = F.fistp();
            F.fmul(D(0x29269));
            roto(F.fstpf(), zoom, 0xC8, 0x50, A, 0);
        }
        F.fld1();
        F.fld(T);
        F.fprem();
        F.fxch(), F.fstp(0);
        F.fmul(D(0x29289)), F.fadd(D(0x292D5));
        F.frndint();
        const int32_t k = F.fistp();
        whitePal(0x2807D, 0, 0x40, k > 0x40 ? 0x40 : k);
        uint32_t carry = 0;
        for (int32_t row = 1; row < 0xC7; row++)
            blurRow(kVram + 0x144 + (row - 1) * 0x140, m_.r32(0x2B4C4) + row * 0x140 + 4, carry, 0x27);
    }
    whiteDac();
    free(blk);
}

}  // namespace lasse
