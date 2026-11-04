// A register-level model of the parts of the VGA that Imphobia uses: the four
// 64 KB planes behind A000h with the graphics controller's read and write
// paths (write modes 0-3, latches, set/reset, rotate and logical function,
// bit mask, map mask, chain-4), the DAC, the attribute controller's palette
// and colour select, and the CRTC registers that place the picture (start
// address, offset, line compare).
//
// The mag draws everything through these paths (text over a background by
// write mode 3 and the latches, sprites copied VRAM to VRAM by write mode 1),
// so modelling them is how the port gets the same pixels.
//
// Rendering turns the planes into a 640x480 (or 640x400 etc.) indexed frame
// according to the registers, with per-scanline register changes applied
// (the raster splits the mag makes from its timer interrupt).
#pragma once

#include <array>
#include <cstdint>
#include <vector>

namespace imp {

class Vga {
public:
    Vga();

    // BIOS int 10h, AH=0: modes 03h (only its register state), 12h, 13h.
    void setMode(int mode);

    uint8_t read(uint32_t off);
    void write(uint32_t off, uint8_t v);

    uint8_t in(uint16_t port);
    void out(uint16_t port, uint8_t v);
    void outw(uint16_t port, uint16_t v) { out(port, v & 0xFF); out(port + 1, v >> 8); }

    // Planes (for loading and for tests).
    std::array<std::vector<uint8_t>, 4> planes;
    uint8_t latch[4] = {};
    uint8_t seq[8] = {};
    uint8_t gc[16] = {};
    uint8_t crtc[0x20] = {};
    uint8_t ac[0x15] = {};
    uint8_t dac[768] = {};
    uint8_t dacMask = 0xFF;
    uint8_t misc = 0;
    int mode = 3;

    // A register change during the frame, at a scanline.
    struct LineWrite {
        int line;
        enum Kind : uint8_t { Crtc, Ac, Dac } kind;
        uint16_t index;
        uint8_t value;
    };

    int width() const;          // pixels
    int height() const;         // displayed lines
    int verticalTotal() const;

    // Renders the frame into 8-bit RGB (6-bit DAC values scaled), using the
    // current planes, the registers as they are now and `writes` (sorted by
    // line) applied as the beam reaches them. Registers are left unchanged.
    void render(std::vector<uint8_t>& rgb, const std::vector<LineWrite>& writes) const;

private:
    void defaultDac();
    uint8_t seqI = 0, gcI = 0, crtcI = 0, acI = 0;
    bool acFlip = false;
    int dacW = 0, dacWp = 0, dacR = 0, dacRp = 0;
};

}  // namespace imp
