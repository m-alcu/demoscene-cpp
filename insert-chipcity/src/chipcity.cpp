#include "chipcity.h"

#include <cmath>
#include <cstdint>
#include <cstring>

#include "x87.h"

namespace icc {

#include "lists.inc"

namespace {

// Constants of the original (addresses in the unpacked image).
constexpr float kHalf = 0.5f;            // 0x437220
constexpr float kOne = 1.0f;             // 0x437248
constexpr float kTwo = 2.0f;             // 0x4390d8 (grid spacing, also wave base)
constexpr float kThree = 3.0f;           // 0x437238
constexpr float kQuarter = 0.25f;        // 0x437240
constexpr float kEighth = 0.125f;        // 0x437394
constexpr float kSwingRate = 0.45f;      // 0x437388
constexpr float kHalfPi = 1.57079637f;   // 0x43738c
constexpr float kFovWobble = 15.0f;      // 0x437384
constexpr float kFov = 60.0f;            // 0x439088
constexpr float kCamZ = -14.0f;          // 0x437380
constexpr float kTiltAmp = 10.0f;        // 0x43737c
constexpr float kTilt = 60.0f;           // 0x437378
constexpr float kSpinRate = 8.0f;        // 0x437374
constexpr float kSpin = -60.0f;          // 0x437370
constexpr float kDeg180 = 180.0f;        // 0x437398
constexpr float kPi = 3.14159274f;       // 0x43739c
constexpr float kHundred = 100.0f;       // 0x4373a0
constexpr float kThreeQuarters = 0.75f;  // 0x43722c
constexpr float kTenth = 0.1f;           // 0x437270
constexpr float kCellPhase = 0.279252678f;  // 0x43adf0 (16 degrees in radians)
constexpr int kN = 16;                   // 0x4390d4 grid size
const float kFogColor[4] = {0.125f, 0.15f, 0.1f, 1.0f};

// musl's __sin/__cos kernels (|x| < pi/4), which Wine's msvcrt sin/cos use there.
// Copyright (C) 1993 by Sun Microsystems, Inc. (fdlibm), via musl (MIT).
double k_sin(double x) {
    const double S1 = -1.66666666666666324348e-01, S2 = 8.33333333332248946124e-03,
                 S3 = -1.98412698298579493134e-04, S4 = 2.75573137070700676789e-06,
                 S5 = -2.50507602534068634195e-08, S6 = 1.58969099521155010221e-10;
    const double z = x * x, w = z * z;
    const double r = S2 + z * (S3 + z * S4) + z * w * (S5 + z * S6);
    const double v = z * x;
    return x + v * (S1 + z * r);
}

double k_cos(double x) {
    const double C1 = 4.16666666666666019037e-02, C2 = -1.38888888888741095749e-03,
                 C3 = 2.48015872894767294178e-05, C4 = -2.75573143513906633035e-07,
                 C5 = 2.08757232129817482790e-09, C6 = -1.13596475577881948265e-11;
    const double z = x * x, w = z * z;
    const double r = z * (C1 + z * (C2 + z * C3)) + w * w * (C4 + z * (C5 + z * C6));
    const double hz = 0.5 * z;
    const double ww = 1.0 - hz;
    return ww + (((1.0 - ww) - hz) + (z * r - x * 0.0));
}

uint32_t high_word(double x) {
    uint64_t u;
    std::memcpy(&u, &x, 8);
    return (uint32_t)(u >> 32) & 0x7fffffff;
}

double musl_sin(double x) {
    const uint32_t ix = high_word(x);
    if (ix <= 0x3fe921fb) {
        if (ix < 0x3e500000) return x;
        return k_sin(x);
    }
    return std::sin(x);  // not reached for the angles used here
}

double musl_cos(double x) {
    const uint32_t ix = high_word(x);
    if (ix <= 0x3fe921fb) {
        if (ix < 0x3e46a09e) return 1.0;
        return k_cos(x);
    }
    return std::cos(x);  // not reached for the angles used here
}

void fullscreen_quad(GlSink& g) {
    g.LoadIdentity();
    g.Begin(GL_QUADS);
    g.Vertex2i(W, 0);
    g.Vertex2i(0, 0);
    g.Vertex2i(0, H);
    g.Vertex2i(W, H);
    g.End();
}

}  // namespace

float phase(float t) {
    Pc53 pc;
    // flds 100; fmuls t; fmuls pi; fdivs 180; fstps 0x445154
    return (float)((ld)kHundred * (ld)t * (ld)kPi / (ld)kDeg180);
}

void glu_perspective(GlSink& g, double fovy, double aspect, double zNear, double zFar) {
    // dlls/glu32 gluPerspective as built in Wine 9.0 (i386, x87 at PC53 == IEEE double).
    const double radians = (double)0.5f * fovy * 3.14159265358979323846 / (double)180.0f;
    const double deltaZ = zFar - zNear;
    const double sine = musl_sin(radians);
    const double cosine = musl_cos(radians);
    if (deltaZ == 0 || sine == 0 || aspect == 0) return;
    const double cotangent = cosine / sine;
    double m[16] = {0};
    m[0] = cotangent / aspect;
    m[5] = cotangent;
    m[10] = -(zFar + zNear) / deltaZ;
    m[11] = -1;
    m[14] = zNear * (double)-2.0f * zFar / deltaZ;
    m[15] = 0;
    g.MultMatrixd(m);
}

void ChipCity::init(GlSink& g, const uint8_t* atlas_rgb) {
    // Window setup of the original (trace calls 3577-3636).
    g.Viewport(0, 0, W, H);
    g.ClearDepth(1);
    g.DepthMask(true);
    g.Enable(GL_CULL_FACE);
    g.CullFace(GL_BACK);
    g.Fogi(GL_FOG_MODE, GL_LINEAR);
    g.Fogfv(GL_FOG_COLOR, kFogColor);
    g.Fogf(GL_FOG_DENSITY, 1);
    g.Hint(GL_FOG_HINT, GL_NICEST);
    g.Fogf(GL_FOG_START, 2);
    g.Fogf(GL_FOG_END, 24);
    g.Texture(atlas_rgb, 256, 256);
    g.NewList(1); list_1(g); g.EndList();
    g.NewList(3); list_3(g); g.EndList();
    g.NewList(4); list_4(g); g.EndList();
    g.NewList(5); list_5(g); g.EndList();
}

void ChipCity::start(GlSink& g, float b) {
    // case 4, row 0: FUN_0042176e (flash), FUN_00421784 (zoom), 0x4452a0 = 1, fog colour.
    b0_ = b;
    flash_ = true;
    b_flash_ = b;
    zoom_ = true;
    b_zoom_ = b;
    swing_ = false;
    swing_cos_ = 1.0f;
    g.Fogfv(GL_FOG_COLOR, kFogColor);
}

void ChipCity::swing(float b) {
    swing_ = true;  // FUN_00421811
    b_swing_ = b;
}

ChipCity::Camera ChipCity::camera(float b0, float b, float swing_cos) {
    Pc53 pc;
    Camera c;
    const float s = (float)crt_cos((float)(((ld)b0 - (ld)b) * (ld)kEighth));    // 0x43a9e4
    c.amp = (float)((ld)kTwo - (ld)kTwo * (ld)s);                             // 0x445150
    c.cam_y = (float)((ld)kThree - (ld)kTwo * (ld)s);                         // 0x4451d8
    c.cam_z = (float)((ld)kTwo * (ld)s + (ld)kCamZ);                          // 0x4451dc
    c.tilt = (float)((ld)kTiltAmp * (ld)s + (ld)kTilt);                       // 0x4451e0
    c.spin = (float)(((ld)b0 - (ld)b) * (ld)kSpinRate + (ld)kSpin +
                     (ld)swing_cos * (ld)kDeg180);                            // 0x4451e4
    return c;
}

float ChipCity::height(float b0, float b, float amp, int i, int j) {
    Pc53 pc;
    const float pi_ = (float)((ld)i * (ld)kCellPhase);  // -0x4(%ebp)
    const float pj = (float)((ld)j * (ld)kCellPhase);   // -0x8(%ebp)
    const float a = (float)(((ld)b0 - (ld)b) * (ld)kHalf + (ld)pi_ + (ld)pj);
    return (float)(crt_cos(a) * (ld)amp + (ld)kTwo);
}

float ChipCity::swing_cos(float b, float b_swing) {
    Pc53 pc;
    const float a = (float)(((ld)b - (ld)b_swing) * (ld)kSwingRate);
    return a > kHalfPi ? 0.0f : (float)crt_cos(a);
}

void ChipCity::frame(GlSink& g, float b) {
    Pc53 pc;

    // 0x42581b: camera swing, 0x4452a0 = cos((b - b_swing) * 0.45) until it passes pi/2.
    if (swing_) {
        const float a = (float)(((ld)b - (ld)b_swing_) * (ld)kSwingRate);
        swing_cos_ = (float)crt_cos(a);
        if (a > kHalfPi) {
            swing_cos_ = 0;
            swing_ = false;
        }
    }
    // 0x425875: field of view, 15*sin((b - b_zoom)/4) + 60, plus the zoom-in pulse.
    {
        const float a = (float)(((ld)b - (ld)b_zoom_) * (ld)kQuarter);
        fov_ = (float)(crt_sin(a) * (ld)kFovWobble + (ld)kFov);
    }
    if (zoom_) {
        const float a = (float)(((ld)b - (ld)b_zoom_) * (ld)kQuarter);
        const ld s = crt_sin(a);
        fov_ = (float)(s * (ld)kFov - (ld)kFov + (ld)fov_);
        if (a > kHalfPi) zoom_ = false;
    }
    // FUN_00421483: perspective projection.
    g.Viewport(0, 0, W, H);
    g.MatrixMode(GL_PROJECTION);
    g.LoadIdentity();
    {
        const double aspect = (double)((ld)W / (ld)H);  // fildl 800; fidivl 500
        glu_perspective(g, (double)fov_, aspect, (double)0.5f, (double)1000.0f);
    }
    g.MatrixMode(GL_MODELVIEW);
    g.LoadIdentity();

    g.ClearColor(kFogColor[0], kFogColor[1], kFogColor[2], 1.0f);
    g.Clear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    g.Enable(GL_FOG);
    g.Enable(GL_DEPTH_TEST);
    g.Enable(GL_TEXTURE_2D);

    // 0x425970: the chip grid (0x445214 set, 0x44521c clear in this scene).
    g.Disable(GL_BLEND);
    const Camera cam = camera(b0_, b, swing_cos_);
    const float cam_x = 0.0f;                                                        // 0x4451d4
    const double top = (double)((ld)kTwo * (ld)kThreeQuarters);                      // fstpl -0x1c8
    const float chip_y = (float)((ld)kTwo * (ld)kTenth + (ld)top);                   // 0x43a9ac
    for (int i = 0; i < kN; i++) {
        const float x = (float)((ld)(-(kN - 1)) * (ld)kTwo * (ld)kHalf + (ld)i * (ld)kTwo);
        for (int j = 0; j < kN; j++) {
            const float y = height(b0_, b, cam.amp, i, j);
            const float z = (float)((ld)(-(kN - 1)) * (ld)kTwo * (ld)kHalf + (ld)j * (ld)kTwo);
            g.LoadIdentity();
            g.Translatef(cam_x, cam.cam_y, cam.cam_z);
            g.Rotatef(cam.tilt, 1, 0, 0);
            g.Rotatef(cam.spin, 0, 1, 0);
            g.Translatef(x, y, z);
            g.CallList(4);
            g.Translatef(0, chip_y, 0);
            g.CallList(5);
        }
    }

    // Overlays: vignette (list 1), the flash and swing white-outs, scanlines (list 3).
    g.Disable(GL_DEPTH_TEST);
    g.Enable(GL_BLEND);
    g.Disable(GL_FOG);
    g.Disable(GL_TEXTURE_2D);
    g.Viewport(0, 0, W, H);  // FUN_004214f1: gluOrtho2D(0, 800, 500, 0)
    g.MatrixMode(GL_PROJECTION);
    g.LoadIdentity();
    g.Ortho(0, W, H, 0, -1, 1);
    g.MatrixMode(GL_MODELVIEW);
    g.LoadIdentity();
    g.CallList(1);
    g.Enable(GL_TEXTURE_2D);
    g.Disable(GL_TEXTURE_2D);
    if (flash_) {  // 0x42a3f0
        g.BlendFunc(GL_ONE, GL_ONE);
        const float a = (float)(((ld)b - (ld)b_flash_) * (ld)kOne);
        if (a > kHalfPi) flash_ = false;
        const float c = (float)((ld)kOne - crt_sin(a));
        g.Color3f(c, c, c);
        fullscreen_quad(g);
    }
    if (swing_) {  // 0x42a4bf
        g.BlendFunc(GL_ONE, GL_ONE);
        const float c = (float)((ld)kOne - (ld)swing_cos_);
        g.Color3f(c, c, c);
        fullscreen_quad(g);
    }
    g.Enable(GL_TEXTURE_2D);
    g.CallList(3);
}

}  // namespace icc
