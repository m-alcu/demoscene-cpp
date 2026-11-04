#include "vga.h"

#include <cstring>

namespace drift {

Vga::Vga() {
    for (auto& p : planes_) p.assign(0x10000, 0);
}

void Vga::setMode(int m) {
    mode_ = m;
    if (m == 0x12) {
        seq_[2] = 0x0F;
        seq_[4] = 0x06;
        gc_[5] = 0x00;
        gc_[6] = 0x05;
        gc_[8] = 0xFF;
        gc_[0] = gc_[1] = gc_[3] = 0;
        crtc_[0x07] = 0x3E;
        crtc_[0x09] = 0x40;
        crtc_[0x0C] = crtc_[0x0D] = 0;
        crtc_[0x11] = 0x8C;
        crtc_[0x12] = 0xDF;
        crtc_[0x13] = 0x28;
        crtc_[0x14] = 0x00;
        crtc_[0x17] = 0xE3;
        crtc_[0x18] = 0xFF;
        for (auto& p : planes_) std::fill(p.begin(), p.end(), 0);
    }
    if (m == 0x13) {
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
    case 0x3C5: return seq_[seqI_];
    case 0x3CF: return gcI_ < 9 ? gc_[gcI_] : 0;
    case 0x3D5: return crtcI_ < 0x19 ? crtc_[crtcI_] : 0;
    case 0x3C9: {
        const uint8_t v = dac_[dacR_][dacRPhase_];
        if (++dacRPhase_ == 3) dacRPhase_ = 0, dacR_ = (dacR_ + 1) & 0xFF;
        return v;
    }
    case 0x3CC: return 0x63;
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

void Vga::geometry(int& w, int& h, int& msl) const {
    const int vde = crtc_[0x12] | (crtc_[0x07] >> 1 & 1) << 8 | (crtc_[0x07] >> 6 & 1) << 9;
    msl = (crtc_[0x09] & 0x1F) + 1;
    if (crtc_[0x09] & 0x80) msl *= 2;
    w = 320;
    h = (vde + 1) / msl;
}

std::vector<uint8_t> Vga::scanout(uint16_t start) const {
    int w, h, msl;
    geometry(w, h, msl);
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    std::vector<uint8_t> out;
    out.reserve((size_t)h * 320);
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch) & 0xFFFF;
        for (int p = 0; p < 4; p++)
            for (uint32_t k = 0; k < 80; k++) out.push_back(planes_[p][(row + k) & 0xFFFF]);
    }
    return out;
}

void Vga::picture(uint16_t start, std::vector<uint8_t>& px, int& w, int& h) const {
    int gw, gh, msl;
    geometry(gw, gh, msl);
    const int pitch = crtc_[0x13] * 2;
    const int lc = crtc_[0x18] | (crtc_[0x07] >> 4 & 1) << 8 | (crtc_[0x09] >> 6 & 1) << 9;
    if (mode_ == 0x12) {
        // the attribute controller's palette as the BIOS leaves it
        static const uint8_t ac[16] = {0, 1, 2, 3, 4, 5, 0x14, 7, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F};
        w = 640, h = gh;
        px.assign((size_t)w * h, 0);
        int split = -1;
        for (int y = 0; y < h; y++) {
            if (y * msl > lc && split < 0) split = y;
            const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch);
            for (int xb = 0; xb < 80; xb++) {
                const uint32_t a = (row + xb) & 0xFFFF;
                for (int b = 0; b < 8; b++) {
                    int c = 0;
                    for (int p = 0; p < 4; p++) c |= (planes_[p][a] >> (7 - b) & 1) << p;
                    px[(size_t)y * w + xb * 8 + b] = ac[c];
                }
            }
        }
        return;
    }
    w = 320, h = gh;
    px.assign((size_t)w * h, 0);
    int split = -1;
    for (int y = 0; y < h; y++) {
        if (y * msl > lc && split < 0) split = y;
        const uint32_t row = (uint32_t)(split < 0 ? start + y * pitch : (y - split) * pitch);
        for (int xb = 0; xb < 80; xb++)
            for (int p = 0; p < 4; p++) px[(size_t)y * w + xb * 4 + p] = planes_[p][(row + xb) & 0xFFFF];
    }
}

}  // namespace drift
