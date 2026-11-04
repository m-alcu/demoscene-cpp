// ASMU's S3M player as DRIFT has it (code 2150h-3D47h of the flat
// segment), its GUS half: the card's set-up, the module's samples uploaded
// to its DRAM, the timer interrupt (every other one a tick), the rows and
// their effects. The player keeps its state in the program's memory at the
// original's offsets. The Sound Blaster mixer is not translated (the port
// always plays through the GUS), but the per-channel steps it would use
// are still computed where the GUS path computes them.
//
// The translation keeps the registers (members below) because some results
// depend on what a register happens to hold: when a vibrato ends, 3B24h
// leaves the caller's EAX in EBX, and that, not the period, is what 23F1h
// turns into the voice's frequency.
//
// Variables (offsets):
//   1F5Bh  flags: 100h a row was read this tick, 400h playing, 80h tone
//          portamento on the row, 200h a new instrument, 8 pattern break,
//          20h/40h order jumps
//   1F5Dh  card (1 = GUS)          12E3h  port (220h)     12E5h  IRQ (11)
//   12E6h  module                  12EAh  orders          12EFh  instruments
//   12F0h  channels                129Fh  speed           12A3h  tempo
//   129Bh  ticks left in the row   12BFh  next order      12CAh  row
//   12BBh  pattern pointer (module-relative)              2CA7h  IRQ parity
//   per channel n: 12F1h+n enabled, 1311h+n playing, 1331h+n to update (1
//   the sample, 2 the volume, 4 a note cut), 1371h+n volume, 1391h+n
//   instrument, 13B1h+4n sample offset, 14D1h+4n sample data, 1651h+n
//   effect, 1671h+n its parameter, 1691h+n volume slide, 16B1h+n porta
//   speed, 16D1h+n vibrato, 16F1h+4n period, 15D1h+4n porta target, 1771h+n
//   vibrato position, 17D1h+n vibrato flags, 1791h+n arpeggio step, 17B1h+n
//   retrigger count
//   GUS sample table: 19F1h+4n start, 1B7Dh+4n loop start, 1D09h+4n end,
//   1E95h+2n voice mode (8: loop)
#pragma once

#include <cstdint>

#include "machine.h"

namespace drift {

class Player {
public:
    explicit Player(Machine& m) : m_(m) {}

    void init();                        // function 1: the GUS reset, its timer set up and stopped
    bool load(uint32_t module);         // function 7: the module's header and samples
    void start();                       // function 2: the first row, the interrupt, the timer
    void stop();                        // function 3: the timer off, the GUS reset
    uint32_t position() const;          // function 5: (order - 1) * 64 + row - 1
    void irq();                         // the GUS interrupt (2CA8h)

private:
    // registers
    uint32_t A = 0, B = 0, C = 0, D = 0, SI = 0, DI = 0, BP = 0;
    static uint8_t lo(uint32_t r) { return (uint8_t)r; }
    static uint8_t hi(uint32_t r) { return (uint8_t)(r >> 8); }
    static void setLo(uint32_t& r, uint32_t v) { r = (r & ~0xFFu) | (v & 0xFF); }
    static void setHi(uint32_t& r, uint32_t v) { r = (r & ~0xFF00u) | (v & 0xFF) << 8; }
    static void setW(uint32_t& r, uint32_t v) { r = (r & ~0xFFFFu) | (v & 0xFFFF); }

    uint16_t flags() const { return m_.r16(0x1F5B); }
    void setFlags(uint16_t v) { m_.w16(0x1F5B, v); }
    uint16_t port() const { return m_.r16(0x12E3); }

    // GUS access as the player does it (EAX is AL = register, AH = value)
    void voice();                       // 225Eh: AL
    void set8();                        // 216Ah
    void set8twice();                   // 218Dh: written, a delay, again
    void set16();                       // 21D1h: AL, BX
    void get16();                       // 224Ah: AX
    void get8();                        // 2235h: AL
    void reset();                       // 2318h
    void setTimer();                    // 2515h: EAX = tempo
    void timerOff();                    // 256Dh
    void ack();                         // 2586h

    void setFreq();                     // 23F1h: AL voice, EBX period
    void setPan();                      // 240Fh: AL voice, BL pan
    void setVolume();                   // 242Bh: AL voice, BX volume (a ramp from where it is)
    void startSample();                 // 2478h: AL voice, EBX instrument
    void stopVoice();                   // 24FCh: AL voice
    void volumeOf();                    // EBX = the GF1 volume for channel ESI's volume

    bool seekOrder();                   // 27B3h: ESI order, EDX module
    void upload();                      // 3CA0h, with 22C3h
    void tempoReset();                  // 3AABh
    void notePeriod();                  // 3AD1h: EBX channel, CL note, AL instrument
    void mixStep();                     // 3B24h: EDI = 2 x channel, EBX period
    void mixStep2();                    // 3B25h

    void tick();                        // 2CF3h
    void effects();                     // 2D26h
    void row();                         // 34DEh
    void readRow();                     // 3760h: ESI pattern data
    void vibratoReset();                // 370Ah
    void voices();                      // 35EFh
    void patternLoop();                 // 35ABh
    void nextOrder();                   // 3591h

    Machine& m_;
};

}  // namespace drift
