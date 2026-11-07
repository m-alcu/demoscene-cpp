// The loader's unpacker (ANGEL.EXE, CS:02F8h-04D5h), as it runs: 16-bit
// offsets in real-mode segments, the source and destination segments moved
// on (normalised) when the stream says so.
#include "loader.h"

namespace angel {

namespace {
// the loader's tables at CS:050Ah-054Fh (lengths, offset high bytes)
const uint8_t kTab[0x50] = {
    4, 0, 5, 6, 7, 0, 0, 0, 0, 0, 8,                                // 050Ah
    9, 10, 11, 12, 25, 0, 0, 0, 0, 0, 13,                           // 0515h
    14, 15, 16, 17, 18, 0, 0, 0, 0, 0, 19, 20, 21, 22, 23, 24,      // 0520h
    1, 2, 0, 0, 3, 4, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0,                 // 0530h
    7, 8, 9, 10, 11, 12, 13, 65, 78, 71, 69, 76, 46, 69, 88, 69,
    0, 0, 0, 0, 0, 0};
uint8_t tab(int at) { return kTab[at - 0x50A]; }

struct Unpacker {
    Machine& m;
    uint16_t ds, es, si = 0, di = 0x100;
    uint16_t bp = 0;
    int dx = 0;

    uint8_t lodsb() { return m.r8(Machine::lin(ds, si++)); }
    uint16_t lodsw() {
        const uint16_t v = m.r16(Machine::lin(ds, si));
        si = (uint16_t)(si + 2);
        return v;
    }
    // shr bp,1; dec dx: the bit shifted out, and 16 more when the count
    // runs out (the reload leaves CF as it was)
    int bit() {
        const int b = bp & 1;
        bp >>= 1;
        if (--dx == 0) bp = lodsw(), dx = 16;
        return b;
    }
};
}  // namespace

Entry unpack(Machine& m, uint16_t src, uint16_t dst) {
    Unpacker u{m, src, dst};
    u.bp = u.lodsw();
    u.dx = 16;
    for (;;) {
        if (!u.bit()) {                                     // a literal
            m.w8(Machine::lin(u.es, u.di), u.lodsb());
            u.si = u.si, u.di = (uint16_t)(u.di + 1);
            continue;
        }
        uint16_t cx, bx = 0;
        bx = (uint16_t)(bx << 1 | u.bit());
        bx = (uint16_t)(bx << 1 | u.bit());
        bool viaEscape = false;
        if ((bx & 0xFF) >= 2) {
            cx = bx;                                        // 2, 3
        } else {
            bx = (uint16_t)(bx << 1 | u.bit());
            if (bx != 0) {
                bx = (uint16_t)(bx << 1 | u.bit());
                if ((bx & 0xFF) >= 5) {
                    bx = (uint16_t)(bx << 1 | u.bit());
                    if ((bx & 0xFF) > 0x0C) viaEscape = true;
                }
            }
            if (!viaEscape) cx = tab(0x50A + bx);
        }
        if (viaEscape) {                                    // 0304h
            bx = (uint16_t)((bx & 0xFF00) | (bx & 3));
            bx = (uint16_t)(bx << 1 | u.bit());
            bool second = false;
            if ((bx & 0xFF) >= 5) {
                bx = (uint16_t)(bx << 1 | u.bit());
                if ((bx & 0xFF) > 0x0C) second = true;
            }
            if (second) {                                   // 036Ch
                bx = (uint16_t)((bx & 0xFF00) | (bx & 3));
                bx = (uint16_t)(bx << 1 | u.bit());
                if ((bx & 0xFF) >= 5) bx = (uint16_t)(bx << 1 | u.bit());
                cx = tab(0x520 + bx);
            } else {                                        // 0327h
                cx = tab(0x515 + bx);
                if (cx == 0x19) {
                    const uint8_t al = u.lodsb();
                    cx = (uint16_t)(0x19 + al);
                    if (al >= 0xFE) {
                        // renormalise: DI below 2000h+16, SI below 16
                        const uint16_t b = (uint16_t)(u.di - 0x2000);
                        u.di = (uint16_t)((u.di & 0x0F) + 0x2000);
                        u.es = (uint16_t)(u.es + (b >> 4));
                        const uint16_t s = u.si;
                        u.si &= 0x0F;
                        u.ds = (uint16_t)(u.ds + (s >> 4));
                        if (al == 0xFF) break;              // the end
                        continue;
                    }
                }
            }
        }
        // 028Eh: the offset
        uint16_t off;
        bx = 0;
        if (cx == 2 || u.bit()) {
            off = u.lodsb();                                // high byte 0
        } else {
            bx = (uint16_t)u.bit();
            bx = (uint16_t)(bx << 1 | u.bit());
            bx = (uint16_t)(bx << 1 | u.bit());
            uint8_t hi;
            if ((bx & 0xFF) < 2) {
                hi = tab(0x530 + bx);
            } else {
                bx = (uint16_t)(bx << 1 | u.bit());
                if ((bx & 0xFF) < 8) {
                    hi = tab(0x530 + bx);
                } else {
                    bx = (uint16_t)(bx << 1 | u.bit());
                    if ((bx & 0xFF) < 0x17) {
                        hi = tab(0x530 + bx);
                    } else {
                        bx = (uint16_t)(bx << 1 | u.bit());
                        hi = (uint8_t)(bx & 0xDF);
                    }
                }
            }
            off = (uint16_t)(hi << 8 | u.lodsb());
        }
        // rep movsb from ES:DI-off (overlapping: byte by byte)
        uint16_t s = (uint16_t)(u.di - off);
        for (uint16_t k = 0; k < cx; k++) {
            m.w8(Machine::lin(u.es, u.di), m.r8(Machine::lin(u.es, s)));
            u.di = (uint16_t)(u.di + 1), s = (uint16_t)(s + 1);
        }
    }
    // the relocations: count, segment, offsets
    const uint16_t load = (uint16_t)(dst + 0x10);
    for (;;) {
        const uint8_t n = u.lodsb();
        if (!n) break;
        const uint16_t seg = (uint16_t)(u.lodsw() + load);
        for (int k = 0; k < n; k++) {
            const uint16_t o = u.lodsw();
            const uint32_t a = Machine::lin(seg, o);
            m.w16(a, (uint16_t)(m.r16(a) + load));
        }
    }
    Entry e;
    e.ss = (uint16_t)(u.lodsw() + load);
    e.sp = u.lodsw();
    e.cs = (uint16_t)(u.lodsw() + load);
    e.ip = u.lodsw();
    return e;
}

}  // namespace angel
