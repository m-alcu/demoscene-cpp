// The reader of Imphobia #9 (Imphobia, February 1995; code by The Wizard),
// translated from IMPHOB9.EXE.
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
    // The master volume the program keeps (DS:2804h, 0..255; the GUS
    // replay was given a quarter of it).
    virtual void setMusicVolume(int v) = 0;
    // 'F' in an article saves it as a text file (????????.TXT).
    virtual void saveFile(const std::string& name, const std::vector<uint8_t>& data) = 0;
};

class Mag {
public:
    // image: the unpacked EXE's load image (code segment at 0, data segment
    // at 0CB30h); dat: NFO9.DAT.
    Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat);


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
    static constexpr uint16_t kDS = 0x0CB3, kCS = 0x0001, kVRAM = 0xA000;
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
    uint16_t loadResource(const std::string& name);                    // 2F58h
    void loadResourceInto(const std::string& name, uint16_t s, uint16_t off);  // 2F99h
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
    void startup();               // 0000h-0359h
    void mainMenu();              // 035Ah-056Fh
    void ending();                // 0572h-061Fh

    void waitFlag();              // CMP CS:[1AF0h],15Fh / JNE (and clear)
    void waitRetrace();           // 25CCh
    void waitFlags(int n);        // (loops written inline)
    void waitRetraces(int n);     // 0621h

    void labelFadeIn();           // 0675h
    void labelFadeOut();          // 0621h
    void logoPlane();             // 07ECh
    void clearVram();             // 0772h
    void clearLines(uint16_t di, uint16_t lines);   // 07AFh
    void clearText();             // 07AFh
    void setOffsets(uint16_t ax); // 080Dh
    void setupArticle();          // 085Ch
    void setupMenu();             // 08DCh
    void drawPage();              // 0966h
    void clearPage();             // 09B3h
    bool showPage();              // 09E2h; true = CF set
    void loadText();              // 0D6Bh
    void clampMouse();            // 0EB9h
    bool step(int16_t si, uint16_t& bx, uint16_t& dx);  // 0EE0h; true = CF
    bool skipEntry(uint16_t bx, uint16_t& dx);          // 0F10h; true = type 3
    bool moveSelection(int16_t si);                     // 0F29h
    void drawBackground();        // 0F88h
    void fadeInPanel(uint16_t si, uint16_t dx, uint16_t di);   // 100Ch
    void fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di);  // 1078h
    void fadeTo(uint16_t si, uint16_t dx, uint16_t di);        // 10DDh
    void fadeOutText(uint16_t si, uint16_t dx);                // 110Fh
    void fadeOutAll();            // 1141h
    void fadeInAll();             // 11F6h
    void volume(int16_t bx);      // 12D4h
    void scrollbarCalc();         // 1321h
    void elevLeft(uint16_t ax, uint16_t bx);   // 13C3h
    void elevRight(uint16_t ax, uint16_t bx);  // 1454h
    void elevCaps();              // 14C3h
    void elevRightMove();         // 1516h
    void elevLeftMove();          // 152Bh
    void drawColumn(uint32_t di, uint16_t bx);              // 1554h
    bool drawChar(uint16_t bx, uint32_t& di, uint32_t bp);  // 1657h; true = big
    void switchMusic(uint16_t dx);   // 1849h
    void sprite(uint16_t s, uint16_t si, uint16_t di);        // 18E5h
    void spriteMasked(uint16_t s, uint16_t si, uint16_t di);  // 1973h
    void spriteLatched(uint16_t s, uint16_t si, uint16_t di); // 19FBh
    void uploadSprite(uint16_t s, uint16_t si);               // 1A32h
    void copySprite(uint16_t s, uint16_t si, uint16_t di);    // 1A9Bh
    void installTimer();          // 1DB3h
    void removeTimer();           // 1DD9h
    void setupAttributes();       // 1E2Eh
    void lineCompare(uint16_t cx);   // 1E6Ch
    void startAddress(uint16_t cx);  // 1EBDh
    void screenOn(bool on);       // 1ECBh
    void fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx);  // 1EFCh
    void fadeStep();              // 1F22h
    bool fading() const { return cs_[0x1EE5] == 0xFF; }
    void saveText();              // 1FACh
    void setDac256(uint16_t s, uint16_t si);   // 2601h
    void mouseInit();             // 2668h
    void mouseSetup();            // 2699h
    void hotspot();               // 272Ah
    void input();                 // 277Bh
    void saveUnderCursor(uint16_t di);  // 298Eh
    void restoreUnderCursor();    // 29C3h
    void mainHighlight();         // 2A0Eh
    void menuHighlight();         // 2A5Dh
    void cursor();                // 2AE8h
    void highlightRow(uint16_t di);     // 2B7Ah
    void unhighlightRow(uint16_t di);   // 2C7Eh
    void toggleItem(uint16_t di);       // 2D44h
    void mouseSetPos();           // 2D9Fh
    void hideCursorAndRow();      // 0D19h
    bool section(uint16_t& bx);   // 06C2h

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
    uint16_t retBx_ = 0, retDx_ = 0;   // BX/DX that 09E2h returns with
    int16_t stepCx_ = 0;               // CX that 0EE0h returns with
    std::vector<uint8_t> keys_;

    // the mouse driver
    struct {
        int x = 0, y = 0, buttons = 0;
        int minX = 0, maxX = 639, minY = 0, maxY = 199;
    } mouse_;
};

}  // namespace imp
