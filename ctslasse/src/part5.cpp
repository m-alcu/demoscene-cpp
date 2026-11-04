// Part 5 (19CEDh): a twisted tube along a knot-like path (path5), the
// camera turning through it, over a rotozoomer; the palette in from white,
// out at the end.
#include "demo.h"

namespace lasse {

void Demo::part5() {
    Frame fr(*this, 5, 0x3DC);
    const uint32_t B = fr.ebp - 0x82;
    auto D = [&](uint32_t a) { return (X)m_.f64(a); };
    auto Fl = [&](uint32_t a) { return (X)m_.f32(a); };
    if (position(0x19D01) >= 0xA00) return;
    const int32_t t0 = clock(0x19D14);
    const uint32_t faces = B + 0x66, verts = B + 6;
    m_.w32(0x2B48C, m_.r32(0x2B4C0));
    sp_ -= 4;
    gridFaces(faces, 0x30, 6, 0x14, 0x14);
    sp_ += 4;
    sp_ -= 0x10;
    tube(verts, 0x30, 6, &Demo::path5, 3.8f, 0.0f, 0x1000000, 0x7000000);
    sp_ += 0x10;
    sceneAlloc(m_.r32(faces), m_.r32(faces) * 2);
    viewport(0x140, 0xC8, 0xF0);
    const uint32_t pal = B - 0x35A;
    palette8(pal);
    const uint32_t backTex = m_.r32(0x2B4C0) + 0x80000;
    m_.w32(0x282EC, m_.r32(0x2B4C4));
    const uint32_t M = B - 0x5A, R = B - 0x2A;
    for (;;) {
        if (escape()) break;
        if (position(0x19DB5) >= 0xA00) break;
        F.fld((X)(int32_t)((uint32_t)clock(0x19DC8) - (uint32_t)t0));
        F.fdiv(D(0x28FA8));
        const float T = F.fstf();
        if (F.fcomp(D(0x28FB0)).jb()) {
            F.fld(T), F.fmul(Fl(0x28F70)), F.fmul(Fl(0x28F74));
            F.frndint();
            whitePal(pal, 0, 0x100, F.fistp());
        }
        F.fld(T);
        if (F.fcomp(Fl(0x28FB8)).ja()) {
            F.fld(Fl(0x28FBC)), F.fsub(T), F.fmul(Fl(0x28F74));
            F.frndint();
            fadePal(pal, 0, 0x100, F.fistp());
        }
        F.fld(D(0x28FC0));
        F.fld(T);
        F.fprem();
        F.fxch(), F.fstp(0);
        F.fadd(D(0x28FC8)), F.fabs_(), F.fadd(D(0x28FD0)), F.fmul(D(0x28F78));
        roto(F.fstpf(), (int32_t)0xFFFF8000, 0xA0, 0x64, backTex, 1);
        F.fld(T);
        const double dT = F.fstpd();
        copy(B + 0x52, 0x2835C, 12);
        F.fld(dT), F.fmul(D(0x28F80));
        copy(B + 0x3A, 0x2B4C8, 12);
        copy(B + 0x22, 0x28368, 12);
        camera(M, B + 0x52, B + 0x3A, B + 0x22, F.fstpf());
        F.fstp(0);
        float fov, nearf;
        const uint32_t fb = 0x40000000, nb = 0x3F000000;
        std::memcpy(&fov, &fb, 4), std::memcpy(&nearf, &nb, 4);
        projection(fov, nb);
        copy(B + 0x2E, 0x28374, 12);
        F.fld(dT), F.fmul(D(0x28F88));
        copy(B + 0x46, 0x28380, 12);
        F.fadd(D(0x28FD8));
        axisAngle(B + 0x46, R);
        matmul(M, R, M);
        transform(B + 0x2E, R, B + 0x2E, 1);
        F.fld(dT), F.fmul(D(0x28F90)), F.fadd(D(0x28FE0));
        axisAngle(B + 0x2E, R);
        matmul(M, R, M);
        F.fld(T);
        if (F.fcomp(Fl(0x28F70)).jb()) {
            F.fld(T), F.fadd(Fl(0x28FE8));
            const float a = F.fstf();
            F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28F98));
            F.fld(a);
            F.fxch();
            const float z = F.fstpf();
            F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(D(0x28FA0));
            const float y = F.fstpf();
            m_.wf32(B + 0x1A, y);
            m_.w32(B + 0x16, 0);
            m_.wf32(B + 0x1E, z);
            translate(B + 0x16, M);
        }
        addObject(faces, verts, M, 0x10);
        render();
        copy(kVram, m_.r32(0x2B4C4), 0xFA00);
    }
    sceneFree();
    freeFaces(faces);
    freeVerts(verts);
    blackDac();
    memset(kVram, 0, 0xFA00);
}

}  // namespace lasse
