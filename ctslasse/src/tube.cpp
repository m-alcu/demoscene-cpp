// Tubes (17F6Dh-18373h): a ring of N2 vertices swept along a path of N1
// points, the faces a grid wrapping both ways; and the path of part 5.
#include "demo.h"

namespace lasse {

// 17F6Dh: the faces of a W x H grid wrapping both ways (rows offset by
// half a step on odd columns), two triangles a cell, materials M1, M2.
void Demo::gridFaces(uint32_t obj, int32_t w, int32_t h, uint8_t m1, uint8_t m2) {
    const uint32_t n = (uint32_t)(w * h);
    m_.w32(obj, n * 2);
    uint32_t a = malloc(n * 2 * 12);
    m_.w32(obj + 4, a);
    uint32_t b = a + n * 12;
    for (int32_t i = 0; i < w; i++) {
        const int32_t base = i * h, nb = ((i + 1) % w) * h, odd = i & 1;
        for (int32_t j = 0; j < h; j++, a += 12, b += 12) {
            const uint16_t v0 = (uint16_t)(base + j);
            m_.w16(b, v0), m_.w16(a, v0);
            m_.w16(a + 2, (uint16_t)((j + 1) % h + base));
            const int32_t c20 = (h - odd + j) % h, c18 = (1 - odd + j) % h;
            m_.w16(b + 4, (uint16_t)(nb + c20));
            m_.w16(b + 2, (uint16_t)(c18 + nb));
            m_.w16(a + 4, (uint16_t)(c18 + nb));
            m_.w8(a + 6, m1);
            m_.w8(b + 6, m2);
        }
    }
}

// 18276h: the texture coordinates (16.16 << 8): around (SU over N2, halved
// on odd rings by half a step), along (SV over N1).
void Demo::tubeTex(uint32_t dst, int32_t n1, int32_t n2, int32_t su, int32_t sv) {
    const int32_t dv = sv >> 8, du = su >> 8;
    int32_t v = 0;
    for (int32_t i = 0; i < n1; i++, v += dv) {
        int32_t u = -(i & 1) * du;
        for (int32_t j = 0; j < n2; j++, dst += 8, u += 2 * du) {
            int32_t q = u / n2;
            q = q / 2;
            m_.w32(dst, (uint32_t)q << 8);
            m_.w32(dst + 4, (uint32_t)(v / n1) << 8);
        }
    }
}

// 1806Fh: the sweep. For each of N1 points of the path (PATH: position,
// tangent and a radius on the x87 stack, for u = 2 pi i / N1) a frame is
// carried along (the up vector rotated by the turn of the tangent, kept
// orthogonal), placed by matrix M; the ring's N2 vertices around it,
// twisted by TWIST over the length, from angle PHASE.
void Demo::sweep(uint32_t verts, uint32_t norms, uint32_t mx, int32_t n1, int32_t n2, Path path, float twist,
                 float phase) {
    Frame fr(*this, 2, 0x78 + 0x10);
    const uint32_t B = fr.ebp - 0x72;
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    const uint32_t tan = B - 6, side = B + 0x12, up = B + 6, axis = B + 0x1E, tmp = B + 0x2A, pos = B + 0x36;
    const uint32_t dir = B + 0x42, oldUp = B + 0x4E;
    copy(oldUp, 0x28320, 12);
    copy(dir, 0x2832C, 12);
    for (int32_t i = 0; i < n1; i++) {
        F.fld((X)i), F.fmul(D(0x28AD0)), F.fld((X)n1), F.fdivp();
        (this->*path)(pos, tan, F.fstpf());
        const float radius = F.fstpf();
        normalize(tan, tan);
        cross(dir, tan, axis);
        dot(dir, tan);
        F.fld1();
        F.fxch();
        const float c = F.fstpf();
        F.fadd(c);
        float k = F.fstf();
        if (F.fcomp(D(0x28AE0)).jb()) k = 1e-4f;    // 38D1B717h
        dot(axis, oldUp);
        F.fdiv(k);
        k = F.fstpf();
        cross(axis, oldUp, up);
        F.fld(c);
        vscale(oldUp, tmp);
        vadd(up, tmp, up);
        F.fld(k);
        vscale(axis, tmp);
        vadd(up, tmp, up);
        cross(tan, up, side);
        cross(side, tan, up);
        normalize(up, up);
        normalize(side, side);
        copy(oldUp, up, 12);
        copy(dir, tan, 12);
        rotate(up, mx, up, 1);
        rotate(side, mx, side, 1);
        transform(pos, mx, pos, 1);
        const int32_t odd = i & 1;
        for (int32_t j = 0; j < n2; j++, norms += 12, verts += 12) {
            F.fld((X)odd), F.fmul(D(0x28AD8));
            F.fld((X)j);
            F.fsubrp(1);
            F.fmul(D(0x28AD0));
            F.fld((X)n2);
            F.fdivp();
            F.fadd(phase);
            F.fld((X)i), F.fmul(twist), F.fld((X)n1), F.fdivp();
            F.faddp();
            vrot(up, side, norms);
            F.fld(radius);
            vscale(norms, verts);
            vadd(verts, pos, verts);
        }
    }
}

// 182FEh: a tube object at OBJ: N1 rings of N2 along PATH.
void Demo::tube(uint32_t obj, int32_t n1, int32_t n2, Path path, float twist, float phase, int32_t su, int32_t sv) {
    Frame fr(*this, 2, 0x38);
    m_.w32(obj, (uint32_t)(n1 * n2));
    m_.w32(obj + 4, malloc(m_.r32(obj) * 12));
    m_.w32(obj + 8, malloc(m_.r32(obj) * 12));
    m_.w32(obj + 0x0C, malloc(m_.r32(obj) * 8));
    const uint32_t mx = fr.ebp - 0x38;
    identity(mx);
    sp_ -= 0x10;                                // its four arguments
    sweep(m_.r32(obj + 4), m_.r32(obj + 8), mx, n1, n2, path, twist, phase);
    sp_ += 0x10;
    tubeTex(m_.r32(obj + 0x0C), n1, n2, su, sv);
}

// 19C1Ah: part 5's path: a knot-like curve; the tangent, and a radius.
void Demo::path5(uint32_t pos, uint32_t tan, float u) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    F.fld(u), F.fmul(m_.f32(0x28F44));
    float f8 = F.fstf();
    F.fcos(), F.fmul(D(0x28F48));
    F.fld(f8);
    F.fxch();
    const float f18 = F.fstpf();
    F.fsin(), F.fmul(D(0x28F48));
    F.fld(u);
    F.fxch();
    const float f14 = F.fstpf();
    F.fcos();
    F.fld(u);
    F.fxch();
    const float f1c = F.fstpf();
    F.fsin();
    F.fld(u), F.fmul(m_.f32(0x28F50));
    F.fld(f18);
    F.fld(f14);
    F.fxch(3);
    const float fc = F.fstpf();
    F.fxch(2);
    F.fadd(fc);
    F.fxch(2);
    F.fsub(f1c);
    F.fxch(2);
    const float f10 = F.fstpf();
    f8 = F.fstpf();
    m_.wf32(pos, F.fstpf());
    m_.wf32(pos + 4, f10);
    F.fld(f8);
    F.fsin(), F.fmul(D(0x28F54));
    F.fld(f14), F.fmul(m_.f32(0x28F5C));
    F.fld(f18), F.fmul(m_.f32(0x28F44));
    F.fld(f8);
    F.fxch(3);
    const float z = F.fstpf();
    F.fadd(f1c);
    F.fxch();
    F.fadd(fc);
    F.fxch();
    const float ty = F.fstpf();
    m_.wf32(pos + 8, z);
    m_.wf32(tan, F.fstpf());
    m_.wf32(tan + 4, ty);
    F.fcos(), F.fmul(D(0x28F60));
    m_.wf32(tan + 8, F.fstpf());
    F.fld(D(0x28F68));
}

}  // namespace lasse

namespace lasse {

// 1A010h: part 7's path; it moves with the time at 2B4D4h (G).
void Demo::path7(uint32_t pos, uint32_t tan, float u) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    const float g = m_.f32(0x2B4D4);
    F.fld(u), F.fmul(m_.f32(0x28FEC));
    F.fld(g), F.fmul(m_.f32(0x28FF0));
    F.fxch();
    float f20 = F.fstpf();
    F.fadd(f20);
    F.fcos();
    F.fld(g), F.fmul(m_.f32(0x28FF0));
    F.fxch(), F.fmul(D(0x28FF4));
    F.fxch(), F.fadd(f20);
    F.fxch();
    const float f18 = F.fstpf();
    F.fsin();
    F.fld(u), F.fmul(m_.f32(0x28FFC));
    F.fxch(), F.fmul(D(0x28FF4));
    F.fxch();
    f20 = F.fstf();
    F.fadd(g);
    F.fxch();
    const float f14 = F.fstpf();
    F.fcos(), F.fmul(D(0x28FF4));
    F.fld(f20), F.fadd(g);
    F.fxch();
    const float f4 = F.fstpf();
    F.fsin(), F.fmul(D(0x28FF4));
    F.fld(u), F.fmul(m_.f32(0x29000));
    F.fxch();
    const float f1c = F.fstpf();
    const float f8 = F.fstf();
    F.fcos();
    F.fld(f8);
    F.fxch();
    const float f10 = F.fstpf();
    F.fsin();
    F.fld(f4), F.fmul(m_.f32(0x28FFC));
    F.fld(f10);
    F.fld(f14), F.fadd(D(0x29004));
    F.fxch();
    const double d48 = F.fstpd();
    const double d28 = F.fstd();
    F.fmul(d48);
    F.fld(d28), F.fmul(D(0x2900C));
    F.fxch(3);
    const float fc = F.fstf();
    const double d38 = F.fstpd();
    F.fldst(2), F.fmul(d38);
    F.fld(d28), F.fmul(d38);
    F.fld(f18), F.fmul(m_.f32(0x28FEC));
    F.fxch(5), F.fmul(d48);
    F.fldst(5), F.fmul(f10);
    F.fxch(2);
    const float py = F.fstpf();
    F.fxch(5), F.fmul(fc);
    F.fxch(3);
    m_.wf32(pos, F.fstpf());
    m_.wf32(pos + 4, py);
    F.fxch(3);
    const float tz = F.fstpf();
    m_.wf32(pos + 8, f1c);
    F.fxch();
    F.faddp(3);
    F.fsubp(1);
    F.fxch();
    const float ty = F.fstpf();
    m_.wf32(tan, F.fstpf());
    m_.wf32(tan + 4, ty);
    m_.wf32(tan + 8, tz);
    F.fld(D(0x29014));
}

}  // namespace lasse
