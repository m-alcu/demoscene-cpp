// Part 9 (1A56Ah): the finale. Four copies of an object, each turned about
// its own axis, its front pulled forward; the object morphs into one copy
// after another (and into a second object), a tube winding through it
// along a circle (path9), over a plasma-warped picture. At the end the
// picture goes white and the music fades out (the player's master volume).
#include <cstring>

#include "demo.h"

namespace lasse {

// 16EF8h: SRC holds eight (u, v) words per pixel row of each 8x8 block
// (40 x 25 blocks); each word displaced by TABLE[its high byte], the pixel
// is TEX[that] (TEX 64K-aligned).
void Demo::warp(uint32_t table, uint32_t src, uint32_t tex, uint32_t dst) {
    for (uint32_t r = 0; r < 25; r++)
        for (uint32_t c = 0; c < 40; c++)
            for (uint32_t l = 0; l < 8; l++, src += 16)
                for (uint32_t j = 0; j < 8; j++) {
                    const uint16_t w = m_.r16(src + 2 * j);
                    const uint16_t a = (uint16_t)(w + m_.r16(table + 2 * (w >> 8)));
                    m_.w8(dst + r * 0xA00 + c * 8 + l * 0x140 + j, m_.r8(tex + a));
                }
}

// 1A4FAh: part 9's path, a circle; the radius from 2B4E4h.
void Demo::path9(uint32_t pos, uint32_t tan, float u) {
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    F.fld(u), F.fcos(), F.fmul(D(0x2907C));
    F.fld(u), F.fxch();
    const float a = F.fstpf();
    F.fsin(), F.fmul(D(0x2907C));
    F.fld(a), F.fmul(D(0x29084));
    F.fld(a), F.fchs(), F.fmul(D(0x2908C));
    F.fldst(2), F.fmul(D(0x29084));
    F.fxch(3), F.fchs();
    const float b = F.fstf();
    F.fmul(D(0x2908C));
    F.fld(m_.f32(0x2B4E4));
    m_.wf32(pos, a);
    F.fxch(4);
    m_.wf32(pos + 4, F.fstpf());
    m_.wf32(pos + 8, F.fstpf());
    F.fxch();
    m_.wf32(tan + 4, F.fstpf());
    m_.wf32(tan + 8, F.fstpf());
    m_.wf32(tan, b);
}

void Demo::part9() {
    Frame fr(*this, 5, 0x9C0);
    const uint32_t B = fr.ebp - 0x82;
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    const int32_t t0 = clock(0x1A57E);
    const uint32_t big = m_.r32(0x2B4C0);
    m_.w32(0x2B48C, big);
    const uint32_t faces = B + 6, obj = B - 0x7E, obj2 = B - 0x5E, tubeF = B + 0x0E;
    loadFaces(faces, 0x208DA);
    loadVerts(obj, 0x1F45E);
    normals(obj, faces);
    copy(B - 0xDE, 0x283B0, 0x30);              // four axes
    copy(B - 0x6E, 0x283E0, 0x10);              // and angles
    // the copies (B-17Eh + 10h k): turned by matrix k; the vertices in
    // front moved, turned, moved back
    for (uint32_t k = 0; k < 4; k++) {
        const uint32_t mx = B - 0x23E + 0x30 * k, cp = B - 0x17E + 0x10 * k;
        F.fld(m_.f32(B - 0x6E + 4 * k));
        axisAngle(B - 0xDE + 12 * k, mx);
        copyObject(cp, obj);
        for (int32_t i = 0, o = 0; i < m_.s32(obj); i++, o += 12) {
            F.fld(m_.f32(m_.r32(obj + 4) + o + 8));
            if (!F.fcomp(Fl(0x290F8)).ja()) continue;
            const uint32_t v = m_.r32(cp + 4) + o;
            F.fld(m_.f32(v + 4)), F.fadd(Fl(0x290FC)), m_.wf32(v + 4, F.fstpf());
            F.fld(m_.f32(v + 8)), F.fadd(Fl(0x29100)), m_.wf32(v + 8, F.fstpf());
            transform(v, mx, v, 1);
            F.fld(m_.f32(v + 4)), F.fadd(Fl(0x29104)), m_.wf32(v + 4, F.fstpf());
            F.fld(m_.f32(v + 8)), F.fadd(Fl(0x29108)), m_.wf32(v + 8, F.fstpf());
        }
        normals(cp, faces);
    }
    loadVerts(obj2, 0x1F814);
    normals(obj2, faces);
    sp_ -= 4;
    gridFaces(tubeF, 0x10, 8, 0x28, 0x28);
    sp_ += 4;
    sceneAlloc(m_.r32(obj) * 2 + m_.r32(tubeF), (m_.r32(faces) + m_.r32(tubeF)) * 2);
    viewport(0x140, 0xC8, 0xF0);
    const uint32_t pal = B - 0x53E;
    gradient(pal, 0, 0, 0, 0, 0, 0, 0x10);
    gradient(B - 0x50E, 0, 0, 0, 0x10, 0, 0, 0x10);
    gradient(B - 0x4DE, 0x10, 0, 0, 0x30, 0x10, 0, 0x10);
    gradient(B - 0x4AE, 0x30, 0x10, 0, 0x3F, 0x30, 0x20, 0x10);
    ramp(B - 0x47E, 0x20, 0x10, 0x30, 0x20, 0x20);
    gradient(B - 0x3BE, 0, 0, 0, 0x3F, 0x3F, 0x10, 0x40);
    ramp(B - 0x2FE, 0x20, 0x20, 0x20, 0x20, 0x20);
    m_.w32(0x282EC, m_.r32(0x2B4C4));
    // the picture (64K, never freed) and the displacement table (on the stack)
    const uint32_t A = (malloc(0x20000) + 0xFFFF) & 0xFFFF0000u;
    const uint32_t table = (B - 0x73F) & 0xFFFFFE00u;
    plasma(0x12312312, A, 0x3E8, 6);
    const uint32_t src = big + 0x100000;
    // The first frame reads the word at B+7Eh before writing it: what
    // part 8's last calls left on the stack there (8, from the harness).
    m_.w16(B + 0x7E, 8);
    for (;;) {
        if (escape()) break;
        F.fld((X)(int32_t)((uint32_t)clock(0x1A870) - (uint32_t)t0));
        F.fdiv(D(0x2910C));
        const float T = F.fstpf();
        // the table: a wave; its phase (the word at B+7Eh: last frame's -T)
        for (int32_t i = 0; i < 0x100; i++) {
            F.fld((X)i);
            const double di = F.fstd();
            F.fmul(D(0x29094)), F.fmul(D(0x2909C));
            F.fld(T);
            const double dT = F.fstd();
            F.fxch();
            double tmp = F.fstpd();
            F.fadd(tmp);
            F.fcos();
            const int32_t w = m_.r16(B + 0x7E);
            F.fmul(D(0x290A4));
            F.fld((X)w);
            F.faddp(1);
            F.frndint();
            const int32_t h = (F.fistp() & 0xFF) << 8;
            F.fld(dT), F.fadd(tmp);
            F.fld((X)h);
            tmp = F.fstpd();
            F.fsin(), F.fmul(D(0x290AC)), F.fadd(di), F.fadd(tmp);
            F.frndint();
            m_.w16(table + 2 * i, (uint16_t)F.fistp());
        }
        warp(table, src, A, m_.r32(0x2B4C4));
        F.fld(T), F.fldst(0), F.fchs(), F.frndint();
        m_.w32(B + 0x7E, (uint32_t)F.fistp());
        F.fld1();
        const Fpu::Cmp c1 = F.fcom(F.st(1));
        F.pop(), F.pop();                       // fcompp
        if (c1.ja()) {
            F.fld(T), F.fmul(Fl(0x290B4)), F.frndint();
            fadePal(pal, 0, 0x100, F.fistp());
        } else if (F.fld(T), F.fcomp(D(0x29114)).jb()) {
            setPal(pal, 0, 0x100);
        }
        F.fld(T);
        if (F.fcomp(D(0x2911C)).ja()) {
            F.fld(D(0x29124)), F.fsub(T);
            const double r = F.fstd();
            F.fmul(D(0x290B8)), F.frndint();
            whitePal(pal, 0, 0x100, F.fistp());
            F.fld(r), F.fmul(D(0x290C0)), F.frndint();
            m_.w8(0x295BC, (uint8_t)F.fistp());  // 1528Ch: the master volume
        }
        F.fld(T);
        if (F.fcomp(D(0x29124)).ja()) break;
        // the camera
        copy(B - 0x36, 0x283F0, 12);
        copy(B - 0x1E, 0x283FC, 12);
        copy(B - 0x4E, 0x28408, 12);
        const uint32_t M = B - 0x10E;
        camera(M, B - 0x36, B - 0x1E, B - 0x4E, 0.0f);
        F.fstp(0);
        float fov;
        const uint32_t fb = 0x40600000;
        std::memcpy(&fov, &fb, 4);
        projection(fov, 0x41A00000);
        // the object's place: rising at first
        copy(B - 0x42, 0x28414, 12);
        if (F.fld(T), F.fcomp(D(0x2912C)).jb()) {
            F.fld(T), F.fadd(D(0x29134)), F.fmul(D(0x290C8)), F.fadd(m_.f32(B - 0x3E));
            m_.wf32(B - 0x3E, F.fstpf());
        }
        translation(B - 0x42, B - 0xAE);
        matmul(M, B - 0xAE, B - 0xAE);
        // the morph: towards which copy, how far
        F.fld(T), F.fmul(Fl(0x290D0)), F.fmul(D(0x290D4)), F.fsin(), F.fabs_();
        F.fld(T), F.fxch();
        float w = F.fstpf();
        uint32_t tgt = B - 0x17E;
        if (!F.fcomp(Fl(0x2913C)).jb()) w = 0;
        auto ge = [&](X c) { F.fld(T); return !F.fcomp(c).jb(); };
        auto rise = [&]() {                     // (1 - cos(T k k2)) k3
            F.fld(T), F.fmul(D(0x290D4)), F.fmul(D(0x290DC)), F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x290E4));
            return F.fstpf();
        };
        if (ge(Fl(0x29140))) w = rise(), tgt = B - 0x15E;
        if (ge(D(0x29144))) w = 1.0f;
        if (ge(Fl(0x2914C))) {
            F.fld(T), F.fadd(Fl(0x29150)), F.fmul(D(0x290D4)), F.fcos(), F.fabs_();
            w = F.fstpf();
        }
        if (ge(D(0x29154))) tgt = B - 0x14E;
        if (ge(Fl(0x2915C))) w = 1.0f;
        if (ge(D(0x29160))) w = rise();
        if (ge(Fl(0x29168))) w = 0;
        if (ge(Fl(0x2916C))) {
            F.fld(T), F.fmul(D(0x290D4)), F.fmul(D(0x290E4)), F.fsin(), F.fchs();
            tgt = B - 0x16E;
            w = F.fstpf();
        }
        if (ge(Fl(0x29170))) w = 1.0f;
        if (ge(Fl(0x29174))) {
            F.fld(T), F.fmul(D(0x290D4)), F.fmul(D(0x290E4)), F.fcos();
            w = F.fstpf();
        }
        if (ge(Fl(0x29178))) w = 0;
        if (ge(D(0x2917C))) {
            F.fld(T), F.fadd(D(0x29184)), F.fmul(D(0x290D4)), F.fsin();
            tgt = obj2;
            w = F.fstpf();
        }
        if (ge(Fl(0x2918C))) w = 1.0f;
        // the tube's place: sinking away at the end; its radius
        copy(B - 0x2A, 0x28420, 12);
        if (ge(Fl(0x29170))) {
            F.fld(T), F.fadd(Fl(0x29190)), F.fmul(Fl(0x290EC)), F.fmul(D(0x290D4)), F.fcos();
            F.fld1(), F.fsubrp(1), F.fmul(D(0x290F0)), F.fsubr(m_.f32(B - 0x22));
            m_.wf32(B - 0x22, F.fstpf());
        }
        if (ge(Fl(0x29178))) m_.w32(B - 0x22, 0x43960000);
        translation(B - 0x2A, B - 0x13E);
        matmul(M, B - 0x13E, B - 0x13E);
        m_.w32(0x2B4E4, 0x42C80000);
        if (F.fld(T), F.fcomp(Fl(0x29194)).ja()) {
            F.fld(T), F.fadd(Fl(0x29198)), F.fmul(D(0x290D4)), F.fcos(), F.fld1(), F.fsubrp(1);
            F.fmul(D(0x290AC)), F.fadd(m_.f32(0x2B4E4));
            m_.wf32(0x2B4E4, F.fstpf());
        }
        if (F.fld(T), F.fcomp(Fl(0x2918C)).ja()) m_.w32(0x2B4E4, 0x442F0000);
        morph(obj, tgt, w, B - 0xAE, 0);
        addFaces(m_.r32(faces + 4), m_.r32(faces), m_.r32(obj), 4);
        const uint32_t at = m_.r32(S_) * 12;
        sp_ -= 0x10;
        sweep(m_.r32(0x2B46C) + at, m_.r32(0x2B470) + at, B - 0x13E, 0x10, 8, &Demo::path9, 0.0f, 0.0f);
        sp_ += 0x10;
        const int32_t nf = m_.s32(tubeF);
        addFaces(m_.r32(tubeF + 4), (uint32_t)nf, (uint32_t)(nf / 2), 8);
        render();
        copy(kVram, m_.r32(0x2B4C4), 0xFA00);
    }
    sceneFree();
    freeFaces(faces);
    freeVerts(obj);
    freeVerts(obj2);
    whiteDac();
    memset(kVram, 0, 0xFA00);
}

}  // namespace lasse
