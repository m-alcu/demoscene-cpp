// The generators at their defaults against the intro's textures: the CRC32s
// that ctslasse-knot/tests/ref.txt has for them, read from the intro's
// memory. The warp and the light use plain doubles here, not the x87, and
// still come out the same.
#include <cstdio>
#include <vector>

#include "texgen.h"

using namespace texlab;

int main() {
    int failures = 0;
    std::vector<uint8_t> t(kTexels);
    auto check = [&](const char* name, const uint8_t* p, unsigned n, uint32_t want) {
        const uint32_t got = crc32(p, n);
        std::printf("%-8s %08x %s\n", name, got, got == want ? "ok" : "MISMATCH");
        failures += got != want;
    };

    hexes(HexParams{}, t.data());
    check("hexes", t.data(), kTexels, 0xf87e3a55);

    uint8_t pal[768];
    palette(PaletteParams{}, pal);
    check("palette", pal, sizeof pal, 0x393a7415);

    warp(WarpParams{}, t.data());
    check("plasma", t.data(), kTexels, 0xee9bdf4f);

    lighting(LightParams{}, t.data());
    check("light", t.data(), kTexels, 0xca63e2fa);

    std::printf(failures ? "FAILED\n" : "all passed\n");
    return failures ? 1 : 0;
}
