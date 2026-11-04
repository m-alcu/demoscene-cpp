// Part 2 (1B238h): the title card. Text in a 16x16 font (a run-length
// mask) appears row by row of the song on white; the white fades; a
// texture is made (fractal noise, quantized, a blurred mask) and shown in
// three pieces on the song's rows; then until order 2 it ripples, two
// layers displaced by sine tables that change with the time.
#include "demo.h"

namespace lasse {

// 1B184h: the string at S (glyphs 16x16 in a 256-wide sheet at FONT) at (X, Y).
void Demo::text(int32_t y, int32_t x, uint32_t s, uint32_t font) {
    uint32_t dst = kVram + y * 0x140 + x;
    for (uint8_t c; (c = m_.r8(s)) != 0; s++, dst += 0x10) {
        const uint32_t glyph = font + (c >> 4) * 0x1000 + (c & 15) * 0x10;
        for (uint32_t row = 0, d = dst; row < 0x1000; row += 0x100, d += 0x140) copy(d, glyph + row, 0x10);
    }
}

// 1B1EEh: a W x H piece of the 256-wide picture at SRC, at (X, Y) on the
// screen (32 pixels in).
void Demo::blit(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t src) {
    uint32_t d = kVram + y * 0x140 + x + 0x20;
    src += (uint32_t)(y << 8) + x;
    for (int32_t r = 0; r < h; r++, src += 0x100, d += 0x140) copy(d, src, w);
}

// 189ECh: eight 32-entry ramps (black, a colour, white), the colours stepping
// through hues.
void Demo::palette8(uint32_t dst) {
    int32_t r = 0x10, gb = 0x10, b = 0x10, k = 2;
    for (int32_t i = 0; i < 8; i++, dst += 0x60) {
        const int32_t bb = b + 2 * (i % 3);
        const int32_t g = (i & 1) * 4 + gb;
        const int32_t rr = (k % 3) * 3 + r;
        b += 2, k++, gb += 3;
        ramp(dst, rr, g, bb, 0x12, 0x0E);
        r += 4;
    }
}

void Demo::part2() {
    Frame fr(*this, 5, 0x64C);
    const uint32_t ebp = fr.ebp;
    if ((int32_t)position(0x1B246) >> 8 > 1) return;
    const uint32_t blk = malloc(0x70000);
    const uint32_t A = (blk + 0xFFFF) & 0xFFFF0000u, T = A + 0x20000;
    rle(A, 0x21EBA, 0, 1);                  // the font
    m_.out8(0x3C8, 0);
    for (int i = 0; i < 3; i++) m_.out8(0x3C9, 0x3F);
    for (int i = 0; i < 3; i++) m_.out8(0x3C9, 0);
    while ((int32_t)position(0x1B2A3) >> 8 != 1) {
    }
    for (;;) {                              // the text, row by row
        if (escape()) break;
        clock(0x1B2C0);
        position(0x1B2C5);
        text(0x32, 0x6E, 0x2919C, A);
        if ((position(0x1B2E3) & 0xFF) >= 4) text(0x32, 0x8E, 0x2919E, A);
        if ((position(0x1B307) & 0xFF) >= 6) text(0x50, 0x50, 0x291A7, A);
        if ((position(0x1B328) & 0xFF) >= 7) text(0x50, 0x100, 0x291B2, A);
        if (!((position(0x1B34C) & 0xFF) < 8)) break;
    }
    {                                       // the white fades in 2000-tick steps
        const int32_t t0 = clock(0x1B35D);
        for (;;) {
            const int32_t k = (clock(0x1B364) - t0) / 0x7D0;
            if (k > 0x3F) break;
            m_.out8(0x3C8, 0);
            for (int i = 0; i < 3; i++) m_.out8(0x3C9, (uint8_t)(0x3F - k));
        }
    }
    memset(kVram, 0, 0xFA00);
    plasma(0x17091977, T, 0x1F4, 4);
    plasma(0x4D3, T + 0x10000, 0x1F4, 8);
    plasma(0x477, T + 0x20000, 0x1F4, 8);
    for (uint32_t a = T; a != T + 0x10000; a++) {
        const uint32_t v = m_.r8(a);
        m_.w8(a, v > 0x0B ? 7 : v >= 4 ? v - 4 : 0);
    }
    rle(T + 0x30000, 0x2179E, 0, 0x12);
    blur(T + 0x30000, A);
    const uint32_t tx = (ebp - 0x24D) & ~0xFFu, ty = (ebp - 0x14D) & ~0xFFu;
    auto C = [&](uint32_t a) { return (X)m_.f64(a); };
    for (int32_t i = 0; i < 0x100; i++) {
        F.fld((X)i);
        const double di = F.fstd();
        F.fmul(C(0x291B5));
        F.fsin();
        F.fmul(C(0x291BD));
        F.fld(di), F.fmul(C(0x291B5));
        F.fxch();
        F.frndint();
        m_.w8(tx + i, F.fistp());
        F.fcos();
        F.fmul(C(0x291C5));
        F.frndint();
        m_.w8(ty + i, F.fistp());
    }
    displace(T + 0x20000, T, T + 0x10000, A + 0x10000, tx, ty);
    for (uint32_t k = 0; k < 0x10000; k++) m_.w8(T + 0x30000 + k, m_.r8(A + k) + m_.r8(A + 0x10000 + k));
    const uint32_t pal = ebp - 0x64C;
    palette8(pal);
    setPal(pal, 0, 0x100);
    const uint32_t pic = T + 0x30000;
    for (;;) {                              // the picture in three pieces
        if (escape()) break;
        if ((position(0x1B539) & 0xFF) == 0x0C) blit(0xA0, 0, 0x60, 0x6E, pic);
        if ((position(0x1B55D) & 0xFF) == 0x0E) blit(0, 0, 0xA0, 0x6E, pic);
        if ((position(0x1B57E) & 0xFF) == 0x0F) blit(0, 0x6E, 0x100, 0x5A, pic);
        if (!((position(0x1B5A2) & 0xFF) < 0x10)) break;
    }
    const int32_t t0 = clock(0x1B5B3);
    for (;;) {                              // the ripple
        if (escape()) break;
        const int32_t t = clock(0x1B5E9) - t0;
        F.fld((X)t);
        F.fmul(C(0x291CD));
        const float f34 = F.fstf();
        F.fcos();
        F.fld(f34);
        F.fmulst(0);
        F.fxch(), F.fmul(C(0x291D5));
        F.fxch(), F.fmul(C(0x291DD));
        F.fxch(), F.fsubr(C(0x291E5));
        F.fxch(), F.fadd(C(0x291B5));
        F.fxch();
        const float amp = F.fstpf();        // [EBP-20h]
        const float freq = F.fstpf();       // [EBP-18h]
        for (int32_t i = 0; i < 0x100; i++) {
            F.fld((X)i);
            F.fmul(freq);
            F.fld(amp);
            F.fchs();
            const double neg = F.fstpd();
            const float a = F.fstf();
            F.fsin();
            F.fmul(neg);
            F.frndint();
            m_.w8(tx + i, F.fistp());
            F.fld(a);
            F.fcos();
            F.fmul(amp);
            F.frndint();
            m_.w8(ty + i, F.fistp());
        }
        displace(T + 0x20000, T, T + 0x10000, A + 0x10000, tx, ty);
        uint32_t d = kVram + 0x20, s1 = A, s2 = A + 0x10000;
        for (int32_t row = 0; row < 0xC8; row++, d += 0x40)
            for (int32_t x = 0; x < 0x100; x++) m_.w8(d++, m_.r8(s1++) + m_.r8(s2++));
        if ((int32_t)position(0x1B6D6) >> 8 == 2) break;
    }
    free(blk);
}

}  // namespace lasse
