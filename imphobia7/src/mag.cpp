#include "mag.h"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <stdexcept>

namespace imp {

namespace {
constexpr uint32_t kImageDS = 0x8F70;   // DS (08F7h) in the load image
}

Mag::Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat)
    : vga_(vga), host_(host), dat_(std::move(dat)) {
    cs_.assign(0x10000, 0);
    ds_.assign(0x10000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0x10000), cs_.begin());
    if (image.size() > kImageDS)
        std::copy(image.begin() + kImageDS, image.begin() + std::min<size_t>(image.size(), kImageDS + 0x10000),
                  ds_.begin());
    // NFO7.DAT's directory, in the data segment (DS:07D6h points at it):
    // 13-byte names, a 32-bit offset and a 16-bit size, not in the file's
    // order. It has no end marker (the resource names follow it); 2DDFh
    // looks names up from the start and stops at a zero byte, so the first
    // match wins.
    for (uint32_t p = W(0x7D6); p + 19 <= ds_.size() && ds_[p]; p += 19) {
        std::string n;
        for (int i = 0; i < 13 && ds_[p + i]; i++) n += (char)std::toupper((unsigned char)ds_[p + i]);
        uint32_t off = 0;
        std::memcpy(&off, &ds_[p + 13], 4);
        const uint32_t size = (uint32_t)(ds_[p + 17] | ds_[p + 18] << 8);
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

// 2D66h gives the size, the program allocates (size >> 4) + 1 paragraphs,
// 2D6Fh reads the file there.
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
    while (cs_[0x237C] != 0xFF) host_.waitFrame();
    cs_[0x237C] = 0;
}

void Mag::waitRetrace() { host_.waitFrame(); }

// ------------------------------------------------- the timer, for the host ---

std::vector<Vga::LineWrite> Mag::rasterWrites() const {
    // #7's handler: state C (2520h) sets the top's bank before the retrace,
    // waits for its end and programs 19B4h PIT ticks: state A (23ABh) comes
    // at line 140, and at the start of each of the next lines writes the
    // CRTC offset three times, then 28h and the middle's bank (238Ch); it
    // programs 295Eh ticks: state B (24EBh) at line 424 sets the bottom's
    // bank and offset 28h, and programs 8C4h ticks to state C. (With a
    // compatibility mode, state A waited by counted reads of 3DAh instead
    // of for the lines; the port has none.)
    std::vector<Vga::LineWrite> w;
    for (int i = 0; i < 3; i++) w.push_back({141 + i, Vga::LineWrite::Crtc, 0x13, cs_[0x2388 + i]});
    w.push_back({144, Vga::LineWrite::Crtc, 0x13, 0x28});
    w.push_back({144, Vga::LineWrite::Ac, 0x14, cs_[0x238C]});
    w.push_back({424, Vga::LineWrite::Ac, 0x14, cs_[0x238D]});
    w.push_back({424, Vga::LineWrite::Crtc, 0x13, 0x28});
    return w;
}

void Mag::endOfFrame() {
    if (raster_) {
        // state C (2520h): top colour bank, frame flag (CS:237Ch)
        vga_.ac[0x14] = cs_[0x238B];
        vga_.crtc[0x13] = 0x28;
        cs_[0x237C] = 0xFF;
        // the keyboard handler (2B78h) keeps the last scancode
        if (!keys_.empty()) {
            cs_[0x2B48] = keys_.front();
            keys_.erase(keys_.begin());
        }
    }
}

void Mag::mouse(int x, int y, int buttons, bool moved) {
    mouse_.buttons = buttons;
    if (!moved) return;
    // The program scales the driver's position (DS:4BEAh * x / DS:4BFBh,
    // DS:4BECh * y / DS:4BFDh); set the driver so that the cursor lands
    // under the pointer (its row shows at about line 150 + y).
    const int sx = W(0x4BEA) ? x * W(0x4BFB) / W(0x4BEA) : x;
    const int py = y - 150;
    const int sy = W(0x4BEC) ? py * W(0x4BFD) / W(0x4BEC) : py;
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

// 0244h: from the start to the main menu.
void Mag::startup() {
    // What 0244h-038Ah leaves: sound on (the port plays the tunes), no
    // compatibility mode.
    cs_[0x2385] = 0;
    cs_[0x2393] = 0;

    vga_.setMode(0x12);
    setDac256(kDS, 0x4800);
    setupAttributes();
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);

    // 03E4h: the cover, PLANE1.VGA-PLANE4.VGA, one plane each (the last
    // with the 16 colours after it), faded in from the DAC table, held 140
    // retraces, faded to black.
    static const uint16_t planes[4] = {0x107A, 0x1085, 0x1090, 0x109B};
    for (int k = 0; k < 4; k++) {
        sq(2, (uint8_t)(1 << k));
        uint32_t size;
        const uint8_t* p = resource(str(planes[k]), size);
        SW(0x10A6, alloc((size >> 4) + 1));
        auto& buf = seg(W(0x10A6));
        std::copy(p, p + size, buf.begin());
        logoPlane();
        if (k == 3)
            for (int i = 0; i < 0x30; i++) ds_[0x47D0 + i] = buf[0x9600 + i];
    }
    sq(2, 0xF);
    fadeStart(kDS, 0x4800, 0x47D0, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    // 0551h: 258Ch measures the frame (the counts are then set to 19B4h,
    // 295Eh and 8C4h); volume to full
    SW(0x4CC0, 0xFF);
    CSW(0x2386, 0x23AB);
    SW(0x4799, alloc((0x4E20 >> 4) + 1));
    SW(0x479D, alloc((0x4E20 >> 4) + 1));
    SW(0x100D, loadResource(str(0x1002)));   // SELECT.PAL
    SW(0x101B, loadResource(str(0x100F)));   // ARTFONT.SPR
    SW(0x1029, loadResource(str(0x101D)));   // READFNT.SPR
    SW(0x1035, loadResource(str(0x102B)));   // MOUSE.SPR
    SW(0x1044, loadResource(str(0x1037)));   // ELEVATOR.SPR
    SW(0x105D, loadResource(str(0x1054)));   // BACK.SPR
    SW(0x1078, loadResource(str(0x106D)));   // TITLES.SPR
    SW(0x1052, loadResource(str(0x1046)));   // DECORS1.SPR
    std::fill(ds_.begin() + 0x47D0, ds_.begin() + 0x4800, 0);
    for (int i = 0; i < 0x8C; i++) waitRetrace();
    fadeStart(kDS, 0x4800, 0x47D0, 0x10, 0);
    do {
        waitRetrace();
        fadeStep();
    } while (fading());
    clearVram();

    textToFont();
    mouseInit();
    lineCompare(0x1E0);
    startAddress(0xFF0);
    SW(0x47BB, 0);
    SW(0x47BD, 1);
    SW(0x47BF, 7);
    cs_[0x238B] = 0x0B;
    cs_[0x238C] = 0x0C;
    cs_[0x238D] = 0x0D;
    // 07E1h: SELECT.PAL's colours 160-223 black
    std::fill(seg(W(0x100D)).begin() + 0x1E0, seg(W(0x100D)).begin() + 0x2A0, 0);
    sprite(W(0x1052), 8, 0x1E00);
    sprite(W(0x1052), 0x10, 0x1030);
    CSW(0x206B, 0xA780);
    uploadSprite(W(0x1052), 0x18);
    SW(0x106B, loadResource(str(0x105F)));   // DECORS2.SPR
    uploadSprite(W(0x106B), 8);
    uploadSprite(W(0x106B), 0x10);
    if (B(0x4BE9) == 0xFF) mouseSetup();
    host_.playModule(str(0x2));             // "data.001", F1
    SW(0x4CC0, 0xFF);
    waitRetrace();                          // 2665h, before the timer goes in
    installTimer();
}

// 08FFh: the main menu. The cursor's height (DS:4BF0h) picks the entry,
// 15h lines each, the keys moving it; Enter opens what the hotspot table
// at DS:4769h has under the cursor.
void Mag::mainMenu() {
    for (;;) {
        cs_[0x2388] = cs_[0x2389] = cs_[0x238A] = 0x28;
        SW(0x46D1, 0);
        SW(0x46CD, 0);
        drawBackground();
        SW(0x47BB, 0);
        SW(0x47BD, 1);
        SW(0x47BF, 7);
        copySprite(W(0x106B), 8, 0);
        copySprite(W(0x106B), 0x10, 0x4577);
        if (B(0x47CE) == 0xFF) {
            B(0x47CE) = 0;
            fadeInAll();
        } else {
            fadeInPanel(0x240, 0xC0, 0x30);
        }
        SW(0x4BEA, 0x26F);
        SW(0x4BEC, 0xF2);
        SW(0x4C01, 0x4769);
        SW(0x4BFF, kDS);
        SW(0x4C03, 0x6040);
        cs_[0x2B49] = 0;
        B(0x46CC) = 0xFF;
        SW(0x46D7, 0);
        SW(0x4BF0, 0);
        input();
        clampMouse();
        input();
        if (W(0x4BF0) >= 0x2F) {
            SW(0x4BF0, 0x2F);
            driverY(0x2F);
        }
        {
            const uint16_t ax = (uint16_t)(uint8_t)(W(0x4BF0) / 0x15);
            SW(0x4793, ax);
            toggleItem(ax);
        }
        SW(0x4795, 0x5F14);
        saveUnderCursor(0x5F14);
        uint8_t sel;
        for (;;) {                                  // 0A3Eh
            waitFlag();
            input();
            if (cs_[0x2B49] == 0xFF) clampMouse();
            if ((int16_t)W(0x4BF0) >= 0x66) {
                SW(0x4BF0, 0x66);
                driverY(0x66);
            }
            if (B(0x4BF6) & 1) {
                sel = hotspot();
                break;
            }
            if (B(0x4BF6) & 2) return;
            if (hotspot() == 0xFF) continue;
            moveHighlight((uint16_t)(uint8_t)(W(0x4BF0) / 0x15), true);
        }
        switch (sel) {                              // 0B30h
        case 2:                                     // ARTICLES
            B(0x47BA) = 0xFF;
            SW(0x47C1, 0x10A8);
            SW(0x47C8, 0x55);
            SW(0x47C4, 0x1680);
            SW(0x47C6, 7);
            B(0x47C3) = 0xFF;
            SW(0x47CA, 0x3E64);
            fadeOutPanel(0x210, 0xB0, 0x60);
            list();
            break;
        case 1:                                     // CHARTS
            B(0x47BA) = 0xFF;
            SW(0x47C1, 0x36C8);
            SW(0x47C8, 0xB);
            SW(0x47C4, 0);
            SW(0x47C6, 1);
            B(0x47C3) = 0xFF;
            SW(0x47CA, 0x4584);
            fadeOutPanel(0x210, 0xB0, 0x60);
            list();
            break;
        case 3:                                     // INTERVIEWS
            B(0x47BA) = 0xFF;
            SW(0x47C1, 0x2EA8);
            SW(0x47C8, 0x17);
            SW(0x47C4, 0x3C0);
            SW(0x47C6, 2);
            B(0x47C3) = 0xFF;
            SW(0x47CA, 0x4398);
            fadeOutPanel(0x210, 0xB0, 0x60);
            list();
            break;
        default: {                                  // 0BFCh: EDITO (0), else CREDITS
            const uint16_t entry = sel == 0 ? 0 : 1;
            fadeOutPanel(0x210, 0xB0, 0x60);
            B(0x47CF) = 0xFF;
            page((uint16_t)(entry * 0xE + 0x3E48));
            fadeOutPanel(0x210, 0xB0, 0x180);
            break;
        }
        }
    }
}

// 0AD6h (main menu) / 10B5h (lists): the highlight to entry BX, the cursor
// redrawn over it; the same entry: only the cursor.
void Mag::moveHighlight(uint16_t bx, bool menu) {
    if (bx == W(0x4793)) {
        cursor();
        return;
    }
    restoreUnderCursor();
    const uint16_t old = W(0x4793);
    SW(0x4793, bx);
    if (menu) toggleItem(old), toggleItem(W(0x4793));
    else xorRow(old), xorRow(W(0x4793));
    saveUnderCursor(W(0x4795));
    SW(0x4C09, 0xFFFF);
    cursor();
    SW(0x4C09, 0);
}

// 09F7h: the mouse driver's y for cursor height Y (with a mouse).
void Mag::driverY(uint16_t y) {
    if (B(0x4BE9) != 0xFF) return;
    uint16_t bx = 0, cx = 0, dx = 0;
    int33(3, bx, cx, dx);
    dx = (uint16_t)((uint32_t)y * W(0x4BFD) / W(0x4BEC));
    SW(0x4C05, cx);
    SW(0x4C07, dx);
    int33(4, bx, cx, dx);
}

// 0C44h: the end: the mag fades out, the timer goes, text mode.
void Mag::ending() {
    fadeOutAll();
    removeTimer();
    host_.stopMusic();
    vga_.setMode(3);
}

// ----------------------------------------------------------- clearing ---

// 0784h: the screen's 9600h bytes in all planes (write mode as it is)
void Mag::clearVram() {
    sq(2, 0xF);
    for (uint32_t a = 0; a < 0x9600; a++) vw(a, 0);
}

void Mag::clearText() {      // 0CAEh
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint32_t i = 0; i < 0x2B48 * 2; i++) vw(0x3FC0 + i, 0);
}

// 0CEBh: one plane of the cover, from the buffer.
void Mag::logoPlane() {
    auto& buf = seg(W(0x10A6));
    for (uint32_t i = 0; i < 0x9600; i++) {
        vr(i);
        vw(i, buf[i]);
    }
}

// The three CRTC offsets the timer handler writes on lines 141-143,
// together advancing the address by AX words. #7 writes them inline, in
// two variants: when a list is drawn (0E0Bh) and while scrolling (0F51h,
// 1586h); they differ in the fillers.
void Mag::offsets(uint16_t ax, bool drawing) {
    uint8_t* o = &cs_[0x2388];
    if (ax <= 0xF0) {
        o[0] = (uint8_t)ax;
        if (drawing) o[1] = 0x50, o[2] = 0;
        else o[1] = 0x28, o[2] = 0x28;
    } else if (ax <= 0x1E0) {
        o[0] = 0xF0, o[1] = (uint8_t)(ax - 0xF0), o[2] = 0x50;
    } else {
        o[0] = 0xF0, o[1] = 0xF0, o[2] = (uint8_t)((uint8_t)(ax - 0x1E0) + 0x50);
    }
}

// ------------------------------------------------------------- the lists ---

// 0D2Eh: a section's list: the text at DS:47C1h, 80 columns by 12 rows of
// ARTFONT; a screen is 3C0h bytes of it. The scroll state (DS:46CDh-46D7h)
// is kept at DS:46D9h while an entry is open.
void Mag::list() {
    for (;;) {
        SW(0x47BB, 2);
        SW(0x47BD, 4);
        SW(0x47BF, 7);
        CSW(0x1C84, 0xC);
        CSW(0x1C86, 0x460);
        CSW(0x1C88, 0x50);
        CSW(0x1C8A, 0x140);
        CSW(0x1C8C, 4);
        CSW(0x1C8E, W(0x101B));
        CSW(0x1C90, kDS);
        B(0x46CC) = 0xFF;
        if (B(0x47C3) != 0xFF) {
            std::memcpy(&ds_[0x46CD], &ds_[0x46D9], 12);
        } else {
            std::memset(&ds_[0x46CD], 0, 12);
            SW(0x47B4, 1);
            SW(0x47AA, 2);
            SW(0x47AC, 1);
        }
        SW(0x46D7, 0);
        SW(0x4BEA, 0x26F);
        SW(0x4BEC, 0xE6);
        SW(0x4C01, 0x46E5);
        SW(0x4BFF, kDS);
        SW(0x4C03, 0x4600);
        input();
        SW(0x46CA, W(0x47C4));
        SW(0x47B6, W(0x47C6));
        SW(0x47B2, W(0x47B4));
        barCalcList();
        B(0x47C3) = 0;
        fadeOutText(0x240, 0xC0);
        offsets(W(0x46CD), true);
        drawBackground();
        writeMode(0);
        {
            uint32_t di = (uint16_t)(0x3FC0 + W(0x46D1));
            uint16_t bx = (uint16_t)(W(0x47C1) + W(0x46D3));
            for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
        }
        SW(0x4793, 0);
        if (B(0x47BA) == 0xFF) {
            copySprite(W(0x1052), 0x18, 0);
            fadeInPanel(0x240, 0xC0, 0xC0);
        } else {
            fadeTo(0x240, 0xC0, 0xC0);
        }
        bool settled = true;                        // 0F1Ah
        for (;;) {
            if (settled) {
                settled = false;
                B(0x46CC) = 0xFF;
                clampMouse();
                const uint16_t ax = (uint16_t)(uint8_t)(W(0x4BF0) / 0x14);
                SW(0x4793, ax);
                xorRow(ax);
                SW(0x4795, 0x5F14);
                saveUnderCursor(0x5F14);
                cursor();
            }
            input();                                // 1001h
            if (B(0x4BF6) & 1) {                    // 101Eh: an entry
                const uint16_t ax = (uint16_t)(W(0x46D3) / 0x50 + W(0x4793));
                if (ax <= W(0x47C8)) {
                    SW(0x47B4, W(0x47B2));
                    std::memcpy(&ds_[0x46D9], &ds_[0x46CD], 12);
                    const uint16_t bp = (uint16_t)(ax * 0xE + W(0x47CA));
                    if (ds_[(uint16_t)(bp + 0xD)] != 3) {
                        page(bp);
                        B(0x47BA) = 0;
                        break;                      // to 0D2Eh
                    }
                }
            } else if (B(0x4BF6) & 2) {             // 11C9h: Esc
                fadeOutPanel(0x210, 0xB0, 0x180);
                clearText();
                return;
            }
            // 107Bh
            const uint8_t al = hotspot();
            if (al == 0xD) {                        // 1108h: the right edge
                if ((int16_t)W(0x46D3) >= (int16_t)W(0x46CA)) {
                    if (cs_[0x2B49] == 0xFF) clampMouse();
                    moveHighlight((uint16_t)(uint8_t)(W(0x4BF0) / 0x14), false);
                } else {
                    restoreUnderCursor();
                    xorRow(W(0x4793));
                    B(0x46CC) = 0;
                    SW(0x46D5, 0);
                    SW(0x46C8, 1);
                    SW(0x46CF, (uint16_t)(W(0x46CF) + 0x28));
                    SW(0x46D1, (uint16_t)(W(0x46D1) + 0x50));
                    SW(0x46D3, (uint16_t)(W(0x46D3) + 0x3C0));
                    SW(0x46D7, 1);
                    SW(0x47B2, (uint16_t)(W(0x47B2) + 1));
                    barCalcList();
                }
            } else if (al == 0xC) {                 // 1168h: the left edge
                if (W(0x46D3) == 0) {
                    if (cs_[0x2B49] == 0xFF) clampMouse();
                    moveHighlight((uint16_t)(uint8_t)(W(0x4BF0) / 0x14), false);
                } else {
                    restoreUnderCursor();
                    xorRow(W(0x4793));
                    B(0x46CC) = 0;
                    SW(0x46D5, 0x50);
                    SW(0x46C8, 0xFFFF);
                    SW(0x46CF, (uint16_t)(W(0x46CF) - 0x28));
                    SW(0x46D1, (uint16_t)(W(0x46D1) - 0x50));
                    SW(0x46D3, (uint16_t)(W(0x46D3) - 0x3C0));
                    SW(0x46D7, 2);
                    SW(0x47B2, (uint16_t)(W(0x47B2) - 1));
                    barCalcList();
                }
            } else if (al != 0xFF) {
                moveHighlight((uint16_t)(uint8_t)(W(0x4BF0) / 0x14), false);
            }
            // 0EE4h: a frame; while the screen turns, two more columns
            for (;;) {
                waitFlag();
                barRight();
                barLeft();
                if (B(0x46CC) == 0xFF) break;
                uint16_t ax = W(0x46CD);
                if (ax == W(0x46CF)) {
                    settled = true;
                    break;
                }
                ax = (uint16_t)(ax + W(0x46C8));
                SW(0x46CD, ax);
                offsets(ax, false);
                if (W(0x46C8) != 0xFFFF) {
                    const uint32_t di = (uint16_t)((ax << 1) + 0x400E);
                    SW(0x46D5, (uint16_t)(W(0x46D5) + 2));
                    const uint16_t bx = (uint16_t)(W(0x46D5) + W(0x46D3) + W(0x47C1) - 2);
                    scrollRight(di, bx);
                    scrollRight(di + 1, (uint16_t)(bx + 1));
                } else {
                    const uint32_t di = (uint16_t)(0x3FC0 + (ax << 1));
                    SW(0x46D5, (uint16_t)(W(0x46D5) - 2));
                    const uint16_t bx = (uint16_t)(W(0x46D5) + W(0x46D3) + W(0x47C1));
                    scrollLeft(di, bx);
                    scrollLeft(di + 1, (uint16_t)(bx + 1));
                }
            }
        }
    }
}

// 12AAh: after a turn, the cursor to where the next one would not start:
// the middle, or away from the edge that turned.
void Mag::clampMouse() {
    if (B(0x4BE9) == 0 || cs_[0x2B49] == 0xFF) {        // 1312h
        const uint16_t cx = 0x137;
        SW(0x4BEE, cx);
        if (B(0x4BE9) == 0xFF) {
            SW(0x4C05, (uint16_t)((uint32_t)W(0x4BFB) * cx / W(0x4BEA)));
            SW(0x4C07, (uint16_t)((uint32_t)W(0x4BFD) * W(0x4BF0) / W(0x4BEC)));
            uint16_t bx = 0, x = W(0x4C05), y = W(0x4C07);
            int33(4, bx, x, y);
        }
        return;
    }
    uint16_t bx = 0, cx = 0, dx = 0;
    int33(3, bx, cx, dx);
    if (W(0x46D7) == 1) cx = 0x28A;
    else if (W(0x46D7) == 2) cx = 0x32;
    else cx = 0x15E, dx = 0x96;
    SW(0x4C05, cx);
    SW(0x4C07, dx);
    SW(0x4BEE, (uint16_t)((uint32_t)W(0x4BEA) * cx / W(0x4BFB)));
    SW(0x4BF0, (uint16_t)((uint32_t)W(0x4BEC) * W(0x4C07) / W(0x4BFD)));
    uint16_t x = W(0x4C05), y = W(0x4C07);
    int33(4, bx, x, y);
}

// ------------------------------------------------------------- the pages ---

// 11DCh: unpacks the .BIN read at [479Dh] into [4799h]: a word of lines,
// then each line's characters (minus 20h, so font indices) up to a 0, a
// byte below 20h standing for that many blanks. AL = 1: 80-column lines;
// else 38 columns with a blank column on each side. 15 blank lines after;
// DS:47B6h = the pages.
void Mag::unpack(uint8_t al) {
    cs_[0x11D9] = al;
    cs_[0x11DB] = al == 1 ? 0x50 : 0x26;
    const uint16_t src = W(0x479D), dst = W(0x4799);
    uint32_t si = 0, di = 0;
    auto put = [&](uint8_t v) { wb(dst, di++ & 0xFFFF, v); };
    const uint16_t lines = rw(src, si);
    si += 2;
    SW(0x47B6, (uint16_t)(lines / 0xF + (lines % 0xF ? 1 : 0)));
    for (uint16_t cx = lines; cx; cx--) {
        cs_[0x11DA] = 0;
        if (cs_[0x11D9] != 1) put(0);
        for (;;) {
            const uint8_t c = rb(src, si++ & 0xFFFF);
            if (c >= 0x20) {
                put((uint8_t)(c - 0x20));
                cs_[0x11DA]++;
            } else if (c == 0) {                     // 125Bh
                const uint8_t n = (uint8_t)(cs_[0x11DB] - cs_[0x11DA]);
                for (int k = 0; k < n; k++) put(0);
                break;
            } else {                                 // 124Ch: blanks
                cs_[0x11DA] = (uint8_t)(cs_[0x11DA] + c);
                for (int k = 0; k < c; k++) put(0);
            }
            if (cs_[0x11DA] >= cs_[0x11DB]) break;
        }
        if (cs_[0x11D9] != 1) put(0);
    }
    const uint16_t n = (uint16_t)((uint8_t)(cs_[0x11DB] + 2) * 0xF);
    for (uint16_t k = 0; k < n; k++) put(0);
}

// 128Ch: the .BIN named at DX read into [479Dh].
void Mag::loadFile(uint16_t dx) {
    uint32_t size;
    const uint8_t* p = resource(str(dx), size);
    const uint16_t s = W(0x479D);
    for (uint32_t i = 0; i < size; i++) wb(s, i, p[i]);
}

// 1366h: two 40-column pages of an article side by side.
void Mag::drawPage40() {
    drawBackground();
    cs_[0x2388] = 0, cs_[0x2389] = 0x28, cs_[0x238A] = 0x28;
    writeMode(0);
    uint32_t di = 0x3FC0;
    uint16_t bx = 0;
    for (int cx = 0; cx < 0x28; cx++) drawColumn(di++, bx++);
    bx = 0x258;
    for (int cx = 0; cx < 0x28; cx++) drawColumn(di++, bx++);
}

// 13BCh: an 80-column page.
void Mag::drawPage80() {
    drawBackground();
    cs_[0x2388] = cs_[0x2389] = cs_[0x238A] = 0x28;
    writeMode(0);
    uint32_t di = 0x3FC0;
    uint16_t bx = 0;
    for (int cx = 0; cx < 0x50; cx++) drawColumn(di++, bx++);
}

// 13FFh: the entry at DX: an article (type 1, 142Ah) in 40-column pages,
// or a one-screen text (1726h). The hotspots at the edges (or Left/Right,
// which push the cursor there) turn the pages; Esc returns.
void Mag::page(uint16_t dx) {
    const uint8_t type = ds_[(uint16_t)(dx + 0xD)];
    if (B(0x47CF) != 0xFF) fadeOutText(0x240, 0xC0);
    clearText();
    loadFile(dx);
    if (type != 1) {
        // 1726h: one 80-column screen
        SW(0x4BEA, 0x26F);
        SW(0x4BEC, 0xFC);
        SW(0x4C01, 0x4757);
        SW(0x4C03, 0x3FC0);
        CSW(0x1C84, 0xF);
        CSW(0x1C86, 0x460);
        CSW(0x1C88, 0x50);
        CSW(0x1C8A, 0);
        CSW(0x1C8C, 0);
        CSW(0x1C8E, W(0x1029));
        CSW(0x1C90, W(0x4799));
        SW(0x46D3, 0);
        SW(0x46CA, 0);
        SW(0x46CF, 0);
        B(0x46CC) = 0xFF;
        SW(0x46CD, 0);
        SW(0x46D1, 0);
        SW(0x46D7, 0);
        SW(0x47B6, 1);
        SW(0x47B2, 1);
        unpack(1);
        barCalcList();
        drawPage80();
        fadeTo(0x240, 0xC0, 0xC0);
        B(0x46CC) = 0xFF;                            // 17F2h
        clampMouse();
        SW(0x4795, 0x5F14);
        saveUnderCursor(0x5F14);
        cursor();
        for (;;) {
            input();                                 // 180Eh
            if (B(0x4BF6) & 2) return;
            cursor();
            waitFlag();                              // 17D3h
            barRight();
            barLeft();
        }
    }
    // 142Ah: an article
    SW(0x47BB, 2);
    SW(0x47BD, 4);
    SW(0x47BF, 7);
    SW(0x4BEA, 0x26F);
    SW(0x4BEC, 0xFB);
    SW(0x4C01, 0x4757);
    SW(0x4C03, 0x3FC0);
    CSW(0x1C84, 0xF);
    CSW(0x1C86, 0x460);
    CSW(0x1C88, 0x28);
    CSW(0x1C8A, 0);
    CSW(0x1C8C, 0);
    CSW(0x1C8E, W(0x1029));
    CSW(0x1C90, W(0x4799));
    SW(0x46D3, 0);
    SW(0x46CF, 0);
    B(0x46CC) = 0xFF;
    SW(0x46CD, 0);
    SW(0x46D1, 0);
    SW(0x46D7, 0);
    SW(0x47B2, 1);
    unpack(2);
    SW(0x47B6, (uint16_t)(W(0x47B6) - 1));
    SW(0x46CA, (uint16_t)(W(0x47B6) * 0x258));
    barCalcPage();
    if (B(0x47CF) == 0xFF) {
        B(0x47CF) = 0;
        SW(0x47AA, 2);
        SW(0x47AC, 1);
        drawPage40();
        copySprite(W(0x1052), 0x18, 0);
        fadeInPanel(0x240, 0xC0, 0xC0);
    } else {
        drawPage40();
        fadeTo(0x240, 0xC0, 0xC0);
    }
    bool settled = true;                             // 1567h
    for (;;) {
        if (settled) {
            settled = false;
            B(0x46CC) = 0xFF;
            clampMouse();
            SW(0x4795, 0x5F14);
            saveUnderCursor(0x5F14);
            cursor();
        }
        input();                                     // 1632h
        if (B(0x4BF6) & 2) return;
        const uint8_t al = hotspot();
        bool stay = true;
        if (al == 1) {                               // 1659h: right
            if ((int16_t)W(0x46D3) < (int16_t)W(0x46CA)) {
                restoreUnderCursor();
                B(0x46CC) = 0;
                SW(0x46D5, 0);
                SW(0x46C8, 1);
                SW(0x46CF, (uint16_t)(W(0x46CF) + 0x14));
                SW(0x46D1, (uint16_t)(W(0x46D1) + 0x28));
                SW(0x46D3, (uint16_t)(W(0x46D3) + 0x258));
                if (W(0x46D7) != 1) SW(0x46D3, (uint16_t)(W(0x46D3) + 0x258));
                SW(0x46D7, 1);
                SW(0x47B2, (uint16_t)(W(0x47B2) + 1));
                barCalcPage();
                stay = false;
            }
        } else if (al == 0) {                        // 16ADh: left
            if ((int16_t)W(0x46D3) > 0) {
                restoreUnderCursor();
                B(0x46CC) = 0;
                SW(0x46D5, 0x28);
                SW(0x46C8, 0xFFFF);
                SW(0x46CF, (uint16_t)(W(0x46CF) - 0x14));
                SW(0x46D1, (uint16_t)(W(0x46D1) - 0x28));
                SW(0x46D3, (uint16_t)(W(0x46D3) - 0x258));
                if (W(0x46D7) != 2) SW(0x46D3, (uint16_t)(W(0x46D3) - 0x258));
                SW(0x46D7, 2);
                SW(0x47B2, (uint16_t)(W(0x47B2) - 1));
                barCalcPage();
                stay = false;
            }
        } else {
            cursor();                                // 1702h
            stay = false;
        }
        if (stay) {                                  // 170Eh: at the last/first page
            if (cs_[0x2B49] == 0xFF) {
                SW(0x46D7, 0);
                clampMouse();
            }
            cursor();
        }
        // 1531h: a frame; while the page turns, two more columns
        for (;;) {
            waitFlag();
            barRight();
            barLeft();
            if (B(0x46CC) == 0xFF) break;
            uint16_t ax = W(0x46CD);
            if (ax == W(0x46CF)) {
                settled = true;
                break;
            }
            ax = (uint16_t)(ax + W(0x46C8));
            SW(0x46CD, ax);
            offsets(ax, false);
            if (W(0x46C8) != 0xFFFF) {
                const uint32_t di = (uint16_t)((ax << 1) + 0x400E);
                const uint16_t bx = (uint16_t)(W(0x46D5) + W(0x46D3));
                scrollRight(di, bx);
                scrollRight(di + 1, (uint16_t)(bx + 1));
                SW(0x46D5, (uint16_t)(W(0x46D5) + 2));
            } else {
                const uint32_t di = (uint16_t)(0x3FC0 + (ax << 1));
                SW(0x46D5, (uint16_t)(W(0x46D5) - 2));
                const uint16_t bx = (uint16_t)(W(0x46D5) + W(0x46D3));
                scrollLeft(di, bx);
                scrollLeft(di + 1, (uint16_t)(bx + 1));
            }
        }
    }
}

// 1822h: the text area's background, twice side by side (BACK.SPR).
void Mag::drawBackground() {
    writeMode(0);
    gc(3, 0);
    sq(2, 0xF);
    gc(8, 0xFF);
    gc(1, 0xF);
    gc(0, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x3FC0 + i, 0);
    for (uint32_t i = 0; i < 0x258 * 2; i++) vw(0x9380 + i, 0);
    sprite(W(0x105D), 8, (uint16_t)(0x3FC0 + W(0x46D1)));
    sprite(W(0x105D), 8, (uint16_t)(0x3FE8 + W(0x46D1)));
}

// ------------------------------------------------------------- fades ---

// 18A6h: the text bank to its colours while the bottom panel slides up.
void Mag::fadeInPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x47B8, 0x1E0);
    fadeStart(W(0x100D), si, di, 0x10, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x47B8) != 0x1AD) {
            SW(0x47B8, (uint16_t)(W(0x47B8) - 5));
            if ((int16_t)W(0x47B8) < 0x1AD) SW(0x47B8, 0x1AD);
            lineCompare(W(0x47B8));
            continue;
        }
        if (!fading()) return;
    }
}

// 1912h: the opposite, the panel sliding down; 32 colours (two banks).
void Mag::fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x47B8, 0x1AD);
    fadeStart(W(0x100D), si, di, 0x20, dx);
    for (;;) {
        waitFlag();
        if (fading()) fadeStep();
        if (W(0x47B8) != 0x1E0) {
            SW(0x47B8, (uint16_t)(W(0x47B8) + 5));
            if (W(0x47B8) >= 0x1E0) SW(0x47B8, 0x1E0);
            lineCompare(W(0x47B8));
            continue;
        }
        if (!fading()) return;
    }
}

// 1977h: the text bank to its colours; the bar's ends move meanwhile.
void Mag::fadeTo(uint16_t si, uint16_t dx, uint16_t di) {
    SW(0x47B8, 0x1E0);
    fadeStart(W(0x100D), si, di, 0x10, dx);
    do {
        waitFlag();
        barRight();
        barLeft();
        fadeStep();
    } while (fading());
}

// 19B6h
void Mag::fadeOutText(uint16_t si, uint16_t dx) {
    fadeStart(W(0x100D), si, 0x1E0, 0x10, dx);
    do {
        waitFlag();
        fadeStep();
    } while (fading());
    clearText();
}

// 19E8h: the three banks out one after the other, and the music. It first
// waits for state A's flag (CS:2392h), in the middle of the frame it is
// called in: no frame passes.
void Mag::fadeOutAll() {
    static const uint16_t banks[3][2] = {{0x210, 0xB0}, {0x240, 0xC0}, {0x270, 0xD0}};
    for (auto& b : banks) {
        fadeStart(W(0x100D), b[0], 0x1E0, 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(-6);
        } while (fading());
    }
    SW(0x4CC0, 0);
    host_.setMusicVolume(0);
}

// 1AB9h: the three banks in, the music up.
void Mag::fadeInAll() {
    lineCompare(0x1AD);
    SW(0x47B8, 0x1AD);
    const uint16_t banks[3][3] = {{0x210, 0xB0, W(0x47BB)}, {0x240, 0xC0, W(0x47BD)}, {0x270, 0xD0, W(0x47BF)}};
    for (auto& b : banks) {
        fadeStart(W(0x100D), b[0], (uint16_t)(0x30 * (uint8_t)b[2]), 0x10, b[1]);
        do {
            waitFlag();
            fadeStep();
            volume(10);
        } while (fading());
    }
    SW(0x4CC0, 0xFF);
    host_.setMusicVolume(0xFF);
}

// 1B9Eh (the SoundBlaster routines read DS:4CC0h)
void Mag::volume(int16_t bx) {
    int16_t v = (int16_t)(W(0x4CC0) + bx);
    if (v <= 0) v = 0;
    else if (v >= 0xFF) v = 0xFF;
    SW(0x4CC0, (uint16_t)v);
    if (cs_[0x2393] != 0xFF) host_.setMusicVolume(v);
}

// ---------------------------------------------------------- scrollbar ---
// The bar under the text: ELEVATOR sprite 16 at 693h + DS:47AAh (right
// end) and sprite 8 at 693h + DS:47ACh (left end), a column a frame
// towards DS:47AEh and DS:47B0h.

// 1BC7h: the ends for screen DS:47B2h of DS:47B6h.
void Mag::barCalcList() {
    const uint16_t bx = W(0x47B6);
    if (!bx) return;   // DIV by 0 (the original would stop)
    SW(0x47B0, (uint16_t)((uint32_t)(W(0x47B2) - 1) * 0x48 / bx));
    SW(0x47AE, (uint16_t)((uint32_t)W(0x47B2) * 0x48 / bx - 1));
}

// 1BECh: the same for articles, the two pages on screen.
void Mag::barCalcPage() {
    const uint16_t bx = (uint16_t)(W(0x47B6) + 1);
    uint16_t ax = (uint16_t)(W(0x47B2) - 1);
    if (bx < ax) ax = (uint16_t)(bx - 1);
    if (!bx) return;
    SW(0x47B0, (uint16_t)((uint32_t)ax * 0x48 / bx));
    ax = (uint16_t)(ax + 2);
    if (ax > bx) ax = bx;
    SW(0x47AE, (uint16_t)((uint32_t)ax * 0x48 / bx - 1));
}

// 1C20h
void Mag::barRight() {
    uint16_t bx = W(0x47AA);
    const uint16_t ax = W(0x47AE);
    if (bx < ax) bx++;
    else if (bx > ax) bx--;
    else return;
    SW(0x47AA, bx);
    sprite(W(0x1044), 0x10, (uint16_t)(0x690 + bx + 3));
}

// 1C52h
void Mag::barLeft() {
    uint16_t bx = W(0x47AC);
    const uint16_t ax = W(0x47B0);
    if (bx < ax) bx++;
    else if (bx > ax) bx--;
    else return;
    SW(0x47AC, bx);
    sprite(W(0x1044), 8, (uint16_t)(0x690 + bx + 3));
}

// --------------------------------------------------------------- text ---
// CS:1C84h rows, 1C86h the first row's offset, 1C88h the text's stride
// from a row to the next, 1C8Ah the bytes skipped between rows, 1C8Ch the
// blank lines between rows (for 1D68h/1EAEh), 1C8Eh the font, 1C90h the
// text. Characters are 16 lines (17 bytes apart in the font), drawn in
// plane 3 only.

// 1C92h: one column of the text area at DI, from text column BX.
void Mag::drawColumn(uint32_t di, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    di = (uint16_t)(di + CW(0x1C86));
    for (uint16_t cx = CW(0x1C84); cx; cx--) {
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x1C90), bx) * 17);   // 17 bytes a character
        for (int k = 0; k < 16; k++) {
            vr(di);
            vw(di, rb(CW(0x1C8E), si++));
            di = (uint16_t)(di + 0x50);
        }
        di = (uint16_t)(di + CW(0x1C8A));
        bx = (uint16_t)(bx + CW(0x1C88));
    }
}

// The rows of 1D68h and 1EAEh: as 1C92h, the blank lines cleared.
void Mag::textRows(uint32_t& di, uint16_t& bx) {
    for (uint16_t cx = CW(0x1C84); cx; cx--) {
        uint32_t si = (uint32_t)(uint16_t)(rb(CW(0x1C90), bx) * 17);   // 17 bytes a character
        for (int k = 0; k < 16; k++) {
            vr(di);
            vw(di, rb(CW(0x1C8E), si++));
            di = (uint16_t)(di + 0x50);
        }
        for (uint16_t n = CW(0x1C8C); n; n--) {
            vr(di);
            vw(di, 0);
            di = (uint16_t)(di + 0x50);
        }
        bx = (uint16_t)(bx + CW(0x1C88));
    }
    vr(di);
    vw(di, 0);
}

// 1D68h: a column coming in on the right while the area scrolls: the
// text in plane 3, and planes 0-2 of the column moved down a line.
void Mag::scrollRight(uint32_t di0, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    uint32_t di = (uint16_t)(di0 + CW(0x1C86));
    vr(di - 0x50);
    vw(di - 0x50, 0);
    vr(di - 0xA0);
    vw(di - 0xA0, 0);
    textRows(di, bx);
    writeMode(1);
    sq(2, 7);
    di = (uint16_t)(di0 + 0x53C0);
    for (int cx = 0; cx < 0x10E; cx++) {
        vr(di - 0x50);
        vw(di, 0);
        di = (uint16_t)(di - 0x50);
    }
    writeMode(0);
    vw(di, 0);
}

// 1EAEh: the same on the left, planes 0-2 moved up a line.
void Mag::scrollLeft(uint32_t di0, uint16_t bx) {
    sq(2, 8);
    writeMode(0);
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    uint32_t di = (uint16_t)(di0 + CW(0x1C86));
    vr(di - 0x50);
    vw(di - 0x50, 0);
    textRows(di, bx);
    writeMode(1);
    sq(2, 7);
    di = di0;
    for (int cx = 0; cx < 0x10E; cx++) {
        vr(di);
        vw(di - 0x50, 0);
        di = (uint16_t)(di + 0x50);
    }
    writeMode(0);
    vw(di, 0);
}

// 202Bh: the lists' text in the data segment (DS:10A8h, 2D9Fh bytes) made
// font indices.
void Mag::textToFont() {
    for (uint16_t i = 0; i < 0x2D9F; i++) ds_[0x10A8 + i] = (uint8_t)(ds_[0x10A8 + i] - 0x20);
}

// 1FE4h: F1-F4: everything out, the other module, everything in.
void Mag::switchMusic(uint16_t dx) {
    fadeOutAll();
    removeTimer();
    host_.stopMusic();
    host_.playModule(str(dx));
    waitRetrace();                           // 2665h
    installTimer();
    fadeInAll();
}

// ------------------------------------------------------------- sprites ---
// A sprite file: a word count, then 8-byte headers (width in bytes | 8000h
// for one pass with the current settings, height, the destination's skip,
// the data's offset), the first at offset 8.

// 206Fh: plane by plane, write mode 0 (or one pass as set).
void Mag::sprite(uint16_t s, uint16_t si, uint16_t di) {
    CSW(0x2065, di);
    const uint16_t h = rw(s, si + 2u);
    uint16_t cx = rw(s, si);
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    gc(8, 0xFF);
    auto pass = [&]() {
        uint32_t d = CW(0x2065);
        for (uint16_t row = h; row; row--) {
            for (uint16_t n = CW(0x2067); n; n--) vw(d++, rb(s, src++));
            d += skip;
        }
    };
    if (cx & 0x8000) {
        CSW(0x2067, cx & 0x7FFF);
        pass();
        return;
    }
    CSW(0x2067, cx);
    CSW(0x2069, h);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    for (uint8_t m = 1; m <= 8; m <<= 1) {
        sq(2, m);
        pass();
    }
}

// 2250h: one pass through the latches with the settings the caller made.
void Mag::spriteLatched(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u);
    const uint16_t w = rw(s, si) & 0x7FFF;
    const uint16_t skip = rw(s, si + 4u);
    uint32_t src = rw(s, si + 6u);
    CSW(0x2065, di);
    CSW(0x2067, w);
    uint32_t d = di;
    for (uint16_t row = h; row; row--) {
        for (uint16_t n = w; n; n--) {
            vr(d);
            vw(d++, rb(s, src++));
        }
        d += skip;
    }
}

// 2286h: puts a sprite's planes in video memory past the screen (at
// CS:206Bh, from A780h on) and makes its data offset point there.
void Mag::uploadSprite(uint16_t s, uint16_t si) {
    const uint16_t n = (uint16_t)(rw(s, si + 2u) * rw(s, si));
    CSW(0x2067, n);
    uint32_t src = rw(s, si + 6u);
    const uint16_t at = CW(0x206B);
    wb(s, si + 6u, (uint8_t)at);
    wb(s, si + 7u, (uint8_t)(at >> 8));
    gc(1, 0);
    gc(8, 0xFF);
    gc(3, 0);
    gc(1, 0);
    writeMode(0);
    uint32_t di = at;
    for (uint8_t m = 1; m <= 8; m <<= 1) {
        sq(2, m);
        di = CW(0x206B);
        for (uint16_t k = 0; k < n; k++) vw(di++, rb(s, src++));
    }
    CSW(0x206B, (uint16_t)di);
}

// 2327h: an uploaded sprite copied in video memory through the latches.
void Mag::copySprite(uint16_t s, uint16_t si, uint16_t di) {
    const uint16_t h = rw(s, si + 2u), w = rw(s, si);
    CSW(0x2067, w);
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

// 039Dh + 2046h: colour select for bits 4-5, palette registers 0-15 straight.
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

// 2677h: line compare, the bottom panel's top.
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

// 26C8h
void Mag::startAddress(uint16_t cx) {
    vga_.outw(0x3D4, (uint16_t)(0x0C | (cx & 0xFF00)));
    vga_.outw(0x3D4, (uint16_t)(0x0D | (cx & 0xFF) << 8));
}

// 26EDh: a fade of CX colours from DAC entry DX: the bytes at s:SI move
// towards those at s:DI by 3 per step.
void Mag::fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx) {
    CSW(0x26DB, (uint16_t)(cx * 3));
    CSW(0x26D7, dx);
    CSW(0x26E9, di);
    CSW(0x26E7, si);
    CSW(0x26EB, s);
    cs_[0x26D6] = 0xFF;
}

// 2713h: one step, and the colours out to the DAC.
void Mag::fadeStep() {
    const uint16_t s = CW(0x26EB);
    uint16_t si = CW(0x26E7), di = CW(0x26E9);
    const int8_t bl = 3;
    uint8_t bh = 0;
    for (uint16_t cx = CW(0x26DB); cx; cx--, si++, di++) {
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
    cs_[0x26D6] = bh;
    vga_.out(0x3C8, (uint8_t)CW(0x26D7));
    si = CW(0x26E7);
    for (uint16_t n = CW(0x26DB) / 3; n; n--)
        for (int k = 0; k < 3; k++) vga_.out(0x3C9, rb(s, si++));
}

// 27DAh
void Mag::setDac256(uint16_t s, uint16_t si) {
    vga_.out(0x3C8, 0);
    for (int i = 0; i < 0x300; i++) vga_.out(0x3C9, rb(s, si + i));
}

// ------------------------------------------------------------ the mouse ---

void Mag::mouseInit() {      // 2838h: the driver is there
    B(0x4BE9) = 0xFF;
    mouseSetup();
}

void Mag::mouseSetup() {     // 2869h
    if (B(0x4BE9)) {
        uint16_t bx = 0, cx = 0, dx = W(0x4BFB);
        int33(7, bx, cx, dx);
        cx = 0, dx = W(0x4BFD);
        int33(8, bx, cx, dx);
    }
    SW(0x4BEE, W(0x4BEA) >> 1);
    SW(0x4BF0, W(0x4BEC) >> 1);
    uint16_t bx = 0, cx = W(0x4BEE), dx = W(0x4BF0);
    int33(4, bx, cx, dx);
}

// 28C7h: which rectangle of the table at DS:4C01h the cursor is in.
uint8_t Mag::hotspot() {
    const uint16_t s = W(0x4BFF);
    uint16_t si = W(0x4C01);
    const uint16_t count = rw(s, si);
    si += 2;
    for (uint16_t cx = count; cx; cx--, si += 8) {
        const int16_t x = (int16_t)W(0x4BEE), y = (int16_t)W(0x4BF0);
        if (x < (int16_t)rw(s, si) || y < (int16_t)rw(s, si + 2u) || x > (int16_t)rw(s, si + 4u) ||
            y > (int16_t)rw(s, si + 6u))
            continue;
        return (uint8_t)(count - cx);
    }
    return 0xFF;
}

// 290Dh: the mouse, or the keys moving the cursor: Up/Down by DS:4BF4h,
// Left/Right by DS:4BF2h (to an edge); Enter/Space/E = left button, Esc =
// right; F1-F4/F9 the music.
void Mag::input() {
    B(0x4BF6) = 0;
    B(0x4BF7) = 0xFF;
    if (B(0x4BE9) != 0 && cs_[0x2B48] == 0) {
        uint16_t bx = 0, cx = 0, dx = 0;
        int33(3, bx, cx, dx);
        if (cs_[0x2B49] == 0xFF && (bx & 0xFF) == 0 && cx == W(0x4C05) && dx == W(0x4C07)) return;
        cs_[0x2B49] = 0;
        SW(0x4C05, cx);
        SW(0x4BEE, cx);
        SW(0x4C07, dx);
        SW(0x4BF0, dx);
        B(0x4BF6) = (uint8_t)bx;
        SW(0x4BEE, (uint16_t)((uint32_t)W(0x4BEA) * cx / W(0x4BFB)));
        SW(0x4BF0, (uint16_t)((uint32_t)W(0x4BEC) * W(0x4BF0) / W(0x4BFD)));
    } else {
        // 2991h: the cursor to the top of the rectangle it is in, plus 5
        const uint8_t al = hotspot();
        if (al != 0xFF) {
            const uint16_t r = (uint16_t)((al << 3) + W(0x4C01) + 2);
            const uint16_t ax = (uint16_t)(W((uint16_t)(r + 2)) + 5);
            SW(0x4BF0, ax);
            driverY(ax);
        }
    }
    const uint8_t al = cs_[0x2B48];
    cs_[0x2B48] = 0;
    if (cs_[0x2393] != 0xFF) {
        static const uint16_t tunes[4] = {0x2, 0xB, 0x14, 0x1D};   // "data.001" ...
        if (al >= 0x3B && al <= 0x3E) {             // F1-F4
            const uint8_t n = (uint8_t)(al - 0x3A);
            if (B(0x26) != n) {
                B(0x26) = n;
                switchMusic(tunes[n - 1]);
            }
            return;
        }
        if (al == 0x43) {                           // F9: music off/on
            int16_t bx;
            if (B(0x26) != 0xFF) bx = (int16_t)0xFF01, B(0x26) = 0xFF;
            else bx = 0xFF, B(0x26) = 0xFE;
            volume(bx);
            return;
        }
    }
    switch (al) {
    case 0x50:                                      // Down
        cs_[0x2B49] = 0xFF;
        SW(0x4BF0, (uint16_t)(W(0x4BF0) + W(0x4BF4)));
        if ((int16_t)W(0x4BF0) >= (int16_t)W(0x4BEC)) SW(0x4BF0, W(0x4BEC));
        break;
    case 0x48:                                      // Up
        cs_[0x2B49] = 0xFF;
        SW(0x4BF0, (uint16_t)(W(0x4BF0) - W(0x4BF4)));
        if ((int16_t)W(0x4BF0) <= 0) SW(0x4BF0, 0);
        break;
    case 0x4B:                                      // Left
        cs_[0x2B49] = 0xFF;
        SW(0x4BEE, (uint16_t)(W(0x4BEE) - W(0x4BF2)));
        if ((int16_t)W(0x4BEE) <= 0) SW(0x4BEE, 0);
        break;
    case 0x4D:                                      // Right
        cs_[0x2B49] = 0xFF;
        SW(0x4BEE, (uint16_t)(W(0x4BEE) + W(0x4BF2)));
        if ((int16_t)W(0x4BEE) >= (int16_t)W(0x4BEA)) SW(0x4BEE, W(0x4BEA));
        break;
    case 0x39:
    case 0x1C:
    case 0x12:                                      // Space, Enter, E
        cs_[0x2B49] = 0xFF;
        B(0x4BF6) = 1;
        break;
    case 0x01:                                      // Esc
        cs_[0x2B49] = 0xFF;
        B(0x4BF6) = 2;
        break;
    }
}

// 2B85h: the 2x16 bytes under the cursor to A000:FFDCh.
void Mag::saveUnderCursor(uint16_t di) {
    uint32_t si = di, d = 0xFFDC;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 2; k++) movsbVram(si, d);
        si += 0x4E;
    }
}

// 2BB1h
void Mag::restoreUnderCursor() {
    uint32_t d = W(0x4795), si = 0xFFDC;
    writeMode(1);
    vga_.outw(0x3C4, 0x0F02);
    for (int cx = 0; cx < 0x10; cx++) {
        for (int k = 0; k < 2; k++) movsbVram(si, d);
        d += 0x4E;
    }
}

// 2BE6h: the cursor at (DS:4BEEh, DS:4BF0h), if it moved (or DS:4C09h =
// FFFFh): MOUSE.SPR's mask in black, then its shape in white.
void Mag::cursor() {
    if (B(0x4BE9) != 0xFF) return;
    const uint16_t di = (uint16_t)(0x50 * W(0x4BF0) + W(0x46CD) + W(0x46CD) + ((uint16_t)(W(0x4BEE) + 8) >> 3) +
                                   W(0x4C03));
    if (W(0x4C09) != 0xFFFF && di == W(0x4795)) return;
    restoreUnderCursor();
    SW(0x4795, di);
    saveUnderCursor(di);
    sq(2, 0xF);
    gc(8, 0xFF);
    writeMode(3);
    gc(0, 0);
    gc(1, 0xF);
    gc(3, 0);
    spriteLatched(W(0x1035), 8, di);
    gc(0, 0xF);
    spriteLatched(W(0x1035), 0x10, di);
}

// 2C92h: list row DI inverted: plane 3 of its 18 lines XORed with 1s.
void Mag::xorRow(uint16_t di) {
    const uint32_t d = (uint16_t)(0x640 * di + 0x4420 + W(0x46D1) - 0x50);
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

// 2CFEh: main menu entry DI (TITLES sprite DI) XORed in plane 3.
void Mag::toggleItem(uint16_t di) {
    const uint16_t ax = (uint16_t)(0x15 * di * 0x50);
    const uint16_t at = (uint16_t)(CW((uint16_t)(0x2CF4 + (di << 1))) + ax + 0x6040);
    sq(2, 8);
    gc(8, 0xFF);
    writeMode(3);
    gc(0, 8);
    gc(1, 8);
    gc(3, 0x18);
    spriteLatched(W(0x1078), (uint16_t)((di << 3) + 8), at);
}

}  // namespace imp
