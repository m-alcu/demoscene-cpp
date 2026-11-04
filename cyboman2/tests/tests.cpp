// The port checked against the original, as the analysis harness in
// ../rea/cyboman2-analisis ran it (tests/data, from make_test_ref.py there):
//
//  - full.bin: a CRC-32 of the screen and of the DAC for each of the 13650
//    frames (70 Hz) the intro shows from its start to its end;
//  - esc3000.bin: the same with Esc pressed at frame 3000;
//  - gus.bin: the music's writes to the GUS (voice, register, value) over
//    the whole intro, a CRC-32 per 10000 of them.
//
// Usage: cyboman2_tests <project dir>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "gf1.h"
#include "music.h"
#include "runner.h"
#include "soundtrack.h"

namespace {

int failures = 0;

void check(bool ok, const std::string& what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what.c_str());
    if (!ok) failures++;
}

uint32_t crc32(uint32_t crc, const void* data, size_t n) {
    static uint32_t table[256];
    if (!table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t c = i;
            for (int k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320u ^ (c >> 1) : c >> 1;
            table[i] = c;
        }
    const uint8_t* p = (const uint8_t*)data;
    crc = ~crc;
    while (n--) crc = table[(crc ^ *p++) & 0xFF] ^ (crc >> 8);
    return ~crc;
}

std::vector<uint8_t> readFile(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

std::vector<uint32_t> words(const std::vector<uint8_t>& b) {
    std::vector<uint32_t> out(b.size() / 4);
    std::memcpy(out.data(), b.data(), out.size() * 4);
    return out;
}

// The intro run as main.cpp runs it, Esc held from frame `esc` (-1: never),
// its frames against the reference's.
void frames(const std::vector<uint8_t>& image, const std::string& ref, long esc, const std::string& what) {
    const std::vector<uint32_t> want = words(readFile(ref));
    if (want.empty()) {
        check(false, what + ": no " + ref);
        return;
    }
    cyb::Runner run;
    run.intro = std::make_unique<cyb::Intro>(run, image);
    run.start();
    long f = 0, bad = -1;
    const long n = (long)want.size() / 2;
    for (; f < n; f++) {
        if (f == esc) run.esc = true;
        if (!run.step()) break;
        const uint32_t v = crc32(0, run.intro->vram(), 64000), d = crc32(0, run.intro->dac(), 768);
        if (v != want[2 * f] || d != want[2 * f + 1]) {
            bad = f;
            break;
        }
    }
    run.stop();
    char msg[160];
    if (bad >= 0)
        std::snprintf(msg, sizeof msg, "%s: frame %ld differs", what.c_str(), bad);
    else if (f < n)
        std::snprintf(msg, sizeof msg, "%s: ended at frame %ld of %ld", what.c_str(), f, n);
    else
        std::snprintf(msg, sizeof msg, "%s: %ld frames", what.c_str(), n);
    check(bad < 0 && f == n, msg);
}

// The replay's GUS writes, interrupt by interrupt, against the harness's.
void music(const std::vector<uint8_t>& image, const std::string& ref) {
    const std::vector<uint32_t> want = words(readFile(ref));
    if (want.size() < 3) {
        check(false, "music: no " + ref);
        return;
    }
    const uint32_t irqs = want[0], writes = want[1];
    std::vector<uint32_t> got;
    uint32_t n = 0, block = 0;
    cyb::Gf1 gus;
    gus.log = [&](int v, int r, uint32_t x) {
        const int32_t rec[3] = {v, r, (int32_t)x};
        block = crc32(block, rec, sizeof rec);
        if (++n % 10000 == 0) got.push_back(block), block = 0;
    };
    cyb::Music m(image, gus);
    m.init();
    m.load();
    m.start();
    for (uint32_t i = 0; i < irqs; i++) m.irq();
    m.stop();
    if (n % 10000) got.push_back(block);
    size_t same = 0;
    while (same < got.size() && same + 2 < want.size() && got[same] == want[same + 2]) same++;
    char msg[160];
    std::snprintf(msg, sizeof msg, "music: %u interrupts, %u GUS writes (%u expected), %zu of %zu blocks the same",
                  irqs, n, writes, same, want.size() - 2);
    check(n == writes && same == want.size() - 2, msg);
}

// The soundtrack for sense: a minute of it, in range, not silent.
void soundtrack(const std::vector<uint8_t>& image) {
    cyb::Soundtrack s(image);
    std::vector<float> pcm;
    s.render(60.0, pcm);
    double sum = 0;
    float peak = 0;
    bool finite = true;
    for (float v : pcm) {
        finite = finite && std::isfinite(v);
        peak = std::max(peak, std::fabs(v));
        sum += (double)v * v;
    }
    const double rms = pcm.empty() ? 0 : std::sqrt(sum / pcm.size());
    char msg[160];
    std::snprintf(msg, sizeof msg, "soundtrack: 60 s, %zu frames, rms %.3f, peak %.3f", pcm.size() / 2, rms, peak);
    check(finite && pcm.size() == 2 * (size_t)(60.0 * cyb::Soundtrack::kRate) && rms > 0.02 && peak <= 1.0f, msg);
}

}  // namespace

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    const std::vector<uint8_t> image = readFile(root + "/data/cyboman2.img");
    if (image.size() < 0x40000) {
        std::printf("FAIL no %s/data/cyboman2.img (tools/extract_assets.py)\n", root.c_str());
        return 1;
    }
    frames(image, root + "/tests/data/full.bin", -1, "intro");
    frames(image, root + "/tests/data/esc3000.bin", 3000, "intro, Esc at frame 3000");
    music(image, root + "/tests/data/gus.bin");
    soundtrack(image);
    std::printf("%s\n", failures ? "FAILED" : "all passed");
    return failures ? 1 : 0;
}
