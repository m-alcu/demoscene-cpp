// The 3D engine (16078h-18373h).
//
// The scene (2B464h, 16FC4h returns it): +0 vertices, +4 faces, +8 world
// vertices (3 floats), +C normals, +10 screen positions (two 16.16 ints:
// row, column), +14 texture coordinates (16.16 ints), +18 more texture
// coordinates, +1C a visible flag per vertex, +20 faces (12 bytes: three
// vertex words, the material, a back-face flag, the depth as a float),
// +24 pointers to the faces (sorted far to near), +28 the textures (64K
// pieces of the big buffer), +30/+34 the projection's scales, +38/+3C its
// centre (16.16), +40/+44 the view's half-width/height slopes, +48 the near
// plane, +4C/+50, +54/+58 texture scrolling.
//
// A polygon is drawn by the fillers (16078h: two attributes, 16601h: four)
// from a block of state at 282A0h whose +4C.. is the descriptor 282ECh:
// +4C the screen, +50 its pitch, +54/+58 columns, +5C/+60 rows (the clip),
// +64 the span routine, +68 the vertex data (three rows, three columns,
// then three values of each attribute), +6C/+70 the textures.
#include "demo.h"

namespace lasse {

namespace {
constexpr uint32_t S = 0x2B464;         // the scene
constexpr uint32_t P = 0x282A0;         // the fillers' state
inline int64_t mul64(int32_t a, int32_t b) { return (int64_t)a * b; }
// 32-bit arithmetic as the CPU does it (wrapping)
inline int32_t sub(int32_t a, int32_t b) { return (int32_t)((uint32_t)a - (uint32_t)b); }
inline int32_t add(int32_t a, int32_t b) { return (int32_t)((uint32_t)a + (uint32_t)b); }
inline int32_t mul(int32_t a, int32_t b) { return (int32_t)((uint32_t)a * (uint32_t)b); }
}  // namespace

// --- scene memory ---------------------------------------------------------------

void Demo::sceneAlloc(uint32_t verts, uint32_t faces) {       // 16FCAh
    const uint32_t b12 = verts * 12, b8 = verts * 8;
    m_.w32(S + 0x08, malloc(b12));
    m_.w32(S + 0x0C, malloc(b12));
    m_.w32(S + 0x10, malloc(b8));
    m_.w32(S + 0x14, malloc(b8));
    m_.w32(S + 0x18, malloc(b8));
    m_.w32(S + 0x1C, malloc(verts));
    m_.w32(S + 0x20, malloc(faces * 12));
    m_.w32(S + 0x24, malloc(faces * 4));
}

void Demo::sceneFree() {                                       // 17038h
    for (uint32_t o = 0x08; o <= 0x24; o += 4) free(m_.r32(S + o));
    for (uint32_t o = 0x08; o <= 0x24; o += 4) m_.w32(S + o, 0);
}

// --- objects ------------------------------------------------------------------------

// 17BCCh: faces from packed data: count, then per face three vertex deltas
// (a byte each, a running sum) and a high byte, the material byte; faces
// after the first of a strip share two vertices with the one before.
void Demo::loadFaces(uint32_t obj, uint32_t data) {
    m_.w32(obj, m_.r32(data));
    const uint32_t strips = m_.r32(data + 4);
    uint32_t lens = data + 8;                        // [EBP-1Ch]: a strip's length
    uint32_t mats = lens + strips;                   // EDI then EBX: the materials
    uint32_t hi = mats + strips;                     // EDX: high bytes
    uint32_t lo = 2 * strips + m_.r32(obj) + hi;     // ESI: low bytes (deltas)
    uint32_t f = malloc(m_.r32(obj) * 12);
    m_.w32(obj + 4, f);
    uint8_t acc = 0;
    for (uint32_t s = 0; s < strips; s++, lens++, mats++) {
        for (int k = 0; k < 3; k++) {
            acc = (uint8_t)(acc + m_.r8(lo++));
            m_.w16(f + 2 * k, (uint16_t)(m_.r8(hi++) << 8) + acc);
        }
        f += 12;
        m_.w8(f - 6, m_.r8(mats));
        for (uint32_t n = 1; n < m_.r8(lens); n++) {
            if (m_.r8(hi) & 0x80) {
                m_.w16(f, m_.r16(f - 0x0C));
                m_.w16(f + 2, m_.r16(f - 8));
            } else {
                m_.w16(f, m_.r16(f - 8));
                m_.w16(f + 2, m_.r16(f - 0x0A));
            }
            acc = (uint8_t)(acc + m_.r8(lo++));
            uint16_t v = (uint16_t)(m_.r8(hi++) << 8) + acc;
            v &= 0x7FFF;
            m_.w16(f + 4, v);
            f += 12;
            m_.w8(f - 6, m_.r8(mats));
        }
    }
}

// 17D12h: vertices from packed data: count, a scale, then for x, y and z
// the deltas (signed bytes, a running sum) of every vertex.
void Demo::loadVerts(uint32_t obj, uint32_t data) {
    m_.w32(obj, m_.r32(data));
    data += 4;
    const float scale = m_.f32(data);
    m_.w32(obj + 4, malloc(m_.r32(obj) * 12));
    m_.w32(obj + 8, malloc(m_.r32(obj) * 12));
    m_.w32(obj + 0x0C, malloc(m_.r32(obj) * 8));
    data += 4;
    for (uint32_t c = 0; c != 0x0C; c += 4) {
        int8_t acc = 0;
        for (uint32_t i = 0, o = 0; i < m_.r32(obj); i++, o += 12) {
            acc = (int8_t)(acc + m_.s8(data++));
            m_.wf32(m_.r32(obj + 4) + o + c, (float)((X)(int16_t)acc * (X)scale));
        }
    }
}

// 17D95h: the vertex normals of OBJ (verts) from FACES: each face's
// normal added to its vertices, then normalized (if long enough).
void Demo::normals(uint32_t obj, uint32_t faces) {
    Frame fr(*this, 4, 0x3C);
    const uint32_t ebp = fr.ebp;
    memset(m_.r32(obj + 8), 0, m_.r32(obj) * 12);
    const uint32_t n = ebp - 0x30, e1 = ebp - 0x3C, e2 = ebp - 0x24;
    for (uint32_t i = 0, o = 0; i < m_.r32(faces); i++, o += 12) {
        const uint32_t fa = m_.r32(faces + 4) + o;
        const uint32_t vb = m_.r32(obj + 4);
        const uint32_t a = vb + m_.r16(fa) * 12, b = vb + m_.r16(fa + 2) * 12, c = vb + m_.r16(fa + 4) * 12;
        vsub(b, a, e1);
        vsub(c, a, e2);
        cross(e1, e2, n);
        len2(n);
        if (F.fcomp(m_.f64(0x28AC8)).ja()) normalize(n, n);
        const uint32_t nb = m_.r32(obj + 8);
        const uint32_t na = nb + m_.r16(fa) * 12, nbb = nb + m_.r16(fa + 2) * 12, nc = nb + m_.r16(fa + 4) * 12;
        vadd(na, n, na);
        vadd(nbb, n, nbb);
        vadd(nc, n, nc);
    }
    for (uint32_t i = 0, o = 0; i < m_.r32(obj); i++, o += 12) {
        len2(m_.r32(obj + 8) + o);
        if (F.fcomp(m_.f64(0x28AC8)).ja()) normalize(m_.r32(obj + 8) + o, m_.r32(obj + 8) + o);
    }
}

void Demo::copyObject(uint32_t dst, uint32_t src) {             // 17EC6h
    m_.w32(dst, m_.r32(src));
    m_.w32(dst + 4, malloc(m_.r32(src) * 12));
    m_.w32(dst + 8, malloc(m_.r32(dst) * 12));
    m_.w32(dst + 0x0C, malloc(m_.r32(dst) * 8));
    copy(m_.r32(dst + 4), m_.r32(src + 4), m_.r32(dst) * 12);
    copy(m_.r32(dst + 8), m_.r32(src + 8), m_.r32(dst) * 12);
    copy(m_.r32(dst + 0x0C), m_.r32(src + 0x0C), m_.r32(dst) * 8);
}

void Demo::freeFaces(uint32_t obj) {                            // 17F21h
    free(m_.r32(obj + 4));
    m_.w32(obj + 4, 0);
    m_.w32(obj, 0);
}

void Demo::freeVerts(uint32_t obj) {                            // 17F3Bh
    free(m_.r32(obj + 4));
    free(m_.r32(obj + 8));
    free(m_.r32(obj + 0x0C));
    m_.w32(obj + 4, 0), m_.w32(obj + 8, 0), m_.w32(obj + 0x0C, 0);
    m_.w32(obj, 0);
}

// --- the frame ---------------------------------------------------------------------

// 17658h: a camera at EYE looking at AT, UP up, rolled by ANGLE: the
// matrix at M (rows: right, forward, up; the translation -eye in view space).
void Demo::camera(uint32_t m, uint32_t eye, uint32_t at, uint32_t up, float angle) {
    Frame fr(*this, 2, 0x6C);
    const uint32_t ebp = fr.ebp;
    // pushed: EAX (M) at EBP-70h, EDX (EYE) at EBP-74h
    m_.w32(ebp - 0x70, m), m_.w32(ebp - 0x74, eye);
    vsub(at, eye, ebp - 0x30);
    cross(ebp - 0x30, up, ebp - 0x18);
    cross(ebp - 0x18, ebp - 0x30, ebp - 0x24);
    normalize(ebp - 0x18, m);
    normalize(ebp - 0x30, m + 0x10);
    normalize(ebp - 0x24, m + 0x20);
    copy(ebp - 0x3C, 0x28314, 12);
    F.fld(angle);
    axisAngle(ebp - 0x3C, ebp - 0x6C);
    matmul(ebp - 0x6C, m, m);
    rotate(eye, m, ebp - 0x0C, 1);
    F.fld(m_.f32(ebp - 0x0C)), F.fchs(), m_.wf32(m + 0x0C, F.fstpf());
    F.fld(m_.f32(ebp - 0x08)), F.fchs(), m_.wf32(m + 0x1C, F.fstpf());
    F.fld(m_.f32(ebp - 0x04)), F.fchs(), m_.wf32(m + 0x2C, F.fstpf());
    len2(ebp - 0x30);                           // left on the x87 stack
}

// 17710h: the screen: W x H (the clip, the pitch), the centre (16.16
// floats at +38h/+3Ch), +4Ch from K (the EBX the callers leave).
void Demo::viewport(int32_t w, int32_t h, int32_t k) {
    const float fh = (float)(X)(int32_t)((uint32_t)h << 15);
    m_.wf32(S + 0x50, fh);
    m_.wf32(S + 0x4C, (float)(X)(int32_t)((uint32_t)k << 15));
    m_.wf32(S + 0x3C, fh);
    m_.wf32(S + 0x38, (float)(X)(int32_t)((uint32_t)w << 15));
    m_.w32(0x282F4, 0);
    m_.w32(0x282FC, 0);
    m_.w32(0x282F8, w);
    m_.w32(0x28300, h);
    m_.w32(0x282F0, w);
}

// 17779h: the projection for a field of view FOV (radians... the code's
// scale) and a near plane NEAR; empties the scene.
void Demo::projection(float fov, uint32_t nearBits) {
    F.fld(m_.f32(0x2B494)), F.fdiv(m_.f32(0x2B49C));
    F.fld(m_.f32(0x2B498)), F.fdiv(m_.f32(0x2B4A0));
    F.fld(fov);
    F.fld(m_.f32(0x2B4B0)), F.fmulst(1);
    F.fld(m_.f32(0x2B4B4));
    m_.w32(S + 4, 0);
    m_.w32(S + 0x48, nearBits);
    m_.w32(S, 0);
    F.fmulp(2);
    m_.wf32(S + 0x30, F.fstpf());
    m_.wf32(S + 0x34, F.fstpf());
    F.fxch();
    m_.wf32(S + 0x40, F.fstpf());
    m_.wf32(S + 0x44, F.fstpf());
}

// 177D3h: OBJ's vertices through matrix M into the scene (at its vertex
// count), its normals rotated; its texture coordinates too if TEX.
void Demo::place(uint32_t obj, uint32_t mx, uint32_t tex) {
    const uint32_t at = m_.r32(S) * 12;
    transform(m_.r32(obj + 4), mx, m_.r32(S + 8) + at, m_.r32(obj));
    rotate(m_.r32(obj + 8), mx, m_.r32(S + 0x0C) + m_.r32(S) * 12, m_.r32(obj));
    if (tex) copy(m_.r32(S + 0x18) + m_.r32(S) * 8, m_.r32(obj + 0x0C), m_.r32(obj) * 8);
}

// 17840h: A and B morphed by T (B T + A (1 - T)), then placed.
void Demo::morph(uint32_t a, uint32_t b, float t, uint32_t mx, uint32_t tex) {
    uint32_t tb;
    std::memcpy(&tb, &t, 4);
    if (!(tb & 0x7FFFFFFF)) return place(a, mx, tex);
    if (tb == 0x3F800000) return place(b, mx, tex);
    const uint32_t vat = m_.r32(S + 8) + m_.r32(S) * 12, nat = m_.r32(S + 0x0C) + m_.r32(S) * 12;
    F.fld(t);
    lerp(m_.r32(b + 4), m_.r32(a + 4), vat, m_.r32(a));
    F.fld(t);
    lerp(m_.r32(b + 8), m_.r32(a + 8), nat, m_.r32(a));
    transform(vat, mx, vat, m_.r32(a));
    rotate(nat, mx, nat, m_.r32(a));
    if (tex) copy(m_.r32(S + 0x18) + m_.r32(S) * 8, m_.r32(a + 0x0C), m_.r32(a) * 8);
}

void Demo::addObject(uint32_t faces, uint32_t verts, uint32_t mx, uint32_t flags) {   // 1791Fh
    place(verts, mx, flags & 0x10);
    addFaces(m_.r32(faces + 4), m_.r32(faces), m_.r32(verts), flags);
}

// 170D2h: the faces of the object just placed (N faces at FACES, its
// vertices from the scene's count on, NV of them) into the scene: back
// faces dropped (unless FLAGS bit 0), faces outside the view's sides
// (bits 2, 3) dropped, faces across the near plane (bit 1) cut, the new
// vertices appended.
void Demo::addFaces(uint32_t faces, uint32_t n, uint32_t nv, uint32_t flags) {
    Frame fr(*this, 2, 0x6C);
    const uint32_t ebp = fr.ebp;
    m_.w32(ebp - 0x70, faces), m_.w32(ebp - 0x74, n);
    const uint32_t rec = ebp - 0x54;                // the face being made (12 bytes)
    uint32_t ptrs = m_.r32(S + 0x24) + m_.r32(S + 4) * 4;
    uint32_t recs = m_.r32(S + 0x20) + m_.r32(S + 4) * 12;
    const uint32_t base = m_.r32(S);
    memset(m_.r32(S + 0x1C) + base, 0, nv);
    m_.w32(S, m_.r32(S) + nv);
    auto V = [&](uint32_t i) { return m_.r32(S + 8) + i * 12; };
    auto emit = [&]() {                             // 172D8h
        m_.w8(m_.r32(S + 0x1C) + m_.r16(rec), 1);
        m_.w8(m_.r32(S + 0x1C) + m_.r16(rec + 2), 1);
        m_.w8(m_.r32(S + 0x1C) + m_.r16(rec + 4), 1);
        m_.w32(ptrs, recs);
        ptrs += 4;
        copy(recs, rec, 12);
        recs += 12;
        m_.w32(S + 4, m_.r32(S + 4) + 1);
    };
    for (uint32_t i = 0; i < n; i++, faces += 12) {
        m_.w16(rec, m_.r16(faces) + base);
        m_.w16(rec + 2, m_.r16(faces + 2) + base);
        const uint16_t v2 = (uint16_t)(m_.r16(faces + 4) + base);
        m_.w16(rec + 4, v2);
        triple(V(m_.r16(rec)), V(m_.r16(rec + 2)), V(v2));
        const float tp = F.fstpf();
        uint32_t tb;
        std::memcpy(&tb, &tp, 4);
        if (!(tb & 0x7FFFFFFF)) continue;
        F.fldz();
        const bool front = F.fcomp(tp).jb();        // setb: 0 < tp
        m_.w8(rec + 7, front);
        if (!(flags & 1) && front) continue;
        const uint32_t a = V(m_.r16(rec)), b = V(m_.r16(rec + 2)), c = V(m_.r16(rec + 4));
        m_.w8(rec + 6, m_.r8(faces + 6));
        len2(a);
        float d = F.fstpf();
        len2(b);
        F.fadd(d);
        d = F.fstpf();
        len2(c);
        F.fadd(d);
        m_.wf32(rec + 8, F.fstpf());
        if (!(flags & 0x0E)) {
            emit();
            continue;
        }
        auto outside = [&](uint32_t k, uint32_t comp) {
            for (uint32_t v : {a, b, c}) {
                F.fld(m_.f32(S + k));
                F.fmul(m_.f32(v + comp));
                const double y = (double)m_.f32(v + 4);
                F.fabs_();
                if (F.fcomp(y).jbe()) return false;
            }
            return true;
        };
        if ((flags & 4) && outside(0x40, 0)) continue;
        if ((flags & 8) && outside(0x44, 8)) continue;
        if (!(flags & 2)) {
            emit();
            continue;
        }
        uint32_t behind = 0;
        if (F.fld(m_.f32(S + 0x48)), F.fcomp(m_.f32(a + 4)).ja()) behind = 1;
        if (F.fld(m_.f32(S + 0x48)), F.fcomp(m_.f32(b + 4)).ja()) behind |= 2;
        if (F.fld(m_.f32(S + 0x48)), F.fcomp(m_.f32(c + 4)).ja()) behind |= 4;
        if (behind == 0) {
            emit();
            continue;
        }
        if (behind == 7) continue;
        const uint32_t w0 = m_.r16(rec), w1 = m_.r16(rec + 2), w2 = m_.r16(rec + 4);
        uint32_t A, B, C, D;                        // [EBP-0Ch], -10h, -20h, -18h
        switch (behind) {
        case 1: A = w2, B = w0, C = w0, D = w1; break;
        case 2: A = w0, B = w1, C = w1, D = w2; break;
        case 3: A = w2, B = w0, C = w1, D = w2; break;
        case 4: A = w1, B = w2, C = w2, D = w0; break;
        case 5: A = w1, B = w2, C = w0, D = w1; break;
        default: A = w0, B = w1, C = w2, D = w0; break;
        }
        // the two crossing points: B..A and C..D at the near plane
        auto cut = [&](uint32_t from, uint32_t to, uint32_t slot) {
            const uint32_t p = m_.r32(S + 8) + from * 12, q = m_.r32(S + 8) + to * 12;
            F.fld(m_.f32(p + 4)), F.fsub(m_.f32(q + 4));
            F.fld(m_.f32(p + 4)), F.fsub(m_.f32(S + 0x48));
            F.fdivrp();
            const float t = F.fstpf();
            F.fld1(), F.fsub(t);
            vscale(p, ebp - 0x6C);
            F.fld(t);
            vscale(m_.r32(S + 8) + to * 12, ebp - 0x60);
            vadd(ebp - 0x6C, ebp - 0x60, m_.r32(S + 8) + slot * 12);
            F.fld1(), F.fsub(t);
            vscale(m_.r32(S + 0x0C) + from * 12, ebp - 0x6C);
            F.fld(t);
            vscale(m_.r32(S + 0x0C) + to * 12, ebp - 0x60);
            vadd(ebp - 0x6C, ebp - 0x60, m_.r32(S + 0x0C) + slot * 12);
        };
        cut(B, A, m_.r32(S));
        cut(C, D, m_.r32(S) + 1);
        if (behind == 1 || behind == 2 || behind == 4) {
            // 1752Bh: one behind: (A, new2, D) and then (A, new1, new2)
            m_.w16(rec, A);
            m_.w8(m_.r32(S + 0x1C) + D, 1);
            m_.w16(rec + 2, m_.r16(S) + 1);
            m_.w16(rec + 4, D);
            m_.w32(ptrs, recs);
            ptrs += 4;
            copy(recs, rec, 12);
            recs += 12;
            m_.w32(S + 4, m_.r32(S + 4) + 1);
        }
        // 172C2h: (A, new1, new2)
        m_.w16(rec, A);
        m_.w16(rec + 2, m_.r16(S));
        m_.w16(rec + 4, m_.r16(S) + 1);
        m_.w32(S, m_.r32(S) + 2);
        emit();
    }
}

// --- drawing ----------------------------------------------------------------------------

// 16CA4h: the face pointers from LO to HI (inclusive) sorted by depth, far
// first (the depth's bits compared as unsigned).
void Demo::sortFaces(uint32_t lo, uint32_t hi) {
    uint32_t esi = lo, edi = hi;
    const uint32_t pivot = m_.r32(m_.r32(esi + (((edi - esi) >> 1) & ~3u)) + 8);
    for (;;) {
        while (m_.r32(m_.r32(esi) + 8) > pivot) {
            esi += 4;
            if (!(esi < hi)) break;
        }
        while (m_.r32(m_.r32(edi) + 8) < pivot) {
            edi -= 4;
            if (!(edi > lo)) break;
        }
        if (esi > edi) break;
        const uint32_t t = m_.r32(esi);
        m_.w32(esi, m_.r32(edi));
        m_.w32(edi, t);
        esi += 4, edi -= 4;
    }
    if (edi > lo) sortFaces(lo, edi);
    if (esi < hi) sortFaces(esi, hi);
}

// 1759Ch: the visible vertices projected (16.16 row, column)
void Demo::project() {
    uint32_t v = m_.r32(S + 8), s = m_.r32(S + 0x10), fl = m_.r32(S + 0x1C);
    for (uint32_t i = 0; i < m_.r32(S); i++, v += 12, s += 8, fl++) {
        if (!m_.r8(fl)) continue;
        F.fld(m_.f32(S + 0x34)), F.fmul(m_.f32(v + 8)), F.fdiv(m_.f32(v + 4)), F.fsubr(m_.f32(S + 0x3C));
        F.frndint();
        m_.w32(s, F.fistp());
        F.fld(m_.f32(S + 0x30)), F.fmul(m_.f32(v)), F.fdiv(m_.f32(v + 4)), F.fadd(m_.f32(S + 0x38));
        F.frndint();
        m_.w32(s + 4, F.fistp());
    }
}

// 175F0h: environment mapping: texture coordinates from the normals' x and z
void Demo::envMap() {
    uint32_t n = m_.r32(S + 0x0C), t = m_.r32(S + 0x14), fl = m_.r32(S + 0x1C);
    for (uint32_t i = 0; i < m_.r32(S); i++, n += 12, t += 8, fl++) {
        if (!m_.r8(fl)) continue;
        F.fld(m_.f32(n)), F.fmul(m_.f32(0x28ABC)), F.fmul(m_.f32(0x28AC0)), F.fadd(m_.f32(0x28AC4));
        F.frndint();
        m_.w32(t, F.fistp());
        F.fld(m_.f32(n + 8)), F.fmul(m_.f32(0x28ABC)), F.fmul(m_.f32(0x28AC0)), F.fadd(m_.f32(0x28AC4));
        F.frndint();
        m_.w32(t + 4, F.fistp());
    }
}

// 16D0Fh: a face's three values from ARRAY (pairs of ints) to DST: the
// first of each pair to DST+0, the second to DST+0Ch; with SH1/SH2 the
// second and third made to wrap around the first (texture coordinates).
void Demo::fetch(uint32_t face, uint32_t array, uint32_t dst, uint8_t sh1, uint8_t sh2) {
    for (int k = 0; k < 3; k++) {
        const uint32_t i = m_.r16(face + 2 * k);
        m_.w32(dst + 4 * k, m_.r32(array + i * 8));
        m_.w32(dst + 0x0C + 4 * k, m_.r32(array + i * 8 + 4));
    }
    auto wrap = [&](uint32_t d, uint8_t cl) {
        cl &= 31;
        uint32_t a = m_.r32(d), b = m_.r32(d + 4), c = m_.r32(d + 8);
        a <<= cl, b <<= cl, c <<= cl;
        b -= a, c -= a;
        a = (uint32_t)((int32_t)a >> cl), b = (uint32_t)((int32_t)b >> cl), c = (uint32_t)((int32_t)c >> cl);
        b += a, c += a;
        m_.w32(d, a), m_.w32(d + 4, b), m_.w32(d + 8, c);
    };
    if (sh1) wrap(dst, sh1);
    if (sh2) wrap(dst + 0x0C, sh2);
}

// 17942h: the scene drawn: faces sorted, vertices projected, environment
// mapped, each face filled with the textures its material picks.
void Demo::render() {
    Frame fr(*this, 5, 0x60);
    const uint32_t ebp = fr.ebp;
    const uint32_t vd = ebp - 0x60;
    if (m_.r32(S + 4)) sortFaces(m_.r32(0x2B488), m_.r32(0x2B488) + m_.r32(0x2B468) * 4 - 4);
    project();
    envMap();
    const uint32_t tex = m_.r32(S + 0x28);
    for (uint32_t i = 0; i < m_.r32(S + 4); i++) {
        const uint32_t face = m_.r32(m_.r32(S + 0x24) + i * 4);
        m_.w32(0x282EC + 0x1C, vd);
        fetch(face, m_.r32(S + 0x10), vd, 0, 0);
        fetch(face, m_.r32(S + 0x14), vd + 0x18, 0, 0);
        bool two = false;
        const uint8_t mat = m_.r8(face + 6);
        auto setTex = [&](uint32_t t) { m_.w32(0x282EC + 0x20, t); };
        if (mat == 1 || mat == 2) {
            for (int k = 0; k < 3; k++) {
                m_.w32(vd + 0x18 + 4 * k, m_.r32(vd + 0x18 + 4 * k) + m_.r32(S + 0x54));
                m_.w32(vd + 0x24 + 4 * k, m_.r32(vd + 0x24 + 4 * k) + m_.r32(S + 0x58));
            }
            setTex(mat == 1 ? tex : tex + 0x10000);
        } else if (mat == 3) {
            setTex(tex + 0xD0000);
        } else if (mat == 4) {
            setTex(tex + 0xE0000);
        } else if (mat == 5) {
            setTex(tex + 0x30000);
        } else if (mat == 6) {
            setTex(tex + 0x30000);
            m_.w32(0x282EC + 0x24, tex + 0x40000);
            fetch(face, m_.r32(S + 0x18), vd + 0x30, 0, 0);
            two = true;
        } else if (mat == 0x14) {
            fetch(face, m_.r32(S + 0x18), vd + 0x30, 8, 8);
            setTex(tex + 0x60000);
            m_.w32(0x282EC + 0x24, tex + 0x70000);
            two = true;
        } else if (mat == 0x1E) {
            setTex(tex + (m_.r8(face + 7) ? 0xB0000 : 0x90000));
        } else if (mat == 0x1F) {
            setTex(tex + (m_.r8(face + 7) ? 0xB0000 : 0xA0000));
        } else if (mat == 0x28) {
            setTex(tex + 0xF0000);
        }
        if (!two) {
            m_.w32(0x282EC + 0x18, 0x16BD8);
            fill(2);
        } else {
            m_.w32(0x282EC + 0x18, 0x16C19);
            fill(4);
        }
    }
}

// --- the polygon fillers (16078h, 16601h) -----------------------------------------------

// 16BD8h, 16C19h: a span of ECX pixels at EBX: texture 1 at (+4, +8)
// stepping (-14h, -10h), 16.16 packed into two registers with carries
// between the halves; with two textures the second, at (+0Ch, +10h)
// stepping (-0Ch, -8), added on.
void Demo::span(uint32_t dst, uint32_t count) {
    auto pass = [&](uint32_t u0, uint32_t v0, uint32_t du0, uint32_t dv0, uint32_t tex, bool add) {
        uint32_t edx = (u0 << 16) | (u0 >> 16), ebx = (v0 << 16) | (v0 >> 16);
        uint32_t esi = (du0 << 16) | (du0 >> 16), edi = (dv0 << 16) | (dv0 >> 16);
        const uint32_t dx = edx & 0xFFFF, bx = ebx & 0xFFFF;     // xchg dx, bx
        edx = (edx & 0xFFFF0000u) | bx, ebx = (ebx & 0xFFFF0000u) | dx;
        const uint32_t di = edi & 0xFFFF, si = esi & 0xFFFF;     // xchg di, si
        edi = (edi & 0xFFFF0000u) | si, esi = (esi & 0xFFFF0000u) | di;
        uint32_t eax = (tex & 0xFFFF0000u) | (edx & 0xFF) << 8 | (ebx & 0xFF);
        ebx = (ebx & 0xFFFF0000u) | ((ebx - edi) & 0xFFFF);     // sub bx, di
        uint64_t s = (uint64_t)ebx + edi;
        ebx = (uint32_t)s;
        uint32_t cf = (uint32_t)(s >> 32);
        uint32_t p = dst;
        for (uint32_t n = count; n; n--) {
            if (!add) {
                s = (uint64_t)edx + esi + cf;
                edx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                const uint8_t al = m_.r8(eax);
                s = (uint64_t)ebx + edi + cf;
                ebx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                eax = (eax & 0xFFFF00FFu) | (edx & 0xFF) << 8;
                m_.w8(p++, al);
                eax = (eax & 0xFFFFFF00u) | (ebx & 0xFF);
            } else {
                s = (uint64_t)edx + esi;
                edx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                const uint8_t al = m_.r8(eax);
                s = (uint64_t)ebx + edi + cf;
                ebx = (uint32_t)s, cf = (uint32_t)(s >> 32);
                eax = (eax & 0xFFFF00FFu) | (edx & 0xFF) << 8;
                edx = (edx & ~0xFFu) | ((edx + cf) & 0xFF);            // adc dl, 0
                m_.w8(p, m_.r8(p) + al);
                p++;
                eax = (eax & 0xFFFFFF00u) | (ebx & 0xFF);
            }
        }
    };
    pass(m_.r32(P + 4), m_.r32(P + 8), m_.r32(P - 0x14), m_.r32(P - 0x10), m_.r32(P + 0x6C), false);
    if (m_.r32(P + 0x64) == 0x16C19)
        pass(m_.r32(P + 0x0C), m_.r32(P + 0x10), m_.r32(P - 0x0C), m_.r32(P - 8), m_.r32(P + 0x70), true);
}

void Demo::fill(int n) {
    auto G = [&](int32_t o) { return m_.s32(P + o); };
    auto U = [&](int32_t o) { return m_.r32(P + o); };
    auto W = [&](int32_t o, uint32_t v) { m_.w32(P + o, v); };
    const uint32_t vd = U(0x68);
    int32_t y0 = m_.s32(vd), y1 = m_.s32(vd + 4), y2 = m_.s32(vd + 8);
    int32_t x0 = m_.s32(vd + 0x0C), x1 = m_.s32(vd + 0x10), x2 = m_.s32(vd + 0x14);
    if (y0 > y1) {
        W(-0x80, y1 > y2 ? 0x20 : 0x1C);
        std::swap(y0, y1), std::swap(x0, x1);
    } else {
        W(-0x80, y0 > y2 ? 0x20 : 0x18);
    }
    if (y0 > y2) std::swap(y0, y2), std::swap(x0, x2);
    if (y1 > y2) std::swap(y1, y2), std::swap(x1, x2);
    W(-0x34, y0), W(-0x30, y1), W(-0x2C, y2);
    W(-0x28, x0), W(-0x24, x1), W(-0x20, x2);
    int32_t r0 = (int32_t)((uint32_t)y0 + 0xFFFF) >> 16, r1 = (int32_t)((uint32_t)y1 + 0xFFFF) >> 16,
            r2 = (int32_t)((uint32_t)y2 + 0xFFFF) >> 16;
    if (r0 >= G(0x60) || r2 <= G(0x5C)) return;
    if (r0 < G(0x5C)) r0 = G(0x5C);
    if (r2 > G(0x60)) r2 = G(0x60);
    if (r0 == r2) return;
    W(-0x7C, r0), W(-0x78, r1), W(-0x74, r2);
    const uint32_t vo = vd - P;                     // EDI: the vertex data from P
    W(-0x80, U(-0x80) + vo);
    // the gradients: a determinant, shifted to fit
    {
        const int32_t dy20 = sub(m_.s32(vd + 8), m_.s32(vd)), dx10 = sub(m_.s32(vd + 0x10), m_.s32(vd + 0x0C));
        const int32_t dy10 = sub(m_.s32(vd + 4), m_.s32(vd)), dx20 = sub(m_.s32(vd + 0x14), m_.s32(vd + 0x0C));
        W(-0x4C, dy20), W(-0x48, dx10), W(-0x50, dy10), W(-0x44, dx20);
        int64_t d = mul64(dy10, dx20) - mul64(dy20, dx10);
        uint8_t sh = 0;
        d >>= 15;
        while ((uint32_t)((int32_t)(d >> 32) + 1) > 1) {
            d >>= 4;
            sh += 4;
        }
        d >>= 1;
        const uint32_t det = (uint32_t)d;
        W(-0x40, sh);
        if (det == 0) return;
        uint32_t a = vd + 0x18;
        if (det < 0x20000 || det > 0xFFFE0000u) {   // 165E2h: flat
            for (int k = 0; k < n; k++) W(0x34 + 4 * k, 0), W(-0x14 + 4 * k, 0);
        } else {
            W(-0x54, det);
            for (int k = 0; k < n; k++, a += 0x0C) {
                const int32_t a0 = m_.s32(a), d1 = sub(m_.s32(a + 4), a0), d2 = sub(m_.s32(a + 8), a0);
                int64_t v = mul64(d1, G(-0x44)) - mul64(d2, G(-0x48));
                v >>= m_.r8(P - 0x40);
                W(0x34 + 4 * k, (uint32_t)(int32_t)(v / (int32_t)det));
                v = mul64(d2, G(-0x50)) - mul64(d1, G(-0x4C));
                v >>= m_.r8(P - 0x40);
                W(-0x14 + 4 * k, (uint32_t)(int32_t)(v / (int32_t)det));
            }
        }
    }
    // an edge from (xa, ya) to (xb, yb) at row R: its slope into SL, its x into X
    auto edge = [&](int32_t ya, int32_t yb, int32_t xa, int32_t xb, int32_t r, int sl, int xo, bool exact) {
        const int32_t pre = sub((int32_t)((uint32_t)r << 16), ya);
        const int32_t dy = sub(ya, yb), dx = sub(xa, xb);
        if (exact ? (uint32_t)dy == 0x10000 : (uint32_t)dy < 0x10000) {
            if (sl) W(sl, exact ? 0x40000000u : ((uint32_t)dy - 0x10000) & 0x80000000u ? 0xC0000000u : 0x40000000u);
            W(xo, (uint32_t)add((int32_t)(mul64(dx, pre) / dy), xa));
            return;
        }
        const int32_t slope = (int32_t)(((int64_t)dx << 16) / dy);
        if (sl) W(sl, slope);
        W(xo, (uint32_t)add((int32_t)(mul64(slope, pre) >> 16), xa));
    };
    auto floors = [&]() {
        const int32_t f = G(-0x60) >> 16;
        W(-0x1C, f), W(-0x18, f + 1);
        for (int k = 0; k < n; k++) W(0x1C + 4 * k, (uint32_t)mul(G(-0x14 + 4 * k), f));
    };
    int cont = 0;                                   // [EBP-70h]: 1 the left edge, 2 the right edge at the middle
    edge(y0, y2, x0, x2, r0, -0x60, -0x68, true);   // the long edge
    if (r1 > r0) {
        edge(y0, y1, x0, x1, r0, -0x5C, -0x64, true);
        if (G(-0x60) < G(-0x5C)) {
            cont = 2;
        } else {
            const uint32_t s = U(-0x60), x = U(-0x68);
            W(-0x60, U(-0x5C)), W(-0x5C, s);
            W(-0x68, U(-0x64)), W(-0x64, x);
            cont = 1;
        }
    } else {
        edge(y1, y2, x1, x2, r0, -0x5C, -0x64, false);
        if (!(G(-0x60) > G(-0x5C))) {
            const uint32_t s = U(-0x60), x = U(-0x68);
            W(-0x60, U(-0x5C)), W(-0x5C, s);
            W(-0x68, U(-0x64)), W(-0x64, x);
        }
    }
    // 1631Ah: the first row
    int32_t l = (int32_t)(U(-0x68) + 0xFFFF) >> 16, rr = (int32_t)(U(-0x64) + 0xFFFF) >> 16;
    if (l >= G(0x58)) l = rr = G(0x58);
    else if (rr <= G(0x54)) l = rr = G(0x54);
    else {
        if (l < G(0x54)) l = G(0x54);
        if (rr > G(0x58)) rr = G(0x58);
    }
    int32_t count = sub(rr, l);
    W(-0x58, l);
    W(-0x3C, (uint32_t)sub((int32_t)((uint32_t)l << 16), G(-0x28)));
    W(-0x38, (uint32_t)sub((int32_t)((uint32_t)r0 << 16), G(-0x34)));
    for (int k = 0; k < n; k++) {
        const int32_t a = (int32_t)(mul64(G(0x34 + 4 * k), G(-0x38)) >> 16);
        const int32_t b = (int32_t)(mul64(G(-0x14 + 4 * k), G(-0x3C)) >> 16);
        W(4 + 4 * k, (uint32_t)add(add(b, a), m_.s32(P + U(-0x80) + 0x0C * k)));
    }
    int32_t x = l;
    floors();
    W(-0x6C, (uint32_t)add(mul(r0, G(0x50)), G(0x4C)));
    for (;;) {
        if (count > 0) span(U(-0x6C) + x, count);
        W(-0x68, U(-0x68) + U(-0x60));
        W(-0x64, U(-0x64) + U(-0x5C));
        W(-0x6C, U(-0x6C) + U(0x50));
        W(-0x7C, U(-0x7C) + 1);
        if (G(-0x7C) == G(-0x74)) return;
        if (G(-0x7C) == G(-0x78)) {                 // the middle: the short edge's second half
            if (cont == 1) {
                const int32_t ya = G(-0x30), pre = sub((int32_t)((uint32_t)G(-0x7C) << 16), ya);
                const int32_t dy = sub(ya, G(-0x2C)), dx = sub(G(-0x24), G(-0x20));
                if ((uint32_t)dy < 0x10000) {
                    W(-0x68, (uint32_t)add((int32_t)(mul64(dx, pre) / dy), G(-0x24)));
                } else {
                    const int32_t slope = (int32_t)(((int64_t)dx << 16) / dy);
                    W(-0x60, slope);
                    W(-0x68, (uint32_t)add((int32_t)(mul64(slope, pre) >> 16), G(-0x24)));
                    floors();
                }
            } else if (cont == 2) {
                const int32_t ya = G(-0x30), pre = sub((int32_t)((uint32_t)G(-0x7C) << 16), ya);
                const int32_t dy = sub(ya, G(-0x2C)), dx = sub(G(-0x24), G(-0x20));
                if ((uint32_t)dy < 0x10000) {
                    W(-0x64, (uint32_t)add((int32_t)(mul64(dx, pre) / dy), G(-0x24)));
                } else {
                    const int32_t slope = (int32_t)(((int64_t)dx << 16) / dy);
                    W(-0x5C, slope);
                    W(-0x64, (uint32_t)add((int32_t)(mul64(slope, pre) >> 16), G(-0x24)));
                }
            }
        }
        // 16429h: the next row
        l = (int32_t)(U(-0x68) + 0xFFFF) >> 16, rr = (int32_t)(U(-0x64) + 0xFFFF) >> 16;
        int32_t step = 0;
        bool moved = false;
        if (l >= G(0x58)) l = G(0x58), count = 0;
        else if (rr <= G(0x54)) l = G(0x54), count = 0;
        else {
            if (l < G(0x54)) l = G(0x54);
            if (rr > G(0x58)) rr = G(0x58);
            count = sub(rr, l);
            step = sub(l, G(-0x58));
            if (step != 0) {
                W(-0x58, l);
                moved = true;
            }
        }
        x = l;
        for (int k = 0; k < n; k++) {
            uint32_t add;
            if (!moved) add = U(0x34 + 4 * k);
            else if (step == G(-0x18)) add = U(0x1C + 4 * k) + U(0x34 + 4 * k) + U(-0x14 + 4 * k);
            else if (step == G(-0x1C)) add = U(0x1C + 4 * k) + U(0x34 + 4 * k);
            else add = (uint32_t)mul(G(-0x14 + 4 * k), step) + U(0x34 + 4 * k);
            W(4 + 4 * k, U(4 + 4 * k) + add);
        }
    }
}

}  // namespace lasse
