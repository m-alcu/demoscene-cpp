// The water tunnel of Lasse Reinbøng (Cubic Team & $eeN, 1995): part 8 of
// the intro (1C776h) from T 12 to its end. A marble texture (by default
// without the intro's embossed logo) on a rippling plane in red, yellow and blue, then a tunnel faded in over it:
// its walls wave like water, it twists, zooms and breathes with the music,
// until it fades out at T 72.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200. Translated
// from the ctslasse port routine by routine, x87 order kept; every frame of
// the part matches the original (tests/ref.txt). The whole part is here
// (from T 0, the drops of ctslasse-pond); each frame depends on the time
// only, so any T can be drawn on its own.
#pragma once

#include <cstdint>
#include <vector>

#include "x87.h"

namespace tunnel {

constexpr int W = 320, H = 200;
constexpr double kPit = 1193182.0;
constexpr double kUnit = 813440.2376280001;   // the part's time unit in PIT ticks (about 0.68 s)
constexpr float kEnd = 72.0f;                 // T: faded out (the music moves on just before)

class Tunnel {
public:
    // LOGO: the intro's texture, the "cubic team & $een" logo embossed in the
    // marble (the original's picture); without it, the marble alone
    explicit Tunnel(bool logo = false);
    // The frame at CLOCK (PIT ticks since the part began): the grid, the
    // picture and the DAC as the intro has them.
    void frame(int32_t clock);
    // The frames at CLOCK and at CLOCK_TO, mixed (W 0: CLOCK's, 1: CLOCK_TO's):
    // their grids (u and v the shorter way round the 256-texel wrap) and
    // their DACs, then drawn. The loop's end turns into its start with it.
    // (Not in the intro.)
    void morph(int32_t clock, int32_t clockTo, float w);
    static float partTime(int32_t clock) { return (float)((double)clock / kUnit); }
    bool fadeOut = true;            // false: no fade over T 68-72 (it runs on)

    const uint8_t* screen() const { return mem_ + kScreen; }  // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit
    const uint8_t* texture() const { return mem_ + kTex; }      // with the logo: the intro's [2B4C0h] + 130000h
    const uint8_t* lightTable() const { return mem_ + kLight; } // 130 x 256
    const uint8_t* grid() const { return mem_ + kGrid; }        // 41 x 26 x (u, v, light), 3198 dwords
    // the picture in 256 colours, as the intro shows it (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, at any size (WxH, shown at 4:3 as
    // 320x200 is): u, v and the light interpolated per pixel from the grid
    // at full precision (SMOOTH: Catmull-Rom between the 4x4 points around,
    // else bilinearly, as the mapper does), the texture filtered
    // (Catmull-Rom), the light levels and the palettes computed without
    // rounding. Call after frame().
    void toTrueColor(uint32_t* out, int w = W, int h = H, bool smooth = true) const;

    // What the frame drew, for the inspector (none of it is used to draw)
    struct Info {
        float t = 0;                // the part's time
        bool drops = false, plane = false, tunnel = false;
        float planeShare = 0;       // the plane's weight in the blend (0-1), the rest the drops' or the tunnel's
        float twist = 0, zoom = 0, phase = 0, wave = 0;   // the tunnel's
        float u0 = 0, v0 = 0;       // its turn and its forward movement, in texels
        float morph = 0;            // the loop's morph into its start (0-1), and the time it goes to
        float morphTo = 0;
    };
    const Info& info() const { return info_; }
    static constexpr int kGridW = 41, kGridH = 26;

private:
    // the flat memory: the grid mapper's variables (1E500h-1E57Fh), the two
    // grids (+31F8h the plane's), the texture and light tables (64K-aligned:
    // the mapper puts their base in a register's high half), the screen
    static constexpr uint32_t kGrid = 0x100, kTex = 0x10000, kLight = 0x20000, kScreen = 0x30000;

    void precalc(bool logo);        // the texture, as 18A6Ch makes [2B4C0h] + 130000h
    void lightTables();             // part 8's set-up
    void plasma(uint32_t seed, uint8_t* t, uint32_t amp, uint32_t bits);
    static void blur(const uint8_t* src, uint8_t* dst);
    static void displace(const uint8_t* a, const uint8_t* b, const uint8_t* s, uint8_t* d, const uint8_t* tx,
                         const uint8_t* ty);
    static void rle(uint8_t* dst, const uint8_t* data, int c1, int c2);
    static void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);
    // the same gradient unrounded (32-bit colour)
    static void gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1,
                         int32_t n);

    // grid.cpp: the port's routines
    void update(int32_t clock);     // frame() without drawing: the grid and the DAC
    void gridMap(uint32_t dst, uint32_t grid, uint32_t tex, uint32_t light);
    void ease(float x);
    void cosPos(float x);
    void tunnel(uint32_t grid, float p1, float p2, float p3, int32_t p4, int32_t p5, float p6);
    void blend(uint32_t dst, uint32_t a, uint32_t b, int32_t wa, int32_t wb);
    void bubbles(uint32_t grid, float t);
    void wobble(uint32_t grid, float t);

    enum { kPal1, kPal2, kPal3 };   // red - yellow - blue, black - blue - white, black - white
    void setDac(int src, int32_t k, int mix, int mode);

    uint8_t r8(uint32_t a) const { return mem_[a]; }
    uint32_t r32(uint32_t a) const;
    void w8(uint32_t a, uint32_t v) { mem_[a] = (uint8_t)v; }
    void w16(uint32_t a, uint32_t v);
    void w32(uint32_t a, uint32_t v);
    static double f64(uint32_t a);  // the intro's constants, by address
    static float f32(uint32_t a);

    Fpu F;
    std::vector<uint8_t> memory_;
    uint8_t* mem_;
    uint8_t pal_[3][768], dac_[768];
    float palF_[3][768], dacF_[768];    // the same, unrounded (6-bit scale, 0-63)
    Info info_;
    bool dacSet_ = false;           // the palette written (else a start past the fades stays white)
    float lastT_ = 0;
};

}  // namespace tunnel
