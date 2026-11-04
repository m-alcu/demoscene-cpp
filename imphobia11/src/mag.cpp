#include "mag.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <stdexcept>

namespace imp {

namespace {
constexpr uint32_t kImageDS = 0xE3E0;   // DS (0E3Eh) in the load image
}

Mag::Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat)
    : vga_(vga), host_(host), dat_(std::move(dat)) {
    cs_.assign(0x10000, 0);
    ds_.assign(0x10000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0x10000), cs_.begin());
    if (image.size() > kImageDS)
        std::copy(image.begin() + kImageDS, image.begin() + std::min<size_t>(image.size(), kImageDS + 0x10000),
                  ds_.begin());
    // NFO11.DAT's directory (CS:3086h points at it): 13-byte names, offset, size.
    for (uint32_t p = CW(0x3086); cs_[p]; p += 21) {
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
    while (cs_[0x1D88] != 0xFF) host_.waitFrame();
    cs_[0x1D88] = 0;
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
    // State A of the handler (1DB9h) comes at the start of line 138 (the PIT
    // count was measured as 8Bh display-enable edges from the end of the
    // retrace) and writes the CRTC offset at the start of the next four
    // lines, then 28h and the middle's colour bank; state B (1E79h) comes at
    // line 421 (1A6h edges) with the bottom's bank. State C, before the
    // retrace, sets the top's bank: that is in the registers at frame start.
    std::vector<Vga::LineWrite> w;
    for (int i = 0; i < 4; i++) w.push_back({139 + i, Vga::LineWrite::Crtc, 0x13, cs_[0x1D93 + i]});
    w.push_back({143, Vga::LineWrite::Crtc, 0x13, 0x28});
    w.push_back({143, Vga::LineWrite::Ac, 0x14, cs_[0x1D98]});
    w.push_back({422, Vga::LineWrite::Ac, 0x14, cs_[0x1D99]});
    w.push_back({422, Vga::LineWrite::Crtc, 0x13, 0x28});
    return w;
}

void Mag::endOfFrame() {
    if (raster_) {
        // state C (1EB6h): top colour bank, offset back to 28h, frame flag
        vga_.ac[0x14] = cs_[0x1D97];
        vga_.crtc[0x13] = 0x28;
        cs_[0x1D88] = 0xFF;
        // the keyboard handler (2BFBh) keeps the last scancode
        if (!keys_.empty()) {
            cs_[0x2BCA] = keys_.front();
            keys_.erase(keys_.begin());
        }
    }
}

void Mag::mouse(int x, int y, int buttons, bool moved) {
    mouse_.buttons = buttons;
    if (!moved) return;
    // The program scales the driver's position (DS:2390h * x / DS:23A1h);
    // set the driver so that the cursor lands under the pointer. The cursor
    // is drawn at row DS:2396h + 1 of the text area, which shows at line
    // 147 + DS:2396h.
    const int sx = W(0x2390) ? x * W(0x23A1) / W(0x2390) : x;
    const int py = y - 147;
    const int sy = W(0x2392) ? py * W(0x23A3) / W(0x2392) : py;
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
    // no printer), the sound system (24D7h).
    B(0x7E) = 3;
    B(0x8E5) = 3;
    B(0x8E7) = 0xFF;
    B(0x8E8) = fullPage_ ? 0xFF : 0;
    B(0x1C27) = B(0x8E8);
    cs_[0x1D90] = 0;
    cs_[0x1D9F] = 0;

    // The cover (BenJ): LOGO.RAW is a 320x200 picture and its palette,
    // shown in mode 13h, faded in, held 200 retraces and faded out.
    clearVram();
    vga_.setMode(0x13);
    setDac256(kDS, 0x1F2B);
    SW(0x98C, loadResource(str(0x72)));            // LOGO.RAW
    {
        auto& logo = seg(W(0x98C));
        for (uint32_t i = 0; i < 0xFA00; i++) vw(i, logo[i]);
    }
    fadeLogoIn();
    waitRetraces(0xC8);
    fadeLogoOut();
    clearVram();
    vga_.setMode(0x12);
    setupAttributes();
    setDac256(kDS, 0x1F2B);

    SW(0x1BB9, alloc(0x714));
    SW(0x1BB7, alloc(0x714));
    SW(0x1BBD, alloc(0x55F));
    SW(0x1BBF, alloc(0x50));
    SW(0x907, loadResource(str(0x8FB)));   // ARTFONT.SPR
    SW(0x915, loadResource(str(0x909)));   // SLCTBIG.SPR
    SW(0x923, loadResource(str(0x917)));   // READFNT.SPR
    SW(0x92F, loadResource(str(0x925)));   // MOUSE.SPR
    SW(0x8F9, loadResource(str(0x8EE)));   // SELECT.PAL
    SW(0x93A, loadResource(str(0x931)));   // ELEV.SPR
    SW(0x96E, loadResource(str(0x963)));   // TITLES.SPR
    SW(0x961, loadResource(str(0x955)));   // DECORS2.SPR
    SW(0x948, loadResource(str(0x93C)));   // DECORS1.SPR
    SW(0x953, loadResource(str(0x94A)));   // BACK.SPR
    SW(0x7C, CW(0x1B77));
    uploadSprite(W(0x953), 8);
    fadeMagIn();

    mouseInit();
    if (B(0x238F) == 0xFF) {
        SW(0x2390, 0x275);
        SW(0x2392, 0x102);
        mouseSetup();
    }
    sprite(W(0x948), 8, 0x10E0);
    uploadSprite(W(0x948), 0x10);
    volume(0xFF);
    host_.playModule(str(0x02));          // GUS: the table at DS:0002h, F1
    // 1F15h/1F5Eh measure the frame for the PIT counts; the port's frames
    // are split at the lines the counts stand for (rasterWrites()).
    CSW(0x1D91, 0x1DB9);
    cs_[0x1D97] = 0x0B;
    cs_[0x1D98] = 0x0C;
    cs_[0x1D99] = 0x0D;
    installTimer();
    SW(0x2394, 0x13A);
    SW(0x2396, 0x81);
    mouseSetPos();
    lineCompare(0x1E0);
    startAddress(0x10E0);
}

// 02D0h: the main menu and what its five entries lead to.
void Mag::mainMenu() {
    for (;;) {
        setOffsets(0);
        SW(0x1B44, 0);
        SW(0x1B40, 0);
        drawBackground();
        SW(0x1BDB, 0);
        SW(0x1BDD, 1);
        SW(0x1BDF, 0);
        B(0x1C21) = 0xFF;
        B(0x1C20) = 0;
        B(0x1C22) = 0;
        B(0x1C26) = 0;
        sprite(W(0x961), 0x10, 0);
        sprite(W(0x961), 8, 0x3D5B);
        for (uint16_t di = 5; di; di--) toggleItem(di - 1);
        if (B(0x1C1D) == 0xFF) {
            B(0x1C1D) = 0;
            fadeInAll();
        } else {
            fadeInPanel(0x240, 0xC0, 0x30);
        }
        SW(0x23A7, 0x1B87);
        SW(0x23A5, kDS);
        B(0x23AB) = 0;
        SW(0x2390, 0x275);
        SW(0x2392, 0x100);
        SW(0x23A9, 0x3D40);
        B(0x23BA) = 0;
        B(0x23BB) = 0xFF;
        SW(0x23C2, 5);
        SW(0x23C0, 0);
        B(0x1B4C) = 0xFF;
        SW(0x1B4D, 0);
        SW(0x1B48, 0);
        for (;;) {
            waitFlag();
            input();
            if (B(0x239C) & 1) break;
            if (B(0x239C) & 2) return;
        }
        const uint8_t al = (uint8_t)W(0x23C0);
        uint16_t bx;
        switch (al) {
        case 2:                                     // ARTICLES
            SW(0x1B51, 0x1BF2);
            SW(0x1BE1, 0x98E);
            SW(0x1C19, 0x9AA);
            SW(0x1BE8, 0xFB);
            bx = W(0x1BEC);
            section(bx);
            SW(0x1BEC, bx);
            break;
        case 1:                                     // CHARTS
            SW(0x1BE1, 0x98E);
            SW(0x1C19, 0x19FA);
            SW(0x1BE8, 0xB);
            SW(0x1B51, 0x1C0C);
            bx = W(0x1BEE);
            section(bx);
            SW(0x1BEE, bx);
            break;
        case 3:                                     // INTERVIEWS
            SW(0x1BE1, 0x98E);
            SW(0x1C19, 0x180E);
            SW(0x1BE8, 0x17);
            SW(0x1B51, 0x1BFF);
            bx = W(0x1BF0);
            section(bx);
            SW(0x1BF0, bx);
            break;
        default: {                                  // 04A1h: EDITORIAL (0), CREDITS
            const uint16_t entry = al == 0 ? 0 : 1;
            B(0x1C24) = 0xFF;
            B(0x1C1F) = 0xFF;
            B(0x1C20) = 0;
            B(0x1C22) = 0xFF;
            B(0x1C21) = 0;
            B(0x1C23) = 0xFF;
            B(0x1BCF) = 1;
            fadeOutPanel(0x240, 0xC0, 0xF0);
            SW(0x1B51, (uint16_t)(entry * 0xE + 0x98E));
            showPage();
            break;
        }
        }
    }
}

// 0807h: a section's menu page, and the articles chosen from it. BX is the
// entry to start on and comes back as the last one.
bool Mag::section(uint16_t& bx) {
    SW(0x1BEA, bx);
    SW(0x1B53, W(0x1B51));
    B(0x1C25) = 0;
    B(0x1C24) = 0xFF;
    fadeOutPanel(0x240, 0xC0, 0xF0);
    uint16_t dx = 0;
    for (;;) {
        // 0829h
        SW(0x1B51, W(0x1B53));
        B(0x1C1F) = 0xFF;
        B(0x1C20) = 0xFF;
        B(0x1C22) = 0;
        B(0x1C21) = 0;
        B(0x1C23) = 0;
        B(0x1BCF) = 0;
        if (!showPage()) {
            fadeOutPanel(0x240, 0xC0, 0xF0);
            clearText();
            bx = W(0x1BEA);
            return false;
        }
        dx = retDx_;
        // 0871h: the article; Up/Down in it go to the neighbours
        for (;;) {
            SW(0x1B51, dx);
            fadeOutText(0x240, 0xC0);
            B(0x1C1F) = 0;
            B(0x1C24) = 0;
            B(0x1C20) = 0;
            B(0x1C22) = 0xFF;
            B(0x1C21) = 0;
            B(0x1C23) = 0;
            B(0x1C25) = 0xFF;
            B(0x1BCF) = 1;
            if (!showPage()) break;
            SW(0x1BEA, retBx_);
            dx = retDx_;
        }
    }
}

// 04F2h: the end.
void Mag::ending() {
    fadeOutAll();
    auto& pal = seg(W(0x8F9));
    std::copy(pal.begin() + 0xF0, pal.begin() + 0x120, pal.begin());
    setDac256(W(0x8F9), 0);
    clearVram();
    removeTimer();
    startAddress(0);
    vga_.in(0x3DA);
    vga_.out(0x3C0, 0x34);
    vga_.out(0x3C0, 0);
    waitRetrace();
    host_.stopMusic();
    loadResourceInto(str(0x97E), W(0x8F9), 0x30);   // CLINCOL.PAL
    SW(0x97C, loadResource(str(0x970)));            // CLINCOL.SPR
    sprite(W(0x97C), 8, 0x367E);
    cs_[0x2106] = 1;
    fadeStart(W(0x8F9), 0, 0x30, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    waitRetraces(0x28);
    std::fill(pal.begin() + 0x30, pal.begin() + 0x60, 0);
    fadeStart(W(0x8F9), 0, 0x30, 0x10, 0);
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

// 0795h: the cover's palette from black in 32 steps, each written near the
// bottom of the picture (2027h: after the retrace, 395 lines down).
void Mag::fadeLogoIn() {
    auto& logo = seg(W(0x98C));
    for (int cx = 0x1F; cx >= 0; cx--) {
        waitRetrace();
        vga_.out(0x3C8, 0);
        const uint8_t bl = (uint8_t)((0x1F - cx) << 3);
        for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, (uint8_t)((logo[0xFA00 + i] * bl) >> 8));
    }
}

// 07CFh: and back to black.
void Mag::fadeLogoOut() {
    auto& logo = seg(W(0x98C));
    for (int cx = 0x1F; cx >= 0; cx--) {
        waitRetrace();
        vga_.out(0x3C8, 0);
        const uint8_t bl = (uint8_t)(cx << 3);
        for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, (uint8_t)((logo[0xFA00 + i] * bl) >> 8));
    }
}

// 0700h: SELECT.PAL's last 16 colours (three times, for the three banks
// the mag's raster uses) from black in 8 steps, then in all 16 banks.
void Mag::fadeMagIn() {
    auto& pal = seg(W(0x8F9));
    for (int k = 0; k < 3; k++)
        for (int i = 0; i < 0x30; i++) ds_[0x1F2B + k * 0x30 + i] = pal[0xF0 + i];
    for (int i = 0; i < 0x90; i++) ds_[0x1C2B + i] = ds_[0x1F2B + i];
    for (int cx = 7; cx >= 0; cx--) {
        vga_.out(0x3C8, 0);
        waitRetrace();
        const uint8_t bl = (uint8_t)((7 - cx) << 5);
        for (int i = 0; i < 0x90; i++) vga_.out(0x3C9, (uint8_t)((ds_[0x1F2B + i] * bl) >> 8));
    }
    vga_.out(0x3C8, 0);
    for (int bx = 0; bx < 0x10; bx++)
        for (int i = 0; i < 0x30; i++) vga_.out(0x3C9, pal[0xF0 + i]);
}

// 09ADh is gone: the cover is copied straight to video memory.

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
    for (uint32_t i = 0; i < 0x2E90 * 2; i++) vw((0x3D40 + i) & 0xFFFF, 0);
}

// 0997h: the four CRTC offsets the timer handler writes on lines 139-142:
// together they advance the address by AX words, which is how the text
// area scrolls sideways.
void Mag::setOffsets(uint16_t ax) {
    uint8_t* o = &cs_[0x1D93];
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

// 0A24h: an article: 15 rows, READFNT, no row spacing.
void Mag::setupArticle() {
    CSW(0x17CC, 0xF);
    CSW(0x17CE, 0x460);
    CSW(0x17D0, 0x14);
    CSW(0x17D4, 0);
    CSW(0x17D6, 0);
    CSW(0x17D8, W(0x923));
    CSW(0x17DA, W(0x915));
    SW(0x23A7, 0x1B75);
    SW(0x23A5, kDS);
    SW(0x23A9, 0x3D40);
    B(0x23BB) = 0xFF;
    B(0x23BA) = 9;
    SW(0x23C2, 1);
    SW(0x23C0, 0);
    SW(0x1B48, 0);
    SW(0x1B46, 0);
    SW(0x1B44, 0);
    SW(0x1B42, 0);
    B(0x1C26) = 0xFF;
}

// 0AA4h: a menu page: 12 rows of ARTFONT, 4 lines between them, opened at
// the page holding entry DS:1BEAh.
void Mag::setupMenu() {
    CSW(0x17CC, 0xC);
    CSW(0x17CE, 0x460);
    CSW(0x17D0, 0x14);
    CSW(0x17D4, 0x140);
    CSW(0x17D6, 4);
    CSW(0x17D8, W(0x907));
    CSW(0x17DA, W(0x915));
    SW(0x23A7, 0x1B63);
    SW(0x23A5, kDS);
    SW(0x23A9, 0x3D40);
    B(0x23BB) = 0xFF;
    B(0x23BA) = 1;
    SW(0x23C2, 0xC);
    const uint16_t ax = W(0x1BEA);
    const uint8_t q = (uint8_t)(ax / 0xC), r = (uint8_t)(ax % 0xC);
    SW(0x23C0, r);
    SW(0x1B42, q);
    const uint16_t a = (uint16_t)(q * 0x50);
    SW(0x1B48, a);
    SW(0x1B46, a);
    SW(0x1B44, a);
    SW(0x1BB1, 0);
    B(0x1C26) = 0;
}

// 0B2Eh: the 80 visible columns.
void Mag::drawPage() {
    cs_[0x1D98] = 0xC;
    setOffsets(W(0x1B48) >> 1);
    waitFlags(2);
    uint32_t di = 0x3D40 + W(0x1B48);
    uint16_t bx = W(0x1B48);
    for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
}

// 0B7Bh
void Mag::clearPage() {
    waitFlag();
    clearText();
    waitFlag();
    cs_[0x1D98] = 0xD;
    cs_[0x1D93] = cs_[0x1D94] = cs_[0x1D95] = cs_[0x1D96] = 0x28;
}

// 0BC0h: shows the page named at DS:1B51h and runs it until Esc (false), a
// menu entry is chosen or Up/Down leaves an article for its neighbour
// (true; retBx_ = the entry, retDx_ = its address).
bool Mag::showPage() {
    SW(0x1BDB, 0);
    SW(0x1BDD, 2);
    SW(0x1BDF, 0);
    SW(0x1B4D, 0);
    CSW(0x17DE, W(0x1BB7));
    CSW(0x17DC, W(0x1BB9));
    if (B(0x1C20)) setupMenu();
    else if (B(0x1C22)) setupArticle();
    if (B(0x1C25) == 0xFF) fadeOutText(0x240, 0xC0);
    clearPage();
    // 21B7h: "NAME    .TXT" for 'F'
    {
        uint16_t si = W(0x1B51), di = 0x8B5;
        while (ds_[si] != '.') ds_[di++] = ds_[si++];
        std::memcpy(&ds_[di], ".TXT", 4);
        ds_[di + 4] = 0;
    }
    loadText();
    SW(0x1B61, (uint16_t)(CW(0xF57) - 0x50));
    drawPage();
    B(0x1BCC) = 0xFF;
    B(0x1BC5) = 0xFF;
    if (B(0x1C24) == 0xFF) {
        B(0x1BCC) = 0;
        B(0x1BC5) = 0;
        copySprite(W(0x948), 0x10, 0);
        SW(0x1BC6, 0);
        SW(0x1BCD, 0);
        scrollbarCalc();
        elevRightMove();
        elevLeftMove();
        elevCaps();
        fadeInPanel(0x240, 0xC0, 0x60);
    } else {
        fadeTo(0x240, 0xC0, 0x60);
    }
    // The fades above jump to 0D06h, the middle of the end-of-scroll block:
    // a new page starts as if a scroll had just ended.
    bool finished = true;
    for (;;) {
        if (!finished) {                              // 0CCDh
            waitFlag();
            scrollbarCalc();
            elevRightMove();
            elevLeftMove();
            elevCaps();
            if (B(0x1B4C) != 0xFF) {
                if (W(0x1B48) == W(0x1B46)) {
                    finished = true;
                } else {                              // 0D64h: two more columns
                    const uint16_t step = (uint16_t)(W(0x1B4A) << 1);
                    SW(0x1B48, (uint16_t)(W(0x1B48) + step));
                    uint16_t bx = W(0x1B48);
                    uint32_t di = 0x3D40 + bx;
                    setOffsets(bx >> 1);
                    if (W(0x1B4A) != 0xFFFF) bx += 0x4E, di += 0x4E;
                    drawColumn(di, bx);
                    drawColumn(di + 1, (uint16_t)(bx + 1));
                    continue;
                }
            }
        }
        if (finished) {                               // 0D06h
            finished = false;
            clampMouse();
            uint16_t dx;
            const uint16_t bx = (uint16_t)(W(0x1B48) / 0x50 * 0xC + W(0x23C0));
            if (skipEntry(bx, dx)) {
                SW(0x23C0, 0xFFFF);
                moveSelection(1);
            }
            if (B(0x1C20) == 0xFF) {
                SW(0x23BE, W(0x23C0));
                highlightRow(W(0x23C0));
            }
            B(0x1B4C) = 0xFF;
            B(0x23AB) = 0;
        }
        // 0D9Ch
        input();
        if (B(0x1C20) == 0xFF && (B(0x239C) & 1)) {   // 0E42h: an entry
            const uint16_t bx = (uint16_t)(W(0x1B48) / 0x50 * 0xC + W(0x23C0));
            uint16_t dx;
            if (bx > W(0x1BE8) || skipEntry(bx, dx)) continue;
            SW(0x1BEA, bx);
            retBx_ = bx, retDx_ = dx;
            return true;
        }
        if (B(0x239C) & 2) {                          // 0EF8h: Esc
            if (B(0x1C20)) SW(0x1BEA, (uint16_t)(W(0x1B48) / 0x50 * 0xC + W(0x23C0)));
            if (B(0x1C23) == 0xFF) {
                fadeOutPanel(0x240, 0xC0, 0xF0);
                clearText();
            }
            return false;
        }
        if (B(0x1C1F) != 0xFF) {
            int16_t si = 0;
            if (B(0x23B7) == 0xFF) si = -1;
            else if (B(0x23B6) == 0xFF) si = 1;
            if (si) {                                 // 0ECBh
                uint16_t bx, dx;
                if (!step(si, bx, dx)) {
                    retBx_ = bx, retDx_ = dx;
                    return true;
                }
                continue;
            }
        }
        if (B(0x23B4) == 0xFF) {                      // 0E6Dh: right
            if (W(0x1B48) < W(0x1B61)) {
                hideCursorAndRow();
                B(0x1B4C) = 0;
                SW(0x1B4A, 1);
                uint16_t ax = (uint16_t)(W(0x1B48) + W(0x1B4F));
                if (ax > W(0x1B61)) ax = W(0x1B61);
                SW(0x1B46, ax);
            }
        } else if (B(0x23B5) == 0xFF) {               // 0E9Eh: left
            if ((int16_t)W(0x1B48) > 0) {
                hideCursorAndRow();
                B(0x1B4C) = 0;
                SW(0x1B4A, 0xFFFF);
                int16_t ax = (int16_t)(W(0x1B48) - W(0x1B4F));
                if (ax < 0) ax = 0;
                SW(0x1B46, (uint16_t)ax);
            }
        } else if (B(0x1C26) == 0xFF) {
            if (B(0x23B8) == 0xFF) {                  // 0ED7h: 'F', save
                fadeOutText(0x240, 0xC0);
                clearPage();
                saveText();
                drawPage();
                fadeTo(0x240, 0xC0, 0x60);
            }
            // 'P' printed the article (0E1Ah); there is no printer here.
        }
    }
}

// 0F31h
void Mag::hideCursorAndRow() {
    restoreUnderCursor();
    if (B(0x1C20) == 0xFF) unhighlightRow(W(0x23BE));
}

// 0F85h: loads the page: the header into CS:0F57h, the text, the colours.
void Mag::loadText() {
    uint32_t size;
    const uint8_t* p = resource(str(W(0x1B51)), size);
    uint32_t at = 0;
    auto read = [&](uint16_t s, uint32_t off, uint32_t n) {
        for (uint32_t i = 0; i < n; i++, at++) wb(s, off + i, at < size ? p[at] : 0);
    };
    read(kCS, 0xF57, 0x2C);
    const uint16_t cx = (uint16_t)(CW(0xF57) * CW(0x17CC));
    CSW(0xF83, cx);
    read(W(0x1BB9), 0, cx);
    auto& attr = seg(W(0x1BB7));
    std::fill(attr.begin(), attr.begin() + std::min<size_t>(cx, attr.size()), 0x0F);
    const uint16_t runs = CW(0xF5D);
    if (runs) {
        read(W(0x1BBD), 0, (uint32_t)(uint16_t)(runs << 2));
        auto& r = seg(W(0x1BBD));
        uint32_t si = 0;
        for (int i = 0; i < runs; i++, si += 4) {
            const uint16_t di = (uint16_t)(r[si] | r[si + 1] << 8);
            const uint8_t n = r[si + 2], c = r[si + 3];
            for (int k = 0; k < n; k++) wb(W(0x1BB7), (uint16_t)(di + k), c);
        }
    }
    SW(0x1B4F, B(0x1C27) == 0xFF ? 0x50 : cs_[0xF5F]);
}

// 10F9h: keeps the mouse off the edges that scroll.
void Mag::clampMouse() {
    if (B(0x238F) != 0xFF) return;
    uint16_t cx = W(0x2394);
    if (cx <= 0x28) cx = 0x2D;
    else if (cx >= 0x258) cx = 0x253;
    SW(0x2394, cx);
    mouseSetPos();
}

// 1126h: the next entry of the list in direction SI that is not a blank
// (type 3). Returns true (CF) when there is none.
bool Mag::step(int16_t si, uint16_t& bx, uint16_t& dx) {
    B(0x23B7) = 0;
    B(0x23B6) = 0;
    int16_t cx = 0;
    bx = W(0x1BEA);
    for (;;) {
        cx = (int16_t)(cx + si);
        bx = (uint16_t)(bx + si);
        if (bx == 0xFFFF || bx > W(0x1BE8)) {
            bx = W(0x1BEA);
            stepCx_ = 0;
            return true;
        }
        if (!skipEntry(bx, dx)) {
            stepCx_ = cx;
            return false;
        }
    }
}

// 115Ah: entry BX of the list at DS:1C19h; DX = its address.
bool Mag::skipEntry(uint16_t bx, uint16_t& dx) {
    dx = (uint16_t)(bx * 0xE + W(0x1C19));
    return ds_[(uint16_t)(dx + 0xD)] == 3;
}

// 1175h: Up/Down move the selection: in the main menu by one; in a list to
// the next entry that is not a blank; in an article not at all.
bool Mag::moveSelection(int16_t si) {
    int16_t cx;
    uint16_t bx = 0;
    if (B(0x1C21) == 0xFF) {
        cx = si;
    } else if (B(0x1C20) == 0xFF) {
        const uint16_t saved = W(0x1BEA);
        SW(0x1BEA, (uint16_t)(W(0x1B48) / 0x50 * 0xC + W(0x23C0)));
        uint16_t dx;
        const bool cf = step(si, bx, dx);
        cx = stepCx_;
        SW(0x1BEA, saved);
        if (cf) return true;
    } else if (B(0x1C22) == 0xFF) {
        return false;
    } else {
        cx = si;
    }
    const int16_t ax = (int16_t)(W(0x23C0) + cx);
    if (ax < 0 || (uint16_t)ax >= W(0x23C2)) return true;
    SW(0x1BEA, bx);
    SW(0x23C0, (uint16_t)ax);
    return false;
}

// 11E2h: the text area's background, twice side by side.
void Mag::drawBackground() {
    writeMode(0);
    gc(3, 0);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0xF);
    gc(0, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x3D40 + i, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x92E0 + i, 0);
    copySprite(W(0x953), 8, (uint16_t)(0x3D40 + W(0x1B44)));
    copySprite(W(0x953), 8, (uint16_t)(0x3D68 + W(0x1B44)));
}

// ------------------------------------------------------------- fades ---

// 1266h: the text bank to its colours while the bottom panel slides up.
void Mag::fadeInPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BD8, 0x1E0);
    fadeStart(W(0x8F9), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1BD8) != 0x1AA) {
            SW(0x1BD8, (uint16_t)(W(0x1BD8) - 5));
            if ((int16_t)W(0x1BD8) < 0x1AA) SW(0x1BD8, 0x1AA);
            lineCompare(W(0x1BD8));
            continue;
        }
        if (!fading()) return;
    }
}

// 12D8h: the opposite, the panel sliding down.
void Mag::fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BD8, 0x1AA);
    fadeStart(W(0x8F9), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1BD8) != 0x1E0) {
            SW(0x1BD8, (uint16_t)(W(0x1BD8) + 5));
            if (W(0x1BD8) >= 0x1E0) SW(0x1BD8, 0x1E0);
            lineCompare(W(0x1BD8));
            continue;
        }
        if (!fading()) return;
    }
}

// 1343h
void Mag::fadeTo(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1BD8, 0x1E0);
    fadeStart(W(0x8F9), si, di, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
}

// 1375h
void Mag::fadeOutText(uint16_t si, uint16_t dx) {
    fadeStart(W(0x8F9), si, 0xF0, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
    clearText();
}

// 13A7h: the three banks out one after the other, and the music.
void Mag::fadeOutAll() {
    static const uint16_t banks[3][2] = {{0x210, 0xB0}, {0x240, 0xC0}, {0x270, 0xD0}};
    for (auto& b : banks) {
        fadeStart(W(0x8F9), b[0], 0xF0, 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(-5);
        } while (fading());
    }
    volume(-100);
}

// 145Ch: the three banks in, the music up.
void Mag::fadeInAll() {
    lineCompare(0x1AA);
    SW(0x1BD8, 0x1AA);
    const uint16_t banks[3][3] = {{0x210, 0xB0, W(0x1BDB)}, {0x240, 0xC0, W(0x1BDD)}, {0x270, 0xD0, W(0x1BDF)}};
    for (auto& b : banks) {
        fadeStart(W(0x8F9), b[0], (uint16_t)(0x30 * (uint8_t)b[2]), 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(10);
        } while (fading());
    }
    volume(0xFF);
}

// 153Ah
void Mag::volume(int16_t bx) {
    int16_t v = (int16_t)(W(0x2472) + bx);
    if (v <= 0) v = 0;
    else if (v >= 0xFF) v = 0xFF;
    SW(0x2472, (uint16_t)v);
    if (cs_[0x1D9F] != 0xFF) host_.setMusicVolume(v);
}

// ---------------------------------------------------------- scrollbar ---

// 158Fh: where the two ends of the scrollbar go, eased 5 pixels a frame.
void Mag::scrollbarCalc() {
    const uint32_t bx = CW(0xF57);
    const uint32_t cx = 0x27F;
    if (B(0x1BCF) == 1) {
        SW(0x1BC3, 0);
        SW(0x1BC6, 0);
    } else {
        SW(0x1BC3, (uint16_t)(W(0x1B48) * cx / bx));
    }
    SW(0x1BCA, (uint16_t)((uint16_t)(W(0x1B48) + 0x50) * cx / bx));
    // DS:1BCCh / 1BC5h = FFh: move by 5 towards the target; else jump to it
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
    ease(0x1BC8, 0x1BCA, 0x1BCC);
    ease(0x1BC1, 0x1BC3, 0x1BC5);
}

// 1643h: the bar from the left end's old place BX to its new one AX
// (pixels): ELEV sprite 0 over what it grows into, sprite 16 over what it
// leaves; then the end piece (1..8) at AX and two pieces 15 after it.
void Mag::elevLeft(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    uint16_t di, cx, si;
    if (a <= b) di = a, cx = (uint16_t)(b - a + 2), si = 8;
    else di = b, cx = (uint16_t)(a - b), si = 0x88;
    di += 0x7D0;
    for (; cx; cx--) sprite(W(0x93A), si, di++);
    di = (uint16_t)((ax >> 3) + 0x7D0);
    sprite(W(0x93A), (uint16_t)(((ax & 7) + 1) << 3), di++);
    sprite(W(0x93A), 0x80, di++);
    sprite(W(0x93A), 0x80, di);
}

// 16DAh: the same for the right end (pieces 9..16).
void Mag::elevRight(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    uint16_t di, cx, si;
    if (a < b) {
        di = (uint16_t)(a + 1), cx = (uint16_t)(b - a), si = 0x88;
    } else {
        si = 8;
        const uint16_t d = (uint16_t)((uint16_t)(bx - 8) >> 3);
        di = d < b ? d : b;
        cx = (uint16_t)(a - di + 1);
    }
    di += 0x7D0;
    for (; cx; cx--) sprite(W(0x93A), si, di++);
    sprite(W(0x93A), (uint16_t)(((ax & 7) + 9) << 3), (uint16_t)((ax >> 3) + 0x7D0));
}

// 174Fh: the two caps, masked.
void Mag::elevCaps() {
    uint16_t ax = W(0x1BC1);
    spriteMasked(W(0x93A), (uint16_t)((((ax & 7) << 1) + 0x12) << 3), (uint16_t)((ax >> 3) + 0x7D0));
    ax = (uint16_t)(W(0x1BC8) - 8 + 1);
    spriteMasked(W(0x93A), (uint16_t)((((ax & 7) << 1) + 0x22) << 3), (uint16_t)((ax >> 3) + 0x7D0));
}

void Mag::elevRightMove() {   // 17A2h
    const uint16_t ax = W(0x1BC8), bx = W(0x1BCD);
    SW(0x1BCD, ax);
    elevRight(ax, bx);
}

void Mag::elevLeftMove() {    // 17B7h
    const uint16_t ax = W(0x1BC1), bx = W(0x1BC6);
    SW(0x1BC6, ax);
    elevLeft(ax, bx);
}

// --------------------------------------------------------------- text ---

// 17E0h: one 8-pixel column of the text area at DI, from text column BX:
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
    vw((di + 0x55A0) & 0xFFFF, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x17CE) / 0x50; ax; ax--) {
        vr(si & 0xFFFF);
        si += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
    uint32_t bp = si;
    gc(1, 0xF);
    gc(3, 0);
    writeMode(3);
    for (uint16_t cx = CW(0x17CC); cx;) {
        if (drawChar(bx, di, bp)) {
            bp += 0x500;
            cx--;
            bx = (uint16_t)(bx + CW(0xF57));
        } else {
            bp += 0x280;
        }
        for (uint16_t n = CW(0x17D6); n; n--) {
            vr(bp & 0xFFFF);
            bp += 0x28;
            vw(di, 0);
            di = (di + 0x50) & 0xFFFF;
        }
        bx = (uint16_t)(bx + CW(0xF57));
        if (--cx == 0) break;
    }
    gc(1, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x17D0); ax; ax--) {
        vr(bp & 0xFFFF);
        bp += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
}

// 18E9h: character BX of the text at DI with its colour; the latches come
// from the background at BP. Big characters (colour bit 4) are 32 lines of
// SLCTBIG and take two rows.
bool Mag::drawChar(uint16_t bx, uint32_t& di, uint32_t bp) {
    uint8_t ah = rb(CW(0x17DE), bx);
    const uint8_t c = rb(CW(0x17DC), bx);
    const bool big = ah & 0x10;
    uint16_t font;
    uint32_t si;
    int lines;
    if (big) {
        ah &= 0xF;
        font = CW(0x17DA), si = (uint32_t)(uint16_t)(c << 5), lines = 32;
    } else {
        font = CW(0x17D8), si = (uint32_t)(uint16_t)(c << 4), lines = 16;
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

// 1ADDh: F1-F6: everything out, the other module, everything in.
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

// 1B7Bh: plane by plane (or one pass), write mode 0.
void Mag::sprite(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x1B6F, di);
    const uint16_t h = rw(s, si + 2u);
    CSW(0x1B73, h);
    uint16_t cx = rw(s, si);
    const uint16_t skip = rw(s, si + 4u);
    CSW(0x1B75, skip);
    uint32_t src = rw(s, si + 6u);
    gc(8, 0xFF);
    uint16_t ax;
    if (cx & 0x8000) {
        CSW(0x1B71, cx & 0x7FFF);
        ax = 0x1008;
    } else {
        CSW(0x1B71, cx);
        gc(3, 0);
        gc(1, 0);
        writeMode(0);
        vga_.out(0x3C4, 2);
        ax = 0x1001;
        vga_.out(0x3C5, (uint8_t)ax);
    }
    for (;;) {
        uint32_t d = CW(0x1B6F);
        for (uint16_t row = CW(0x1B73); row; row--) {
            for (uint16_t n = CW(0x1B71); n; n--) vw(d++ & 0xFFFF, rb(s, src++));
            d += skip;
        }
        ax = (uint16_t)(ax << 1);
        if (ax & 0x10) break;
        vga_.out(0x3C5, (uint8_t)ax);
    }
}

// 1C0Bh: masked by the next sprite's data (one mask byte per data byte,
// as the bit mask), plane by plane.
void Mag::spriteMasked(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x1B6F, di);
    CSW(0x1B71, rw(s, si));
    CSW(0x1B73, rw(s, si + 2u));
    CSW(0x1B79, rw(s, si + 0xEu));
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    vga_.out(0x3CE, 8);
    vga_.out(0x3C4, 2);
    for (uint8_t ah = 1; !(ah & 0x10); ah <<= 1) {
        vga_.out(0x3C5, ah);
        uint32_t d = CW(0x1B6F);
        uint32_t bp = CW(0x1B79);
        for (uint8_t ch = (uint8_t)CW(0x1B73); ch; ch--) {
            for (uint8_t cl = (uint8_t)CW(0x1B71); cl; cl--) {
                vga_.out(0x3CF, rb(s, bp++));
                vr(d & 0xFFFF);
                vw(d++ & 0xFFFF, rb(s, src++));
            }
            d += skip;
        }
    }
}

// 1C93h: one pass through the latches with the settings the caller made.
void Mag::spriteLatched(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u);
    const uint16_t w = rw(s, si) & 0x7FFF;
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    CSW(0x1B6F, di);
    CSW(0x1B71, w);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(d & 0xFFFF);
            vw(d++ & 0xFFFF, rb(s, src++));
        }
        d += skip;
    }
}

// 1CCAh: puts a sprite's planes in video memory past the screen (at
// CS:1B77h, from ADh70h on) and makes its data offset point there.
void Mag::uploadSprite(uint16_t s, uint16_t si) {
    const uint16_t n = (uint16_t)(rw(s, si + 2u) * rw(s, si));
    CSW(0x1B71, n);
    uint32_t src = rw(s, si + 6u);
    const uint16_t at = CW(0x1B77);
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
        di = CW(0x1B77);
        for (uint16_t k = 0; k < n; k++) vw(di++ & 0xFFFF, rb(s, src++));
        const bool carry = ax & 0x8000;
        ax = (uint16_t)(ax << 1);
        if (carry) break;
    }
    CSW(0x1B77, (uint16_t)di);
}

// 1D33h: an uploaded sprite copied in video memory through the latches.
void Mag::copySprite(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u), w = rw(s, si);
    CSW(0x1B71, w);
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

// 2047h: palette registers 0-15 straight, colour select for bits 4-5 (so
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

// 2087h: line compare, the bottom panel's top.
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

// 20D8h
void Mag::startAddress(uint16_t cx) {
    vga_.outw(0x3D4, (uint16_t)(0x0C | (cx & 0xFF00)));
    vga_.outw(0x3D4, (uint16_t)(0x0D | (cx & 0xFF) << 8));
}

// 20E8h
void Mag::screenOn(bool on) {
    waitRetrace();
    vga_.out(0x3C4, 1);
    uint8_t al = vga_.in(0x3C5);
    al = on ? (uint8_t)(al & 0xDF) : (uint8_t)(al | 0x20);
    vga_.out(0x3C5, al);
    waitRetrace();
}

// 211Eh: a fade of CX colours from DAC entry DX: the bytes at s:SI move
// towards those at s:DI by CS:2106h per step.
void Mag::fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx) {
    CSW(0x210C, (uint16_t)(cx * 3));
    CSW(0x2108, dx);
    CSW(0x211A, di);
    CSW(0x2118, si);
    CSW(0x211C, s);
    cs_[0x2107] = 0xFF;
}

// 2144h: one step, and the colours out to the DAC.
void Mag::fadeStep() {
    const uint16_t s = CW(0x211C);
    uint16_t si = CW(0x2118), di = CW(0x211A);
    const int8_t bl = (int8_t)cs_[0x2106];
    uint8_t bh = 0;
    for (uint16_t cx = CW(0x210C); cx; cx--, si++, di++) {
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
    cs_[0x2107] = bh;
    vga_.out(0x3C8, (uint8_t)CW(0x2108));
    si = CW(0x2118);
    for (uint16_t n = CW(0x210C) / 3; n; n--)
        for (int k = 0; k < 3; k++) vga_.out(0x3C9, rb(s, si++));
}

// 21DBh: 'F' writes the page as text: the box at DS:07DEh, then each
// 40-column page as rows.
void Mag::saveText() {
    std::vector<uint8_t> out;
    std::memcpy(&ds_[0x868], "\xC4\xC4\xC4\xC4\xC4\xC4", 6);
    out.insert(out.end(), &ds_[0x7DE], &ds_[0x7DE + 0xD7]);
    const uint8_t w = cs_[0xF5F];
    cs_[0x1069] = w;
    CSW(0x106A, (uint16_t)(CW(0x17CC) * w));
    const uint16_t text = W(0x1BB9);
    for (uint16_t si = 0; si < CW(0xF57); si = (uint16_t)(si + w)) {
        uint16_t p = si;
        for (uint16_t row = CW(0x17CC); row; row--) {
            // 106Ch: the row's columns 1 to w-2, then the next row (#12
            // lost the first INC SI and with it the stepping)
            p++;
            for (int k = 0; k < w - 2; k++) out.push_back((uint8_t)(rb(text, p++) + 0x20));
            p = (uint16_t)(p + 1 + CW(0xF57) - w);
            out.push_back(0x0D);
            out.push_back(0x0A);
        }
    }
    std::string name;
    for (uint16_t a = 0x8B5; ds_[a]; a++)
        if (ds_[a] != ' ') name += (char)ds_[a];
    host_.saveFile(name, out);
}

// 283Dh
void Mag::setDac256(uint16_t s, uint16_t si) {
    vga_.out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, rb(s, si + i));
}

// ------------------------------------------------------------ the mouse ---

void Mag::mouseInit() {      // 28A8h: the driver is there
    B(0x238F) = 0xFF;
    mouseSetup();
}

void Mag::mouseSetup() {     // 28DDh
    if (B(0x238F)) {
        uint16_t bx = 0, cx = 0, dx = W(0x23A1);
        int33(7, bx, cx, dx);
        cx = 0, dx = W(0x23A3);
        int33(8, bx, cx, dx);
    }
    SW(0x2394, W(0x2390) >> 1);
    SW(0x2396, W(0x2392) >> 1);
    uint16_t bx = 0, cx = W(0x2394), dx = W(0x2396);
    int33(4, bx, cx, dx);
}

// 2970h: which rectangle of the table at DS:23A7h the cursor is in.
void Mag::hotspot() {
    const uint16_t s = W(0x23A5);
    uint16_t si = W(0x23A7);
    const uint16_t count = rw(s, si);
    si += 2;
    uint8_t al = 0xFF;
    for (uint16_t cx = count; cx; cx--, si += 8) {
        const int16_t x = (int16_t)W(0x2394), y = (int16_t)W(0x2396);
        if (x < (int16_t)rw(s, si) || y < (int16_t)rw(s, si + 2u) || x > (int16_t)rw(s, si + 4u) ||
            y > (int16_t)rw(s, si + 6u))
            continue;
        al = (uint8_t)(count - cx);
        break;
    }
    B(0x239D) = al;
}

// 29C9h: mouse and keys into DS:239Ch-23B9h.
void Mag::input() {
    B(0x239C) = 0;
    B(0x239D) = 0xFF;
    B(0x23B5) = B(0x23B4) = B(0x23B7) = B(0x23B6) = B(0x23B8) = B(0x23B9) = 0;
    if (B(0x238F)) {
        uint16_t bx = 0, cx = 0, dx = 0;
        int33(3, bx, cx, dx);
        B(0x239C) = (uint8_t)bx;
        const uint16_t x = (uint16_t)((uint32_t)W(0x2390) * cx / W(0x23A1));
        const uint16_t y = (uint16_t)((uint32_t)W(0x2392) * dx / W(0x23A3));
        if (x != W(0x2394) || y != W(0x2396)) {
            if (B(0x23B3) != 0xFF) cs_[0x2BCB] = 0;
            B(0x23B3) = 0;
            SW(0x2394, x);
            SW(0x2396, y);
            if (W(0x2394) <= 0x28) B(0x23B5) = 0xFF;
            else if (W(0x2394) >= 0x258) B(0x23B4) = 0xFF;
        }
        hotspot();
    }
    const uint8_t al = cs_[0x2BCA];
    cs_[0x2BCA] = 0;
    bool done = false;
    if (cs_[0x1D9F] != 0xFF && al >= 0x3B) {
        const uint8_t bl = (uint8_t)(al - 0x3B);
        if (bl <= 5) {                                   // F1-F6
            if (bl != B(0x7B)) {
                const uint16_t si = (uint16_t)((B(0x8E5) == 3 ? 2 : 0x48) + bl * 0xE);
                if (B(0x8E5) >= ds_[si + 0xD]) {
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
        case 0x19: B(0x23B9) = 0xFF; break;             // P
        case 0x21: B(0x23B8) = 0xFF; break;             // F
        case 0x50:                                       // Down
            cs_[0x2BCB] = 0xFF;
            B(0x23B6) = 0xFF;
            moveSelection(1);
            break;
        case 0x48:                                       // Up
            cs_[0x2BCB] = 0xFF;
            B(0x23B7) = 0xFF;
            moveSelection(-1);
            break;
        case 0x4B:                                       // Left
            cs_[0x2BCB] = 0xFF;
            B(0x23B5) = 0xFF;
            break;
        case 0x4D:                                       // Right
            cs_[0x2BCB] = 0xFF;
            B(0x23B4) = 0xFF;
            break;
        case 0x39:
        case 0x1C:
        case 0x12:                                       // Space, Enter, E
            cs_[0x2BCB] = 0xFF;
            B(0x239C) |= 1;
            break;
        case 0x01:                                       // Esc
            cs_[0x2BCB] = 0xFF;
            B(0x239C) |= 2;
            break;
        }
    }
    cursor();
}

// 2C08h: the 3x16 bytes under the cursor to A000:FFCFh.
void Mag::saveUnderCursor(uint16_t di) {
    if (B(0x238F) != 0xFF) return;
    uint32_t si = di, d = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        si += 0x4D;
    }
}

// 2C3Fh
void Mag::restoreUnderCursor() {
    if (B(0x238F) != 0xFF) return;
    if (B(0x23AB) != 0xFF) {
        B(0x23AB) = 0xFF;
        return;
    }
    uint32_t d = W(0x1BB3), si = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        d += 0x4D;
    }
}

// 2C8Eh: the main menu's highlighted entry follows the mouse or the keys.
void Mag::mainHighlight() {
    if (B(0x238F) == 0xFF && cs_[0x2BCB] != 0xFF) {
        if (B(0x239D) == 0xFF) return;
        SW(0x23C0, B(0x239D));
    }
    if (B(0x23BB) != 0xFF) {
        if (W(0x23C0) == W(0x23BC)) return;
        toggleItem(W(0x23BC));
    }
    B(0x23BB) = 0;
    SW(0x23BC, W(0x23C0));
    toggleItem(W(0x23C0));
}

// 2CE7h: the same for the rows of a menu page.
void Mag::menuHighlight() {
    if (B(0x1C20) != 0xFF) return;
    if (B(0x238F) == 0xFF && cs_[0x2BCB] != 0xFF) {
        uint16_t ax = W(0x2396);
        if (ax <= 0xD) ax = 0;
        else if (ax >= 0xFA) ax = 0xB;
        else ax = (uint16_t)(uint8_t)((ax - 0xD) / 0x14);
        const uint16_t di = ax;
        const uint16_t bx = (uint16_t)(di + W(0x1B48) / 0x50 * 0xC);
        uint16_t dx;
        if (skipEntry(bx, dx)) return;
        SW(0x23C0, di);
    }
    if (W(0x23C0) == W(0x23BE)) return;
    unhighlightRow(W(0x23BE));
    SW(0x23BE, W(0x23C0));
    B(0x23BB) = 0;
    highlightRow(W(0x23C0));
}

// 2D80h: the mouse cursor, after the highlight has followed it.
void Mag::cursor() {
    const uint16_t y = (uint16_t)(W(0x2396) + 1);
    SW(0x23AE, y);
    SW(0x23AC, W(0x2394));
    const uint16_t di = (uint16_t)(0x50 * y + (W(0x2394) >> 3) + W(0x1B48) + W(0x23A9));
    restoreUnderCursor();
    SW(0x1BB3, di);
    if (B(0x23BA) == 0) mainHighlight();
    else if (B(0x23BA) == 1) menuHighlight();
    if (B(0x238F) != 0xFF) return;
    saveUnderCursor(W(0x1BB3));
    if (cs_[0x2BCB] == 0xFF) return;
    spriteMasked(W(0x92F), (uint16_t)(((W(0x2394) & 7) << 4) + 8), W(0x1BB3));
}

// 2E1Ah: row DI of a menu page in reverse (black on white).
void Mag::highlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint16_t bx = (uint16_t)(CW(0xF57) * di + W(0x1B48));
    uint32_t d = (uint16_t)(pos + 0x3CF0 + W(0x1B48));
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
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x17DC), bx) << 4);
        uint32_t o = d;
        for (int k = 0; k < 16; k++) {
            vw(o & 0xFFFF, (uint8_t)(rb(CW(0x17D8), si++) ^ 0xFF));
            o += 0x50;
        }
        bx++;
        d++;
    }
}

// 2F20h: the row back to normal, the background through the latches.
void Mag::unhighlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint32_t bp = (uint16_t)((pos >> 1) + W(0x7C));
    uint32_t si = (bp - 0x28) & 0xFFFF;
    uint16_t bx = (uint16_t)(CW(0xF57) * di + W(0x1B48));
    uint32_t d = (uint16_t)(pos + 0x3CF0 + W(0x1B48));
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

// 2FE6h: main menu entry DI (TITLES sprite DI) XORed in planes 0 and 1.
void Mag::toggleItem(uint16_t di) {
    const uint16_t si2 = (uint16_t)(di << 1);
    const uint16_t at = (uint16_t)(CW(0x2FD2 + si2) + CW(0x2FDC + si2));
    vga_.outw(0x3C4, 0x0602);
    vga_.outw(0x3CE, 0xFF08);
    writeMode(3);
    vga_.outw(0x3CE, 0x0F00);
    vga_.outw(0x3CE, 0x0F01);
    vga_.outw(0x3CE, 0x1803);
    spriteLatched(W(0x96E), (uint16_t)(si2 * 4 + 8), at);
}

// 3043h: the driver's position from the program's.
void Mag::mouseSetPos() {
    if (B(0x238F) != 0xFF) return;
    B(0x23B3) = 0xFF;
    uint16_t cx = (uint16_t)((uint32_t)W(0x23A1) * W(0x2394) / W(0x2390));
    uint16_t dx = (uint16_t)((uint32_t)W(0x23A3) * W(0x2396) / W(0x2392));
    uint16_t bx = 0;
    int33(4, bx, cx, dx);
}

}  // namespace imp
