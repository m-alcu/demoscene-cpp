// The music player (15000h-15D40h): an MXM module (Cubic Player's own
// format: 10 channels, instruments with volume envelopes, fadeout and
// auto-vibrato, a handful of effects) on the GUS, ticked by IRQ 0 with the
// PIT reprogrammed for each tick. Its variables are at EBP = 295BCh:
//
//   +00 master volume (40h)    +01 tick       +02 speed      +03 new row
//   +04 row                    +08 pattern pointer           +0C rows
//   +10 order                  +14 order to jump to (-1)
//   +18 pattern delay          +19.. the event being read (note,
//   instrument, effect, its parameter), +1E set by the note delay
//   +1F/+23 the old int 8      +2B ticks for the BIOS's 18.2 Hz
//   +2F this PIT period        +33 the clock's base   +37 in the player
//   +3B the tick's length      +3F left of it         +43 DS
//   +45 GUS port               +49 active voices      +4D tone porta
//   +4E.. the module's header (0x750 bytes): +52 orders, +56 restart,
//   +5A channels, +62 instruments, +66 speed, +67 tempo, +76/+7A the
//   period's range, +9E the order list, +19E instruments, +39E patterns
//   +79E volume table (256 words)       +9A0 channels (80h bytes each)
//   +1DA0 vibrato table (256 bytes)     +1DA0 also the timer's stack top
//
// The GUS's registers are written as the player does, one by one: the
// harness logs them, the tests compare them.
#include "demo.h"

namespace lasse {

// --- GUS access ------------------------------------------------------------------

void Demo::gusOut(uint32_t off, uint8_t v) { m_.out8((uint16_t)(off + m_.r32(BP + 0x45)), v); }

void Demo::gusReg8(uint8_t r, uint8_t v) {
    gusOut(0x103, r);
    gusOut(0x105, v);
}

void Demo::gusDelay() {
    const uint16_t p = (uint16_t)(0x107 + m_.r32(BP + 0x45));
    for (int i = 0; i < 7; i++) m_.in8(p);
}

void Demo::gusReg8w(uint8_t r, uint8_t v) {     // written twice, a delay between
    gusReg8(r, v);
    gusDelay();
    gusOut(0x105, v);
}

void Demo::gusReg16(uint8_t r, uint16_t v) {
    gusOut(0x103, r);
    m_.out16((uint16_t)(0x104 + m_.r32(BP + 0x45)), v);
}

uint8_t Demo::gusRead8(uint8_t r) {
    gusOut(0x103, r);
    return m_.in8((uint16_t)(0x105 + m_.r32(BP + 0x45)));
}

uint16_t Demo::gusRead16(uint8_t r) {
    gusOut(0x103, r);
    return m_.in16((uint16_t)(0x104 + m_.r32(BP + 0x45)));
}

void Demo::gusVoice(uint8_t v) { gusOut(0x102, v); }

void Demo::gusAddr(uint8_t r, uint32_t a) {
    gusReg16(r, (uint16_t)((a >> 7) & 0x1FFF));
    gusReg16((uint8_t)(r + 1), (uint16_t)(a << 9));
}

// 159EEh: reset, N active voices (14 at least), every voice stopped.
void Demo::gusInit(uint32_t n) {
    if ((n & 0xFF) < 0x0E) n = (n & ~0xFFu) | 0x0E;
    m_.w32(BP + 0x49, n);
    gusReg8(0x4C, 0);
    gusDelay();
    gusDelay();
    gusReg8(0x4C, 1);
    gusDelay();
    gusDelay();
    gusReg8(0x0E, (uint8_t)(((m_.r8(BP + 0x49) - 1) & 0xFF) | 0xC0));
    for (uint32_t c = 0; c < 0x20; c++) {
        gusVoice((uint8_t)c);
        gusReg16(0x09, 0);
        gusReg8w(0x00, 3);
        gusReg8w(0x0D, 3);
        gusReg8(0x06, 0x3F);
        gusDelay();
    }
    gusReg8(0x4C, 7);
    gusVoice(0);
    gusOut(0, 8);
}

void Demo::gusStart() {                 // 15BFDh
    if (!m_.r32(BP + 0x45)) return;
    gusInit(m_.r32(BP + 0x5A));
    gusVoice(0);
    gusOut(0, 9);
}

void Demo::gusStop() {                  // 15C1Ch
    if (m_.r32(BP + 0x45)) gusInit(0x0E);
}

// 15C2Dh: N bytes from SRC to DRAM 0, 16 at a time with interrupts off.
void Demo::upload(uint32_t src, uint32_t n) {
    if (!m_.r32(BP + 0x45)) return;
    n >>= 4;
    const uint16_t base = (uint16_t)m_.r32(BP + 0x45);
    uint32_t a = 0;
    for (; n; n--) {
        const bool f = m_.intFlag();
        m_.cli();
        m_.out8((uint16_t)(base + 0x103), 0x44);
        m_.out8((uint16_t)(base + 0x105), (uint8_t)(a >> 16));
        m_.out8((uint16_t)(base + 0x103), 0x43);
        do {
            m_.out16((uint16_t)(base + 0x104), (uint16_t)a);
            m_.out8((uint16_t)(base + 0x107), m_.r8(src++));
            a++;
        } while (a & 0x0F);
        m_.setIntFlag(f);
    }
}

// --- set-up ------------------------------------------------------------------------

// 1519Ch: the vibrato table (a sine's quarter at 28140h, mirrored, negated)
// and the volume table (linear to the GUS's logarithmic volume).
void Demo::tables() {
    const uint32_t t = BP + 0x1DA0;
    for (int i = 0; i < 64; i++) m_.w8(t + i, m_.r8(0x28140 + i));
    m_.w8(t + 64, 0x40);
    for (int i = 0; i < 63; i++) m_.w8(t + 65 + i, m_.r8(0x2817F - i));
    for (int i = 0; i < 128; i++) m_.w8(t + 128 + i, (uint8_t)-m_.r8(t + i));
    m_.w16(BP + 0x79E, 0);
    m_.w16(BP + 0x99E, 0xEFFF);
    for (uint32_t i = 1; i < 0x100; i++) {
        uint32_t d = 7;
        for (uint32_t b = i; b; b >>= 1) d++;
        uint32_t v = i << ((0x14 - d) & 31);
        v = ((v & 0xFFF) | d << 12) - 0x1000;
        m_.w16(BP + 0x79E + i * 2, v);
    }
}

// 15222h: the module's header to +4E (its pointers made absolute), the
// samples delta-decoded (once) and sent to the GUS, the tables.
void Demo::load(uint32_t mod) {
    m_.w8(BP, 0x40);
    m_.w32(BP + 0x45, 0x220);           // 15C72h: ULTRASND=220,... from the environment
    for (uint32_t i = 0; i < 0x750; i++) m_.w8(BP + 0x4E + i, m_.r8(mod + i));
    for (uint32_t i = 0; i < 0x180; i++) m_.w32(BP + 0x19E + 4 * i, m_.r32(BP + 0x19E + 4 * i) + mod);
    if (m_.r8(mod + 0x1A) & 4) {
        m_.w8(mod + 0x1A, m_.r8(mod + 0x1A) & 0xFB);
        uint32_t p = m_.r32(mod + 0x1C) + mod;
        uint8_t acc = 0;
        for (uint32_t n = m_.r32(mod + 0x20); n; n--, p++) {
            acc = (uint8_t)(acc + m_.r8(p));
            m_.w8(p, acc);
        }
    }
    upload(mod + m_.r32(mod + 0x1C), m_.r32(mod + 0x20));
    tables();
}

// 157ABh, 1589Fh: from ORDER; the timer hooked, the PIT at 65536 for now.
void Demo::play(uint32_t order) {
    m_.w32(BP + 0x14, order);
    m_.w32(BP + 0x10, order);
    m_.w32(BP + 0x04, 0);
    gusStart();
    for (uint32_t i = 0; i < 0x1000; i++) m_.w8(BP + 0x9A0 + i, 0);
    m_.w8(BP + 0x02, m_.r8(BP + 0x66));
    m_.w8(BP + 0x01, m_.r8(BP + 0x66) - 1);
    m_.w32(BP + 0x3B, 0x2D86BF / m_.r8(BP + 0x67));
    // 1589Fh
    m_.w16(BP + 0x43, 0x90);
    m_.w32(BP + 0x3F, 0);
    m_.w32(BP + 0x2B, 0);
    m_.w32(BP + 0x37, 0);
    m_.w32(BP + 0x2F, 0x10000);
    m_.w32(BP + 0x33, 0xFFFF0000u - m_.r32(BP + 0x3B));
    m_.w32(BP + 0x1F, 0x08);            // int 21h 3508h: the old vector (PMODE/W's default, 38h:8)
    m_.w16(BP + 0x23, 0x38);
    m_.irq0 = [this] { timer(); };
    m_.out8(0x43, 0x34);
    m_.out8(0x40, (uint8_t)m_.r32(BP + 0x2F));
    m_.out8(0x40, (uint8_t)(m_.r32(BP + 0x2F) >> 8));
}

void Demo::stopMusic() {                // 157F2h, 158F0h
    m_.irq0 = nullptr;
    m_.out8(0x43, 0x34);
    m_.out8(0x40, 0);
    m_.out8(0x40, 0);
    gusStop();
}

uint16_t Demo::position(uint32_t ret) {
    m_.posPoll(ret);
    return (uint16_t)(m_.r8(BP + 0x10) << 8 | m_.r8(BP + 0x04));
}

int32_t Demo::clock(uint32_t ret) {
    m_.clockPoll(ret);
    const bool f = m_.intFlag();
    m_.cli();
    m_.out8(0x43, 0);
    const uint8_t lo = m_.in8(0x40);
    const uint8_t hi = m_.in8(0x40);
    m_.setIntFlag(f);
    const uint32_t c = (uint32_t)(lo | hi << 8);
    return (int32_t)(0u - c + m_.r32(BP + 0x2F) + m_.r32(BP + 0x33));
}

// 15804h: IRQ 0. The clock's base moves on by the period just ended; the
// BIOS gets its 18.2 Hz; the PIT gets the next period (a tick's length in
// pieces of at most 65536); at a tick's end the player runs, interrupts on.
void Demo::timer() {
    const uint32_t per = m_.r32(BP + 0x2F);
    m_.w32(BP + 0x33, m_.r32(BP + 0x33) + per);
    m_.w32(BP + 0x2B, m_.r32(BP + 0x2B) + per);
    if (m_.r8(BP + 0x2D)) {
        m_.w8(BP + 0x2D, 0);
        m_.chainBiosTick();
    }
    m_.out8(0x20, 0x20);
    const uint32_t len = m_.r32(BP + 0x3B);
    uint32_t left = m_.r32(BP + 0x3F);
    left = left > 0x10000 ? left - 0x10000 : len;
    m_.w32(BP + 0x3F, left);
    const uint32_t now = left >= 0x10000 ? 0x10000 : left;
    m_.w32(BP + 0x2F, now);
    m_.out8(0x43, 0x34);
    m_.out8(0x40, (uint8_t)now);
    m_.out8(0x40, (uint8_t)(now >> 8));
    if (m_.r32(BP + 0x3F) == len && m_.r32(BP + 0x37) == 0) {
        m_.w32(BP + 0x37, 1);
        m_.sti();
        voices();
        tick();
        m_.cli();
        m_.w32(BP + 0x37, 0);
    }
}

// --- a row, a tick -------------------------------------------------------------------

int32_t Demo::clampPeriod(int32_t p) {
    if (!(p > m_.s32(BP + 0x76))) p = m_.s32(BP + 0x76);
    if (!(p < m_.s32(BP + 0x7A))) p = m_.s32(BP + 0x7A);
    return p;
}

// 152A5h: a period (4.12 octaves below 8000h) to a frequency factor, as
// the product of four table entries (one per nibble) at 28180h.
uint32_t Demo::pitch(int32_t p) {
    uint32_t a = (uint32_t)p + 0x8000;
    const uint32_t i3 = (a >> 12) & 15, i2 = (a >> 8) & 15, i1 = (a >> 4) & 15, i0 = a & 15;
    const uint32_t t = 0x28180;
    uint64_t r = m_.r32(t + i3 * 4 + 0x60);
    r = (uint32_t)((r * m_.r16(t + i2 * 2 + 0x40)) >> 15);
    r = (uint32_t)((r * m_.r16(t + i1 * 2 + 0x20)) >> 15);
    r = (uint32_t)((r * m_.r16(t + i0 * 2)) >> 15);
    return (uint32_t)r;
}

// 152F7h: the event at +19 (note, instrument, effect +1C/+1D) for channel DI.
void Demo::note() {
    const uint32_t di = DI;
    m_.w8(BP + 0x4D, 0);
    if (m_.r8(BP + 0x1C) == 3) m_.w8(BP + 0x4D, 1);
    uint32_t eax = m_.r8(BP + 0x1A);
    if ((eax & 0xFF) != 0 && !(eax > m_.r32(BP + 0x62))) m_.w8(di + 0x22, eax);
    if (m_.r8(di + 0x22) == 0) return;
    eax = m_.r8(BP + 0x19);
    if ((eax & 0xFF) != 0) {
        if ((eax & 0xFF) == 0x61) {          // key off
            m_.w8(di + 0x29, 0);
            return;
        }
        m_.w8(di + 0x44, eax);
        if (m_.r8(BP + 0x1C) == 0x31 && m_.r8(BP + 0x1D) != 0) return;
        eax = (eax & ~0xFFu) | ((eax - 1) & 0xFF);
        if (m_.r8(BP + 0x4D) == 1) {
            uint32_t ax = (eax << 8) + m_.r16(di + 0x27);
            ax = (0u - ax) & 0xFFFF;
            ax = (ax + 0x3000) & 0xFFFF;
            m_.w32(di + 0x37, (uint32_t)(int32_t)(int16_t)ax);
        } else {
            m_.w8(di + 0x0E, 1);
            const uint32_t edx = m_.r32(BP + ((m_.r8(di + 0x22) - 1) & 0xFF) * 4 + 0x19E);
            uint32_t ebx = m_.r8(edx + eax + 4);
            if (ebx >= m_.r32(edx)) return;
            ebx = (ebx << 4) + edx + 0x100;
            m_.w8(di, 1);
            m_.w8(di + 0x0F, 1);
            m_.w32(di + 0x01, m_.r32(ebx) & 0xFFFFFF);
            m_.w32(di + 0x09, m_.r32(ebx + 3) & 0xFFFFFF);
            m_.w32(di + 0x05, m_.r32(ebx + 6) & 0xFFFFFF);
            m_.w8(di + 0x0D, m_.r8(ebx + 9));
            if (m_.r8(BP + 0x1A) != 0) {
                m_.w32(di + 0x23, edx);
                m_.w8(di + 0x34, m_.r8(ebx + 0x0A));
                m_.w8(di + 0x35, m_.r8(ebx + 0x0B));
            }
            const uint16_t dx = m_.r16(ebx + 0x0C);
            m_.w16(di + 0x27, dx);
            uint32_t ax = ((eax << 8) + dx) & 0xFFFF;
            ax = (0u - ax) & 0xFFFF;
            ax = (ax + 0x3000) & 0xFFFF;
            const uint32_t per = (uint32_t)(int32_t)(int16_t)ax;
            m_.w8(di + 0x10, 0);
            m_.w32(di + 0x1A, per);
            m_.w32(di + 0x1E, per);
            m_.w32(di + 0x37, per);
        }
    }
    if (m_.r8(BP + 0x1A) == 0) return;
    if (m_.r8(BP + 0x1E) != 1) {
        m_.w8(di + 0x16, m_.r8(di + 0x34));
        m_.w8(di + 0x17, m_.r8(di + 0x34));
        m_.w8(di + 0x18, m_.r8(di + 0x35));
        m_.w8(di + 0x19, m_.r8(di + 0x35));
    }
    m_.w8(di + 0x29, 1);
    m_.w16(di + 0x2A, 0x8000);
    m_.w8(di + 0x2C, 0);
    m_.w8(di + 0x2D, 0);
    m_.w32(di + 0x2E, 0);
    m_.w16(di + 0x32, 0);
}

// 15510h: a tick. At a row's start (speed ticks, pattern delay) the row's
// events; every tick the slides, the note delay, then for each channel its
// envelope, fadeout, auto-vibrato, and the GUS values (+11 frequency, +13
// volume, +15 pan) that 15B00h sends on the next tick.
void Demo::tick() {
    const uint32_t chans = m_.r32(BP + 0x5A);
    m_.w8(BP + 0x03, 0);
    uint32_t di = BP + 0x9A0;
    for (uint32_t c = 0; c != chans; c++, di += 0x80) {
        m_.w8(di + 0x17, m_.r8(di + 0x16));
        m_.w8(di + 0x19, m_.r8(di + 0x18));
        m_.w32(di + 0x1E, m_.r32(di + 0x1A));
    }
    m_.w8(BP + 0x01, m_.r8(BP + 0x01) + 1);
    if (m_.r8(BP + 0x01) == m_.r8(BP + 0x02)) {
        m_.w8(BP + 0x01, 0);
        if (m_.r8(BP + 0x18) != 0) {
            m_.w8(BP + 0x18, m_.r8(BP + 0x18) - 1);
        } else {
            m_.w8(BP + 0x03, 1);
            m_.w32(BP + 0x04, m_.r32(BP + 0x04) + 1);
            bool next = true;
            if (m_.r32(BP + 0x14) == 0xFFFFFFFFu) {
                if (m_.r32(BP + 0x04) < m_.r32(BP + 0x0C)) next = false;
                else m_.w32(BP + 0x14, m_.r32(BP + 0x10) + 1);
            }
            if (next) {
                uint32_t o = m_.r32(BP + 0x14);
                if (!(o < m_.r32(BP + 0x52))) o = m_.r32(BP + 0x56);
                m_.w32(BP + 0x10, o);
                m_.w32(BP + 0x04, 0);
                m_.w32(BP + 0x14, 0xFFFFFFFFu);
                const uint32_t pat = m_.r8(BP + m_.r32(BP + 0x10) + 0x9E);
                uint32_t si = m_.r32(BP + pat * 4 + 0x39E);
                m_.w32(BP + 0x0C, m_.r32(si));
                m_.w32(BP + 0x08, si + 4);
            }
            uint32_t si = m_.r32(BP + 0x08);
            di = BP + 0x9A0;
            for (uint32_t c = 0; c != chans; c++, di += 0x80) {
                m_.w8(BP + 0x19, 0);
                m_.w32(BP + 0x1A, 0);
                m_.w8(di + 0x36, 0xFF);
                const uint8_t first = m_.r8(si);
                if (first == 0 || (first & 0x1F) != c) continue;
                const uint8_t flags = m_.r8(si++);
                if (flags & 0x20) {
                    m_.w8(BP + 0x19, m_.r8(si++));
                    m_.w8(BP + 0x1A, m_.r8(si++));
                }
                if (flags & 0x40) si++;
                if (flags & 0x80) {
                    m_.w8(BP + 0x1C, m_.r8(si++));
                    m_.w8(BP + 0x1D, m_.r8(si++));
                }
                m_.w8(BP + 0x1E, 0);
                DI = di;
                note();
                const uint8_t fx = m_.r8(BP + 0x1C);
                m_.w8(di + 0x36, fx);
                const uint8_t par = m_.r8(BP + 0x1D);
                switch (fx) {
                case 0x02: m_.w32(di + 0x3F, (uint32_t)par << 4); break;
                case 0x03: m_.w32(di + 0x3B, (uint32_t)par << 4); break;
                case 0x0C: m_.w8(di + 0x16, par), m_.w8(di + 0x17, par); break;
                case 0x0F: m_.w8(BP + 0x02, par); break;
                case 0x31: m_.w8(di + 0x43, par); break;
                case 0x32: m_.w8(BP + 0x18, par); break;
                default: break;
                }
            }
            m_.w32(BP + 0x08, si + 1);
        }
    }
    di = BP + 0x9A0;
    for (uint32_t c = 0; c != chans; c++, di += 0x80) {
        const uint8_t fx = m_.r8(di + 0x36);
        if (fx == 0x02) {                   // portamento down (a period up)
            if (m_.r8(BP + 0x03) == 0) {
                const int32_t p = clampPeriod((int32_t)(m_.r32(di + 0x1A) + m_.r32(di + 0x3F)));
                m_.w32(di + 0x1A, p);
                m_.w32(di + 0x1E, p);
            }
        } else if (fx == 0x03) {            // tone portamento
            if (m_.r8(BP + 0x03) == 0) {
                int32_t p = m_.s32(di + 0x1A);
                const int32_t to = m_.s32(di + 0x37), sp = m_.s32(di + 0x3B);
                if (p != to) {
                    if (p > to) {
                        p -= sp;
                        if (!(p >= to)) p = to;
                    } else {
                        p += sp;
                        if (!(p <= to)) p = to;
                    }
                    m_.w32(di + 0x1A, p);
                    m_.w32(di + 0x1E, p);
                }
            }
        } else if (fx == 0x31) {            // note delay
            if (m_.r8(BP + 0x03) == 0 && m_.r8(BP + 0x01) == m_.r8(di + 0x43)) {
                m_.w8(BP + 0x1E, 1);
                m_.w8(BP + 0x19, m_.r8(di + 0x44));
                m_.w8(BP + 0x1A, m_.r8(di + 0x22));
                m_.w8(BP + 0x1C, 0xFF);
                DI = di;
                note();
            }
        }
        // 15687h
        const uint32_t ins = m_.r32(di + 0x23);
        if (ins != 0) {
            uint32_t ax = (uint32_t)m_.r8(di + 0x17) * m_.r8(BP);
            ax = (ax >> 6) << 6;
            const uint32_t prod = (ax & 0xFFFF) * m_.r16(di + 0x2A);
            m_.w8(di + 0x17, (uint8_t)(prod >> 20));        // DX >> 4
            if (m_.r8(di + 0x29) == 0) {                     // fadeout after key off
                const uint16_t f = m_.r16(ins + 0x64), v = m_.r16(di + 0x2A);
                m_.w16(di + 0x2A, v >= f ? v - f : 0);
            }
            uint32_t ep = m_.r32(di + 0x2E);
            if (m_.r16(di + 0x32) != 0 && (uint8_t)ep == m_.r8(ins + 0x6D)) {
                ep = (ep & ~0xFFu) | m_.r8(ins + 0x6C);
                m_.w32(di + 0x2E, ep);
            }
            const uint32_t si = ins + ep * 4 + 0x6E;
            if ((uint8_t)ep == m_.r8(ins + 0x6A)) {
                const uint32_t v = (uint32_t)m_.r8(si + 2) * m_.r8(di + 0x17);
                m_.w8(di + 0x17, (uint8_t)(v >> 6));
            } else {
                const int16_t diff = (int16_t)(m_.r16(si + 6) - m_.r16(si + 2));
                const int32_t prod2 = (int32_t)diff * m_.s16(di + 0x32);
                const int16_t q = (int16_t)(prod2 / m_.s16(si));
                uint8_t al = (uint8_t)(q + m_.r8(si + 2));
                const uint32_t v = (uint32_t)al * m_.r8(di + 0x17);
                m_.w8(di + 0x17, (uint8_t)(v >> 6));
                uint16_t pos = m_.r16(di + 0x32);
                if (!(pos == 0 && m_.r8(di + 0x29) != 0 && (uint8_t)m_.r32(di + 0x2E) == m_.r8(ins + 0x6B))) {
                    pos++;
                    if (!(pos < m_.r16(si))) {
                        pos = 0;
                        m_.w32(di + 0x2E, m_.r32(di + 0x2E) + 1);
                    }
                }
                m_.w16(di + 0x32, pos);
            }
            // auto-vibrato
            uint32_t eax = (uint32_t)(uint16_t)((int16_t)(int8_t)m_.r8(BP + 0x1DA0 + m_.r8(di + 0x2C)) *
                                                (int8_t)m_.r8(ins + 0x68));
            eax >>= 4;
            const uint8_t sweep = m_.r8(ins + 0x67);
            if (m_.r8(di + 0x2D) < sweep) {
                const int16_t p2 = (int16_t)((int8_t)(uint8_t)eax * (int8_t)m_.r8(di + 0x2D));
                const int8_t q2 = (int8_t)(p2 / (int8_t)sweep);
                eax = (eax & ~0xFFFFu) | (uint16_t)(((p2 % (int8_t)sweep) & 0xFF) << 8 | (uint8_t)q2);
                m_.w8(di + 0x2D, m_.r8(di + 0x2D) + 1);
            }
            const int32_t vib = (int8_t)(uint8_t)(0u - eax);
            m_.w32(di + 0x1E, clampPeriod(vib + m_.s32(di + 0x1E)));
            m_.w8(di + 0x2C, m_.r8(di + 0x2C) + m_.r8(ins + 0x69));
        }
        // 15767h
        m_.w16(di + 0x13, m_.r16(BP + 0x79E + (uint32_t)m_.r8(di + 0x17) * 4));
        m_.w8(di + 0x15, m_.r8(di + 0x19) >> 4);
        const uint64_t f = (uint64_t)pitch(m_.s32(di + 0x1E)) * m_.r32(BP + 0x49);
        m_.w16(di + 0x11, (uint16_t)((uint32_t)(f / 0x1EE) & ~1u));
    }
}

// 15B00h: what the last tick decided, to the GUS: voices with a new note
// ramped down and stopped, a wait for every ramp to end, then for each
// voice the sample (start, end, position: a new note), the mode, pan,
// frequency, and a ramp to the volume.
void Demo::voices() {
    if (!m_.r32(BP + 0x45)) return;
    const uint32_t chans = m_.r32(BP + 0x5A);
    uint32_t di = BP + 0x9A0;
    for (uint32_t c = 0; c != chans; c++, di += 0x80) {
        if (m_.r8(di) != 0 && m_.r8(di + 0x0E) != 0) {
            gusVoice((uint8_t)c);
            gusReg8w(0x00, m_.r8(di + 0x0D) | 3);
            rampDown();
            m_.w8(di + 0x0E, 0);
        }
    }
    for (uint32_t c = 0; c != chans; c++) {
        gusVoice((uint8_t)c);
        while (!(gusRead8(0x8D) & 1)) {
        }
    }
    di = BP + 0x9A0;
    for (uint32_t c = 0; c != chans; c++, di += 0x80) {
        gusVoice((uint8_t)c);
        if (m_.r8(di) == 0) {
            rampDown();
        } else {
            if (m_.r8(di + 0x0F)) {
                gusAddr(0x02, m_.r32(di + 0x09));
                gusAddr(0x04, m_.r32(di + 0x05));
            }
            if (m_.r8(di + 0x10) != 0xFF) {
                uint32_t a = m_.r32(di + 0x01);
                if (!(a < m_.r32(di + 0x05))) a = m_.r32(di + 0x05) - 1;
                gusAddr(0x0A, a);
                const uint8_t ctl = gusRead8(0x80);
                gusReg8(0x00, (ctl & 0x40) | m_.r8(di + 0x0D));
            }
            gusRead8(0x80);
            gusReg8(0x0C, m_.r8(di + 0x15));
            gusReg16(0x01, m_.r16(di + 0x11));
            rampTo(m_.r16(di + 0x13));
        }
        m_.w8(di + 0x0F, 0);
        m_.w8(di + 0x10, 0xFF);
    }
}

// 15A7Ah: the volume to EDX: set at once if near, else a ramp (rate 3Fh,
// bounds 1000h-FC00h) up or down.
void Demo::rampTo(uint32_t edx) {
    uint32_t eax = gusRead16(0x89);
    uint8_t dir = 0;
    if (eax > edx) {
        std::swap(eax, edx);
        dir = 0x40;
    }
    edx -= eax;
    if (edx == 0) return;
    if (edx < 0x1000) {
        if (dir != 0x40) eax += edx;
        gusReg16(0x09, (uint16_t)eax);
        return;
    }
    edx += eax;
    if (eax < 0x1000) eax = 0x1000;
    if (edx > 0xFC00) edx = 0xFC00;
    gusReg8(0x07, (uint8_t)(eax >> 8));
    gusReg8(0x08, (uint8_t)(edx >> 8));
    gusReg8w(0x0D, dir);
}

void Demo::rampDown() {                 // 15AE0h
    gusReg8(0x07, 0x04);
    gusReg8(0x08, 0xFC);
    gusReg8w(0x0D, 0x40);
}

bool Demo::escape() {                   // 15D18h
    m_.frameCheck();
    if (snapAt-- == 0 && snap) snap();
    uint8_t al = m_.r8(0x2B462);
    if (al != 1) {
        for (;;) {
            if (!(m_.in8(0x64) & 1)) {
                al = 0;
                break;
            }
            al = m_.in8(0x60);
            if (al == 1) break;
        }
    }
    m_.w8(0x2B462, m_.r8(0x2B462) | al);
    return al != 0;
}

}  // namespace lasse
