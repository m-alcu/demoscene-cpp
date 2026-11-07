// module.cpp: MOD and S3M loaders
#include "module.h"

#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>

namespace modvis {

namespace {

struct Reader {
    const std::vector<uint8_t>& d;
    size_t size() const { return d.size(); }
    uint8_t u8(size_t o) const { return o < d.size() ? d[o] : 0; }
    uint16_t le16(size_t o) const { return (uint16_t)(u8(o) | u8(o + 1) << 8); }
    uint32_t le32(size_t o) const { return (uint32_t)le16(o) | (uint32_t)le16(o + 2) << 16; }
    uint16_t be16(size_t o) const { return (uint16_t)(u8(o) << 8 | u8(o + 1)); }
    std::string str(size_t o, size_t n) const {
        std::string s;
        for (size_t i = 0; i < n; ++i) {
            const uint8_t c = u8(o + i);
            if (!c) break;
            s += (c >= 32 && c < 127) ? (char)c : ' ';
        }
        while (!s.empty() && s.back() == ' ') s.pop_back();
        return s;
    }
};

void makeThumb(Sample& s) {
    const int cols = 96;
    s.thumbMin.assign(cols, 0.f);
    s.thumbMax.assign(cols, 0.f);
    if (s.data.empty()) return;
    for (int c = 0; c < cols; ++c) {
        const size_t a = s.data.size() * c / cols, b = std::max(a + 1, s.data.size() * (c + 1) / cols);
        float lo = 1, hi = -1;
        for (size_t i = a; i < b && i < s.data.size(); ++i) {
            lo = std::min(lo, s.data[i]);
            hi = std::max(hi, s.data[i]);
        }
        s.thumbMin[c] = lo;
        s.thumbMax[c] = hi;
    }
}

void fixLoop(Sample& s) {
    const uint32_t len = (uint32_t)s.data.size();
    if (s.loopEnd > len) s.loopEnd = len;
    if (s.loopStart >= s.loopEnd) s.loop = false;
    if (!s.loop) s.loopStart = s.loopEnd = 0;
}

bool isDigit(uint8_t c) { return c >= '0' && c <= '9'; }

// ---------------------------------------------------------------------------- MOD

Module loadMod(const Reader& r) {
    Module m;
    m.format = Format::MOD;
    const std::string sig = r.str(1080, 4);
    const uint8_t s[4] = {r.u8(1080), r.u8(1081), r.u8(1082), r.u8(1083)};
    int channels = 0;
    if (r.size() >= 1084) {
        if (sig == "M.K." || sig == "M!K!" || sig == "FLT4" || sig == "4CHN" || sig == "M&K!" || sig == "N.T.")
            channels = 4;
        else if (sig == "OCTA" || sig == "CD81" || sig == "FLT8")
            channels = 8;
        else if (isDigit(s[0]) && s[1] == 'C' && s[2] == 'H' && s[3] == 'N')
            channels = s[0] - '0';
        else if (isDigit(s[0]) && isDigit(s[1]) && s[2] == 'C' && (s[3] == 'H' || s[3] == 'N'))
            channels = (s[0] - '0') * 10 + (s[1] - '0');
    }
    const bool old = channels == 0;  // Ultimate Soundtracker style, 15 samples, no signature
    if (old) channels = 4;
    if (channels < 1 || channels > 32) throw std::runtime_error("unsupported MOD channel count");
    const int nsmp = old ? 15 : 31;
    const size_t ordOff = old ? 472 : 952, patOff = old ? 600 : 1084;
    m.channels = channels;
    m.title = r.str(0, 20);
    m.typeName = old ? "Soundtracker MOD (15 samples)" : "ProTracker MOD (" + sig + ")";
    m.tracker = old ? "Soundtracker" : (channels == 4 ? "ProTracker" : "multichannel tracker");
    m.amigaLimits = channels == 4;

    const int songLen = std::clamp<int>(r.u8(ordOff - 2), 1, 128);
    int maxPat = 0;
    for (int i = 0; i < 128; ++i) maxPat = std::max<int>(maxPat, r.u8(ordOff + i));
    for (int i = 0; i < songLen; ++i) m.orders.push_back(r.u8(ordOff + i));
    if (old && maxPat > 63) throw std::runtime_error("not a module");

    const size_t patBytes = (size_t)64 * channels * 4;
    m.patterns.resize(maxPat + 1);
    for (int p = 0; p <= maxPat; ++p) {
        Pattern& pat = m.patterns[p];
        pat.rows = 64;
        pat.cells.resize((size_t)64 * channels);
        const size_t base = patOff + p * patBytes;
        for (int i = 0; i < 64 * channels; ++i) {
            const size_t o = base + (size_t)i * 4;
            const uint8_t b0 = r.u8(o), b1 = r.u8(o + 1), b2 = r.u8(o + 2), b3 = r.u8(o + 3);
            Cell& c = pat.cells[i];
            c.inst = (uint8_t)((b0 & 0xF0) | (b2 >> 4));
            const int period = (b0 & 0x0F) << 8 | b1;
            if (period) c.note = (uint8_t)std::clamp((int)std::lround(48 + 12 * std::log2(428.0 / period)), 0, 119);
            c.cmd = b2 & 0x0F;
            c.param = b3;
        }
    }

    size_t off = patOff + (maxPat + 1) * patBytes;
    m.samples.resize(nsmp);
    for (int i = 0; i < nsmp; ++i) {
        const size_t h = 20 + (size_t)i * 30;
        Sample& smp = m.samples[i];
        smp.name = r.str(h, 22);
        const uint32_t len = r.be16(h + 22) * 2u;
        int ft = r.u8(h + 24) & 15;
        if (ft > 7) ft -= 16;
        smp.finetune = ft;
        smp.c2spd = (int)std::lround(8363.0 * std::pow(2.0, ft / 96.0));
        smp.volume = std::min<int>(r.u8(h + 25), 64);
        uint32_t ls = r.be16(h + 26) * 2u, ll = r.be16(h + 28) * 2u;
        if (old) ls /= 2;  // Soundtracker loop start is in bytes
        smp.loop = ll > 2;
        smp.loopStart = ls;
        smp.loopEnd = ls + ll;
        const size_t n = off < r.size() ? std::min<size_t>(len, r.size() - off) : 0;
        smp.data.resize(n);
        for (size_t k = 0; k < n; ++k) smp.data[k] = (int8_t)r.d[off + k] / 128.f;
        off += len;
        if (smp.loop && smp.loopEnd > n && ls < n) smp.loopEnd = (uint32_t)n;
        fixLoop(smp);
        makeThumb(smp);
    }
    for (int c = 0; c < channels; ++c) m.pan.push_back((c & 3) == 0 || (c & 3) == 3 ? 0 : 255);
    return m;
}

// ---------------------------------------------------------------------------- S3M

Module loadS3m(const Reader& r) {
    Module m;
    m.format = Format::S3M;
    m.title = r.str(0, 28);
    const int ordNum = r.le16(0x20), insNum = r.le16(0x22), patNum = r.le16(0x24);
    const int flags = r.le16(0x26), cwtv = r.le16(0x28), ffi = r.le16(0x2A);
    m.globalVolume = std::min<int>(r.u8(0x30), 64);
    m.initSpeed = r.u8(0x31) ? r.u8(0x31) : 6;
    m.initTempo = r.u8(0x32) >= 32 ? r.u8(0x32) : 125;
    m.stereo = (r.u8(0x33) & 0x80) != 0;
    const bool panTable = r.u8(0x35) == 252;
    m.amigaLimits = (flags & 16) != 0;
    m.fastVolSlides = (flags & 64) != 0 || cwtv == 0x1300;
    m.typeName = "Scream Tracker 3 S3M";
    char tr[64];
    switch (cwtv >> 12) {
        case 1: std::snprintf(tr, sizeof tr, "Scream Tracker %d.%02x", (cwtv >> 8) & 15, cwtv & 0xFF); break;
        case 2: std::snprintf(tr, sizeof tr, "Imago Orpheus %d.%02x", (cwtv >> 8) & 15, cwtv & 0xFF); break;
        case 3: std::snprintf(tr, sizeof tr, "Impulse Tracker %d.%02x", (cwtv >> 8) & 15, cwtv & 0xFF); break;
        case 4: std::snprintf(tr, sizeof tr, "Schism Tracker"); break;
        case 5: std::snprintf(tr, sizeof tr, "OpenMPT"); break;
        default: std::snprintf(tr, sizeof tr, "unknown tracker %04x", cwtv);
    }
    m.tracker = tr;

    // channels: the enabled PCM ones (settings 0..15), packed in order
    int map[32];
    std::vector<int> raw;
    for (int i = 0; i < 32; ++i) {
        const uint8_t cs = r.u8(0x40 + i);
        map[i] = -1;
        if (cs < 16) {
            map[i] = (int)raw.size();
            raw.push_back(i);
        }
    }
    if (raw.empty()) throw std::runtime_error("S3M without PCM channels");
    m.channels = (int)raw.size();

    size_t o = 0x60;
    for (int i = 0; i < ordNum; ++i) m.orders.push_back(r.u8(o + i));
    o += ordNum;
    std::vector<size_t> insPtr, patPtr;
    for (int i = 0; i < insNum; ++i) insPtr.push_back((size_t)r.le16(o + i * 2) * 16);
    o += insNum * 2;
    for (int i = 0; i < patNum; ++i) patPtr.push_back((size_t)r.le16(o + i * 2) * 16);
    o += patNum * 2;
    for (int ch : raw) {
        const uint8_t cs = r.u8(0x40 + ch);
        int p = cs < 8 ? 3 : 12;
        if (panTable && (r.u8(o + ch) & 0x20)) p = r.u8(o + ch) & 15;
        m.pan.push_back(p * 17);
    }

    m.samples.resize(insNum);
    for (int i = 0; i < insNum; ++i) {
        const size_t h = insPtr[i];
        Sample& s = m.samples[i];
        s.name = r.str(h + 0x30, 28);
        if (r.u8(h) != 1) {  // AdLib or empty
            makeThumb(s);
            continue;
        }
        const size_t dataOff = (((size_t)r.u8(h + 0x0D) << 16) | r.le16(h + 0x0E)) * 16;
        uint32_t len = r.le32(h + 0x10);
        s.loopStart = r.le32(h + 0x14);
        s.loopEnd = r.le32(h + 0x18);
        s.volume = std::min<int>(r.u8(h + 0x1C), 64);
        const uint8_t sflags = r.u8(h + 0x1F);
        s.loop = (sflags & 1) != 0;
        s.c2spd = (int)r.le32(h + 0x20);
        if (s.c2spd <= 0) s.c2spd = 8363;
        const bool is16 = (sflags & 4) != 0;
        const bool unsig = ffi != 1;
        const size_t bps = is16 ? 2 : 1;
        if (dataOff >= r.size()) len = 0;
        else len = (uint32_t)std::min<size_t>(len, (r.size() - dataOff) / bps);
        s.data.resize(len);
        for (uint32_t k = 0; k < len; ++k) {
            if (is16) {
                const uint16_t v = r.le16(dataOff + k * 2);
                s.data[k] = (unsig ? (int)v - 32768 : (int16_t)v) / 32768.f;
            } else {
                const uint8_t v = r.u8(dataOff + k);
                s.data[k] = (unsig ? (int)v - 128 : (int8_t)v) / 128.f;
            }
        }
        fixLoop(s);
        makeThumb(s);
    }

    m.patterns.resize(patNum);
    for (int p = 0; p < patNum; ++p) {
        Pattern& pat = m.patterns[p];
        pat.rows = 64;
        pat.cells.resize((size_t)64 * m.channels);
        size_t q = patPtr[p];
        if (!q) continue;
        const size_t end = q + r.le16(q);
        q += 2;
        for (int row = 0; row < 64 && q < r.size() && q <= end + 2;) {
            const uint8_t what = r.u8(q++);
            if (!what) {
                ++row;
                continue;
            }
            Cell dummy;
            const int ch = map[what & 31];
            Cell& c = ch >= 0 ? pat.cells[(size_t)row * m.channels + ch] : dummy;
            if (what & 32) {
                const uint8_t n = r.u8(q++);
                c.note = n == 255 ? (uint8_t)NOTE_NONE : n == 254 ? (uint8_t)NOTE_CUT : (uint8_t)std::min((n >> 4) * 12 + (n & 15), 119);
                c.inst = r.u8(q++);
            }
            if (what & 64) c.vol = std::min<uint8_t>(r.u8(q++), 64);
            if (what & 128) {
                c.cmd = r.u8(q++);
                c.param = r.u8(q++);
                if (c.cmd > 26) c.cmd = 0;
            }
        }
    }
    // orders that point at missing patterns are skipped
    for (auto& ord : m.orders)
        if (ord < 254 && ord >= patNum) ord = 254;
    return m;
}

bool endsWith(std::string s, const char* ext) {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    const size_t n = std::strlen(ext);
    return s.size() >= n && s.compare(s.size() - n, n, ext) == 0;
}

}  // namespace

Module loadModule(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) throw std::runtime_error("cannot open file");
    std::vector<uint8_t> d((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    if (d.size() < 64) throw std::runtime_error("file too small");
    d.resize(d.size() + 16, 0);  // padding for header reads past the end
    const Reader r{d};
    Module m;
    if (r.str(0x2C, 4) == "SCRM")
        m = loadS3m(r);
    else if (endsWith(path, ".s3m"))
        throw std::runtime_error("not an S3M file");
    else
        m = loadMod(r);
    if (m.orders.empty() || m.patterns.empty()) throw std::runtime_error("module has no song");
    return m;
}

std::string Module::noteName(uint8_t note) const {
    if (note == NOTE_NONE) return "...";
    if (note == NOTE_CUT) return "^^^";
    static const char* names[12] = {"C-", "C#", "D-", "D#", "E-", "F-", "F#", "G-", "G#", "A-", "A#", "B-"};
    int oct = note / 12 - (format == Format::MOD ? 2 : 0);
    char b[8];
    std::snprintf(b, sizeof b, "%s%d", names[note % 12], std::max(oct, 0));
    return b;
}

std::string Module::effectText(uint8_t cmd, uint8_t param) const {
    char b[8];
    if (format == Format::MOD) {
        if (cmd == 0 && param == 0) return "...";
        std::snprintf(b, sizeof b, "%X%02X", cmd, param);
    } else {
        if (cmd == 0) return "...";
        std::snprintf(b, sizeof b, "%c%02X", 'A' + cmd - 1, param);
    }
    return b;
}

}  // namespace modvis
