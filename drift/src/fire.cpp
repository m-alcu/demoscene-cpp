// The fire logo (FE86h-100D3h). A 64K buffer at the heap's start ([8]
// then, FE62h) holds the fire; each frame
//   * the logo's points (a list of buffer offsets at EF30h, more of them
//     as the part goes on: FE66h grows by FE6Ah, which the timer adds 4 to)
//     get noise from a self-modifying generator (the immediates at 10082h,
//     10086h, 1008Ah) in the row below them;
//   * 177 rows of 208 pixels (from offset 17Ch, 320 a row) become the
//     average of four neighbours below them, minus one where that does not
//     underflow, four pixels at a time: written to the screen, and to the
//     buffer one row up;
//   * the frame is shown for two retraces, colour 0 set to the fade level
//     (FE61h, white to black) at each.
// From position 40h on, the timer's callback sets FE60h bit 0: the
// palette fades (210 steps, twice: FE72h/FE76h's tables) and the part ends.
#include "demo.h"

namespace drift {

void Demo::fireTick(uint8_t al) {
    if (al != 1) {
        m_.w32(0xFE6A, m_.r32(0xFE6A) + 4);
        const int8_t f = (int8_t)(m_.r8(0xFE61) - 1);
        if (f >= 0) m_.w8(0xFE61, (uint8_t)f);
        return;
    }
    if (!(m_.r8(0xFE60) & 1)) {
        m_.w8(0xFE60, m_.r8(0xFE60) | 1);
        m_.w32(0xFE7E, 0xD2);
        m_.w32(0xFE82, 0xFFFFFFFF);
    }
    m_.w32(0xFE82, m_.r32(0xFE82) + 1);
}

bool Demo::fire() {
    const uint32_t buf = m_.r32(8);
    m_.w32(0xFE62, buf);
    for (uint32_t i = 0; i < 0x10000; i++) m_.w8(buf + i, 0);
    m_.out8(0x3C8, 1);
    for (uint32_t i = 0; i < 0x2FA; i++) m_.out8(0x3C9, m_.r8(0xFC23 + i));
    m_.out8(0x3C9, 0), m_.out8(0x3C9, 0), m_.out8(0x3C9, 0);
    m_.w32(0xFE6A, 0);
    m_.w8(0xFE61, 0x3F);
    for (;;) {
        if (m_.r8(0xFE60) & 1) {
            const uint32_t k = m_.r32(0xFE6E);
            if (m_.r32(0xFE82) >= m_.r32(0xFE7E)) {
                m_.w32(0xFE82, 0);
                m_.w32(0xFE7E, 0xD2);
                m_.w32(0xFE6E, k + 4);
                if (k + 4 == 8) return true;
            } else {
                fade(m_.r32(k + 0xFE72), m_.r32(k + 0xFE76), m_.r32(0xFE7E), 0xC0, m_.r32(0xFE82));
            }
        }
        fireFrame();
        if (esc()) return false;
        for (int n = 2; n; n--) {
            m_.waitRetrace();
            const uint8_t f = m_.r8(0xFE61);
            m_.out8(0x3C8, 0);
            m_.out8(0x3C9, f), m_.out8(0x3C9, f), m_.out8(0x3C9, f);
            m_.waitDisplay();
            if (m_.r8(0xFE60) & 1) break;
        }
    }
}

void Demo::fireFrame() {
    fireSparks();
    // DS: the heap's selector (A0h, base as [8] then); 16-bit [di+...] reads
    const uint32_t ds = m_.r32(0xFE62);
    auto rd = [&](uint32_t off) { return m_.r32(ds + (off & 0xFFFF)); };
    const uint32_t ebx = 0xFFFFFEB9;    // -147h: the row above, one dword back
    uint32_t edi = 0x17C;
    auto put = [&](uint32_t eax) {
        eax &= 0xFCFCFCFC;
        eax >>= 2;
        eax -= 0x01010101;
        if (eax & 0xC0C0C0C0) eax += 0x01010101;
        vram32(edi, eax);
        edi += 4;
        m_.w32(ds + edi + ebx, eax);
    };
    for (int row = 0; row < 0xB1; row++) {
        // EBP and EDX take turns holding the dword left of the one read
        uint32_t ebp = rd(edi - 4), edx;
        for (int cx = 0x1A; cx; cx--) {
            uint32_t eax = rd(edi + 0x13C) + ebp;
            edx = m_.r32(ds + edi);
            ebp = (ebp >> 8) | (edx << 24);
            eax += ebp;
            ebp = (ebp >> 8) | (edx << 24);
            eax += ebp;
            put(eax);
            eax = rd(edi + 0x13C) + edx;
            ebp = m_.r32(ds + edi);
            edx = (edx >> 8) | (ebp << 24);
            eax += edx;
            edx = (edx >> 8) | (ebp << 24);
            eax += edx;
            put(eax);
        }
        edi += 0x70;
    }
}

// 10050h: noise under the logo's points
void Demo::fireSparks() {
    uint32_t edx = m_.r32(0xFE66) + m_.r32(0xFE6A);
    m_.w32(0xFE6A, 0);
    if (edx > 0x678) edx = 0x678;
    m_.w32(0xFE66, edx);
    uint32_t esi = 0xEF30;
    for (; edx; edx--, esi += 2) {
        uint16_t bx = m_.r16(0x10082), cx = m_.r16(0x10086), ax = m_.r16(0x1008A);
        bx ^= cx;
        const int r = (cx & 0x1F) & 15;
        ax = (uint16_t)((ax << r) | (ax >> ((16 - r) & 15)));
        cx ^= ax;
        ax = (uint16_t)(ax + (uint16_t)edx);
        bx = (uint16_t)(bx + ax);
        cx = (uint16_t)(cx + bx);
        m_.w16(0x10082, cx);
        m_.w16(0x10086, ax);
        m_.w16(0x1008A, bx);
        const uint32_t edi = m_.r16(esi) + m_.r32(0xFE62);
        const uint16_t v = (uint16_t)((uint16_t)(m_.r16(edi) - cx) >> 2);
        m_.w8(edi + 0x140, v >> 8);
    }
}

}  // namespace drift
