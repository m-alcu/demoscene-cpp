#include "demo.h"

#include <SDL3/SDL.h>

#include <cstring>
#include <fstream>

#include "data/objmem.h"
#include "data/tables.h"

namespace rbg {
namespace {

// The pictures are 8-bit indexed BMPs; SDL keeps them as INDEX8 surfaces,
// so the pixels are the original palette indices. Rows are copied one by
// one because a surface row may be padded past its width.
bool readIndexedBmp(const std::string& path, std::vector<uint8_t>& dst, int& w, int& h,
                    std::string& err) {
    SDL_Surface* s = SDL_LoadBMP(path.c_str());
    if (!s) {
        err = "cannot read " + path + ": " + SDL_GetError();
        return false;
    }
    bool ok = s->format == SDL_PIXELFORMAT_INDEX8;
    if (!ok) {
        err = path + " should be an 8-bit indexed BMP";
    } else if (SDL_LockSurface(s)) {
        w = s->w;
        h = s->h;
        dst.resize((size_t)w * h);
        for (int y = 0; y < h; y++)
            std::memcpy(dst.data() + (size_t)y * w, (const uint8_t*)s->pixels + (size_t)y * s->pitch,
                        (size_t)w);
        SDL_UnlockSurface(s);
    } else {
        err = path + ": " + SDL_GetError();
        ok = false;
    }
    SDL_DestroySurface(s);
    return ok;
}

bool readExact(const std::string& path, void* dst, size_t n) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return false;
    f.read((char*)dst, (std::streamsize)n);
    return f.gcount() == (std::streamsize)n;
}

// Mask bytes per row of a ball in each alignment, and where each
// alignment's masks start within a ball's 330 (1AE3Eh, 1AE42h).
constexpr int kSpriteBytes[4] = {5, 5, 6, 6};
constexpr int kMaskAt[4] = {0, 75, 150, 240};

constexpr size_t kTextRestart = 0x19376 - 0x191D0;   // the closing "pause 20h"

}  // namespace

bool Demo::load(const std::string& dir) {
    std::vector<uint8_t> px;
    int w = 0, h = 0;
    if (!readIndexedBmp(dir + "/background.bmp", px, w, h, error_)) return false;
    if (w != 320 || h != 200) {
        error_ = "background.bmp should be 320x200";
        return false;
    }
    std::memcpy(background_, px.data(), sizeof background_);
    if (!readIndexedBmp(dir + "/balls.bmp", px, w, h, error_)) return false;
    if (w != 114 || h != 120) {
        error_ = "balls.bmp should be 114x120";
        return false;
    }
    std::memcpy(balls_, px.data(), sizeof balls_);
    if (!readIndexedBmp(dir + "/font.bmp", font_, fontW_, h, error_)) return false;
    if (h != kGlyphHeight) {
        error_ = "font.bmp should be " + std::to_string(kGlyphHeight) + " rows high";
        return false;
    }
    if (!readExact(dir + "/palette.dac", palette_, sizeof palette_)) {
        error_ = "cannot read " + dir + "/palette.dac";
        return false;
    }
    std::ifstream t(dir + "/texts.txt");
    for (std::string line; std::getline(t, line);) texts_.push_back(line);
    if (texts_.size() < 89) {
        error_ = dir + "/texts.txt should have 89 lines";
        return false;
    }

    // 1169h: the character map. Glyphs sit side by side in the sheet.
    int x = 0;
    for (int g = 0; kFontChars[g]; g++) {
        glyphOf_[(uint8_t)kFontChars[g]] = (uint8_t)(g + 1);
        glyphX_[g] = x;
        x += kGlyphWidth[g];
    }
    obj_.assign(kObjMem, kObjMem + sizeof kObjMem);
    return true;
}

// --- VGA ------------------------------------------------------------------

void Demo::vwrite(uint32_t addr, uint8_t v) {
    if (addr >= 0x10000) return;   // past the 64 KB window at A0000h
    for (int p = 0; p < 4; p++)
        if (mapMask_ >> p & 1) vram_[p][addr] = writeMode1_ ? latch_[p] : v;
}

void Demo::vlatch(uint32_t addr) {
    addr &= 0xFFFF;
    for (int p = 0; p < 4; p++) latch_[p] = vram_[p][addr];
}

void Demo::shownPage(uint8_t* out) const {
    for (int y = 0; y < kScreenH; y++)
        for (int x = 0; x < kScreenW; x++)
            out[y * kScreenW + x] = vram_[x & 3][(uint16_t)(start_ + y * 80 + (x >> 2))];
}

void Demo::renderTo(uint32_t* argb) const {
    uint32_t pal[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)(dac_[i * 3 + k] << 2 | dac_[i * 3 + k] >> 4); };
        pal[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    for (int y = 0; y < kScreenH; y++)
        for (int x = 0; x < kScreenW; x++)
            argb[y * kScreenW + x] = pal[vram_[x & 3][(uint16_t)(start_ + y * 80 + (x >> 2))]];
}

// --- set-up -------------------------------------------------------------

void Demo::start(int mode) {
    // 1A0BFh: mode 13h unchained, all of VRAM cleared (already zero here).
    mode_ = mode & 7;
    setMode(mode_);
    initText();
    initBackground();
    initSnow();
    // 4870h starts the music here; main loads it right after start().
    drawSnow();
    std::memset(work_, 0, sizeof work_);
    fadeStep(true);
    retraceInStep_ = 0;
    phase_ = Phase::FadeIn;
}

// 1A7F1h: clear the masks, build them for each of the six balls of the
// mode's sheet (three colours, then the same three seen in the glass), and
// store the sprites in VRAM.
void Demo::setMode(int mode) {
    std::memset(masks_, 0, sizeof masks_);
    for (int b = 0; b < 6; b++) buildMasks(b * 19, b * 330);
    storeSprites();
    (void)mode;
}

// 1A6C1h: one bit per opaque pixel, four to a byte (a plane each), for the
// ball at column srcOff of the sheet; then shifted copies for alignments 1-3.
void Demo::buildMasks(int srcOff, int maskOff) {
    const uint8_t* src = balls_[mode_] + srcOff;
    uint8_t* m = masks_ + maskOff;
    for (int row = 0; row < 15; row++) {
        int bit = 0;
        for (int x = 0; x < 19; x++) {
            if (src[x]) *m |= (uint8_t)(1 << bit);
            if (++bit == 4) {
                bit = 0;
                m++;
            }
        }
        m++;
        src += 114;
    }
    shiftMasks(maskOff + kMaskAt[0], maskOff + kMaskAt[1], 5, false);
    shiftMasks(maskOff + kMaskAt[1], maskOff + kMaskAt[2], 5, true);
    shiftMasks(maskOff + kMaskAt[2], maskOff + kMaskAt[3], 6, false);
}

// 1A768h: each row moved one pixel right: rcl through the bytes, the bit
// leaving plane 3 carried into plane 0 of the next byte.
void Demo::shiftMasks(int from, int to, int bytes, bool extra) {
    const uint8_t* s = masks_ + from;
    uint8_t* d = masks_ + to;
    for (int row = 0; row < 15; row++) {
        unsigned carry = 0;
        for (int i = 0; i < bytes; i++) {
            unsigned v = ((unsigned)*s++ << 1) | carry;
            carry = (v >> 4) & 1;
            *d++ = (uint8_t)(v & ~0x10u);
        }
        if (extra) *d++ = (uint8_t)carry;
    }
}

// 1A787h: each ball, in each of the four alignments, row after row from
// C000h on, written one pixel at a time through the map mask.
void Demo::storeSprites() {
    uint32_t dst = kSpritePage;
    for (int b = 0; b < 6; b++) {
        for (int align = 0; align < 4; align++) {
            spriteAt_[b][align] = dst;
            const uint8_t* src = balls_[mode_] + b * 19;
            for (int row = 0; row < 15; row++) {
                uint8_t plane = (uint8_t)(1 << align);
                for (int x = 0; x < 19; x++) {
                    mapMask_ = plane;
                    vwrite(dst, *src++);
                    if (plane == 8) dst++;
                    plane = plane == 8 ? 1 : (uint8_t)(plane << 1);
                }
                if (plane != 1) dst++;
                src += 95;
            }
        }
    }
}

// 1A294h: the DAC goes black, the background into pages 0, 1 and 2.
void Demo::initBackground() {
    std::memset(dac_, 0, sizeof dac_);
    for (int p = 0; p < 4; p++) {
        mapMask_ = (uint8_t)(1 << p);
        for (int i = 0; i < 16000; i++) {
            const uint8_t v = background_[i * 4 + p];
            vwrite(drawPage_ + i, v);
            vwrite(drawPage_ + i + 0x4000, v);
            vwrite(drawPage_ + i + 0x8000, v);
        }
    }
}

// 1A4CDh: the background under the four text rows, kept to start each
// line from.
void Demo::initText() {
    for (int r = 0; r < 4; r++) std::memcpy(strips_[r], background_ + kTextRows[r], sizeof strips_[r]);
}

// 1E013h: 260 flakes. The seeds are code bytes; x steps back 8Bh..CAh and
// the row 1 or 2 lines each flake, wrapping in 320 x 97 lines.
void Demo::initSnow() {
    uint32_t y80 = 0xE60, x = 0xB3;
    for (int i = 0; i < 260; i++) {
        Flake& f = flakes_[i];
        f.y80 = (uint16_t)y80;
        f.x = (uint16_t)x;
        const uint32_t dx = (kSnowSeed[2 * i] & 0x3F) + 0x8B;
        x = x >= dx ? x - dx : x - dx + 320;
        const uint32_t dy = (kSnowSeed[2 * i + 1] & 1) * 0x50 + 0x50;
        y80 = y80 >= dy ? y80 - dy : y80 - dy + 0x1E50;
        f.phase = (uint8_t)dy;
    }
}

// --- palette ------------------------------------------------------------

// 1A3A7h (in) moves every DAC value of the work palette one step towards
// the palette; 1A3EBh (out) moves the palette itself one step towards 0.
// fadeChanged_ says whether anything moved.
void Demo::fadeStep(bool in) {
    fadeChanged_ = false;
    for (int i = 0; i < 768; i++) {
        if (in) {
            if (work_[i] != palette_[i]) fadeChanged_ = true;
            if (work_[i] < palette_[i]) work_[i]++;
        } else {
            if (palette_[i]) {
                fadeChanged_ = true;
                palette_[i]--;
            }
        }
    }
}

// 1A419h: show the page just drawn, draw on the other, and pick the colour
// this frame recolours: entry kCycle[A] takes palette colour kCycle[B] (and
// its reflection, 80h further on, the reflected colour).
void Demo::flip() {
    start_ = (uint16_t)(crtcHigh_ << 8);
    crtcHigh_ ^= 0x40;
    drawPage_ ^= 0x4000;
    if (++cycA_ >= 25) cycA_ = 0;
    if (++cycB_ >= 39) cycB_ = 0;
    cycIndex_ = kCycle[cycA_];
    cycSource_ = kCycle[cycB_];
    if (onFlip) onFlip(onFlipUser, *this);
}

void Demo::setCycleColours() {
    std::memcpy(dac_ + cycIndex_ * 3, palette_ + cycSource_ * 3, 3);
    std::memcpy(dac_ + (uint8_t)(cycIndex_ + 0x80) * 3, palette_ + 0x180 + cycSource_ * 3, 3);
}

// --- the clock ----------------------------------------------------------

void Demo::onTick() {
    if (phase_ == Phase::WaitTicks && music_.ticks >= 2) {
        music_.ticks = 0;
        phase_ = Phase::WaitRetrace;
    }
}

void Demo::onRetrace() {
    switch (phase_) {
    case Phase::FadeIn:
    case Phase::FadeOut: {
        // 1A34Ch: a quarter of the palette per retrace.
        const uint8_t* src = phase_ == Phase::FadeIn ? work_ : palette_;
        std::memcpy(dac_ + retraceInStep_ * 192, src + retraceInStep_ * 192, 192);
        if (++retraceInStep_ < 4) break;
        retraceInStep_ = 0;
        if (fadeChanged_) {
            fadeStep(phase_ == Phase::FadeIn);
        } else if (phase_ == Phase::FadeOut) {
            phase_ = Phase::Done;
        } else {
            nextObject();   // 1DF33h
            flip();
            phase_ = Phase::WaitTicks;
            onTick();
        }
        break;
    }
    case Phase::WaitRetrace:
        frameBody();
        break;
    default:
        break;
    }
}

void Demo::key(uint8_t scancode) {
    if (scancode < sizeof kKeyCodes && kKeyCodes[scancode]) pendingKey_ = kKeyCodes[scancode];
}

// 1DF3Dh onwards: one frame, after the tick wait and the retrace.
void Demo::frameBody() {
    setCycleColours();
    transform();
    eraseBalls();
    eraseSnow();
    textStep();
    drawSnow();
    drawBalls();
    frame_++;
    if (callMotion(r32(0x1C537))) {
        nextObject();
    } else if (pendingKey_) {
        const uint8_t k = pendingKey_;
        pendingKey_ = 0;
        handleKey(k);
    }
    if (phase_ == Phase::FadeOut) return;
    flip();
    phase_ = Phase::WaitTicks;
    onTick();
}

void Demo::handleKey(uint8_t code) {
    switch (code) {
    case 0x0E:   // Esc: 1DEBCh fades out and leaves
        fadeStep(false);
        retraceInStep_ = 0;
        phase_ = Phase::FadeOut;
        break;
    case 0x0D:   // Enter: automatic object change on/off
        w32(0x1C53B, r32(0x1C53B) ^ 4);
        break;
    case 0x17: {   // left
        uint32_t e = r32(0x1C533) - 4;
        if (e < 0x1C53F) e = 0x1C5B3;
        selectObject(e);
        break;
    }
    case 0x18: {   // right
        uint32_t e = r32(0x1C533) + 4;
        if (e >= 0x1C5B7) e = 0x1C53F;
        selectObject(e);
        break;
    }
    case 0x01:   // F1: the text again, once it has run out
        if (textAt_ >= kTextRestart) textAt_ = 0;
        break;
    case 0x20:   // space: next mode
        mode_ = (mode_ + 1) & 7;
        setMode(mode_);
        break;
    default:
        break;
    }
}

// --- balls --------------------------------------------------------------

// 1DBCEh: rotate every point of the object (sine table scaled by 512, so
// each product is shifted back by 9), move it, and insert it in a list kept
// in decreasing z (an unsigned compare, as the original).
void Demo::transform() {
    sortedCount_ = 0;
    auto sin = [](uint16_t a) { return (int32_t)kSine[(a & 0x3FF) >> 1]; };
    auto cos = [](uint16_t a) { return (int32_t)kSine[((a & 0x3FF) >> 1) + 128]; };
    const int32_t s0 = sin(r16(0x1C34B)), c0 = cos(r16(0x1C34B));
    const int32_t s1 = sin(r16(0x1C34D)), c1 = cos(r16(0x1C34D));
    const int32_t s2 = sin(r16(0x1C34F)), c2 = cos(r16(0x1C34F));
    uint32_t p = r32(0x1C387);
    const int n = m8(0x1C38B);
    for (int i = 0; i < n; i++, p += 7) {
        const int32_t x = (int16_t)r16(p), y = (int16_t)r16(p + 2), z = (int16_t)r16(p + 4);
        int32_t a = (x * c2 >> 9) - (y * s2 >> 9);
        int32_t c = (x * s2 >> 9) + (y * c2 >> 9);
        const int32_t b = (c * c0 >> 9) - (z * s0 >> 9);
        const int32_t e = (c * s0 >> 9) + (z * c0 >> 9);
        const int32_t d = (e * c1 >> 9) - (a * s1 >> 9);
        a = (a * c1 >> 9) + (e * s1 >> 9);
        Ball nb{(int16_t)(a + r16(0x1C351)), (int16_t)(b + r16(0x1C353)),
                (int16_t)(d + r16(0x1C355)), m8(p + 6)};
        int k = 0;
        while (k < sortedCount_ && !((uint16_t)nb.z > (uint16_t)sorted_[k].z)) k++;
        for (int j = sortedCount_; j > k; j--) sorted_[j] = sorted_[j - 1];
        sorted_[k] = nb;
        sortedCount_++;
    }
}

// 1DD3Eh: close the list of what was drawn this frame, and put back the
// background (from page 8000h, by latch copy) under what was drawn on this
// page two frames ago: strips 6 bytes (24 pixels) wide.
void Demo::eraseBalls() {
    mapMask_ = 0x0F;
    writeMode1_ = true;
    dirtyCount_[dirtyList_] = (uint8_t)drawn_;
    dirtyList_ ^= 1;
    for (int i = 0; i < dirtyCount_[dirtyList_]; i++) {
        const Rect& r = dirty_[dirtyList_][i];
        uint32_t off = r.off;
        uint8_t rows = r.rows;
        do {
            for (int b = 0; b < 6; b++) vcopy(drawPage_ + off + b, kCleanPage + off + b);
            off += 80;
        } while (--rows);
    }
    dirtyCount_[dirtyList_] = 0;
    drawn_ = 0;
    writeMode1_ = false;
}

// 1DDC5h: far to near. 200h - z is the perspective; the floor line is at
// 100 + 70 * that / 512. A ball is cut where it meets the floor, and its
// reflection (the ball type + 3) is drawn below the floor, cut at line 207.
void Demo::drawBalls() {
    for (int i = 0; i < sortedCount_; i++) {
        const Ball& b = sorted_[i];
        const int32_t persp = 0x200 - b.z;
        const int32_t floorY = (0x46 * persp >> 9) + 100;
        const int32_t y = (b.y * persp >> 9) + 100;
        if ((uint32_t)(floorY + 8) <= (uint32_t)y) continue;
        const uint32_t vis = (uint32_t)(floorY + 8) - (uint32_t)y;
        int endRow = (uint16_t)vis < 15 ? (uint8_t)vis : 15;
        const int32_t x = (b.x * persp >> 9) + 160;
        drawSprite(b.type, x, y, 0, endRow);
        const int firstRow = (uint8_t)(15 - endRow);
        const int32_t ry = floorY + (floorY + firstRow - y);
        if ((uint32_t)ry >= 0xCF) continue;
        const uint32_t room = 0xCF - (uint32_t)ry;
        endRow = room < 15 ? (int)(room & 0x0F) : 15;
        drawSprite((uint8_t)(b.type + 3), x, ry, firstRow, endRow);
    }
    sortedCount_ = 0;
}

// 1DB38h: a ball centred at (x, y), source rows firstRow..endRow-1 drawn
// from the top of the sprite down. Every byte is a latch copy from the
// sprite in VRAM with its mask as the map mask. The strip is remembered so
// eraseBalls() can put the background back.
void Demo::drawSprite(int type, int x, int y, int firstRow, int endRow) {
    x -= 9;
    y -= 7;
    uint8_t rows = (uint8_t)(endRow - firstRow);
    uint32_t dst = (uint32_t)(y * 80) + ((uint32_t)x >> 2);
    if (drawn_ < 42) dirty_[dirtyList_][drawn_++] = {(uint16_t)dst, rows};
    dst += drawPage_;
    const int align = x & 3;
    const int width = kSpriteBytes[align];
    const uint8_t* mask = masks_ + kMaskAt[align] + type * 330 + firstRow * width;
    uint32_t src = spriteAt_[type][align] + (uint32_t)(firstRow * width);
    writeMode1_ = true;
    do {
        for (int b = 0; b < width; b++) {
            mapMask_ = *mask++;
            vcopy(dst++, src++);
        }
        dst += 80 - width;
    } while (--rows);
    writeMode1_ = false;
}

// --- snow ---------------------------------------------------------------

// 1E063h: switch to this page's list and copy back, from the clean page,
// every byte the snow was drawn on two frames ago.
void Demo::eraseSnow() {
    mapMask_ = 0x0F;
    writeMode1_ = true;
    snowCur_ ^= 1;
    for (uint16_t off : snowList_[snowCur_]) vcopy(drawPage_ + off, kCleanPage + off);
    writeMode1_ = false;
}

// 1E0AFh: every flake falls a line and drifts left now and then (when its
// phase overflows, it stays). It is drawn in colour 14h, and 94h in the
// glass, but only over sky: background colours 17h..6Fh are left alone.
void Demo::drawSnow() {
    int k = 0;
    for (Flake& f : flakes_) {
        uint16_t y80 = (uint16_t)(f.y80 + 0x50);
        if (y80 >= 0x1EA0) y80 = 0;
        f.y80 = y80;
        const unsigned ph = f.phase + 0xA3u;
        f.phase = (uint8_t)ph;
        int x = f.x - 1 + (int)(ph >> 8);
        if (x < 0)
            x += 320;
        else if (x >= 320)
            x -= 320;
        f.x = (uint16_t)x;
        const uint8_t under = background_[x + y80 * 4];
        if (under < 0x70 && under > 0x16) continue;
        mapMask_ = (uint8_t)(1 << (x & 3));
        const uint16_t at = (uint16_t)(y80 + (x >> 2));
        const uint16_t mirror = (uint16_t)(0x3E30 - y80 + (x >> 2));
        snowList_[snowCur_][k++] = at;
        snowList_[snowCur_][k++] = mirror;
        vwrite(drawPage_ + at, 0x14);
        vwrite(drawPage_ + mirror, 0x94);
    }
}

// --- text ---------------------------------------------------------------

void Demo::textStep() {
    switch (text_) {
    case Text::Next: textNext(); break;
    case Text::Dissolve: textDissolve(); break;
    case Text::Pause:   // 1A6AEh
        if (--pause_ == 0) text_ = Text::Next;
        break;
    }
}

// 1A5C4h: the next step of the script. A line is laid out centred on the
// background of its row, then dissolved in over the next 40 frames.
void Demo::textNext() {
    uint8_t c = kTextScript[textAt_++];
    if (c == 0xFF) {
        textAt_ = kTextRestart;
        c = kTextScript[textAt_++];
    }
    if (c == 0xFE) {
        stride_ = kStrides[strideAt_];
        strideAt_ = stride_ == 7 ? 0 : strideAt_ + 1;
        pause_ = kTextScript[textAt_++];
        text_ = Text::Pause;
        return;
    }
    const std::string& line = texts_[c];
    const uint8_t row = kTextScript[textAt_++];
    std::memcpy(textBuf_, strips_[row], sizeof textBuf_);
    textRow_ = kTextRows[row];
    textMirror_ = (uint16_t)(0xF8C0 - textRow_);
    dissX_ = dissY_ = 0;
    dissLeft_ = 40;
    drawText(line, (int)((uint32_t)(320 - textWidth(line)) >> 1), textBuf_);
    text_ = Text::Dissolve;
}

// 1A515h: 208 pixels a frame, `stride` apart, into the page being drawn and
// the clean page, with the reflection (colour + 80h) mirrored about line
// 199. Every other frame it starts from the same place again, so both
// drawing pages get the same pixels: 40 frames cover the 320x13 strip.
void Demo::textDissolve() {
    uint16_t x = dissX_, y = dissY_;
    for (int i = 0; i < 0xD0; i++) {
        x = (uint16_t)(x + stride_);
        if (x >= 320) {
            x = (uint16_t)(x - 320);
            y = (uint16_t)(y + 320);
            if (y >= 0x1040) y = 0;
        }
        mapMask_ = (uint8_t)(1 << (x & 3));
        uint8_t v = textBuf_[y + x];
        const uint32_t at = (uint32_t)(x + y + textRow_) >> 2;
        vwrite(drawPage_ + at, v);
        vwrite(kCleanPage + at, v);
        v = (uint8_t)(v + 0x80);
        const uint32_t mir = (uint32_t)(textMirror_ - y + x) >> 2;
        vwrite(drawPage_ + mir, v);
        vwrite(kCleanPage + mir, v);
    }
    if (--dissLeft_ == 0) text_ = Text::Next;
    if (!(dissLeft_ & 1)) {
        dissX_ = x;
        dissY_ = y;
    }
}

int Demo::textWidth(const std::string& s) const {
    int w = 0;
    for (unsigned char c : s) w += glyphOf_[c] ? kGlyphWidth[glyphOf_[c] - 1] : kFontSpace;
    return w;
}

// 11CFh with the glyph blitter at DCFh: only a glyph's own pixels are
// copied, clipped to the 320-pixel line.
void Demo::drawText(const std::string& s, int x, uint8_t* dst) {
    for (unsigned char c : s) {
        if (!glyphOf_[c]) {
            x += kFontSpace;
            continue;
        }
        const int g = glyphOf_[c] - 1;
        const int w = kGlyphWidth[g];
        for (int gy = 0; gy < kGlyphHeight; gy++)
            for (int gx = 0; gx < w; gx++) {
                const uint8_t v = font_[(size_t)gy * fontW_ + glyphX_[g] + gx];
                if (v && x + gx >= 0 && x + gx < 320) dst[gy * 320 + x + gx] = v;
            }
        x += w;
    }
}

}  // namespace rbg
