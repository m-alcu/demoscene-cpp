// The module's samples, made at start-up (EAEAh): DRIFT.EXE carries the
// S3M without them. Eleven are morphs between short single-cycle waves,
// two are short waves stretched by linear interpolation, one is copied as
// it is. Each lands where its instrument's header says, followed by 200h
// bytes: the loop continued, or silence (80h).
//
// The morph (ED60h): a list of waves and a sequence of indices; for each
// adjacent pair (a, b) of the sequence, the shorter length n and a step
// count s, it writes s cycles of n bytes: a[i] + (((b[i] - a[i]) << 16) / s
// * k >> 16) for k = 0..s-1. The work buffers are four 64K segments of the
// free heap ([8] + 0, 10000h, 20000h, 30000h), addressed with 16-bit
// offsets as the original does.
#include "demo.h"

namespace drift {

namespace {

// ED24h: the table's data pointers, each wave's from the previous one's
// length on.
void wavePointers(Machine& m, uint32_t si, uint32_t edx) {
    si &= 0xFFFF;
    uint32_t cx = m.r8(si);
    uint32_t di = (cx << 2) & 0xFFFF;
    si = (si + 2) & 0xFFFF;
    di = (di + si) & 0xFFFF;
    for (; cx; cx--) {
        m.w32(di, edx);
        edx += m.r16(si);
        si = (si + 4) & 0xFFFF;
        di = (di + 4) & 0xFFFF;
    }
}

}  // namespace

void Demo::makeSamples(uint32_t module) {
    Machine& m = m_;
    m.w32(0xEAE2, module);
    {
        const uint32_t ord = m.r8(module + 0x20);
        m.w32(0xEAE6, module + ((uint32_t)m.r16(module + ord + 0x60) << 4));
    }
    const uint32_t heap = m.r32(8);
    const uint32_t seg[4] = {heap, heap + 0x10000, heap + 0x20000, heap + 0x30000};
    // the four selectors PMODE gives the buffers (98h-B0h) and frees after
    m.w16(0xEADA, 0x98), m.w16(0xEADC, 0xA0), m.w16(0xEADE, 0xA8), m.w16(0xEAE0, 0xB0);

    // EC95h: COUNT bytes from SRC as the next instrument's sample, then 200h more
    auto store = [&](uint32_t src, uint32_t count) {
        const uint32_t ins = m.r32(0xEAE6);
        uint32_t edi = ((uint32_t)m.r16(ins + 0x0E) << 4) + m.r32(0xEAE2);
        for (uint32_t i = 0; i < count; i++) m.w8(edi++, m.r8(src + i));
        uint32_t lstart = m.r16(ins + 0x14), lend = m.r16(ins + 0x18);
        if (!lend) {
            for (int i = 0; i < 0x200; i++) m.w8(edi++, 0x80);
        } else {
            lstart += src, lend += src;
            uint32_t s = lstart;
            for (int i = 0; i < 0x200; i++) {
                m.w8(edi++, m.r8(s++));
                if (s > lend) s = lstart;
            }
        }
        m.w32(0xEAE6, ins + 0x50);
    };

    // ECEFh: COUNT source bytes to COUNT x STEPS, linearly, in 8.8
    auto stretch = [&](uint32_t esi, uint32_t edi, uint32_t count, int32_t steps) {
        for (; count; count--) {
            const uint32_t a = m.r8(esi);
            esi++;
            const int32_t d = (int32_t)(((uint32_t)((int32_t)m.r8(esi) - (int32_t)a)) << 16) / steps;
            const uint16_t dx = (uint16_t)((((uint32_t)d >> 8) & 0xFF) | (((uint32_t)(d >> 16) & 0xFF) << 8));
            uint16_t ax = (uint16_t)(a << 8);
            for (int32_t k = steps; k; k--) {
                m.w8(edi++, ax >> 8);
                ax = (uint16_t)(ax + dx);
            }
        }
    };

    uint32_t tab = 0xB631;
    for (uint8_t n = m.r8(0xB630); n; n = m.r8(0xB630)) {
        const uint32_t list = m.r32(tab), data = m.r32(tab + 4);
        wavePointers(m, list, data);
        // ED60h
        const uint32_t si = list & 0xFFFF;
        uint32_t di = 0;
        m.w16(0xED54, 0x98), m.w16(0xED56, 0xA0), m.w16(0xED58, 0xA8);
        uint32_t pairs = m.r8(si + 1);
        if (pairs) {
            m.w16(0xED52, pairs);
            m.w16(0xED50, m.r8(si));
            for (uint32_t dx = 0; m.r16(0xED52); dx++) {
                // EDE0h: the pair's waves into buffers 0 and 1
                const uint32_t cnt = m.r8(si);
                const uint32_t ptrs = cnt * 4 + 2;
                m.w16(0xEDDC, ptrs);
                const uint16_t pair = m.r16((si + ((cnt * 4 + ptrs + dx) & 0xFFFF)) & 0xFFFF);
                const uint32_t a = pair & 0xFF, b = pair >> 8;
                const uint32_t ea = (a * 4 + 2) & 0xFFFF, eb = (b * 4 + 2) & 0xFFFF;
                m.w16(0xEDDE, m.r16((ea + si + 2) & 0xFFFF));
                const uint16_t la = m.r16((ea + si) & 0xFFFF), lb = m.r16(si + eb);
                m.w16(0xED5A, la), m.w16(0xED5C, lb);
                const uint32_t len = lb < la ? lb : la;
                m.w16(0xED5E, len);
                uint32_t pa = m.r32((((a << 2) + ptrs) + si) & 0xFFFF);
                for (uint32_t i = 0; i < len; i++) m.w8(seg[0] + i, m.r8(pa++));
                uint32_t pb = m.r32((((b << 2) + ptrs) + si) & 0xFFFF);
                for (uint32_t i = 0; i < len; i++) m.w8(seg[1] + i, m.r8(pb++));
                // EEB0h: the deltas, then the cycles
                const int32_t steps = m.r16(0xEDDE);
                m.w32(0xEEA8, len), m.w32(0xEEAC, (uint32_t)steps);
                for (uint32_t i = 0; i < len; i++) {
                    const int32_t x = (int8_t)(m.r8(seg[0] + i) - 0x80), y = (int8_t)(m.r8(seg[1] + i) - 0x80);
                    m.w32(seg[2] + i * 4, (uint32_t)((int32_t)((uint32_t)(y - x) << 16) / steps));
                }
                for (int32_t bp = steps; bp; bp--) {
                    for (uint32_t i = 0; i < len; i++) {
                        const int64_t p = (int64_t)(int32_t)m.r32(seg[2] + i * 4) * (int32_t)(steps - bp);
                        const int32_t v = ((int32_t)(uint32_t)p >> 16) + (int8_t)m.r8(seg[0] + i);
                        m.w8(seg[3] + di, (uint8_t)v);
                        di = (di + 1) & 0xFFFF;
                    }
                }
                m.w16(0xED52, m.r16(0xED52) - 1);
            }
        }
        store(seg[3], di);
        tab += 8;
        m.w8(0xB630, n - 1);
    }
    stretch(0xDBDA, seg[3], 0x6BA, 4);
    store(seg[3], 0x1AE8);
    stretch(0xE295, seg[3], 0x1A1, 8);
    store(seg[3], 0xD08);
    store(0xE437, 0x653);
}

}  // namespace drift
