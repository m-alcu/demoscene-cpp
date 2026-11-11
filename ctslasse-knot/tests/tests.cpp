// The knot against the original intro (tests/ref.txt): the precalculated
// textures and palette, then all 762 frames of part 5, each drawn at the
// clock the original read for it, the picture's and the DAC's CRC32 compared.
#include <cstdio>
#include <cstring>
#include <memory>

#include "knot.h"

namespace {
uint32_t crc32(const uint8_t* p, size_t n) {
    static uint32_t table[256];
    if (!table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

// The picture as the reference's CRC reads it: the VGA's memory in mode 13h
// (chain-4) scanned plane by plane, each row its 80 pixels of plane 0, then
// of plane 1, 2 and 3 (pixel x is at plane x & 3).
uint32_t pictureCrc(const uint8_t* fb) {
    uint8_t scan[knot::W * knot::H];
    uint8_t* o = scan;
    for (int y = 0; y < knot::H; y++)
        for (int pl = 0; pl < 4; pl++)
            for (int i = 0; i < 80; i++) *o++ = fb[y * knot::W + i * 4 + pl];
    return crc32(scan, sizeof scan);
}
}  // namespace

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1] : "tests/ref.txt";
    FILE* f = std::fopen(path, "r");
    if (!f) {
        std::perror(path);
        return 1;
    }
    auto k = std::make_unique<knot::Knot>();
    int failures = 0, frames = 0, badFrames = 0;
    char line[256];
    while (std::fgets(line, sizeof line, f)) {
        char name[32];
        unsigned crc, pic, dac;
        int frame, clock;
        if (std::sscanf(line, "tex %31s %x", name, &crc) == 2) {
            const uint8_t* p = nullptr;
            size_t n = 0x10000;
            if (!std::strcmp(name, "light")) p = k->lightTex();
            else if (!std::strcmp(name, "plasma")) p = k->plasmaTex();
            else if (!std::strcmp(name, "hexes")) p = k->hexTex();
            else if (!std::strcmp(name, "palette")) p = k->palette(), n = 768;
            const uint32_t got = p ? crc32(p, n) : 0;
            std::printf("%-8s %08x %s\n", name, got, got == crc ? "ok" : "MISMATCH");
            failures += got != crc;
        } else if (std::sscanf(line, "frame %d %d %x %x", &frame, &clock, &pic, &dac) == 4) {
            k->frame(clock);
            const uint32_t gp = pictureCrc(k->screen()), gd = crc32(k->dac(), 768);
            frames++;
            if (gp != pic || gd != dac) {
                if (badFrames < 10)
                    std::printf("frame %d (clock %d): picture %08x/%08x dac %08x/%08x\n", frame, clock, gp, pic, gd,
                                dac);
                badFrames++;
            }
        }
    }
    std::fclose(f);
    std::printf("%d frames, %d differ\n", frames, badFrames);
    failures += badFrames;
    if (frames != 762) failures++;
    std::printf(failures ? "FAILED\n" : "all passed\n");
    return failures ? 1 : 0;
}
