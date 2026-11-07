// Part 22 (CRED.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_23(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501b: goto L1501b;
    case 0x1502a: goto L1502a;
    case 0x15034: goto L15034;
    case 0x15037: goto L15037;
    case 0x15055: goto L15055;
    case 0x15057: goto L15057;
    case 0x15071: goto L15071;
    case 0x15073: goto L15073;
    case 0x1507a: goto L1507a;
    case 0x1509c: goto L1509c;
    case 0x1509e: goto L1509e;
    case 0x150a6: goto L150a6;
    case 0x150a8: goto L150a8;
    case 0x150c0: goto L150c0;
    case 0x150c6: goto L150c6;
    case 0x150d2: goto L150d2;
    case 0x150d8: goto L150d8;
    case 0x150fd: goto L150fd;
    case 0x15112: goto L15112;
    case 0x15126: goto L15126;
    case 0x1512d: goto L1512d;
    case 0x1513e: goto L1513e;
    case 0x15143: goto L15143;
    case 0x15145: goto L15145;
    case 0x15148: goto L15148;
    case 0x1514a: goto L1514a;
    case 0x15151: goto L15151;
    case 0x15162: goto L15162;
    case 0x15169: goto L15169;
    case 0x1516b: goto L1516b;
    case 0x1516e: goto L1516e;
    case 0x15174: goto L15174;
    case 0x15179: goto L15179;
    case 0x15194: goto L15194;
    case 0x15199: goto L15199;
    case 0x151a1: goto L151a1;
    case 0x151a6: goto L151a6;
    case 0x151ac: goto L151ac;
    case 0x151b4: goto L151b4;
    case 0x151b9: goto L151b9;
    case 0x151c6: goto L151c6;
    case 0x151cf: goto L151cf;
    case 0x151db: goto L151db;
    case 0x151e1: goto L151e1;
    case 0x151e9: goto L151e9;
    case 0x151ee: goto L151ee;
    case 0x151f4: goto L151f4;
    case 0x151fb: goto L151fb;
    case 0x15203: goto L15203;
    case 0x15208: goto L15208;
    case 0x1520a: goto L1520a;
    case 0x15213: goto L15213;
    case 0x15218: goto L15218;
    case 0x1521e: goto L1521e;
    case 0x15223: goto L15223;
    case 0x15226: goto L15226;
    case 0x15234: goto L15234;
    case 0x1523a: goto L1523a;
    case 0x1523c: goto L1523c;
    case 0x1523f: goto L1523f;
    case 0x1524b: goto L1524b;
    case 0x1524c: goto L1524c;
    case 0x1524f: goto L1524f;
    case 0x15250: goto L15250;
    case 0x15254: goto L15254;
    case 0x15255: goto L15255;
    case 0x15259: goto L15259;
    case 0x1525c: goto L1525c;
    case 0x15264: goto L15264;
    case 0x1526b: goto L1526b;
    case 0x15272: goto L15272;
    case 0x1527f: goto L1527f;
    case 0x15286: goto L15286;
    case 0x15287: goto L15287;
    case 0x1528e: goto L1528e;
    case 0x15295: goto L15295;
    case 0x152b3: goto L152b3;
    case 0x152b8: goto L152b8;
    case 0x152c1: goto L152c1;
    case 0x152c4: goto L152c4;
    case 0x152c6: goto L152c6;
    case 0x152ca: goto L152ca;
    case 0x152cc: goto L152cc;
    case 0x152d2: goto L152d2;
    case 0x152d6: goto L152d6;
    case 0x152d8: goto L152d8;
    case 0x152dc: goto L152dc;
    case 0x152de: goto L152de;
    case 0x152f8: goto L152f8;
    case 0x152ff: goto L152ff;
    case 0x15300: goto L15300;
    case 0x1530c: goto L1530c;
    case 0x1530f: goto L1530f;
    case 0x15317: goto L15317;
    case 0x15323: goto L15323;
    case 0x15330: goto L15330;
    case 0x15333: goto L15333;
    case 0x1533b: goto L1533b;
    case 0x15347: goto L15347;
    case 0x15354: goto L15354;
    case 0x15357: goto L15357;
    case 0x1535f: goto L1535f;
    case 0x1536b: goto L1536b;
    case 0x15378: goto L15378;
    case 0x1537b: goto L1537b;
    case 0x15383: goto L15383;
    case 0x1538f: goto L1538f;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xb  [x1]
    goto L1501b;
L1501b:
    if (c.tracing) c.traceAt(0x1501b);
    // 1501:000b  mov word ptr cs:[7], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.c.x);
    // 1501:0010  mov word ptr cs:[9], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), c.dx_.x);
    // 1501:0015  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:0018  int 0x10  [x1]
    c.ip = 0x1au; c.d32 = false; c.intr(0x10, 0x1au);
L1502a:
    if (c.tracing) c.traceAt(0x1502a);
    // 1501:001a  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:001d  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:001f  out dx, al  [x1]
    c.ip = 0x20u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0020  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0021  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L15034:
    if (c.tracing) c.traceAt(0x15034);
    // 1501:0024  out dx, al  [x768]
    c.ip = 0x25u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0025  loop 0x24  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15034;
L15037:
    if (c.tracing) c.traceAt(0x15037);
    // 1501:0027  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:002a  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:002d  out dx, ax  [x1]
    c.ip = 0x2eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:002e  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0031  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:0034  out dx, ax  [x1]
    c.ip = 0x35u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0035  mov ax, 0xe317  [x1]
    c.a.x = (uint16_t)(0xe317u);
    // 1501:0038  out dx, ax  [x1]
    c.ip = 0x39u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0039  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:003c  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:003e  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:0040  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:0042  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L15055:
    if (c.tracing) c.traceAt(0x15055);
    // 1501:0045  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L15057:
    if (c.tracing) c.traceAt(0x15057);
    // 1501:0047  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:004a  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:004d  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:004f  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0051  out dx, ax  [x1]
    c.ip = 0x52u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0052  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0054  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0056  out dx, ax  [x1]
    c.ip = 0x57u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0057  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:005a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:005c  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:005e  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L15071:
    if (c.tracing) c.traceAt(0x15071);
    // 1501:0061  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L15073:
    if (c.tracing) c.traceAt(0x15073);
    // 1501:0063  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:0066  push cs  [x1]
    c.push16(c.cs);
    // 1501:0067  call 0x24c  [x1]
    c.push16(0x6au); code_23(c, 0x1525cu); if (c.ip != 0x6au) c.badReturn(0x15077);
L1507a:
    if (c.tracing) c.traceAt(0x1507a);
    // 1501:006a  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:006d  mov al, 5  [x1]
    c.a.l = (uint8_t)(0x5u);
    // 1501:006f  out dx, al  [x1]
    c.ip = 0x70u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0070  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:0071  in al, dx  [x1]
    c.ip = 0x72u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:0072  and al, 0xfc  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:0074  or al, 1  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 1501:0076  out dx, al  [x1]
    c.ip = 0x77u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0077  push ds  [x1]
    c.push16(c.ds);
    // 1501:0078  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:007b  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:007e  out dx, ax  [x1]
    c.ip = 0x7fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:007f  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0082  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 1501:0084  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0086  mov di, 0x4b00  [x1]
    c.di.x = (uint16_t)(0x4b00u);
    // 1501:0089  mov cx, 0x4b00  [x1]
    c.c.x = (uint16_t)(0x4b00u);
L1509c:
    if (c.tracing) c.traceAt(0x1509c);
    // 1501:008c  rep movsb byte ptr es:[di], byte ptr [si]  [x19201]
    c.ip = 0x8eu; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L1509e:
    if (c.tracing) c.traceAt(0x1509e);
    // 1501:008e  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0090  mov di, 0x9600  [x1]
    c.di.x = (uint16_t)(0x9600u);
    // 1501:0093  mov cx, 0x4b00  [x1]
    c.c.x = (uint16_t)(0x4b00u);
L150a6:
    if (c.tracing) c.traceAt(0x150a6);
    // 1501:0096  rep movsb byte ptr es:[di], byte ptr [si]  [x19201]
    c.ip = 0x98u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L150a8:
    if (c.tracing) c.traceAt(0x150a8);
    // 1501:0098  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:0099  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:009c  mov al, 5  [x1]
    c.a.l = (uint8_t)(0x5u);
    // 1501:009e  out dx, al  [x1]
    c.ip = 0x9fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:009f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:00a0  in al, dx  [x1]
    c.ip = 0xa1u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:00a1  and al, 0xfc  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), true));
    // 1501:00a3  out dx, al  [x1]
    c.ip = 0xa4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00a4  mov ax, 0xa4b0  [x1]
    c.a.x = (uint16_t)(0xa4b0u);
    // 1501:00a7  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:00a9  mov si, 0x46a8  [x1]
    c.si.x = (uint16_t)(0x46a8u);
    // 1501:00ac  push cs  [x1]
    c.push16(c.cs);
    // 1501:00ad  call 0x24c  [x1]
    c.push16(0xb0u); code_23(c, 0x1525cu); if (c.ip != 0xb0u) c.badReturn(0x150bd);
L150c0:
    if (c.tracing) c.traceAt(0x150c0);
    // 1501:00b0  mov si, 0x85b8  [x1]
    c.si.x = (uint16_t)(0x85b8u);
    // 1501:00b3  call 0x2f0  [x1]
    c.push16(0xb6u); code_23(c, 0x15300u); if (c.ip != 0xb6u) c.badReturn(0x150c3);
L150c6:
    if (c.tracing) c.traceAt(0x150c6);
    // 1501:00b6  mov ax, 0xa960  [x1]
    c.a.x = (uint16_t)(0xa960u);
    // 1501:00b9  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:00bb  mov si, 0x5b96  [x1]
    c.si.x = (uint16_t)(0x5b96u);
    // 1501:00be  push cs  [x1]
    c.push16(c.cs);
    // 1501:00bf  call 0x24c  [x1]
    c.push16(0xc2u); code_23(c, 0x1525cu); if (c.ip != 0xc2u) c.badReturn(0x150cf);
L150d2:
    if (c.tracing) c.traceAt(0x150d2);
    // 1501:00c2  mov si, 0x90f8  [x1]
    c.si.x = (uint16_t)(0x90f8u);
    // 1501:00c5  call 0x2f0  [x1]
    c.push16(0xc8u); code_23(c, 0x15300u); if (c.ip != 0xc8u) c.badReturn(0x150d5);
L150d8:
    if (c.tracing) c.traceAt(0x150d8);
    // 1501:00c8  mov dx, 0x3c2  [x1]
    c.dx_.x = (uint16_t)(0x3c2u);
    // 1501:00cb  mov al, 0xe3  [x1]
    c.a.l = (uint8_t)(0xe3u);
    // 1501:00cd  out dx, al  [x1]
    c.ip = 0xceu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00ce  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00d1  mov ax, 0x616  [x1]
    c.a.x = (uint16_t)(0x616u);
    // 1501:00d4  out dx, ax  [x1]
    c.ip = 0xd5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00d5  mov ax, 0xe715  [x1]
    c.a.x = (uint16_t)(0xe715u);
    // 1501:00d8  out dx, ax  [x1]
    c.ip = 0xd9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00d9  mov ax, 0xdf12  [x1]
    c.a.x = (uint16_t)(0xdf12u);
    // 1501:00dc  out dx, ax  [x1]
    c.ip = 0xddu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00dd  mov ax, 0x2a11  [x1]
    c.a.x = (uint16_t)(0x2a11u);
    // 1501:00e0  out dx, ax  [x1]
    c.ip = 0xe1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00e1  mov ax, 0xea10  [x1]
    c.a.x = (uint16_t)(0xea10u);
    // 1501:00e4  out dx, ax  [x1]
    c.ip = 0xe5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00e5  mov ax, 0x3e07  [x1]
    c.a.x = (uint16_t)(0x3e07u);
    // 1501:00e8  out dx, ax  [x1]
    c.ip = 0xe9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00e9  mov ax, 0xd06  [x1]
    c.a.x = (uint16_t)(0xd06u);
    // 1501:00ec  out dx, ax  [x1]
    c.ip = 0xedu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
L150fd:
    if (c.tracing) c.traceAt(0x150fd);
    // 1501:00ed  push es  [x1704]
    c.ip = 0xedu; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:00ee  mov ax, word ptr cs:[7]  [x1704]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:00f2  mov es, ax  [x1704]
    c.loadEs(c.a.x);
    // 1501:00f4  mov si, word ptr cs:[9]  [x1704]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:00f9  mov dx, word ptr es:[si]  [x1704]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:00fc  pop es  [x1704]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00fd  cmp dx, 0  [x1704]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0100  je 0xed  [x1704]
    if (c.zf) goto L150fd;
L15112:
    if (c.tracing) c.traceAt(0x15112);
    // 1501:0102  mov bx, word ptr [0xa77e]  [x576]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffa77eu)));
    // 1501:0106  mov dx, 0x3d4  [x576]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0109  mov ah, bh  [x576]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:010b  mov al, 0xc  [x576]
    c.a.l = (uint8_t)(0xcu);
    // 1501:010d  out dx, ax  [x576]
    c.ip = 0x10eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:010e  mov ah, bl  [x576]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0110  mov al, 0xd  [x576]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0112  out dx, ax  [x576]
    c.ip = 0x113u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0113  call 0x23c  [x576]
    c.push16(0x116u); code_23(c, 0x1524cu); if (c.ip != 0x116u) c.badReturn(0x15123);
L15126:
    if (c.tracing) c.traceAt(0x15126);
    // 1501:0116  cmp byte ptr [0xa77d], 0  [x576]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffa77du)), 0x0u, true);
    // 1501:011b  jne 0x13a  [x576]
    if (!c.zf) goto L1514a;
L1512d:
    if (c.tracing) c.traceAt(0x1512d);
    // 1501:011d  mov dx, 0x3c8  [x480]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0120  xor al, al  [x480]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0122  out dx, al  [x480]
    c.ip = 0x123u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0123  inc dx  [x480]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0124  mov si, 0x43a8  [x480]
    c.si.x = (uint16_t)(0x43a8u);
    // 1501:0127  mov cx, 0xc0  [x480]
    c.c.x = (uint16_t)(0xc0u);
    // 1501:012a  mov bl, byte ptr [0xa77c]  [x480]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffffa77cu)));
L1513e:
    if (c.tracing) c.traceAt(0x1513e);
    // 1501:012e  lodsb al, byte ptr [si]  [x92160]
    c.ip = 0x12fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:012f  sub al, bl  [x92160]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:0131  jge 0x135  [x92160]
    if ((c.sf == c.of)) goto L15145;
L15143:
    if (c.tracing) c.traceAt(0x15143);
    // 1501:0133  xor al, al  [x24648]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15145:
    if (c.tracing) c.traceAt(0x15145);
    // 1501:0135  out dx, al  [x92160]
    c.ip = 0x136u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0136  loop 0x12e  [x92160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1513e;
L15148:
    if (c.tracing) c.traceAt(0x15148);
    // 1501:0138  jmp 0x15e  [x480]
    goto L1516e;
L1514a:
    if (c.tracing) c.traceAt(0x1514a);
    // 1501:013a  cmp byte ptr [0xa77d], 0  [x96]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffa77du)), 0x0u, true);
    // 1501:013f  je 0x15e  [x96]
    if (c.zf) goto L1516e;
L15151:
    if (c.tracing) c.traceAt(0x15151);
    // 1501:0141  mov dx, 0x3c8  [x96]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0144  xor al, al  [x96]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0146  out dx, al  [x96]
    c.ip = 0x147u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0147  inc dx  [x96]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0148  mov si, 0x43a8  [x96]
    c.si.x = (uint16_t)(0x43a8u);
    // 1501:014b  mov cx, 0xc0  [x96]
    c.c.x = (uint16_t)(0xc0u);
    // 1501:014e  mov bl, byte ptr [0xa77d]  [x96]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffffa77du)));
L15162:
    if (c.tracing) c.traceAt(0x15162);
    // 1501:0152  lodsb al, byte ptr [si]  [x18432]
    c.ip = 0x153u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:0153  add al, bl  [x18432]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:0155  cmp al, 0x3f  [x18432]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0157  jb 0x15b  [x18432]
    if (c.cf) goto L1516b;
L15169:
    if (c.tracing) c.traceAt(0x15169);
    // 1501:0159  mov al, 0x3f  [x2553]
    c.a.l = (uint8_t)(0x3fu);
L1516b:
    if (c.tracing) c.traceAt(0x1516b);
    // 1501:015b  out dx, al  [x18432]
    c.ip = 0x15cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:015c  loop 0x152  [x18432]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15162;
L1516e:
    if (c.tracing) c.traceAt(0x1516e);
    // 1501:015e  dec byte ptr [0xa77d]  [x576]
    c.w8(c.dsb + (uint16_t)(0xffffa77du), c.dec<8>(c.r8(c.dsb + (uint16_t)(0xffffa77du)), true));
    // 1501:0162  jns 0x169  [x576]
    if (!c.sf) goto L15179;
L15174:
    if (c.tracing) c.traceAt(0x15174);
    // 1501:0164  mov byte ptr [0xa77d], 0  [x480]
    c.w8(c.dsb + (uint16_t)(0xffffa77du), 0x0u);
L15179:
    if (c.tracing) c.traceAt(0x15179);
    // 1501:0169  push es  [x576]
    c.push16(c.es);
    // 1501:016a  mov ax, word ptr cs:[7]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:016e  mov es, ax  [x576]
    c.loadEs(c.a.x);
    // 1501:0170  mov si, word ptr cs:[9]  [x576]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:0175  mov dx, word ptr es:[si]  [x576]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0178  pop es  [x576]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0179  inc word ptr [0xa778]  [x576]
    c.w16(c.dsb + (uint16_t)(0xffffa778u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), false));
    // 1501:017d  cmp word ptr [0xa778], 0x60  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), 0x60u, true);
    // 1501:0182  jae 0x189  [x576]
    if (!c.cf) goto L15199;
L15194:
    if (c.tracing) c.traceAt(0x15194);
    // 1501:0184  sub byte ptr [0xa77c], 2  [x31]
    c.w8(c.dsb + (uint16_t)(0xffffa77cu), c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffa77cu)), 0x2u, true));
L15199:
    if (c.tracing) c.traceAt(0x15199);
    // 1501:0189  cmp word ptr [0xa778], 0x80  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), 0x80u, true);
    // 1501:018f  jb 0x19c  [x576]
    if (c.cf) goto L151ac;
L151a1:
    if (c.tracing) c.traceAt(0x151a1);
    // 1501:0191  cmp dx, 0  [x513]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0194  je 0x19c  [x513]
    if (c.zf) goto L151ac;
L151a6:
    if (c.tracing) c.traceAt(0x151a6);
    // 1501:0196  mov word ptr [0xa77e], 0x4b00  [x41]
    c.w16(c.dsb + (uint16_t)(0xffffa77eu), 0x4b00u);
L151ac:
    if (c.tracing) c.traceAt(0x151ac);
    // 1501:019c  cmp word ptr [0xa778], 0x140  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), 0x140u, true);
    // 1501:01a2  jb 0x1b6  [x576]
    if (c.cf) goto L151c6;
L151b4:
    if (c.tracing) c.traceAt(0x151b4);
    // 1501:01a4  cmp dx, 0  [x321]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:01a7  je 0x1b6  [x321]
    if (c.zf) goto L151c6;
L151b9:
    if (c.tracing) c.traceAt(0x151b9);
    // 1501:01a9  mov ax, word ptr [0xa778]  [x26]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa778u)));
    // 1501:01ac  inc ax  [x26]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
    // 1501:01ad  mov word ptr [0xa77a], ax  [x26]
    c.w16(c.dsb + (uint16_t)(0xa77au), c.a.x);
    // 1501:01b0  mov word ptr [0xa77e], 0x9600  [x26]
    c.w16(c.dsb + (uint16_t)(0xffffa77eu), 0x9600u);
L151c6:
    if (c.tracing) c.traceAt(0x151c6);
    // 1501:01b6  mov ax, word ptr [0xa77a]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa77au)));
    // 1501:01b9  cmp word ptr [0xa778], ax  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), c.a.x, true);
    // 1501:01bd  jne 0x1d1  [x576]
    if (!c.zf) goto L151e1;
L151cf:
    if (c.tracing) c.traceAt(0x151cf);
    // 1501:01bf  mov ax, 0xa4b0  [x5]
    c.a.x = (uint16_t)(0xa4b0u);
    // 1501:01c2  mov es, ax  [x5]
    c.loadEs(c.a.x);
    // 1501:01c4  mov si, 0x6a3c  [x5]
    c.si.x = (uint16_t)(0x6a3cu);
    // 1501:01c7  push cs  [x5]
    c.push16(c.cs);
    // 1501:01c8  call 0x24c  [x5]
    c.push16(0x1cbu); code_23(c, 0x1525cu); if (c.ip != 0x1cbu) c.badReturn(0x151d8);
L151db:
    if (c.tracing) c.traceAt(0x151db);
    // 1501:01cb  mov si, 0x9c38  [x5]
    c.si.x = (uint16_t)(0x9c38u);
    // 1501:01ce  call 0x2f0  [x5]
    c.push16(0x1d1u); code_23(c, 0x15300u); if (c.ip != 0x1d1u) c.badReturn(0x151de);
L151e1:
    if (c.tracing) c.traceAt(0x151e1);
    // 1501:01d1  cmp word ptr [0xa778], 0x1e0  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), 0x1e0u, true);
    // 1501:01d7  jb 0x1e4  [x576]
    if (c.cf) goto L151f4;
L151e9:
    if (c.tracing) c.traceAt(0x151e9);
    // 1501:01d9  cmp dx, 0  [x161]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:01dc  je 0x1e4  [x161]
    if (c.zf) goto L151f4;
L151ee:
    if (c.tracing) c.traceAt(0x151ee);
    // 1501:01de  mov word ptr [0xa77e], 0x4b00  [x14]
    c.w16(c.dsb + (uint16_t)(0xffffa77eu), 0x4b00u);
L151f4:
    if (c.tracing) c.traceAt(0x151f4);
    // 1501:01e4  cmp byte ptr [0xa782], 1  [x576]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffa782u)), 0x1u, true);
    // 1501:01e9  je 0x1f8  [x576]
    if (c.zf) goto L15208;
L151fb:
    if (c.tracing) c.traceAt(0x151fb);
    // 1501:01eb  cmp word ptr [0xa778], 0x280  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa778u)), 0x280u, true);
    // 1501:01f1  jb 0x1fa  [x576]
    if (c.cf) goto L1520a;
L15203:
    if (c.tracing) c.traceAt(0x15203);
    // 1501:01f3  cmp dx, 0  [x1]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:01f6  je 0x1fa  [x1]
    if (c.zf) goto L1520a;
L15208:
    if (c.tracing) c.traceAt(0x15208);
    // 1501:01f8  jmp 0x20e  [x1]
    goto L1521e;
L1520a:
    if (c.tracing) c.traceAt(0x1520a);
    // 1501:01fa  mov ax, word ptr [0xa77e]  [x575]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa77eu)));
    // 1501:01fd  cmp word ptr [0xa780], ax  [x575]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa780u)), c.a.x, true);
    // 1501:0201  je 0x208  [x575]
    if (c.zf) goto L15218;
L15213:
    if (c.tracing) c.traceAt(0x15213);
    // 1501:0203  mov byte ptr [0xa77d], 0x20  [x3]
    c.w8(c.dsb + (uint16_t)(0xffffa77du), 0x20u);
L15218:
    if (c.tracing) c.traceAt(0x15218);
    // 1501:0208  mov word ptr [0xa780], ax  [x575]
    c.w16(c.dsb + (uint16_t)(0xa780u), c.a.x);
    // 1501:020b  jmp 0x102  [x575]
    goto L15112;
L1521e:
    if (c.tracing) c.traceAt(0x1521e);
    // 1501:020e  mov byte ptr [0xa77c], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffa77cu), 0x0u);
L15223:
    if (c.tracing) c.traceAt(0x15223);
    // 1501:0213  call 0x23c  [x23]
    c.push16(0x216u); code_23(c, 0x1524cu); if (c.ip != 0x216u) c.badReturn(0x15223);
L15226:
    if (c.tracing) c.traceAt(0x15226);
    // 1501:0216  mov dx, 0x3c8  [x23]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0219  xor al, al  [x23]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:021b  out dx, al  [x23]
    c.ip = 0x21cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:021c  inc dx  [x23]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:021d  mov cx, 0xc0  [x23]
    c.c.x = (uint16_t)(0xc0u);
    // 1501:0220  mov bl, byte ptr [0xa77c]  [x23]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffffa77cu)));
L15234:
    if (c.tracing) c.traceAt(0x15234);
    // 1501:0224  mov al, 0x3f  [x4416]
    c.a.l = (uint8_t)(0x3fu);
    // 1501:0226  sub al, bl  [x4416]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:0228  jge 0x22c  [x4416]
    if ((c.sf == c.of)) goto L1523c;
L1523a:
    if (c.tracing) c.traceAt(0x1523a);
    // 1501:022a  xor al, al  [x192]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1523c:
    if (c.tracing) c.traceAt(0x1523c);
    // 1501:022c  out dx, al  [x4416]
    c.ip = 0x22du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:022d  loop 0x224  [x4416]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15234;
L1523f:
    if (c.tracing) c.traceAt(0x1523f);
    // 1501:022f  add byte ptr [0xa77c], 3  [x23]
    c.w8(c.dsb + (uint16_t)(0xffffa77cu), c.add<8>(c.r8(c.dsb + (uint16_t)(0xffffa77cu)), 0x3u, false));
    // 1501:0234  cmp byte ptr [0xa77c], 0x44  [x23]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffa77cu)), 0x44u, true);
    // 1501:0239  jb 0x213  [x23]
    if (c.cf) goto L15223;
L1524b:
    if (c.tracing) c.traceAt(0x1524b);
    // 1501:023b  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L1524c:
    if (c.tracing) c.traceAt(0x1524c);
    // 1501:023c  mov dx, 0x3da  [x599]
    c.dx_.x = (uint16_t)(0x3dau);
L1524f:
    if (c.tracing) c.traceAt(0x1524f);
    // 1501:023f  in al, dx  [x31526]
    c.ip = 0x240u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15250:
    if (c.tracing) c.traceAt(0x15250);
    // 1501:0240  test al, 8  [x41835]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0242  je 0x23f  [x41835]
    if (c.zf) goto L1524f;
L15254:
    if (c.tracing) c.traceAt(0x15254);
    // 1501:0244  in al, dx  [x2715]
    c.ip = 0x245u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15255:
    if (c.tracing) c.traceAt(0x15255);
    // 1501:0245  test al, 8  [x3620]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0247  jne 0x244  [x3620]
    if (!c.zf) goto L15254;
L15259:
    if (c.tracing) c.traceAt(0x15259);
    // 1501:0249  ret   [x599]
    c.ip = c.pop16(); return;
L1525c:
    if (c.tracing) c.traceAt(0x1525c);
    // 1501:024c  mov word ptr cs:[0x24a], si  [x8]
    c.w16(c.csb + (uint16_t)(0x24au), c.si.x);
    // 1501:0251  cld   [x8]
    c.df = false;
    // 1501:0252  push es  [x8]
    c.push16(c.es);
    // 1501:0253  dec si  [x8]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
L15264:
    if (c.tracing) c.traceAt(0x15264);
    // 1501:0254  inc si  [x328]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0255  cmp word ptr [si], 0x4d43  [x328]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4d43u, true);
    // 1501:0259  jne 0x254  [x328]
    if (!c.zf) goto L15264;
L1526b:
    if (c.tracing) c.traceAt(0x1526b);
    // 1501:025b  cmp word ptr [si + 2], 0x5041  [x8]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5041u, true);
    // 1501:0260  jne 0x254  [x8]
    if (!c.zf) goto L15264;
L15272:
    if (c.tracing) c.traceAt(0x15272);
    // 1501:0262  add si, 8  [x8]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, true));
    // 1501:0265  mov di, 0x43a8  [x8]
    c.di.x = (uint16_t)(0x43a8u);
    // 1501:0268  mov ax, ds  [x8]
    c.a.x = (uint16_t)(c.ds);
    // 1501:026a  mov es, ax  [x8]
    c.loadEs(c.a.x);
    // 1501:026c  mov cx, 0x300  [x8]
    c.c.x = (uint16_t)(0x300u);
L1527f:
    if (c.tracing) c.traceAt(0x1527f);
    // 1501:026f  lodsb al, byte ptr [si]  [x6144]
    c.ip = 0x270u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:0270  shr al, 2  [x6144]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:0273  stosb byte ptr es:[di], al  [x6144]
    c.stos<8, false>(0);
    // 1501:0274  loop 0x26f  [x6144]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1527f;
L15286:
    if (c.tracing) c.traceAt(0x15286);
    // 1501:0276  pop es  [x8]
    c.loadEs((uint16_t)c.pop16());
L15287:
    if (c.tracing) c.traceAt(0x15287);
    // 1501:0277  inc si  [x7922]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0278  cmp word ptr [si], 0x4f42  [x7922]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4f42u, true);
    // 1501:027c  jne 0x277  [x7922]
    if (!c.zf) goto L15287;
L1528e:
    if (c.tracing) c.traceAt(0x1528e);
    // 1501:027e  cmp word ptr [si + 2], 0x5944  [x8]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5944u, true);
    // 1501:0283  jne 0x277  [x8]
    if (!c.zf) goto L15287;
L15295:
    if (c.tracing) c.traceAt(0x15295);
    // 1501:0285  add si, 4  [x8]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:0288  mov al, byte ptr [si + 3]  [x8]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)));
    // 1501:028b  mov ah, byte ptr [si + 2]  [x8]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)));
    // 1501:028e  add si, 4  [x8]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:0291  add ax, si  [x8]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, false));
    // 1501:0293  mov bp, ax  [x8]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:0295  mov dx, 0x3c4  [x8]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0298  mov al, 2  [x8]
    c.a.l = (uint8_t)(0x2u);
    // 1501:029a  out dx, al  [x8]
    c.ip = 0x29bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:029b  mov byte ptr cs:[0x2cd], 1  [x8]
    c.w8(c.csb + (uint16_t)(0x2cdu), 0x1u);
    // 1501:02a1  xor di, di  [x8]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L152b3:
    if (c.tracing) c.traceAt(0x152b3);
    // 1501:02a3  lodsb al, byte ptr [si]  [x16249]
    c.ip = 0x2a4u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:02a4  and al, al  [x16249]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.a.l), true));
    // 1501:02a6  jns 0x2bc  [x16249]
    if (!c.sf) goto L152cc;
L152b8:
    if (c.tracing) c.traceAt(0x152b8);
    // 1501:02a8  neg al  [x9737]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:02aa  mov cl, al  [x9737]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:02ac  inc cl  [x9737]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:02ae  xor ch, ch  [x9737]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
    // 1501:02b0  lodsb al, byte ptr [si]  [x9737]
    c.ip = 0x2b1u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
L152c1:
    if (c.tracing) c.traceAt(0x152c1);
    // 1501:02b1  call 0x2ce  [x220178]
    c.push16(0x2b4u); code_23(c, 0x152deu); if (c.ip != 0x2b4u) c.badReturn(0x152c1);
L152c4:
    if (c.tracing) c.traceAt(0x152c4);
    // 1501:02b4  loop 0x2b1  [x220178]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L152c1;
L152c6:
    if (c.tracing) c.traceAt(0x152c6);
    // 1501:02b6  cmp si, bp  [x9737]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:02b8  jb 0x2a3  [x9737]
    if (c.cf) goto L152b3;
L152ca:
    if (c.tracing) c.traceAt(0x152ca);
    // 1501:02ba  jmp 0x2cc  [x8]
    goto L152dc;
L152cc:
    if (c.tracing) c.traceAt(0x152cc);
    // 1501:02bc  mov cl, al  [x6512]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:02be  inc cl  [x6512]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:02c0  xor ch, ch  [x6512]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
L152d2:
    if (c.tracing) c.traceAt(0x152d2);
    // 1501:02c2  lodsb al, byte ptr [si]  [x21102]
    c.ip = 0x2c3u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:02c3  call 0x2ce  [x21102]
    c.push16(0x2c6u); code_23(c, 0x152deu); if (c.ip != 0x2c6u) c.badReturn(0x152d3);
L152d6:
    if (c.tracing) c.traceAt(0x152d6);
    // 1501:02c6  loop 0x2c2  [x21102]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L152d2;
L152d8:
    if (c.tracing) c.traceAt(0x152d8);
    // 1501:02c8  cmp si, bp  [x6512]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:02ca  jb 0x2a3  [x6512]
    if (c.cf) goto L152b3;
L152dc:
    if (c.tracing) c.traceAt(0x152dc);
    // 1501:02cc  retf   [x8]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L152de:
    if (c.tracing) c.traceAt(0x152de);
    // 1501:02ce  push ax  [x241280]
    c.push16(c.a.x);
    // 1501:02cf  mov dx, 0x3c5  [x241280]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:02d2  mov al, byte ptr cs:[0x2cd]  [x241280]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x2cdu)));
    // 1501:02d6  out dx, al  [x241280]
    c.ip = 0x2d7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02d7  pop ax  [x241280]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:02d8  mov byte ptr es:[di], al  [x241280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:02db  shl byte ptr cs:[0x2cd], 1  [x241280]
    c.w8(c.csb + (uint16_t)(0x2cdu), c.shl<8>(c.r8(c.csb + (uint16_t)(0x2cdu)), (int)((0x1u) & 31), false));
    // 1501:02e0  cmp byte ptr cs:[0x2cd], 8  [x241280]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x2cdu)), 0x8u, true);
    // 1501:02e6  jbe 0x2ef  [x241280]
    if ((c.cf || c.zf)) goto L152ff;
L152f8:
    if (c.tracing) c.traceAt(0x152f8);
    // 1501:02e8  inc di  [x60320]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:02e9  mov byte ptr cs:[0x2cd], 1  [x60320]
    c.w8(c.csb + (uint16_t)(0x2cdu), 0x1u);
L152ff:
    if (c.tracing) c.traceAt(0x152ff);
    // 1501:02ef  ret   [x241280]
    c.ip = c.pop16(); return;
L15300:
    if (c.tracing) c.traceAt(0x15300);
    // 1501:02f0  mov bp, si  [x7]
    c.bp.x = (uint16_t)(c.si.x);
    // 1501:02f2  mov dx, 0x3c4  [x7]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:02f5  mov ax, 0x102  [x7]
    c.a.x = (uint16_t)(0x102u);
    // 1501:02f8  out dx, ax  [x7]
    c.ip = 0x2f9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02f9  mov di, 0x2bdb  [x7]
    c.di.x = (uint16_t)(0x2bdbu);
L1530c:
    if (c.tracing) c.traceAt(0x1530c);
    // 1501:02fc  mov cx, 0x17  [x224]
    c.c.x = (uint16_t)(0x17u);
L1530f:
    if (c.tracing) c.traceAt(0x1530f);
    // 1501:02ff  mov al, byte ptr [si]  [x5152]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0301  stosb byte ptr es:[di], al  [x5152]
    c.stos<8, false>(0);
    // 1501:0302  add si, 4  [x5152]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:0305  loop 0x2ff  [x5152]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1530f;
L15317:
    if (c.tracing) c.traceAt(0x15317);
    // 1501:0307  sub si, 2  [x224]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x2u, false));
    // 1501:030a  add di, 0x39  [x224]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x39u, false));
    // 1501:030d  cmp di, 0x35c0  [x224]
    c.sub<16>(c.di.x, 0x35c0u, true);
    // 1501:0311  jb 0x2fc  [x224]
    if (c.cf) goto L1530c;
L15323:
    if (c.tracing) c.traceAt(0x15323);
    // 1501:0313  inc bp  [x7]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 1501:0314  mov si, bp  [x7]
    c.si.x = (uint16_t)(c.bp.x);
    // 1501:0316  mov dx, 0x3c4  [x7]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0319  mov ax, 0x202  [x7]
    c.a.x = (uint16_t)(0x202u);
    // 1501:031c  out dx, ax  [x7]
    c.ip = 0x31du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:031d  mov di, 0x2bdb  [x7]
    c.di.x = (uint16_t)(0x2bdbu);
L15330:
    if (c.tracing) c.traceAt(0x15330);
    // 1501:0320  mov cx, 0x17  [x224]
    c.c.x = (uint16_t)(0x17u);
L15333:
    if (c.tracing) c.traceAt(0x15333);
    // 1501:0323  mov al, byte ptr [si]  [x5152]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0325  stosb byte ptr es:[di], al  [x5152]
    c.stos<8, false>(0);
    // 1501:0326  add si, 4  [x5152]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:0329  loop 0x323  [x5152]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15333;
L1533b:
    if (c.tracing) c.traceAt(0x1533b);
    // 1501:032b  sub si, 2  [x224]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x2u, false));
    // 1501:032e  add di, 0x39  [x224]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x39u, false));
    // 1501:0331  cmp di, 0x35c0  [x224]
    c.sub<16>(c.di.x, 0x35c0u, true);
    // 1501:0335  jb 0x320  [x224]
    if (c.cf) goto L15330;
L15347:
    if (c.tracing) c.traceAt(0x15347);
    // 1501:0337  inc bp  [x7]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 1501:0338  mov si, bp  [x7]
    c.si.x = (uint16_t)(c.bp.x);
    // 1501:033a  mov dx, 0x3c4  [x7]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:033d  mov ax, 0x402  [x7]
    c.a.x = (uint16_t)(0x402u);
    // 1501:0340  out dx, ax  [x7]
    c.ip = 0x341u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0341  mov di, 0x2bdb  [x7]
    c.di.x = (uint16_t)(0x2bdbu);
L15354:
    if (c.tracing) c.traceAt(0x15354);
    // 1501:0344  mov cx, 0x16  [x224]
    c.c.x = (uint16_t)(0x16u);
L15357:
    if (c.tracing) c.traceAt(0x15357);
    // 1501:0347  mov al, byte ptr [si]  [x4928]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0349  stosb byte ptr es:[di], al  [x4928]
    c.stos<8, false>(0);
    // 1501:034a  add si, 4  [x4928]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:034d  loop 0x347  [x4928]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15357;
L1535f:
    if (c.tracing) c.traceAt(0x1535f);
    // 1501:034f  add si, 2  [x224]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0352  add di, 0x3a  [x224]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3au, false));
    // 1501:0355  cmp di, 0x35c0  [x224]
    c.sub<16>(c.di.x, 0x35c0u, true);
    // 1501:0359  jb 0x344  [x224]
    if (c.cf) goto L15354;
L1536b:
    if (c.tracing) c.traceAt(0x1536b);
    // 1501:035b  inc bp  [x7]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 1501:035c  mov si, bp  [x7]
    c.si.x = (uint16_t)(c.bp.x);
    // 1501:035e  mov dx, 0x3c4  [x7]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0361  mov ax, 0x802  [x7]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0364  out dx, ax  [x7]
    c.ip = 0x365u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0365  mov di, 0x2bdb  [x7]
    c.di.x = (uint16_t)(0x2bdbu);
L15378:
    if (c.tracing) c.traceAt(0x15378);
    // 1501:0368  mov cx, 0x16  [x224]
    c.c.x = (uint16_t)(0x16u);
L1537b:
    if (c.tracing) c.traceAt(0x1537b);
    // 1501:036b  mov al, byte ptr [si]  [x4928]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:036d  stosb byte ptr es:[di], al  [x4928]
    c.stos<8, false>(0);
    // 1501:036e  add si, 4  [x4928]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:0371  loop 0x36b  [x4928]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1537b;
L15383:
    if (c.tracing) c.traceAt(0x15383);
    // 1501:0373  add si, 2  [x224]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0376  add di, 0x3a  [x224]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3au, false));
    // 1501:0379  cmp di, 0x35c0  [x224]
    c.sub<16>(c.di.x, 0x35c0u, true);
    // 1501:037d  jb 0x368  [x224]
    if (c.cf) goto L15378;
L1538f:
    if (c.tracing) c.traceAt(0x1538f);
    // 1501:037f  ret   [x7]
    c.ip = c.pop16(); return;
}

static Register reg_code_23(23, {0x15010, 0x1501b, 0x1502a, 0x15034, 0x15037, 0x15055, 0x15057, 0x15071, 0x15073, 0x1507a, 0x1509c, 0x1509e, 0x150a6, 0x150a8, 0x150c0, 0x150c6, 0x150d2, 0x150d8, 0x150fd, 0x15112, 0x15126, 0x1512d, 0x1513e, 0x15143, 0x15145, 0x15148, 0x1514a, 0x15151, 0x15162, 0x15169, 0x1516b, 0x1516e, 0x15174, 0x15179, 0x15194, 0x15199, 0x151a1, 0x151a6, 0x151ac, 0x151b4, 0x151b9, 0x151c6, 0x151cf, 0x151db, 0x151e1, 0x151e9, 0x151ee, 0x151f4, 0x151fb, 0x15203, 0x15208, 0x1520a, 0x15213, 0x15218, 0x1521e, 0x15223, 0x15226, 0x15234, 0x1523a, 0x1523c, 0x1523f, 0x1524b, 0x1524c, 0x1524f, 0x15250, 0x15254, 0x15255, 0x15259, 0x1525c, 0x15264, 0x1526b, 0x15272, 0x1527f, 0x15286, 0x15287, 0x1528e, 0x15295, 0x152b3, 0x152b8, 0x152c1, 0x152c4, 0x152c6, 0x152ca, 0x152cc, 0x152d2, 0x152d6, 0x152d8, 0x152dc, 0x152de, 0x152f8, 0x152ff, 0x15300, 0x1530c, 0x1530f, 0x15317, 0x15323, 0x15330, 0x15333, 0x1533b, 0x15347, 0x15354, 0x15357, 0x1535f, 0x1536b, 0x15378, 0x1537b, 0x15383, 0x1538f}, code_23);

}  // namespace show
