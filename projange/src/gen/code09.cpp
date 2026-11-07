// Program 9, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_9(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f10: goto L24f10;
    case 0x24f12: goto L24f12;
    case 0x24f25: goto L24f25;
    case 0x24f2a: goto L24f2a;
    default: c.callLinear(t); return;
    }
L24f10:
    if (c.tracing) c.traceAt(0x24f10);
    // 24f1:0000  int 0xfc  [x1]
    c.ip = 0x2u; c.d32 = false; c.intr(0xfc, 0x2u);
L24f12:
    if (c.tracing) c.traceAt(0x24f12);
    // 24f1:0002  mov edi, ebx  [x1]
    c.di.e = (uint32_t)(c.b.e);
    // 24f1:0005  push cs  [x1]
    c.push16(c.cs);
    // 24f1:0006  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 24f1:0007  mov dx, 0x1f  [x1]
    c.dx_.x = (uint16_t)(0x1fu);
    // 24f1:000a  mov eax, ebx  [x1]
    c.a.e = (uint32_t)(c.b.e);
    // 24f1:000d  mov bx, 6  [x1]
    c.b.x = (uint16_t)(0x6u);
    // 24f1:0010  mov cx, 0x2504  [x1]
    c.c.x = (uint16_t)(0x2504u);
    // 24f1:0013  int 0xff  [x1]
    c.ip = 0x15u; c.d32 = false; c.intr(0xff, 0x15u);
L24f25:
    if (c.tracing) c.traceAt(0x24f25);
    // 24f1:0015  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 24f1:0018  int 0xff  [x1]
    c.ip = 0x1au; c.d32 = false; c.intr(0xff, 0x1au);
L24f2a:
    if (c.tracing) c.traceAt(0x24f2a);
    // 24f1:001a  mov ax, 0x4c00  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 24f1:001d  int 0x21  [x1]
    c.ip = 0x1fu; c.d32 = false; c.intr(0x21, 0x1fu);
    c.notTranslated(0x24f2f, "fall-through");
}

static Register reg09(9, {0x24f10, 0x24f12, 0x24f25, 0x24f2a}, code_9);

}  // namespace angel
