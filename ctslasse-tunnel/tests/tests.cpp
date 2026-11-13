// The tunnel against the intro (tests/ref.txt): the texture and light tables,
// then part 8's frames in order (T 0-72: the drops, the plane, the tunnel, the fade),
// each at the clock the intro read for it; the CRC32 of the screen, the DAC
// and the grid compared.
#include <cstdio>
#include <memory>

#include "tunnel.h"

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
    auto p = std::make_unique<tunnel::Tunnel>(true);   // the intro's texture, with the logo
    int failures = 0, frames = 0, bad = 0;
    char line[256];
    while (std::fgets(line, sizeof line, f)) {
        int n;
        unsigned clock, scr, dac, grid, tex, light;
        if (std::sscanf(line, "tex %x %x", &tex, &light) == 2) {
            const uint32_t gt = crc32(p->texture(), 0x10000), gl = crc32(p->lightTable(), 0x8200);
            std::printf("texture %08x %s, light %08x %s\n", gt, gt == tex ? "ok" : "MISMATCH", gl,
                        gl == light ? "ok" : "MISMATCH");
            failures += (gt != tex) + (gl != light);
        } else if (std::sscanf(line, "frame %d %u %x %x %x", &n, &clock, &scr, &dac, &grid) == 5) {
            p->frame((int32_t)clock);
            const uint32_t gs = crc32(p->screen(), 64000), gd = crc32(p->dac(), 768), gg = crc32(p->grid(), 0x31F8);
            frames++;
            if (gs != scr || gd != dac || gg != grid) {
                if (bad < 10)
                    std::printf("frame %d (clock %u, T %.3f): screen %08x/%08x dac %08x/%08x grid %08x/%08x\n", n,
                                clock, tunnel::Tunnel::partTime((int32_t)clock), gs, scr, gd, dac, gg, grid);
                bad++;
            }
        }
    }
    std::fclose(f);
    std::printf("%d frames, %d differ\n", frames, bad);
    failures += bad + (frames != 3435);
    std::printf(failures ? "FAILED\n" : "all passed\n");
    return failures ? 1 : 0;
}
