// The precalculation (1B12Bh): the objects made and set up, two pictures
// drawn, the ripple's frames and the distance table computed.
#include "demo.h"

namespace drift {

void Demo::precalc() {
    const uint32_t heap = m_.r32(8);
    uint32_t edi = makeTube(heap + 0xBC9E0);
    unpackObjects(0x14E41, edi);
    objInit(0x14DBD, heap + 0xDBDE0);
    objInit(0x14E01, heap + 0xDBDE0);
    precalcPictures();
    ripplePrecalc();
    distances();
}

// 1B5F4h: the room (the object at 14E01h): its vertices from words to
// dwords, its faces made from strips (1B66Bh), then mirrored (1B6C4h)
uint32_t Demo::makeTube(uint32_t edi) {
    uint32_t esi = m_.r32(0x14E25);
    m_.w32(0x14E25, edi);
    for (uint32_t n = m_.r32(0x14E1D) * 3; n; n--, esi += 2, edi += 4) m_.w32(edi, (uint32_t)(int32_t)m_.s16(esi));
    esi = m_.r32(0x14E29);
    m_.w32(0x14E29, edi);
    // 1B66Bh: COUNT copies of the faces at ESI, vertex numbers + k x STEP,
    // A and B swapped for each other's places (A becomes 2A - B, B becomes A)
    auto strip = [&](uint32_t count, uint32_t a, uint32_t b, uint32_t step) {
        m_.w16(0x10108, count);
        uint32_t base = 0;
        do {
            uint32_t s = esi;
            uint32_t eax = m_.r8(s++) + 0x800000;
            m_.w32(edi, eax), edi += 4;
            m_.w16(0x1010C, eax & 0xFF);
            do {
                uint32_t v = m_.r8(s++) + base;
                if (v == a || v == b) v = v + a - b;
                m_.w32(edi, v), edi += 4;
                m_.w16(0x1010C, m_.r16(0x1010C) - 1);
            } while (m_.r16(0x1010C));
            base += step;
            m_.w16(0x10108, m_.r16(0x10108) - 1);
        } while (m_.r16(0x10108));
        const uint32_t n = m_.r8(esi++);
        esi += n;
    };
    strip(1, 0, 0, 0);
    for (int k = 0x21; k; k--) strip(7, 0x9A, 0x134, 0x16);
    // 1B6C4h: the 4Eh faces again, reversed, vertex numbers + 9Ah
    esi = m_.r32(0x14E29);
    for (int k = 0x4E; k; k--) {
        uint32_t eax = m_.r32(esi);
        esi += 4;
        m_.w32(edi, eax), edi += 4;
        const uint32_t n = eax & 0xFF;
        esi += n * 4;
        uint32_t s = esi;
        for (uint32_t c = n; c; c--) {
            s -= 4;
            m_.w32(edi, m_.r32(s) + 0x9A), edi += 4;
        }
    }
    return edi;
}

// 1B6DEh: the objects of LIST from bytes: vertices scaled by [+2Ch]/[+30h],
// faces' counts given the colour in [+34h]
uint32_t Demo::unpackObjects(uint32_t esi, uint32_t edi) {
    for (; m_.r8(esi) != 0xFF; esi += 0x40) {
        uint32_t ebx = m_.r32(esi + 0x24);
        m_.w32(esi + 0x24, edi);
        const int32_t mul = m_.s32(esi + 0x2C), div = m_.s32(esi + 0x30);
        for (uint32_t n = m_.r32(esi + 0x1C) * 3; n; n--, ebx++, edi += 4)
            m_.w32(edi, (uint32_t)(int32_t)((int64_t)(int32_t)((uint32_t)(int32_t)m_.s8(ebx) * (uint32_t)mul) / div));
        ebx = m_.r32(esi + 0x28);
        m_.w32(esi + 0x28, edi);
        const uint32_t colour = m_.r32(esi + 0x34);
        for (uint32_t f = m_.r32(esi + 0x20); f; f--) {
            uint32_t n = m_.r8(ebx);
            m_.w32(edi, n + colour);
            ebx++, edi += 4;
            for (; n; n--, ebx++, edi += 4) m_.w32(edi, m_.r8(ebx));
        }
    }
    return edi;
}

// 1B47Dh: the room drawn twice (on C0h, then on 75h, each taken off
// again) into [8]+10000h and, with the wall texture at 11EBDh tiled in,
// into [8]+1FA00h
void Demo::precalcPictures() {
    const uint32_t heap = m_.r32(8);
    auto fill = [&](uint32_t v) {
        for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + i, v);
    };
    auto sub = [&](uint32_t v) {
        for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + i, m_.r32(heap + i) - v);
    };
    auto room = [&] {
        m_.w32(0x100F8, 0x14E01);
        matrix();
        transform();
        uint32_t edi = m_.r32(0x100EC);
        uint32_t f = m_.r32(0x14E01 + 0x28);
        m_.w32(0x100E8, 0x4E);
        for (int k = 0x4E; k; k--) {
            m_.w32(edi, f);
            edi += 8;
            f += m_.r8(f) * 4 + 4;
        }
        draw();
    };
    fill(0xC0C0C0C0);
    room();
    sub(0x80808080);
    for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + 0x10000 + i, m_.r32(heap + i));
    fill(0x75757575);
    room();
    sub(0x75757575);
    uint32_t edi = heap;
    auto tile = [&](int rows) {
        uint32_t esi = 0x11EBD;
        for (int r = rows; r; r--) {
            for (int rep = 5; rep; rep--) {
                for (int k = 0; k < 0x10; k++, esi += 4, edi += 4) m_.w32(edi, m_.r32(edi) + m_.r32(esi));
                esi -= 0x40;
            }
            esi += 0x40;
        }
    };
    tile(0x80);
    tile(0x48);
    for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + 0x1FA00 + i, m_.r32(heap + i));
    m_.w32(0x14E11, 0xF9000000);
    m_.w32(0x14E15, 0);
    m_.w32(0x14E19, 0x2BC0000);
}

}  // namespace drift
