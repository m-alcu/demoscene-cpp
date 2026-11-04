// Part 1 (1AE34h): the title, "lasse reinbong", out of a blur. The logo
// (two run-length masks, blurred) is blurred 128 times over (1ADE4h: each
// pixel the average of its four neighbours, four pixels a dword, the low
// bits carried on); every 8th step and the last seven are kept. Played
// backwards at 35 frames a second at most, the palette fading in, then the
// last steps blurred again to white.
#include "demo.h"

namespace lasse {

// 150ECh: N x 8 pixels of a 320-wide picture at SRC averaged with their
// four neighbours to DST, four pixels a dword, the remainders of each
// division carried on (CARRY).
void Demo::blurRow(uint32_t edi, uint32_t esi, uint32_t& carry, int n) {
    for (; n; n--, esi += 8, edi += 8) {
        for (uint32_t k = 0; k < 8; k += 4) {
            const uint32_t sum = carry + m_.r32(esi + k + 0x140) + m_.r32(esi + k - 1) + m_.r32(esi + k - 0x140) +
                                 m_.r32(esi + k + 1);
            carry = sum & 0x03030303u;
            m_.w32(edi + k, (sum & 0xFCFCFCFCu) >> 2);
        }
    }
}

// 1ADE4h: one blur step, 320x200 at SRC to DST (rows 1-198, columns 4-315).
void Demo::blurStep(uint32_t dst, uint32_t src) {
    uint32_t carry = 0;
    for (uint32_t s = src + 0x144, d = dst + 0x144; s != src + 0xF8C4; s += 0x140, d += 0x140) blurRow(d, s, carry, 0x27);
}

void Demo::part1() {
    Frame fr(*this, 5, 0xEC);
    const uint32_t ebp = fr.ebp - 0x82;         // sub ebp, 82h
    const uint32_t pal = ebp - 0x6A;
    if ((int32_t)position(0x1AE48) >> 8 > 0) return;
    const uint32_t blk = malloc(0x1A0000);
    const uint32_t A = (blk + 0xFFFF) & 0xFFFF0000u;
    const uint32_t ring = A + 0x100000, W = A + 0x170000;
    rle(W, 0x21392, 0, 0x20);
    rle(W, 0x20EBC, 0xFFFFFFFFu, 0x3F);
    blur(W, W + 0x10000);
    memset(W, 0, 0x10000);
    // the 256x200 logo into a 320x200 frame
    for (uint32_t s = W + 0x10000, d = W + 0x20; s != W + 0x10000 + 0xC800; s += 0x100, d += 0x140) copy(d, s, 0x100);
    memset(W + 0x10000, 0, 0xFA00);
    // 128 blur steps between W and W+10000h
    uint32_t keep = ring - 0x790000;            // +10000h a step: the ring from step 79h on
    for (uint32_t step = 0;;) {
        if ((step & 7) == 0) copy(blk + (step >> 3) * 0x10000, W + (step & 1) * 0x10000, 0x10000);
        if (!(step < 0x79)) copy(keep, W + (step & 1) * 0x10000, 0x10000);
        const uint32_t from = W + (step & 1) * 0x10000;
        keep += 0x10000;
        const uint32_t to = W + (~step & 1) * 0x10000;
        step++;
        blurStep(to, from);
        if (step >= 0x80) break;
    }
    gradient(pal, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x40);
    blackDac();
    while (clock(0x1AFB0) < 0x32F8F0)
        if (escape()) break;
    int32_t left = 0x160, pos = 0x7F, n = 0;
    const uint32_t cur = W + 0x10000;
    for (; n < 0x160; pos--, n++, left--) {
        if (escape()) break;
        const int32_t until = clock(0x1B10E) + 0x8527;
        if (n >= 0x80) {
            if (n == 0x80) {
                copy(W, blk, 0xFA00);
            } else if (n >= 0xE0) {
                const uint32_t src = W + (n & 1) * 0x10000;
                copy(kVram, src, 0xFA00);
                blurStep(W + (~n & 1) * 0x10000, src);
                if (n >= 0x120) whitePal(pal, 0, 0x40, left);
            }
        } else {
            if (n < 0x40) fadePal(pal, 0, 0x40, n + 1);
            if ((pos & 7) == 0) {
                copy(kVram, blk + (pos / 8) * 0x10000, 0xFA00);
                blurStep(W, cur);
            } else {
                const int32_t e = pos & 7;
                const uint32_t shown = (pos & 8) ? ring + (e - 1) * 0x10000 : ring + (7 - e) * 0x10000;
                copy(kVram, shown, 0xFA00);
                if (pos <= 8) blurStep(W, cur);
                else if (e == 7) blurStep(shown, blk + (pos / 8 - 1) * 0x10000);
                else if (pos & 8) blurStep(shown, ring + e * 0x10000);
                else blurStep(shown, ring + (6 - e) * 0x10000);
            }
        }
        for (int32_t c; (c = clock(0x1B0E9)) < until;) m_.clockSpin(c, until);
    }
    free(blk);
    memset(kVram, 0, 0xFA00);
}

}  // namespace lasse
