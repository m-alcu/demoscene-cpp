// What part 5 uses of the intro's 3D engine (16078h-18373h), its vector
// routines (15D34h-16075h) and its rotozoomer (1B8E3h, 14BDBh).
//
// The vector routines are hand-written x87 and some take or leave values on
// the x87 stack (F); they are kept instruction by instruction. The fillers
// and the texture mapper are integer code; they are kept register by
// register where carries between halves of a register matter.
#include <algorithm>
#include <cstring>

#include "knot.h"

namespace knot {

namespace {
inline int64_t mul64(int32_t a, int32_t b) { return (int64_t)a * b; }
// 32-bit arithmetic as the CPU does it (wrapping)
inline int32_t sub(int32_t a, int32_t b) { return (int32_t)((uint32_t)a - (uint32_t)b); }
inline int32_t add(int32_t a, int32_t b) { return (int32_t)((uint32_t)a + (uint32_t)b); }
inline int32_t mul(int32_t a, int32_t b) { return (int32_t)((uint32_t)a * (uint32_t)b); }
inline uint32_t bits(float f) {
    uint32_t b;
    std::memcpy(&b, &f, 4);
    return b;
}
}  // namespace

// --- vectors ---------------------------------------------------------------------------

void Knot::dot(const float* a, const float* b) {               // 15D34h: ST0 = a.b
    F.fld(a[0]), F.fmul(b[0]);
    F.fld(a[1]), F.fmul(b[1]);
    F.faddp();
    F.fld(a[2]), F.fmul(b[2]);
    F.faddp();
}

void Knot::vadd(const float* a, const float* b, float* d) {    // 15D5Eh
    F.fld(a[0]), F.fadd(b[0]);
    F.fld(a[1]), F.fadd(b[1]);
    F.fld(a[2]), F.fadd(b[2]);
    d[2] = F.fstpf(), d[1] = F.fstpf(), d[0] = F.fstpf();
}

void Knot::vsub(const float* a, const float* b, float* d) {    // 15D77h
    F.fld(a[0]), F.fsub(b[0]);
    F.fld(a[1]), F.fsub(b[1]);
    F.fld(a[2]), F.fsub(b[2]);
    d[2] = F.fstpf(), d[1] = F.fstpf(), d[0] = F.fstpf();
}

void Knot::vscale(const float* a, float* d) {                   // 15D90h: d = a * ST0 (popped)
    F.fldst(0);
    F.fldst(0);
    F.fmul(a[0]);
    d[0] = F.fstpf();
    F.fmul(a[1]);
    d[1] = F.fstpf();
    F.fmul(a[2]);
    d[2] = F.fstpf();
}

void Knot::cross(const float* a, const float* b, float* d) {   // 15DA5h
    F.fld(a[0]), F.fmul(b[1]);
    F.fld(a[1]), F.fmul(b[0]);
    F.fsubp();
    F.fld(a[2]), F.fmul(b[0]);
    F.fld(a[0]), F.fmul(b[2]);
    F.fsubp();
    F.fld(a[1]), F.fmul(b[2]);
    F.fld(a[2]), F.fmul(b[1]);
    F.fsubp();
    d[0] = F.fstpf(), d[1] = F.fstpf(), d[2] = F.fstpf();
}

void Knot::vrot(const float* a, const float* b, float* d) {    // 15DD4h: d = a cos ST0 + b sin ST0
    F.fsincos();
    F.fldst(0), F.fmul(a[0]);
    F.fldst(2), F.fmul(b[0]);
    F.faddp();
    d[0] = F.fstpf();
    F.fldst(0), F.fmul(a[1]);
    F.fldst(2), F.fmul(b[1]);
    F.faddp();
    d[1] = F.fstpf();
    F.fmul(a[2]);
    F.fxch();
    F.fmul(b[2]);
    F.faddp();
    d[2] = F.fstpf();
}

void Knot::normalize(const float* a, float* d) {               // 15DFFh
    len2(a);
    F.fsqrt();
    F.fld1();
    F.fdivrp();
    vscale(a, d);
}

void Knot::triple(const float* a, const float* b, const float* c) {   // 15E1Fh: ST0 = (a x b).c
    F.fld(a[1]), F.fmul(b[2]);
    F.fld(a[2]), F.fmul(b[1]);
    F.fsubp();
    F.fmul(c[0]);
    F.fld(a[2]), F.fmul(b[0]);
    F.fld(a[0]), F.fmul(b[2]);
    F.fsubp();
    F.fmul(c[1]);
    F.faddp();
    F.fld(a[0]), F.fmul(b[1]);
    F.fld(a[1]), F.fmul(b[0]);
    F.fsubp();
    F.fmul(c[2]);
    F.faddp();
}

void Knot::transform(const float* s, const float* m, float* d) {     // 15E52h, one vector
    F.fld(s[2]), F.fld(s[1]), F.fld(s[0]);
    float out[2];
    for (int row = 0; row < 2; row++) {
        const float* r = m + row * 4;
        F.fldst(0), F.fmul(r[0]);
        F.fldst(2), F.fmul(r[1]);
        F.faddp();
        F.fldst(3), F.fmul(r[2]);
        F.faddp();
        F.fadd(r[3]);
        out[row] = F.fstpf();
    }
    d[0] = out[0], d[1] = out[1];
    F.fmul(m[8]);
    F.fxch();
    F.fmul(m[9]);
    F.faddp();
    F.fxch();
    F.fmul(m[10]);
    F.faddp();
    F.fadd(m[11]);
    d[2] = F.fstpf();
}

void Knot::rotate(const float* s, const float* m, float* d) {        // 15EB2h, one vector
    F.fld(s[2]), F.fld(s[1]), F.fld(s[0]);
    float out[2];
    for (int row = 0; row < 2; row++) {
        const float* r = m + row * 4;
        F.fldst(0), F.fmul(r[0]);
        F.fldst(2), F.fmul(r[1]);
        F.faddp();
        F.fldst(3), F.fmul(r[2]);
        F.faddp();
        out[row] = F.fstpf();
    }
    d[0] = out[0], d[1] = out[1];
    F.fmul(m[8]);
    F.fxch();
    F.fmul(m[9]);
    F.faddp();
    F.fxch();
    F.fmul(m[10]);
    F.faddp();
    d[2] = F.fstpf();
}

void Knot::identity(float* m) {                                // 15F4Dh
    for (int i = 0; i < 12; i++) m[i] = 0;
    m[0] = m[5] = m[10] = 1.0f;
}

void Knot::axisAngle(const float* a, float* m) {               // 15F7Eh: rotation by ST0 about A
    F.fsincos();                        // cos, sin
    m[3] = m[7] = m[11] = 0;
    F.fld1(), F.fsubst(1);              // 1 - cos, cos, sin
    F.fldst(0), F.fmul(a[0]);
    F.fldst(0), F.fmul(a[0]), F.faddst(3);
    m[0] = F.fstpf();
    F.fldst(0), F.fmul(a[1]);
    F.fldst(4), F.fmul(a[2]);
    F.fsubp();
    m[1] = F.fstpf();
    F.fmul(a[2]);
    F.fldst(3), F.fmul(a[1]);
    F.faddp();
    m[2] = F.fstpf();
    F.fldst(0), F.fmul(a[1]);
    F.fldst(0), F.fmul(a[0]);
    F.fldst(4), F.fmul(a[2]);
    F.faddp();
    m[4] = F.fstpf();
    F.fldst(0), F.fmul(a[1]), F.faddst(3);
    m[5] = F.fstpf();
    F.fmul(a[2]);
    F.fldst(3), F.fmul(a[0]);
    F.fsubp();
    m[6] = F.fstpf();
    F.fmul(a[2]);
    F.fldst(0), F.fmul(a[0]);
    F.fldst(3), F.fmul(a[1]);
    F.fsubp();
    m[8] = F.fstpf();
    F.fldst(0), F.fmul(a[1]);
    F.fldst(3), F.fmul(a[0]);
    F.faddp();
    m[9] = F.fstpf();
    F.fmul(a[2]);
    F.faddp();
    m[10] = F.fstpf();
    F.fstp(0);
}

void Knot::translate(const float* v, float* m) {               // 1600Ah
    for (int k = 0; k < 3; k++) {
        F.fld(m[3 + 4 * k]);
        F.fadd(v[k]);
        m[3 + 4 * k] = F.fstpf();
    }
}

void Knot::matmul(const float* a, const float* b, float* d) {  // 16025h: d = a b
    float t[12];
    for (int r = 0; r < 3; r++, a += 4) {
        for (int c = 0; c < 4; c++) {
            F.fld(a[0]), F.fmul(b[c]);
            F.fld(a[1]), F.fmul(b[c + 4]);
            F.faddp();
            F.fld(a[2]), F.fmul(b[c + 8]);
            F.faddp();
            if (c == 3) F.fadd(a[3]);
            t[r * 4 + c] = F.fstpf();
        }
    }
    std::memcpy(d, t, sizeof t);
}

// --- the tube ----------------------------------------------------------------------------

// 17F6Dh: the faces of the 48 x 6 grid, wrapping both ways (rings offset by
// half a step on odd rings), two triangles a cell, material 14h.
void Knot::gridFaces() {
    const int32_t w = kRings, h = kSides, n = w * h;
    for (int32_t i = 0; i < w; i++) {
        const int32_t base = i * h, nb = ((i + 1) % w) * h, odd = i & 1;
        for (int32_t j = 0; j < h; j++) {
            Face& a = faces_[base + j];
            Face& b = faces_[n + base + j];
            const int32_t c20 = (h - odd + j) % h, c18 = (1 - odd + j) % h;
            a.v[0] = b.v[0] = (uint16_t)(base + j);
            a.v[1] = (uint16_t)((j + 1) % h + base);
            a.v[2] = b.v[1] = (uint16_t)(c18 + nb);
            b.v[2] = (uint16_t)(nb + c20);
            a.mat = b.mat = 0x14;
        }
    }
}

// 18276h: the texture coordinates (16.16 << 8): once around the ring (half
// a step back on odd rings), seven times along the tube.
void Knot::tubeTex() {
    const int32_t su = 0x1000000, sv = 0x7000000;
    const int32_t dv = sv >> 8, du = su >> 8;
    int32_t v = 0, k = 0;
    for (int32_t i = 0; i < kRings; i++, v += dv) {
        int32_t u = -(i & 1) * du;
        for (int32_t j = 0; j < kSides; j++, k++, u += 2 * du) {
            const int32_t q = u / kSides / 2;
            tex_[k][0] = (int32_t)((uint32_t)q << 8);
            tex_[k][1] = (int32_t)((uint32_t)(v / kRings) << 8);
        }
    }
}

// 19C1Ah: the path, a trefoil knot: position and tangent at U (0..2 pi),
// the tube's radius (0.4) left on the x87 stack.
//   pos = (1.8 cos 2u - cos u,  1.8 sin 2u + sin u,  0.8 sin 3u)
void Knot::path5(float* pos, float* tan, float u) {
    F.fld(u), F.fmul(2.0f);
    float f8 = F.fstf();
    F.fcos(), F.fmul(1.8);
    F.fld(f8);
    F.fxch();
    const float f18 = F.fstpf();
    F.fsin(), F.fmul(1.8);
    F.fld(u);
    F.fxch();
    const float f14 = F.fstpf();
    F.fcos();
    F.fld(u);
    F.fxch();
    const float f1c = F.fstpf();
    F.fsin();
    F.fld(u), F.fmul(3.0f);
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
    pos[0] = F.fstpf();
    pos[1] = f10;
    F.fld(f8);
    F.fsin(), F.fmul(0.8);
    F.fld(f14), F.fmul(-2.0f);
    F.fld(f18), F.fmul(2.0f);
    F.fld(f8);
    F.fxch(3);
    const float z = F.fstpf();
    F.fadd(f1c);
    F.fxch();
    F.fadd(fc);
    F.fxch();
    const float ty = F.fstpf();
    pos[2] = z;
    tan[0] = F.fstpf();
    tan[1] = ty;
    F.fcos(), F.fmul(2.4);
    tan[2] = F.fstpf();
    F.fld(0.4000000059604645);
}

// 1806Fh: the sweep. For each of the 48 points of the path a frame is
// carried along (the up vector turned with the tangent, kept orthogonal);
// the ring's 6 vertices around it, twisted by TWIST over the length.
void Knot::sweep(float twist, float phase) {
    float mx[12];
    identity(mx);
    Vec tan, side, up, axis, tmp, pos;
    Vec oldUp = {0, 0, 1}, dir = {0, 1, 0};
    int k = 0;
    for (int32_t i = 0; i < kRings; i++) {
        F.fld((X)i), F.fmul(6.283185307179586), F.fld((X)kRings), F.fdivp();
        path5(pos, tan, F.fstpf());
        const float radius = F.fstpf();
        normalize(tan, tan);
        cross(dir, tan, axis);
        dot(dir, tan);
        F.fld1();
        F.fxch();
        const float c = F.fstpf();
        F.fadd(c);
        float s = F.fstf();
        if (F.fcomp(0.0001).jb()) s = 1e-4f;
        dot(axis, oldUp);
        F.fdiv(s);
        s = F.fstpf();
        cross(axis, oldUp, up);
        F.fld(c);
        vscale(oldUp, tmp);
        vadd(up, tmp, up);
        F.fld(s);
        vscale(axis, tmp);
        vadd(up, tmp, up);
        cross(tan, up, side);
        cross(side, tan, up);
        normalize(up, up);
        normalize(side, side);
        std::memcpy(oldUp, up, sizeof up);
        std::memcpy(dir, tan, sizeof tan);
        rotate(up, mx, up);
        rotate(side, mx, side);
        transform(pos, mx, pos);
        const int32_t odd = i & 1;
        for (int32_t j = 0; j < kSides; j++, k++) {
            F.fld((X)odd), F.fmul(0.5);
            F.fld((X)j);
            F.fsubrp(1);
            F.fmul(6.283185307179586);
            F.fld((X)kSides);
            F.fdivp();
            F.fadd(phase);
            F.fld((X)i), F.fmul(twist), F.fld((X)kRings), F.fdivp();
            F.faddp();
            vrot(up, side, norms_[k]);
            F.fld(radius);
            vscale(norms_[k], verts_[k]);
            vadd(verts_[k], pos, verts_[k]);
        }
    }
}

// --- the scene ---------------------------------------------------------------------------

// The screen: its centre and the projection's scales (field of view 2)
// are cx_, cy_, sx_, sy_ (16.16 as floats; see the constructor).

// 17658h: a camera at EYE looking at AT, UP up, rolled by ANGLE: the matrix
// M (rows: right, forward, up; the translation -eye in view space). Leaves
// |at - eye|^2 on the x87 stack.
void Knot::camera(float* m, const float* eye, const float* at, const float* up, float angle) {
    Vec fwd, right, top, e;
    float roll[12];
    const Vec yAxis = {0, 1, 0};
    vsub(at, eye, fwd);
    cross(fwd, up, right);
    cross(right, fwd, top);
    normalize(right, m);
    normalize(fwd, m + 4);
    normalize(top, m + 8);
    F.fld(angle);
    axisAngle(yAxis, roll);
    matmul(roll, m, m);
    rotate(eye, m, e);
    F.fld(e[0]), F.fchs(), m[3] = F.fstpf();
    F.fld(e[1]), F.fchs(), m[7] = F.fstpf();
    F.fld(e[2]), F.fchs(), m[11] = F.fstpf();
    len2(fwd);
}

// 1791Fh, 177D3h, 170D2h: the tube through matrix M into the (empty)
// scene: vertices, normals and texture coordinates; its faces that face
// the camera kept, with their depth (the sum of their vertices' squared
// distances). Flags 10h: no clipping.
void Knot::addObject(const float* m) {
    for (int i = 0; i < kVerts; i++) {
        transform(verts_[i], m, sv_[i]);
        rotate(norms_[i], m, sn_[i]);
        stex_[i][0] = tex_[i][0], stex_[i][1] = tex_[i][1];
        vis_[i] = 0;
    }
    count_ = 0;
    for (int i = 0; i < kFaces; i++) {
        Face r = faces_[i];
        const float *a = sv_[r.v[0]], *b = sv_[r.v[1]], *c = sv_[r.v[2]];
        triple(a, b, c);
        const float tp = F.fstpf();
        if (!(bits(tp) & 0x7FFFFFFF)) continue;
        F.fldz();
        const bool front = F.fcomp(tp).jb();    // 0 < tp: facing away
        if (front) continue;
        r.back = 0;
        len2(a);
        float d = F.fstpf();
        len2(b);
        F.fadd(d);
        d = F.fstpf();
        len2(c);
        F.fadd(d);
        r.depth = F.fstpf();
        vis_[r.v[0]] = vis_[r.v[1]] = vis_[r.v[2]] = 1;
        rec_[count_] = r;
        order_[count_] = count_;
        count_++;
    }
}

// 16CA4h: the faces from LO to HI (inclusive) sorted by depth, far first
// (the depth's bits compared as unsigned): the intro's quicksort, as it
// orders equal depths.
void Knot::sortFaces(int lo, int hi) {
    auto key = [&](int i) { return bits(rec_[order_[i]].depth); };
    int esi = lo, edi = hi;
    const uint32_t pivot = key(esi + (edi - esi) / 2);
    for (;;) {
        while (key(esi) > pivot) {
            esi++;
            if (!(esi < hi)) break;
        }
        while (key(edi) < pivot) {
            edi--;
            if (!(edi > lo)) break;
        }
        if (esi > edi) break;
        std::swap(order_[esi], order_[edi]);
        esi++, edi--;
    }
    if (edi > lo) sortFaces(lo, edi);
    if (esi < hi) sortFaces(esi, hi);
}

// 17942h: the scene drawn, far to near. Vertices projected (1759Ch: 16.16
// row and column, y the depth); environment mapped (175F0h: the normal's x
// and z, 16.16 around 128); each face filled with two textures added: the
// lighting table at the environment coordinates, then the knot's texture
// at the tube's coordinates (made to wrap around the first vertex's).
void Knot::render() {
    if (count_) sortFaces(0, count_ - 1);
    for (int i = 0; i < kVerts; i++) {
        if (!vis_[i]) continue;
        const float* v = sv_[i];
        F.fld(sy_), F.fmul(v[2]), F.fdiv(v[1]), F.fsubr(cy_);
        F.frndint();
        scr_[i][0] = F.fistp();
        F.fld(sx_), F.fmul(v[0]), F.fdiv(v[1]), F.fadd(cx_);
        F.frndint();
        scr_[i][1] = F.fistp();
    }
    for (int i = 0; i < kVerts; i++) {
        if (!vis_[i]) continue;
        F.fld(sn_[i][0]), F.fmul(127.0f), F.fmul(65536.0f), F.fadd(8388608.0f);
        F.frndint();
        env_[i][0] = F.fistp();
        F.fld(sn_[i][2]), F.fmul(127.0f), F.fmul(65536.0f), F.fadd(8388608.0f);
        F.frndint();
        env_[i][1] = F.fistp();
    }
    // 16D0Fh: the values made to wrap: the second and third relative to the
    // first, in 24 bits
    auto wrap = [](int32_t* d) {
        uint32_t a = (uint32_t)d[0] << 8, b = (uint32_t)d[1] << 8, c = (uint32_t)d[2] << 8;
        b -= a, c -= a;
        a = (uint32_t)((int32_t)a >> 8), b = (uint32_t)((int32_t)b >> 8), c = (uint32_t)((int32_t)c >> 8);
        b += a, c += a;
        d[0] = (int32_t)a, d[1] = (int32_t)b, d[2] = (int32_t)c;
    };
    for (int i = 0; i < count_; i++) {
        const Face& f = rec_[order_[i]];
        // rows, columns, then the four attributes, three vertices each
        int32_t vd[18];
        for (int k = 0; k < 3; k++) {
            const int v = f.v[k];
            vd[k] = scr_[v][0], vd[3 + k] = scr_[v][1];
            vd[6 + k] = env_[v][0], vd[9 + k] = env_[v][1];
            vd[12 + k] = stex_[v][0], vd[15 + k] = stex_[v][1];
        }
        wrap(vd + 12);
        wrap(vd + 15);
        fill(vd);
    }
}

// 16C19h: a span of COUNT pixels at AT: the lighting table at attributes
// 0/1, then the knot's texture at attributes 2/3 added on. Each pass steps
// 16.16 values packed into two registers, the fraction's carry into the
// other half's integer byte.
void Knot::span(int32_t at, int32_t count) {
    auto pass = [&](uint32_t u0, uint32_t v0, uint32_t du0, uint32_t dv0, const uint8_t* tex, bool add) {
        uint32_t edx = (u0 << 16) | (u0 >> 16), ebx = (v0 << 16) | (v0 >> 16);
        uint32_t esi = (du0 << 16) | (du0 >> 16), edi = (dv0 << 16) | (dv0 >> 16);
        const uint32_t dx = edx & 0xFFFF, bx = ebx & 0xFFFF;     // xchg dx, bx
        edx = (edx & 0xFFFF0000u) | bx, ebx = (ebx & 0xFFFF0000u) | dx;
        const uint32_t di = edi & 0xFFFF, si = esi & 0xFFFF;     // xchg di, si
        edi = (edi & 0xFFFF0000u) | si, esi = (esi & 0xFFFF0000u) | di;
        uint32_t ax = (edx & 0xFF) << 8 | (ebx & 0xFF);          // the texel's address (AH row, AL column)
        ebx = (ebx & 0xFFFF0000u) | ((ebx - edi) & 0xFFFF);     // sub bx, di
        uint64_t s = (uint64_t)ebx + edi;
        ebx = (uint32_t)s;
        uint32_t cf = (uint32_t)(s >> 32);
        uint8_t* p = fb_ + at;
        for (int32_t n = count; n; n--) {
            if (!add) {
                s = (uint64_t)edx + esi + cf;
                edx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                const uint8_t al = tex[ax];
                s = (uint64_t)ebx + edi + cf;
                ebx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                ax = (ax & 0x00FF) | (edx & 0xFF) << 8;
                *p++ = al;
                ax = (ax & 0xFF00) | (ebx & 0xFF);
            } else {
                s = (uint64_t)edx + esi;
                edx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                const uint8_t al = tex[ax];
                s = (uint64_t)ebx + edi + cf;
                ebx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                ax = (ax & 0x00FF) | (edx & 0xFF) << 8;
                edx = (edx & ~0xFFu) | ((edx + cf) & 0xFF);      // adc dl, 0
                *p = (uint8_t)(*p + al);
                p++;
                ax = (ax & 0xFF00) | (ebx & 0xFF);
            }
        }
    };
    pass(a_[0], a_[1], dAdx_[0], dAdx_[1], light_, false);
    pass(a_[2], a_[3], dAdx_[2], dAdx_[3], plasma_, true);
}

// 16601h: a triangle with four attributes. VD: three rows, three columns
// (16.16), then each attribute's three values. Edges and attributes are
// stepped in 16.16 down the rows; the attributes' gradients come from the
// plane through the three vertices; the screen clips at 0..w_ x 0..h_.
void Knot::fill(const int32_t* vd) {
    constexpr int n = 4;
    const int32_t kLeft = 0, kRight = w_, kTop = 0, kBottom = h_, kPitch = w_;
    const int32_t* attr = vd + 6;               // attr[3 k + vertex]
    int32_t y0 = vd[0], y1 = vd[1], y2 = vd[2];
    int32_t x0 = vd[3], x1 = vd[4], x2 = vd[5];
    // the top vertex, whose attributes start the left edge
    int top;
    if (y0 > y1) {
        top = y1 > y2 ? 2 : 1;
        std::swap(y0, y1), std::swap(x0, x1);
    } else {
        top = y0 > y2 ? 2 : 0;
    }
    if (y0 > y2) std::swap(y0, y2), std::swap(x0, x2);
    if (y1 > y2) std::swap(y1, y2), std::swap(x1, x2);
    int32_t r0 = (int32_t)((uint32_t)y0 + 0xFFFF) >> 16, r1 = (int32_t)((uint32_t)y1 + 0xFFFF) >> 16,
            r2 = (int32_t)((uint32_t)y2 + 0xFFFF) >> 16;
    if (r0 >= kBottom || r2 <= kTop) return;
    if (r0 < kTop) r0 = kTop;
    if (r2 > kBottom) r2 = kBottom;
    if (r0 == r2) return;
    const int32_t rowMid = r1, rowEnd = r2;
    int32_t row = r0;

    // the gradients: a determinant, shifted to fit
    int32_t dAdy[n];
    {
        const int32_t dy20 = sub(vd[2], vd[0]), dx10 = sub(vd[4], vd[3]);
        const int32_t dy10 = sub(vd[1], vd[0]), dx20 = sub(vd[5], vd[3]);
        int64_t d = mul64(dy10, dx20) - mul64(dy20, dx10);
        uint8_t sh = 0;
        d >>= 15;
        while ((uint32_t)((int32_t)(d >> 32) + 1) > 1) {
            d >>= 4;
            sh += 4;
        }
        d >>= 1;
        const uint32_t det = (uint32_t)d;
        if (det == 0) return;
        // 165E2h: too small: flat (the area in pixels, so RES^2 times larger)
        const uint32_t tiny = 0x20000u * (uint32_t)(res_ * res_);
        if (det < tiny || det > 0u - tiny) {
            for (int k = 0; k < n; k++) dAdy[k] = 0, dAdx_[k] = 0;
        } else {
            for (int k = 0; k < n; k++) {
                const int32_t a0 = attr[3 * k], d1 = sub(attr[3 * k + 1], a0), d2 = sub(attr[3 * k + 2], a0);
                int64_t v = mul64(d1, dx20) - mul64(d2, dx10);
                v >>= sh;
                dAdy[k] = (int32_t)(v / (int32_t)det);
                v = mul64(d2, dy10) - mul64(d1, dy20);
                v >>= sh;
                dAdx_[k] = (int32_t)(v / (int32_t)det);
            }
        }
    }
    // an edge from (xa, ya) to (xb, yb) at row R: its slope, its x there
    int32_t xl, xr, sl, sr;
    auto edge = [&](int32_t ya, int32_t yb, int32_t xa, int32_t xb, int32_t r, int32_t& slope, int32_t& x,
                    bool exact) {
        const int32_t pre = sub((int32_t)((uint32_t)r << 16), ya);
        const int32_t dy = sub(ya, yb), dx = sub(xa, xb);
        if (exact ? (uint32_t)dy == 0x10000 : (uint32_t)dy < 0x10000) {
            slope = (int32_t)(exact ? 0x40000000u : ((uint32_t)dy - 0x10000) & 0x80000000u ? 0xC0000000u : 0x40000000u);
            x = add((int32_t)(mul64(dx, pre) / dy), xa);
            return;
        }
        slope = (int32_t)(((int64_t)dx << 16) / dy);
        x = add((int32_t)(mul64(slope, pre) >> 16), xa);
    };
    // the left slope's whole part, and the attributes' steps for it and one more
    int32_t floor0 = 0, floor1 = 0, aFloor[n];
    auto floors = [&]() {
        floor0 = sl >> 16, floor1 = floor0 + 1;
        for (int k = 0; k < n; k++) aFloor[k] = mul(dAdx_[k], floor0);
    };
    int cont = 0;                               // the edge that turns at the middle: 1 left, 2 right
    edge(y0, y2, x0, x2, r0, sl, xl, true);     // the long edge
    if (r1 > r0) {
        edge(y0, y1, x0, x1, r0, sr, xr, true);
        if (sl < sr) {
            cont = 2;
        } else {
            std::swap(sl, sr), std::swap(xl, xr);
            cont = 1;
        }
    } else {
        edge(y1, y2, x1, x2, r0, sr, xr, false);
        if (!(sl > sr)) std::swap(sl, sr), std::swap(xl, xr);
    }
    // 1631Ah: the first row
    int32_t l = (int32_t)((uint32_t)xl + 0xFFFF) >> 16, rr = (int32_t)((uint32_t)xr + 0xFFFF) >> 16;
    if (l >= kRight) l = rr = kRight;
    else if (rr <= kLeft) l = rr = kLeft;
    else {
        if (l < kLeft) l = kLeft;
        if (rr > kRight) rr = kRight;
    }
    int32_t count = sub(rr, l);
    int32_t lcol = l;
    const int32_t prex = sub((int32_t)((uint32_t)l << 16), x0);
    const int32_t prey = sub((int32_t)((uint32_t)r0 << 16), y0);
    for (int k = 0; k < n; k++) {
        const int32_t a = (int32_t)(mul64(dAdy[k], prey) >> 16);
        const int32_t b = (int32_t)(mul64(dAdx_[k], prex) >> 16);
        a_[k] = add(add(b, a), attr[3 * k + top]);
    }
    int32_t x = l;
    floors();
    int32_t rowAt = mul(r0, kPitch);
    for (;;) {
        if (count > 0) span(rowAt + x, count);
        xl = add(xl, sl), xr = add(xr, sr);
        rowAt = add(rowAt, kPitch);
        row++;
        if (row == rowEnd) return;
        if (row == rowMid) {                    // the middle: the short edge's second half
            const int32_t pre = sub((int32_t)((uint32_t)row << 16), y1);
            const int32_t dy = sub(y1, y2), dx = sub(x1, x2);
            if (cont == 1) {
                if ((uint32_t)dy < 0x10000) {
                    xl = add((int32_t)(mul64(dx, pre) / dy), x1);
                } else {
                    sl = (int32_t)(((int64_t)dx << 16) / dy);
                    xl = add((int32_t)(mul64(sl, pre) >> 16), x1);
                    floors();
                }
            } else if (cont == 2) {
                if ((uint32_t)dy < 0x10000) {
                    xr = add((int32_t)(mul64(dx, pre) / dy), x1);
                } else {
                    sr = (int32_t)(((int64_t)dx << 16) / dy);
                    xr = add((int32_t)(mul64(sr, pre) >> 16), x1);
                }
            }
        }
        // 16429h: the next row; the attributes follow the left edge
        l = (int32_t)((uint32_t)xl + 0xFFFF) >> 16, rr = (int32_t)((uint32_t)xr + 0xFFFF) >> 16;
        int32_t step = 0;
        bool moved = false;
        if (l >= kRight) l = kRight, count = 0;
        else if (rr <= kLeft) l = kLeft, count = 0;
        else {
            if (l < kLeft) l = kLeft;
            if (rr > kRight) rr = kRight;
            count = sub(rr, l);
            step = sub(l, lcol);
            if (step != 0) {
                lcol = l;
                moved = true;
            }
        }
        x = l;
        for (int k = 0; k < n; k++) {
            uint32_t d;
            if (!moved) d = (uint32_t)dAdy[k];
            else if (step == floor1) d = (uint32_t)aFloor[k] + (uint32_t)dAdy[k] + (uint32_t)dAdx_[k];
            else if (step == floor0) d = (uint32_t)aFloor[k] + (uint32_t)dAdy[k];
            else d = (uint32_t)mul(dAdx_[k], step) + (uint32_t)dAdy[k];
            a_[k] = (int32_t)((uint32_t)a_[k] + d);
        }
    }
}

// --- the rotozoomer ------------------------------------------------------------------------

namespace {
// The texture mapper's registers: 8.16 fixed point split across two
// registers, EDX = (u fraction << 16) | ... | v integer (DL), ECX = (v
// fraction << 16) | ... | u integer (CL); each add carries the fraction's
// overflow into the other register's integer byte. BX is the texel's
// address (BH row, BL column); EDI the screen offset.
struct Regs {
    uint32_t eax = 0, ebx = 0, ecx = 0, edx = 0, edi = 0, esi = 0;
    uint32_t cf = 0;
    void add(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v + cf;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc8lo(uint32_t& r, uint32_t v) {
        const uint32_t s = (r & 0xFF) + (v & 0xFF) + cf;
        r = (r & ~0xFFu) | (s & 0xFF), cf = s >> 8;
    }
    void sbb8lo(uint32_t& r, uint32_t v) {
        const int32_t s = (int32_t)(r & 0xFF) - (int32_t)(v & 0xFF) - (int32_t)cf;
        r = (r & ~0xFFu) | (uint32_t)(s & 0xFF), cf = s < 0;
    }
    void bhdl() { ebx = (ebx & 0xFFFF00FFu) | (edx & 0xFF) << 8; }
    void blcl() { ebx = (ebx & 0xFFFFFF00u) | (ecx & 0xFF); }
    static uint32_t bswap(uint32_t v) { return v >> 24 | (v >> 8 & 0xFF00) | (v << 8 & 0xFF0000) | v << 24; }
};

// The immediates the mapper patches into its inner loop (14B14h), by the
// address they are patched at.
struct Imm {
    uint32_t i14B16, i14B23, i14B2B, i14B35, i14B3D, i14B49, i14B51, i14B5B, i14B63, i14B74, i14B7C, i14B86,
        i14B8E, i14B9A, i14BA2, i14BAC, i14BB4, i14BC6, i14BD3;
};

// 14B14h: ESI rows of 8 pixels from the texture to the screen.
void mapLoop(Regs& r, const Imm& I, const uint8_t* tex, uint8_t* fb) {
    auto al = [&](uint8_t v) { r.eax = (r.eax & ~0xFFu) | v; };
    auto ah = [&](uint8_t v) { r.eax = (r.eax & ~0xFF00u) | (uint32_t)v << 8; };
    auto texel = [&]() { return tex[r.ebx & 0xFFFF]; };
    auto store = [&](uint32_t at) { std::memcpy(fb + at, &r.eax, 4); };
    r.add(r.ecx, I.i14B16);
    r.bhdl();
    r.adc8lo(r.edx, 0);
    r.blcl();
    do {
        r.add(r.edx, I.i14B23);
        al(texel());
        r.adc(r.ecx, I.i14B2B);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B35);
        ah(texel());
        r.adc(r.ecx, I.i14B3D);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I.i14B49);
        ah(texel());
        r.adc(r.ecx, I.i14B51);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B5B);
        al(texel());
        r.adc(r.ecx, I.i14B63);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi);
        r.blcl();
        r.add(r.edx, I.i14B74);
        al(texel());
        r.adc(r.ecx, I.i14B7C);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14B86);
        ah(texel());
        r.adc(r.ecx, I.i14B8E);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I.i14B9A);
        ah(texel());
        r.adc(r.ecx, I.i14BA2);
        r.bhdl(), r.blcl();
        r.adc(r.edx, I.i14BAC);
        al(texel());
        r.adc(r.ecx, I.i14BB4);
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi + 4);
        r.blcl();
        r.add(r.edi, I.i14BC6);
    } while (--r.esi);
    const uint64_t d = (uint64_t)r.ecx - I.i14BD3;
    r.ecx = (uint32_t)d, r.cf = (uint32_t)(d >> 63);
    r.sbb8lo(r.edx, 0);
}
}  // namespace

// 14BDBh: the hexagons over the screen in blocks of 8x8 (40 x 25 at RES 1), from (U0,
// V0) stepping (DU, DV) a pixel and (DUY, DVY) a row (16.16).
void Knot::mapper(uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy, int32_t dvy) {
    const int32_t bx = 0x28 * res_, by = 0x19 * res_, pitch = w_;
    Imm I;
    I.i14BC6 = pitch;
    const uint32_t A = (uint32_t)du << 16 | (((uint32_t)dv >> 16) & 0xFF);
    I.i14B23 = I.i14B35 = I.i14B49 = I.i14B5B = I.i14B74 = I.i14B86 = I.i14B9A = A;
    {
        uint32_t e = (A & ~0xFFu) | ((((uint32_t)dvy - 7u * (uint32_t)dv) >> 16) & 0xFF);
        e = e - ((uint32_t)du << 19) + ((uint32_t)duy << 16);
        I.i14BAC = e;
    }
    const uint32_t I0 = (uint32_t)dv << 16;
    I.i14B16 = I.i14BD3 = I0;
    const uint32_t B = I0 | (((uint32_t)du >> 16) & 0xFF);
    I.i14B2B = I.i14B3D = I.i14B51 = I.i14B63 = I.i14B7C = I.i14B8E = B;
    {
        uint32_t e = (B & ~0xFFu) | ((((uint32_t)duy - 7u * (uint32_t)du) >> 16) & 0xFF);
        I.i14BB4 = e;
        e = e - ((uint32_t)dv << 19) + ((uint32_t)dvy << 16);
        e = (e & ~0xFFu) | (((uint32_t)du >> 16) & 0xFF);
        I.i14BA2 = e;
    }
    const uint32_t du8 = (uint32_t)du << 3, dv8 = (uint32_t)dv << 3, duy8 = (uint32_t)duy << 3, dvy8 = (uint32_t)dvy << 3;
    // a step (EDX += a high part, CL += its byte; ECX likewise, DL)
    struct Step {
        uint32_t ed, ec, ad;
        uint8_t bc, bd;
    };
    auto split = [](uint32_t v, uint32_t& hiPart, uint8_t& byte) {
        const uint32_t r = v << 16 | v >> 16;
        byte = (uint8_t)r;
        hiPart = r & 0xFFFF0000u;
    };
    Regs r;
    r.ebx = 0, r.edi = 0;
    r.edx = u0 << 16 | u0 >> 16;
    r.ecx = v0 << 16 | v0 >> 16;
    {
        const uint32_t dl = r.edx & 0xFF, cl = r.ecx & 0xFF;
        r.edx = (r.edx & ~0xFFu) | cl, r.ecx = (r.ecx & ~0xFFu) | dl;
    }
    auto step = [&](const Step& s) {
        r.add(r.edx, s.ed);
        r.adc8lo(r.ecx, s.bc);
        r.add(r.ecx, s.ec);
        r.adc8lo(r.edx, s.bd);
        r.edi += s.ad;
    };
    const int32_t a1 = (int32_t)du8 < 0 ? -(int32_t)du8 : (int32_t)du8;
    const int32_t a2 = (int32_t)dv8 < 0 ? -(int32_t)dv8 : (int32_t)dv8;
    if (a1 > a2) {                              // across, block by block
        Step col, row;
        split(du8 - duy8, col.ed, col.bc);
        split(dv8 - dvy8, col.ec, col.bd);
        col.ad = (uint32_t)(1 - pitch) << 3;
        split((uint32_t)(-bx) * du8 + duy8, row.ed, row.bc);
        split((uint32_t)(-bx) * dv8 + dvy8, row.ec, row.bd);
        row.ad = (uint32_t)(pitch - bx) << 3;
        for (int32_t y = by; y; y--) {
            for (int32_t x = bx; x; x--) {
                r.esi = 8;
                mapLoop(r, I, hexes_, fb_);
                step(col);
            }
            step(row);
        }
    } else {                                    // down, a column of blocks at a time
        Step col;
        split((uint32_t)(-by) * duy8 + du8, col.ed, col.bc);
        split((uint32_t)(-by) * dvy8 + dv8, col.ec, col.bd);
        col.ad = ((uint32_t)(-by) * (uint32_t)pitch + 1) << 3;
        for (int32_t x = bx; x; x--) {
            r.esi = (uint32_t)by << 3;
            mapLoop(r, I, hexes_, fb_);
            step(col);
        }
    }
}

// 1B8E3h: the hexagons turned by ANGLE (radians) and zoomed by ZOOM (16.16,
// negative: mirrored), about the screen point (CX, CY); pixels are 5/6 as
// wide as tall.
void Knot::roto(float angle, int32_t zoom, int32_t cx, int32_t cy) {
    F.fld(angle);
    F.fcos();
    const double dz = (double)(X)zoom;
    F.fmul(dz);
    F.fmul(0.8333333333333333);
    F.fld(angle);
    F.fxch();
    F.frndint();
    const int64_t a = x87::fist64(F.pop());
    F.fsin();
    F.fmul(dz);
    F.fmul(0.8333333333333333);
    F.fld(angle);
    F.fld((X)(int32_t)(0u - (uint32_t)zoom));
    F.fxch(2);
    F.frndint();
    const int64_t b = x87::fist64(F.pop());
    F.fxch();
    const double mz = F.fstpd();
    F.fsin();
    F.fmul(mz);
    F.fld(angle);
    F.fxch();
    F.frndint();
    const int64_t c = x87::fist64(F.pop());
    F.fcos();
    F.fmul(dz);
    F.frndint();
    const int64_t d = x87::fist64(F.pop());
    const uint32_t ncx = 0u - (uint32_t)cx;
    const uint32_t u0 = ncx * (uint32_t)a - (uint32_t)cy * (uint32_t)c;
    const uint32_t v0 = ncx * (uint32_t)b - (uint32_t)cy * (uint32_t)d;
    mapper(u0, v0, (int32_t)a, (int32_t)b, (int32_t)c, (int32_t)d);
}

}  // namespace knot
