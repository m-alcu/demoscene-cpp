// The visual side of Black Glass ][. Like the original, this keeps the VGA
// state the demo ran on and translates its routines onto it:
//
//   - 256 KB of planar VGA memory (4 planes x 64 KB, unchained "Mode X")
//   - the map mask, the write mode and the four latches, because balls,
//     erasing and snow are all latch copies from elsewhere in VRAM
//   - the CRTC start address and the 256-entry DAC with 6-bit components
//
// VRAM is used as four 16 KB pages of 320x200: 0000h and 4000h are drawn
// and shown in turn, 8000h is the clean background that erasing copies
// from, and C000h holds the ball sprites in their four alignments.
//
// Each routine names the 32-bit offset it was translated from (the code
// segment of the unpacked RBGDEMO2 has base 10580h).
#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "player670.h"

namespace rbg {

constexpr int kScreenW = 320;
constexpr int kScreenH = 200;

class Demo {
public:
    // The music stays outside so that main can feed it to the audio device;
    // the demo reads its tick counter and note volumes as the original did.
    explicit Demo(Player670& music) : music_(music) {}

    bool load(const std::string& assetDir);
    const std::string& error() const { return error_; }

    // Everything the original does between the mode prompt and its main
    // loop (1DF0Fh..1DF2Eh), minus DOS and text mode. `mode` is 0..7.
    void start(int mode);
    // A key as the PC scancode the original's handler saw.
    void key(uint8_t scancode);
    // One music tick has been played (the SB interrupt).
    void onTick();
    // A vertical retrace of the 70 Hz mode.
    void onRetrace();
    bool finished() const { return phase_ == Phase::Done; }

    // What the CRT shows, as 320x200 ARGB8888.
    void renderTo(uint32_t* argb) const;
    // The page being shown, as palette indices, and the DAC.
    void shownPage(uint8_t* pixels) const;
    const uint8_t* dac() const { return dac_; }
    int frame() const { return frame_; }
    // Called whenever the start address changes, like a CRTC write; the
    // frame dump uses it to record what the original would have shown.
    void (*onFlip)(void* user, const Demo& demo) = nullptr;
    void* onFlipUser = nullptr;

private:
    enum class Phase { FadeIn, WaitTicks, WaitRetrace, FadeOut, Done };

    // VGA
    uint8_t vram_[4][65536] = {};
    uint8_t latch_[4] = {};
    uint8_t mapMask_ = 0x0F;
    bool writeMode1_ = false;
    uint16_t start_ = 0;
    uint8_t dac_[768] = {};
    void vwrite(uint32_t addr, uint8_t v);   // through map mask / latches
    void vlatch(uint32_t addr);              // a read: loads the latches
    void vcopy(uint32_t dst, uint32_t src) { vlatch(src); vwrite(dst, 0); }

    // the original's routines
    void setMode(int mode);                  // 1A7F1h: ball sprites for a mode
    void buildMasks(int srcOff, int maskOff);   // 1A6C1h
    void shiftMasks(int from, int to, int bytes, bool extra);   // 1A768h
    void storeSprites();                     // 1A787h
    void initBackground();                   // 1A294h
    void initText();                         // 1A4CDh
    void initSnow();                         // 1E013h
    void fadeStep(bool in);                  // 1A3A7h / 1A3EBh, one step
    void flip();                             // 1A419h up to the tick wait
    void setCycleColours();                  // 1A419h after the retrace
    void frameBody();                        // 1DF3Dh..1DF62h and the keys
    void transform();                        // 1DBCEh
    void eraseBalls();                       // 1DD3Eh
    void eraseSnow();                        // 1E063h
    void drawSnow();                         // 1E0AFh
    void drawBalls();                        // 1DDC5h
    void drawSprite(int type, int x, int y, int firstRow, int endRow);   // 1DB38h
    void textStep();                         // *1919Fh
    void textNext();                         // 1A5C4h
    void textDissolve();                     // 1A515h
    int textWidth(const std::string& s) const;               // 1219h
    void drawText(const std::string& s, int x, uint8_t* dst);   // 11CFh / DCFh
    void handleKey(uint8_t code);            // 1DF6Fh

    // objects.cpp: object memory, the object table and its motion code
    void selectObject(uint32_t entry);       // 1DE6Ch
    void nextObject();                       // 1DE60h
    void callInit(uint32_t addr);
    bool callMotion(uint32_t addr);          // true: the object is done
    bool generic();                          // 1E149h
    bool rotateMove();                       // 1E1A6h
    bool script();                           // 1E212h
    void spring(uint16_t& a, uint16_t& b);   // 1E897h
    void springPair(uint32_t a, int times);
    bool mot1E2DF(); bool mot1E30D(); bool mot1E36C(); bool mot1E3A4(); bool mot1E461();
    bool mot1E508(); bool mot1E541(); bool mot1E57D(); bool mot1E67A(); bool mot1E7DC();
    bool mot1E8B1(); bool mot1E8FF(); bool mot1E9A7(); bool mot1EA82(); bool mot1EBCF();
    bool mot1EC1C(); bool mot1ED03(); bool mot1EDAC(); bool mot1EDD7(); bool mot1EE2D();
    bool mot1EE6E();
    void wave1EACF(uint32_t a);              // 1EACFh
    int16_t scale1CF13(uint32_t fn, int16_t ax);   // the helpers 1E7B4h..1E7D2h
    uint8_t& m8(uint32_t a);
    uint16_t r16(uint32_t a);
    void w16(uint32_t a, uint16_t v);
    uint32_t r32(uint32_t a);
    void w32(uint32_t a, uint32_t v);

    Player670& music_;
    std::string error_;

    // assets
    uint8_t background_[320 * 200] = {};
    uint8_t balls_[8][114 * 15] = {};
    std::vector<uint8_t> font_;              // the glyph sheet
    int fontW_ = 0;
    int glyphX_[64] = {};
    uint8_t glyphOf_[256] = {};              // character -> glyph + 1, 0 for none
    std::vector<std::string> texts_;
    uint8_t palette_[768] = {};              // 17C00h, faded to and cycled from

    // state
    Phase phase_ = Phase::FadeIn;
    int mode_ = 0;                           // 19136h
    int frame_ = 0;
    int retraceInStep_ = 0;
    bool fadeChanged_ = false;
    uint8_t work_[768] = {};                 // the fade's palette
    uint8_t pendingKey_ = 0;                 // B59h, with B58h bit 3

    uint32_t drawPage_ = 0x0000;             // 1915Fh
    static constexpr uint32_t kCleanPage = 0x8000;   // 19167h
    static constexpr uint32_t kSpritePage = 0xC000;
    uint8_t crtcHigh_ = 0x00;                // 1916Fh
    int cycA_ = 0, cycB_ = 7;                // 19170h / 19174h
    uint8_t cycIndex_ = 0, cycSource_ = 0;

    uint8_t masks_[6 * 330] = {};            // 1AE52h
    uint32_t spriteAt_[6][4] = {};           // 1ADDEh

    struct Rect {
        uint16_t off;
        uint8_t rows;
    };
    Rect dirty_[2][42] = {};                 // 1C437h / 1C4B5h
    uint8_t dirtyCount_[2] = {};             // 1C428h
    int dirtyList_ = 0;                      // 1C427h
    int drawn_ = 0;                          // 1C432h

    struct Ball {
        int16_t x, y, z;
        uint8_t type;
    };
    Ball sorted_[64] = {};                   // 1C394h
    int sortedCount_ = 0;                    // 1C393h

    struct Flake {
        uint16_t y80, x;
        uint8_t phase;
    };
    Flake flakes_[260] = {};                 // 1BE37h
    uint16_t snowList_[2][520] = {};         // 1B60Fh / 1BA1Fh
    int snowCur_ = 0;                        // 1BE2Fh

    // text writer
    enum class Text { Next, Dissolve, Pause };
    Text text_ = Text::Next;                 // *1919Fh
    size_t textAt_ = 0;                      // 191ACh, into kTextScript
    uint8_t strips_[4][320 * 13] = {};       // 191A3h
    uint8_t textBuf_[320 * 13] = {};         // 191A7h
    uint16_t textRow_ = 0, textMirror_ = 0;  // 191C7h / 191CBh
    uint16_t dissX_ = 0, dissY_ = 0;         // 191BFh / 191C3h
    uint8_t dissLeft_ = 0;                   // 191CFh
    uint8_t stride_ = 0x0B;                  // the immediate at 1A52Dh
    int strideAt_ = 0;                       // 191B0h
    uint8_t pause_ = 0;                      // 191ABh

    // object memory, 1C34Bh..1DB37h
    std::vector<uint8_t> obj_;
    uint8_t scratch_ = 0;
};

}  // namespace rbg
