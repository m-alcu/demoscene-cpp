// The VGA as the intro uses it: text mode, then mode 13h (chain-4: video
// memory is linear at A0000h, kept in the machine's memory), the DAC. The
// registers are kept as the analysis harness (vga386.py) keeps them, and
// scanout() gives what its frame hash reads.
#pragma once

#include <cstdint>
#include <vector>

namespace lasse {

class Vga {
public:
    // the BIOS's mode set (3 or 13h); mode 13h clears VRAM (the caller's)
    void setMode(int m, uint8_t* vram);
    int mode() const { return mode_; }

    void out(uint16_t port, uint8_t v);
    uint8_t in(uint16_t port);

    uint16_t startAddress() const { return (uint16_t)(crtc_[0x0C] << 8 | crtc_[0x0D]); }
    // The plane bytes the CRTC reads in a frame shown from START (mode 13h:
    // for each of the 200 lines, 80 bytes of each plane in turn; none in
    // text mode). Same as the harness's vga386.scanout().
    std::vector<uint8_t> scanout(uint16_t start, const uint8_t* vram) const;
    // the picture: 320x200 DAC indices (mode 13h)
    void picture(uint16_t start, const uint8_t* vram, std::vector<uint8_t>& px) const;

    const uint8_t* dac() const { return &dac_[0][0]; }

private:
    uint8_t seq_[8] = {}, gc_[9] = {}, crtc_[0x19] = {};
    int seqI_ = 0, gcI_ = 0, crtcI_ = 0;
    uint8_t dac_[256][3] = {};
    int dacW_ = 0, dacR_ = 0, dacPhase_ = 0, dacRPhase_ = 0;
    int mode_ = 3;
};

}  // namespace lasse
