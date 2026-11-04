#include "vga.h"

#include <cstring>

namespace lasse {

void Vga::setMode(int m, uint8_t* vram) {
    mode_ = m;
    if (m == 0x13) {
        seq_[2] = 0x0F, seq_[4] = 0x0E;
        gc_[5] = 0x40, gc_[6] = 0x05, gc_[8] = 0xFF;
        crtc_[0x09] = 0x41, crtc_[0x13] = 0x28, crtc_[0x14] = 0x40, crtc_[0x17] = 0xA3;
        crtc_[0x18] = 0xFF, crtc_[0x12] = 0x8F, crtc_[0x07] = 0x1F, crtc_[0x11] = 0x8E;
        std::memset(vram, 0, 0x10000);
    }
}

void Vga::out(uint16_t p, uint8_t v) {
    switch (p) {
    case 0x3C4: seqI_ = v & 7; break;
    case 0x3C5: seq_[seqI_] = v; break;
    case 0x3CE: gcI_ = v & 0x0F; break;
    case 0x3CF: if (gcI_ < 9) gc_[gcI_] = v; break;
    case 0x3D4: case 0x3B4: crtcI_ = v & 0x1F; break;
    case 0x3D5: case 0x3B5:
        if (crtcI_ <= 7 && (crtc_[0x11] & 0x80)) {
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

std::vector<uint8_t> Vga::scanout(uint16_t start, const uint8_t* vram) const {
    std::vector<uint8_t> out;
    if (mode_ != 0x13) return out;
    out.reserve(200 * 320);
    for (int y = 0; y < 200; y++) {
        const uint32_t row = (uint32_t)(start + y * 80) & 0xFFFF;
        for (int pl = 0; pl < 4; pl++)
            for (uint32_t i = 0; i < 80; i++) {
                const uint32_t a = (row + i) & 0xFFFF;      // a plane address (chain-4: linear a * 4 + plane)
                out.push_back(a < 0x4000 ? vram[a * 4 + pl] : 0);
            }
    }
    return out;
}

void Vga::picture(uint16_t start, const uint8_t* vram, std::vector<uint8_t>& px) const {
    px.assign(320 * 200, 0);
    if (mode_ != 0x13) return;
    for (int y = 0; y < 200; y++)
        for (int x = 0; x < 320; x++) {
            const uint32_t a = ((uint32_t)(start + y * 80) + (x >> 2)) & 0xFFFF;
            px[y * 320 + x] = a < 0x4000 ? vram[a * 4 + (x & 3)] : 0;
        }
}

}  // namespace lasse
