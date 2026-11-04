#include "mag.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <stdexcept>

namespace imp {

namespace {
constexpr uint32_t kImageDS = 0xE4D0;   // DS (0E4Dh) in the load image
}

Mag::Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat)
    : vga_(vga), host_(host), dat_(std::move(dat)) {
    cs_.assign(0x10000, 0);
    ds_.assign(0x10000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0x10000), cs_.begin());
    if (image.size() > kImageDS)
        std::copy(image.begin() + kImageDS, image.begin() + std::min<size_t>(image.size(), kImageDS + 0x10000),
                  ds_.begin());
    // NFO12.DAT's directory (CS:30F0h points at it): 13-byte names, offset, size.
    for (uint32_t p = CW(0x30F0); cs_[p]; p += 21) {
        std::string n;
        for (int i = 0; i < 13 && cs_[p + i]; i++) n += (char)cs_[p + i];
        uint32_t off, size;
        std::memcpy(&off, &cs_[p + 13], 4);
        std::memcpy(&size, &cs_[p + 17], 4);
        dir_[n] = {off, size};
    }
}

// ---------------------------------------------------------------- memory ---

std::vector<uint8_t>& Mag::seg(uint16_t s) {
    if (s == kDS) return ds_;
    if (s == kCS) return cs_;
    auto it = segs_.find(s);
    if (it == segs_.end()) throw std::runtime_error("bad segment");
    return it->second;
}

uint8_t Mag::rb(uint16_t s, uint32_t a) {
    if (s == kVRAM) return vga_.read(a);
    auto& m = seg(s);
    return a < m.size() ? m[a] : 0;
}

void Mag::wb(uint16_t s, uint32_t a, uint8_t v) {
    if (s == kVRAM) return vga_.write(a, v);
    auto& m = seg(s);
    if (a < m.size()) m[a] = v;
}

uint16_t Mag::alloc(uint32_t paragraphs) {
    const uint16_t s = nextSeg_++;
    segs_[s].assign(paragraphs * 16, 0);
    return s;
}

static std::string normName(const std::string& n) {
    std::string r;
    for (char c : n)
        if (c != ' ' && c) r += (char)std::toupper((unsigned char)c);
    return r;
}

const uint8_t* Mag::resource(const std::string& name, uint32_t& size) {
    auto it = dir_.find(normName(name));
    if (it == dir_.end() || it->second.first + it->second.second > dat_.size())
        throw std::runtime_error("resource not found: " + name);
    size = it->second.second;
    return &dat_[it->second.first];
}

uint16_t Mag::loadResource(const std::string& name) {
    uint32_t size;
    const uint8_t* p = resource(name, size);
    const uint16_t s = alloc((size >> 4) + 1);
    std::copy(p, p + size, seg(s).begin());
    return s;
}

void Mag::loadResourceInto(const std::string& name, uint16_t s, uint16_t off) {
    uint32_t size;
    const uint8_t* p = resource(name, size);
    for (uint32_t i = 0; i < size; i++) wb(s, off + i, p[i]);
}

std::string Mag::str(uint16_t a) const {
    std::string r;
    while (ds_[a]) r += (char)ds_[a++];
    return r;
}

void Mag::writeMode(uint8_t m) {
    vga_.out(0x3CE, 5);
    vga_.out(0x3CF, (uint8_t)((vga_.in(0x3CF) & 0xF4) | m));
}

void Mag::movsbVram(uint16_t s, uint32_t& si, uint32_t& di) {
    vw(di, rb(s, si));
    si++, di++;
}

// ----------------------------------------------------------------- waits ---

void Mag::waitFlag() {
    while (cs_[0x1DB1] != 0xFF) host_.waitFrame();
    cs_[0x1DB1] = 0;
}

void Mag::waitRetrace() { host_.waitFrame(); }

void Mag::waitRetraces(int n) {
    for (int i = 0; i < n; i++) waitRetrace();
}

void Mag::waitFlags(int n) {
    for (int i = 0; i < n; i++) waitFlag();
}

// ------------------------------------------------- the timer, for the host ---

std::vector<Vga::LineWrite> Mag::rasterWrites() const {
    // State A of the handler (1DE2h) comes at the start of line 138 (the PIT
    // count was measured as 8Bh display-enable edges from the end of the
    // retrace) and writes the CRTC offset at the start of the next four
    // lines, then 28h and the middle's colour bank; state B (1EA2h) comes at
    // line 422 (1A7h edges) with the bottom's bank. State C, before the
    // retrace, sets the top's bank: that is in the registers at frame start.
    std::vector<Vga::LineWrite> w;
    for (int i = 0; i < 4; i++) w.push_back({139 + i, Vga::LineWrite::Crtc, 0x13, cs_[0x1DBC + i]});
    w.push_back({143, Vga::LineWrite::Crtc, 0x13, 0x28});
    w.push_back({143, Vga::LineWrite::Ac, 0x14, cs_[0x1DC1]});
    w.push_back({423, Vga::LineWrite::Ac, 0x14, cs_[0x1DC2]});
    w.push_back({423, Vga::LineWrite::Crtc, 0x13, 0x28});
    return w;
}

void Mag::endOfFrame() {
    if (raster_) {
        // state C (1EDFh): top colour bank, offset back to 28h, frame flag
        vga_.ac[0x14] = cs_[0x1DC0];
        vga_.crtc[0x13] = 0x28;
        cs_[0x1DB1] = 0xFF;
        // the keyboard handler (2C65h) keeps the last scancode
        if (!keys_.empty()) {
            cs_[0x2C34] = keys_.front();
            keys_.erase(keys_.begin());
        }
    }
}

void Mag::mouse(int x, int y, int buttons, bool moved) {
    mouse_.buttons = buttons;
    if (!moved) return;
    // The program scales the driver's position (DS:2384h * x / DS:2395h);
    // set the driver so that the cursor lands under the pointer. The cursor
    // is drawn at row DS:238Ah + 1 of the text area, which shows at line
    // 147 + DS:238Ah.
    const int sx = W(0x2384) ? x * W(0x2395) / W(0x2384) : x;
    const int py = y - 147;
    const int sy = W(0x2386) ? py * W(0x2397) / W(0x2386) : py;
    mouse_.x = std::clamp(sx, mouse_.minX, mouse_.maxX);
    mouse_.y = std::clamp(sy, mouse_.minY, mouse_.maxY);
}

void Mag::int33(uint16_t ax, uint16_t& bx, uint16_t& cx, uint16_t& dx) {
    switch (ax) {
    case 3:
        bx = (uint16_t)mouse_.buttons, cx = (uint16_t)mouse_.x, dx = (uint16_t)mouse_.y;
        break;
    case 4:
        mouse_.x = std::clamp((int)cx, mouse_.minX, mouse_.maxX);
        mouse_.y = std::clamp((int)dx, mouse_.minY, mouse_.maxY);
        break;
    case 7: mouse_.minX = cx, mouse_.maxX = dx; break;
    case 8: mouse_.minY = cx, mouse_.maxY = dx; break;
    }
}

// =================================================================== run ===

void Mag::run() {
    startup();
    mainMenu();
    ending();
    finished_ = true;
}

// 0000h: from the start to the main menu.
void Mag::startup() {
    // What 0000h-0029h leaves: the text mode to go back to, the settings of
    // the configuration (a GUS; the 80-column scroll is the user's choice;
    // no printer), the sound system (2500h).
    B(0x7E) = 3;
    B(0x8D9) = 3;
    B(0x8DB) = 0xFF;
    B(0x8DC) = fullPage_ ? 0xFF : 0;
    B(0x1C1B) = B(0x8DC);
    cs_[0x1DB9] = 0;
    cs_[0x1DC8] = 0;

    clearVram();
    vga_.setMode(0x12);
    setupAttributes();
    setDac256(kDS, 0x1F1F);

    // LOGO.RAW: four planes of 9600h bytes, then the palette
    uint32_t size;
    const uint8_t* logo = resource("LOGO.RAW", size);
    SW(0x980, alloc(0x960));
    uint32_t pos = 0;
    uint8_t al = 0x11;
    for (;;) {
        sq(2, al);
        auto& buf = seg(W(0x980));
        for (uint32_t i = 0; i < 0x9600; i++) buf[i] = pos + i < size ? logo[pos + i] : 0;
        pos += 0x9600;
        logoPlane();
        const bool carry = al & 0x80;
        al = (uint8_t)(al << 1);
        if (carry) break;
    }
    for (uint32_t i = 0; i < 0x300; i++) ds_[0x1C1F + i] = pos + i < size ? logo[pos + i] : 0;

    SW(0x1BAD, alloc(0x714));
    SW(0x1BAB, alloc(0x714));
    SW(0x1BB1, alloc(0x3E8));
    SW(0x1BB3, alloc(0x50));
    SW(0x8FB, loadResource(str(0x8EF)));   // ARTFONT.SPR
    SW(0x909, loadResource(str(0x8FD)));   // SLCTBIG.SPR
    SW(0x917, loadResource(str(0x90B)));   // READFNT.SPR
    SW(0x923, loadResource(str(0x919)));   // MOUSE.SPR
    SW(0x8ED, loadResource(str(0x8E2)));   // SELECT.PAL
    SW(0x92E, loadResource(str(0x925)));   // ELEV.SPR
    SW(0x962, loadResource(str(0x957)));   // TITLES.SPR
    SW(0x955, loadResource(str(0x949)));   // DECORS2.SPR
    SW(0x93C, loadResource(str(0x930)));   // DECORS1.SPR
    SW(0x947, loadResource(str(0x93E)));   // BACK.SPR
    SW(0x7C, CW(0x1BA0));
    uploadSprite(W(0x947), 8);
    fadeLogoIn();
    for (int i = 0; i < 0x30; i++) ds_[0x1F1F + i] = seg(W(0x8ED))[0xF0 + i];
    waitRetraces(0xC8);
    fadeLogoOut();

    mouseInit();
    if (B(0x2383) == 0xFF) {
        SW(0x2384, 0x275);
        SW(0x2386, 0x103);
        mouseSetup();
    }
    sprite(W(0x93C), 8, 0xFF0);
    uploadSprite(W(0x93C), 0x10);
    volume(0xFF);
    host_.playModule(str(0x02));          // GUS: the table at DS:0002h, F1
    // 1F3Eh/1F87h measure the frame for the PIT counts; the port's frames
    // are split at the lines the counts stand for (rasterWrites()).
    CSW(0x1DBA, 0x1DE2);
    cs_[0x1DC0] = 0x0B;
    cs_[0x1DC1] = 0x0C;
    cs_[0x1DC2] = 0x0D;
    installTimer();
    SW(0x2388, 0x13A);
    SW(0x238A, 0x81);
    mouseSetPos();
    lineCompare(0x1E0);
    startAddress(0xFF0);
}

// 031Ch: the main menu and what its five entries lead to.
void Mag::mainMenu() {
    for (;;) {
        setOffsets(0);
        SW(0x1B38, 0);
        SW(0x1B34, 0);
        drawBackground();
        SW(0x1BCF, 0);
        SW(0x1BD1, 1);
        SW(0x1BD3, 0);
        B(0x1C15) = 0xFF;
        B(0x1C14) = 0;
        B(0x1C16) = 0;
        B(0x1C1A) = 0;
        sprite(W(0x955), 0x10, 0);
        sprite(W(0x955), 8, 0x3C6B);
        for (uint16_t di = 5; di; di--) toggleItem(di - 1);
        if (B(0x1C11) == 0xFF) {
            B(0x1C11) = 0;
            fadeInAll();
        } else {
            fadeInPanel(0x240, 0xC0, 0x30);
        }
        SW(0x239B, 0x1B7B);
        SW(0x2399, kDS);
        B(0x239F) = 0;
        SW(0x2384, 0x275);
        SW(0x2386, 0x101);
        SW(0x239D, 0x3C50);
        B(0x23AE) = 0;
        B(0x23AF) = 0xFF;
        SW(0x23B6, 5);
        SW(0x23B4, 0);
        B(0x1B40) = 0xFF;
        SW(0x1B41, 0);
        SW(0x1B3C, 0);
        for (;;) {
            waitFlag();
            input();
            if (B(0x2390) & 1) break;
            if (B(0x2390) & 2) return;
        }
        const uint8_t al = (uint8_t)W(0x23B4);
        uint16_t bx;
        switch (al) {
        case 2:                                     // ARTICLES
            SW(0x1B45, 0x1BE6);
            SW(0x1BD5, 0x982);
            SW(0x1C0D, 0x99E);
            SW(0x1BDC, 0x107);
            bx = W(0x1BE0);
            section(bx);
            SW(0x1BE0, bx);
            break;
        case 1:                                     // CHARTS
            SW(0x1BD5, 0x982);
            SW(0x1C0D, 0x19EE);
            SW(0x1BDC, 0xB);
            SW(0x1B45, 0x1C00);
            bx = W(0x1BE2);
            section(bx);
            SW(0x1BE2, bx);
            break;
        case 3:                                     // INTERVIEWS
            SW(0x1BD5, 0x982);
            SW(0x1C0D, 0x18AA);
            SW(0x1BDC, 0xB);
            SW(0x1B45, 0x1BF3);
            bx = W(0x1BE4);
            section(bx);
            SW(0x1BE4, bx);
            break;
        default: {                                  // 04EDh: EDITORIAL (0), CREDITS
            const uint16_t entry = al == 0 ? 0 : 1;
            B(0x1C18) = 0xFF;
            B(0x1C13) = 0xFF;
            B(0x1C14) = 0;
            B(0x1C16) = 0xFF;
            B(0x1C15) = 0;
            B(0x1C17) = 0xFF;
            B(0x1BC3) = 1;
            fadeOutPanel(0x240, 0xC0, 0xF0);
            SW(0x1B45, (uint16_t)(entry * 0xE + 0x982));
            showPage();
            break;
        }
        }
    }
}

// 083Eh: a section's menu page, and the articles chosen from it. BX is the
// entry to start on and comes back as the last one.
bool Mag::section(uint16_t& bx) {
    SW(0x1BDE, bx);
    SW(0x1B47, W(0x1B45));
    B(0x1C19) = 0;
    B(0x1C18) = 0xFF;
    fadeOutPanel(0x240, 0xC0, 0xF0);
    uint16_t dx = 0;
    for (;;) {
        // 0860h
        SW(0x1B45, W(0x1B47));
        B(0x1C13) = 0xFF;
        B(0x1C14) = 0xFF;
        B(0x1C16) = 0;
        B(0x1C15) = 0;
        B(0x1C17) = 0;
        B(0x1BC3) = 0;
        if (!showPage()) {
            fadeOutPanel(0x240, 0xC0, 0xF0);
            clearText();
            bx = W(0x1BDE);
            return false;
        }
        dx = retDx_;
        // 08A8h: the article; Up/Down in it go to the neighbours
        for (;;) {
            SW(0x1B45, dx);
            fadeOutText(0x240, 0xC0);
            B(0x1C13) = 0;
            B(0x1C18) = 0;
            B(0x1C14) = 0;
            B(0x1C16) = 0xFF;
            B(0x1C15) = 0;
            B(0x1C17) = 0;
            B(0x1C19) = 0xFF;
            B(0x1BC3) = 1;
            if (!showPage()) break;
            SW(0x1BDE, retBx_);
            dx = retDx_;
        }
    }
}

// 053Eh: the end.
void Mag::ending() {
    fadeOutAll();
    auto& pal = seg(W(0x8ED));
    std::copy(pal.begin() + 0xF0, pal.begin() + 0x120, pal.begin());
    setDac256(W(0x8ED), 0);
    clearVram();
    removeTimer();
    startAddress(0);
    vga_.in(0x3DA);
    vga_.out(0x3C0, 0x34);
    vga_.out(0x3C0, 0);
    waitRetrace();
    host_.stopMusic();
    loadResourceInto(str(0x972), W(0x8ED), 0x30);   // CLINCOL.PAL
    SW(0x970, loadResource(str(0x964)));            // CLINCOL.SPR
    sprite(W(0x970), 8, 0x367E);
    cs_[0x212F] = 1;
    fadeStart(W(0x8ED), 0, 0x30, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    waitRetraces(0x28);
    std::fill(pal.begin() + 0x30, pal.begin() + 0x60, 0);
    fadeStart(W(0x8ED), 0, 0x30, 0x10, 0);
    do {
        waitRetraces(2);
        fadeStep();
    } while (fading());
    screenOn(false);
    clearVram();
    vga_.setMode(B(0x7E));
    screenOn(true);
}

// ------------------------------------------------------------ the cover ---

// 0740h: the cover's palette from black, 32 steps.
void Mag::fadeLogoIn() {
    for (int cx = 0x1F; cx >= 0; cx--) {
        vga_.out(0x3C8, 0);
        waitRetrace();
        const uint8_t bl = (uint8_t)((0x1F - cx) << 3);
        for (int i = 0; i < 0x90; i++) vga_.out(0x3C9, (uint8_t)((ds_[0x1C1F + i] * bl) >> 8));
    }
}

// 06F3h: the cover to SELECT.PAL's last colours, then the mag's banks.
void Mag::fadeLogoOut() {
    fadeStart(kDS, 0x1C1F, 0x1F1F, 0x30, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    auto& pal = seg(W(0x8ED));
    vga_.out(0x3C8, 0x10);
    for (int bx = 0; bx < 0xF; bx++)
        for (int i = 0; i < 0x30; i++) vga_.out(0x3C9, pal[0xF0 + i]);
    clearLines(0, 0x1E0);
}

// 09ADh: one plane of the cover, from the buffer.
void Mag::logoPlane() {
    auto& buf = seg(W(0x980));
    waitRetrace();
    for (uint32_t i = 0; i < 0x9600; i++) {
        vr(i);
        vw(i, buf[i]);
    }
}

// ----------------------------------------------------------- clearing ---

void Mag::clearVram() {
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint32_t a = 0; a < 0x10000; a++) vw(a, 0);
}

void Mag::clearLines(uint16_t di, uint16_t lines) {
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    const uint32_t n = (uint32_t)(uint16_t)(0x28 * lines) * 2;
    for (uint32_t i = 0; i < n; i++) vw((di + i) & 0xFFFF, 0);
}

void Mag::clearText() {
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint32_t i = 0; i < 0x2EB8 * 2; i++) vw((0x3C50 + i) & 0xFFFF, 0);
}

// 09CEh: the four CRTC offsets the timer handler writes on lines 139-142:
// together they advance the address by AX words, which is how the text
// area scrolls sideways.
void Mag::setOffsets(uint16_t ax) {
    uint8_t* o = &cs_[0x1DBC];
    if (ax <= 0xF0) {
        o[0] = (uint8_t)ax, o[1] = 0, o[2] = 0, o[3] = 0;
    } else if (ax <= 0x1E0) {
        o[0] = 0xF0, o[1] = (uint8_t)(ax - 0xF0), o[2] = 0, o[3] = 0;
    } else if (ax <= 0x2D0) {
        o[0] = 0xF0, o[1] = 0xF0, o[2] = (uint8_t)(ax - 0x1E0), o[3] = 0;
    } else {
        o[0] = 0xF0, o[1] = 0xF0, o[2] = 0xF0, o[3] = (uint8_t)(ax - 0x2D0);
    }
}

// ------------------------------------------------------------- pages ---

// 0A5Bh: an article: 15 rows, READFNT, no row spacing.
void Mag::setupArticle() {
    CSW(0x17F5, 0xF);
    CSW(0x17F7, 0x460);
    CSW(0x17F9, 0x15);
    CSW(0x17FD, 0);
    CSW(0x17FF, 0);
    CSW(0x1801, W(0x917));
    CSW(0x1803, W(0x909));
    SW(0x239B, 0x1B69);
    SW(0x2399, kDS);
    SW(0x239D, 0x3C50);
    B(0x23AF) = 0xFF;
    B(0x23AE) = 9;
    SW(0x23B6, 1);
    SW(0x23B4, 0);
    SW(0x1B3C, 0);
    SW(0x1B3A, 0);
    SW(0x1B38, 0);
    SW(0x1B36, 0);
    B(0x1C1A) = 0xFF;
}

// 0ADBh: a menu page: 12 rows of ARTFONT, 4 lines between them, opened at
// the page holding entry DS:1BDEh.
void Mag::setupMenu() {
    CSW(0x17F5, 0xC);
    CSW(0x17F7, 0x460);
    CSW(0x17F9, 0x15);
    CSW(0x17FD, 0x140);
    CSW(0x17FF, 4);
    CSW(0x1801, W(0x8FB));
    CSW(0x1803, W(0x909));
    SW(0x239B, 0x1B57);
    SW(0x2399, kDS);
    SW(0x239D, 0x3C50);
    B(0x23AF) = 0xFF;
    B(0x23AE) = 1;
    SW(0x23B6, 0xC);
    const uint16_t ax = W(0x1BDE);
    const uint8_t q = (uint8_t)(ax / 0xC), r = (uint8_t)(ax % 0xC);
    SW(0x23B4, r);
    SW(0x1B36, q);
    const uint16_t a = (uint16_t)(q * 0x50);
    SW(0x1B3C, a);
    SW(0x1B3A, a);
    SW(0x1B38, a);
    SW(0x1BA5, 0);
    B(0x1C1A) = 0;
}

// 0B65h: the 80 visible columns.
void Mag::drawPage() {
    cs_[0x1DC1] = 0xC;
    setOffsets(W(0x1B3C) >> 1);
    waitFlags(2);
    uint32_t di = 0x3C50 + W(0x1B3C);
    uint16_t bx = W(0x1B3C);
    for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
}

// 0BB2h
void Mag::clearPage() {
    waitFlag();
    clearText();
    waitFlag();
    cs_[0x1DC1] = 0xD;
    cs_[0x1DBC] = cs_[0x1DBD] = cs_[0x1DBE] = cs_[0x1DBF] = 0x28;
}

// 0BF7h: shows the page named at DS:1B45h and runs it until Esc (false), a
// menu entry is chosen or Up/Down leaves an article for its neighbour
// (true; retBx_ = the entry, retDx_ = its address).
bool Mag::showPage() {
    SW(0x1BCF, 0);
    SW(0x1BD1, 1);
    SW(0x1BD3, 0);
    SW(0x1B41, 0);
    CSW(0x1807, W(0x1BAB));
    CSW(0x1805, W(0x1BAD));
    if (B(0x1C14)) setupMenu();
    else if (B(0x1C16)) setupArticle();
    if (B(0x1C19) == 0xFF) fadeOutText(0x240, 0xC0);
    clearPage();
    // 21E0h: "NAME    .TXT" for 'F'
    {
        uint16_t si = W(0x1B45), di = 0x8A9;
        while (ds_[si] != '.') ds_[di++] = ds_[si++];
        std::memcpy(&ds_[di], ".TXT", 4);
        ds_[di + 4] = 0;
    }
    loadText();
    SW(0x1B55, (uint16_t)(CW(0xF91) - 0x50));
    drawPage();
    B(0x1BC0) = 0xFF;
    B(0x1BB9) = 0xFF;
    if (B(0x1C18) == 0xFF) {
        B(0x1BC0) = 0;
        B(0x1BB9) = 0;
        copySprite(W(0x93C), 0x10, 0);
        SW(0x1BBA, 0);
        SW(0x1BC1, 0);
        scrollbarCalc();
        elevRightMove();
        elevLeftMove();
        elevCaps();
        fadeInPanel(0x240, 0xC0, 0x30);
    } else {
        fadeTo(0x240, 0xC0, 0x30);
    }
    // The fades above jump to 0D40h, the middle of the end-of-scroll block:
    // a new page starts as if a scroll had just ended.
    bool finished = true;
    for (;;) {
        if (!finished) {                              // 0D04h
            waitFlag();
            elevRedraw();
            scrollbarCalc();
            elevRightMove();
            elevLeftMove();
            elevCaps();
            if (B(0x1B40) != 0xFF) {
                if (W(0x1B3C) == W(0x1B3A)) {
                    finished = true;
                } else {                              // 0D9Eh: two more columns
                    const uint16_t step = (uint16_t)(W(0x1B3E) << 1);
                    SW(0x1B3C, (uint16_t)(W(0x1B3C) + step));
                    uint16_t bx = W(0x1B3C);
                    uint32_t di = 0x3C50 + bx;
                    setOffsets(bx >> 1);
                    if (W(0x1B3E) != 0xFFFF) bx += 0x4E, di += 0x4E;
                    drawColumn(di, bx);
                    drawColumn(di + 1, (uint16_t)(bx + 1));
                    continue;
                }
            }
        }
        if (finished) {                               // 0D40h
            finished = false;
            clampMouse();
            uint16_t dx;
            const uint16_t bx = (uint16_t)(W(0x1B3C) / 0x50 * 0xC + W(0x23B4));
            if (skipEntry(bx, dx)) {
                SW(0x23B4, 0xFFFF);
                moveSelection(1);
            }
            if (B(0x1C14) == 0xFF) {
                SW(0x23B2, W(0x23B4));
                highlightRow(W(0x23B4));
            }
            B(0x1B40) = 0xFF;
            B(0x239F) = 0;
        }
        // 0DD6h
        input();
        if (B(0x1C14) == 0xFF && (B(0x2390) & 1)) {   // 0E7Ch: an entry
            const uint16_t bx = (uint16_t)(W(0x1B3C) / 0x50 * 0xC + W(0x23B4));
            uint16_t dx;
            if (bx > W(0x1BDC) || skipEntry(bx, dx)) continue;
            SW(0x1BDE, bx);
            retBx_ = bx, retDx_ = dx;
            return true;
        }
        if (B(0x2390) & 2) {                          // 0F32h: Esc
            if (B(0x1C14)) SW(0x1BDE, (uint16_t)(W(0x1B3C) / 0x50 * 0xC + W(0x23B4)));
            if (B(0x1C17) == 0xFF) {
                fadeOutPanel(0x240, 0xC0, 0xF0);
                clearText();
            }
            return false;
        }
        if (B(0x1C13) != 0xFF) {
            int16_t si = 0;
            if (B(0x23AB) == 0xFF) si = -1;
            else if (B(0x23AA) == 0xFF) si = 1;
            if (si) {                                 // 0F05h
                uint16_t bx, dx;
                if (!step(si, bx, dx)) {
                    retBx_ = bx, retDx_ = dx;
                    return true;
                }
                continue;
            }
        }
        if (B(0x23A8) == 0xFF) {                      // 0EA7h: right
            if (W(0x1B3C) < W(0x1B55)) {
                hideCursorAndRow();
                B(0x1B40) = 0;
                SW(0x1B3E, 1);
                uint16_t ax = (uint16_t)(W(0x1B3C) + W(0x1B43));
                if (ax > W(0x1B55)) ax = W(0x1B55);
                SW(0x1B3A, ax);
            }
        } else if (B(0x23A9) == 0xFF) {               // 0ED8h: left
            if ((int16_t)W(0x1B3C) > 0) {
                hideCursorAndRow();
                B(0x1B40) = 0;
                SW(0x1B3E, 0xFFFF);
                int16_t ax = (int16_t)(W(0x1B3C) - W(0x1B43));
                if (ax < 0) ax = 0;
                SW(0x1B3A, (uint16_t)ax);
            }
        } else if (B(0x1C1A) == 0xFF) {
            if (B(0x23AC) == 0xFF) {                  // 0F11h: 'F', save
                fadeOutText(0x240, 0xC0);
                clearPage();
                saveText();
                drawPage();
                fadeTo(0x240, 0xC0, 0x30);
            }
            // 'P' printed the article (0E54h); there is no printer here.
        }
    }
}

// 0F6Bh
void Mag::hideCursorAndRow() {
    restoreUnderCursor();
    if (B(0x1C14) == 0xFF) unhighlightRow(W(0x23B2));
}

// 0FBFh: loads the page: the header into CS:0F91h, the text, the colours.
void Mag::loadText() {
    uint32_t size;
    const uint8_t* p = resource(str(W(0x1B45)), size);
    uint32_t at = 0;
    auto read = [&](uint16_t s, uint32_t off, uint32_t n) {
        for (uint32_t i = 0; i < n; i++, at++) wb(s, off + i, at < size ? p[at] : 0);
    };
    read(kCS, 0xF91, 0x2C);
    const uint16_t cx = (uint16_t)(CW(0xF91) * CW(0x17F5));
    CSW(0xFBD, cx);
    read(W(0x1BAD), 0, cx);
    auto& attr = seg(W(0x1BAB));
    std::fill(attr.begin(), attr.begin() + std::min<size_t>(cx, attr.size()), 0x0F);
    const uint16_t runs = CW(0xF97);
    if (runs) {
        read(W(0x1BB1), 0, (uint32_t)(uint16_t)(runs << 2));
        auto& r = seg(W(0x1BB1));
        uint32_t si = 0;
        for (int i = 0; i < runs; i++, si += 4) {
            const uint16_t di = (uint16_t)(r[si] | r[si + 1] << 8);
            const uint8_t n = r[si + 2], c = r[si + 3];
            for (int k = 0; k < n; k++) wb(W(0x1BAB), (uint16_t)(di + k), c);
        }
    }
    SW(0x1B43, B(0x1C1B) ? 0x50 : cs_[0xF99]);
}

// 1133h: keeps the mouse off the edges that scroll.
void Mag::clampMouse() {
    if (B(0x2383) != 0xFF) return;
    uint16_t cx = W(0x2388);
    if (cx <= 0x28) cx = 0x2D;
    else if (cx >= 0x258) cx = 0x253;
    SW(0x2388, cx);
    mouseSetPos();
}

// 1160h: the next entry of the list in direction SI that is not a blank
// (type 3). Returns true (CF) when there is none.
bool Mag::step(int16_t si, uint16_t& bx, uint16_t& dx) {
    B(0x23AB) = 0;
    B(0x23AA) = 0;
    int16_t cx = 0;
    bx = W(0x1BDE);
    for (;;) {
        cx = (int16_t)(cx + si);
        bx = (uint16_t)(bx + si);
        if (bx == 0xFFFF || bx > W(0x1BDC)) {
            bx = W(0x1BDE);
            stepCx_ = 0;
            return true;
        }
        if (!skipEntry(bx, dx)) {
            stepCx_ = cx;
            return false;
        }
    }
}

// 1194h: entry BX of the list at DS:1C0Dh; DX = its address.
bool Mag::skipEntry(uint16_t bx, uint16_t& dx) {
    dx = (uint16_t)(bx * 0xE + W(0x1C0D));
    return ds_[(uint16_t)(dx + 0xD)] == 3;
}

// 11AFh: Up/Down move the selection: in the main menu by one; in a list to
// the next entry that is not a blank; in an article not at all.
bool Mag::moveSelection(int16_t si) {
    int16_t cx;
    uint16_t bx = 0;
    if (B(0x1C15) == 0xFF) {
        cx = si;
    } else if (B(0x1C14) == 0xFF) {
        const uint16_t saved = W(0x1BDE);
        SW(0x1BDE, (uint16_t)(W(0x1B3C) / 0x50 * 0xC + W(0x23B4)));
        uint16_t dx;
        const bool cf = step(si, bx, dx);
        cx = stepCx_;
        SW(0x1BDE, saved);
        if (cf) return true;
    } else if (B(0x1C16) == 0xFF) {
        return false;
    } else {
        cx = si;
    }
    const int16_t ax = (int16_t)(W(0x23B4) + cx);
    if (ax < 0 || (uint16_t)ax >= W(0x23B6)) return true;
    SW(0x1BDE, bx);
    SW(0x23B4, (uint16_t)ax);
    return false;
}

// 121Ch: the text area's background, twice side by side.
void Mag::drawBackground() {
    writeMode(0);
    gc(3, 0);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0xF);
    gc(0, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x3C50 + i, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x9240 + i, 0);
    copySprite(W(0x947), 8, (uint16_t)(0x3C50 + W(0x1B38)));
    copySprite(W(0x947), 8, (uint16_t)(0x3C78 + W(0x1B38)));
}

// ------------------------------------------------------------- fades ---

// 12A0h: the text bank to its colours while the bottom panel slides up.
void Mag::fadeInPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BCC, 0x1E0);
    fadeStart(W(0x8ED), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1BCC) != 0x1AD) {
            SW(0x1BCC, (uint16_t)(W(0x1BCC) - 5));
            if ((int16_t)W(0x1BCC) < 0x1AD) SW(0x1BCC, 0x1AD);
            lineCompare(W(0x1BCC));
            continue;
        }
        if (!fading()) return;
    }
}

// 1312h: the opposite, the panel sliding down.
void Mag::fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BCC, 0x1AD);
    fadeStart(W(0x8ED), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1BCC) != 0x1E0) {
            SW(0x1BCC, (uint16_t)(W(0x1BCC) + 5));
            if (W(0x1BCC) >= 0x1E0) SW(0x1BCC, 0x1E0);
            lineCompare(W(0x1BCC));
            continue;
        }
        if (!fading()) return;
    }
}

// 137Dh
void Mag::fadeTo(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BCC, 0x1E0);
    fadeStart(W(0x8ED), si, di, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
}

// 13AFh
void Mag::fadeOutText(uint16_t si, uint16_t dx) {
    fadeStart(W(0x8ED), si, 0xF0, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
    clearText();
}

// 13E1h: the three banks out one after the other, and the music.
void Mag::fadeOutAll() {
    static const uint16_t banks[3][2] = {{0x210, 0xB0}, {0x240, 0xC0}, {0x270, 0xD0}};
    for (auto& b : banks) {
        fadeStart(W(0x8ED), b[0], 0xF0, 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(-5);
        } while (fading());
    }
    volume(-100);
}

// 1496h: the three banks in, the music up.
void Mag::fadeInAll() {
    lineCompare(0x1AD);
    SW(0x1BCC, 0x1AD);
    const uint16_t banks[3][3] = {{0x210, 0xB0, W(0x1BCF)}, {0x240, 0xC0, W(0x1BD1)}, {0x270, 0xD0, W(0x1BD3)}};
    for (auto& b : banks) {
        fadeStart(W(0x8ED), b[0], (uint16_t)(0x30 * (uint8_t)b[2]), 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(10);
        } while (fading());
    }
    volume(0xFF);
}

// 1574h
void Mag::volume(int16_t bx) {
    int16_t v = (int16_t)(W(0x2466) + bx);
    if (v <= 0) v = 0;
    else if (v >= 0xFF) v = 0xFF;
    SW(0x2466, (uint16_t)v);
    if (cs_[0x1DC8] != 0xFF) host_.setMusicVolume(v);
}

// ---------------------------------------------------------- scrollbar ---

// 15C9h: where the two ends of the scrollbar go, eased 5 pixels a frame.
void Mag::scrollbarCalc() {
    const uint32_t bx = CW(0xF91);
    const uint32_t cx = 0x26C;
    if (B(0x1BC3) == 1) SW(0x1BB7, 0);
    else SW(0x1BB7, (uint16_t)(W(0x1B3C) * cx / bx));
    SW(0x1BBE, (uint16_t)((uint16_t)(W(0x1B3C) + 0x50) * cx / bx));
    // DS:1BC0h / 1BB9h = FFh: move by 5 towards the target; else jump to it
    auto ease = [&](uint16_t cur, uint16_t target, uint16_t easeFlag) {
        if (B(easeFlag) == 0xFF) {
            const int16_t d = (int16_t)(W(target) - W(cur));
            if (d == 0) return;
            if (d < -5) {
                SW(cur, (uint16_t)(W(cur) - 5));
                return;
            }
            if (d > 5) {
                SW(cur, (uint16_t)(W(cur) + 5));
                return;
            }
        }
        SW(cur, W(target));
        B(easeFlag) = 0;
    };
    ease(0x1BBC, 0x1BBE, 0x1BC0);
    ease(0x1BB5, 0x1BB7, 0x1BB9);
}

// 1677h: the left end's bar from BX to AX (pixels), ELEV sprites 0 and 8,
// then the end piece (1..8) at AX.
void Mag::elevLeft(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    if (a != b) {
        uint16_t di, cx, si;
        if (a < b) di = (uint16_t)(a + 1), cx = (uint16_t)(b - a), si = 8;
        else di = b, cx = (uint16_t)(a - b), si = 0x48;
        di += 0x730;
        for (; cx; cx--) sprite(W(0x92E), si, di++);
    }
    sprite(W(0x92E), (uint16_t)(((ax & 7) + 1) << 3), (uint16_t)((ax >> 3) + 0x730));
}

// 16DCh: the same for the right end (pieces 9..16).
void Mag::elevRight(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    if (a != b) {
        uint16_t di, cx, si;
        if (a < b) di = (uint16_t)(a + 1), cx = (uint16_t)(b - a), si = 0x48;
        else di = b, cx = (uint16_t)(a - b), si = 8;
        di += 0x730;
        for (; cx; cx--) sprite(W(0x92E), si, di++);
    }
    sprite(W(0x92E), (uint16_t)(((ax & 7) + 9) << 3), (uint16_t)((ax >> 3) + 0x730));
}

// 1743h: the two caps, masked.
void Mag::elevCaps() {
    uint16_t ax = (uint16_t)(W(0x1BBC) + 0xA);
    spriteMasked(W(0x92E), (uint16_t)((((ax & 7) << 1) + 0x11) << 3), (uint16_t)((ax >> 3) + 0x730));
    ax = W(0x1BB5);
    spriteMasked(W(0x92E), (uint16_t)((((ax & 7) << 1) + 0x21) << 3), (uint16_t)((ax >> 3) + 0x730));
}

void Mag::elevRightMove() {   // 1795h
    const uint16_t ax = W(0x1BBC), bx = W(0x1BC1);
    SW(0x1BC1, ax);
    elevRight((uint16_t)(ax + 0xA), (uint16_t)(bx + 0xA));
}

void Mag::elevLeftMove() {    // 17B0h
    const uint16_t ax = W(0x1BB5), bx = W(0x1BBA);
    SW(0x1BBA, ax);
    elevLeft((uint16_t)(ax + 0xA), (uint16_t)(bx + 0xA));
}

void Mag::elevRedraw() {      // 17CBh
    uint16_t bx = W(0x1BB5);
    elevLeft((uint16_t)(bx + 0xA), bx);
    bx = W(0x1BBC);
    elevRight((uint16_t)(bx + 0xA), (uint16_t)(bx + 0x14));
}

// --------------------------------------------------------------- text ---

// 1809h: one 8-pixel column of the text area at DI, from text column BX:
// the margin and the gaps copied from the background (DS:7Ch, 40 bytes
// wide) through the latches, the characters by write mode 3 over it.
void Mag::drawColumn(uint32_t di, uint16_t bx) {
    di &= 0xFFFF;
    uint32_t si = (di % 0x28) + W(0x7C);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0);
    gc(3, 0);
    writeMode(0);
    vw((di - 0x50) & 0xFFFF, 0);
    vw((di + 0x55F0) & 0xFFFF, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x17F7) / 0x50; ax; ax--) {
        vr(si & 0xFFFF);
        si += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
    uint32_t bp = si;
    gc(1, 0xF);
    gc(3, 0);
    writeMode(3);
    for (uint16_t cx = CW(0x17F5); cx;) {
        if (drawChar(bx, di, bp)) {
            bp += 0x500;
            cx--;
            bx = (uint16_t)(bx + CW(0xF91));
        } else {
            bp += 0x280;
        }
        for (uint16_t n = CW(0x17FF); n; n--) {
            vr(bp & 0xFFFF);
            bp += 0x28;
            vw(di, 0);
            di = (di + 0x50) & 0xFFFF;
        }
        bx = (uint16_t)(bx + CW(0xF91));
        if (--cx == 0) break;
    }
    gc(1, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x17F9); ax; ax--) {
        vr(bp & 0xFFFF);
        bp += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
}

// 1912h: character BX of the text at DI with its colour; the latches come
// from the background at BP. Big characters (colour bit 4) are 32 lines of
// SLCTBIG and take two rows.
bool Mag::drawChar(uint16_t bx, uint32_t& di, uint32_t bp) {
    uint8_t ah = rb(CW(0x1807), bx);
    const uint8_t c = rb(CW(0x1805), bx);
    const bool big = ah & 0x10;
    uint16_t font;
    uint32_t si;
    int lines;
    if (big) {
        ah &= 0xF;
        font = CW(0x1803), si = (uint32_t)(uint16_t)(c << 5), lines = 32;
    } else {
        font = CW(0x1801), si = (uint32_t)(uint16_t)(c << 4), lines = 16;
    }
    vga_.outw(0x3CE, (uint16_t)(ah << 8));
    for (int k = 0; k < lines; k++) {
        vr((bp + k * 0x28) & 0xFFFF);
        vw(di, rb(font, si++));
        di = (di + 0x50) & 0xFFFF;
    }
    return big;
}

// --------------------------------------------------------------- music ---

// 1B06h: F1-F4: everything out, the other module, everything in.
void Mag::switchMusic(uint16_t dx) {
    fadeOutAll();
    host_.stopMusic();
    host_.playModule(str(dx));
    fadeInAll();
}

// ------------------------------------------------------------- sprites ---
// A sprite file: a word count, then 8-byte headers (width in bytes | 8000h
// for one pass with the current settings, height, the destination's skip,
// the data's offset), the first at offset 8.

// 1BA4h: plane by plane (or one pass), write mode 0.
void Mag::sprite(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x1B98, di);
    const uint16_t h = rw(s, si + 2u);
    CSW(0x1B9C, h);
    uint16_t cx = rw(s, si);
    const uint16_t skip = rw(s, si + 4u);
    CSW(0x1B9E, skip);
    uint32_t src = rw(s, si + 6u);
    gc(8, 0xFF);
    uint16_t ax;
    if (cx & 0x8000) {
        CSW(0x1B9A, cx & 0x7FFF);
        ax = 0x1008;
    } else {
        CSW(0x1B9A, cx);
        gc(3, 0);
        gc(1, 0);
        writeMode(0);
        vga_.out(0x3C4, 2);
        ax = 0x1001;
        vga_.out(0x3C5, (uint8_t)ax);
    }
    for (;;) {
        uint32_t d = CW(0x1B98);
        for (uint16_t row = CW(0x1B9C); row; row--) {
            for (uint16_t n = CW(0x1B9A); n; n--) vw(d++ & 0xFFFF, rb(s, src++));
            d += skip;
        }
        ax = (uint16_t)(ax << 1);
        if (ax & 0x10) break;
        vga_.out(0x3C5, (uint8_t)ax);
    }
}

// 1C34h: masked by the next sprite's data (one mask byte per data byte,
// as the bit mask), plane by plane.
void Mag::spriteMasked(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x1B98, di);
    CSW(0x1B9A, rw(s, si));
    CSW(0x1B9C, rw(s, si + 2u));
    CSW(0x1BA2, rw(s, si + 0xEu));
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    vga_.out(0x3CE, 8);
    vga_.out(0x3C4, 2);
    for (uint8_t ah = 1; !(ah & 0x10); ah <<= 1) {
        vga_.out(0x3C5, ah);
        uint32_t d = CW(0x1B98);
        uint32_t bp = CW(0x1BA2);
        for (uint8_t ch = (uint8_t)CW(0x1B9C); ch; ch--) {
            for (uint8_t cl = (uint8_t)CW(0x1B9A); cl; cl--) {
                vga_.out(0x3CF, rb(s, bp++));
                vr(d & 0xFFFF);
                vw(d++ & 0xFFFF, rb(s, src++));
            }
            d += skip;
        }
    }
}

// 1CBCh: one pass through the latches with the settings the caller made.
void Mag::spriteLatched(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u);
    const uint16_t w = rw(s, si) & 0x7FFF;
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    CSW(0x1B98, di);
    CSW(0x1B9A, w);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(d & 0xFFFF);
            vw(d++ & 0xFFFF, rb(s, src++));
        }
        d += skip;
    }
}

// 1CF3h: puts a sprite's planes in video memory past the screen (at
// CS:1BA0h, from ADh70h on) and makes its data offset point there.
void Mag::uploadSprite(uint16_t s, uint16_t si) {
    const uint16_t n = (uint16_t)(rw(s, si + 2u) * rw(s, si));
    CSW(0x1B9A, n);
    uint32_t src = rw(s, si + 6u);
    const uint16_t at = CW(0x1BA0);
    wb(s, si + 6u, (uint8_t)at);
    wb(s, si + 7u, (uint8_t)(at >> 8));
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    writeMode(0);
    vga_.out(0x3C4, 2);
    uint32_t di = at;
    for (uint16_t ax = 0x101;;) {
        vga_.out(0x3C5, (uint8_t)ax);
        di = CW(0x1BA0);
        for (uint16_t k = 0; k < n; k++) vw(di++ & 0xFFFF, rb(s, src++));
        const bool carry = ax & 0x8000;
        ax = (uint16_t)(ax << 1);
        if (carry) break;
    }
    CSW(0x1BA0, (uint16_t)di);
}

// 1D5Ch: an uploaded sprite copied in video memory through the latches.
void Mag::copySprite(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u), w = rw(s, si);
    CSW(0x1B9A, w);
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    gc(1, 0);
    gc(8, 0);
    gc(3, 0);
    writeMode(1);
    sq(2, 0xF);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(src++ & 0xFFFF);
            vw(d++ & 0xFFFF, 0);
        }
        d += skip;
    }
}

// ------------------------------------------------------------- the VGA ---

void Mag::installTimer() { raster_ = true; }
void Mag::removeTimer() { raster_ = false; }

// 2070h: palette registers 0-15 straight, colour select for bits 4-5 (so
// each region picks its 16 DAC entries with the colour select register).
void Mag::setupAttributes() {
    vga_.in(0x3DA);
    vga_.out(0x3C0, 0x30);
    const uint8_t bl = (uint8_t)(vga_.in(0x3C1) | 0x80);
    vga_.in(0x3DA);
    vga_.out(0x3C0, 0x30);
    vga_.out(0x3C0, bl);
    for (uint8_t cx = 0; cx < 0x10; cx++) {
        vga_.in(0x3DA);
        vga_.out(0x3C0, cx);
        vga_.out(0x3C0, cx);
    }
    vga_.in(0x3DA);
    vga_.out(0x3C0, 0x20);
}

// 20B0h: line compare, the bottom panel's top.
void Mag::lineCompare(uint16_t cx) {
    if (cx > 0x1DF) cx = 0x1DF;
    vga_.out(0x3D4, 7);
    uint8_t al = (uint8_t)((vga_.in(0x3D5) & 0xEF) | ((cx & 0x100) ? 0x10 : 0));
    vga_.outw(0x3D4, (uint16_t)(7 | al << 8));
    vga_.out(0x3D4, 9);
    al = (uint8_t)((vga_.in(0x3D5) & 0xBF) | ((cx & 0x200) ? 0x40 : 0));
    vga_.out(0x3D4, 9);
    vga_.out(0x3D5, al);
    vga_.out(0x3D4, 0x18);
    vga_.out(0x3D5, (uint8_t)cx);
}

// 2101h
void Mag::startAddress(uint16_t cx) {
    vga_.outw(0x3D4, (uint16_t)(0x0C | (cx & 0xFF00)));
    vga_.outw(0x3D4, (uint16_t)(0x0D | (cx & 0xFF) << 8));
}

// 2111h
void Mag::screenOn(bool on) {
    waitRetrace();
    vga_.out(0x3C4, 1);
    uint8_t al = vga_.in(0x3C5);
    al = on ? (uint8_t)(al & 0xDF) : (uint8_t)(al | 0x20);
    vga_.out(0x3C5, al);
    waitRetrace();
}

// 2147h: a fade of CX colours from DAC entry DX: the bytes at s:SI move
// towards those at s:DI by CS:212Fh per step.
void Mag::fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx) {
    CSW(0x2135, (uint16_t)(cx * 3));
    CSW(0x2131, dx);
    CSW(0x2143, di);
    CSW(0x2141, si);
    CSW(0x2145, s);
    cs_[0x2130] = 0xFF;
}

// 216Dh: one step, and the colours out to the DAC.
void Mag::fadeStep() {
    const uint16_t s = CW(0x2145);
    uint16_t si = CW(0x2141), di = CW(0x2143);
    const int8_t bl = (int8_t)cs_[0x212F];
    uint8_t bh = 0;
    for (uint16_t cx = CW(0x2135); cx; cx--, si++, di++) {
        int8_t al = (int8_t)rb(s, si);
        const int8_t dl = (int8_t)rb(s, di);
        if (al > dl) {
            al = (int8_t)(al - bl);
            if (!(al > dl)) al = dl;
            bh = 0xFF;
        } else if (al != dl) {
            al = (int8_t)(al + bl);
            if (!(al < dl)) al = dl;
            bh = 0xFF;
        }
        wb(s, si, (uint8_t)al);
    }
    cs_[0x2130] = bh;
    vga_.out(0x3C8, (uint8_t)CW(0x2131));
    si = CW(0x2141);
    for (uint16_t n = CW(0x2135) / 3; n; n--)
        for (int k = 0; k < 3; k++) vga_.out(0x3C9, rb(s, si++));
}

// 2204h: 'F' writes the page as text: the box at DS:07DBh, then each
// 40-column page as rows.
void Mag::saveText() {
    std::vector<uint8_t> out;
    std::memcpy(&ds_[0x85F], "\xC4\xC4\xC4\xC4\xC4\xC4", 6);
    out.insert(out.end(), &ds_[0x7DB], &ds_[0x7DB + 0xCE]);
    const uint8_t w = cs_[0xF99];
    cs_[0x10A3] = w;
    CSW(0x10A4, (uint16_t)(CW(0x17F5) * w));
    const uint16_t text = W(0x1BAD);
    for (uint16_t si = 0; si < CW(0xF91); si = (uint16_t)(si + w)) {
        uint16_t row0 = si;
        for (uint16_t row = CW(0x17F5); row; row--) {
            // 10A6h copied the row's first w-2 characters and stepped to the
            // next row with SI + 1 + stride - w, one short, so its files
            // slid a column left on every row and lost the last two
            // columns. Here each row is whole and starts where it should.
            uint16_t p = row0;
            for (int k = 0; k < w; k++) out.push_back((uint8_t)(rb(text, p++) + 0x20));
            row0 = (uint16_t)(row0 + CW(0xF91));
            out.push_back(0x0D);
            out.push_back(0x0A);
        }
    }
    std::string name;
    for (uint16_t a = 0x8A9; ds_[a]; a++)
        if (ds_[a] != ' ') name += (char)ds_[a];
    host_.saveFile(name, out);
}

// 28A7h
void Mag::setDac256(uint16_t s, uint16_t si) {
    vga_.out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, rb(s, si + i));
}

// ------------------------------------------------------------ the mouse ---

void Mag::mouseInit() {      // 2912h: the driver is there
    B(0x2383) = 0xFF;
    mouseSetup();
}

void Mag::mouseSetup() {     // 2947h
    if (B(0x2383)) {
        uint16_t bx = 0, cx = 0, dx = W(0x2395);
        int33(7, bx, cx, dx);
        cx = 0, dx = W(0x2397);
        int33(8, bx, cx, dx);
    }
    SW(0x2388, W(0x2384) >> 1);
    SW(0x238A, W(0x2386) >> 1);
    uint16_t bx = 0, cx = W(0x2388), dx = W(0x238A);
    int33(4, bx, cx, dx);
}

// 29DAh: which rectangle of the table at DS:239Bh the cursor is in.
void Mag::hotspot() {
    const uint16_t s = W(0x2399);
    uint16_t si = W(0x239B);
    const uint16_t count = rw(s, si);
    si += 2;
    uint8_t al = 0xFF;
    for (uint16_t cx = count; cx; cx--, si += 8) {
        const int16_t x = (int16_t)W(0x2388), y = (int16_t)W(0x238A);
        if (x < (int16_t)rw(s, si) || y < (int16_t)rw(s, si + 2u) || x > (int16_t)rw(s, si + 4u) ||
            y > (int16_t)rw(s, si + 6u))
            continue;
        al = (uint8_t)(count - cx);
        break;
    }
    B(0x2391) = al;
}

// 2A33h: mouse and keys into DS:2390h-23ADh.
void Mag::input() {
    B(0x2390) = 0;
    B(0x2391) = 0xFF;
    B(0x23A9) = B(0x23A8) = B(0x23AB) = B(0x23AA) = B(0x23AC) = B(0x23AD) = 0;
    if (B(0x2383)) {
        uint16_t bx = 0, cx = 0, dx = 0;
        int33(3, bx, cx, dx);
        B(0x2390) = (uint8_t)bx;
        const uint16_t x = (uint16_t)((uint32_t)W(0x2384) * cx / W(0x2395));
        const uint16_t y = (uint16_t)((uint32_t)W(0x2386) * dx / W(0x2397));
        if (x != W(0x2388) || y != W(0x238A)) {
            if (B(0x23A7) != 0xFF) cs_[0x2C35] = 0;
            B(0x23A7) = 0;
            SW(0x2388, x);
            SW(0x238A, y);
            if (W(0x2388) <= 0x28) B(0x23A9) = 0xFF;
            else if (W(0x2388) >= 0x258) B(0x23A8) = 0xFF;
        }
        hotspot();
    }
    const uint8_t al = cs_[0x2C34];
    cs_[0x2C34] = 0;
    bool done = false;
    if (cs_[0x1DC8] != 0xFF && al >= 0x3B) {
        const uint8_t bl = (uint8_t)(al - 0x3B);
        if (bl <= 5) {                                   // F1-F6
            if (bl != B(0x7B)) {
                const uint16_t si = (uint16_t)((B(0x8D9) == 3 ? 2 : 0x48) + bl * 0xE);
                if (B(0x8D9) >= ds_[si + 0xD]) {
                    B(0x7B) = bl;
                    switchMusic(si);
                }
            }
            done = true;
        } else if (bl == 8) {                            // F9: music off/on
            int16_t bx;
            if (B(0x7B) != 0xFF) bx = (int16_t)0xFF01, B(0x7B) = 0xFF;
            else bx = 0xFF, B(0x7B) = 0xFE;
            volume(bx);
            done = true;
        }
    }
    if (!done) {
        switch (al) {
        case 0x19: B(0x23AD) = 0xFF; break;             // P
        case 0x21: B(0x23AC) = 0xFF; break;             // F
        case 0x50:                                       // Down
            cs_[0x2C35] = 0xFF;
            B(0x23AA) = 0xFF;
            moveSelection(1);
            break;
        case 0x48:                                       // Up
            cs_[0x2C35] = 0xFF;
            B(0x23AB) = 0xFF;
            moveSelection(-1);
            break;
        case 0x4B:                                       // Left
            cs_[0x2C35] = 0xFF;
            B(0x23A9) = 0xFF;
            break;
        case 0x4D:                                       // Right
            cs_[0x2C35] = 0xFF;
            B(0x23A8) = 0xFF;
            break;
        case 0x39:
        case 0x1C:
        case 0x12:                                       // Space, Enter, E
            cs_[0x2C35] = 0xFF;
            B(0x2390) |= 1;
            break;
        case 0x01:                                       // Esc
            cs_[0x2C35] = 0xFF;
            B(0x2390) |= 2;
            break;
        }
    }
    cursor();
}

// 2C72h: the 3x16 bytes under the cursor to A000:FFCFh.
void Mag::saveUnderCursor(uint16_t di) {
    if (B(0x2383) != 0xFF) return;
    uint32_t si = di, d = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        si += 0x4D;
    }
}

// 2CA9h
void Mag::restoreUnderCursor() {
    if (B(0x2383) != 0xFF) return;
    if (B(0x239F) != 0xFF) {
        B(0x239F) = 0xFF;
        return;
    }
    uint32_t d = W(0x1BA7), si = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        d += 0x4D;
    }
}

// 2CF8h: the main menu's highlighted entry follows the mouse or the keys.
void Mag::mainHighlight() {
    if (B(0x2383) == 0xFF && cs_[0x2C35] != 0xFF) {
        if (B(0x2391) == 0xFF) return;
        SW(0x23B4, B(0x2391));
    }
    if (B(0x23AF) != 0xFF) {
        if (W(0x23B4) == W(0x23B0)) return;
        toggleItem(W(0x23B0));
    }
    B(0x23AF) = 0;
    SW(0x23B0, W(0x23B4));
    toggleItem(W(0x23B4));
}

// 2D51h: the same for the rows of a menu page.
void Mag::menuHighlight() {
    if (B(0x1C14) != 0xFF) return;
    if (B(0x2383) == 0xFF && cs_[0x2C35] != 0xFF) {
        uint16_t ax = W(0x238A);
        if (ax <= 0xD) ax = 0;
        else if (ax >= 0xFA) ax = 0xB;
        else ax = (uint16_t)(uint8_t)((ax - 0xD) / 0x14);
        const uint16_t di = ax;
        const uint16_t bx = (uint16_t)(di + W(0x1B3C) / 0x50 * 0xC);
        uint16_t dx;
        if (skipEntry(bx, dx)) return;
        SW(0x23B4, di);
    }
    if (W(0x23B4) == W(0x23B2)) return;
    unhighlightRow(W(0x23B2));
    SW(0x23B2, W(0x23B4));
    B(0x23AF) = 0;
    highlightRow(W(0x23B4));
}

// 2DEAh: the mouse cursor, after the highlight has followed it.
void Mag::cursor() {
    const uint16_t y = (uint16_t)(W(0x238A) + 1);
    SW(0x23A2, y);
    SW(0x23A0, W(0x2388));
    const uint16_t di = (uint16_t)(0x50 * y + (W(0x2388) >> 3) + W(0x1B3C) + W(0x239D));
    restoreUnderCursor();
    SW(0x1BA7, di);
    if (B(0x23AE) == 0) mainHighlight();
    else if (B(0x23AE) == 1) menuHighlight();
    if (B(0x2383) != 0xFF) return;
    saveUnderCursor(W(0x1BA7));
    if (cs_[0x2C35] == 0xFF) return;
    spriteMasked(W(0x923), (uint16_t)(((W(0x2388) & 7) << 4) + 8), W(0x1BA7));
}

// 2E84h: row DI of a menu page in reverse (black on white).
void Mag::highlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint16_t bx = (uint16_t)(CW(0xF91) * di + W(0x1B3C));
    uint32_t d = (uint16_t)(pos + 0x3C00 + W(0x1B3C));
    const uint32_t start = d;
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0);
    gc(3, 0);
    writeMode(0);
    for (int i = 0; i < 0x50; i++) vw(d++ & 0xFFFF, 0xFF);
    d += 0x500;
    for (int i = 0; i < 0x50; i++) vw(d++ & 0xFFFF, 0xFF);
    d = start + 0x50;
    for (int cx = 0; cx < 0x50; cx++) {
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x1805), bx) << 4);
        uint32_t o = d;
        for (int k = 0; k < 16; k++) {
            vw(o & 0xFFFF, (uint8_t)(rb(CW(0x1801), si++) ^ 0xFF));
            o += 0x50;
        }
        bx++;
        d++;
    }
}

// 2F8Ah: the row back to normal, the background through the latches.
void Mag::unhighlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint32_t bp = (uint16_t)((pos >> 1) + W(0x7C));
    uint32_t si = (bp - 0x28) & 0xFFFF;
    uint16_t bx = (uint16_t)(CW(0xF91) * di + W(0x1B3C));
    uint32_t d = (uint16_t)(pos + 0x3C00 + W(0x1B3C));
    const uint32_t start = d;
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0);
    gc(3, 0);
    writeMode(1);
    for (int pass = 0; pass < 2; pass++) {
        uint32_t s2 = si;
        for (int k = 0; k < 0x28; k++) movsbVram(kVRAM, s2, d);
    }
    d += 0x500;
    si += 0x28 + 0x280;   // the second pass left SI 28h on
    for (int pass = 0; pass < 2; pass++) {
        uint32_t s2 = si;
        for (int k = 0; k < 0x28; k++) movsbVram(kVRAM, s2, d);
    }
    writeMode(3);
    d = start + 0x50;
    for (int cx = 0x50; cx; cx--) {
        uint32_t o = d & 0xFFFF;
        drawChar(bx, o, bp & 0xFFFF);
        bx++;
        bp++;
        d++;
        if (cx == 0x28) bp -= 0x28;
    }
}

// 3050h: main menu entry DI (TITLES sprite DI) XORed in planes 0 and 1.
void Mag::toggleItem(uint16_t di) {
    const uint16_t si2 = (uint16_t)(di << 1);
    const uint16_t at = (uint16_t)(CW(0x303C + si2) + CW(0x3046 + si2));
    vga_.outw(0x3C4, 0x0302);
    vga_.outw(0x3CE, 0xFF08);
    writeMode(3);
    vga_.outw(0x3CE, 0x0F00);
    vga_.outw(0x3CE, 0x0F01);
    vga_.outw(0x3CE, 0x1803);
    spriteLatched(W(0x962), (uint16_t)(si2 * 4 + 8), at);
}

// 30ADh: the driver's position from the program's.
void Mag::mouseSetPos() {
    if (B(0x2383) != 0xFF) return;
    B(0x23A7) = 0xFF;
    uint16_t cx = (uint16_t)((uint32_t)W(0x2395) * W(0x2388) / W(0x2384));
    uint16_t dx = (uint16_t)((uint32_t)W(0x2397) * W(0x238A) / W(0x2386));
    uint16_t bx = 0;
    int33(4, bx, cx, dx);
}

}  // namespace imp
