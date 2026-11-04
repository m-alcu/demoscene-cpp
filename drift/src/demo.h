// DRIFT's program: the set-up (the menus' choice taken as GUS, 220h, IRQ
// 11), the sample synthesis and the precalculation, then the parts in turn,
// each started at a music position:
//
//   21843h  the fire logo (FECBh)                       from position 1
//   21893h  the vector part (1A896h)                    from position 80h
//   218C8h  the Julia morpher (1CAADh)                  from position 540h
//   21909h  Julia and vectors (1CB48h, 1AD1Dh)
//   21944h  Julia, vectors and the wave (1C924h)
//   21989h  Julia and vectors again, the vector ending (1AD70h)
//   1D5DFh  the end scroller, mode 12h
//
// The timer (IRQ 0, 70 Hz) counts frames in 209A0h and calls the part's
// callback from the table at 20980h, indexed by the state in 2097Ch.
#pragma once

#include <cstdint>
#include <functional>

#include "machine.h"
#include "player.h"

namespace drift {

class Demo {
public:
    explicit Demo(Machine& m) : m_(m), player_(m) {}

    void run();                         // the program, on the machine's thread
    Player& player() { return player_; }

private:
    // the main program
    void setup();                       // 213A5h (the GUS part) and 21570h
    void shutdown();                    // 2172Fh
    void timer();                       // 219D0h, IRQ 0
    void callback(uint32_t state);
    bool posWait(uint32_t pos);         // a loop on 21804h: false on Esc
    bool posBelow(uint32_t pos, bool& esc);     // 21804h: CF
    void fade(uint32_t from, uint32_t to, uint32_t steps, uint32_t count, uint32_t step);  // 21A64h
    void setPalette(uint32_t src, uint32_t count, uint8_t first);                          // 1B7A3h
    bool esc() const { return m_.key == 1; }

    void makeSamples(uint32_t module);  // EAEAh

    // the parts
    bool part1();                       // 21843h
    bool part2();                       // 21893h
    bool part3();                       // 218C8h
    bool part4();                       // 21909h
    bool part5();                       // 21944h
    bool part6();                       // 21989h

    // the fire logo (FE86h-100D3h)
    void fireTick(uint8_t al);          // FE86h
    bool fire();                        // FECBh: false on Esc
    void fireFrame();                   // FFAEh
    void fireSparks();                  // 10050h

    // the engine (10918h-11EBDh)
    uint32_t sqrt(uint32_t n);          // 11A0Ch
    void objInit(uint32_t list, uint32_t edi);  // 10918h
    void faceNormals();                 // 10A00h
    void vertexNormals();               // 10BE1h
    void matrix();                      // 10D10h
    void transform();                   // 10F70h
    void transformNormals();            // 11040h
    void sortFaces(uint32_t list);      // 11123h
    void light();                       // 11560h
    void draw();                        // 11610h
    void clipEdgeShaded(uint32_t ebx, uint32_t ebp, uint32_t esi, uint32_t& edi);   // 117B3h
    void edgeShaded(int32_t x0, int32_t y0, uint16_t s0, int32_t x1, int32_t y1, uint16_t s1);  // 11901h
    void clipEdge(uint32_t ebx, uint32_t esi, uint32_t& edi);  // 113BCh
    void edge(int32_t x0, int32_t y0, int32_t x1, int32_t y1);  // 1149Dh
    void ripplePrecalc();               // 11C38h
    void distances();                   // 11E87h

    // the vector parts (1A896h-1BBD2h)
    void precalc();                     // 1B12Bh
    void precalcPictures();             // 1B47Dh
    uint32_t makeTube(uint32_t edi);    // 1B5F4h
    uint32_t unpackObjects(uint32_t list, uint32_t edi);  // 1B6DEh
    void fadeStep();                    // 1B36Dh
    void rippleStep();                  // 1B381h
    void drawRoom();                    // 1B3F8h
    void drawObjects();                 // 1B428h
    void addPicture(uint32_t src);      // 1B740h
    void show();                        // 1B758h
    void addRipple(uint32_t src, uint32_t ripple);  // 1B778h
    void faceStyle(uint32_t obj, uint32_t eax);     // 1B7B0h
    void shadowProject();               // 1B7D0h
    void shadowDraw();                  // 1B8C0h
    void modeX();                       // 1BACFh
    void mode13();                      // 1BAF0h
    void modeXBackground();             // 1BB4Eh
    void waitFrame();                   // 11C18h
    bool sceneLoop(uint32_t end, const std::function<void()>& frame, uint32_t from, uint32_t to);
    void fadeSetup(uint32_t to, uint32_t step0);
    void vectorTick();                  // 1B228h
    void vectors();                     // 1A896h
    void vectorsReset();                // 1B182h
    bool vectorsFlight();               // 1AD1Dh: true at its end
    void vectorsSpin();                 // 1B1ECh
    bool vectorsSpinFrame();            // 1AD51h: true at its end
    bool vectorsEnd();                  // 1AD70h

    // the Julia morpher and the wave (1C924h-1D39Bh)
    void juliaTick();                   // 1CA39h
    void waveTick();                    // 1C9F1h
    bool julia(uint32_t base);          // 1CAADh
    void juliaStep();                   // 1CB48h
    bool wave();                        // 1C924h: true at its end
    void flip();                        // 1D1E2h

    bool juliaRun();                    // 1CB48h
    bool juliaNext();                   // 1D238h
    bool juliaKey();                    // 1D341h
    void flipPage();                    // 1CFD0h
    void planes(uint8_t mask);          // 1CFF4h
    void skyPage();                     // 1D004h
    void skyBuffer();                   // 1D044h
    void sky(uint32_t edi, uint32_t width, bool page);
    void landscape();                   // 1D063h
    bool greetWord();                   // 1C94Dh
    void vramAt(uint32_t off, uint8_t v);

    bool endScroller();                 // 1D5DFh
    void centreLine();                  // 1D677h
    uint32_t textRow();                 // 1D6ABh
    void glyphRow(uint32_t x, uint32_t g);  // 1D730h
    void blankRow();                    // 1D777h
    void scrollLine();                  // 1D7B1h

    // VRAM through a selector of base A0000h
    void vram8(uint32_t off, uint8_t v) { m_.vga.write(off, v); }
    void vram32(uint32_t off, uint32_t v) {
        for (int k = 0; k < 4; k++) m_.vga.write(off + k, (uint8_t)(v >> (8 * k)));
    }

    Machine& m_;
    Player player_;
    uint32_t heapBase_ = 0;             // the base of selector A0h, the frame buffer's
};

}  // namespace drift
