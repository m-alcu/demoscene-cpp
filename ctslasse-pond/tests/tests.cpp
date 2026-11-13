// The pond against the intro without its logo (tests/ref.txt): the marble
// and the light tables, then part 8's frames in order (T 0-17: the drops,
// the plane blending in), each at the clock the intro read for it; the CRC32
// of the screen, the DAC and the grid compared. The reference is the port's
// part 8 with its texture replaced by the marble the intro makes before
// embossing the logo; its DAC and grid are the original's.
// The 32-bit picture has no reference: every 10th frame, it is checked to
// stay close to the 256-colour one (the mean difference per channel).
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <vector>

#include "pond.h"

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
    auto p = std::make_unique<pond::Pond>();
    int failures = 0, frames = 0, bad = 0, far = 0;
    double worst = 0;
    std::vector<uint32_t> a(pond::W * pond::H), b(pond::W * pond::H);
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
                                clock, pond::Pond::partTime((int32_t)clock), gs, scr, gd, dac, gg, grid);
                bad++;
            }
            if (n % 10 == 0) {
                p->toArgb(a.data());
                p->toTrueColor(b.data());
                long sum = 0;
                for (int i = 0; i < pond::W * pond::H; i++)
                    for (int k = 0; k < 24; k += 8) sum += std::abs((int)(a[i] >> k & 0xFF) - (int)(b[i] >> k & 0xFF));
                const double d = sum / (3.0 * pond::W * pond::H);
                if (d > worst) worst = d;
                far += d > 16;
            }
        }
    }
    std::fclose(f);
    std::printf("%d frames, %d differ\n", frames, bad);
    std::printf("32-bit colour: at most %.2f from the 256 colours per channel, on average; %d frames too far\n", worst,
                far);
    failures += bad + far + (frames == 0);
    std::printf(failures ? "FAILED\n" : "all passed\n");
    return failures ? 1 : 0;
}
