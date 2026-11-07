#include "vga.h"

#include <algorithm>
#include <cstring>

namespace angel {

namespace {
// The BIOS's register sets as the harness has them: CRTC 0-18h, sequencer
// 0-4, misc output
struct Bios {
    uint8_t crtc[0x19], seq[5], misc;
};
const Bios kMode3 = {{0x5F, 0x4F, 0x50, 0x82, 0x55, 0x81, 0xBF, 0x1F, 0x00, 0x4F, 0x0D, 0x0E, 0x00, 0x00, 0x00, 0x00,
                      0x9C, 0x8E, 0x8F, 0x28, 0x1F, 0x96, 0xB9, 0xA3, 0xFF},
                     {0x03, 0x00, 0x03, 0x00, 0x02}, 0x67};
const Bios kMode12 = {{0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0x0B, 0x3E, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                       0xEA, 0x8C, 0xDF, 0x28, 0x00, 0xE7, 0x04, 0xE3, 0xFF},
                      {0x03, 0x01, 0x0F, 0x00, 0x06}, 0xE3};
const Bios kMode13 = {{0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0xBF, 0x1F, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                       0x9C, 0x8E, 0x8F, 0x28, 0x40, 0x96, 0xB9, 0xA3, 0xFF},
                      {0x03, 0x01, 0x0F, 0x00, 0x0E}, 0x63};
}  // namespace

Vga::Vga() {
    for (auto& p : planes_) p.assign(0x10000, 0);
    std::memcpy(crtc_, kMode3.crtc, sizeof kMode3.crtc);
    std::memcpy(seq_, kMode3.seq, 5);
    for (int i = 0; i < 16; i++) attr_[i] = (uint8_t)i;
    attr_[0x10] = 0x0C, attr_[0x11] = 0, attr_[0x12] = 0x0F, attr_[0x13] = 0x08, attr_[0x14] = 0;
}

void Vga::setMode(int m) {
    mode_ = m;
    const Bios* b = (m & 0x7F) == 3 ? &kMode3 : (m & 0x7F) == 0x12 ? &kMode12 : (m & 0x7F) == 0x13 ? &kMode13 : nullptr;
    if (b) {
        std::memcpy(crtc_, b->crtc, sizeof b->crtc);
        std::memcpy(seq_, b->seq, 5);
        misc_ = b->misc;
        for (int i = 0; i < 16; i++) attr_[i] = (uint8_t)i;
        const int k = m & 0x7F;
        attr_[0x10] = k == 3 ? 0x0C : k == 0x12 ? 0x01 : 0x41;
        attr_[0x11] = 0, attr_[0x12] = 0x0F, attr_[0x13] = k == 3 ? 8 : 0, attr_[0x14] = 0;
    }
    if (m == 0x12) {
        seq_[2] = 0x0F, seq_[4] = 0x06;
        gc_[5] = 0x00, gc_[6] = 0x05, gc_[8] = 0xFF;
        gc_[0] = gc_[1] = gc_[3] = 0;
        crtc_[0x07] = 0x3E, crtc_[0x09] = 0x40, crtc_[0x0C] = crtc_[0x0D] = 0, crtc_[0x11] = 0x8C;
        crtc_[0x12] = 0xDF, crtc_[0x13] = 0x28, crtc_[0x14] = 0x00, crtc_[0x17] = 0xE3, crtc_[0x18] = 0xFF;
        for (auto& p : planes_) std::fill(p.begin(), p.end(), 0);
    }
    if (m == 0x13) {
        seq_[2] = 0x0F, seq_[4] = 0x0E;
        gc_[5] = 0x40, gc_[6] = 0x05, gc_[8] = 0xFF;
        crtc_[0x09] = 0x41, crtc_[0x13] = 0x28, crtc_[0x14] = 0x40, crtc_[0x17] = 0xA3, crtc_[0x18] = 0xFF;
        crtc_[0x12] = 0x8F, crtc_[0x07] = 0x1F, crtc_[0x11] = 0x8E;
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
    case 0x3B4:
    case 0x3D4: crtcI_ = v; break;
    case 0x3B5:
    case 0x3D5:
        if (crtcI_ <= 7 && (crtc_[0x11] & 0x80)) {
            if (crtcI_ == 7) crtc_[7] = (uint8_t)((crtc_[7] & ~0x10) | (v & 0x10));
        } else {
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
    case 0x3CC: return misc_;
    case 0x3C1: return attrI_ < 0x15 ? attr_[attrI_] : 0;
    case 0x3C5: return seq_[seqI_];
    case 0x3CF: return gcI_ < 9 ? gc_[gcI_] : 0;
    case 0x3D5: return crtc_[crtcI_];
    case 0x3C9: {
        const uint8_t v = dac_[dacR_][dacRPhase_];
        if (++dacRPhase_ == 3) dacRPhase_ = 0, dacR_ = (dacR_ + 1) & 0xFF;
        return v;
    }
    default: return 0;
    }
}

uint8_t Vga::rot(uint8_t v) const {
    const int r = gc_[3] & 7;
    return r ? (uint8_t)((v >> r) | (v << (8 - r))) : v;
}

uint8_t Vga::alu(uint8_t v, uint8_t l) const {
    switch ((gc_[3] >> 3) & 3) {
    case 1: return v & l;
    case 2: return v | l;
    case 3: return v ^ l;
    default: return v;
    }
}

uint32_t Vga::bank(uint32_t off) const {
    if ((seq_[4] & 0x08) && (crtc_[0x31] & 1)) return off | (uint32_t)(crtc_[0x35] & 0x0F) << 16;
    return off;
}

void Vga::write(uint32_t off, uint8_t val) {
    off = bank(off & 0xFFFF);
    const bool chain = seq_[4] & 0x08;
    int mm = seq_[2] & 0x0F;
    if ((gc_[5] & 3) == 0 && gc_[3] == 0 && gc_[1] == 0 && gc_[8] == 0xFF) {
        if (chain) {
            if (mm >> (off & 3) & 1) planes_[off & 3][(off >> 2) & 0xFFFF] = val;
        } else {
            for (int i = 0; i < 4; i++)
                if (mm >> i & 1) planes_[i][off] = val;
        }
        return;
    }
    const uint32_t a = chain ? (off >> 2) & 0xFFFF : off;
    if (chain) mm &= 1 << (off & 3);
    const int wm = gc_[5] & 3;
    if (wm == 1) {
        for (int i = 0; i < 4; i++)
            if (mm >> i & 1) planes_[i][a] = latch_[i];
        return;
    }
    const uint8_t bm = gc_[8];
    for (int i = 0; i < 4; i++) {
        if (!(mm >> i & 1)) continue;
        uint8_t v, m;
        if (wm == 0) {
            v = rot(val);
            if (gc_[1] >> i & 1) v = (gc_[0] >> i & 1) ? 0xFF : 0;
            v = alu(v, latch_[i]);
            m = bm;
        } else if (wm == 2) {
            v = alu((val >> i & 1) ? 0xFF : 0, latch_[i]);
            m = bm;
        } else {
            v = (gc_[0] >> i & 1) ? 0xFF : 0;
            m = bm & rot(val);
        }
        planes_[i][a] = (uint8_t)((v & m) | (latch_[i] & ~m));
    }
}

uint8_t Vga::read(uint32_t off) {
    off = bank(off & 0xFFFF);
    const bool chain = seq_[4] & 0x08;
    const uint32_t a = chain ? (off >> 2) & 0xFFFF : off;
    for (int i = 0; i < 4; i++) latch_[i] = planes_[i][a];
    if (chain) return planes_[off & 3][a];
    if (gc_[5] & 8) {
        const int cc = gc_[2] & 0xF, dc = gc_[7] & 0xF;
        uint8_t r = 0xFF;
        for (int i = 0; i < 4; i++)
            if (dc >> i & 1) r &= (cc >> i & 1) ? latch_[i] : (uint8_t)~latch_[i];
        return r;
    }
    return latch_[gc_[4] & 3];
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

std::vector<uint8_t> Vga::scanout(uint16_t start, uint8_t pan) const {
    const int vde = crtc_[0x12] | (crtc_[0x07] >> 1 & 1) << 8 | (crtc_[0x07] >> 6 & 1) << 9;
    int msl = (crtc_[0x09] & 0x1F) + 1;
    if (crtc_[0x09] & 0x80) msl *= 2;
    const int h = (vde + 1) / msl;
    const int hd = crtc_[0x01] + 1;
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    std::vector<uint8_t> out;
    out.reserve((size_t)h * hd * 4 + 20);
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch) & 0xFFFF;
        for (int p = 0; p < 4; p++)
            for (int k = 0; k < hd; k++) out.push_back(planes_[p][(row + k) & 0xFFFF]);
    }
    out.push_back(pan);
    out.push_back(attr_[0x11]);
    out.push_back(attr_[0x10]);
    out.push_back(attr_[0x14]);
    for (int i = 0; i < 16; i++) out.push_back(attr_[i]);
    return out;
}

void Vga::picture(uint16_t start, uint8_t pan, std::vector<uint8_t>& px, int& w, int& h) const {
    const int vde = crtc_[0x12] | (crtc_[0x07] >> 1 & 1) << 8 | (crtc_[0x07] >> 6 & 1) << 9;
    int msl = (crtc_[0x09] & 0x1F) + 1;
    if (crtc_[0x09] & 0x80) msl *= 2;
    h = (vde + 1) / msl;
    const int hd = crtc_[0x01] + 1;
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    const bool p16 = planar16();
    w = p16 ? hd * 8 : hd * 4;
    px.assign((size_t)w * h, 0);
    uint8_t pal[16];
    for (int c = 0; c < 16; c++) {
        int v = attr_[c] & 0x3F;
        if (attr_[0x10] & 0x80) v = (v & 0x0F) | ((attr_[0x14] & 0x03) << 4);
        v |= (attr_[0x14] & 0x0C) << 4;
        pal[c] = (uint8_t)v;
    }
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch);
        const bool panned = split < 0 || !(attr_[0x10] & 0x20);
        uint8_t* o = &px[(size_t)y * w];
        if (p16) {
            const int s = panned ? (pan & 7) : 0;
            for (int x = 0; x < w; x++) {
                const int sx = x + s;
                const uint32_t a = (row + (sx >> 3)) & 0xFFFF;
                const int b = 7 - (sx & 7);
                o[x] = pal[(planes_[0][a] >> b & 1) | (planes_[1][a] >> b & 1) << 1 | (planes_[2][a] >> b & 1) << 2 |
                           (planes_[3][a] >> b & 1) << 3];
            }
        } else {
            const int s = panned ? (pan & 7) >> 1 : 0;
            for (int x = 0; x < w; x++) {
                const int sx = x + s;
                o[x] = planes_[sx & 3][(row + (sx >> 2)) & 0xFFFF];
            }
        }
    }
}

}  // namespace angel
