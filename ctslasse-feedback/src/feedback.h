// The feedback zoomer of Lasse Reinbøng (Cubic Team & $eeN, 1995): part 6
// of the intro (1BE6Ah), its central picture on its own, without the scroll
// of words down the screen's sides.
//
// Each frame: a point and 100 dots on sine paths are drawn into a 256-wide
// picture A, a title is written in, A is blurred into B (4-neighbour
// average), B is shown, and B is rotozoomed back onto A about the point.
// The palette (64 entries) turns from black-white-blue to blue-red-yellow
// over T 16-24 s.
//
// Translated from the ctslasse port (routine by routine, keeping the order
// of every x87 operation, 80-bit intermediates included), over plain arrays.
// Its frames match the original's (tests/ref.txt).
//
// Time is the intro's clock: PIT ticks (1193182 Hz) since the part began.
// The effect has memory (each frame is built from the last), so frames must
// be drawn in order from the part's start.
#pragma once

#include <cstdint>

#include "x87.h"

namespace feedback {

constexpr int W = 256, H = 198;     // the picture: 256 x 198, at (32, 1) on the intro's 320x200 screen
constexpr double kPit = 1193182.0;
constexpr int32_t kFirstClock = 17046;  // the clock of the part's first frame
constexpr int32_t kStep = 15000;        // at most a frame every 15000 ticks (79.5 per second)
constexpr int kFrames = 3034;           // the part's frames in the intro

// Changes to the effect, to take it apart (the workbench's panel). The
// defaults are the intro's: with them, frame() runs exactly the original.
struct Params {
    enum Blink { kBlinkIntro, kBlinkOn, kBlinkOff };
    bool introCamera = true;    // false: the zoom step and turn below
    float step = 0.75f;         // texels per pixel (16.16 / 65536): below 1 enlarges
    float turn = 0;             // radians a frame
    bool introCentre = true;    // false: the point fixed at (cx, cy)
    int cx = 128, cy = 100;
    int blink = kBlinkIntro;    // the point: lit 1/3 of each 1/2.93 s, always, never drawn
    int dots = 100;             // how many of the dots are drawn
    bool title = true;
    bool blur = true;           // false: A copied to B as it is
    bool carry = true;          // the blur's lost 2 bits carried on (false: dropped)
    bool feed = true;           // false: A cleared instead of B fed back onto it
};

// What the last frame used.
struct Info {
    float T = 0, zoom = 65536, angle = 0;   // zoom in 16.16 (65536: a step of 1)
    int px = 0, py = 0;
    bool lit = false;
};

class Feedback {
public:
    Feedback();
    // Draw the frame at CLOCK (PIT ticks since the part began). Frames must
    // come in order: each one feeds back on the last.
    void frame(int32_t clock, const Params& p = Params{});
    const Info& info() const { return info_; }
    // A and B set to 0 (the font kept)
    void clearPictures();
    const uint8_t* palette1() const { return pal_; }   // black-blue-white
    const uint8_t* palette2() const { return pal2_; }  // grey-black-blue-red-yellow
    // The clock of frame N, as the intro steps it (the original's own clocks
    // drift a little: the music player takes time on the timer interrupt).
    static int32_t frameClock(int n) { return kFirstClock + n * kStep; }

    const uint8_t* screen() const { return mem_ + kB + 0x100; }   // W x H, pitch 256: B's rows 1-198
    const uint8_t* dac() const { return dac_; }                    // 64 RGB entries, 6-bit
    const uint8_t* picA() const { return mem_ + kA; }              // the 256x256 tiles
    const uint8_t* picB() const { return mem_ + kB; }
    const uint8_t* font() const { return mem_ + kFont; }
    void toArgb(uint32_t* out) const;                              // W x H

private:
    // the part's 64K-aligned block: A, B, the font, as the intro lays them out
    // (the border clears reach from A's rows into B's)
    static constexpr uint32_t kA = 0, kB = 0x10000, kFont = 0x20000;

    int32_t rnd();                                                    // 1BE56h
    void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits);  // 16DCAh
    void textOver(int32_t y, const char* s);                          // 1BDC4h
    void blurRow(uint32_t edi, uint32_t esi, uint32_t& carry, int n, bool keepCarry);  // 15143h
    void mapper(uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy, int32_t dvy);  // 14BDBh
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    uint32_t r32(uint32_t a) const;
    void w32(uint32_t a, uint32_t v);

    struct Dot {
        float fx, fy, px, py, v;    // the speeds across and down, the phases, the value
    };

    Fpu F;
    Info info_;
    uint32_t seed_ = 1;             // [2842Ch]
    uint8_t mem_[0x30000];
    Dot dots_[100];
    uint8_t pal_[0xC0], pal2_[0xC0], dac_[0xC0];
};

}  // namespace feedback
