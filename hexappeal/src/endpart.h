// The end part of HEX APPEAL: the "slimy" scroller by Iceman, font and
// marble by O'Hara. Translated from the seventh executable in APPEAL.EXE;
// every routine names the offset it comes from (offsets in its load image).
//
// The part draws into a 400-pixel-wide ring buffer of 280 rows (plus a
// mirror of it below, so reads need no wrapping): marble rows written one at
// a time, the text and its shadow written over them. Each frame it copies a
// 320x200 window of the buffer to mode 13h, every row shifted sideways and
// every column shifted up or down by sine tables.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace hex {

constexpr int kScreenW = 320;
constexpr int kScreenH = 200;

class EndPart {
public:
    bool load(const std::string& assetDir);
    const std::string& error() const { return error_; }

    void start();          // 0000h..01DDh
    void retrace();        // 0257h, called by the music system at every retrace
    void frame();          // the main loop, 01EDh..0243h, once a retrace has come
    void key(uint8_t scancode) { port60_ = scancode; }

    bool finished() const { return exit_ != 0; }
    int volume() const { return volume_; }     // what it gives the music system
    const uint8_t* screen() const { return screen_.data(); }
    const uint8_t* dac() const { return dac_; }
    void renderTo(uint32_t* argb) const;

private:
    void layoutText();     // 33B2h
    void writeRow();       // 3444h
    void drawTextRow(uint32_t edi, uint16_t& line, uint16_t& row, bool shadow);
    void render();         // 39A8h

    std::string error_;
    std::vector<uint8_t> font_;     // seg 04E5h: 600 bytes per glyph, 24x25
    std::vector<uint8_t> marble_;   // seg 0CE5h: two tiles of 50x42
    std::vector<uint8_t> text_;     // 1829h: lines ended by 0, the text by FFh
    uint8_t palette_[768] = {};     // 2040h
    uint8_t faded_[768] = {};       // 1D40h
    uint8_t dac_[768] = {};

    std::vector<uint16_t> lines_;   // 2342h: per line a header (count << 8 | margin),
                                    // then (width << 8 | glyph) per character
    std::vector<uint8_t> buf_;      // the segment in 39A6h
    std::vector<uint8_t> screen_ = std::vector<uint8_t>(kScreenW * kScreenH);

    // the variables, as initialised in the image
    uint16_t every2_ = 2;           // 2340h
    uint16_t textLine_ = 0;         // 3434h (index into lines_)
    uint16_t textRow_ = 0x60;       // 3436h: the text is four rows ahead of
    uint16_t shadowLine_ = 0;       // 3438h  its shadow
    uint16_t shadowRow_ = 0;        // 343Ah
    uint32_t marbleRow_ = 0;        // 343Ch
    uint8_t marbleSwap_ = 0;        // 3442h
    uint16_t state_ = 1;            // 397Eh: 0 running, 1 fading in, 2 fading out
    uint16_t fade_ = 0;             // 3980h
    uint16_t exit_ = 0;             // 3982h
    uint16_t phaseRow_ = 0;         // 399Ah, copied to 3990h for the frame
    uint16_t phaseCol_ = 0;         // 3998h -> 398Eh
    uint16_t phase399C_ = 0;        // 399Ch -> 3992h (moved but never used)
    uint16_t phaseAmpX_ = 0x4D2;    // 399Eh -> 3994h
    uint16_t phaseAmpY_ = 0;        // 39A0h -> 3996h
    uint32_t pos_ = 0;              // 39A2h: the ring row being written, in bytes
    uint8_t port60_ = 0;
    int volume_ = 64;
};

}  // namespace hex
