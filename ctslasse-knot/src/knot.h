// The knot of Lasse Reinbøng (Cubic Team & $eeN, 1995): part 5 of the intro
// (19CEDh), on its own. A tube twisted along a knot, environment-mapped and
// textured, turning in front of a rocking rotozoomer of blurred hexagons.
//
// Translated from the ctslasse port (routine by routine, keeping the order
// of every x87 operation, 80-bit intermediates included), but over plain
// arrays instead of the intro's memory. Its frames match the original's
// (tests/ref.txt: the picture and the DAC of all 762 frames of the part).
//
// Time is the intro's clock: PIT ticks (1193182 Hz) since the part began.
#pragma once

#include <cstdint>

#include "x87.h"

namespace knot {

constexpr int W = 320, H = 200;
constexpr double kPit = 1193182.0;

class Knot {
public:
    Knot();
    // Draw the frame at CLOCK (PIT ticks since the part began) into the
    // screen, and set the DAC as the intro does at that time.
    void frame(int32_t clock);
    // The part's time unit: T = clock / 813440.24 (about 0.68 s). The palette
    // comes in from white over T 0-0.5, the knot flies in over T 0-2, and the
    // palette fades out over T 15-16, where the part ends.
    static float partTime(int32_t clock);
    static constexpr float kEnd = 16.0f;
    bool fadeOut = true;            // false: no fade at T 15-16 (it runs on)

    const uint8_t* screen() const { return fb_; }
    const uint8_t* dac() const { return dac_; }   // 256 RGB, 6-bit
    void toArgb(uint32_t* out) const;

    // the precalculated textures (256x256, row << 8 | column) and palette
    const uint8_t* lightTex() const { return light_; }    // the intro's [2B4C0h] + 60000h
    const uint8_t* plasmaTex() const { return plasma_; }  //                      + 70000h
    const uint8_t* hexTex() const { return hexes_; }      //                      + 80000h
    const uint8_t* palette() const { return pal_; }

private:
    using Vec = float[3];
    using Mat = float[12];          // 3x4, by rows; the translation in each row's fourth column
    struct Face {
        uint16_t v[3];
        uint8_t mat, back;
        float depth;
    };
    static constexpr int kRings = 0x30, kSides = 6;
    static constexpr int kVerts = kRings * kSides, kFaces = 2 * kVerts;

    // --- precalc.cpp -----------------------------------------------------------
    void precalc();
    void plasma(uint32_t seed, uint8_t* dst, uint32_t amp, uint32_t bits);   // 16DCAh
    static void blur(const uint8_t* src, uint8_t* dst);                     // 16EA6h
    static void hexes(uint8_t* dst, uint32_t dx, uint32_t dy, uint8_t c0, uint8_t c1, uint8_t c2);  // 185D5h
    void lighting();                                                        // 18FF9h, its +60000h table
    void palette8();                                                        // 189ECh

    // --- engine.cpp: vectors (15D34h-16075h), on the x87 stack F --------------
    void dot(const float* a, const float* b);
    void len2(const float* a) { dot(a, a); }
    void vadd(const float* a, const float* b, float* d);
    void vsub(const float* a, const float* b, float* d);
    void vscale(const float* a, float* d);
    void cross(const float* a, const float* b, float* d);
    void vrot(const float* a, const float* b, float* d);
    void normalize(const float* a, float* d);
    void triple(const float* a, const float* b, const float* c);
    void transform(const float* s, const float* m, float* d);
    void rotate(const float* s, const float* m, float* d);
    static void identity(float* m);
    void axisAngle(const float* axis, float* m);
    void translate(const float* v, float* m);
    void matmul(const float* a, const float* b, float* d);

    // the tube (17F6Dh-18373h) and its path (19C1Ah)
    void gridFaces();
    void tubeTex();
    void sweep(float twist, float phase);
    void path5(float* pos, float* tan, float u);

    // the scene (16FCAh-17942h)
    void camera(float* m, const float* eye, const float* at, const float* up, float angle);
    void addObject(const float* m);
    void sortFaces(int lo, int hi);
    void render();
    void fill(const int32_t* vd);
    void span(int32_t at, int32_t count);

    // the rotozoomer (1B8E3h) and its texture mapper (14BDBh)
    void roto(float angle, int32_t zoom, int32_t cx, int32_t cy);
    void mapper(uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy, int32_t dvy);

    Fpu F;
    uint8_t light_[0x10000], plasma_[0x10000], hexes_[0x10000];
    uint8_t pal_[768], dac_[768], fb_[W * H];

    // the tube: vertices, normals, texture coordinates (16.16 << 8), faces
    float verts_[kVerts][3], norms_[kVerts][3];
    int32_t tex_[kVerts][2];
    Face faces_[kFaces];

    // the scene of a frame
    float sv_[kVerts][3], sn_[kVerts][3];
    int32_t scr_[kVerts][2], env_[kVerts][2], stex_[kVerts][2];
    uint8_t vis_[kVerts];
    Face rec_[kFaces];
    int order_[kFaces];
    int count_ = 0;

    // the filler's state that outlives a polygon: its gradients and values
    int32_t dAdx_[4], a_[4];
    bool dacSet_ = false;           // the palette written once (else a start past the fade-in stays white)

    Mat M_ = {}, R_ = {};
};

}  // namespace knot
