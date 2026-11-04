// The reader of Imphobia #12 (Imphobia, July 1996; code by The Wizard),
// translated from IMPHOB12.EXE.
//
// It is a translation, not a rewrite: the routines keep the original's
// structure, its variables keep their places in the data segment (DS:xxxx)
// and in the code segment (CS:xxxx), and it draws through a register-level
// VGA, so that what it puts in video memory and in the DAC is what the
// original puts there. The comments name the original routines by offset.
//
// What is not translated:
//  - the configuration screens (sound card, IRQ, ...): the port has none,
//    it uses the settings of a machine with a Gravis UltraSound;
//  - the music code (Robban's GUS replay, The Wizard and Numerus's
//    SoundBlaster routines): the host plays the modules with its own player
//    (see Host);
//  - printing an article ('P'), which needs a printer on LPT1/2.
//
// The program is sequential and waits for the timer interrupt's frame flag
// or for the vertical retrace; here those waits call Host::waitFrame(), so
// run() is meant to be called on its own thread (or with a host whose
// waitFrame() does a whole frame's worth of outside work).
#pragma once

#include <cstdint>
#include <functional>
#include <map>
#include <string>
#include <vector>

#include "vga.h"

namespace imp {

class Host {
public:
    virtual ~Host() = default;
    // One frame: the program waited for its timer's frame flag (raster mode)
    // or for a vertical retrace.
    virtual void waitFrame() = 0;
    // The F1-F4 music: "data    .001" ... (the names in the EXE's table).
    virtual void playModule(const std::string& name) = 0;
    virtual void stopMusic() = 0;
    // The master volume the program keeps (DS:2466h, 0..255; the GUS
    // replay was given a quarter of it).
    virtual void setMusicVolume(int v) = 0;
    // 'F' in an article saves it as a text file (????????.TXT).
    virtual void saveFile(const std::string& name, const std::vector<uint8_t>& data) = 0;
};

class Mag {
public:
    // image: the unpacked EXE's load image (code segment at 0, data segment
    // at 0E4D0h); dat: NFO12.DAT.
    Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat);

    void setFullPageScroll(bool on) { fullPage_ = on; }

    // Runs the mag from the cover picture to the end screen.
    void run();

    // --- what the timer interrupt and the drivers did, for the host -----
    // Raster mode: the timer handler is installed (between the cover and
    // the end screen). In it, each frame is split at fixed lines; see
    // rasterWrites().
    bool raster() const { return raster_; }
    // The register writes the timer handler makes during a frame, by line.
    std::vector<Vga::LineWrite> rasterWrites() const;
    // Called by the host between frames: state C of the handler (top colour
    // bank, CRTC offset back to normal, frame flag), the keyboard handler
    // (last scancode) and the mouse driver.
    void endOfFrame();
    void key(uint8_t scancode) { keys_.push_back(scancode); }
    // Mouse in screen pixels (0..639, 0..479) and buttons (bit 0 left, bit 1
    // right); `moved` when the pointer moved since the last call.
    void mouse(int x, int y, int buttons, bool moved);
    // The same in the driver's own coordinates (for tests against the original).
    void mouseDriver(int x, int y, int buttons) { mouse_.x = x, mouse_.y = y, mouse_.buttons = buttons; }
    bool finished() const { return finished_; }

    // For tests and frame dumps.
    const uint8_t* dataSegment() const { return ds_.data(); }
    const uint8_t* codeSegment() const { return cs_.data(); }

private:
    // ---- memory ----------------------------------------------------------
    static constexpr uint16_t kDS = 0x0E4D, kCS = 0x0001, kVRAM = 0xA000;
    std::vector<uint8_t>& seg(uint16_t s);
    uint8_t rb(uint16_t s, uint32_t a);
    void wb(uint16_t s, uint32_t a, uint8_t v);
    uint16_t rw(uint16_t s, uint32_t a) { return (uint16_t)(rb(s, a) | rb(s, a + 1) << 8); }
    uint8_t& B(uint16_t a) { return ds_[a]; }
    uint16_t W(uint16_t a) const { return (uint16_t)(ds_[a] | ds_[a + 1u] << 8); }
    void SW(uint16_t a, uint16_t v) { ds_[a] = (uint8_t)v, ds_[a + 1u] = (uint8_t)(v >> 8); }
    uint8_t& CB(uint16_t a) { return cs_[a]; }
    uint16_t CW(uint16_t a) const { return (uint16_t)(cs_[a] | cs_[a + 1u] << 8); }
    void CSW(uint16_t a, uint16_t v) { cs_[a] = (uint8_t)v, cs_[a + 1u] = (uint8_t)(v >> 8); }
    uint16_t alloc(uint32_t paragraphs);
    uint16_t loadResource(const std::string& name);                    // 48B8h
    void loadResourceInto(const std::string& name, uint16_t s, uint16_t off);  // 4905h
    const uint8_t* resource(const std::string& name, uint32_t& size);
    std::string str(uint16_t a) const;

    // VGA helpers (what the routines do with OUT, written once)
    void gc(uint8_t i, uint8_t v) { vga_.out(0x3CE, i), vga_.out(0x3CF, v); }
    void sq(uint8_t i, uint8_t v) { vga_.out(0x3C4, i), vga_.out(0x3C5, v); }
    void writeMode(uint8_t m);       // GC5 = (GC5 & F4h) | m
    uint8_t vr(uint32_t a) { return vga_.read(a); }
    void vw(uint32_t a, uint8_t v) { vga_.write(a, v); }
    void movsbVram(uint16_t s, uint32_t& si, uint32_t& di);  // es=A000

    // ---- the program -------------------------------------------------------
    void startup();               // 0000h-031Bh
    void mainMenu();              // 031Ch-053Bh
    void ending();                // 053Eh-06D9h

    void waitFlag();              // CMP CS:[1DB1h],0FFh / JNE (and clear)
    void waitRetrace();           // 2870h
    void waitFlags(int n);        // 06E1h
    void waitRetraces(int n);     // 06DBh

    void fadeLogoIn();            // 0740h
    void fadeLogoOut();           // 06F3h
    void logoPlane();             // 09ADh
    void clearVram();             // 08F5h
    void clearLines(uint16_t di, uint16_t lines);   // 0932h
    void clearText();             // 0970h
    void setOffsets(uint16_t ax); // 09CEh
    void setupArticle();          // 0A5Bh
    void setupMenu();             // 0ADBh
    void drawPage();              // 0B65h
    void clearPage();             // 0BB2h
    bool showPage();              // 0BF7h; true = CF set
    void loadText();              // 0FBFh
    void clampMouse();            // 1133h
    bool step(int16_t si, uint16_t& bx, uint16_t& dx);  // 1160h; true = CF
    bool skipEntry(uint16_t bx, uint16_t& dx);          // 1194h; true = type 3
    bool moveSelection(int16_t si);                     // 11AFh
    void drawBackground();        // 121Ch
    void fadeInPanel(uint16_t si, uint16_t dx, uint16_t di);   // 12A0h
    void fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di);  // 1312h
    void fadeTo(uint16_t si, uint16_t dx, uint16_t di);        // 137Dh
    void fadeOutText(uint16_t si, uint16_t dx);                // 13AFh
    void fadeOutAll();            // 13E1h
    void fadeInAll();             // 1496h
    void volume(int16_t bx);      // 1574h
    void scrollbarCalc();         // 15C9h
    void elevLeft(uint16_t ax, uint16_t bx);   // 1677h
    void elevRight(uint16_t ax, uint16_t bx);  // 16DCh
    void elevCaps();              // 1743h
    void elevRightMove();         // 1795h
    void elevLeftMove();          // 17B0h
    void elevRedraw();            // 17CBh
    void drawColumn(uint32_t di, uint16_t bx);              // 1809h
    bool drawChar(uint16_t bx, uint32_t& di, uint32_t bp);  // 1912h; true = big
    void switchMusic(uint16_t dx);   // 1B06h
    void sprite(uint16_t s, uint16_t si, uint16_t di);        // 1BA4h
    void spriteMasked(uint16_t s, uint16_t si, uint16_t di);  // 1C34h
    void spriteLatched(uint16_t s, uint16_t si, uint16_t di); // 1CBCh
    void uploadSprite(uint16_t s, uint16_t si);               // 1CF3h
    void copySprite(uint16_t s, uint16_t si, uint16_t di);    // 1D5Ch
    void installTimer();          // 1FD3h
    void removeTimer();           // 1FF9h
    void setupAttributes();       // 2070h
    void lineCompare(uint16_t cx);   // 20B0h
    void startAddress(uint16_t cx);  // 2101h
    void screenOn(bool on);       // 2111h
    void fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx);  // 2147h
    void fadeStep();              // 216Dh
    bool fading() const { return cs_[0x2130] == 0xFF; }
    void saveText();              // 2204h
    void setDac256(uint16_t s, uint16_t si);   // 28A7h
    void mouseInit();             // 2912h
    void mouseSetup();            // 2947h
    void hotspot();               // 29DAh
    void input();                 // 2A33h
    void saveUnderCursor(uint16_t di);  // 2C72h
    void restoreUnderCursor();    // 2CA9h
    void mainHighlight();         // 2CF8h
    void menuHighlight();         // 2D51h
    void cursor();                // 2DEAh
    void highlightRow(uint16_t di);     // 2E84h
    void unhighlightRow(uint16_t di);   // 2F8Ah
    void toggleItem(uint16_t di);       // 3050h
    void mouseSetPos();           // 30ADh
    void hideCursorAndRow();      // 0F6Bh
    bool section(uint16_t& bx);   // 083Eh

    // int 33h
    void int33(uint16_t ax, uint16_t& bx, uint16_t& cx, uint16_t& dx);

    Vga& vga_;
    Host& host_;
    std::vector<uint8_t> cs_, ds_;
    std::vector<uint8_t> dat_;
    std::map<std::string, std::pair<uint32_t, uint32_t>> dir_;
    std::map<uint16_t, std::vector<uint8_t>> segs_;
    uint16_t nextSeg_ = 0x2000;

    bool raster_ = false;
    bool finished_ = false;
    bool fullPage_ = true;
    uint16_t retBx_ = 0, retDx_ = 0;   // BX/DX that 0BF7h returns with
    int16_t stepCx_ = 0;               // CX that 1160h returns with
    std::vector<uint8_t> keys_;

    // the mouse driver
    struct {
        int x = 0, y = 0, buttons = 0;
        int minX = 0, maxX = 639, minY = 0, maxY = 199;
    } mouse_;
};

}  // namespace imp
