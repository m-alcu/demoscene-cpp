// Checks the .670 player against the original driver.
//
// tests/data/muzik0_ref.bin was recorded from the original RBGDEMO2 running
// under ../rea/rbgdemo2-analisis/emu386.py: for each SB interrupt after the
// song starts, the 140-byte block the DSP was given and every OPL write the
// interrupt made. Records: 'T' u32 tick, 140 bytes; 'O' chip reg val.
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "player670.h"

namespace {

int failures = 0;

void check(bool ok, const std::string& what) {
    if (!ok) {
        std::printf("FAIL: %s\n", what.c_str());
        failures++;
    }
}

struct RefTick {
    std::vector<uint8_t> block;
    std::vector<rbg::Player670::OplWrite> writes;
};

std::vector<RefTick> readRef(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    std::vector<uint8_t> d((std::istreambuf_iterator<char>(f)), {});
    std::vector<RefTick> ticks;
    for (size_t p = 0; p < d.size();) {
        if (d[p] == 'T') {
            ticks.push_back({std::vector<uint8_t>(d.begin() + (long)p + 5, d.begin() + (long)p + 145), {}});
            p += 145;
        } else {
            if (!ticks.empty()) ticks.back().writes.push_back({d[p + 1], d[p + 2], d[p + 3]});
            p += 4;
        }
    }
    return ticks;
}

std::string hex(const rbg::Player670::OplWrite& w) {
    char b[32];
    std::snprintf(b, sizeof b, "chip%d %02X=%02X", w.chip, w.reg, w.val);
    return b;
}

void compareWithOriginal(const std::string& song, const std::string& ref) {
    const std::vector<RefTick> want = readRef(ref);
    check(!want.empty(), "reference " + ref + " is readable");
    if (want.empty()) return;

    rbg::Player670 p;
    check(p.load(song), "loads " + song + " (" + p.error() + ")");
    p.logWrites = true;
    // The reference starts at the first tick of the song, which is the
    // player's second: the sequencer reads the first row on tick 1 and the
    // notes reach the chips on tick 2.
    p.tick();
    int badBlocks = 0, badWrites = 0;
    for (size_t t = 0; t < want.size(); t++) {
        p.tick();
        if (std::memcmp(p.dmaBlock(), want[t].block.data(), 140) != 0) {
            if (badBlocks++ < 3) {
                int i = 0;
                while (p.dmaBlock()[i] == want[t].block[(size_t)i]) i++;
                std::printf("  tick %zu: DMA block differs from byte %d (%02X, want %02X)\n", t, i,
                            p.dmaBlock()[i], want[t].block[(size_t)i]);
            }
        }
        const auto& got = p.writes;
        bool same = got.size() == want[t].writes.size();
        for (size_t i = 0; same && i < got.size(); i++)
            same = got[i].chip == want[t].writes[i].chip && got[i].reg == want[t].writes[i].reg &&
                   got[i].val == want[t].writes[i].val;
        if (!same && badWrites++ < 3) {
            std::printf("  tick %zu: %zu OPL writes, want %zu\n", t, got.size(), want[t].writes.size());
            for (size_t i = 0; i < std::max(got.size(), want[t].writes.size()) && i < 12; i++)
                std::printf("    %-16s %s\n", i < got.size() ? hex(got[i]).c_str() : "-",
                            i < want[t].writes.size() ? hex(want[t].writes[i]).c_str() : "-");
        }
    }
    std::printf("%s: %zu ticks, %d blocks and %d write lists differ\n", song.c_str(), want.size(),
                badBlocks, badWrites);
    check(badBlocks == 0, "digital mix matches the original");
    check(badWrites == 0, "OPL writes match the original");
}

void renderIsSane(const std::string& song) {
    rbg::Player670 p;
    check(p.load(song), "loads " + song);
    std::vector<float> buf(rbg::Player670::kOutPerTick * 2);
    double sum = 0.0;
    float peak = 0.0f;
    const int ticks = 57 * 10;
    for (int t = 0; t < ticks; t++) {
        p.tick();
        p.render(buf.data());
        for (float s : buf) {
            sum += (double)s * s;
            peak = std::max(peak, std::fabs(s));
        }
    }
    const double rms = std::sqrt(sum / (ticks * buf.size()));
    std::printf("%s: 10 s rendered, rms %.3f, peak %.3f\n", song.c_str(), rms, peak);
    check(rms > 0.02, "the music is audible");
    check(peak < 1.0f, "the music does not clip");
}

}  // namespace

int main(int argc, char** argv) {
    const std::string dir = argc > 1 ? argv[1] : ".";
    compareWithOriginal(dir + "/assets/muzik0.670", dir + "/tests/data/muzik0_ref.bin");
    compareWithOriginal(dir + "/assets/muzik1.670", dir + "/tests/data/muzik1_ref.bin");
    renderIsSane(dir + "/assets/muzik0.670");
    renderIsSane(dir + "/assets/muzik1.670");
    std::printf(failures ? "%d FAILED\n" : "all passed\n", failures);
    return failures ? 1 : 0;
}
