// Checks the port against the original: tests/data/frames.txt was recorded by running ARNIAL.EXE
// under emulation (rea/arnial-analisis/emu.py). Each line is "frame start crc dac_crc": the frame
// shown at that retrace, as CRC-32 of the 160x120 picture and of the 768 DAC values.
#include <cstdio>
#include <string>

#include "arnial.h"

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    arn::Arnial a(1);
    if (!a.init(root + "/data")) return 1;
    FILE* f = std::fopen((root + "/tests/data/frames.txt").c_str(), "r");
    if (!f) { std::fprintf(stderr, "no reference frames\n"); return 1; }
    const uint32_t dac = arn::crc32(a.dac(), 768);
    int frame, start, checked = 0, bad = 0;
    unsigned want, want_dac;
    while (std::fscanf(f, "%d %d %x %x", &frame, &start, &want, &want_dac) == 4) {
        a.step();
        const uint32_t got = arn::crc32(a.pixels(), arn::W * a.height());
        checked++;
        if (got != want || dac != want_dac) {
            if (bad < 10) std::printf("frame %d: %08x/%08x, original %08x/%08x\n", frame, got, dac, want, want_dac);
            bad++;
        }
    }
    std::fclose(f);
    std::printf("%d frames checked, %d differ\n", checked, bad);
    return bad || !checked ? 1 : 0;
}
