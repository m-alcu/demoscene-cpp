#include "player670.h"

#include <algorithm>
#include <cstring>
#include <fstream>
#include <iterator>

#include "data/tables.h"

namespace rbg {
namespace {

uint32_t rd32(const std::vector<uint8_t>& f, size_t a) {
    return f[a] | (f[a + 1] << 8) | (f[a + 2] << 16) | ((uint32_t)f[a + 3] << 24);
}
uint16_t rd16(const std::vector<uint8_t>& f, size_t a) { return (uint16_t)(f[a] | (f[a + 1] << 8)); }

// Pattern commands: the top three bits of an event byte (jump table 3480h).
enum : uint8_t { kNote = 0, kVolumeCmd = 1, kWait = 2, kNextPattern = 3 };

}  // namespace

Player670::Player670() {
    for (auto& m : mix_) std::memset(m, 0x80, sizeof m);   // 4683h
    initChip(0);   // 44F3h: an SB Pro with both OPLs
    initChip(1);
    reset();
}

void Player670::opl(int chip, uint8_t reg, uint8_t val) {
    chip_[chip].write(reg, val);
    if (logWrites) writes.push_back({(uint8_t)chip, reg, val});
}

void Player670::initChip(int chip) {
    opl(chip, 0x01, 0x20);
    opl(chip, 0xBD, 0x00);
    opl(chip, 0x08, 0x00);
    resetChip(chip);
}

void Player670::resetChip(int chip) {
    for (uint8_t r = 0xB0; r < 0xB9; r++) opl(chip, r, 0x00);   // keys off
    for (uint8_t op : kOpOffset) opl(chip, (uint8_t)(op + 0x20), 0x3F);   // silent
}

void Player670::reset() {
    resetChip(0);
    resetChip(1);
    playing_ = false;
    for (Digital& d : dig_) {
        d.pos = 0;
        d.end = 0;
        d.loopEnd = 0xFFFFFFFF;
    }
    for (Voice& v : voice_) v = Voice{};
}

bool Player670::load(const std::string& path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) {
        error_ = "cannot open " + path;
        return false;
    }
    return loadMemory(std::vector<uint8_t>(std::istreambuf_iterator<char>(f), {}));
}

// 4870h
bool Player670::loadMemory(std::vector<uint8_t> file) {
    loaded_ = false;
    if (file.size() < 10) {
        error_ = "not a .670 file";
        return false;
    }
    reset();
    file_ = std::move(file);
    const auto& f = file_;
    speed_ = f[0];
    orderCount_ = f[1];
    restart_ = f[5];
    orders_ = 10;
    patterns_ = orders_ + orderCount_;
    samples_ = patterns_ + 4 * (size_t)f[2];
    instruments_ = samples_ + 16 * (size_t)f[3];
    patData_ = instruments_ + 11 * (size_t)f[4];
    if (patData_ > f.size()) {
        error_ = "truncated .670 header";
        return false;
    }
    // Turn the sample records into absolute offsets: start, end, loop start,
    // loop end. The loop start becomes the sample start, whatever the file
    // says - the original does the same.
    uint32_t at = rd32(f, 6);
    for (int i = 0; i < f[3]; i++) {
        uint8_t* r = &file_[samples_ + 16 * (size_t)i];
        auto put = [&](int o, uint32_t v) { std::memcpy(r + o, &v, 4); };
        const uint32_t len = rd32(file_, samples_ + 16 * (size_t)i + 4);
        const uint32_t loopEnd = rd32(file_, samples_ + 16 * (size_t)i + 12);
        put(0, at);
        put(8, at);
        put(12, loopEnd + at);
        at += len;
        put(4, at);
    }
    if (at > file_.size()) {
        error_ = "sample data runs past the end of the file";
        return false;
    }
    file_.resize(file_.size() + 16, 0x80);   // the mixer may read a byte past a sample
    rowsLeft_ = 1;
    speedLeft_ = 1;
    order_ = 0xFF;
    atStart_ = true;
    playing_ = true;
    loaded_ = true;
    return true;
}

void Player670::loadInstrument(int chip, int ch, int ins) {
    const uint8_t* r = &file_[instruments_ + 11 * (size_t)ins];
    const int s = ch + chip * 9;
    shadowC0_[s] = r[0];
    opl(chip, (uint8_t)(0xC0 + ch), r[0]);
    const uint8_t m = kOpOffset[kModOp[ch]];
    shadowMod40_[s] = r[2];
    opl(chip, m, r[1]);
    opl(chip, (uint8_t)(m + 0x20), r[2]);
    opl(chip, (uint8_t)(m + 0x40), r[3]);
    opl(chip, (uint8_t)(m + 0x60), r[4]);
    opl(chip, (uint8_t)(m + 0xC0), r[5]);
    const uint8_t c = kOpOffset[kCarOp[ch]];
    shadowCar40_[s] = r[7];
    opl(chip, c, r[6]);
    opl(chip, (uint8_t)(c + 0x20), r[7]);
    opl(chip, (uint8_t)(c + 0x40), r[8]);
    opl(chip, (uint8_t)(c + 0x60), r[9]);
    opl(chip, (uint8_t)(c + 0xC0), r[10]);
}

void Player670::setVolume(int chip, int ch, uint8_t tl) {
    const int s = ch + chip * 9;
    shadowCar40_[s] = (uint8_t)((shadowCar40_[s] & 0xC0) | tl);
    opl(chip, (uint8_t)(kOpOffset[kCarOp[ch]] + 0x20), shadowCar40_[s]);
    if (shadowC0_[s] & 1) {   // additive: the modulator is heard too
        shadowMod40_[s] = (uint8_t)((shadowMod40_[s] & 0xC0) | tl);
        opl(chip, (uint8_t)(kOpOffset[kModOp[ch]] + 0x20), shadowMod40_[s]);
    }
}

// Notes the sequencer left in the voice table reach the chips one tick later.
// A note of FEh is a volume change only; FFh is nothing to do. Each voice's
// F-number is raised by (voice & 3), a slight detune between the copies.
void Player670::fmUpdate() {
    for (int v = 0; v < 18; v++) {
        Voice& vo = voice_[v];
        const int chip = v & 1, ch = v >> 1;
        if (vo.note == 0xFF) continue;
        if (vo.note == 0xFE) {
            if (vo.vol != vo.curVol) {
                vo.curVol = vo.vol;
                setVolume(chip, ch, vo.vol);
            }
            continue;
        }
        if (vo.ins != vo.curIns) {
            vo.curIns = vo.ins;
            vo.curVol = file_[instruments_ + 11 * (size_t)vo.ins + 7] & 0x3F;
            loadInstrument(chip, ch, vo.ins);
        }
        if (vo.vol != vo.curVol) {
            vo.curVol = vo.vol;
            setVolume(chip, ch, vo.vol);
        }
        const uint16_t fnum = (uint16_t)(kFnum[vo.note & 0x0F] + (v & 3));
        const uint8_t hi = (uint8_t)((fnum >> 8) | ((vo.note & 0x70) >> 2));
        opl(chip, (uint8_t)(0xB0 + ch), 0x00);   // 3670h: retrigger
        opl(chip, (uint8_t)(0xA0 + ch), (uint8_t)fnum);
        opl(chip, (uint8_t)(0xB0 + ch), (uint8_t)(hi | 0x20));
        vo.note = 0xFF;
    }
}

// Every `speed` ticks one row passes; when the rows to wait run out, events
// are read until the next wait. An event byte is command << 5 | argument:
//   0 note   ch, then two bytes: b1 = sample/instrument bit 4 | octave << 4 | note,
//            b2 = sample/instrument bits 0-3 << 4 | volume
//   1 volume ch, then the volume
//   2 wait   rows, then a byte: how many
//   3 next pattern (the order list wraps to the restart position)
// Channels 0..3 are digital, 4..12 are the nine FM channels. Each FM
// channel sounds on two voices, n and n + 9, which land on opposite chips:
// the "incredible fm" of the SB Pro is every note in both speakers, detuned.
void Player670::sequencer() {
    if (!playing_) return;
    if (--speedLeft_) return;
    speedLeft_ = speed_;
    if (--rowsLeft_) return;
    const auto& f = file_;
    size_t p = stream_;
    for (;;) {
        uint8_t ev;
        if (atStart_) {
            ev = kNextPattern << 5;
            atStart_ = false;
        } else {
            ev = f[p++];
        }
        const uint8_t arg = ev & 0x1F;
        switch (ev >> 5) {
        case kNextPattern: {
            uint8_t o = (uint8_t)(order_ + 1);
            if (o >= orderCount_) o = restart_;
            order_ = o;
            p = patData_ + rd16(f, patterns_ + 4 * (size_t)f[orders_ + o]);
            break;
        }
        case kNote: {
            const uint8_t b1 = f[p++], b2 = f[p++];
            const uint8_t vol = b2 & 0x0F;
            const uint8_t which = (uint8_t)((b2 >> 4) | ((b1 >> 7) << 4));
            noteVolume[arg] = vol;
            if (arg <= 3) {
                Digital& d = dig_[arg];
                const uint16_t step = kPeriods[((b1 & 0x70) >> 4) * 12 + (b1 & 0x0F)];
                d.step = step;
                d.whole = (int8_t)((step >> 8) - 1);
                d.frac = (uint8_t)step;
                d.acc = 0;
                d.vol = vol;
                const size_t r = samples_ + 16 * (size_t)which;
                d.pos = rd32(f, r);
                d.end = rd32(f, r + 4);
                d.loopStart = rd32(f, r + 8);
                d.loopEnd = rd32(f, r + 12);
            } else {
                for (int k : {arg - 4, arg - 4 + 9}) {
                    Voice& v = voice_[k];
                    v.note = b1 & 0x7F;
                    v.vol = kVolToTl[vol];
                    v.ins = which;
                }
            }
            break;
        }
        case kVolumeCmd: {
            const uint8_t b = f[p++];
            if (arg <= 3) {
                dig_[arg].vol = b;
            } else {
                for (int k : {arg - 4, arg - 4 + 9}) {
                    voice_[k].vol = kVolToTl[b & 0x0F];
                    voice_[k].note = 0xFE;
                }
            }
            break;
        }
        case kWait:
            rowsLeft_ = f[p++];
            stream_ = p;
            return;
        default:   // commands 4..7 have no handler in the original
            stream_ = p;
            return;
        }
    }
}

// The original builds this loop at load time (4712h): 140 copies of
//   lodsb; xlat; add [edi],al; inc edi; add ch,cl; adc esi,edx
// and calls into it so that it mixes exactly as many samples as are left
// before the sample (or its loop) ends. The block starts at 80h and each
// channel's contribution is added with 8-bit wraparound.
void Player670::mixer() {
    uint8_t* out = mix_[next_];
    std::memset(out, 0x80, kBlock);
    for (Digital& d : dig_) {
        uint8_t* dst = out;
        uint32_t pos = d.pos;
        uint32_t left = kBlock;
        while (left) {
            uint32_t n = left;
            if (pos >= d.loopEnd) pos = d.loopStart;
            if (pos >= d.end) break;
            const uint32_t reach = ((n * d.step) >> 8) + pos;
            uint32_t limit = d.end > d.loopEnd ? d.loopEnd : d.end;
            uint32_t rest = 0;
            if (limit < reach) {
                const uint32_t span = (limit - pos) << 8;
                const uint32_t q = span / d.step + (span % d.step != 0);
                rest = n - q;
                n = q;
            }
            const uint8_t* vt = &kVolume[std::min<int>(d.vol, 15) * 256];
            for (uint32_t i = 0; i < n; i++) {
                *dst++ += vt[file_[pos]];
                pos++;
                const unsigned a = d.acc + d.frac;
                d.acc = (uint8_t)a;
                pos += (uint32_t)(int32_t)d.whole + (a >> 8);
            }
            left = rest;
        }
        d.pos = pos;
    }
}

void Player670::tick() {
    if (logWrites) writes.clear();
    next_ ^= 1;
    fmUpdate();
    sequencer();
    mixer();
    ticks++;
}

void Player670::render(float* stereo) {
    // OPL at its own rate, resampled linearly to kOutRate. The buffer starts
    // at the sample before oplPos_ and keeps what the next tick still needs.
    const double step = Opl2::kRate / kOutRate;
    const size_t need = (size_t)(oplPos_ + step * (kOutPerTick - 1)) + 2;
    for (int c = 0; c < 2; c++) {
        const size_t have = oplBuf_[c].size();
        if (have < need) {
            oplBuf_[c].resize(need);
            chip_[c].generate(oplBuf_[c].data() + have, (int)(need - have));
        }
    }
    const uint8_t* dig = dmaBlock();
    constexpr int kSub = kOutPerTick / kBlock;   // 6 output frames per DSP sample
    for (int i = 0; i < kOutPerTick; i++) {
        const double x = oplPos_ + step * i;
        const int k = (int)x;
        const float t = (float)(x - k);
        float fm[2];
        for (int c = 0; c < 2; c++)
            fm[c] = ((1.0f - t) * oplBuf_[c][k] + t * oplBuf_[c][k + 1]) / 32768.0f;
        // The DSP's 8-bit samples, joined by straight lines as its output
        // filter would round them off.
        const float cur = (dig[i / kSub] - 128) / 128.0f;
        const float prev = i / kSub ? (dig[i / kSub - 1] - 128) / 128.0f : digLast_;
        const float d = prev + (cur - prev) * (float)(i % kSub + 1) / kSub;
        stereo[2 * i] = std::clamp(0.6f * (fm[0] + d), -1.0f, 1.0f);
        stereo[2 * i + 1] = std::clamp(0.6f * (fm[1] + d), -1.0f, 1.0f);
    }
    const double end = oplPos_ + step * kOutPerTick;
    const size_t used = (size_t)end;
    for (auto& b : oplBuf_) b.erase(b.begin(), b.begin() + (std::ptrdiff_t)std::min(used, b.size()));
    oplPos_ = end - (double)used;
    digLast_ = (dig[kBlock - 1] - 128) / 128.0f;
}

}  // namespace rbg
