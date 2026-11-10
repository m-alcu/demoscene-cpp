// The "chip city" scene of Insert No Coins (Razor 1911, 2010): music orders 4-7.
//
// Translation of the scene's path through the intro's frame function (FUN_00424858 in the
// unpacked image, see rea/rzr-insert-analisis/README.md). It emits the same GL 1.x calls,
// with the same float bits, as the original. Time is the original's phase variable
// b = 100*t*pi/180 (t = seconds since start, float).
#pragma once

#include <cstdint>

#include "gl_sink.h"

namespace icc {

constexpr int W = 800, H = 500;            // the original window
constexpr double kMusicStart = 3.0;         // the XM starts once t > 3 s
constexpr double kRow = 0.06;               // speed 3 at 125 BPM: 3 * 2.5/125 s per row
constexpr double kSceneStart = 4 * 64 * kRow;           // order 4 row 0  (15.36 s)
constexpr double kSwingStart = (7 * 64 + 0x36) * kRow;  // order 7 row 0x36 (30.12 s)
constexpr double kSceneEnd = 8 * 64 * kRow;             // order 8 row 0  (30.72 s)

// Circular mode (not in the original): the wave, the camera bob and the fov wobble all repeat
// after a phase of 16*pi, i.e. 28.8 s; the spin is slowed from 8 to 360/(16*pi) degrees per
// radian of phase so that it makes exactly one turn in that time.
constexpr double kLoopLen = 16 * 180 / 100.0;           // 28.8 s
constexpr float kLoopSpinRate = 7.16197243f;            // 22.5/pi

// Phase b for program time t (s), as the original computes it each frame.
float phase(float t);

class ChipCity {
public:
    // Static GL state, the texture atlas (256x256 RGB) and display lists 1, 3, 4, 5.
    void init(GlSink& g, const uint8_t* atlas_rgb);

    // The order 4 row 0 handler: starts the scene at phase b. Call before frame() of the
    // same frame; it emits glFogfv like the original.
    void start(GlSink& g, float b);
    // The order 7 row 0x36 handler: starts the closing camera swing / white-out at phase b.
    void swing(float b);
    // Circular mode: starts a seamless loop at phase b (no flash, zoom pulse or swing; spin
    // at kLoopSpinRate). Emits glFogfv like start().
    void start_circular(GlSink& g, float b);

    // One frame at phase b (everything up to, not including, the buffer swap).
    void frame(GlSink& g, float b);

    // Exposed for tests.
    float fov() const { return fov_; }
    struct Camera {
        float amp, cam_y, cam_z, tilt, spin;
    };
    // Camera of a frame at phase b (scene start b0, swing factor 0x4452a0).
    static Camera camera(float b0, float b, float swing_cos, float spin_rate = 8.0f);
    // Height of grid cell (i, j).
    static float height(float b0, float b, float amp, int i, int j);
    // 0x4452a0 while the swing runs.
    static float swing_cos(float b, float b_swing);

private:
    float b0_ = 0;          // 0x445218  phase at scene start
    float b_zoom_ = 0;      // 0x4451cc  zoom pulse start (FUN_00421784)
    bool zoom_ = false;     // 0x4451c9
    float b_flash_ = 0;     // 0x445248  white flash start (FUN_0042176e)
    bool flash_ = false;    // 0x445245
    float b_swing_ = 0;     // 0x44529c  (FUN_00421811)
    bool swing_ = false;    // 0x445298
    float swing_cos_ = 1;   // 0x4452a0
    float fov_ = 60;        // 0x43a9e8
    float spin_rate_ = 8;   // 0x437374, kLoopSpinRate in circular mode
};

// Wine's glu32 gluPerspective (with Wine msvcrt's musl sin/cos), as traced.
void glu_perspective(GlSink& g, double fovy, double aspect, double zNear, double zFar);

}  // namespace icc
