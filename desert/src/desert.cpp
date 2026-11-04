#include "desert.h"

namespace desert {

Desert::Desert(const StartState& start)
    : ax_(start.ax), bx_(start.bx), cx_(start.cx), bp_(start.bp) {
    setPalette();
    // mov ah,0a0h / mov ds,ax / mov es,ax: AX doubles as the segment of VRAM,
    // and keeps that value going into the generator below.
    ax_ = (uint16_t)(0xA000 | (ax_ & 0xFF));
    computeRows();  // the first pass fills the whole screen
}

// start .. loop @pal_loop. No OUT to 3C8h first: the BIOS has just loaded the
// whole palette, so the DAC write index has wrapped back to 0. Each pass
// writes one entry as R=G=AL, B=AL+15h, then takes the next AL from the loop
// counter: -(CL sar 2). CX starts at 00FFh, so entries 0..254 are written and
// 255 keeps its BIOS colour, black. Entry 0 gets the AL the BIOS returned.
// The DAC keeps the low 6 bits of each write.
void Desert::setPalette() {
    int index = 0;
    do {
        uint8_t al = (uint8_t)ax_;
        dac_[index * 3 + 0] = al & 0x3F;  // out dx,al
        dac_[index * 3 + 1] = al & 0x3F;  // out dx,al
        al = (uint8_t)(al + 0x15);        // add al,00010101b
        dac_[index * 3 + 2] = al & 0x3F;  // out dx,al
        al = (uint8_t)cx_;                // mov al,cl
        al = (uint8_t)((int8_t)al >> 2);  // sar al,2
        al = (uint8_t)-al;                // neg al
        ax_ = (uint16_t)((ax_ & 0xFF00) | al);
        index++;
    } while (--cx_ != 0);                 // loop @pal_loop
}

// @y_loop .. jne @y_loop. Each line is computed from the one above it: every
// pixel is the average of the two pixels above it, plus a random 0..17, minus
// 8 (and minus the carry of that addition). The sums wrap at 256, which is
// what draws the sharp ridges.
//
// The random number is a linear congruential step on AX, but AX also loads
// the pixel (lodsb), and xchg ax,bp swaps it with BP every pixel. So two
// generator states alternate, each carrying the previous pixel in its low
// byte. Translated faithfully, since that is where the texture comes from.
//
// The loop runs until BX reaches FA00h (64000). After the first pass that is
// one line: the new bottom line, written just below the visible screen.
void Desert::computeRows() {
    do {
        cx_ = 320;              // mov cx,320
        si_ = bx_;              // mov si,bx      the line above
        bx_ = (uint16_t)(bx_ + cx_);  // add bx,cx
        di_ = bx_;              // mov di,bx      the line being written
        do {
            const uint16_t t = ax_;  // xchg ax,bp
            ax_ = bp_;
            bp_ = t;
            uint32_t p = (uint32_t)ax_ * 0x8405;  // mov dx,8405h / mul dx
            ax_ = (uint16_t)p;
            p = (uint32_t)ax_ * 18;               // mov dx,18 / mul dx
            ax_ = (uint16_t)p;
            dx_ = (uint16_t)(p >> 16);            // DX = 0..17

            uint8_t al = vram_[si_++];            // lodsb
            al = (uint8_t)(al + vram_[si_]);      // add al,[si]
            al >>= 1;                             // shr al,1
            const unsigned sum = al + (dx_ & 0xFF);  // add al,dl
            const unsigned carry = sum >> 8;
            al = (uint8_t)(sum - 8 - carry);      // sbb al,8
            ax_ = (uint16_t)((ax_ & 0xFF00) | al);
            vram_[di_++] = al;                    // stosb
        } while (--cx_ != 0);                     // loop @x_loop
    } while ((bx_ >> 8) != 0xFA);                 // cmp bh,0fah / jne @y_loop
}

// sub di,bx .. rep movsd, after the wait for the retrace. Moves VRAM 320..
// 64319 up a line, onto 320..63999: lines 1..199 scroll up and the line just
// computed below the screen comes into view at the bottom. Line 0 is never
// touched, so it stays colour 0. BX ends one line above the bottom, so the
// next computeRows() makes exactly one line.
void Desert::scroll() {
    di_ = (uint16_t)(di_ - bx_);  // sub di,bx   = 320
    bx_ = (uint16_t)(bx_ - di_);  // sub bx,di   = 63680
    si_ = 320 + 320;              // mov si,320+320
    cx_ = 16000 - 80;             // mov cx,16000-80
    const unsigned bytes = cx_ * 4u;  // rep movsd, forwards
    for (unsigned i = 0; i < bytes; i++) vram_[(uint16_t)(di_ + i)] = vram_[(uint16_t)(si_ + i)];
    si_ = (uint16_t)(si_ + bytes);
    di_ = (uint16_t)(di_ + bytes);
    cx_ = 0;
}

// l1 .. jz @y_loop, and round to the next retrace. The key check (int 16h)
// is left to the caller, but not what it and the retrace wait do to AX, which
// feeds the generator: the wait leaves AL = 0 (and al,8 once the retrace is
// over) and the check sets AH = 1, which the BIOS leaves alone when no key is
// waiting. So every line after the first screen starts from AX = 0100h.
void Desert::retrace() {
    dx_ = 0x3DA;                               // mov dx,3dah
    ax_ = (uint16_t)(ax_ & 0xFF00);            // in al,dx / and al,8 -> 0 at l2's exit
    scroll();
    ax_ = (uint16_t)(0x0100 | (ax_ & 0xFF));   // mov ah,1 / int 16h
    computeRows();
}

}  // namespace desert
