// The port checked frame by frame against references (tests/data) taken
// from the earlier version of the port, which modelled the VGA and the GUS
// at the port level and matched the original under the analysis harness
// (../../rea/asm94-analisis) frame by frame and GUS write by GUS write:
//
//  - full.bin: a CRC-32 of the picture shown (320 x lines palette indices)
//    and of the palette for each frame over 400 s (the intro loops its
//    text until Esc);
//  - esc400.bin, esc900.bin, esc3000.bin: the same with Esc pressed at
//    those frames (the turning words, the title, the text writer), to the
//    intro's end.
//
// Each file: "A94P", the frame count, then two CRCs a frame (little-endian
// 32-bit words). The music has no reference: the mixer is not the GUS.
//
// Usage: asm94_tests <project dir>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "demo.h"
#include "machine.h"

namespace {

int failures = 0;

void check(bool ok, const std::string& what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what.c_str());
    std::fflush(stdout);
    if (!ok) failures++;
}

uint32_t crc32(const void* data, size_t n, uint32_t c = 0) {
    static uint32_t table[256];
    if (!table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = k & 1 ? 0xEDB88320u ^ (k >> 1) : k >> 1;
            table[i] = k;
        }
    const uint8_t* p = static_cast<const uint8_t*>(data);
    c = ~c;
    while (n--) c = table[(c ^ *p++) & 0xFF] ^ (c >> 8);
    return ~c;
}

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t u32(const std::vector<uint8_t>& b, size_t at) {
    uint32_t v;
    std::memcpy(&v, &b[at], 4);
    return v;
}

// The intro headless for SECONDS (or to its end), Esc down from the middle
// of the frame before ESC for three frames (none if negative): picture,
// palette, a frame after another.
std::vector<uint32_t> run(const std::vector<uint8_t>& image, double seconds, long esc) {
    std::vector<uint32_t> r;
    asm94::Machine m(image);
    asm94::Demo demo(m);
    std::vector<uint8_t> px;
    m.frame = [&](long n) {
        int lines = 0;
        px.clear();
        if (m.screen.graphics) m.picture(px, lines);
        r.push_back(crc32(px.data(), px.size()));
        r.push_back(crc32(m.screen.palette, 768));
        if (esc >= 0 && n + 1 == esc) m.press(1);
        if (esc >= 0 && n + 1 == esc + 3) m.press(0x81);
    };
    m.start([&] { demo.main(); });
    m.run(seconds);
    m.stop();
    return r;
}

void frames(const std::string& name, const std::vector<uint8_t>& ref, const std::vector<uint32_t>& r) {
    if (ref.size() < 8 || u32(ref, 0) != 0x50343941u) {
        check(false, name + ": no reference");
        return;
    }
    const long n = u32(ref, 4), got = (long)r.size() / 2;
    long bad = -1;
    for (long i = 0; i < n && i < got && bad < 0; i++)
        if (u32(ref, 8 + i * 8) != r[2 * i] || u32(ref, 12 + i * 8) != r[2 * i + 1]) bad = i;
    char what[160];
    if (bad >= 0) std::snprintf(what, sizeof what, "%s: frame %ld differs", name.c_str(), bad);
    else std::snprintf(what, sizeof what, "%s: %ld frames (the port made %ld)", name.c_str(), n, got);
    check(bad < 0 && got == n, what);
}

}  // namespace

int main(int argc, char** argv) {
    const std::string dir = argc > 1 ? argv[1] : ".";
    const auto image = readFile(dir + "/data/asm94.img");
    if (image.empty()) {
        std::printf("FAIL %s/data/asm94.img missing (tools/extract_assets.py)\n", dir.c_str());
        return 1;
    }
    frames("400 s", readFile(dir + "/tests/data/full.bin"), run(image, 400.0, -1));
    // Esc in each part: the intro ends there
    for (long k : {400L, 900L, 3000L})
        frames("Esc at frame " + std::to_string(k), readFile(dir + "/tests/data/esc" + std::to_string(k) + ".bin"),
               run(image, 120.0, k));
    std::printf("%s\n", failures ? "FAILED" : "all passed");
    return failures ? 1 : 0;
}
