// The objects. Each entry of the object table (1C53Fh, 30 pointers) is a
// record: point list, point count, init routine, motion routine, script,
// then the starting position, spin and velocity. A point is 7 bytes:
// x, y, z as words and the ball type (colour) as a byte.
//
// The motion routines rewrite the point lists, their own counters and each
// other's pointers in place, and several objects share a point list, so this
// works on the object memory exactly as the original did: the bytes of
// 1C34Bh..1DB37h, read and written at their addresses. Pointers stored in
// it are original addresses too.
//
// The object state at the top of that memory:
//   1C34Bh angle x, y, z (byte offsets into the sine table, 0..3FEh)
//   1C351h position x, y, z      1C357h spin x, y, z
//   1C35Dh velocity x, y, z      1C363h bounds: x min/max, y, z
//   1C387h point list, 1C38Bh point count
//   1C533h current table entry, 1C537h motion routine, 1C53Bh step (0 or 4)
//   1C5BBh script pointer, 1C5BFh script wait
#include <cstring>

#include "demo.h"
#include "data/objmem.h"

namespace rbg {

uint8_t& Demo::m8(uint32_t a) {
    if (a >= kObjMemBase && a < kObjMemBase + obj_.size()) return obj_[a - kObjMemBase];
    // 34A3h: the music driver's note volumes, which the music objects read
    if (a >= 0x34A3 && a < 0x34A3 + sizeof music_.noteVolume) return music_.noteVolume[a - 0x34A3];
    scratch_ = 0;
    return scratch_;
}
uint16_t Demo::r16(uint32_t a) { return (uint16_t)(m8(a) | m8(a + 1) << 8); }
void Demo::w16(uint32_t a, uint16_t v) {
    m8(a) = (uint8_t)v;
    m8(a + 1) = (uint8_t)(v >> 8);
}
uint32_t Demo::r32(uint32_t a) { return r16(a) | (uint32_t)r16(a + 2) << 16; }
void Demo::w32(uint32_t a, uint32_t v) {
    w16(a, (uint16_t)v);
    w16(a + 2, (uint16_t)(v >> 16));
}

namespace {
uint8_t decay(uint8_t v) { return v ? (uint8_t)(v - 1) : 0; }   // sub 1 / adc 0
}  // namespace

// 1DE60h: step to the next table entry (or stay, when the step is 0).
void Demo::nextObject() {
    uint32_t e = r32(0x1C533) + r32(0x1C53B);
    if (r32(e) == 0) e = 0x1C53F;
    selectObject(e);
}

// 1DE6Ch
void Demo::selectObject(uint32_t e) {
    while (r32(e) == 0) e = 0x1C53F;
    w32(0x1C533, e);
    const uint32_t rec = r32(e);
    w32(0x1C387, r32(rec));
    m8(0x1C38B) = m8(rec + 4);
    w32(0x1C537, r32(rec + 9));
    w32(0x1C5BB, r32(rec + 0x0D));
    w16(0x1C5BF, 0);
    for (uint32_t i = 0; i < 6; i++) m8(0x1C34B + i) = 0;
    for (uint32_t i = 0; i < 18; i++) m8(0x1C351 + i) = m8(rec + 0x11 + i);
    callInit(r32(rec + 5));
}

void Demo::callInit(uint32_t a) {
    auto bounds = [&](int16_t x0, int16_t x1, int16_t y0, int16_t y1, int16_t z0, int16_t z1) {
        w16(0x1C363, (uint16_t)x0);
        w16(0x1C365, (uint16_t)x1);
        w16(0x1C367, (uint16_t)y0);
        w16(0x1C369, (uint16_t)y1);
        w16(0x1C36B, (uint16_t)z0);
        w16(0x1C36D, (uint16_t)z1);
    };
    switch (a) {
    case 0x1EEBA: bounds(-100, 100, -40, 200, 70, 350); break;
    case 0x1EEAF: bounds(-100, 100, -70, 200, 70, 350); break;
    case 0x1EF24: bounds(-120, 120, -70, 300, 50, 270); break;
    case 0x1EF5B: bounds(-100, 100, -100, 300, 50, 270); break;
    case 0x1EF6D:   // the tail of 1EF5Bh: z bounds left as they are
        w16(0x1C367, (uint16_t)-100);
        w16(0x1C369, 300);
        w16(0x1C363, (uint16_t)-100);
        w16(0x1C365, 100);
        break;
    case 0x1EEF1:   // the pulsing octahedron: all six points at the centre
        m8(0x1C886) = 0x0E;
        m8(0x1C887) = 0xC0;
        for (uint32_t p = 0x1C85C; p < 0x1C85C + 6 * 7; p += 7) {
            w16(p, 0);
            w16(p + 2, 0);
            w16(p + 4, 0);
        }
        break;
    case 0x1EF92:   // the fountain: 18 drops waiting at the nozzle
        m8(0x1CA69) = 1;
        m8(0x1CA6A) = 0;
        w32(0x1CA6B, 0x1C9EB);
        w32(0x1CA6F, 0x1CA73);
        for (uint32_t i = 0; i < 18; i++) {
            const uint32_t p = 0x1C9EB + 7 * i, v = 0x1CA73 + 3 * i;
            w16(p, 0);
            w16(p + 2, 0x5A);
            w16(p + 4, 0);
            m8(v) = m8(v + 1) = m8(v + 2) = 0;
        }
        break;
    case 0x1EFE3:   // 1CC10h..1CC18h overlap: written in the original's order
        w32(0x1CC0C, 0x1CB87);
        w16(0x1CC10, 0);
        w16(0x1CC12, 0x0D);
        w16(0x1CC14, 0x0C);
        w16(0x1CC13, 0x69);
        w16(0x1CC15, 0);
        w16(0x1CC17, 0);
        for (uint32_t p = 0x1CB87; p < 0x1CB87 + 18 * 7; p += 7) {
            w16(p, 0);
            w16(p + 2, 0x96);
            w16(p + 4, 0);
            m8(p + 6) = 0;
        }
        break;
    case 0x1F048:
        w16(0x1C9C6, 0);
        m8(0x1CCD6) = 2;
        w32(0x1CC0C, 0x1CB87);
        w16(0x1CC10, 9);
        w16(0x1CC12, (uint16_t)-8);
        w16(0x1CC14, 9);
        w16(0x1CC13, 0);
        w16(0x1CC15, 0x5A);
        w16(0x1CC17, 0);
        for (uint32_t p = 0x1CB87; p < 0x1CB87 + 18 * 7; p += 7) {
            w16(p, 0);
            w16(p + 2, 0x96);
            w16(p + 4, 0);
        }
        break;
    case 0x1F0B9:   // equaliser with halving arms
        w32(0x1CF13, 0x1E7B4);
        w32(0x1CF17, 0x1E7B4);
        w32(0x1CF1B, 0x1E7B8);
        w32(0x1CF1F, 0x1CEA3);
        break;
    case 0x1F0E2:   // the same with scaled arms
        w32(0x1CF13, 0x1E7BC);
        w32(0x1CF17, 0x1E7C9);
        w32(0x1CF1B, 0x1E7D2);
        w32(0x1CF1F, 0x1CF59);
        break;
    default:   // A97h and 1EEF0h are a bare ret
        break;
    }
}

bool Demo::callMotion(uint32_t a) {
    switch (a) {
    case 0x1E149: return generic();
    case 0x1E2DF: return mot1E2DF();
    case 0x1E30D: return mot1E30D();
    case 0x1E36C: return mot1E36C();
    case 0x1E3A4: return mot1E3A4();
    case 0x1E461: return mot1E461();
    case 0x1E508: return mot1E508();
    case 0x1E541: return mot1E541();
    case 0x1E57D: return mot1E57D();
    case 0x1E67A: return mot1E67A();
    case 0x1E7DC: return mot1E7DC();
    case 0x1E8B1: return mot1E8B1();
    case 0x1E8FF: return mot1E8FF();
    case 0x1E9A7: return mot1E9A7();
    case 0x1EA82: return mot1EA82();
    case 0x1EBCF: return mot1EBCF();
    case 0x1EC1C: return mot1EC1C();
    case 0x1ED03: return mot1ED03();
    case 0x1EDAC: return mot1EDAC();
    case 0x1EDD7: return mot1EDD7();
    case 0x1EE2D: return mot1EE2D();
    case 0x1EE6E: return mot1EE6E();
    default: return true;
    }
}

// 1E149h: bounce off the bounds, then spin, move and run the script.
bool Demo::generic() {
    auto bounce = [&](uint32_t pos, uint32_t lo, uint32_t hi, uint32_t vel) {
        const int16_t p = (int16_t)r16(pos);
        if (p < (int16_t)r16(lo) || p >= (int16_t)r16(hi)) w16(vel, (uint16_t)-(int16_t)r16(vel));
    };
    bounce(0x1C351, 0x1C363, 0x1C365, 0x1C35D);
    bounce(0x1C353, 0x1C367, 0x1C369, 0x1C35F);
    bounce(0x1C355, 0x1C36B, 0x1C36D, 0x1C361);
    return rotateMove();
}

// 1E1A6h
bool Demo::rotateMove() {
    for (uint32_t i = 0; i < 3; i++) {
        w16(0x1C34B + 2 * i, (uint16_t)((r16(0x1C34B + 2 * i) + r16(0x1C357 + 2 * i)) & 0x3FE));
        w16(0x1C351 + 2 * i, (uint16_t)(r16(0x1C351 + 2 * i) + r16(0x1C35D + 2 * i)));
    }
    return script();
}

// 1E212h: the script. 0-2 spin x/y/z, 3-5 velocity x/y/z (signed bytes);
// 6 n waits 4n frames; 7 ends the object; 8-13 set a bound (a word each).
bool Demo::script() {
    const uint16_t wait = r16(0x1C5BF);
    if (wait) {
        w16(0x1C5BF, (uint16_t)(wait - 1));
        return false;
    }
    uint32_t p = r32(0x1C5BB);
    for (;;) {
        const uint8_t c = m8(p++);
        if (c <= 5) {
            w16((c <= 2 ? 0x1C357 : 0x1C35D - 6) + 2 * c, (uint16_t)(int16_t)(int8_t)m8(p++));
        } else if (c == 6) {
            w16(0x1C5BF, (uint16_t)(m8(p++) << 2));
            w32(0x1C5BB, p);
            return false;
        } else if (c == 7) {
            return true;
        } else if (c <= 13) {
            w16(0x1C363 + 2 * (c - 8), r16(p));
            p += 2;
        } else {
            return true;   // no such command in the scripts
        }
    }
}

// 1E897h: one step of a damped spring: position += speed, and the speed
// moves one unit against the position.
void Demo::spring(uint16_t& a, uint16_t& b) {
    a = (uint16_t)(a + b);
    const int16_t s = (int16_t)a;
    b = (uint16_t)(b + (s < 0) - (s > 0));
}

void Demo::springPair(uint32_t a, int times) {
    uint16_t x = r16(a), v = r16(a + 2);
    for (int i = 0; i < times; i++) spring(x, v);
    w16(a, x);
    w16(a + 2, v);
}

// 1E2DFh: eleven points each on a spring of their own (their x), the
// speeds kept as signed bytes at 1C819h.
bool Demo::mot1E2DF() {
    for (uint32_t i = 0; i < 11; i++) {
        const uint32_t v = 0x1C819 + i, p = 0x1C7CC + 7 * i;
        const int8_t s = (int8_t)m8(v);
        const int16_t r = (int16_t)(r16(p) + s);
        w16(p, (uint16_t)r);
        if (r) m8(v) = (uint8_t)(s + (r < 0 ? 1 : -1));
    }
    return rotateMove();
}

// 1E30Dh: after C0h frames, the six points of the octahedron breathe in
// and out along the three axes.
bool Demo::mot1E30D() {
    if (m8(0x1C887)) {
        m8(0x1C887)--;
        return rotateMove();
    }
    const int8_t s = (int8_t)m8(0x1C886);
    const uint32_t at[6] = {0x1C85C, 0x1C863, 0x1C86C, 0x1C873, 0x1C87C, 0x1C883};
    int16_t r = 0;
    for (int i = 0; i < 6; i++) {
        r = (int16_t)(i & 1 ? r16(at[i]) - s : r16(at[i]) + s);
        w16(at[i], (uint16_t)r);
    }
    if (r) m8(0x1C886) = (uint8_t)(s + (r >= 0 ? 1 : -1));
    return rotateMove();
}

// 1E36Ch: four balls jump with the four digital channels.
bool Demo::mot1E36C() {
    for (uint32_t i = 0; i < 4; i++) {
        const uint8_t v = m8(0x34A3 + i);
        m8(0x34A3 + i) = decay(v);
        w16(0x1CAD7 + 7 * i + 2, (uint16_t)(((v ^ 0x0F) & 0xFF) * 4 - 0x23));
    }
    return rotateMove();
}

// 1E3A4h: a fountain. Every fourth frame a drop leaves the nozzle with an
// upward speed of 18 and a sideways one of -2, -1, 2 or 1; gravity adds one
// a frame; a drop that falls far enough waits at 100h. After 101 launches
// the object is done.
bool Demo::mot1E3A4() {
    if (--m8(0x1CA69) == 0) {
        m8(0x1CA69) = 4;
        const uint8_t n = ++m8(0x1CA6A);
        if (n > 0x64) return true;
        if (n <= 0x5A) {
            uint32_t p = r32(0x1CA6B), v = r32(0x1CA6F);
            w16(p, 0);
            w16(p + 2, 0x50);
            w16(p + 4, 0);
            m8(v + 2) = 0xEE;
            uint8_t s = (uint8_t)((n & 3) - 2);
            if (s == 0) s = 2;
            m8(v) = s;
            v += 3;
            p += 7;
            if (p >= 0x1CA69) {
                p = 0x1C9EB;
                v = 0x1CA73;
            }
            w32(0x1CA6B, p);
            w32(0x1CA6F, v);
        }
    }
    for (uint32_t i = 0; i < 18; i++) {
        const uint32_t p = 0x1C9EB + 7 * i, v = 0x1CA73 + 3 * i;
        w16(p, (uint16_t)(r16(p) + (int8_t)m8(v)));
        int8_t vy = (int8_t)m8(v + 2);
        int16_t y = (int16_t)(r16(p + 2) + vy);
        if (y >= 0x200) {
            vy = 0;
            y = 0x100;
        }
        w16(p + 2, (uint16_t)y);
        m8(v + 2) = (uint8_t)(vy + 1);
    }
    return false;
}

// 1E461h: one point at a time, round the list, is put where a point on
// three springs (speeds at 1CC10h..12h, position at 1CC13h..18h) is now:
// a trail.
bool Demo::mot1E461() {
    const uint32_t p = r32(0x1CC0C);
    auto axis = [&](uint32_t vel, uint32_t pos, uint32_t out) {
        const int8_t s = (int8_t)m8(vel);
        const int16_t r = (int16_t)(r16(pos) + s);
        w16(pos, (uint16_t)r);
        w16(out, (uint16_t)r);
        if (r) m8(vel) = (uint8_t)(s + (r < 0 ? 1 : -1));
    };
    axis(0x1CC10, 0x1CC13, p);
    axis(0x1CC12, 0x1CC15, p + 2);
    axis(0x1CC11, 0x1CC17, p + 4);
    w32(0x1CC0C, p + 7 >= 0x1CC05 ? 0x1CB87 : p + 7);
    return rotateMove();
}

// 1E508h: every fourth frame the ball types move one point along.
bool Demo::mot1E508() {
    const uint8_t n = (uint8_t)((m8(0x1CCD6) + 1) & 3);
    m8(0x1CCD6) = n;
    if (n == 0) {
        const uint8_t first = m8(0x1CC6C);
        for (uint32_t i = 0; i < 15; i++) m8(0x1CC6C + 7 * i) = m8(0x1CC6C + 7 * (i + 1));
        m8(0x1CCD5) = first;
    }
    return generic();
}

// 1E541h: four pairs of balls pushed apart by the digital channels.
bool Demo::mot1E541() {
    for (uint32_t i = 0; i < 4; i++) {
        const uint8_t v = m8(0x34A3 + i);
        m8(0x34A3 + i) = decay(v);
        const uint16_t d = (uint16_t)(v * 6 + 0x1E);
        w16(0x1CD2D + 14 * i, d);
        w16(0x1CD2D + 14 * i + 7, (uint16_t)-(int16_t)d);
    }
    return rotateMove();
}

// 1E57Dh: the trail of 1E461h bouncing in a box, ball types cycling; it
// stops bouncing up after 258h frames and ends after 276h.
bool Demo::mot1E57D() {
    const uint16_t t = (uint16_t)(r16(0x1C9C6) + 1);
    w16(0x1C9C6, t);
    if (t >= 0x276) return true;
    w16(0x1C34D, (uint16_t)((r16(0x1C34D) - 0x0C) & 0x3FE));
    const uint32_t p = r32(0x1CC0C);
    auto axis = [&](uint32_t vel, uint32_t pos, uint32_t out, int16_t lo, int16_t hi, bool floor) {
        int8_t s = (int8_t)m8(vel);
        const int16_t r = (int16_t)(r16(pos) + s);
        if (r < lo || r >= hi) {
            if (floor && r >= hi && t >= 0x258) s = 0;
            m8(vel) = (uint8_t)-s;
        }
        w16(pos, (uint16_t)r);
        w16(out, (uint16_t)r);
    };
    axis(0x1CC10, 0x1CC13, p, -150, 150, false);
    axis(0x1CC12, 0x1CC15, p + 2, -80, 90, true);
    axis(0x1CC11, 0x1CC17, p + 4, -150, 150, false);
    uint8_t c = m8(0x1CCD6);
    c = c ? (uint8_t)(c - 1) : 2;
    m8(0x1CCD6) = c;
    m8(p + 6) = c;
    w32(0x1CC0C, p + 7 >= 0x1CC05 ? 0x1CB87 : p + 7);
    return false;
}

// The arm scalers that 1F0B9h/1F0E2h put at 1CF13h..1CF1Bh. The second
// family scales the value the first of them was given (kept in bx).
int16_t Demo::scale1CF13(uint32_t fn, int16_t ax) {
    static int16_t bx = 0;
    switch (fn) {
    case 0x1E7B4: return (int16_t)(ax >> 1);
    case 0x1E7B8: return (int16_t)(ax * 3);
    case 0x1E7BC: bx = ax; return (int16_t)((int16_t)(ax * 0xB6) >> 8);
    case 0x1E7C9: return (int16_t)((int16_t)(bx * 0x61) >> 8);
    case 0x1E7D2: return (int16_t)((int16_t)(bx * 0xEC) >> 8);
    default: return ax;
    }
}

// 1E67Ah: a four-armed equaliser, an arm per digital channel, each arm's
// joints following the channel's volume through the three scalers.
bool Demo::mot1E67A() {
    const uint32_t p = r32(0x1CF1F);
    const uint32_t f1 = r32(0x1CF13), f2 = r32(0x1CF17), f3 = r32(0x1CF1B);
    struct Arm {
        int sign;
        uint32_t base, a1, a2, b1, b2, c1, c2;
    };
    const Arm arms[4] = {
        {-1, 0x00, 0x38, 0x4D, 0x54, 0x31, 0x1C, 0x69},
        {-1, 0x09, 0x3A, 0x41, 0x1E, 0x5D, 0x25, 0x56},
        {+1, 0x0E, 0x3F, 0x46, 0x23, 0x62, 0x2A, 0x5B},
        {+1, 0x17, 0x48, 0x4F, 0x2C, 0x6B, 0x33, 0x64},
    };
    for (uint32_t i = 0; i < 4; i++) {
        const Arm& a = arms[i];
        int16_t v = a.sign < 0 ? (int16_t)(m8(0x34A3 + i) * -6 - 0x23) : (int16_t)(m8(0x34A3 + i) * 6 + 0x23);
        w16(p + a.base, (uint16_t)v);
        v = scale1CF13(f1, v);
        w16(p + a.a1, (uint16_t)v);
        w16(p + a.a2, (uint16_t)v);
        v = scale1CF13(f2, v);
        w16(p + a.b1, (uint16_t)v);
        w16(p + a.b2, (uint16_t)v);
        v = scale1CF13(f3, v);
        w16(p + a.c1, (uint16_t)v);
        w16(p + a.c2, (uint16_t)v);
    }
    for (uint32_t i = 0; i < 4; i++) m8(0x34A3 + i) = decay(m8(0x34A3 + i));
    return rotateMove();
}

// 1E7DCh: two rings of seven; one ball of each lit (type 2) runs round its
// ring, placed by two springs.
bool Demo::mot1E7DC() {
    springPair(0x1D143, 2);
    const int16_t s = (int16_t)r16(0x1D143);
    springPair(0x1D147, 2);
    const int16_t d = (int16_t)r16(0x1D147);
    m8(0x1D0DF + m8(0x1D141) + 6) = 1;
    uint8_t a = (uint8_t)(m8(0x1D141) + 7);
    if (a >= 0x31) a = 0;
    m8(0x1D141) = a;
    const uint32_t pa = 0x1D0DF + a;
    m8(pa + 6) = 2;
    m8(0x1D0DF + m8(0x1D142) + 6) = 1;
    uint8_t b = (uint8_t)(m8(0x1D142) + 7);
    if (b >= 0x62) b = 0x31;
    m8(0x1D142) = b;
    const uint32_t pb = 0x1D0DF + b;
    m8(pb + 6) = 2;
    w16(pb, (uint16_t)s);
    w16(pb + 2, (uint16_t)d);
    w16(pa + 2, (uint16_t)s);
    w16(pa + 4, (uint16_t)-d);
    return rotateMove();
}

// 1E8B1h: sixteen balls, x and z each on a spring of its own.
bool Demo::mot1E8B1() {
    for (uint32_t i = 0; i < 16; i++) {
        const uint32_t s = 0x1D1E9 + 4 * i, p = 0x1D179 + 7 * i;
        springPair(s, 1);
        w16(p, r16(s));
        springPair(s + 0x40, 1);
        w16(p + 4, r16(s + 0x40));
    }
    return rotateMove();
}

// 1E8FFh: two snakes; each segment takes the place of the one ahead, the
// heads on springs.
bool Demo::mot1E8FF() {
    for (uint32_t i = 0; i < 9; i++) {
        const uint32_t s = 0x1D2DF - 7 * i, d = s + 7;
        w16(d, r16(s));
        w16(d + 4, r16(s + 4));
        w16(d + 0x46, r16(s + 0x46));
        w16(d + 0x4A, r16(s + 0x4A));
    }
    springPair(0x1D333, 2);
    const int16_t x = (int16_t)r16(0x1D333);
    springPair(0x1D337, 2);
    const int16_t z = (int16_t)r16(0x1D337);
    w16(0x1D2A7, (uint16_t)x);
    w16(0x1D2AB, (uint16_t)z);
    w16(0x1D2ED, (uint16_t)-x);
    w16(0x1D2F1, (uint16_t)-z);
    return rotateMove();
}

// 1E9A7h: a shape whose points are set from two springs, halved and
// negated into the other points.
bool Demo::mot1E9A7() {
    springPair(0x1D3FC, 1);
    springPair(0x1D400, 1);
    auto spread = [&](int32_t v, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                      uint32_t f, uint32_t g, uint32_t h) {
        int32_t s = 0x37 - v;
        w16(a, (uint16_t)s);
        s = -s;
        w16(b, (uint16_t)s);
        int32_t x = s >> 1;
        const int32_t keep = x;
        w16(c, (uint16_t)x);
        x = -x;
        w16(d, (uint16_t)x);
        x >>= 1;
        w16(e, (uint16_t)x);
        x = -x;
        w16(f, (uint16_t)x);
        x += keep;
        w16(g, (uint16_t)x);
        x = -x;
        w16(h, (uint16_t)x);
    };
    spread((int16_t)r16(0x1D3FC), 0x1D3A1, 0x1D3BD, 0x1D3AF, 0x1D393, 0x1D38C, 0x1D3A8, 0x1D39A, 0x1D3B6);
    spread((int16_t)r16(0x1D400), 0x1D3DB, 0x1D3F7, 0x1D3E9, 0x1D3CD, 0x1D3C6, 0x1D3E2, 0x1D3D4, 0x1D3F0);
    return rotateMove();
}

// 1EACFh: two springs, and the values each will have 3, 6 and 9 steps
// later, scaled, as a wave travelling along a shape.
void Demo::wave1EACF(uint32_t a) {
    auto ahead = [&](uint32_t at, uint32_t o1, uint32_t o2, uint32_t o3) {
        uint16_t x = r16(at), v = r16(at + 2);
        spring(x, v);
        w16(at, x);
        w16(at + 2, v);
        for (int i = 0; i < 3; i++) spring(x, v);
        int16_t c = (int16_t)((int16_t)x >> 1);
        w16(o1, (uint16_t)(c + (c >> 1)));
        for (int i = 0; i < 3; i++) spring(x, v);
        w16(o2, (uint16_t)((int16_t)x >> 1));
        for (int i = 0; i < 3; i++) spring(x, v);
        w16(o3, (uint16_t)((int16_t)x >> 2));
    };
    ahead(a, a + 8, a + 0x0C, a + 0x10);
    ahead(a + 4, a + 0x0A, a + 0x0E, a + 0x12);
}

// 1EA82h and 1EBCFh: the wave laid out on four points and their mirror
// images (1EB9Ah calls back 1EAA5h / 1EBF2h for each). 1EB9Ah ends by
// jumping to 1E1A6h, so these objects spin, move and read their script
// twice a frame - the first result is dropped.
bool Demo::mot1EA82() {
    wave1EACF(0x1D564);
    const uint32_t c = 0x1D564;
    const uint32_t src[4][2] = {{c + 8, c + 0x0A}, {c + 0x0C, c + 0x0E}, {c + 0x10, c + 0x12}, {c, c + 4}};
    uint32_t p = 0x1D4F4;
    for (auto& s : src) {
        int16_t x = (int16_t)r16(s[0]), z = (int16_t)r16(s[1]);
        w16(p, (uint16_t)x);
        w16(p + 4, (uint16_t)z);
        x = (int16_t)-x;
        w16(p + 0x1C, (uint16_t)x);
        w16(p + 0x20, (uint16_t)z);
        z = (int16_t)-z;
        w16(p + 0x38, (uint16_t)x);
        w16(p + 0x3C, (uint16_t)z);
        x = (int16_t)-x;
        w16(p + 0x54, (uint16_t)x);
        w16(p + 0x58, (uint16_t)z);
        p += 7;
    }
    rotateMove();
    return generic();
}

bool Demo::mot1EBCF() {
    wave1EACF(0x1D643);
    const uint32_t c = 0x1D643;
    const uint32_t src[4][2] = {{c + 8, c + 0x0A}, {c + 0x0C, c + 0x0E}, {c + 0x10, c + 0x12}, {c, c + 4}};
    uint32_t p = 0x1D5C5;
    for (auto& s : src) {
        int16_t x = (int16_t)r16(s[0]), z = (int16_t)r16(s[1]);
        w16(p, (uint16_t)x);
        w16(p + 4, (uint16_t)z);
        x = (int16_t)-x;
        w16(p + 0x1C, (uint16_t)z);
        w16(p + 0x20, (uint16_t)x);
        z = (int16_t)-z;
        w16(p + 0x38, (uint16_t)x);
        w16(p + 0x3C, (uint16_t)z);
        x = (int16_t)-x;
        w16(p + 0x54, (uint16_t)z);
        w16(p + 0x58, (uint16_t)x);
        p += 7;
    }
    rotateMove();
    return rotateMove();
}

// 1EC1Ch: two rings of eight; the lit ball runs round each, and the ball
// type of the whole object steps through a small table at 1D711h.
bool Demo::mot1EC1C() {
    const uint8_t t = m8(0x1D711 + m8(0x1D6FF));
    m8(0x1D6FF) = t;
    m8(0x1D706) = t;
    springPair(0x1D709, 2);
    int16_t s = (int16_t)r16(0x1D709);
    springPair(0x1D70D, 2);
    const int16_t d = (int16_t)r16(0x1D70D);
    m8(0x1D689 + m8(0x1D707) + 6) = 0;
    uint8_t a = (uint8_t)(m8(0x1D707) + 7);
    if (a >= 0x38) a = 0;
    m8(0x1D707) = a;
    const uint32_t pa = 0x1D689 + a;
    m8(pa + 6) = 1;
    m8(0x1D689 + m8(0x1D708) + 6) = 0;
    uint8_t b = (uint8_t)(m8(0x1D708) + 7);
    if (b >= 0x70) b = 0x38;
    m8(0x1D708) = b;
    const uint32_t pb = 0x1D689 + b;
    m8(pb + 6) = 1;
    const int16_t q = (int16_t)(s >> 2);
    w16(pb + 4, (uint16_t)q);
    w16(pa + 4, (uint16_t)q);
    s = (int16_t)(s + 0x1E);
    if (s <= 0) s = 0;
    w16(pb, (uint16_t)s);
    w16(pb + 2, (uint16_t)d);
    s = (int16_t)-s;
    w16(pa, (uint16_t)s);
    w16(pa + 2, (uint16_t)d);
    return rotateMove();
}

// 1ED03h: two chains following their heads; one spring swings the head of
// whichever side it is on.
bool Demo::mot1ED03() {
    for (uint32_t i = 0; i < 9; i++) {
        const uint32_t d = 0x1D754 + 7 * i, s = d + 7;
        w16(d, r16(s));
        w16(d + 4, r16(s + 4));
        w16(d + 0x46, r16(s + 0x46));
        w16(d + 0x4A, r16(s + 0x4A));
    }
    springPair(0x1D7E0, 2);
    const int16_t x = (int16_t)r16(0x1D7E0);
    if (x > 0) {
        w16(0x1D797, (uint16_t)x);
        w16(0x1D793, 0);
        w16(0x1D7DD, (uint16_t)-x);
        w16(0x1D7D9, 0);
    } else {
        w16(0x1D793, (uint16_t)x);
        w16(0x1D797, 0);
        w16(0x1D7D9, (uint16_t)-x);
        w16(0x1D7DD, 0);
    }
    return rotateMove();
}

// 1EDACh: thirteen balls, one per channel, digital and FM, raised by its
// note volume.
bool Demo::mot1EDAC() {
    for (uint32_t i = 0; i < 13; i++) {
        const uint8_t v = m8(0x34A3 + i);
        w16(0x1D812 + 7 * i + 2, (uint16_t)(v * -6));
        m8(0x34A3 + i) = decay(v);
    }
    return rotateMove();
}

// 1EDD7h: a column whose balls take the height of the one above; the top
// one bounces on a spring.
bool Demo::mot1EDD7() {
    for (uint32_t i = 0; i < 14; i++) w16(0x1D94B + 7 * i + 2, r16(0x1D94B + 7 * (i + 1) + 2));
    uint16_t x = r16(0x1D9B4), v = r16(0x1D9B6);
    spring(x, v);
    spring(x, v);
    if ((int16_t)x >= 0) v = (uint16_t)-10;
    w16(0x1D9B4, x);
    w16(0x1D9B6, v);
    w16(0x1D9AF, x);
    return rotateMove();
}

// 1EE2Dh / 1EE6Eh: two cursors chase round twenty balls, recolouring them.
bool Demo::mot1EE2D() {
    for (auto [at, type] : {std::pair<uint32_t, uint8_t>{0x1DA76, 2}, {0x1DA77, 1}}) {
        uint8_t n = (uint8_t)(m8(at) + 1);
        if (n >= 0x14) n = 0;
        m8(at) = n;
        m8(0x1D9F0 + 7 * n) = type;
    }
    return rotateMove();
}

bool Demo::mot1EE6E() {
    for (auto [at, type] : {std::pair<uint32_t, uint8_t>{0x1DB36, 0}, {0x1DB37, 1}}) {
        uint8_t n = (uint8_t)(m8(at) + 1);
        if (n >= 0x14) n = 0;
        m8(at) = n;
        m8(0x1DAB0 + 7 * n) = type;
    }
    return rotateMove();
}

}  // namespace rbg
