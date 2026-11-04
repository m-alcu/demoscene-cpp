#include "endpart.h"

#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>

#include "data/tables.h"

namespace hex {

namespace {

constexpr uint32_t kRow = 400;              // bytes per buffer row
constexpr uint32_t kRing = 280 * kRow;      // 1B580h
constexpr uint32_t kTile = 0x834;           // one marble tile, 50x42
constexpr uint16_t kGlyphRows = 0x258;      // 25 rows of 24

bool readFile(const std::string& path, std::vector<uint8_t>& out) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return false;
    out.assign(std::istreambuf_iterator<char>(f), {});
    return true;
}

uint16_t rd16(const std::vector<uint8_t>& b, size_t o) { return (uint16_t)(b[o] | b[o + 1] << 8); }
uint32_t rd32(const std::vector<uint8_t>& b, size_t o) { return rd16(b, o) | (uint32_t)rd16(b, o + 2) << 16; }

// The pixels of an uncompressed 8-bit BMP, top row first.
bool readBmp8(const std::string& path, int w, int h, std::vector<uint8_t>& out) {
    std::vector<uint8_t> f;
    if (!readFile(path, f) || f.size() < 54 || f[0] != 'B' || f[1] != 'M') return false;
    const uint32_t off = rd32(f, 10);
    const int bw = (int)rd32(f, 18), bh = (int)rd32(f, 22);
    if (bw != w || bh != h || rd16(f, 28) != 8 || rd32(f, 30) != 0) return false;
    const size_t stride = (size_t)(w + 3) & ~(size_t)3;
    if (f.size() < off + stride * h) return false;
    out.resize((size_t)w * h);
    for (int y = 0; y < h; y++)
        std::memcpy(&out[(size_t)y * w], &f[off + stride * (h - 1 - y)], w);
    return true;
}

// 16-bit increments of DI with a 32-bit EDI, as the text loops do them: a
// row that crosses a 64K boundary wraps back to the start of that 64K.
inline uint32_t incDi(uint32_t edi) { return (edi & 0xFFFF0000u) | ((edi + 1) & 0xFFFF); }

}  // namespace

bool EndPart::load(const std::string& dir) {
    std::vector<uint8_t> pal;
    if (!readFile(dir + "/palette.dac", pal) || pal.size() != 768) {
        error_ = dir + "/palette.dac";
        return false;
    }
    std::memcpy(palette_, pal.data(), 768);
    if (!readBmp8(dir + "/font.bmp", 24, 25 * kGlyphs, font_)) {
        error_ = dir + "/font.bmp";
        return false;
    }
    if (!readBmp8(dir + "/marble.bmp", 50, 84, marble_)) {
        error_ = dir + "/marble.bmp";
        return false;
    }
    std::vector<uint8_t> txt;
    if (!readFile(dir + "/texts.txt", txt)) {
        error_ = dir + "/texts.txt";
        return false;
    }
    text_.clear();
    for (uint8_t c : txt) {
        if (c == '\r') continue;
        text_.push_back(c == '\n' ? 0 : c);
    }
    if (!text_.empty() && text_.back() != 0) text_.push_back(0);
    text_.push_back(0xFF);
    return true;
}

// 0000h: the buffer, the text table, the palette, the marble.
void EndPart::start() {
    buf_.assign(0x36B1 * 16, 0);
    layoutText();
    std::memcpy(dac_, palette_, 768);

    // 0092h: 322 rows of the checkerboard, tiles alternating every 50
    // pixels and every 42 rows; the first band starts 14 rows into the tile.
    uint32_t edi = 0;
    uint32_t ebp = 0x2BC;
    int rows = 0x1C;
    for (int band = 0; band < 4; band++) {
        for (int pass = 0; pass < 2; pass++) {
            for (int r = 0; r < rows; r++) {
                for (int k = 0; k < 8; k++) {
                    const bool tileB = ((k & 1) == 0) == (pass == 0);
                    std::memcpy(&buf_[edi], &marble_[ebp + (tileB ? kTile : 0)], 50);
                    edi += 50;
                }
                ebp += 50;
            }
            ebp = 0;
            rows = 0x2A;
        }
    }
}

// 33B2h: lays the text out as a table of glyphs, each line centred in 400.
void EndPart::layoutText() {
    lines_.assign(1, 0);
    size_t header = 0;
    int count = 0;
    for (uint8_t al : text_) {
        if (al == 0xFF) {
            lines_.back() = 0xFFFF;              // the header the next line would have had
            break;
        }
        if (al == 0) {
            uint16_t sum = 0;
            for (int k = 0; k < count; k++) sum += (lines_[header + 1 + k] >> 8) + 1;
            const uint16_t margin = (uint16_t)(0x190 - sum) >> 1;
            lines_[header] = (uint16_t)(count << 8 | (margin & 0xFF));
            header = lines_.size();
            lines_.push_back(0);
            count = 0;
            continue;
        }
        // The original searches the character set without an end; a
        // character it does not have becomes a space here.
        int idx = 0;
        while (idx < kGlyphs && kCharset[idx] != al) idx++;
        if (idx == kGlyphs) idx = 41;
        lines_.push_back((uint16_t)(kGlyphWidth[idx] << 8 | idx));
        count++;
    }
}

// 0257h: the retrace callback.
void EndPart::retrace() {
    if (state_ != 0) {
        if (state_ == 1 && ++fade_ >= 0x40) state_ = 0;
        if (state_ == 2) {
            --fade_;
            volume_ = fade_;                     // int 80h, function 9
            if (fade_ == 0) {
                state_ = 0;
                exit_ = 1;
            }
        }
        // 02A6h: the colours computed last time go out, then the next ones;
        // so the fade in ends one step short, at 63/64.
        for (int i = 0; i < 768; i++) dac_[i] = faded_[i] & 0x3F;
        const uint8_t bl = (uint8_t)fade_;
        for (int i = 0; i < 768; i++) faded_[i] = (uint8_t)((palette_[i] * bl) >> 6);
    }
    // 17D6h
    if (--every2_ == 0) {
        every2_ = 2;
        writeRow();
        pos_ += kRow;
        if (pos_ >= kRing) pos_ = 0;
    }
    phaseAmpX_ += 4;
    phaseAmpY_ += 1;
    phaseRow_ += 6;
    phaseCol_ += 12;
    phase399C_ += 2;
}

// 3444h: one new row of the ring: marble, the shadow, the text, then its
// copy in the mirror.
void EndPart::writeRow() {
    const uint8_t* a = &marble_[marbleRow_];
    const uint8_t* b = &marble_[marbleRow_ + kTile];
    for (int k = 0; k < 4; k++) {
        std::memcpy(&buf_[pos_ + k * 100], marbleSwap_ ? b : a, 50);
        std::memcpy(&buf_[pos_ + 50 + k * 100], marbleSwap_ ? a : b, 50);
    }
    marbleRow_ += 50;
    if (marbleRow_ == kTile) {
        marbleRow_ = 0;
        marbleSwap_ ^= 1;
    }

    drawTextRow(pos_ - 4, shadowLine_, shadowRow_, true);     // 359Bh
    drawTextRow(pos_, textLine_, textRow_, false);            // 3787h

    std::memcpy(&buf_[pos_ + kRing], &buf_[pos_], kRow);      // 395Eh
}

// 359Bh / 3787h: one row of the glyphs of the current line. The shadow
// darkens the marble (its colours less 20h), the text is written over it.
void EndPart::drawTextRow(uint32_t edi, uint16_t& line, uint16_t& row, bool shadow) {
    size_t bx = line;
    edi += lines_[bx] & 0xFF;
    int dl = lines_[bx] >> 8;
    bx++;
    for (; dl > 0; dl--, bx++) {
        const uint32_t start = edi;
        // (the original skips 23h entries here; the layout never makes any)
        const uint16_t entry = lines_[bx];
        uint16_t si = (uint16_t)((entry & 0xFF) * kGlyphRows + row);
        for (int x = 0; x < 24; x++) {
            const uint8_t al = font_[si];
            if (al) {
                if (shadow)
                    buf_[edi] -= 0x20;
                else
                    buf_[edi] = al;
            }
            edi = incDi(edi);
            si++;
        }
        edi = start + (uint8_t)((entry >> 8) + 1);
    }
    row += 0x18;
    if (row == kGlyphRows) {
        size_t next = line + (lines_[line] >> 8) + 1;
        if (lines_[next] == 0xFFFF) {
            next = 0;
            if (!shadow) state_ = 2;             // 3949h: the end, fade out
        }
        line = (uint16_t)next;
        row = 0;
    }
}

// 01EDh: with a retrace come, the frame: the phases are copied for it, the
// screen drawn, the keyboard and the end checked.
void EndPart::frame() {
    render();
    if (port60_ == 1) state_ = 2;                // Esc
}

// 39A8h
void EndPart::render() {
    const int16_t ampX = (int16_t)(((int32_t)kSine[(phaseAmpX_ & 0x3FE) >> 1] * 0x12C) >> 16);
    const int16_t ampY = (int16_t)(((int32_t)kSine[(phaseAmpY_ & 0x3FE) >> 1] * 0x96) >> 16);

    // 39DEh: the source offset of every column, moved up or down by a
    // sine (patched into the drawing code as displacements).
    uint32_t col[kScreenW];
    uint16_t bx = phaseCol_ & 0x3FE;
    uint32_t ecx = pos_ + 0x3EA8;                // 40 rows down, 40 pixels in
    for (int x = 0; x < kScreenW; x++) {
        const int32_t eax = (int32_t)kSine[bx >> 1] * ampY;
        bx = (bx + 2) & 0x3FE;
        col[x] = (uint32_t)((eax >> 16) * (int32_t)kRow) + ecx;
        ecx++;
    }

    // 3A69h: every row moved sideways by a sine
    uint16_t si = phaseRow_;
    uint32_t ebp = 0;
    uint8_t* out = screen_.data();
    const size_t n = buf_.size();
    for (int y = 0; y < kScreenH; y++) {
        si &= 0x3FE;
        const int16_t dx = (int16_t)(((int32_t)ampX * kSine[si >> 1]) >> 16);
        si += 5;
        const uint32_t ebx = (uint32_t)(int32_t)dx + ebp;
        for (int x = 0; x < kScreenW; x++) {
            const uint32_t a = ebx + col[x];
            *out++ = a < n ? buf_[a] : 0;
        }
        ebp += kRow;
    }
}

void EndPart::renderTo(uint32_t* argb) const {
    uint32_t pal[256];
    for (int i = 0; i < 256; i++) {
        const uint32_t r = (dac_[i * 3] * 255 + 31) / 63;
        const uint32_t g = (dac_[i * 3 + 1] * 255 + 31) / 63;
        const uint32_t b = (dac_[i * 3 + 2] * 255 + 31) / 63;
        pal[i] = 0xFF000000u | r << 16 | g << 8 | b;
    }
    for (int i = 0; i < kScreenW * kScreenH; i++) argb[i] = pal[screen_[i]];
}

}  // namespace hex
