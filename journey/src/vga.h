// The VGA as the analysis harness models it (vga386.py), register for
// register: four 64K planes, the sequencer's map mask and chain-4, the
// graphics controller's write modes 0-3 with the latches, rotate, logic,
// set/reset and bit mask, read modes 0 and 1, the CRTC (start address,
// offset, line compare, maximum scan line, timing), the attribute
// controller and the DAC. (The S3 bank register of the harness's VGA,
// CR35 with CR31 bit 0, is kept: MDP never sets it.)
//
// MDP uses text mode 3 (its text page is plain memory at B800:0000, as in
// the harness) and mode 12h, the 640 x 480 16-colour planar mode, with its
// own CRTC settings. The BIOS's mode set loads the IBM tables: the
// registers, the default DAC, video memory cleared.
#pragma once

#include <cstdint>
#include <vector>

namespace journey {

class Vga {
public:
    Vga();

    void setMode(int m);
    int mode() const { return mode_; }

    void out(uint16_t port, uint8_t v);
    uint8_t in(uint16_t port);
    void resetFlip() { attrFlip_ = 0; } // a read of 3DAh

    void write(uint32_t off, uint8_t v);   // A000:off
    uint8_t read(uint32_t off);            // (loads the latches)

    uint16_t startAddress() const { return (uint16_t)(crtc_[0x0C] << 8 | crtc_[0x0D]); }
    uint8_t panning() const { return attr_[0x13]; }
    // The frame: its period and the vertical retrace's share of it.
    void timing(double& period, double& retrace) const;
    // ... its lines: total, where the retrace starts, the last displayed,
    // and the share of a line that is displayed (3DAh bit 0)
    void lines(int& vt, int& vrs, int& vde, double& hfrac) const;
    // The plane bytes the CRTC reads in a frame shown from START (the
    // harness's vga386.scanout, the frame hash's input).
    std::vector<uint8_t> scanout(uint16_t start, uint8_t pan) const;
    // The picture as DAC indices, w x h (16-colour modes through the
    // attribute palette).
    void picture(uint16_t start, uint8_t pan, std::vector<uint8_t>& px, int& w, int& h) const;
    bool planar16() const { return !(gc_[5] & 0x40); }
    // the scan lines a row of the picture takes
    int rowLines() const { return ((crtc_[0x09] & 0x1F) + 1) * ((crtc_[0x09] & 0x80) ? 2 : 1); }

    const uint8_t* dac() const { return &dac_[0][0]; }
    // the DAC index of a 16-colour attribute (the palette registers, 10h, 14h)
    uint8_t attrPalette(int c) const {
        int v = attr_[c & 15] & 0x3F;
        if (attr_[0x10] & 0x80) v = (v & 0x0F) | ((attr_[0x14] & 0x03) << 4);
        return (uint8_t)(v | (attr_[0x14] & 0x0C) << 4);
    }
    // the BIOS's DAC block load (int 10h AX=1012h): the entries, not the ports
    void setAttr(int i, uint8_t v) { if (i < 0x15) attr_[i] = v; }
    void setDac(int i, uint8_t r, uint8_t g, uint8_t b) { dac_[i & 0xFF][0] = r & 0x3F, dac_[i & 0xFF][1] = g & 0x3F, dac_[i & 0xFF][2] = b & 0x3F; }

private:
    uint32_t bank(uint32_t off) const;
    uint8_t rot(uint8_t v) const;
    uint8_t alu(uint8_t v, uint8_t l) const;

    std::vector<uint8_t> planes_[4];
    uint8_t latch_[4] = {};
    uint8_t seq_[8] = {}, gc_[9] = {}, crtc_[0x100] = {}, attr_[0x15] = {};
    uint8_t misc_ = 0x67;
    int seqI_ = 0, gcI_ = 0, crtcI_ = 0, attrI_ = 0, attrFlip_ = 0;
    uint8_t dac_[256][3] = {};
    int dacW_ = 0, dacR_ = 0, dacPhase_ = 0, dacRPhase_ = 0;
    int mode_ = 3;
};

}  // namespace journey
