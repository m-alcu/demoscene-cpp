// The pool's checks.
//
// The water: the intro's three drops (frame()), frame by frame up to T 8,
// at the clock the intro read for each, against the CRC32 of the grid in
// tests/ref.txt (logged from the ctslasse port, which matches the
// original). The grid does not depend on the texture or the palette, so it
// is still the intro's: the drops are the intro's water, to the bit.
//
// The bottom: the tiles, the grout and the lane line where they should be,
// and the 512 tiles the 256 ones at twice the detail.
//
// The caustics: still water lights the bottom evenly (1 everywhere); the
// small waves gather the light into lines (several times as bright) and
// leave less in between, but the light is the same in all, only moved.
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <vector>

#include "pool.h"

namespace {
// The standard CRC-32 (as zlib, PNG and `cksum -a crc32b` compute it), the
// one the reference was logged with: a 32-bit fingerprint of each buffer.
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

using piscina::Caustics;

// the light over the screen's part of the bottom (0-320 x 0-200 texels):
// its mean, least and most, and the share of it under 1
struct Stats {
    double mean, lo, hi, under;
};
Stats screenLight(const Caustics& c) {
    Stats s{0, 1e9, 0, 0};
    int n = 0;
    const int x0 = (int)(-Caustics::kCX / Caustics::kCell), y0 = (int)(-Caustics::kCY / Caustics::kCell);
    const int nx = (int)(piscina::W / Caustics::kCell), ny = (int)(piscina::H / Caustics::kCell);
    for (int y = y0; y < y0 + ny; y++)
        for (int x = x0; x < x0 + nx; x++) {
            const double e = c.map[(size_t)y * Caustics::kCW + x];
            s.mean += e, s.lo = std::min(s.lo, e), s.hi = std::max(s.hi, e), s.under += e < 1;
            n++;
        }
    s.mean /= n, s.under /= n;
    return s;
}

int failures = 0;
void check(bool ok, const char* what) {
    std::printf("  %s %s\n", ok ? "ok      " : "FAILED  ", what);
    failures += !ok;
}
}  // namespace

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1] : "tests/ref.txt";
    FILE* f = std::fopen(path, "r");
    if (!f) {
        std::perror(path);
        return 1;
    }
    auto p = std::make_unique<piscina::Pool>();

    // --- the water: the intro's grid
    int frames = 0, bad = 0;
    char line[256];
    while (std::fgets(line, sizeof line, f)) {
        int n;
        unsigned clock, scr, dac, grid;
        if (std::sscanf(line, "frame %d %u %x %x %x", &n, &clock, &scr, &dac, &grid) != 5) continue;
        if (piscina::Pool::partTime((int32_t)clock) >= piscina::kIntroEnd) break;
        p->frame((int32_t)clock);
        const uint32_t gg = crc32(p->grid(), 0x31F8);
        frames++;
        if (gg != grid) {
            if (bad < 10) std::printf("frame %d (clock %u): grid %08x, the intro's %08x\n", n, clock, gg, grid);
            bad++;
        }
    }
    std::fclose(f);
    std::printf("the water: %d frames of the intro's drops, %d grids differ\n", frames, bad);
    check(frames > 300 && bad == 0, "the drops' grid is the intro's");

    // --- the bottom
    {
        const uint8_t* t = p->texture();
        auto at = [&](int x, int y) { return (int)t[y << 8 | x]; };
        std::printf("the bottom: tile %d, grout %d, lane %d\n", at(4, 4), at(8, 4), at(148, 44));
        check(at(4, 4) > 140 && at(4, 4) < 175, "the tiles are aqua");
        check(at(8, 4) > at(4, 4) + 25 && at(40, 44) > at(44, 44) + 25, "the grout is paler than the tiles");
        check(at(148, 44) < 80 && at(172, 204) < 80 && at(140, 44) > 140, "the lane line is dark blue");
        // the 512 tiles against the 256 ones, by 8x8-texel blocks (16x16)
        double sum = 0;
        for (int by = 0; by < 32; by++)
            for (int bx = 0; bx < 32; bx++) {
                int m256 = 0, m512 = 0;
                for (int y = 0; y < 16; y++)
                    for (int x = 0; x < 16; x++) {
                        m512 += p->texture512()[(16 * by + y) << 9 | (16 * bx + x)];
                        if (x < 8 && y < 8) m256 += t[(8 * by + y) << 8 | (8 * bx + x)];
                    }
                sum += std::abs(m512 / 256.0 - m256 / 64.0);
            }
        std::printf("the 512 tiles: their 8x8 blocks %.2f from the 256 ones' on average\n", sum / 1024);
        check(sum / 1024 < 2, "the 512 tiles are the 256 ones");
    }

    // --- the caustics
    {
        piscina::Pool q;
        q.setRipples(0);
        q.pondFrame(5, {});
        // where the photons reach (-16..336 x -16..216), less two cells
        const Caustics& c = q.causticMap();
        double worst = 0;
        for (int y = 34; y < Caustics::kCH - 34; y++)
            for (int x = 34; x < Caustics::kCW - 34; x++) worst = std::max(worst, std::fabs(c.map[(size_t)y * Caustics::kCW + x] - 1.0));
        std::printf("still water: the light at most %.6f from 1\n", worst);
        check(worst < 1e-4, "still water lights the bottom evenly");
    }
    {
        piscina::Pool q;
        double hi = 0, mean = 0, under = 0;
        const int n = 6;
        for (int k = 0; k < n; k++) {
            q.pondFrame(5.0f + 3.1f * k, {});
            const Stats s = screenLight(q.causticMap());
            hi = std::max(hi, s.hi), mean += s.mean / n, under += s.under / n;
        }
        std::printf("the small waves: the light %.3f on average, at most %.2f, under 1 on %.0f%% of the bottom\n",
                    mean, hi, 100 * under);
        check(std::fabs(mean - 1) < 0.03, "the waves move the light, they neither make nor lose it");
        check(hi > 3, "the waves gather it into lines");
        check(under > 0.5, "and leave less between them");
    }
    {
        piscina::Pool q;
        q.setRipples(0);
        q.pondFrame(3, piscina::Pool::introDrops());
        const Stats s = screenLight(q.causticMap());
        std::printf("the intro's drops at T 3: the light %.3f on average, at most %.2f\n", s.mean, s.hi);
        check(std::fabs(s.mean - 1) < 0.05 && s.hi > 3, "a drop's ring gathers the light at its front");
    }
    std::printf(failures ? "FAILED\n" : "all passed\n");
    return failures ? 1 : 0;
}
