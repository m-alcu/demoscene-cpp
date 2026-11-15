// The loop and its morph, the picture and the frame dump (see playback.h).
#include "app/playback.h"

#include <cmath>
#include <cstdio>

namespace {

int32_t clockOf(double seconds) { return (int32_t)std::floor(seconds * tunnel::kPit); }

}  // namespace

double wrap(double t, double start, bool endless) {
    if (endless) {
        const double end = 2147483647.0 / tunnel::kPit;
        return t < end ? t : start + std::fmod(t - start, end - start);
    }
    const double from = start + kMorph;
    return t < kEndSeconds ? t : from + std::fmod(t - from, kEndSeconds - from);
}

void show(tunnel::Tunnel& k, double t, double start, bool endless) {
    const double into = t - (kEndSeconds - kMorph);
    if (endless || into <= 0) return k.frame(clockOf(t));
    const float w = (float)(0.5 - 0.5 * std::cos(M_PI * into / kMorph));
    k.morph(clockOf(t), clockOf(start + into), w, clockOf(kEndSeconds - kMorph), clockOf(start));
}

void picture(const tunnel::Tunnel& k, const View& v, std::vector<uint32_t>& argb) {
    argb.resize((size_t)v.w() * v.h());
    if (v.trueColor) k.toTrueColor(argb.data(), v.w(), v.h(), v.smooth);
    else k.toArgb(argb.data());
}

int dump(tunnel::Tunnel& k, const std::string& dir, int frames, double start, bool endless, const View& v) {
    std::vector<uint32_t> argb;
    for (int f = 0; f < frames; f++) {
        show(k, wrap(start + f / 70.0, start, endless), start, endless);
        picture(k, v, argb);
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) {
            std::perror(p);
            return 1;
        }
        std::fprintf(g, "P6\n%d %d\n255\n", v.w(), v.h());
        for (uint32_t c : argb) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, g);
        }
        std::fclose(g);
    }
    return 0;
}
