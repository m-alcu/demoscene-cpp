// Program 8, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_8(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f10: goto L24f10;
    case 0x24f20: goto L24f20;
    case 0x24f29: goto L24f29;
    case 0x24f32: goto L24f32;
    case 0x24f3b: goto L24f3b;
    case 0x24f44: goto L24f44;
    case 0x24f4d: goto L24f4d;
    case 0x24f52: goto L24f52;
    case 0x24f57: goto L24f57;
    case 0x24f5c: goto L24f5c;
    case 0x24f5d: goto L24f5d;
    case 0x24f5e: goto L24f5e;
    case 0x24f62: goto L24f62;
    case 0x24f63: goto L24f63;
    case 0x24f67: goto L24f67;
    case 0x24f6e: goto L24f6e;
    case 0x24f71: goto L24f71;
    case 0x24f74: goto L24f74;
    default: c.callLinear(t); return;
    }
L24f10:
    if (c.tracing) c.traceAt(0x24f10);
    // 24f1:0000  push cs  [x1]
    c.push16(c.cs);
    // 24f1:0001  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 24f1:0002  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
    // 24f1:0005  mov al, 0x40  [x1]
    c.a.l = (uint8_t)(0x40u);
    // 24f1:0007  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
    // 24f1:000a  mov bx, 1  [x1]
    c.b.x = (uint16_t)(0x1u);
    // 24f1:000d  call 0x47  [x1]
    c.push16(0x10u); code_8(c, 0x24f57u); if (c.ip != 0x10u) c.badReturn(0x24f1d);
L24f20:
    if (c.tracing) c.traceAt(0x24f20);
    // 24f1:0010  mov bx, 2  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 24f1:0013  mov cx, 0x10  [x1]
    c.c.x = (uint16_t)(0x10u);
    // 24f1:0016  call 0x47  [x1]
    c.push16(0x19u); code_8(c, 0x24f57u); if (c.ip != 0x19u) c.badReturn(0x24f26);
L24f29:
    if (c.tracing) c.traceAt(0x24f29);
    // 24f1:0019  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 24f1:001c  mov cx, 8  [x1]
    c.c.x = (uint16_t)(0x8u);
    // 24f1:001f  call 0x47  [x1]
    c.push16(0x22u); code_8(c, 0x24f57u); if (c.ip != 0x22u) c.badReturn(0x24f2f);
L24f32:
    if (c.tracing) c.traceAt(0x24f32);
    // 24f1:0022  mov bx, 8  [x1]
    c.b.x = (uint16_t)(0x8u);
    // 24f1:0025  mov cx, 4  [x1]
    c.c.x = (uint16_t)(0x4u);
    // 24f1:0028  call 0x47  [x1]
    c.push16(0x2bu); code_8(c, 0x24f57u); if (c.ip != 0x2bu) c.badReturn(0x24f38);
L24f3b:
    if (c.tracing) c.traceAt(0x24f3b);
    // 24f1:002b  mov bx, 0x10  [x1]
    c.b.x = (uint16_t)(0x10u);
    // 24f1:002e  mov cx, 2  [x1]
    c.c.x = (uint16_t)(0x2u);
    // 24f1:0031  call 0x47  [x1]
    c.push16(0x34u); code_8(c, 0x24f57u); if (c.ip != 0x34u) c.badReturn(0x24f41);
L24f44:
    if (c.tracing) c.traceAt(0x24f44);
    // 24f1:0034  mov bx, 0x20  [x1]
    c.b.x = (uint16_t)(0x20u);
    // 24f1:0037  mov cx, 2  [x1]
    c.c.x = (uint16_t)(0x2u);
    // 24f1:003a  call 0x47  [x1]
    c.push16(0x3du); code_8(c, 0x24f57u); if (c.ip != 0x3du) c.badReturn(0x24f4a);
L24f4d:
    if (c.tracing) c.traceAt(0x24f4d);
    // 24f1:003d  mov bx, 2  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 24f1:0040  int 0xff  [x1]
    c.ip = 0x42u; c.d32 = false; c.intr(0xff, 0x42u);
L24f52:
    if (c.tracing) c.traceAt(0x24f52);
    // 24f1:0042  mov ax, 0x4c00  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 24f1:0045  int 0x21  [x1]
    c.ip = 0x47u; c.d32 = false; c.intr(0x21, 0x47u);
L24f57:
    if (c.tracing) c.traceAt(0x24f57);
    // 24f1:0047  push cx  [x64]
    c.push16(c.c.x);
    // 24f1:0048  mov cx, bx  [x64]
    c.c.x = (uint16_t)(c.b.x);
    // 24f1:004a  dec al  [x64]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, true));
L24f5c:
    if (c.tracing) c.traceAt(0x24f5c);
    // 24f1:004c  push ax  [x224]
    c.push16(c.a.x);
L24f5d:
    if (c.tracing) c.traceAt(0x24f5d);
    // 24f1:004d  in al, dx  [x4863]
    c.ip = 0x4eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24f5e:
    if (c.tracing) c.traceAt(0x24f5e);
    // 24f1:004e  test al, 8  [x6424]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 24f1:0050  je 0x4d  [x6424]
    if (c.zf) goto L24f5d;
L24f62:
    if (c.tracing) c.traceAt(0x24f62);
    // 24f1:0052  in al, dx  [x580]
    c.ip = 0x53u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24f63:
    if (c.tracing) c.traceAt(0x24f63);
    // 24f1:0053  test al, 8  [x848]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 24f1:0055  jne 0x52  [x848]
    if (!c.zf) goto L24f62;
L24f67:
    if (c.tracing) c.traceAt(0x24f67);
    // 24f1:0057  pop ax  [x224]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 24f1:0058  push bx  [x224]
    c.push16(c.b.x);
    // 24f1:0059  mov bx, 8  [x224]
    c.b.x = (uint16_t)(0x8u);
    // 24f1:005c  int 0xff  [x224]
    c.ip = 0x5eu; c.d32 = false; c.intr(0xff, 0x5eu);
L24f6e:
    if (c.tracing) c.traceAt(0x24f6e);
    // 24f1:005e  pop bx  [x224]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 24f1:005f  loop 0x4c  [x224]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24f5c;
L24f71:
    if (c.tracing) c.traceAt(0x24f71);
    // 24f1:0061  pop cx  [x64]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 24f1:0062  loop 0x47  [x64]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24f57;
L24f74:
    if (c.tracing) c.traceAt(0x24f74);
    // 24f1:0064  ret   [x6]
    c.ip = c.pop16(); return;
}

static Register reg08(8, {0x24f10, 0x24f20, 0x24f29, 0x24f32, 0x24f3b, 0x24f44, 0x24f4d, 0x24f52, 0x24f57, 0x24f5c, 0x24f5d, 0x24f5e, 0x24f62, 0x24f63, 0x24f67, 0x24f6e, 0x24f71, 0x24f74}, code_8);

}  // namespace angel
