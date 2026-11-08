// Checks the port against the original: tests/data/shots.txt lists every DOSBox screenshot of the
// part (SECOND.EXE run in rea/2ndreal-analisis, shots 821-878, one every 0.5 s), as
// "frame shot crc dac_crc": the port's frame it matches, then CRC-32 of the shot's 320x200
// indices and of its 768 6-bit DAC values (PNG palette >> 2). Shots taken while the part waits
// for the music show the same frame.
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>

#include "water.h"

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    water::Water w;
    if (!w.init(root + "/data")) return 1;
    FILE* f = std::fopen((root + "/tests/data/shots.txt").c_str(), "r");
    if (!f) { std::fprintf(stderr, "no reference shots\n"); return 1; }
    struct Ref { int frame, shot; unsigned crc, dac; };
    std::vector<Ref> refs;
    Ref r;
    while (std::fscanf(f, "%d %d %x %x", &r.frame, &r.shot, &r.crc, &r.dac) == 4) refs.push_back(r);
    std::fclose(f);
    std::stable_sort(refs.begin(), refs.end(), [](const Ref& a, const Ref& b) { return a.frame < b.frame; });

    int checked = 0, bad = 0;
    size_t i = 0;
    for (int g = 0; i < refs.size() && w.step(); g++) {
        for (; i < refs.size() && refs[i].frame == g; i++) {
            const uint32_t got = water::crc32(w.pixels(), water::W * water::H), dac = water::crc32(w.dac(), 768);
            checked++;
            if (got != refs[i].crc || dac != refs[i].dac) {
                std::printf("shot %d, frame %d: %08x/%08x, original %08x/%08x\n", refs[i].shot, g, got, dac,
                            refs[i].crc, refs[i].dac);
                bad++;
            }
        }
    }
    int frames = 0;
    for (w.reset(); w.step();) frames++;
    std::printf("%d shots checked, %d differ; the part runs %d frames (expected %d)\n", checked, bad, frames,
                water::END);
    return bad || checked != (int)refs.size() || frames != water::END ? 1 : 0;
}
