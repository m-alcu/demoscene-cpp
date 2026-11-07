// Part 20 (FAST.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_21(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15035: goto L15035;
    case 0x1504a: goto L1504a;
    case 0x1504c: goto L1504c;
    case 0x1505d: goto L1505d;
    case 0x15060: goto L15060;
    case 0x15062: goto L15062;
    case 0x1506b: goto L1506b;
    case 0x15080: goto L15080;
    case 0x15082: goto L15082;
    case 0x1509b: goto L1509b;
    case 0x150a4: goto L150a4;
    case 0x150b0: goto L150b0;
    case 0x150b2: goto L150b2;
    case 0x150be: goto L150be;
    case 0x150c1: goto L150c1;
    case 0x150c4: goto L150c4;
    case 0x150c7: goto L150c7;
    case 0x150e2: goto L150e2;
    case 0x150f9: goto L150f9;
    case 0x15110: goto L15110;
    case 0x15114: goto L15114;
    case 0x1511e: goto L1511e;
    case 0x15121: goto L15121;
    case 0x15123: goto L15123;
    case 0x1512c: goto L1512c;
    case 0x1512f: goto L1512f;
    case 0x15132: goto L15132;
    case 0x1513a: goto L1513a;
    case 0x1514d: goto L1514d;
    case 0x15156: goto L15156;
    case 0x15169: goto L15169;
    case 0x15172: goto L15172;
    case 0x1517a: goto L1517a;
    case 0x15181: goto L15181;
    case 0x15193: goto L15193;
    case 0x1519e: goto L1519e;
    case 0x151a9: goto L151a9;
    case 0x151b4: goto L151b4;
    case 0x151c0: goto L151c0;
    case 0x151ca: goto L151ca;
    case 0x151d4: goto L151d4;
    case 0x151df: goto L151df;
    case 0x151e2: goto L151e2;
    case 0x151ed: goto L151ed;
    case 0x151f4: goto L151f4;
    case 0x151fe: goto L151fe;
    case 0x1520f: goto L1520f;
    case 0x15211: goto L15211;
    case 0x1521c: goto L1521c;
    case 0x1522d: goto L1522d;
    case 0x1522f: goto L1522f;
    case 0x1523a: goto L1523a;
    case 0x15245: goto L15245;
    case 0x15250: goto L15250;
    case 0x1525d: goto L1525d;
    case 0x15268: goto L15268;
    case 0x15291: goto L15291;
    case 0x15298: goto L15298;
    case 0x152d3: goto L152d3;
    case 0x152da: goto L152da;
    case 0x152e5: goto L152e5;
    case 0x152ec: goto L152ec;
    case 0x152f7: goto L152f7;
    case 0x15319: goto L15319;
    case 0x15320: goto L15320;
    case 0x15322: goto L15322;
    case 0x15333: goto L15333;
    case 0x15339: goto L15339;
    case 0x1536e: goto L1536e;
    case 0x15375: goto L15375;
    case 0x15393: goto L15393;
    case 0x15396: goto L15396;
    case 0x1539d: goto L1539d;
    case 0x15427: goto L15427;
    case 0x1542a: goto L1542a;
    case 0x1542b: goto L1542b;
    case 0x15432: goto L15432;
    case 0x154bf: goto L154bf;
    case 0x154c2: goto L154c2;
    case 0x154c3: goto L154c3;
    case 0x154c6: goto L154c6;
    case 0x154c8: goto L154c8;
    case 0x1568f: goto L1568f;
    case 0x15691: goto L15691;
    case 0x15850: goto L15850;
    case 0x15852: goto L15852;
    case 0x15a12: goto L15a12;
    case 0x15a17: goto L15a17;
    case 0x15bd5: goto L15bd5;
    case 0x15bd8: goto L15bd8;
    case 0x15d97: goto L15d97;
    case 0x15f58: goto L15f58;
    case 0x1611a: goto L1611a;
    case 0x162dd: goto L162dd;
    case 0x1649f: goto L1649f;
    case 0x16660: goto L16660;
    case 0x167b1: goto L167b1;
    case 0x167b2: goto L167b2;
    case 0x167bb: goto L167bb;
    case 0x167c4: goto L167c4;
    case 0x167cd: goto L167cd;
    case 0x167d6: goto L167d6;
    case 0x167df: goto L167df;
    case 0x167e0: goto L167e0;
    case 0x167e4: goto L167e4;
    case 0x167eb: goto L167eb;
    case 0x1681a: goto L1681a;
    case 0x1681b: goto L1681b;
    case 0x1681f: goto L1681f;
    case 0x16827: goto L16827;
    case 0x16854: goto L16854;
    case 0x16883: goto L16883;
    case 0x1689f: goto L1689f;
    case 0x168a8: goto L168a8;
    case 0x168ad: goto L168ad;
    case 0x168b0: goto L168b0;
    case 0x168b9: goto L168b9;
    case 0x168c0: goto L168c0;
    case 0x168c9: goto L168c9;
    case 0x168f6: goto L168f6;
    case 0x16912: goto L16912;
    case 0x1691b: goto L1691b;
    case 0x16920: goto L16920;
    case 0x16921: goto L16921;
    case 0x16925: goto L16925;
    case 0x1692c: goto L1692c;
    case 0x16959: goto L16959;
    case 0x1695a: goto L1695a;
    case 0x1695e: goto L1695e;
    case 0x1698d: goto L1698d;
    case 0x169a9: goto L169a9;
    case 0x169b2: goto L169b2;
    case 0x169b7: goto L169b7;
    case 0x169e5: goto L169e5;
    case 0x16a01: goto L16a01;
    case 0x16a0a: goto L16a0a;
    case 0x16a0f: goto L16a0f;
    case 0x16a10: goto L16a10;
    case 0x16a14: goto L16a14;
    case 0x16a19: goto L16a19;
    case 0x16a2a: goto L16a2a;
    case 0x16a59: goto L16a59;
    case 0x16a75: goto L16a75;
    case 0x16a7e: goto L16a7e;
    case 0x16a83: goto L16a83;
    case 0x16ab1: goto L16ab1;
    case 0x16acd: goto L16acd;
    case 0x16ad6: goto L16ad6;
    case 0x16adb: goto L16adb;
    case 0x16adc: goto L16adc;
    case 0x16b08: goto L16b08;
    case 0x16b15: goto L16b15;
    case 0x16b1a: goto L16b1a;
    case 0x16b1e: goto L16b1e;
    case 0x16b2c: goto L16b2c;
    case 0x16b33: goto L16b33;
    case 0x16b34: goto L16b34;
    case 0x16b3c: goto L16b3c;
    case 0x16b7c: goto L16b7c;
    case 0x16b7d: goto L16b7d;
    case 0x16b88: goto L16b88;
    case 0x16ba6: goto L16ba6;
    case 0x16bcc: goto L16bcc;
    case 0x16be4: goto L16be4;
    case 0x16be9: goto L16be9;
    case 0x16c0a: goto L16c0a;
    case 0x16c19: goto L16c19;
    case 0x16c22: goto L16c22;
    case 0x16c35: goto L16c35;
    case 0x16c36: goto L16c36;
    case 0x16c41: goto L16c41;
    case 0x16c74: goto L16c74;
    case 0x16c7f: goto L16c7f;
    case 0x16cb2: goto L16cb2;
    case 0x16cc5: goto L16cc5;
    case 0x16cc9: goto L16cc9;
    case 0x16cf6: goto L16cf6;
    case 0x16cfa: goto L16cfa;
    case 0x16d28: goto L16d28;
    case 0x16d29: goto L16d29;
    case 0x16d31: goto L16d31;
    case 0x16d5e: goto L16d5e;
    case 0x16d5f: goto L16d5f;
    case 0x16d8d: goto L16d8d;
    case 0x16db9: goto L16db9;
    case 0x16dc2: goto L16dc2;
    case 0x16dc7: goto L16dc7;
    case 0x16dc8: goto L16dc8;
    case 0x16df7: goto L16df7;
    case 0x16e17: goto L16e17;
    case 0x16e20: goto L16e20;
    case 0x16e25: goto L16e25;
    case 0x16e54: goto L16e54;
    case 0x16e78: goto L16e78;
    case 0x16e81: goto L16e81;
    case 0x16e86: goto L16e86;
    case 0x16e87: goto L16e87;
    case 0x16eba: goto L16eba;
    case 0x16ebc: goto L16ebc;
    case 0x16ecc: goto L16ecc;
    case 0x16edb: goto L16edb;
    case 0x16ef4: goto L16ef4;
    case 0x16f07: goto L16f07;
    case 0x16f09: goto L16f09;
    case 0x16f19: goto L16f19;
    case 0x16f28: goto L16f28;
    case 0x16f41: goto L16f41;
    case 0x16f53: goto L16f53;
    case 0x16f56: goto L16f56;
    case 0x16f57: goto L16f57;
    case 0x16f5b: goto L16f5b;
    case 0x16f5c: goto L16f5c;
    case 0x16f60: goto L16f60;
    case 0x16f61: goto L16f61;
    case 0x16f68: goto L16f68;
    case 0x16f6b: goto L16f6b;
    case 0x16f6e: goto L16f6e;
    case 0x16f98: goto L16f98;
    case 0x16f9f: goto L16f9f;
    case 0x16fb1: goto L16fb1;
    case 0x16fc2: goto L16fc2;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x25  [x1]
    goto L15035;
L15035:
    if (c.tracing) c.traceAt(0x15035);
    // 1501:0025  mov word ptr cs:[0x23], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x23u), c.a.x);
    // 1501:0029  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:002c  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:002e  out dx, al  [x1]
    c.ip = 0x2fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:002f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0030  lea si, [0x292]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x292u));
    // 1501:0037  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1504a:
    if (c.tracing) c.traceAt(0x1504a);
    // 1501:003a  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0x3cu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1504c:
    if (c.tracing) c.traceAt(0x1504c);
    // 1501:003c  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:003f  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:0042  out dx, ax  [x1]
    c.ip = 0x43u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0043  mov ax, 0xa361  [x1]
    c.a.x = (uint16_t)(0xa361u);
    // 1501:0046  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0048  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:004a  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
L1505d:
    if (c.tracing) c.traceAt(0x1505d);
    // 1501:004d  mov cx, 0xb  [x168]
    c.c.x = (uint16_t)(0xbu);
L15060:
    if (c.tracing) c.traceAt(0x15060);
    // 1501:0050  rep stosw word ptr es:[di], ax  [x2016]
    c.stos<16, false>(1);
L15062:
    if (c.tracing) c.traceAt(0x15062);
    // 1501:0052  add di, 0x2a  [x168]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2au, false));
    // 1501:0055  cmp di, 0x2a00  [x168]
    c.sub<16>(c.di.x, 0x2a00u, true);
    // 1501:0059  jb 0x4d  [x168]
    if (c.cf) goto L1505d;
L1506b:
    if (c.tracing) c.traceAt(0x1506b);
    // 1501:005b  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:005e  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0061  out dx, ax  [x1]
    c.ip = 0x62u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0062  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0065  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0067  mov cx, 0x2300  [x1]
    c.c.x = (uint16_t)(0x2300u);
    // 1501:006a  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:006d  mov di, 0x3200  [x1]
    c.di.x = (uint16_t)(0x3200u);
L15080:
    if (c.tracing) c.traceAt(0x15080);
    // 1501:0070  rep stosw word ptr es:[di], ax  [x8961]
    c.stos<16, false>(1);
L15082:
    if (c.tracing) c.traceAt(0x15082);
    // 1501:0072  mov cx, 7  [x1]
    c.c.x = (uint16_t)(0x7u);
    // 1501:0075  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0078  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:007a  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:007c  out dx, ax  [x1]
    c.ip = 0x7du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:007d  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:007f  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:0081  out dx, ax  [x1]
    c.ip = 0x82u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0082  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0085  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:0088  out dx, ax  [x1]
    c.ip = 0x89u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0089  jmp 0x8b  [x1]
    goto L1509b;
L1509b:
    if (c.tracing) c.traceAt(0x1509b);
    // 1501:008b  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:008e  mov ax, 0x2013  [x1]
    c.a.x = (uint16_t)(0x2013u);
    // 1501:0091  out dx, ax  [x1]
    c.ip = 0x92u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0092  jmp 0x94  [x1]
    goto L150a4;
L150a4:
    if (c.tracing) c.traceAt(0x150a4);
    // 1501:0094  mov ax, 0x9000  [x1]
    c.a.x = (uint16_t)(0x9000u);
    // 1501:0097  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0099  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:009b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:009d  mov cx, 0x2000  [x1]
    c.c.x = (uint16_t)(0x2000u);
L150b0:
    if (c.tracing) c.traceAt(0x150b0);
    // 1501:00a0  rep stosw word ptr es:[di], ax  [x8193]
    c.stos<16, false>(1);
L150b2:
    if (c.tracing) c.traceAt(0x150b2);
    // 1501:00a2  mov word ptr [0xc748], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0xc748u), 0x0u);
    // 1501:00ab  call 0x1b6d  [x1]
    c.push16(0xaeu); code_21(c, 0x16b7du); if (c.ip != 0xaeu) c.badReturn(0x150bb);
L150be:
    if (c.tracing) c.traceAt(0x150be);
    // 1501:00ae  call 0x17a2  [x1]
    c.push16(0xb1u); code_21(c, 0x167b2u); if (c.ip != 0xb1u) c.badReturn(0x150be);
L150c1:
    if (c.tracing) c.traceAt(0x150c1);
    // 1501:00b1  call 0x1af8  [x1]
    c.push16(0xb4u); code_21(c, 0x16b08u); if (c.ip != 0xb4u) c.badReturn(0x150c1);
L150c4:
    if (c.tracing) c.traceAt(0x150c4);
    // 1501:00b4  call 0x1f51  [x1]
    c.push16(0xb7u); code_21(c, 0x16f61u); if (c.ip != 0xb7u) c.badReturn(0x150c4);
L150c7:
    if (c.tracing) c.traceAt(0x150c7);
    // 1501:00b7  mov cx, word ptr cs:[0xf]  [x1652]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xfu)));
    // 1501:00bc  add cx, 7  [x1652]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x7u, true));
    // 1501:00bf  mov dx, 0x3d4  [x1652]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00c2  mov al, 0xc  [x1652]
    c.a.l = (uint8_t)(0xcu);
    // 1501:00c4  mov ah, ch  [x1652]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:00c6  out dx, ax  [x1652]
    c.ip = 0xc7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c7  mov dx, 0x3d4  [x1652]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00ca  mov al, 0xd  [x1652]
    c.a.l = (uint8_t)(0xdu);
    // 1501:00cc  mov ah, cl  [x1652]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:00ce  out dx, ax  [x1652]
    c.ip = 0xcfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00cf  call 0x1f43  [x1652]
    c.push16(0xd2u); code_21(c, 0x16f53u); if (c.ip != 0xd2u) c.badReturn(0x150df);
L150e2:
    if (c.tracing) c.traceAt(0x150e2);
    // 1501:00d2  mov dx, 0x3c4  [x1652]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00d5  mov ax, 0x102  [x1652]
    c.a.x = (uint16_t)(0x102u);
    // 1501:00d8  out dx, ax  [x1652]
    c.ip = 0xd9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00d9  push ds  [x1652]
    c.push16(c.ds);
    // 1501:00da  mov ax, 0x9000  [x1652]
    c.a.x = (uint16_t)(0x9000u);
    // 1501:00dd  mov ds, ax  [x1652]
    c.loadDs(c.a.x);
    // 1501:00df  mov ax, 0xa361  [x1652]
    c.a.x = (uint16_t)(0xa361u);
    // 1501:00e2  mov es, ax  [x1652]
    c.loadEs(c.a.x);
    // 1501:00e4  mov si, 0xb05  [x1652]
    c.si.x = (uint16_t)(0xb05u);
    // 1501:00e7  xor di, di  [x1652]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L150f9:
    if (c.tracing) c.traceAt(0x150f9);
    // 1501:00e9  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xeau; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00ea  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xebu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00eb  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xecu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00ec  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xedu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00ed  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xeeu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00ee  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xefu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00ef  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xf0u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00f0  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xf1u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00f1  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xf2u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00f2  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xf3u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00f3  movsw word ptr es:[di], word ptr [si]  [x277536]
    c.ip = 0xf4u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:00f4  add di, 0x2a  [x277536]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2au, false));
    // 1501:00f7  add si, 0x2a  [x277536]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2au, false));
    // 1501:00fa  cmp di, 0x2a00  [x277536]
    c.sub<16>(c.di.x, 0x2a00u, true);
    // 1501:00fe  jb 0xe9  [x277536]
    if (c.cf) goto L150f9;
L15110:
    if (c.tracing) c.traceAt(0x15110);
    // 1501:0100  pop ds  [x1652]
    c.loadDs((uint16_t)c.pop16());
    // 1501:0101  call 0x1e77  [x1652]
    c.push16(0x104u); code_21(c, 0x16e87u); if (c.ip != 0x104u) c.badReturn(0x15111);
L15114:
    if (c.tracing) c.traceAt(0x15114);
    // 1501:0104  mov ax, 0x9000  [x1652]
    c.a.x = (uint16_t)(0x9000u);
    // 1501:0107  mov es, ax  [x1652]
    c.loadEs(c.a.x);
    // 1501:0109  mov di, 0xb05  [x1652]
    c.di.x = (uint16_t)(0xb05u);
    // 1501:010c  xor ax, ax  [x1652]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1511e:
    if (c.tracing) c.traceAt(0x1511e);
    // 1501:010e  mov cx, 0xb  [x277536]
    c.c.x = (uint16_t)(0xbu);
L15121:
    if (c.tracing) c.traceAt(0x15121);
    // 1501:0111  rep stosw word ptr es:[di], ax  [x3330432]
    c.stos<16, false>(1);
L15123:
    if (c.tracing) c.traceAt(0x15123);
    // 1501:0113  add di, 0x2a  [x277536]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2au, false));
    // 1501:0116  cmp di, 0x3500  [x277536]
    c.sub<16>(c.di.x, 0x3500u, true);
    // 1501:011a  jb 0x10e  [x277536]
    if (c.cf) goto L1511e;
L1512c:
    if (c.tracing) c.traceAt(0x1512c);
    // 1501:011c  call 0x386  [x1652]
    c.push16(0x11fu); code_21(c, 0x15396u); if (c.ip != 0x11fu) c.badReturn(0x1512c);
L1512f:
    if (c.tracing) c.traceAt(0x1512f);
    // 1501:011f  call 0x41b  [x1652]
    c.push16(0x122u); code_21(c, 0x1542bu); if (c.ip != 0x122u) c.badReturn(0x1512f);
L15132:
    if (c.tracing) c.traceAt(0x15132);
    // 1501:0122  mov ax, 0x9000  [x1652]
    c.a.x = (uint16_t)(0x9000u);
    // 1501:0125  mov es, ax  [x1652]
    c.loadEs(c.a.x);
    // 1501:0127  call 0x4b3  [x1652]
    c.push16(0x12au); code_21(c, 0x154c3u); if (c.ip != 0x12au) c.badReturn(0x15137);
L1513a:
    if (c.tracing) c.traceAt(0x1513a);
    // 1501:012a  add word ptr [0xade6], 4  [x1652]
    c.w16(c.dsb + (uint32_t)(0xade6u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xade6u)), 0x4u, false));
    // 1501:0132  cmp word ptr [0xade6], 0x5a0  [x1652]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xade6u)), 0x5a0u, true);
    // 1501:013b  jb 0x146  [x1652]
    if (c.cf) goto L15156;
L1514d:
    if (c.tracing) c.traceAt(0x1514d);
    // 1501:013d  sub word ptr [0xade6], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0xade6u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xade6u)), 0x5a0u, true));
L15156:
    if (c.tracing) c.traceAt(0x15156);
    // 1501:0146  add word ptr [0xade8], 4  [x1652]
    c.w16(c.dsb + (uint32_t)(0xade8u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xade8u)), 0x4u, false));
    // 1501:014e  cmp word ptr [0xade8], 0x5a0  [x1652]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xade8u)), 0x5a0u, true);
    // 1501:0157  jb 0x162  [x1652]
    if (c.cf) goto L15172;
L15169:
    if (c.tracing) c.traceAt(0x15169);
    // 1501:0159  sub word ptr [0xade8], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0xade8u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xade8u)), 0x5a0u, true));
L15172:
    if (c.tracing) c.traceAt(0x15172);
    // 1501:0162  sub word ptr cs:[0xd], 0x20  [x1652]
    c.w16(c.csb + (uint16_t)(0xdu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xdu)), 0x20u, true));
    // 1501:0168  jns 0x171  [x1652]
    if (!c.sf) goto L15181;
L1517a:
    if (c.tracing) c.traceAt(0x1517a);
    // 1501:016a  add word ptr cs:[0xd], 0x5a0  [x37]
    c.w16(c.csb + (uint16_t)(0xdu), c.add<16>(c.r16(c.csb + (uint16_t)(0xdu)), 0x5a0u, true));
L15181:
    if (c.tracing) c.traceAt(0x15181);
    // 1501:0171  inc word ptr [0xc748]  [x1652]
    c.w16(c.dsb + (uint32_t)(0xc748u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), false));
    // 1501:0178  cmp word ptr [0xc748], 0xf0  [x1652]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0xf0u, true);
    // 1501:0181  je 0x1a4  [x1652]
    if (c.zf) goto L151b4;
L15193:
    if (c.tracing) c.traceAt(0x15193);
    // 1501:0183  cmp word ptr [0xc748], 0x1e0  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x1e0u, true);
    // 1501:018c  je 0x1a4  [x1651]
    if (c.zf) goto L151b4;
L1519e:
    if (c.tracing) c.traceAt(0x1519e);
    // 1501:018e  cmp word ptr [0xc748], 0x2d0  [x1650]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x2d0u, true);
    // 1501:0197  je 0x1a4  [x1650]
    if (c.zf) goto L151b4;
L151a9:
    if (c.tracing) c.traceAt(0x151a9);
    // 1501:0199  cmp word ptr [0xc748], 0x3c0  [x1649]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x3c0u, true);
    // 1501:01a2  jne 0x1b0  [x1649]
    if (!c.zf) goto L151c0;
L151b4:
    if (c.tracing) c.traceAt(0x151b4);
    // 1501:01a4  mov word ptr [0x326], 0x40  [x4]
    c.w16(c.dsb + (uint32_t)(0x326u), 0x40u);
    // 1501:01ad  call 0x1c26  [x4]
    c.push16(0x1b0u); code_21(c, 0x16c36u); if (c.ip != 0x1b0u) c.badReturn(0x151bd);
L151c0:
    if (c.tracing) c.traceAt(0x151c0);
    // 1501:01b0  cmp word ptr [0x326], 0  [x1652]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x326u)), 0x0u, true);
    // 1501:01b8  je 0x1c4  [x1652]
    if (c.zf) goto L151d4;
L151ca:
    if (c.tracing) c.traceAt(0x151ca);
    // 1501:01ba  dec word ptr [0x326]  [x256]
    c.w16(c.dsb + (uint32_t)(0x326u), c.dec<16>(c.r16(c.dsb + (uint32_t)(0x326u)), true));
    // 1501:01c1  call 0x1cb5  [x256]
    c.push16(0x1c4u); code_21(c, 0x16cc5u); if (c.ip != 0x1c4u) c.badReturn(0x151d1);
L151d4:
    if (c.tracing) c.traceAt(0x151d4);
    // 1501:01c4  cmp word ptr [0xc748], 0x674  [x1652]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x674u, true);
    // 1501:01cd  jne 0x1d2  [x1652]
    if (!c.zf) goto L151e2;
L151df:
    if (c.tracing) c.traceAt(0x151df);
    // 1501:01cf  jmp 0x1fb2  [x1]
    goto L16fc2;
L151e2:
    if (c.tracing) c.traceAt(0x151e2);
    // 1501:01d2  cmp word ptr [0xc748], 0x5c0  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x5c0u, true);
    // 1501:01db  jne 0x1e4  [x1651]
    if (!c.zf) goto L151f4;
L151ed:
    if (c.tracing) c.traceAt(0x151ed);
    // 1501:01dd  mov word ptr cs:[0x13], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x13u), 0x0u);
L151f4:
    if (c.tracing) c.traceAt(0x151f4);
    // 1501:01e4  cmp word ptr [0xc748], 0x48  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x48u, true);
    // 1501:01ec  jne 0x201  [x1651]
    if (!c.zf) goto L15211;
L151fe:
    if (c.tracing) c.traceAt(0x151fe);
    // 1501:01ee  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:01f1  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:01f3  out dx, al  [x1]
    c.ip = 0x1f4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01f4  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:01f5  lea si, [0x2c2]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x2c2u));
    // 1501:01fc  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1520f:
    if (c.tracing) c.traceAt(0x1520f);
    // 1501:01ff  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0x201u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15211:
    if (c.tracing) c.traceAt(0x15211);
    // 1501:0201  cmp word ptr [0xc748], 0x560  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x560u, true);
    // 1501:020a  jne 0x21f  [x1651]
    if (!c.zf) goto L1522f;
L1521c:
    if (c.tracing) c.traceAt(0x1521c);
    // 1501:020c  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:020f  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0211  out dx, al  [x1]
    c.ip = 0x212u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0212  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0213  lea si, [0x2f2]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x2f2u));
    // 1501:021a  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1522d:
    if (c.tracing) c.traceAt(0x1522d);
    // 1501:021d  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0x21fu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1522f:
    if (c.tracing) c.traceAt(0x1522f);
    // 1501:021f  cmp word ptr [0xc748], 0x520  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x520u, true);
    // 1501:0228  jb 0x240  [x1651]
    if (c.cf) goto L15250;
L1523a:
    if (c.tracing) c.traceAt(0x1523a);
    // 1501:022a  cmp word ptr [0xc748], 0x5a0  [x340]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x5a0u, true);
    // 1501:0233  jae 0x240  [x340]
    if (!c.cf) goto L15250;
L15245:
    if (c.tracing) c.traceAt(0x15245);
    // 1501:0235  dec word ptr cs:[9]  [x128]
    c.w16(c.csb + (uint16_t)(0x9u), c.dec<16>(c.r16(c.csb + (uint16_t)(0x9u)), false));
    // 1501:023a  sub word ptr cs:[0xb], 2  [x128]
    c.w16(c.csb + (uint16_t)(0xbu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xbu)), 0x2u, true));
L15250:
    if (c.tracing) c.traceAt(0x15250);
    // 1501:0240  cmp word ptr [0xc748], 0x5c0  [x1651]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x5c0u, true);
    // 1501:0249  ja 0x312  [x1651]
    if ((!c.cf && !c.zf)) goto L15322;
L1525d:
    if (c.tracing) c.traceAt(0x1525d);
    // 1501:024d  cmp word ptr [0xc748], 0x80  [x1472]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x80u, true);
    // 1501:0256  jae 0x288  [x1472]
    if (!c.cf) goto L15298;
L15268:
    if (c.tracing) c.traceAt(0x15268);
    // 1501:0258  mov si, word ptr cs:[0x11]  [x127]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x11u)));
    // 1501:025d  mov ax, word ptr [si - 0x4ced]  [x127]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0261  cdq   [x127]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:0262  mov bx, 0x9c  [x127]
    c.b.x = (uint16_t)(0x9cu);
    // 1501:0265  idiv bx  [x127]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x265u); }   // #DE: int 0, then again
    // 1501:0267  mov word ptr cs:[0x21], ax  [x127]
    c.w16(c.csb + (uint16_t)(0x21u), c.a.x);
    // 1501:026b  shl ax, 6  [x127]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x6u) & 31), false));
    // 1501:026e  mov word ptr cs:[0xf], ax  [x127]
    c.w16(c.csb + (uint16_t)(0xfu), c.a.x);
    // 1501:0272  add word ptr cs:[0x11], 4  [x127]
    c.w16(c.csb + (uint16_t)(0x11u), c.add<16>(c.r16(c.csb + (uint16_t)(0x11u)), 0x4u, false));
    // 1501:0278  cmp word ptr cs:[0x11], 0x1ac  [x127]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x11u)), 0x1acu, true);
    // 1501:027f  jb 0x288  [x127]
    if (c.cf) goto L15298;
L15291:
    if (c.tracing) c.traceAt(0x15291);
    // 1501:0281  mov word ptr cs:[0x11], 0x1ac  [x21]
    c.w16(c.csb + (uint16_t)(0x11u), 0x1acu);
L15298:
    if (c.tracing) c.traceAt(0x15298);
    // 1501:0288  mov si, word ptr cs:[0x13]  [x1472]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x13u)));
    // 1501:028d  mov ax, word ptr [si - 0x4ced]  [x1472]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0291  cdq   [x1472]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:0292  mov bx, 0xea  [x1472]
    c.b.x = (uint16_t)(0xeau);
    // 1501:0295  idiv bx  [x1472]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x295u); }   // #DE: int 0, then again
    // 1501:0297  mov word ptr cs:[0x15], 0x96  [x1472]
    c.w16(c.csb + (uint16_t)(0x15u), 0x96u);
    // 1501:029e  sub word ptr cs:[0x15], ax  [x1472]
    c.w16(c.csb + (uint16_t)(0x15u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x15u)), c.a.x, false));
    // 1501:02a3  mov ax, word ptr [si - 0x4ced]  [x1472]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:02a7  cdq   [x1472]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:02a8  mov bx, 0x2d8  [x1472]
    c.b.x = (uint16_t)(0x2d8u);
    // 1501:02ab  idiv bx  [x1472]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x2abu); }   // #DE: int 0, then again
    // 1501:02ad  add ax, 0x97  [x1472]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x97u, false));
    // 1501:02b0  mov word ptr cs:[0x1b], ax  [x1472]
    c.w16(c.csb + (uint16_t)(0x1bu), c.a.x);
    // 1501:02b4  add word ptr cs:[0x13], 6  [x1472]
    c.w16(c.csb + (uint16_t)(0x13u), c.add<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x6u, false));
    // 1501:02ba  cmp word ptr cs:[0x13], 0x2d0  [x1472]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x2d0u, true);
    // 1501:02c1  jb 0x2ca  [x1472]
    if (c.cf) goto L152da;
L152d3:
    if (c.tracing) c.traceAt(0x152d3);
    // 1501:02c3  mov word ptr cs:[0x13], 0x2d0  [x1352]
    c.w16(c.csb + (uint16_t)(0x13u), 0x2d0u);
L152da:
    if (c.tracing) c.traceAt(0x152da);
    // 1501:02ca  cmp word ptr [0xc748], 0x530  [x1472]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x530u, true);
    // 1501:02d3  jne 0x2dc  [x1472]
    if (!c.zf) goto L152ec;
L152e5:
    if (c.tracing) c.traceAt(0x152e5);
    // 1501:02d5  mov word ptr cs:[0x11], 0x208  [x1]
    c.w16(c.csb + (uint16_t)(0x11u), 0x208u);
L152ec:
    if (c.tracing) c.traceAt(0x152ec);
    // 1501:02dc  cmp word ptr [0xc748], 0x530  [x1472]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x530u, true);
    // 1501:02e5  jb 0x310  [x1472]
    if (c.cf) goto L15320;
L152f7:
    if (c.tracing) c.traceAt(0x152f7);
    // 1501:02e7  mov si, word ptr cs:[0x11]  [x145]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x11u)));
    // 1501:02ec  mov ax, word ptr [si - 0x4ced]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:02f0  cdq   [x145]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:02f1  mov bx, 0x7e  [x145]
    c.b.x = (uint16_t)(0x7eu);
    // 1501:02f4  idiv bx  [x145]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x2f4u); }   // #DE: int 0, then again
    // 1501:02f6  mov word ptr cs:[0x21], ax  [x145]
    c.w16(c.csb + (uint16_t)(0x21u), c.a.x);
    // 1501:02fa  shl ax, 6  [x145]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x6u) & 31), false));
    // 1501:02fd  mov word ptr cs:[0xf], ax  [x145]
    c.w16(c.csb + (uint16_t)(0xfu), c.a.x);
    // 1501:0301  sub word ptr cs:[0x11], 4  [x145]
    c.w16(c.csb + (uint16_t)(0x11u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x11u)), 0x4u, true));
    // 1501:0307  jns 0x310  [x145]
    if (!c.sf) goto L15320;
L15319:
    if (c.tracing) c.traceAt(0x15319);
    // 1501:0309  mov word ptr cs:[0x11], 0  [x15]
    c.w16(c.csb + (uint16_t)(0x11u), 0x0u);
L15320:
    if (c.tracing) c.traceAt(0x15320);
    // 1501:0310  jmp 0x365  [x1472]
    goto L15375;
L15322:
    if (c.tracing) c.traceAt(0x15322);
    // 1501:0312  mov bx, 0x181  [x179]
    c.b.x = (uint16_t)(0x181u);
    // 1501:0315  mov bp, 0x51e  [x179]
    c.bp.x = (uint16_t)(0x51eu);
    // 1501:0318  cmp word ptr [0xc748], 0x638  [x179]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0x638u, true);
    // 1501:0321  jb 0x329  [x179]
    if (c.cf) goto L15339;
L15333:
    if (c.tracing) c.traceAt(0x15333);
    // 1501:0323  mov bx, 0xcc  [x60]
    c.b.x = (uint16_t)(0xccu);
    // 1501:0326  mov bp, 0x253  [x60]
    c.bp.x = (uint16_t)(0x253u);
L15339:
    if (c.tracing) c.traceAt(0x15339);
    // 1501:0329  mov si, word ptr cs:[0x13]  [x179]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x13u)));
    // 1501:032e  mov ax, word ptr [si - 0x4ced]  [x179]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0332  cdq   [x179]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:0333  idiv bx  [x179]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x333u); }   // #DE: int 0, then again
    // 1501:0335  mov word ptr cs:[0x15], 0x96  [x179]
    c.w16(c.csb + (uint16_t)(0x15u), 0x96u);
    // 1501:033c  sub word ptr cs:[0x15], ax  [x179]
    c.w16(c.csb + (uint16_t)(0x15u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x15u)), c.a.x, false));
    // 1501:0341  mov ax, word ptr [si - 0x4ced]  [x179]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0345  cdq   [x179]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:0346  idiv bp  [x179]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x346u); }   // #DE: int 0, then again
    // 1501:0348  add ax, 0x97  [x179]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x97u, false));
    // 1501:034b  mov word ptr cs:[0x1b], ax  [x179]
    c.w16(c.csb + (uint16_t)(0x1bu), c.a.x);
    // 1501:034f  add word ptr cs:[0x13], 6  [x179]
    c.w16(c.csb + (uint16_t)(0x13u), c.add<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x6u, false));
    // 1501:0355  cmp word ptr cs:[0x13], 0x2d0  [x179]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x2d0u, true);
    // 1501:035c  jb 0x365  [x179]
    if (c.cf) goto L15375;
L1536e:
    if (c.tracing) c.traceAt(0x1536e);
    // 1501:035e  sub word ptr cs:[0x13], 0x2d0  [x1]
    c.w16(c.csb + (uint16_t)(0x13u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x2d0u, true));
L15375:
    if (c.tracing) c.traceAt(0x15375);
    // 1501:0365  cmp byte ptr [0xadea], 0  [x1651]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0xadeau)), 0x0u, true);
    // 1501:036d  je 0x383  [x1651]
    if (c.zf) goto L15393;
    c.notTranslated(0x1537f, "fall-through");
L15393:
    if (c.tracing) c.traceAt(0x15393);
    // 1501:0383  jmp 0xb7  [x1651]
    goto L150c7;
L15396:
    if (c.tracing) c.traceAt(0x15396);
    // 1501:0386  xor bp, bp  [x1652]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0388  xor di, di  [x1652]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:038a  mov cx, 0x7fff  [x1652]
    c.c.x = (uint16_t)(0x7fffu);
L1539d:
    if (c.tracing) c.traceAt(0x1539d);
    // 1501:038d  mov si, word ptr [0xade6]  [x99120]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xade6u)));
    // 1501:0394  mov ax, word ptr ds:[bp - 0x40bd]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffbf43u)));
    // 1501:0399  imul word ptr [si - 0x4b85]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:039d  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x39du); }   // #DE: int 0, then again
    // 1501:039f  push ax  [x99120]
    c.push16(c.a.x);
    // 1501:03a0  mov ax, word ptr ds:[bp - 0x40b9]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffbf47u)));
    // 1501:03a5  imul word ptr [si - 0x4ced]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:03a9  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3a9u); }   // #DE: int 0, then again
    // 1501:03ab  pop bx  [x99120]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:03ac  sub bx, ax  [x99120]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:03ae  mov ax, bx  [x99120]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:03b0  imul word ptr cs:[9]  [x99120]
    c.imul16(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:03b5  mov bl, ah  [x99120]
    c.b.l = (uint8_t)(c.a.h);
    // 1501:03b7  mov word ptr [di - 0x39b5], bx  [x99120]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffc64bu), c.b.x);
    // 1501:03bb  mov ax, word ptr ds:[bp - 0x40b9]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffbf47u)));
    // 1501:03c0  imul word ptr [si - 0x4b85]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:03c4  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3c4u); }   // #DE: int 0, then again
    // 1501:03c6  push ax  [x99120]
    c.push16(c.a.x);
    // 1501:03c7  mov ax, word ptr ds:[bp - 0x40bd]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffbf43u)));
    // 1501:03cc  imul word ptr [si - 0x4ced]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:03d0  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3d0u); }   // #DE: int 0, then again
    // 1501:03d2  pop bx  [x99120]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:03d3  add bx, ax  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:03d5  mov word ptr [0xadd6], bx  [x99120]
    c.w16(c.dsb + (uint32_t)(0xadd6u), c.b.x);
    // 1501:03dc  mov si, word ptr [0xade8]  [x99120]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xade8u)));
    // 1501:03e3  mov ax, word ptr [0xadd6]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadd6u)));
    // 1501:03e9  imul word ptr [si - 0x4ced]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:03ed  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3edu); }   // #DE: int 0, then again
    // 1501:03ef  push ax  [x99120]
    c.push16(c.a.x);
    // 1501:03f0  mov ax, word ptr ds:[bp - 0x40bb]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffbf45u)));
    // 1501:03f5  imul word ptr [si - 0x4b85]  [x99120]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:03f9  idiv cx  [x99120]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3f9u); }   // #DE: int 0, then again
    // 1501:03fb  pop bx  [x99120]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:03fc  add bx, ax  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:03fe  mov ax, bx  [x99120]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:0400  imul word ptr cs:[0xb]  [x99120]
    c.imul16(c.r16(c.csb + (uint16_t)(0xbu)));
    // 1501:0405  mov bl, ah  [x99120]
    c.b.l = (uint8_t)(c.a.h);
    // 1501:0407  mov word ptr [di - 0x393d], bx  [x99120]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffc6c3u), c.b.x);
    // 1501:040b  add di, 2  [x99120]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:040e  add bp, 6  [x99120]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0411  cmp bp, 0x168  [x99120]
    c.sub<16>(c.bp.x, 0x168u, true);
    // 1501:0415  je 0x41a  [x99120]
    if (c.zf) goto L1542a;
L15427:
    if (c.tracing) c.traceAt(0x15427);
    // 1501:0417  jmp 0x38d  [x97468]
    goto L1539d;
L1542a:
    if (c.tracing) c.traceAt(0x1542a);
    // 1501:041a  ret   [x1652]
    c.ip = c.pop16(); return;
L1542b:
    if (c.tracing) c.traceAt(0x1542b);
    // 1501:041b  xor bp, bp  [x1652]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:041d  xor di, di  [x1652]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:041f  mov cx, 0x7fff  [x1652]
    c.c.x = (uint16_t)(0x7fffu);
L15432:
    if (c.tracing) c.traceAt(0x15432);
    // 1501:0422  mov si, word ptr [0xade6]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xade6u)));
    // 1501:0429  mov ax, word ptr ds:[bp - 0x45e5]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffba1bu)));
    // 1501:042e  imul word ptr [si - 0x4b85]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:0432  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x432u); }   // #DE: int 0, then again
    // 1501:0434  push ax  [x72688]
    c.push16(c.a.x);
    // 1501:0435  mov ax, word ptr ds:[bp - 0x45e1]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffba1fu)));
    // 1501:043a  imul word ptr [si - 0x4ced]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:043e  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x43eu); }   // #DE: int 0, then again
    // 1501:0440  pop bx  [x72688]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0441  sub bx, ax  [x72688]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:0443  mov ax, bx  [x72688]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:0445  imul word ptr cs:[9]  [x72688]
    c.imul16(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:044a  mov bl, ah  [x72688]
    c.b.l = (uint8_t)(c.a.h);
    // 1501:044c  mov word ptr [di - 0x5215], bx  [x72688]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadebu), c.b.x);
    // 1501:0450  mov ax, word ptr ds:[bp - 0x45e1]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffba1fu)));
    // 1501:0455  imul word ptr [si - 0x4b85]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:0459  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x459u); }   // #DE: int 0, then again
    // 1501:045b  push ax  [x72688]
    c.push16(c.a.x);
    // 1501:045c  mov ax, word ptr ds:[bp - 0x45e5]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffba1bu)));
    // 1501:0461  imul word ptr [si - 0x4ced]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0465  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x465u); }   // #DE: int 0, then again
    // 1501:0467  pop bx  [x72688]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0468  add bx, ax  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:046a  mov word ptr [0xadd6], bx  [x72688]
    c.w16(c.dsb + (uint32_t)(0xadd6u), c.b.x);
    // 1501:0471  mov si, word ptr [0xade8]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xade8u)));
    // 1501:0478  mov ax, word ptr [0xadd6]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadd6u)));
    // 1501:047e  imul word ptr [si - 0x4ced]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:0482  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x482u); }   // #DE: int 0, then again
    // 1501:0484  push ax  [x72688]
    c.push16(c.a.x);
    // 1501:0485  mov ax, word ptr ds:[bp - 0x45e3]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffba1du)));
    // 1501:048a  imul word ptr [si - 0x4b85]  [x72688]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:048e  idiv cx  [x72688]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x48eu); }   // #DE: int 0, then again
    // 1501:0490  pop bx  [x72688]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0491  add bx, ax  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0493  mov ax, bx  [x72688]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:0495  imul word ptr cs:[0xb]  [x72688]
    c.imul16(c.r16(c.csb + (uint16_t)(0xbu)));
    // 1501:049a  mov bl, ah  [x72688]
    c.b.l = (uint8_t)(c.a.h);
    // 1501:049c  shl bx, 6  [x72688]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:049f  mov word ptr [di - 0x5213], bx  [x72688]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadedu), c.b.x);
    // 1501:04a3  add di, 6  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:04a6  add bp, 6  [x72688]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:04a9  cmp bp, 0x108  [x72688]
    c.sub<16>(c.bp.x, 0x108u, true);
    // 1501:04ad  je 0x4b2  [x72688]
    if (c.zf) goto L154c2;
L154bf:
    if (c.tracing) c.traceAt(0x154bf);
    // 1501:04af  jmp 0x422  [x71036]
    goto L15432;
L154c2:
    if (c.tracing) c.traceAt(0x154c2);
    // 1501:04b2  ret   [x1652]
    c.ip = c.pop16(); return;
L154c3:
    if (c.tracing) c.traceAt(0x154c3);
    // 1501:04b3  call 0x1b24  [x1652]
    c.push16(0x4b6u); code_21(c, 0x16b34u); if (c.ip != 0x4b6u) c.badReturn(0x154c3);
L154c6:
    if (c.tracing) c.traceAt(0x154c6);
    // 1501:04b6  xor si, si  [x1652]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L154c8:
    if (c.tracing) c.traceAt(0x154c8);
    // 1501:04b8  push si  [x72688]
    c.push16(c.si.x);
    // 1501:04b9  mov cx, word ptr [si - 0x5215]  [x72688]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffadebu)));
    // 1501:04bd  mov dx, word ptr [si - 0x5213]  [x72688]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffadedu)));
    // 1501:04c1  mov ax, word ptr cs:[0x23]  [x72688]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x23u)));
    // 1501:04c5  mov bx, word ptr [si - 0x5211]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffadefu)));
    // 1501:04c9  shl bx, 5  [x72688]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x5u) & 31), false));
    // 1501:04cc  add ax, bx  [x72688]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:04ce  mov gs, ax  [x72688]
    c.loadGs(c.a.x);
    // 1501:04d0  add ax, 0x1000  [x72688]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:04d3  mov fs, ax  [x72688]
    c.loadFs(c.a.x);
    // 1501:04d5  mov si, word ptr fs:[0x11e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x154e8))));
    // 1501:04da  mov bx, word ptr gs:[0x176]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x154ed))));
    // 1501:04df  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:04e1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:04e3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:04e5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:04e8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:04ea  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:04ec  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:04ef  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:04f1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:04f3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:04f6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:04f8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:04fa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:04fd  mov si, word ptr fs:[0x124]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15510))));
    // 1501:0502  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15515))));
    // 1501:0507  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0509  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:050b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:050d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0510  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0512  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0514  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0517  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0519  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:051b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:051e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0520  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0522  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0525  mov si, word ptr fs:[0x12c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15538))));
    // 1501:052a  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1553d))));
    // 1501:052f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0531  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0533  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0535  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0538  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:053a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:053c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:053f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0541  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0543  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0546  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0548  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:054a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:054d  mov si, word ptr fs:[0x134]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15560))));
    // 1501:0552  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15565))));
    // 1501:0557  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0559  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:055b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:055d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0560  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0562  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0564  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0567  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0569  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:056b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:056e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0570  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0572  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0575  mov si, word ptr fs:[0x13c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15588))));
    // 1501:057a  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1558d))));
    // 1501:057f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0581  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0583  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0585  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0588  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:058a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:058c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:058f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0591  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0593  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0596  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0598  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:059a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:059d  mov si, word ptr fs:[0x144]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x155b0))));
    // 1501:05a2  mov bx, word ptr gs:[0x172]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x155b5))));
    // 1501:05a7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:05a9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:05ab  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:05ad  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:05b0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:05b2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:05b4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:05b7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:05b9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:05bb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:05be  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:05c0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:05c2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:05c5  mov si, word ptr fs:[0x14c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x155d8))));
    // 1501:05ca  mov bx, word ptr gs:[0x16e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x155dd))));
    // 1501:05cf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:05d1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:05d3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:05d5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:05d8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:05da  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:05dc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:05df  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:05e1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:05e3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:05e6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:05e8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:05ea  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:05ed  mov si, word ptr fs:[0x154]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15600))));
    // 1501:05f2  mov bx, word ptr gs:[0x16e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15605))));
    // 1501:05f7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:05f9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:05fb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:05fd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0600  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0602  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0604  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0607  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0609  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:060b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:060e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0610  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0612  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0615  mov si, word ptr fs:[0x15a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15628))));
    // 1501:061a  mov bx, word ptr gs:[0x16a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1562d))));
    // 1501:061f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0621  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0623  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0625  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0628  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:062a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:062c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:062f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0631  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0633  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0636  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0638  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:063a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:063d  mov si, word ptr fs:[0x162]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15650))));
    // 1501:0642  mov bx, word ptr gs:[0x168]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15655))));
    // 1501:0647  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0649  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:064b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:064d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0650  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0652  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0654  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0657  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0659  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:065b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:065e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0660  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0662  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0665  mov si, word ptr fs:[0x166]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15678))));
    // 1501:066a  mov bx, word ptr gs:[0x164]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1567d))));
    // 1501:066f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0671  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0673  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0675  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0678  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:067a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:067c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), true));
L1568f:
    if (c.tracing) c.traceAt(0x1568f);
    // 1501:067f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, true));
L15691:
    if (c.tracing) c.traceAt(0x15691);
    // 1501:0681  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0683  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0686  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0688  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:068a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:068d  mov si, word ptr fs:[0x16e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156a0))));
    // 1501:0692  mov bx, word ptr gs:[0x162]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156a5))));
    // 1501:0697  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0699  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:069b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:069d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:06a0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:06a2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:06a4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:06a7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:06a9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:06ab  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:06ae  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:06b0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:06b2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:06b5  mov si, word ptr fs:[0x176]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156c8))));
    // 1501:06ba  mov bx, word ptr gs:[0x160]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156cd))));
    // 1501:06bf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:06c1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:06c3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:06c5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:06c8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:06ca  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:06cc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:06cf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:06d1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:06d3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:06d6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:06d8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:06da  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:06dd  mov si, word ptr fs:[0x17a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156f0))));
    // 1501:06e2  mov bx, word ptr gs:[0x15c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x156f5))));
    // 1501:06e7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:06e9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:06eb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:06ed  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:06f0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:06f2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:06f4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:06f7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:06f9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:06fb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:06fe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0700  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0702  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0705  mov si, word ptr fs:[0x182]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15718))));
    // 1501:070a  mov bx, word ptr gs:[0x156]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1571d))));
    // 1501:070f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0711  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0713  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0715  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0718  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:071a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:071c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:071f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0721  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0723  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0726  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0728  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:072a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:072d  mov si, word ptr fs:[0x186]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15740))));
    // 1501:0732  mov bx, word ptr gs:[0x152]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15745))));
    // 1501:0737  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0739  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:073b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:073d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0740  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0742  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0744  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0747  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0749  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:074b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:074e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0750  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0752  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0755  mov si, word ptr fs:[0x18a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15768))));
    // 1501:075a  mov bx, word ptr gs:[0x14e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1576d))));
    // 1501:075f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0761  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0763  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0765  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0768  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:076a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:076c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:076f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0771  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0773  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0776  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0778  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:077a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:077d  mov si, word ptr fs:[0x18e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15790))));
    // 1501:0782  mov bx, word ptr gs:[0x148]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15795))));
    // 1501:0787  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0789  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:078b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:078d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0790  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0792  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0794  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0797  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0799  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:079b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:079e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:07a0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:07a2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:07a5  mov si, word ptr fs:[0x190]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x157b8))));
    // 1501:07aa  mov bx, word ptr gs:[0x144]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x157bd))));
    // 1501:07af  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:07b1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:07b3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:07b5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:07b8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:07ba  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:07bc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:07bf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:07c1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:07c3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:07c6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:07c8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:07ca  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:07cd  mov si, word ptr fs:[0x196]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x157e0))));
    // 1501:07d2  mov bx, word ptr gs:[0x13e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x157e5))));
    // 1501:07d7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:07d9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:07db  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:07dd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:07e0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:07e2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:07e4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:07e7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:07e9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:07eb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:07ee  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:07f0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:07f2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:07f5  mov si, word ptr fs:[0x198]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15808))));
    // 1501:07fa  mov bx, word ptr gs:[0x13a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1580d))));
    // 1501:07ff  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0801  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0803  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0805  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0808  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:080a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:080c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:080f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0811  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0813  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0816  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0818  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:081a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:081d  mov si, word ptr fs:[0x19a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15830))));
    // 1501:0822  mov bx, word ptr gs:[0x134]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15835))));
    // 1501:0827  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0829  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:082b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:082d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0830  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0832  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0834  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0837  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0839  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:083b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:083e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, true));
L15850:
    if (c.tracing) c.traceAt(0x15850);
    // 1501:0840  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, true));
L15852:
    if (c.tracing) c.traceAt(0x15852);
    // 1501:0842  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0845  mov si, word ptr fs:[0x19e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15858))));
    // 1501:084a  mov bx, word ptr gs:[0x130]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1585d))));
    // 1501:084f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0851  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0853  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0855  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0858  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:085a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:085c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:085f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0861  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0863  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0866  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0868  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:086a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:086d  mov si, word ptr fs:[0x1a0]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15880))));
    // 1501:0872  mov bx, word ptr gs:[0x12a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15885))));
    // 1501:0877  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0879  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:087b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:087d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0880  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0882  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0884  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0887  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0889  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:088b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:088e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0890  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0892  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0895  mov si, word ptr fs:[0x1a0]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158a8))));
    // 1501:089a  mov bx, word ptr gs:[0x124]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158ad))));
    // 1501:089f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:08a1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:08a3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:08a5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:08a8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:08aa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:08ac  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:08af  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:08b1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:08b3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:08b6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:08b8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:08ba  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:08bd  mov si, word ptr fs:[0x1a2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158d0))));
    // 1501:08c2  mov bx, word ptr gs:[0x11c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158d5))));
    // 1501:08c7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:08c9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:08cb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:08cd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:08d0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:08d2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:08d4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:08d7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:08d9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:08db  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:08de  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:08e0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:08e2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:08e5  mov si, word ptr fs:[0x1a4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158f8))));
    // 1501:08ea  mov bx, word ptr gs:[0x118]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x158fd))));
    // 1501:08ef  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:08f1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:08f3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:08f5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:08f8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:08fa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:08fc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:08ff  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0901  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0903  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0906  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0908  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:090a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:090d  mov si, word ptr fs:[0x1a2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15920))));
    // 1501:0912  mov bx, word ptr gs:[0x112]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15925))));
    // 1501:0917  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0919  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:091b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:091d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0920  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0922  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0924  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0927  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0929  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:092b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:092e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0930  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0932  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0935  mov si, word ptr fs:[0x1a2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15948))));
    // 1501:093a  mov bx, word ptr gs:[0x10a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1594d))));
    // 1501:093f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0941  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0943  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0945  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0948  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:094a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:094c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:094f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0951  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0953  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0956  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0958  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:095a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:095d  mov si, word ptr fs:[0x1a0]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15970))));
    // 1501:0962  mov bx, word ptr gs:[0x104]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15975))));
    // 1501:0967  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0969  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:096b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:096d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0970  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0972  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0974  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0977  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0979  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:097b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:097e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0980  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0982  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0985  mov si, word ptr fs:[0x1a2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15998))));
    // 1501:098a  mov bx, word ptr gs:[0x100]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1599d))));
    // 1501:098f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0991  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0993  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0995  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0998  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:099a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:099c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:099f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:09a1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:09a3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:09a6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:09a8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:09aa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:09ad  mov si, word ptr fs:[0x1a0]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x159c0))));
    // 1501:09b2  mov bx, word ptr gs:[0xfc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x159c5))));
    // 1501:09b7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:09b9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:09bb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:09bd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:09c0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:09c2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:09c4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:09c7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:09c9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:09cb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:09ce  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:09d0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:09d2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:09d5  mov si, word ptr fs:[0x19e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x159e8))));
    // 1501:09da  mov bx, word ptr gs:[0xf6]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x159ed))));
    // 1501:09df  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:09e1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:09e3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:09e5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:09e8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:09ea  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:09ec  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:09ef  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:09f1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:09f3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:09f6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:09f8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:09fa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), true));
    // 1501:09fd  mov si, word ptr fs:[0x19a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a10))));
L15a12:
    if (c.tracing) c.traceAt(0x15a12);
    // 1501:0a02  mov bx, word ptr gs:[0xee]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a15))));
L15a17:
    if (c.tracing) c.traceAt(0x15a17);
    // 1501:0a07  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0a09  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0a0b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0a0d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0a10  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0a12  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0a14  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0a17  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0a19  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0a1b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0a1e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0a20  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0a22  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0a25  mov si, word ptr fs:[0x198]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a38))));
    // 1501:0a2a  mov bx, word ptr gs:[0xe8]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a3d))));
    // 1501:0a2f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0a31  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0a33  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0a35  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0a38  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0a3a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0a3c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0a3f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0a41  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0a43  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0a46  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0a48  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0a4a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0a4d  mov si, word ptr fs:[0x196]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a60))));
    // 1501:0a52  mov bx, word ptr gs:[0xe4]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a65))));
    // 1501:0a57  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0a59  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0a5b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0a5d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0a60  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0a62  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0a64  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0a67  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0a69  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0a6b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0a6e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0a70  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0a72  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0a75  mov si, word ptr fs:[0x190]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a88))));
    // 1501:0a7a  mov bx, word ptr gs:[0xde]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15a8d))));
    // 1501:0a7f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0a81  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0a83  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0a85  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0a88  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0a8a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0a8c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0a8f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0a91  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0a93  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0a96  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0a98  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0a9a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0a9d  mov si, word ptr fs:[0x18c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ab0))));
    // 1501:0aa2  mov bx, word ptr gs:[0xd8]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ab5))));
    // 1501:0aa7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0aa9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0aab  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0aad  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ab0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0ab2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0ab4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0ab7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ab9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0abb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0abe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ac0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0ac2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0ac5  mov si, word ptr fs:[0x186]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ad8))));
    // 1501:0aca  mov bx, word ptr gs:[0xd0]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15add))));
    // 1501:0acf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0ad1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0ad3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0ad5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ad8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0ada  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0adc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0adf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ae1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ae3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0ae6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ae8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0aea  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0aed  mov si, word ptr fs:[0x182]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b00))));
    // 1501:0af2  mov bx, word ptr gs:[0xcc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b05))));
    // 1501:0af7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0af9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0afb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0afd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0b00  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0b02  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0b04  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0b07  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0b09  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0b0b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0b0e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0b10  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0b12  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0b15  mov si, word ptr fs:[0x17c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b28))));
    // 1501:0b1a  mov bx, word ptr gs:[0xc6]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b2d))));
    // 1501:0b1f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0b21  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0b23  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0b25  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0b28  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0b2a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0b2c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0b2f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0b31  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0b33  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0b36  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0b38  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0b3a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0b3d  mov si, word ptr fs:[0x176]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b50))));
    // 1501:0b42  mov bx, word ptr gs:[0xc2]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b55))));
    // 1501:0b47  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0b49  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0b4b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0b4d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0b50  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0b52  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0b54  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0b57  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0b59  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0b5b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0b5e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0b60  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0b62  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0b65  mov si, word ptr fs:[0x172]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b78))));
    // 1501:0b6a  mov bx, word ptr gs:[0xbc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15b7d))));
    // 1501:0b6f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0b71  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0b73  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0b75  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0b78  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0b7a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0b7c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0b7f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0b81  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0b83  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0b86  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0b88  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0b8a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0b8d  mov si, word ptr fs:[0x16a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ba0))));
    // 1501:0b92  mov bx, word ptr gs:[0xb8]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ba5))));
    // 1501:0b97  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0b99  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0b9b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0b9d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ba0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0ba2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0ba4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0ba7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ba9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0bab  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0bae  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0bb0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0bb2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0bb5  mov si, word ptr fs:[0x162]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15bc8))));
    // 1501:0bba  mov bx, word ptr gs:[0xb2]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15bcd))));
    // 1501:0bbf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0bc1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 1501:0bc3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
L15bd5:
    if (c.tracing) c.traceAt(0x15bd5);
    // 1501:0bc5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), true));
L15bd8:
    if (c.tracing) c.traceAt(0x15bd8);
    // 1501:0bc8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0bca  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0bcc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0bcf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0bd1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0bd3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0bd6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0bd8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0bda  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0bdd  mov si, word ptr fs:[0x15e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15bf0))));
    // 1501:0be2  mov bx, word ptr gs:[0xae]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15bf5))));
    // 1501:0be7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0be9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0beb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0bed  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0bf0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0bf2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0bf4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0bf7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0bf9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0bfb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0bfe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0c00  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0c02  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0c05  mov si, word ptr fs:[0x156]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c18))));
    // 1501:0c0a  mov bx, word ptr gs:[0xaa]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c1d))));
    // 1501:0c0f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0c11  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0c13  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0c15  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0c18  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0c1a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0c1c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0c1f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0c21  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0c23  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0c26  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0c28  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0c2a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0c2d  mov si, word ptr fs:[0x14e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c40))));
    // 1501:0c32  mov bx, word ptr gs:[0xa4]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c45))));
    // 1501:0c37  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0c39  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0c3b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0c3d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0c40  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0c42  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0c44  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0c47  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0c49  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0c4b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0c4e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0c50  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0c52  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0c55  mov si, word ptr fs:[0x146]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c68))));
    // 1501:0c5a  mov bx, word ptr gs:[0xa2]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c6d))));
    // 1501:0c5f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0c61  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0c63  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0c65  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0c68  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0c6a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0c6c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0c6f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0c71  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0c73  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0c76  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0c78  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0c7a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0c7d  mov si, word ptr fs:[0x13e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c90))));
    // 1501:0c82  mov bx, word ptr gs:[0x9e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15c95))));
    // 1501:0c87  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0c89  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0c8b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0c8d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0c90  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0c92  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0c94  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0c97  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0c99  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0c9b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0c9e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ca0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0ca2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0ca5  mov si, word ptr fs:[0x138]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15cb8))));
    // 1501:0caa  mov bx, word ptr gs:[0x9c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15cbd))));
    // 1501:0caf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0cb1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0cb3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0cb5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0cb8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0cba  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0cbc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0cbf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0cc1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0cc3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0cc6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0cc8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0cca  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0ccd  mov si, word ptr fs:[0x12e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ce0))));
    // 1501:0cd2  mov bx, word ptr gs:[0x98]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ce5))));
    // 1501:0cd7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0cd9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0cdb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0cdd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ce0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0ce2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0ce4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0ce7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ce9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ceb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0cee  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0cf0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0cf2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0cf5  mov si, word ptr fs:[0x126]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d08))));
    // 1501:0cfa  mov bx, word ptr gs:[0x96]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d0d))));
    // 1501:0cff  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0d01  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0d03  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0d05  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0d08  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0d0a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0d0c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0d0f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0d11  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0d13  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0d16  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0d18  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0d1a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0d1d  mov si, word ptr fs:[0x11c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d30))));
    // 1501:0d22  mov bx, word ptr gs:[0x92]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d35))));
    // 1501:0d27  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0d29  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0d2b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0d2d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0d30  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0d32  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0d34  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0d37  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0d39  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0d3b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0d3e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0d40  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0d42  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0d45  mov si, word ptr fs:[0x116]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d58))));
    // 1501:0d4a  mov bx, word ptr gs:[0x92]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d5d))));
    // 1501:0d4f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0d51  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0d53  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0d55  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0d58  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0d5a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0d5c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0d5f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0d61  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0d63  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0d66  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0d68  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0d6a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0d6d  mov si, word ptr fs:[0x10c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d80))));
    // 1501:0d72  mov bx, word ptr gs:[0x8e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15d85))));
    // 1501:0d77  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0d79  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0d7b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0d7d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0d80  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0d82  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0d84  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), true));
L15d97:
    if (c.tracing) c.traceAt(0x15d97);
    // 1501:0d87  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0d89  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0d8b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0d8e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0d90  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0d92  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0d95  mov si, word ptr fs:[0x104]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15da8))));
    // 1501:0d9a  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15dad))));
    // 1501:0d9f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0da1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0da3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0da5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0da8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0daa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0dac  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0daf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0db1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0db3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0db6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0db8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0dba  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0dbd  mov si, word ptr fs:[0xfc]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15dd0))));
    // 1501:0dc2  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15dd5))));
    // 1501:0dc7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0dc9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0dcb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0dcd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0dd0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0dd2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0dd4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0dd7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0dd9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ddb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0dde  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0de0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0de2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0de5  mov si, word ptr fs:[0xf0]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15df8))));
    // 1501:0dea  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15dfd))));
    // 1501:0def  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0df1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0df3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0df5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0df8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0dfa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0dfc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0dff  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0e01  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0e03  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0e06  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0e08  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0e0a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0e0d  mov si, word ptr fs:[0xe8]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e20))));
    // 1501:0e12  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e25))));
    // 1501:0e17  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0e19  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0e1b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0e1d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0e20  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0e22  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0e24  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0e27  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0e29  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0e2b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0e2e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0e30  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0e32  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0e35  mov si, word ptr fs:[0xe2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e48))));
    // 1501:0e3a  mov bx, word ptr gs:[0x8a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e4d))));
    // 1501:0e3f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0e41  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0e43  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0e45  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0e48  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0e4a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0e4c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0e4f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0e51  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0e53  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0e56  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0e58  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0e5a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0e5d  mov si, word ptr fs:[0xdc]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e70))));
    // 1501:0e62  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e75))));
    // 1501:0e67  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0e69  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0e6b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0e6d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0e70  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0e72  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0e74  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0e77  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0e79  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0e7b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0e7e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0e80  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0e82  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0e85  mov si, word ptr fs:[0xd4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e98))));
    // 1501:0e8a  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15e9d))));
    // 1501:0e8f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0e91  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0e93  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0e95  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0e98  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0e9a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0e9c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0e9f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ea1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ea3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0ea6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ea8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0eaa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0ead  mov si, word ptr fs:[0xcc]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ec0))));
    // 1501:0eb2  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ec5))));
    // 1501:0eb7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0eb9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0ebb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0ebd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ec0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0ec2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0ec4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0ec7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ec9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ecb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0ece  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ed0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0ed2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0ed5  mov si, word ptr fs:[0xc4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15ee8))));
    // 1501:0eda  mov bx, word ptr gs:[0x8c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15eed))));
    // 1501:0edf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0ee1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0ee3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0ee5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0ee8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0eea  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0eec  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0eef  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0ef1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0ef3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0ef6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0ef8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0efa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0efd  mov si, word ptr fs:[0xbc]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f10))));
    // 1501:0f02  mov bx, word ptr gs:[0x8e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f15))));
    // 1501:0f07  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0f09  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0f0b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0f0d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0f10  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0f12  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0f14  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0f17  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0f19  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0f1b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0f1e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0f20  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0f22  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0f25  mov si, word ptr fs:[0xb4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f38))));
    // 1501:0f2a  mov bx, word ptr gs:[0x92]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f3d))));
    // 1501:0f2f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0f31  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0f33  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0f35  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0f38  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0f3a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0f3c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0f3f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0f41  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0f43  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0f46  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, true));
L15f58:
    if (c.tracing) c.traceAt(0x15f58);
    // 1501:0f48  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0f4a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0f4d  mov si, word ptr fs:[0xac]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f60))));
    // 1501:0f52  mov bx, word ptr gs:[0x92]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f65))));
    // 1501:0f57  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0f59  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0f5b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0f5d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0f60  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0f62  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0f64  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0f67  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0f69  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0f6b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0f6e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0f70  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0f72  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0f75  mov si, word ptr fs:[0xa6]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f88))));
    // 1501:0f7a  mov bx, word ptr gs:[0x96]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15f8d))));
    // 1501:0f7f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0f81  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0f83  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0f85  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0f88  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0f8a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0f8c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0f8f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0f91  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0f93  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0f96  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0f98  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0f9a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0f9d  mov si, word ptr fs:[0x9e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15fb0))));
    // 1501:0fa2  mov bx, word ptr gs:[0x98]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15fb5))));
    // 1501:0fa7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0fa9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0fab  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0fad  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0fb0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0fb2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0fb4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0fb7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0fb9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0fbb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0fbe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0fc0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0fc2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0fc5  mov si, word ptr fs:[0x9a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15fd8))));
    // 1501:0fca  mov bx, word ptr gs:[0x9c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x15fdd))));
    // 1501:0fcf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0fd1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0fd3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0fd5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:0fd8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:0fda  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:0fdc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:0fdf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:0fe1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0fe3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0fe6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:0fe8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:0fea  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0fed  mov si, word ptr fs:[0x92]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16000))));
    // 1501:0ff2  mov bx, word ptr gs:[0x9e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16005))));
    // 1501:0ff7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:0ff9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:0ffb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:0ffd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1000  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1002  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1004  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1007  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1009  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:100b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:100e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1010  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1012  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1015  mov si, word ptr fs:[0x8a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16028))));
    // 1501:101a  mov bx, word ptr gs:[0xa0]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1602d))));
    // 1501:101f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1021  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1023  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1025  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1028  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:102a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:102c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:102f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1031  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1033  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1036  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1038  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:103a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:103d  mov si, word ptr fs:[0x86]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16050))));
    // 1501:1042  mov bx, word ptr gs:[0xa4]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16055))));
    // 1501:1047  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1049  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:104b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:104d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1050  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1052  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1054  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1057  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1059  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:105b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:105e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1060  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1062  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1065  mov si, word ptr fs:[0x7e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16078))));
    // 1501:106a  mov bx, word ptr gs:[0xaa]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1607d))));
    // 1501:106f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1071  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1073  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1075  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1078  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:107a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:107c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:107f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1081  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1083  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1086  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1088  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:108a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:108d  mov si, word ptr fs:[0x7a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160a0))));
    // 1501:1092  mov bx, word ptr gs:[0xae]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160a5))));
    // 1501:1097  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1099  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:109b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:109d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:10a0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:10a2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:10a4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:10a7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:10a9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:10ab  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:10ae  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:10b0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:10b2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:10b5  mov si, word ptr fs:[0x76]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160c8))));
    // 1501:10ba  mov bx, word ptr gs:[0xb2]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160cd))));
    // 1501:10bf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:10c1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:10c3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:10c5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:10c8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:10ca  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:10cc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:10cf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:10d1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:10d3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:10d6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:10d8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:10da  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:10dd  mov si, word ptr fs:[0x72]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160f0))));
    // 1501:10e2  mov bx, word ptr gs:[0xb8]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x160f5))));
    // 1501:10e7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:10e9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:10eb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:10ed  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:10f0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:10f2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:10f4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:10f7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:10f9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:10fb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:10fe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1100  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1102  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), true));
    // 1501:1105  mov si, word ptr fs:[0x70]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16118))));
L1611a:
    if (c.tracing) c.traceAt(0x1611a);
    // 1501:110a  mov bx, word ptr gs:[0xbc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1611d))));
    // 1501:110f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1111  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1113  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1115  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1118  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:111a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:111c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:111f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1121  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1123  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1126  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1128  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:112a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:112d  mov si, word ptr fs:[0x6a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16140))));
    // 1501:1132  mov bx, word ptr gs:[0xc2]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16145))));
    // 1501:1137  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1139  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:113b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:113d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1140  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1142  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1144  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1147  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1149  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:114b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:114e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1150  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1152  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1155  mov si, word ptr fs:[0x68]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16168))));
    // 1501:115a  mov bx, word ptr gs:[0xc6]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1616d))));
    // 1501:115f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1161  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1163  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1165  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1168  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:116a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:116c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:116f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1171  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1173  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1176  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1178  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:117a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:117d  mov si, word ptr fs:[0x66]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16190))));
    // 1501:1182  mov bx, word ptr gs:[0xcc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16195))));
    // 1501:1187  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1189  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:118b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:118d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1190  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1192  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1194  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1197  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1199  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:119b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:119e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:11a0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:11a2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:11a5  mov si, word ptr fs:[0x62]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x161b8))));
    // 1501:11aa  mov bx, word ptr gs:[0xd0]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x161bd))));
    // 1501:11af  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:11b1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:11b3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:11b5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:11b8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:11ba  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:11bc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:11bf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:11c1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:11c3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:11c6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:11c8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:11ca  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:11cd  mov si, word ptr fs:[0x60]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x161e0))));
    // 1501:11d2  mov bx, word ptr gs:[0xd6]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x161e5))));
    // 1501:11d7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:11d9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:11db  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:11dd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:11e0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:11e2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:11e4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:11e7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:11e9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:11eb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:11ee  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:11f0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:11f2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:11f5  mov si, word ptr fs:[0x60]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16208))));
    // 1501:11fa  mov bx, word ptr gs:[0xdc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1620d))));
    // 1501:11ff  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1201  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1203  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1205  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1208  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:120a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:120c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:120f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1211  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1213  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1216  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1218  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:121a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:121d  mov si, word ptr fs:[0x5e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16230))));
    // 1501:1222  mov bx, word ptr gs:[0xe4]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16235))));
    // 1501:1227  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1229  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:122b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:122d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1230  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1232  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1234  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1237  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1239  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:123b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:123e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1240  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1242  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1245  mov si, word ptr fs:[0x5c]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16258))));
    // 1501:124a  mov bx, word ptr gs:[0xe8]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1625d))));
    // 1501:124f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1251  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1253  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1255  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1258  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:125a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:125c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:125f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1261  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1263  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1266  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1268  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:126a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:126d  mov si, word ptr fs:[0x5e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16280))));
    // 1501:1272  mov bx, word ptr gs:[0xee]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16285))));
    // 1501:1277  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1279  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:127b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:127d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1280  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1282  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1284  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1287  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1289  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:128b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:128e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1290  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1292  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1295  mov si, word ptr fs:[0x5e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162a8))));
    // 1501:129a  mov bx, word ptr gs:[0xf6]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162ad))));
    // 1501:129f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:12a1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:12a3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:12a5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:12a8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:12aa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:12ac  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:12af  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:12b1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:12b3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:12b6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:12b8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:12ba  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:12bd  mov si, word ptr fs:[0x60]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162d0))));
    // 1501:12c2  mov bx, word ptr gs:[0xfc]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162d5))));
    // 1501:12c7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:12c9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 1501:12cb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
L162dd:
    if (c.tracing) c.traceAt(0x162dd);
    // 1501:12cd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:12d0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:12d2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:12d4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:12d7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:12d9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:12db  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:12de  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:12e0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:12e2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:12e5  mov si, word ptr fs:[0x5e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162f8))));
    // 1501:12ea  mov bx, word ptr gs:[0x100]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x162fd))));
    // 1501:12ef  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:12f1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:12f3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:12f5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:12f8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:12fa  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:12fc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:12ff  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1301  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1303  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1306  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1308  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:130a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:130d  mov si, word ptr fs:[0x60]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16320))));
    // 1501:1312  mov bx, word ptr gs:[0x104]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16325))));
    // 1501:1317  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1319  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:131b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:131d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1320  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1322  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1324  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1327  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1329  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:132b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:132e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1330  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1332  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1335  mov si, word ptr fs:[0x62]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16348))));
    // 1501:133a  mov bx, word ptr gs:[0x10a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1634d))));
    // 1501:133f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1341  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1343  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1345  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1348  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:134a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:134c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:134f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1351  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1353  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1356  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1358  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:135a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:135d  mov si, word ptr fs:[0x66]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16370))));
    // 1501:1362  mov bx, word ptr gs:[0x112]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16375))));
    // 1501:1367  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1369  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:136b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:136d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1370  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1372  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1374  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1377  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1379  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:137b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:137e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1380  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1382  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1385  mov si, word ptr fs:[0x68]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16398))));
    // 1501:138a  mov bx, word ptr gs:[0x118]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1639d))));
    // 1501:138f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1391  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1393  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1395  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1398  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:139a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:139c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:139f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:13a1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:13a3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:13a6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:13a8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:13aa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:13ad  mov si, word ptr fs:[0x6a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x163c0))));
    // 1501:13b2  mov bx, word ptr gs:[0x11c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x163c5))));
    // 1501:13b7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:13b9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:13bb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:13bd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:13c0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:13c2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:13c4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:13c7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:13c9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:13cb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:13ce  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:13d0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:13d2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:13d5  mov si, word ptr fs:[0x70]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x163e8))));
    // 1501:13da  mov bx, word ptr gs:[0x122]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x163ed))));
    // 1501:13df  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:13e1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:13e3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:13e5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:13e8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:13ea  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:13ec  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:13ef  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:13f1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:13f3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:13f6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:13f8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:13fa  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:13fd  mov si, word ptr fs:[0x74]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16410))));
    // 1501:1402  mov bx, word ptr gs:[0x128]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16415))));
    // 1501:1407  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1409  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:140b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:140d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1410  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1412  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1414  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1417  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1419  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:141b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:141e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1420  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1422  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1425  mov si, word ptr fs:[0x7a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16438))));
    // 1501:142a  mov bx, word ptr gs:[0x130]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1643d))));
    // 1501:142f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1431  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1433  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1435  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1438  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:143a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:143c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:143f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1441  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1443  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1446  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1448  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:144a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:144d  mov si, word ptr fs:[0x7e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16460))));
    // 1501:1452  mov bx, word ptr gs:[0x134]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16465))));
    // 1501:1457  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1459  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:145b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:145d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1460  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1462  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1464  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1467  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1469  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:146b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:146e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1470  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1472  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1475  mov si, word ptr fs:[0x84]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16488))));
    // 1501:147a  mov bx, word ptr gs:[0x13a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1648d))));
    // 1501:147f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1481  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1483  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1485  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1488  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:148a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:148c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), true));
L1649f:
    if (c.tracing) c.traceAt(0x1649f);
    // 1501:148f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1491  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1493  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1496  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1498  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:149a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:149d  mov si, word ptr fs:[0x8a]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x164b0))));
    // 1501:14a2  mov bx, word ptr gs:[0x13e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x164b5))));
    // 1501:14a7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:14a9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:14ab  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:14ad  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:14b0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:14b2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:14b4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:14b7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:14b9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:14bb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:14be  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:14c0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:14c2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:14c5  mov si, word ptr fs:[0x8e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x164d8))));
    // 1501:14ca  mov bx, word ptr gs:[0x144]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x164dd))));
    // 1501:14cf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:14d1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:14d3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:14d5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:14d8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:14da  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:14dc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:14df  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:14e1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:14e3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:14e6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:14e8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:14ea  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:14ed  mov si, word ptr fs:[0x96]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16500))));
    // 1501:14f2  mov bx, word ptr gs:[0x148]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16505))));
    // 1501:14f7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:14f9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:14fb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:14fd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1500  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1502  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1504  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1507  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1509  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:150b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:150e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1510  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1512  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1515  mov si, word ptr fs:[0x9e]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16528))));
    // 1501:151a  mov bx, word ptr gs:[0x14e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1652d))));
    // 1501:151f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1521  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1523  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1525  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1528  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:152a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:152c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:152f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1531  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1533  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1536  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1538  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:153a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:153d  mov si, word ptr fs:[0xa2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16550))));
    // 1501:1542  mov bx, word ptr gs:[0x152]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16555))));
    // 1501:1547  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1549  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:154b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:154d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1550  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1552  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1554  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1557  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1559  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:155b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:155e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1560  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1562  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1565  mov si, word ptr fs:[0xaa]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16578))));
    // 1501:156a  mov bx, word ptr gs:[0x156]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1657d))));
    // 1501:156f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1571  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1573  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1575  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1578  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:157a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:157c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:157f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1581  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1583  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1586  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1588  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:158a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:158d  mov si, word ptr fs:[0xb2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165a0))));
    // 1501:1592  mov bx, word ptr gs:[0x15c]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165a5))));
    // 1501:1597  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1599  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:159b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:159d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:15a0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:15a2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:15a4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:15a7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:15a9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:15ab  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:15ae  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:15b0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:15b2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:15b5  mov si, word ptr fs:[0xba]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165c8))));
    // 1501:15ba  mov bx, word ptr gs:[0x15e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165cd))));
    // 1501:15bf  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:15c1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:15c3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:15c5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:15c8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:15ca  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:15cc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:15cf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:15d1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:15d3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:15d6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:15d8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:15da  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:15dd  mov si, word ptr fs:[0xc2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165f0))));
    // 1501:15e2  mov bx, word ptr gs:[0x162]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x165f5))));
    // 1501:15e7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:15e9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:15eb  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:15ed  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:15f0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:15f2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:15f4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:15f7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:15f9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:15fb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:15fe  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1600  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1602  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1605  mov si, word ptr fs:[0xc8]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16618))));
    // 1501:160a  mov bx, word ptr gs:[0x164]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1661d))));
    // 1501:160f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1611  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1613  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1615  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1618  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:161a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:161c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:161f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1621  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1623  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1626  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1628  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:162a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:162d  mov si, word ptr fs:[0xd2]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16640))));
    // 1501:1632  mov bx, word ptr gs:[0x168]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16645))));
    // 1501:1637  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1639  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:163b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:163d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1640  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1642  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1644  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1647  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1649  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:164b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:164e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, true));
L16660:
    if (c.tracing) c.traceAt(0x16660);
    // 1501:1650  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1652  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1655  mov si, word ptr fs:[0xda]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16668))));
    // 1501:165a  mov bx, word ptr gs:[0x16a]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1666d))));
    // 1501:165f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1661  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1663  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1665  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1668  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:166a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:166c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:166f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1671  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1673  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1676  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1678  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:167a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:167d  mov si, word ptr fs:[0xe4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16690))));
    // 1501:1682  mov bx, word ptr gs:[0x16e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16695))));
    // 1501:1687  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1689  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:168b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:168d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1690  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1692  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1694  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1697  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1699  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:169b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:169e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:16a0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:16a2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:16a5  mov si, word ptr fs:[0xea]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x166b8))));
    // 1501:16aa  mov bx, word ptr gs:[0x16e]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x166bd))));
    // 1501:16af  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:16b1  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:16b3  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:16b5  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:16b8  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:16ba  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:16bc  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:16bf  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:16c1  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:16c3  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:16c6  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:16c8  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:16ca  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:16cd  mov si, word ptr fs:[0xf4]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x166e0))));
    // 1501:16d2  mov bx, word ptr gs:[0x172]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x166e5))));
    // 1501:16d7  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:16d9  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:16db  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:16dd  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:16e0  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:16e2  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:16e4  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:16e7  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:16e9  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:16eb  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:16ee  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:16f0  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:16f2  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:16f5  mov si, word ptr fs:[0xfc]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16708))));
    // 1501:16fa  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1670d))));
    // 1501:16ff  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1701  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1703  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1705  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1708  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:170a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:170c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:170f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1711  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1713  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1716  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1718  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:171a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:171d  mov si, word ptr fs:[0x104]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16730))));
    // 1501:1722  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16735))));
    // 1501:1727  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1729  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:172b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:172d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1730  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1732  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1734  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1737  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1739  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:173b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:173e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1740  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1742  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1745  mov si, word ptr fs:[0x110]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16758))));
    // 1501:174a  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x1675d))));
    // 1501:174f  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1751  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1753  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1755  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1758  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:175a  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:175c  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:175f  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1761  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:1763  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:1766  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1768  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:176a  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:176d  mov si, word ptr fs:[0x118]  [x72688]
    c.si.x = (uint16_t)(c.r16(c.fsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16780))));
    // 1501:1772  mov bx, word ptr gs:[0x174]  [x72688]
    c.b.x = (uint16_t)(c.r16(c.gsb + (uint16_t)((uint32_t)(int16_t)c.r16(0x16785))));
    // 1501:1777  mov di, bx  [x72688]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1779  add bx, cx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:177b  mov al, byte ptr [bx]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:177d  shr bx, 3  [x72688]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1780  add bx, si  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.si.x, false));
    // 1501:1782  add bx, dx  [x72688]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:1784  or byte ptr es:[bx], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.b.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.b.x))) | (c.a.l), false));
    // 1501:1787  sub di, cx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.c.x, false));
    // 1501:1789  mov al, byte ptr [di]  [x72688]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:178b  shr di, 3  [x72688]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:178e  add di, si  [x72688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:1790  sub di, dx  [x72688]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.dx_.x, false));
    // 1501:1792  or byte ptr es:[di], al  [x72688]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:1795  pop si  [x72688]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1796  add si, 6  [x72688]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:1799  cmp si, 0x108  [x72688]
    c.sub<16>(c.si.x, 0x108u, true);
    // 1501:179d  jb 0x4b8  [x72688]
    if (c.cf) goto L154c8;
L167b1:
    if (c.tracing) c.traceAt(0x167b1);
    // 1501:17a1  ret   [x1652]
    c.ip = c.pop16(); return;
L167b2:
    if (c.tracing) c.traceAt(0x167b2);
    // 1501:17a2  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:17a5  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:17a8  call 0x17d0  [x1]
    c.push16(0x17abu); code_21(c, 0x167e0u); if (c.ip != 0x17abu) c.badReturn(0x167b8);
L167bb:
    if (c.tracing) c.traceAt(0x167bb);
    // 1501:17ab  mov ax, 0x108  [x1]
    c.a.x = (uint16_t)(0x108u);
    // 1501:17ae  mov di, 0x168  [x1]
    c.di.x = (uint16_t)(0x168u);
    // 1501:17b1  call 0x180b  [x1]
    c.push16(0x17b4u); code_21(c, 0x1681bu); if (c.ip != 0x17b4u) c.badReturn(0x167c1);
L167c4:
    if (c.tracing) c.traceAt(0x167c4);
    // 1501:17b4  mov ax, 0x210  [x1]
    c.a.x = (uint16_t)(0x210u);
    // 1501:17b7  mov di, 0x2d0  [x1]
    c.di.x = (uint16_t)(0x2d0u);
    // 1501:17ba  call 0x1911  [x1]
    c.push16(0x17bdu); code_21(c, 0x16921u); if (c.ip != 0x17bdu) c.badReturn(0x167ca);
L167cd:
    if (c.tracing) c.traceAt(0x167cd);
    // 1501:17bd  mov ax, 0x318  [x1]
    c.a.x = (uint16_t)(0x318u);
    // 1501:17c0  mov di, 0x438  [x1]
    c.di.x = (uint16_t)(0x438u);
    // 1501:17c3  call 0x194a  [x1]
    c.push16(0x17c6u); code_21(c, 0x1695au); if (c.ip != 0x17c6u) c.badReturn(0x167d3);
L167d6:
    if (c.tracing) c.traceAt(0x167d6);
    // 1501:17c6  mov ax, 0x420  [x1]
    c.a.x = (uint16_t)(0x420u);
    // 1501:17c9  mov di, 0x5a0  [x1]
    c.di.x = (uint16_t)(0x5a0u);
    // 1501:17cc  call 0x1a00  [x1]
    c.push16(0x17cfu); code_21(c, 0x16a10u); if (c.ip != 0x17cfu) c.badReturn(0x167dc);
L167df:
    if (c.tracing) c.traceAt(0x167df);
    // 1501:17cf  ret   [x1]
    c.ip = c.pop16(); return;
L167e0:
    if (c.tracing) c.traceAt(0x167e0);
    // 1501:17d0  push ax  [x1]
    c.push16(c.a.x);
    // 1501:17d1  call 0x1d19  [x1]
    c.push16(0x17d4u); code_21(c, 0x16d29u); if (c.ip != 0x17d4u) c.badReturn(0x167e1);
L167e4:
    if (c.tracing) c.traceAt(0x167e4);
    // 1501:17d4  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:17d5  mov si, 0x82  [x1]
    c.si.x = (uint16_t)(0x82u);
    // 1501:17d8  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
L167eb:
    if (c.tracing) c.traceAt(0x167eb);
    // 1501:17db  push si  [x44]
    c.push16(c.si.x);
    // 1501:17dc  shr si, 4  [x44]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x4u) & 31), false));
    // 1501:17df  and si, 0xfffc  [x44]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0xfffcu), false));
    // 1501:17e2  mov ax, word ptr [si - 0x4b85]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:17e6  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:17e7  mov bp, 0x186  [x44]
    c.bp.x = (uint16_t)(0x186u);
    // 1501:17ea  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x17eau); }   // #DE: int 0, then again
    // 1501:17ec  mov word ptr [di - 0x45e1], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:17f0  shl si, 1  [x44]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:17f2  mov ax, word ptr [si - 0x4ced]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:17f6  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:17f7  mov bp, 0x102  [x44]
    c.bp.x = (uint16_t)(0x102u);
    // 1501:17fa  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x17fau); }   // #DE: int 0, then again
    // 1501:17fc  mov word ptr [di - 0x5211], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:1800  pop si  [x44]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1801  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:1804  add si, 0x82  [x44]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x82u, true));
    // 1501:1808  loop 0x17db  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L167eb;
L1681a:
    if (c.tracing) c.traceAt(0x1681a);
    // 1501:180a  ret   [x1]
    c.ip = c.pop16(); return;
L1681b:
    if (c.tracing) c.traceAt(0x1681b);
    // 1501:180b  push ax  [x1]
    c.push16(c.a.x);
    // 1501:180c  call 0x1d4f  [x1]
    c.push16(0x180fu); code_21(c, 0x16d5fu); if (c.ip != 0x180fu) c.badReturn(0x1681c);
L1681f:
    if (c.tracing) c.traceAt(0x1681f);
    // 1501:180f  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1810  push di  [x1]
    c.push16(c.di.x);
    // 1501:1811  mov si, 0x82  [x1]
    c.si.x = (uint16_t)(0x82u);
    // 1501:1814  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
L16827:
    if (c.tracing) c.traceAt(0x16827);
    // 1501:1817  push si  [x44]
    c.push16(c.si.x);
    // 1501:1818  shr si, 4  [x44]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x4u) & 31), false));
    // 1501:181b  and si, 0xfffc  [x44]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0xfffcu), false));
    // 1501:181e  mov ax, word ptr [si - 0x4b85]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:1822  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1823  mov bp, 0x186  [x44]
    c.bp.x = (uint16_t)(0x186u);
    // 1501:1826  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x1826u); }   // #DE: int 0, then again
    // 1501:1828  mov word ptr [di - 0x45e1], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:182c  mov ax, word ptr [si - 0x4ced]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:1830  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1831  mov bp, 0x102  [x44]
    c.bp.x = (uint16_t)(0x102u);
    // 1501:1834  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x1834u); }   // #DE: int 0, then again
    // 1501:1836  mov word ptr [di - 0x5211], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:183a  pop si  [x44]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:183b  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:183e  add si, 0x82  [x44]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x82u, true));
    // 1501:1842  loop 0x1817  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16827;
L16854:
    if (c.tracing) c.traceAt(0x16854);
    // 1501:1844  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1845  push di  [x1]
    c.push16(c.di.x);
    // 1501:1846  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
    // 1501:1849  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:184b  mov ax, 0x40  [x1]
    c.a.x = (uint16_t)(0x40u);
    // 1501:184e  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x184eu); }   // #DE: int 0, then again
    // 1501:1850  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1856  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:185d  mov word ptr [0xadd0], 0xb  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0xbu);
    // 1501:1866  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
    // 1501:1869  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:186c  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
L16883:
    if (c.tracing) c.traceAt(0x16883);
    // 1501:1873  mov word ptr [di - 0x45e1], ax  [x22]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:1877  add ax, word ptr [0xadcc]  [x22]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:187e  add word ptr [0xadd0], dx  [x22]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1885  cmp word ptr [0xadd0], 0x16  [x22]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:188d  jl 0x1898  [x22]
    if ((c.sf != c.of)) goto L168a8;
L1689f:
    if (c.tracing) c.traceAt(0x1689f);
    // 1501:188f  sub word ptr [0xadd0], 0x16  [x20]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:1897  inc ax  [x20]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L168a8:
    if (c.tracing) c.traceAt(0x168a8);
    // 1501:1898  add di, 6  [x22]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:189b  loop 0x1873  [x22]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16883;
L168ad:
    if (c.tracing) c.traceAt(0x168ad);
    // 1501:189d  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
L168b0:
    if (c.tracing) c.traceAt(0x168b0);
    // 1501:18a0  mov word ptr [di - 0x45e1], ax  [x22]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:18a4  add di, 6  [x22]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:18a7  loop 0x18a0  [x22]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L168b0;
L168b9:
    if (c.tracing) c.traceAt(0x168b9);
    // 1501:18a9  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:18aa  mov ax, 0x64  [x1]
    c.a.x = (uint16_t)(0x64u);
    // 1501:18ad  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
L168c0:
    if (c.tracing) c.traceAt(0x168c0);
    // 1501:18b0  mov word ptr [di - 0x5211], ax  [x22]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:18b4  add di, 6  [x22]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:18b7  loop 0x18b0  [x22]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L168c0;
L168c9:
    if (c.tracing) c.traceAt(0x168c9);
    // 1501:18b9  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
    // 1501:18bc  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:18be  mov ax, 0x64  [x1]
    c.a.x = (uint16_t)(0x64u);
    // 1501:18c1  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x18c1u); }   // #DE: int 0, then again
    // 1501:18c3  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:18c9  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:18d0  mov word ptr [0xadd0], 0xb  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0xbu);
    // 1501:18d9  mov cx, 0x16  [x1]
    c.c.x = (uint16_t)(0x16u);
    // 1501:18dc  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:18e3  mov ax, 0x64  [x1]
    c.a.x = (uint16_t)(0x64u);
L168f6:
    if (c.tracing) c.traceAt(0x168f6);
    // 1501:18e6  mov word ptr [di - 0x5211], ax  [x22]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:18ea  sub ax, word ptr [0xadcc]  [x22]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:18f1  add word ptr [0xadd0], dx  [x22]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:18f8  cmp word ptr [0xadd0], 0x16  [x22]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:1900  jl 0x190b  [x22]
    if ((c.sf != c.of)) goto L1691b;
L16912:
    if (c.tracing) c.traceAt(0x16912);
    // 1501:1902  sub word ptr [0xadd0], 0x16  [x12]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:190a  dec ax  [x12]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
L1691b:
    if (c.tracing) c.traceAt(0x1691b);
    // 1501:190b  add di, 6  [x22]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:190e  loop 0x18e6  [x22]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L168f6;
L16920:
    if (c.tracing) c.traceAt(0x16920);
    // 1501:1910  ret   [x1]
    c.ip = c.pop16(); return;
L16921:
    if (c.tracing) c.traceAt(0x16921);
    // 1501:1911  push ax  [x1]
    c.push16(c.a.x);
    // 1501:1912  call 0x1d19  [x1]
    c.push16(0x1915u); code_21(c, 0x16d29u); if (c.ip != 0x1915u) c.badReturn(0x16922);
L16925:
    if (c.tracing) c.traceAt(0x16925);
    // 1501:1915  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1916  mov si, 0x82  [x1]
    c.si.x = (uint16_t)(0x82u);
    // 1501:1919  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
L1692c:
    if (c.tracing) c.traceAt(0x1692c);
    // 1501:191c  push si  [x44]
    c.push16(c.si.x);
    // 1501:191d  shr si, 4  [x44]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x4u) & 31), false));
    // 1501:1920  and si, 0xfffc  [x44]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0xfffcu), false));
    // 1501:1923  mov ax, word ptr [si - 0x4b85]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:1927  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1928  mov bp, 0x186  [x44]
    c.bp.x = (uint16_t)(0x186u);
    // 1501:192b  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x192bu); }   // #DE: int 0, then again
    // 1501:192d  mov word ptr [di - 0x45e1], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:1931  mov ax, word ptr [si - 0x4ced]  [x44]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:1935  cdq   [x44]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1936  mov bp, 0x102  [x44]
    c.bp.x = (uint16_t)(0x102u);
    // 1501:1939  div bp  [x44]
    while (!c.div16(c.bp.x)) { c.d32 = false; c.intr(0, 0x1939u); }   // #DE: int 0, then again
    // 1501:193b  mov word ptr [di - 0x5211], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:193f  pop si  [x44]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1940  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:1943  add si, 0x82  [x44]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x82u, true));
    // 1501:1947  loop 0x191c  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1692c;
L16959:
    if (c.tracing) c.traceAt(0x16959);
    // 1501:1949  ret   [x1]
    c.ip = c.pop16(); return;
L1695a:
    if (c.tracing) c.traceAt(0x1695a);
    // 1501:194a  push ax  [x1]
    c.push16(c.a.x);
    // 1501:194b  call 0x1d19  [x1]
    c.push16(0x194eu); code_21(c, 0x16d29u); if (c.ip != 0x194eu) c.badReturn(0x1695b);
L1695e:
    if (c.tracing) c.traceAt(0x1695e);
    // 1501:194e  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:194f  push di  [x1]
    c.push16(c.di.x);
    // 1501:1950  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1953  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1955  mov ax, 0x32  [x1]
    c.a.x = (uint16_t)(0x32u);
    // 1501:1958  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1958u); }   // #DE: int 0, then again
    // 1501:195a  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1960  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1967  mov word ptr [0xadd0], 0x16  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0x16u);
    // 1501:1970  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1973  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:197a  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
L1698d:
    if (c.tracing) c.traceAt(0x1698d);
    // 1501:197d  mov word ptr [di - 0x45e1], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:1981  add ax, word ptr [0xadcc]  [x44]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1988  add word ptr [0xadd0], dx  [x44]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:198f  cmp word ptr [0xadd0], 0x16  [x44]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:1997  jl 0x19a2  [x44]
    if ((c.sf != c.of)) goto L169b2;
L169a9:
    if (c.tracing) c.traceAt(0x169a9);
    // 1501:1999  sub word ptr [0xadd0], 0x16  [x13]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:19a1  inc ax  [x13]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L169b2:
    if (c.tracing) c.traceAt(0x169b2);
    // 1501:19a2  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:19a5  loop 0x197d  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1698d;
L169b7:
    if (c.tracing) c.traceAt(0x169b7);
    // 1501:19a7  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:19a8  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:19ab  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:19ad  mov ax, 0x64  [x1]
    c.a.x = (uint16_t)(0x64u);
    // 1501:19b0  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x19b0u); }   // #DE: int 0, then again
    // 1501:19b2  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:19b8  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:19bf  mov word ptr [0xadd0], 0x16  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0x16u);
    // 1501:19c8  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:19cb  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:19d2  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
L169e5:
    if (c.tracing) c.traceAt(0x169e5);
    // 1501:19d5  mov word ptr [di - 0x5211], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:19d9  add ax, word ptr [0xadcc]  [x44]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:19e0  add word ptr [0xadd0], dx  [x44]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:19e7  cmp word ptr [0xadd0], 0x16  [x44]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:19ef  jl 0x19fa  [x44]
    if ((c.sf != c.of)) goto L16a0a;
L16a01:
    if (c.tracing) c.traceAt(0x16a01);
    // 1501:19f1  sub word ptr [0xadd0], 0x16  [x25]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:19f9  inc ax  [x25]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L16a0a:
    if (c.tracing) c.traceAt(0x16a0a);
    // 1501:19fa  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:19fd  loop 0x19d5  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L169e5;
L16a0f:
    if (c.tracing) c.traceAt(0x16a0f);
    // 1501:19ff  ret   [x1]
    c.ip = c.pop16(); return;
L16a10:
    if (c.tracing) c.traceAt(0x16a10);
    // 1501:1a00  push ax  [x1]
    c.push16(c.a.x);
    // 1501:1a01  call 0x1db8  [x1]
    c.push16(0x1a04u); code_21(c, 0x16dc8u); if (c.ip != 0x1a04u) c.badReturn(0x16a11);
L16a14:
    if (c.tracing) c.traceAt(0x16a14);
    // 1501:1a04  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1a05  push di  [x1]
    c.push16(c.di.x);
    // 1501:1a06  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
L16a19:
    if (c.tracing) c.traceAt(0x16a19);
    // 1501:1a09  mov word ptr [di - 0x40b9], 0  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf47u), 0x0u);
    // 1501:1a0f  mov word ptr [di - 0x5211], 0x64  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), 0x64u);
    // 1501:1a15  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1a18  loop 0x1a09  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16a19;
L16a2a:
    if (c.tracing) c.traceAt(0x16a2a);
    // 1501:1a1a  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1a1b  push di  [x1]
    c.push16(c.di.x);
    // 1501:1a1c  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1a1f  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1a21  mov ax, 0x8c  [x1]
    c.a.x = (uint16_t)(0x8cu);
    // 1501:1a24  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1a24u); }   // #DE: int 0, then again
    // 1501:1a26  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1a2c  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1a33  mov word ptr [0xadd0], 0x16  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0x16u);
    // 1501:1a3c  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1a3f  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:1a46  mov ax, 0xffba  [x1]
    c.a.x = (uint16_t)(0xffbau);
L16a59:
    if (c.tracing) c.traceAt(0x16a59);
    // 1501:1a49  mov word ptr [di - 0x45e1], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.a.x);
    // 1501:1a4d  add ax, word ptr [0xadcc]  [x44]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1a54  add word ptr [0xadd0], dx  [x44]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1a5b  cmp word ptr [0xadd0], 0x16  [x44]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:1a63  jl 0x1a6e  [x44]
    if ((c.sf != c.of)) goto L16a7e;
L16a75:
    if (c.tracing) c.traceAt(0x16a75);
    // 1501:1a65  sub word ptr [0xadd0], 0x16  [x17]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:1a6d  inc ax  [x17]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L16a7e:
    if (c.tracing) c.traceAt(0x16a7e);
    // 1501:1a6e  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1a71  loop 0x1a49  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16a59;
L16a83:
    if (c.tracing) c.traceAt(0x16a83);
    // 1501:1a73  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1a74  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1a77  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1a79  mov ax, 0x64  [x1]
    c.a.x = (uint16_t)(0x64u);
    // 1501:1a7c  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1a7cu); }   // #DE: int 0, then again
    // 1501:1a7e  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1a84  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1a8b  mov word ptr [0xadd0], 0x16  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0x16u);
    // 1501:1a94  mov cx, 0x2c  [x1]
    c.c.x = (uint16_t)(0x2cu);
    // 1501:1a97  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:1a9e  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
L16ab1:
    if (c.tracing) c.traceAt(0x16ab1);
    // 1501:1aa1  mov word ptr [di - 0x5211], ax  [x44]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.a.x);
    // 1501:1aa5  add ax, word ptr [0xadcc]  [x44]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1aac  add word ptr [0xadd0], dx  [x44]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1ab3  cmp word ptr [0xadd0], 0x16  [x44]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true);
    // 1501:1abb  jl 0x1ac6  [x44]
    if ((c.sf != c.of)) goto L16ad6;
L16acd:
    if (c.tracing) c.traceAt(0x16acd);
    // 1501:1abd  sub word ptr [0xadd0], 0x16  [x25]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x16u, true));
    // 1501:1ac5  inc ax  [x25]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L16ad6:
    if (c.tracing) c.traceAt(0x16ad6);
    // 1501:1ac6  add di, 6  [x44]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1ac9  loop 0x1aa1  [x44]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16ab1;
L16adb:
    if (c.tracing) c.traceAt(0x16adb);
    // 1501:1acb  ret   [x1]
    c.ip = c.pop16(); return;
L16adc:
    if (c.tracing) c.traceAt(0x16adc);
    // 1501:1acc  push si  [x32768]
    c.push16(c.si.x);
    // 1501:1acd  mov ax, si  [x32768]
    c.a.x = (uint16_t)(c.si.x);
    // 1501:1acf  sub al, 0x80  [x32768]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x80u, false));
    // 1501:1ad1  cwde   [x32768]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:1ad2  mul cx  [x32768]
    c.mul16(c.c.x);
    // 1501:1ad4  sar ax, 8  [x32768]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x8u) & 31), false));
    // 1501:1ad7  add ax, 0x80  [x32768]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, false));
    // 1501:1ada  mov bp, ax  [x32768]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1adc  add bx, bx  [x32768]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:1ade  mov ax, si  [x32768]
    c.a.x = (uint16_t)(c.si.x);
    // 1501:1ae0  add si, si  [x32768]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.si.x, false));
    // 1501:1ae2  mov word ptr gs:[bx + si], bp  [x32768]
    c.w16(c.gsb + (uint16_t)(c.b.x + c.si.x), c.bp.x);
    // 1501:1ae5  sub al, 0x80  [x32768]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x80u, false));
    // 1501:1ae7  cwde   [x32768]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:1ae8  mul cx  [x32768]
    c.mul16(c.c.x);
    // 1501:1aea  sar ax, 8  [x32768]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x8u) & 31), false));
    // 1501:1aed  add ax, 0x80  [x32768]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, false));
    // 1501:1af0  shl ax, 6  [x32768]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x6u) & 31), true));
    // 1501:1af3  mov word ptr fs:[bx + si], ax  [x32768]
    c.w16(c.fsb + (uint16_t)(c.b.x + c.si.x), c.a.x);
    // 1501:1af6  pop si  [x32768]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1af7  ret   [x32768]
    c.ip = c.pop16(); return;
L16b08:
    if (c.tracing) c.traceAt(0x16b08);
    // 1501:1af8  mov ax, word ptr cs:[0x23]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x23u)));
    // 1501:1afc  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:1afe  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:1b01  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 1501:1b03  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L16b15:
    if (c.tracing) c.traceAt(0x16b15);
    // 1501:1b05  xor bx, bx  [x256]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:1b07  mov cx, 0  [x256]
    c.c.x = (uint16_t)(0x0u);
L16b1a:
    if (c.tracing) c.traceAt(0x16b1a);
    // 1501:1b0a  push bx  [x32768]
    c.push16(c.b.x);
    // 1501:1b0b  call 0x1acc  [x32768]
    c.push16(0x1b0eu); code_21(c, 0x16adcu); if (c.ip != 0x1b0eu) c.badReturn(0x16b1b);
L16b1e:
    if (c.tracing) c.traceAt(0x16b1e);
    // 1501:1b0e  pop bx  [x32768]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1b0f  add bx, 0x100  [x32768]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x100u, false));
    // 1501:1b13  add cx, 2  [x32768]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x2u, false));
    // 1501:1b16  cmp cx, 0x100  [x32768]
    c.sub<16>(c.c.x, 0x100u, true);
    // 1501:1b1a  jb 0x1b0a  [x32768]
    if (c.cf) goto L16b1a;
L16b2c:
    if (c.tracing) c.traceAt(0x16b2c);
    // 1501:1b1c  inc si  [x256]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1b1d  cmp si, 0x100  [x256]
    c.sub<16>(c.si.x, 0x100u, true);
    // 1501:1b21  jb 0x1b05  [x256]
    if (c.cf) goto L16b15;
L16b33:
    if (c.tracing) c.traceAt(0x16b33);
    // 1501:1b23  ret   [x1]
    c.ip = c.pop16(); return;
L16b34:
    if (c.tracing) c.traceAt(0x16b34);
    // 1501:1b24  mov di, 0x4d5  [x1652]
    c.di.x = (uint16_t)(0x4d5u);
    // 1501:1b27  xor si, si  [x1652]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:1b29  mov cx, 0x3c  [x1652]
    c.c.x = (uint16_t)(0x3cu);
L16b3c:
    if (c.tracing) c.traceAt(0x16b3c);
    // 1501:1b2c  mov ax, word ptr [si - 0x39b5]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffc64bu)));
    // 1501:1b30  mov bx, ax  [x99120]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1b32  add ax, 0x80  [x99120]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, false));
    // 1501:1b35  add ax, ax  [x99120]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, false));
    // 1501:1b37  mov word ptr cs:[di + 8], ax  [x99120]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 1501:1b3b  neg bx  [x99120]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:1b3d  add bx, 0x80  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x80u, false));
    // 1501:1b41  add bx, bx  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:1b43  mov word ptr cs:[di + 0x968], bx  [x99120]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x968u), c.b.x);
    // 1501:1b48  mov ax, word ptr [si - 0x393d]  [x99120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffc6c3u)));
    // 1501:1b4c  mov bx, ax  [x99120]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1b4e  add ax, 0x80  [x99120]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, false));
    // 1501:1b51  add ax, ax  [x99120]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, false));
    // 1501:1b53  mov word ptr cs:[di + 3], ax  [x99120]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x3u), c.a.x);
    // 1501:1b57  neg bx  [x99120]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:1b59  add bx, 0x80  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x80u, false));
    // 1501:1b5d  add bx, bx  [x99120]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:1b5f  mov word ptr cs:[di + 0x963], bx  [x99120]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x963u), c.b.x);
    // 1501:1b64  add di, 0x28  [x99120]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1b67  add si, 2  [x99120]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:1b6a  loop 0x1b2c  [x99120]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16b3c;
L16b7c:
    if (c.tracing) c.traceAt(0x16b7c);
    // 1501:1b6c  ret   [x1652]
    c.ip = c.pop16(); return;
L16b7d:
    if (c.tracing) c.traceAt(0x16b7d);
    // 1501:1b6d  mov word ptr [0xadc8], 0xff57  [x1]
    c.w16(c.dsb + (uint32_t)(0xadc8u), 0xff57u);
    // 1501:1b76  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L16b88:
    if (c.tracing) c.traceAt(0x16b88);
    // 1501:1b78  mov cx, 0x40  [x338]
    c.c.x = (uint16_t)(0x40u);
    // 1501:1b7b  mov word ptr [0xadca], 1  [x338]
    c.w16(c.dsb + (uint32_t)(0xadcau), 0x1u);
    // 1501:1b84  xor dx, dx  [x338]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1b86  mov ax, word ptr [0xadc8]  [x338]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadc8u)));
    // 1501:1b8c  cmp word ptr [0xadc8], 0  [x338]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadc8u)), 0x0u, true);
    // 1501:1b94  jns 0x1bbc  [x338]
    if (!c.sf) goto L16bcc;
L16ba6:
    if (c.tracing) c.traceAt(0x16ba6);
    // 1501:1b96  not dx  [x169]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:1b98  neg word ptr [0xadca]  [x169]
    c.w16(c.dsb + (uint32_t)(0xadcau), c.neg<16>(c.r16(c.dsb + (uint32_t)(0xadcau)), false));
    // 1501:1b9f  idiv cx  [x169]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1b9fu); }   // #DE: int 0, then again
    // 1501:1ba1  mov word ptr [0xadcc], ax  [x169]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1ba7  neg dx  [x169]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:1ba9  mov word ptr [0xadce], dx  [x169]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1bb0  neg ax  [x169]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:1bb2  sar ax, 1  [x169]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:1bb4  mov word ptr [0xadd0], ax  [x169]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.a.x);
    // 1501:1bba  jmp 0x1bd4  [x169]
    goto L16be4;
L16bcc:
    if (c.tracing) c.traceAt(0x16bcc);
    // 1501:1bbc  idiv cx  [x169]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1bbcu); }   // #DE: int 0, then again
    // 1501:1bbe  mov word ptr [0xadcc], ax  [x169]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1bc4  mov word ptr [0xadce], dx  [x169]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1bcb  mov word ptr [0xadd0], 0  [x169]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0x0u);
L16be4:
    if (c.tracing) c.traceAt(0x16be4);
    // 1501:1bd4  xor bx, bx  [x338]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:1bd6  mov cx, 0x40  [x338]
    c.c.x = (uint16_t)(0x40u);
L16be9:
    if (c.tracing) c.traceAt(0x16be9);
    // 1501:1bd9  mov dx, 0  [x21632]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:1bdc  add dx, word ptr [0xadcc]  [x21632]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1be3  mov ax, word ptr [0xadce]  [x21632]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
    // 1501:1be9  add word ptr [0xadd0], ax  [x21632]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.a.x, false));
    // 1501:1bf0  cmp word ptr [0xadd0], 0x40  [x21632]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x40u, true);
    // 1501:1bf8  jl 0x1c09  [x21632]
    if ((c.sf != c.of)) goto L16c19;
L16c0a:
    if (c.tracing) c.traceAt(0x16c0a);
    // 1501:1bfa  sub word ptr [0xadd0], 0x40  [x9745]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x40u, false));
    // 1501:1c02  add dx, word ptr [0xadca]  [x9745]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(0xadcau)), true));
L16c19:
    if (c.tracing) c.traceAt(0x16c19);
    // 1501:1c09  mov word ptr [bx + di + 0x4c8], dx  [x21632]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0x4c8u), c.dx_.x);
    // 1501:1c0d  add bx, 2  [x21632]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:1c10  loop 0x1bd9  [x21632]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16be9;
L16c22:
    if (c.tracing) c.traceAt(0x16c22);
    // 1501:1c12  add di, 0x80  [x338]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x80u, false));
    // 1501:1c16  inc word ptr [0xadc8]  [x338]
    c.w16(c.dsb + (uint32_t)(0xadc8u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xadc8u)), false));
    // 1501:1c1d  cmp di, 0xa900  [x338]
    c.sub<16>(c.di.x, 0xa900u, true);
    // 1501:1c21  jb 0x1b78  [x338]
    if (c.cf) goto L16b88;
L16c35:
    if (c.tracing) c.traceAt(0x16c35);
    // 1501:1c25  ret   [x1]
    c.ip = c.pop16(); return;
L16c36:
    if (c.tracing) c.traceAt(0x16c36);
    // 1501:1c26  xor di, di  [x4]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:1c28  xor si, si  [x4]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:1c2a  mov bx, word ptr [0x322]  [x4]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x322u)));
L16c41:
    if (c.tracing) c.traceAt(0x16c41);
    // 1501:1c31  mov ax, word ptr [bx - 0x5211]  [x176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffffadefu)));
    // 1501:1c35  sub ax, word ptr [si - 0x5211]  [x176]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffadefu)), false));
    // 1501:1c39  add ax, 0xa9  [x176]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa9u, false));
    // 1501:1c3c  shl ax, 7  [x176]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:1c3f  mov word ptr [di + 0x328], ax  [x176]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x328u), c.a.x);
    // 1501:1c43  mov ax, word ptr [bx - 0x45e1]  [x176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffffba1fu)));
    // 1501:1c47  sub ax, word ptr [si - 0x45e1]  [x176]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffba1fu)), false));
    // 1501:1c4b  add ax, 0xa9  [x176]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa9u, false));
    // 1501:1c4e  shl ax, 7  [x176]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:1c51  mov word ptr [di + 0x380], ax  [x176]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x380u), c.a.x);
    // 1501:1c55  add si, 6  [x176]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:1c58  add bx, 6  [x176]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x6u, false));
    // 1501:1c5b  add di, 2  [x176]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:1c5e  cmp si, 0x108  [x176]
    c.sub<16>(c.si.x, 0x108u, true);
    // 1501:1c62  jb 0x1c31  [x176]
    if (c.cf) goto L16c41;
L16c74:
    if (c.tracing) c.traceAt(0x16c74);
    // 1501:1c64  xor di, di  [x4]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:1c66  xor si, si  [x4]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:1c68  mov bx, word ptr [0x324]  [x4]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x324u)));
L16c7f:
    if (c.tracing) c.traceAt(0x16c7f);
    // 1501:1c6f  mov ax, word ptr [bx - 0x40bd]  [x240]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffffbf43u)));
    // 1501:1c73  sub ax, word ptr [si - 0x40bd]  [x240]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffbf43u)), false));
    // 1501:1c77  add ax, 0xa9  [x240]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa9u, false));
    // 1501:1c7a  shl ax, 7  [x240]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:1c7d  mov word ptr [di + 0x3d8], ax  [x240]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x3d8u), c.a.x);
    // 1501:1c81  mov ax, word ptr [bx - 0x40bb]  [x240]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffffbf45u)));
    // 1501:1c85  sub ax, word ptr [si - 0x40bb]  [x240]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffbf45u)), false));
    // 1501:1c89  add ax, 0xa9  [x240]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa9u, false));
    // 1501:1c8c  shl ax, 7  [x240]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:1c8f  mov word ptr [di + 0x3da], ax  [x240]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x3dau), c.a.x);
    // 1501:1c93  add si, 6  [x240]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:1c96  add bx, 6  [x240]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x6u, false));
    // 1501:1c99  add di, 4  [x240]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:1c9c  cmp si, 0x168  [x240]
    c.sub<16>(c.si.x, 0x168u, true);
    // 1501:1ca0  jb 0x1c6f  [x240]
    if (c.cf) goto L16c7f;
L16cb2:
    if (c.tracing) c.traceAt(0x16cb2);
    // 1501:1ca2  add word ptr [0x322], 0x108  [x4]
    c.w16(c.dsb + (uint32_t)(0x322u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x322u)), 0x108u, false));
    // 1501:1cab  add word ptr [0x324], 0x168  [x4]
    c.w16(c.dsb + (uint32_t)(0x324u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x324u)), 0x168u, true));
    // 1501:1cb4  ret   [x4]
    c.ip = c.pop16(); return;
L16cc5:
    if (c.tracing) c.traceAt(0x16cc5);
    // 1501:1cb5  xor si, si  [x256]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:1cb7  xor di, di  [x256]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L16cc9:
    if (c.tracing) c.traceAt(0x16cc9);
    // 1501:1cb9  mov bx, word ptr [si + 0x328]  [x11264]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x328u)));
    // 1501:1cbd  mov ax, word ptr [bx + 0x4c8]  [x11264]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x4c8u)));
    // 1501:1cc1  add word ptr [di - 0x5211], ax  [x11264]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffadefu)), c.a.x, false));
    // 1501:1cc5  add word ptr [si + 0x328], 2  [x11264]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x328u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x328u)), 0x2u, false));
    // 1501:1cca  mov bx, word ptr [si + 0x380]  [x11264]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x380u)));
    // 1501:1cce  mov ax, word ptr [bx + 0x4c8]  [x11264]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x4c8u)));
    // 1501:1cd2  add word ptr [di - 0x45e1], ax  [x11264]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffba1fu)), c.a.x, false));
    // 1501:1cd6  add word ptr [si + 0x380], 2  [x11264]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x380u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x380u)), 0x2u, false));
    // 1501:1cdb  add si, 2  [x11264]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:1cde  add di, 6  [x11264]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:1ce1  cmp si, 0x58  [x11264]
    c.sub<16>(c.si.x, 0x58u, true);
    // 1501:1ce4  jb 0x1cb9  [x11264]
    if (c.cf) goto L16cc9;
L16cf6:
    if (c.tracing) c.traceAt(0x16cf6);
    // 1501:1ce6  xor si, si  [x256]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:1ce8  xor di, di  [x256]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L16cfa:
    if (c.tracing) c.traceAt(0x16cfa);
    // 1501:1cea  mov bx, word ptr [si + 0x3d8]  [x15360]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3d8u)));
    // 1501:1cee  mov ax, word ptr [bx + 0x4c8]  [x15360]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x4c8u)));
    // 1501:1cf2  add word ptr [di - 0x40bd], ax  [x15360]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffbf43u)), c.a.x, false));
    // 1501:1cf6  add word ptr [si + 0x3d8], 2  [x15360]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x3d8u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3d8u)), 0x2u, false));
    // 1501:1cfb  mov bx, word ptr [si + 0x3da]  [x15360]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3dau)));
    // 1501:1cff  mov ax, word ptr [bx + 0x4c8]  [x15360]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x4c8u)));
    // 1501:1d03  add word ptr [di - 0x40bb], ax  [x15360]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf45u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffffbf45u)), c.a.x, false));
    // 1501:1d07  add word ptr [si + 0x3da], 2  [x15360]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x3dau), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3dau)), 0x2u, false));
    // 1501:1d0c  add si, 4  [x15360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:1d0f  add di, 6  [x15360]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:1d12  cmp si, 0xf0  [x15360]
    c.sub<16>(c.si.x, 0xf0u, true);
    // 1501:1d16  jb 0x1cea  [x15360]
    if (c.cf) goto L16cfa;
L16d28:
    if (c.tracing) c.traceAt(0x16d28);
    // 1501:1d18  ret   [x256]
    c.ip = c.pop16(); return;
L16d29:
    if (c.tracing) c.traceAt(0x16d29);
    // 1501:1d19  mov bx, 0x186  [x3]
    c.b.x = (uint16_t)(0x186u);
    // 1501:1d1c  xor si, si  [x3]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:1d1e  mov cx, 0x3c  [x3]
    c.c.x = (uint16_t)(0x3cu);
L16d31:
    if (c.tracing) c.traceAt(0x16d31);
    // 1501:1d21  push si  [x180]
    c.push16(c.si.x);
    // 1501:1d22  shr si, 4  [x180]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x4u) & 31), false));
    // 1501:1d25  and si, 0xfffc  [x180]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0xfffcu), false));
    // 1501:1d28  mov ax, word ptr [si - 0x4ced]  [x180]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:1d2c  cdq   [x180]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1d2d  idiv bx  [x180]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x1d2du); }   // #DE: int 0, then again
    // 1501:1d2f  mov word ptr [di - 0x40bb], ax  [x180]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf45u), c.a.x);
    // 1501:1d33  mov ax, word ptr [si - 0x4b85]  [x180]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb47bu)));
    // 1501:1d37  cdq   [x180]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1d38  idiv bx  [x180]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x1d38u); }   // #DE: int 0, then again
    // 1501:1d3a  mov word ptr [di - 0x40bd], ax  [x180]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf43u), c.a.x);
    // 1501:1d3e  mov word ptr [di - 0x40b9], 0  [x180]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf47u), 0x0u);
    // 1501:1d44  pop si  [x180]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1d45  add si, 0xc0  [x180]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xc0u, false));
    // 1501:1d49  add di, 6  [x180]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1d4c  loop 0x1d21  [x180]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16d31;
L16d5e:
    if (c.tracing) c.traceAt(0x16d5e);
    // 1501:1d4e  ret   [x3]
    c.ip = c.pop16(); return;
L16d5f:
    if (c.tracing) c.traceAt(0x16d5f);
    // 1501:1d4f  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1d52  dec cx  [x1]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 1501:1d53  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1d55  mov ax, 0x96  [x1]
    c.a.x = (uint16_t)(0x96u);
    // 1501:1d58  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1d58u); }   // #DE: int 0, then again
    // 1501:1d5a  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1d60  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1d67  mov word ptr [0xadd0], 0xf  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0xfu);
    // 1501:1d70  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1d73  mov ax, 0xffb5  [x1]
    c.a.x = (uint16_t)(0xffb5u);
    // 1501:1d76  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
L16d8d:
    if (c.tracing) c.traceAt(0x16d8d);
    // 1501:1d7d  mov word ptr [di - 0x40bd], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf43u), c.a.x);
    // 1501:1d81  mov word ptr [di - 0x40bb], 0xffb5  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf45u), 0xffb5u);
    // 1501:1d87  mov word ptr [di - 0x4009], 0xffb5  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbff7u), 0xffb5u);
    // 1501:1d8d  mov word ptr [di - 0x4007], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbff9u), c.a.x);
    // 1501:1d91  add ax, word ptr [0xadcc]  [x30]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1d98  add word ptr [0xadd0], dx  [x30]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1d9f  cmp word ptr [0xadd0], 0x1e  [x30]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true);
    // 1501:1da7  jl 0x1db2  [x30]
    if ((c.sf != c.of)) goto L16dc2;
L16db9:
    if (c.tracing) c.traceAt(0x16db9);
    // 1501:1da9  sub word ptr [0xadd0], 0x1e  [x5]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true));
    // 1501:1db1  inc ax  [x5]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L16dc2:
    if (c.tracing) c.traceAt(0x16dc2);
    // 1501:1db2  add di, 6  [x30]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1db5  loop 0x1d7d  [x30]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16d8d;
L16dc7:
    if (c.tracing) c.traceAt(0x16dc7);
    // 1501:1db7  ret   [x1]
    c.ip = c.pop16(); return;
L16dc8:
    if (c.tracing) c.traceAt(0x16dc8);
    // 1501:1db8  push di  [x1]
    c.push16(c.di.x);
    // 1501:1db9  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1dbc  dec cx  [x1]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 1501:1dbd  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1dbf  mov ax, 0xa0  [x1]
    c.a.x = (uint16_t)(0xa0u);
    // 1501:1dc2  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1dc2u); }   // #DE: int 0, then again
    // 1501:1dc4  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1dca  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1dd1  mov word ptr [0xadd0], 0xf  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0xfu);
    // 1501:1dda  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1ddd  mov ax, 0xffb0  [x1]
    c.a.x = (uint16_t)(0xffb0u);
    // 1501:1de0  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
L16df7:
    if (c.tracing) c.traceAt(0x16df7);
    // 1501:1de7  mov word ptr [di - 0x40bb], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf45u), c.a.x);
    // 1501:1deb  mov word ptr [di - 0x4009], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbff7u), c.a.x);
    // 1501:1def  add ax, word ptr [0xadcc]  [x30]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1df6  add word ptr [0xadd0], dx  [x30]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1dfd  cmp word ptr [0xadd0], 0x1e  [x30]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true);
    // 1501:1e05  jl 0x1e10  [x30]
    if ((c.sf != c.of)) goto L16e20;
L16e17:
    if (c.tracing) c.traceAt(0x16e17);
    // 1501:1e07  sub word ptr [0xadd0], 0x1e  [x15]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true));
    // 1501:1e0f  inc ax  [x15]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L16e20:
    if (c.tracing) c.traceAt(0x16e20);
    // 1501:1e10  add di, 6  [x30]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1e13  loop 0x1de7  [x30]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16df7;
L16e25:
    if (c.tracing) c.traceAt(0x16e25);
    // 1501:1e15  pop di  [x1]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1e16  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1e19  dec cx  [x1]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 1501:1e1a  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1e1c  mov ax, 0x50  [x1]
    c.a.x = (uint16_t)(0x50u);
    // 1501:1e1f  idiv cx  [x1]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1e1fu); }   // #DE: int 0, then again
    // 1501:1e21  mov word ptr [0xadcc], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0xadccu), c.a.x);
    // 1501:1e27  mov word ptr [0xadce], dx  [x1]
    c.w16(c.dsb + (uint32_t)(0xadceu), c.dx_.x);
    // 1501:1e2e  mov word ptr [0xadd0], 0xf  [x1]
    c.w16(c.dsb + (uint32_t)(0xadd0u), 0xfu);
    // 1501:1e37  mov cx, 0x1e  [x1]
    c.c.x = (uint16_t)(0x1eu);
    // 1501:1e3a  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:1e3d  mov dx, word ptr [0xadce]  [x1]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xadceu)));
L16e54:
    if (c.tracing) c.traceAt(0x16e54);
    // 1501:1e44  mov bx, ax  [x30]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1e46  neg bx  [x30]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:1e48  mov word ptr [di - 0x40bd], ax  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbf43u), c.a.x);
    // 1501:1e4c  mov word ptr [di - 0x4007], bx  [x30]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffffbff9u), c.b.x);
    // 1501:1e50  sub ax, word ptr [0xadcc]  [x30]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0xadccu)), false));
    // 1501:1e57  add word ptr [0xadd0], dx  [x30]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), c.dx_.x, false));
    // 1501:1e5e  cmp word ptr [0xadd0], 0x1e  [x30]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true);
    // 1501:1e66  jl 0x1e71  [x30]
    if ((c.sf != c.of)) goto L16e81;
L16e78:
    if (c.tracing) c.traceAt(0x16e78);
    // 1501:1e68  sub word ptr [0xadd0], 0x1e  [x22]
    c.w16(c.dsb + (uint32_t)(0xadd0u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xadd0u)), 0x1eu, true));
    // 1501:1e70  dec ax  [x22]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
L16e81:
    if (c.tracing) c.traceAt(0x16e81);
    // 1501:1e71  add di, 6  [x30]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, true));
    // 1501:1e74  loop 0x1e44  [x30]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16e54;
L16e86:
    if (c.tracing) c.traceAt(0x16e86);
    // 1501:1e76  ret   [x1]
    c.ip = c.pop16(); return;
L16e87:
    if (c.tracing) c.traceAt(0x16e87);
    // 1501:1e77  mov ax, word ptr cs:[0x15]  [x1832]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x15u)));
    // 1501:1e7b  add ax, word ptr cs:[0x21]  [x1832]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x21u)), false));
    // 1501:1e80  mov word ptr cs:[0x17], ax  [x1832]
    c.w16(c.csb + (uint16_t)(0x17u), c.a.x);
    // 1501:1e84  mov ax, word ptr cs:[0x1b]  [x1832]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1bu)));
    // 1501:1e88  add ax, word ptr cs:[0x21]  [x1832]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x21u)), false));
    // 1501:1e8d  mov word ptr cs:[0x1d], ax  [x1832]
    c.w16(c.csb + (uint16_t)(0x1du), c.a.x);
    // 1501:1e91  push es  [x1832]
    c.push16(c.es);
    // 1501:1e92  mov ax, 0xa000  [x1832]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:1e95  mov es, ax  [x1832]
    c.loadEs(c.a.x);
    // 1501:1e97  mov dx, 0x3c4  [x1832]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:1e9a  mov ax, 0x402  [x1832]
    c.a.x = (uint16_t)(0x402u);
    // 1501:1e9d  out dx, ax  [x1832]
    c.ip = 0x1e9eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1e9e  mov cx, word ptr cs:[0x17]  [x1832]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x17u)));
    // 1501:1ea3  sub cx, word ptr cs:[0x19]  [x1832]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.csb + (uint16_t)(0x19u)), true));
    // 1501:1ea8  je 0x1ee4  [x1832]
    if (c.zf) goto L16ef4;
L16eba:
    if (c.tracing) c.traceAt(0x16eba);
    // 1501:1eaa  js 0x1ebc  [x521]
    if (c.sf) goto L16ecc;
L16ebc:
    if (c.tracing) c.traceAt(0x16ebc);
    // 1501:1eac  mov di, word ptr cs:[0x19]  [x231]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19u)));
    // 1501:1eb1  shl di, 6  [x231]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x6u) & 31), false));
    // 1501:1eb4  add di, 7  [x231]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, true));
    // 1501:1eb7  mov ax, 0xffff  [x231]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:1eba  jmp 0x1ecb  [x231]
    goto L16edb;
L16ecc:
    if (c.tracing) c.traceAt(0x16ecc);
    // 1501:1ebc  mov di, word ptr cs:[0x17]  [x290]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x17u)));
    // 1501:1ec1  shl di, 6  [x290]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x6u) & 31), false));
    // 1501:1ec4  add di, 7  [x290]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, false));
    // 1501:1ec7  neg cx  [x290]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:1ec9  xor ax, ax  [x290]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L16edb:
    if (c.tracing) c.traceAt(0x16edb);
    // 1501:1ecb  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ecc  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ecd  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ece  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ecf  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed0  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed1  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed2  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed3  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed4  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed5  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed6  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed7  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed8  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ed9  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1eda  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1edb  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1edc  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1edd  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1ede  stosw word ptr es:[di], ax  [x1246]
    c.stos<16, false>(0);
    // 1501:1edf  add di, 0x18  [x1246]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x18u, true));
    // 1501:1ee2  loop 0x1ecb  [x1246]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16edb;
L16ef4:
    if (c.tracing) c.traceAt(0x16ef4);
    // 1501:1ee4  mov dx, 0x3c4  [x1832]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:1ee7  mov ax, 0x802  [x1832]
    c.a.x = (uint16_t)(0x802u);
    // 1501:1eea  out dx, ax  [x1832]
    c.ip = 0x1eebu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1eeb  mov cx, word ptr cs:[0x1f]  [x1832]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1fu)));
    // 1501:1ef0  sub cx, word ptr cs:[0x1d]  [x1832]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.csb + (uint16_t)(0x1du)), true));
    // 1501:1ef5  je 0x1f31  [x1832]
    if (c.zf) goto L16f41;
L16f07:
    if (c.tracing) c.traceAt(0x16f07);
    // 1501:1ef7  js 0x1f09  [x472]
    if (c.sf) goto L16f19;
L16f09:
    if (c.tracing) c.traceAt(0x16f09);
    // 1501:1ef9  mov di, word ptr cs:[0x1d]  [x240]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1du)));
    // 1501:1efe  shl di, 6  [x240]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x6u) & 31), false));
    // 1501:1f01  add di, 7  [x240]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, true));
    // 1501:1f04  mov ax, 0xffff  [x240]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:1f07  jmp 0x1f18  [x240]
    goto L16f28;
L16f19:
    if (c.tracing) c.traceAt(0x16f19);
    // 1501:1f09  mov di, word ptr cs:[0x1f]  [x232]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1fu)));
    // 1501:1f0e  shl di, 6  [x232]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x6u) & 31), false));
    // 1501:1f11  add di, 7  [x232]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, false));
    // 1501:1f14  neg cx  [x232]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:1f16  xor ax, ax  [x232]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L16f28:
    if (c.tracing) c.traceAt(0x16f28);
    // 1501:1f18  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f19  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1a  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1b  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1c  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1d  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1e  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f1f  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f20  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f21  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f22  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f23  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f24  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f25  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f26  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f27  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f28  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f29  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f2a  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f2b  stosw word ptr es:[di], ax  [x1110]
    c.stos<16, false>(0);
    // 1501:1f2c  add di, 0x18  [x1110]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x18u, true));
    // 1501:1f2f  loop 0x1f18  [x1110]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16f28;
L16f41:
    if (c.tracing) c.traceAt(0x16f41);
    // 1501:1f31  mov ax, word ptr cs:[0x17]  [x1832]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x17u)));
    // 1501:1f35  mov word ptr cs:[0x19], ax  [x1832]
    c.w16(c.csb + (uint16_t)(0x19u), c.a.x);
    // 1501:1f39  mov ax, word ptr cs:[0x1d]  [x1832]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1du)));
    // 1501:1f3d  mov word ptr cs:[0x1f], ax  [x1832]
    c.w16(c.csb + (uint16_t)(0x1fu), c.a.x);
    // 1501:1f41  pop es  [x1832]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1f42  ret   [x1832]
    c.ip = c.pop16(); return;
L16f53:
    if (c.tracing) c.traceAt(0x16f53);
    // 1501:1f43  mov dx, 0x3da  [x1832]
    c.dx_.x = (uint16_t)(0x3dau);
L16f56:
    if (c.tracing) c.traceAt(0x16f56);
    // 1501:1f46  in ax, dx  [x5845]
    c.ip = 0x1f47u; c.d32 = false; c.a.x = c.in16(c.dx_.x);
L16f57:
    if (c.tracing) c.traceAt(0x16f57);
    // 1501:1f47  and al, 8  [x7793]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:1f49  jne 0x1f46  [x7793]
    if (!c.zf) goto L16f56;
L16f5b:
    if (c.tracing) c.traceAt(0x16f5b);
    // 1501:1f4b  in ax, dx  [x4482203]
    c.ip = 0x1f4cu; c.d32 = false; c.a.x = c.in16(c.dx_.x);
L16f5c:
    if (c.tracing) c.traceAt(0x16f5c);
    // 1501:1f4c  and al, 8  [x5975660]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:1f4e  je 0x1f4b  [x5975660]
    if (c.zf) goto L16f5b;
L16f60:
    if (c.tracing) c.traceAt(0x16f60);
    // 1501:1f50  ret   [x1832]
    c.ip = c.pop16(); return;
L16f61:
    if (c.tracing) c.traceAt(0x16f61);
    // 1501:1f51  mov word ptr cs:[0x13], 0x168  [x1]
    c.w16(c.csb + (uint16_t)(0x13u), 0x168u);
L16f68:
    if (c.tracing) c.traceAt(0x16f68);
    // 1501:1f58  call 0x1f43  [x180]
    c.push16(0x1f5bu); code_21(c, 0x16f53u); if (c.ip != 0x1f5bu) c.badReturn(0x16f68);
L16f6b:
    if (c.tracing) c.traceAt(0x16f6b);
    // 1501:1f5b  call 0x1e77  [x180]
    c.push16(0x1f5eu); code_21(c, 0x16e87u); if (c.ip != 0x1f5eu) c.badReturn(0x16f6b);
L16f6e:
    if (c.tracing) c.traceAt(0x16f6e);
    // 1501:1f5e  mov si, word ptr cs:[0x13]  [x180]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x13u)));
    // 1501:1f63  mov ax, word ptr [si - 0x4ced]  [x180]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffb313u)));
    // 1501:1f67  cdq   [x180]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:1f68  mov bx, 0x222  [x180]
    c.b.x = (uint16_t)(0x222u);
    // 1501:1f6b  idiv bx  [x180]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x1f6bu); }   // #DE: int 0, then again
    // 1501:1f6d  add ax, 0x96  [x180]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x96u, false));
    // 1501:1f70  mov word ptr cs:[0x15], ax  [x180]
    c.w16(c.csb + (uint16_t)(0x15u), c.a.x);
    // 1501:1f74  inc ax  [x180]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:1f75  mov word ptr cs:[0x1b], ax  [x180]
    c.w16(c.csb + (uint16_t)(0x1bu), c.a.x);
    // 1501:1f79  add word ptr cs:[0x13], 6  [x180]
    c.w16(c.csb + (uint16_t)(0x13u), c.add<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x6u, false));
    // 1501:1f7f  cmp word ptr cs:[0x13], 0x5a0  [x180]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x5a0u, true);
    // 1501:1f86  jb 0x1f8f  [x180]
    if (c.cf) goto L16f9f;
L16f98:
    if (c.tracing) c.traceAt(0x16f98);
    // 1501:1f88  sub word ptr cs:[0x13], 0x5a0  [x1]
    c.w16(c.csb + (uint16_t)(0x13u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x13u)), 0x5a0u, true));
L16f9f:
    if (c.tracing) c.traceAt(0x16f9f);
    // 1501:1f8f  inc word ptr [0xc748]  [x180]
    c.w16(c.dsb + (uint32_t)(0xc748u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), false));
    // 1501:1f96  cmp word ptr [0xc748], 0xb4  [x180]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xc748u)), 0xb4u, true);
    // 1501:1f9f  jb 0x1f58  [x180]
    if (c.cf) goto L16f68;
L16fb1:
    if (c.tracing) c.traceAt(0x16fb1);
    // 1501:1fa1  mov word ptr [0xc748], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0xc748u), 0x0u);
    // 1501:1faa  mov word ptr cs:[0x13], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x13u), 0x0u);
    // 1501:1fb1  ret   [x1]
    c.ip = c.pop16(); return;
L16fc2:
    if (c.tracing) c.traceAt(0x16fc2);
    // 1501:1fb2  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_21(21, {0x15010, 0x15035, 0x1504a, 0x1504c, 0x1505d, 0x15060, 0x15062, 0x1506b, 0x15080, 0x15082, 0x1509b, 0x150a4, 0x150b0, 0x150b2, 0x150be, 0x150c1, 0x150c4, 0x150c7, 0x150e2, 0x150f9, 0x15110, 0x15114, 0x1511e, 0x15121, 0x15123, 0x1512c, 0x1512f, 0x15132, 0x1513a, 0x1514d, 0x15156, 0x15169, 0x15172, 0x1517a, 0x15181, 0x15193, 0x1519e, 0x151a9, 0x151b4, 0x151c0, 0x151ca, 0x151d4, 0x151df, 0x151e2, 0x151ed, 0x151f4, 0x151fe, 0x1520f, 0x15211, 0x1521c, 0x1522d, 0x1522f, 0x1523a, 0x15245, 0x15250, 0x1525d, 0x15268, 0x15291, 0x15298, 0x152d3, 0x152da, 0x152e5, 0x152ec, 0x152f7, 0x15319, 0x15320, 0x15322, 0x15333, 0x15339, 0x1536e, 0x15375, 0x15393, 0x15396, 0x1539d, 0x15427, 0x1542a, 0x1542b, 0x15432, 0x154bf, 0x154c2, 0x154c3, 0x154c6, 0x154c8, 0x1568f, 0x15691, 0x15850, 0x15852, 0x15a12, 0x15a17, 0x15bd5, 0x15bd8, 0x15d97, 0x15f58, 0x1611a, 0x162dd, 0x1649f, 0x16660, 0x167b1, 0x167b2, 0x167bb, 0x167c4, 0x167cd, 0x167d6, 0x167df, 0x167e0, 0x167e4, 0x167eb, 0x1681a, 0x1681b, 0x1681f, 0x16827, 0x16854, 0x16883, 0x1689f, 0x168a8, 0x168ad, 0x168b0, 0x168b9, 0x168c0, 0x168c9, 0x168f6, 0x16912, 0x1691b, 0x16920, 0x16921, 0x16925, 0x1692c, 0x16959, 0x1695a, 0x1695e, 0x1698d, 0x169a9, 0x169b2, 0x169b7, 0x169e5, 0x16a01, 0x16a0a, 0x16a0f, 0x16a10, 0x16a14, 0x16a19, 0x16a2a, 0x16a59, 0x16a75, 0x16a7e, 0x16a83, 0x16ab1, 0x16acd, 0x16ad6, 0x16adb, 0x16adc, 0x16b08, 0x16b15, 0x16b1a, 0x16b1e, 0x16b2c, 0x16b33, 0x16b34, 0x16b3c, 0x16b7c, 0x16b7d, 0x16b88, 0x16ba6, 0x16bcc, 0x16be4, 0x16be9, 0x16c0a, 0x16c19, 0x16c22, 0x16c35, 0x16c36, 0x16c41, 0x16c74, 0x16c7f, 0x16cb2, 0x16cc5, 0x16cc9, 0x16cf6, 0x16cfa, 0x16d28, 0x16d29, 0x16d31, 0x16d5e, 0x16d5f, 0x16d8d, 0x16db9, 0x16dc2, 0x16dc7, 0x16dc8, 0x16df7, 0x16e17, 0x16e20, 0x16e25, 0x16e54, 0x16e78, 0x16e81, 0x16e86, 0x16e87, 0x16eba, 0x16ebc, 0x16ecc, 0x16edb, 0x16ef4, 0x16f07, 0x16f09, 0x16f19, 0x16f28, 0x16f41, 0x16f53, 0x16f56, 0x16f57, 0x16f5b, 0x16f5c, 0x16f60, 0x16f61, 0x16f68, 0x16f6b, 0x16f6e, 0x16f98, 0x16f9f, 0x16fb1, 0x16fc2}, code_21);

}  // namespace show
