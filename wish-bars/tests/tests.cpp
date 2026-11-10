// Checks the port against the original. tests/data/*.txt were recorded by running the part's code
// from WISH.EXE under emulation with a scanline beam model (rea/wish-analisis/bars/emu.py). Each
// line is "frame crc dac_crc": CRC-32 of the 320x200 picture the beam shows and of the 768 DAC
// values (6-bit).
//   frames.txt         the whole part, no keys: 1995 frames, then the part returns
//   frames_esc500.txt  Esc down from frame 500 on: the Esc fade, 572 frames
#include <cstdio>
#include <string>

#include "bars.h"

static int check(const std::string& path, int esc_from) {
    FILE* f = std::fopen(path.c_str(), "r");
    if (!f) { std::fprintf(stderr, "no reference %s\n", path.c_str()); return 1; }
    wb::Bars b;
    int frame, checked = 0, bad = 0;
    unsigned want, want_dac;
    while (std::fscanf(f, "%d %x %x", &frame, &want, &want_dac) == 3) {
        if (!b.step(esc_from >= 0 && frame >= esc_from)) {
            std::printf("%s: the port ended before frame %d\n", path.c_str(), frame);
            bad++;
            break;
        }
        const uint32_t got = wb::crc32(b.frame(), wb::W * wb::H), dac = wb::crc32(b.dac(), 768);
        checked++;
        if (got != want || dac != want_dac) {
            if (bad < 10) std::printf("frame %d: %08x/%08x, original %08x/%08x\n", frame, got, dac, want, want_dac);
            bad++;
        }
    }
    std::fclose(f);
    if (b.step(esc_from >= 0)) {
        std::printf("%s: the port goes on after the original's last frame\n", path.c_str());
        bad++;
    }
    std::printf("%s: %d frames checked, %d differ\n", path.c_str(), checked, bad);
    return bad || !checked ? 1 : 0;
}

int main(int argc, char** argv) {
    const std::string root = std::string(argc > 1 ? argv[1] : ".") + "/tests/data/";
    const int a = check(root + "frames.txt", -1);
    const int b = check(root + "frames_esc500.txt", 500);
    return a | b;
}
