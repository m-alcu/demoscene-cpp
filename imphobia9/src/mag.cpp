#include "mag.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <stdexcept>

namespace imp {

namespace {
constexpr uint32_t kImageDS = 0xCB30;   // DS (0CB3h) in the load image
}

Mag::Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat)
    : vga_(vga), host_(host), dat_(std::move(dat)) {
    cs_.assign(0x10000, 0);
    ds_.assign(0x10000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0x10000), cs_.begin());
    if (image.size() > kImageDS)
        std::copy(image.begin() + kImageDS, image.begin() + std::min<size_t>(image.size(), kImageDS + 0x10000),
                  ds_.begin());
    // NFO9.DAT's directory, in the data segment (DS:1DB0h points at it):
    // 13-byte names, a 32-bit offset and a 16-bit size. LOGO.RAW, the last,
    // is larger than 64 KB: it runs to the end of the file.
    for (uint32_t p = W(0x1A87); ds_[p]; p += 19) {
        std::string n;
        for (int i = 0; i < 13 && ds_[p + i]; i++) n += (char)ds_[p + i];
        uint32_t off = 0;
        std::memcpy(&off, &ds_[p + 13], 4);
        uint32_t size = (uint32_t)(ds_[p + 17] | ds_[p + 18] << 8);
        if (n == "LOGO.RAW" && off < dat_.size()) size = (uint32_t)dat_.size() - off;
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
    while (cs_[0x1AF0] != 0xFF) host_.waitFrame();
    cs_[0x1AF0] = 0;
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
    // State A of the handler (1B20h) comes at the start of line 142 (the PIT
    // count was measured as 8Fh display-enable edges from the end of the
    // retrace) and writes the CRTC offset at the start of the next three
    // lines, then 28h and the middle's colour bank; state B (1C73h) comes at
    // line 419 (1A4h edges) with the bottom's bank. State C, before the
    // retrace, sets the top's bank: that is in the registers at frame start.
    // (With a compatibility mode, state A waited by counted reads of 3DAh
    // instead of for the lines; the port has none.)
    std::vector<Vga::LineWrite> w;
    for (int i = 0; i < 3; i++) w.push_back({143 + i, Vga::LineWrite::Crtc, 0x13, cs_[0x1AFB + i]});
    w.push_back({146, Vga::LineWrite::Crtc, 0x13, 0x28});
    w.push_back({146, Vga::LineWrite::Ac, 0x14, cs_[0x1AFF]});
    w.push_back({420, Vga::LineWrite::Ac, 0x14, cs_[0x1B00]});
    w.push_back({420, Vga::LineWrite::Crtc, 0x13, 0x28});
    return w;
}

void Mag::endOfFrame() {
    if (raster_) {
        // state C (1CB0h): top colour bank, offset back to 28h, frame flag
        vga_.ac[0x14] = cs_[0x1AFE];
        vga_.crtc[0x13] = 0x28;
        cs_[0x1AF0] = 0xFF;
        // the keyboard handler (2981h) keeps the last scancode
        if (!keys_.empty()) {
            cs_[0x2950] = keys_.front();
            keys_.erase(keys_.begin());
        }
    }
}

void Mag::mouse(int x, int y, int buttons, bool moved) {
    mouse_.buttons = buttons;
    if (!moved) return;
    // The program scales the driver's position (DS:1A4Ah * x / DS:1A5Bh);
    // set the driver so that the cursor lands under the pointer. The cursor
    // is drawn at row DS:1A50h + 1 of the text area, which shows at line
    // 151 + DS:1A50h.
    const int sx = W(0x1A4A) ? x * W(0x1A5B) / W(0x1A4A) : x;
    const int py = y - 151;
    const int sy = W(0x1A4C) ? py * W(0x1A5D) / W(0x1A4C) : py;
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
    // What 0000h-0023h leaves: the settings of the configuration (a GUS, no
    // compatibility mode, no printer) and the sound system.
    B(0x85B) = 3;
    B(0x85C) = 0;
    B(0x85D) = 0xFF;
    cs_[0x1AF8] = 0;        // compatibility mode off: the timer waits for the lines
    cs_[0x1B06] = 0;

    clearVram();
    vga_.setMode(0x12);
    setupAttributes();
    setDac256(kDS, 0x15E5);

    // 0038h: the Underground Label logo (UNDLABEL.SPR, the first 16 colours
    // of ULABEL.PAL), faded in and out while the start address scrolls.
    uint32_t size;
    {
        const uint8_t* pal = resource(str(0x8F4), size);
        for (uint32_t i = 0; i < 0x30; i++) ds_[0x15B5 + i] = i < size ? pal[i] : 0;
    }
    SW(0x8F2, loadResource(str(0x8E5)));
    sprite(W(0x8F2), 8, 0x385E);
    labelFadeIn();
    labelFadeOut();
    B(0x15B2) = 0;
    startAddress(0);

    // 009Ch: the cover (Zebig's Picasso): LOGO.RAW is four planes of 9600h
    // bytes and 16 colours, faded in, held 140 retraces, faded out.
    const uint8_t* logo = resource(str(0x8E), size);
    SW(0x901, alloc(0x960));
    uint32_t pos = 0;
    uint8_t al = 0x11;
    for (;;) {
        sq(2, al);
        auto& buf = seg(W(0x901));
        for (uint32_t i = 0; i < 0x9600; i++) buf[i] = pos + i < size ? logo[pos + i] : 0;
        pos += 0x9600;
        logoPlane();
        const bool carry = al & 0x80;
        al = (uint8_t)(al << 1);
        if (carry) break;
    }
    for (uint32_t i = 0; i < 0x30; i++) ds_[0x15B5 + i] = pos + i < size ? logo[pos + i] : 0;
    labelFadeIn();
    volume(0xFF);

    SW(0x1544, alloc(0x55F));
    SW(0x1542, alloc(0x55F));
    SW(0x1548, alloc(0x3E8));
    SW(0x154A, alloc(0x50));
    SW(0x86E, loadResource(str(0x863)));   // SELECT.PAL
    SW(0x87C, loadResource(str(0x870)));   // ARTFONT.SPR
    SW(0x88A, loadResource(str(0x87E)));   // SLCTBIG.SPR
    SW(0x898, loadResource(str(0x88C)));   // READFNT.SPR
    SW(0x8A4, loadResource(str(0x89A)));   // MOUSE.SPR
    SW(0x8AF, loadResource(str(0x8A6)));   // ELEV.SPR
    SW(0x8E3, loadResource(str(0x8D8)));   // TITLES.SPR
    SW(0x8D6, loadResource(str(0x8CA)));   // DECORS2.SPR
    SW(0x8BD, loadResource(str(0x8B1)));   // DECORS1.SPR
    waitRetraces(0x8C);
    labelFadeOut();

    mouseInit();
    if (B(0x1A49) == 0xFF) {
        SW(0x1A4A, 0x275);
        SW(0x1A4C, 0xFD);
        mouseSetup();
    }
    lineCompare(0x1E0);
    startAddress(0x1040);
    // 01ECh: SELECT.PAL's colours 160-223 black
    std::fill(seg(W(0x86E)).begin() + 0x1E0, seg(W(0x86E)).begin() + 0x2A0, 0);
    sprite(W(0x8BD), 8, 0x1040);
    uploadSprite(W(0x8BD), 0x10);
    SW(0x8C8, loadResource(str(0x8BF)));   // BACK.SPR, uploaded after DECORS1
    SW(0x98, CW(0x18E1));
    uploadSprite(W(0x8C8), 8);
    screenOn(true);
    host_.playModule(str(0x2));          // GUS: the table at DS:0002h, F1
    // 1D1Eh/1D67h measure the frame for the PIT counts; the port's frames
    // are split at the lines the counts stand for (rasterWrites()).
    CSW(0x1AF9, 0x1B20);
    cs_[0x1AFE] = 0x0B;
    cs_[0x1AFF] = 0x0C;
    cs_[0x1B00] = 0x0D;
    installTimer();
    SW(0x1A4E, 0x13A);
    SW(0x1A50, 0x7E);
    mouseSetPos();
}

// 035Ah: the main menu and what its five entries lead to.
void Mag::mainMenu() {
    for (;;) {
        setOffsets(0);
        SW(0x14D1, 0);
        SW(0x14CD, 0);
        drawBackground();
        SW(0x1566, 0);
        SW(0x1568, 1);
        SW(0x156A, 0);
        B(0x15AC) = 0xFF;
        B(0x15AB) = 0;
        B(0x15AD) = 0;
        B(0x15B1) = 0;
        sprite(W(0x8D6), 0x10, 0);
        sprite(W(0x8D6), 8, 0x40CB);
        if (B(0x15A8) == 0xFF) {
            B(0x15A8) = 0;
            fadeInAll();
        } else {
            fadeInPanel(0x240, 0xC0, 0x30);
        }
        SW(0x1A61, 0x1512);
        SW(0x1A5F, kDS);
        B(0x1A65) = 0;
        SW(0x1A4A, 0x275);
        SW(0x1A4C, 0xFB);
        SW(0x1A63, 0x3DE0);
        B(0x1A74) = 0;
        B(0x1A75) = 0xFF;
        SW(0x1A7C, 5);
        SW(0x1A7A, 0);
        B(0x14D9) = 0xFF;
        SW(0x14DA, 0);
        SW(0x14D5, 0);
        for (;;) {
            waitFlag();
            input();
            if (B(0x1A56) & 1) break;
            if (B(0x1A56) & 2) return;
        }
        const uint8_t al = (uint8_t)W(0x1A7A);
        uint16_t bx;
        switch (al) {
        case 2:                                     // ARTICLES
            SW(0x14DC, 0x157D);
            SW(0x156C, 0x903);
            SW(0x15A4, 0x91F);
            SW(0x1573, 0x9B);
            bx = W(0x1577);
            section(bx);
            SW(0x1577, bx);
            break;
        case 1:                                     // CHARTS
            SW(0x156C, 0x903);
            SW(0x15A4, 0x1387);
            SW(0x1573, 0xB);
            SW(0x14DC, 0x1597);
            bx = W(0x1579);
            section(bx);
            SW(0x1579, bx);
            break;
        case 3:                                     // INTERVIEWS
            SW(0x156C, 0x903);
            SW(0x15A4, 0x1243);
            SW(0x1573, 0xB);
            SW(0x14DC, 0x158A);
            bx = W(0x157B);
            section(bx);
            SW(0x157B, bx);
            break;
        default: {                                  // 0521h: EDITORIAL (0), CREDITS
            const uint16_t entry = al == 0 ? 0 : 1;
            B(0x15AF) = 0xFF;
            B(0x15AA) = 0xFF;
            B(0x15AB) = 0;
            B(0x15AD) = 0xFF;
            B(0x15AC) = 0;
            B(0x15AE) = 0xFF;
            B(0x155A) = 1;
            fadeOutPanel(0x240, 0xC0, 0xF0);
            SW(0x14DC, (uint16_t)(entry * 0xE + 0x903));
            showPage();
            break;
        }
        }
    }
}

// 06C2h: a section's menu page, and the articles chosen from it. BX is the
// entry to start on and comes back as the last one.
bool Mag::section(uint16_t& bx) {
    SW(0x1575, bx);
    SW(0x14DE, W(0x14DC));
    B(0x15B0) = 0;
    B(0x15AF) = 0xFF;
    fadeOutPanel(0x240, 0xC0, 0xF0);
    uint16_t dx = 0;
    for (;;) {
        // 06E4h
        SW(0x14DC, W(0x14DE));
        B(0x15AA) = 0xFF;
        B(0x15AB) = 0xFF;
        B(0x15AD) = 0;
        B(0x15AC) = 0;
        B(0x15AE) = 0;
        B(0x155A) = 0;
        if (!showPage()) {
            fadeOutPanel(0x240, 0xC0, 0xF0);
            bx = W(0x1575);
            return false;
        }
        dx = retDx_;
        // 0727h: the article; Up/Down in it go to the neighbours
        for (;;) {
            SW(0x14DC, dx);
            fadeOutText(0x240, 0xC0);
            B(0x15AA) = 0;
            B(0x15AF) = 0;
            B(0x15AB) = 0;
            B(0x15AD) = 0xFF;
            B(0x15AC) = 0;
            B(0x15AE) = 0;
            B(0x15B0) = 0xFF;
            B(0x155A) = 1;
            if (!showPage()) break;
            SW(0x1575, retBx_);
            dx = retDx_;
        }
    }
}

// 0572h: the end: the mag fades out, the timer goes, text mode.
void Mag::ending() {
    fadeOutAll();
    removeTimer();
    host_.stopMusic();
    screenOn(false);
    clearVram();
    vga_.setMode(3);
    screenOn(true);
}

// ------------------------------------------------------------ the cover ---

// 0675h: the first 16 colours from black to DS:15B5h, 32 steps. With
// DS:15B2h = FFh (the label) the start address comes down from line 32 to
// line 1.
void Mag::labelFadeIn() {
    screenOn(true);
    for (int cx = 0x1F; cx >= 0; cx--) {
        vga_.out(0x3C8, 0);
        waitRetrace();
        const uint8_t bl = (uint8_t)((0x1F - cx) << 3);
        for (int i = 0; i < 0x30; i++) vga_.out(0x3C9, (uint8_t)((ds_[0x15B5 + i] * bl) >> 8));
        if (B(0x15B2) == 0xFF) startAddress((uint16_t)(uint8_t)(0x20 - cx) * 0x50);
    }
}

// 0621h: the same back to black (the label goes on up to line 64), then
// the screen off and cleared.
void Mag::labelFadeOut() {
    for (int cx = 0x1F; cx >= 0; cx--) {
        vga_.out(0x3C8, 0);
        waitRetrace();
        const uint8_t bl = (uint8_t)(cx << 3);
        for (int i = 0; i < 0x30; i++) vga_.out(0x3C9, (uint8_t)((ds_[0x15B5 + i] * bl) >> 8));
        if (B(0x15B2) == 0xFF) startAddress((uint16_t)(uint8_t)(0x40 - cx) * 0x50);
    }
    waitRetrace();
    screenOn(false);
    clearVram();
}

// 07ECh: one plane of the cover, from the buffer.
void Mag::logoPlane() {
    auto& buf = seg(W(0x901));
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
    for (uint32_t i = 0; i < 0x2CD8 * 2; i++) vw((0x3DE0 + i) & 0xFFFF, 0);
}

// 080Dh: the three CRTC offsets the timer handler writes on lines 143-145:
// together they advance the address by AX words, which is how the text
// area scrolls sideways.
void Mag::setOffsets(uint16_t ax) {
    uint8_t* o = &cs_[0x1AFB];
    if (ax <= 0xF0) {
        o[0] = (uint8_t)ax, o[1] = 0, o[2] = 0;
    } else if (ax <= 0x1E0) {
        o[0] = 0xF0, o[1] = (uint8_t)(ax - 0xF0), o[2] = 0;
    } else {
        o[0] = 0xF0, o[1] = 0xF0, o[2] = (uint8_t)(ax - 0x1E0);
    }
}

// ------------------------------------------------------------- pages ---

// 085Ch: an article: 15 rows, READFNT, no row spacing.
void Mag::setupArticle() {
    CSW(0x1540, 0xF);
    CSW(0x1542, 0x460);
    CSW(0x1544, 0xF);
    CSW(0x1548, 0);
    CSW(0x154A, 0);
    CSW(0x154C, W(0x898));
    CSW(0x154E, W(0x88A));
    SW(0x1A61, 0x1500);
    SW(0x1A5F, kDS);
    SW(0x1A63, 0x3DE0);
    B(0x1A75) = 0xFF;
    B(0x1A74) = 9;
    SW(0x1A7C, 1);
    SW(0x1A7A, 0);
    SW(0x14D5, 0);
    SW(0x14D3, 0);
    SW(0x14D1, 0);
    SW(0x14CF, 0);
    B(0x15B1) = 0xFF;
}

// 08DCh: a menu page: 12 rows of ARTFONT, 4 lines between them, opened at
// the page holding entry DS:1575h.
void Mag::setupMenu() {
    CSW(0x1540, 0xC);
    CSW(0x1542, 0x460);
    CSW(0x1544, 0xF);
    CSW(0x1548, 0x140);
    CSW(0x154A, 4);
    CSW(0x154C, W(0x87C));
    CSW(0x154E, W(0x88A));
    SW(0x1A61, 0x14EE);
    SW(0x1A5F, kDS);
    SW(0x1A63, 0x3DE0);
    B(0x1A75) = 0xFF;
    B(0x1A74) = 1;
    SW(0x1A7C, 0xC);
    const uint16_t ax = W(0x1575);
    const uint8_t q = (uint8_t)(ax / 0xC), r = (uint8_t)(ax % 0xC);
    SW(0x1A7A, r);
    SW(0x14CF, q);
    const uint16_t a = (uint16_t)(q * 0x50);
    SW(0x14D5, a);
    SW(0x14D3, a);
    SW(0x14D1, a);
    SW(0x153C, 0);
    B(0x15B1) = 0;
}

// 0966h: the 80 visible columns.
void Mag::drawPage() {
    cs_[0x1AFF] = 0xC;
    setOffsets(W(0x14D5) >> 1);
    waitFlags(2);
    uint32_t di = 0x3DE0 + W(0x14D5);
    uint16_t bx = W(0x14D5);
    for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
}

// 09B3h
void Mag::clearPage() {
    waitFlag();
    cs_[0x1AFF] = 0xD;
    cs_[0x1AFB] = cs_[0x1AFC] = cs_[0x1AFD] = 0x28;
    clearText();
}

// 09E2h: shows the page named at DS:14DCh and runs it until Esc (false), a
// menu entry is chosen or Up/Down leaves an article for its neighbour
// (true; retBx_ = the entry, retDx_ = its address).
bool Mag::showPage() {
    SW(0x1566, 0);
    SW(0x1568, 4);
    SW(0x156A, 0);
    SW(0x14DA, 0);
    CSW(0x1552, W(0x1542));
    CSW(0x1550, W(0x1544));
    if (B(0x15AB)) setupMenu();
    else if (B(0x15AD)) setupArticle();
    if (B(0x15B0) == 0xFF) fadeOutText(0x240, 0xC0);
    clearPage();
    // 1F8Ah: "NAME    .TXT" for 'F'
    {
        uint16_t si = W(0x14DC), di = 0x838;
        while (ds_[si] != '.') ds_[di++] = ds_[si++];
        std::memcpy(&ds_[di], ".TXT", 4);
        ds_[di + 4] = 0;
    }
    loadText();
    SW(0x14EC, (uint16_t)(CW(0xD3D) - 0x50));
    drawPage();
    B(0x1557) = 0xFF;
    B(0x1550) = 0xFF;
    if (B(0x15AF) == 0xFF) {
        B(0x1557) = 0;
        B(0x1550) = 0;
        copySprite(W(0x8BD), 0x10, 0);
        SW(0x1551, 0);
        SW(0x1558, 0);
        scrollbarCalc();
        elevRightMove();
        elevLeftMove();
        elevCaps();
        fadeInPanel(0x240, 0xC0, 0xC0);
    } else {
        fadeTo(0x240, 0xC0, 0xC0);
    }
    // The fades above jump to 0B1Ch, the middle of the end-of-scroll block:
    // a new page starts as if a scroll had just ended.
    bool finished = true;
    for (;;) {
        if (!finished) {                              // 0AE7h
            waitFlag();
            scrollbarCalc();
            elevRightMove();
            elevLeftMove();
            elevCaps();
            if (B(0x14D9) != 0xFF) {
                if (W(0x14D5) == W(0x14D3)) {
                    finished = true;
                } else {                              // 0B76h: two more columns
                    const uint16_t step = (uint16_t)(W(0x14D7) << 1);
                    SW(0x14D5, (uint16_t)(W(0x14D5) + step));
                    uint16_t bx = W(0x14D5);
                    uint32_t di = 0x3DE0 + bx;
                    setOffsets(bx >> 1);
                    if (W(0x14D7) != 0xFFFF) bx += 0x4E, di += 0x4E;
                    drawColumn(di, bx);
                    drawColumn(di + 1, (uint16_t)(bx + 1));
                    continue;
                }
            }
        }
        if (finished) {                               // 0B1Ch
            finished = false;
            clampMouse();
            uint16_t dx;
            const uint16_t bx = (uint16_t)(W(0x14D5) / 0x50 * 0xC + W(0x1A7A));
            if (skipEntry(bx, dx)) {
                SW(0x1A7A, 0);
                moveSelection(1);
            }
            if (B(0x15AB) == 0xFF) {
                SW(0x1A78, W(0x1A7A));
                highlightRow(W(0x1A7A));
            }
            B(0x14D9) = 0xFF;
            B(0x1A65) = 0;
        }
        // 0BACh
        input();
        if (B(0x15AB) == 0xFF && (B(0x1A56) & 1)) {   // 0CF0h: an entry
            const uint16_t bx = (uint16_t)(W(0x14D5) / 0x50 * 0xC + W(0x1A7A));
            uint16_t dx;
            if (bx > W(0x1573) || skipEntry(bx, dx)) continue;
            SW(0x1575, bx);
            retBx_ = bx, retDx_ = dx;
            return true;
        }
        if (B(0x1A56) & 2) {                          // 0D9Ch: Esc
            if (B(0x15AB)) SW(0x1575, (uint16_t)(W(0x14D5) / 0x50 * 0xC + W(0x1A7A)));
            if (B(0x15AE) == 0xFF) {
                fadeOutPanel(0x240, 0xC0, 0xF0);
                clearText();
            }
            return false;
        }
        if (B(0x15AA) != 0xFF) {
            int16_t si = 0;
            if (B(0x1A71) == 0xFF) si = -1;
            else if (B(0x1A70) == 0xFF) si = 1;
            if (si) {                                 // 0CB9h
                uint16_t bx, dx;
                if (!step(si, bx, dx)) {
                    retBx_ = bx, retDx_ = dx;
                    return true;
                }
                continue;
            }
        }
        if (B(0x1A6E) == 0xFF) {                      // 0D19h: right
            if (W(0x14D5) < W(0x14EC)) {
                hideCursorAndRow();
                B(0x14D9) = 0;
                SW(0x14D7, 1);
                // by the width of this page (the header's bytes from CS:0D45h)
                const uint16_t bx = W(0x14CF);
                SW(0x14CF, (uint16_t)(bx + 1));
                SW(0x14D3, (uint16_t)(W(0x14D3) + cs_[(uint16_t)(bx + 0xD45)]));
            }
        } else if (B(0x1A6F) == 0xFF) {               // 0D46h: left
            if ((int16_t)W(0x14D5) > 0) {
                hideCursorAndRow();
                B(0x14D9) = 0;
                SW(0x14D7, 0xFFFF);
                const uint16_t bx = W(0x14CF);
                SW(0x14CF, (uint16_t)(bx - 1));
                SW(0x14D3, (uint16_t)(W(0x14D3) - cs_[(uint16_t)(bx + 0xD45)]));
            }
        } else if (B(0x15B1) == 0xFF) {
            if (B(0x1A72) == 0xFF) {                  // 0D7Bh: 'F', save
                fadeOutText(0x240, 0xC0);
                clearPage();
                saveText();
                drawPage();
                fadeTo(0x240, 0xC0, 0xC0);
            }
            // 'P' printed the article (0C16h); there is no printer here.
        }
    }
}

// 0D19h
void Mag::hideCursorAndRow() {
    restoreUnderCursor();
    if (B(0x15AB) == 0xFF) unhighlightRow(W(0x1A78));
}

// 0D6Bh: loads the page: the header into CS:0D3Dh, the text, the colours.
void Mag::loadText() {
    uint32_t size;
    const uint8_t* p = resource(str(W(0x14DC)), size);
    uint32_t at = 0;
    auto read = [&](uint16_t s, uint32_t off, uint32_t n) {
        for (uint32_t i = 0; i < n; i++, at++) wb(s, off + i, at < size ? p[at] : 0);
    };
    read(kCS, 0xD3D, 0x2C);
    const uint16_t cx = (uint16_t)(CW(0xD3D) * CW(0x1540));
    CSW(0xD69, cx);
    read(W(0x1544), 0, cx);
    auto& attr = seg(W(0x1542));
    std::fill(attr.begin(), attr.begin() + std::min<size_t>(cx, attr.size()), 0x0F);
    const uint16_t runs = CW(0xD43);
    if (runs) {
        read(W(0x1548), 0, (uint32_t)(uint16_t)(runs << 2));
        auto& r = seg(W(0x1548));
        uint32_t si = 0;
        for (int i = 0; i < runs; i++, si += 4) {
            const uint16_t di = (uint16_t)(r[si] | r[si + 1] << 8);
            const uint8_t n = r[si + 2], c = r[si + 3];
            for (int k = 0; k < n; k++) wb(W(0x1542), (uint16_t)(di + k), c);
        }
    }
}

// 0EB9h: keeps the mouse off the edges that scroll.
void Mag::clampMouse() {
    if (B(0x1A49) != 0xFF) return;
    uint16_t cx = W(0x1A4E);
    if (cx <= 0x28) cx = 0x2D;
    else if (cx >= 0x258) cx = 0x253;
    SW(0x1A4E, cx);
    mouseSetPos();
}

// 0EE0h: the next entry of the list in direction SI that is not a blank
// (type 3). Returns true (CF) when there is none.
bool Mag::step(int16_t si, uint16_t& bx, uint16_t& dx) {
    B(0x1A71) = 0;
    B(0x1A70) = 0;
    int16_t cx = 0;
    bx = W(0x1575);
    for (;;) {
        cx = (int16_t)(cx + si);
        bx = (uint16_t)(bx + si);
        if (bx == 0xFFFF || bx > W(0x1573)) {
            bx = W(0x1575);
            stepCx_ = 0;
            return true;
        }
        if (!skipEntry(bx, dx)) {
            stepCx_ = cx;
            return false;
        }
    }
}

// 0F10h: entry BX of the list at DS:15A4h; DX = its address.
bool Mag::skipEntry(uint16_t bx, uint16_t& dx) {
    dx = (uint16_t)(bx * 0xE + W(0x15A4));
    return ds_[(uint16_t)(dx + 0xD)] == 3;
}

// 0F29h: Up/Down move the selection: in the main menu by one; in a list to
// the next entry that is not a blank; in an article not at all.
bool Mag::moveSelection(int16_t si) {
    int16_t cx;
    uint16_t bx = 0;
    if (B(0x15AC) == 0xFF) {
        cx = si;
    } else if (B(0x15AB) == 0xFF) {
        const uint16_t saved = W(0x1575);
        SW(0x1575, (uint16_t)(W(0x14D5) / 0x50 * 0xC + W(0x1A7A)));
        uint16_t dx;
        const bool cf = step(si, bx, dx);
        cx = stepCx_;
        SW(0x1575, saved);
        if (cf) return true;
    } else if (B(0x15AD) == 0xFF) {
        return false;
    } else {
        cx = si;
    }
    const int16_t ax = (int16_t)(W(0x1A7A) + cx);
    if (ax < 0 || (uint16_t)ax >= W(0x1A7C)) return true;
    SW(0x1575, bx);
    SW(0x1A7A, (uint16_t)ax);
    return false;
}

// 0F88h: the text area's background, twice side by side.
void Mag::drawBackground() {
    writeMode(0);
    gc(3, 0);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0xF);
    gc(0, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x3DE0 + i, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x91F0 + i, 0);
    copySprite(W(0x8C8), 8, (uint16_t)(0x3DE0 + W(0x14D1)));
    copySprite(W(0x8C8), 8, (uint16_t)(0x3E08 + W(0x14D1)));
}

// ------------------------------------------------------------- fades ---

// 100Ch: the text bank to its colours while the bottom panel slides up.
void Mag::fadeInPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1563, 0x1E0);
    fadeStart(W(0x86E), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1563) != 0x1AC) {
            SW(0x1563, (uint16_t)(W(0x1563) - 5));
            if ((int16_t)W(0x1563) < 0x1AC) SW(0x1563, 0x1AC);
            lineCompare(W(0x1563));
            continue;
        }
        if (!fading()) return;
    }
}

// 1078h: the opposite, the panel sliding down.
void Mag::fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1563, 0x1AC);
    fadeStart(W(0x86E), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x1563) != 0x1E0) {
            SW(0x1563, (uint16_t)(W(0x1563) + 5));
            if (W(0x1563) >= 0x1E0) SW(0x1563, 0x1E0);
            lineCompare(W(0x1563));
            continue;
        }
        if (!fading()) return;
    }
}

// 10DDh
void Mag::fadeTo(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x1563, 0x1E0);
    fadeStart(W(0x86E), si, di, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
}

// 110Fh
void Mag::fadeOutText(uint16_t si, uint16_t dx) {
    fadeStart(W(0x86E), si, 0xF0, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
    clearText();
}

// 1141h: the three banks out one after the other, and the music.
void Mag::fadeOutAll() {
    static const uint16_t banks[3][2] = {{0x210, 0xB0}, {0x240, 0xC0}, {0x270, 0xD0}};
    for (auto& b : banks) {
        fadeStart(W(0x86E), b[0], 0xF0, 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(-5);
        } while (fading());
    }
    volume(-100);
}

// 11F6h: the three banks in, the music up.
void Mag::fadeInAll() {
    lineCompare(0x1AC);
    SW(0x1563, 0x1AC);
    const uint16_t banks[3][3] = {{0x210, 0xB0, W(0x1566)}, {0x240, 0xC0, W(0x1568)}, {0x270, 0xD0, W(0x156A)}};
    for (auto& b : banks) {
        fadeStart(W(0x86E), b[0], (uint16_t)(0x30 * (uint8_t)b[2]), 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(10);
        } while (fading());
    }
    volume(0xFF);
}

// 12D4h
void Mag::volume(int16_t bx) {
    int16_t v = (int16_t)(W(0x2804) + bx);
    if (v <= 0) v = 0;
    else if (v >= 0xFF) v = 0xFF;
    SW(0x2804, (uint16_t)v);
    if (cs_[0x1B06] != 0xFF) host_.setMusicVolume(v);
}

// ---------------------------------------------------------- scrollbar ---

// 1321h: where the two ends of the scrollbar go, eased 5 pixels a frame.
void Mag::scrollbarCalc() {
    const uint32_t bx = CW(0xD3D);
    const uint32_t cx = 0x27F;
    if (B(0x155A) == 1) {
        SW(0x154E, 0);
        SW(0x1551, 0);
    } else {
        SW(0x154E, (uint16_t)(W(0x14D5) * cx / bx));
    }
    SW(0x1555, (uint16_t)((uint16_t)(W(0x14D5) + 0x50) * cx / bx));
    // DS:1557h / 1550h = FFh: move by 5 towards the target; else jump to it
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
    ease(0x1553, 0x1555, 0x1557);
    ease(0x154C, 0x154E, 0x1550);
}

// 13C3h: the bar from the left end's old place BX to its new one AX
// (pixels): ELEV sprite 0 over what it grows into, sprite 16 over what it
// leaves; then the end piece (1..8) at AX and two pieces 15 after it.
void Mag::elevLeft(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    uint16_t di, cx, si;
    if (a <= b) di = a, cx = (uint16_t)(b - a + 1 + ((bx & 7) >= 1)), si = 8;
    else di = b, cx = (uint16_t)(a - b), si = 0x88;
    di += 0x7D0;
    for (; cx; cx--) sprite(W(0x8AF), si, di++);
    di = (uint16_t)((ax >> 3) + 0x7D0);
    sprite(W(0x8AF), (uint16_t)(((ax & 7) + 1) << 3), di++);
    sprite(W(0x8AF), 0x80, di++);
    sprite(W(0x8AF), 0x80, di);
}

// 1454h: the same for the right end (pieces 9..16).
void Mag::elevRight(uint16_t ax, uint16_t bx) {
    const uint16_t a = ax >> 3, b = bx >> 3;
    uint16_t di, cx, si;
    if (a < b) {
        di = (uint16_t)(a + 1), cx = (uint16_t)(b - a), si = 0x88;
    } else {
        si = 8;
        const uint16_t d = (uint16_t)((uint16_t)(bx - 7) >> 3);
        di = d < b ? d : b;
        cx = (uint16_t)(a - di + 1);
    }
    di += 0x7D0;
    for (; cx; cx--) sprite(W(0x8AF), si, di++);
    sprite(W(0x8AF), (uint16_t)(((ax & 7) + 9) << 3), (uint16_t)((ax >> 3) + 0x7D0));
}

// 14C3h: the two caps, masked.
void Mag::elevCaps() {
    uint16_t ax = W(0x154C);
    spriteMasked(W(0x8AF), (uint16_t)((((ax & 7) << 1) + 0x12) << 3), (uint16_t)((ax >> 3) + 0x7D0));
    ax = (uint16_t)(W(0x1553) - 7 + 1);
    spriteMasked(W(0x8AF), (uint16_t)((((ax & 7) << 1) + 0x22) << 3), (uint16_t)((ax >> 3) + 0x7D0));
}

void Mag::elevRightMove() {   // 1516h
    const uint16_t ax = W(0x1553), bx = W(0x1558);
    SW(0x1558, ax);
    elevRight(ax, bx);
}

void Mag::elevLeftMove() {    // 152Bh
    const uint16_t ax = W(0x154C), bx = W(0x1551);
    SW(0x1551, ax);
    elevLeft(ax, bx);
}

// --------------------------------------------------------------- text ---

// 1554h: one 8-pixel column of the text area at DI, from text column BX:
// the margin and the gaps copied from the background (DS:7Ch, 40 bytes
// wide) through the latches, the characters by write mode 3 over it.
void Mag::drawColumn(uint32_t di, uint16_t bx) {
    di &= 0xFFFF;
    uint32_t si = (di % 0x28) + W(0x98);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0);
    gc(3, 0);
    writeMode(0);
    vw((di - 0x50) & 0xFFFF, 0);
    vw((di + 0x5410) & 0xFFFF, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x1542) / 0x50; ax; ax--) {
        vr(si & 0xFFFF);
        si += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
    uint32_t bp = si;
    gc(1, 0xF);
    gc(3, 0);
    writeMode(3);
    for (uint16_t cx = CW(0x1540); cx;) {
        if (drawChar(bx, di, bp)) {
            bp += 0x500;
            cx--;
            bx = (uint16_t)(bx + CW(0xD3D));
        } else {
            bp += 0x280;
        }
        for (uint16_t n = CW(0x154A); n; n--) {
            vr(bp & 0xFFFF);
            bp += 0x28;
            vw(di, 0);
            di = (di + 0x50) & 0xFFFF;
        }
        bx = (uint16_t)(bx + CW(0xD3D));
        if (--cx == 0) break;
    }
    gc(1, 0);
    writeMode(1);
    for (uint16_t ax = CW(0x1544); ax; ax--) {
        vr(bp & 0xFFFF);
        bp += 0x28;
        vw(di, 0);
        di = (di + 0x50) & 0xFFFF;
    }
}

// 1657h: character BX of the text at DI with its colour; the latches come
// from the background at BP. Big characters (colour bit 4) are 32 lines of
// SLCTBIG and take two rows.
bool Mag::drawChar(uint16_t bx, uint32_t& di, uint32_t bp) {
    uint8_t ah = rb(CW(0x1552), bx);
    const uint8_t c = rb(CW(0x1550), bx);
    const bool big = ah & 0x10;
    uint16_t font;
    uint32_t si;
    int lines;
    if (big) {
        ah &= 0xF;
        font = CW(0x154E), si = (uint32_t)(uint16_t)(c << 5), lines = 32;
    } else {
        font = CW(0x154C), si = (uint32_t)(uint16_t)(c << 4), lines = 16;
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

// 1849h: F1-F6: everything out, the other module, everything in.
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

// 18E5h: plane by plane (or one pass), write mode 0.
void Mag::sprite(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x18D9, di);
    const uint16_t h = rw(s, si + 2u);
    CSW(0x18DD, h);
    uint16_t cx = rw(s, si);
    const uint16_t skip = rw(s, si + 4u);
    CSW(0x18DF, skip);
    uint32_t src = rw(s, si + 6u);
    gc(8, 0xFF);
    uint16_t ax;
    if (cx & 0x8000) {
        CSW(0x18DB, cx & 0x7FFF);
        ax = 0x1008;
    } else {
        CSW(0x18DB, cx);
        gc(3, 0);
        gc(1, 0);
        writeMode(0);
        vga_.out(0x3C4, 2);
        ax = 0x1001;
        vga_.out(0x3C5, (uint8_t)ax);
    }
    for (;;) {
        uint32_t d = CW(0x18D9);
        for (uint16_t row = CW(0x18DD); row; row--) {
            for (uint16_t n = CW(0x18DB); n; n--) vw(d++ & 0xFFFF, rb(s, src++));
            d += skip;
        }
        ax = (uint16_t)(ax << 1);
        if (ax & 0x10) break;
        vga_.out(0x3C5, (uint8_t)ax);
    }
}

// 1973h: masked by the next sprite's data (one mask byte per data byte,
// as the bit mask), plane by plane.
void Mag::spriteMasked(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x18D9, di);
    CSW(0x18DB, rw(s, si));
    CSW(0x18DD, rw(s, si + 2u));
    CSW(0x18E3, rw(s, si + 0xEu));
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    vga_.out(0x3CE, 8);
    vga_.out(0x3C4, 2);
    for (uint8_t ah = 1; !(ah & 0x10); ah <<= 1) {
        vga_.out(0x3C5, ah);
        uint32_t d = CW(0x18D9);
        uint32_t bp = CW(0x18E3);
        for (uint8_t ch = (uint8_t)CW(0x18DD); ch; ch--) {
            for (uint8_t cl = (uint8_t)CW(0x18DB); cl; cl--) {
                vga_.out(0x3CF, rb(s, bp++));
                vr(d & 0xFFFF);
                vw(d++ & 0xFFFF, rb(s, src++));
            }
            d += skip;
        }
    }
}

// 19FBh: one pass through the latches with the settings the caller made.
void Mag::spriteLatched(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u);
    const uint16_t w = rw(s, si) & 0x7FFF;
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    CSW(0x18D9, di);
    CSW(0x18DB, w);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(d & 0xFFFF);
            vw(d++ & 0xFFFF, rb(s, src++));
        }
        d += skip;
    }
}

// 1A32h: puts a sprite's planes in video memory past the screen (at
// CS:18E1h, from ABE0h on) and makes its data offset point there.
void Mag::uploadSprite(uint16_t s, uint16_t si) {
    const uint16_t n = (uint16_t)(rw(s, si + 2u) * rw(s, si));
    CSW(0x18DB, n);
    uint32_t src = rw(s, si + 6u);
    const uint16_t at = CW(0x18E1);
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
        di = CW(0x18E1);
        for (uint16_t k = 0; k < n; k++) vw(di++ & 0xFFFF, rb(s, src++));
        const bool carry = ax & 0x8000;
        ax = (uint16_t)(ax << 1);
        if (carry) break;
    }
    CSW(0x18E1, (uint16_t)di);
}

// 1A9Bh: an uploaded sprite copied in video memory through the latches.
void Mag::copySprite(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u), w = rw(s, si);
    CSW(0x18DB, w);
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

// 1E2Eh: palette registers 0-15 straight, colour select for bits 4-5 (so
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

// 1E6Ch: line compare, the bottom panel's top.
void Mag::lineCompare(uint16_t cx) {
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

// 1EBDh
void Mag::startAddress(uint16_t cx) {
    vga_.outw(0x3D4, (uint16_t)(0x0C | (cx & 0xFF00)));
    vga_.outw(0x3D4, (uint16_t)(0x0D | (cx & 0xFF) << 8));
}

// 1ECBh
void Mag::screenOn(bool on) {
    waitRetrace();
    vga_.out(0x3C4, 1);
    uint8_t al = vga_.in(0x3C5);
    al = on ? (uint8_t)(al & 0xDF) : (uint8_t)(al | 0x20);
    vga_.out(0x3C5, al);
    waitRetrace();
}

// 1EFCh: a fade of CX colours from DAC entry DX: the bytes at s:SI move
// towards those at s:DI by 3 per step.
void Mag::fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx) {
    CSW(0x1EEA, (uint16_t)(cx * 3));
    CSW(0x1EE6, dx);
    CSW(0x1EF8, di);
    CSW(0x1EF6, si);
    CSW(0x1EFA, s);
    cs_[0x1EE5] = 0xFF;
}

// 1F22h: one step, and the colours out to the DAC.
void Mag::fadeStep() {
    const uint16_t s = CW(0x1EFA);
    uint16_t si = CW(0x1EF6), di = CW(0x1EF8);
    const int8_t bl = 3;
    uint8_t bh = 0;
    for (uint16_t cx = CW(0x1EEA); cx; cx--, si++, di++) {
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
    cs_[0x1EE5] = bh;
    vga_.out(0x3C8, (uint8_t)CW(0x1EE6));
    si = CW(0x1EF6);
    for (uint16_t n = CW(0x1EEA) / 3; n; n--)
        for (int k = 0; k < 3; k++) vga_.out(0x3C9, rb(s, si++));
}

// 1FACh: 'F' writes the page as text: the box at DS:0765h, then each
// 40-column page as rows.
void Mag::saveText() {
    std::vector<uint8_t> out;
    std::memcpy(&ds_[0x7E9], "\xC4\xC4\xC4\xC4\xC4\xC4", 6);
    out.insert(out.end(), &ds_[0x765], &ds_[0x765 + 0xD3]);
    const uint8_t w = cs_[0xD45];
    cs_[0xE31] = w;
    CSW(0xE32, (uint16_t)(CW(0x1540) * w));
    const uint16_t text = W(0x1544);
    for (uint16_t si = 0; si < CW(0xD3D); si = (uint16_t)(si + w)) {
        uint16_t p = si;
        for (uint16_t row = CW(0x1540); row; row--) {
            // 0E34h: the row's columns 1 to w-2, then the next row (#12
            // lost the first INC SI and with it the stepping)
            p++;
            for (int k = 0; k < w - 2; k++) out.push_back((uint8_t)(rb(text, p++) + 0x20));
            p = (uint16_t)(p + 1 + CW(0xD3D) - w);
            out.push_back(0x0D);
            out.push_back(0x0A);
        }
    }
    std::string name;
    for (uint16_t a = 0x838; ds_[a]; a++)
        if (ds_[a] != ' ') name += (char)ds_[a];
    host_.saveFile(name, out);
}

// 2601h
void Mag::setDac256(uint16_t s, uint16_t si) {
    vga_.out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, rb(s, si + i));
}

// ------------------------------------------------------------ the mouse ---

void Mag::mouseInit() {      // 2668h: the driver is there
    B(0x1A49) = 0xFF;
    mouseSetup();
}

void Mag::mouseSetup() {     // 2699h
    if (B(0x1A49)) {
        uint16_t bx = 0, cx = 0, dx = W(0x1A5B);
        int33(7, bx, cx, dx);
        cx = 0, dx = W(0x1A5D);
        int33(8, bx, cx, dx);
    }
    SW(0x1A4E, W(0x1A4A) >> 1);
    SW(0x1A50, W(0x1A4C) >> 1);
    uint16_t bx = 0, cx = W(0x1A4E), dx = W(0x1A50);
    int33(4, bx, cx, dx);
}

// 272Ah: which rectangle of the table at DS:1A61h the cursor is in.
void Mag::hotspot() {
    const uint16_t s = W(0x1A5F);
    uint16_t si = W(0x1A61);
    const uint16_t count = rw(s, si);
    si += 2;
    uint8_t al = 0xFF;
    for (uint16_t cx = count; cx; cx--, si += 8) {
        const int16_t x = (int16_t)W(0x1A4E), y = (int16_t)W(0x1A50);
        if (x < (int16_t)rw(s, si) || y < (int16_t)rw(s, si + 2u) || x > (int16_t)rw(s, si + 4u) ||
            y > (int16_t)rw(s, si + 6u))
            continue;
        al = (uint8_t)(count - cx);
        break;
    }
    B(0x1A57) = al;
}

// 277Bh: mouse and keys into DS:1A56h-1A73h.
void Mag::input() {
    B(0x1A56) = 0;
    B(0x1A57) = 0xFF;
    B(0x1A6F) = B(0x1A6E) = B(0x1A71) = B(0x1A70) = B(0x1A72) = B(0x1A73) = 0;
    if (B(0x1A49)) {
        uint16_t bx = 0, cx = 0, dx = 0;
        int33(3, bx, cx, dx);
        B(0x1A56) = (uint8_t)bx;
        const uint16_t x = (uint16_t)((uint32_t)W(0x1A4A) * cx / W(0x1A5B));
        const uint16_t y = (uint16_t)((uint32_t)W(0x1A4C) * dx / W(0x1A5D));
        if (x != W(0x1A4E) || y != W(0x1A50)) {
            if (B(0x1A6D) != 0xFF) cs_[0x2951] = 0;
            B(0x1A6D) = 0;
            SW(0x1A4E, x);
            SW(0x1A50, y);
            if (W(0x1A4E) <= 0x28) B(0x1A6F) = 0xFF;
            else if (W(0x1A4E) >= 0x258) B(0x1A6E) = 0xFF;
        }
        hotspot();
    }
    const uint8_t al = cs_[0x2950];
    cs_[0x2950] = 0;
    bool done = false;
    if (cs_[0x1B06] != 0xFF && al >= 0x3B) {
        const uint8_t bl = (uint8_t)(al - 0x3B);
        if (bl < 5) {                                    // F1-F5
            if (bl != B(0x97)) {
                const uint16_t si = (uint16_t)((B(0x85B) == 3 ? 2 : 0x48) + bl * 0xE);
                if (B(0x85B) >= ds_[si + 0xD]) {
                    B(0x97) = bl;
                    switchMusic(si);
                }
            }
            done = true;
        } else if (bl == 8) {                            // F9: music off/on
            int16_t bx;
            if (B(0x97) != 0xFF) bx = (int16_t)0xFF01, B(0x97) = 0xFF;
            else bx = 0xFF, B(0x97) = 0xFE;
            volume(bx);
            done = true;
        }
    }
    if (!done) {
        switch (al) {
        case 0x19: B(0x1A73) = 0xFF; break;             // P
        case 0x21: B(0x1A72) = 0xFF; break;             // F
        case 0x50:                                       // Down
            cs_[0x2951] = 0xFF;
            B(0x1A70) = 0xFF;
            moveSelection(1);
            break;
        case 0x48:                                       // Up
            cs_[0x2951] = 0xFF;
            B(0x1A71) = 0xFF;
            moveSelection(-1);
            break;
        case 0x4B:                                       // Left
            cs_[0x2951] = 0xFF;
            B(0x1A6F) = 0xFF;
            break;
        case 0x4D:                                       // Right
            cs_[0x2951] = 0xFF;
            B(0x1A6E) = 0xFF;
            break;
        case 0x39:
        case 0x1C:
        case 0x12:                                       // Space, Enter, E
            cs_[0x2951] = 0xFF;
            B(0x1A56) |= 1;
            break;
        case 0x01:                                       // Esc
            cs_[0x2951] = 0xFF;
            B(0x1A56) |= 2;
            break;
        }
    }
    cursor();
}

// 298Eh: the 3x16 bytes under the cursor to A000:FFCFh.
void Mag::saveUnderCursor(uint16_t di) {
    if (B(0x1A49) != 0xFF) return;
    uint32_t si = di, d = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        si += 0x4D;
    }
}

// 29C3h
void Mag::restoreUnderCursor() {
    if (B(0x1A49) != 0xFF) return;
    if (B(0x1A65) != 0xFF) {
        B(0x1A65) = 0xFF;
        return;
    }
    uint32_t d = W(0x153E), si = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(kVRAM, si, d);
        d += 0x4D;
    }
}

// 2A0Eh: the main menu's highlighted entry follows the mouse or the keys.
void Mag::mainHighlight() {
    if (B(0x1A49) == 0xFF && cs_[0x2951] != 0xFF) {
        if (B(0x1A57) == 0xFF) return;
        SW(0x1A7A, B(0x1A57));
    }
    if (B(0x1A75) != 0xFF) {
        if (W(0x1A7A) == W(0x1A76)) return;
        toggleItem(W(0x1A76));
    }
    B(0x1A75) = 0;
    SW(0x1A76, W(0x1A7A));
    toggleItem(W(0x1A7A));
}

// 2A5Dh: the same for the rows of a menu page.
void Mag::menuHighlight() {
    if (B(0x15AB) != 0xFF) return;
    if (B(0x1A49) == 0xFF && cs_[0x2951] != 0xFF) {
        uint16_t ax = W(0x1A50);
        if (ax <= 0xD) ax = 0;
        else if (ax >= 0xFA) ax = 0xB;
        else ax = (uint16_t)(uint8_t)((ax - 0xD) / 0x14);
        const uint16_t di = ax;
        const uint16_t bx = (uint16_t)(di + W(0x14D5) / 0x50 * 0xC);
        uint16_t dx;
        if (skipEntry(bx, dx)) return;
        SW(0x1A7A, di);
    }
    if (W(0x1A7A) == W(0x1A78)) return;
    unhighlightRow(W(0x1A78));
    SW(0x1A78, W(0x1A7A));
    B(0x1A75) = 0;
    highlightRow(W(0x1A7A));
}

// 2AE8h: the mouse cursor, after the highlight has followed it.
void Mag::cursor() {
    const uint16_t y = (uint16_t)(W(0x1A50) + 1);
    SW(0x1A68, y);
    SW(0x1A66, W(0x1A4E));
    const uint16_t di = (uint16_t)(0x50 * y + (W(0x1A4E) >> 3) + W(0x14D5) + W(0x1A63));
    restoreUnderCursor();
    SW(0x153E, di);
    if (B(0x1A74) == 0) mainHighlight();
    else if (B(0x1A74) == 1) menuHighlight();
    if (B(0x1A49) != 0xFF) return;
    saveUnderCursor(W(0x153E));
    if (cs_[0x2951] == 0xFF) return;
    spriteMasked(W(0x8A4), (uint16_t)(((W(0x1A4E) & 7) << 4) + 8), W(0x153E));
}

// 2B7Ah: row DI of a menu page in reverse (black on white).
void Mag::highlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint16_t bx = (uint16_t)(CW(0xD3D) * di + W(0x14D5));
    uint32_t d = (uint16_t)(pos + 0x3D90 + W(0x14D5));
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
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x1550), bx) << 4);
        uint32_t o = d;
        for (int k = 0; k < 16; k++) {
            vw(o & 0xFFFF, (uint8_t)(rb(CW(0x154C), si++) ^ 0xFF));
            o += 0x50;
        }
        bx++;
        d++;
    }
}

// 2C7Eh: the row back to normal, the background through the latches.
void Mag::unhighlightRow(uint16_t di) {
    const uint16_t pos = (uint16_t)(0x640 * di + 0x460);
    uint32_t bp = (uint16_t)((pos >> 1) + W(0x98));
    uint32_t si = (bp - 0x28) & 0xFFFF;
    uint16_t bx = (uint16_t)(CW(0xD3D) * di + W(0x14D5));
    uint32_t d = (uint16_t)(pos + 0x3D90 + W(0x14D5));
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

// 2D44h: main menu entry DI (TITLES sprite DI) XORed in planes 0 and 1.
void Mag::toggleItem(uint16_t di) {
    const uint16_t si2 = (uint16_t)(di << 1);
    const uint16_t at = (uint16_t)(CW(0x2D2E + si2) + CW(0x2D38 + si2));
    vga_.outw(0x3C4, 0x0F02);
    vga_.outw(0x3CE, 0xFF08);
    writeMode(3);
    vga_.outw(0x3CE, 0x0F00);
    vga_.outw(0x3CE, 0x0F01);
    vga_.outw(0x3CE, 0x1803);
    spriteLatched(W(0x8E3), (uint16_t)(si2 * 4 + 8), at);
}

// 2D9Fh: the driver's position from the program's.
void Mag::mouseSetPos() {
    if (B(0x1A49) != 0xFF) return;
    B(0x1A6D) = 0xFF;
    uint16_t cx = (uint16_t)((uint32_t)W(0x1A5B) * W(0x1A4E) / W(0x1A4A));
    uint16_t dx = (uint16_t)((uint32_t)W(0x1A5D) * W(0x1A50) / W(0x1A4C));
    uint16_t bx = 0;
    int33(4, bx, cx, dx);
}

}  // namespace imp
