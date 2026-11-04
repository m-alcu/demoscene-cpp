// ctslasse - a C++17/SDL3 port of "Lasse Reinboeng", Cubic Team & $eeN's
// 64K intro (party version, December 1995).
//
// Usage: ctslasse --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus FILE]
//            [--snap N FILE]
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

#include "demo.h"
#include "machine.h"

namespace {

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t crc32(const uint8_t* p, size_t n, uint32_t c = 0) {
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
    c = ~c;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data = "data", dump, gusFile, snapFile;
    long frames = 0, snapAt = -1;
    bool idle = false;
    std::vector<long> keys;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        auto next = [&]() { return i + 1 < argc ? std::string(argv[++i]) : std::string(); };
        if (a == "--data") data = next();
        else if (a == "--dump") dump = next();
        else if (a == "--frames") frames = std::stol(next());
        else if (a == "--gus") gusFile = next();
        else if (a == "--idle") idle = true;
        else if (a == "--snap") snapAt = std::stol(next()), snapFile = next();
        else if (a == "--keys") {
            const std::string k = next();
            for (size_t p = 0; p < k.size();) {
                const size_t c = k.find(',', p);
                keys.push_back(std::stol(k.substr(p, c - p)));
                if (c == std::string::npos) break;
                p = c + 1;
            }
        }
    }
    const std::vector<uint8_t> image = readFile(data + "/ctslasse.img");
    if (image.empty()) {
        std::fprintf(stderr, "no %s/ctslasse.img (tools/extract_assets.py)\n", data.c_str());
        return 1;
    }
    lasse::Machine m(image);
    lasse::Demo demo(m);
    std::vector<std::pair<double, uint8_t>> k;
    for (long f : keys) k.push_back({(f - 0.5) / 70.0, 1}), k.push_back({(f + 2.5) / 70.0, 0x81});
    m.keys(k);
    FILE* gus = gusFile.empty() ? nullptr : std::fopen(gusFile.c_str(), "w");
    if (gus) m.gus.log = [gus](double t, int v, int r, uint32_t val) { std::fprintf(gus, "%.17g %d %x %x\n", t, v, r, val); };
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    m.frame = [&](long n, uint16_t start) {
        const std::vector<uint8_t> px = m.vga.scanout(start, m.p(lasse::kVram));
        std::fprintf(out, "%ld %08x %08x\n", n, crc32(px.data(), px.size()), crc32(m.vga.dac(), 768));
    };
    demo.snapAt = snapAt;
    demo.idle = idle;
    demo.snap = [&]() {
        FILE* f = std::fopen(snapFile.c_str(), "wb");
        std::fwrite(m.mem.data(), 1, m.mem.size(), f);
        std::fclose(f);
    };
    m.start([&] { demo.main(); });
    m.run(frames / 70.0);
    m.stop();
    std::fclose(out);
    if (gus) std::fclose(gus);
    return 0;
}
