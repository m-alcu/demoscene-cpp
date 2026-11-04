// The VGA as the intro uses it: mode 13h set by the BIOS, then unchained
// with 480-line timing (Mode X, 320x240), page flips through the CRTC
// start address, a split screen through the line compare, pel panning and
// the overscan colour through the attribute controller.
//
// Video memory is four 64K planes. The program writes with the graphics
// controller in its BIOS state (write mode 0, no rotate or logic, bit mask
// FFh), so a write lands in the planes the map mask enables; reads come
// from the plane the read map selects. The model follows the analysis
// harness's (vga386.py): scanout() is its frame hash's input, and the
// frame's timing comes from the CRTC as there.
#pragma once

#include <cstdint>
#include <vector>

namespace asm94 {

class Vga {
public:
    Vga();

    void setMode(int m);                // the BIOS's mode set: 3, 13h
    int mode() const { return mode_; }

    void out(uint16_t port, uint8_t v);
    uint8_t in(uint16_t port);
    void resetFlip() { attrFlip_ = 0; } // a read of 3DAh

    void write(uint32_t off, uint8_t v);   // A000:off
    uint8_t read(uint32_t off) const;

    uint16_t startAddress() const { return (uint16_t)(crtc_[0x0C] << 8 | crtc_[0x0D]); }
    uint8_t panning() const { return attr_[0x13]; }
    // The frame: its period (the dot clock from the misc output, halved by
    // sequencer 1 bit 3; 8- or 9-dot characters; horizontal and vertical
    // totals) and the vertical retrace's share of it.
    void timing(double& period, double& retrace) const;
    // The plane bytes the CRTC reads in a frame shown from START: for each
    // displayed line, 80 bytes from each plane in turn (row doubling folded,
    // the line compare honoured), then the pel panning and the overscan
    // colour. Same as the harness's vga386.scanout().
    std::vector<uint8_t> scanout(uint16_t start, uint8_t pan) const;
    // The picture as 8-bit pixels (DAC indices): 320 x lines, panned.
    void picture(uint16_t start, uint8_t pan, std::vector<uint8_t>& px, int& w, int& h) const;
    uint8_t overscan() const { return attr_[0x11]; }

    const uint8_t* dac() const { return &dac_[0][0]; }

private:
    void geometry(int& h, int& msl) const;

    std::vector<uint8_t> planes_[4];
    uint8_t seq_[8] = {}, gc_[9] = {}, crtc_[0x19] = {}, attr_[0x15] = {};
    uint8_t misc_ = 0x67;
    int seqI_ = 0, gcI_ = 0, crtcI_ = 0, attrI_ = 0, attrFlip_ = 0;
    uint8_t dac_[256][3] = {};
    int dacW_ = 0, dacR_ = 0, dacPhase_ = 0, dacRPhase_ = 0;
    int mode_ = 3;
};

}  // namespace asm94
