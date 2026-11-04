// Tests for the port, without SDL.
//
// The scenario tests run the mag with the inputs of a capture of the
// original (made with the Unicorn harness in rea/imphobia-analisis) and
// compare what is in video memory and in the DAC at every frame with what
// the original had: tests/data/*.txt hold the input schedule and the
// sequence of distinct (planes, DAC) CRC-32s. Repeated states are dropped on
// both sides, since the original spends frames the port does not (measuring
// the timer before the main menu).
//
// usage: imphobia10_tests <source dir>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "mag.h"
#include "modplayer.h"
#include "vga.h"

namespace {

int failures = 0;

#define CHECK(c)                                                              \
    do {                                                                      \
        if (!(c)) {                                                           \
            std::fprintf(stderr, "%s:%d: CHECK(%s) failed\n", __FILE__, __LINE__, #c); \
            failures++;                                                       \
        }                                                                     \
    } while (0)

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t crc32(const uint8_t* p, size_t n, uint32_t c = 0) {
    c = ~c;
    while (n--) {
        c ^= *p++;
        for (int k = 0; k < 8; k++) c = (c >> 1) ^ (0xEDB88320u & (0u - (c & 1)));
    }
    return ~c;
}

struct Stop {};

// Runs the mag on this thread: each wait for a frame records the state,
// gives the inputs due at that raster frame and does the timer's end of
// frame.
class ScenarioHost : public imp::Host {
public:
    imp::Vga vga;
    imp::Mag* mag = nullptr;
    int rasterFrames = 0, limit = 0;
    std::multimap<int, uint8_t> keys;
    std::map<int, std::vector<int>> mice;
    std::vector<std::pair<uint32_t, uint32_t>> states;
    std::vector<std::string> saved;

    void waitFrame() override {
        uint32_t pc = 0;
        for (auto& p : vga.planes) pc = crc32(p.data(), p.size(), pc);
        const uint32_t dc = crc32(vga.dac, 768);
        if (states.empty() || states.back() != std::make_pair(pc, dc)) states.push_back({pc, dc});
        if (mag->raster()) {
            if (rasterFrames >= limit) throw Stop{};
            auto r = keys.equal_range(rasterFrames);
            for (auto it = r.first; it != r.second; ++it) mag->key(it->second);
            auto m = mice.find(rasterFrames);
            if (m != mice.end()) mag->mouseDriver(m->second[0], m->second[1], m->second[2]);
            rasterFrames++;
        }
        mag->endOfFrame();
    }
    void playModule(const std::string&) override {}
    void stopMusic() override {}
    void setMusicVolume(int) override {}
    void saveFile(const std::string& name, const std::vector<uint8_t>&) override { saved.push_back(name); }
};

bool scenario(const std::string& dir, const std::string& name, const std::vector<uint8_t>& image,
              const std::vector<uint8_t>& dat, ScenarioHost* outHost = nullptr) {
    std::ifstream in(dir + "/tests/data/" + name + ".txt");
    if (!in) {
        std::fprintf(stderr, "%s: no reference\n", name.c_str());
        return false;
    }
    ScenarioHost host;
    std::string line, word, value;
    std::vector<std::pair<uint32_t, uint32_t>> ref;
    while (std::getline(in, line)) {
        std::istringstream ls(line);
        ls >> word >> value;
        if (word == "frames") host.limit = std::atoi(value.c_str());
        else if (word == "keys" && value != "-") {
            std::istringstream ks(value);
            std::string item;
            while (std::getline(ks, item, ',')) {
                const int f = std::atoi(item.c_str());
                const uint8_t sc = (uint8_t)std::strtol(item.c_str() + item.find(':') + 1, nullptr, 16);
                host.keys.insert({f, sc});
                host.keys.insert({f + 3, (uint8_t)(sc | 0x80)});
            }
        } else if (word == "mouse" && value != "-") {
            std::istringstream ms(value);
            std::string item;
            while (std::getline(ms, item, ';')) {
                int f, x, y, b;
                if (std::sscanf(item.c_str(), "%d:%d:%d:%d", &f, &x, &y, &b) == 4) host.mice[f] = {x, y, b};
            }
        } else if (word.size() == 8) {
            ref.push_back({(uint32_t)std::strtoul(word.c_str(), nullptr, 16),
                           (uint32_t)std::strtoul(value.c_str(), nullptr, 16)});
        }
    }
    imp::Mag mag(host.vga, host, image, dat);
    host.mag = &mag;
    try {
        mag.run();
        host.waitFrame();   // the last state
    } catch (const Stop&) {
    }
    size_t n = std::min(ref.size(), host.states.size());
    for (size_t i = 0; i < n; i++) {
        if (ref[i] != host.states[i]) {
            std::fprintf(stderr, "%s: state %zu differs: original %08x %08x, port %08x %08x\n", name.c_str(), i,
                         ref[i].first, ref[i].second, host.states[i].first, host.states[i].second);
            return false;
        }
    }
    if (ref.size() != host.states.size()) {
        std::fprintf(stderr, "%s: %zu states in the original, %zu in the port\n", name.c_str(), ref.size(),
                     host.states.size());
        return false;
    }
    std::printf("%s: %zu states as in the original\n", name.c_str(), n);
    if (outHost) outHost->saved = host.saved;
    return true;
}

void testModules(const std::string& data) {
    // Each tune loads, has the channels its tag says and is not silent.
    const struct {
        const char* file;
        int channels;
    } tunes[] = {{"DATA.001", 4}, {"DATA.002", 8}, {"DATA.003", 4}, {"DATA.004", 4}};
    for (auto& t : tunes) {
        imp::ModPlayer p;
        CHECK(p.loadMemory(readFile(data + "/" + t.file)));
        CHECK(p.channels() == t.channels);
        std::vector<float> buf((size_t)imp::ModPlayer::kRate * 2 * 4);
        p.render(buf.data(), imp::ModPlayer::kRate * 4);
        double e = 0;
        for (float s : buf) e += (double)s * s;
        CHECK(e > 1.0);
        bool finite = true;
        for (float s : buf) finite = finite && std::isfinite(s);
        CHECK(finite);
        std::printf("%s: %d channels, energy %.1f in 4 s\n", t.file, p.channels(), e);
    }
}

}  // namespace

int main(int argc, char** argv) {
    const std::string dir = argc > 1 ? argv[1] : ".";
    const std::string data = dir + "/data";
    const auto image = readFile(data + "/imphob10.img");
    const auto dat = readFile(data + "/NFO10.DAT");
    if (image.size() != 67309 || dat.empty()) {
        std::fprintf(stderr, "data/imphob10.img and data/NFO10.DAT are needed (tools/extract_assets.py)\n");
        return 1;
    }
    for (const char* s : {"startup", "interviews", "ending", "mouse"}) CHECK(scenario(dir, s, image, dat));
    ScenarioHost h;
    CHECK(scenario(dir, "articles", image, dat, &h));
    CHECK(h.saved.size() == 1 && h.saved[0] == "outside.TXT");   // 'F' in the article
    testModules(data);
    if (failures) {
        std::fprintf(stderr, "%d failure(s)\n", failures);
        return 1;
    }
    std::printf("all tests passed\n");
    return 0;
}
