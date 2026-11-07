// Checks every frame of the port against the original firmware run under the harness in
// ../../rea/kaleido-analisis (tests/data/frames.txt: global frame number, CRC-32 of the
// 512x768 RGB24 picture).
#include <cstdio>
#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "demo.h"

static uint32_t crc32(const uint8_t* p, size_t n) {
    static uint32_t table[256];
    static bool init = false;
    if (!init) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
        init = true;
    }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    std::map<long, uint32_t> ref;
    FILE* f = std::fopen((root + "/tests/data/frames.txt").c_str(), "r");
    if (!f) { std::fprintf(stderr, "no reference frames\n"); return 1; }
    long n; unsigned c;
    while (std::fscanf(f, "%ld %x", &n, &c) == 2) ref[n] = c;
    std::fclose(f);

    auto demo = std::make_unique<kb::Demo>();
    if (!demo->init(root + "/data")) return 1;
    std::vector<uint8_t> rgb(512 * 768 * 3);
    int bad = 0, checked = 0;
    while (!demo->finished) {
        const long fr = demo->frame;
        demo->run_frame();
        demo->video.to_rgb(rgb.data());
        const uint32_t got = crc32(rgb.data(), rgb.size());
        auto it = ref.find(fr);
        if (it == ref.end()) { std::printf("frame %ld: no reference\n", fr); bad++; continue; }
        checked++;
        if (it->second != got) {
            if (bad < 10) std::printf("frame %ld: %08x, original %08x\n", fr, got, it->second);
            bad++;
        }
    }
    if (checked != (int)ref.size()) { std::printf("%d frames shown, %zu in the reference\n", checked, ref.size()); bad++; }
    std::printf("%d frames checked, %d differ\n", checked, bad);
    return bad ? 1 : 0;
}
