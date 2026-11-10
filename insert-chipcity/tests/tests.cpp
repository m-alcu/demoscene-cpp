// insert-chipcity tests: the port against the GL trace of the original intro
// (rea/rzr-insert-analisis, frames 23017-26021 of trace/insert.trace, made under Wine 9.0).
//
//   tests DATA_DIR TESTDATA_DIR
//
// 1. display lists 1, 3, 4, 5 are call-for-call the original's (tests/data/lists.txt);
// 2. data/atlas.png is the original texture (CRC of the BGR bytes of the traced upload);
// 3. every one of the 3005 traced frames: the port emits the identical call stream (CRC32 of
//    the apitrace-format text, floats with round-trip precision).
//
// The original's frame times are not in the trace, but they are recoverable exactly: only phase
// differences matter, the scene started one 2^-19 step below b = 32 (the traced first frames
// only fit that), and later phases are floats in [32, 64), i.e. 32 + n*2^-18. Each frame's n
// is found by search (seeded from the traced camera angle), then its whole call stream is
// compared.
#include <SDL3/SDL.h>

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "chipcity.h"
#include "gl_record.h"

using namespace icc;

namespace {

int failures = 0;
#define CHECK(c, ...)                                  \
    do {                                               \
        if (!(c)) {                                    \
            std::printf("FAIL %s:%d: ", __FILE__, __LINE__); \
            std::printf(__VA_ARGS__);                  \
            std::printf("\n");                         \
            failures++;                                \
        }                                              \
    } while (0)

struct RefFrame {
    uint32_t crc;
    int ncalls;
    float tilt, spin, cam_y, cam_z, y00, y1515;
};

std::vector<RefFrame> load_frames(const std::string& path) {
    std::vector<RefFrame> v;
    std::ifstream f(path);
    std::string l;
    while (std::getline(f, l)) {
        if (l.empty() || l[0] == '#') continue;
        std::istringstream s(l);
        int idx;
        std::string crc, a[6];
        RefFrame r;
        s >> idx >> crc >> r.ncalls >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
        r.crc = (uint32_t)std::strtoul(crc.c_str(), nullptr, 16);
        float* fs[6] = {&r.tilt, &r.spin, &r.cam_y, &r.cam_z, &r.y00, &r.y1515};
        for (int i = 0; i < 6; i++) *fs[i] = std::strtof(a[i].c_str(), nullptr);
        v.push_back(r);
    }
    return v;
}

void test_lists(const std::string& dir) {
    std::ifstream f(dir + "/lists.txt");
    std::string l, expect;
    while (std::getline(f, l)) expect += (l.rfind("list ", 0) == 0 ? "" : l + "\n");
    GlRecord rec;
    ChipCity cc;
    std::vector<uint8_t> dummy(256 * 256 * 3);
    cc.init(rec, dummy.data());
    std::string got;
    bool in = false;
    std::istringstream s(rec.text);
    while (std::getline(s, l)) {
        if (l.rfind("glNewList", 0) == 0) { in = true; continue; }
        if (l.rfind("glEndList", 0) == 0) { in = false; continue; }
        if (in) got += l + "\n";
    }
    CHECK(got == expect, "display lists differ from the trace");
    std::printf("lists: %zu bytes compared\n", expect.size());
}

void test_atlas(const std::string& data, const std::string& dir) {
    SDL_Surface* s = SDL_LoadPNG((data + "/atlas.png").c_str());
    CHECK(s, "cannot load atlas.png: %s", SDL_GetError());
    if (!s) return;
    SDL_Surface* rgb = SDL_ConvertSurface(s, SDL_PIXELFORMAT_RGB24);
    std::vector<uint8_t> bgr;
    for (int y = 0; y < 256; y++) {
        const uint8_t* p = (const uint8_t*)rgb->pixels + y * rgb->pitch;
        for (int x = 0; x < 256; x++) {
            bgr.push_back(p[3 * x + 2]);
            bgr.push_back(p[3 * x + 1]);
            bgr.push_back(p[3 * x + 0]);
        }
    }
    SDL_DestroySurface(rgb);
    SDL_DestroySurface(s);
    std::ifstream f(dir + "/atlas_bgr.crc32");
    std::string want;
    f >> want;
    char got[16];
    std::snprintf(got, sizeof got, "%08x", crc32(bgr.data(), bgr.size()));
    CHECK(want == got, "atlas crc %s, trace %s", got, want.c_str());
    std::printf("atlas: crc %s\n", got);
}

const float kB0 = 32.0f - 1.0f / 524288;  // scene start: one float step below 32
const double kUlp = 1.0 / 262144;         // 2^-18, the float spacing in [32, 64)

// Phase of frame n >= 1 (n = 0 is the start frame itself).
float phase_at(long n) { return n == 0 ? kB0 : (float)(32.0 + (n - 1) * kUlp); }

bool cheap_match(const RefFrame& r, float b, float swing_cos) {
    const ChipCity::Camera c = ChipCity::camera(kB0, b, swing_cos);
    return c.tilt == r.tilt && c.spin == r.spin && c.cam_y == r.cam_y && c.cam_z == r.cam_z &&
           ChipCity::height(kB0, b, c.amp, 0, 0) == r.y00 &&
           ChipCity::height(kB0, b, c.amp, 15, 15) == r.y1515;
}

void test_frames(const std::string& dir) {
    const std::vector<RefFrame> ref = load_frames(dir + "/frames.txt");
    CHECK(ref.size() == 3005, "frames.txt has %zu frames", ref.size());
    GlRecord rec;
    ChipCity cc;
    std::vector<uint8_t> dummy(256 * 256 * 3);
    cc.init(rec, dummy.data());
    long k_prev = 0, dk = 0;
    bool swinging = false;
    float b_swing = 0;
    int exact = 0, searched_max = 0, swing_frame = -1;
    for (size_t f = 0; f < ref.size(); f++) {
        const RefFrame& r = ref[f];
        // The swing quad (9 calls) shows up in the last frames: 2084 calls, like the flash frames.
        const bool swing_now = !swinging && f > 1000 && r.ncalls == 2084;
        long k = -1;
        if (f == 0) {
            k = 0;
        } else {
            const long seed = swinging || swing_now
                                  ? k_prev + dk
                                  : std::lround(((120.0 - r.spin) / 8.0 - (32.0 - kB0)) / kUlp) + 1;
            for (long d = 0; d <= 40000 && k < 0; d++) {
                for (long cand : {seed + d, seed - d}) {
                    const float b = phase_at(cand);
                    const float sc = swinging ? ChipCity::swing_cos(b, b_swing) : 1.0f;
                    if (cheap_match(r, b, sc)) { k = cand; searched_max = std::max<long>(searched_max, d); break; }
                }
            }
        }
        CHECK(k >= 0, "frame %zu: no phase reproduces the camera", f);
        if (k < 0) break;
        const float b = phase_at(k);
        rec.clear();
        if (f == 0) cc.start(rec, b);
        if (swing_now) {
            cc.swing(b);
            swinging = true;
            b_swing = b;
            swing_frame = (int)f;
        }
        cc.frame(rec, b);
        const uint32_t crc = crc32(rec.text.data(), rec.text.size());
        if (crc == r.crc && (int)rec.calls == r.ncalls) exact++;
        else if (failures < 10) {
            if (const char* dump = std::getenv("ICC_DUMP_FAIL")) {
                if (FILE* o = std::fopen(dump, "w")) { std::fputs(rec.text.c_str(), o); std::fclose(o); }
            }
            CHECK(false, "frame %zu (k=%ld): crc %08x/%zu calls, trace %08x/%d calls", f, k, crc,
                  rec.calls, r.crc, r.ncalls);
        }
        dk = k - k_prev;
        k_prev = k;
    }
    std::printf("frames: %d/%zu exact; swing from frame %d; last phase offset %ld ulps "
                "(%.4f, %.3f s of music); max search %d\n",
                exact, ref.size(), swing_frame, k_prev, k_prev * kUlp,
                k_prev * kUlp * 180 / (100 * 3.14159274), searched_max);
    CHECK(exact == (int)ref.size(), "%zu frames not exact", ref.size() - exact);
}

}  // namespace

int main(int argc, char** argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: tests DATA_DIR TESTDATA_DIR\n");
        return 2;
    }
    test_lists(argv[2]);
    test_atlas(argv[1], argv[2]);
    test_frames(argv[2]);
    std::printf(failures ? "FAILED (%d)\n" : "OK\n", failures);
    return failures ? 1 : 0;
}
