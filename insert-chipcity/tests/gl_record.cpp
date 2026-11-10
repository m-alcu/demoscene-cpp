#include "gl_record.h"

#include <cstdio>

namespace icc {

namespace {

const char* enum_name(unsigned e) {
    switch (e) {
    case GL_QUADS: return "GL_QUADS";
    case GL_SRC_COLOR: return "GL_SRC_COLOR";
    case GL_SRC_ALPHA: return "GL_SRC_ALPHA";
    case GL_DST_COLOR: return "GL_DST_COLOR";
    case GL_BACK: return "GL_BACK";
    case GL_CULL_FACE: return "GL_CULL_FACE";
    case GL_FOG: return "GL_FOG";
    case GL_FOG_DENSITY: return "GL_FOG_DENSITY";
    case GL_FOG_START: return "GL_FOG_START";
    case GL_FOG_END: return "GL_FOG_END";
    case GL_FOG_MODE: return "GL_FOG_MODE";
    case GL_FOG_COLOR: return "GL_FOG_COLOR";
    case GL_DEPTH_TEST: return "GL_DEPTH_TEST";
    case GL_BLEND: return "GL_BLEND";
    case GL_FOG_HINT: return "GL_FOG_HINT";
    case GL_TEXTURE_2D: return "GL_TEXTURE_2D";
    case GL_NICEST: return "GL_NICEST";
    case GL_MODELVIEW: return "GL_MODELVIEW";
    case GL_PROJECTION: return "GL_PROJECTION";
    case GL_LINEAR: return "GL_LINEAR";
    case GL_COMPILE: return "GL_COMPILE";
    }
    static char buf[16];
    std::snprintf(buf, sizeof buf, "%u", e);
    return buf;
}

// glBlendFunc's GL_ONE (1) prints by name; other GLenum arguments use enum_name.
const char* blend_name(unsigned e) { return e == GL_ONE ? "GL_ONE" : enum_name(e); }

}  // namespace

std::string fmt_float(float v) {
    char b[48];
    std::snprintf(b, sizeof b, "%.9g", (double)v);
    return b;
}

std::string fmt_double(double v) {
    char b[48];
    std::snprintf(b, sizeof b, "%.17g", v);
    return b;
}

uint32_t crc32(const void* data, size_t n, uint32_t crc) {
    static uint32_t table[256];
    if (!table[1]) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t c = i;
            for (int k = 0; k < 8; k++) c = (c & 1) ? 0xEDB88320u ^ (c >> 1) : c >> 1;
            table[i] = c;
        }
    }
    crc = ~crc;
    const uint8_t* p = static_cast<const uint8_t*>(data);
    for (size_t i = 0; i < n; i++) crc = table[(crc ^ p[i]) & 0xff] ^ (crc >> 8);
    return ~crc;
}

void GlRecord::line(const std::string& s) {
    if (calls++) text += '\n';
    text += s;
}

#define F(v) fmt_float(v)
#define D(v) fmt_double(v)
#define I(v) std::to_string(v)

void GlRecord::Viewport(int x, int y, int w, int h) {
    line("glViewport(x = " + I(x) + ", y = " + I(y) + ", width = " + I(w) + ", height = " + I(h) + ")");
}
void GlRecord::MatrixMode(unsigned mode) { line(std::string("glMatrixMode(mode = ") + enum_name(mode) + ")"); }
void GlRecord::LoadIdentity() { line("glLoadIdentity()"); }
void GlRecord::MultMatrixd(const double m[16]) {
    std::string s = "glMultMatrixd(m = {";
    for (int i = 0; i < 16; i++) s += (i ? ", " : "") + D(m[i]);
    line(s + "})");
}
void GlRecord::Ortho(double l, double r, double b, double t, double n, double f) {
    line("glOrtho(left = " + D(l) + ", right = " + D(r) + ", bottom = " + D(b) + ", top = " + D(t) +
         ", zNear = " + D(n) + ", zFar = " + D(f) + ")");
}
void GlRecord::ClearColor(float r, float g, float b, float a) {
    line("glClearColor(red = " + F(r) + ", green = " + F(g) + ", blue = " + F(b) + ", alpha = " + F(a) + ")");
}
void GlRecord::Clear(unsigned mask) {
    std::string s;
    if (mask & GL_DEPTH_BUFFER_BIT) s += "GL_DEPTH_BUFFER_BIT";
    if (mask & GL_COLOR_BUFFER_BIT) s += std::string(s.empty() ? "" : " | ") + "GL_COLOR_BUFFER_BIT";
    line("glClear(mask = " + s + ")");
}
void GlRecord::Enable(unsigned cap) { line(std::string("glEnable(cap = ") + enum_name(cap) + ")"); }
void GlRecord::Disable(unsigned cap) { line(std::string("glDisable(cap = ") + enum_name(cap) + ")"); }
void GlRecord::BlendFunc(unsigned s, unsigned d) {
    line(std::string("glBlendFunc(sfactor = ") + blend_name(s) + ", dfactor = " + blend_name(d) + ")");
}
void GlRecord::Fogfv(unsigned pname, const float* v) {
    line(std::string("glFogfv(pname = ") + enum_name(pname) + ", params = {" + F(v[0]) + ", " + F(v[1]) +
         ", " + F(v[2]) + ", " + F(v[3]) + "})");
}
void GlRecord::Fogf(unsigned pname, float v) { line(std::string("glFogf(pname = ") + enum_name(pname) + ", param = " + F(v) + ")"); }
void GlRecord::Fogi(unsigned pname, int v) {
    line(std::string("glFogi(pname = ") + enum_name(pname) + ", param = " + enum_name((unsigned)v) + ")");
}
void GlRecord::Hint(unsigned target, unsigned mode) {
    line(std::string("glHint(target = ") + enum_name(target) + ", mode = " + enum_name(mode) + ")");
}
void GlRecord::CullFace(unsigned mode) { line(std::string("glCullFace(mode = ") + enum_name(mode) + ")"); }
void GlRecord::ClearDepth(double d) { line("glClearDepth(depth = " + D(d) + ")"); }
void GlRecord::DepthMask(bool flag) { line(std::string("glDepthMask(flag = ") + (flag ? "GL_TRUE" : "GL_FALSE") + ")"); }
void GlRecord::Texture(const uint8_t* rgb, int w, int h) {
    char b[64];
    std::snprintf(b, sizeof b, "%08x", crc32(rgb, (size_t)w * h * 3));
    line("texture(" + I(w) + "x" + I(h) + " rgb crc " + b + ")");
}
void GlRecord::NewList(unsigned list) { line("glNewList(list = " + I(list) + ", mode = GL_COMPILE)"); }
void GlRecord::EndList() { line("glEndList()"); }
void GlRecord::CallList(unsigned list) { line("glCallList(list = " + I(list) + ")"); }
void GlRecord::Translatef(float x, float y, float z) {
    line("glTranslatef(x = " + F(x) + ", y = " + F(y) + ", z = " + F(z) + ")");
}
void GlRecord::Rotatef(float a, float x, float y, float z) {
    line("glRotatef(angle = " + F(a) + ", x = " + F(x) + ", y = " + F(y) + ", z = " + F(z) + ")");
}
void GlRecord::Begin(unsigned mode) { line(std::string("glBegin(mode = ") + enum_name(mode) + ")"); }
void GlRecord::End() { line("glEnd()"); }
void GlRecord::Color3f(float r, float g, float b) {
    line("glColor3f(red = " + F(r) + ", green = " + F(g) + ", blue = " + F(b) + ")");
}
void GlRecord::Color4f(float r, float g, float b, float a) {
    line("glColor4f(red = " + F(r) + ", green = " + F(g) + ", blue = " + F(b) + ", alpha = " + F(a) + ")");
}
void GlRecord::TexCoord2f(float s, float t) { line("glTexCoord2f(s = " + F(s) + ", t = " + F(t) + ")"); }
void GlRecord::Vertex2i(int x, int y) { line("glVertex2i(x = " + I(x) + ", y = " + I(y) + ")"); }
void GlRecord::Vertex3f(float x, float y, float z) {
    line("glVertex3f(x = " + F(x) + ", y = " + F(y) + ", z = " + F(z) + ")");
}

}  // namespace icc
