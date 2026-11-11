// What the intro runs on:
//
//   * memory: the program's flat 32-bit segment (offset 0 = linear 8FB0h,
//     where Tran's PMODE put it), with the unpacked image at its offsets,
//     the state PMODE and the set-up leave (runtime.inc), the player's
//     heaps (low memory up to 97050h, extended memory from F7050h);
//   * the screen: 256K pixels of video memory and a 256-colour palette
//     (6 bits a component). The display shows 320 pixels by 240 or 480
//     lines from a start in it, rows PITCH pixels apart, shifted left by
//     a pan of 0-3 pixels. Mode X's planar video memory is laid out
//     linearly: byte offset O of plane P is pixel 4 x O + P;
//   * two timers: the PIT (IRQ 0) and the music's (IRQ 11, in 80 us
//     units, as the GUS's timer 1 was), the interrupt controller as far
//     as the program uses it, the last key;
//   * the music's mixer, which renders up to each moment it changes.
//
// Time: an infinitely fast CPU. Code takes no time; time moves only when
// the program waits:
//   * inRetrace(): the third read in a row of the same retrace state jumps
//     to the next edge (or to an interrupt due before it);
//   * flagWait(): a loop spinning on a flag an interrupt handler sets goes
//     to the next interrupt (or key).
// The program runs on its own thread; run() lets it go up to a time.
// Frames last a refresh period (70.09 Hz in text mode, 59.71 Hz in Mode
// X). Each begins with the vertical retrace, where the display latches the
// start and the pan, and is taken in its middle.
//
// Interrupts come due while the program waits and are taken there, on the
// program's thread, in priority order, if the interrupt flag is set and no
// interrupt of the same or a higher priority is in service. A handler's
// STI takes what is still pending.
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

#include "mixer.h"

namespace asm94 {

struct Quit {};

constexpr uint32_t kMemSize = 0x200000;
constexpr uint32_t kVramSize = 0x40000;         // pixels

class Machine {
public:
    explicit Machine(const std::vector<uint8_t>& image);
    ~Machine();

    // --- memory: the flat segment ------------------------------------------
    std::vector<uint8_t> mem;
    uint8_t r8(uint32_t a) const { return mem[a]; }
    uint16_t r16(uint32_t a) const {
        uint16_t v;
        std::memcpy(&v, &mem[a], 2);
        return v;
    }
    uint32_t r32(uint32_t a) const {
        uint32_t v;
        std::memcpy(&v, &mem[a], 4);
        return v;
    }
    int8_t s8(uint32_t a) const { return (int8_t)r8(a); }
    int16_t s16(uint32_t a) const { return (int16_t)r16(a); }
    int32_t s32(uint32_t a) const { return (int32_t)r32(a); }
    void w8(uint32_t a, uint32_t v) { mem[a] = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v) {
        const uint16_t x = (uint16_t)v;
        std::memcpy(&mem[a], &x, 2);
    }
    void w32(uint32_t a, uint32_t v) { std::memcpy(&mem[a], &v, 4); }

    // --- the screen ----------------------------------------------------------
    struct Display {
        std::vector<uint8_t> vram = std::vector<uint8_t>(kVramSize, 0);
        uint8_t palette[768] = {};
        bool graphics = false;          // false: the text screen (not shown)
        uint32_t start = 0;             // pixel of the top left
        int pan = 0;                    // 0-3 pixels
        int pitch = 320, lines = 240;
    } screen;
    uint8_t& pixel(uint32_t p) { return screen.vram[p & (kVramSize - 1)]; }
    void fill(uint32_t p, uint32_t n, uint8_t v) {
        for (uint32_t i = 0; i < n; i++) pixel(p + i) = v;
    }
    void copy(uint32_t p, uint32_t src, uint32_t n) {
        for (uint32_t i = 0; i < n; i++) pixel(p + i) = mem[src + i];
    }
    void setColor(int i, uint8_t r, uint8_t g, uint8_t b) {
        uint8_t* c = &screen.palette[(i & 0xFF) * 3];
        c[0] = r & 0x3F, c[1] = g & 0x3F, c[2] = b & 0x3F;
    }
    // the BIOS's mode sets: the text screen, or 320 x 200 (the refresh of
    // both: 70.09 Hz); Mode X's 480-line timing: 59.71 Hz
    void textMode();
    void graphicsMode();
    void modeXTiming();
    // the picture of the last frame taken: 320 x lines palette indices,
    // from the start and pan latched at its retrace
    void picture(std::vector<uint8_t>& px, int& lines) const;

    // --- timers, interrupts, keyboard ---------------------------------------
    void setPit(uint16_t divisor);      // mode 3; 0: 65536
    void startMusicTimer(uint8_t count);
    void setMusicTimer(uint8_t count) { musicPer_ = (256 - count) * 80e-6; }
    void rearmMusicTimer();             // its next interrupt on its grid again
    void stopMusicTimer() { musicNext_ = -1; }
    bool musicTimerOn() const { return musicNext_ >= 0; }
    void mask(int irq, bool masked);
    void eoi();                         // the highest priority in service ends
    // the BIOS's handler for an IRQ: that IRQ acknowledged
    void ack(int irq) {
        inService_ &= (uint16_t)~(1 << irq);
        if (irq >= 8) inService_ &= (uint16_t)~4;
    }
    uint8_t key() const { return kbdData_; }   // the last scancode
    // keys: (time, scancode); press(): one now (caller side)
    void keys(std::vector<std::pair<double, uint8_t>> k);
    void press(uint8_t scancode) { keys_.push_back({t_, scancode}); }

    // --- the music ---------------------------------------------------------
    // the mixer, its sound made up to now
    Mixer& mixer() {
        audioTo(t_);
        return mixer_;
    }
    // where the sound goes, when set: stereo float frames at Mixer::kRate
    std::vector<float>* pcm = nullptr;

    // --- the CPU's interrupt flag, the interrupt handlers -------------------
    void cli() { if_ = false; }
    void sti() { if_ = true; deliver(); }
    // the handlers the program has hooked: IRQ 0, IRQ 11
    std::function<void()> irq0, irq11;

    // --- time (program side) ----------------------------------------------
    double now() const { return t_; }
    bool inRetrace();
    void flagWait(uint32_t flag, uint8_t value);
    // the program has quit (DOS function 4Ch)
    [[noreturn]] void exit();

    // --- time (caller side) -------------------------------------------------
    void start(std::function<void()> program);
    // Lets the program run up to time T. False once it has ended.
    bool run(double t);
    void stop();
    bool ended() const { return done_; }
    // a frame shown (its number from the start): in the middle of each
    // frame, on the program's thread
    std::function<void(long)> frame;

private:
    void audioTo(double t);
    void wait(double target);           // time to TARGET, then what is due
    void advance();
    void deliver();
    double nextEvent() const;           // the next interrupt (IF clear: none)

    double t_ = 0;
    bool if_ = true;
    // interrupts: pending, in service, masks
    uint16_t pending_ = 0, inService_ = 0, masks_ = 0xF7B8;
    // the timers
    double pitNext_ = 0, pitPer_ = 0;
    double musicT0_ = 0, musicPer_ = 0, musicNext_ = -1;
    // keyboard
    std::deque<std::pair<double, uint8_t>> keys_;
    uint8_t kbdData_ = 0;
    // retrace, frames
    double period_ = 0, retrace_ = 0;
    double vrEnd_ = 0, nextVstart_ = 0, nextVsync_ = 0;
    long vsyncs_ = 0;
    uint32_t shownStart_ = 0;
    int shownPan_ = 0;
    int last3da_ = -1, same3da_ = 0;
    // sound
    Mixer mixer_;
    int64_t pcmPos_ = 0;
    std::vector<float> scratch_;
    // the program thread
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    double allowed_ = 0, blockedAt_ = 0;
    bool blocked_ = false, done_ = false, quit_ = false;
};

}  // namespace asm94
