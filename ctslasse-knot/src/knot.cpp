// Part 5's set-up and its frame (19CEDh).
#include <cstring>

#include "knot.h"

namespace knot {

Knot::Knot(int res)
    : res_(res < 1 ? 1 : res > kMaxRes ? kMaxRes : res), w_(W * res_), h_(H * res_),
      // the screen's centre (160, 100) and the projection's scales, 2 * (240
      // << 15) and 2 * (200 << 15), in 16.16 (17710h, 17779h); times RES
      cx_(10485760.0f * res_), cy_(6553600.0f * res_), sx_(15728640.0f * res_), sy_(13107200.0f * res_) {
    precalc();
    // the tube: 48 rings of 6 along the knot, twisted 3.8 radians over its
    // length; once around and seven times along the texture (182FEh)
    gridFaces();
    sweep(3.8f, 0.0f);
    tubeTex();
    std::memset(fb_, 0, sizeof fb_);
    std::memset(dac_, 0x3F, sizeof dac_);          // the part before ends in white
}

float Knot::partTime(int32_t clock) {
    Fpu f;
    f.fld((X)clock);
    f.fdiv(813440.2376280001);
    return f.fstpf();
}

void Knot::frame(int32_t clock) {
    F.fld((X)clock);
    F.fdiv(813440.2376280001);
    const float T = F.fstf();
    // the palette: in from white over T 0-0.5 (183CBh), out over 15-16 (1839Eh)
    if (F.fcomp(0.5).jb()) {
        F.fld(T), F.fmul(2.0f), F.fmul(64.0f);
        F.frndint();
        const int32_t level = F.fistp();
        for (int i = 0; i < 768; i++) dac_[i] = (uint8_t)((pal_[i] * level + 0xFC0 - level * 0x3F) >> 6);
        dacSet_ = true;
    } else if (!dacSet_) {
        // started past the fade-in (never in the intro): the palette in full
        std::memcpy(dac_, pal_, sizeof dac_);
        dacSet_ = true;
    }
    if (fadeOut) {
        F.fld(T);
        if (F.fcomp(15.0f).ja()) {
            F.fld(16.0f), F.fsub(T), F.fmul(64.0f);
            F.frndint();
            const int32_t level = F.fistp();
            for (int i = 0; i < 768; i++) dac_[i] = (uint8_t)((pal_[i] * level) >> 6);
        }
    }

    // the background: the hexagons rocking back and forth, 0.75 radians each
    // way every 2 T, mirrored at half size (the zoom RES times smaller and the
    // centre RES times further at a higher resolution)
    F.fld(2.0);
    F.fld(T);
    F.fprem();
    F.fxch(), F.fstp(0);
    F.fadd(-1.0), F.fabs_(), F.fadd(-0.5), F.fmul(1.5);
    roto(F.fstpf(), (int32_t)0xFFFF8000 / res_, 0xA0 * res_, 0x64 * res_);

    // the camera 3.8 from the centre, looking along +y, rolling slowly
    F.fld(T);
    const double dT = F.fstpd();
    const Vec eye = {0, -3.8f, 0}, at = {0, 0, 0}, up = {0, 0, 1};
    F.fld(dT), F.fmul(0.1);
    camera(M_, eye, at, up, F.fstpf());
    F.fstp(0);
    // the knot turned about y, then about its own (turned) x
    Vec ax = {1, 0, 0};
    const Vec ay = {0, 1, 0};
    F.fld(dT), F.fmul(0.24355444332163223);
    F.fadd(12.0);
    axisAngle(ay, R_);
    matmul(M_, R_, M_);
    transform(ax, R_, ax);
    F.fld(dT), F.fmul(0.4024719595007231), F.fadd(0.4);
    axisAngle(ax, R_);
    matmul(M_, R_, M_);
    // flying in from behind and above over the first 2 T
    F.fld(T);
    if (F.fcomp(2.0f).jb()) {
        F.fld(T), F.fadd(-2.0f);
        const float a = F.fstf();
        F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(5.0);
        F.fld(a);
        F.fxch();
        const float z = F.fstpf();
        F.fcos(), F.fld1(), F.fsubrp(1), F.fmul(3.0);
        const float y = F.fstpf();
        const Vec v = {0, y, z};
        translate(v, M_);
    }
    addObject(M_);
    render();
}

void Knot::toArgb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)(dac_[3 * i + k] & 0x3F) * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    for (int i = 0; i < w_ * h_; i++) out[i] = lut[fb_[i]];
}

}  // namespace knot
