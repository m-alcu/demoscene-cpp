// Program 28, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_28(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f10: goto L24f10;
    case 0x24f12: goto L24f12;
    case 0x24f17: goto L24f17;
    case 0x24f1c: goto L24f1c;
    case 0x24f29: goto L24f29;
    case 0x24f36: goto L24f36;
    case 0x24f43: goto L24f43;
    case 0x24f50: goto L24f50;
    default: c.callLinear(t); return;
    }
L24f10:
    if (c.tracing) c.traceAt(0x24f10);
    // 24e1:0100  int 0xfe  [x1]
    c.ip = 0x102u; c.d32 = false; c.intr(0xfe, 0x102u);
L24f12:
    if (c.tracing) c.traceAt(0x24f12);
    // 24e1:0102  mov bx, 2  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 24e1:0105  int 0xff  [x1]
    c.ip = 0x107u; c.d32 = false; c.intr(0xff, 0x107u);
L24f17:
    if (c.tracing) c.traceAt(0x24f17);
    // 24e1:0107  mov bx, 0xc  [x1]
    c.b.x = (uint16_t)(0xcu);
    // 24e1:010a  int 0xff  [x1]
    c.ip = 0x10cu; c.d32 = false; c.intr(0xff, 0x10cu);
L24f1c:
    if (c.tracing) c.traceAt(0x24f1c);
    // 24e1:010c  mov bx, word ptr [0x3fe]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3feu)));
    // 24e1:0110  sub bx, 0x10  [x1]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x10u, true));
    // 24e1:0113  mov es, bx  [x1]
    c.loadEs(c.b.x);
    // 24e1:0115  mov ah, 0x49  [x1]
    c.a.h = (uint8_t)(0x49u);
    // 24e1:0117  int 0x21  [x1]
    c.ip = 0x119u; c.d32 = false; c.intr(0x21, 0x119u);
L24f29:
    if (c.tracing) c.traceAt(0x24f29);
    // 24e1:0119  mov bx, word ptr [0x3f2]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3f2u)));
    // 24e1:011d  sub bx, 0x10  [x1]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x10u, true));
    // 24e1:0120  mov es, bx  [x1]
    c.loadEs(c.b.x);
    // 24e1:0122  mov ah, 0x49  [x1]
    c.a.h = (uint8_t)(0x49u);
    // 24e1:0124  int 0x21  [x1]
    c.ip = 0x126u; c.d32 = false; c.intr(0x21, 0x126u);
L24f36:
    if (c.tracing) c.traceAt(0x24f36);
    // 24e1:0126  mov bx, word ptr [0x3ee]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3eeu)));
    // 24e1:012a  sub bx, 0x10  [x1]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x10u, true));
    // 24e1:012d  mov es, bx  [x1]
    c.loadEs(c.b.x);
    // 24e1:012f  mov ah, 0x49  [x1]
    c.a.h = (uint8_t)(0x49u);
    // 24e1:0131  int 0x21  [x1]
    c.ip = 0x133u; c.d32 = false; c.intr(0x21, 0x133u);
L24f43:
    if (c.tracing) c.traceAt(0x24f43);
    // 24e1:0133  mov bx, word ptr [0x3ea]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3eau)));
    // 24e1:0137  sub bx, 0x10  [x1]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x10u, true));
    // 24e1:013a  mov es, bx  [x1]
    c.loadEs(c.b.x);
    // 24e1:013c  mov ah, 0x49  [x1]
    c.a.h = (uint8_t)(0x49u);
    // 24e1:013e  int 0x21  [x1]
    c.ip = 0x140u; c.d32 = false; c.intr(0x21, 0x140u);
L24f50:
    if (c.tracing) c.traceAt(0x24f50);
    // 24e1:0140  mov ax, 0x4c00  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 24e1:0143  int 0x21  [x1]
    c.ip = 0x145u; c.d32 = false; c.intr(0x21, 0x145u);
    c.notTranslated(0x24f55, "fall-through");
}

static Register reg28(28, {0x24f10, 0x24f12, 0x24f17, 0x24f1c, 0x24f29, 0x24f36, 0x24f43, 0x24f50}, code_28);

}  // namespace angel
