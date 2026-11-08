// Replays the update ticks the original made before each of its frames (as run in the harness,
// rea/megademo-analisis: tests/data/replay.txt, "frame crc pattern-of-each-tick...") and checks
// every picture against the original's (CRC-32 of the 320x200 RGB24 frame).
#include <cstdio>
#include <sstream>
#include <string>
#include <vector>

#include "feedback.h"

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    mf::Feedback fx;
    if (!fx.init(root + "/data")) return 1;
    FILE* f = std::fopen((root + "/tests/data/replay.txt").c_str(), "r");
    if (!f) { std::fprintf(stderr, "no replay data\n"); return 1; }
    std::vector<uint8_t> rgb(mf::W * mf::H * 3);
    char line[4096];
    int checked = 0, bad = 0;
    while (std::fgets(line, sizeof line, f)) {
        std::istringstream in(line);
        int frame; std::string crc_s; int pattern;
        if (!(in >> frame >> crc_s)) continue;
        while (in >> pattern) fx.tick(pattern);
        fx.frame();
        fx.to_rgb24(rgb.data());
        const unsigned want = (unsigned)std::stoul(crc_s, nullptr, 16), got = mf::crc32(rgb.data(), rgb.size());
        checked++;
        if (got != want) {
            if (bad < 10) std::printf("frame %d: %08x, original %08x\n", frame, got, want);
            bad++;
        }
    }
    std::fclose(f);
    std::printf("%d frames checked, %d differ\n", checked, bad);
    return bad || !checked ? 1 : 0;
}
