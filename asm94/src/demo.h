// The intro's program, translated routine by routine over the machine's
// memory: routines and variables keep their offsets in the flat segment
// (the names below carry them), and memory one routine writes and another
// reads works as in the original, code patched at run time included.
//
// The program is hand-written assembly: the intro (Future Crew & Sonic
// PC), Mikko Sairio's "Player 1.68r" for the music, a small heap. The
// port starts where the original has done its sound card set-up (4007h),
// in the state the harness has there (runtime.inc).
#pragma once

#include <cstdint>
#include <functional>

#include "machine.h"

namespace asm94 {

class Demo {
public:
    explicit Demo(Machine& m);
    void main();                        // 4007h on

private:
    Machine& m_;

    // --- helpers -------------------------------------------------------------
    // video memory by Mode X byte offset and plane: pixel 4 x offset + plane
    static uint32_t px(uint32_t off) { return off << 2; }
    void waitFrame();                   // 0AF0h: the end of a retrace, the start of the next
    void waitRetrace();                 // 0AFFh
    void waitDisplay();                 // 0B09h
    uint16_t sine(uint16_t a);          // 0B54h: a sine, 1024 steps a quarter (x 4000h)
    uint16_t cosine(uint16_t a) { return sine((uint16_t)(a + 0x4000)); }   // 0B50h
    void setStart(uint16_t bx);         // 1B38h: the display's start (a byte offset)
    void hpan(uint16_t bx);             // 1B1Bh: the pan (BX = 0, 2, 4, 6: half pixels)
    void flip();                        // 1E43h: page flip after the display
    void palette(uint32_t src, int first, int n);  // N colours from FIRST
    void exitToDos();                   // the end: mode 3, the text screen, exit

    // PMODE's interrupt vectors (calls through [28h], [2Ch]): IRQ 0's
    // handler by its offset (354Eh, 3BA2h: the program's; else the BIOS's)
    uint32_t irq0Vector_ = 0x951, irq11Vector_ = 0x99E;
    int voice_ = 0;                     // the mixer voice the player works on
    void setIrq0(uint32_t v) { irq0Vector_ = v; }
    void timer();                       // IRQ 0 by its vector
    void setPit();                      // 3539h: the PIT at [354Ch], mode 3
    void biosTimer();                   // 3F00h: the BIOS's 18.2 Hz and handler

    // --- the heap (the player's: 2EE38h, 2EF3Fh) ----------------------------
    uint32_t alloc(uint32_t n);         // 2EE38h; 0: none
    void free(uint32_t p);              // 2EF3Fh

    // --- the parts -----------------------------------------------------------
    void modeX();                       // 0BF4h: mode 13h, unchained, 480 lines, cleared
    void logo();                        // 35D6h: the picture under the words, to the back page
    void words();                       // 1EFBh: the organisers' names turning
    void wordsClear();                  // 1B51h
    void wordsProject();                // 1B64h
    void wordsDraw();                   // 1BFDh
    void wordsColumn(uint32_t eax, uint32_t esi);   // 1C5Fh
    void wordsScale(uint32_t p, uint32_t esi, uint32_t ecx);     // 1CB7h
    void wordsErase1();                 // 1D4Bh
    void wordsErase0();                 // 1DF7h
    void title();                       // 3949h: ASSEMBLY '94, faded in and out
    void fade(uint32_t ebp);            // 20B1h: two palettes mixed into [265Dh]
    void screen();                      // 2462h: the invitation screen comes up
    void writer();                      // 30D7h: the text writer, till Esc
    void writerGlyphs(uint32_t ebp);    // 33A3h
    void writerClear();                 // 3432h
    void writerShow();                  // 34CAh: the changed bytes to the screen
    void timer354E();                   // the first part's timer (960 Hz)
    void timer3BA2();                   // the later parts' (140 Hz)
    void ellipse();                     // 3B1Eh: the dotted ellipse, step
    void ellipseDraw();                 // 3C4Ch

    // --- the music (player.cpp) ----------------------------------------------
    void playerLoad();                  // 2F166h: the module, its samples to the mixer
    void playerStart();                 // 2F0FFh
    void playerStop();                  // 2F0D3h
    void playerPoll();                  // 2F093h: from the timer (volume changes)
    void musicIrq();                    // 31EE7h: IRQ 11, the music's timer
    void tick();                        // 30F3Bh
    void loadClear();                   // 2FB18h
    void loadModule();                  // 2FCB7h
    void unpackPatterns();              // 2FE3Bh
    void upload(uint32_t esi);          // 2FEBEh: sample bytes to the mixer
    void loadInit();                    // 30927h
    void volumes();                     // 31B7Eh
    void volume(uint32_t esi);          // 31662h
    void startTimer();                  // 31E4Bh
    void stopTimer();                   // 31EB6h
    void newSample(uint32_t eax, uint32_t ebx);     // 31CD2h
    void newNote(uint32_t eax, uint32_t ebx, uint32_t esi, uint32_t edi);  // 31BCDh
    void period(uint32_t esi);          // 31C60h
    void rampVolume(uint8_t al);        // 31DA0h
    void rampTo(uint16_t ax, uint16_t bx);          // 31DCBh
    void nextPattern();                 // 31B07h
    bool rowEffect(uint32_t& esi, uint32_t& ecx);   // the row effects' table (319DEh)
    void tickEffect(uint32_t esi, uint32_t ecx, uint16_t ax);   // the tick effects' (31A72h)
};

}  // namespace asm94
