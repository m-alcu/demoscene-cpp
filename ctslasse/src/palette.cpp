// The palette routines (18378h-18586h): RGB triples of 6-bit values, to
// the DAC through 3C8h/3C9h.
#include "demo.h"

namespace lasse {

void Demo::setPal(uint32_t src, uint32_t first, uint32_t n) {
    m_.out8(0x3C8, (uint8_t)first);
    for (uint32_t i = 0; i < n * 3; i++) m_.out8(0x3C9, m_.r8(src++));
}

void Demo::fadePal(uint32_t src, uint32_t first, uint32_t n, int32_t level) {
    m_.out8(0x3C8, (uint8_t)first);
    for (uint32_t i = 0; i < n * 3; i++) m_.out8(0x3C9, (uint8_t)(((int32_t)m_.r8(src++) * level) >> 6));
}

void Demo::whitePal(uint32_t src, uint32_t first, uint32_t n, int32_t level) {
    m_.out8(0x3C8, (uint8_t)first);
    for (uint32_t i = 0; i < n * 3; i++)
        m_.out8(0x3C9, (uint8_t)(((int32_t)m_.r8(src++) * level + 0xFC0 - level * 0x3F) >> 6));
}

void Demo::mixPal(uint32_t a, uint32_t b, uint32_t first, uint32_t n, int32_t k) {
    m_.out8(0x3C8, (uint8_t)first);
    for (uint32_t i = 0; i < n * 3; i++)
        m_.out8(0x3C9, (uint8_t)(((int32_t)m_.r8(b++) * (0x40 - k) + (int32_t)m_.r8(a++) * k) >> 6));
}

void Demo::whiteDac() {
    m_.out8(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) m_.out8(0x3C9, 0x3F);
}

void Demo::blackDac() {
    m_.out8(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) m_.out8(0x3C9, 0);
}

void Demo::gradient(uint32_t dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    int32_t ra = r0 * n, ga = g0 * n, ba = b0 * n, rb = 0, gb = 0, bb = 0;
    for (int32_t i = 0; i < n; i++) {
        m_.w8(dst++, (rb + ra) / n);
        m_.w8(dst++, (gb + ga) / n);
        m_.w8(dst++, (bb + ba) / n);
        rb += r1, ra -= r0;
        gb += g1, ga -= g0;
        bb += b1, ba -= b0;
    }
}

void Demo::ramp(uint32_t dst, int32_t r, int32_t g, int32_t b, int32_t n1, int32_t n2) {
    gradient(dst, 0, 0, 0, r, g, b, n1);
    gradient(dst + n1 * 3, r, g, b, 0x3F, 0x3F, 0x3F, n2);
}

}  // namespace lasse
