// Mikko Sairio's "Player 1.68r" (2EDD0h-31FA0h), its GUS half, playing on
// the port's mixer: a 4-channel module (a ProTracker module packed: 31
// sample headers, the order list, patterns packed into bytes and unpacked
// to 5 bytes a note, the samples' bytes XORed with 25h) played by the
// music timer's interrupt (GUS timer 1's in the original). Each channel
// has two voices (+39h: 0-3, 10h-13h).
//
// Its variables (offsets in the flat segment):
//   31FC8h tempo      3289Ch the timer's count for it   328D7h tick  328D8h speed
//   328C0h orders     328C4h patterns   328C8h this pattern   328CCh row
//   328CDh order      328CFh channels   328D3h song length    328D9h volume
//   32074h samples, 30h each: +0 start (less 1), +4 end, +8
//          finetune x 2, +0Ah loop length, +0Ch volume, +0Eh loop start
//          (addresses in the mixer's sample memory)
//   32644h channels, 40h each: the sample's 0Eh bytes, +0Ch volume, +10h
//          tone portamento's target, +12h period, +14h frequency, +16h a
//          start to play from (-1: none), +20h effect, +21h parameter, +22h
//          flags (1: a new period, 4: vibrato), +23h vibrato, +24h its
//          place, +29h sample, +2Ah the volume sent, +2Ch loop start, +30h
//          note, +32h the frequency sent, +34h a delayed note, +39h voice
#include <cstdio>
#include <utility>

#include "demo.h"

namespace asm94 {

namespace {
void notReached(uint32_t a) { std::fprintf(stderr, "asm94: player code %05Xh not ported\n", a); }
}  // namespace

// --- loading ---------------------------------------------------------------------------

void Demo::playerLoad() {
    loadClear();
    loadModule();
    loadInit();
}

void Demo::loadClear() {
    m_.w32(0x2FEBA, 0x20);
    for (uint32_t i = 0; i < 0x174; i++) m_.w32(0x32074 + 4 * i, 0);
    uint32_t edi = m_.r32(0x328C4);
    for (int i = 0; i < 0x2000; i++) {          // notes: no sample, no note (FFh: no volume)
        m_.w16(edi, 0xFF00), m_.w8(edi + 2, 0x00), m_.w16(edi + 3, 0xFF00);
        edi += 5;
    }
    for (uint32_t i = 0; i < 0x20; i++) m_.w32(m_.r32(0x328C0) + 4 * i, 0);
    m_.w8(0x328D8, 6);
    m_.w8(0x31FC8, 0x7D);
    m_.w8(0x328D3, 1);
    for (uint32_t i = 0; i < 0x80; i++) m_.w32(0x32644 + 4 * i, 0);
    for (uint8_t k = 0; k < 8; k++) m_.w8(0x3267D + 0x40 * k, k);
}

void Demo::loadModule() {
    m_.w32(0x2FEBA, 0x20);
    const uint32_t mod = m_.r32(0x332F2);
    m_.w8(0x328CF, m_.r8(mod + 0xF9));
    m_.w16(0x328D1, (uint16_t)(1 << ((m_.r8(0x328CF) - 1) & 31)));
    m_.w8(0x328D3, m_.r8(mod + 0xF8));
    uint32_t ecx = m_.r8(0x328D3);
    uint32_t esi = mod + 0xFA;
    m_.w32(0x2FCAB, esi + ecx);
    uint32_t edi = m_.r32(0x328C0);
    uint8_t bl = 0;
    for (; ecx; ecx--) {                        // the orders; the highest pattern
        const uint8_t al = m_.r8(esi++);
        if (al < 0x40 && !(bl > al)) bl = al;
        m_.w8(edi++, al);
    }
    const uint32_t patterns = (bl & 0x3F) + 1u;
    m_.w32(0x2FCAF, m_.r32(0x328C4));
    m_.w32(0x2FCB3, (m_.r8(0x328CF) * patterns) << 6);
    unpackPatterns();
    // the samples: their headers to 32074h, their bytes to the mixer
    edi = 0x32074;
    esi = mod;
    m_.w8(0x2FDF8, 0x1F);
    do {
        auto be16 = [&](uint32_t a) { return (uint32_t)(m_.r8(a) << 8 | m_.r8(a + 1)); };
        const uint32_t len = be16(esi) << 1;
        m_.w32(0x328B0, len);
        if (len) {
            uint32_t eax = m_.r32(0x2FEBA) - 1;
            m_.w32(edi, eax);
            eax += be16(esi + 4) << 1;
            m_.w32(edi + 0x0E, eax);
            const uint32_t ebx = be16(esi + 6) << 1;
            if (ebx == 2) {
                m_.w16(edi + 0x0A, 0);
                m_.w32(edi + 4, m_.r32(0x328B0) + m_.r32(edi));
            } else {
                m_.w16(edi + 0x0A, ebx);
                m_.w32(edi + 4, eax + ebx);
            }
            m_.w8(edi + 0x0C, m_.r8(esi + 3));
            m_.w16(edi + 8, (uint16_t)((int16_t)(int8_t)(m_.r8(esi + 2) << 4) >> 3));
            // 2FDFDh: the bytes un-XORed in place, then to the mixer
            const uint32_t src = m_.r32(0x2FCAB);
            for (uint32_t i = 0; i < len; i++) m_.w8(src + i, m_.r8(src + i) ^ 0x25);
            m_.w32(0x2FCAB, src + len);
            upload(src);
        }
        edi += 0x30;
        esi += 8;
        m_.w8(0x2FDF8, m_.r8(0x2FDF8) - 1);
    } while (m_.r8(0x2FDF8));
}

// 2FE3Bh: a byte FFh: an empty note; 80h + n: the note so far, then n
// more empty ones (C0h + n: n more of it); 40h + n: note n + 0Ch; else the
// byte and the next: the effect and its parameter. A new note's sample is
// the low 6 bits of the byte that ended the last.
void Demo::unpackPatterns() {
    uint32_t edi = m_.r32(0x2FCAF), esi = m_.r32(0x2FCAB);
    uint32_t ecx = 0x1F400, ebx = 0;
    uint8_t al = m_.r8(esi++);
    bool fresh = true;
    for (;;) {
        if (fresh) {
            ebx = 0x3D00 | (al & 0x3F);
            fresh = false;
        }
        if (--ecx == 0) {
            notReached(0x2FEAB);
            break;
        }
        al = m_.r8(esi++);
        bool store = false, end = false;
        if (al == 0xFF) {
            store = true;
        } else if (!(al & 0xC0)) {
            const uint8_t dh = m_.r8(esi++);
            ebx = (ebx & 0xFFFF) | (uint32_t)(al | dh << 8) << 16;
            ecx--;
            continue;
        } else if (al & 0x40) {
            if (!(al & 0x80)) {
                ebx = (ebx & ~0xFF00u) | (uint32_t)(uint8_t)((al & 0x3F) + 0x0C) << 8;
                continue;
            }
            m_.w32(edi, ebx);
            const uint32_t n = al & 0x3F;
            edi += n * 5;
            m_.w32(0x2FCB3, m_.r32(0x2FCB3) - n);
            if (m_.r32(0x2FCB3) == 0) end = true;
            al = 0;
            fresh = true;
        } else {
            store = true;
        }
        if (store) {
            m_.w32(edi, ebx);
            edi += 5;
            m_.w32(0x2FCB3, m_.r32(0x2FCB3) - 1);
            if (m_.r32(0x2FCB3) == 0) end = true;
            fresh = true;
        }
        if (end) break;
    }
    m_.w32(0x2FCAB, esi);
}

// 2FEBEh: [328B0h] bytes from ESI to the sample memory at [2FEBAh] on
void Demo::upload(uint32_t esi) {
    m_.cli();
    m_.mixer().load(m_.r32(0x2FEBA), &m_.mem[esi], m_.r32(0x328B0));
    m_.sti();
    m_.w32(0x2FEBA, m_.r32(0x2FEBA) + m_.r32(0x328B0));
}

void Demo::loadInit() {
    m_.w8(0x328D7, 6);
    m_.w8(0x328CD, 0);
    m_.w8(0x328CC, 0);
    const uint32_t ebx = m_.r8(m_.r32(0x328C0)) * m_.r8(0x328CF) * 5u << 6;
    m_.w32(0x328C8, m_.r32(0x328C4) + ebx);
    m_.w16(0x328D4, 0xFFFF);
    m_.w8(0x328E0, 0), m_.w8(0x328E1, 0), m_.w8(0x328E3, 0), m_.w8(0x328E2, 0);
    const uint32_t eax = m_.r8(0x31FC8) * 2u - 0x40;
    m_.w16(0x3289C, m_.r16(m_.r32(0x3289E) + eax));
}

// --- start, stop, the timer's poll ---------------------------------------------------

void Demo::playerStart() {
    if (m_.r8(0x32073) == 0) return;
    m_.w8(0x31B06, 0);
    m_.w8(0x328D7, m_.r8(0x328D8));
    for (uint32_t a : {0x328CCu, 0x328E0u, 0x328E1u, 0x328E3u, 0x328E2u, 0x32899u, 0x32898u, 0x332F6u}) m_.w8(a, 0);
    m_.cli();
    irq11Vector_ = 0x31EE7;                     // 2F6DFh
    uint32_t edi = 0x32644;
    for (uint32_t n = m_.r8(0x328CF); n; n--, edi += 0x40) {
        m_.w8(edi + 0x2B, 0xFF);
        m_.w16(edi + 0x32, 0xFFFF);
    }
    volumes();
    startTimer();
    m_.sti();
}

void Demo::playerStop() {
    if (m_.r8(0x32073) == 0) return;
    m_.cli();
    stopTimer();                                // 2F716h
    irq11Vector_ = m_.r32(0x31FAC);
    m_.sti();
    m_.w8(0x328D8, 6);
    m_.w8(0x31FC8, 0x7D);
}

void Demo::playerPoll() {
    if (m_.r8(0x32073) == 0) return;
    if (m_.r8(0x328D9) != m_.r8(0x328DA)) volumes();
    if (m_.r8(0x328D8) == 0) m_.w8(0x332F6, 1);
}

void Demo::volumes() {
    for (uint32_t k = 0; k < 8; k++) volume(0x32666 + 0x40 * k);
    m_.w8(0x328DA, m_.r8(0x328D9));
}

// 31662h: the channel's volume (ESI - 16h) x the music's (328D9h) / 64
void Demo::volume(uint32_t esi) {
    m_.w8(esi + 8, (uint8_t)((m_.r8(esi - 0x16) * m_.r8(0x328D9)) >> 6));
}

// the timer at [3289Ch] (80 us units to 256), its IRQ ([32896h]) unmasked
void Demo::startTimer() {
    m_.cli();
    m_.mask(m_.r8(0x32896), false);
    m_.startMusicTimer((uint8_t)m_.r16(0x3289C));
    m_.sti();
}

// the timer stopped; 3012Fh: the voices silenced
void Demo::stopTimer() {
    m_.cli();
    m_.stopMusicTimer();
    m_.mixer().stopAll();
    m_.sti();
}

// --- the interrupt ------------------------------------------------------------------------

// 31EE7h: the timer restarted, its count set anew when the tempo changed;
// a tick every 4th interrupt (2nd above tempo 7Dh). (An interrupt left
// from a stopped timer is only acknowledged.)
void Demo::musicIrq() {
    if (m_.musicTimerOn()) {
        m_.rearmMusicTimer();
        const uint8_t tempo = m_.r8(0x31FC8);
        if (m_.r8(0x31EE4) != tempo) {
            m_.w8(0x31EE4, tempo);
            m_.setMusicTimer((uint8_t)m_.r16(0x3289C));
            m_.w8(0x31EE6, tempo > 0x7D ? 1 : 3);
        }
        m_.w8(0x31EE5, m_.r8(0x31EE5) + 1);
        if (!(m_.r8(0x31EE5) & m_.r8(0x31EE6))) tick();
    }
    if (m_.r8(0x32896) > 7) m_.eoi();           // the slave's, then the master's
    m_.eoi();
    m_.sti();
}

// --- the tick ------------------------------------------------------------------------------

void Demo::tick() {
    m_.w16(0x3289A, m_.r16(0x3289C));
    m_.w8(0x328D7, m_.r8(0x328D7) - 1);
    const uint32_t nch = m_.r8(0x328CF);
    if (m_.r8(0x328D7) == 0) {
        // a new row
        m_.w8(0x328D7, m_.r8(0x328D8));
        uint32_t esi = m_.r32(0x328C8) + m_.r8(0x328CC) * nch * 5;
        m_.w8(0x30F3A, 0xFF);
        for (;;) {
            m_.w8(0x30F3A, m_.r8(0x30F3A) + 1);
            const uint32_t ch = m_.r8(0x30F3A);
            if (ch == m_.r8(0x328CF)) break;
            uint32_t ebx;
            if (m_.r8(0x32899) != 0) {          // a pattern delay: the row not read again
                esi += 2;
                ebx = ch << 6;
            } else {
                const uint16_t w = m_.r16(esi + 2);
                const uint8_t eff = (uint8_t)w, prm = (uint8_t)(w >> 8);
                if ((prm & 0xF0) == 0xD0 && (eff == 0x23 || eff == 0x0E)) {
                    // a note delayed (EDx): kept for later
                    ebx = ch << 6;
                    m_.w16(ebx + 0x32678, m_.r16(esi));
                    esi += 2;
                    m_.w8(ebx + 0x3267A, m_.r8(esi + 2));
                    m_.w16(ebx + 0x32664, m_.r16(esi));
                    esi += 3;
                    continue;
                }
                uint8_t al = m_.r8(esi++);
                if (al) newSample(al, ch);
                al = m_.r8(esi++);
                if (al < 0x3D) newNote(al, ch, esi, 0);
                ebx = ch << 6;
            }
            const uint8_t vol = m_.r8(esi + 2);
            if (vol != 0xFF) {
                m_.w8(ebx + 0x32650, vol);
                m_.w8(ebx + 0x3266E, (uint8_t)((vol * m_.r8(0x328D9)) >> 6));
            }
            m_.w16(ebx + 0x32664, m_.r16(esi));
            esi += 3;
        }
        if (m_.r8(0x32899) == 0) {
            uint32_t s = 0x32664;
            for (uint32_t ecx = nch; ecx; ecx--) {
                uint32_t e = s, c = ecx;
                rowEffect(e, c);
                s += 0x40;
            }
        }
        m_.w8(0x328CC, m_.r8(0x328CC) + 1);
        if (m_.r8(0x32898)) {
            m_.w8(0x32899, m_.r8(0x32898));
            m_.w8(0x32898, 0);
        }
        if (m_.r8(0x32899)) {
            m_.w8(0x32899, m_.r8(0x32899) - 1);
            if (m_.r8(0x32899)) m_.w8(0x328CC, m_.r8(0x328CC) - 1);
        }
        if (m_.r8(0x328E0) & 2) {
            m_.w8(0x328CC, m_.r8(0x328E1));
            m_.w8(0x328E1, 0);
            m_.w8(0x328E0, m_.r8(0x328E0) & 0xFD);
        }
        if ((m_.r8(0x328CC) & 0x40) || (m_.r8(0x328E0) & 1)) nextPattern();
    }
    // every tick: the effects, the voices
    uint32_t esi = 0x32664;
    for (uint32_t ecx = nch; ecx; ecx--) {
        voice_ = m_.r8(esi + 0x19) & 31;
        const uint16_t ax = m_.r16(esi);
        esi += 2;
        m_.w8(esi, m_.r8(esi) & 0xFB);
        tickEffect(esi, ecx, ax);
        esi -= 0x22;
        if (m_.r8(esi + 0x22) & 1) period(esi);
        // 3113Ah: the voice
        const int sh = (int)((m_.r8(0x328CF) - ecx) & 0x1F);
        const uint16_t bit = (uint16_t)(1u << (sh & 15) | 1u >> ((16 - (sh & 15)) & 15));
        if (!(m_.r16(0x328D4) & (uint16_t)(1u << (sh % 16)))) notReached(0x31163);
        (void)bit;
        if (m_.r32(esi + 0x16) != 0xFFFFFFFFu) {
            // a note starts: the old voice ramped down, the other of the
            // channel's two voices started
            // started (31D12h, 31D4Ch: from +16h, looping from +2Ch to +4
            // if it has a loop length)
            rampVolume(0);
            m_.w8(esi + 0x39, m_.r8(esi + 0x39) ^ 0x10);
            voice_ = m_.r8(esi + 0x39) & 31;
            m_.mixer().start(voice_, m_.r32(esi + 0x16), m_.r32(esi + 0x2C), m_.r32(esi + 4), m_.r16(esi + 0x0A) != 0);
            m_.w16(esi + 0x32, 0xFFFF);
            m_.w32(esi + 0x16, 0xFFFFFFFFu);
        }
        const uint16_t f = m_.r16(esi + 0x14);
        if (f != m_.r16(esi + 0x32)) {
            m_.w16(esi + 0x32, f);
            m_.mixer().frequency(voice_, f);    // 31D36h
        }
        const uint16_t bx = m_.r16(m_.r8(esi + 0x2A) * 2u + 0x3326C);
        const uint16_t cur = m_.mixer().volume(voice_);
        if (cur != bx) {
            m_.mixer().holdVolume(voice_);
            rampTo(cur, bx);
        }
        esi += 0x60;
    }
}

// 31B07h: the next order (an order with bit 7 set skipped), its pattern
void Demo::nextPattern() {
    for (;;) {
        m_.w8(0x328CC, m_.r8(0x328E1));
        if (m_.r8(0x31B06) == 1) return;
        m_.w8(0x328CD, m_.r8(0x328CD) + 1);
        uint32_t eax = m_.r8(0x328CD);
        if (eax >= m_.r8(0x328D3)) {
            eax = 0;
            m_.w8(0x328CD, 0);
            m_.w8(0x332F6, 1);
        }
        const uint8_t al = m_.r8(m_.r32(0x328C0) + eax);
        if (al & 0x80) continue;
        m_.w32(0x328C8, m_.r32(0x328C4) + al * m_.r8(0x328CF) * 5u * 64u);
        m_.w8(0x328E1, 0);
        m_.w8(0x328E0, m_.r8(0x328E0) & 0xFE);
        return;
    }
}

// 31CD2h: sample EAX for channel EBX: its header to the channel
void Demo::newSample(uint32_t eax, uint32_t ebx) {
    eax &= 0x3F, ebx &= 0x0F;
    eax = (uint8_t)(eax - 1);
    ebx <<= 6;
    const uint32_t ch = ebx + 0x32644;
    m_.w8(ch + 0x29, (uint8_t)eax);
    const uint32_t hdr = (eax << 4) * 3 + 0x32074;
    for (int i = 0; i < 0x0E; i++) m_.w8(ch + i, m_.r8(hdr + i));
    m_.w32(ebx + 0x32670, m_.r32(hdr + 0x0E));
    m_.w8(ebx + 0x32666, 0);
    volume(ebx + 0x32666);
}

// 31BCDh: note AL for channel BL; ESI: the row's byte after the note (its
// effect: a tone portamento only sets the target)
void Demo::newNote(uint32_t eax, uint32_t ebx, uint32_t esi, uint32_t) {
    ebx &= 0x0F;
    m_.w16(0x328AE, (uint16_t)(m_.r16(0x328AE) | 1 << ebx));
    ebx <<= 3;
    m_.w8(ebx * 8 + 0x32668, 0);
    const uint8_t eff = m_.r8(esi);
    const uint32_t ch = ebx * 8 + 0x32644;
    const uint32_t edi = (eax << 4) + (uint32_t)(int32_t)m_.s16(ch + 8);
    m_.w16(ch + 0x30, (uint16_t)edi);
    const uint16_t ax = (uint16_t)(m_.r16(edi * 2 + 0x3294C) << 1);
    if (eff == 3 || eff == 0x17 || eff == 5) {
        m_.w16(ch + 0x10, ax);
        return;
    }
    m_.w16(ch + 0x3A, ax);
    m_.w16(ch + 0x12, ax);
    m_.w32(ch + 0x16, m_.r32(ch));
    m_.w16(ch + 0x1E, 0);
    m_.w8(ch + 0x22, (uint8_t)((m_.r8(ch + 0x22) & 0xFB) | 1));
}

// 31C60h: the period to a frequency (the table at [328BCh])
void Demo::period(uint32_t esi) {
    if (!(m_.r8(esi + 0x22) & 4)) m_.w16(esi + 0x14, m_.r16(m_.r16(esi + 0x12) + m_.r32(0x328BC)));
    m_.w8(esi + 0x22, m_.r8(esi + 0x22) & 0xFE);
}

// 31DA0h: a ramp to volume table entry AL from the voice's volume now
void Demo::rampVolume(uint8_t al) {
    const uint16_t bx = m_.r16(al * 2u + 0x3326C);
    m_.mixer().holdVolume(voice_);
    rampTo(m_.mixer().volume(voice_), bx);
}

// 31DCBh: from AX (the volume now) to BX: set at once if the high bytes
// agree, else a ramp between them, up or down
void Demo::rampTo(uint16_t ax, uint16_t bx) {
    if ((ax >> 8) == (bx >> 8)) {
        m_.mixer().setVolume(voice_, bx);
        return;
    }
    const bool down = !((ax >> 8) < (bx >> 8));
    if (down) std::swap(ax, bx);
    m_.mixer().ramp(voice_, (uint8_t)(ax >> 8), (uint8_t)(bx >> 8), down);
}

// --- the effects ------------------------------------------------------------------------------

// The row's: ESI at the channel's effect (+20h), its effect and parameter.
// Those this module uses (9, B, C, D, E, F) and the ones it does not
// reach report themselves.
bool Demo::rowEffect(uint32_t& esi, uint32_t& ecx) {
    (void)ecx;
    const uint16_t ax = m_.r16(esi);
    esi += 2;                                   // ESI: the channel's +22h
    const uint8_t eff = (uint8_t)ax;
    uint8_t ah = (uint8_t)(ax >> 8);
    switch (eff) {
    case 0x09: case 0x1F: {                     // 31578h: sample offset
        const uint32_t ebx = m_.r32(esi - 0x22) + (ax & 0xFF00);
        if (ebx < m_.r32(esi - 0x1E)) {
            m_.w32(esi - 0x22 + 0x16, ebx);
            m_.w8(esi, m_.r8(esi) | 1);
        }
        return true;
    }
    case 0x0B: case 0x12:                       // 3161Eh: position jump
        m_.w8(0x328E1, 0);
        ah--;
        if (!(m_.r8(0x328CD) <= ah)) m_.w8(0x332F6, 2);
        m_.w8(0x328CD, ah);
        m_.w8(0x328E0, m_.r8(0x328E0) | 1);
        return true;
    case 0x0C:                                  // 31648h: volume
        if (ah > 0x3F) ah = (int8_t)ah > 0x3F ? 0x3F : 0;
        m_.w8(esi - 0x16, ah);
        volume(esi);
        return true;
    case 0x0D: case 0x13:                       // 3167Dh: pattern break
        m_.w8(0x328E0, m_.r8(0x328E0) | 1);
        if (ah == 0) {
            m_.w8(0x328E1, 0);
        } else {
            m_.w8(0x328E1, ah & 0x0F);
            m_.w8(0x328E1, (uint8_t)(m_.r8(0x328E1) + (((ax & 0xF000) >> 0x0B) * 5)));
            if (m_.r8(0x328E1) > 0x3F) m_.w8(0x328E1, 0);
        }
        return true;
    case 0x0E:                                  // 3121Fh: E6x, EEx
        if ((ah >> 4) == 6) notReached(0x31809);
        if ((ah >> 4) == 0x0E) notReached(0x318C6);
        return true;
    case 0x0F: case 0x11:                       // 316CCh: speed or tempo
        if (ah < 0x20) {
            m_.w8(0x328D8, ah);
            m_.w8(0x328D7, ah);
        } else {
            m_.w8(0x31FC8, ah);
            const uint32_t eax = (((uint32_t)(int16_t)ax >> 7) & 0x1FE) - 0x40;
            m_.w16(0x3289C, m_.r16(m_.r32(0x3289E) + eax));
        }
        return true;
    case 0x24: {                                // 316E2h: tempo
        m_.w8(0x31FC8, ah);
        const uint32_t eax = (((uint32_t)(int16_t)ax >> 7) & 0x1FE) - 0x40;
        m_.w16(0x3289C, m_.r16(m_.r32(0x3289E) + eax));
        return true;
    }
    default:
        return true;
    }
}

// The tick's: ESI at the channel's flags (+22h), AX its effect, parameter
void Demo::tickEffect(uint32_t esi, uint32_t ecx, uint16_t ax) {
    const uint8_t eff = (uint8_t)ax;
    const bool first = m_.r8(0x328D7) == m_.r8(0x328D8);
    auto volSlide = [&](uint8_t ah) {           // 315CBh
        if (first) return;
        const uint8_t al = ah;
        ah >>= 4;
        if (ah) {
            m_.w8(esi - 0x16, (uint8_t)(m_.r8(esi - 0x16) + ah));
            if (m_.r8(esi - 0x16) >= 0x40) {
                m_.w8(esi - 0x16, 0x3F);
                m_.w16(esi - 2, 0);
            }
            volume(esi);
            return;
        }
        ah = al & 0x0F;
        const uint8_t v = (uint8_t)(m_.r8(esi - 0x16) - ah);
        m_.w8(esi - 0x16, v);
        if ((int8_t)v < 0) {
            m_.w8(esi - 0x16, 0);
            m_.w16(esi - 2, 0);
        }
        volume(esi);
    };
    switch (eff) {
    case 0x00: case 0x1A:                       // 312B0h: arpeggio
        if (ax >> 8) notReached(0x312B6);
        break;
    case 0x02: {                                // 313F8h: portamento down
        if (first) break;
        const uint16_t a = (uint16_t)((ax & 0xFF00) >> 5);
        m_.w16(esi - 0x10, (uint16_t)(m_.r16(esi - 0x10) + a));
        if (m_.r16(esi - 0x10) >= 0x38AE) m_.w16(esi - 0x10, 0x38B0);
        m_.w8(esi, m_.r8(esi) | 1);
        break;
    }
    case 0x03: case 0x05: case 0x17: {          // 3130Bh: tone portamento
        if (m_.r16(esi - 0x12) == 0) break;
        if (eff != 5 && (ax & 0xFF00)) m_.w8(esi - 0x13, (uint8_t)(ax >> 8));
        const uint16_t step = (uint16_t)(m_.r8(esi - 0x13) << 3);
        if (m_.r8(esi) & 2) notReached(0x31333);
        int16_t bx = m_.s16(esi - 0x10);
        const int16_t to = m_.s16(esi - 0x12);
        if (bx != to) {
            if (bx < to) {
                bx = (int16_t)(bx + step);
                if (bx > to) bx = to;
            } else {
                bx = (int16_t)(bx - step);
                if (bx < to) bx = to;
            }
            m_.w16(esi - 0x10, (uint16_t)bx);
            m_.w8(esi, m_.r8(esi) | 1);
        }
        const uint16_t a2 = m_.r16(esi - 2);
        if ((uint8_t)a2 == 5) volSlide((uint8_t)(a2 >> 8));
        break;
    }
    case 0x04: case 0x06: case 0x18: {          // 3142Dh: vibrato
        const uint8_t ah = (uint8_t)(ax >> 8);
        if (ah) {
            uint8_t al = m_.r8(esi + 1);
            if (ah & 0x0F) al = (uint8_t)((al & 0xF0) | (ah & 0x0F));
            if (ah & 0xF0) al = (uint8_t)((al & 0x0F) | (ah & 0xF0));
            m_.w8(esi + 1, al);
        }
        const uint32_t idx = (m_.r8(esi + 2) >> 2) & 0x1F;
        if (m_.r8(esi - 0x14) & 3) notReached(0x31461);
        const uint32_t depth = m_.r8(idx + 0x3324C);
        uint16_t a = (uint16_t)(((m_.r8(esi + 1) & 0x0F) * depth) >> 6);
        if ((int8_t)m_.r8(esi + 2) < 0) a = (uint16_t)-a;
        a = (uint16_t)(a << 1);
        a = (uint16_t)(a + m_.r16(esi - 0x10));
        m_.w8(esi + 2, (uint8_t)(m_.r8(esi + 2) + ((m_.r8(esi + 1) >> 2) & 0x3C)));
        m_.w16(esi - 0x0E, m_.r16(a + m_.r32(0x328BC)));
        m_.w8(esi, m_.r8(esi) | 5);
        const uint16_t a2 = m_.r16(esi - 2);
        if ((uint8_t)a2 == 6) volSlide((uint8_t)(a2 >> 8));
        break;
    }
    case 0x0A:                                  // 315CBh
        volSlide((uint8_t)(ax >> 8));
        break;
    case 0x0E: {                                // 31239h: the E commands
        uint8_t ah = (uint8_t)(ax >> 8);
        switch (ah >> 4) {
        case 9: {                               // 3188Dh: retrigger
            ah &= 0x0F;
            if (!ah) break;
            const uint8_t ticks = (uint8_t)(m_.r8(0x328D8) - m_.r8(0x328D7));
            if (!ticks) break;
            if (ticks % ah) break;
            m_.w32(esi - 0x0C, m_.r32(esi - 0x22));
            m_.w8(esi, m_.r8(esi) | 1);
            break;
        }
        case 0x0D: {                            // 3172Ch: the delayed note now
            ah &= 0x0F;
            if (ah != (uint8_t)(m_.r8(0x328D8) - m_.r8(0x328D7))) break;
            const uint32_t ch = (m_.r8(0x328CF) - ecx) & 0xFF;
            uint32_t s = esi + 0x12;
            const uint8_t sample = m_.r8(s++);
            if (sample) newSample(sample, ch);
            if (m_.r8(s + 1) != 0xFF) notReached(0x3176B);
            const uint8_t note = m_.r8(s++);
            if (note < 0x3D) newNote(note, ch, s, 0);
            break;
        }
        case 1: case 2: case 3: case 4: case 5: case 7: case 0x0A: case 0x0B: case 0x0C:
            notReached(0x31239);
            break;
        default: break;
        }
        break;
    }
    case 0x01: case 0x07: case 0x14: case 0x15: case 0x16: case 0x21: case 0x23:
        notReached(0x31A72);
        break;
    default: break;
    }
    // 31111h: the period's frequency changed?
    if (!(m_.r8(esi) & 4)) {
        const uint16_t f = m_.r16(m_.r16(esi - 0x10) + m_.r32(0x328BC));
        if (m_.r16(esi - 0x0E) != f) m_.w8(esi, m_.r8(esi) | 1);
    }
}

}  // namespace asm94
