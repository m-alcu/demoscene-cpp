// The vector routines (15D34h-16075h), hand-written x87: vectors are three
// floats, matrices 3x4 floats by rows (the translation in each row's fourth
// column). Some take or leave a value on the x87 stack (F).
#include "demo.h"

namespace lasse {

void Demo::dot(uint32_t a, uint32_t b) {
    F.fld(m_.f32(a));
    F.fmul(m_.f32(b));
    F.fld(m_.f32(a + 4));
    F.fmul(m_.f32(b + 4));
    F.faddp();
    F.fld(m_.f32(a + 8));
    F.fmul(m_.f32(b + 8));
    F.faddp();
}

void Demo::len2(uint32_t a) { dot(a, a); }

void Demo::vadd(uint32_t a, uint32_t b, uint32_t d) {
    F.fld(m_.f32(a)), F.fadd(m_.f32(b));
    F.fld(m_.f32(a + 4)), F.fadd(m_.f32(b + 4));
    F.fld(m_.f32(a + 8)), F.fadd(m_.f32(b + 8));
    m_.wf32(d + 8, F.fstpf());
    m_.wf32(d + 4, F.fstpf());
    m_.wf32(d, F.fstpf());
}

void Demo::vsub(uint32_t a, uint32_t b, uint32_t d) {
    F.fld(m_.f32(a)), F.fsub(m_.f32(b));
    F.fld(m_.f32(a + 4)), F.fsub(m_.f32(b + 4));
    F.fld(m_.f32(a + 8)), F.fsub(m_.f32(b + 8));
    m_.wf32(d + 8, F.fstpf());
    m_.wf32(d + 4, F.fstpf());
    m_.wf32(d, F.fstpf());
}

void Demo::vscale(uint32_t a, uint32_t d) {
    F.fldst(0);
    F.fldst(0);
    F.fmul(m_.f32(a));
    m_.wf32(d, F.fstpf());
    F.fmul(m_.f32(a + 4));
    m_.wf32(d + 4, F.fstpf());
    F.fmul(m_.f32(a + 8));
    m_.wf32(d + 8, F.fstpf());
}

void Demo::cross(uint32_t a, uint32_t b, uint32_t d) {
    F.fld(m_.f32(a)), F.fmul(m_.f32(b + 4));
    F.fld(m_.f32(a + 4)), F.fmul(m_.f32(b));
    F.fsubp();
    F.fld(m_.f32(a + 8)), F.fmul(m_.f32(b));
    F.fld(m_.f32(a)), F.fmul(m_.f32(b + 8));
    F.fsubp();
    F.fld(m_.f32(a + 4)), F.fmul(m_.f32(b + 8));
    F.fld(m_.f32(a + 8)), F.fmul(m_.f32(b + 4));
    F.fsubp();
    m_.wf32(d, F.fstpf());
    m_.wf32(d + 4, F.fstpf());
    m_.wf32(d + 8, F.fstpf());
}

void Demo::vrot(uint32_t a, uint32_t b, uint32_t d) {
    F.fsincos();
    F.fldst(0), F.fmul(m_.f32(a));
    F.fldst(2), F.fmul(m_.f32(b));
    F.faddp();
    m_.wf32(d, F.fstpf());
    F.fldst(0), F.fmul(m_.f32(a + 4));
    F.fldst(2), F.fmul(m_.f32(b + 4));
    F.faddp();
    m_.wf32(d + 4, F.fstpf());
    F.fmul(m_.f32(a + 8));
    F.fxch();
    F.fmul(m_.f32(b + 8));
    F.faddp();
    m_.wf32(d + 8, F.fstpf());
}

void Demo::normalize(uint32_t a, uint32_t d) {
    len2(a);
    F.fsqrt();
    F.fld1();
    F.fdivrp();
    vscale(a, d);
}

void Demo::triple(uint32_t a, uint32_t b, uint32_t c) {
    F.fld(m_.f32(a + 4)), F.fmul(m_.f32(b + 8));
    F.fld(m_.f32(a + 8)), F.fmul(m_.f32(b + 4));
    F.fsubp();
    F.fmul(m_.f32(c));
    F.fld(m_.f32(a + 8)), F.fmul(m_.f32(b));
    F.fld(m_.f32(a)), F.fmul(m_.f32(b + 8));
    F.fsubp();
    F.fmul(m_.f32(c + 4));
    F.faddp();
    F.fld(m_.f32(a)), F.fmul(m_.f32(b + 4));
    F.fld(m_.f32(a + 4)), F.fmul(m_.f32(b));
    F.fsubp();
    F.fmul(m_.f32(c + 8));
    F.faddp();
}

void Demo::transform(uint32_t s, uint32_t mx, uint32_t d, uint32_t n) {
    for (; n; n--, s += 12, d += 12) {
        F.fld(m_.f32(s + 8)), F.fld(m_.f32(s + 4)), F.fld(m_.f32(s));
        for (int row = 0; row < 2; row++) {
            const uint32_t r = mx + row * 0x10;
            F.fldst(0), F.fmul(m_.f32(r));
            F.fldst(2), F.fmul(m_.f32(r + 4));
            F.faddp();
            F.fldst(3), F.fmul(m_.f32(r + 8));
            F.faddp();
            F.fadd(m_.f32(r + 0x0C));
            m_.wf32(d + row * 4, F.fstpf());
        }
        F.fmul(m_.f32(mx + 0x20));
        F.fxch();
        F.fmul(m_.f32(mx + 0x24));
        F.faddp();
        F.fxch();
        F.fmul(m_.f32(mx + 0x28));
        F.faddp();
        F.fadd(m_.f32(mx + 0x2C));
        m_.wf32(d + 8, F.fstpf());
    }
}

void Demo::rotate(uint32_t s, uint32_t mx, uint32_t d, uint32_t n) {
    for (; n; n--, s += 12, d += 12) {
        F.fld(m_.f32(s + 8)), F.fld(m_.f32(s + 4)), F.fld(m_.f32(s));
        for (int row = 0; row < 2; row++) {
            const uint32_t r = mx + row * 0x10;
            F.fldst(0), F.fmul(m_.f32(r));
            F.fldst(2), F.fmul(m_.f32(r + 4));
            F.faddp();
            F.fldst(3), F.fmul(m_.f32(r + 8));
            F.faddp();
            m_.wf32(d + row * 4, F.fstpf());
        }
        F.fmul(m_.f32(mx + 0x20));
        F.fxch();
        F.fmul(m_.f32(mx + 0x24));
        F.faddp();
        F.fxch();
        F.fmul(m_.f32(mx + 0x28));
        F.faddp();
        m_.wf32(d + 8, F.fstpf());
    }
}

void Demo::lerp(uint32_t a, uint32_t b, uint32_t d, uint32_t n) {
    F.fld1();
    F.fsubst(1);
    for (; n; n--, a += 12, b += 12, d += 12) {
        for (int k = 0; k < 3; k++) {
            F.fld(m_.f32(a + 4 * k));
            F.fmulst(2);
            F.fld(m_.f32(b + 4 * k));
            F.fmulst(2);
            F.faddp();
            m_.wf32(d + 4 * k, F.fstpf());
        }
    }
    F.pop();
    F.pop();
}

void Demo::identity(uint32_t mx) {
    for (int i = 0; i < 12; i++) m_.w32(mx + 4 * i, 0);
    m_.w32(mx, 0x3F800000);
    m_.w32(mx + 0x14, 0x3F800000);
    m_.w32(mx + 0x28, 0x3F800000);
}

void Demo::translation(uint32_t v, uint32_t mx) {
    identity(mx);
    m_.w32(mx + 0x0C, m_.r32(v));
    m_.w32(mx + 0x1C, m_.r32(v + 4));
    m_.w32(mx + 0x2C, m_.r32(v + 8));
}

void Demo::axisAngle(uint32_t a, uint32_t mx) {
    F.fsincos();                        // cos, sin
    m_.w32(mx + 0x0C, 0), m_.w32(mx + 0x1C, 0), m_.w32(mx + 0x2C, 0);
    F.fld1(), F.fsubst(1);              // 1 - cos, cos, sin
    F.fldst(0), F.fmul(m_.f32(a));
    F.fldst(0), F.fmul(m_.f32(a)), F.faddst(3);
    m_.wf32(mx, F.fstpf());
    F.fldst(0), F.fmul(m_.f32(a + 4));
    F.fldst(4), F.fmul(m_.f32(a + 8));
    F.fsubp();
    m_.wf32(mx + 4, F.fstpf());
    F.fmul(m_.f32(a + 8));
    F.fldst(3), F.fmul(m_.f32(a + 4));
    F.faddp();
    m_.wf32(mx + 8, F.fstpf());
    F.fldst(0), F.fmul(m_.f32(a + 4));
    F.fldst(0), F.fmul(m_.f32(a));
    F.fldst(4), F.fmul(m_.f32(a + 8));
    F.faddp();
    m_.wf32(mx + 0x10, F.fstpf());
    F.fldst(0), F.fmul(m_.f32(a + 4)), F.faddst(3);
    m_.wf32(mx + 0x14, F.fstpf());
    F.fmul(m_.f32(a + 8));
    F.fldst(3), F.fmul(m_.f32(a));
    F.fsubp();
    m_.wf32(mx + 0x18, F.fstpf());
    F.fmul(m_.f32(a + 8));
    F.fldst(0), F.fmul(m_.f32(a));
    F.fldst(3), F.fmul(m_.f32(a + 4));
    F.fsubp();
    m_.wf32(mx + 0x20, F.fstpf());
    F.fldst(0), F.fmul(m_.f32(a + 4));
    F.fldst(3), F.fmul(m_.f32(a));
    F.faddp();
    m_.wf32(mx + 0x24, F.fstpf());
    F.fmul(m_.f32(a + 8));
    F.faddp();
    m_.wf32(mx + 0x28, F.fstpf());
    F.fstp(0);
}

void Demo::translate(uint32_t v, uint32_t mx) {
    for (int k = 0; k < 3; k++) {
        F.fld(m_.f32(mx + 0x0C + 0x10 * k));
        F.fadd(m_.f32(v + 4 * k));
        m_.wf32(mx + 0x0C + 0x10 * k, F.fstpf());
    }
}

void Demo::matmul(uint32_t a, uint32_t b, uint32_t d) {
    float t[12];
    for (int r = 0; r < 3; r++, a += 0x10) {
        for (int c = 0; c < 4; c++) {
            F.fld(m_.f32(a)), F.fmul(m_.f32(b + 4 * c));
            F.fld(m_.f32(a + 4)), F.fmul(m_.f32(b + 4 * c + 0x10));
            F.faddp();
            F.fld(m_.f32(a + 8)), F.fmul(m_.f32(b + 4 * c + 0x20));
            F.faddp();
            if (c == 3) F.fadd(m_.f32(a + 0x0C));
            t[r * 4 + c] = F.fstpf();
        }
    }
    for (int i = 0; i < 12; i++) m_.wf32(d + 4 * i, t[i]);
}

}  // namespace lasse
