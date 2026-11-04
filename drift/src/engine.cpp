// The 3D engine (10918h-11C26h): objects of 40h bytes in lists ended by
// FFh, Gouraud-shaded polygons drawn into the frame buffer (the heap's
// start, [8]), sorted by a binary radix sort on depth.
//
// An object:  +0 flags (bit 0 drawn, bit 1 its own normal set), +1 the
//   shading's shift, +4/+8/+0Ch angles (0-7FFh), +10h/+14h/+18h position
//   (8 bits of fraction), +1Ch vertices, +20h faces, +24h vertex data (3
//   dwords each), +28h face data, +2Ch transformed vertices (10h each:
//   screen y:x packed, X, Y, Z; X becomes the vertex's shade), +30h face
//   normals, +34h vertex normals, +38h the animation, +3Ch more normals.
// A face: count, mode (1: added to the buffer), colour, 0, then the
//   vertices (offsets, turned into pointers by 10918h).
//
// The rotation is kept in the transform's code: 10D10h writes the nine
// coefficients into the immediates of the IMULs at 10FA0h (and 11040h
// copies them into its own); the polygon filler keeps its colour, its
// edges' first shade and the span table's bounds in immediates too. All
// of them stay at their offsets in the program's memory here.
#include "demo.h"

namespace drift {

namespace {
inline int32_t idiv(int64_t a, int32_t b) { return (int32_t)(a / b); }
inline uint32_t rol16(uint32_t v) { return (v << 16) | (v >> 16); }
}  // namespace

// 11A0Ch: square root, two or three Newton steps from a guess by range
uint32_t Demo::sqrt(uint32_t n) {
    uint32_t g;
    int steps = 2;
    if (n <= 0x10000) {
        g = n <= 0x10 ? 4 : n <= 0x100 ? 0x0A : n <= 0x1000 ? 0x26 : n <= 0x4000 ? 0x60 : 0xC0;
    } else if (n <= 0x1000000) {
        g = n <= 0x40000 ? 0x180 : n <= 0x100000 ? 0x300 : n <= 0x200000 ? 0x4D4
            : n <= 0x400000 ? 0x6D4 : n <= 0x800000 ? 0x9A8 : 0xDA8;
    } else if (n <= 0x2000000) {
        g = 0x1350;
    } else if (n <= 0x4000000) {
        g = 0x1B50;
    } else if (n <= 0x20000000) {
        g = 0x3A98, steps = 3;
    } else {
        g = 0x87C3, steps = 3;
    }
    uint32_t r = g;
    for (int i = 0; i < steps; i++) r = (n / r + r) >> 1;
    return r;
}

// 10918h: buffers for the lists ([100E0h]...) the first time, then each
// object's: transformed vertices, normals; face vertex numbers become
// pointers; the normals computed.
void Demo::objInit(uint32_t list, uint32_t edi) {
    const uint32_t start = edi;
    m_.w32(0x100F8, list);
    const uint32_t used = m_.r32(0x100FC);
    edi += used;
    if (!used) {
        m_.w32(0x100E0, edi), edi += 0x40;
        m_.w32(0x100E4, edi), edi += 0x640;
        m_.w32(0x100EC, edi), edi += 0x3E80;
        m_.w32(0x100F0, edi), edi += 0x3E80;
        m_.w32(0x100F4, edi), edi += 0x3E80;
    }
    for (;;) {
        const uint32_t o = m_.r32(0x100F8);
        const uint8_t fl = m_.r8(o);
        if (fl == 0xFF) break;
        m_.w32(o + 0x2C, edi);
        uint32_t f = m_.r32(o + 0x28);
        for (uint32_t c = m_.r32(o + 0x20); c; c--) {
            uint32_t n = m_.r8(f);
            f += 4;
            for (; n; n--, f += 4) m_.w32(f, (m_.r32(f) << 4) + edi);
        }
        edi += m_.r32(o + 0x1C) << 5;
        m_.w32(o + 0x30, edi);
        edi += m_.r32(o + 0x20) * 12;
        m_.w32(o + 0x34, edi);
        if (fl & 2) {
            edi += m_.r32(o + 0x1C) * 12;
            m_.w32(o + 0x3C, edi);
        }
        edi += m_.r32(o + 0x1C) << 4;
        faceNormals();
        vertexNormals();
        m_.w32(0x100F8, o + 0x40);
    }
    m_.w32(0x100FC, used + (edi - start));
}

// 10A00h: each face's normal from its first three vertices' coordinates
void Demo::faceNormals() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w16(0x10108, m_.r32(o + 0x20));
    m_.w32(0x10100, m_.r32(o + 0x2C));
    m_.w32(0x10104, m_.r32(o + 0x24));
    uint32_t edi = m_.r32(o + 0x30);
    uint32_t esi = m_.r32(o + 0x28);
    auto coords = [&](uint32_t p) { return ((p - m_.r32(0x10100)) >> 2) * 3 + m_.r32(0x10104); };
    auto edge = [&](uint32_t pa, uint32_t pb, uint32_t out) {
        const uint32_t a = coords(pa), b = coords(pb);
        const int32_t dx = (int32_t)(m_.r32(b) - m_.r32(a)) >> 1;
        const int32_t dy = (int32_t)(m_.r32(b + 4) - m_.r32(a + 4)) >> 1;
        const int32_t dz = (int32_t)(m_.r32(b + 8) - m_.r32(a + 8)) >> 1;
        const int32_t len = (int32_t)sqrt((uint32_t)dy * (uint32_t)dy + (uint32_t)dx * (uint32_t)dx + (uint32_t)dz * (uint32_t)dz);
        m_.w32(out, (uint32_t)idiv((int32_t)((uint32_t)dx << 8), len));
        m_.w32(out + 4, (uint32_t)idiv((int32_t)((uint32_t)dy << 8), len));
        m_.w32(out + 8, (uint32_t)idiv((int32_t)((uint32_t)dz << 8), len));
    };
    for (;;) {
        edge(m_.r32(esi + 4), m_.r32(esi + 8), 0x109E8);
        edge(m_.r32(esi + 8), m_.r32(esi + 12), 0x109F4);
        auto v = [&](uint32_t a) { return m_.s32(a); };
        const int32_t x = (int32_t)((uint32_t)v(0x109F0) * (uint32_t)v(0x109F8) - (uint32_t)v(0x109EC) * (uint32_t)v(0x109FC)) >> 3;
        const int32_t y = (int32_t)((uint32_t)v(0x109E8) * (uint32_t)v(0x109FC) - (uint32_t)v(0x109F0) * (uint32_t)v(0x109F4)) >> 3;
        const int32_t z = (int32_t)((uint32_t)v(0x109EC) * (uint32_t)v(0x109F4) - (uint32_t)v(0x109E8) * (uint32_t)v(0x109F8)) >> 3;
        const int32_t len = (int32_t)sqrt((uint32_t)x * (uint32_t)x + (uint32_t)y * (uint32_t)y + (uint32_t)z * (uint32_t)z);
        m_.w32(edi, (uint32_t)idiv((int32_t)((uint32_t)x << 8), len));
        m_.w32(edi + 4, (uint32_t)idiv((int32_t)((uint32_t)y << 8), len));
        m_.w32(edi + 8, (uint32_t)idiv((int32_t)((uint32_t)z << 8), len));
        esi += m_.r8(esi) * 4 + 4;
        edi += 12;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
        if (!m_.r16(0x10108)) return;
    }
}

// 10BE1h: each vertex's normal, the sum of its faces', normalised
void Demo::vertexNormals() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w16(0x10108, m_.r32(o + 0x1C));
    uint32_t edi = m_.r32(o + 0x34);
    uint32_t ebp = m_.r32(o + 0x2C);
    for (;;) {
        m_.w16(0x1010C, m_.r32(o + 0x20));
        uint32_t ebx = m_.r32(o + 0x28);
        uint32_t edx = m_.r32(o + 0x30);
        bool first = true;
        while (m_.r16(0x1010C)) {
            uint32_t ecx = m_.r8(ebx);
            ebx += 4;
            bool found = false;
            for (; ecx; ecx--, ebx += 4)
                if (m_.r32(ebx) == ebp) {
                    found = true;
                    break;
                }
            if (found) {
                for (int k = 0; k < 3; k++)
                    m_.w32(edi + 4 * k, first ? m_.r32(edx + 4 * k) : m_.r32(edi + 4 * k) + m_.r32(edx + 4 * k));
                ebx += ecx << 2;
                first = false;
            }
            edx += 12;
            m_.w16(0x1010C, m_.r16(0x1010C) - 1);
        }
        const int32_t x = m_.s32(edi), y = m_.s32(edi + 4), z = m_.s32(edi + 8);
        const int32_t len = (int32_t)sqrt((uint32_t)x * (uint32_t)x + (uint32_t)y * (uint32_t)y + (uint32_t)z * (uint32_t)z);
        m_.w32(edi, (uint32_t)idiv((int32_t)((uint32_t)x << 8), len));
        m_.w32(edi + 4, (uint32_t)idiv((int32_t)((uint32_t)y << 8), len));
        m_.w32(edi + 8, (uint32_t)idiv((int32_t)((uint32_t)z << 8), len));
        ebp += 0x10;
        edi += 12;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
        if (!m_.r16(0x10108)) return;
    }
}

// 10D10h: the rotation of the object at [100F8h] into the transform's
// immediates, from the sine table at 10114h (byte offsets, 800h = a turn)
void Demo::matrix() {
    const uint32_t o = m_.r32(0x100F8);
    const uint32_t a = m_.r32(o + 4), b = m_.r32(o + 8), c = m_.r32(o + 0x0C);
    auto S = [&](uint32_t x) { return m_.s32(0x10114 + (x & 0x7FF)); };
    int32_t v;
    const uint32_t ecx = (a + c - b) & 0x7FF, edx = (a + c + b) & 0x7FF;
    v = S(b + 0x200 - c) + S(c + b + 0x200);
    v = (int32_t)((uint32_t)v << 1);
    v -= m_.s32(0x10114 + ecx);
    v += S(a - b - c);
    v += m_.s32(0x10114 + edx);
    v -= S(a + b - c);
    m_.w32(0x10FA4, (uint32_t)(v >> 2));
    v = S(b + 0x200 - c) - S(c + b + 0x200);
    v = (int32_t)((uint32_t)v << 1);
    v -= m_.s32(0x10114 + edx);
    v += S(c - b - a);
    v += S(c + b - a);
    v -= m_.s32(0x10114 + ecx);
    m_.w32(0x10FD4, (uint32_t)(v >> 2));
    const uint32_t ecx2 = (ecx + 0x200) & 0x7FF, edx2 = (edx + 0x200) & 0x7FF;
    v = S(c + b) - S(c - b);
    v = (int32_t)((uint32_t)v << 1);
    v += S(a + 0x200 - c - b);
    v += S(a + b + 0x200 - c);
    v -= m_.s32(0x10114 + ecx2);
    v -= m_.s32(0x10114 + edx2);
    m_.w32(0x10FE4, (uint32_t)(v >> 2));
    v = S(c + b) - S(b - c);
    v = (int32_t)((uint32_t)v << 1);
    v += S(a + 0x200 - b - c);
    v += m_.s32(0x10114 + ecx2);
    v -= S(a + b + 0x200 - c);
    v -= m_.s32(0x10114 + edx2);
    m_.w32(0x10FAA, (uint32_t)(v >> 2));
    uint32_t p = (a + c) & 0x7FF, q = (a - c) & 0x7FF;
    m_.w32(0x10FB9, (uint32_t)((m_.s32(0x10114 + q) - m_.s32(0x10114 + p)) >> 1));
    p = (p + 0x200) & 0x7FF, q = (q + 0x200) & 0x7FF;
    m_.w32(0x10FC1, (uint32_t)((m_.s32(0x10114 + q) + m_.s32(0x10114 + p)) >> 1));
    p = (a + b) & 0x7FF, q = (a - b) & 0x7FF;
    m_.w32(0x10FB0, (uint32_t)((m_.s32(0x10114 + q) - m_.s32(0x10114 + p)) >> 1));
    p = (p + 0x200) & 0x7FF, q = (q + 0x200) & 0x7FF;
    m_.w32(0x10FDC, (uint32_t)((m_.s32(0x10114 + q) + m_.s32(0x10114 + p)) >> 1));
    m_.w32(0x10FC9, m_.r32(0x10114 + a));
}

// 10F70h: the vertices rotated, moved, projected (x scaled by 9/8)
void Demo::transform() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w32(0x10FEB, m_.r32(o + 0x10));
    m_.w32(0x10FF4, m_.r32(o + 0x14));
    m_.w32(0x10FFD, m_.r32(o + 0x18));
    m_.w16(0x10108, m_.r32(o + 0x1C));
    uint32_t edi = m_.r32(o + 0x2C), esi = m_.r32(o + 0x24);
    auto c = [&](uint32_t a) { return m_.r32(a); };
    for (;;) {
        uint32_t x = m_.r32(esi), y = m_.r32(esi + 4), z = m_.r32(esi + 8);
        uint32_t ebx = x * c(0x10FA4), ecx = x * c(0x10FAA), ebp = x * c(0x10FB0);
        ebx += y * c(0x10FB9), ecx += y * c(0x10FC1), ebp += y * c(0x10FC9);
        ecx += z * c(0x10FD4), ebp += z * c(0x10FDC);
        uint32_t eax = z * c(0x10FE4) + ebx;
        eax += c(0x10FEB);
        m_.w32(edi + 4, eax);
        ecx += c(0x10FF4);
        m_.w32(edi + 8, ecx);
        ebp += c(0x10FFD);
        m_.w32(edi + 0x0C, ebp);
        int32_t d = (int32_t)ebp >> 8;
        if (!d) d = 1;
        uint32_t sx = (uint32_t)idiv((int32_t)eax, d);
        sx = (uint32_t)((int32_t)(sx * 9) >> 3);
        const uint32_t sy = (uint32_t)idiv((int32_t)ecx, d);
        m_.w32(edi, ((sy << 16) | (sx & 0xFFFF)) + 0x6400A0);
        esi += 12;
        edi += 0x10;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
        if (!m_.r16(0x10108)) return;
    }
}

// 11040h: the vertex normals rotated (16 bits of fraction dropped)
void Demo::transformNormals() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w16(0x10108, m_.r32(o + 0x1C));
    uint32_t edi = m_.r32(o + 0x2C) + (m_.r32(o + 0x1C) << 4);
    uint32_t esi = m_.r32(o + 0x34);
    const uint32_t from[9] = {0x10FA4, 0x10FB9, 0x10FE4, 0x10FAA, 0x10FC1, 0x10FD4, 0x10FB0, 0x10FC9, 0x10FDC};
    const uint32_t to[9] = {0x110BC, 0x110D1, 0x11108, 0x110C2, 0x110D9, 0x110EC, 0x110C8, 0x110E1, 0x110FA};
    for (int k = 0; k < 9; k++) m_.w32(to[k], m_.r32(from[k]));
    auto c = [&](uint32_t a) { return m_.r32(a); };
    for (;;) {
        const uint32_t x = m_.r32(esi), y = m_.r32(esi + 4), z = m_.r32(esi + 8);
        uint32_t ebx = x * c(0x110BC), ecx = x * c(0x110C2), ebp = x * c(0x110C8);
        ebx += y * c(0x110D1), ecx += y * c(0x110D9), ebp += y * c(0x110E1);
        ecx += z * c(0x110EC);
        m_.w32(edi + 4, (uint32_t)((int32_t)ecx >> 16));
        ebp += z * c(0x110FA);
        m_.w32(edi + 8, (uint32_t)((int32_t)ebp >> 16));
        const uint32_t eax = z * c(0x11108) + ebx;
        m_.w32(edi, (uint32_t)((int32_t)eax >> 16));
        esi += 12;
        edi += 12;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
        if (!m_.r16(0x10108)) return;
    }
}

// 11123h: the visible faces of the drawn objects of LIST with their depths,
// sorted (an LSD radix sort, a bit at a time, through three lists) into
// [100ECh], [100E8h] of them.
void Demo::sortFaces(uint32_t list) {
    m_.w32(0x100F8, list);
    uint32_t edi = m_.r32(0x100EC), ebx = m_.r32(0x100F0);
    for (;; m_.w32(0x100F8, m_.r32(0x100F8) + 0x40)) {
        const uint32_t o = m_.r32(0x100F8);
        const uint8_t fl = m_.r8(o);
        if (fl == 0xFF) break;
        if (!(fl & 1)) continue;
        m_.w16(0x10108, m_.r32(o + 0x20));
        uint32_t f = m_.r32(o + 0x28);
        do {
            const uint32_t p1 = m_.r32(f + 8), p0 = m_.r32(f + 4), p2 = m_.r32(f + 12);
            const int32_t x1 = m_.s16(p1), y1 = m_.s16(p1 + 2);
            const int32_t ax = x1 - m_.s16(p0), ay = y1 - m_.s16(p0 + 2);
            const int32_t bx = m_.s16(p2) - x1, by = m_.s16(p2 + 2) - y1;
            const int32_t cross = (int32_t)((uint32_t)ax * (uint32_t)by - (uint32_t)ay * (uint32_t)bx);
            if (cross >= 0) {
                const uint32_t depth = (uint32_t)((m_.s32(p0 + 12) >> 17) + (m_.s32(p2 + 12) >> 17));
                if (depth & 1) {
                    m_.w32(edi, f), m_.w32(edi + 4, depth), edi += 8;
                } else {
                    m_.w32(ebx, f), m_.w32(ebx + 4, depth), ebx += 8;
                }
            }
            f += m_.r8(f) * 4 + 4;
            m_.w16(0x10108, m_.r16(0x10108) - 1);
        } while (m_.r16(0x10108));
    }
    if (edi == m_.r32(0x100EC) && ebx == m_.r32(0x100F0)) {
        m_.w32(0x100E8, 0);
        return;
    }
    m_.w16(0x10110, 0x0F);
    uint32_t bit = 2;
    // one pass: the lists IN1 (n1) and IN2 (n2) split by BIT, ones to the
    // front of 100ECh's list, zeros to OUT
    auto pass = [&](uint32_t in2, uint32_t out) {
        uint32_t n1 = (edi - m_.r32(0x100EC)) >> 3, n2 = (ebx - in2) >> 3;
        uint32_t esi = m_.r32(0x100EC);
        edi = m_.r32(0x100EC);
        ebx = out;
        auto split = [&](uint32_t n) {
            for (; n; n--, esi += 8) {
                const uint32_t f = m_.r32(esi), d = m_.r32(esi + 4);
                if (bit & d) m_.w32(edi, f), m_.w32(edi + 4, d), edi += 8;
                else m_.w32(ebx, f), m_.w32(ebx + 4, d), ebx += 8;
            }
        };
        split(n1);
        esi = in2;
        split(n2);
        bit <<= 1;
        m_.w16(0x10110, m_.r16(0x10110) - 1);
        return m_.r16(0x10110) != 0;
    };
    for (;;) {
        if (!pass(m_.r32(0x100F0), m_.r32(0x100F4))) break;
        if (!pass(m_.r32(0x100F4), m_.r32(0x100F0))) break;
    }
    // 11399h: the zeros after the ones
    for (uint32_t s = m_.r32(0x100F4), n = (ebx - s) >> 2; n; n--, s += 4, edi += 4) m_.w32(edi, m_.r32(s));
    m_.w32(0x100E8, (uint32_t)((int32_t)(edi - m_.r32(0x100EC)) >> 3));
}

// 11560h: each vertex's shade from its normal and the light at
// 11550h/11554h/11558h, into the transformed vertex's X
void Demo::light() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w32(0x1155C, m_.r8(o + 1));
    m_.w16(0x10108, m_.r32(o + 0x1C));
    uint32_t esi = m_.r32(o + 0x2C);
    uint32_t edi = esi + (m_.r32(o + 0x1C) << 4);
    for (;;) {
        int32_t dx = (m_.s32(esi + 4) >> 16) - m_.s32(0x11550);
        int32_t dy = (m_.s32(esi + 8) >> 16) - m_.s32(0x11554);
        int32_t dz = (m_.s32(esi + 12) >> 16) - m_.s32(0x11558);
        const uint32_t dot = (uint32_t)dx * m_.r32(edi) + (uint32_t)dy * m_.r32(edi + 4) + (uint32_t)dz * m_.r32(edi + 8);
        const uint32_t len = sqrt((uint32_t)dz * (uint32_t)dz + ((uint32_t)dx * (uint32_t)dx + (uint32_t)dy * (uint32_t)dy));
        int32_t s = -idiv((int32_t)dot, (int32_t)len) + 0x100;
        const int sh = m_.r32(0x1155C) & 31;
        s >>= sh;
        s -= (int32_t)((0x100u >> sh) + 1);
        if (s < 0) s = 0;
        m_.w32(esi + 4, (uint32_t)s);
        esi += 0x10;
        edi += 12;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
        if (!m_.r16(0x10108)) return;
    }
}

// 117B3h: the edge from (EBX = y:x, EBP shade) to the vertex at ESI,
// clipped to x 0-320, its start (and the clip point) to EDI
void Demo::clipEdgeShaded(uint32_t ebx, uint32_t ebp, uint32_t esi, uint32_t& edi) {
    auto sx = [](uint32_t v) { return (int32_t)(int16_t)v; };
    auto cut = [&](uint32_t& b, uint32_t& p, uint32_t ref, uint32_t refShade, bool right) {
        // the point where the edge from b to ref crosses x = 320 (right) or 0
        uint32_t eax = b, ecx = eax;
        if (right) b = (b & 0xFFFF0000) | ((b - 0x140) & 0xFFFF);
        ecx = (uint32_t)sx(ecx - m_.r16(ref));
        eax = (uint32_t)((int32_t)eax >> 16);
        eax = (eax & 0xFFFF0000) | ((eax - m_.r16(ref + 2)) & 0xFFFF);
        eax <<= 16;
        eax = (uint32_t)idiv((int32_t)eax, (int32_t)ecx);
        const int32_t edx = sx(b);
        eax = (uint32_t)((int32_t)eax * edx);
        eax &= 0xFFFF0000;
        b -= eax;
        b = (b & 0xFFFF0000) | (right ? 0x140u : 0u);
        const uint32_t slope = (uint32_t)idiv((int32_t)((p - refShade) << 16), (int32_t)ecx);
        p -= (uint32_t)((int32_t)(slope * (uint32_t)edx) >> 16);
    };
    auto over = [&](uint32_t v) { return sx(v) > 0x140; };
    auto under = [&](uint32_t v) { return (uint16_t)v > 0x140 && sx(v) <= 0x140; };
    if (over(ebx)) {
        if (m_.s16(esi) > 0x140) return;
        cut(ebx, ebp, esi, m_.r32(esi + 4), true);
        m_.w32(edi, ebx), m_.w32(edi + 4, ebp);
    } else if (under(ebx)) {
        if (m_.s16(esi) < 0) return;
        cut(ebx, ebp, esi, m_.r32(esi + 4), false);
        m_.w32(edi, ebx), m_.w32(edi + 4, ebp);
    } else {
        m_.w32(edi, ebx), m_.w32(edi + 4, ebp);
    }
    // 117C1h: the end point
    uint32_t nb = m_.r32(esi), np = m_.r32(esi + 4);
    if (over(nb)) {
        cut(nb, np, edi, m_.r32(edi + 4), true);
        m_.w32(edi + 8, nb), m_.w32(edi + 12, np);
        edi += 0x10;
    } else if (under(nb)) {
        cut(nb, np, edi, m_.r32(edi + 4), false);
        m_.w32(edi + 8, nb), m_.w32(edi + 12, np);
        edi += 0x10;
    } else {
        edi += 8;
    }
}

}  // namespace drift
