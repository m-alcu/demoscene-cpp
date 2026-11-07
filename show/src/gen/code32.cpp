// Part 31 (THE.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_32(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501d: goto L1501d;
    case 0x15034: goto L15034;
    case 0x15039: goto L15039;
    case 0x15043: goto L15043;
    case 0x15046: goto L15046;
    case 0x15064: goto L15064;
    case 0x15066: goto L15066;
    case 0x1506a: goto L1506a;
    case 0x1507a: goto L1507a;
    case 0x1508f: goto L1508f;
    case 0x15092: goto L15092;
    case 0x1509e: goto L1509e;
    case 0x150a1: goto L150a1;
    case 0x150a4: goto L150a4;
    case 0x150a7: goto L150a7;
    case 0x150a9: goto L150a9;
    case 0x150be: goto L150be;
    case 0x150c1: goto L150c1;
    case 0x150ce: goto L150ce;
    case 0x150d0: goto L150d0;
    case 0x150d3: goto L150d3;
    case 0x150d6: goto L150d6;
    case 0x150d8: goto L150d8;
    case 0x150db: goto L150db;
    case 0x150ec: goto L150ec;
    case 0x150ee: goto L150ee;
    case 0x150f1: goto L150f1;
    case 0x150f3: goto L150f3;
    case 0x150f6: goto L150f6;
    case 0x150f8: goto L150f8;
    case 0x15105: goto L15105;
    case 0x15107: goto L15107;
    case 0x1511a: goto L1511a;
    case 0x1511e: goto L1511e;
    case 0x15126: goto L15126;
    case 0x15132: goto L15132;
    case 0x15134: goto L15134;
    case 0x15136: goto L15136;
    case 0x1513b: goto L1513b;
    case 0x1513e: goto L1513e;
    case 0x1514f: goto L1514f;
    case 0x15155: goto L15155;
    case 0x15157: goto L15157;
    case 0x1515d: goto L1515d;
    case 0x15165: goto L15165;
    case 0x15167: goto L15167;
    case 0x1516a: goto L1516a;
    case 0x1516d: goto L1516d;
    case 0x15182: goto L15182;
    case 0x15187: goto L15187;
    case 0x15193: goto L15193;
    case 0x15194: goto L15194;
    case 0x15197: goto L15197;
    case 0x15198: goto L15198;
    case 0x1519c: goto L1519c;
    case 0x1519d: goto L1519d;
    case 0x151a1: goto L151a1;
    case 0x151a2: goto L151a2;
    case 0x151a7: goto L151a7;
    case 0x151ae: goto L151ae;
    case 0x151b5: goto L151b5;
    case 0x151c2: goto L151c2;
    case 0x151c9: goto L151c9;
    case 0x151cd: goto L151cd;
    case 0x151d4: goto L151d4;
    case 0x151db: goto L151db;
    case 0x151f9: goto L151f9;
    case 0x151fe: goto L151fe;
    case 0x15207: goto L15207;
    case 0x1520a: goto L1520a;
    case 0x1520c: goto L1520c;
    case 0x15210: goto L15210;
    case 0x15212: goto L15212;
    case 0x15218: goto L15218;
    case 0x1521c: goto L1521c;
    case 0x1521e: goto L1521e;
    case 0x15222: goto L15222;
    case 0x15224: goto L15224;
    case 0x1523e: goto L1523e;
    case 0x15245: goto L15245;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xd  [x1]
    goto L1501d;
L1501d:
    if (c.tracing) c.traceAt(0x1501d);
    // 1501:000d  mov word ptr cs:[7], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.c.x);
    // 1501:0012  mov word ptr cs:[9], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), c.dx_.x);
    // 1501:0017  add dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x2u, true));
    // 1501:001a  mov word ptr cs:[0xb], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xbu), c.dx_.x);
    // 1501:001f  mov ax, 0x12  [x1]
    c.a.x = (uint16_t)(0x12u);
    // 1501:0022  int 0x10  [x1]
    c.ip = 0x24u; c.d32 = false; c.intr(0x10, 0x24u);
L15034:
    if (c.tracing) c.traceAt(0x15034);
    // 1501:0024  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:0027  int 0x10  [x1]
    c.ip = 0x29u; c.d32 = false; c.intr(0x10, 0x29u);
L15039:
    if (c.tracing) c.traceAt(0x15039);
    // 1501:0029  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:002c  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:002e  out dx, al  [x1]
    c.ip = 0x2fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:002f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0030  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L15043:
    if (c.tracing) c.traceAt(0x15043);
    // 1501:0033  out dx, al  [x768]
    c.ip = 0x34u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0034  loop 0x33  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15043;
L15046:
    if (c.tracing) c.traceAt(0x15046);
    // 1501:0036  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0039  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:003c  out dx, ax  [x1]
    c.ip = 0x3du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:003d  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0040  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:0043  out dx, ax  [x1]
    c.ip = 0x44u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0044  mov ax, 0xe317  [x1]
    c.a.x = (uint16_t)(0xe317u);
    // 1501:0047  out dx, ax  [x1]
    c.ip = 0x48u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0048  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:004b  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:004d  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:004f  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:0051  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L15064:
    if (c.tracing) c.traceAt(0x15064);
    // 1501:0054  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L15066:
    if (c.tracing) c.traceAt(0x15066);
    // 1501:0056  push cs  [x1]
    c.push16(c.cs);
    // 1501:0057  call 0x192  [x1]
    c.push16(0x5au); code_32(c, 0x151a2u); if (c.ip != 0x5au) c.badReturn(0x15067);
L1506a:
    if (c.tracing) c.traceAt(0x1506a);
    // 1501:005a  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:005d  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0060  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:0062  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0064  out dx, ax  [x1]
    c.ip = 0x65u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0065  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0067  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0069  out dx, ax  [x1]
    c.ip = 0x6au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
L1507a:
    if (c.tracing) c.traceAt(0x1507a);
    // 1501:006a  push es  [x1526]
    c.ip = 0x6au; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:006b  mov ax, word ptr cs:[7]  [x1526]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:006f  mov es, ax  [x1526]
    c.loadEs(c.a.x);
    // 1501:0071  mov si, word ptr cs:[9]  [x1526]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:0076  mov dx, word ptr es:[si]  [x1526]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0079  pop es  [x1526]
    c.loadEs((uint16_t)c.pop16());
    // 1501:007a  cmp dx, 0  [x1526]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:007d  je 0x6a  [x1526]
    if (c.zf) goto L1507a;
L1508f:
    if (c.tracing) c.traceAt(0x1508f);
    // 1501:007f  call 0x184  [x1]
    c.push16(0x82u); code_32(c, 0x15194u); if (c.ip != 0x82u) c.badReturn(0x1508f);
L15092:
    if (c.tracing) c.traceAt(0x15092);
    // 1501:0082  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0085  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0087  out dx, al  [x1]
    c.ip = 0x88u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0088  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0089  mov cx, 0xc0  [x1]
    c.c.x = (uint16_t)(0xc0u);
    // 1501:008c  mov al, 0x3f  [x1]
    c.a.l = (uint8_t)(0x3fu);
L1509e:
    if (c.tracing) c.traceAt(0x1509e);
    // 1501:008e  out dx, al  [x192]
    c.ip = 0x8fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:008f  loop 0x8e  [x192]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1509e;
L150a1:
    if (c.tracing) c.traceAt(0x150a1);
    // 1501:0091  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L150a4:
    if (c.tracing) c.traceAt(0x150a4);
    // 1501:0094  call 0x184  [x32]
    c.push16(0x97u); code_32(c, 0x15194u); if (c.ip != 0x97u) c.badReturn(0x150a4);
L150a7:
    if (c.tracing) c.traceAt(0x150a7);
    // 1501:0097  loop 0x94  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150a4;
L150a9:
    if (c.tracing) c.traceAt(0x150a9);
    // 1501:0099  push es  [x996]
    c.ip = 0x99u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:009a  mov ax, word ptr cs:[7]  [x996]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:009e  mov es, ax  [x996]
    c.loadEs(c.a.x);
    // 1501:00a0  mov si, word ptr cs:[9]  [x996]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:00a5  mov dx, word ptr es:[si]  [x996]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:00a8  pop es  [x996]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00a9  cmp dx, 0  [x996]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:00ac  je 0x99  [x996]
    if (c.zf) goto L150a9;
L150be:
    if (c.tracing) c.traceAt(0x150be);
    // 1501:00ae  call 0x184  [x1]
    c.push16(0xb1u); code_32(c, 0x15194u); if (c.ip != 0xb1u) c.badReturn(0x150be);
L150c1:
    if (c.tracing) c.traceAt(0x150c1);
    // 1501:00b1  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00b4  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:00b6  out dx, al  [x1]
    c.ip = 0xb7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00b7  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:00b8  mov cx, 0x60  [x1]
    c.c.x = (uint16_t)(0x60u);
    // 1501:00bb  mov si, 0x2a70  [x1]
    c.si.x = (uint16_t)(0x2a70u);
L150ce:
    if (c.tracing) c.traceAt(0x150ce);
    // 1501:00be  rep outsb dx, byte ptr [si]  [x97]
    c.ip = 0xc0u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L150d0:
    if (c.tracing) c.traceAt(0x150d0);
    // 1501:00c0  mov cx, 0x65  [x1]
    c.c.x = (uint16_t)(0x65u);
L150d3:
    if (c.tracing) c.traceAt(0x150d3);
    // 1501:00c3  call 0x184  [x101]
    c.push16(0xc6u); code_32(c, 0x15194u); if (c.ip != 0xc6u) c.badReturn(0x150d3);
L150d6:
    if (c.tracing) c.traceAt(0x150d6);
    // 1501:00c6  loop 0xc3  [x101]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150d3;
L150d8:
    if (c.tracing) c.traceAt(0x150d8);
    // 1501:00c8  call 0x184  [x407]
    c.push16(0xcbu); code_32(c, 0x15194u); if (c.ip != 0xcbu) c.badReturn(0x150d8);
L150db:
    if (c.tracing) c.traceAt(0x150db);
    // 1501:00cb  mov dx, 0x3c8  [x407]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00ce  mov al, 0x20  [x407]
    c.a.l = (uint8_t)(0x20u);
    // 1501:00d0  out dx, al  [x407]
    c.ip = 0xd1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00d1  inc dx  [x407]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:00d2  mov cx, 0x30  [x407]
    c.c.x = (uint16_t)(0x30u);
    // 1501:00d5  cmp byte ptr [0x2d73], 0  [x407]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2d73u)), 0x0u, true);
    // 1501:00da  je 0xe3  [x407]
    if (c.zf) goto L150f3;
L150ec:
    if (c.tracing) c.traceAt(0x150ec);
    // 1501:00dc  mov al, 0x3f  [x209]
    c.a.l = (uint8_t)(0x3fu);
L150ee:
    if (c.tracing) c.traceAt(0x150ee);
    // 1501:00de  out dx, al  [x10032]
    c.ip = 0xdfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00df  loop 0xde  [x10032]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150ee;
L150f1:
    if (c.tracing) c.traceAt(0x150f1);
    // 1501:00e1  jmp 0xe8  [x209]
    goto L150f8;
L150f3:
    if (c.tracing) c.traceAt(0x150f3);
    // 1501:00e3  mov si, 0x2ad0  [x198]
    c.si.x = (uint16_t)(0x2ad0u);
L150f6:
    if (c.tracing) c.traceAt(0x150f6);
    // 1501:00e6  rep outsb dx, byte ptr [si]  [x9702]
    c.ip = 0xe8u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L150f8:
    if (c.tracing) c.traceAt(0x150f8);
    // 1501:00e8  mov dx, 0x3c8  [x407]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00eb  xor al, al  [x407]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:00ed  out dx, al  [x407]
    c.ip = 0xeeu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00ee  inc dx  [x407]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:00ef  mov cx, 0x60  [x407]
    c.c.x = (uint16_t)(0x60u);
    // 1501:00f2  mov si, 0x2a70  [x407]
    c.si.x = (uint16_t)(0x2a70u);
L15105:
    if (c.tracing) c.traceAt(0x15105);
    // 1501:00f5  rep outsb dx, byte ptr [si]  [x39479]
    c.ip = 0xf7u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15107:
    if (c.tracing) c.traceAt(0x15107);
    // 1501:00f7  inc word ptr [0x2d70]  [x407]
    c.w16(c.dsb + (uint16_t)(0x2d70u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2d70u)), false));
    // 1501:00fb  mov ax, word ptr [0x2d70]  [x407]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2d70u)));
    // 1501:00fe  xor dx, dx  [x407]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:0100  mov cx, 0x21  [x407]
    c.c.x = (uint16_t)(0x21u);
    // 1501:0103  div cx  [x407]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x103u); }   // #DE: int 0, then again
    // 1501:0105  cmp dx, 0  [x407]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0108  jne 0x10e  [x407]
    if (!c.zf) goto L1511e;
L1511a:
    if (c.tracing) c.traceAt(0x1511a);
    // 1501:010a  not byte ptr [0x2d73]  [x12]
    c.w8(c.dsb + (uint16_t)(0x2d73u), ~(c.r8(c.dsb + (uint16_t)(0x2d73u))));
L1511e:
    if (c.tracing) c.traceAt(0x1511e);
    // 1501:010e  cmp word ptr [0x2d70], 0x170  [x407]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2d70u)), 0x170u, true);
    // 1501:0114  jb 0x124  [x407]
    if (c.cf) goto L15134;
L15126:
    if (c.tracing) c.traceAt(0x15126);
    // 1501:0116  add byte ptr [0x2d72], 2  [x40]
    c.w8(c.dsb + (uint16_t)(0x2d72u), c.add<8>(c.r8(c.dsb + (uint16_t)(0x2d72u)), 0x2u, false));
    // 1501:011b  cmp byte ptr [0x2d72], 0x50  [x40]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2d72u)), 0x50u, true);
    // 1501:0120  jb 0x124  [x40]
    if (c.cf) goto L15134;
L15132:
    if (c.tracing) c.traceAt(0x15132);
    // 1501:0122  jmp 0x126  [x1]
    goto L15136;
L15134:
    if (c.tracing) c.traceAt(0x15134);
    // 1501:0124  jmp 0xc8  [x406]
    goto L150d8;
L15136:
    if (c.tracing) c.traceAt(0x15136);
    // 1501:0126  mov byte ptr [0x2d72], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2d72u), 0x0u);
L1513b:
    if (c.tracing) c.traceAt(0x1513b);
    // 1501:012b  call 0x184  [x80]
    c.push16(0x12eu); code_32(c, 0x15194u); if (c.ip != 0x12eu) c.badReturn(0x1513b);
L1513e:
    if (c.tracing) c.traceAt(0x1513e);
    // 1501:012e  mov ah, byte ptr [0x2d72]  [x80]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2d72u)));
    // 1501:0132  mov dx, 0x3c8  [x80]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0135  xor al, al  [x80]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0137  out dx, al  [x80]
    c.ip = 0x138u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0138  inc dx  [x80]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0139  mov si, 0x2a70  [x80]
    c.si.x = (uint16_t)(0x2a70u);
    // 1501:013c  mov cx, 0x60  [x80]
    c.c.x = (uint16_t)(0x60u);
L1514f:
    if (c.tracing) c.traceAt(0x1514f);
    // 1501:013f  mov al, byte ptr [si]  [x7680]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0141  sub al, ah  [x7680]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 1501:0143  jge 0x147  [x7680]
    if ((c.sf == c.of)) goto L15157;
L15155:
    if (c.tracing) c.traceAt(0x15155);
    // 1501:0145  xor al, al  [x5068]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15157:
    if (c.tracing) c.traceAt(0x15157);
    // 1501:0147  out dx, al  [x7680]
    c.ip = 0x148u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0148  sub al, ah  [x7680]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 1501:014a  inc si  [x7680]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:014b  loop 0x13f  [x7680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1514f;
L1515d:
    if (c.tracing) c.traceAt(0x1515d);
    // 1501:014d  mov al, 0x3f  [x80]
    c.a.l = (uint8_t)(0x3fu);
    // 1501:014f  sub al, byte ptr [0x2d72]  [x80]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x2d72u)), true));
    // 1501:0153  jns 0x157  [x80]
    if (!c.sf) goto L15167;
L15165:
    if (c.tracing) c.traceAt(0x15165);
    // 1501:0155  xor al, al  [x16]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15167:
    if (c.tracing) c.traceAt(0x15167);
    // 1501:0157  mov cx, 0x60  [x80]
    c.c.x = (uint16_t)(0x60u);
L1516a:
    if (c.tracing) c.traceAt(0x1516a);
    // 1501:015a  out dx, al  [x7680]
    c.ip = 0x15bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:015b  loop 0x15a  [x7680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1516a;
L1516d:
    if (c.tracing) c.traceAt(0x1516d);
    // 1501:015d  push es  [x80]
    c.push16(c.es);
    // 1501:015e  mov ax, word ptr cs:[7]  [x80]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:0162  mov es, ax  [x80]
    c.loadEs(c.a.x);
    // 1501:0164  mov si, word ptr cs:[0xb]  [x80]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xbu)));
    // 1501:0169  dec word ptr es:[si]  [x80]
    c.w16(c.esb + (uint16_t)(c.si.x), c.dec<16>(c.r16(c.esb + (uint16_t)(c.si.x)), false));
    // 1501:016c  cmp word ptr es:[si], 0  [x80]
    c.sub<16>(c.r16(c.esb + (uint16_t)(c.si.x)), 0x0u, true);
    // 1501:0170  jns 0x177  [x80]
    if (!c.sf) goto L15187;
L15182:
    if (c.tracing) c.traceAt(0x15182);
    // 1501:0172  mov word ptr es:[si], 0  [x16]
    c.w16(c.esb + (uint16_t)(c.si.x), 0x0u);
L15187:
    if (c.tracing) c.traceAt(0x15187);
    // 1501:0177  pop es  [x80]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0178  inc byte ptr [0x2d72]  [x80]
    c.w8(c.dsb + (uint16_t)(0x2d72u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x2d72u)), false));
    // 1501:017c  cmp byte ptr [0x2d72], 0x50  [x80]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2d72u)), 0x50u, true);
    // 1501:0181  jb 0x12b  [x80]
    if (c.cf) goto L1513b;
L15193:
    if (c.tracing) c.traceAt(0x15193);
    // 1501:0183  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L15194:
    if (c.tracing) c.traceAt(0x15194);
    // 1501:0184  mov dx, 0x3da  [x622]
    c.dx_.x = (uint16_t)(0x3dau);
L15197:
    if (c.tracing) c.traceAt(0x15197);
    // 1501:0187  in al, dx  [x28933]
    c.ip = 0x188u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15198:
    if (c.tracing) c.traceAt(0x15198);
    // 1501:0188  test al, 8  [x38370]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:018a  je 0x187  [x38370]
    if (c.zf) goto L15197;
L1519c:
    if (c.tracing) c.traceAt(0x1519c);
    // 1501:018c  in al, dx  [x1983]
    c.ip = 0x18du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1519d:
    if (c.tracing) c.traceAt(0x1519d);
    // 1501:018d  test al, 8  [x2644]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:018f  jne 0x18c  [x2644]
    if (!c.zf) goto L1519c;
L151a1:
    if (c.tracing) c.traceAt(0x151a1);
    // 1501:0191  ret   [x622]
    c.ip = c.pop16(); return;
L151a2:
    if (c.tracing) c.traceAt(0x151a2);
    // 1501:0192  cld   [x1]
    c.df = false;
    // 1501:0193  push es  [x1]
    c.push16(c.es);
    // 1501:0194  mov si, 0xffff  [x1]
    c.si.x = (uint16_t)(0xffffu);
L151a7:
    if (c.tracing) c.traceAt(0x151a7);
    // 1501:0197  inc si  [x41]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0198  cmp word ptr [si], 0x4d43  [x41]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4d43u, true);
    // 1501:019c  jne 0x197  [x41]
    if (!c.zf) goto L151a7;
L151ae:
    if (c.tracing) c.traceAt(0x151ae);
    // 1501:019e  cmp word ptr [si + 2], 0x5041  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5041u, true);
    // 1501:01a3  jne 0x197  [x1]
    if (!c.zf) goto L151a7;
L151b5:
    if (c.tracing) c.traceAt(0x151b5);
    // 1501:01a5  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, true));
    // 1501:01a8  mov di, 0x2a70  [x1]
    c.di.x = (uint16_t)(0x2a70u);
    // 1501:01ab  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 1501:01ad  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:01af  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L151c2:
    if (c.tracing) c.traceAt(0x151c2);
    // 1501:01b2  lodsb al, byte ptr [si]  [x768]
    c.ip = 0x1b3u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:01b3  shr al, 2  [x768]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:01b6  stosb byte ptr es:[di], al  [x768]
    c.stos<8, false>(0);
    // 1501:01b7  loop 0x1b2  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151c2;
L151c9:
    if (c.tracing) c.traceAt(0x151c9);
    // 1501:01b9  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:01ba  mov si, 0xffff  [x1]
    c.si.x = (uint16_t)(0xffffu);
L151cd:
    if (c.tracing) c.traceAt(0x151cd);
    // 1501:01bd  inc si  [x2185]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:01be  cmp word ptr [si], 0x4f42  [x2185]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4f42u, true);
    // 1501:01c2  jne 0x1bd  [x2185]
    if (!c.zf) goto L151cd;
L151d4:
    if (c.tracing) c.traceAt(0x151d4);
    // 1501:01c4  cmp word ptr [si + 2], 0x5944  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5944u, true);
    // 1501:01c9  jne 0x1bd  [x1]
    if (!c.zf) goto L151cd;
L151db:
    if (c.tracing) c.traceAt(0x151db);
    // 1501:01cb  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:01ce  mov al, byte ptr [si + 3]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)));
    // 1501:01d1  mov ah, byte ptr [si + 2]  [x1]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)));
    // 1501:01d4  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:01d7  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, false));
    // 1501:01d9  mov bp, ax  [x1]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:01db  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:01de  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 1501:01e0  out dx, al  [x1]
    c.ip = 0x1e1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01e1  mov byte ptr cs:[0x213], 1  [x1]
    c.w8(c.csb + (uint16_t)(0x213u), 0x1u);
    // 1501:01e7  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L151f9:
    if (c.tracing) c.traceAt(0x151f9);
    // 1501:01e9  lodsb al, byte ptr [si]  [x2538]
    c.ip = 0x1eau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:01ea  and al, al  [x2538]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.a.l), true));
    // 1501:01ec  jns 0x202  [x2538]
    if (!c.sf) goto L15212;
L151fe:
    if (c.tracing) c.traceAt(0x151fe);
    // 1501:01ee  neg al  [x1507]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:01f0  mov cl, al  [x1507]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:01f2  inc cl  [x1507]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:01f4  xor ch, ch  [x1507]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
    // 1501:01f6  lodsb al, byte ptr [si]  [x1507]
    c.ip = 0x1f7u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
L15207:
    if (c.tracing) c.traceAt(0x15207);
    // 1501:01f7  call 0x214  [x59373]
    c.push16(0x1fau); code_32(c, 0x15224u); if (c.ip != 0x1fau) c.badReturn(0x15207);
L1520a:
    if (c.tracing) c.traceAt(0x1520a);
    // 1501:01fa  loop 0x1f7  [x59373]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15207;
L1520c:
    if (c.tracing) c.traceAt(0x1520c);
    // 1501:01fc  cmp si, bp  [x1507]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:01fe  jb 0x1e9  [x1507]
    if (c.cf) goto L151f9;
L15210:
    if (c.tracing) c.traceAt(0x15210);
    // 1501:0200  jmp 0x212  [x1]
    goto L15222;
L15212:
    if (c.tracing) c.traceAt(0x15212);
    // 1501:0202  mov cl, al  [x1031]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:0204  inc cl  [x1031]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:0206  xor ch, ch  [x1031]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
L15218:
    if (c.tracing) c.traceAt(0x15218);
    // 1501:0208  lodsb al, byte ptr [si]  [x4627]
    c.ip = 0x209u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:0209  call 0x214  [x4627]
    c.push16(0x20cu); code_32(c, 0x15224u); if (c.ip != 0x20cu) c.badReturn(0x15219);
L1521c:
    if (c.tracing) c.traceAt(0x1521c);
    // 1501:020c  loop 0x208  [x4627]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15218;
L1521e:
    if (c.tracing) c.traceAt(0x1521e);
    // 1501:020e  cmp si, bp  [x1031]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:0210  jb 0x1e9  [x1031]
    if (c.cf) goto L151f9;
L15222:
    if (c.tracing) c.traceAt(0x15222);
    // 1501:0212  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L15224:
    if (c.tracing) c.traceAt(0x15224);
    // 1501:0214  push ax  [x64000]
    c.push16(c.a.x);
    // 1501:0215  mov dx, 0x3c5  [x64000]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:0218  mov al, byte ptr cs:[0x213]  [x64000]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x213u)));
    // 1501:021c  out dx, al  [x64000]
    c.ip = 0x21du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:021d  pop ax  [x64000]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:021e  mov byte ptr es:[di], al  [x64000]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0221  shl byte ptr cs:[0x213], 1  [x64000]
    c.w8(c.csb + (uint16_t)(0x213u), c.shl<8>(c.r8(c.csb + (uint16_t)(0x213u)), (int)((0x1u) & 31), false));
    // 1501:0226  cmp byte ptr cs:[0x213], 8  [x64000]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x213u)), 0x8u, true);
    // 1501:022c  jbe 0x235  [x64000]
    if ((c.cf || c.zf)) goto L15245;
L1523e:
    if (c.tracing) c.traceAt(0x1523e);
    // 1501:022e  inc di  [x16000]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:022f  mov byte ptr cs:[0x213], 1  [x16000]
    c.w8(c.csb + (uint16_t)(0x213u), 0x1u);
L15245:
    if (c.tracing) c.traceAt(0x15245);
    // 1501:0235  ret   [x64000]
    c.ip = c.pop16(); return;
}

static Register reg_code_32(32, {0x15010, 0x1501d, 0x15034, 0x15039, 0x15043, 0x15046, 0x15064, 0x15066, 0x1506a, 0x1507a, 0x1508f, 0x15092, 0x1509e, 0x150a1, 0x150a4, 0x150a7, 0x150a9, 0x150be, 0x150c1, 0x150ce, 0x150d0, 0x150d3, 0x150d6, 0x150d8, 0x150db, 0x150ec, 0x150ee, 0x150f1, 0x150f3, 0x150f6, 0x150f8, 0x15105, 0x15107, 0x1511a, 0x1511e, 0x15126, 0x15132, 0x15134, 0x15136, 0x1513b, 0x1513e, 0x1514f, 0x15155, 0x15157, 0x1515d, 0x15165, 0x15167, 0x1516a, 0x1516d, 0x15182, 0x15187, 0x15193, 0x15194, 0x15197, 0x15198, 0x1519c, 0x1519d, 0x151a1, 0x151a2, 0x151a7, 0x151ae, 0x151b5, 0x151c2, 0x151c9, 0x151cd, 0x151d4, 0x151db, 0x151f9, 0x151fe, 0x15207, 0x1520a, 0x1520c, 0x15210, 0x15212, 0x15218, 0x1521c, 0x1521e, 0x15222, 0x15224, 0x1523e, 0x15245}, code_32);

}  // namespace show
