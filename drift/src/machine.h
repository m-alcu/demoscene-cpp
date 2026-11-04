// The machine DRIFT runs on, as the analysis harness models it:
//
//   * memory: the program's flat 32-bit segment (offset 0 = linear 10FB0h,
//     where PMODE put it), with the unpacked image at its offsets, PMODE's
//     variables, and the heap from 1EF050h (extended memory at 2 MB);
//   * the VGA, the GUS, the PIT (IRQ 0) and the GUS timer (IRQ 11);
//   * time: an infinitely fast CPU, so the program only ever waits. It
//     runs on its own thread and hands over at each wait; the caller of
//     run() moves time on event by event: the retrace (70 Hz, 6 % of the
//     frame), the PIT's ticks, the GUS timer's interrupts, a frame shown in
//     the middle of each frame (the start address latched at its retrace).
//
// The waits are those of the harness (emu.py):
//   * polling 3DAh for a retrace edge: time goes to the edge (interrupts on
//     the way are taken);
//   * a "present" (a frame buffer copied to the screen, a page flip) with
//     no retrace wait since the previous one: time goes to the next PIT
//     tick first;
//   * a spin on the music position (21804h): to the next interrupt.
#pragma once

#include <condition_variable>
#include <cstdint>
#include <cstring>
#include <functional>
#include <mutex>
#include <thread>
#include <vector>

#include "gus.h"
#include "vga.h"

namespace drift {

struct Quit {};

constexpr uint32_t kCodeBase = 0x10FB0;         // linear address of offset 0
constexpr uint32_t kVram = 0xA0000 - kCodeBase; // A000:0000 as an offset
constexpr uint32_t kMemSize = 0x600000;
constexpr double kPit = 1193182.0;
// Where the port's program starts: the harness's time when the original
// leaves its sound card menus (the last key at 1.9 s) and sets up the PIT
// (its clock counts 10^13 instructions a second: one past 1.9 s).
constexpr double kStart = 1.9000000000001;

class Machine {
public:
    explicit Machine(const std::vector<uint8_t>& image);
    ~Machine();

    // --- memory ------------------------------------------------------------
    std::vector<uint8_t> mem;
    uint8_t& b(uint32_t a) { return mem[a]; }
    uint8_t r8(uint32_t a) const { return mem[a]; }
    uint16_t r16(uint32_t a) const { uint16_t v; std::memcpy(&v, &mem[a], 2); return v; }
    uint32_t r32(uint32_t a) const { uint32_t v; std::memcpy(&v, &mem[a], 4); return v; }
    int8_t s8(uint32_t a) const { return (int8_t)mem[a]; }
    int16_t s16(uint32_t a) const { return (int16_t)r16(a); }
    int32_t s32(uint32_t a) const { return (int32_t)r32(a); }
    void w8(uint32_t a, uint32_t v) { mem[a] = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v) { uint16_t x = (uint16_t)v; std::memcpy(&mem[a], &x, 2); }
    void w32(uint32_t a, uint32_t v) { std::memcpy(&mem[a], &v, 4); }

    // --- ports ---------------------------------------------------------------
    void out8(uint16_t port, uint8_t v);
    void out16(uint16_t port, uint16_t v);
    uint8_t in8(uint16_t port);
    uint8_t key = 0;                    // port 60h

    Vga vga;
    Gus gus;
    // the GUS's sound, made up to each moment it changes: stereo float
    // frames at kRate appended here (when set)
    static constexpr int kRate = 38587;         // 617400 Hz / 16 voices
    std::vector<float>* pcm = nullptr;
    void audioTo(double t);

    // --- time (program side) -----------------------------------------------
    double now() const { return t_; }
    void waitRetrace();                 // until bit 3 of 3DAh is set (now or at the next edge)
    void waitDisplay();                 // until it is clear
    bool inRetrace() const;
    // A read of 3DAh as the harness answers it: the third read in a row of
    // the same value jumps to the next edge (or to an interrupt due before)
    uint8_t poll3da();
    void present();                     // the frame goes to the screen
    void waitIrq();                     // until the next interrupt has been taken
    void sleepUntil(double t);

    // --- time (caller side) --------------------------------------------------
    // The program, then events, up to emulated time T. False once the
    // program has ended.
    bool run(double t);
    void start(std::function<void()> program);
    // the clock at T before the program starts (the harness's time for
    // where the port's program begins)
    void setClock(double t);
    void stop();
    bool ended() const { return done_; }

    // interrupt handlers (run on the caller's thread while the program waits)
    std::function<void()> irq0, irq11;
    // IRQ 11 at the PIC: pending until unmasked; taken if the program's
    // vector is set, else dropped (as the harness's PMODE does)
    void unmaskIrq11() { irq11Masked_ = false; deliver11(); }
    void setIrq11Vector(bool on) { irq11Vec_ = on; }
    // a frame shown: its number, the start address latched at its retrace
    std::function<void(long, uint16_t)> frame;

private:
    void wait(double target);           // program side: hand over until TARGET
    double nextEvent() const;           // the next interrupt (PIT, GUS)

    double t_ = 0;
    int64_t pcmPos_ = 0;
    // PIT
    double pitNext_ = 0, pitPer_ = 65536 / kPit;
    int pitMode_ = 3;
    std::vector<uint8_t> pitBytes_;
    bool pitLoading_ = false;
    bool irq11Pending_ = false, irq11Masked_ = true, irq11Vec_ = false;
    void deliver11();
    // retrace, frames
    long vstart_ = 0, mid_ = 0;
    uint16_t shown_ = 0;
    bool waited_ = false;
    int last3da_ = -1, same3da_ = 0;
    // the program thread
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    bool progTurn_ = false, done_ = false, quit_ = false, started_ = false;
    double target_ = 0;
};

}  // namespace drift
