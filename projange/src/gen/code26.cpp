// Program 26, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_26(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f10: goto L24f10;
    case 0x24f12: goto L24f12;
    case 0x24f18: goto L24f18;
    case 0x24f20: goto L24f20;
    case 0x24f22: goto L24f22;
    case 0x24f32: goto L24f32;
    case 0x24f37: goto L24f37;
    default: c.callLinear(t); return;
    }
L24f10:
    if (c.tracing) c.traceAt(0x24f10);
    // 24f1:0000  mov bl, 3  [x1]
    c.b.l = (uint8_t)(0x3u);
L24f12:
    if (c.tracing) c.traceAt(0x24f12);
    // 24f1:0002  in al, 0x64  [x3]
    c.ip = 0x4u; c.d32 = false; c.a.l = c.in8(0x64);
    // 24f1:0004  test al, 2  [x3]
    c.logic<8>((c.a.l) & (0x2u), true);
    // 24f1:0006  loopne 2  [x3]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x && !c.zf) goto L24f12;
L24f18:
    if (c.tracing) c.traceAt(0x24f18);
    // 24f1:0008  mov al, 0xae  [x3]
    c.a.l = (uint8_t)(0xaeu);
    // 24f1:000a  out 0x64, al  [x3]
    c.ip = 0xcu; c.d32 = false; c.out8(0x64, c.a.l);
    // 24f1:000c  dec bl  [x3]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 24f1:000e  jne 2  [x3]
    if (!c.zf) goto L24f12;
L24f20:
    if (c.tracing) c.traceAt(0x24f20);
    // 24f1:0010  int 0xfc  [x1]
    c.ip = 0x12u; c.d32 = false; c.intr(0xfc, 0x12u);
L24f22:
    if (c.tracing) c.traceAt(0x24f22);
    // 24f1:0012  mov edi, ebx  [x1]
    c.di.e = (uint32_t)(c.b.e);
    // 24f1:0015  push cs  [x1]
    c.push16(c.cs);
    // 24f1:0016  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 24f1:0017  mov eax, ebx  [x1]
    c.a.e = (uint32_t)(c.b.e);
    // 24f1:001a  mov bx, 6  [x1]
    c.b.x = (uint16_t)(0x6u);
    // 24f1:001d  mov cx, 0x2504  [x1]
    c.c.x = (uint16_t)(0x2504u);
    // 24f1:0020  int 0xff  [x1]
    c.ip = 0x22u; c.d32 = false; c.intr(0xff, 0x22u);
L24f32:
    if (c.tracing) c.traceAt(0x24f32);
    // 24f1:0022  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 24f1:0025  int 0xff  [x1]
    c.ip = 0x27u; c.d32 = false; c.intr(0xff, 0x27u);
L24f37:
    if (c.tracing) c.traceAt(0x24f37);
    // 24f1:0027  mov ax, 0x4c00  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 24f1:002a  int 0x21  [x1]
    c.ip = 0x2cu; c.d32 = false; c.intr(0x21, 0x2cu);
    c.notTranslated(0x24f3c, "fall-through");
}

static Register reg26(26, {0x24f10, 0x24f12, 0x24f18, 0x24f20, 0x24f22, 0x24f32, 0x24f37}, code_26);

}  // namespace angel
