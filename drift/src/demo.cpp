#include "demo.h"

namespace drift {

// --- the timer ------------------------------------------------------------------

void Demo::timer() {
    m_.w32(0x209A0, m_.r32(0x209A0) + 1);
    callback(m_.r32(0x2097C));
}

void Demo::callback(uint32_t state) {
    switch (m_.r32(0x20980 + state)) {
    case 0x21A0F: {                     // the set-up's spinner, in text mode (21AC5h)
        const uint32_t n = m_.r32(0x209A4) + 1;
        m_.w32(0x209A4, n);
        if (n & 7) break;
        uint32_t edi = 0xB8726 - kCodeBase;
        uint32_t esi = ((n >> 3) & 7) * 0x14 + 0x1F780;
        for (int r = 0; r < 4; r++, edi += 0x8C, esi += 0x8C)
            for (int k = 0; k < 5; k++, edi += 4, esi += 4) m_.w32(edi, m_.r32(esi));
        break;
    }
    case 0x21A27: {                     // the fire: brighter, or fading at 40h
        bool e;
        fireTick(posBelow(0x40, e) ? 0 : 1);
        break;
    }
    case 0x1B228: vectorTick(); break;
    case 0x1CA39: juliaTick(); break;
    case 0x21A43: juliaTick(), vectorTick(); break;
    case 0x21A4E: waveTick(), vectorTick(); break;
    case 0x21A59: vectorTick(), juliaTick(); break;
    default: break;
    }
}

// 21804h: CF (true) while the music has not passed POS; Esc as ZF
bool Demo::posBelow(uint32_t pos, bool& e) {
    const uint32_t p = player_.position();
    e = esc();
    return pos >= p;
}

bool Demo::posWait(uint32_t pos) {
    for (;;) {
        bool e;
        const bool below = posBelow(pos, e);
        if (e) return false;
        if (!below) return true;
        m_.waitIrq();
    }
}

// 21A64h: COUNT DAC bytes, STEP/STEPS of the way from FROM to TO, written
// from colour 0 after the next retrace, and kept at 20FB9h.
void Demo::fade(uint32_t from, uint32_t to, uint32_t steps, uint32_t count, uint32_t step) {
    m_.w32(0x212B9, count);
    const uint32_t a = (uint32_t)(((uint64_t)((steps - step) << 16)) / steps);
    const uint32_t b = (uint32_t)(((uint64_t)(step << 16)) / steps);
    m_.waitRetrace();
    m_.waitDisplay();
    m_.out8(0x3C8, 0);
    uint32_t dst = 0x20FB9;
    for (; m_.r32(0x212B9); m_.w32(0x212B9, m_.r32(0x212B9) - 1)) {
        const uint32_t v = (m_.r8(from) * a + m_.r8(to) * b) >> 16;
        m_.out8(0x3C9, (uint8_t)v);
        m_.w8(dst++, v);
        from++, to++;
    }
}

// 1B7A3h
void Demo::setPalette(uint32_t src, uint32_t count, uint8_t first) {
    m_.out8(0x3C8, first);
    for (; count; count--) m_.out8(0x3C9, m_.r8(src++));
}

// --- the program --------------------------------------------------------------------

void Demo::setup() {
    // 213A5h: what the menus leave (Gravis Ultrasound, 220h, IRQ 11)
    m_.vga.setMode(3);
    m_.w16(0xDC, 3);
    m_.w8(0xDD, 1);
    m_.w16(0xD8, 0xF0F0);
    m_.out8(0x3C8, 1);
    m_.out8(0x3C9, 0x10), m_.out8(0x3C9, 0x10), m_.out8(0x3C9, 0x15);
    m_.w8(0x209B8, 0x9C);
    m_.w32(0x209B0, 4);
    m_.w32(0x209B4, 6);
    m_.w16(0x20956, m_.r16(0x212BD));
    m_.w16(0x20954, m_.r16(0x212BF));
    m_.w16(0x2095A, 0x220);
    m_.w8(0x20959, m_.r8(0x212CD + 4));
    // 21570h: the player's set-up (function 1)
    {
        const uint16_t ax = m_.r16(0x20956) & m_.r16(0x20954);
        m_.w8(0x1F5D, (ax >> 8) & 0x3F);
        m_.w16(0x12E3, m_.r16(0x2095A));
        m_.w8(0x12E5, m_.r8(0x20959));
        player_.init();
    }
    // IRQ 0 to 219D0h; the PIT at 4297h (69.99 Hz)
    m_.w32(0x2095C, 0x57F);
    m_.irq0 = [this] { timer(); };
    m_.w32(0x20960, 0xF0000108);
    m_.out8(0x43, 0x36);
    m_.out8(0x40, 0x97);
    m_.out8(0x40, 0x42);
    m_.w32(0x2097C, 4);
    // the module: 39DF3h bytes from the heap, the S3M copied in, its samples made
    const uint32_t module = m_.r32(8);
    m_.w32(8, module + 0x39DF3);
    m_.w32(0x20950, module);
    for (uint32_t i = 0; i < 0x7890; i++) m_.w8(module + i, m_.r8(0x3D80 + i));
    makeSamples(module);
    // the selectors of A0000h and of the heap
    m_.w8(0x11B, 1), m_.w16(0x209AC, 0x98);
    m_.w8(0x11C, 1), m_.w16(0x209AE, 0xA0);
    heapBase_ = m_.r32(8);
    precalc();
    m_.w32(0x209A8, m_.r32(0x209A4));
    player_.load(module);
    // the text-mode palette (all black here) faded to the one at 20CB9h
    m_.out8(0x3C7, 0);
    for (uint32_t i = 0; i < 0x300; i++) m_.w8(0x209B9 + i, m_.in8(0x3C9));
    for (uint32_t s = 0; s <= 0x40; s++) fade(0x209B9, 0x20CB9, 0x40, 0x300, s);
    m_.w32(0x2097C, 0);
    m_.w16(0xDC, 0x13);
    m_.vga.setMode(0x13);
    player_.start();
}

void Demo::shutdown() {
    player_.stop();
    m_.out8(0x43, 0x36);
    m_.out8(0x40, 0);
    m_.out8(0x40, 0);
    m_.irq0 = nullptr;
    m_.w16(0xDC, 3);
    m_.vga.setMode(3);
}

void Demo::run() {
    setup();
    if (part1() && part2() && part3() && part4() && part5() && part6() && endScroller()) {
        while (true) {                  // until the song's end (position 1300h)
            bool e;
            const bool below = posBelow(0x1300, e);
            if (e || !below) break;
            m_.waitIrq();
        }
    }
    shutdown();
}

// --- the parts' entries ----------------------------------------------------------

bool Demo::part1() {
    m_.waitDisplay();
    m_.waitRetrace();
    m_.out8(0x3C8, 0);
    m_.out8(0x3C9, 0x3F), m_.out8(0x3C9, 0x3F), m_.out8(0x3C9, 0x3F);
    if (!posWait(1)) {
        m_.w32(0x2097C, 0);
        return false;
    }
    m_.w32(0x2097C, 8);
    const bool ok = fire();
    m_.w32(0x2097C, 0);
    return ok;
}

bool Demo::part2() {
    if (!posWait(0x80)) {
        m_.w32(0x2097C, 0);
        return false;
    }
    m_.w32(0x2097C, 0x0C);
    vectors();
    m_.w32(0x2097C, 0);
    return true;
}

bool Demo::part3() {
    if (!posWait(0x540)) {
        m_.w32(0x2097C, 0);
        return false;
    }
    m_.w32(0x2097C, 0x10);
    const bool ok = julia(m_.r32(8) + 0x10000);
    m_.w32(0x2097C, 0);
    return ok;
}

bool Demo::part4() {
    vectorsReset();
    m_.w32(0x2097C, 0x14);
    for (;;) {
        juliaStep();
        if (vectorsFlight()) {
            flip();
            return true;
        }
        flip();
        if (esc()) {
            m_.w32(0x2097C, 0);
            return false;
        }
    }
}

bool Demo::part5() {
    m_.w8(0x1C878, m_.r8(0x1C878) | 2);
    m_.w32(0x2097C, 0x18);
    for (;;) {
        juliaStep();
        if (wave()) {
            m_.w32(0x2097C, 0);
            return true;
        }
        vectorsFlight();
        flip();
        if (esc()) {
            m_.w32(0x2097C, 0);
            return false;
        }
    }
}

bool Demo::part6() {
    m_.w32(0x2097C, 0x1C);
    vectorsSpin();
    for (;;) {
        juliaStep();
        if (vectorsSpinFrame()) break;
        flip();
        if (esc()) return false;
    }
    flip();
    m_.w32(0x2097C, 0x0C);
    vectorsEnd();
    m_.w32(0x2097C, 0);
    return true;
}

}  // namespace drift
