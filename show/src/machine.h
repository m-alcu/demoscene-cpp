// The PC Show runs on, as the analysis harness (emu.py) models it:
//
//   * memory: 16 MB, linear, with the VGA's window A000:0000-FFFF routed
//     to the VGA. SHOW.EXE runs where the harness's DOS loads it and the
//     parts where its loader reads them, so every address is the harness's;
//   * the VGA, the GUS (220h), the PIT (counters 0 and 2, port 61h), the
//     PICs, the keyboard's port 60h;
//   * time: an infinitely fast CPU. Code takes no time; time moves only
//     when the program waits. The program runs on its own thread; run()
//     lets it go up to a time. The clock is the harness's: an instruction
//     count at 10^13 a second.
//
// The waits (as the harness has them):
//   * poll3da(): the third read in a row of the same state (of the bits the
//     program tests: the vertical retrace, bit 3, or the display enable,
//     bit 0, line by line) jumps to the next change (or to an interrupt due
//     before it);
//   * spinWait(): a loop spinning on something an interrupt handler
//     changes goes to the next interrupt (or key).
// Frames follow the CRTC's timing: each begins with the vertical retrace,
// where the CRTC latches the start address and the pel panning, and is
// taken in its middle.
//
// Interrupts come due while the program waits. One is taken at the first
// point where it can be: the interrupt flag set, not masked, nothing of the
// same or a higher priority in service. The program's side calls deliver()
// wherever the original sets the flag or acknowledges an interrupt (STI,
// IRET, POPF, EOI); the handlers are the vectors the programs hook.
#pragma once

#include <array>
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

namespace show {

struct Quit {};

constexpr uint32_t kMemSize = 16u << 20;
constexpr double kPit = 1193182.0;

class Machine {
public:
    Machine();
    ~Machine();

    // --- memory ------------------------------------------------------------
    std::vector<uint8_t> mem;
    static bool vram(uint32_t a) { return a - 0xA0000u < 0x10000u; }
    uint8_t r8(uint32_t a) { return vram(a) ? vga.read(a - 0xA0000) : mem[a & (kMemSize - 1)]; }
    uint16_t r16(uint32_t a) {
        if (vram(a) || vram(a + 1)) return (uint16_t)(r8(a) | r8(a + 1) << 8);
        uint16_t v;
        std::memcpy(&v, &mem[a], 2);
        return v;
    }
    uint32_t r32(uint32_t a) {
        if (vram(a) || vram(a + 3)) return (uint32_t)r16(a) | (uint32_t)r16(a + 2) << 16;
        uint32_t v;
        std::memcpy(&v, &mem[a], 4);
        return v;
    }
    int8_t s8(uint32_t a) { return (int8_t)r8(a); }
    int16_t s16(uint32_t a) { return (int16_t)r16(a); }
    int32_t s32(uint32_t a) { return (int32_t)r32(a); }
    void w8(uint32_t a, uint32_t v) {
        if (vram(a)) vga.write(a - 0xA0000, (uint8_t)v);
        else mem[a & (kMemSize - 1)] = (uint8_t)v;
    }
    void w16(uint32_t a, uint32_t v) {
        if (vram(a) || vram(a + 1)) {
            w8(a, v), w8(a + 1, v >> 8);
            return;
        }
        const uint16_t x = (uint16_t)v;
        std::memcpy(&mem[a], &x, 2);
    }
    void w32(uint32_t a, uint32_t v) {
        if (vram(a) || vram(a + 3)) {
            w16(a, v), w16(a + 2, v >> 16);
            return;
        }
        std::memcpy(&mem[a], &v, 4);
    }
    static uint32_t lin(uint16_t seg, uint32_t off) { return ((uint32_t)seg << 4) + off; }

    // --- ports -------------------------------------------------------------
    void out8(uint16_t port, uint8_t v);
    void out16(uint16_t port, uint16_t v);
    uint8_t in8(uint16_t port);
    uint16_t in16(uint16_t port);
    // keys: (time, scancode) into port 60h
    void keys(std::vector<std::pair<double, uint8_t>> k);
    void press(uint8_t scancode) { keys_.push_back({t_, scancode}); }
    uint8_t kbdData() const { return kbdData_; }

    Vga vga;
    Gus gus;
    static constexpr int kRate = 44100;
    std::vector<float>* pcm = nullptr;
    void audioTo(double t);

    // --- interrupts --------------------------------------------------------
    // Taking an interrupt (vector n): the CPU side (Cpu::intr) pushes the
    // frame and runs the handler the IVT points at.
    std::function<void(int)> dispatch;
    void cli() { if_ = false; }
    void sti() { if_ = true; deliver(); }
    bool intFlag() const { return if_; }
    void setIntFlag(bool f) {
        if_ = f;
        if (f) deliver();
    }
    void deliver();
    // the BIOS's handler for an IRQ: acknowledged
    void ack(int irq) {
        inService_ &= (uint16_t)~(1 << irq);
        if (irq >= 8) inService_ &= (uint16_t)~4;
    }
    uint16_t inService() const { return inService_; }

    // --- time (program side) ----------------------------------------------
    double now() const { return t_; }
    // 3DAh; MASK: the bits the program tests (09h if it is not clear)
    uint8_t poll3da(uint8_t mask);
    uint8_t statusAt(double t) const;
    double nextStatusEdge(double t, uint8_t mask) const;
    void spinWait();
    [[noreturn]] void exit();

    // --- time (caller side) -------------------------------------------------
    void start(std::function<void()> program);
    bool run(double t);
    void stop();
    bool ended() const { return done_; }
    std::function<void(long, uint16_t, uint8_t)> frame;
    // every write to the VGA's ports (3C0h-3DFh) with its time
    std::function<void(double, uint16_t, uint8_t)> vgaWrite;
    // a frame's retrace begins (before the CRTC latches the new start
    // address: the frame before has been displayed)
    std::function<void()> retrace;
    uint16_t shownStart() const { return shown_; }
    uint8_t shownPan() const { return shownPan_; }
    // when scan line S (of the CRTC's) of the current frame is displayed
    double lineTime(int s) const { return lastVstart_ + (double)(((s - fvrs_) % fvt_ + fvt_) % fvt_) * (fper_ / fvt_); }
    // the current frame: when its retrace began, its period, its lines
    double frameStart() const { return lastVstart_; }
    double framePeriod() const { return fper_; }

    // the BIOS tick count (0:046Ch), bumped by the BIOS's IRQ 0
private:
    void wait(double target);
    void jump(double target);                   // (wait()'s first half: the clock to TARGET)
    int pitCount() const;
    void advance();
    double nextEvent() const;
    int pit2Count() const;
    bool pit2Out() const;

    int64_t icount_ = 0;
    double t_ = 0;
    bool if_ = true;
    uint16_t pending_ = 0, inService_ = 0;
    uint8_t picMask_[2] = {0xB8, 0xFF};
    uint8_t picBase_[2] = {0x08, 0x70};
    int picIcw_[2] = {0, 0};
    // PIT counter 0
    double nextTick_ = 0, pitLoadT_ = 0;
    int pitDiv_ = 65536, pitMode_ = 3;
    std::vector<uint8_t> pitBytes_, pitLatch_;
    bool pitLoading_ = false;
    // PIT counter 2, port 61h
    double pit2LoadT_ = 0;
    int pit2Div_ = 65536, pit2Mode_ = 3;
    std::vector<uint8_t> pit2Bytes_, pit2Latch_;
    bool pit2Loading_ = false;
    uint8_t port61_ = 0;
    // keyboard
    std::deque<std::pair<double, uint8_t>> keys_;
    uint8_t kbdData_ = 0;
    // retrace, frames
    double lastVstart_ = 0, vrEnd_ = 0, nextVstart_ = 0, nextVsync_ = 0;
    double fper_ = 0;
    int fvt_ = 0, fvrs_ = 0, fvde_ = 0;
    double fhfrac_ = 0;
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

}  // namespace show
