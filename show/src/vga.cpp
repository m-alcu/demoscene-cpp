#include "vga.h"

#include <algorithm>
#include <cstring>
#include <stdexcept>

namespace show {

namespace {
// The BIOS's register sets as the harness has them (IBM VGA tables): CRTC
// 0-18h, sequencer 0-4, misc output, graphics controller 0-8, attribute
// controller 0-14h
struct Bios {
    int mode;
    uint8_t crtc[0x19], seq[5], misc, gc[9], attr[0x15];
};
#define A16 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x14, 0x07, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F
const Bios kBios[] = {
    {0x03,
     {0x5F, 0x4F, 0x50, 0x82, 0x55, 0x81, 0xBF, 0x1F, 0x00, 0x4F, 0x0D, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x9C, 0x8E, 0x8F,
      0x28, 0x1F, 0x96, 0xB9, 0xA3, 0xFF},
     {0x03, 0x00, 0x03, 0x00, 0x02}, 0x67, {0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x0E, 0x00, 0xFF},
     {A16, 0x0C, 0x00, 0x0F, 0x08, 0x00}},
    {0x0D,
     {0x2D, 0x27, 0x28, 0x90, 0x2B, 0x80, 0xBF, 0x1F, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9C, 0x8E, 0x8F,
      0x14, 0x00, 0x96, 0xB9, 0xE3, 0xFF},
     {0x03, 0x09, 0x0F, 0x00, 0x06}, 0x63, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0F, 0xFF},
     {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x01, 0x00, 0x0F,
      0x00, 0x00}},
    {0x10,
     {0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0xBF, 0x1F, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x85, 0x5D,
      0x28, 0x0F, 0x63, 0xBA, 0xE3, 0xFF},
     {0x03, 0x01, 0x0F, 0x00, 0x06}, 0xA3, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0F, 0xFF},
     {A16, 0x01, 0x00, 0x0F, 0x00, 0x00}},
    {0x12,
     {0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0x0B, 0x3E, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEA, 0x8C, 0xDF,
      0x28, 0x00, 0xE7, 0x04, 0xE3, 0xFF},
     {0x03, 0x01, 0x0F, 0x00, 0x06}, 0xE3, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0F, 0xFF},
     {A16, 0x01, 0x00, 0x0F, 0x00, 0x00}},
    {0x13,
     {0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0xBF, 0x1F, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9C, 0x8E, 0x8F,
      0x28, 0x40, 0x96, 0xB9, 0xA3, 0xFF},
     {0x03, 0x01, 0x0F, 0x00, 0x0E}, 0x63, {0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x05, 0x0F, 0xFF},
     {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x41, 0x00, 0x0F,
      0x00, 0x00}},
};
#undef A16

// The DAC tables the BIOS loads with a mode: the EGA's 64 colours (rgbRGB)
// for text and the 350/480-line modes, the CGA's 16 (IRGB on bits 4, 2-0,
// brown at 6) for 200-line 16-colour modes, and mode 13h's 256.
void defaultDac(int mode, uint8_t dac[256][3]) {
    std::memset(dac, 0, 256 * 3);
    if (mode != 0x13) {
        for (int i = 0; i < 64; i++) {
            if (mode == 0x0D) {
                const int I = 0x15 * (i >> 4 & 1);
                dac[i][0] = (uint8_t)(0x2A * (i >> 2 & 1) + I);
                dac[i][1] = (uint8_t)((i & 7) == 6 ? 0x15 + I : 0x2A * (i >> 1 & 1) + I);
                dac[i][2] = (uint8_t)(0x2A * (i & 1) + I);
            } else {
                dac[i][0] = (uint8_t)(0x2A * (i >> 2 & 1) + 0x15 * (i >> 5 & 1));
                dac[i][1] = (uint8_t)(0x2A * (i >> 1 & 1) + 0x15 * (i >> 4 & 1));
                dac[i][2] = (uint8_t)(0x2A * (i & 1) + 0x15 * (i >> 3 & 1));
            }
        }
        return;
    }
    static const uint8_t cga[16][3] = {{0, 0, 0},          {0, 0, 0x2A},       {0, 0x2A, 0},       {0, 0x2A, 0x2A},
                                       {0x2A, 0, 0},       {0x2A, 0, 0x2A},    {0x2A, 0x15, 0},    {0x2A, 0x2A, 0x2A},
                                       {0x15, 0x15, 0x15}, {0x15, 0x15, 0x3F}, {0x15, 0x3F, 0x15}, {0x15, 0x3F, 0x3F},
                                       {0x3F, 0x15, 0x15}, {0x3F, 0x15, 0x3F}, {0x3F, 0x3F, 0x15}, {0x3F, 0x3F, 0x3F}};
    static const uint8_t grey[16] = {0x00, 0x05, 0x08, 0x0B, 0x0E, 0x11, 0x14, 0x18,
                                     0x1C, 0x20, 0x24, 0x28, 0x2D, 0x32, 0x38, 0x3F};
    static const uint8_t L[9][5] = {{0x00, 0x10, 0x1F, 0x2F, 0x3F}, {0x1F, 0x27, 0x2F, 0x37, 0x3F},
                                    {0x2D, 0x31, 0x36, 0x3A, 0x3F}, {0x00, 0x07, 0x0E, 0x15, 0x1C},
                                    {0x0E, 0x11, 0x15, 0x18, 0x1C}, {0x14, 0x16, 0x18, 0x1A, 0x1C},
                                    {0x00, 0x04, 0x08, 0x0C, 0x10}, {0x08, 0x0A, 0x0C, 0x0E, 0x10},
                                    {0x0B, 0x0C, 0x0D, 0x0F, 0x10}};
    int n = 0;
    for (int i = 0; i < 16; i++, n++) std::memcpy(dac[n], cga[i], 3);
    for (int i = 0; i < 16; i++, n++) dac[n][0] = dac[n][1] = dac[n][2] = grey[i];
    for (int g = 0; g < 9; g++) {
        // the 24 hues: (lo, a, b, c, hi) = L[g]
        const uint8_t lo = L[g][0], a = L[g][1], b = L[g][2], c = L[g][3], hi = L[g][4];
        const uint8_t hue[24][3] = {{lo, lo, hi}, {a, lo, hi},  {b, lo, hi},  {c, lo, hi},  {hi, lo, hi}, {hi, lo, c},
                                    {hi, lo, b},  {hi, lo, a},  {hi, lo, lo}, {hi, a, lo},  {hi, b, lo},  {hi, c, lo},
                                    {hi, hi, lo}, {c, hi, lo},  {b, hi, lo},  {a, hi, lo},  {lo, hi, lo}, {lo, hi, a},
                                    {lo, hi, b},  {lo, hi, c},  {lo, hi, hi}, {lo, c, hi},  {lo, b, hi},  {lo, a, hi}};
        for (int k = 0; k < 24; k++, n++) std::memcpy(dac[n], hue[k], 3);
    }
}
}  // namespace

Vga::Vga() {
    for (auto& p : planes_) p.assign(0x10000, 0);
    const Bios& b = kBios[0];
    std::memcpy(crtc_, b.crtc, sizeof b.crtc);
    std::memcpy(seq_, b.seq, 5);
    for (int i = 0; i < 16; i++) attr_[i] = (uint8_t)i;
    attr_[0x10] = 0x0C, attr_[0x11] = 0, attr_[0x12] = 0x0F, attr_[0x13] = 0x08, attr_[0x14] = 0;
}

void Vga::setMode(int m) {
    mode_ = m & 0x7F;
    const Bios* b = nullptr;
    for (const Bios& x : kBios)
        if (x.mode == mode_) b = &x;
    if (!b) throw std::runtime_error("video mode not in the harness");
    std::memcpy(crtc_, b->crtc, sizeof b->crtc);
    std::memcpy(seq_, b->seq, 5);
    misc_ = b->misc;
    std::memcpy(gc_, b->gc, 9);
    std::memcpy(attr_, b->attr, sizeof b->attr);
    defaultDac(mode_, dac_);
    if (!(m & 0x80)) {
        if (mode_ == 3) {
            for (int i = 0; i < 0x8000; i++) {
                planes_[0][i] = i < 0x4000 ? 0x20 : 0;
                planes_[1][i] = i < 0x4000 ? 0x07 : 0;
            }
        } else {
            for (auto& p : planes_) std::fill(p.begin(), p.end(), 0);
        }
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

void Vga::lines(int& vt, int& vrs, int& vde, double& hfrac) const {
    vt = (crtc_[6] | (crtc_[7] & 0x01) << 8 | (crtc_[7] & 0x20) << 4) + 2;
    vrs = crtc_[0x10] | (crtc_[7] & 0x04) << 6 | (crtc_[7] & 0x80) << 2;
    vde = crtc_[0x12] | (crtc_[7] & 0x02) << 7 | (crtc_[7] & 0x40) << 3;
    hfrac = (double)(crtc_[1] + 1) / (double)(crtc_[0] + 5);
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

}  // namespace show
