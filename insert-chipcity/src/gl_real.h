// GlSink that executes the calls with the system's OpenGL (compatibility profile).
#pragma once

#include "gl_sink.h"

namespace icc {

struct GlReal : GlSink {
    void Viewport(int x, int y, int w, int h) override { glViewport(x, y, w, h); }
    void MatrixMode(unsigned mode) override { glMatrixMode(mode); }
    void LoadIdentity() override { glLoadIdentity(); }
    void MultMatrixd(const double m[16]) override { glMultMatrixd(m); }
    void Ortho(double l, double r, double b, double t, double n, double f) override { glOrtho(l, r, b, t, n, f); }
    void ClearColor(float r, float g, float b, float a) override { glClearColor(r, g, b, a); }
    void Clear(unsigned mask) override { glClear(mask); }
    void Enable(unsigned cap) override { glEnable(cap); }
    void Disable(unsigned cap) override { glDisable(cap); }
    void BlendFunc(unsigned s, unsigned d) override { glBlendFunc(s, d); }
    void Fogfv(unsigned pname, const float* v) override { glFogfv(pname, v); }
    void Fogf(unsigned pname, float v) override { glFogf(pname, v); }
    void Fogi(unsigned pname, int v) override { glFogi(pname, v); }
    void Hint(unsigned target, unsigned mode) override { glHint(target, mode); }
    void CullFace(unsigned mode) override { glCullFace(mode); }
    void ClearDepth(double d) override { glClearDepth(d); }
    void DepthMask(bool flag) override { glDepthMask(flag ? GL_TRUE : GL_FALSE); }

    void Texture(const uint8_t* rgb, int w, int h) override {
        // The original uploads the atlas with gluBuild2DMipmaps but samples it GL_NEAREST, so
        // only level 0 is ever used.
        GLuint tex = 0;
        glGenTextures(1, &tex);
        glBindTexture(GL_TEXTURE_2D, tex);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, rgb);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    }

    void NewList(unsigned list) override { glNewList(list, GL_COMPILE); }
    void EndList() override { glEndList(); }
    void CallList(unsigned list) override { glCallList(list); }
    void Translatef(float x, float y, float z) override { glTranslatef(x, y, z); }
    void Rotatef(float a, float x, float y, float z) override { glRotatef(a, x, y, z); }
    void Begin(unsigned mode) override { glBegin(mode); }
    void End() override { glEnd(); }
    void Color3f(float r, float g, float b) override { glColor3f(r, g, b); }
    void Color4f(float r, float g, float b, float a) override { glColor4f(r, g, b, a); }
    void TexCoord2f(float s, float t) override { glTexCoord2f(s, t); }
    void Vertex2i(int x, int y) override { glVertex2i(x, y); }
    void Vertex3f(float x, float y, float z) override { glVertex3f(x, y, z); }
};

}  // namespace icc
