// The VGA as DRIFT uses it: mode 13h (chain-4), its unchained form (Mode X,
// page flips through the CRTC start address) and mode 12h (640x480, 16
// colours, a split screen through the line compare register).
//
// Video memory is four 64K planes. The program only ever writes with the
// graphics controller in its BIOS state (write mode 0, no rotate, ALU or
// set/reset, bit mask FFh), so a write lands in the planes the map mask
// enables (chain-4: the plane the low address bits pick, at the address
// over 4). The model follows the analysis harness's (vga386.py), and
// scanout() is its frame hash's input.
#pragma once

#include <cstdint>
#include <vector>

namespace drift {

class Vga {
public:
    Vga();

    void setMode(int m);                // the BIOS's mode set: 3, 12h, 13h
    int mode() const { return mode_; }

    void out(uint16_t port, uint8_t v);
    uint8_t in(uint16_t port);

    void write(uint32_t off, uint8_t v);   // A000:off
    uint8_t read(uint32_t off) const;

    uint16_t startAddress() const { return (uint16_t)(crtc_[0x0C] << 8 | crtc_[0x0D]); }
    // The plane bytes the CRTC reads in a frame shown from START: for each
    // displayed line, 80 bytes from each plane in turn (row doubling folded,
    // the line compare honoured). Same as the harness's vga386.scanout().
    std::vector<uint8_t> scanout(uint16_t start) const;
    // The picture as 8-bit pixels (DAC indices, through the attribute
    // palette in mode 12h): 320x200 or 640x480.
    void picture(uint16_t start, std::vector<uint8_t>& px, int& w, int& h) const;

    const uint8_t* dac() const { return &dac_[0][0]; }
    uint8_t* planes(int p) { return planes_[p].data(); }

private:
    void geometry(int& w, int& h, int& msl) const;

    std::vector<uint8_t> planes_[4];
    uint8_t seq_[8] = {}, gc_[9] = {}, crtc_[0x19] = {};
    int seqI_ = 0, gcI_ = 0, crtcI_ = 0;
    uint8_t dac_[256][3] = {};
    int dacW_ = 0, dacR_ = 0, dacPhase_ = 0, dacRPhase_ = 0;
    int mode_ = 3;
};

}  // namespace drift
