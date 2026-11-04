// The machine the intro runs on, as the analysis harness (emu.py) models it:
//
//   * memory: the program's flat 32-bit segment (offset 0 = linear 8FB0h,
//     where Tran's PMODE put it), with the unpacked image at its offsets,
//     the state PMODE and the sound card set-up leave (runtime.inc), the
//     player's heaps (low memory up to 97050h, extended memory from F7050h).
//     The VGA's window A000:0000 is at offset 97050h (kVram);
//   * the VGA, the GUS (220h, IRQ 11), the PIT (IRQ 0), the PICs as far as
//     the program uses them, the keyboard's port 60h;
//   * time: an infinitely fast CPU. Code takes no time; time moves only
//     when the program waits. It runs on its own thread; run() lets it go
//     up to a time.
//
// The waits (each as the harness has it):
//   * poll3da(): the third read in a row of the same retrace state jumps
//     to the next edge (or to an interrupt due before it);
//   * flagWait(): a loop spinning on a flag an interrupt handler sets goes
//     to the next interrupt (or key).
// Frames follow the CRTC's timing (Vga::timing): each begins with the
// vertical retrace, where the CRTC latches the start address and the pel
// panning, and is taken in its middle.
//
// Interrupts come due while the program waits and are taken there, on the
// program's thread, in the PIC's priority order, if the interrupt flag is
// set and no interrupt of the same or a higher priority is in service. A
// handler's STI takes what is still pending (the harness hooks the
// instruction after each STI).
#pragma once

#include <condition_variable>
#include <cstdint>
#include <cstring>
#include <deque>
#include <functional>
#include <mutex>
#include <thread>
#include <utility>
#include <vector>

#include "gus.h"
#include "vga.h"

namespace asm94 {

struct Quit {};

constexpr uint32_t kCodeBase = 0x8FB0;          // linear address of offset 0
constexpr uint32_t kVram = 0xA0000 - kCodeBase; // A000:0000 as an offset
constexpr uint32_t kMemSize = 0x200000;
constexpr double kPit = 1193182.0;

class Machine {
public:
    explicit Machine(const std::vector<uint8_t>& image);
    ~Machine();

    // --- memory: the flat segment, the VGA window routed to the VGA --------
    std::vector<uint8_t> mem;
    static bool vram(uint32_t a) { return a - kVram < 0x10000; }
    uint8_t r8(uint32_t a) const { return vram(a) ? vga.read(a - kVram) : mem[a]; }
    uint16_t r16(uint32_t a) const {
        if (vram(a) || vram(a + 1)) return (uint16_t)(r8(a) | r8(a + 1) << 8);
        uint16_t v;
        std::memcpy(&v, &mem[a], 2);
        return v;
    }
    uint32_t r32(uint32_t a) const {
        if (vram(a) || vram(a + 3)) return (uint32_t)r16(a) | (uint32_t)r16(a + 2) << 16;
        uint32_t v;
        std::memcpy(&v, &mem[a], 4);
        return v;
    }
    int8_t s8(uint32_t a) const { return (int8_t)r8(a); }
    int16_t s16(uint32_t a) const { return (int16_t)r16(a); }
    int32_t s32(uint32_t a) const { return (int32_t)r32(a); }
    void w8(uint32_t a, uint32_t v) {
        if (vram(a)) vga.write(a - kVram, (uint8_t)v);
        else mem[a] = (uint8_t)v;
    }
    void w16(uint32_t a, uint32_t v) { w8(a, v), w8(a + 1, v >> 8); }
    void w32(uint32_t a, uint32_t v) {
        if (vram(a) || vram(a + 3)) {
            w16(a, v), w16(a + 2, v >> 16);
            return;
        }
        std::memcpy(&mem[a], &v, 4);
    }

    // --- ports -------------------------------------------------------------
    void out8(uint16_t port, uint8_t v);
    void out16(uint16_t port, uint16_t v);
    uint8_t in8(uint16_t port);
    uint16_t in16(uint16_t port);
    // keys: (time, scancode) into port 60h; press(): one now (caller side)
    void keys(std::vector<std::pair<double, uint8_t>> k);
    void press(uint8_t scancode) { keys_.push_back({t_, scancode}); }

    Vga vga;
    Gus gus;
    // the GUS's sound, made up to each moment it changes: stereo float
    // frames at kRate appended here (when set)
    static constexpr int kRate = 44100;
    std::vector<float>* pcm = nullptr;
    void audioTo(double t);

    // --- the CPU's interrupt flag, the interrupt handlers -------------------
    void cli() { if_ = false; }
    void sti() { if_ = true; deliver(); }
    bool intFlag() const { return if_; }
    void setIntFlag(bool f) { if_ = f; }
    // the handlers the program has hooked: IRQ 0 (none: the BIOS's tick,
    // which only acknowledges), IRQ 11 (the GUS)
    std::function<void()> irq0, irq11;
    // the BIOS's handler for an IRQ (a vector PMODE reflects to real mode):
    // that IRQ acknowledged
    void ack(int irq) {
        inService_ &= (uint16_t)~(1 << irq);
        if (irq >= 8) inService_ &= (uint16_t)~4;
    }

    // --- time (program side) ----------------------------------------------
    double now() const { return t_; }
    uint8_t poll3da();
    void flagWait(uint32_t flag, uint8_t value);
    // the program has quit (DOS function 4Ch)
    [[noreturn]] void exit();

    // --- time (caller side) -------------------------------------------------
    void start(std::function<void()> program);
    // Lets the program run up to emulated time T. False once it has ended.
    bool run(double t);
    void stop();
    bool ended() const { return done_; }
    // a frame shown (its number from the port's start, the start address
    // and pel panning latched at its retrace): in the middle of each frame
    std::function<void(long, uint16_t, uint8_t)> frame;

private:
    void wait(double target);           // time to TARGET, then what is due
    void advance();
    void deliver();
    double nextEvent() const;           // the next interrupt (IF clear: none)

    double t_ = 0;
    bool if_ = true;
    // PIC: pending, in service, masks
    uint16_t pending_ = 0, inService_ = 0;
    uint8_t picMask_[2] = {0xB8, 0xF7};
    // PIT counter 0
    double nextTick_ = 0;
    int pitDiv_ = 65536, pitMode_ = 3;
    std::vector<uint8_t> pitBytes_;
    bool pitLoading_ = false;
    // keyboard
    std::deque<std::pair<double, uint8_t>> keys_;
    uint8_t kbdData_ = 0;
    // retrace, frames
    double lastVstart_ = 0, vrEnd_ = 0, nextVstart_ = 0, nextVsync_ = 0;
    long vsyncs_ = 0;
    uint16_t shown_ = 0;
    uint8_t shownPan_ = 0;
    int last3da_ = -1, same3da_ = 0;
    int64_t pcmPos_ = -1;
    // the program thread
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    double allowed_ = 0, blockedAt_ = 0;
    bool blocked_ = false, done_ = false, quit_ = false;
};

}  // namespace asm94
