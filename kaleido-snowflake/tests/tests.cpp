// Checks every frame against the reference pictures (tests/data/frames.txt: frame number and
// CRC-32 of the 512x768 RGB24 canvas).
#include <cstdint>
#include <cstdio>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "demo.h"

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    std::map<long, uint32_t> ref;
    FILE* f = std::fopen((root + "/tests/data/frames.txt").c_str(), "r");
    if (!f) { std::fprintf(stderr, "no reference frames\n"); return 1; }
    long n; unsigned c;
    while (std::fscanf(f, "%ld %x", &n, &c) == 2) ref[n] = c;
    std::fclose(f);

    auto demo = std::make_unique<ks::Demo>();
    if (!demo->init(root + "/data")) return 1;
    std::vector<uint8_t> rgb(ks::W * ks::H * 3);
    int bad = 0, checked = 0;
    while (!demo->finished()) {
        const long fr = demo->frame();
        demo->step();
        demo->to_rgb24(rgb.data());
        const uint32_t got = ks::crc32(rgb.data(), rgb.size());
        auto it = ref.find(fr);
        if (it == ref.end()) { std::printf("frame %ld: no reference\n", fr); bad++; continue; }
        checked++;
        if (it->second != got) {
            if (bad < 10) std::printf("frame %ld: %08x, reference %08x\n", fr, got, it->second);
            bad++;
        }
    }
    if (checked != (int)ref.size()) { std::printf("%d frames shown, %zu in the reference\n", checked, ref.size()); bad++; }
    std::printf("%d frames checked, %d differ\n", checked, bad);
    return bad ? 1 : 0;
}
