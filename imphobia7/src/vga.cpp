#include "vga.h"

#include <algorithm>
#include <cstring>

namespace imp {

Vga::Vga() {
    for (auto& p : planes) p.assign(0x10000, 0);
    setMode(3);
}

void Vga::defaultDac() {
    // The EGA palette in the first 64 entries, repeated (what the BIOS loads
    // for the 16-colour modes); mode 13h gets the 16 EGA colours then black
    // (its grey ramp and colour wheel are never shown by the mag).
    auto ega = [](int i, uint8_t* c) {
        int r = ((i >> 2) & 1) * 2 + ((i >> 5) & 1);
        int g = ((i >> 1) & 1) * 2 + ((i >> 4) & 1);
        int b = (i & 1) * 2 + ((i >> 3) & 1);
        c[0] = (uint8_t)(r * 21);
        c[1] = (uint8_t)(g * 21);
        c[2] = (uint8_t)(b * 21);
    };
    static const int kStd16[16] = {0, 1, 2, 3, 4, 5, 20, 7, 56, 57, 58, 59, 60, 61, 62, 63};
    for (int i = 0; i < 256; i++) {
        if (mode == 0x13)
            if (i < 16)
                ega(kStd16[i], &dac[i * 3]);
            else
                std::memset(&dac[i * 3], 0, 3);
        else
            ega(i & 63, &dac[i * 3]);
    }
}

void Vga::setMode(int m) {
    static const uint8_t crtc12[] = {0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0x0B, 0x3E, 0x00, 0x40, 0, 0, 0,
                                     0,    0,    0,    0xEA, 0x8C, 0xDF, 0x28, 0x00, 0xE7, 0x04, 0xE3, 0xFF};
    static const uint8_t crtc13[] = {0x5F, 0x4F, 0x50, 0x82, 0x54, 0x80, 0xBF, 0x1F, 0x00, 0x41, 0, 0, 0,
                                     0,    0,    0,    0x9C, 0x8E, 0x8F, 0x28, 0x40, 0x96, 0xB9, 0xA3, 0xFF};
    static const uint8_t crtc03[] = {0x5F, 0x4F, 0x50, 0x82, 0x55, 0x81, 0xBF, 0x1F, 0x00, 0x4F, 0x0D, 0x0E, 0,
                                     0,    0,    0,    0x9C, 0x8E, 0x8F, 0x28, 0x1F, 0x96, 0xB9, 0xA3, 0xFF};
    mode = m;
    std::memset(gc, 0, sizeof gc);
    const uint8_t* c;
    if (m == 0x12) {
        const uint8_t s[] = {0x01, 0x0F, 0x00, 0x06};
        std::memcpy(seq + 1, s, 4);
        gc[5] = 0x00, gc[6] = 0x05, gc[7] = 0x0F, gc[8] = 0xFF;
        c = crtc12;
        for (int i = 0; i < 6; i++) ac[i] = (uint8_t)i;
        ac[6] = 0x14, ac[7] = 7;
        for (int i = 8; i < 16; i++) ac[i] = (uint8_t)(0x30 + i);
        ac[16] = 0x01, ac[17] = 0, ac[18] = 0x0F, ac[19] = 0, ac[20] = 0;
        misc = 0xE3;
    } else if (m == 0x13) {
        const uint8_t s[] = {0x01, 0x0F, 0x00, 0x0E};
        std::memcpy(seq + 1, s, 4);
        gc[5] = 0x40, gc[6] = 0x05, gc[7] = 0x0F, gc[8] = 0xFF;
        c = crtc13;
        for (int i = 0; i < 16; i++) ac[i] = (uint8_t)i;
        ac[16] = 0x41, ac[17] = 0, ac[18] = 0x0F, ac[19] = 0, ac[20] = 0;
        misc = 0x63;
    } else {
        const uint8_t s[] = {0x00, 0x03, 0x00, 0x02};
        std::memcpy(seq + 1, s, 4);
        gc[5] = 0x10, gc[6] = 0x0E, gc[7] = 0x00, gc[8] = 0xFF;
        c = crtc03;
        for (int i = 0; i < 6; i++) ac[i] = (uint8_t)i;
        ac[6] = 0x14, ac[7] = 7;
        for (int i = 8; i < 16; i++) ac[i] = (uint8_t)(0x30 + i);
        ac[16] = 0x0C, ac[17] = 0, ac[18] = 0x0F, ac[19] = 8, ac[20] = 0;
        misc = 0x67;
    }
    std::memset(crtc, 0, sizeof crtc);
    std::memcpy(crtc, c, 25);
    if (m == 0x12 || m == 0x13)
        for (auto& p : planes) std::fill(p.begin(), p.end(), 0);
    defaultDac();
}

uint8_t Vga::read(uint32_t off) {
    off &= 0xFFFF;
    int p = -1;
    uint32_t a = off;
    if (seq[4] & 8) p = off & 3, a = off & 0xFFFC;
    else if (!(seq[4] & 4)) p = off & 1, a = off & 0xFFFE;
    for (int i = 0; i < 4; i++) latch[i] = planes[i][a];
    if (p >= 0) return planes[p][a];
    if (gc[5] & 8) {                     // read mode 1: colour compare
        uint8_t r = 0xFF;
        for (int i = 0; i < 4; i++)
            if (gc[7] >> i & 1) r &= (gc[2] >> i & 1) ? latch[i] : (uint8_t)~latch[i];
        return r;
    }
    return latch[gc[4] & 3];
}

void Vga::write(uint32_t off, uint8_t val) {
    off &= 0xFFFF;
    const int mm = seq[2] & 0x0F;
    if (seq[4] & 8) {
        if (mm >> (off & 3) & 1) planes[off & 3][off & 0xFFFC] = val;
        return;
    }
    if (!(seq[4] & 4)) {
        if (mm >> (off & 1) & 1) planes[off & 1][off & 0xFFFE] = val;
        return;
    }
    const int wm = gc[5] & 3;
    if (wm == 1) {
        for (int i = 0; i < 4; i++)
            if (mm >> i & 1) planes[i][off] = latch[i];
        return;
    }
    const int rot = gc[3] & 7, func = gc[3] >> 3 & 3;
    uint8_t bm = gc[8];
    if (rot) val = (uint8_t)((val >> rot) | (val << (8 - rot)));
    int esr = gc[1];
    if (wm == 3) {
        bm &= val;
        esr = 0x0F;
    }
    for (int i = 0; i < 4; i++) {
        if (!(mm >> i & 1)) continue;
        uint8_t v;
        if (wm == 2) v = (val >> i & 1) ? 0xFF : 0;
        else if (esr >> i & 1) v = (gc[0] >> i & 1) ? 0xFF : 0;
        else v = val;
        const uint8_t l = latch[i];
        switch (func) {
        case 1: v &= l; break;
        case 2: v |= l; break;
        case 3: v ^= l; break;
        }
        planes[i][off] = (uint8_t)((v & bm) | (l & ~bm));
    }
}

uint8_t Vga::in(uint16_t port) {
    switch (port) {
    case 0x3C4: return seqI;
    case 0x3C5: return seq[seqI & 7];
    case 0x3CE: return gcI;
    case 0x3CF: return gc[gcI & 15];
    case 0x3D4: return crtcI;
    case 0x3D5: return crtc[crtcI & 0x1F];
    case 0x3C1: return (acI & 0x1F) < 0x15 ? ac[acI & 0x1F] : 0;
    case 0x3C6: return dacMask;
    case 0x3CC: return misc;
    case 0x3C9: {
        uint8_t v = dac[dacR * 3 + dacRp];
        if (++dacRp == 3) dacRp = 0, dacR = (dacR + 1) & 0xFF;
        return v;
    }
    case 0x3DA: acFlip = false; return 0;
    }
    return 0xFF;
}

void Vga::out(uint16_t port, uint8_t v) {
    switch (port) {
    case 0x3C4: seqI = v; break;
    case 0x3C5: seq[seqI & 7] = v; break;
    case 0x3CE: gcI = v; break;
    case 0x3CF: gc[gcI & 15] = v; break;
    case 0x3D4: crtcI = v; break;
    case 0x3D5: {
        const int i = crtcI & 0x1F;
        if (crtc[0x11] & 0x80) {
            if (i < 7) break;
            if (i == 7) v = (uint8_t)((crtc[7] & ~0x10) | (v & 0x10));
        }
        crtc[i] = v;
        break;
    }
    case 0x3C0:
        if (!acFlip) acI = v;
        else if ((acI & 0x1F) < 0x15) ac[acI & 0x1F] = v;
        acFlip = !acFlip;
        break;
    case 0x3C8: dacW = v, dacWp = 0; break;
    case 0x3C7: dacR = v, dacRp = 0; break;
    case 0x3C9:
        dac[dacW * 3 + dacWp] = v & 0x3F;
        if (++dacWp == 3) dacWp = 0, dacW = (dacW + 1) & 0xFF;
        break;
    case 0x3C6: dacMask = v; break;
    case 0x3C2: misc = v; break;
    }
}

int Vga::width() const { return (crtc[1] + 1) * ((ac[0x10] & 0x40) ? 4 : 8); }

int Vga::height() const {
    return crtc[0x12] + ((crtc[7] & 2) << 7) + ((crtc[7] & 0x40) << 3) + 1;
}

int Vga::verticalTotal() const {
    return crtc[6] + ((crtc[7] & 1) << 8) + ((crtc[7] & 0x20) << 4) + 2;
}

void Vga::render(std::vector<uint8_t>& rgb, const std::vector<LineWrite>& writes) const {
    uint8_t cr[0x20], at[0x15], pal[768];
    std::memcpy(cr, crtc, sizeof cr);
    std::memcpy(at, ac, sizeof at);
    std::memcpy(pal, dac, sizeof pal);
    const int w = width(), h = height();
    const bool g256 = ac[0x10] & 0x40;
    rgb.assign((size_t)w * h * 3, 0);
    const int scan = (crtc[9] & 0x1F) + 1;
    const int dbl = (crtc[9] & 0x80) ? 2 : 1;
    size_t wi = 0;
    uint32_t row = 0;
    int lineCtr = 0;
    const uint8_t* p0 = planes[0].data();
    const uint8_t* p1 = planes[1].data();
    const uint8_t* p2 = planes[2].data();
    const uint8_t* p3 = planes[3].data();
    for (int y = 0; y < h; y++) {
        while (wi < writes.size() && writes[wi].line <= y) {
            const LineWrite& lw = writes[wi++];
            if (lw.kind == LineWrite::Crtc) cr[lw.index] = lw.value;
            else if (lw.kind == LineWrite::Ac) at[lw.index] = lw.value;
            else pal[lw.index] = lw.value;
        }
        const int lc = cr[0x18] + ((cr[7] & 0x10) << 4) + ((cr[9] & 0x40) << 3);
        if (y == 0) row = (uint32_t)(cr[0x0C] << 8 | cr[0x0D]), lineCtr = 0;
        if (y == lc + 1 && lc < h) row = 0, lineCtr = 0;
        // bytes per row: the offset counts words in byte mode... as the CRTC
        // addresses: x2 in byte mode, x4 in word mode, x8 in doubleword mode
        const int pitch = cr[0x13] * ((cr[0x14] & 0x40) ? 8 : (cr[0x17] & 0x40) ? 2 : 4);
        uint8_t* o = &rgb[(size_t)y * w * 3];
        int pan = at[0x13] & 0x0F;
        if (y > lc && (at[0x10] & 0x20)) pan = 0;
        if (g256) {
            const bool dword = cr[0x14] & 0x40;
            pan = (pan >> 1) & 3;
            for (int x = 0; x < w; x++) {
                const int px = x + pan;
                const uint32_t a = (row + (dword ? (px >> 2) * 4 : (px >> 2))) & 0xFFFF;
                const int c = planes[px & 3][a] & dacMask;
                o[0] = pal[c * 3], o[1] = pal[c * 3 + 1], o[2] = pal[c * 3 + 2];
                o += 3;
            }
        } else {
            const int cpe = at[0x12] & 0x0F;
            const int csel = at[0x14];
            const bool p54s = at[0x10] & 0x80;
            if (pan >= 8) pan = 0;
            for (int x = 0; x < w; x++) {
                const int px = x + pan;
                const uint32_t a = (row + (px >> 3)) & 0xFFFF;
                const int b = 7 - (px & 7);
                const int idx = (((p0[a] >> b) & 1) | (((p1[a] >> b) & 1) << 1) | (((p2[a] >> b) & 1) << 2) |
                                 (((p3[a] >> b) & 1) << 3)) & cpe;
                int c = at[idx] & 0x3F;
                if (p54s) c = (c & 0x0F) | ((csel & 3) << 4);
                c |= (csel & 0x0C) << 4;
                c &= dacMask;
                o[0] = pal[c * 3], o[1] = pal[c * 3 + 1], o[2] = pal[c * 3 + 2];
                o += 3;
            }
        }
        if (++lineCtr % (scan * dbl) == 0) row = (row + pitch) & 0xFFFF;
    }
    for (auto& v : rgb) v = (uint8_t)((v << 2) | (v >> 4));
}

}  // namespace imp
