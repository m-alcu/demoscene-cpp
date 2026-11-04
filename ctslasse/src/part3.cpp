// Part 3 (192E6h): the first 3D scene. Over a rotozoomed texture, a face
// (an object morphing between three shapes) and a second object; the time
// T (seconds) drives the palette (from white in, out at the end), the
// texture's scrolling, the camera (several moves: phases 0-3), the morphs.
// In phase 3 a 16x16 glyph from the font blinks in the corner.
#include "demo.h"

namespace lasse {

void Demo::part3() {
    Frame fr(*this, 5, 0x5C4);
    const uint32_t B = fr.ebp - 0x82;           // sub ebp, 82h
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    if (position(0x192FA) >= 0x517) return;
    whiteDac();
    memset(kVram, 0, 0xFA00);
    m_.w32(B + 0x66, m_.r32(0x2B4C0));
    const uint32_t fb = m_.r32(0x2B4C4);
    rle(fb, 0x21EBA, 0, 0x3F);
    const uint32_t glyph = B - 0x242;           // 16x16 from the font, row 50h, column 20h
    for (uint32_t i = 0; i < 0x10; i++) copy(glyph + i * 0x10, fb + 0x5020 + i * 0x100, 0x10);
    m_.w32(0x2B48C, m_.r32(B + 0x66));          // the scene's textures: the big buffer
    const uint32_t faces1 = B + 0x16, faces2 = B + 0x1E;
    const uint32_t face = B - 0x72, faceWide = B - 0x52, face2 = B - 0x62, obj = B - 0x82;
    loadFaces(faces1, 0x1FBCA);
    loadFaces(faces2, 0x203E6);
    loadVerts(face, 0x1E57C);
    normals(face, faces1);
    copyObject(faceWide, face);
    for (uint32_t i = 0, o = 0; i < m_.r32(faceWide); i++, o += 12) {
        const uint32_t v = m_.r32(faceWide + 4) + o;
        F.fld(m_.f32(v)), F.fldst(0), F.fmul(D(0x28DBC)), F.fstp(1);
        m_.wf32(v, F.fstpf());
        F.fld(m_.f32(v + 4)), F.fldst(0), F.fmul(D(0x28DC4)), F.fstp(1);
        m_.wf32(v + 4, F.fstpf());
    }
    normals(faceWide, faces1);
    loadVerts(face2, 0x1EB3C);
    normals(face2, faces1);
    loadVerts(obj, 0x1F0FC);
    normals(obj, faces2);
    for (uint32_t i = 0, o = 0, t = 0; i < m_.r32(obj); i++, o += 12, t += 8) {
        const uint32_t v = m_.r32(obj + 4) + o;
        F.fld(m_.f32(v)), F.fmul(D(0x28DCC)), F.fsubr(D(0x28E74));
        F.frndint();
        m_.w32(m_.r32(obj + 0x0C) + t, F.fistp());
        F.fld(m_.f32(v + 8)), F.fmul(D(0x28DCC)), F.fsubr(D(0x28E7C));
        F.frndint();
        m_.w32(m_.r32(obj + 0x0C) + t + 4, F.fistp());
    }
    sceneAlloc((m_.r32(face) + m_.r32(faces2)) * 2, (m_.r32(faces1) + m_.r32(faces2)) * 2);
    viewport(0x140, 0xC8, 0xF0);
    const uint32_t pal = B - 0x542;
    ramp(pal, 0x1A, 0x22, 0x3F, 0x20, 0x20);
    ramp(B - 0x482, 0x3F, 0x16, 0x1C, 0x20, 0x20);
    ramp(B - 0x3C2, 0x3C, 0x32, 0x19, 0x20, 0x20);
    ramp(B - 0x302, 0x20, 0x20, 0x20, 0x20, 0x20);
    m_.w32(0x282EC, fb);
    const int32_t t0 = clock(0x19536);
    const uint32_t backTex = m_.r32(B + 0x66) + 0x50000;
    const uint32_t eye = B - 0x12, at = B - 0x2A, up = B - 6, M = B - 0xE2;
    for (;;) {
        if (escape()) break;
        F.fld((X)(int32_t)((uint32_t)clock(0x19556) - (uint32_t)t0));
        F.fmul(D(0x28DD4));
        const float T = F.fstf();
        if (F.fcomp(Fl(0x28E84)).ja()) break;
        // the palette: in from white, out at the end
        F.fld(T);
        if (F.fcomp(D(0x28E88)).ja()) {
            F.fld(Fl(0x28E84)), F.fsub(T), F.fmul(Fl(0x28DDC)), F.fmul(Fl(0x28DE0));
            F.frndint();
            fadePal(pal, 0, 0x100, F.fistp());
        }
        F.fld(T);
        if (F.fcomp(D(0x28E40)).jb()) {
            F.fld(T), F.fmul(Fl(0x28DDC)), F.fmul(Fl(0x28DE0));
            F.frndint();
            whitePal(pal, 0, 0x100, F.fistp());
        } else {
            F.fld1();
            if (F.fcomp(T).ja()) setPal(pal, 0, 0x100);
        }
        // the phase; S (B+6Ah): T, or past phase 3 a slower time
        int32_t phase = 0;
        float s = T;
        F.fld(T);
        if (F.fcomp(D(0x28E90)).ja()) phase = 1;
        F.fld(T);
        if (F.fcomp(D(0x28E98)).ja()) phase = 2;
        F.fld(T);
        const double dT = F.fstd();
        if (F.fcomp(D(0x28EA0)).ja()) {
            F.fld(dT), F.fadd(D(0x28EA8)), F.fmul(D(0x28DE4)), F.fadd(D(0x28EB0));
            phase = 3;
            s = F.fstpf();
        }
        if (phase == 0) {                       // the texture scrolls
            F.fld(T), F.fmul(Fl(0x28DDC));
            const float u = F.fstf();
            F.fcos(), F.fmul(D(0x28DEC));
            F.fld(u);
            F.fxch();
            F.frndint();
            m_.w32(0x2B4B8, F.fistp());
            F.fsin(), F.fmul(D(0x28DF4));
            F.frndint();
            m_.w32(0x2B4BC, F.fistp());
        } else {
            m_.w32(0x2B4B8, 0);
            m_.w32(0x2B4BC, 0);
        }
        // the background
        F.fld(T), F.fmul(Fl(0x28DFC));
        float angle = F.fstpf();
        if (phase & 1) F.fld(angle), F.fmul(Fl(0x28E00)), angle = F.fstpf();
        F.fld(T), F.fmul(Fl(0x28E04)), F.fsin(), F.fmul(D(0x28E08)), F.fld1(), F.faddp(), F.fmul(D(0x28E10));
        F.frndint();
        roto(angle, F.fistp(), 0, 0, backTex, 1);
        // the second object's height (B+72h), the morph (B+6Eh)
        F.fld(s), F.fadd(D(0x28EB8)), F.fmul(D(0x28E18)), F.fadd(D(0x28EC0));
        float h = F.fstf();
        if (F.fcomp(Fl(0x28EC8)).ja()) {
            h = -41.0f;
        } else {
            F.fld(h);
            if (F.fcomp(Fl(0x28ECC)).ja()) {
                F.fld(h), F.fadd(Fl(0x28ED0)), F.fmulst(0), F.fmul(Fl(0x28E20)), F.fsubr(h);
                h = F.fstpf();
            }
        }
        F.fld(h), F.fadd(Fl(0x28ED4)), F.fmul(Fl(0x28E24)), F.fld1(), F.faddp();
        F.fldz();
        F.fxch();
        float mix = F.fstpf();
        if (F.fcomp(mix).ja()) mix = 0;
        F.fld1();
        if (F.fcomp(mix).jb()) mix = 1.0f;
        F.fld(s);
        const double ds = F.fstd();
        if (F.fcomp(D(0x28ED8)).ja()) {
            F.fld(ds), F.fadd(D(0x28EE0)), F.fmul(D(0x28E28)), F.fmul(D(0x28E30)), F.fcos();
            F.fld1(), F.fsubrp(1), F.fmul(D(0x28E38)), F.fsubr(h);
            h = F.fstpf();
        }
        F.fld(s);
        if (F.fcomp(Fl(0x28EE8)).ja()) h = -241.0f;
        const uint32_t fovBits = 0x40400000;    // 3.0
        // the camera
        auto setv = [&](uint32_t v, uint32_t x, uint32_t y, uint32_t z) { m_.w32(v, x), m_.w32(v + 4, y), m_.w32(v + 8, z); };
        if (phase == 0 || phase == 2) {
            F.fld(T);
            setv(eye, 0x42AE0000, 0xC3450000, 0xC1000000);
            setv(at, 0x42C20000, 0xC1500000, 0xC0400000);
            const double d0e = F.fstd();
            if (F.fcomp(D(0x28EEC)).ja()) {
                F.fld(d0e), F.fadd(D(0x28EF4)), F.fmul(D(0x28E28));
                const double d26 = F.fstd();
                F.fmul(D(0x28E40)), F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E48));
                F.fld(d26);
                F.fld(m_.f32(eye + 4));
                F.fxch(2);
                F.faddst(2);
                F.fxch();
                F.fmul(D(0x28E40));
                F.fxch();
                F.fstp(2);
                F.fxch();
                m_.wf32(eye + 4, F.fstpf());
                F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E38));
                F.fld(d26);
                F.fld(m_.f32(eye));
                F.fxch(2);
                F.fsubrst(2);
                F.fxch();
                F.fmul(D(0x28E40));
                F.fxch();
                F.fstp(2);
                F.fxch();
                m_.wf32(eye, F.fstpf());
                F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E50)), F.fsubr(m_.f32(at + 4));
                m_.wf32(at + 4, F.fstpf());
            }
            F.fld(T);
            const double d3e = F.fstd();
            if (F.fcomp(D(0x28EFC)).ja()) {
                F.fld(d3e), F.fadd(D(0x28F04)), F.fmul(D(0x28E28));
                const double d26 = F.fstd();
                F.fmul(D(0x28E40)), F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E58));
                F.fld(d26);
                F.fxch(), F.fsubr(D(0x28F0C));
                F.fxch(), F.fmul(D(0x28E40));
                F.fxch();
                m_.wf32(eye + 4, F.fstpf());
                F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E60));
                F.fld(d26);
                F.fxch(), F.fadd(D(0x28F14));
                F.fxch(), F.fmul(D(0x28E40));
                F.fxch();
                m_.wf32(eye, F.fstpf());
                F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28E68)), F.fadd(D(0x28F1C));
                m_.w32(at + 4, 0xC2040000);
                m_.wf32(eye + 8, F.fstpf());
            }
            F.fld(T);
            if (F.fcomp(D(0x28F24)).ja()) {
                m_.w32(eye + 4, 0xC2D60000);
                m_.w32(eye + 8, 0x42280000);
                m_.w32(eye, 0x40E00000);
            }
        }
        if (phase == 1) {
            m_.w32(eye + 4, 0xC489E000), m_.w32(eye + 8, 0xC1000000);
            setv(at, 0x42C20000, 0xC4A42000, 0xC0400000);
            m_.w32(eye, 0x42200000);
        }
        if (phase == 3) {
            F.fld(h);
            m_.w32(eye + 4, 0xC23C0000), m_.w32(eye + 8, 0xC2680000);
            m_.w32(at, 0x42C60000);
            F.fadd(Fl(0x28F2C));
            m_.w32(at + 8, 0xC079999A);
            m_.wf32(at + 4, F.fstpf());
            m_.w32(eye, 0x434F0000);
        }
        copy(up, 0x28338, 12);
        camera(M, eye, at, up, 0.0f);
        F.fstp(0);
        copy(B - 0x36, 0x28344, 12);
        float fov;
        std::memcpy(&fov, &fovBits, 4);
        projection(fov, 0x41200000);
        const uint32_t m1 = B - 0x112, rot = B - 0xB2, m2 = B - 0x142;
        translation(B - 0x36, m1);
        matmul(M, m1, m1);
        F.fld(T);
        copy(B - 0x42, 0x28350, 12);
        F.fadd(Fl(0x28F30)), F.fmul(D(0x28E30));
        axisAngle(B - 0x42, rot);
        m_.w32(B - 0x1E, 0x42C60000);
        m_.w32(B - 0x16, 0xC079999A);
        m_.wf32(B - 0x1A, h);
        translation(B - 0x1E, m2);
        if (phase == 1) matmul(m2, rot, m2);
        matmul(M, m2, m2);
        if (phase != 0) addObject(faces2, obj, m2, 0x1E);
        if (phase != 1) {
            float w = 0;
            F.fld(T);
            const double d36 = F.fstd();
            if (F.fcomp(D(0x28E98)).ja()) {
                F.fld(d36), F.fadd(D(0x28F34)), F.fmul(D(0x28E28)), F.fmul(D(0x28E40)), F.fsin();
                w = F.fstpf();
            }
            F.fld(T);
            if (F.fcomp(D(0x28F3C)).ja()) w = 0;
            uint32_t mb;
            std::memcpy(&mb, &mix, 4);
            if (mb & 0x7FFFFFFF) morph(face, face2, mix, m1, 0);
            else morph(face, faceWide, w, m1, 0);
            addFaces(m_.r32(faces1 + 4), m_.r32(faces1), m_.r32(face), 0x0E);
        }
        render();
        if (phase == 3) {
            F.fld(T), F.fmul(Fl(0x28E70));
            F.frndint();
            if (F.fistp() & 1)
                for (uint32_t r = 0; r < 0x0C; r++) copy(fb + 0x1520 + r * 0x140, glyph + r * 0x10, 0x0E);
        }
        copy(kVram, fb, 0xFA00);                // 18868h
    }
    blackDac();
    memset(kVram, 0, 0xFA00);
    sceneFree();
    freeFaces(faces1);
    freeFaces(faces2);
    freeVerts(face);
    freeVerts(face2);
    freeVerts(obj);
}

}  // namespace lasse
