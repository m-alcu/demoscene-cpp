// The vector parts (1A896h-1BBD2h): two object lists, A at 14DBDh (the
// room, written over the whole buffer) and B at 14E01h (the flying
// objects, with shadows), drawn into the frame buffer ([8]), the picture
// at [8]+10000h added in between, the buffer copied to the screen. The
// timer moves things (1B228h): a light along two sine paths, each B object
// along its script once its start tick (1A270h) comes, plus the scene's
// own step (1A274h).
#include "demo.h"

namespace drift {

// 1B228h
void Demo::vectorTick() {
    m_.w32(0x1A270, m_.r32(0x1A270) + 1);
    // the light: x and y from sine paths (entries: count, phase, shift,
    // speed), z from their distance
    auto path = [&](uint32_t script, uint32_t base, bool signedSpeed, uint32_t out) {
        const uint32_t esi = m_.r32(script);
        const uint32_t ebx = m_.r16(esi) + esi;
        const uint32_t edx = m_.r16(ebx + 2);
        uint32_t eax = (signedSpeed ? (uint32_t)(int32_t)m_.s8(ebx + 5) : m_.r8(ebx + 5)) + edx;
        m_.w16(ebx + 2, eax & 0x7FF);
        eax = (uint32_t)(m_.s32(0x10114 + (edx & ~3u)) >> (m_.r8(ebx + 4) & 31));
        eax += m_.r32(base);
        m_.w32(out, eax);
        m_.w16(ebx, m_.r16(ebx) - 1);
        if (!m_.r16(ebx)) {
            m_.w16(esi, m_.r16(esi) + 6);
            m_.w32(base, eax);
        }
        return eax;
    };
    const uint32_t x = path(0x1A28C, 0x1A294, true, 0x11550);
    const uint32_t y = path(0x1A290, 0x1A298, false, 0x11554);
    m_.w32(0x11558, sqrt(y * y + x * x) - 0x5282);
    // list B's scripts
    for (uint32_t o = 0x14E01; m_.r8(o) != 0xFF; o += 0x40) {
        const uint32_t s = m_.r32(o + 0x38);
        if (!(m_.r8(o) & 1)) {
            if (m_.r16(s) != (m_.r32(0x1A270) & 0xFFFF)) continue;
            m_.w8(o, m_.r8(o) | 1);
        }
        const uint32_t step = s + m_.s16(s + 2);
        m_.w32(o + 0x10, m_.r32(o + 0x10) + ((uint32_t)m_.s16(step + 2) << 8));
        m_.w32(o + 0x14, m_.r32(o + 0x14) + ((uint32_t)m_.s16(step + 4) << 8));
        m_.w32(o + 0x18, m_.r32(o + 0x18) + ((uint32_t)m_.s16(step + 6) << 8));
        m_.w32(o + 4, (m_.s16(step + 8) + m_.r32(o + 4)) & 0x7FF);
        m_.w32(o + 8, (m_.s16(step + 10) + m_.r32(o + 8)) & 0x7FF);
        m_.w32(o + 12, (m_.s16(step + 12) + m_.r32(o + 12)) & 0x7FF);
        m_.w16(step, m_.r16(step) - 1);
        if (!m_.r16(step)) {
            m_.w16(s + 2, m_.r16(s + 2) + 0x0E);
            if (m_.r16(step + 0x0E) == 0xFFFF) m_.w32(o, m_.r32(o) & 0xFFFFFFFE);
        }
    }
    switch (m_.r32(0x1A274)) {
    case 0x1B36D: fadeStep(); break;
    case 0x1B381: rippleStep(); break;
    case 0x1B3C4: fadeStep(), rippleStep(); break;
    case 0x1B3CF: m_.w32(0x14DC1, (m_.r32(0x14DC1) - 4) & 0x7FF); break;
    case 0x1B3E2: m_.w32(0x14DC1, (m_.r32(0x14DC1) + 4) & 0x7FF); break;
    default: break;
    }
}

// 1B36Dh: the fade's step up to its count
void Demo::fadeStep() {
    if (m_.r32(0x1A280) != m_.r32(0x1A27C)) m_.w32(0x1A280, m_.r32(0x1A280) + 1);
}

// 1B381h: the ripple's circle grows; its frame advances every 4th tick
void Demo::rippleStep() {
    if (m_.r32(0x1A284) < 0xBC) m_.w32(0x1A284, m_.r32(0x1A284) + 2);
    uint32_t n = m_.r32(0x1A278) + 1;
    if (n == 0x20) {
        m_.w32(0x11C34, m_.r32(0x11C34) - 0x6D600);
        n = 0;
    } else if (!(n & 3)) {
        m_.w32(0x11C34, m_.r32(0x11C34) + 0xFA00);
    }
    m_.w32(0x1A278, n);
}

// 1B3F8h: list A (one object, the room)
void Demo::drawRoom() {
    m_.w32(0x100F8, 0x14DBD);
    matrix();
    transform();
    transformNormals();
    light();
    sortFaces(0x14DBD);
    draw();
}

// 1B428h: list B, each drawn object with its shadow if it has one
void Demo::drawObjects() {
    for (m_.w32(0x100F8, 0x14E01); m_.r8(m_.r32(0x100F8)) != 0xFF; m_.w32(0x100F8, m_.r32(0x100F8) + 0x40)) {
        const uint8_t fl = m_.r8(m_.r32(0x100F8));
        if (!(fl & 1)) continue;
        matrix();
        transform();
        if (fl & 2) {
            shadowProject();
            shadowDraw();
        }
        transformNormals();
        light();
    }
    sortFaces(0x14E01);
    draw();
}

// 1B740h: the picture at SRC added to the buffer
void Demo::addPicture(uint32_t src) {
    const uint32_t buf = m_.r32(8);
    for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(buf + i, m_.r32(buf + i) + m_.r32(src + i));
}

// 1B758h: the buffer to the screen
void Demo::show() {
    m_.present();
    const uint32_t buf = m_.r32(8);
    for (uint32_t i = 0; i < 0xFA00; i++) vram8(i, m_.r8(buf + i));
}

// 1B778h: inside the circle of radius [1A284h] the ripple's frame, outside
// the picture, added to the buffer
void Demo::addRipple(uint32_t src, uint32_t ripple) {
    const uint32_t buf = m_.r32(8), dist = m_.r32(0x11C2C);
    const uint8_t r = (uint8_t)m_.r32(0x1A284);
    for (uint32_t i = 0; i < 0xFA00; i++) {
        const uint8_t v = m_.r8(dist + i) <= r ? m_.r8(ripple + i) : m_.r8(src + i);
        m_.w8(buf + i, m_.r8(buf + i) + v);
    }
}

// 1B7B0h: every face's mode and colour (EAX's top three bytes)
void Demo::faceStyle(uint32_t obj, uint32_t eax) {
    uint32_t f = m_.r32(obj + 0x28);
    for (uint32_t n = m_.r32(obj + 0x20); n; n--) {
        const uint32_t cnt = m_.r32(f) & 0xFF;
        m_.w32(f, (eax & 0xFFFFFF00) | cnt);
        f += cnt * 4 + 4;
    }
}

// 1B7D0h: the object's vertices projected from the light onto the floor
// (y = 800h << 16), into its third vertex set ([+3Ch]); Z 8000000h marks
// a vertex that made it
void Demo::shadowProject() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w16(0x10108, m_.r32(o + 0x1C));
    uint32_t edi = m_.r32(o + 0x3C), esi = m_.r32(o + 0x2C);
    do {
        const uint32_t ebx = m_.r32(esi + 4), ecx = m_.r32(esi + 8);
        const int32_t ebp = (int32_t)(m_.r32(esi + 12) - (m_.r32(0x11558) << 16)) >> 16;
        bool ok = false;
        if (ebp > 0) {
            auto proj = [&](uint32_t v, uint32_t l, uint32_t& out) {
                const int32_t q = (int32_t)((int64_t)(int32_t)(v - (l << 16)) / ebp);
                const int64_t p = (int64_t)q * (int32_t)(0x8000000 - m_.r32(esi + 12));
                const int32_t hi = (int32_t)(p >> 32);
                if (hi >= 0x4000 || hi <= -0x4000) return false;
                out = (uint32_t)(p >> 16) + v;
                return true;
            };
            uint32_t py, px;
            if (proj(ecx, m_.r32(0x11554), py)) {
                m_.w32(edi + 8, py);
                if (proj(ebx, m_.r32(0x11550), px)) {
                    m_.w32(edi + 4, px);
                    m_.w32(edi + 12, 0x8000000);
                    const uint32_t lo = (uint32_t)((int32_t)px >> 0x13) & 0xFFFF;
                    const uint32_t hiw = (uint32_t)((int32_t)m_.r32(edi + 8) >> 3);
                    m_.w32(edi, ((hiw & 0xFFFF0000) | lo) + 0x6400A0);
                    ok = true;
                }
            }
        }
        if (!ok) m_.w32(edi + 12, 0);
        edi += 0x10, esi += 0x10;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
    } while (m_.r16(0x10108));
}

// 1B8C0h: the shadow's faces (all their vertices projected), flat, colour
// 1, into the buffer
void Demo::shadowDraw() {
    const uint32_t o = m_.r32(0x100F8);
    m_.w16(0x10108, m_.r32(o + 0x20));
    const uint32_t delta = m_.r32(o + 0x3C) - m_.r32(o + 0x2C);
    m_.w32(0x1B8B8, delta);
    uint32_t f = m_.r32(o + 0x28);
    do {
        bool all = true;
        {
            uint32_t p = f;
            uint32_t n = m_.r8(p);
            p += 4;
            for (; n; n--, p += 4)
                if (m_.r32(m_.r32(p) + delta + 12) != 0x8000000) {
                    all = false;
                    break;
                }
        }
        if (all) {
            m_.w32(0x1B8BC, 0);
            {
                const uint32_t p2 = m_.r32(f + 12) + delta, p0 = m_.r32(f + 4) + delta, p1 = m_.r32(f + 8) + delta;
                const int32_t cx = m_.s16(p2), dy = m_.s16(p2 + 2);
                const int32_t ax = m_.s16(p0) - cx, ay = m_.s16(p0 + 2) - dy;
                const int32_t bx = m_.s16(p1) - cx, by = m_.s16(p1 + 2) - dy;
                if ((int32_t)((uint32_t)ax * (uint32_t)by - (uint32_t)ay * (uint32_t)bx) < 0) m_.w32(0x1B8BC, 1);
            }
            m_.w16(0x1010C, (uint16_t)(m_.r8(f) - 1));
            uint32_t p = f + 4;
            const uint32_t first = m_.r32(p);
            uint32_t edi = m_.r32(0x100E0);
            do {
                clipEdge(m_.r32(m_.r32(p) + delta), m_.r32(p + 4) + delta, edi);
                p += 4;
                m_.w16(0x1010C, m_.r16(0x1010C) - 1);
            } while (m_.r16(0x1010C));
            clipEdge(m_.r32(m_.r32(p) + delta), first + delta, edi);
            uint32_t n = (edi - m_.r32(0x100E0)) >> 2;
            if ((int16_t)(uint16_t)n >= 3) {
                m_.w16(0x1010C, (uint16_t)(n - 1));
                const uint32_t init = m_.r32(0x100E4) + 0x320;
                m_.w32(0x114F3, init);
                m_.w32(0x1151F, init);
                uint32_t q = m_.r32(0x100E0);
                do {
                    const int32_t x0 = m_.s16(q), y0 = m_.s16(q + 2);
                    q += 4;
                    edge(x0, y0, m_.s16(q), m_.s16(q + 2));
                    m_.w16(0x1010C, m_.r16(0x1010C) - 1);
                } while (m_.r16(0x1010C));
                {
                    const uint32_t s = m_.r32(0x100E0);
                    edge(m_.s16(q), m_.s16(q + 2), m_.s16(s), m_.s16(s + 2));
                }
                uint32_t a = m_.r32(0x114F3);
                uint32_t rt = a, lt = a + 0x320;
                const uint32_t y0 = (a - m_.r32(0x100E4)) >> 2;
                int32_t rows = (int32_t)(((m_.r32(0x1151F) - m_.r32(0x100E4) - 0x320) >> 2) - y0);
                if (m_.r32(0x1B8BC)) std::swap(rt, lt);
                const uint32_t buf = heapBase_;
                for (; rows > 0; rows--) {
                    uint32_t ecx = m_.r16(rt), di = m_.r16(lt);
                    rt += 4, lt += 4;
                    if (ecx <= di) continue;
                    ecx -= di;
                    for (; ecx; ecx--) m_.w8(buf + di++, 1);
                }
            }
        }
        f += m_.r8(f) * 4 + 4;
        m_.w16(0x10108, m_.r16(0x10108) - 1);
    } while (m_.r16(0x10108));
}

// 1BACFh: Mode X (unchained, the CRTC in byte mode)
void Demo::modeX() {
    m_.out16(0x3D4, 0x0014);
    m_.out16(0x3D4, 0xE317);
    m_.out16(0x3D4, 0x0109);
    m_.out16(0x3C4, 0x0604);
}

// 1BAF0h: back to mode 13h's chain-4, the screen cleared to colour 1
void Demo::mode13() {
    m_.out16(0x3C4, 0x0F02);
    for (uint32_t i = 0; i < 0x10000; i++) vram8(i, 1);
    waitFrame();
    m_.out16(0x3D4, 0x4014);
    m_.out16(0x3D4, 0xA317);
    m_.out16(0x3D4, 0x4109);
    m_.out16(0x3D4, 0x000C);
    m_.out16(0x3D4, 0x000D);
    m_.out16(0x3C4, 0x0E04);
    m_.out16(0x3C4, 0x0F02);
    waitFrame();
}

// 1BB4Eh: Mode X's first page: a sky of 3Ch down, 1Eh down, a floor of 3 up
void Demo::modeXBackground() {
    uint32_t edi = 0;
    auto fill = [&](uint32_t eax, int bands, int32_t step) {
        for (int b = 0; b < bands; b++) {
            for (int k = 0; k < 0x28; k++, edi += 4) vram32(edi, eax);
            eax += (uint32_t)step;
        }
        return eax;
    };
    fill(0x3C3C3C3C, 0x1E, -0x01010101);
    edi -= 0x50;
    fill(0x1E1E1E1E, 0x15, -0x01010101);
    edi -= 0x50;
    fill(0x03030303, 0x32, 0x01010101);
    edi = 0x3E30;
    for (int k = 0; k < 0x14; k++, edi += 4) vram32(edi, 0);
    edi += 0x4218;
    for (int k = 0; k < 0x14; k++, edi += 4) vram32(edi, 0);
}

// 11C18h: the end of a retrace, then the start of the next
void Demo::waitFrame() {
    m_.waitDisplay();
    m_.waitRetrace();
}

}  // namespace drift
