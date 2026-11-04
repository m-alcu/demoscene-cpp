// The reader of Imphobia #8 (Imphobia, October 1994; code by The Wizard),
// translated from IMPHOB8.EXE (PKLITE'd; the port reads the unpacked image).
//
// It is a translation, not a rewrite: the routines keep the original's
// structure, its variables keep their places in the data segment (DS:xxxx)
// and in the code segment (CS:xxxx), and it draws through a register-level
// VGA, so that what it puts in video memory and in the DAC is what the
// original puts there. The comments name the original routines by offset.
//
// #8's reader is an earlier form of the one in #9-#12: the same menus,
// fades, sprites and timer, but its own page engine. The section lists are
// text kept in the EXE; the articles are .BIN files (run-length coded
// monochrome text, drawn in plane 3 over the background); a page of an
// article is 40 columns and two are on screen; turning a page scrolls the
// text area by a column at a time; the list's selection is a bar XORed in
// plane 3.
//
// What is not translated:
//  - the configuration screens (sound card, IRQ, ...): the port has none,
//    it uses the settings of a machine with a Gravis UltraSound and no
//    printer;
//  - the music code (Robban's GUS replay, The Wizard and Numerus's
//    SoundBlaster routines): the host plays the modules with its own player;
//  - printing and saving an article ('P', 'F'): #8 does both only when a
//    printer is configured, which the port's machine has not.
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
    // The F1-F4 music: "data.001" ... (the names in the EXE's table).
    virtual void playModule(const std::string& name) = 0;
    virtual void stopMusic() = 0;
    // The master volume the program keeps (DS:748Ah, 0..255; the GUS
    // replay was given a quarter of it).
    virtual void setMusicVolume(int v) = 0;
    // Saving a page as text (not reached in #8 without a printer).
    virtual void saveFile(const std::string& name, const std::vector<uint8_t>& data) = 0;
};

class Mag {
public:
    // image: the unpacked EXE's load image (code segment at 0, data segment
    // at 0CC00h); dat: NFO8.DAT.
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
    static constexpr uint16_t kDS = 0x0CC0, kCS = 0x0001, kVRAM = 0xA000;
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
    void startup();               // 0000h-0523h
    void mainMenu();              // 0524h-074Dh
    void ending();                // 074Eh

    void waitFlag();              // CMP CS:[1F1Eh],0FFh / JNE (and clear)
    void waitRetrace();           // 2806h

    void clearVram();             // 07F9h
    void clearText();             // 0836h
    void logoPlane();             // 0873h
    void setOffsets(uint16_t ax); // 0891h
    void section(uint16_t& bx);   // 07D5h
    void list();                  // 08E0h
    void unpack(uint8_t al);      // 0C9Ah
    void loadFile(uint16_t dx);   // 0D3Ah
    void clampMouse();            // 0E73h
    bool step(int16_t si, uint16_t& dx);  // 0EE0h; true = CF
    void drawPage40();            // 0F22h
    void drawPage80();            // 0F63h
    void page(uint16_t dx);       // 0F91h (and 0FE7h, 1303h)
    void drawBackground();        // 1460h
    void fadeInPanel(uint16_t si, uint16_t dx, uint16_t di);   // 14E4h
    void fadeOutPanel(uint16_t si, uint16_t dx, uint16_t di);  // 1550h
    void fadeTo(uint16_t si, uint16_t dx, uint16_t di);        // 15B5h
    void fadeOutText(uint16_t si, uint16_t dx);                // 15F4h
    void fadeOutAll();            // 1626h
    void fadeInAll();             // 16DBh
    void volume(int16_t bx);      // 17B9h
    void barCalcList();           // 1806h
    void barCalcPage();           // 182Bh
    void barInit();               // 184Dh
    void barRight();              // 1882h
    void barLeft();               // 18B9h
    void barErase(uint16_t bx);   // 18EBh
    void drawColumn(uint32_t di, uint16_t bx);   // 190Dh
    void scrollRight(uint32_t di, uint16_t bx);  // 19E1h
    void scrollLeft(uint32_t di, uint16_t bx);   // 1B25h
    void textRows(uint32_t& di, uint16_t& bx, bool spacing);  // the rows in 19E1h/1B25h
    void switchMusic(uint16_t dx);   // 1C59h
    void textToFont();            // 1CE9h
    void sprite(uint16_t s, uint16_t si, uint16_t di);        // 1D10h
    void spriteLatched(uint16_t s, uint16_t si, uint16_t di); // 1E29h
    void uploadSprite(uint16_t s, uint16_t si);               // 1E60h
    void copySprite(uint16_t s, uint16_t si, uint16_t di);    // 1EC9h
    void installTimer();          // 21B7h
    void removeTimer();           // 21DDh
    void setupAttributes();       // 2232h
    void lineCompare(uint16_t cx);   // 2270h
    void startAddress(uint16_t cx);  // 22C1h
    void fadeStart(uint16_t s, uint16_t si, uint16_t di, uint16_t cx, uint16_t dx);  // 22E6h
    void fadeStep();              // 230Ch
    bool fading() const { return cs_[0x22CF] == 0xFF; }
    void txtName(uint16_t dx);    // 2374h
    void setDac256(uint16_t s, uint16_t si);   // 283Bh
    void mouseInit();             // 2899h
    void mouseSetup();            // 28CAh
    void hotspot();               // 295Bh
    void input();                 // 29ACh
    void saveUnderCursor(uint16_t di);  // 2BFBh
    void restoreUnderCursor();    // 2C30h
    void mainHighlight();         // 2C7Bh
    void menuHighlight();         // 2CCAh
    void cursor();                // 2D3Ah
    void xorRow(uint16_t di);     // 2E12h
    void toggleItem(uint16_t di); // 2E83h
    void mouseSetPos();           // 2EE0h

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
