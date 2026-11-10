// GlSink that prints each call the way `apitrace dump` prints it (with round-trip float
// precision: %.9g for float, %.17g for double), one call per line without call numbers.
// Used by the tests to compare the port's calls with the trace of the original.
#pragma once

#include <cstdint>
#include <string>

#include "gl_sink.h"

namespace icc {

class GlRecord : public GlSink {
public:
    std::string text;   // calls since the last clear(), '\n'-separated
    size_t calls = 0;
    void clear() { text.clear(); calls = 0; }

    void Viewport(int x, int y, int w, int h) override;
    void MatrixMode(unsigned mode) override;
    void LoadIdentity() override;
    void MultMatrixd(const double m[16]) override;
    void Ortho(double l, double r, double b, double t, double n, double f) override;
    void ClearColor(float r, float g, float b, float a) override;
    void Clear(unsigned mask) override;
    void Enable(unsigned cap) override;
    void Disable(unsigned cap) override;
    void BlendFunc(unsigned s, unsigned d) override;
    void Fogfv(unsigned pname, const float* v) override;
    void Fogf(unsigned pname, float v) override;
    void Fogi(unsigned pname, int v) override;
    void Hint(unsigned target, unsigned mode) override;
    void CullFace(unsigned mode) override;
    void ClearDepth(double d) override;
    void DepthMask(bool flag) override;
    void Texture(const uint8_t* rgb, int w, int h) override;
    void NewList(unsigned list) override;
    void EndList() override;
    void CallList(unsigned list) override;
    void Translatef(float x, float y, float z) override;
    void Rotatef(float a, float x, float y, float z) override;
    void Begin(unsigned mode) override;
    void End() override;
    void Color3f(float r, float g, float b) override;
    void Color4f(float r, float g, float b, float a) override;
    void TexCoord2f(float s, float t) override;
    void Vertex2i(int x, int y) override;
    void Vertex3f(float x, float y, float z) override;

private:
    void line(const std::string& s);
};

std::string fmt_float(float v);
std::string fmt_double(double v);
uint32_t crc32(const void* data, size_t n, uint32_t crc = 0);

}  // namespace icc
