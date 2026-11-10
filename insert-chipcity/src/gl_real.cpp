// GlSink that executes the calls with the system's OpenGL (compatibility profile).
#include <GL/gl.h>

#include "gl_real.h"

namespace icc {

void GlReal::Viewport(int x, int y, int w, int h) { glViewport(x, y, w, h); }
void GlReal::MatrixMode(unsigned mode) { glMatrixMode(mode); }
void GlReal::LoadIdentity() { glLoadIdentity(); }
void GlReal::MultMatrixd(const double m[16]) { glMultMatrixd(m); }
void GlReal::Ortho(double l, double r, double b, double t, double n, double f) { glOrtho(l, r, b, t, n, f); }
void GlReal::ClearColor(float r, float g, float b, float a) { glClearColor(r, g, b, a); }
void GlReal::Clear(unsigned mask) { glClear(mask); }
void GlReal::Enable(unsigned cap) { glEnable(cap); }
void GlReal::Disable(unsigned cap) { glDisable(cap); }
void GlReal::BlendFunc(unsigned s, unsigned d) { glBlendFunc(s, d); }
void GlReal::Fogfv(unsigned pname, const float* v) { glFogfv(pname, v); }
void GlReal::Fogf(unsigned pname, float v) { glFogf(pname, v); }
void GlReal::Fogi(unsigned pname, int v) { glFogi(pname, v); }
void GlReal::Hint(unsigned target, unsigned mode) { glHint(target, mode); }
void GlReal::CullFace(unsigned mode) { glCullFace(mode); }
void GlReal::ClearDepth(double d) { glClearDepth(d); }
void GlReal::DepthMask(bool flag) { glDepthMask(flag ? GL_TRUE : GL_FALSE); }

void GlReal::Texture(const uint8_t* rgb, int w, int h) {
    // The original uploads the atlas with gluBuild2DMipmaps but samples it GL_NEAREST, so only
    // level 0 is ever used.
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

void GlReal::NewList(unsigned list) { glNewList(list, GL_COMPILE); }
void GlReal::EndList() { glEndList(); }
void GlReal::CallList(unsigned list) { glCallList(list); }
void GlReal::Translatef(float x, float y, float z) { glTranslatef(x, y, z); }
void GlReal::Rotatef(float a, float x, float y, float z) { glRotatef(a, x, y, z); }
void GlReal::Begin(unsigned mode) { glBegin(mode); }
void GlReal::End() { glEnd(); }
void GlReal::Color3f(float r, float g, float b) { glColor3f(r, g, b); }
void GlReal::Color4f(float r, float g, float b, float a) { glColor4f(r, g, b, a); }
void GlReal::TexCoord2f(float s, float t) { glTexCoord2f(s, t); }
void GlReal::Vertex2i(int x, int y) { glVertex2i(x, y); }
void GlReal::Vertex3f(float x, float y, float z) { glVertex3f(x, y, z); }

}  // namespace icc
