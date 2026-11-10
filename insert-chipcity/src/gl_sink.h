// The OpenGL 1.x calls the chip-city scene makes, as an interface. The scene code emits
// exactly the call sequence of the original intro; a backend either executes it (gl_real.cpp)
// or prints it in apitrace's dump format (gl_record.cpp) so it can be compared with the trace.
#pragma once

#include <cstdint>

namespace icc {

// GL enum values (from gl.h; kept here so the core does not need GL headers). When gl.h is
// included first its macros (same values) are used instead.
#ifndef GL_VERSION_1_1
enum : unsigned {
    GL_DEPTH_BUFFER_BIT = 0x0100,
    GL_COLOR_BUFFER_BIT = 0x4000,
    GL_QUADS = 0x0007,
    GL_ONE = 1,
    GL_SRC_COLOR = 0x0300,
    GL_SRC_ALPHA = 0x0302,
    GL_DST_COLOR = 0x0306,
    GL_BACK = 0x0405,
    GL_CULL_FACE = 0x0B44,
    GL_FOG = 0x0B60,
    GL_FOG_DENSITY = 0x0B62,
    GL_FOG_START = 0x0B63,
    GL_FOG_END = 0x0B64,
    GL_FOG_MODE = 0x0B65,
    GL_FOG_COLOR = 0x0B66,
    GL_DEPTH_TEST = 0x0B71,
    GL_BLEND = 0x0BE2,
    GL_FOG_HINT = 0x0C54,
    GL_TEXTURE_2D = 0x0DE1,
    GL_NICEST = 0x1102,
    GL_MODELVIEW = 0x1700,
    GL_PROJECTION = 0x1701,
    GL_LINEAR = 0x2601,
    GL_NEAREST = 0x2600,
    GL_TEXTURE_MAG_FILTER = 0x2800,
    GL_TEXTURE_MIN_FILTER = 0x2801,
    GL_TEXTURE_WRAP_S = 0x2802,
    GL_TEXTURE_WRAP_T = 0x2803,
    GL_REPEAT = 0x2901,
    GL_COMPILE = 0x1300,
};
#endif

struct GlSink {
    virtual ~GlSink() = default;
    // state / setup
    virtual void Viewport(int x, int y, int w, int h) = 0;
    virtual void MatrixMode(unsigned mode) = 0;
    virtual void LoadIdentity() = 0;
    virtual void MultMatrixd(const double m[16]) = 0;
    virtual void Ortho(double l, double r, double b, double t, double n, double f) = 0;
    virtual void ClearColor(float r, float g, float b, float a) = 0;
    virtual void Clear(unsigned mask) = 0;
    virtual void Enable(unsigned cap) = 0;
    virtual void Disable(unsigned cap) = 0;
    virtual void BlendFunc(unsigned s, unsigned d) = 0;
    virtual void Fogfv(unsigned pname, const float* v) = 0;
    virtual void Fogf(unsigned pname, float v) = 0;
    virtual void Fogi(unsigned pname, int v) = 0;
    virtual void Hint(unsigned target, unsigned mode) = 0;
    virtual void CullFace(unsigned mode) = 0;
    virtual void ClearDepth(double d) = 0;
    virtual void DepthMask(bool flag) = 0;
    // texture: 256x256 RGB atlas, NEAREST, REPEAT
    virtual void Texture(const uint8_t* rgb, int w, int h) = 0;
    // display lists
    virtual void NewList(unsigned list) = 0;
    virtual void EndList() = 0;
    virtual void CallList(unsigned list) = 0;
    // transforms and immediate mode
    virtual void Translatef(float x, float y, float z) = 0;
    virtual void Rotatef(float a, float x, float y, float z) = 0;
    virtual void Begin(unsigned mode) = 0;
    virtual void End() = 0;
    virtual void Color3f(float r, float g, float b) = 0;
    virtual void Color4f(float r, float g, float b, float a) = 0;
    virtual void TexCoord2f(float s, float t) = 0;
    virtual void Vertex2i(int x, int y) = 0;
    virtual void Vertex3f(float x, float y, float z) = 0;
};

}  // namespace icc
