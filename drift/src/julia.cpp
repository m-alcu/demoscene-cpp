// The Julia morpher (1C924h-1D39Eh): a Julia set z <- z^2 + c computed on
// a 160x100 grid (its lower half the upper's mirror, the set's symmetry)
// by spiralling squares of 10x10 cells: a ring whose cells all came out
// the same has its inside filled without computing it. c moves between
// keyframes (1C544h on), the iterations allowed grow. The grid is then
// drawn as a landscape (1D063h), each column's heights front to back, in
// two halves (even and odd columns).
//
// Part 3 draws straight into Mode X pages and flips them itself (1C878h
// bit 0); parts 4-6 draw into the frame buffer, the vectors over it, and
// 1D1E2h copies it to a page. In part 5 the greets are written into the
// grid (1C94Dh) before it is drawn again.
//
// Variables: 1C4E0h c's real part (the imaginary one is the immediate at
// 1CB83h), 1C4E4h/1C4E8h a cell's step, 1C4ECh/1C4F0h the point, 1C4F4h/
// 1C4F8h the square's corner, 1C4FCh/1C500h the spiral's step, 1C504h the
// cell, 1C50Ch its step, 1C510h a ring's first value, 1C514h, 1C518h the
// ring not uniform, 1C51Ch/1C520h the side, 1C524h the direction, 1C538h/
// 1C53Ch squares across/down, 1C868h iterations (low word) and the bail-out
// (high), 1C86Ch/1C870h the pages, 1C874h the buffer's selector, 1C879h
// the grid.
#include "demo.h"

namespace drift {

namespace {
inline int32_t idiv(int64_t a, int32_t b) { return (int32_t)(a / b); }
}  // namespace

// A write through a selector of base A0000h: past the 64K window it lands
// in memory (the harness maps only A0000h-AFFFFh as video memory)
void Demo::vramAt(uint32_t off, uint8_t v) {
    if (off < 0x10000) m_.vga.write(off, v);
    else m_.w8(kVram + off, v);
}

// 1CA39h
void Demo::juliaTick() {
    m_.w32(0x1C886, m_.r32(0x1C886) + 1);
    m_.w32(0x1C87D, m_.r32(0x1C87D) + 1);
    const uint32_t t = m_.r32(0x1C881) + 1;
    m_.w32(0x1C881, t);
    const uint32_t at = m_.r32(m_.r32(0x1C89C));
    if (t == at) {
        m_.w8(0x1C896, 1);              // a flash starts
    } else if (t < at || t > at + 0x48) {
        m_.w32(0x1C88A, m_.r32(0x1C88A) + 1);
    } else if (t == at + 0x48) {
        m_.w8(0x1C896, 0);
        m_.w32(0x1C898, 0);
        m_.w32(0x1C89C, m_.r32(0x1C89C) + 4);
        m_.w32(0x1C88A, m_.r32(0x1C88A) + 1);
    } else {
        m_.w32(0x1C898, m_.r32(0x1C898) + 1);
    }
    if (t > 0x3E8) m_.w8(0x1C877, 0);
}

// 1C9F1h: the greets' word fades in and out over 32 ticks
void Demo::waveTick() {
    const uint32_t c = m_.r32(0x1C8B4);
    m_.w8(0x1C8BC, c < 0x10 ? c : (uint8_t)-(int32_t)(c - 0x1F));
    uint32_t n = c + 1;
    if (n == 0x20) {
        uint32_t s;
        do {
            s = m_.r32(0x1C8B8);
            m_.w32(0x1C8B8, s + 1);
        } while ((int32_t)m_.r8(s) - 0x41 >= 0);
        n = 0;
    }
    m_.w32(0x1C8B4, n);
    juliaTick();
}

// 1CAADh: part 3
bool Demo::julia(uint32_t grid) {
    m_.w32(0x1C879, grid);
    m_.w16(0x1C874, m_.r16(0x209AE));
    for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heapBase_ + i, 0);
    m_.out8(0x3C8, 0);
    for (uint32_t i = 0; i < 0x300; i++) m_.out8(0x3C9, m_.r8(0x1BBE0 + i));
    for (uint32_t page : {m_.r32(0x1C870), m_.r32(0x1C86C)}) {
        uint32_t edi = page, eax = 0x3C3C3C3C;
        for (int b = 0; b < 0x35; b++, eax -= 0x01010101)
            for (int k = 0; k < 0x28; k++, edi += 4)
                for (int j = 0; j < 4; j++) vramAt(edi + j, (uint8_t)(eax >> (8 * j)));
    }
    juliaKey();
    return juliaRun();
}

// 1CB48h, called by parts 4-6: one frame into the buffer
void Demo::juliaStep() { juliaRun(); }

// 1CB48h: the grid computed, drawn; in Mode X flipped and on to the next
// frame until the part's end. True unless Esc.
bool Demo::juliaRun() {
    for (;;) {
        // --- the cells ----------------------------------------------------
        for (;;) {
            m_.w8(0x1C878, m_.r8(0x1C877));
            uint32_t ebx = m_.r32(0x1C4EC), edx = m_.r32(0x1C4F0);
            uint32_t esi = ebx * ebx, edi = edx * edx;
            uint32_t ecx = m_.r32(0x1C868);
            const uint32_t ebp = m_.r32(0x1C4E0), ci = m_.r32(0x1CB83);
            for (;;) {
                edx = (uint32_t)((int32_t)(edx * ebx) >> 0x0B);
                ebx = esi + ebp;
                edx += ci;
                ebx -= edi;
                ebx = (uint32_t)((int32_t)ebx >> 0x0C);
                edi = edx * edx;
                esi = ebx * ebx;
                if (esi + edi > ecx) break;
                ecx = (ecx & 0xFFFF0000) | ((ecx - 1) & 0xFFFF);
                if (!(ecx & 0xFFFF)) break;
            }
            const uint32_t v = m_.r32(0x1C868) - ecx;
            {
                const uint32_t g = m_.r32(0x1C879), i = m_.r32(0x1C504);
                m_.w8(g + i, (uint8_t)v);
                m_.w8(g - i + 0x3E7F, (uint8_t)v);
                m_.w32(0x1C504, i + m_.r32(0x1C50C));
            }
            const int32_t left = (int32_t)m_.r32(0x1C514) - 1;
            if (left >= 0) {
                m_.w32(0x1C514, (uint32_t)left);
                m_.w32(0x1C510, v);
            }
            if (v != m_.r32(0x1C510)) m_.w32(0x1C518, 1);
            m_.w32(0x1C4EC, m_.r32(0x1C4EC) + m_.r32(0x1C4FC));
            m_.w32(0x1C4F0, m_.r32(0x1C4F0) + m_.r32(0x1C500));
            m_.w32(0x1C51C, m_.r32(0x1C51C) - 1);
            if (m_.r32(0x1C51C)) continue;
            // a side done: the next direction
            m_.w32(0x1C51C, m_.r32(0x1C520));
            const uint32_t dir = (m_.r32(0x1C524) + 1) & 3;
            m_.w32(0x1C524, dir);
            const uint32_t sx = m_.r32(0x1C4E4), sy = m_.r32(0x1C4E8);
            switch (m_.r32(0x1C528 + dir * 4)) {
            case 0x1CC39: {             // right, one ring in
                m_.w32(0x1C500, 0);
                m_.w32(0x1C504, m_.r32(0x1C504) + 0xA1);
                m_.w32(0x1C50C, 1);
                m_.w32(0x1C4EC, m_.r32(0x1C4EC) + sx);
                m_.w32(0x1C4FC, sx);
                m_.w32(0x1C4F0, m_.r32(0x1C4F0) + sy);
                const uint32_t mixed = m_.r32(0x1C518);
                bool squareDone = false;
                if (!mixed) {
                    // 1CD18h: the ring all one value: its inside filled
                    uint32_t edi2 = m_.r32(0x1C879) + m_.r32(0x1C504);
                    const uint32_t esi2 = 0x3E7F - m_.r32(0x1C504);
                    const uint8_t val = (uint8_t)m_.r32(0x1C510);
                    const uint32_t side = m_.r32(0x1C520);
                    if (side > 1) {
                        const uint32_t n = side - 1, skip = 0xA0 - n;
                        uint32_t p = edi2;
                        for (uint32_t r = 0; r < n; r++, p += skip)
                            for (uint32_t k = 0; k < n; k++) m_.w8(p++, val);
                        p = edi2 - m_.r32(0x1C504) + esi2;
                        for (uint32_t r = 0; r < n; r++, p -= skip)
                            for (uint32_t k = 0; k < n; k++) m_.w8(p--, val);
                    }
                    squareDone = true;
                } else {
                    m_.w32(0x1C514, mixed);
                    m_.w32(0x1C518, 0);
                    const uint32_t side = m_.r32(0x1C520);
                    if (side <= 2) squareDone = true;
                    else m_.w32(0x1C520, side - 2), m_.w32(0x1C51C, side - 2);
                }
                if (!squareDone) continue;
                // 1CD72h: the next square
                m_.w32(0x1C514, 1);
                m_.w32(0x1C518, 0);
                if (esc()) return false;
                const uint32_t base = m_.r32(0x1C508) + 0x0A;
                m_.w32(0x1C504, base);
                m_.w32(0x1C508, base);
                m_.w32(0x1C520, 9);
                m_.w32(0x1C51C, 9);
                m_.w32(0x1C524, 0);
                const uint32_t x = sx * 10 + m_.r32(0x1C4F4);
                m_.w32(0x1C4F4, x);
                m_.w32(0x1C4EC, x);
                m_.w32(0x1C4F0, m_.r32(0x1C4F8));
                m_.w32(0x1C538, m_.r32(0x1C538) - 1);
                if (m_.r32(0x1C538)) continue;
                m_.w32(0x1C500, 0);
                m_.w32(0x1C4EC, 0xFFFFE000);
                m_.w32(0x1C4F4, 0xFFFFE000);
                m_.w32(0x1C538, 0x10);
                const uint32_t y = sy * 10 + m_.r32(0x1C4F8);
                m_.w32(0x1C4F8, y);
                m_.w32(0x1C4F0, y);
                m_.w32(0x1C540, m_.r32(0x1C540) + 0x640);
                m_.w32(0x1C504, m_.r32(0x1C540));
                m_.w32(0x1C508, m_.r32(0x1C540));
                m_.w32(0x1C53C, m_.r32(0x1C53C) - 1);
                if (m_.r32(0x1C53C)) continue;
                break;                  // the grid done
            }
            case 0x1CCAB:               // down
                m_.w32(0x1C4FC, 0);
                m_.w32(0x1C500, sy);
                m_.w32(0x1C50C, 0xA0);
                continue;
            case 0x1CCCE:               // left
                m_.w32(0x1C500, 0);
                m_.w32(0x1C4FC, (uint32_t)-(int32_t)sx);
                m_.w32(0x1C50C, 0xFFFFFFFF);
                continue;
            default:                    // up
                m_.w32(0x1C4FC, 0);
                m_.w32(0x1C500, (uint32_t)-(int32_t)sy);
                m_.w32(0x1C50C, 0xFFFFFF60);
                continue;
            }
            break;
        }
        // --- the frame (1CE4Fh) ------------------------------------------------
        const bool direct = m_.r8(0x1C878) & 1;
        if (direct) {
            planes(0x0F);
            skyPage();
        } else {
            skyBuffer();
        }
        if (direct) planes(0x0C);
        if (!(m_.r8(0x1C878) & 2)) m_.w32(0x1C864, 0), landscape();
        if (direct) planes(0x03);
        if (!(m_.r8(0x1C878) & 2)) m_.w32(0x1C864, 1), landscape();
        if (m_.r8(0x1C896) & 1) {
            // a flash: the palette from white back (8 steps), then on
            if (!(m_.r8(0x1C896) & 2)) {
                uint32_t edi = 0x1C1E0;
                for (int k = 0; k < 3; k++) m_.w8(edi++, m_.r8(0x20FB9 + k));
                for (uint32_t r = 0x7F, s = 0x21133; r; r--, s -= 3)    // the palette reversed
                    for (int k = 0; k < 3; k++) m_.w8(edi++, m_.r8(s + k));
                for (uint32_t i = 0; i < 0x180; i++) m_.w8(0x1C360 + i, m_.r8(0x20FB9 + i));
                m_.w8(0x1C896, m_.r8(0x1C896) | 2);
            }
            const uint32_t n = m_.r32(0x1C898);
            if (n < 8) fade(0x20FB9, 0x1C1E0, 8, 0x180, n);
            else fade(0x1C1E0, 0x1C360, 0x40, 0x180, n - 8);
        } else {
            uint32_t n = m_.r32(0x1C88A);
            bool doFade = true;
            if (n > 0x3E8) {
                if (m_.r8(0x1C897) == 1) {
                    doFade = false;
                } else {
                    m_.w8(0x1C897, m_.r8(0x1C897) + 1);
                    m_.w32(0x1C88A, 0);
                    const uint32_t a = m_.r32(0x1C88E);
                    m_.w32(0x1C88E, m_.r32(0x1C892));
                    m_.w32(0x1C892, a);
                    n = 0;
                }
            }
            if (doFade) fade(m_.r32(0x1C88E), m_.r32(0x1C892), 0x3E8, 0x300, n);
        }
        if (m_.r8(0x1C878) & 1) {
            flipPage();
            if (!juliaNext()) return true;
        } else {
            juliaNext();
            return true;
        }
    }
}

// 1D238h: the next frame: c moved by the ticks gone (a keyframe every 23h
// ticks), the iterations up, the scan from the start
bool Demo::juliaNext() {
    uint32_t ecx = m_.r32(0x1C87D);
    m_.w32(0x1C87D, 0);
    m_.w32(0x1C860, m_.r32(0x1C860) + ecx);
    if (m_.r32(0x1C860) >= 0x23) {
        if (!juliaKey()) {
            // 1D30Bh (not reached in the intro): the keyframes again
            m_.w32(0x1C85C, 4);
            m_.w32(0x1C860, 4);
            m_.w32(0x1C504, 0);
            m_.w32(0x1C508, 0);
            m_.w8(0x1C885, m_.r8(0x1C885) - 1);
            if (!m_.r8(0x1C885)) return false;
        }
    }
    for (uint32_t a : {0x1C4ECu, 0x1C4F0u, 0x1C4F4u, 0x1C4F8u}) m_.w32(a, 0xFFFFE000);
    m_.w32(0x1C538, 0x10);
    m_.w32(0x1C53C, 5);
    m_.w32(0x1C540, 0);
    m_.w32(0x1C504, 0);
    m_.w32(0x1C508, 0);
    m_.w32(0x1C50C, 1);
    for (; ecx; ecx--) {
        m_.w32(0x1C4E0, m_.r32(0x1C4E0) + m_.r32(0x1C858));
        m_.w32(0x1CB83, m_.r32(0x1CB83) + m_.r32(0x1C854));
    }
    if (m_.r8(0x1C876) & 1) return true;
    const uint32_t n = m_.r32(0x1C886);
    if (n >= 4) {
        m_.w32(0x1C868, m_.r32(0x1C868) + (n >> 2));
        m_.w32(0x1C886, 0);
        if (m_.r32(0x1C868) >= 0x400000F) {
            m_.w32(0x1C868, 0x400000F);
            m_.w8(0x1C876, m_.r8(0x1C876) | 1);
        }
    }
    return true;
}

// 1D341h: the next keyframe: c's steps per tick to reach it in 23h ticks
bool Demo::juliaKey() {
    m_.w32(0x1C860, 0);
    m_.w32(0x1C85C, m_.r32(0x1C85C) + 8);
    if (m_.r32(0x1C85C) >= 0x370) return false;
    const uint32_t k = m_.r32(0x1C85C);
    m_.w32(0x1C858, (uint32_t)idiv((int32_t)(m_.r32(k + 0x1C544) - m_.r32(k + 0x1C53C)), 0x23) << 8);
    m_.w32(0x1C854, (uint32_t)(idiv((int32_t)(m_.r32(k + 0x1C548) - m_.r32(k + 0x1C540)), 0x23) >> 4));
    return true;
}

// 1CFD0h: the pages swapped, the one drawn shown
void Demo::flipPage() {
    m_.present();
    const uint32_t a = m_.r32(0x1C870), b = m_.r32(0x1C86C);
    m_.w32(0x1C86C, a);
    m_.w32(0x1C870, b);
    m_.out16(0x3D4, (uint16_t)(0x0C | (b & 0xFF00)));
    m_.out16(0x3D4, (uint16_t)(0x0D | (b & 0xFF) << 8));
}

// 1CFF4h
void Demo::planes(uint8_t mask) {
    m_.out8(0x3C4, 2);
    m_.out8(0x3C5, mask & 0x0F);
}

// 1D004h, 1D044h: the sky above the landscape, 21 bands up from the
// middle, in the page or in the buffer (written backwards)
void Demo::skyPage() { sky(0x1F8C + m_.r32(0x1C86C), 0x28, true); }
void Demo::skyBuffer() { sky(0x7E3C, 0xA0, false); }

void Demo::sky(uint32_t edi, uint32_t width, bool page) {
    uint32_t eax = 0x0A0A0A0A;
    for (int band = 0x15; band; band--, eax += 0x01010101)
        for (uint32_t k = 0; k < width; k++, edi -= 4)
            for (int j = 0; j < 4; j++) {
                const uint8_t b = (uint8_t)(eax >> (8 * j));
                if (page) vramAt(edi + j, b);
                else m_.w8(heapBase_ + edi + j, b);
            }
}

// 1D063h: one half of the grid's columns as a landscape, front row to
// back: a column's next height drawn only above what is drawn already
// (1C804h, per column), as a vertical run shaded by height and depth.
void Demo::landscape() {
    for (uint32_t i = 0; i < 0x50; i += 4) m_.w32(0x1C804 + i, 0x01010101);
    const bool page = m_.r8(0x1C878) & 1;
    const uint32_t half = m_.r32(0x1C864);
    auto out = [&](uint32_t off, uint8_t v) {
        if (page) vramAt(off, v);
        else m_.w8(heapBase_ + off, v);
    };
    uint32_t esi = m_.r32(0x1C879) + half;
    uint32_t ebp = 0x1C804;
    uint32_t ebx = page ? m_.r32(0x1C86C) : 0;
    ebx += 0x643E7F;
    uint32_t edi = ebx & 0xFFFF;
    uint32_t ecx = 0x50;
    uint32_t eax = 0x100;
    auto setDi = [&](uint32_t v) { edi = (edi & 0xFFFF0000) | (v & 0xFFFF); };
    for (;;) {
        uint8_t al = m_.r8(esi);
        esi += 2;
        const uint8_t ah = (uint8_t)(eax >> 8);
        al = (uint8_t)((uint8_t)(al << 2) + ah);
        uint8_t dl = m_.r8(ebp);
        if (al > dl) {
            m_.w8(ebp, al);
            setDi(ebx);
            uint8_t dh = (uint8_t)(al - dl);
            dl = (uint8_t)(dl - ah + 1);
            {
                uint16_t cx = (uint16_t)(dl << 4);
                setDi(edi - cx);
                cx = (uint16_t)(cx << 2);
                setDi(edi - cx);
            }
            if (--dh == 0) {
                al = (uint8_t)(al + al - ah);
                al = (uint8_t)(al - ah - ah - 0x96);
                al >>= 1;
                if (page) {
                    out(edi, al), edi++;
                } else {
                    edi = (((edi << 1) - half + 1) << 1);
                    out(edi, al), edi++;
                    out(edi, al), edi++;
                }
            } else {
                dh++;
                al = (uint8_t)(al - ah - ah - 0x96 - dh);
                if (page) {             // 1D1B0h
                    al >>= 1;
                    do {
                        out(edi, al), edi++;
                        setDi(edi - 0x51);
                        al++;
                    } while (--dh);
                } else {                // 1D1C0h
                    al >>= 1;
                    edi = (((edi << 1) - half + 1) << 1);
                    uint16_t ax = (uint16_t)(al | al << 8);
                    do {
                        out(edi, (uint8_t)ax), out(edi + 1, (uint8_t)(ax >> 8));
                        edi += 2;
                        edi -= 0x142;
                        ax = (uint16_t)(ax + 0x101);
                    } while (--dh);
                }
            }
        }
        ebp++;
        ebx--;
        if (--ecx) continue;
        eax = (eax & ~0xFF00u) | ((eax + 0x100) & 0xFF00);
        ecx = 0x50;
        ebp -= 0x50;
        ebx -= 0x10000;
        if (ebx < 0x10000) break;
    }
    if (half == 1) {
        if (m_.r8(0x1C878) != 1) {
            for (uint32_t i = 0; i < 0x50 * 4; i += 4) m_.w32(m_.r32(8) + 0xF8C0 + i, 0);
        } else {
            const uint32_t at = 0xA3E30 - kCodeBase + m_.r32(0x1C870) - kVram;
            for (uint32_t i = 0; i < 0x14 * 4; i++) vramAt(at + i, 0);
        }
    }
}

// 1D1E2h: the buffer to the page, a plane at a time, then the flip
void Demo::flip() {
    const uint32_t page = m_.r32(0x1C86C);
    for (int p = 0; p < 4; p++) {
        planes((uint8_t)(1 << p));
        uint32_t esi = heapBase_ + p, edi = page;
        for (int n = 0; n < 0xFA0; n++, esi += 0x10)
            for (int j = 0; j < 4; j++) vramAt(edi++, m_.r8(esi + 4 * j));
    }
    flipPage();
}

// 1C924h: the greets' next word written into the grid, then drawn; true
// at the text's end
bool Demo::wave() {
    if (greetWord()) return true;
    m_.w32(0x1C864, 0);
    landscape();
    m_.w32(0x1C864, 1);
    landscape();
    return false;
}

// 1C94Dh: the word at [1C8B8h] centred in the grid, its pixels raised to
// the fade level [1C8BCh] where lower (font widths at 20360h, 20 rows of 16
// bits a letter from 20385h)
bool Demo::greetWord() {
    uint32_t edi = m_.r32(0x1C879) + 0x2580 - 0x50;
    uint32_t esi = m_.r32(0x1C8B8);
    uint32_t width = 0, letters = 0;
    for (;;) {
        const uint32_t c = m_.r8(esi++);
        if (!c) return true;
        if ((int32_t)c - 0x41 < 0) break;
        width += m_.r8(c - 0x41 + 0x20360) >> 1;
        letters++;
    }
    edi += width;
    esi = m_.r32(0x1C8B8);
    for (; letters; letters--) {
        uint32_t g = (m_.r8(esi) - 0x41) * 0x28 + 0x20385;
        for (int row = 0x14; row; row--) {
            uint16_t bits = m_.r16(g);
            g += 2;
            bits = (uint16_t)(bits << 8 | bits >> 8);
            for (int b = 0x0F; b >= 0; b--) {
                if ((bits >> b) & 1) {
                    const uint8_t lv = m_.r8(0x1C8BC);
                    if (m_.r8(edi) < lv) m_.w8(edi, lv);
                }
                edi--;
            }
            edi -= 0x90;
        }
        edi += 0xC80;
        const uint32_t c = m_.r8(esi++);
        edi -= m_.r8(c - 0x41 + 0x20360);
    }
    return false;
}

}  // namespace drift
