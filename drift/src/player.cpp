#include "player.h"

namespace drift {

// --- GUS access -------------------------------------------------------------

void Player::voice() {
    setW(D, port() + 0x102);
    m_.out8((uint16_t)D, lo(A));
}

void Player::set8() {
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, lo(A));
    setW(D, (D & 0xFFFF) + 2);
    setLo(A, hi(A));
    m_.out8((uint16_t)D, lo(A));
}

void Player::set8twice() {
    const uint8_t r = lo(A), v = hi(A);
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, r);
    setW(D, (D & 0xFFFF) + 2);
    m_.out8((uint16_t)D, v);
    // 2150h: nine reads of 2x7 for a delay
    m_.out8((uint16_t)(D - 2), r);
    m_.out8((uint16_t)D, v);
    setLo(A, v), setHi(A, v);
}

void Player::set16() {
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, lo(A));
    setW(D, (D & 0xFFFF) + 1);
    setW(A, B);
    m_.out16((uint16_t)D, (uint16_t)A);
}

void Player::get16() {
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, lo(A));
    setW(D, (D & 0xFFFF) + 1);
    const uint8_t l = m_.in8((uint16_t)D), h = m_.in8((uint16_t)(D + 1));
    setW(A, l | h << 8);
}

void Player::get8() {
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, lo(A));
    setW(D, (D & 0xFFFF) + 2);
    setLo(A, m_.in8((uint16_t)D));
}

void Player::reset() {
    A = (A & ~0xFFFFu) | 0x004C, set8();
    A = (A & ~0xFFFFu) | 0x014C, set8();
    A = (A & ~0xFFFFu) | 0x0041, set8();
    A = (A & ~0xFFFFu) | 0x0045, set8();
    A = (A & ~0xFFFFu) | 0x0049, set8();
    A = (A & ~0xFFFFu) | 0xCF0E, set8();        // 14 + 2 voices active
    setW(D, port() + 6);
    setLo(A, m_.in8((uint16_t)D));
    setLo(A, 0x41), get8();
    setLo(A, 0x49), get8();
    setLo(A, 0x8F), get8();
    for (C = 0x20; C; C--) {
        setLo(A, (lo(C) - 1) & 0xFF);
        voice();
        A = (A & ~0xFFFFu) | 0x0300, set8();
        A = (A & ~0xFFFFu) | 0x030D, set8();
    }
    setLo(A, 0x41), get8();
    setLo(A, 0x49), get8();
    setLo(A, 0x8F), get8();
    A = (A & ~0xFFFFu) | 0x074C, set8();
    for (C = 0x10; C; C--) {
        A = 0x10;
        setLo(A, (lo(A) - lo(C)) & 0xFF);
        voice();
        A = (A & ~0xFFFFu) | 0x3F06, set8();
        setLo(A, 9);
        setW(B, m_.r16(0x20CE));
        set16();
    }
    setW(D, port());
    setLo(A, 1);
    m_.out8((uint16_t)D, 1);
}

// 2515h: timer 1 at 30D4h / (2 x tempo) of its 80 us units, started, IRQ unmasked
void Player::setTimer() {
    setW(A, (A << 1) & 0xFFFF);
    setW(D, 0);
    setW(B, A);
    const uint16_t q = (uint16_t)(0x30D4 / (B & 0xFFFF)), r = (uint16_t)(0x30D4 % (B & 0xFFFF));
    setW(A, q), setW(D, r);
    setHi(A, 0xFF - lo(A));
    const uint16_t p = port();
    m_.out8(p, 9);
    m_.out8((uint16_t)(p + 0x103), 0x46);
    m_.out8((uint16_t)(p + 0x105), hi(A));
    m_.out8((uint16_t)(p + 0x103), 0x45);
    m_.out8((uint16_t)(p + 0x105), 4);
    m_.out8((uint16_t)(p + 8), 4);
    m_.out8((uint16_t)(p + 9), 1);
    setW(D, p + 9);
    setLo(A, 0);
    setLo(B, m_.r8(0x12E5));
    m_.unmaskIrq11();
}

void Player::timerOff() {
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, 0x45);
    setW(D, (D & 0xFFFF) + 2);
    m_.out8((uint16_t)D, 0);
    setLo(A, 0);
}

void Player::ack() {
    setW(D, port() + 6);
    setLo(A, m_.in8((uint16_t)D));
    if (lo(A) & 4) {
        setW(D, port() + 0x103);
        m_.out8((uint16_t)D, 0x45);
        setW(D, (D & 0xFFFF) + 2);
        m_.out8((uint16_t)D, 0);
        m_.out8((uint16_t)D, 4);
        setLo(A, 4);
    }
    setW(D, port() + 0x103);
    m_.out8((uint16_t)D, 0x8F);
    setW(D, (D & 0xFFFF) + 2);
    setLo(A, m_.in8((uint16_t)D));
}

// --- voices -----------------------------------------------------------------

void Player::setFreq() {
    voice();
    A = 0x5ACAA;
    D = 0;
    if (!B) return;
    D = A % B;
    A = A / B;
    B = A;
    setW(A, 1);
    set16();
}

void Player::setPan() {
    voice();
    setLo(A, 0x0C);
    setHi(A, lo(B));
    set8();
}

void Player::setVolume() {
    voice();
    A = (A & ~0xFFFFu) | 0x030D;
    set8twice();
    const uint32_t c = C;
    setLo(A, 0x89);
    get16();
    setLo(B, hi(A));
    setLo(C, 0);
    if (lo(B) >= hi(B)) {
        if (lo(B) == hi(B)) {
            C = c;
            return;
        }
        const uint8_t t = lo(B);
        setLo(B, hi(B)), setHi(B, t);
        setLo(C, lo(C) | 0x40);
    }
    setLo(A, 7), setHi(A, lo(B)), set8();
    setLo(A, 8), setHi(A, hi(B)), set8();
    setLo(A, 6), setHi(A, 0x3F), set8();
    setLo(A, 0x0D), setHi(A, lo(C)), set8twice();
    C = c;
}

void Player::startSample() {
    voice();
    A &= 0xFF;
    const uint32_t si = SI;
    const uint32_t ins = B;
    B = A;
    A = m_.r32(0x13B1 + B * 4);
    SI = ins;
    A += m_.r32(0x19F1 + SI * 4);
    struct { uint8_t hiReg, loReg; uint32_t v; } parts[3] = {
        {0x0A, 0x0B, A}, {0x02, 0x03, m_.r32(0x1B7D + SI * 4)}, {0x04, 0x05, m_.r32(0x1D09 + SI * 4)}};
    for (auto& p : parts) {
        A = p.v;
        A >>= 7;
        B = A;
        setLo(A, p.hiReg);
        set16();
        B = p.v << 9;
        setLo(A, p.loReg);
        set16();
    }
    setW(A, m_.r16(0x1E95 + SI * 2));
    setHi(A, lo(A));
    setLo(A, 0);
    set8twice();
    SI = si;
}

void Player::stopVoice() {
    voice();
    setLo(A, 0x80);
    get8();
    setHi(A, lo(A) | 3);
    setLo(A, 0);
    set8twice();
}

// --- the module ---------------------------------------------------------------

void Player::init() {
    reset();
    A = 0x32;
    setTimer();
    timerOff();
    reset();
    ack();
    m_.w32(0x12B7, 0x2CA8);
}

bool Player::load(uint32_t module) {
    D = module;
    A = 0;
    m_.w32(0x12E6, D);
    SI = D + 0x20;
    setW(A, m_.r16(SI)), SI += 2;
    m_.w32(0x12EA, A);
    setW(A, m_.r16(SI)), SI += 2;
    m_.w8(0x12EF, lo(A));
    setW(A, m_.r16(SI)), SI += 2;
    m_.w8(0x12EE, lo(A));
    SI = D + 0x31;
    A = 0;
    setLo(A, m_.r8(SI++));
    m_.w32(0x129F, A);
    setLo(A, m_.r8(SI++));
    {
        const uint16_t ax = (uint16_t)(lo(A) * 0x32);
        setLo(B, 0x7D);
        setLo(A, ax / 0x7D), setHi(A, ax % 0x7D);
    }
    A &= 0xFF;
    m_.w32(0x12A3, A);
    SI = D + 0x40;
    C = 0x20;
    setHi(A, 0);
    B = 0;
    for (; C; C--, B++) {
        m_.w8(0x12F1 + B, 0);
        setLo(A, m_.r8(SI++));
        if (lo(A) == 0xFF) continue;
        setHi(A, hi(A) + 1);
        if (!(lo(A) & 0x80)) m_.w8(0x12F1 + B, 1);
        setLo(A, lo(A) & 0x7F);
        m_.w8(0x14B1 + B, 0);
        if (lo(A) >= 8) m_.w8(0x14B1 + B, 1);
    }
    m_.w8(0x12F0, hi(A));
    // each instrument's C-4 speed to 1100h; unlooped samples' loop zeroed
    SI = D + 0x60 + m_.r32(0x12EA);
    DI = 0x1100;
    for (C = m_.r8(0x12EF); C; C--) {
        A = m_.r16(SI);
        SI += 2;
        A <<= 4;
        uint32_t s = A + D + 0x20;
        m_.w16(DI, m_.r16(s));
        DI += 2, s += 2;
        s -= 3;
        setLo(A, m_.r8(s++));
        if (!(lo(A) & 1)) {
            s -= 0x0C;
            A = 0;
            m_.w16(s, 0);
            s += 4;
            m_.w16(s, 0);
        }
    }
    SI = 0;
    if (!seekOrder()) return false;
    upload();
    // pans: left (3) or right (0Ch) from the channel settings; voice 6 central
    C = 0x20;
    A = 0;
    for (SI = 0; C; C--, SI++, A++) {
        const uint32_t a = A;
        setLo(B, m_.r8(0x14B1 + SI) ? 0x0C : 3);
        setPan();
        A = a;
    }
    A = 6, B = 7;
    setPan();
    return true;
}

bool Player::seekOrder() {
    for (;;) {
        A = 0;
        if (SI) setHi(A, 1);
        SI = SI + D + 0x60;
        for (;;) {
            setLo(A, m_.r8(SI++));
            if (lo(A) == 0xFF) break;
            if (lo(A) == 0xFE) continue;
            B = lo(A);
            A = m_.r8(0x12EF);
            A += B;
            B = m_.r32(0x12EA);
            B = B + A * 2 + 0x60;
            A = (uint32_t)m_.r16(B + D) << 4;
            A += 2;
            m_.w32(0x12BB, A);
            SI -= 0x60;
            SI -= D;
            m_.w32(0x12BF, SI);
            m_.w8(0x12CA, 0);
            return true;
        }
        if (!hi(A)) return false;
        SI = 0;                         // the song's end: from the first order again
    }
}

// The samples to the GUS's DRAM, 32-byte aligned, with 200h bytes more
// than each one's length (what follows it in the module); signed.
void Player::upload() {
    const uint32_t n = m_.r8(0x12EF);
    const uint32_t mod = m_.r32(0x12E6);
    uint32_t dram = 0;
    for (uint32_t k = 0; k < n; k++) {
        uint32_t s = mod + 0x60 + k * 2 + m_.r32(0x12EA);
        s = ((uint32_t)m_.r16(s) << 4) + mod + 0x14;
        uint32_t loopStart = m_.r16(s);
        uint32_t end = m_.r16(s + 4);
        uint16_t mode = 8;
        s -= 4;                         // +10h: the length
        if (end == loopStart) {
            mode = 0;
            end = m_.r16(s);
        }
        m_.w32(0x1D09 + k * 4, end);
        m_.w32(0x1B7D + k * 4, loopStart);
        m_.w16(0x1E95 + k * 2, mode);
        uint32_t len = m_.r16(s);
        if (len) {
            len += 0x200;
            const uint32_t data = ((uint32_t)m_.r16(s - 2) << 4) + mod;
            m_.w32(0x19F1 + k * 4, dram);
            m_.w32(0x1B7D + k * 4, m_.r32(0x1B7D + k * 4) + dram);
            m_.w32(0x1D09 + k * 4, m_.r32(0x1D09 + k * 4) + dram);
            // 22C3h: the address through 44h and 43h, then 2x7 byte by byte
            const uint16_t p = port();
            uint32_t a = dram;
            m_.out8((uint16_t)(p + 0x103), 0x44);
            m_.out8((uint16_t)(p + 0x105), (uint8_t)(a >> 16));
            m_.out8((uint16_t)(p + 0x103), 0x43);
            m_.out16((uint16_t)(p + 0x104), (uint16_t)a);
            for (uint32_t i = 0; i < len; i++) {
                m_.out8((uint16_t)(p + 0x107), (uint8_t)(m_.r8(data + i) + 0x80));
                a = (a & 0xFFFF0000) | ((a + 1) & 0xFFFF);
                if (!(a & 0xFFFF)) {
                    a += 0x10000;
                    m_.out8((uint16_t)(p + 0x103), 0x44);
                    m_.out8((uint16_t)(p + 0x105), (uint8_t)(a >> 16));
                }
                m_.out8((uint16_t)(p + 0x103), 0x43);
                m_.out16((uint16_t)(p + 0x104), (uint16_t)a);
            }
        }
        dram = (dram + 0x20) & ~0x1Fu;
        if (len) dram = ((m_.r32(0x19F1 + k * 4) + len) + 0x20) & ~0x1Fu;
    }
}

void Player::start() {
    if (flags() & 0x400) return;
    row();
    tempoReset();
    m_.irq11 = [this] { irq(); };
    m_.setIrq11Vector(true);
    m_.unmaskIrq11();
    A = m_.r32(0x12A3);
    setTimer();
    setFlags(flags() | 0x400);
}

void Player::stop() {
    if (!(flags() & 0x400)) return;
    setFlags(flags() & 0xFBFF);
    timerOff();
    reset();
    m_.setIrq11Vector(false);
}

uint32_t Player::position() const {
    return ((m_.r32(0x12BF) - 1) << 6) + ((uint32_t)m_.r8(0x12CA) - 1);
}

void Player::tempoReset() {
    D = 0;
    A = m_.r16(0x1291);
    B = m_.r32(0x12A3);
    D = A % B;
    A = A / B;
    m_.w32(0x1297, A);
    m_.w32(0x1293, A);
    A = m_.r32(0x129F);
    m_.w32(0x129B, A);
}

// 3AD1h: the period for note CL (octave in the high nibble) of instrument
// AL on channel EBX: 20AB0h x the octave's period >> octave / C-4 speed.
void Player::notePeriod() {
    DI = B * 2;
    const uint32_t ch = B;
    B = lo(C) & 0x0F;
    D = m_.r16(0x1259 + B * 2);
    setLo(C, lo(C) >> 4);
    B = lo(A);
    const uint64_t p = (uint64_t)0x20AB0 * D;
    A = (uint32_t)p;
    D = (uint32_t)(p >> 32);
    uint32_t cf = D != 0;
    const int sh = lo(C) & 31;
    if (sh) {
        cf = (A >> (sh - 1)) & 1;
        A >>= sh;
    }
    A += cf;
    B = m_.r16(0x1100 + B * 2);
    const uint64_t n = (uint64_t)D << 32 | A;
    A = (uint32_t)(n / B);
    D = (uint32_t)(n % B);
    if (flags() & 0x80) {
        m_.w32(0x15D1 + DI * 2, A);
        B = ch;
        return;
    }
    m_.w32(0x16F1 + DI * 2, A);
    m_.w32(0x15D1 + DI * 2, A);
    std::swap(A, B);
    mixStep2();
    B = ch;
}

void Player::mixStep() {
    const uint32_t a = A;
    mixStep2();
    B = a;
}

void Player::mixStep2() {
    A = 0xDA7790;
    D = 0;
    if (B) {
        D = A % B;
        A = A / B;
    }
    D = 0;
    B = m_.r16(0x1291);
    D = A % B;
    A = A / B;
    m_.w32(0x18F1 + DI * 2, A);
    const uint64_t n = (uint64_t)D << 32;
    A = (uint32_t)(n / B);
    D = (uint32_t)(n % B);
    m_.w32(0x1971 + DI * 2, A);
}

// --- the interrupt, ticks, effects ------------------------------------------------

void Player::irq() {
    const uint32_t s[7] = {A, B, C, D, SI, DI, BP};
    ack();
    m_.w8(0x2CA7, m_.r8(0x2CA7) ^ 1);
    if (m_.r8(0x2CA7)) tick();
    A = s[0], B = s[1], C = s[2], D = s[3], SI = s[4], DI = s[5], BP = s[6];
}

void Player::tick() {
    const uint32_t s[7] = {A, B, C, D, SI, DI, BP};
    m_.w32(0x12AF, m_.r32(0x12AF) + 1);
    A = m_.r32(0x1293);
    m_.w32(0x1297, A);
    A = m_.r32(0x129B);
    effects();
    setFlags(flags() & 0xFEFF);
    m_.w32(0x129B, m_.r32(0x129B) - 1);
    if (!m_.r32(0x129B)) row();
    A = s[0], B = s[1], C = s[2], D = s[3], SI = s[4], DI = s[5], BP = s[6];
}

void Player::volumeOf() {
    B = m_.r8(0x1371 + SI);
    A = m_.r8(0x1F6B);
    B = (uint32_t)((int32_t)B * (int32_t)A);
    B >>= 6;
    setW(B, m_.r16(0x20CE + B * 2));
}

void Player::effects() {
    C = m_.r8(0x12F0);
    SI = 0;
    for (;; ) {
        if (!(m_.r8(0x12F1 + SI) & 1)) goto next;
        A = m_.r8(0x1651 + SI);
        if (!A) goto next;
        A = m_.r32(0x1F98 + A * 4);
        switch (A) {
        case 0x2D51: goto volSlide;
        case 0x2E0A: goto portaDown;
        case 0x2E71: goto portaUp;
        case 0x2EDA: goto tonePorta;
        case 0x2F34: goto vibrato;
        case 0x2F9D: goto arpeggio;
        case 0x301B: goto retrig;
        case 0x313A: goto special;
        default: goto next;
        }

    volSlide:                           // D, and the slide of K and L
        if (flags() & 0x100) goto next;
        setLo(A, m_.r8(0x1691 + SI));
        setHi(A, lo(A) & 0x0F);
        if (lo(A) > 0xF0) goto fine;
        if (!(lo(A) & 0x0F) || lo(A) <= 0x0F) goto coarse;
        setLo(A, (uint8_t)-(int)(lo(A) >> 4));
        setHi(A, lo(A));
    fine:
        m_.w8(0x1651 + SI, 0);
        goto apply;
    coarse:
        if (lo(A) >= 0x10) setLo(A, (uint8_t)-(int)(lo(A) >> 4));
        setHi(A, lo(A));
    apply:
        setLo(A, m_.r8(0x1371 + SI) - hi(A));
        if (lo(A) & 0x80) setLo(A, 0);
        else if (lo(A) > 0x40) setLo(A, 0x40);
        m_.w8(0x1371 + SI, lo(A));
        A = lo(A);
        B = m_.r8(0x1F6B);
        A = (uint32_t)((int32_t)A * (int32_t)B);
        A >>= 6;
        setW(B, m_.r16(0x20CE + A * 2));
        A = SI;
        setVolume();
        setLo(A, m_.r8(0x1651 + SI));
        if (lo(A) == 0x0B) goto vibrato;
        if (lo(A) == 0x0C) goto tonePorta;
        goto next;

    portaDown:                          // E: the period up
        if (flags() & 0x100) goto next;
        B = m_.r32(0x16F1 + SI * 4);
        D = m_.r8(0x1671 + SI);
        if (lo(D) >= 0xE0) {
            m_.w8(0x1651 + SI, 0);
            const bool fineE = lo(D) >= 0xF0;
            setLo(D, lo(D) & 0x0F);
            if (!fineE) goto addDown;
        }
        D <<= 2;
    addDown: {
            const uint64_t s = (uint64_t)B + D;
            B = (uint32_t)s;
            if (!(s >> 32)) goto store;
        }
    noteOff:
        m_.w8(0x1311 + SI, 0);
        A = SI;
        B = m_.r16(0x20CE);
        setVolume();
        goto next;

    portaUp:                            // F: the period down
        if (flags() & 0x100) goto next;
        B = m_.r32(0x16F1 + SI * 4);
        D = m_.r8(0x1671 + SI);
        if (lo(D) >= 0xE0) {
            m_.w8(0x1651 + SI, 0);
            const bool fineF = lo(D) >= 0xF0;
            setLo(D, lo(D) & 0x0F);
            if (!fineF) goto subUp;
        }
        D <<= 2;
    subUp:
        if (B <= D) {
            B -= D;
            goto noteOff;
        }
        B -= D;
    store:
        m_.w32(0x16F1 + SI * 4, B);
    setfreq:
        DI = SI * 2;
        A = SI;
        setFreq();
        goto next;

    tonePorta:                          // G (and the slide of L)
        A = m_.r32(0x16F1 + SI * 4);
        DI = A;
        {
            const uint32_t target = m_.r32(0x15D1 + SI * 4);
            if (A == target) goto next;
            D = (uint32_t)m_.r8(0x16B1 + SI) << 2;
            if (A > target) {
                const bool borrow = A < D;
                A -= D;
                if (borrow || A <= target) A = target;
            } else {
                const uint64_t s = (uint64_t)A + D;
                A = (uint32_t)s;
                if ((s >> 32) || A >= target) A = target;
            }
            m_.w32(0x16F1 + SI * 4, A);
            B = A;
            goto store;
        }

    vibrato:                            // H (and the vibrato of K)
        if (flags() & 0x100) goto next;
        D = 0;
        B = m_.r8(0x1771 + SI);
        m_.w8(0x17D1 + SI, m_.r8(0x17D1 + SI) | 2);
        A = m_.r8(0x16D1 + SI);
        A <<= 4;
        setLo(A, lo(A) >> 4);
        setLo(B, lo(B) + hi(A));
        B &= 0x3F;
        m_.w8(0x1771 + SI, lo(B));
        setHi(A, m_.r8(0x1219 + B));
        A = (uint32_t)(int32_t)(int16_t)((int8_t)lo(A) * (int8_t)hi(A));
        A = (uint32_t)((int32_t)A >> 4);
        B = m_.r32(0x16F1 + SI * 4) + A;
        DI = SI * 2;
        A = SI;
        setFreq();
        goto next;

    arpeggio: {                         // J
            A = 0;
            B = m_.r8(0x1791 + SI) + 1;
            if (lo(B) >= 3) B = 0;
            m_.w8(0x1791 + SI, lo(B));
            A = m_.r8(0x1671 + SI);
            if (B == 0) {
                B = m_.r32(0x16F1 + SI * 4);
                goto setfreq;
            }
            uint32_t idx;
            if (B == 1) {
                A = (A & 0xF0) >> 3;
                idx = A;
            } else {
                setLo(A, lo(A) & 0x0F);
                idx = A * 2;
            }
            A = m_.r32(0x16F1 + SI * 4);
            B = m_.r16(0x1271 + idx);
            const uint64_t p = (uint64_t)A * B;
            A = (uint32_t)p;
            D = (uint32_t)(p >> 32);
            A >>= 16;
            B = A;
            goto setfreq;
        }

    retrig: {                           // Q
            setLo(A, m_.r8(0x17B1 + SI) - 1);
            if (lo(A)) {
                m_.w8(0x17B1 + SI, lo(A));
                goto next;
            }
            setLo(A, m_.r8(0x1671 + SI));
            setHi(A, lo(A));
            setW(A, A & 0xF00F);
            m_.w8(0x17B1 + SI, lo(A));
            m_.w32(0x13B1 + SI * 4, 0);
            m_.w32(0x1431 + SI * 4, 0);
            m_.w8(0x1311 + SI, 1);
            setLo(A, m_.r8(0x1371 + SI));
            const uint8_t how = hi(A) >> 4;
            setHi(A, how);
            uint8_t al = lo(A);
            if (how) {
                if (how < 6) {
                    const int v = (int8_t)(uint8_t)(al - (1 << (how - 1)));
                    al = v < 0 ? 0 : (uint8_t)v;
                } else if (how == 6) {
                    al = (uint8_t)(((uint8_t)(al << 1)) / 3);
                } else if (how == 7) {
                    al >>= 1;
                } else if (how < 0x0E) {
                    if (how == 8) goto next;
                    al = (uint8_t)(al + (1 << (how - 9)));
                    if (al >= 0x40) al = 0x40;
                } else if (how == 0x0E) {
                    al = (uint8_t)((uint8_t)((uint8_t)(al << 1) + al) >> 1);
                    if (al >= 0x40) al = 0x40;
                } else {
                    al = (uint8_t)(al << 1);
                    if (al >= 0x40) al = 0x40;
                }
                m_.w8(0x1371 + SI, al);
            }
            const uint32_t s[7] = {A, B, C, D, SI, DI, BP};
            A = SI;
            stopVoice();
            A = SI;
            B = m_.r8(0x1391 + SI);
            startSample();
            volumeOf();
            A = SI;
            setVolume();
            A = s[0], B = s[1], C = s[2], D = s[3], SI = s[4], DI = s[5], BP = s[6];
            goto next;
        }

    special: {                          // S: SCx, SDx, SEx
            setLo(A, m_.r8(0x1671 + SI));
            setLo(B, lo(A));
            B &= 0xF0;
            setLo(A, lo(A) & 0x0F);
            B >>= 2;
            B = m_.r32(0x2000 + B);
            if (B == 0x3155) {          // note cut
                setLo(A, lo(A) - 1);
                if (lo(A) == 0 || (lo(A) & 0x80)) {
                    m_.w8(0x1651 + SI, 0);
                    m_.w8(0x1311 + SI, 0);
                    const uint32_t c = C, si = SI;
                    A = SI;
                    setW(B, 0x4E20);
                    setVolume();
                    C = c, SI = si;
                } else {
                    m_.w8(0x1671 + SI, lo(A) | 0xC0);
                }
            } else if (B == 0x3198) {   // note delay
                setLo(A, lo(A) - 1);
                if (lo(A) == 0 || (lo(A) & 0x80)) {
                    m_.w8(0x1651 + SI, 0);
                    m_.w8(0x1311 + SI, 1);
                    const uint32_t c = C, si = SI;
                    A = SI;
                    stopVoice();
                    A = SI;
                    B = m_.r32(0x16F1 + SI * 4);
                    setFreq();
                    A = SI;
                    B = m_.r8(0x1391 + SI);
                    startSample();
                    volumeOf();
                    A = SI;
                    setVolume();
                    C = c, SI = si;
                } else {
                    m_.w8(0x1671 + SI, lo(A) | 0xD0);
                }
            } else if (B == 0x31AB) {   // pattern delay
                A &= 0x0F;
                A++;
                const uint64_t p = (uint64_t)A * m_.r32(0x129B);
                A = (uint32_t)p;
                D = (uint32_t)(p >> 32);
                m_.w32(0x129B, A);
                m_.w8(0x1651 + SI, 0);
            }
            goto next;
        }

    next:
        SI++;
        if (!--C) return;
    }
}

void Player::row() {
    setFlags(flags() | 0x100);
    m_.w32(0x12A7, m_.r32(0x12A7) + 1);
    A = 0;
    for (int k = 0; k < 32; k++) m_.w8(0x1651 + k, 0), m_.w8(0x1791 + k, 0);
    C = 0;
    DI = 0x17B1;
    A = m_.r32(0x129F);
    m_.w32(0x129B, A);
    SI = m_.r32(0x12E6) + m_.r32(0x12BB);
    setFlags(flags() & 0xFFF7);
    readRow();
    vibratoReset();
    {
        const uint32_t s[7] = {A, B, C, D, SI, DI, BP};
        voices();
        A = s[0], B = s[1], C = s[2], D = s[3], SI = s[4], DI = s[5], BP = s[6];
    }
    patternLoop();
    SI -= m_.r32(0x12E6);
    m_.w32(0x12BB, SI);
    m_.w8(0x12CA, m_.r8(0x12CA) + 1);
    if (m_.r8(0x12CA) >= 0x40 || (flags() & 8)) {
        nextOrder();
    } else if (flags() & 0x20) {
        m_.w32(0x12BF, m_.r32(0x12BF) + 1);
        nextOrder();
    } else if (flags() & 0x40) {
        m_.w32(0x12BF, m_.r32(0x12BF) - 1);
        nextOrder();
    }
}

void Player::nextOrder() {
    D = m_.r32(0x12E6);
    setFlags(flags() & 0xFF9F);
    SI = m_.r32(0x12BF);
    seekOrder();
}

void Player::patternLoop() {
    if (!(m_.r8(0x12C9) & 1) || !(m_.r8(0x12C9) & 2)) return;
    B = m_.r32(0x12C3);
    m_.w8(0x12C8, m_.r8(0x12C8) - 1);
    if (!m_.r8(0x12C8)) {
        m_.w8(0x12C9, 0);
        return;
    }
    m_.w8(0x12C9, m_.r8(0x12C9) & 0xFD);
    setLo(A, m_.r8(0x12C7) - 1);
    m_.w8(0x12CA, lo(A));
    SI = B + m_.r32(0x12E6);
}

void Player::readRow() {
    for (B = 0x17D1, C = 8, A = 0xFEFEFEFE; C; C--, B += 4) m_.w32(B, m_.r32(B) & A);
    for (;;) {
        setLo(A, m_.r8(SI++));
        if (!lo(A)) return;
        B = A & 0x1F;
        setHi(A, lo(A));
        setFlags(flags() & 0xFD7F);
        if (hi(A) & 0x20) {             // a note and an instrument
            const uint32_t a = A;
            uint32_t s = SI;
            if (hi(A) & 0x80) {
                s += 2;
                if (hi(A) & 0x40) s++;
                setLo(A, m_.r8(s++));
                if (lo(A) == 7) setFlags(flags() | 0x80);
            }
            setLo(A, m_.r8(SI++));
            if (lo(A) == 0xFE) {        // ^^: the note cut
                m_.w8(0x1311 + B, 0);
                m_.w8(0x1331 + B, m_.r8(0x1331 + B) | 4);
                SI++;
                A = a;
                goto volume;
            }
            setLo(C, lo(A));
            setLo(A, m_.r8(SI++));
            if (lo(A)) {
                setLo(A, lo(A) - 1);
                m_.w8(0x1391 + B, lo(A));
                setFlags(flags() | 0x200);
            }
            setLo(A, m_.r8(0x1391 + B));
            m_.w8(0x1311 + B, 1);
            if (!(flags() & 0x80) && lo(C) != 0xFF) {
                m_.w8(0x1331 + B, m_.r8(0x1331 + B) | 1);
                m_.w32(0x13B1 + B * 4, 0);
                m_.w32(0x1431 + B * 4, 0);
            }
            m_.w8(0x1331 + B, m_.r8(0x1331 + B) | 2);
            if (lo(C) != 0xFF) notePeriod();
            const uint32_t si = SI;
            D = m_.r32(0x12E6);
            A = m_.r8(0x1391 + B);
            A += A;
            A += m_.r32(0x12EA);
            SI = A + D + 0x60;
            A = (uint32_t)m_.r16(SI) << 4;
            SI = A + D + 0x0E;
            setW(A, m_.r16(SI)), SI += 2;
            A &= 0xFFFF;
            A <<= 4;
            A += D;
            m_.w32(0x14D1 + B * 4, A);
            A = m_.r32(SI), SI += 4;
            m_.w32(0x1551 + B * 4, A);
            A = m_.r32(SI), SI += 4;
            m_.w32(0x17F1 + B * 4, A);
            A = m_.r32(SI), SI += 4;
            m_.w32(0x1871 + B * 4, A);
            if (flags() & 0x200) {
                setLo(A, m_.r8(SI++));
                m_.w8(0x1371 + B, lo(A));
                m_.w8(0x1351 + B, lo(A));
            }
            SI = si;
            A = a;
        }
    volume:
        if (hi(A) & 0x40) {
            setLo(A, m_.r8(SI++));
            m_.w8(0x1371 + B, lo(A));
            m_.w8(0x1351 + B, lo(A));
            m_.w8(0x1331 + B, m_.r8(0x1331 + B) | 2);
        }
        if (!(hi(A) & 0x80)) {
            m_.w8(0x1651 + B, 0);
            continue;
        }
        // the effect, and what it does at the row
        setLo(A, m_.r8(SI++));
        m_.w8(0x1651 + B, lo(A));
        setHi(A, lo(A));
        setLo(A, m_.r8(SI++));
        if (lo(A)) m_.w8(0x1671 + B, lo(A));
        if (hi(A) > 0x14) continue;
        D = m_.r32(0x2040 + hi(A) * 4);
        switch (D) {
        case 0x38ED:                    // A: speed
            A = lo(A);
            m_.w32(0x129F, A);
            m_.w8(0x1651 + B, 0);
            tempoReset();
            break;
        case 0x3906:                    // B: order jump
            A = lo(A);
            m_.w32(0x12BF, A);
            [[fallthrough]];
        case 0x390E:                    // C: pattern break
            setFlags(flags() | 8);
            m_.w8(0x1651 + B, 0);
            break;
        case 0x3922:                    // D, K, L: the slide's parameter
            if (lo(A)) m_.w8(0x1691 + B, lo(A));
            setLo(A, m_.r8(0x1651 + B));
            if (lo(A) == 0x0B) m_.w8(0x17D1 + B, m_.r8(0x17D1 + B) | 1);
            setLo(A, m_.r8(0x1691 + B));
            setHi(A, m_.r8(0x1371 + B));
            if (lo(A) == 0x0F) {
                setHi(A, hi(A) - lo(A));
                if (hi(A) & 0x80) setHi(A, 0);
                m_.w8(0x1371 + B, hi(A));
            }
            break;
        case 0x3963:                    // G: the speed
            if (lo(A)) m_.w8(0x16B1 + B, lo(A));
            break;
        case 0x3972:                    // H: speed and depth, each kept if 0
            setHi(A, m_.r8(0x16D1 + B));
            m_.w8(0x17D1 + B, m_.r8(0x17D1 + B) | 1);
            if (!lo(A)) break;
            if (!(lo(A) & 0xF0)) setW(A, A & 0xF00F), setLo(A, lo(A) | hi(A));
            else if (!(lo(A) & 0x0F)) setW(A, A & 0x0FF0), setLo(A, lo(A) | hi(A));
            m_.w8(0x16D1 + B, lo(A));
            break;
        case 0x39AD:                    // O: sample offset
            setHi(A, lo(A));
            A &= 0xFF00;
            m_.w32(0x13B1 + B * 4, A);
            break;
        case 0x39C0:                    // Q: retrigger
            setLo(A, m_.r8(0x1671 + B));
            setW(A, A & 0x0F);
            m_.w8(0x1311 + B, 1);
            m_.w32(0x13B1 + B * 4, 0);
            m_.w32(0x1431 + B * 4, 0);
            m_.w8(0x17B1 + B, lo(A));
            break;
        case 0x39F2:                    // S: SDx holds the note back, SBx loops
            setHi(A, lo(A) & 0xF0);
            if (hi(A) == 0xD0) {
                m_.w8(0x1311 + B, 0);
                m_.w8(0x1331 + B, m_.r8(0x1331 + B) & 0xF8);
            } else if (hi(A) == 0xB0) {
                setLo(A, lo(A) & 0x0F);
                if (!lo(A)) {
                    A = m_.r32(0x12BB);
                    m_.w32(0x12C3, A);
                    setLo(A, m_.r8(0x12CA));
                    m_.w8(0x12C7, lo(A));
                    m_.w8(0x12C9, m_.r8(0x12C9) | 0x81);
                } else if (m_.r8(0x12C9) & 0x80) {
                    m_.w8(0x12C9, m_.r8(0x12C9) | 2);
                    if (!(m_.r8(0x12C9) & 4)) {
                        setLo(A, lo(A) + 1);
                        m_.w8(0x12C8, lo(A));
                        m_.w8(0x12C9, m_.r8(0x12C9) | 4);
                    }
                }
            }
            break;
        case 0x3A69: {                  // T: tempo
            if (lo(A) <= 0x20) break;
            const uint16_t ax = (uint16_t)(lo(A) * 0x32);
            setLo(C, 0x7D);
            setLo(A, ax / 0x7D), setHi(A, ax % 0x7D);
            if (!lo(A)) break;
            A = lo(A);
            m_.w32(0x12A3, A);
            tempoReset();
            A = m_.r32(0x12A3);
            setTimer();
            break;
        }
        default:
            break;
        }
    }
}

void Player::vibratoReset() {
    for (B = 0, C = 0x20; C; C--) {
        if (!(m_.r8(0x17D1 + B) & 1) && (m_.r8(0x17D1 + B) & 2)) {
            m_.w8(0x17D1 + B, m_.r8(0x17D1 + B) & 0xFD);
            DI = B * 2;
            m_.w8(0x1771 + B, 0);
            B = m_.r32(0x16F1 + B * 4);
            mixStep();                  // EBX = the EAX it was called with, not the period
            A = DI >> 1;
            setFreq();
            B = DI >> 1;
        }
        B++;
    }
}

void Player::voices() {
    setLo(C, m_.r8(0x12F0));
    setHi(C, lo(C));
    SI = 0;
    // the volume down first: channels off, and those with a new note or a cut
    for (; hi(C); setHi(C, hi(C) - 1), SI++) {
        if ((m_.r8(0x12F1 + SI) & 1) && !(m_.r8(0x1331 + SI) & 5)) continue;
        A = SI;
        setW(B, 0x1770);
        setVolume();
    }
    // then those voices stopped, once their ramp has got down
    SI = 0;
    setHi(C, lo(C));
    for (; hi(C); setHi(C, hi(C) - 1), SI++) {
        if (!(m_.r8(0x12F1 + SI) & 1) || !(m_.r8(0x1331 + SI) & 5)) continue;
        const uint32_t c = C;
        m_.w8(0x1331 + SI, m_.r8(0x1331 + SI) & 0xFB);
        A = SI;
        voice();
        D++;
        for (C = 0x14; C; C--) {
            m_.out8((uint16_t)D, 0x8D);
            setLo(A, 0x8D);
            D += 2;
            setLo(A, m_.in8((uint16_t)D));
            D -= 2;
            const bool cf = lo(A) & 1;
            setLo(A, lo(A) >> 1);
            if (cf) break;
        }
        A = (A & ~0xFFFFu) | 0x0D03;    // register 3 (sic), value 0Dh
        set8twice();
        A = SI;
        stopVoice();
        C = c;
    }
    // the new samples, at their periods
    setHi(C, lo(C));
    SI = 0;
    for (; hi(C); setHi(C, hi(C) - 1), SI++) {
        if (!(m_.r8(0x12F1 + SI) & 1) || !(m_.r8(0x1331 + SI) & 1)) continue;
        const uint32_t c = C;
        m_.w8(0x1331 + SI, m_.r8(0x1331 + SI) & 0xFE);
        A = SI;
        B = m_.r32(0x16F1 + SI * 4);
        setFreq();
        A = SI;
        B = m_.r8(0x1391 + SI);
        startSample();
        C = c;
    }
    // the volumes
    for (SI = 0; C; C--, SI++) {
        if (!(m_.r8(0x12F1 + SI) & 1) || !(m_.r8(0x1331 + SI) & 2)) continue;
        m_.w8(0x1331 + SI, m_.r8(0x1331 + SI) & 0xFD);
        B = 0;
        volumeOf();
        A = SI;
        setVolume();
    }
}

}  // namespace drift
