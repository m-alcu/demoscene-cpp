// The engine's polygon filler (11610h-11A0Bh), the flat (unshaded) edge
// routines (113BCh-11544h), and the precalculated ripple (11C38h-11EBCh).
#include "demo.h"

namespace drift {

namespace {
inline int32_t idiv(int64_t a, int32_t b) { return (int32_t)(a / b); }
inline uint32_t rol16(uint32_t v) { return (v << 16) | (v >> 16); }
inline int32_t sx16(uint32_t v) { return (int16_t)(uint16_t)v; }
inline uint32_t addc(uint32_t a, uint32_t b) {      // add a, b; adc a, 0
    const uint64_t s = (uint64_t)a + b;
    return (uint32_t)s + (uint32_t)(s >> 32);
}
}  // namespace

// 11610h: the sorted faces, clipped to x 0-320 (117B3h), their edges into
// the span tables (11901h), the spans filled in the frame buffer through
// the heap's selector, 16-bit offsets: the shade stepped in 16.16, plus the
// face's colour; face mode 1 adds instead of writing.
void Demo::draw() {
    const uint32_t count = m_.r32(0x100E8);
    if (!(count & 0xFFFF)) return;
    m_.w16(0x10108, count);
    const uint32_t buf = heapBase_;
    uint32_t list = m_.r32(0x100EC);
    do {
        uint32_t f = m_.r32(list);
        m_.w16(0x1010C, (uint16_t)(m_.r8(f) - 1));
        m_.w8(0x1160E, m_.r8(f + 1));
        m_.w8(0x1176E, m_.r8(f + 2));
        f += 4;
        const uint32_t first = m_.r32(f);
        uint32_t edi = m_.r32(0x100E0);
        do {
            const uint32_t v = m_.r32(f);
            clipEdgeShaded(m_.r32(v), m_.r32(v + 4), m_.r32(f + 4), edi);
            f += 4;
            m_.w16(0x1010C, m_.r16(0x1010C) - 1);
        } while (m_.r16(0x1010C));
        {
            const uint32_t v = m_.r32(f);
            clipEdgeShaded(m_.r32(v), m_.r32(v + 4), first, edi);
        }
        uint32_t n = (edi - m_.r32(0x100E0)) >> 3;
        if (sx16(n) >= 3) {
            n = (n & ~0xFFFFu) | ((n - 1) & 0xFFFF);
            m_.w16(0x1010C, n);
            const uint32_t init = m_.r32(0x100E4) + 0x320;
            m_.w32(0x1197D, init);
            m_.w32(0x119B7, init);
            uint32_t p = m_.r32(0x100E0);
            do {
                const int32_t x0 = m_.s16(p), y0 = m_.s16(p + 2);
                const uint16_t s0 = m_.r16(p + 4);
                p += 8;
                edgeShaded(x0, y0, s0, m_.s16(p), m_.s16(p + 2), m_.r16(p + 4));
                m_.w16(0x1010C, m_.r16(0x1010C) - 1);
            } while (m_.r16(0x1010C));
            {
                const uint32_t q = m_.r32(0x100E0);
                edgeShaded(m_.s16(p), m_.s16(p + 2), m_.r16(p + 4), m_.s16(q), m_.s16(q + 2), m_.r16(q + 4));
            }
            // the spans
            uint32_t a = m_.r32(0x1197D);
            uint32_t right = a, left = a + 0x320;
            const uint32_t y0 = (a - m_.r32(0x100E4)) >> 2;
            const int32_t rows = (int32_t)(((m_.r32(0x119B7) - m_.r32(0x100E4) - 0x320) >> 2) - y0);
            const bool add = m_.r8(0x1160E) == 1;
            const uint8_t colour = m_.r8(0x1176E);
            for (int32_t r = rows; r > 0; r--) {
                uint32_t ecx = m_.r16(right);
                right += 4;
                uint32_t di = m_.r16(left);
                left += 4;
                if (ecx <= di) continue;
                ecx -= di;
                const uint32_t ds = (uint32_t)(uint16_t)(m_.r16(right - 2) - m_.r16(left - 2)) << 16;
                const uint32_t edx = rol16((uint32_t)idiv((int32_t)ds, (int32_t)ecx));
                uint32_t eax = 0x80000000u | m_.r16(left - 2);
                eax = (eax & ~0xFFu) | ((eax + colour) & 0xFF);
                for (uint32_t c = ecx & 0xFFFF; c; c--) {
                    const uint32_t at = buf + (di & 0xFFFF);
                    m_.w8(at, add ? m_.r8(at) + (uint8_t)eax : (uint8_t)eax);
                    di = (di + 1) & 0xFFFF;
                    eax = addc(eax, edx);
                }
            }
        }
        list += 8;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
    } while (m_.r16(0x10108));
}

// 11901h: an edge from (x0, y0, shade s0) to (x1, y1, s1) into a span
// table: going down into the one at [100E4h], up into the one after it;
// each row's entry is the buffer offset (y x 320 + x) and the shade. The
// tables' bounds kept in the immediates at 1197Dh and 119B7h.
void Demo::edgeShaded(int32_t ebx, int32_t ebp, uint16_t dx, int32_t esi, int32_t ecx, uint16_t ax) {
    uint32_t edi = m_.r32(0x100E4);
    if (ebp == ecx) return;
    if (ebp > ecx) {
        std::swap(ecx, ebp);
        std::swap(esi, ebx);
        std::swap(dx, ax);
        edi += 0x320;
    }
    m_.w16(0x1199A, dx);
    m_.w16(0x119DA, ax);
    if (ecx <= 0 || ebp >= 200) return;
    uint16_t ds;
    if (ebp < 0) {                      // 119C4h: from row 0
        uint32_t q = (uint32_t)idiv((int32_t)((uint32_t)(esi - ebx) << 16), ecx - ebp);
        ecx -= ebp;
        ebx -= (int32_t)(q * (uint32_t)ebp) >> 16;
        uint16_t d = (uint16_t)(m_.r16(0x119DA) - m_.r16(0x1199A));
        q = (uint32_t)idiv((int32_t)((uint32_t)d << 16), ecx);
        m_.w16(0x1199A, (uint16_t)(m_.r16(0x1199A) - (uint16_t)((int32_t)(q * (uint32_t)ebp) >> 16)));
        ecx += ebp;
        ebp = 0;
        ds = (uint16_t)(m_.r16(0x119DA) - m_.r16(0x1199A));
    } else {
        ecx -= ebp;
        ds = (uint16_t)(ax - dx);
    }
    const uint32_t sstep = rol16((uint32_t)idiv((int32_t)((uint32_t)ds << 16), ecx));
    uint32_t xstep = rol16((uint32_t)idiv((int32_t)((uint32_t)(esi - ebx) << 16), ecx));
    xstep = (xstep & 0xFFFF0000) | ((xstep + 0x140) & 0xFFFF);
    ecx += ebp;
    if (ecx > 200) ecx = 200;
    ecx -= ebp;
    edi += (uint32_t)ebp << 2;
    if (edi < m_.r32(0x1197D)) m_.w32(0x1197D, edi);
    uint32_t eax = (uint32_t)ebp * 320 + (uint32_t)ebx + 0x7FFF0000u;
    uint32_t sh = m_.r32(0x1199A);
    for (; ecx; ecx--) {
        m_.w16(edi, eax);
        m_.w16(edi + 2, sh);
        edi += 4;
        eax = addc(eax, xstep);
        sh = addc(sh, sstep);
    }
    if (edi > m_.r32(0x119B7)) m_.w32(0x119B7, edi);
}

// 113BCh: an edge from EBX (y:x) to the point at ESI, clipped to x 0-320,
// its start (and its end, if clipped) to EDI; no shade
void Demo::clipEdge(uint32_t ebx, uint32_t esi, uint32_t& edi) {
    auto over = [](uint32_t v) { return sx16(v) > 0x140; };
    auto under = [](uint32_t v) { return (uint16_t)v > 0x140 && sx16(v) <= 0x140; };
    auto cut = [&](uint32_t& b, uint32_t ref, bool right) {
        uint32_t eax = b, ecx = eax;
        if (right) b = (b & 0xFFFF0000) | ((b - 0x140) & 0xFFFF);
        ecx = (uint32_t)sx16(ecx - m_.r16(ref));
        eax = (uint32_t)((int32_t)eax >> 16);
        eax = (eax & 0xFFFF0000) | ((eax - m_.r16(ref + 2)) & 0xFFFF);
        eax <<= 16;
        eax = (uint32_t)idiv((int32_t)eax, (int32_t)ecx);
        eax = (uint32_t)((int32_t)eax * sx16(b));
        eax &= 0xFFFF0000;
        b -= eax;
        b = (b & 0xFFFF0000) | (right ? 0x140u : 0u);
    };
    if (over(ebx)) {
        if (m_.s16(esi) > 0x140) return;
        cut(ebx, esi, true);
    } else if (under(ebx)) {
        if (m_.s16(esi) < 0) return;
        cut(ebx, esi, false);
    }
    m_.w32(edi, ebx);
    uint32_t nb = m_.r32(esi);
    if (over(nb)) {
        cut(nb, edi, true);
        m_.w32(edi + 4, nb);
        edi += 8;
    } else if (under(nb)) {
        cut(nb, edi, false);
        m_.w32(edi + 4, nb);
        edi += 8;
    } else {
        edi += 4;
    }
}

// 1149Dh: an unshaded edge into the span tables (bounds at 114F3h, 1151Fh)
void Demo::edge(int32_t ebx, int32_t ebp, int32_t esi, int32_t ecx) {
    uint32_t edi = m_.r32(0x100E4);
    if (ebp == ecx) return;
    if (ebp > ecx) {
        std::swap(ecx, ebp);
        std::swap(esi, ebx);
        edi += 0x320;
    }
    if (ecx <= 0 || ebp >= 200) return;
    if (ebp < 0) {                      // 1152Ch
        const uint32_t q = (uint32_t)idiv((int32_t)((uint32_t)(esi - ebx) << 16), ecx - ebp);
        ebx -= (int32_t)(q * (uint32_t)ebp) >> 16;
        ebp = 0;
    }
    ecx -= ebp;
    uint32_t xstep = rol16((uint32_t)idiv((int32_t)((uint32_t)(esi - ebx) << 16), ecx));
    xstep = (xstep & 0xFFFF0000) | ((xstep + 0x140) & 0xFFFF);
    ecx += ebp;
    if (ecx > 200) ecx = 200;
    ecx -= ebp;
    edi += (uint32_t)ebp << 2;
    if (edi < m_.r32(0x114F3)) m_.w32(0x114F3, edi);
    uint32_t eax = (uint32_t)ebp * 320 + (uint32_t)ebx + 0x7FFF0000u;
    for (; ecx; ecx--) {
        m_.w16(edi, eax);
        edi += 4;
        eax = addc(eax, xstep);
    }
    if (edi > m_.r32(0x1151F)) m_.w32(0x1151F, edi);
}

// 11C38h: eight frames of a ripple of the picture at [8]+1FA00h into
// [8]+3F9E0h on (FA00h each): each pixel of a quadrant moved along its
// radius by a wave of the frame's phase, its colour offset by the wave's
// slope, plus 80h.
void Demo::ripplePrecalc() {
    const uint32_t heap = m_.r32(8);
    m_.w32(0x11C28, heap + 0x1FA00);
    m_.w32(0x11C2C, heap + 0x2F400);
    m_.w32(0x11C30, heap + 0x3F400);
    m_.w32(0x11C34, heap + 0x3F9E0);
    // 11DF8h: distances from the centre, a quadrant
    for (uint32_t y = 1; y <= 0x64; y++)
        for (uint32_t x = 1; x <= 0xA0; x++) m_.w8(m_.r32(0x11C2C) + (y << 8) + x, sqrt(y * y + x * x));
    for (uint32_t phase = 0x10814; phase >= 0x10114; phase -= 0x100) {
        // 11E32h: per distance 1-188, a scale and a colour offset
        {
            uint32_t edi = m_.r32(0x11C30), esi = phase;
            for (uint32_t n = 1; n <= 0xBC; n++) {
                const int32_t w = m_.s32(esi);
                int32_t s = ((int32_t)((0x800 / n) * (uint32_t)w) >> 16) + 0x100;
                if (s < 0) s = 0;
                m_.w32(edi, (uint32_t)s);
                m_.w32(edi + 4, (uint32_t)(idiv(w, 0x1554) + 0x0C));
                edi += 8;
                esi += 0x34;
                if (esi >= 0x10914) esi -= 0x800;
            }
        }
        const uint32_t src = m_.r32(0x11C28), dst = m_.r32(0x11C34);
        for (uint32_t y = 1; y <= 0x64; y++)
            for (uint32_t x = 1; x <= 0xA0; x++) {
                const uint32_t e = ((uint32_t)m_.r8(m_.r32(0x11C2C) + (y << 8) + x) - 1) * 8 + m_.r32(0x11C30);
                const uint8_t dl = m_.r8(e + 4);
                const uint32_t k = m_.r32(e);
                uint32_t sy = (uint32_t)((int32_t)(y * k) >> 8);
                uint32_t sxx = (uint32_t)((int32_t)(x * k) >> 8);
                if (sy > 0x64) {
                    sy -= 0x80;
                    while (sxx < 0x60) sxx += 0x40;
                }
                if (sxx >= 0xA0) sxx -= 0x40;
                auto put = [&](uint32_t srow, uint32_t scol, uint32_t drow, uint32_t dcol) {
                    const uint8_t v = (uint8_t)(m_.r8(src + srow * 0x140 + scol) + dl + 0x80);
                    m_.w8(dst + drow * 0x140 + dcol, v);
                };
                put(sy + 0x63, sxx + 0x9F, y + 0x63, x + 0x9F);
                put(-sy + 0x64, sxx + 0x9F, -y + 0x64, x + 0x9F);
                put(-sy + 0x64, -sxx + 0xA0, -y + 0x64, -x + 0xA0);
                put(sy + 0x63, -sxx + 0xA0, y + 0x63, -x + 0xA0);
            }
        m_.w32(0x11C34, m_.r32(0x11C34) + 0xFA00);
    }
}

// 11E87h: distances from the screen's centre, 320x200, a byte each
void Demo::distances() {
    uint32_t edi = m_.r32(0x11C2C);
    for (int32_t y = -100; y != 100; y++)
        for (int32_t x = -160; x != 160; x++) m_.w8(edi++, sqrt((uint32_t)(y * y) + (uint32_t)(x * x)));
}

}  // namespace drift
