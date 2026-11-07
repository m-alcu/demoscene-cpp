// Part 6 (16C.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_7(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x151b2: goto L151b2;
    case 0x151c9: goto L151c9;
    case 0x151d3: goto L151d3;
    case 0x151d6: goto L151d6;
    case 0x151d8: goto L151d8;
    case 0x151de: goto L151de;
    case 0x151e7: goto L151e7;
    case 0x151fc: goto L151fc;
    case 0x151fe: goto L151fe;
    case 0x1520b: goto L1520b;
    case 0x1520d: goto L1520d;
    case 0x1521a: goto L1521a;
    case 0x1521c: goto L1521c;
    case 0x15229: goto L15229;
    case 0x1522b: goto L1522b;
    case 0x15238: goto L15238;
    case 0x1523a: goto L1523a;
    case 0x15247: goto L15247;
    case 0x15249: goto L15249;
    case 0x15256: goto L15256;
    case 0x15258: goto L15258;
    case 0x15265: goto L15265;
    case 0x15267: goto L15267;
    case 0x1526c: goto L1526c;
    case 0x15277: goto L15277;
    case 0x1527a: goto L1527a;
    case 0x1527c: goto L1527c;
    case 0x15282: goto L15282;
    case 0x15284: goto L15284;
    case 0x1528d: goto L1528d;
    case 0x15294: goto L15294;
    case 0x15296: goto L15296;
    case 0x152a1: goto L152a1;
    case 0x152a4: goto L152a4;
    case 0x152a6: goto L152a6;
    case 0x152ac: goto L152ac;
    case 0x152ae: goto L152ae;
    case 0x152b7: goto L152b7;
    case 0x152be: goto L152be;
    case 0x152e0: goto L152e0;
    case 0x152ea: goto L152ea;
    case 0x152ff: goto L152ff;
    case 0x15302: goto L15302;
    case 0x15315: goto L15315;
    case 0x15321: goto L15321;
    case 0x15328: goto L15328;
    case 0x15360: goto L15360;
    case 0x15364: goto L15364;
    case 0x15371: goto L15371;
    case 0x15373: goto L15373;
    case 0x15376: goto L15376;
    case 0x15379: goto L15379;
    case 0x15380: goto L15380;
    case 0x15383: goto L15383;
    case 0x1538a: goto L1538a;
    case 0x1538d: goto L1538d;
    case 0x15399: goto L15399;
    case 0x153a1: goto L153a1;
    case 0x153a9: goto L153a9;
    case 0x153b1: goto L153b1;
    case 0x153b9: goto L153b9;
    case 0x153c1: goto L153c1;
    case 0x153cb: goto L153cb;
    case 0x153d3: goto L153d3;
    case 0x153d8: goto L153d8;
    case 0x153e0: goto L153e0;
    case 0x153f1: goto L153f1;
    case 0x153f9: goto L153f9;
    case 0x153fe: goto L153fe;
    case 0x15406: goto L15406;
    case 0x15409: goto L15409;
    case 0x15412: goto L15412;
    case 0x15415: goto L15415;
    case 0x1543a: goto L1543a;
    case 0x15471: goto L15471;
    case 0x1547e: goto L1547e;
    case 0x1548c: goto L1548c;
    case 0x154c7: goto L154c7;
    case 0x154ef: goto L154ef;
    case 0x154fa: goto L154fa;
    case 0x15504: goto L15504;
    case 0x15506: goto L15506;
    case 0x1550e: goto L1550e;
    case 0x15514: goto L15514;
    case 0x1551c: goto L1551c;
    case 0x15521: goto L15521;
    case 0x1552b: goto L1552b;
    case 0x1552c: goto L1552c;
    case 0x1552f: goto L1552f;
    case 0x15530: goto L15530;
    case 0x15534: goto L15534;
    case 0x15535: goto L15535;
    case 0x15539: goto L15539;
    case 0x1553a: goto L1553a;
    case 0x15549: goto L15549;
    case 0x15553: goto L15553;
    case 0x15555: goto L15555;
    case 0x1555d: goto L1555d;
    case 0x15563: goto L15563;
    case 0x15567: goto L15567;
    case 0x1556c: goto L1556c;
    case 0x15576: goto L15576;
    case 0x1559e: goto L1559e;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x1a2  [x1]
    goto L151b2;
L151b2:
    if (c.tracing) c.traceAt(0x151b2);
    // 1501:01a2  mov word ptr cs:[0x19a], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x19au), c.c.x);
    // 1501:01a7  mov word ptr cs:[0x19c], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x19cu), c.dx_.x);
    // 1501:01ac  sub dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 1501:01af  mov word ptr cs:[0x19e], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x19eu), c.dx_.x);
    // 1501:01b4  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:01b7  int 0x10  [x1]
    c.ip = 0x1b9u; c.d32 = false; c.intr(0x10, 0x1b9u);
L151c9:
    if (c.tracing) c.traceAt(0x151c9);
    // 1501:01b9  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:01bc  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:01be  out dx, al  [x1]
    c.ip = 0x1bfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01bf  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:01c0  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L151d3:
    if (c.tracing) c.traceAt(0x151d3);
    // 1501:01c3  out dx, al  [x48]
    c.ip = 0x1c4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01c4  loop 0x1c3  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151d3;
L151d6:
    if (c.tracing) c.traceAt(0x151d6);
    // 1501:01c6  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L151d8:
    if (c.tracing) c.traceAt(0x151d8);
    // 1501:01c8  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:01ca  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:01cc  int 0x10  [x16]
    c.ip = 0x1ceu; c.d32 = false; c.intr(0x10, 0x1ceu);
L151de:
    if (c.tracing) c.traceAt(0x151de);
    // 1501:01ce  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:01d0  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:01d2  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:01d5  jne 0x1c8  [x16]
    if (!c.zf) goto L151d8;
L151e7:
    if (c.tracing) c.traceAt(0x151e7);
    // 1501:01d7  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:01da  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:01dc  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:01df  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:01e2  out dx, ax  [x1]
    c.ip = 0x1e3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:01e3  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:01e6  mov di, 0x8000  [x1]
    c.di.x = (uint16_t)(0x8000u);
    // 1501:01e9  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L151fc:
    if (c.tracing) c.traceAt(0x151fc);
    // 1501:01ec  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x1eeu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L151fe:
    if (c.tracing) c.traceAt(0x151fe);
    // 1501:01ee  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:01f1  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:01f4  out dx, ax  [x1]
    c.ip = 0x1f5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:01f5  mov di, 0x8000  [x1]
    c.di.x = (uint16_t)(0x8000u);
    // 1501:01f8  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1520b:
    if (c.tracing) c.traceAt(0x1520b);
    // 1501:01fb  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x1fdu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1520d:
    if (c.tracing) c.traceAt(0x1520d);
    // 1501:01fd  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0200  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:0203  out dx, ax  [x1]
    c.ip = 0x204u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0204  mov di, 0x8000  [x1]
    c.di.x = (uint16_t)(0x8000u);
    // 1501:0207  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1521a:
    if (c.tracing) c.traceAt(0x1521a);
    // 1501:020a  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x20cu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1521c:
    if (c.tracing) c.traceAt(0x1521c);
    // 1501:020c  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:020f  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0212  out dx, ax  [x1]
    c.ip = 0x213u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0213  mov di, 0x8000  [x1]
    c.di.x = (uint16_t)(0x8000u);
    // 1501:0216  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L15229:
    if (c.tracing) c.traceAt(0x15229);
    // 1501:0219  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x21bu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1522b:
    if (c.tracing) c.traceAt(0x1522b);
    // 1501:021b  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:021e  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:0221  out dx, ax  [x1]
    c.ip = 0x222u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0222  mov di, 0xa000  [x1]
    c.di.x = (uint16_t)(0xa000u);
    // 1501:0225  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L15238:
    if (c.tracing) c.traceAt(0x15238);
    // 1501:0228  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x22au; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1523a:
    if (c.tracing) c.traceAt(0x1523a);
    // 1501:022a  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:022d  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:0230  out dx, ax  [x1]
    c.ip = 0x231u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0231  mov di, 0xa000  [x1]
    c.di.x = (uint16_t)(0xa000u);
    // 1501:0234  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L15247:
    if (c.tracing) c.traceAt(0x15247);
    // 1501:0237  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x239u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L15249:
    if (c.tracing) c.traceAt(0x15249);
    // 1501:0239  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:023c  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:023f  out dx, ax  [x1]
    c.ip = 0x240u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0240  mov di, 0xa000  [x1]
    c.di.x = (uint16_t)(0xa000u);
    // 1501:0243  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L15256:
    if (c.tracing) c.traceAt(0x15256);
    // 1501:0246  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x248u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L15258:
    if (c.tracing) c.traceAt(0x15258);
    // 1501:0248  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:024b  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:024e  out dx, ax  [x1]
    c.ip = 0x24fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:024f  mov di, 0xa000  [x1]
    c.di.x = (uint16_t)(0xa000u);
    // 1501:0252  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L15265:
    if (c.tracing) c.traceAt(0x15265);
    // 1501:0255  rep movsw word ptr es:[di], word ptr [si]  [x3201]
    c.ip = 0x257u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L15267:
    if (c.tracing) c.traceAt(0x15267);
    // 1501:0257  mov si, 0x14  [x1]
    c.si.x = (uint16_t)(0x14u);
    // 1501:025a  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
L1526c:
    if (c.tracing) c.traceAt(0x1526c);
    // 1501:025c  mov dx, 0x3c4  [x4]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:025f  mov al, 2  [x4]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0261  mov ah, bl  [x4]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0263  out dx, ax  [x4]
    c.ip = 0x264u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0264  mov di, 0xc000  [x4]
    c.di.x = (uint16_t)(0xc000u);
L15277:
    if (c.tracing) c.traceAt(0x15277);
    // 1501:0267  mov cx, 0xa  [x640]
    c.c.x = (uint16_t)(0xau);
L1527a:
    if (c.tracing) c.traceAt(0x1527a);
    // 1501:026a  rep movsw word ptr es:[di], word ptr [si]  [x7040]
    c.ip = 0x26cu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1527c:
    if (c.tracing) c.traceAt(0x1527c);
    // 1501:026c  sub si, 0x28  [x640]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x28u, true));
    // 1501:026f  mov cx, 0xa  [x640]
    c.c.x = (uint16_t)(0xau);
L15282:
    if (c.tracing) c.traceAt(0x15282);
    // 1501:0272  rep movsw word ptr es:[di], word ptr [si]  [x7040]
    c.ip = 0x274u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L15284:
    if (c.tracing) c.traceAt(0x15284);
    // 1501:0274  add si, 0x28  [x640]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x28u, false));
    // 1501:0277  cmp di, 0xd900  [x640]
    c.sub<16>(c.di.x, 0xd900u, true);
    // 1501:027b  jb 0x267  [x640]
    if (c.cf) goto L15277;
L1528d:
    if (c.tracing) c.traceAt(0x1528d);
    // 1501:027d  shl bl, 1  [x4]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 1501:027f  cmp bl, 0x10  [x4]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:0282  jb 0x25c  [x4]
    if (c.cf) goto L1526c;
L15294:
    if (c.tracing) c.traceAt(0x15294);
    // 1501:0284  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
L15296:
    if (c.tracing) c.traceAt(0x15296);
    // 1501:0286  mov dx, 0x3c4  [x4]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0289  mov al, 2  [x4]
    c.a.l = (uint8_t)(0x2u);
    // 1501:028b  mov ah, bl  [x4]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:028d  out dx, ax  [x4]
    c.ip = 0x28eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:028e  mov di, 0xe000  [x4]
    c.di.x = (uint16_t)(0xe000u);
L152a1:
    if (c.tracing) c.traceAt(0x152a1);
    // 1501:0291  mov cx, 0xa  [x640]
    c.c.x = (uint16_t)(0xau);
L152a4:
    if (c.tracing) c.traceAt(0x152a4);
    // 1501:0294  rep movsw word ptr es:[di], word ptr [si]  [x7040]
    c.ip = 0x296u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L152a6:
    if (c.tracing) c.traceAt(0x152a6);
    // 1501:0296  sub si, 0x28  [x640]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x28u, true));
    // 1501:0299  mov cx, 0xa  [x640]
    c.c.x = (uint16_t)(0xau);
L152ac:
    if (c.tracing) c.traceAt(0x152ac);
    // 1501:029c  rep movsw word ptr es:[di], word ptr [si]  [x7040]
    c.ip = 0x29eu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L152ae:
    if (c.tracing) c.traceAt(0x152ae);
    // 1501:029e  add si, 0x28  [x640]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x28u, false));
    // 1501:02a1  cmp di, 0xf900  [x640]
    c.sub<16>(c.di.x, 0xf900u, true);
    // 1501:02a5  jb 0x291  [x640]
    if (c.cf) goto L152a1;
L152b7:
    if (c.tracing) c.traceAt(0x152b7);
    // 1501:02a7  shl bl, 1  [x4]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 1501:02a9  cmp bl, 0x10  [x4]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:02ac  jb 0x286  [x4]
    if (c.cf) goto L15296;
L152be:
    if (c.tracing) c.traceAt(0x152be);
    // 1501:02ae  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:02b1  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:02b4  out dx, ax  [x1]
    c.ip = 0x2b5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02b5  mov word ptr cs:[0x1a0], 2  [x1]
    c.w16(c.csb + (uint16_t)(0x1a0u), 0x2u);
    // 1501:02bc  mov word ptr cs:[0x198], 0x190  [x1]
    c.w16(c.csb + (uint16_t)(0x198u), 0x190u);
    // 1501:02c3  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:02c6  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:02c9  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:02cb  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:02cd  out dx, ax  [x1]
    c.ip = 0x2ceu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02ce  jmp 0x2d0  [x1]
    goto L152e0;
L152e0:
    if (c.tracing) c.traceAt(0x152e0);
    // 1501:02d0  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:02d3  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:02d5  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:02d7  out dx, ax  [x1]
    c.ip = 0x2d8u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02d8  jmp 0x2da  [x1]
    goto L152ea;
L152ea:
    if (c.tracing) c.traceAt(0x152ea);
    // 1501:02da  push es  [x1602]
    c.ip = 0x2dau; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:02db  mov ax, word ptr cs:[0x19a]  [x1602]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19au)));
    // 1501:02df  mov es, ax  [x1602]
    c.loadEs(c.a.x);
    // 1501:02e1  mov si, word ptr cs:[0x19c]  [x1602]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19cu)));
    // 1501:02e6  mov dx, word ptr es:[si]  [x1602]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:02e9  pop es  [x1602]
    c.loadEs((uint16_t)c.pop16());
    // 1501:02ea  cmp dx, 0  [x1602]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:02ed  je 0x2da  [x1602]
    if (c.zf) goto L152ea;
L152ff:
    if (c.tracing) c.traceAt(0x152ff);
    // 1501:02ef  call 0x51c  [x1]
    c.push16(0x2f2u); code_7(c, 0x1552cu); if (c.ip != 0x2f2u) c.badReturn(0x152ff);
L15302:
    if (c.tracing) c.traceAt(0x15302);
    // 1501:02f2  push es  [x1]
    c.push16(c.es);
    // 1501:02f3  mov ax, word ptr cs:[0x19a]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19au)));
    // 1501:02f7  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:02f9  mov si, word ptr cs:[0x19e]  [x1]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19eu)));
    // 1501:02fe  mov ax, word ptr es:[si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0301  mov word ptr [0xce5d], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xce5du), c.a.x);
    // 1501:0304  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L15315:
    if (c.tracing) c.traceAt(0x15315);
    // 1501:0305  inc word ptr [0xce52]  [x1868]
    c.w16(c.dsb + (uint16_t)(0xffffce52u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffce52u)), false));
    // 1501:0309  and word ptr [0xce52], 1  [x1868]
    c.w16(c.dsb + (uint16_t)(0xffffce52u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffce52u))) & (0x1u), true));
    // 1501:030e  call 0x51c  [x1868]
    c.push16(0x311u); code_7(c, 0x1552cu); if (c.ip != 0x311u) c.badReturn(0x1531e);
L15321:
    if (c.tracing) c.traceAt(0x15321);
    // 1501:0311  cmp word ptr [0xce5b], 0x14  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce5bu)), 0x14u, true);
    // 1501:0316  ja 0x354  [x1868]
    if ((!c.cf && !c.zf)) goto L15364;
L15328:
    if (c.tracing) c.traceAt(0x15328);
    // 1501:0318  mov ax, word ptr [0xce5d]  [x21]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xce5du)));
    // 1501:031b  mov word ptr [0xce5f], ax  [x21]
    c.w16(c.dsb + (uint16_t)(0xce5fu), c.a.x);
    // 1501:031e  push es  [x21]
    c.push16(c.es);
    // 1501:031f  mov bx, word ptr cs:[0x19a]  [x21]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19au)));
    // 1501:0324  mov es, bx  [x21]
    c.loadEs(c.b.x);
    // 1501:0326  mov si, word ptr cs:[0x19e]  [x21]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19eu)));
    // 1501:032b  mov dx, word ptr es:[si]  [x21]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:032e  mov word ptr [0xce5d], dx  [x21]
    c.w16(c.dsb + (uint16_t)(0xffffce5du), c.dx_.x);
    // 1501:0332  pop es  [x21]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0333  sub dx, ax  [x21]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.a.x, false));
    // 1501:0335  cmp dx, 0x14  [x21]
    c.sub<16>(c.dx_.x, 0x14u, true);
    // 1501:0338  jl 0x350  [x21]
    if ((c.sf != c.of)) goto L15360;
    c.notTranslated(0x1534a, "fall-through");
L15360:
    if (c.tracing) c.traceAt(0x15360);
    // 1501:0350  inc word ptr [0xce5b]  [x21]
    c.w16(c.dsb + (uint16_t)(0xffffce5bu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffce5bu)), true));
L15364:
    if (c.tracing) c.traceAt(0x15364);
    // 1501:0354  mov dx, 0x3c8  [x1868]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0357  mov al, 1  [x1868]
    c.a.l = (uint8_t)(0x1u);
    // 1501:0359  out dx, al  [x1868]
    c.ip = 0x35au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:035a  inc dx  [x1868]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:035b  mov si, 0xc803  [x1868]
    c.si.x = (uint16_t)(0xc803u);
    // 1501:035e  mov cx, 0x2d  [x1868]
    c.c.x = (uint16_t)(0x2du);
L15371:
    if (c.tracing) c.traceAt(0x15371);
    // 1501:0361  rep outsb dx, byte ptr [si]  [x85928]
    c.ip = 0x363u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15373:
    if (c.tracing) c.traceAt(0x15373);
    // 1501:0363  call 0x46e  [x1868]
    c.push16(0x366u); code_7(c, 0x1547eu); if (c.ip != 0x366u) c.badReturn(0x15373);
L15376:
    if (c.tracing) c.traceAt(0x15376);
    // 1501:0366  call 0x405  [x1868]
    c.push16(0x369u); code_7(c, 0x15415u); if (c.ip != 0x369u) c.badReturn(0x15376);
L15379:
    if (c.tracing) c.traceAt(0x15379);
    // 1501:0369  cmp byte ptr [0xce61], 0  [x1868]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffce61u)), 0x0u, true);
    // 1501:036e  je 0x373  [x1868]
    if (c.zf) goto L15383;
L15380:
    if (c.tracing) c.traceAt(0x15380);
    // 1501:0370  call 0x4df  [x377]
    c.push16(0x373u); code_7(c, 0x154efu); if (c.ip != 0x373u) c.badReturn(0x15380);
L15383:
    if (c.tracing) c.traceAt(0x15383);
    // 1501:0373  cmp byte ptr [0xce62], 0  [x1868]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffce62u)), 0x0u, true);
    // 1501:0378  je 0x37d  [x1868]
    if (c.zf) goto L1538d;
L1538a:
    if (c.tracing) c.traceAt(0x1538a);
    // 1501:037a  call 0x52a  [x604]
    c.push16(0x37du); code_7(c, 0x1553au); if (c.ip != 0x37du) c.badReturn(0x1538a);
L1538d:
    if (c.tracing) c.traceAt(0x1538d);
    // 1501:037d  inc word ptr [0xce58]  [x1868]
    c.w16(c.dsb + (uint16_t)(0xffffce58u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), false));
    // 1501:0381  cmp word ptr [0xce58], 0x578  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x578u, true);
    // 1501:0387  je 0x3b1  [x1868]
    if (c.zf) goto L153c1;
L15399:
    if (c.tracing) c.traceAt(0x15399);
    // 1501:0389  cmp word ptr [0xce58], 0x640  [x1867]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x640u, true);
    // 1501:038f  je 0x3b1  [x1867]
    if (c.zf) goto L153c1;
L153a1:
    if (c.tracing) c.traceAt(0x153a1);
    // 1501:0391  cmp word ptr [0xce58], 0xc8  [x1866]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0xc8u, true);
    // 1501:0397  je 0x3b1  [x1866]
    if (c.zf) goto L153c1;
L153a9:
    if (c.tracing) c.traceAt(0x153a9);
    // 1501:0399  cmp word ptr [0xce58], 0x190  [x1865]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x190u, true);
    // 1501:039f  je 0x3b1  [x1865]
    if (c.zf) goto L153c1;
L153b1:
    if (c.tracing) c.traceAt(0x153b1);
    // 1501:03a1  cmp word ptr [0xce58], 0x258  [x1864]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x258u, true);
    // 1501:03a7  je 0x3b1  [x1864]
    if (c.zf) goto L153c1;
L153b9:
    if (c.tracing) c.traceAt(0x153b9);
    // 1501:03a9  cmp word ptr [0xce58], 0x320  [x1863]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x320u, true);
    // 1501:03af  jne 0x3bb  [x1863]
    if (!c.zf) goto L153cb;
L153c1:
    if (c.tracing) c.traceAt(0x153c1);
    // 1501:03b1  mov byte ptr [0xce61], 1  [x6]
    c.w8(c.dsb + (uint16_t)(0xffffce61u), 0x1u);
    // 1501:03b6  mov byte ptr [0xce62], 1  [x6]
    c.w8(c.dsb + (uint16_t)(0xffffce62u), 0x1u);
L153cb:
    if (c.tracing) c.traceAt(0x153cb);
    // 1501:03bb  cmp word ptr [0xce58], 0x3e8  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x3e8u, true);
    // 1501:03c1  jne 0x3c8  [x1868]
    if (!c.zf) goto L153d8;
L153d3:
    if (c.tracing) c.traceAt(0x153d3);
    // 1501:03c3  mov byte ptr [0xce62], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffce62u), 0x1u);
L153d8:
    if (c.tracing) c.traceAt(0x153d8);
    // 1501:03c8  cmp word ptr [0xce58], 0x429  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x429u, true);
    // 1501:03ce  jne 0x3e1  [x1868]
    if (!c.zf) goto L153f1;
L153e0:
    if (c.tracing) c.traceAt(0x153e0);
    // 1501:03d0  mov word ptr [0xce54], 0xac00  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffce54u), 0xac00u);
    // 1501:03d6  mov word ptr [0xce56], 0xae00  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffce56u), 0xae00u);
    // 1501:03dc  mov byte ptr [0xce62], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffce62u), 0x1u);
L153f1:
    if (c.tracing) c.traceAt(0x153f1);
    // 1501:03e1  cmp word ptr [0xce58], 0x708  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x708u, true);
    // 1501:03e7  jne 0x3ee  [x1868]
    if (!c.zf) goto L153fe;
L153f9:
    if (c.tracing) c.traceAt(0x153f9);
    // 1501:03e9  mov byte ptr [0xce62], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffce62u), 0x1u);
L153fe:
    if (c.tracing) c.traceAt(0x153fe);
    // 1501:03ee  cmp word ptr [0xce58], 0x74c  [x1868]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffce58u)), 0x74cu, true);
    // 1501:03f4  jne 0x3f9  [x1868]
    if (!c.zf) goto L15409;
L15406:
    if (c.tracing) c.traceAt(0x15406);
    // 1501:03f6  jmp 0x58e  [x1]
    goto L1559e;
L15409:
    if (c.tracing) c.traceAt(0x15409);
    // 1501:03f9  in al, 0x60  [x1867]
    c.ip = 0x3fbu; c.d32 = false; c.a.l = c.in8(0x60);
    // 1501:03fb  cmp al, 1  [x1867]
    c.sub<8>(c.a.l, 0x1u, true);
    // 1501:03fd  jne 0x402  [x1867]
    if (!c.zf) goto L15412;
    c.notTranslated(0x1540f, "fall-through");
L15412:
    if (c.tracing) c.traceAt(0x15412);
    // 1501:0402  jmp 0x305  [x1867]
    goto L15315;
L15415:
    if (c.tracing) c.traceAt(0x15415);
    // 1501:0405  mov dx, 0x3ce  [x1868]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0408  mov al, 5  [x1868]
    c.a.l = (uint8_t)(0x5u);
    // 1501:040a  out dx, al  [x1868]
    c.ip = 0x40bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:040b  inc dx  [x1868]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:040c  in al, dx  [x1868]
    c.ip = 0x40du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:040d  and al, 0xfc  [x1868]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:040f  or al, 1  [x1868]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 1501:0411  out dx, al  [x1868]
    c.ip = 0x412u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0412  mov dx, 0x3c4  [x1868]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0415  mov ax, 0xf02  [x1868]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0418  out dx, ax  [x1868]
    c.ip = 0x419u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0419  push ds  [x1868]
    c.push16(c.ds);
    // 1501:041a  mov si, word ptr [0xce52]  [x1868]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce52u)));
    // 1501:041e  add si, si  [x1868]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.si.x, false));
    // 1501:0420  mov ax, word ptr [si - 0x31ac]  [x1868]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffce54u)));
    // 1501:0424  mov ds, ax  [x1868]
    c.loadDs(c.a.x);
    // 1501:0426  xor bx, bx  [x1868]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 1501:0428  xor di, di  [x1868]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1543a:
    if (c.tracing) c.traceAt(0x1543a);
    // 1501:042a  mov si, word ptr cs:[bx + 8]  [x373600]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x8u)));
    // 1501:042f  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x430u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0430  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x431u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0431  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x432u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0432  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x433u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0433  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x434u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0434  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x435u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0435  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x436u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0436  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x437u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0437  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x438u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0438  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x439u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0439  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43au; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043a  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43bu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043b  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43cu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043c  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43du; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043d  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43eu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043e  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x43fu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:043f  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x440u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0440  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x441u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0441  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x442u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0442  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x443u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0443  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x444u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0444  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x445u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0445  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x446u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0446  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x447u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0447  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x448u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0448  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x449u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0449  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44au; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044a  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44bu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044b  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44cu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044c  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44du; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044d  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44eu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044e  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x44fu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:044f  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x450u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0450  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x451u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0451  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x452u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0452  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x453u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0453  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x454u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0454  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x455u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0455  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x456u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0456  movsb byte ptr es:[di], byte ptr [si]  [x373600]
    c.ip = 0x457u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:0457  add bx, 2  [x373600]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:045a  cmp bx, word ptr cs:[0x198]  [x373600]
    c.sub<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x198u)), true);
    // 1501:045f  jb 0x42a  [x373600]
    if (c.cf) goto L1543a;
L15471:
    if (c.tracing) c.traceAt(0x15471);
    // 1501:0461  pop ds  [x1868]
    c.loadDs((uint16_t)c.pop16());
    // 1501:0462  mov dx, 0x3ce  [x1868]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0465  mov al, 5  [x1868]
    c.a.l = (uint8_t)(0x5u);
    // 1501:0467  out dx, al  [x1868]
    c.ip = 0x468u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0468  inc dx  [x1868]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:0469  in al, dx  [x1868]
    c.ip = 0x46au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:046a  and al, 0xfc  [x1868]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), true));
    // 1501:046c  out dx, al  [x1868]
    c.ip = 0x46du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:046d  ret   [x1868]
    c.ip = c.pop16(); return;
L1547e:
    if (c.tracing) c.traceAt(0x1547e);
    // 1501:046e  xor di, di  [x1868]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:0470  mov si, word ptr [0xce40]  [x1868]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce40u)));
    // 1501:0474  mov bx, word ptr [0xce42]  [x1868]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce42u)));
    // 1501:0478  mov bp, word ptr [0xce44]  [x1868]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce44u)));
L1548c:
    if (c.tracing) c.traceAt(0x1548c);
    // 1501:047c  mov al, byte ptr [si - 0x35c0]  [x373600]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffca40u)));
    // 1501:0480  add al, byte ptr [bx - 0x35c0]  [x373600]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffca40u)), false));
    // 1501:0484  add al, byte ptr ds:[bp - 0x35c0]  [x373600]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffca40u)), false));
    // 1501:0489  mov ah, 0x28  [x373600]
    c.a.h = (uint8_t)(0x28u);
    // 1501:048b  mul ah  [x373600]
    c.mul8(c.a.h);
    // 1501:048d  add ax, 0x28  [x373600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:0490  mov word ptr cs:[di + 8], ax  [x373600]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 1501:0495  add si, word ptr [0xce46]  [x373600]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffffce46u)), false));
    // 1501:0499  add bx, word ptr [0xce48]  [x373600]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xffffce48u)), false));
    // 1501:049d  add bp, word ptr [0xce4a]  [x373600]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0xffffce4au)), false));
    // 1501:04a1  and si, 0x3ff  [x373600]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x3ffu), false));
    // 1501:04a5  and bx, 0x3ff  [x373600]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x3ffu), false));
    // 1501:04a9  and bp, 0x3ff  [x373600]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x3ffu), false));
    // 1501:04ad  add di, 2  [x373600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:04b0  cmp di, word ptr cs:[0x198]  [x373600]
    c.sub<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x198u)), true);
    // 1501:04b5  jb 0x47c  [x373600]
    if (c.cf) goto L1548c;
L154c7:
    if (c.tracing) c.traceAt(0x154c7);
    // 1501:04b7  mov ax, word ptr [0xce40]  [x1868]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xce40u)));
    // 1501:04ba  add ax, word ptr [0xce4c]  [x1868]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffce4cu)), false));
    // 1501:04be  and ax, 0x3ff  [x1868]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3ffu), false));
    // 1501:04c1  mov word ptr [0xce40], ax  [x1868]
    c.w16(c.dsb + (uint16_t)(0xce40u), c.a.x);
    // 1501:04c4  mov ax, word ptr [0xce42]  [x1868]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xce42u)));
    // 1501:04c7  add ax, word ptr [0xce4e]  [x1868]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffce4eu)), false));
    // 1501:04cb  and ax, 0x3ff  [x1868]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3ffu), false));
    // 1501:04ce  mov word ptr [0xce42], ax  [x1868]
    c.w16(c.dsb + (uint16_t)(0xce42u), c.a.x);
    // 1501:04d1  mov ax, word ptr [0xce44]  [x1868]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xce44u)));
    // 1501:04d4  add ax, word ptr [0xce50]  [x1868]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffce50u)), false));
    // 1501:04d8  and ax, 0x3ff  [x1868]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3ffu), true));
    // 1501:04db  mov word ptr [0xce44], ax  [x1868]
    c.w16(c.dsb + (uint16_t)(0xce44u), c.a.x);
    // 1501:04de  ret   [x1868]
    c.ip = c.pop16(); return;
L154ef:
    if (c.tracing) c.traceAt(0x154ef);
    // 1501:04df  mov bl, 0  [x377]
    c.b.l = (uint8_t)(0x0u);
    // 1501:04e1  xor si, si  [x377]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:04e3  mov di, word ptr [0xce79]  [x377]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce79u)));
    // 1501:04e7  mov cx, 6  [x377]
    c.c.x = (uint16_t)(0x6u);
L154fa:
    if (c.tracing) c.traceAt(0x154fa);
    // 1501:04ea  mov ax, word ptr [si - 0x31ba]  [x2262]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffce46u)));
    // 1501:04ee  cmp ax, word ptr [di - 0x3185]  [x2262]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffce7bu)), true);
    // 1501:04f2  je 0x504  [x2262]
    if (c.zf) goto L15514;
L15504:
    if (c.tracing) c.traceAt(0x15504);
    // 1501:04f4  jns 0x4fe  [x970]
    if (!c.sf) goto L1550e;
L15506:
    if (c.tracing) c.traceAt(0x15506);
    // 1501:04f6  mov bl, 1  [x491]
    c.b.l = (uint8_t)(0x1u);
    // 1501:04f8  inc word ptr [si - 0x31ba]  [x491]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffffce46u), c.inc<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffce46u)), true));
    // 1501:04fc  jmp 0x504  [x491]
    goto L15514;
L1550e:
    if (c.tracing) c.traceAt(0x1550e);
    // 1501:04fe  mov bl, 1  [x479]
    c.b.l = (uint8_t)(0x1u);
    // 1501:0500  dec word ptr [si - 0x31ba]  [x479]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffffce46u), c.dec<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffce46u)), true));
L15514:
    if (c.tracing) c.traceAt(0x15514);
    // 1501:0504  add si, 2  [x2262]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0507  add di, 2  [x2262]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:050a  loop 0x4ea  [x2262]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L154fa;
L1551c:
    if (c.tracing) c.traceAt(0x1551c);
    // 1501:050c  cmp bl, 0  [x377]
    c.sub<8>(c.b.l, 0x0u, true);
    // 1501:050f  jne 0x51b  [x377]
    if (!c.zf) goto L1552b;
L15521:
    if (c.tracing) c.traceAt(0x15521);
    // 1501:0511  mov byte ptr [0xce61], 0  [x5]
    c.w8(c.dsb + (uint16_t)(0xffffce61u), 0x0u);
    // 1501:0516  add word ptr [0xce79], 0xc  [x5]
    c.w16(c.dsb + (uint16_t)(0xffffce79u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffce79u)), 0xcu, true));
L1552b:
    if (c.tracing) c.traceAt(0x1552b);
    // 1501:051b  ret   [x377]
    c.ip = c.pop16(); return;
L1552c:
    if (c.tracing) c.traceAt(0x1552c);
    // 1501:051c  mov dx, 0x3da  [x1869]
    c.dx_.x = (uint16_t)(0x3dau);
L1552f:
    if (c.tracing) c.traceAt(0x1552f);
    // 1501:051f  in al, dx  [x5962]
    c.ip = 0x520u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15530:
    if (c.tracing) c.traceAt(0x15530);
    // 1501:0520  test al, 8  [x7949]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0522  jne 0x51f  [x7949]
    if (!c.zf) goto L1552f;
L15534:
    if (c.tracing) c.traceAt(0x15534);
    // 1501:0524  in al, dx  [x87123]
    c.ip = 0x525u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15535:
    if (c.tracing) c.traceAt(0x15535);
    // 1501:0525  test al, 8  [x115541]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0527  je 0x524  [x115541]
    if (c.zf) goto L15534;
L15539:
    if (c.tracing) c.traceAt(0x15539);
    // 1501:0529  ret   [x1869]
    c.ip = c.pop16(); return;
L1553a:
    if (c.tracing) c.traceAt(0x1553a);
    // 1501:052a  mov bl, 0  [x604]
    c.b.l = (uint8_t)(0x0u);
    // 1501:052c  xor si, si  [x604]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:052e  mov di, word ptr [0xce63]  [x604]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffce63u)));
    // 1501:0532  mov di, word ptr [di - 0x319b]  [x604]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffce65u)));
    // 1501:0536  mov cx, 0x30  [x604]
    c.c.x = (uint16_t)(0x30u);
L15549:
    if (c.tracing) c.traceAt(0x15549);
    // 1501:0539  mov al, byte ptr [si - 0x3800]  [x28992]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)));
    // 1501:053d  mov ah, byte ptr [di]  [x28992]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:053f  cmp al, ah  [x28992]
    c.sub<8>(c.a.l, c.a.h, true);
    // 1501:0541  je 0x553  [x28992]
    if (c.zf) goto L15563;
L15553:
    if (c.tracing) c.traceAt(0x15553);
    // 1501:0543  jns 0x54d  [x12050]
    if (!c.sf) goto L1555d;
L15555:
    if (c.tracing) c.traceAt(0x15555);
    // 1501:0545  mov bl, 1  [x6025]
    c.b.l = (uint8_t)(0x1u);
    // 1501:0547  inc byte ptr [si - 0x3800]  [x6025]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)), true));
    // 1501:054b  jmp 0x553  [x6025]
    goto L15563;
L1555d:
    if (c.tracing) c.traceAt(0x1555d);
    // 1501:054d  mov bl, 1  [x6025]
    c.b.l = (uint8_t)(0x1u);
    // 1501:054f  dec byte ptr [si - 0x3800]  [x6025]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)), true));
L15563:
    if (c.tracing) c.traceAt(0x15563);
    // 1501:0553  inc si  [x28992]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0554  inc di  [x28992]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:0555  loop 0x539  [x28992]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15549;
L15567:
    if (c.tracing) c.traceAt(0x15567);
    // 1501:0557  cmp bl, 0  [x604]
    c.sub<8>(c.b.l, 0x0u, true);
    // 1501:055a  jne 0x566  [x604]
    if (!c.zf) goto L15576;
L1556c:
    if (c.tracing) c.traceAt(0x1556c);
    // 1501:055c  mov byte ptr [0xce62], 0  [x10]
    c.w8(c.dsb + (uint16_t)(0xffffce62u), 0x0u);
    // 1501:0561  add word ptr [0xce63], 2  [x10]
    c.w16(c.dsb + (uint16_t)(0xffffce63u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffce63u)), 0x2u, true));
L15576:
    if (c.tracing) c.traceAt(0x15576);
    // 1501:0566  ret   [x604]
    c.ip = c.pop16(); return;
L1559e:
    if (c.tracing) c.traceAt(0x1559e);
    // 1501:058e  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_7(7, {0x15010, 0x151b2, 0x151c9, 0x151d3, 0x151d6, 0x151d8, 0x151de, 0x151e7, 0x151fc, 0x151fe, 0x1520b, 0x1520d, 0x1521a, 0x1521c, 0x15229, 0x1522b, 0x15238, 0x1523a, 0x15247, 0x15249, 0x15256, 0x15258, 0x15265, 0x15267, 0x1526c, 0x15277, 0x1527a, 0x1527c, 0x15282, 0x15284, 0x1528d, 0x15294, 0x15296, 0x152a1, 0x152a4, 0x152a6, 0x152ac, 0x152ae, 0x152b7, 0x152be, 0x152e0, 0x152ea, 0x152ff, 0x15302, 0x15315, 0x15321, 0x15328, 0x15360, 0x15364, 0x15371, 0x15373, 0x15376, 0x15379, 0x15380, 0x15383, 0x1538a, 0x1538d, 0x15399, 0x153a1, 0x153a9, 0x153b1, 0x153b9, 0x153c1, 0x153cb, 0x153d3, 0x153d8, 0x153e0, 0x153f1, 0x153f9, 0x153fe, 0x15406, 0x15409, 0x15412, 0x15415, 0x1543a, 0x15471, 0x1547e, 0x1548c, 0x154c7, 0x154ef, 0x154fa, 0x15504, 0x15506, 0x1550e, 0x15514, 0x1551c, 0x15521, 0x1552b, 0x1552c, 0x1552f, 0x15530, 0x15534, 0x15535, 0x15539, 0x1553a, 0x15549, 0x15553, 0x15555, 0x1555d, 0x15563, 0x15567, 0x1556c, 0x15576, 0x1559e}, code_7);

}  // namespace show
