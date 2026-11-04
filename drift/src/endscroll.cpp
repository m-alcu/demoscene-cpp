// The end scroller (1D5DFh-1D83Dh), mode 12h: 640x480 in a circular
// buffer of 480 lines (9600h bytes a plane), scrolled a line a frame by the
// start address, the line compare keeping the screen's bottom on the
// buffer's start. Each text line (centred, the greets' font, 20 rows) is
// drawn a row at a time as it scrolls in, then ten blank rows.
//
// The retrace wait after each scroll gives up after 1.5 x the polls a
// frame took at the start (1D3B0h); the polls are the harness's (see
// Machine::poll3da), so are the counts.
#include "demo.h"

namespace drift {

bool Demo::endScroller() {
    m_.out16(0x3D4, 0x0009);
    while (!(m_.poll3da() & 8)) {
    }
    while (m_.poll3da() & 8) {
    }
    uint32_t n = 0;
    do {
        n++;
    } while (!(m_.poll3da() & 8));
    m_.w32(0x1D3B0, (n * 3) >> 1);
    for (;;) {
        centreLine();
        uint32_t next = 0;
        do {
            if (esc()) return true;
            next = textRow();
            scrollLine();
            m_.w32(0x1D3A4, m_.r32(0x1D3A4) + 2);
        } while (m_.r32(0x1D3A4) != 0x28);
        m_.w32(0x1D3A0, next);
        m_.w32(0x1D3A4, 0);
        for (int k = 0x0A; k; k--) {
            if (esc()) return true;
            blankRow();
            scrollLine();
        }
        if (m_.r8(m_.r32(0x1D3A0)) == 0xFF) return true;
    }
}

// 1D677h: the line's start (in pixels) to centre it
void Demo::centreLine() {
    uint32_t esi = m_.r32(0x1D3A0), x = 0x140;
    for (;;) {
        const uint32_t c = m_.r8(esi++);
        if (c == 0x20) {
            x -= 8;
            continue;
        }
        if ((int32_t)c - 0x41 < 0) break;
        x -= m_.r8(c - 0x41 + 0x20360) >> 1;
    }
    m_.w32(0x1D3AC, x);
}

// 1D6ABh: the next buffer line cleared, the text's glyph row [1D3A4h]
// drawn in it; the pointer after the text's end returned
uint32_t Demo::textRow() {
    const uint32_t line = m_.r32(0x1D3A8);
    for (uint32_t i = 0; i < 0x50; i++) vramAt((line >> 3) + i, 0);
    uint32_t x = line + m_.r32(0x1D3AC);
    uint32_t esi = m_.r32(0x1D3A0);
    for (;;) {
        const uint32_t c = m_.r8(esi++);
        if (c == 0x20) {
            x += 0x10;
            continue;
        }
        if ((int32_t)c - 0x41 < 0) break;
        const uint32_t g = (c - 0x41) * 0x28 + 0x20385 + m_.r32(0x1D3A4);
        const uint32_t after = m_.r8(c - 0x41 + 0x20360) + x;
        glyphRow(x, g);
        x = after;
    }
    uint32_t next = line + 0x280;
    if (next >= 0x4B000) next -= 0x4B000;
    m_.w32(0x1D3A8, next);
    return esi;
}

// 1D730h: a glyph's 16-pixel row ORed in at pixel X (a bit position in
// the buffer)
void Demo::glyphRow(uint32_t x, uint32_t g) {
    const uint32_t cl = x & 7;
    const uint32_t edi = x >> 3;
    const uint16_t bx = (uint16_t)(0xFF00 | (0xFF >> cl));
    uint16_t ax = m_.r16(g);
    ax = (uint16_t)((ax >> cl) | (ax << ((16 - cl) & 15)));
    const uint16_t dx = ax;
    auto orWord = [&](uint32_t at, uint16_t v) {
        const uint8_t lo = m_.vga.read(at & 0xFFFF), hi = m_.vga.read((at + 1) & 0xFFFF);
        vramAt(at, (uint8_t)(lo | v));
        vramAt(at + 1, (uint8_t)(hi | v >> 8));
    };
    orWord(edi, ax & bx);
    if (cl) orWord(edi + 2, dx & (uint16_t)~bx);
}

// 1D777h: a blank line
void Demo::blankRow() {
    const uint32_t line = m_.r32(0x1D3A8);
    for (uint32_t i = 0; i < 0x50; i++) vramAt((line >> 3) + i, 0);
    uint32_t next = line + 0x280;
    if (next >= 0x4B000) next -= 0x4B000;
    m_.w32(0x1D3A8, next);
}

// 1D7B1h: after the retrace the new start; at the next (or when waited
// long enough) the line compare; both a line on
void Demo::scrollLine() {
    while (m_.poll3da() & 8) {
    }
    const uint16_t start = m_.r16(0x1D3B4);
    m_.out16(0x3D4, (uint16_t)(0x0C | (start & 0xFF00)));
    m_.out16(0x3D4, (uint16_t)(0x0D | (start & 0xFF) << 8));
    for (uint32_t n = 0;;) {
        n++;
        if (n >= m_.r32(0x1D3B0)) break;
        if (m_.poll3da() & 8) break;
    }
    const uint16_t lc = m_.r16(0x1D3B6);
    m_.out16(0x3D4, (uint16_t)(0x07 | ((lc >> 8) << 4 & 0xFF) << 8));
    m_.out16(0x3D4, (uint16_t)(0x18 | (lc & 0xFF) << 8));
    uint16_t s = (uint16_t)(start + 0x50);
    if (s >= 0x9600) s -= 0x9600;
    m_.w16(0x1D3B4, s);
    int16_t l = (int16_t)(m_.r16(0x1D3B6) - 1);
    if (l < 0) l += 0x1E0;
    m_.w16(0x1D3B6, (uint16_t)l);
}

}  // namespace drift
