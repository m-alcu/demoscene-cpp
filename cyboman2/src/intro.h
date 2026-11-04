// Cyboman 2 "The Inner Loop" (Complex, The Party '94, 64K intro), translated
// from CYBOMAN2.EXE.
//
// The intro proper is 16-bit real-mode code (segment 2FC9h of the unpacked
// image; Tran's PMODE and a 32-bit GUS player sit around it). This is a
// translation of that code, routine by routine, over a copy of the
// program's memory: segments are relative to the image (as in the unpacked
// file, its relocations undone), VRAM is at A000:0000. The routines keep
// their offsets as names; variables keep their places in the code segment
// (CS:xxxx), so the self-modifying polygon filler works as the original.
//
// Time: the original renders as fast as it can and is paced by a timer
// interrupt synchronised to the vertical retrace, whose callback (61A0h)
// moves the objects and runs the palette fades. The timer measures the
// frame with the PIT in mode 3 (which counts down by two), so its one-shot
// count is 0.967 of a frame: the interrupt comes just before the retrace,
// waits for it and runs the callback once a frame, from the fifth frame
// after the timer is installed. On a fast PC (and in the harness this port
// is checked against) the main code then runs until it waits again. Here
// the main code runs on its own thread; its waits call Host::frame(), and
// the host calls tick() for the callback between frames.
#pragma once

#include <cstdint>
#include <cstring>
#include <vector>

namespace cyb {

class Host {
public:
    virtual ~Host() = default;
    // The next frame boundary: returns when the frame's callbacks have run.
    virtual void frame() = 0;
    // Esc (the original reads port 60h).
    virtual bool escape() = 0;
};

class Intro {
public:
    explicit Intro(Host& host, const std::vector<uint8_t>& image);

    void run();                   // 7807h (init), then 7979h (main) to the end
    // The timer: the callbacks due at this frame boundary (61A0h).
    void tick();
    bool timerOn() const { return timerOn_; }
    int callbacksPerFrame();      // by the frames since the timer went in

    const uint8_t* vram() const { return &m_[0xA0000]; }
    const uint8_t* dac() const { return dac_; }
    bool textMode() const { return textMode_; }
    bool finished() const { return finished_; }

private:
    // ---- memory: image-relative segments ------------------------------------
    static constexpr uint16_t CS = 0x2FC9, GSEG = 0x4984, VSEG = 0xA000;
    std::vector<uint8_t> m_;
    uint32_t lin(uint16_t s, uint16_t o) const { return ((uint32_t)s << 4) + o; }
    uint8_t& B(uint16_t s, uint16_t o) { return m_[lin(s, o)]; }
    uint16_t W(uint16_t s, uint16_t o) const { return (uint16_t)(m_[lin(s, o)] | m_[lin(s, o) + 1] << 8); }
    uint32_t D(uint16_t s, uint16_t o) const { uint32_t v; std::memcpy(&v, &m_[lin(s, o)], 4); return v; }
    void SW(uint16_t s, uint16_t o, uint16_t v) { m_[lin(s, o)] = (uint8_t)v, m_[lin(s, o) + 1] = (uint8_t)(v >> 8); }
    void SD(uint16_t s, uint16_t o, uint32_t v) { std::memcpy(&m_[lin(s, o)], &v, 4); }
    // the code segment's variables
    uint16_t cw(uint16_t o) const { return W(CS, o); }
    int16_t ci(uint16_t o) const { return (int16_t)W(CS, o); }
    uint32_t cd(uint16_t o) const { return D(CS, o); }
    int32_t cl(uint16_t o) const { return (int32_t)D(CS, o); }
    void SW(uint16_t o, uint16_t v) { SW(CS, o, v); }
    void SD(uint16_t o, uint32_t v) { SD(CS, o, v); }

    // ---- the DAC ----------------------------------------------------------------
    uint8_t dac_[768] = {};
    int dacW_ = 0;
    void dacIndex(uint8_t i) { dacW_ = i * 3; }
    void dacData(uint8_t v) { dac_[dacW_] = v & 0x3F; dacW_ = (dacW_ + 1) % 768; }

    // ---- the program ------------------------------------------------------------
    void init();                  // 7807h
    void main();                  // 7979h
    void quit();                  // 8BDAh
    void waitRetrace() { host_.frame(); }   // 5DF7h, 62A5h: the next retrace
    uint32_t rand();              // 8BF8h
    void lightTable();            // 2AF4h
    void sineTable();             // 2B10h
    void normalise();             // 2B3Dh
    void normals(uint16_t fs);    // 2BD3h
    void mirror(uint16_t ds);     // 7626h
    void mirrorAll();             // 76A4h
    uint32_t transform(uint16_t fs, uint16_t si);   // 5F10h; returns EDX
    void matrix();                // 603Ch
    void project(uint16_t fs);    // 6439h
    void spans();                 // 6550h: DX lines (edx_), colour CX (ecx_)
    void triangle(uint32_t eax, uint32_t ebx, uint32_t ecx, uint16_t si, uint16_t di, uint16_t bp);  // 66F0h
    void drawFaces();             // 6A12h
    void faces(uint16_t fs);      // 6AC3h
    void object(uint16_t bx);     // 6BCCh
    void scene();                 // 6C64h
    void endList();               // 6CF6h
    void blobs();                 // 74BAh
    void sortFaces();             // 7529h
    void show();                  // 75BCh
    bool loop76D8(uint16_t cx);   // 76D8h: the scene for CX frames; false on Esc
    bool loop7708(uint16_t cx);   // 7708h: the blobs
    bool loop7738(uint16_t cx);   // 7738h: the morphing object
    void fadeStep(uint16_t si, uint8_t bl);   // 629Ch
    void fadeIn();                // 62C5h
    void typeText();              // 62E3h
    bool waitCounter(uint16_t n); // 844Eh & co: CS:19CDh up to n; false on Esc
    void callback();              // 61A0h

    // registers the polygon filler keeps between its parts (66F0h, 6550h)
    uint32_t eax_ = 0, ebx_ = 0, ecx_ = 0, edx_ = 0, esi_ = 0, edi_ = 0;
    uint16_t bp_ = 0;

    Host& host_;
    bool timerOn_ = false;
    int timerFrames_ = 0;
    bool textMode_ = false;
    bool finished_ = false;
    uint16_t typeCx_ = 0;         // CX across 62E3h's characters
};

}  // namespace cyb
