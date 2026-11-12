// The feedback zoomer against the intro (tests/ref.txt): all 3034 frames of
// part 6 in order, each drawn at the clock the intro read for it; the CRC32
// of the picture, of the DAC and of the tiles A and B compared.
#include <cstdio>
#include <memory>

#include "feedback.h"

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
}  // namespace

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1] : "tests/ref.txt";
    FILE* f = std::fopen(path, "r");
    if (!f) {
        std::perror(path);
        return 1;
    }
    auto fb = std::make_unique<feedback::Feedback>();
    int frames = 0, bad = 0;
    char line[256];
    while (std::fgets(line, sizeof line, f)) {
        int n;
        unsigned clock, pic, dac, a, b;
        if (std::sscanf(line, "frame %d %u %x %x %x %x", &n, &clock, &pic, &dac, &a, &b) != 6) continue;
        fb->frame((int32_t)clock);
        const uint32_t gp = crc32(fb->screen(), 256 * feedback::H), gd = crc32(fb->dac(), 0xC0),
                       ga = crc32(fb->picA(), 0x10000), gb = crc32(fb->picB(), 0x10000);
        frames++;
        if (gp != pic || gd != dac || ga != a || gb != b) {
            if (bad < 10)
                std::printf("frame %d (clock %u): picture %08x/%08x dac %08x/%08x A %08x/%08x B %08x/%08x\n", n, clock,
                            gp, pic, gd, dac, ga, a, gb, b);
            bad++;
        }
    }
    std::fclose(f);
    std::printf("%d frames, %d differ\n", frames, bad);
    const bool ok = bad == 0 && frames == feedback::kFrames;
    std::printf(ok ? "all passed\n" : "FAILED\n");
    return ok ? 0 : 1;
}
