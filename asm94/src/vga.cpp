#include "vga.h"

#include <algorithm>
#include <cstring>

namespace asm94 {

namespace {
// The BIOS's register sets: CRTC 0-18h, sequencer 0-4, misc output, the
// attribute mode control and horizontal panning (as the harness has them)
struct Bios {
    uint8_t crtc[0x19], seq[5], misc, attr10, attr13;
};
const Bios kMode3 = {{0x5F, 0x4F, 0x50, 0x82, 0x55, 0x81, 0xBF, 0x1F, 0x00, 0x4F, 0x0D, 0x0E, 0x00, 0x00, 0x00, 0x00,
                      0x9C, 0x8E, 0x8F, 0x28, 0x1F, 0x96, 0xB9, 0xA3, 0xFF},
                     {0x03, 0x00, 0x03, 0x00, 0x02}, 0x67, 0x0C, 0x08};
const Bios kMode13 = {{0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0xBF, 0x1F, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                       0x9C, 0x8E, 0x8F, 0x28, 0x40, 0x96, 0xB9, 0xA3, 0xFF},
                      {0x03, 0x01, 0x0F, 0x00, 0x0E}, 0x63, 0x41, 0x00};

void load(const Bios& b, uint8_t* crtc, uint8_t* seq, uint8_t& misc, uint8_t* attr) {
    std::memcpy(crtc, b.crtc, sizeof b.crtc);
    std::memcpy(seq, b.seq, sizeof b.seq);
    misc = b.misc;
    for (int i = 0; i < 16; i++) attr[i] = (uint8_t)i;
    attr[0x10] = b.attr10, attr[0x11] = 0, attr[0x12] = 0x0F, attr[0x13] = b.attr13, attr[0x14] = 0;
}
}  // namespace

Vga::Vga() {
    for (auto& p : planes_) p.assign(0x10000, 0);
    load(kMode3, crtc_, seq_, misc_, attr_);    // the machine starts in mode 3
}

void Vga::setMode(int m) {
    mode_ = m;
    if ((m & 0x7F) == 3) load(kMode3, crtc_, seq_, misc_, attr_);
    if (m == 0x13) {
        load(kMode13, crtc_, seq_, misc_, attr_);
        seq_[2] = 0x0F;
        seq_[4] = 0x0E;
        gc_[5] = 0x40;
        gc_[6] = 0x05;
        gc_[8] = 0xFF;
        crtc_[0x09] = 0x41;
        crtc_[0x13] = 0x28;
        crtc_[0x14] = 0x40;
        crtc_[0x17] = 0xA3;
        crtc_[0x18] = 0xFF;
        crtc_[0x12] = 0x8F;
        crtc_[0x07] = 0x1F;
        crtc_[0x11] = 0x8E;
        for (auto& p : planes_) std::fill(p.begin(), p.end(), 0);
    }
}

void Vga::out(uint16_t p, uint8_t v) {
    switch (p) {
    case 0x3C0:
        if (attrFlip_ == 0) attrI_ = v & 0x1F;
        else if (attrI_ < 0x15) attr_[attrI_] = v;
        attrFlip_ ^= 1;
        break;
    case 0x3C2: misc_ = v; break;
    case 0x3C4: seqI_ = v & 7; break;
    case 0x3C5: seq_[seqI_] = v; break;
    case 0x3CE: gcI_ = v & 0x0F; break;
    case 0x3CF: if (gcI_ < 9) gc_[gcI_] = v; break;
    case 0x3D4: crtcI_ = v & 0x1F; break;
    case 0x3D5:
        if (crtcI_ <= 7 && (crtc_[0x11] & 0x80)) {
            // registers 0-7 write-protected: only the line compare's bit 8
            if (crtcI_ == 7) crtc_[7] = (uint8_t)((crtc_[7] & ~0x10) | (v & 0x10));
        } else if (crtcI_ < 0x19) {
            crtc_[crtcI_] = v;
        }
        break;
    case 0x3C8: dacW_ = v, dacPhase_ = 0; break;
    case 0x3C7: dacR_ = v, dacRPhase_ = 0; break;
    case 0x3C9:
        dac_[dacW_][dacPhase_] = v & 0x3F;
        if (++dacPhase_ == 3) dacPhase_ = 0, dacW_ = (dacW_ + 1) & 0xFF;
        break;
    default: break;
    }
}

uint8_t Vga::in(uint16_t p) {
    switch (p) {
    case 0x3C1: return attrI_ < 0x15 ? attr_[attrI_] : 0;
    case 0x3CC: return misc_;
    case 0x3C5: return seq_[seqI_];
    case 0x3CF: return gcI_ < 9 ? gc_[gcI_] : 0;
    case 0x3D5: return crtcI_ < 0x19 ? crtc_[crtcI_] : 0;
    case 0x3C9: {
        const uint8_t v = dac_[dacR_][dacRPhase_];
        if (++dacRPhase_ == 3) dacRPhase_ = 0, dacR_ = (dacR_ + 1) & 0xFF;
        return v;
    }
    default: return 0;
    }
}

void Vga::write(uint32_t off, uint8_t v) {
    off &= 0xFFFF;
    const int mm = seq_[2] & 0x0F;
    if (seq_[4] & 0x08) {
        if (mm >> (off & 3) & 1) planes_[off & 3][off >> 2] = v;
    } else {
        for (int i = 0; i < 4; i++)
            if (mm >> i & 1) planes_[i][off] = v;
    }
}

uint8_t Vga::read(uint32_t off) const {
    off &= 0xFFFF;
    if (seq_[4] & 0x08) return planes_[off & 3][off >> 2];
    return planes_[gc_[4] & 3][off];
}

void Vga::timing(double& period, double& retrace) const {
    double clock = ((misc_ >> 2) & 3) == 1 ? 28.322e6 : 25.175e6;
    if (seq_[1] & 0x08) clock /= 2;
    const int dots = (crtc_[0] + 5) * ((seq_[1] & 1) ? 8 : 9);
    const int vt = (crtc_[6] | (crtc_[7] & 0x01) << 8 | (crtc_[7] & 0x20) << 4) + 2;
    const int vrs = crtc_[0x10] | (crtc_[7] & 0x04) << 6 | (crtc_[7] & 0x80) << 2;
    int vr = ((crtc_[0x11] & 0x0F) - (vrs & 0x0F)) & 0x0F;
    if (!vr) vr = 16;
    period = (double)dots * vt / clock;
    retrace = (double)vr / vt;
}

void Vga::geometry(int& h, int& msl) const {
    const int vde = crtc_[0x12] | (crtc_[0x07] >> 1 & 1) << 8 | (crtc_[0x07] >> 6 & 1) << 9;
    msl = (crtc_[0x09] & 0x1F) + 1;
    if (crtc_[0x09] & 0x80) msl *= 2;
    h = (vde + 1) / msl;
}

std::vector<uint8_t> Vga::scanout(uint16_t start, uint8_t pan) const {
    int h, msl;
    geometry(h, msl);
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    const bool chain = seq_[4] & 0x08;
    std::vector<uint8_t> out;
    out.reserve((size_t)h * 320 + 2);
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch);
        if (chain) row = (row * 4) >> 2;
        row &= 0xFFFF;
        for (int p = 0; p < 4; p++)
            for (uint32_t k = 0; k < 80; k++) out.push_back(planes_[p][(row + k) & 0xFFFF]);
    }
    out.push_back(pan);
    out.push_back(attr_[0x11]);
    return out;
}

void Vga::picture(uint16_t start, uint8_t pan, std::vector<uint8_t>& px, int& w, int& h) const {
    int msl;
    geometry(h, msl);
    w = 320;
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    // 256-colour pel panning counts in half pixels: 0, 2, 4, 6 -> 0-3 pixels
    const int shift = (pan & 7) >> 1;
    px.assign((size_t)w * h, 0);
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch);
        // below the line compare the panning is reset if mode control bit 5 says so
        const int s = (split < 0 || !(attr_[0x10] & 0x20)) ? shift : 0;
        for (int x = 0; x < w; x++) {
            const int sx = x + s;
            px[(size_t)y * w + x] = planes_[sx & 3][(row + (sx >> 2)) & 0xFFFF];
        }
    }
}

}  // namespace asm94
