// The end part checked frame by frame against the original, and the module
// player checked for sense.
//
// tests/data/end_crc.bin and esc_crc.bin hold a CRC-32 per retrace of what
// the original showed under the harness in ../../rea/appeal-analisis (retrace,
// volume, DAC, screen): run to the end, and with Esc pressed at retrace 1500.
//
// Usage: hexappeal_tests <project dir>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

#include "endpart.h"
#include "modplayer.h"

namespace {

int failures = 0;

void check(bool ok, const std::string& what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what.c_str());
    if (!ok) failures++;
}

uint32_t crc32(uint32_t crc, const uint8_t* p, size_t n) {
    static uint32_t table[256];
    if (!table[1])
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t c = i;
            for (int k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320u ^ (c >> 1) : c >> 1;
            table[i] = c;
        }
    crc = ~crc;
    while (n--) crc = table[(crc ^ *p++) & 0xFF] ^ (crc >> 8);
    return ~crc;
}

std::vector<uint32_t> readCrcs(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    std::vector<uint8_t> b((std::istreambuf_iterator<char>(f)), {});
    std::vector<uint32_t> out(b.size() / 4);
    std::memcpy(out.data(), b.data(), out.size() * 4);
    return out;
}

uint32_t frameCrc(long retrace, const hex::EndPart& p) {
    const uint32_t head[2] = {(uint32_t)retrace, (uint32_t)p.volume()};
    uint32_t c = crc32(0, (const uint8_t*)head, sizeof head);
    c = crc32(c, p.dac(), 768);
    return crc32(c, p.screen(), hex::kScreenW * hex::kScreenH);
}

// Runs the part as main.cpp does, with Esc pressed at `esc` (0: never).
void endPartAgainst(const std::string& root, const std::string& ref, long esc) {
    const std::vector<uint32_t> want = readCrcs(root + "/tests/data/" + ref);
    hex::EndPart part;
    if (!part.load(root + "/assets")) {
        check(false, "load assets: " + part.error());
        return;
    }
    part.start();
    std::vector<uint32_t> got{frameCrc(0, part)};
    for (long r = 1; r < 100000; r++) {
        if (r == esc) part.key(0x01);
        if (r == esc + 2) part.key(0x81);
        part.retrace();
        part.frame();
        if (part.finished()) break;
        got.push_back(frameCrc(r, part));
    }
    size_t first = 0;
    while (first < got.size() && first < want.size() && got[first] == want[first]) first++;
    check(!want.empty() && got.size() == want.size() && first == want.size(),
          ref + ": " + std::to_string(got.size()) + " frames against " + std::to_string(want.size()) +
              ", identical up to " + std::to_string(first));
}

void modPlayer(const std::string& root) {
    hex::ModPlayer m;
    check(m.load(root + "/assets/libertine.mod"), "load libertine.mod " + m.error());
    check(m.channels() == 6 && m.songLength() == 32, "6 channels, 32 positions");

    m.seek(19, 55);
    check(m.position() == 19 && m.row() == 55 && m.tick() == 0, "seek to position 19, row 55");

    // From there to the end the song goes on to position 31, whose last row
    // jumps back to 21 (B15h); the speed changes to 8 on the way.
    std::vector<float> buf(2 * 960);
    int lastPos = 19, maxPos = 19, jumpedTo = -1;
    bool speed8 = false;
    double peak = 0.0, sum = 0.0;
    long frames = 0;
    bool finite = true;
    while (frames < 200L * hex::ModPlayer::kRate && jumpedTo < 0) {
        m.render(buf.data(), 960);
        for (float v : buf) {
            finite = finite && std::isfinite(v);
            peak = std::max(peak, (double)std::fabs(v));
            sum += (double)v * v;
        }
        frames += 960;
        if (m.position() < lastPos) jumpedTo = m.position();
        lastPos = m.position();
        maxPos = std::max(maxPos, lastPos);
        speed8 = speed8 || m.speed() == 8;
    }
    check(maxPos == 31 && jumpedTo == 21, "plays on to position 31, then back to 21 (got " +
                                              std::to_string(jumpedTo) + ")");
    check(speed8, "speed 8 seen");
    const double seconds = (double)frames / hex::ModPlayer::kRate;
    std::printf("     position 19 row 55 to the loop: %.1f s, peak %.3f, rms %.4f\n", seconds, peak,
                std::sqrt(sum / (double)(frames * 2)));
    check(finite && peak <= 1.0 && peak > 0.2, "output finite, within range, not quiet");

    // the music system's volume: 0 is silence
    m.seek(19, 55);
    m.setVolume(0);
    m.render(buf.data(), 960);
    bool silent = true;
    for (float v : buf) silent = silent && v == 0.0f;
    check(silent, "volume 0 is silence");

    // the same start gives the same sound
    hex::ModPlayer a, b;
    a.load(root + "/assets/libertine.mod");
    b.load(root + "/assets/libertine.mod");
    a.seek(19, 55);
    b.seek(19, 55);
    std::vector<float> x(2 * 48000), y(2 * 48000);
    a.render(x.data(), 48000);
    b.render(y.data(), 48000);
    check(x == y, "deterministic");
}

}  // namespace

int main(int argc, char** argv) {
    const std::string root = argc > 1 ? argv[1] : ".";
    endPartAgainst(root, "end_crc.bin", 0);
    endPartAgainst(root, "esc_crc.bin", 1500);
    modPlayer(root);
    std::printf("%s\n", failures ? "FAILED" : "all passed");
    return failures ? 1 : 0;
}
