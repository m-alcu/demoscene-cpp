// The reader of Imphobia #7 (Imphobia, December 1993; code by The Wizard),
// translated from IMPHOB7.EXE.
//
// It is a translation, not a rewrite: the routines keep the original's
// structure, its variables keep their places in the data segment (DS:xxxx)
// and in the code segment (CS:xxxx), and it draws through a register-level
// VGA, so that what it puts in video memory and in the DAC is what the
// original puts there. The comments name the original routines by offset.
//
// #7's reader is the one #8's grew from: the same page engine (.BIN
// articles in plane 3, two 40-column pages scrolled a column at a time,
// lists kept in the EXE, the selection XORed in plane 3), with the keys
// driving a cursor: Up/Down move it a row, Left/Right push it to an edge,
// where the hotspots turn the pages; the main menu follows its height.
//
// What is not translated:
//  - the configuration questions (sound, compatibility mode): the port has
//    none; it plays the music as the SoundBlaster version did, with no
//    compatibility mode;
//  - the music code (The Wizard and Numerus's SoundBlaster routines): the
//    host plays the modules with its own player.
//
// The program is sequential and waits for the timer interrupt's frame flag
// or for the vertical retrace; here those waits call Host::waitFrame(), so
// run() is meant to be called on its own thread.
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
    // The F1-F4 music: "data.001" ... (the names in the EXE's table).
    virtual void playModule(const std::string& name) = 0;
    virtual void stopMusic() = 0;
    // The master volume the program keeps (DS:4CC0h, 0..255).
    virtual void setMusicVolume(int v) = 0;
    // Not used by #7 (it has no export).
    virtual void saveFile(const std::string& name, const std::vector<uint8_t>& data) = 0;
};

class Mag {
public:
    // image: the EXE's load image (code segment at 0, data segment
    // at 8F70h); dat: NFO7.DAT.
    Mag(Vga& vga, Host& host, std::vector<uint8_t> image, std::vector<uint8_t> dat);

    // Runs the mag from the cover picture to the exit.
    void run();

    // --- what the timer interrupt and the drivers did, for the host -----
    bool raster() const { return raster_; }
    std::vector<Vga::LineWrite> rasterWrites() const;
    void endOfFrame();
    void key(uint8_t scancode) { keys_.push_back(scancode); }
    void mouse(int x, int y, int buttons, bool moved);
    void mouseDriver(int x, int y, int buttons) { mouse_.x = x, mouse_.y = y, mouse_.buttons = buttons; }
    bool finished() const { return finished_; }

    const uint8_t* dataSegment() const { return ds_.data(); }
    const uint8_t* codeSegment() const { return cs_.data(); }

private:
    // ---- memory ----------------------------------------------------------
    static constexpr uint16_t kDS = 0x08F7, kCS = 0x0001, kVRAM = 0xA000;
    std::vector<uint8_t>& seg(uint16_t s);
    uint8_t rb(uint16_t s, uint32_t a);
    void wb(uint16_t s, uint32_t a, uint8_t v);
    uint16_t rw(uint16_t s, uint32_t a) { return (uint16_t)(rb(s, a) | rb(s, a + 1) << 8); }
    uint8_t& B(uint16_t a) { return ds_[a]; }
    uint16_t W(uint16_t a) const { return (uint16_t)(ds_[a] | ds_[a + 1u] << 8); }
    void SW(uint16_t a, uint16_t v) { ds_[a] = (uint8_t)v, ds_[a + 1u] = (uint8_t)(v >> 8); }
    uint16_t CW(uint16_t a) const { return (uint16_t)(cs_[a] | cs_[a + 1u] << 8); }
    void CSW(uint16_t a, uint16_t v) { cs_[a] = (uint8_t)v, cs_[a + 1u] = (uint8_t)(v >> 8); }
    uint16_t alloc(uint32_t paragraphs);
    uint16_t loadResource(const std::string& name);                    // 2F17h + 2F20h
    const uint8_t* resource(const std::string& name, uint32_t& size);
    std::string str(uint16_t a) const;

    void gc(uint8_t i, uint8_t v) { vga_.out(0x3CE, i), vga_.out(0x3CF, v); }
    void sq(uint8_t i, uint8_t v) { vga_.out(0x3C4, i), vga_.out(0x3C5, v); }
    void writeMode(uint8_t m);       // GC5 = (GC5 & F4h) | m
    uint8_t vr(uint32_t a) { return vga_.read(a & 0xFFFF); }
    void vw(uint32_t a, uint8_t v) { vga_.write(a & 0xFFFF, v); }
    void movsbVram(uint32_t& si, uint32_t& di);

    // ---- the program -------------------------------------------------------
    void startup();               // 0244h-08FEh
    void mainMenu();              // 08FFh-0C43h
    void ending();                // 0C44h

    void waitFlag();              // CMP CS:[237Ch],0FFh / JNE (and clear)
    void waitRetrace();           // 27A5h (and 2665h)

    void clearVram();             // the planes' 9600h bytes (0784h)
    void clearText();             // 0CAEh
    void logoPlane();             // 0CEBh
    void offsets(uint16_t ax, bool drawing);   // the inline CRTC offsets
    void list();                  // 0D2Eh
    void unpack(uint8_t al);      // 11DCh
    void loadFile(uint16_t dx);   // 128Ch
    void clampMouse();            // 12AAh
    void driverY(uint16_t y);     // the driver's y for a cursor height (09F7h, 0A6Fh)
    void drawPage40();            // 1366h
    void drawPage80();            // 13BCh
    void page(uint16_t dx);       // 13FFh (142Ah, 1726h)
    void drawBackground();        // 1822h
    void fadeInPanel(uint16_t si, uint16_t dx, uint16_t di);   // 18A6h
    void fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di);  // 1912h
    void fadeTo(uint16_t si, uint16_t dx, uint16_t di);        // 1977h
    void fadeOutText(uint16_t si, uint16_t dx);                // 19B6h
    void fadeOutAll();            // 19E8h
    void fadeInAll();             // 1AB9h
    void volume(int16_t bx);      // 1B9Eh
    void barCalcList();           // 1BC7h
    void barCalcPage();           // 1BECh
    void barRight();              // 1C20h
    void barLeft();               // 1C52h
    void drawColumn(uint32_t di, uint16_t bx);   // 1C92h
    void scrollRight(uint32_t di, uint16_t bx);  // 1D68h
    void scrollLeft(uint32_t di, uint16_t bx);   // 1EAEh
    void textRows(uint32_t& di, uint16_t& bx);
    void switchMusic(uint16_t dx);   // 1FE4h
    void textToFont();            // 202Bh
    void sprite(uint16_t s, uint16_t si, uint16_t di);        // 206Fh
    void spriteLatched(uint16_t s, uint16_t si, uint16_t di); // 2250h
    void uploadSprite(uint16_t s, uint16_t si);               // 2286h
    void copySprite(uint16_t s, uint16_t si, uint16_t di);    // 2327h
    void installTimer();          // 25FCh
    void removeTimer();           // 2622h
    void setupAttributes();       // 039Dh + 2046h
    void lineCompare(uint16_t cx);   // 2677h
    void startAddress(uint16_t cx);  // 26C8h
    void fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx);  // 26EDh
    void fadeStep();              // 2713h
    bool fading() const { return cs_[0x26D6] == 0xFF; }
    void setDac256(uint16_t s, uint16_t si);   // 27DAh
    void mouseInit();             // 2838h
    void mouseSetup();            // 2869h
    uint8_t hotspot();            // 28C7h
    void input();                 // 290Dh
    void saveUnderCursor(uint16_t di);  // 2B85h
    void restoreUnderCursor();    // 2BB1h
    void cursor();                // 2BE6h
    void xorRow(uint16_t di);     // 2C92h
    void toggleItem(uint16_t di); // 2CFEh
    void moveHighlight(uint16_t bx, bool menu);   // 0AD6h / 10B5h

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
    std::vector<uint8_t> keys_;

    struct {
        int x = 0, y = 0, buttons = 0;
        int minX = 0, maxX = 639, minY = 0, maxY = 199;
    } mouse_;
};

}  // namespace imp
