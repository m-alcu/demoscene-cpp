// The intro (2A0h-4259h): main from where the sound card set-up has been
// done, the parts, their timer handlers, and the heap the player keeps.
#include "demo.h"

namespace asm94 {

Demo::Demo(Machine& m) : m_(m) {
    m_.irq0 = [this] { timer(); };
    m_.irq11 = [this] {
        if (irq11Vector_ == 0x31EE7) gusIrq();
        else m_.ack(11);                        // PMODE's default: the BIOS's
    };
}

// --- helpers ------------------------------------------------------------------------

void Demo::waitFrame() {
    while (in(0x3DA) & 8) {
    }
    while (!(in(0x3DA) & 8)) {
    }
}

void Demo::waitRetrace() {
    while (!(in(0x3DA) & 8)) {
    }
}

void Demo::waitDisplay() {
    while (in(0x3DA) & 8) {
    }
}

// 0B54h: AX's top 6 bits pick a step of the table at 0B9Bh (signed bytes,
// x 100h), interpolated by the low 10 bits; the 32-bit sum shifted down by
// the count in its SHRD (0B99h: 10, patched to 13 by the text writer).
uint16_t Demo::sine(uint16_t ax) {
    const uint16_t bx = (uint16_t)(ax >> 10);
    int16_t cx = (int16_t)(0x3FF - (ax & 0x3FF));
    const int32_t p1 = (int32_t)(int16_t)(m_.r8(0xB9B + bx) << 8) * cx;
    cx = (int16_t)(0x3FF - cx);
    const int32_t p2 = (int32_t)(int16_t)(m_.r8(0xB9C + bx) << 8) * cx;
    // add ax, cx; adc dx, bx: the 32-bit sum of the two products
    const uint32_t sum = (uint32_t)p1 + (uint32_t)p2;
    return (uint16_t)(sum >> (m_.r8(0xB99) & 31));
}

void Demo::setStart(uint16_t bx) {
    m_.cli();
    outw(0x3D4, (uint16_t)((bx & 0xFF00) | 0x0C));
    outw(0x3D4, (uint16_t)((bx & 0xFF) << 8 | 0x0D));
    m_.sti();
}

void Demo::hpan(uint16_t bx) {
    m_.cli();
    in(0x3DA);
    out(0x3C0, 0x33);
    out(0x3C0, (uint8_t)bx);
    out(0x3C0, 0x20);
    m_.sti();
}

void Demo::flip() {
    waitDisplay();
    uint32_t ebx = m_.r32(0x1E6B);
    const uint32_t old = m_.r32(0xC8A);
    m_.w32(0xC8A, ebx);
    ebx = old;
    m_.w32(0x1E6B, ebx);
    ebx -= m_.r32(0xC86);
    setStart((uint16_t)ebx);
    waitRetrace();
}

void Demo::palette(uint32_t src, int first, int n) {
    out(0x3C8, (uint8_t)first);
    for (int i = 0; i < n * 3; i++) out(0x3C9, m_.r8(src + i));
}

// --- the timer --------------------------------------------------------------------

void Demo::timer() {
    if (irq0Vector_ == 0x354E) timer354E();
    else if (irq0Vector_ == 0x3BA2) timer3BA2();
    else m_.ack(0);                             // the BIOS's tick
}

void Demo::setPit() {
    m_.cli();
    out(0x43, 0x36);
    const uint16_t ax = m_.r16(0x354C);
    out(0x40, (uint8_t)ax);
    out(0x40, (uint8_t)(ax >> 8));
    m_.sti();
}

void Demo::biosTimer() {
    m_.cli();
    out(0x43, 0x36);
    out(0x40, 0xFF);
    out(0x40, 0xFF);
    setIrq0(m_.r32(0x35D2));
    m_.sti();
}

// 354Eh: the first part's timer, 1193182 / 4DAh Hz: the time at 2083h
// (+10h a tick, its sign changing the part's phase at 35D1h), the music's
// poll every 9th tick, the BIOS's clock every 35h.
void Demo::timer354E() {
    out(0x20, 0x20);
    m_.sti();
    m_.w16(0x2083, m_.r16(0x2083) + 0x10);
    bool check = true;
    if (m_.r8(0x35D1) == 0) {
        if ((int16_t)m_.r16(0x2083) <= 0) check = false;
        else m_.w8(0x35D1, 1);
    }
    if (check && (int16_t)m_.r16(0x2083) >= 0x4000) {
        m_.w8(0x35D1, 0);
        m_.w16(0x2083, m_.r16(0x2083) + 0x8000);
    }
    m_.w8(0x35D0, m_.r8(0x35D0) - 1);
    if (m_.r8(0x35D0) == 0) {
        playerPoll();
        m_.w8(0x35D0, 9);
    }
    m_.w8(0x35CF, m_.r8(0x35CF) - 1);
    if (m_.r8(0x35CF) == 0) m_.w8(0x35CF, 0x35);  // (and the BIOS's clock at 46Ch)
}

// 3BA2h: the later parts' timer, 1193182 / 214Ah Hz: the music's poll
// every 3rd tick, the frame flag (3EF7h) every 5th, the ellipse's step.
void Demo::timer3BA2() {
    m_.w32(0x3EF8, m_.r32(0x3EF8) - 1);
    if (m_.r32(0x3EF8) == 0) {
        m_.w32(0x3EF8, 3);
        playerPoll();
    }
    m_.w8(0x3EF6, m_.r8(0x3EF6) - 1);
    if (m_.r8(0x3EF6) == 0) {
        m_.w8(0x3EF7, 1);
        m_.w8(0x3EF6, 5);
    }
    if (m_.r32(0x3EF8) == 1 && m_.r8(0x3C4B) != 0) {
        m_.w32(0x3EFC, m_.r32(0x3EFC) - 1);
        if (m_.s32(0x3EFC) <= 0) {
            // new ellipse speeds: AH (0 here: AX was set to 10h) chains
            // through the seven bytes from 3EEBh into 3EEAh on
            m_.w32(0x3EFC, 0x320);
            uint8_t ah = 0, al = 0;
            for (int i = 0; i < 7; i++) {
                al = (uint8_t)(m_.r8(0x3EEB + i) ^ ah);
                ah = al;
                m_.w8(0x3EEA + i, al & 0x0F);
                al &= 0x0F;
            }
            ah = (uint8_t)(ah + 5);
            int cf = ah >> 7;
            ah = (uint8_t)(ah << 1);
            const int sum = ah + al;
            cf = sum >> 8;
            ah = (uint8_t)sum;
            const int cf2 = ah & 1;
            ah = (uint8_t)(ah >> 1 | cf << 7);
            ah = (uint8_t)(ah + 4 + cf2);
            m_.w8(0x3EEA + 7, ah & 0x0F);
        }
        ellipse();
    }
    out(0x20, 0x20);
    m_.w8(0x35CF, m_.r8(0x35CF) + 0x21);         // (its carry: the BIOS's clock)
    m_.sti();
}

// --- the heap ---------------------------------------------------------------------
// Blocks: +0 next, +4 previous, +8 size, +0Ch the owner (the caller's EBX),
// +10h in use, +12h ABCDh; the data from +14h. [0] heads the list (low
// memory, then extended).

uint32_t Demo::alloc(uint32_t eax) {
    if (!eax) return 0;
    uint32_t esi = m_.r32(0);
    eax = ((eax + 3) & ~3u) + 0x14;
    for (;;) {
        if (!(m_.r8(esi + 0x10) & 1) && m_.r32(esi + 8) >= eax) {
            m_.w32(esi + 0x0C, 0);
            const uint32_t size = m_.r32(esi + 8);
            m_.w32(esi + 8, eax - 0x14);
            const uint32_t edi = (esi + eax + 3) & ~3u;
            m_.w32(edi + 4, esi);
            m_.w32(edi + 8, size - eax);
            m_.w16(edi + 0x12, 0xABCD);
            m_.w32(edi, m_.r32(esi));
            m_.w32(esi, edi);
            m_.w8(edi + 0x10, 0);
            m_.w8(esi + 0x10, 1);
            m_.w8(0x2EE37, 0);
            return esi + 0x14;
        }
        esi = m_.r32(esi);
        if (esi == 0xFFFFFFFFu) return 0;
    }
}

void Demo::free(uint32_t eax) {
    if (!eax) return;
    uint32_t esi = eax - 0x14;
    if (m_.r16(esi + 0x12) != 0xABCD) return;
    eax = m_.r32(esi + 4);
    if (eax != 0xFFFFFFFFu && m_.r16(eax + 0x12) == 0xABCD && m_.r8(eax + 0x10) == 0) {
        // the previous block free: this one into it (its next's back link
        // written even when there is none)
        const uint32_t ebx = m_.r32(esi);
        m_.w32(eax, ebx);
        m_.w32(ebx + 4, eax);
        m_.w32(eax + 8, m_.r32(eax + 8) + m_.r32(esi + 8) + 0x14);
        esi = eax;
    }
    eax = m_.r32(esi);
    if (eax != 0xFFFFFFFFu && m_.r16(eax + 0x12) == 0xABCD && m_.r8(eax + 0x10) == 0) {
        const uint32_t ebx = m_.r32(eax);
        m_.w32(esi, ebx);
        if (ebx != 0xFFFFFFFFu) m_.w32(ebx + 4, esi);
        m_.w32(esi + 8, m_.r32(esi + 8) + m_.r32(eax + 8) + 0x14);
    }
    m_.w8(esi + 0x10, 0);
}

// --- main ----------------------------------------------------------------------------

void Demo::main() {
    m_.w8(0x2EFFC, m_.r8(0x2EFFC) ^ 1);
    for (int i = 0; i < 0x8C; i++) waitFrame();
    modeX();
    // the screen's address into the code that draws the ellipse
    for (uint32_t a : {0x3DE5u, 0x3DEFu, 0x3DF9u, 0x3E03u, 0x3E6Eu, 0x3E78u, 0x3E82u, 0x3E8Cu})
        m_.w32(a, m_.r32(0xC86) + 0x8A3D);
    for (uint32_t a : {0x3C8Bu, 0x3C95u, 0x3CB3u, 0x3CBDu, 0x3D50u, 0x3D5Au, 0x3D78u, 0x3D82u})
        m_.w32(a, kVram + 0x228F);
    m_.w8(0x328D9, 0x40);
    if (m_.r8(0x32073) != 0) {
        m_.w32(0x332F2, 0x33300);
        playerLoad();
    }
    m_.cli();
    out(0x21, in(0x21) | 2);
    m_.sti();
    logo();
    for (int i = 0; i < 0x23; i++) waitFrame();
    waitFrame();
    palette(0x1E6F, 0, 0x10);
    setStart(0xA500);
    outw(0x3D4, 0x2813);
    m_.cli();
    m_.w32(0x35D2, irq0Vector_);
    m_.w16(0x3558, m_.r16(0x1E));
    m_.w16(0x3BA7, m_.r16(0x1E));
    setIrq0(0x354E);
    m_.sti();
    playerStart();
    setPit();
    m_.w32(0x1B4D, alloc(0x990));
    words();
    biosTimer();
    free(m_.r32(0x1B4D));
    if (m_.r8(0x3F1B) != 1) {
        const uint32_t p = alloc(0x300);
        if (p) {
            m_.w32(0x265D, p);
            title();
            if (m_.r8(0x3F1B) != 1) {
                screen();
                writer();
            }
        }
    }
    biosTimer();
    playerStop();
    m_.cli();
    out(0x21, in(0x21) & 0xFD);
    m_.sti();
    exitToDos();
}

void Demo::exitToDos() {
    m_.vga.setMode(3);
    m_.exit();
}

// 0BF4h: mode 13h by the BIOS, then unchained with 480-line timing (CRTC
// table at 0C24h), all of video memory cleared
void Demo::modeX() {
    m_.vga.setMode(0x13);
    outw(0x3C4, 0x0604);
    outw(0x3C4, 0x0100);
    out(0x3C2, 0xE3);
    outw(0x3C4, 0x0300);
    out(0x3D4, 0x11);
    out(0x3D5, in(0x3D5) & 0x7F);
    for (int i = 0; i < 11; i++) outw(0x3D4, m_.r16(0xC24 + 2 * i));
    outw(0x3C4, 0x0F02);
    m_.w32(0xC86, kVram);
    for (uint32_t i = 0; i < 0x3E80; i++) m_.w32(kVram + 4 * i, 0);
}

// 35D6h: the picture (four planes interleaved at 26950h) to BAE0h on
void Demo::logo() {
    const uint32_t ebx = m_.r32(0xC86) + 0xBAE0;
    for (int p = 0; p < 4; p++) {
        mapMask((uint8_t)(1 << p));
        uint32_t esi = 0x26950 + p, edi = ebx;
        for (int i = 0; i < 0x19A0; i++, esi += 4) m_.w8(edi++, m_.r8(esi));
    }
}

// --- the words ------------------------------------------------------------------------

// 1EFBh: five words (2089h: their pictures, 209Dh: their widths) turning
// about the vertical: the phase at 35D1h (from the timer) says whether the
// word comes in (0) or goes (1)
void Demo::words() {
    for (;;) {
        waitDisplay();
        setStart(0xA500);
        waitRetrace();
        palette(0x1E6F, 0, 0x10);
        outw(0x3D4, 0x2813);
        waitFrame();
        out(0x3C8, 0);
        for (int i = 0; i < 0x30; i++) out(0x3C9, 0);
        outw(0x3D4, 0x2C13);
        mapMask(0x0F);
        for (uint32_t i = 0; i < 0x2940; i++) m_.w32(m_.r32(0xC86) + 4 * i, 0);
        setStart(0);
        const uint32_t ebx = m_.r32(0x2085);
        m_.w32(0x1CA9, m_.r32(ebx * 4 + 0x2089));
        m_.w32(0x1BF9, m_.r32(ebx * 4 + 0x209D) >> 1);
        m_.w32(0xC8A, m_.r32(0xC86));
        m_.w32(0x1E6B, m_.r32(0xC86) + 0x5280);
        // coming in: the colours brighten with the time
        do {
            flip();
            out(0x3C8, 1);
            const int32_t b = ((int32_t)(int16_t)m_.r16(0x2083) + 0x3FFF) >> 8;
            for (uint32_t eax = 7; !(eax & 0x40); eax += 8) {
                const uint8_t v = (uint8_t)((eax * (uint32_t)b) >> 6);
                out(0x3C9, v), out(0x3C9, v), out(0x3C9, v);
            }
            wordsClear();
            wordsErase0();
            wordsProject();
            wordsDraw();
            if (in(0x60) == 1) {
                m_.w8(0x3F1B, 1);
                return;
            }
        } while (m_.r8(0x35D1) == 0);
        // going: they darken
        do {
            flip();
            out(0x3C8, 1);
            uint16_t bx = (uint16_t)(0x3FFF - m_.r16(0x2083));
            int32_t b = (int16_t)bx;
            if (bx >= 0x4000) b = 0;
            b >>= 8;
            for (uint32_t eax = 7; !(eax & 0x40); eax += 8) {
                const uint8_t v = (uint8_t)((eax * (uint32_t)b) >> 6);
                out(0x3C9, v), out(0x3C9, v), out(0x3C9, v);
            }
            wordsClear();
            wordsErase1();
            wordsProject();
            wordsDraw();
            if (in(0x60) == 1) {
                m_.w8(0x3F1B, 1);
                return;
            }
        } while (m_.r8(0x35D1) == 1);
        m_.w32(0x2085, m_.r32(0x2085) + 1);
        if (m_.r32(0x2085) >= 5) return;
    }
}

void Demo::wordsClear() {
    const uint32_t edi = m_.r32(0x1B4D);
    for (uint32_t i = 0; i < 0x264; i++) m_.w32(edi + 4 * i, 0x80000000u);
}

// 1B64h: for each column of the word (-w..w), where it lands on the screen
// and how tall it is, for the angle at 2083h
void Demo::wordsProject() {
    m_.w32(0x1BF1, (uint32_t)(int32_t)(int16_t)sine(m_.r16(0x2083)));
    m_.w32(0x1BF5, (uint32_t)(int32_t)(int16_t)cosine(m_.r16(0x2083)));
    uint32_t edi = m_.r32(0x1B4D);
    int32_t ebp = -m_.s32(0x1BF9);
    do {
        const int32_t ebx = (int32_t)(m_.r32(0x1BF1) * (uint32_t)ebp + 0x7FFF00) >> 8;
        int32_t eax = (int32_t)((int64_t)(int32_t)(m_.r32(0x1BF5) * (uint32_t)ebp) / ebx);
        m_.w32(edi, (uint32_t)eax), edi += 4;
        m_.w32(0x1BE9, (uint32_t)eax);
        eax = (int32_t)((int64_t)0xEFFE2 / ebx);
        m_.w32(edi, (uint32_t)eax), edi += 4;
        ebp++;
    } while (ebp < m_.s32(0x1BF9));
    int32_t eax = m_.s32(m_.r32(0x1B4D));
    if (eax >= m_.s32(0x1BE9)) {
        const int32_t t = m_.s32(0x1BE9);
        m_.w32(0x1BE9, (uint32_t)eax);
        eax = t;
    }
    m_.w32(0x1BED, (uint32_t)eax);
}

// 1BFDh: the columns, each drawn at its x (and at the x before when one
// was skipped), scaled to its height
void Demo::wordsDraw() {
    m_.w16(0x1CB1, 0x132);
    m_.w32(0x1CB3, 0x80000000u);
    m_.w32(0x1CAD, m_.r32(0x1CA9));
    uint32_t esi = m_.r32(0x1B4D);
    do {
        uint32_t eax = m_.r32(esi);
        esi += 4;
        if (eax != 0x80000000u && eax != m_.r32(0x1CB3)) {
            eax--;
            if (eax != m_.r32(0x1CB3)) wordsColumn(eax, esi);
            eax++;
            m_.w32(0x1CB3, eax);
            wordsColumn(eax, esi);
        }
        esi += 4;
        m_.w32(0x1CAD, m_.r32(0x1CAD) + 0x3C);
        m_.w16(0x1CB1, m_.r16(0x1CB1) - 1);
    } while (m_.r16(0x1CB1) != 0);
}

void Demo::wordsColumn(uint32_t eax, uint32_t esi) {
    mapMask((uint8_t)(1 << (eax & 3)));
    eax = (uint32_t)((int32_t)eax >> 2);
    uint32_t ecx = m_.r32(esi) << 1;
    if (!ecx) return;
    uint32_t edi = eax + m_.r32(0xC8A) + 0x2968;
    edi -= ecx * 44;
    wordsScale(edi, m_.r32(0x1CAD), ecx);
}

// 1CB7h: a 60-pixel column (ESI) drawn ECX tall (rows 58h apart). Taller:
// each source pixel the quotient times (an unrolled run entered through a
// jump displacement the code patches at 1D22h), once more as the
// remainder adds up. Shorter: pixels skipped (the step patched at 1D44h).
void Demo::wordsScale(uint32_t edi, uint32_t esi, uint32_t ecx) {
    if (ecx >= 0x3C) {
        const uint32_t q = ecx / 0x3C, edx = ecx % 0x3C;
        int32_t acc = (int32_t)(edx >> 1);
        m_.w8(0x1D22, (uint8_t)(((10 - q) << 2) - 0x37));
        const int8_t disp = (int8_t)m_.r8(0x1D22);
        const int writes = (0x1D14 - (0x1D23 + disp)) / 4;   // the run's pairs from where it is entered
        for (int n = 0; n < 0x3C; n++) {
            const uint8_t al = m_.r8(esi++);
            for (int k = 0; k < writes; k++) m_.w8(edi, al), edi += 0x58;
            acc -= (int32_t)edx;
            if (acc < 0) {
                acc += 0x3C;
                m_.w8(edi, al), edi += 0x58;
            }
        }
    } else {
        const uint32_t q = 0x3C / ecx, edx = 0x3C % ecx;
        int32_t ebp = (int32_t)(edx >> 1);
        m_.w32(0x1D44, q - 1);
        const uint32_t step = m_.r32(0x1D44);
        for (uint32_t n = ecx; n; n--) {
            m_.w8(edi++, m_.r8(esi++));
            edi += 0x57;
            ebp -= (int32_t)edx;
            if (ebp < 0) {
                esi++;
                ebp += (int32_t)ecx;
            }
            esi += step;
        }
    }
}

// 1D4Bh, 1DF7h: what the last frame drew there, cleared
void Demo::wordsErase1() {
    uint32_t edi = m_.r32(0xC8A);
    int32_t eax = m_.s32(0x1BED) + 0x98;
    if (eax < 0) eax = 0;
    edi += ((uint32_t)eax >> 2) + 0x1028;
    mapMask(0x0F);
    for (int i = 0; i < 0x91; i++, edi += 0x58)
        for (int k = 0; k < 12; k++) m_.w8(edi + k, 0);
    edi = m_.r32(0xC8A);
    eax = m_.s32(0x1BE9) - 0xA0;
    if (eax >= 0) eax = 0;
    edi += (uint32_t)(eax >> 2) + 0x1074;
    for (int i = 0; i < 0x91; i++, edi += 0x58)
        for (int k = 0; k < 8; k++) m_.w8(edi + k, 0);
    edi = m_.r32(0xC8A);
    m_.w32(0x1BE9, m_.r32(0x1BE9) >> 4);
    if (!m_.r32(0x1BE9)) return;
    const uint32_t ebx = (0x16 - m_.r32(0x1BE9)) << 2;
    edi += 0x1F18;
    for (int i = 0; i < 0x3C; i++) {
        for (uint32_t k = 0; k < m_.r32(0x1BE9); k++) m_.w32(edi, 0), edi += 4;
        edi += ebx;
    }
}

void Demo::wordsErase0() {
    mapMask(0x0F);
    uint32_t edi = m_.r32(0xC8A);
    m_.w32(0x1BE9, m_.r32(0x1BE9) >> 4);
    m_.w32(0x1BE9, m_.r32(0x1BE9) + 2);
    const uint32_t ebx = (0x16 - m_.r32(0x1BE9)) << 2;
    edi += 0x1050;
    for (int i = 0; i < 0x91; i++) {
        for (uint32_t k = 0; k < m_.r32(0x1BE9); k++) m_.w32(edi, 0), edi += 4;
        edi += ebx;
    }
}

// --- ASSEMBLY '94 ------------------------------------------------------------------------

// 20B1h: [214Eh] colours of [245Ah] x (40h - EBP) + [245Eh] x EBP, over 40h,
// into [265Dh]. Entered at 20DFh each colour has its own second colour;
// at 2115h (the jump at 214Ah patched) all share the first.
void Demo::fade(uint32_t ebp) {
    const uint32_t ebx0 = ebp;
    ebp = 0x40 - ebp;
    m_.w32(0x2156, ebx0);
    m_.w32(0x2152, m_.r32(0x245E));
    uint32_t edi = m_.r32(0x265D), esi = m_.r32(0x245A);
    uint32_t ecx = m_.r32(0x214E);
    uint16_t dx = 0, bx = 0;
    bool second = true;
    for (;;) {
        if (second) {
            uint32_t s = m_.r32(0x2152);
            m_.w32(0x2152, s + 3);
            const uint32_t k = m_.r32(0x2156);
            dx = (uint16_t)((m_.r8(s++) & 0x3F) * k);
            m_.w16(0x212C, (uint16_t)((m_.r8(s++) & 0x3F) * k));
            bx = (uint16_t)((m_.r8(s++) & 0x3F) * k);
        }
        uint32_t eax = (m_.r8(esi++) & 0x3F) * ebp;
        eax = (eax & 0xFFFF0000u) | (uint16_t)(eax + dx);
        m_.w8(edi++, eax >> 6);
        eax = (m_.r8(esi++) & 0x3F) * ebp;
        eax = (eax & 0xFFFF0000u) | (uint16_t)(eax + m_.r16(0x212C));
        m_.w8(edi++, eax >> 6);
        eax = (m_.r8(esi++) & 0x3F) * ebp;
        eax = (eax & 0xFFFF0000u) | (uint16_t)(eax + bx);
        m_.w8(edi++, eax >> 6);
        if (--ecx == 0) return;
        second = m_.r32(0x214A) == 0x20DF;
    }
}

// 3949h: the title picture (53890h, four planes interleaved) faded in from
// white, held, its palette set; with the 140 Hz timer (3BA2h) from here on
void Demo::title() {
    setIrq0(0x3BA2);
    m_.w32(0x3EF8, 2);
    m_.w16(0x354C, 0x214A);
    setPit();
    outw(0x3D4, 0x2813);
    setStart(0);
    uint32_t edi = m_.r32(0xC86);
    m_.w32(0x1E6B, edi);
    m_.w32(0xC8A, edi + 0x4B00);
    mapMask(0x0F);
    for (uint32_t i = 0; i < 0x2580; i++) m_.w32(m_.r32(0xC86) + 4 * i, 0);
    waitFrame();
    out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) out(0x3C9, 0);
    outw(0x3D4, 0x4009);
    for (int p = 0; p < 4; p++) {
        mapMask((uint8_t)(1 << p));
        uint32_t d = m_.r32(0xC86), s = 0x53890 + p;
        for (int i = 0; i < 0x9600; i++, s += 4) m_.w8(d++, m_.r8(s));
    }
    in(0x3DA);                                  // the overscan colour
    out(0x3C0, 0x31);
    out(0x3C0, 0xFA);
    const uint32_t white = alloc(0x300);
    if (!white) return;
    m_.w32(0x3B1A, white);
    m_.w32(0x245E, white);
    for (int i = 0; i < 0x300; i++) m_.w8(white + i, (uint8_t)(0x3F - m_.r8(0x3649 + i)));
    for (uint32_t ebp = 0x40; ebp; ebp--) {
        waitDisplay();
        fade(ebp);
        waitRetrace();
        palette(m_.r32(0x265D), 0, 0x100);
    }
    m_.w32(0x214A, 0x2115);
    free(m_.r32(0x3B1A));
    waitFrame();
    palette(0x3649, 0, 0x100);
    for (int i = 0x8C; i; i--) {
        waitFrame();
        if (in(0x60) == 1) {
            m_.w8(0x3F1B, 1);
            return;
        }
    }
}

// --- the invitation screen ------------------------------------------------------------

// 2462h: the title fades to black; the screen (13D50h, four planes
// interleaved) drawn, its frame (8 x 0Dh dwords a row, A3h rows) filled,
// scrolled in from the side (pel panning), its palette faded in
void Demo::screen() {
    m_.w32(0x245E, 0x2325);
    for (uint32_t ebp = 0; ebp != 0x41; ebp++) {
        waitDisplay();
        fade(ebp);
        waitRetrace();
        palette(m_.r32(0x265D), 0, 0x100);
    }
    m_.w32(0x214E, 0x10);
    in(0x3DA);
    out(0x3C0, 0x31);
    out(0x3C0, 0);
    out(0x3C8, 0);
    for (int n = 0xFF; n; n--) {
        const uint32_t esi = m_.r32(0x245E);
        for (int k = 0; k < 3; k++) out(0x3C9, m_.r8(esi + k));
    }
    outw(0x3D4, 0x2813);
    outw(0x3D4, 0x4109);
    out(0x3D4, 0x11);
    out(0x3D5, in(0x3D5) & 0x7F);
    outw(0x3D4, 0x1001);
    playerPoll();
    for (int p = 0; p < 4; p++) {
        mapMask((uint8_t)(1 << p));
        copyPlanes(0x13D50 + p);
    }
    playerPoll();
    mapMask(0x0F);
    uint32_t edi = m_.r32(0xC86) + 0xB55;
    for (int r = 0; r < 0xA3; r++) {
        for (int k = 0; k < 0x0D; k++) m_.w32(edi, 0x08080808u), edi += 4;
        m_.w8(edi, 0x08), edi += 1;
        edi += 0x1B;
    }
    {
        uint32_t ebx = 0x3F;
        auto step = [&](uint32_t b) {                  // 1AF3h
            waitDisplay();
            setStart((uint16_t)(b >> 2));
            waitRetrace();
            hpan((uint16_t)((b & 3) << 1));
            playerPoll();
        };
        step(ebx);
        palette(0x22DA, 0x80, 0x20);
        for (;;) {
            m_.w32(0x2661, m_.r32(0x2661) + 1);
            ebx = m_.r32(0x2665) - m_.r32(0x2661);
            if ((int32_t)ebx < 0) {
                m_.w32(0x2661, (uint32_t)-m_.s32(0x2661));
                ebx -= m_.r32(0x2661);
                m_.w32(0x2661, (uint32_t)(m_.s32(0x2661) >> 1));
                m_.w8(0x2669, m_.r8(0x2669) - 1);
                if (m_.r8(0x2669) == 0) break;
            }
            m_.w32(0x2665, ebx);
            step((uint32_t)((int32_t)ebx >> 2));
        }
        step(0);
    }
    outw(0x3D4, 0x4F01);
    m_.w32(0x245A, 0x215D);
    for (int32_t ebp = 0x40; ebp >= 0; ebp--) {
        waitDisplay();
        fade((uint32_t)ebp);
        waitRetrace();
        palette(m_.r32(0x265D), 1, 0x10);
    }
    out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) out(0x3C9, m_.r8(0x215A + i));
    free(m_.r32(0x265D));
}

void Demo::copyPlanes(uint32_t esi) {
    uint32_t edi = m_.r32(0xC86);
    for (int r = 0; r < 0xF0; r++)
        for (int k = 0; k < 0x50; k++, esi += 4) m_.w8(edi++, m_.r8(esi));
}

// --- the text writer ---------------------------------------------------------------------

// 30D7h: the text (2684h) letter by letter into a buffer ([342Ah]), each
// letter fading in over 12 steps, the buffer's changed dwords to the
// screen; the ellipse turning; Esc fades the palette and the music out
void Demo::writer() {
    for (uint32_t a = 0x13D50; a < 0x13D50 + 0x12C00; a += 4) m_.w32(a, m_.r32(a) & 0x07070707u);
    if (m_.r8(0x2EFFC) == 0) {
        outw(0x3C4, 0x0E04);
        m_.w32(0x342A, m_.r32(0xC86) + 0x2080);
        m_.w32(0x3B9E, 0xC8);
    } else {
        const uint32_t buf = alloc(0x19C80);
        if (!buf) return;
        m_.w32(0x342A, buf);
        m_.w32(0x342E, buf + 0xCE40);
        for (uint32_t i = 0; i < 0x6720; i++) m_.w32(buf + 4 * i, 0x08080808u);
    }
    const uint32_t pts = alloc(0x320);
    if (!pts) return;
    m_.w32(0x3EF2, pts);
    for (uint32_t i = 0; i < 0xC8; i++) m_.w32(pts + 4 * i, 0);
    m_.w8(0xB99, 0x0D);
    m_.w8(0x3C4B, m_.r8(0x3F1C) & 1);
    const uint32_t slots = alloc(0x48);
    if (!slots) return;
    m_.w32(0x3421, slots);
    for (uint32_t i = 0; i < 0x12; i++) m_.w32(slots + 4 * i, 0);

    enum { Restart, Reset, Frame, Read, Show };
    int at = Restart;
    for (;;) {
        switch (at) {
        case Restart:                           // 31A0h
            m_.w32(0x3410, 0x2684);
            [[fallthrough]];
        case Reset:                             // 31ABh
            m_.w8(0x3420, 0xFF);
            m_.w32(0x3418, 0);
            m_.w32(0x341C, 0xFFFFED40u);
            [[fallthrough]];
        case Frame: {                           // 31C6h: a frame (the timer's flag)
            for (;;) {
                const int8_t f = (int8_t)m_.r8(0x3429);
                if (f == 0) {
                    free(m_.r32(0x3421));
                    return;
                }
                if (f < 0 && in(0x60) == 1) m_.w8(0x3429, 0x40);
                if (m_.r8(0x3EF7) == 1) break;
                m_.flagWait(0x3EF7, 1);         // one step of time; then the test again
                if (m_.r8(0x3EF7) == 1) break;
            }
            m_.w8(0x3EF7, 0);
            if ((int8_t)m_.r8(0x3429) >= 0) {
                waitRetrace();
                out(0x3C8, 0);
                const uint32_t ebp = m_.r8(0x3429);
                for (int i = 0; i < 0x2EE; i++) out(0x3C9, (uint8_t)((m_.r8(0x215A + i) * ebp) >> 6));
                m_.w8(0x328D9, (uint8_t)ebp);
                m_.w8(0x3429, m_.r8(0x3429) - 1);
            }
            at = Read;
            break;
        }
        case Read: {                            // 3234h: the next command
            uint32_t esi = m_.r32(0x3410);
            uint8_t al = m_.r8(esi++);
            if (al == 0) {                      // a new line from x
                for (;;) {
                    m_.w32(0x3418, m_.r8(esi));
                    m_.w8(0x3420, m_.r8(0x3420) + 1);
                    m_.w32(0x341C, m_.r32(0x341C) + 0x12C0);
                    m_.w32(0x3410, m_.r32(0x3410) + 2);
                    if (m_.r32(0x341C) >= 0xCE40) {
                        m_.w32(0x341C, 0xBB80);
                        m_.w8(0x3420, 0x0A);
                    }
                    esi = m_.r32(0x3410);
                    al = m_.r8(esi++);
                    if (al != 0) break;
                }
            }
            if (al == 0xFF) {                   // a pause of N x 8 frames
                m_.w32(0x3410, m_.r32(0x3410) - 1);
                m_.w32(0x3414, m_.r32(0x3414) - 1);
                if (m_.r32(0x3414) == 0) {
                    m_.w32(0x3410, m_.r32(0x3410) + 3);
                    at = Frame;
                    break;
                }
                if ((int32_t)m_.r32(0x3414) < 0) m_.w32(0x3414, (uint32_t)m_.r8(esi) << 3);
                at = Show;
                break;
            }
            if (al == 0xFE) {                   // the page cleared
                writerClear();
                m_.w32(0x3410, m_.r32(0x3410) + 2);
                at = Reset;
                break;
            }
            if (al == 0xFD) {
                at = Restart;
                break;
            }
            // a letter: into the next of the 12 slots
            int idx = -1;
            for (int k = 0; k < 0x30; k++)
                if (m_.r8(0x2F8F + k) == al) {
                    idx = k;
                    break;
                }
            const uint32_t slot = m_.r32(0x3421) + m_.r32(0x3425);
            if (idx >= 0) {
                m_.w32(slot, m_.r32(0x342A) + m_.r32(0x3418) + m_.r32(0x341C) + 0x54);
                m_.w32(0x3418, m_.r32(0x3418) + m_.r8(0x2FBF + idx) + 1);
                m_.w16(slot + 4, (uint16_t)(idx | (uint8_t)(m_.r8(0x3420) << 4 | 0x0C) << 8));
            } else {
                m_.w32(0x3418, m_.r32(0x3418) + 6);
                m_.w32(slot, 0);
                m_.w16(slot + 4, 0);
            }
            m_.w32(0x3425, m_.r32(0x3425) + 6);
            if (m_.r32(0x3425) >= 0x48) {
                m_.w32(0x3425, 0);
                m_.w32(0x3418, m_.r32(0x3418) & 0xFF);
            }
            at = Show;
            break;
        }
        case Show:                              // 3371h
            for (int k = 0; k < 12; k++) writerGlyphs(m_.r32(0x3421) + 6 * k);
            writerShow();
            m_.w32(0x3410, m_.r32(0x3410) + 1);
            at = Frame;
            break;
        }
    }
}

// 33A3h: a slot's letter, the fade step its low nibble counts down: the
// glyph's pixels above the step's mask written into the buffer
void Demo::writerGlyphs(uint32_t ebp) {
    uint32_t edi = m_.r32(ebp);
    const uint8_t bl = m_.r8(ebp + 5);
    if (!(bl & 0x0F)) return;
    const uint32_t eax = m_.r8(ebp + 4);
    m_.w8(ebp + 5, bl - 1);
    uint32_t ebx = (0x0C - (bl & 0x0F)) << 4;
    const uint32_t width = m_.r8(eax + 0x2FBF);
    ebx *= width;
    m_.w32(0x3401, width);
    ebx += m_.r32(width * 4 + 0x30AF);
    uint32_t esi = m_.r32(eax * 4 + 0x2FEF);
    for (int row = 0; row < 0x0E; row++) {
        for (uint32_t k = 0; k < width; k++) {
            const int8_t a = (int8_t)m_.r8(esi++), b = (int8_t)m_.r8(ebx);
            if (a > b) m_.w8(edi, (uint8_t)(a - b));
            ebx++, edi++;
        }
        const uint32_t w = m_.r32(0x3401);
        edi += 0x140 - w;
        esi += 0x140 - w;
    }
}

// 3432h: the text area cleared from the bottom up, then the top down
void Demo::writerClear() {
    for (uint32_t ebp = 0x0E; ebp; ebp--) {
        writerShow();
        waitRetrace();
        uint32_t ebx = 0x0F - ebp;
        uint32_t edi = m_.r32(0x342A) + 0x11D4 - ebx * 5 * 64;
        if (ebx > 0x0B) ebx = 0x0B;
        for (; ebx; ebx--) {
            for (int k = 0; k < 0x35; k++) m_.w32(edi, 0x08080808u), edi += 4;
            edi += 0x132C;
        }
    }
    for (uint32_t ebp = 0x0A; ebp; ebp--) {
        writerShow();
        waitRetrace();
        const uint32_t ebx0 = 0x0B - ebp;
        uint32_t edi = m_.r32(0x342A) + 0x54 + ebx0 * 75 * 64;
        for (uint32_t ebx = ebp; ebx; ebx--) {
            for (int k = 0; k < 0x35; k++) m_.w32(edi, 0x08080808u), edi += 4;
            edi += 0x132C;
        }
    }
}

// 34CAh: the buffer's dwords that changed since the last call (the copy at
// [342Eh]) to the screen, a dword's four bytes to the four planes
void Demo::writerShow() {
    if (m_.r8(0x2EFFC) == 0) return;
    out(0x3C4, 2);
    uint32_t esi = m_.r32(0x342A), edi = m_.r32(0x342E), ecx = 0x3390;
    bool zf = true;
    for (;;) {
        // repe cmpsd
        while (ecx) {
            zf = m_.r32(esi) == m_.r32(edi);
            esi += 4, edi += 4, ecx--;
            if (!zf) break;
        }
        if (zf) break;
        esi -= 4;
        const uint32_t ebp = 0x3BB0 - ecx + m_.r32(0xC86);
        zf = ebp == 0;                          // (the flags of the add)
        for (int p = 0; p < 4; p++) {
            out(0x3C5, (uint8_t)(1 << p));
            m_.w8(ebp, m_.r8(esi++));
        }
    }
    const uint32_t a = m_.r32(0x342A), b = m_.r32(0x342E);
    for (uint32_t i = 0; i < 0x3390; i++) m_.w32(b + 4 * i, m_.r32(a + 4 * i));
}

// --- the ellipse ------------------------------------------------------------------------------

// 3B1Eh: 100 points ([3EF2h], each its last place) on an ellipse whose
// four phases (3EDAh) move by the speeds at 3EEAh
void Demo::ellipse() {
    if (m_.r8(0x3C4B) == 0) return;
    for (int k = 0; k < 4; k++)
        m_.w16(0x3EDA + 2 * k, (uint16_t)(m_.r16(0x3EDA + 2 * k) + (int8_t)m_.r8(0x3EEA + k)));
    m_.w32(0x3EE2, m_.r32(0x3EDA));
    m_.w32(0x3EE6, m_.r32(0x3EDE));
    m_.w32(0x3DD7, m_.r32(0x3B9E));
    if (m_.r8(0x2EFFC) != 0) ellipseDraw();
}

// 3C4Ch: each point erased (its four mirror images: colour's high nibble
// cleared) and drawn at its new place (+10h), through the read map
void Demo::ellipseDraw() {
    out(0x3C4, 2);
    m_.w8(0x3DD6, in(0x3C5));
    out(0x3CE, 4);
    uint32_t esi = m_.r32(0x3EF2);
    auto rmw = [&](uint32_t imm, int32_t ebx, int32_t ebp, bool add) {
        const uint32_t a = (uint32_t)(ebx + ebp) + m_.r32(imm);
        m_.w8(a, add ? (uint8_t)(m_.r8(a) + 0x10) : (uint8_t)(m_.r8(a) & 0x0F));
    };
    do {
        uint32_t eax = m_.r32(esi);
        esi += 4;
        int32_t ebx = (int16_t)eax;
        int32_t ecx = (int32_t)eax >> 16, ebp = ecx;
        out(0x3C5, (uint8_t)(1 << (ecx & 3)));
        out(0x3CF, (uint8_t)(ecx & 3));
        ebx >>= 2, ebp >>= 2;
        rmw(0x3C8B, ebx, ebp, false);
        ebx = -ebx;
        rmw(0x3C95, ebx, ebp, false);
        ecx = -ecx;
        ebp = ecx >> 2;
        out(0x3CF, (uint8_t)(ecx & 3));
        out(0x3C5, (uint8_t)(1 << (ecx & 3)));
        rmw(0x3CB3, ebx, ebp, false);
        ebx = -ebx;
        rmw(0x3CBD, ebx, ebp, false);
        // the new place
        int16_t di = (int16_t)sine((uint16_t)(m_.r16(0x3EE2) << 6));
        di = (int16_t)(di + (int16_t)cosine((uint16_t)(m_.r16(0x3EE6) << 6)));
        di = (int16_t)(di >> 7);
        int16_t si = (int16_t)sine((uint16_t)(m_.r16(0x3EE4) << 6));
        si = (int16_t)(si + (int16_t)cosine((uint16_t)(m_.r16(0x3EE8) << 6)));
        const int32_t x = ((int32_t)si * 5) >> 9;
        ebx = (int32_t)di * 5 * 64;
        ecx = ebp = x;
        m_.w32(esi - 4, (uint32_t)x << 16 | (uint16_t)ebx);
        out(0x3C5, (uint8_t)(1 << (ecx & 3)));
        out(0x3CF, (uint8_t)(ecx & 3));
        ebx >>= 2, ebp >>= 2;
        rmw(0x3D50, ebx, ebp, true);
        ebx = -ebx;
        rmw(0x3D5A, ebx, ebp, true);
        ecx = -ecx;
        ebp = ecx >> 2;
        out(0x3CF, (uint8_t)(ecx & 3));
        out(0x3C5, (uint8_t)(1 << (ecx & 3)));
        rmw(0x3D78, ebx, ebp, true);
        ebx = -ebx;
        rmw(0x3D82, ebx, ebp, true);
        m_.w16(0x3EE4, (uint16_t)(m_.r16(0x3EE4) + (int8_t)m_.r8(0x3EEF)));
        m_.w16(0x3EE2, (uint16_t)(m_.r16(0x3EE2) + (int8_t)m_.r8(0x3EEE)));
        m_.w16(0x3EE8, (uint16_t)(m_.r16(0x3EE8) + (int8_t)m_.r8(0x3EF1)));
        m_.w16(0x3EE6, (uint16_t)(m_.r16(0x3EE6) + (int8_t)m_.r8(0x3EF0)));
        m_.w32(0x3DD7, m_.r32(0x3DD7) - 1);
    } while (m_.r32(0x3DD7) != 0);
    out(0x3C5, m_.r8(0x3DD6));
}

}  // namespace asm94
