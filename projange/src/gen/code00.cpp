// Program 0, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_0(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24e0: goto L024e0;
    case 0x24f0: goto L024f0;
    case 0x24fb: goto L024fb;
    case 0x2501: goto L02501;
    case 0x250e: goto L0250e;
    case 0x2611: goto L02611;
    case 0x2616: goto L02616;
    case 0x275a: goto L0275a;
    case 0x276f: goto L0276f;
    case 0x2882: goto L02882;
    case 0x299b: goto L0299b;
    case 0x299f: goto L0299f;
    case 0x29a4: goto L029a4;
    case 0x29b0: goto L029b0;
    case 0x2c7c: goto L02c7c;
    case 0x2c81: goto L02c81;
    case 0x2c8d: goto L02c8d;
    case 0x2c96: goto L02c96;
    case 0x2c9d: goto L02c9d;
    case 0x2ca6: goto L02ca6;
    case 0x2cac: goto L02cac;
    case 0x310a: goto L0310a;
    case 0x3118: goto L03118;
    case 0x3125: goto L03125;
    case 0x312f: goto L0312f;
    case 0x313a: goto L0313a;
    case 0x3141: goto L03141;
    case 0x3146: goto L03146;
    case 0x3149: goto L03149;
    case 0x314b: goto L0314b;
    case 0x3151: goto L03151;
    case 0x3164: goto L03164;
    case 0x3177: goto L03177;
    case 0x318a: goto L0318a;
    case 0x318d: goto L0318d;
    case 0x3190: goto L03190;
    case 0x3193: goto L03193;
    default: c.callLinear(t); return;
    }
L024e0:
    if (c.tracing) c.traceAt(0x24e0);
    // 024e:0000  mov ax, word ptr [0x534]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x534u)));
    // 024e:0003  shl ax, 1  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 024e:0005  mov si, 0x6d4  [x1]
    c.si.x = (uint16_t)(0x6d4u);
    // 024e:0008  add si, ax  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, true));
    // 024e:000a  mov ax, word ptr [si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 024e:000c  mov word ptr [0x53e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x53eu), c.a.x);
    // 024e:000f  ret   [x1]
    c.ip = c.pop16(); return;
L024f0:
    if (c.tracing) c.traceAt(0x24f0);
    // 024e:0010  xor eax, eax  [x1]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 024e:0013  mov ax, word ptr [0x534]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x534u)));
    // 024e:0016  cmp ax, 0  [x1]
    c.sub<16>(c.a.x, 0x0u, true);
    // 024e:0019  jge 0x21  [x1]
    if ((c.sf == c.of)) goto L02501;
L024fb:
    if (c.tracing) c.traceAt(0x24fb);
    // 024e:001b  neg ax  [x1]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 024e:001d  neg word ptr [0x534]  [x1]
    c.w16(c.dsb + (uint16_t)(0x534u), c.neg<16>(c.r16(c.dsb + (uint16_t)(0x534u)), false));
L02501:
    if (c.tracing) c.traceAt(0x2501);
    // 024e:0021  shl ax, 1  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 024e:0023  mov si, 0x544  [x1]
    c.si.x = (uint16_t)(0x544u);
    // 024e:0026  add si, ax  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, true));
    // 024e:0028  mov ax, word ptr [si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 024e:002a  mov word ptr [0x53a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x53au), c.a.x);
    // 024e:002d  ret   [x1]
    c.ip = c.pop16(); return;
L0250e:
    if (c.tracing) c.traceAt(0x250e);
    // 024e:002e  jmp word ptr [0x53a]  [x3]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(0x53au))); goto dispatch;
L02611:
    if (c.tracing) c.traceAt(0x2611);
    // 024e:0131  mov ax, 0x13  [x3]
    c.a.x = (uint16_t)(0x13u);
    // 024e:0134  int 0x10  [x3]
    c.ip = 0x136u; c.d32 = false; c.intr(0x10, 0x136u);
L02616:
    if (c.tracing) c.traceAt(0x2616);
    // 024e:0136  mov eax, 0xa0000  [x3]
    c.a.e = (uint32_t)(0xa0000u);
    // 024e:013c  ret   [x3]
    c.ip = c.pop16(); return;
L0275a:
    if (c.tracing) c.traceAt(0x275a);
    // 024e:027a  push ax  [x1]
    c.push16(c.a.x);
    // 024e:027b  xor eax, eax  [x1]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 024e:027e  mov ax, word ptr [0x534]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x534u)));
    // 024e:0281  shl ax, 1  [x1]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 024e:0283  mov si, 0x60c  [x1]
    c.si.x = (uint16_t)(0x60cu);
    // 024e:0286  add si, ax  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, true));
    // 024e:0288  mov ax, word ptr [si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 024e:028a  mov word ptr [0x53c], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x53cu), c.a.x);
    // 024e:028d  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 024e:028e  ret   [x1]
    c.ip = c.pop16(); return;
L0276f:
    if (c.tracing) c.traceAt(0x276f);
    // 024e:028f  jmp word ptr [0x53c]  [x5355]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(0x53cu))); goto dispatch;
L02882:
    if (c.tracing) c.traceAt(0x2882);
    // 024e:03a2  push ax  [x5355]
    c.push16(c.a.x);
    // 024e:03a3  mov dx, 0x3d4  [x5355]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:03a6  mov al, 0x38  [x5355]
    c.a.l = (uint8_t)(0x38u);
    // 024e:03a8  out dx, al  [x5355]
    c.ip = 0x3a9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03a9  inc dx  [x5355]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 024e:03aa  mov al, 0x48  [x5355]
    c.a.l = (uint8_t)(0x48u);
    // 024e:03ac  out dx, al  [x5355]
    c.ip = 0x3adu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03ad  mov dx, 0x3d4  [x5355]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:03b0  mov al, 0x39  [x5355]
    c.a.l = (uint8_t)(0x39u);
    // 024e:03b2  out dx, al  [x5355]
    c.ip = 0x3b3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03b3  inc dx  [x5355]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 024e:03b4  mov al, 0xa5  [x5355]
    c.a.l = (uint8_t)(0xa5u);
    // 024e:03b6  out dx, al  [x5355]
    c.ip = 0x3b7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03b7  mov dx, 0x3d4  [x5355]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:03ba  mov al, 0x31  [x5355]
    c.a.l = (uint8_t)(0x31u);
    // 024e:03bc  out dx, al  [x5355]
    c.ip = 0x3bdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03bd  inc dx  [x5355]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 024e:03be  in al, dx  [x5355]
    c.ip = 0x3bfu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 024e:03bf  or al, 9  [x5355]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x9u), true));
    // 024e:03c1  out dx, al  [x5355]
    c.ip = 0x3c2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03c2  pop ax  [x5355]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 024e:03c3  mov ah, al  [x5355]
    c.a.h = (uint8_t)(c.a.l);
    // 024e:03c5  mov dx, 0x3d4  [x5355]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:03c8  mov al, 0x35  [x5355]
    c.a.l = (uint8_t)(0x35u);
    // 024e:03ca  out dx, al  [x5355]
    c.ip = 0x3cbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03cb  inc dx  [x5355]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 024e:03cc  mov al, ah  [x5355]
    c.a.l = (uint8_t)(c.a.h);
    // 024e:03ce  out dx, al  [x5355]
    c.ip = 0x3cfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 024e:03cf  ret   [x5355]
    c.ip = c.pop16(); return;
L0299b:
    if (c.tracing) c.traceAt(0x299b);
    // 024e:04bb  jmp word ptr [0x53e]  [x5354]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(0x53eu))); goto dispatch;
L0299f:
    if (c.tracing) c.traceAt(0x299f);
    // 024e:04bf  cmp ax, 0  [x5354]
    c.sub<16>(c.a.x, 0x0u, true);
    // 024e:04c2  je 0x4d0  [x5354]
    if (c.zf) goto L029b0;
L029a4:
    if (c.tracing) c.traceAt(0x29a4);
    // 024e:04c4  mov dx, 0x3d4  [x2674]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:04c7  mov ax, 0x400c  [x2674]
    c.a.x = (uint16_t)(0x400cu);
    // 024e:04ca  out dx, ax  [x2674]
    c.ip = 0x4cbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 024e:04cb  mov ax, 0xd  [x2674]
    c.a.x = (uint16_t)(0xdu);
    // 024e:04ce  out dx, ax  [x2674]
    c.ip = 0x4cfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 024e:04cf  ret   [x2674]
    c.ip = c.pop16(); return;
L029b0:
    if (c.tracing) c.traceAt(0x29b0);
    // 024e:04d0  mov dx, 0x3d4  [x2680]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 024e:04d3  mov ax, 0xc  [x2680]
    c.a.x = (uint16_t)(0xcu);
    // 024e:04d6  out dx, ax  [x2680]
    c.ip = 0x4d7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 024e:04d7  mov ax, 0xd  [x2680]
    c.a.x = (uint16_t)(0xdu);
    // 024e:04da  out dx, ax  [x2680]
    c.ip = 0x4dbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 024e:04db  ret   [x2680]
    c.ip = c.pop16(); return;
L02c7c:
    if (c.tracing) c.traceAt(0x2c7c);
    // 024e:079c  jmp word ptr cs:[bx + 0x7ce]  [x10712]
    t = c.csb + (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x7ceu))); goto dispatch;
L02c81:
    if (c.tracing) c.traceAt(0x2c81);
    // 024e:07a1  push ds  [x3]
    c.push16(c.ds);
    // 024e:07a2  push cs  [x3]
    c.push16(c.cs);
    // 024e:07a3  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07a4  mov eax, 0xa0000  [x3]
    c.a.e = (uint32_t)(0xa0000u);
    // 024e:07aa  call 0x2e  [x3]
    c.push16(0x7adu); code_0(c, 0x250eu); if (c.ip != 0x7adu) c.badReturn(0x2c8a);
L02c8d:
    if (c.tracing) c.traceAt(0x2c8d);
    // 024e:07ad  shr eax, 4  [x3]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x4u) & 31), true));
    // 024e:07b1  mov word ptr [0x542], ax  [x3]
    c.w16(c.dsb + (uint16_t)(0x542u), c.a.x);
    // 024e:07b4  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07b5  iret   [x3]
    c.iret(); return;
L02c96:
    if (c.tracing) c.traceAt(0x2c96);
    // 024e:07b6  push ds  [x5355]
    c.push16(c.ds);
    // 024e:07b7  push cs  [x5355]
    c.push16(c.cs);
    // 024e:07b8  pop ds  [x5355]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07b9  push ax  [x5355]
    c.push16(c.a.x);
    // 024e:07ba  call 0x28f  [x5355]
    c.push16(0x7bdu); code_0(c, 0x276fu); if (c.ip != 0x7bdu) c.badReturn(0x2c9a);
L02c9d:
    if (c.tracing) c.traceAt(0x2c9d);
    // 024e:07bd  pop bx  [x5355]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 024e:07be  add bx, bx  [x5355]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, true));
    // 024e:07c0  mov ax, word ptr [bx + 0x540]  [x5355]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x540u)));
    // 024e:07c4  pop ds  [x5355]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07c5  iret   [x5355]
    c.iret(); return;
L02ca6:
    if (c.tracing) c.traceAt(0x2ca6);
    // 024e:07c6  push ds  [x5354]
    c.push16(c.ds);
    // 024e:07c7  push cs  [x5354]
    c.push16(c.cs);
    // 024e:07c8  pop ds  [x5354]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07c9  call 0x4bb  [x5354]
    c.push16(0x7ccu); code_0(c, 0x299bu); if (c.ip != 0x7ccu) c.badReturn(0x2ca9);
L02cac:
    if (c.tracing) c.traceAt(0x2cac);
    // 024e:07cc  pop ds  [x5354]
    c.loadDs((uint16_t)c.pop16());
    // 024e:07cd  iret   [x5354]
    c.iret(); return;
L0310a:
    if (c.tracing) c.traceAt(0x310a);
    // 024e:0c2a  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 024e:0c2c  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 024e:0c2e  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 024e:0c30  mov ax, 0x3d00  [x1]
    c.a.x = (uint16_t)(0x3d00u);
    // 024e:0c33  mov dx, 0x7d4  [x1]
    c.dx_.x = (uint16_t)(0x7d4u);
    // 024e:0c36  int 0x21  [x1]
    c.ip = 0xc38u; c.d32 = false; c.intr(0x21, 0xc38u);
L03118:
    if (c.tracing) c.traceAt(0x3118);
    // 024e:0c38  mov bx, ax  [x1]
    c.b.x = (uint16_t)(c.a.x);
    // 024e:0c3a  mov ax, 0x4202  [x1]
    c.a.x = (uint16_t)(0x4202u);
    // 024e:0c3d  mov cx, 0xffff  [x1]
    c.c.x = (uint16_t)(0xffffu);
    // 024e:0c40  mov dx, 0xfff4  [x1]
    c.dx_.x = (uint16_t)(0xfff4u);
    // 024e:0c43  int 0x21  [x1]
    c.ip = 0xc45u; c.d32 = false; c.intr(0x21, 0xc45u);
L03125:
    if (c.tracing) c.traceAt(0x3125);
    // 024e:0c45  mov ah, 0x3f  [x1]
    c.a.h = (uint8_t)(0x3fu);
    // 024e:0c47  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 024e:0c4a  mov dx, 0x52c  [x1]
    c.dx_.x = (uint16_t)(0x52cu);
    // 024e:0c4d  int 0x21  [x1]
    c.ip = 0xc4fu; c.d32 = false; c.intr(0x21, 0xc4fu);
L0312f:
    if (c.tracing) c.traceAt(0x312f);
    // 024e:0c4f  mov di, 0x82a  [x1]
    c.di.x = (uint16_t)(0x82au);
    // 024e:0c52  mov edx, 0xedb88320  [x1]
    c.dx_.e = (uint32_t)(0xedb88320u);
    // 024e:0c58  xor bl, bl  [x1]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) ^ (c.b.l), true));
L0313a:
    if (c.tracing) c.traceAt(0x313a);
    // 024e:0c5a  movzx eax, bl  [x256]
    c.a.e = (uint32_t)(c.b.l);
    // 024e:0c5e  mov cx, 8  [x256]
    c.c.x = (uint16_t)(0x8u);
L03141:
    if (c.tracing) c.traceAt(0x3141);
    // 024e:0c61  shr eax, 1  [x2048]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x1u) & 31), true));
    // 024e:0c64  jae 0xc69  [x2048]
    if (!c.cf) goto L03149;
L03146:
    if (c.tracing) c.traceAt(0x3146);
    // 024e:0c66  xor eax, edx  [x1024]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.dx_.e), true));
L03149:
    if (c.tracing) c.traceAt(0x3149);
    // 024e:0c69  loop 0xc61  [x2048]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L03141;
L0314b:
    if (c.tracing) c.traceAt(0x314b);
    // 024e:0c6b  stosd dword ptr es:[di], eax  [x256]
    c.stos<32, false>(0);
    // 024e:0c6d  inc bl  [x256]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, true));
    // 024e:0c6f  jne 0xc5a  [x256]
    if (!c.zf) goto L0313a;
L03151:
    if (c.tracing) c.traceAt(0x3151);
    // 024e:0c71  mov es, word ptr [0x52c]  [x1]
    c.loadEs(c.r16(c.dsb + (uint16_t)(0x52cu)));
    // 024e:0c75  mov cx, word ptr [0x52e]  [x1]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x52eu)));
    // 024e:0c79  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 024e:0c7b  xor eax, eax  [x1]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
    // 024e:0c7e  mov ebx, 0xffffffff  [x1]
    c.b.e = (uint32_t)(0xffffffffu);
L03164:
    if (c.tracing) c.traceAt(0x3164);
    // 024e:0c84  lodsb al, byte ptr es:[si]  [x32768]
    c.ip = 0xc86u; c.d32 = false; c.lods<8, false>(c.esb, 0);
    // 024e:0c86  xor al, bl  [x32768]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.b.l), false));
    // 024e:0c88  shr ebx, 8  [x32768]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 024e:0c8c  xor ebx, dword ptr [eax*4 + 0x82a]  [x32768]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.a.e * 4 + 0x82au))), true));
    // 024e:0c95  loop 0xc84  [x32768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L03164;
L03177:
    if (c.tracing) c.traceAt(0x3177);
    // 024e:0c97  cmp dword ptr [0x530], ebx  [x1]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x530u)), c.b.e, true);
    // 024e:0c9c  je 0xcaa  [x1]
    if (c.zf) goto L0318a;
    c.notTranslated(0x317e, "fall-through");
L0318a:
    if (c.tracing) c.traceAt(0x318a);
    // 024e:0caa  call 0x10  [x1]
    c.push16(0xcadu); code_0(c, 0x24f0u); if (c.ip != 0xcadu) c.badReturn(0x318a);
L0318d:
    if (c.tracing) c.traceAt(0x318d);
    // 024e:0cad  call 0x27a  [x1]
    c.push16(0xcb0u); code_0(c, 0x275au); if (c.ip != 0xcb0u) c.badReturn(0x318d);
L03190:
    if (c.tracing) c.traceAt(0x3190);
    // 024e:0cb0  call 0  [x1]
    c.push16(0xcb3u); code_0(c, 0x24e0u); if (c.ip != 0xcb3u) c.badReturn(0x3190);
L03193:
    if (c.tracing) c.traceAt(0x3193);
    // 024e:0cb3  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 024e:0cb5  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 024e:0cb7  mov word ptr es:[0x3ec], 0x79c  [x1]
    c.w16(c.esb + (uint16_t)(0x3ecu), 0x79cu);
    // 024e:0cbe  mov word ptr es:[0x3ee], ds  [x1]
    c.w16(c.esb + (uint16_t)(0x3eeu), c.ds);
    // 024e:0cc3  mov ax, 0x3100  [x1]
    c.a.x = (uint16_t)(0x3100u);
    // 024e:0cc6  mov dx, 0x8e  [x1]
    c.dx_.x = (uint16_t)(0x8eu);
    // 024e:0cc9  int 0x21  [x1]
    c.ip = 0xccbu; c.d32 = false; c.intr(0x21, 0xccbu);
    c.notTranslated(0x31ab, "fall-through");
}

static Register reg00(0, {0x24e0, 0x24f0, 0x24fb, 0x2501, 0x250e, 0x2611, 0x2616, 0x275a, 0x276f, 0x2882, 0x299b, 0x299f, 0x29a4, 0x29b0, 0x2c7c, 0x2c81, 0x2c8d, 0x2c96, 0x2c9d, 0x2ca6, 0x2cac, 0x310a, 0x3118, 0x3125, 0x312f, 0x313a, 0x3141, 0x3146, 0x3149, 0x314b, 0x3151, 0x3164, 0x3177, 0x318a, 0x318d, 0x3190, 0x3193}, code_0);

}  // namespace angel
