#include "mag.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <stdexcept>

namespace imp {

namespace {
constexpr uint32_t kImageDS = 0xCC00;   // DS (0CC0h) in the load image
}

Mag::Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat)
    : vga_(vga), host_(host), dat_(std::move(dat)) {
    cs_.assign(0x10000, 0);
    ds_.assign(0x10000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0x10000), cs_.begin());
    if (image.size() > kImageDS)
        std::copy(image.begin() + kImageDS, image.begin() + std::min<size_t>(image.size(), kImageDS + 0x10000),
                  ds_.begin());
    // NFO8.DAT's directory, in the data segment (DS:0767h points at it):
    // 13-byte names, a 32-bit offset and a 16-bit size. It has no end
    // marker (the resource names follow it); 2F90h looks names up from the
    // start and stops at a zero byte, so the first match wins. LOGO.RAW, the
    // last entry, is read on to the end of the file.
    uint32_t next = 0;
    for (uint32_t p = W(0x767); p + 19 <= ds_.size() && ds_[p]; p += 19) {
        std::string n;
        for (int i = 0; i < 13 && ds_[p + i]; i++) n += (char)ds_[p + i];
        uint32_t off = 0;
        std::memcpy(&off, &ds_[p + 13], 4);
        uint32_t size = (uint32_t)(ds_[p + 17] | ds_[p + 18] << 8);
        if (next && off != next) break;
        next = off + size;
        if (n == "LOGO.RAW" && off < dat_.size()) size = (uint32_t)dat_.size() - off;
        dir_.emplace(n, std::make_pair(off, size));
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

// 2F17h gives the size, the program allocates (size >> 4) + 1 paragraphs,
// 2F20h reads the file there.
uint16_t Mag::loadResource(const std::string& name) {
    uint32_t size;
    const uint8_t* p = resource(name, size);
    const uint16_t s = alloc((size >> 4) + 1);
    std::copy(p, p + size, seg(s).begin());
    return s;
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

void Mag::movsbVram(uint32_t& si, uint32_t& di) {
    vw(di, vr(si));
    si++, di++;
}

// ----------------------------------------------------------------- waits ---

void Mag::waitFlag() {
    while (cs_[0x1F1E] != 0xFF) host_.waitFrame();
    cs_[0x1F1E] = 0;
}

void Mag::waitRetrace() { host_.waitFrame(); }

// ------------------------------------------------- the timer, for the host ---

std::vector<Vga::LineWrite> Mag::rasterWrites() const {
    // The handler is #9's (state A at 1F4Eh, B at 209Bh, C at 20D2h) with
    // the same PIT counts, 8Fh and 1A4h display-enable edges: state A comes
    // at the start of line 142 and writes the CRTC offset at the start of
    // the next three lines, then 28h and the middle's colour bank; state B
    // comes at line 419 with the bottom's bank; state C, before the
    // retrace, sets the top's bank (in the registers at frame start).
    std::vector<Vga::LineWrite> w;
    for (int i = 0; i < 3; i++) w.push_back({143 + i, Vga::LineWrite::Crtc, 0x13, cs_[0x1F29 + i]});
    w.push_back({146, Vga::LineWrite::Crtc, 0x13, 0x28});
    w.push_back({146, Vga::LineWrite::Ac, 0x14, cs_[0x1F2D]});
    w.push_back({420, Vga::LineWrite::Ac, 0x14, cs_[0x1F2E]});
    w.push_back({420, Vga::LineWrite::Crtc, 0x13, 0x28});
    return w;
}

void Mag::endOfFrame() {
    if (raster_) {
        // state C (20D2h): top colour bank, offset back to 28h, frame flag
        vga_.ac[0x14] = cs_[0x1F2C];
        vga_.crtc[0x13] = 0x28;
        cs_[0x1F1E] = 0xFF;
        // the keyboard handler (2BEEh) keeps the last scancode
        if (!keys_.empty()) {
            cs_[0x2BBD] = keys_.front();
            keys_.erase(keys_.begin());
        }
    }
}

void Mag::mouse(int x, int y, int buttons, bool moved) {
    mouse_.buttons = buttons;
    if (!moved) return;
    // The program scales the driver's position (DS:73A2h * x / DS:73B3h);
    // set the driver so that the cursor lands under the pointer. The cursor
    // is drawn at row DS:73A8h of the text area, which shows at line
    // 150 + DS:73A8h.
    const int sx = W(0x73A2) ? x * W(0x73B3) / W(0x73A2) : x;
    const int py = y - 150;
    const int sy = W(0x73A4) ? py * W(0x73B5) / W(0x73A4) : py;
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
    // What 0000h-0056h leaves: the settings of the configuration (a GUS, no
    // compatibility mode, no printer) and the sound system.
    B(0x756) = 3;
    B(0x757) = 0;
    B(0x758) = 0xFF;
    cs_[0x1F26] = 0;        // compatibility mode off: the timer waits for the lines
    cs_[0x1F34] = 0;

    clearVram();
    vga_.setMode(0x12);
    setupAttributes();
    setDac256(kDS, 0x6FB8);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);

    // 0094h: the cover (P.L.): LOGO.RAW is four planes of 9600h bytes and
    // 16 colours, faded in from the DAC table's first colours, held 140
    // retraces, faded to black.
    uint32_t size;
    const uint8_t* logo = resource(str(0x26), size);
    SW(0x164D, alloc((0x9600 >> 4) + 1));
    uint32_t pos = 0;
    uint8_t al = 0x11;
    for (;;) {
        sq(2, al);
        auto& buf = seg(W(0x164D));
        for (uint32_t i = 0; i < 0x9600; i++) buf[i] = pos + i < size ? logo[pos + i] : 0;
        pos += 0x9600;
        logoPlane();
        const bool carry = al & 0x80;
        al = (uint8_t)(al << 1);
        if (carry) break;
    }
    for (uint32_t i = 0; i < 0x30; i++) ds_[0x6F88 + i] = pos + i < size ? logo[pos + i] : 0;
    fadeStart(kDS, 0x6FB8, 0x6F88, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    volume(0xFF);

    // 0124h-0187h: 213Ah/2177h measure the frame for the PIT counts; the
    // port's frames are split at the lines the counts stand for.
    CSW(0x1F27, 0x1F4E);
    SW(0x6F46, alloc((0x55F0 >> 4) + 1));
    SW(0x6F4A, alloc((0x3E80 >> 4) + 1));
    SW(0x6F57, alloc((0x500 >> 4) + 1));
    SW(0x15B4, loadResource(str(0x15A9)));   // SELECT.PAL
    SW(0x15C2, loadResource(str(0x15B6)));   // ARTFONT.SPR
    SW(0x15D0, loadResource(str(0x15C4)));   // READFNT.SPR
    SW(0x15DC, loadResource(str(0x15D2)));   // MOUSE.SPR
    SW(0x15EB, loadResource(str(0x15DE)));   // ELEVATOR.SPR
    SW(0x161F, loadResource(str(0x1614)));   // TITLES.SPR
    SW(0x1612, loadResource(str(0x1606)));   // DECORS2.SPR
    SW(0x15F9, loadResource(str(0x15ED)));   // DECORS1.SPR
    std::fill(ds_.begin() + 0x6F88, ds_.begin() + 0x6FB8, 0);
    for (int i = 0; i < 0x8C; i++) waitRetrace();
    fadeStart(kDS, 0x6FB8, 0x6F88, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    sq(2, 0xF);
    for (uint32_t i = 0; i < 0x9600; i++) vw(i, 0);

    textToFont();
    mouseInit();
    lineCompare(0x1E0);
    startAddress(0x1040);
    cs_[0x1F2C] = 0x0B;
    cs_[0x1F2D] = 0x0C;
    cs_[0x1F2E] = 0x0D;
    // 03D6h: SELECT.PAL's colours 160-223 black
    std::fill(seg(W(0x15B4)).begin() + 0x1E0, seg(W(0x15B4)).begin() + 0x2A0, 0);
    sprite(W(0x15F9), 8, 0x1040);
    CSW(0x1D0C, 0xABE0);
    uploadSprite(W(0x15F9), 0x10);
    SW(0x1604, loadResource(str(0x15FB)));   // BACK.SPR, uploaded after DECORS1
    uploadSprite(W(0x1604), 8);
    if (B(0x73A1) == 0xFF) mouseSetup();
    host_.playModule(str(0x2));             // GUS: "data.001", F1
    installTimer();
    SW(0x73A2, 0x275);
    SW(0x73A4, 0xFD);
    SW(0x73A6, 0x13A);
    SW(0x73A8, 0x7E);
    mouseSetPos();
}

// 0524h: the main menu and what its five entries lead to.
void Mag::mainMenu() {
    for (;;) {
        cs_[0x1F29] = cs_[0x1F2A] = cs_[0x1F2B] = 0;
        SW(0x6E7B, 0);
        SW(0x6E77, 0);
        drawBackground();
        SW(0x6F68, 0);
        SW(0x6F6A, 1);
        SW(0x6F6C, 7);
        sprite(W(0x1612), 0x10, 0);
        sprite(W(0x1612), 8, 0x40CB);
        if (B(0x6F83) == 0xFF) {
            B(0x6F83) = 0;
            fadeInAll();
        } else {
            fadeInPanel(0x240, 0xC0, 0x30);
        }
        SW(0x73B9, 0x6F16);
        SW(0x73B7, kDS);
        B(0x73BD) = 0;
        SW(0x73A2, 0x275);
        SW(0x73A4, 0xFD);
        SW(0x73BB, 0x3DE0);
        B(0x73CB) = 0;
        B(0x73CC) = 0xFF;
        SW(0x73D3, 5);
        SW(0x73D1, 0);
        B(0x6E83) = 0xFF;
        SW(0x6E84, 0);
        for (;;) {
            waitFlag();
            input();
            if (B(0x73AE) & 1) break;
            if (B(0x73AE) & 2) return;
        }
        const uint8_t al = (uint8_t)W(0x73D1);
        uint16_t bx;
        switch (al) {
        case 2:                                     // 065Fh: ARTICLES
            SW(0x6F6E, 0x164F);
            SW(0x6F7F, 0x616B);
            SW(0x6F75, 0xB3);
            SW(0x6F71, 0x3480);
            SW(0x6F73, 0xF);
            B(0x6F70) = 0xFF;
            B(0x6F67) = 0xFF;
            bx = W(0x6F79);
            section(bx);
            SW(0x6F79, bx);
            break;
        case 1:                                     // 0695h: CHARTS
            SW(0x6F6E, 0x59CF);
            SW(0x6F7F, 0x6D31);
            SW(0x6F75, 0xB);
            SW(0x6F71, 0);
            SW(0x6F73, 1);
            B(0x6F70) = 0xFF;
            B(0x6F67) = 0xFF;
            bx = W(0x6F7B);
            section(bx);
            SW(0x6F7B, bx);
            break;
        case 3:                                     // 06CBh: INTERVIEWS
            SW(0x6F6E, 0x524F);
            SW(0x6F7F, 0x6BED);
            SW(0x6F75, 0xB);
            SW(0x6F71, 0);
            SW(0x6F73, 1);
            B(0x6F70) = 0xFF;
            B(0x6F67) = 0xFF;
            bx = W(0x6F7D);
            section(bx);
            SW(0x6F7D, bx);
            break;
        default: {                                  // 0701h: EDITORIAL (0), CREDITS
            const uint16_t entry = al == 0 ? 0 : 1;
            B(0x6F85) = 0xFF;
            fadeOutPanel(0x240, 0xC0, 0x90);
            B(0x6F84) = 0xFF;
            page((uint16_t)(entry * 0xE + 0x614F));
            fadeOutPanel(0x240, 0xC0, 0x90);
            break;
        }
        }
    }
}

// 07D5h: a section: its list from entry BX on, and the articles chosen
// from it. BX comes back as the last entry.
void Mag::section(uint16_t& bx) {
    SW(0x6F77, bx);
    B(0x6F85) = 0;
    fadeOutPanel(0x240, 0xC0, 0x90);
    list();
    bx = W(0x6F77);
}

// 074Eh: the end: the mag fades out, the timer goes, text mode.
void Mag::ending() {
    fadeOutAll();
    removeTimer();
    host_.stopMusic();
    clearVram();
    vga_.setMode(3);
}

// ----------------------------------------------------------- clearing ---

void Mag::clearVram() {      // 07F9h
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint32_t a = 0; a < 0x10000; a++) vw(a, 0);
}

void Mag::clearText() {      // 0836h
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint32_t i = 0; i < 0x2CD8 * 2; i++) vw(0x3DE0 + i, 0);
}

// 0873h: one plane of the cover, from the buffer (no wait, unlike #9's).
void Mag::logoPlane() {
    auto& buf = seg(W(0x164D));
    for (uint32_t i = 0; i < 0x9600; i++) {
        vr(i);
        vw(i, buf[i]);
    }
}

// 0891h: the three CRTC offsets the timer handler writes on lines 143-145:
// together they advance the address by AX words, which is how the text
// area scrolls sideways.
void Mag::setOffsets(uint16_t ax) {
    uint8_t* o = &cs_[0x1F29];
    if (ax <= 0xF0) {
        o[0] = (uint8_t)ax, o[1] = 0, o[2] = 0;
    } else if (ax <= 0x1E0) {
        o[0] = 0xF0, o[1] = (uint8_t)(ax - 0xF0), o[2] = 0;
    } else {
        o[0] = 0xF0, o[1] = 0xF0, o[2] = (uint8_t)(ax - 0x1E0);
    }
}

// ------------------------------------------------------------- the lists ---

// 08E0h: a section's list: the text at DS:6F6Eh, 80 columns by 12 rows of
// ARTFONT, 4 lines between rows; 12 entries a screen, a screen being 3C0h
// bytes of the text. Enter opens the entry (then the list starts again),
// Esc leaves.
void Mag::list() {
    for (;;) {
        SW(0x6F68, 0);
        SW(0x6F6A, 4);
        SW(0x6F6C, 7);
        CSW(0x18FF, 0xC);
        CSW(0x1901, 0x460);
        CSW(0x1903, 0x50);
        CSW(0x1905, 0x140);
        CSW(0x1907, 4);
        CSW(0x1909, W(0x15C2));
        CSW(0x190B, kDS);
        {
            const uint16_t ax = W(0x6F77);
            const uint8_t q = (uint8_t)(ax / 0xC), r = (uint8_t)(ax % 0xC);
            SW(0x73D1, r);
            SW(0x6F61, (uint16_t)(q + 1));
            const uint16_t a = (uint16_t)(q * 0x3C0);
            SW(0x6E79, a);
            // MUL BL: the low byte of the screen's offset times 28h (right
            // for the first screen only, as in the original)
            const uint16_t c = (uint16_t)((uint8_t)a * 0x28);
            SW(0x6E77, c);
            SW(0x6E7D, c);
            SW(0x6E7B, (uint16_t)(c << 1));
        }
        B(0x6E83) = 0xFF;
        SW(0x6E75, W(0x6F71));
        SW(0x6F63, W(0x6F73));
        SW(0x6E84, 0);
        SW(0x73A2, 0x275);
        SW(0x73A4, 0xFD);
        SW(0x73B9, 0x6E92);
        SW(0x73B7, kDS);
        SW(0x73BB, 0x3DE0);
        B(0x73CC) = 0xFF;
        B(0x73CB) = 1;
        SW(0x73D3, 0xC);
        barCalcList();
        fadeOutText(0x240, 0xC0);
        setOffsets(W(0x6E77));
        drawBackground();
        writeMode(0);
        {
            uint32_t di = (uint16_t)(0x3DE0 + W(0x6E7B));
            uint16_t bx = (uint16_t)(W(0x6F6E) + W(0x6E79));
            for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
        }
        SW(0x6F40, 0);
        if (B(0x6F67) == 0xFF) {
            copySprite(W(0x15F9), 0x10, 0);
            if (B(0x6F70) == 0xFF) {
                B(0x6F70) = 0;
                barInit();
            }
            fadeInPanel(0x240, 0xC0, 0xC0);
        } else {
            fadeTo(0x240, 0xC0, 0xC0);
        }
        bool scrolled = true;                       // 0AA2h
        for (;;) {
            if (scrolled) {
                B(0x6E83) = 0xFF;
                B(0x73CC) = 0xFF;
                B(0x73BD) = 0;
                scrolled = false;
            }
            // 0B1Bh
            input();
            if (B(0x73AE) & 1) {                    // 0B38h: an entry
                const uint16_t bx = (uint16_t)(W(0x6E79) / 0x50 + W(0x73D1));
                if (bx <= W(0x6F75)) {
                    SW(0x6F77, bx);
                    const uint16_t bp = (uint16_t)(bx * 0xE + W(0x6F7F));
                    if (ds_[(uint16_t)(bp + 0xD)] != 3) {
                        page(bp);
                        B(0x6F67) = 0;
                        break;                      // to 08E0h
                    }
                }
            } else if (B(0x73AE) & 2) {             // 0C72h: Esc
                SW(0x6F77, (uint16_t)(W(0x6E79) / 0x50 + W(0x73D1)));
                fadeOutPanel(0x240, 0xC0, 0x90);
                clearText();
                return;
            }
            // 0B7Bh
            int dir = 0;
            if (B(0x73C6) == 0xFF) dir = 1;
            else if (B(0x73C7) == 0xFF) dir = -1;
            else if (cs_[0x2BBE] != 0xFF) {
                if (B(0x73AF) == 0xD) dir = 1;
                else if (B(0x73AF) == 0xC) dir = -1;
            }
            if (dir > 0) {                          // 0BABh
                if ((int16_t)W(0x6E79) >= (int16_t)W(0x6E75)) {
                    if (cs_[0x2BBE] == 0xFF) {
                        SW(0x6E84, 2);
                        clampMouse();
                    }
                } else {
                    restoreUnderCursor();
                    xorRow(W(0x73CF));
                    B(0x6E83) = 0;
                    SW(0x6E7F, 0);
                    SW(0x6E81, 1);
                    SW(0x6E7D, (uint16_t)(W(0x6E7D) + 0x28));
                    SW(0x6E7B, (uint16_t)(W(0x6E7B) + 0x50));
                    SW(0x6E79, (uint16_t)(W(0x6E79) + 0x3C0));
                    SW(0x6E84, 1);
                    SW(0x6F61, (uint16_t)(W(0x6F61) + 1));
                    barCalcList();
                }
            } else if (dir < 0) {                   // 0C11h
                if (W(0x6E79) == 0) {
                    if (cs_[0x2BBE] == 0xFF) clampMouse();
                } else {
                    restoreUnderCursor();
                    xorRow(W(0x73CF));
                    B(0x6E83) = 0;
                    SW(0x6E7F, 0x50);
                    SW(0x6E81, 0xFFFF);
                    SW(0x6E7D, (uint16_t)(W(0x6E7D) - 0x28));
                    SW(0x6E7B, (uint16_t)(W(0x6E7B) - 0x50));
                    SW(0x6E79, (uint16_t)(W(0x6E79) - 0x3C0));
                    SW(0x6E84, 2);
                    SW(0x6F61, (uint16_t)(W(0x6F61) - 1));
                    barCalcList();
                }
            }
            // 0A62h: a frame; while the screen turns, two more columns
            for (;;) {
                waitFlag();
                barRight();
                barLeft();
                if (B(0x6E83) == 0xFF) break;
                uint16_t ax = W(0x6E77);
                if (ax == W(0x6E7D)) {
                    clampMouse();
                    scrolled = true;
                    break;
                }
                ax = (uint16_t)(ax + W(0x6E81));
                SW(0x6E77, ax);
                setOffsets(ax);
                if (W(0x6E81) != 0xFFFF) {
                    const uint32_t di = (uint16_t)((ax << 1) + 0x3E2E);
                    SW(0x6E7F, (uint16_t)(W(0x6E7F) + 2));
                    const uint16_t bx = (uint16_t)(W(0x6E7F) + W(0x6E79) + W(0x6F6E) - 2);
                    scrollRight(di, bx);
                    scrollRight(di + 1, (uint16_t)(bx + 1));
                } else {
                    const uint32_t di = (uint16_t)(0x3DE0 + (ax << 1));
                    SW(0x6E7F, (uint16_t)(W(0x6E7F) - 2));
                    const uint16_t bx = (uint16_t)(W(0x6E7F) + W(0x6E79) + W(0x6F6E));
                    scrollLeft(di, bx);
                    scrollLeft(di + 1, (uint16_t)(bx + 1));
                }
            }
        }
    }
}

// 0EE0h: the next entry of the list in direction SI that is not a blank
// (type 3); CF when there is none.
bool Mag::step(int16_t si, uint16_t& dx) {
    cs_[0x2BBE] = cs_[0x2BBF];
    B(0x73C9) = 0;
    B(0x73C8) = 0;
    uint16_t bx = W(0x6F77);
    for (;;) {
        bx = (uint16_t)(bx + si);
        if (bx == 0xFFFF || bx > W(0x6F75)) return true;
        const uint16_t bp = (uint16_t)(0xE * bx + W(0x6F7F));
        if (ds_[(uint16_t)(bp + 0xD)] == 3) continue;
        SW(0x6F77, bx);
        dx = bp;
        return false;
    }
}

// 0E73h: after a turn, the mouse to where the next one would not start:
// the middle, or away from the edge that turned.
void Mag::clampMouse() {
    if (cs_[0x2BBE] == 0xFF) {
        B(0x73C5) = 0xFF;
        SW(0x73A6, 0x137);
        return;
    }
    uint16_t bx = 0, cx = 0, dx = 0;
    int33(3, bx, cx, dx);
    dx = (uint16_t)((uint32_t)dx * W(0x73A4) / W(0x73B5));
    if (W(0x6E84) == 1) cx = 0x252;
    else if (W(0x6E84) == 2) cx = 0x2D;
    else cx = 0x140, dx = 0x86;
    SW(0x73A6, cx);
    SW(0x73A8, dx);
    mouseSetPos();
}

// ------------------------------------------------------------- the pages ---

// 0C9Ah: unpacks the .BIN read at [6F4Ah] into [6F46h]: a word of lines,
// then each line's characters (minus 20h, so font indices) up to a 0, FFh n
// standing for n blanks. AL = 1: 80-column lines; else 38 columns with a
// blank column on each side. 15 blank lines after; DS:6F63h = the pages.
void Mag::unpack(uint8_t al) {
    cs_[0xC96] = al;
    const uint8_t bl = al == 1 ? 0x50 : 0x26;
    cs_[0xC97] = bl;
    const uint16_t src = W(0x6F4A), dst = W(0x6F46);
    uint32_t si = 0, di = 0;
    auto put = [&](uint8_t v) { wb(dst, di++ & 0xFFFF, v); };
    const uint16_t lines = rw(src, si);
    si += 2;
    SW(0x6F63, (uint16_t)(lines / 0xF + (lines % 0xF ? 1 : 0)));
    for (uint16_t cx = lines; cx; cx--) {
        uint8_t ah = 0;
        if (cs_[0xC96] != 1) put(0);
        for (;;) {
            const uint8_t c = rb(src, si++ & 0xFFFF);
            if (c == 0xFF) {                         // 0CFFh
                const uint8_t n = rb(src, si++ & 0xFFFF);
                ah = (uint8_t)(ah + n);
                for (int k = 0; k < n; k++) put(0);
            } else if (c == 0) {                     // 0D0Ch
                const uint8_t n = (uint8_t)(cs_[0xC97] - ah);
                for (int k = 0; k < n; k++) put(0);
                break;
            } else {
                put((uint8_t)(c - 0x20));
                ah++;
            }
            if (ah >= cs_[0xC97]) break;
        }
        if (cs_[0xC96] != 1) put(0);
    }
    const uint16_t n = (uint16_t)((uint8_t)(cs_[0xC97] + 2) * 0xF);
    for (uint16_t k = 0; k < n; k++) put(0);
}

// 0D3Ah: the .BIN named at DX read into [6F4Ah].
void Mag::loadFile(uint16_t dx) {
    uint32_t size;
    const uint8_t* p = resource(str(dx), size);
    const uint16_t s = W(0x6F4A);
    for (uint32_t i = 0; i < size; i++) wb(s, i, p[i]);
}

// 0F22h: two 40-column pages of an article side by side.
void Mag::drawPage40() {
    drawBackground();
    writeMode(0);
    uint32_t di = 0x3DE0;
    uint16_t bx = 0;
    for (int cx = 0; cx < 0x28; cx++) drawColumn(di++, bx++);
    bx = 0x258;
    for (int cx = 0; cx < 0x28; cx++) drawColumn(di++, bx++);
}

// 0F63h: an 80-column page.
void Mag::drawPage80() {
    drawBackground();
    writeMode(0);
    uint32_t di = 0x3DE0;
    uint16_t bx = 0;
    for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
}

// 0F91h: the entry at DX: an article (type 1, 0FE7h) in 40-column pages,
// or a one-screen text (type 2, 1303h). In an article Left/Right turn the
// pages, Up/Down (from a list) go to the neighbours; Esc returns.
void Mag::page(uint16_t dx) {
    for (;;) {
        const uint8_t type = ds_[(uint16_t)(dx + 0xD)];
        txtName(dx);
        if (B(0x6F84) != 0xFF) fadeOutText(0x240, 0xC0);
        clearText();
        cs_[0x1F2D] = 0xD;
        setOffsets(0x28);
        waitFlag();
        loadFile(dx);
        // the loop's way out: 0 = Esc, else the neighbour at nextDx
        uint16_t nextDx = 0;
        bool next = false;
        if (type != 1) {
            // 1303h: one 80-column screen
            SW(0x73A2, 0x275);
            SW(0x73A4, 0xFD);
            SW(0x73B9, 0x6F04);
            SW(0x73BB, 0x3DE0);
            B(0x73CC) = 0xFF;
            B(0x73CB) = 9;
            SW(0x73D3, 1);
            SW(0x73D1, 0);
            B(0x73BD) = 0;
            CSW(0x18FF, 0xF);
            CSW(0x1901, 0x460);
            CSW(0x1903, 0x50);
            CSW(0x1905, 0);
            CSW(0x1907, 0);
            CSW(0x1909, W(0x15D0));
            CSW(0x190B, W(0x6F46));
            SW(0x6E79, 0);
            SW(0x6E75, 0);
            SW(0x6E7D, 0);
            B(0x6E83) = 0xFF;
            SW(0x6E77, 0);
            SW(0x6E7B, 0);
            SW(0x6E84, 0);
            SW(0x6F63, 1);
            SW(0x6F61, 1);
            unpack(1);
            barCalcList();
            waitFlag();
            cs_[0x1F2D] = 0xC;
            waitFlag();
            drawPage80();
            fadeTo(0x240, 0xC0, 0xC0);
            for (;;) {
                input();                             // 1417h
                if (B(0x73AE) & 2) return;
                if (B(0x6F85) != 0xFF) {
                    int16_t si = 0;
                    if (B(0x73C9) == 0xFF) si = -1;
                    else if (B(0x73C8) == 0xFF) si = 1;
                    if (si && !step(si, nextDx)) {
                        next = true;
                        break;
                    }
                }
                waitFlag();                          // 13F3h
                barRight();
                barLeft();
            }
        } else {
            // 0FE7h: an article
            unpack(2);
            SW(0x6F68, 0);
            SW(0x6F6A, 4);
            SW(0x6F6C, 7);
            SW(0x6E84, 0);
            SW(0x73A2, 0x275);
            SW(0x73A4, 0xFD);
            SW(0x73B9, 0x6F04);
            SW(0x73B7, kDS);
            SW(0x73BB, 0x3DE0);
            B(0x73CC) = 0xFF;
            B(0x73CB) = 9;
            SW(0x73D3, 1);
            SW(0x73D1, 0);
            CSW(0x18FF, 0xF);
            CSW(0x1901, 0x460);
            CSW(0x1903, 0x28);
            CSW(0x1905, 0);
            CSW(0x1907, 0);
            CSW(0x1909, W(0x15D0));
            CSW(0x190B, W(0x6F46));
            SW(0x6E79, 0);
            SW(0x6E7D, 0);
            B(0x6E83) = 0xFF;
            SW(0x6E77, 0);
            SW(0x6E7B, 0);
            SW(0x6E84, 0);
            setOffsets(W(0x6E77));
            {
                int16_t ax = (int16_t)(W(0x6F63) - 2);
                if (ax < 0) ax = 0;
                SW(0x6E75, (uint16_t)(ax * 0x258));
            }
            SW(0x6F61, 1);
            barCalcPage();
            waitFlag();
            cs_[0x1F2D] = 0xC;
            waitFlag();
            drawPage40();
            if (B(0x6F84) != 0xFF) {
                fadeTo(0x240, 0xC0, 0xC0);
            } else {
                B(0x6F84) = 0;
                copySprite(W(0x15F9), 0x10, 0);
                barInit();
                fadeInPanel(0x240, 0xC0, 0xC0);
            }
            bool scrolled = true;                     // 116Fh
            for (;;) {
                if (scrolled) {
                    B(0x6E83) = 0xFF;
                    B(0x73CC) = 0xFF;
                    B(0x73BD) = 0;
                    scrolled = false;
                }
                input();                             // 11E8h
                if (B(0x73CA) == 0xFF) {
                    // 2393h: P/F print or save the article, only with a
                    // printer configured (DS:0758h); the port has none.
                }
                if (B(0x73AE) & 2) return;
                int dir = 0;
                int16_t si = 0;
                if (B(0x73C6) == 0xFF) dir = 1;
                else if (B(0x73C7) == 0xFF) dir = -1;
                else {
                    if (B(0x6F85) != 0xFF) {
                        if (B(0x73C9) == 0xFF) si = -1;
                        else if (B(0x73C8) == 0xFF) si = 1;
                    }
                    if (!si && cs_[0x2BBE] != 0xFF) {
                        if (B(0x73AF) == 0) dir = -1;
                        else if (B(0x73AF) == 1) dir = 1;
                    }
                }
                if (si) {                            // 12EDh/12F2h
                    if (!step(si, nextDx)) {
                        next = true;
                        break;
                    }
                } else if (dir > 0) {                // 124Ch
                    if (W(0x6F63) > 2 && W(0x6E79) < W(0x6E75)) {
                        restoreUnderCursor();
                        B(0x6E83) = 0;
                        SW(0x6E7F, 0);
                        SW(0x6E81, 1);
                        SW(0x6E7D, (uint16_t)(W(0x6E7D) + 0x14));
                        SW(0x6E7B, (uint16_t)(W(0x6E7B) + 0x28));
                        SW(0x6E79, (uint16_t)(W(0x6E79) + 0x258));
                        SW(0x6E84, 1);
                        SW(0x6F61, (uint16_t)(W(0x6F61) + 1));
                        barCalcPage();
                    }
                } else if (dir < 0) {                // 12A1h
                    if (W(0x6E79) > 0) {
                        restoreUnderCursor();
                        B(0x6E83) = 0;
                        SW(0x6E7F, 0x28);
                        SW(0x6E81, 0xFFFF);
                        SW(0x6E7D, (uint16_t)(W(0x6E7D) - 0x14));
                        SW(0x6E7B, (uint16_t)(W(0x6E7B) - 0x28));
                        SW(0x6E79, (uint16_t)(W(0x6E79) - 0x258));
                        SW(0x6E84, 2);
                        SW(0x6F61, (uint16_t)(W(0x6F61) - 1));
                        barCalcPage();
                    }
                }
                // 1136h: a frame; while the page turns, two more columns
                for (;;) {
                    waitFlag();
                    barRight();
                    barLeft();
                    if (B(0x6E83) == 0xFF) break;
                    uint16_t ax = W(0x6E77);
                    if (ax == W(0x6E7D)) {
                        clampMouse();
                        scrolled = true;
                        break;
                    }
                    ax = (uint16_t)(ax + W(0x6E81));
                    SW(0x6E77, ax);
                    setOffsets(ax);
                    if (W(0x6E81) != 0xFFFF) {
                        const uint32_t di = (uint16_t)((ax << 1) + 0x3E2E);
                        const uint16_t bx = (uint16_t)(W(0x6E7F) + W(0x6E79) + 0x258);
                        scrollRight(di, bx);
                        scrollRight(di + 1, (uint16_t)(bx + 1));
                        SW(0x6E7F, (uint16_t)(W(0x6E7F) + 2));
                    } else {
                        const uint32_t di = (uint16_t)(0x3DE0 + (ax << 1));
                        SW(0x6E7F, (uint16_t)(W(0x6E7F) - 2));
                        const uint16_t bx = (uint16_t)(W(0x6E7F) + W(0x6E79));
                        scrollLeft(di, bx);
                        scrollLeft(di + 1, (uint16_t)(bx + 1));
                    }
                }
            }
        }
        if (!next) return;
        B(0x6F84) = 0;                               // 12FAh/1457h
        dx = nextDx;
    }
}

// 2374h: "NAME    .TXT" at DS:0733h for the export.
void Mag::txtName(uint16_t dx) {
    uint16_t si = dx, di = 0x733;
    while (ds_[si] != '.') ds_[di++] = ds_[si++];
    std::memcpy(&ds_[di], ".TXT", 4);
    ds_[di + 4] = 0;
}

// 1460h: the text area's background, twice side by side.
void Mag::drawBackground() {
    writeMode(0);
    gc(3, 0);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0xF);
    gc(0, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x3DE0 + i, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x91F0 + i, 0);
    copySprite(W(0x1604), 8, (uint16_t)(0x3DE0 + W(0x6E7B)));
    copySprite(W(0x1604), 8, (uint16_t)(0x3E08 + W(0x6E7B)));
}

// ------------------------------------------------------------- fades ---

// 14E4h: the text bank to its colours while the bottom panel slides up.
void Mag::fadeInPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x6F65, 0x1E0);
    fadeStart(W(0x15B4), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x6F65) != 0x1AC) {
            SW(0x6F65, (uint16_t)(W(0x6F65) - 5));
            if ((int16_t)W(0x6F65) < 0x1AC) SW(0x6F65, 0x1AC);
            lineCompare(W(0x6F65));
            continue;
        }
        if (!fading()) return;
    }
}

// 1550h: the opposite, the panel sliding down.
void Mag::fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x6F65, 0x1AC);
    fadeStart(W(0x15B4), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x6F65) != 0x1E0) {
            SW(0x6F65, (uint16_t)(W(0x6F65) + 5));
            if (W(0x6F65) >= 0x1E0) SW(0x6F65, 0x1E0);
            lineCompare(W(0x6F65));
            continue;
        }
        if (!fading()) return;
    }
}

// 15B5h: the text bank to its colours; #8 moves the bar's ends meanwhile.
void Mag::fadeTo(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x6F65, 0x1E0);
    fadeStart(W(0x15B4), si, di, 0x10, dx);
    do {
        waitFlag();
        barRight();
        barLeft();
        fadeStep();
    } while (fading());
}

// 15F4h
void Mag::fadeOutText(uint16_t si, uint16_t dx) {
    fadeStart(W(0x15B4), si, 0x90, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
    clearText();
}

// 1626h: the three banks out one after the other, and the music.
void Mag::fadeOutAll() {
    static const uint16_t banks[3][2] = {{0x210, 0xB0}, {0x240, 0xC0}, {0x270, 0xD0}};
    for (auto& b : banks) {
        fadeStart(W(0x15B4), b[0], 0x90, 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(-5);
        } while (fading());
    }
    volume(-100);
}

// 16DBh: the three banks in, the music up.
void Mag::fadeInAll() {
    lineCompare(0x1AC);
    SW(0x6F65, 0x1AC);
    const uint16_t banks[3][3] = {{0x210, 0xB0, W(0x6F68)}, {0x240, 0xC0, W(0x6F6A)}, {0x270, 0xD0, W(0x6F6C)}};
    for (auto& b : banks) {
        fadeStart(W(0x15B4), b[0], (uint16_t)(0x30 * (uint8_t)b[2]), 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(10);
        } while (fading());
    }
    volume(0xFF);
}

// 17B9h
void Mag::volume(int16_t bx) {
    int16_t v = (int16_t)(W(0x748A) + bx);
    if (v <= 0) v = 0;
    else if (v >= 0xFF) v = 0xFF;
    SW(0x748A, (uint16_t)v);
    if (cs_[0x1F34] != 0xFF) host_.setMusicVolume(v);
}

// ---------------------------------------------------------- scrollbar ---
// The bar under the text: ELEVATOR sprites at 7D0h + column, its ends at
// DS:6F5Bh (left) and DS:6F59h (right), moving a column a frame towards
// DS:6F5Fh and DS:6F5Dh.

// 1806h: the ends for screen DS:6F61h of DS:6F63h (lists, single pages).
void Mag::barCalcList() {
    const uint16_t bx = W(0x6F63);
    if (!bx) return;   // DIV by 0 (the original would stop)
    SW(0x6F5F, (uint16_t)((uint32_t)(W(0x6F61) - 1) * 0x4F / bx));
    SW(0x6F5D, (uint16_t)((uint32_t)W(0x6F61) * 0x4F / bx - 1));
}

// 182Bh: the same for articles: the right end only, the left at 0.
void Mag::barCalcPage() {
    const uint16_t bx = (uint16_t)(W(0x6F63) - 1);
    SW(0x6F5F, 0);
    if (!bx) return;   // DIV by 0 for a one-page article (the original would stop)
    SW(0x6F5D, (uint16_t)((uint32_t)W(0x6F61) * 0x4E / bx));
}

// 184Dh
void Mag::barInit() {
    SW(0x6F59, 1);
    SW(0x6F5B, 0);
    sprite(W(0x15EB), 0x10, 0x7D1);
    sprite(W(0x15EB), 8, 0x7D0);
}

// 1882h
void Mag::barRight() {
    uint16_t bx = W(0x6F59);
    const uint16_t ax = W(0x6F5D);
    if (bx < ax) {
        bx++;
    } else if (bx > ax) {
        barErase((uint16_t)(bx + 1));
        bx = (uint16_t)(bx - 1);
    } else {
        return;
    }
    SW(0x6F59, bx);
    sprite(W(0x15EB), 0x10, (uint16_t)(0x7D0 + bx));
}

// 18B9h
void Mag::barLeft() {
    uint16_t bx = W(0x6F5B);
    const uint16_t ax = W(0x6F5F);
    if (bx < ax) {
        barErase(bx);
        bx++;
    } else if (bx > ax) {
        bx--;
    } else {
        return;
    }
    SW(0x6F5B, bx);
    sprite(W(0x15EB), 8, (uint16_t)(0x7D0 + bx));
}

// 18EBh
void Mag::barErase(uint16_t bx) { sprite(W(0x15EB), 0x18, (uint16_t)(0x7D0 + bx)); }

// --------------------------------------------------------------- text ---
// CS:18FFh rows, 1901h the first row's offset, 1903h the text's stride
// from a row to the next, 1905h the bytes skipped between rows, 1907h the
// blank lines between rows (for 19E1h/1B25h), 1909h the font, 190Bh the
// text. Characters are 16 lines, drawn in plane 3 only.

// 190Dh: one column of the text area at DI, from text column BX.
void Mag::drawColumn(uint32_t di, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    di = (uint16_t)(di + CW(0x1901));
    for (uint16_t cx = CW(0x18FF); cx; cx--) {
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x190B), bx) << 4);
        for (int k = 0; k < 16; k++) {
            vr(di);
            vw(di, rb(CW(0x1909), si++));
            di = (uint16_t)(di + 0x50);
        }
        di = (uint16_t)(di + CW(0x1905));
        bx = (uint16_t)(bx + CW(0x1903));
    }
}

// The rows of 19E1h and 1B25h: as 190Dh, the blank lines cleared.
void Mag::textRows(uint32_t& di, uint16_t& bx, bool) {
    for (uint16_t cx = CW(0x18FF); cx; cx--) {
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x190B), bx) << 4);
        for (int k = 0; k < 16; k++) {
            vr(di);
            vw(di, rb(CW(0x1909), si++));
            di = (uint16_t)(di + 0x50);
        }
        for (uint16_t n = CW(0x1907); n; n--) {
            vr(di);
            vw(di, 0);
            di = (uint16_t)(di + 0x50);
        }
        bx = (uint16_t)(bx + CW(0x1903));
    }
    vr(di);
    vw(di, 0);
}

// 19E1h: a column coming in on the right while the area scrolls: the
// text in plane 3, and planes 0-2 of the column moved down a line.
void Mag::scrollRight(uint32_t di0, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    uint32_t di = (uint16_t)(di0 + CW(0x1901));
    vr(di - 0x50);
    vw(di - 0x50, 0);
    vr(di - 0xA0);
    vw(di - 0xA0, 0);
    textRows(di, bx, true);
    writeMode(1);
    sq(2, 7);
    di = (uint16_t)(di0 + 0x5410);
    for (int cx = 0; cx < 0x10F; cx++) {
        vr(di - 0x50);
        vw(di, 0);
        di = (uint16_t)(di - 0x50);
    }
    writeMode(0);
    vw(di, 0);
}

// 1B25h: the same on the left, planes 0-2 moved up a line.
void Mag::scrollLeft(uint32_t di0, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    uint32_t di = (uint16_t)(di0 + CW(0x1901));
    vr(di - 0x50);
    vw(di - 0x50, 0);
    textRows(di, bx, false);
    writeMode(1);
    sq(2, 7);
    di = di0;
    for (int cx = 0; cx < 0x10F; cx++) {
        vr(di);
        vw(di - 0x50, 0);
        di = (uint16_t)(di + 0x50);
    }
    writeMode(0);
    vw(di, 0);
}

// 1CE9h: the lists' text in the data segment (DS:164Fh, 4AFFh bytes) made
// font indices.
void Mag::textToFont() {
    for (uint16_t i = 0; i < 0x4AFF; i++) ds_[0x164F + i] = (uint8_t)(ds_[0x164F + i] - 0x20);
}

// 1C59h: F1-F4: everything out, the other module, everything in.
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

// 1D10h: plane by plane (or one pass), write mode 0. #8's loop runs eight
// times (the shifted mask goes on through 10h-80h, which select no plane);
// for a one-pass sprite AL goes to the GC index instead.
void Mag::sprite(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x1D04, di);
    const uint16_t h = rw(s, si + 2u);
    CSW(0x1D08, h);
    uint16_t cx = rw(s, si);
    const uint16_t skip = rw(s, si + 4u);
    CSW(0x1D0A, skip);
    uint32_t src = rw(s, si + 6u);
    gc(8, 0xFF);
    uint16_t ax;
    uint16_t port;
    if (cx & 0x8000) {
        CSW(0x1D06, cx & 0x7FFF);
        ax = 0x0108;
        port = 0x3CE;
    } else {
        CSW(0x1D06, cx);
        gc(3, 0);
        gc(1, 0);
        writeMode(0);
        vga_.out(0x3C4, 2);
        ax = 0x101;
        port = 0x3C5;
    }
    for (;;) {
        vga_.out(port, (uint8_t)ax);
        uint32_t d = CW(0x1D04);
        for (uint16_t row = CW(0x1D08); row; row--) {
            for (uint16_t n = CW(0x1D06); n; n--) vw(d++, rb(s, src++));
            d += skip;
        }
        const bool carry = ax & 0x8000;
        ax = (uint16_t)(ax << 1);
        if (carry) break;
    }
}

// 1E29h: one pass through the latches with the settings the caller made.
void Mag::spriteLatched(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u);
    const uint16_t w = rw(s, si) & 0x7FFF;
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    CSW(0x1D04, di);
    CSW(0x1D06, w);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(d);
            vw(d++, rb(s, src++));
        }
        d += skip;
    }
}

// 1E60h: puts a sprite's planes in video memory past the screen (at
// CS:1D0Ch, from ABE0h on) and makes its data offset point there.
void Mag::uploadSprite(uint16_t s, uint16_t si) {
    const uint16_t n = (uint16_t)(rw(s, si + 2u) * rw(s, si));
    CSW(0x1D06, n);
    uint32_t src = rw(s, si + 6u);
    const uint16_t at = CW(0x1D0C);
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
        di = CW(0x1D0C);
        for (uint16_t k = 0; k < n; k++) vw(di++, rb(s, src++));
        const bool carry = ax & 0x8000;
        ax = (uint16_t)(ax << 1);
        if (carry) break;
    }
    CSW(0x1D0C, (uint16_t)di);
}

// 1EC9h: an uploaded sprite copied in video memory through the latches.
void Mag::copySprite(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u), w = rw(s, si);
    CSW(0x1D06, w);
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
            vr(src++);
            vw(d++, 0);
        }
        d += skip;
    }
}

// ------------------------------------------------------------- the VGA ---

void Mag::installTimer() { raster_ = true; }
void Mag::removeTimer() { raster_ = false; }

// 2232h: palette registers 0-15 straight, colour select for bits 4-5.
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

// 2270h: line compare, the bottom panel's top.
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

// 22C1h
void Mag::startAddress(uint16_t cx) {
    vga_.outw(0x3D4, (uint16_t)(0x0C | (cx & 0xFF00)));
    vga_.outw(0x3D4, (uint16_t)(0x0D | (cx & 0xFF) << 8));
}

// 22E6h: a fade of CX colours from DAC entry DX: the bytes at s:SI move
// towards those at s:DI by 3 per step.
void Mag::fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx) {
    CSW(0x22D4, (uint16_t)(cx * 3));
    CSW(0x22D0, dx);
    CSW(0x22E2, di);
    CSW(0x22E0, si);
    CSW(0x22E4, s);
    cs_[0x22CF] = 0xFF;
}

// 230Ch: one step, and the colours out to the DAC.
void Mag::fadeStep() {
    const uint16_t s = CW(0x22E4);
    uint16_t si = CW(0x22E0), di = CW(0x22E2);
    const int8_t bl = 3;
    uint8_t bh = 0;
    for (uint16_t cx = CW(0x22D4); cx; cx--, si++, di++) {
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
    cs_[0x22CF] = bh;
    vga_.out(0x3C8, (uint8_t)CW(0x22D0));
    si = CW(0x22E0);
    for (uint16_t n = CW(0x22D4) / 3; n; n--)
        for (int k = 0; k < 3; k++) vga_.out(0x3C9, rb(s, si++));
}

// 283Bh
void Mag::setDac256(uint16_t s, uint16_t si) {
    vga_.out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, rb(s, si + i));
}

// ------------------------------------------------------------ the mouse ---

void Mag::mouseInit() {      // 2899h: the driver is there
    B(0x73A1) = 0xFF;
    mouseSetup();
}

void Mag::mouseSetup() {     // 28CAh
    if (B(0x73A1)) {
        uint16_t bx = 0, cx = 0, dx = W(0x73B3);
        int33(7, bx, cx, dx);
        cx = 0, dx = W(0x73B5);
        int33(8, bx, cx, dx);
    }
    SW(0x73A6, W(0x73A2) >> 1);
    SW(0x73A8, W(0x73A4) >> 1);
    uint16_t bx = 0, cx = W(0x73A6), dx = W(0x73A8);
    int33(4, bx, cx, dx);
}

// 295Bh: which rectangle of the table at DS:73B9h the cursor is in.
void Mag::hotspot() {
    const uint16_t s = W(0x73B7);
    uint16_t si = W(0x73B9);
    const uint16_t count = rw(s, si);
    si += 2;
    uint8_t al = 0xFF;
    for (uint16_t cx = count; cx; cx--, si += 8) {
        const int16_t x = (int16_t)W(0x73A6), y = (int16_t)W(0x73A8);
        if (x < (int16_t)rw(s, si) || y < (int16_t)rw(s, si + 2u) || x > (int16_t)rw(s, si + 4u) ||
            y > (int16_t)rw(s, si + 6u))
            continue;
        al = (uint8_t)(count - cx);
        break;
    }
    B(0x73AF) = al;
}

// 29ACh: mouse and keys into DS:73AEh-73CAh.
void Mag::input() {
    cs_[0x2BBF] = cs_[0x2BBE];
    B(0x73AE) = 0;
    B(0x73AF) = 0xFF;
    B(0x73C7) = B(0x73C6) = B(0x73C9) = B(0x73C8) = B(0x73CA) = 0;
    if (B(0x73A1)) {
        uint16_t bx = 0, cx = 0, dx = 0;
        int33(3, bx, cx, dx);
        B(0x73AE) = (uint8_t)bx;
        const uint16_t x = (uint16_t)((uint32_t)W(0x73A2) * cx / W(0x73B3));
        const uint16_t y = (uint16_t)((uint32_t)W(0x73A4) * dx / W(0x73B5));
        if (x != W(0x73A6) || y != W(0x73A8)) {
            if (B(0x73C5) != 0xFF) cs_[0x2BBE] = 0;
            B(0x73C5) = 0;
            SW(0x73A6, x);
            SW(0x73A8, y);
        }
    }
    const uint8_t al = cs_[0x2BBD];
    cs_[0x2BBD] = 0;
    bool done = false;
    if (cs_[0x1F34] != 0xFF) {
        static const uint16_t tunes[4] = {0x2, 0xB, 0x14, 0x1D};   // "data.001" ...
        if (al >= 0x3B && al <= 0x3E) {             // F1-F4
            const uint8_t n = (uint8_t)(al - 0x3A);
            if (B(0x2F) != n) {
                B(0x2F) = n;
                switchMusic(tunes[n - 1]);
            }
            done = true;
        } else if (al == 0x43) {                    // F9: music off/on
            int16_t bx;
            if (B(0x2F) != 0xFF) bx = (int16_t)0xFF01, B(0x2F) = 0xFF;
            else bx = 0xFF, B(0x2F) = 0xFE;
            volume(bx);
            done = true;
        }
    }
    if (!done) {
        switch (al) {
        case 0x19:                                  // P
            B(0x73CA) = 0xFF, B(0x6F87) = 0, B(0x6F86) = 0xFF;
            break;
        case 0x21:                                  // F
            B(0x73CA) = 0xFF, B(0x6F87) = 0xFF, B(0x6F86) = 0;
            break;
        case 0x50:                                  // Down
            cs_[0x2BBE] = 0xFF;
            B(0x73C8) = 0xFF;
            if (W(0x73D1) < (uint16_t)(W(0x73D3) - 1)) SW(0x73D1, (uint16_t)(W(0x73D1) + 1));
            break;
        case 0x48:                                  // Up
            cs_[0x2BBE] = 0xFF;
            B(0x73C9) = 0xFF;
            if (W(0x73D1)) SW(0x73D1, (uint16_t)(W(0x73D1) - 1));
            break;
        case 0x4B:                                  // Left
            cs_[0x2BBE] = 0xFF;
            B(0x73C7) = 0xFF;
            break;
        case 0x4D:                                  // Right
            cs_[0x2BBE] = 0xFF;
            B(0x73C6) = 0xFF;
            break;
        case 0x39:
        case 0x1C:
        case 0x12:                                  // Space, Enter, E
            cs_[0x2BBE] = 0xFF;
            B(0x73AE) |= 1;
            break;
        case 0x01:                                  // Esc
            cs_[0x2BBE] = 0xFF;
            B(0x73AE) |= 2;
            break;
        }
    }
    hotspot();
    cursor();
}

// 2BFBh: the 3x16 bytes under the cursor to A000:FFCFh.
void Mag::saveUnderCursor(uint16_t di) {
    if (B(0x73A1) != 0xFF) return;
    uint32_t si = di, d = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(si, d);
        si += 0x4D;
    }
}

// 2C30h
void Mag::restoreUnderCursor() {
    if (B(0x73A1) != 0xFF) return;
    if (B(0x73BD) != 0xFF) {
        B(0x73BD) = 0xFF;
        return;
    }
    uint32_t d = W(0x6F42), si = 0xFFCF;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 3; k++) movsbVram(si, d);
        d += 0x4D;
    }
}

// 2C7Bh: the main menu's highlighted entry follows the mouse or the keys.
void Mag::mainHighlight() {
    if (B(0x73A1) == 0xFF && cs_[0x2BBE] != 0xFF) {
        if (B(0x73AF) == 0xFF) return;
        SW(0x73D1, B(0x73AF));
    }
    if (B(0x73CC) != 0xFF) {
        if (W(0x73D1) == W(0x73CD)) return;
        toggleItem(W(0x73CD));
    }
    B(0x73CC) = 0;
    SW(0x73CD, W(0x73D1));
    toggleItem(W(0x73D1));
}

// 2CCAh: the same for the rows of a list.
void Mag::menuHighlight() {
    if (B(0x73A1) == 0xFF && cs_[0x2BBE] != 0xFF) {
        uint16_t ax = W(0x73A8);
        if (ax <= 0xD) ax = 0;
        else if (ax >= 0xFA) ax = 0xB;
        else ax = (uint16_t)(uint8_t)((ax - 0xD) / 0x14);
        SW(0x73D1, ax);
    }
    if (B(0x73CC) != 0xFF) {
        if (W(0x73D1) == W(0x73CF)) return;
        xorRow(W(0x73CF));
    }
    B(0x73CC) = 0;
    SW(0x73CF, W(0x73D1));
    xorRow(W(0x73D1));
}

// 2D3Ah: the mouse cursor, after the highlight has followed it.
void Mag::cursor() {
    const uint16_t y = W(0x73A8);
    SW(0x73C0, y);
    SW(0x73BE, W(0x73A6));
    const uint16_t di = (uint16_t)(0x50 * y + (W(0x73A6) >> 3) + W(0x6E7B) + W(0x73BB));
    restoreUnderCursor();
    SW(0x6F42, di);
    if (B(0x73CB) == 0) mainHighlight();
    else if (B(0x73CB) == 1) menuHighlight();
    if (B(0x73A1) != 0xFF) return;
    saveUnderCursor(W(0x6F42));
    if (cs_[0x2BBE] == 0xFF) return;
    // MOUSE.SPR's mask in black, then its shape in white, write mode 3
    const uint16_t si = (uint16_t)(((W(0x73A6) & 7) << 4) + 8);
    sq(2, 0xF);
    gc(8, 0xFF);
    writeMode(3);
    gc(0, 0);
    gc(1, 0xF);
    gc(3, 0);
    spriteLatched(W(0x15DC), si, W(0x6F42));
    gc(0, 0xF);
    spriteLatched(W(0x15DC), (uint16_t)(si + 8), W(0x6F42));
}

// 2E12h: list row DI inverted: plane 3 of its 18 lines XORed with 1s
// (set/reset in plane 3, the latches XORed).
void Mag::xorRow(uint16_t di) {
    const uint32_t d = (uint16_t)(0x640 * di + 0x4240 + W(0x6E7B) - 0x50);
    sq(2, 8);
    writeMode(0);
    gc(0, 8);
    gc(1, 8);
    gc(8, 0xFF);
    gc(3, 0x18);
    for (uint32_t i = 0; i < 0x5A0; i++) {
        const uint8_t v = vr(d + i);
        vw(d + i, v);
    }
}

// 2E83h: main menu entry DI (TITLES sprite DI) XORed in planes 0-3.
void Mag::toggleItem(uint16_t di) {
    const uint16_t si2 = (uint16_t)(di << 1);
    const uint16_t at = (uint16_t)(CW(0x2E6F + si2) + CW(0x2E79 + si2));
    vga_.outw(0x3C4, 0x0F02);
    vga_.outw(0x3CE, 0xFF08);
    writeMode(3);
    vga_.outw(0x3CE, 0x0F00);
    vga_.outw(0x3CE, 0x0F01);
    vga_.outw(0x3CE, 0x1803);
    spriteLatched(W(0x161F), (uint16_t)(si2 * 4 + 8), at);
}

// 2EE0h: the driver's position from the program's.
void Mag::mouseSetPos() {
    if (B(0x73A1) != 0xFF) return;
    B(0x73C5) = 0xFF;
    uint16_t cx = (uint16_t)((uint32_t)W(0x73B3) * W(0x73A6) / W(0x73A2));
    uint16_t dx = (uint16_t)((uint32_t)W(0x73B5) * W(0x73A8) / W(0x73A4));
    uint16_t bx = 0;
    int33(4, bx, cx, dx);
}

}  // namespace imp
