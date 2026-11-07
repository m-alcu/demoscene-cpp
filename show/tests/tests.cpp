// The port against the original: Show under the analysis harness
// (../../rea/show-analisis) gave, for the whole demo (to its DOS exit), every
// frame (time, CRC of the picture as the CRTC reads it, of the DAC, and of
// the VGA port writes since the frame before: the raster effects) and every
// GUS register write (as a CRC per thousand writes, times included). The
// port must give the same.
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "cpu.h"
#include "demo.h"
#include "machine.h"

namespace {

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t crc32(const void* d, size_t n, uint32_t c = 0) {
    static uint32_t table[256];
    static bool init = false;
    if (!init) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
        init = true;
    }
    const uint8_t* p = (const uint8_t*)d;
    c = ~c;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

int check(const std::string& root, const std::string& name, double seconds) {
    show::Machine m;
    show::Demo demo(m, readFile(root + "/data/SHOW.EXE"));
    std::vector<std::string> frames;   // by frame number
    uint32_t vcrc = 0;
    m.vgaWrite = [&](double t, uint16_t p, uint8_t v) {
        char line[64];
        const int n = std::snprintf(line, sizeof line, "%.9f %x %x\n", t, p, v);
        vcrc = crc32(line, (size_t)n, vcrc);
    };
    m.frame = [&](long n, uint16_t start, uint8_t pan) {
        const std::vector<uint8_t> px = m.vga.scanout(start, pan);
        char line[96];
        std::snprintf(line, sizeof line, "%ld %.6f %08x %08x %08x", n, m.now(), crc32(px.data(), px.size()),
                      crc32(m.vga.dac(), 768), vcrc);
        vcrc = 0;
        if ((size_t)n >= frames.size()) frames.resize((size_t)n + 1);
        frames[(size_t)n] = line;
    };
    std::vector<uint32_t> gusCrc;
    long writes = 0;
    uint32_t c = 0;
    m.gus.log = [&](double t, int v, int r, uint32_t x) {
        char line[96];
        const int n = std::snprintf(line, sizeof line, "%.9f %d %x %x\n", t, v, r, x);
        c = crc32(line, (size_t)n, c);
        if (++writes % 1000 == 0) gusCrc.push_back(c), c = 0;
    };
    std::string error;
    m.start([&] {
        try {
            demo.main();
        } catch (const show::Quit&) {
            throw;
        } catch (const std::exception& e) {
            error = e.what();
        }
    });
    m.run(seconds);
    const bool ended = m.ended();
    const double endT = m.now();
    m.stop();
    if (writes % 1000) gusCrc.push_back(c);
    int bad = 0;
    if (!error.empty()) std::printf("%s: %s (t=%.6f)\n", name.c_str(), error.c_str(), endT), bad++;
    // frames
    std::ifstream rf(root + "/tests/data/" + name + ".frames.txt");
    std::string l;
    size_t i = 0, diff = 0;
    while (std::getline(rf, l)) {
        const size_t n = std::stoul(l.substr(0, l.find(' ')));
        const std::string mine = n < frames.size() ? frames[n] : std::string("(none)");
        if (l != mine && diff++ < 5) std::printf("%s: frame %zu: %s, the port %s\n", name.c_str(), n, l.c_str(), mine.c_str());
        i++;
    }
    std::printf("%s: %zu frames (the port %zu), %zu differ\n", name.c_str(), i, frames.size(), diff);
    bad += diff != 0 || i < 100 || frames.size() != i;
    // GUS writes
    std::ifstream gf(root + "/tests/data/" + name + ".gus.txt");
    long total = 0;
    gf >> total;
    size_t k = 0, gdiff = 0;
    std::string h;
    while (gf >> h) {
        if (k < gusCrc.size()) {
            char mine[16];
            std::snprintf(mine, sizeof mine, "%08x", gusCrc[k]);
            if (h != mine && gdiff++ < 3) std::printf("%s: GUS writes %zu-%zu differ\n", name.c_str(), k * 1000, k * 1000 + 999);
        }
        k++;
    }
    std::printf("%s: %ld GUS writes (the original %ld), %zu blocks of 1000 differ\n", name.c_str(), writes, total, gdiff);
    bad += gdiff != 0 || writes != total;
    // the end: DOS's exit, the text
    std::printf("%s: %s at t=%.6f; the text %s\n", name.c_str(), ended ? "the demo ended" : "still running", endT,
                demo.text.find("WTV") != std::string::npos ? "written" : "missing");
    bad += !ended || demo.text.find("WTV") == std::string::npos;
    return bad;
}

}  // namespace

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    const int bad = check(root, "full", 540.0);
    std::printf(bad ? "FAILED\n" : "all match\n");
    return bad ? 1 : 0;
}
