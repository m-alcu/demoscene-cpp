// The music: Phantom's GUS replay as Complex built it into CYBOMAN2.EXE
// (32-bit protected-mode code at offsets 2A19Ah-2EDF6h of the program's
// flat segment), translated, playing "Inner Mountain Flame" by Jugi: a
// 16-channel module whose samples, but two, the replay makes as it loads.
//
// As in the intro's translation, the replay's variables stay at their
// offsets in a copy of its memory (offset = code32 offset, the module at
// 93Eh, the buffers it allocates from 1EF070h, where the original gets
// them), and it drives a GF1 through its ports. That keeps its bugs as they
// are: the volume ramp before a new note reads its volume at [EDI+13h] with
// the EDI of the interrupted code (4300h), and in that loop BP, the low word
// of the channel pointer, is overwritten, so that later channels are read
// from wherever it then points; the voice it ramps is the channel's flags
// XOR 15. The vibrato reads its table at DS:D81Ch (16-bit addressing: the
// table is at 2D81Ch), in the module's patterns.
//
// Time: GUS timer 2 interrupts every 960 us (count FDh); the replay counts
// the song's ticks from them with a 32-bit phase (BPM * 2 / 5 a second) and
// sends the voices' changes every fourth interrupt.
#pragma once

#include <cstdint>
#include <vector>

#include "gf1.h"

namespace cyb {

class Music {
public:
    static constexpr double kIrqPeriod = 3 * 320e-6;
    static constexpr uint32_t kEdi = 0x4300;   // EDI at the interrupt

    Music(const std::vector<uint8_t>& image, Gf1& gus);

    void init();        // 2A673h: the GUS set up (at the program's start)
    void load();        // 2E786h: the module, its samples to the GUS
    void start();       // 2E689h: the song from its start
    void irq();         // 2A268h: a timer 2 interrupt
    void stop();        // 2E771h

private:
    // ---- memory: the flat segment -------------------------------------------
    std::vector<uint8_t> m_;
    uint8_t dummy_ = 0;
    uint8_t& b(uint32_t a) { return a < m_.size() ? m_[a] : (dummy_ = 0); }
    uint16_t w(uint32_t a) { return (uint16_t)(b(a) | b(a + 1) << 8); }
    uint32_t d(uint32_t a) { return (uint32_t)w(a) | (uint32_t)w(a + 2) << 16; }
    void sw(uint32_t a, uint16_t v) { b(a) = (uint8_t)v, b(a + 1) = (uint8_t)(v >> 8); }
    void sd(uint32_t a, uint32_t v) { sw(a, (uint16_t)v), sw(a + 2, (uint16_t)(v >> 16)); }
    uint32_t heap_ = 0x1EF070;
    uint32_t alloc(uint32_t n) { const uint32_t a = heap_; heap_ += n; return a; }   // 2ACh

    // ---- the GUS --------------------------------------------------------------
    Gf1& gus_;
    void out(uint16_t port, uint8_t v) { gus_.out8(port, v); }
    void outw(uint16_t port, uint16_t v) { gus_.out16(port, v); }
    void setPans(uint32_t esi);                 // 2A648h
    void upload(uint32_t src, uint32_t dst, uint32_t n);   // 2A5AEh
    void tempo();                               // 2A538h
    void voices();                              // 2A2C1h: the interrupt's work
    void tick();                                // 2DCC0h: a tick of the song
    void row();                                 // 2DCEFh: its first, a row
    uint32_t notePeriod(uint8_t note, uint16_t c4);   // the period of a note
    uint16_t arpPeriod(uint32_t edi, uint8_t add);    // 2E5ADh: a note + ADD semitones
    void rowEffect(uint32_t edi);               // 2DEEFh: the first tick's effects
    void tickEffect(uint32_t edi);              // 2DF4Eh: the other ticks'
    void volumeSlide(uint32_t edi, uint8_t ah); // 2E2ECh, 2E34Ch: their first part
    void slideTo(uint32_t edi, uint16_t ax, bool zeroFloor);   // 2E29Eh, 2E311h
};

}  // namespace cyb
