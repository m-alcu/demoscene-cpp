// The machine the intro runs on, as the analysis harness (emu.py) models it:
//
//   * memory: linear addresses (PMODE/W's flat selectors have base 0): the
//     program's two objects at 14B00h and 1E500h, the VGA's mode 13h
//     memory at A0000h (chain-4: linear), the heap from 200000h;
//   * the VGA, the GUS, the PIT (IRQ 0), the keyboard's ports;
//   * time: an infinitely fast CPU. Code takes no time; time moves only when
//     the program waits, and the program sees it through the PIT's counter
//     (its clock, 15906h). It runs on its own thread; run() lets it go up
//     to a time.
//
// The waits (each as the harness has it):
//   * frameCheck(): the render loops' Esc check (15D18h). A loop that has
//     not waited for anything since the last one waits for the next frame
//     start: one frame per refresh.
//   * clockSpin(): a frame limiter's spin on the clock: to the instant the
//     clock reaches its target.
//   * clockPoll(), posPoll(): a second read of the clock or of the song
//     position from the same place with no time gone by in between waits
//     for the next thing to happen.
//   * poll3da(): the third read in a row of the same retrace state jumps
//     to the next edge.
//   * a read of the GUS's ramp control (8Dh) while the ramp runs: to its end.
// Interrupts come due while the program waits and are taken there: the
// timer's handler runs on the program's thread (it can wait itself, and be
// interrupted by the next tick).
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

namespace lasse {

struct Quit {};

constexpr uint32_t kImageBase = 0x14B00;        // data/ctslasse.img is loaded here
constexpr uint32_t kVram = 0xA0000;
constexpr uint32_t kMemSize = 0x600000;
constexpr double kPit = 1193182.0;

class Machine {
public:
    explicit Machine(const std::vector<uint8_t>& image);
    ~Machine();

    // --- memory ------------------------------------------------------------
    std::vector<uint8_t> mem;
    uint8_t r8(uint32_t a) const { return mem[a]; }
    uint16_t r16(uint32_t a) const { uint16_t v; std::memcpy(&v, &mem[a], 2); return v; }
    uint32_t r32(uint32_t a) const { uint32_t v; std::memcpy(&v, &mem[a], 4); return v; }
    int8_t s8(uint32_t a) const { return (int8_t)mem[a]; }
    int16_t s16(uint32_t a) const { return (int16_t)r16(a); }
    int32_t s32(uint32_t a) const { return (int32_t)r32(a); }
    float f32(uint32_t a) const { float v; std::memcpy(&v, &mem[a], 4); return v; }
    double f64(uint32_t a) const { double v; std::memcpy(&v, &mem[a], 8); return v; }
    void w8(uint32_t a, uint32_t v) { mem[a] = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v) { uint16_t x = (uint16_t)v; std::memcpy(&mem[a], &x, 2); }
    void w32(uint32_t a, uint32_t v) { std::memcpy(&mem[a], &v, 4); }
    void wf32(uint32_t a, float v) { std::memcpy(&mem[a], &v, 4); }
    void wf64(uint32_t a, double v) { std::memcpy(&mem[a], &v, 8); }
    uint8_t* p(uint32_t a) { return &mem[a]; }

    // --- ports ---------------------------------------------------------------
    void out8(uint16_t port, uint8_t v);
    void out16(uint16_t port, uint16_t v);
    uint8_t in8(uint16_t port);
    uint16_t in16(uint16_t port) { const uint8_t lo = in8(port); return (uint16_t)(lo | in8((uint16_t)(port + 1)) << 8); }
    // keys: (time, scancode) pressed into port 60h (bit 0 of 64h set till read)
    void keys(std::vector<std::pair<double, uint8_t>> k);
    // a key now (caller side, between run() calls)
    void press(uint8_t scancode) { keys_.push_back({t_, scancode}); }

    Vga vga;
    Gus gus;
    // the GUS's sound, made up to each moment it changes: stereo float
    // frames at kRate appended here (when set)
    static constexpr int kRate = 44100;
    std::vector<float>* pcm = nullptr;
    void audioTo(double t);

    // --- the CPU's interrupt flag, the timer interrupt ----------------------
    void cli() { if_ = false; }
    void sti() { if_ = true; }
    bool intFlag() const { return if_; }
    void setIntFlag(bool f) { if_ = f; }
    // vector 8: the program's handler (none: the tick is dropped, as before
    // the program hooks it under the harness)
    std::function<void()> irq0;
    // the BIOS's own tick handler, chained to: its EOI
    void chainBiosTick() { inService0_ = false; }

    // --- time (program side) -----------------------------------------------
    double now() const { return t_; }
    void frameCheck();
    void clockSpin(int32_t clock, int32_t target);
    void clockPoll(uint32_t ret);
    void posPoll(uint32_t ret);
    uint8_t poll3da();

    // --- time (caller side) --------------------------------------------------
    void start(std::function<void()> program);
    // Lets the program run up to emulated time T. False once it has ended.
    bool run(double t);
    void stop();
    bool ended() const { return done_; }
    // a frame shown (its number from 0 at the program's start, the start
    // address latched at its retrace): in the middle of each 70 Hz frame
    std::function<void(long, uint16_t)> frame;

private:
    void wait(double target);           // time to TARGET, then what is due
    void advance();
    void deliver();
    double nextEvent() const;           // the next interrupt (IF clear: none)
    void gusRampWait(uint8_t& val);
    int pitCount() const;

    double t_ = 0;
    uint64_t warps_ = 0;                // times time has moved (the harness's "same instant")
    bool if_ = true;
    // PIT counter 0
    double nextTick_ = 0, pitLoad_ = 0;
    int pitDiv_ = 65536, pitMode_ = 3;
    std::vector<uint8_t> pitBytes_;
    bool pitLoading_ = false;
    std::vector<uint8_t> pitLatch_;
    bool pending0_ = false, inService0_ = false;
    // keyboard
    std::deque<std::pair<double, uint8_t>> keys_;
    uint8_t kbdData_ = 0;
    bool kbdFull_ = false;
    // retrace, frames
    double nextVstart_ = 0, nextVsync_ = 0.5 / 70.0;
    long vsyncs_ = 0;
    uint16_t shown_ = 0;
    bool waited_ = false;
    int last3da_ = -1, same3da_ = 0;
    std::pair<uint32_t, uint64_t> lastClock_{0, ~0ull}, lastPos_{0, ~0ull};
    bool clockResume_ = false, posResume_ = false;
    int64_t pcmPos_ = -1;
    // the program thread
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    double allowed_ = 0, blockedAt_ = 0;
    bool blocked_ = false, done_ = false, quit_ = false;
};

}  // namespace lasse
