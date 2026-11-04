// The intro's program, translated routine by routine over the machine's
// memory: routines and variables keep their linear addresses (the names
// below carry them), and memory one routine writes and another reads works
// as in the original.
//
// The program is Watcom C (main, the parts, the 3D engine) with hand-written
// assembly (the music player, the texture mapper's inner loops). The C
// code's x87 arithmetic is kept as it is done: 80-bit intermediates (long
// double), rounded where the code stores to memory; the transcendental
// functions as the harness's x87 (QEMU 5) computes them, through doubles
// (x87.h).
#pragma once

#include <cstdint>
#include <functional>
#include <string>

#include "machine.h"
#include "x87.h"

namespace lasse {

class Demo {
public:
    explicit Demo(Machine& m) : m_(m) {}
    void main();                        // 18883h

    // --- the C runtime (Watcom) ------------------------------------------
    uint32_t malloc(uint32_t n);        // 1D4E8h
    void free(uint32_t p);              // 1D4F0h
    void memset(uint32_t p, uint8_t v, uint32_t n);   // 1D500h
    void print(uint32_t s);             // 1D518h: to the console
    std::string console;                // what it printed

    // --- the music player (15000h-15D40h; its data at 295BCh) ---------------
    void load(uint32_t module);         // 15222h
    void play(uint32_t order);          // 157ABh: from ORDER, the timer hooked
    void stopMusic();                   // 157F2h
    uint16_t position(uint32_t ret);    // 15297h: order << 8 | row; RET: the caller's return address
    int32_t clock(uint32_t ret);        // 15906h: PIT ticks (1193182 Hz); RET: the caller's return address
    void timer();                       // 15804h: IRQ 0
    bool escape();                      // 15D18h: Esc pressed (since the start)

    // a hook for the tests: snap() is called at the SNAPAT-th call of escape()
    long snapAt = -1;
    // a test mode: after the music starts, only frame checks (no parts)
    bool idle = false;
    std::function<void()> snap;

private:
    Machine& m_;
    Fpu F;                              // the x87's stack, shared across the routines
    // ESP, for the stack frames whose addresses matter (buffers on the
    // stack). A routine called with ESP = sp_ (its arguments pushed, not
    // yet the return address) that pushes N registers and ENTERs with L
    // bytes of locals has EBP = sp_ - 4 - 4N - 4 (Frame).
    uint32_t sp_ = 0x2C534;
    struct Frame {
        Demo& d;
        uint32_t saved, ebp;
        Frame(Demo& demo, int pushes, uint32_t locals) : d(demo), saved(demo.sp_) {
            ebp = d.sp_ - 4 - 4 * pushes - 4;
            d.sp_ = ebp - locals;
        }
        ~Frame() { d.sp_ = saved; }
    };

    // runtime
    void heapInit();
    uint32_t memAllocator(uint32_t n, uint32_t mhb);  // 1DB40h
    void memFree(uint32_t p, uint32_t mhb);           // 1DBE8h

    // --- the parts, in order ---------------------------------------------------------
    void part1();                       // 1AE34h
    void part2();                       // 1B238h
    void part3();                       // 192E6h
    void part4();                       // 1B9DDh
    void part5();                       // 19CEDh
    void part6();                       // 1BE6Ah
    void part7();                       // 1A14Bh
    void part8();                       // 1C776h
    void part9();                       // 1A56Ah
    void endPart();                     // 1B6F3h

    // --- the precalculation (18A6Ch) and its textures ---------------------------
    void precalc();                     // 18A6Ch
    void plasma(uint32_t seed, uint32_t dst, uint32_t amp, uint32_t bits);   // 16DCAh
    void blur(uint32_t src, uint32_t dst);                                   // 16EA6h
    void displace(uint32_t a, uint32_t b, uint32_t s, uint32_t d, uint32_t tx, uint32_t ty);  // 16E81h
    void rle(uint32_t dst, uint32_t data, uint32_t c1, uint32_t c2);         // 18588h
    void hexes(uint32_t dst, uint32_t dx, uint32_t dy, uint32_t c0, uint32_t c1, uint32_t c2);  // 185D5h
    void bumps(uint32_t dst);                                                // 1868Ah

    // --- palettes (18378h-18493h): 6-bit RGB triples ------------------------------
    void setPal(uint32_t src, uint32_t first, uint32_t n);                   // 18378h
    void fadePal(uint32_t src, uint32_t first, uint32_t n, int32_t level);  // 1839Eh: x level / 64
    void whitePal(uint32_t src, uint32_t first, uint32_t n, int32_t level); // 183CBh: to white as level falls
    void mixPal(uint32_t a, uint32_t b, uint32_t first, uint32_t n, int32_t k);  // 18409h: a k + b (64 - k)
    void whiteDac();                                                         // 18453h
    void blackDac();                                                         // 18473h
    // 18493h: N entries from (R0 G0 B0) towards (R1 G1 B1)
    void gradient(uint32_t dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n);
    // 18547h: black to (R G B) in N1 entries, then to white in N2
    void ramp(uint32_t dst, int32_t r, int32_t g, int32_t b, int32_t n1, int32_t n2);
    void copy(uint32_t dst, uint32_t src, uint32_t n) { for (; n; n--) m_.w8(dst++, m_.r8(src++)); }

    // --- the 3D engine (engine.cpp) ----------------------------------------------------
    void sceneAlloc(uint32_t verts, uint32_t faces);                         // 16FCAh
    void sceneFree();                                                        // 17038h
    void loadFaces(uint32_t obj, uint32_t data);                             // 17BCCh
    void loadVerts(uint32_t obj, uint32_t data);                             // 17D12h
    void normals(uint32_t obj, uint32_t faces);                              // 17D95h
    void copyObject(uint32_t dst, uint32_t src);                             // 17EC6h
    void freeFaces(uint32_t obj);                                            // 17F21h
    void freeVerts(uint32_t obj);                                            // 17F3Bh
    void camera(uint32_t m, uint32_t eye, uint32_t at, uint32_t up, float angle);  // 17658h
    void viewport(int32_t w, int32_t h, int32_t k);                          // 17710h
    void projection(float fov, uint32_t nearBits);                           // 17779h
    void place(uint32_t obj, uint32_t mx, uint32_t tex);                     // 177D3h
    void morph(uint32_t a, uint32_t b, float t, uint32_t mx, uint32_t tex);  // 17840h
    void addObject(uint32_t faces, uint32_t verts, uint32_t mx, uint32_t flags);  // 1791Fh
    void addFaces(uint32_t faces, uint32_t n, uint32_t nv, uint32_t flags);  // 170D2h
    void sortFaces(uint32_t lo, uint32_t hi);                                // 16CA4h
    void project();                                                          // 1759Ch
    void envMap();                                                           // 175F0h
    void fetch(uint32_t face, uint32_t array, uint32_t dst, uint8_t sh1, uint8_t sh2);  // 16D0Fh
    void render();                                                           // 17942h
    void span(uint32_t dst, uint32_t count);                                 // 16BD8h, 16C19h
    void fill(int n);                                                        // 16078h, 16601h
    // tubes (tube.cpp): a path gives a position and tangent for u (and a radius on the x87 stack)
    using Path = void (Demo::*)(uint32_t pos, uint32_t tan, float u);
    void gridFaces(uint32_t obj, int32_t w, int32_t h, uint8_t m1, uint8_t m2);  // 17F6Dh
    void tubeTex(uint32_t dst, int32_t n1, int32_t n2, int32_t su, int32_t sv);  // 18276h
    void sweep(uint32_t verts, uint32_t norms, uint32_t mx, int32_t n1, int32_t n2, Path path, float twist,
               float phase);                                                     // 1806Fh
    void tube(uint32_t obj, int32_t n1, int32_t n2, Path path, float twist, float phase, int32_t su,
              int32_t sv);                                                       // 182FEh
    void path5(uint32_t pos, uint32_t tan, float u);                             // 19C1Ah
    void path7(uint32_t pos, uint32_t tan, float u);                             // 1A010h
    // part 9 (part9.cpp)
    void warp(uint32_t table, uint32_t src, uint32_t tex, uint32_t dst);        // 16EF8h
    void path9(uint32_t pos, uint32_t tan, float u);                            // 1A4FAh
    // part 8 (part8.cpp): the grid of 41 x 26 points (u, v, light; 12 bytes each)
    void gridMap(uint32_t dst, uint32_t grid, uint32_t tex, uint32_t light);    // 14DF4h
    void blend(uint32_t dst, uint32_t a, uint32_t b, int32_t wa, int32_t wb);   // 150BEh
    void tunnel(uint32_t grid, float p1, float p2, float p3, int32_t p4, int32_t p5, float p6);  // 1C5CBh
    void ease(float x);                                                         // 1C706h (to ST0)
    void cosPos(float x);                                                       // 1C746h (to ST0)
    void bubbles(uint32_t grid, float t);                                       // 1CB2Bh
    void wobble(uint32_t grid, float t);                                        // 1CDF8h
    static constexpr uint32_t S_ = 0x2B464;                                       // the scene
    // the rotozoomer (roto.cpp)
    void mapper(uint32_t dst, uint32_t tex, uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy,
                int32_t dvy, int32_t bx, int32_t by, int32_t pitch, uint8_t mode);       // 14BDBh
    void roto(float angle, int32_t zoom, int32_t cx, int32_t cy, uint32_t tex, int32_t mode);  // 1B8E3h

    // part 1's blur (1ADE4h, 150ECh)
    void blurStep(uint32_t dst, uint32_t src);
    void blurRow(uint32_t dst, uint32_t src, uint32_t& carry, int n);       // 150ECh
    // part 6's
    int32_t rnd();                                                           // 1BE56h
    void blurRow256(uint32_t dst, uint32_t src, uint32_t& carry, int n);    // 15143h
    void textDown(uint32_t x, uint32_t s, uint32_t font);                    // 1BD5Eh
    void textOver(uint32_t dst, int32_t y, uint32_t s, uint32_t font);       // 1BDC4h
    // part 2's
    void text(int32_t y, int32_t x, uint32_t s, uint32_t font);              // 1B184h
    void blit(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t src);     // 1B1EEh
    void palette8(uint32_t dst);                                             // 189ECh

    // --- vector routines (15D34h-16075h): 3-float vectors, 3x4 matrices ----------
    void dot(uint32_t a, uint32_t b);           // 15D34h: ST0 = a.b
    void len2(uint32_t a);                      // 15D49h: ST0 = a.a
    void vadd(uint32_t a, uint32_t b, uint32_t d);   // 15D5Eh
    void vsub(uint32_t a, uint32_t b, uint32_t d);   // 15D77h
    void vscale(uint32_t a, uint32_t d);        // 15D90h: d = a * ST0 (popped)
    void cross(uint32_t a, uint32_t b, uint32_t d);  // 15DA5h
    void vrot(uint32_t a, uint32_t b, uint32_t d);   // 15DD4h: d = a cos ST0 + b sin ST0
    void normalize(uint32_t a, uint32_t d);     // 15DFFh
    void triple(uint32_t a, uint32_t b, uint32_t c); // 15E1Fh: ST0 = (a x b).c
    void transform(uint32_t src, uint32_t m, uint32_t dst, uint32_t n);      // 15E52h
    void rotate(uint32_t src, uint32_t m, uint32_t dst, uint32_t n);         // 15EB2h
    void lerp(uint32_t a, uint32_t b, uint32_t d, uint32_t n);  // 15F09h: a ST0 + b (1 - ST0)
    void identity(uint32_t m);                  // 15F4Dh
    void translation(uint32_t v, uint32_t m);   // 15F67h
    void axisAngle(uint32_t axis, uint32_t m);  // 15F7Eh: rotation by ST0 about AXIS
    void translate(uint32_t v, uint32_t m);     // 1600Ah
    void matmul(uint32_t a, uint32_t b, uint32_t d);  // 16025h

    // player
    void tables();                      // 1519Ch
    void upload(uint32_t src, uint32_t n);  // 15C2Dh: the samples to DRAM 0
    void gusInit(uint32_t voices);      // 159EEh
    void gusStart();                    // 15BFDh
    void gusStop();                     // 15C1Ch
    void tick();                        // 15510h
    void note();                        // 152F7h
    int32_t clampPeriod(int32_t p);     // 15435h
    uint32_t pitch(int32_t p);          // 152A5h
    void voices();                      // 15B00h
    void rampTo(uint32_t edx);          // 15A7Ah
    void rampDown();                    // 15AE0h
    // GUS register access (15927h...): BL = register, AL/AX = value
    void gusOut(uint32_t off, uint8_t v);
    void gusReg8(uint8_t r, uint8_t v);     // 1592Fh
    void gusReg8w(uint8_t r, uint8_t v);    // 15947h: twice, 159ACh's 7 reads between
    void gusReg16(uint8_t r, uint16_t v);   // 15969h
    uint8_t gusRead8(uint8_t r);            // 1597Fh
    uint16_t gusRead16(uint8_t r);          // 15996h
    void gusDelay();                        // 159ACh
    void gusVoice(uint8_t v);               // 159BFh
    void gusAddr(uint8_t r, uint32_t a);    // 159CFh

    // the player's registers (as the code has them)
    uint32_t A = 0, B = 0, C = 0, D = 0, SI = 0, DI = 0;
    static constexpr uint32_t BP = 0x295BC;
};

}  // namespace lasse
