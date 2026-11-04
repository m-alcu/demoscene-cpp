// The port checked against the original, as the analysis harness in
// ../rea/drift-analisis ran it (tests/data, from make_test_ref.py there):
//
//  - full.bin: a CRC-32 of the picture (the plane bytes the CRTC reads)
//    and of the DAC for each frame (70 Hz) from where the port's program
//    starts (frame 133, 1.9 s) to the intro's end;
//  - esc6000.bin: the same with Esc pressed at frame 6000 (the Julia part);
//  - gus.bin: the music's writes to the GUS (voice, register, value) over
//    the whole intro, a CRC-32 per 10000 of them.
//
// Usage: drift_tests <project dir>
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

struct Run {
    std::vector<uint32_t> frames;       // picture, DAC, a frame after another
    std::vector<uint8_t> gus;           // (int32 voice, int32 register, uint32 value) records
};

// The intro headless from frame FIRST for COUNT frames, Esc held from half a
// frame before ESC for three frames (none if negative).
Run run(const std::vector<uint8_t>& image, long first, long count, long esc) {
    Run r;
    drift::Machine m(image);
    drift::Demo demo(m);
    m.gus.log = [&](double, int voice, int reg, uint32_t v) {
        const int32_t rec[3] = {voice, reg, (int32_t)v};
        const uint8_t* p = reinterpret_cast<const uint8_t*>(rec);
        r.gus.insert(r.gus.end(), p, p + 12);
    };
    m.frame = [&](long n, uint16_t start) {
        std::vector<uint8_t> px;
        if (m.vga.mode() == 0x12 || m.vga.mode() == 0x13) px = m.vga.scanout(start);
        if (n >= first) {
            r.frames.push_back(crc32(px.data(), px.size()));
            r.frames.push_back(crc32(m.vga.dac(), 768));
        }
        if (esc >= 0 && n + 1 == esc) m.key = 1;
        if (esc >= 0 && n + 1 == esc + 3) m.key = 0x81;
    };
    m.setClock(drift::kStart);
    m.start([&] { demo.run(); });
    // the frames asked for, then on until the program ends (its last GUS
    // writes come as it quits)
    for (long f = 0; f < first + count + 70; f++)
        if (!m.run((f + 0.5) / 70.0 + 1e-6)) break;
    m.stop();
    return r;
}

void frames(const std::string& name, const std::vector<uint8_t>& ref, const Run& r) {
    const long first = u32(ref, 0), n = u32(ref, 4);
    long bad = -1, got = (long)r.frames.size() / 2;
    for (long i = 0; i < n && i < got && bad < 0; i++)
        if (u32(ref, 8 + i * 8) != r.frames[2 * i] || u32(ref, 12 + i * 8) != r.frames[2 * i + 1]) bad = i;
    char what[160];
    if (bad >= 0) std::snprintf(what, sizeof what, "%s: frame %ld differs", name.c_str(), first + bad);
    else std::snprintf(what, sizeof what, "%s: %ld frames from %ld (the port made %ld)", name.c_str(), n, first, got);
    check(bad < 0 && got >= n, what);
}

}  // namespace

int main(int argc, char** argv) {
    const std::string dir = argc > 1 ? argv[1] : ".";
    const auto image = readFile(dir + "/data/drift.img");
    if (image.size() < 0x24000) {
        std::printf("FAIL %s/data/drift.img missing (tools/extract_assets.py)\n", dir.c_str());
        return 1;
    }
    const auto full = readFile(dir + "/tests/data/full.bin");
    const auto esc = readFile(dir + "/tests/data/esc6000.bin");
    const auto gus = readFile(dir + "/tests/data/gus.bin");

    // the whole intro: its frames and its music
    {
        const Run r = run(image, u32(full, 0), u32(full, 4), -1);
        frames("the whole intro", full, r);
        const size_t n = u32(gus, 0), got = r.gus.size() / 12;
        bool ok = got == n;
        for (size_t k = 0; ok && k * 10000 < n; k++) {
            const size_t len = std::min<size_t>(10000, n - k * 10000);
            ok = crc32(&r.gus[k * 120000], len * 12) == u32(gus, 4 + k * 4);
        }
        check(ok, "the music: " + std::to_string(n) + " GUS writes (the port made " + std::to_string(got) + ")");
    }
    // Esc in the Julia part: the intro ends there
    {
        const Run r = run(image, u32(esc, 0), u32(esc, 4), 6000);
        frames("Esc at frame 6000", esc, r);
    }
    std::printf("%s\n", failures ? "FAILED" : "all passed");
    return failures ? 1 : 0;
}
