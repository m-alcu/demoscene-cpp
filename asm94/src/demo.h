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
    uint8_t in(uint16_t p) { return m_.in8(p); }
    void out(uint16_t p, uint8_t v) { m_.out8(p, v); }
    void outw(uint16_t p, uint16_t v) { m_.out16(p, v); }
    void mapMask(uint8_t planes) { out(0x3C4, 2), out(0x3C5, planes); }
    void waitFrame();                   // 0AF0h: the end of a retrace, the start of the next
    void waitRetrace();                 // 0AFFh
    void waitDisplay();                 // 0B09h
    uint16_t sine(uint16_t a);          // 0B54h: a sine, 1024 steps a quarter (x 4000h)
    uint16_t cosine(uint16_t a) { return sine((uint16_t)(a + 0x4000)); }   // 0B50h
    void setStart(uint16_t bx);         // 1B38h: the CRTC start address
    void hpan(uint16_t bx);             // 1B1Bh: the pel panning (BX = 0, 2, 4, 6)
    void flip();                        // 1E43h: page flip after the display
    void palette(uint32_t src, int first, int n);  // the DAC from FIRST, N entries
    void exitToDos();                   // the end: mode 3, the text screen, exit

    // PMODE's interrupt vectors (calls through [28h], [2Ch]): IRQ 0's
    // handler by its offset (354Eh, 3BA2h: the program's; else the BIOS's)
    uint32_t irq0Vector_ = 0x951, irq11Vector_ = 0x99E;
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
    void wordsScale(uint32_t edi, uint32_t esi, uint32_t ecx);   // 1CB7h
    void wordsErase1();                 // 1D4Bh
    void wordsErase0();                 // 1DF7h
    void title();                       // 3949h: ASSEMBLY '94, faded in and out
    void fade(uint32_t ebp);            // 20B1h: two palettes mixed into [265Dh]
    void screen();                      // 2462h: the invitation screen comes up
    void copyPlanes(uint32_t src);      // 266Ah
    void writer();                      // 30D7h: the text writer, till Esc
    void writerGlyphs(uint32_t ebp);    // 33A3h
    void writerClear();                 // 3432h
    void writerShow();                  // 34CAh: the changed bytes to the screen
    void timer354E();                   // the first part's timer (960 Hz)
    void timer3BA2();                   // the later parts' (140 Hz)
    void ellipse();                     // 3B1Eh: the dotted ellipse, step
    void ellipseDraw();                 // 3C4Ch

    // --- the music (player.cpp) ----------------------------------------------
    void playerLoad();                  // 2F166h: the module to the GUS
    void playerStart();                 // 2F0FFh
    void playerStop();                  // 2F0D3h
    void playerPoll();                  // 2F093h: from the timer (volume changes)
    void gusIrq();                      // 31EE7h: IRQ 11
    void tick();                        // 30F3Bh
    void loadClear();                   // 2FB18h
    void loadModule();                  // 2FCB7h
    void unpackPatterns();              // 2FE3Bh
    void upload(uint32_t esi);          // 2FEBEh: sample bytes to the GUS DRAM
    void loadInit();                    // 30927h
    void volumes();                     // 31B7Eh
    void volume(uint32_t esi);          // 31662h
    void startTimer();                  // 31E4Bh
    void stopTimer();                   // 31EB6h
    void silence();                     // 3012Fh
    void gusDelay();                    // 2FFC6h
    void newSample(uint32_t eax, uint32_t ebx);     // 31CD2h
    void newNote(uint32_t eax, uint32_t ebx, uint32_t esi, uint32_t edi);  // 31BCDh
    void period(uint32_t esi);          // 31C60h
    void setPos(uint32_t esi);          // 31D12h
    void setFreq(uint16_t ax);          // 31D36h
    void setLoop(uint32_t esi);         // 31D4Ch
    void rampVolume(uint32_t esi, uint8_t al);      // 31DA0h
    void rampTo(uint16_t ax, uint16_t bx, uint16_t dx);  // 31DCBh
    void voiceStop();                   // 31E27h
    void voiceMode(uint8_t bl);         // 31E39h
    void nextPattern();                 // 31B07h
    bool rowEffect(uint32_t& esi, uint32_t& ecx);   // the row effects' table (319DEh)
    void tickEffect(uint32_t esi, uint32_t ecx, uint16_t ax);   // the tick effects' (31A72h)
};

}  // namespace asm94
