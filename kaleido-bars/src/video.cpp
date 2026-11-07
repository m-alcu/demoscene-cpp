#include "video.h"
#include <cstdio>
#include <cstdlib>

namespace kb {

[[noreturn]] static void unsupported(const char* what, int line, int L) {
    std::fprintf(stderr, "kaleido-bars: %s on line %d, layer %d (not used by these parts)\n", what, line, L);
    std::abort();
}

// 0x200810b8: start of frame
void Video::frame_start() {
    line = 0;
    l1 = m.r32(GP + 8);
    l2 = m.r32(GP + 12);
    for (uint32_t o : {40u, 72u, 104u, 36u, 68u, 100u}) m.w32(GP + o, 0);  // layer DMA ctrl, row modulos
    m.w16(GP + 20, 16);                                                        // visualiser target
}

// 0x200810e0: two copper lists of (register, value) halfword pairs relative to gp;
// register 0 means "wait until line >= value".
void Video::copper() {
    for (uint32_t* p : {&l1, &l2}) {
        for (;;) {
            int32_t reg = m.r16s(*p), val = m.r16s(*p + 2);
            *p += 4;
            if (reg != 0) { m.w16(GP + reg, val); continue; }
            if ((uint32_t)line >= (uint32_t)val) continue;
            *p -= 4;
            break;
        }
    }
}

// One layer's line: the words core 1 pushes (colours, start delay) and the DMA'd pixel words,
// played through the PIO program at 0x100003ec.
void Video::layer_line(int L, Layer out[512]) {
    const uint32_t base = GP + 32 + 32 * L;
    const int32_t ctrl = m.r16s(base + 8);
    if (ctrl < 0) unsupported("16-bit direct colour mode", line, L);
    const uint32_t fine = m.r32(base + 12);  // start delay table index at 0x20081754
    if (fine > 7) unsupported("fine scroll > 7", line, L);
    uint16_t col[6];
    for (int i = 0; i < 6; i++) col[i] = m.r16(base + 16 + 2 * i);

    // DMA: 65 transfers from the layer's read address, ring-wrapped (0x2008116c, 0x200813a8)
    uint32_t words[66];
    int nw = 0;
    const uint32_t c = (uint32_t)ctrl;
    if (c & 1) {
        if (c < 8) unsupported("DMA with ctrl < 8", line, L);
        uint32_t addr = m.r32(base);
        const int size = (c >> 2) & 3, ring = (c >> 8) & 15;
        const bool ring_write = (c >> 12) & 1;
        for (int i = 0; i < 65; i++) {
            uint32_t v;
            if (size == 0) v = m.r8(addr) * 0x01010101u;
            else if (size == 1) { v = m.r16(addr & ~1u); v |= v << 16; }
            else v = m.r32(addr & ~3u);
            words[nw++] = v;
            if (c & 0x10) {
                const uint32_t na = addr + (1u << size);
                if (ring && !ring_write) {
                    const uint32_t msk = (1u << ring) - 1;
                    addr = (addr & ~msk) | (na & msk);
                } else addr = na;
            }
        }
    }
    if (c < 8) words[nw++] = 0x22222220u | c;  // no DMA: one nibble of colour c, then "keep"

    // Screen pixel x shows stream nibble x + fine; past the data the state machine stalls.
    Layer s = st[L];
    int k = 0;
    const int total = nw * 8;
    for (int x = 0; x < 512; x++) {
        for (; k <= (int)(x + fine) && k < total; k++) {
            const uint32_t n = (words[k >> 3] >> (4 * (k & 7))) & 15;
            if (n == 0) s.on = false;                 // mov pins, null: enable bit clear
            else if (n == 2) {}                       // jmp 1: no write
            else if (n >= 4 && !(n & 1)) {            // mov pins, isr/::isr/y/::y/x/::x
                const uint32_t v = col[(n - 4) >> 1] ^ 0xf000u;
                s.on = (v >> 15) & 1;
                s.col = v & 0xfff;
            } else unsupported("odd or jump pixel nibble", line, L);
        }
        out[x] = s;
    }
    for (; k < total; k++) {
        const uint32_t n = (words[k >> 3] >> (4 * (k & 7))) & 15;
        if (n == 0) s.on = false;
        else if (n >= 4 && !(n & 1)) {
            const uint32_t v = col[(n - 4) >> 1] ^ 0xf000u;
            s.on = (v >> 15) & 1;
            s.col = v & 0xfff;
        } else if (n != 2) unsupported("odd or jump pixel nibble", line, L);
    }
    st[L] = s;
}

void Video::run_line() {
    copper();
    if (!(line & 1)) {
        // 0x2008111a: audio level into the high bits of a copper-chosen register. The scene
        // leaves the target at gp+16, which nothing reads; the port has no synth (level 32).
        const uint32_t a = GP + m.r32(GP + 20);
        m.w16(a, (m.r16(a) & 511) | (32u << 9));
    }
    if (line >= 768) {
        // vertical blanking: every pixel state machine ends up driving black
        for (auto& s : st) { s.on = true; s.col = 0; }
        if (line == 768) {
            m.w32(GP + 8, 0x2008177c);   // empty lists until core 0 sets new ones
            m.w32(GP + 12, 0x2008177c);
            if (vblank) vblank();
        }
    } else {
        static Layer out[3][512];
        for (int L = 0; L < 3; L++) layer_line(L, out[L]);
        uint16_t cur = 0;  // pins: black from the timing state machine at the line start
        for (int x = 0; x < 512; x++) {
            for (int L = 2; L >= 0; L--)
                if (out[L][x].on) { cur = out[L][x].col; break; }
            frame[line][x] = cur;
        }
    }
    line++;
    // 0x20081700: row modulos, after every 2nd and every 4th line
    uint32_t a2 = m.r32(GP + 32), a3 = m.r32(GP + 64), a4 = m.r32(GP + 96);
    if (!(line & 1)) { a2 += m.r16s(GP + 36); a3 += m.r16s(GP + 68); a4 += m.r16s(GP + 100); }
    if (!(line & 3)) { a2 += m.r16s(GP + 38); a3 += m.r16s(GP + 70); a4 += m.r16s(GP + 102); }
    m.w32(GP + 32, a2); m.w32(GP + 64, a3); m.w32(GP + 96, a4);
}

void Video::to_rgb(uint8_t* out) const {
    for (int y = 0; y < 768; y++)
        for (int x = 0; x < 512; x++) {
            const uint16_t c = frame[y][x];
            *out++ = ((c >> 8) & 15) * 17;
            *out++ = ((c >> 4) & 15) * 17;
            *out++ = (c & 15) * 17;
        }
}

void Video::run_frame() {
    frame_start();
    while (line < 806) run_line();
}

}  // namespace kb
