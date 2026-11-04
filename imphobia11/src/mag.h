// The reader of Imphobia #11 (Imphobia, December 1995; code by The Wizard),
// translated from IMPHOB11.EXE.
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
    // The master volume the program keeps (DS:2472h, 0..255; the GUS
    // replay was given a quarter of it).
    virtual void setMusicVolume(int v) = 0;
    // 'F' in an article saves it as a text file (????????.TXT).
    virtual void saveFile(const std::string& name, const std::vector<uint8_t>& data) = 0;
};

class Mag {
public:
    // image: the unpacked EXE's load image (code segment at 0, data segment
    // at 0E4D0h); dat: NFO11.DAT.
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
    static constexpr uint16_t kDS = 0x0E3E, kCS = 0x0001, kVRAM = 0xA000;
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
    uint16_t loadResource(const std::string& name);                    // 47D0h
    void loadResourceInto(const std::string& name, uint16_t s, uint16_t off);  // 481Dh
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
    void startup();               // 0000h-02CFh
    void mainMenu();              // 02D0h-04EFh
    void ending();                // 04F2h-068Dh

    void waitFlag();              // CMP CS:[1D88h],0FFh / JNE (and clear)
    void waitRetrace();           // 2806h
    void waitFlags(int n);        // 0695h
    void waitRetraces(int n);     // 068Fh

    void fadeLogoIn();            // 0795h
    void fadeLogoOut();           // 07CFh
    void fadeMagIn();             // 0700h
    void clearVram();             // 08BEh
    void clearLines(uint16_t di, uint16_t lines);   // 08FBh
    void clearText();             // 0939h
    void setOffsets(uint16_t ax); // 0997h
    void setupArticle();          // 0A24h
    void setupMenu();             // 0AA4h
    void drawPage();              // 0B2Eh
    void clearPage();             // 0B7Bh
    bool showPage();              // 0BC0h; true = CF set
    void loadText();              // 0F85h
    void clampMouse();            // 10F9h
    bool step(int16_t si, uint16_t& bx, uint16_t& dx);  // 1126h; true = CF
    bool skipEntry(uint16_t bx, uint16_t& dx);          // 115Ah; true = type 3
    bool moveSelection(int16_t si);                     // 1175h
    void drawBackground();        // 11E2h
    void fadeInPanel(uint16_t si, uint16_t dx, uint16_t di);   // 1266h
    void fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di);  // 12D8h
    void fadeTo(uint16_t si, uint16_t dx, uint16_t di);        // 1343h
    void fadeOutText(uint16_t si, uint16_t dx);                // 1375h
    void fadeOutAll();            // 13A7h
    void fadeInAll();             // 145Ch
    void volume(int16_t bx);      // 153Ah
    void scrollbarCalc();         // 158Fh
    void elevLeft(uint16_t ax, uint16_t bx);   // 1643h
    void elevRight(uint16_t ax, uint16_t bx);  // 16DAh
    void elevCaps();              // 174Fh
    void elevRightMove();         // 17A2h
    void elevLeftMove();          // 17B7h
    void drawColumn(uint32_t di, uint16_t bx);              // 17E0h
    bool drawChar(uint16_t bx, uint32_t& di, uint32_t bp);  // 18E9h; true = big
    void switchMusic(uint16_t dx);   // 1ADDh
    void sprite(uint16_t s, uint16_t si, uint16_t di);        // 1B7Bh
    void spriteMasked(uint16_t s, uint16_t si, uint16_t di);  // 1C0Bh
    void spriteLatched(uint16_t s, uint16_t si, uint16_t di); // 1C93h
    void uploadSprite(uint16_t s, uint16_t si);               // 1CCAh
    void copySprite(uint16_t s, uint16_t si, uint16_t di);    // 1D33h
    void installTimer();          // 1FAAh
    void removeTimer();           // 1FD0h
    void setupAttributes();       // 2047h
    void lineCompare(uint16_t cx);   // 2087h
    void startAddress(uint16_t cx);  // 20D8h
    void screenOn(bool on);       // 20E8h
    void fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx);  // 211Eh
    void fadeStep();              // 2144h
    bool fading() const { return cs_[0x2107] == 0xFF; }
    void saveText();              // 21DBh
    void setDac256(uint16_t s, uint16_t si);   // 283Dh
    void mouseInit();             // 28A8h
    void mouseSetup();            // 28DDh
    void hotspot();               // 2970h
    void input();                 // 29C9h
    void saveUnderCursor(uint16_t di);  // 2C08h
    void restoreUnderCursor();    // 2C3Fh
    void mainHighlight();         // 2C8Eh
    void menuHighlight();         // 2CE7h
    void cursor();                // 2D80h
    void highlightRow(uint16_t di);     // 2E1Ah
    void unhighlightRow(uint16_t di);   // 2F20h
    void toggleItem(uint16_t di);       // 2FE6h
    void mouseSetPos();           // 3043h
    void hideCursorAndRow();      // 0F31h
    bool section(uint16_t& bx);   // 0807h

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
    uint16_t retBx_ = 0, retDx_ = 0;   // BX/DX that 0BC0h returns with
    int16_t stepCx_ = 0;               // CX that 1126h returns with
    std::vector<uint8_t> keys_;

    // the mouse driver
    struct {
        int x = 0, y = 0, buttons = 0;
        int minX = 0, maxX = 639, minY = 0, maxY = 199;
    } mouse_;
};

}  // namespace imp
