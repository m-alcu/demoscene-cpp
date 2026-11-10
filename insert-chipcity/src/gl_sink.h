// The OpenGL 1.x calls the chip-city scene makes, as an interface. The scene code emits
// exactly the call sequence of the original intro; a backend either executes it (gl_real.h)
// or prints it in apitrace's dump format (tests/gl_record.cpp) so it can be compared with the
// trace.
#pragma once

#include <GL/gl.h>

#include <cstdint>

namespace icc {

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
