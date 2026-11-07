// Part 12 (C.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_13(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15346: goto L15346;
    case 0x15375: goto L15375;
    case 0x15377: goto L15377;
    case 0x1538b: goto L1538b;
    case 0x1538d: goto L1538d;
    case 0x1539a: goto L1539a;
    case 0x153a1: goto L153a1;
    case 0x153a9: goto L153a9;
    case 0x153ac: goto L153ac;
    case 0x153af: goto L153af;
    case 0x153b2: goto L153b2;
    case 0x153b7: goto L153b7;
    case 0x153cc: goto L153cc;
    case 0x153dd: goto L153dd;
    case 0x153e7: goto L153e7;
    case 0x153ff: goto L153ff;
    case 0x15406: goto L15406;
    case 0x15409: goto L15409;
    case 0x15411: goto L15411;
    case 0x15414: goto L15414;
    case 0x1541b: goto L1541b;
    case 0x1541e: goto L1541e;
    case 0x15425: goto L15425;
    case 0x1542d: goto L1542d;
    case 0x1543a: goto L1543a;
    case 0x1543c: goto L1543c;
    case 0x15447: goto L15447;
    case 0x15449: goto L15449;
    case 0x15458: goto L15458;
    case 0x1546a: goto L1546a;
    case 0x15477: goto L15477;
    case 0x15479: goto L15479;
    case 0x15488: goto L15488;
    case 0x1549a: goto L1549a;
    case 0x1549d: goto L1549d;
    case 0x154a0: goto L154a0;
    case 0x154a3: goto L154a3;
    case 0x154a6: goto L154a6;
    case 0x154ca: goto L154ca;
    case 0x154d7: goto L154d7;
    case 0x154dd: goto L154dd;
    case 0x154f4: goto L154f4;
    case 0x15518: goto L15518;
    case 0x1551d: goto L1551d;
    case 0x15525: goto L15525;
    case 0x1552b: goto L1552b;
    case 0x15533: goto L15533;
    case 0x1553e: goto L1553e;
    case 0x15540: goto L15540;
    case 0x15562: goto L15562;
    case 0x15567: goto L15567;
    case 0x1556f: goto L1556f;
    case 0x15580: goto L15580;
    case 0x15583: goto L15583;
    case 0x155a2: goto L155a2;
    case 0x155ab: goto L155ab;
    case 0x155b0: goto L155b0;
    case 0x155cf: goto L155cf;
    case 0x155d1: goto L155d1;
    case 0x155e1: goto L155e1;
    case 0x155e6: goto L155e6;
    case 0x155e8: goto L155e8;
    case 0x155f4: goto L155f4;
    case 0x15601: goto L15601;
    case 0x15604: goto L15604;
    case 0x15605: goto L15605;
    case 0x15609: goto L15609;
    case 0x1560a: goto L1560a;
    case 0x1560e: goto L1560e;
    case 0x1560f: goto L1560f;
    case 0x15621: goto L15621;
    case 0x1563e: goto L1563e;
    case 0x15644: goto L15644;
    case 0x15647: goto L15647;
    case 0x1564a: goto L1564a;
    case 0x15650: goto L15650;
    case 0x15657: goto L15657;
    case 0x15660: goto L15660;
    case 0x15676: goto L15676;
    case 0x15677: goto L15677;
    case 0x15689: goto L15689;
    case 0x15695: goto L15695;
    case 0x156ae: goto L156ae;
    case 0x156c4: goto L156c4;
    case 0x156c5: goto L156c5;
    case 0x1592f: goto L1592f;
    case 0x15935: goto L15935;
    case 0x1595b: goto L1595b;
    case 0x1595e: goto L1595e;
    case 0x15964: goto L15964;
    case 0x15969: goto L15969;
    case 0x1596f: goto L1596f;
    case 0x15974: goto L15974;
    case 0x1597a: goto L1597a;
    case 0x1597f: goto L1597f;
    case 0x15985: goto L15985;
    case 0x1598a: goto L1598a;
    case 0x15990: goto L15990;
    case 0x15995: goto L15995;
    case 0x1599b: goto L1599b;
    case 0x159a0: goto L159a0;
    case 0x159a6: goto L159a6;
    case 0x159ab: goto L159ab;
    case 0x159b1: goto L159b1;
    case 0x159b6: goto L159b6;
    case 0x159bc: goto L159bc;
    case 0x159c1: goto L159c1;
    case 0x159c8: goto L159c8;
    case 0x159cd: goto L159cd;
    case 0x159d4: goto L159d4;
    case 0x159d9: goto L159d9;
    case 0x159e0: goto L159e0;
    case 0x159e5: goto L159e5;
    case 0x159ec: goto L159ec;
    case 0x159f1: goto L159f1;
    case 0x159f8: goto L159f8;
    case 0x159fd: goto L159fd;
    case 0x15a04: goto L15a04;
    case 0x15a09: goto L15a09;
    case 0x15a10: goto L15a10;
    case 0x15a15: goto L15a15;
    case 0x15a1c: goto L15a1c;
    case 0x15a21: goto L15a21;
    case 0x15a28: goto L15a28;
    case 0x15a2d: goto L15a2d;
    case 0x15a34: goto L15a34;
    case 0x15a39: goto L15a39;
    case 0x15a40: goto L15a40;
    case 0x15a45: goto L15a45;
    case 0x15a4c: goto L15a4c;
    case 0x15a51: goto L15a51;
    case 0x15a58: goto L15a58;
    case 0x15a5d: goto L15a5d;
    case 0x15a64: goto L15a64;
    case 0x15a69: goto L15a69;
    case 0x15a70: goto L15a70;
    case 0x15a75: goto L15a75;
    case 0x15a7c: goto L15a7c;
    case 0x15a81: goto L15a81;
    case 0x15a88: goto L15a88;
    case 0x15a8d: goto L15a8d;
    case 0x15a94: goto L15a94;
    case 0x15a99: goto L15a99;
    case 0x15aac: goto L15aac;
    case 0x15aaf: goto L15aaf;
    case 0x15ab5: goto L15ab5;
    case 0x15aba: goto L15aba;
    case 0x15ac0: goto L15ac0;
    case 0x15ac5: goto L15ac5;
    case 0x15acb: goto L15acb;
    case 0x15ad0: goto L15ad0;
    case 0x15ad6: goto L15ad6;
    case 0x15adb: goto L15adb;
    case 0x15ae1: goto L15ae1;
    case 0x15ae6: goto L15ae6;
    case 0x15aec: goto L15aec;
    case 0x15af1: goto L15af1;
    case 0x15af7: goto L15af7;
    case 0x15afc: goto L15afc;
    case 0x15b02: goto L15b02;
    case 0x15b07: goto L15b07;
    case 0x15b0d: goto L15b0d;
    case 0x15b12: goto L15b12;
    case 0x15b19: goto L15b19;
    case 0x15b1e: goto L15b1e;
    case 0x15b25: goto L15b25;
    case 0x15b2a: goto L15b2a;
    case 0x15b31: goto L15b31;
    case 0x15b36: goto L15b36;
    case 0x15b3d: goto L15b3d;
    case 0x15b42: goto L15b42;
    case 0x15b49: goto L15b49;
    case 0x15b4e: goto L15b4e;
    case 0x15b55: goto L15b55;
    case 0x15b5a: goto L15b5a;
    case 0x15b61: goto L15b61;
    case 0x15b66: goto L15b66;
    case 0x15b6d: goto L15b6d;
    case 0x15b72: goto L15b72;
    case 0x15b79: goto L15b79;
    case 0x15b7e: goto L15b7e;
    case 0x15b85: goto L15b85;
    case 0x15b8a: goto L15b8a;
    case 0x15b91: goto L15b91;
    case 0x15b96: goto L15b96;
    case 0x15b9d: goto L15b9d;
    case 0x15ba2: goto L15ba2;
    case 0x15ba9: goto L15ba9;
    case 0x15bae: goto L15bae;
    case 0x15bb5: goto L15bb5;
    case 0x15bba: goto L15bba;
    case 0x15bc1: goto L15bc1;
    case 0x15bc6: goto L15bc6;
    case 0x15bcd: goto L15bcd;
    case 0x15bd2: goto L15bd2;
    case 0x15bd9: goto L15bd9;
    case 0x15bde: goto L15bde;
    case 0x15be5: goto L15be5;
    case 0x15bea: goto L15bea;
    case 0x15bfd: goto L15bfd;
    case 0x15c00: goto L15c00;
    case 0x15c06: goto L15c06;
    case 0x15c0b: goto L15c0b;
    case 0x15c11: goto L15c11;
    case 0x15c16: goto L15c16;
    case 0x15c1c: goto L15c1c;
    case 0x15c21: goto L15c21;
    case 0x15c27: goto L15c27;
    case 0x15c2c: goto L15c2c;
    case 0x15c32: goto L15c32;
    case 0x15c37: goto L15c37;
    case 0x15c3d: goto L15c3d;
    case 0x15c42: goto L15c42;
    case 0x15c48: goto L15c48;
    case 0x15c4d: goto L15c4d;
    case 0x15c53: goto L15c53;
    case 0x15c58: goto L15c58;
    case 0x15c5e: goto L15c5e;
    case 0x15c63: goto L15c63;
    case 0x15c6a: goto L15c6a;
    case 0x15c6f: goto L15c6f;
    case 0x15c76: goto L15c76;
    case 0x15c7b: goto L15c7b;
    case 0x15c82: goto L15c82;
    case 0x15c87: goto L15c87;
    case 0x15c93: goto L15c93;
    case 0x15c9a: goto L15c9a;
    case 0x15c9f: goto L15c9f;
    case 0x15cab: goto L15cab;
    case 0x15cb2: goto L15cb2;
    case 0x15cb7: goto L15cb7;
    case 0x15cbe: goto L15cbe;
    case 0x15cc3: goto L15cc3;
    case 0x15cca: goto L15cca;
    case 0x15ccf: goto L15ccf;
    case 0x15cd6: goto L15cd6;
    case 0x15cdb: goto L15cdb;
    case 0x15ce2: goto L15ce2;
    case 0x15ce7: goto L15ce7;
    case 0x15cee: goto L15cee;
    case 0x15cf3: goto L15cf3;
    case 0x15cfa: goto L15cfa;
    case 0x15cff: goto L15cff;
    case 0x15d06: goto L15d06;
    case 0x15d0b: goto L15d0b;
    case 0x15d12: goto L15d12;
    case 0x15d17: goto L15d17;
    case 0x15d1e: goto L15d1e;
    case 0x15d23: goto L15d23;
    case 0x15d2a: goto L15d2a;
    case 0x15d2f: goto L15d2f;
    case 0x15d36: goto L15d36;
    case 0x15d3b: goto L15d3b;
    case 0x15d51: goto L15d51;
    case 0x15d5c: goto L15d5c;
    case 0x15d67: goto L15d67;
    case 0x15d72: goto L15d72;
    case 0x15d7d: goto L15d7d;
    case 0x15d88: goto L15d88;
    case 0x15d93: goto L15d93;
    case 0x15d9e: goto L15d9e;
    case 0x15da9: goto L15da9;
    case 0x15db4: goto L15db4;
    case 0x15dc0: goto L15dc0;
    case 0x15dcc: goto L15dcc;
    case 0x15dd8: goto L15dd8;
    case 0x15ddf: goto L15ddf;
    case 0x15de4: goto L15de4;
    case 0x15deb: goto L15deb;
    case 0x15df0: goto L15df0;
    case 0x15df7: goto L15df7;
    case 0x15dfc: goto L15dfc;
    case 0x15e03: goto L15e03;
    case 0x15e08: goto L15e08;
    case 0x15e0f: goto L15e0f;
    case 0x15e14: goto L15e14;
    case 0x15e1b: goto L15e1b;
    case 0x15e20: goto L15e20;
    case 0x15e27: goto L15e27;
    case 0x15e2c: goto L15e2c;
    case 0x15e33: goto L15e33;
    case 0x15e38: goto L15e38;
    case 0x15e3f: goto L15e3f;
    case 0x15e44: goto L15e44;
    case 0x15e4b: goto L15e4b;
    case 0x15e50: goto L15e50;
    case 0x15e57: goto L15e57;
    case 0x15e5c: goto L15e5c;
    case 0x15e63: goto L15e63;
    case 0x15e68: goto L15e68;
    case 0x15e6f: goto L15e6f;
    case 0x15e74: goto L15e74;
    case 0x15e7b: goto L15e7b;
    case 0x15e80: goto L15e80;
    case 0x15e87: goto L15e87;
    case 0x15e8c: goto L15e8c;
    case 0x15e91: goto L15e91;
    case 0x15e96: goto L15e96;
    case 0x15ed5: goto L15ed5;
    case 0x15ed6: goto L15ed6;
    case 0x15eda: goto L15eda;
    case 0x15f11: goto L15f11;
    case 0x15f1e: goto L15f1e;
    case 0x15f23: goto L15f23;
    case 0x15f78: goto L15f78;
    case 0x15f79: goto L15f79;
    case 0x15f7d: goto L15f7d;
    case 0x15f8b: goto L15f8b;
    case 0x15fac: goto L15fac;
    case 0x15fb5: goto L15fb5;
    case 0x15fbe: goto L15fbe;
    case 0x15ff8: goto L15ff8;
    case 0x16001: goto L16001;
    case 0x1600a: goto L1600a;
    case 0x16013: goto L16013;
    case 0x1604d: goto L1604d;
    case 0x16056: goto L16056;
    case 0x1605f: goto L1605f;
    case 0x16068: goto L16068;
    case 0x160a2: goto L160a2;
    case 0x160ab: goto L160ab;
    case 0x160b4: goto L160b4;
    case 0x160bd: goto L160bd;
    case 0x160f7: goto L160f7;
    case 0x160fa: goto L160fa;
    case 0x16105: goto L16105;
    case 0x16123: goto L16123;
    case 0x16125: goto L16125;
    case 0x16140: goto L16140;
    case 0x16151: goto L16151;
    case 0x1615f: goto L1615f;
    case 0x16169: goto L16169;
    case 0x1616c: goto L1616c;
    case 0x16176: goto L16176;
    case 0x16179: goto L16179;
    case 0x1617a: goto L1617a;
    case 0x16183: goto L16183;
    case 0x1618a: goto L1618a;
    case 0x16192: goto L16192;
    case 0x16195: goto L16195;
    case 0x161af: goto L161af;
    case 0x161ba: goto L161ba;
    case 0x161cb: goto L161cb;
    case 0x161d1: goto L161d1;
    case 0x161df: goto L161df;
    case 0x161e1: goto L161e1;
    case 0x161ee: goto L161ee;
    case 0x161ff: goto L161ff;
    case 0x16205: goto L16205;
    case 0x16213: goto L16213;
    case 0x16214: goto L16214;
    case 0x16224: goto L16224;
    case 0x16227: goto L16227;
    case 0x16234: goto L16234;
    case 0x16237: goto L16237;
    case 0x16238: goto L16238;
    case 0x16249: goto L16249;
    case 0x16250: goto L16250;
    case 0x16252: goto L16252;
    case 0x16255: goto L16255;
    case 0x1625a: goto L1625a;
    case 0x1626b: goto L1626b;
    case 0x16270: goto L16270;
    case 0x16272: goto L16272;
    case 0x16275: goto L16275;
    case 0x1627a: goto L1627a;
    case 0x1627d: goto L1627d;
    case 0x16285: goto L16285;
    case 0x16286: goto L16286;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x336  [x1]
    goto L15346;
L15346:
    if (c.tracing) c.traceAt(0x15346);
    // 1501:0336  mov word ptr cs:[0x332], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x332u), c.c.x);
    // 1501:033b  mov word ptr cs:[0x334], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x334u), c.dx_.x);
    // 1501:0340  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 1501:0342  mov word ptr cs:[0x328], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x328u), c.a.x);
    // 1501:0346  mov al, byte ptr [0x34]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x34u)));
    // 1501:0349  mov byte ptr [4], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x4u), c.a.l);
    // 1501:034c  mov al, byte ptr [0x35]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x35u)));
    // 1501:034f  mov byte ptr [5], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x5u), c.a.l);
    // 1501:0352  mov al, byte ptr [0x36]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x36u)));
    // 1501:0355  mov byte ptr [6], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x6u), c.a.l);
    // 1501:0358  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:035b  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:035d  out dx, al  [x1]
    c.ip = 0x35eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:035e  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:035f  mov si, 4  [x1]
    c.si.x = (uint16_t)(0x4u);
    // 1501:0362  mov cx, 3  [x1]
    c.c.x = (uint16_t)(0x3u);
L15375:
    if (c.tracing) c.traceAt(0x15375);
    // 1501:0365  rep outsb dx, byte ptr [si]  [x4]
    c.ip = 0x367u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15377:
    if (c.tracing) c.traceAt(0x15377);
    // 1501:0367  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:036a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:036c  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:036f  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0372  out dx, ax  [x1]
    c.ip = 0x373u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0373  mov di, 0x1f40  [x1]
    c.di.x = (uint16_t)(0x1f40u);
    // 1501:0376  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0378  mov cx, 0xe0c0  [x1]
    c.c.x = (uint16_t)(0xe0c0u);
L1538b:
    if (c.tracing) c.traceAt(0x1538b);
    // 1501:037b  rep stosb byte ptr es:[di], al  [x57537]
    c.stos<8, false>(1);
L1538d:
    if (c.tracing) c.traceAt(0x1538d);
    // 1501:037d  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:0380  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0383  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0385  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0387  out dx, ax  [x1]
    c.ip = 0x388u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0388  jmp 0x38a  [x1]
    goto L1539a;
L1539a:
    if (c.tracing) c.traceAt(0x1539a);
    // 1501:038a  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:038c  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:038e  out dx, ax  [x1]
    c.ip = 0x38fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:038f  jmp 0x391  [x1]
    goto L153a1;
L153a1:
    if (c.tracing) c.traceAt(0x153a1);
    // 1501:0391  mov ax, 0xa248  [x1]
    c.a.x = (uint16_t)(0xa248u);
    // 1501:0394  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0396  call 0x5ff  [x1]
    c.push16(0x399u); code_13(c, 0x1560fu); if (c.ip != 0x399u) c.badReturn(0x153a6);
L153a9:
    if (c.tracing) c.traceAt(0x153a9);
    // 1501:0399  call 0x667  [x1]
    c.push16(0x39cu); code_13(c, 0x15677u); if (c.ip != 0x39cu) c.badReturn(0x153a9);
L153ac:
    if (c.tracing) c.traceAt(0x153ac);
    // 1501:039c  call 0xe81  [x1]
    c.push16(0x39fu); code_13(c, 0x15e91u); if (c.ip != 0x39fu) c.badReturn(0x153ac);
L153af:
    if (c.tracing) c.traceAt(0x153af);
    // 1501:039f  call 0x116a  [x1]
    c.push16(0x3a2u); code_13(c, 0x1617au); if (c.ip != 0x3a2u) c.badReturn(0x153af);
L153b2:
    if (c.tracing) c.traceAt(0x153b2);
    // 1501:03a2  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:03a5  mov es, ax  [x1]
    c.loadEs(c.a.x);
L153b7:
    if (c.tracing) c.traceAt(0x153b7);
    // 1501:03a7  push es  [x94]
    c.ip = 0x3a7u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:03a8  mov ax, word ptr cs:[0x332]  [x94]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x332u)));
    // 1501:03ac  mov es, ax  [x94]
    c.loadEs(c.a.x);
    // 1501:03ae  mov si, word ptr cs:[0x334]  [x94]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x334u)));
    // 1501:03b3  mov dx, word ptr es:[si]  [x94]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:03b6  pop es  [x94]
    c.loadEs((uint16_t)c.pop16());
    // 1501:03b7  cmp dx, 0  [x94]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:03ba  je 0x3a7  [x94]
    if (c.zf) goto L153b7;
L153cc:
    if (c.tracing) c.traceAt(0x153cc);
    // 1501:03bc  mov bx, word ptr [0x6f5]  [x1157]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f5u)));
    // 1501:03c0  shr bx, 3  [x1157]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), true));
    // 1501:03c3  mov dx, 0x3d4  [x1157]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:03c6  mov al, 0xd  [x1157]
    c.a.l = (uint8_t)(0xdu);
    // 1501:03c8  mov ah, bl  [x1157]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:03ca  out dx, ax  [x1157]
    c.ip = 0x3cbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:03cb  jmp 0x3cd  [x1157]
    goto L153dd;
L153dd:
    if (c.tracing) c.traceAt(0x153dd);
    // 1501:03cd  mov dx, 0x3d4  [x1157]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:03d0  mov al, 0xc  [x1157]
    c.a.l = (uint8_t)(0xcu);
    // 1501:03d2  mov ah, bh  [x1157]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:03d4  out dx, ax  [x1157]
    c.ip = 0x3d5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:03d5  jmp 0x3d7  [x1157]
    goto L153e7;
L153e7:
    if (c.tracing) c.traceAt(0x153e7);
    // 1501:03d7  inc word ptr [0]  [x1157]
    c.w16(c.dsb + (uint16_t)(0u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0u)), false));
    // 1501:03db  and word ptr [0], 1  [x1157]
    c.w16(c.dsb + (uint16_t)(0u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0u))) & (0x1u), false));
    // 1501:03e0  mov dx, 0x3c0  [x1157]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:03e3  mov al, 0x33  [x1157]
    c.a.l = (uint8_t)(0x33u);
    // 1501:03e5  out dx, al  [x1157]
    c.ip = 0x3e6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:03e6  mov ax, word ptr [0x6f5]  [x1157]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f5u)));
    // 1501:03e9  and al, 7  [x1157]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), true));
    // 1501:03eb  out dx, al  [x1157]
    c.ip = 0x3ecu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:03ec  call 0x5f1  [x1157]
    c.push16(0x3efu); code_13(c, 0x15601u); if (c.ip != 0x3efu) c.badReturn(0x153fc);
L153ff:
    if (c.tracing) c.traceAt(0x153ff);
    // 1501:03ef  cmp word ptr [2], 0x40  [x1157]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2u)), 0x40u, true);
    // 1501:03f4  jae 0x3f9  [x1157]
    if (!c.cf) goto L15409;
L15406:
    if (c.tracing) c.traceAt(0x15406);
    // 1501:03f6  call 0x1228  [x64]
    c.push16(0x3f9u); code_13(c, 0x16238u); if (c.ip != 0x3f9u) c.badReturn(0x15406);
L15409:
    if (c.tracing) c.traceAt(0x15409);
    // 1501:03f9  cmp word ptr [2], 0x440  [x1157]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2u)), 0x440u, true);
    // 1501:03ff  jb 0x40e  [x1157]
    if (c.cf) goto L1541e;
L15411:
    if (c.tracing) c.traceAt(0x15411);
    // 1501:0401  call 0x124a  [x69]
    c.push16(0x404u); code_13(c, 0x1625au); if (c.ip != 0x404u) c.badReturn(0x15411);
L15414:
    if (c.tracing) c.traceAt(0x15414);
    // 1501:0404  cmp byte ptr [0x545d], 0x44  [x69]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x545du)), 0x44u, true);
    // 1501:0409  jb 0x40e  [x69]
    if (c.cf) goto L1541e;
L1541b:
    if (c.tracing) c.traceAt(0x1541b);
    // 1501:040b  jmp 0x1276  [x1]
    goto L16286;
L1541e:
    if (c.tracing) c.traceAt(0x1541e);
    // 1501:040e  cmp word ptr [2], 0x40  [x1156]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2u)), 0x40u, true);
    // 1501:0413  jb 0x42c  [x1156]
    if (c.cf) goto L1543c;
L15425:
    if (c.tracing) c.traceAt(0x15425);
    // 1501:0415  cmp word ptr [2], 0x440  [x1092]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2u)), 0x440u, true);
    // 1501:041b  jae 0x42c  [x1092]
    if (!c.cf) goto L1543c;
L1542d:
    if (c.tracing) c.traceAt(0x1542d);
    // 1501:041d  mov dx, 0x3c8  [x1024]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0420  xor al, al  [x1024]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0422  out dx, al  [x1024]
    c.ip = 0x423u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0423  inc dx  [x1024]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0424  mov si, 4  [x1024]
    c.si.x = (uint16_t)(0x4u);
    // 1501:0427  mov cx, 0x30  [x1024]
    c.c.x = (uint16_t)(0x30u);
L1543a:
    if (c.tracing) c.traceAt(0x1543a);
    // 1501:042a  rep outsb dx, byte ptr [si]  [x50176]
    c.ip = 0x42cu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1543c:
    if (c.tracing) c.traceAt(0x1543c);
    // 1501:042c  mov cx, word ptr [0xe03]  [x1156]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe03u)));
    // 1501:0430  sub cx, word ptr [0xe05]  [x1156]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0xe05u)), true));
    // 1501:0434  inc cx  [x1156]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, true));
    // 1501:0435  js 0x45a  [x1156]
    if (c.sf) goto L1546a;
L15447:
    if (c.tracing) c.traceAt(0x15447);
    // 1501:0437  je 0x45a  [x1034]
    if (c.zf) goto L1546a;
L15449:
    if (c.tracing) c.traceAt(0x15449);
    // 1501:0439  mov ax, word ptr [0xe05]  [x789]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe05u)));
    // 1501:043c  mov dx, 0x28  [x789]
    c.dx_.x = (uint16_t)(0x28u);
    // 1501:043f  mul dx  [x789]
    c.mul16(c.dx_.x);
    // 1501:0441  add ax, 7  [x789]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x7u, false));
    // 1501:0444  mov di, ax  [x789]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:0446  xor ax, ax  [x789]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L15458:
    if (c.tracing) c.traceAt(0x15458);
    // 1501:0448  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0449  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044a  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044b  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044c  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044d  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044e  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:044f  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0450  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0451  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0452  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0453  stosw word ptr es:[di], ax  [x1372]
    c.stos<16, false>(0);
    // 1501:0454  stosb byte ptr es:[di], al  [x1372]
    c.stos<8, false>(0);
    // 1501:0455  add di, 0xf  [x1372]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xfu, true));
    // 1501:0458  loop 0x448  [x1372]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15458;
L1546a:
    if (c.tracing) c.traceAt(0x1546a);
    // 1501:045a  mov cx, word ptr [0xe09]  [x1156]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe09u)));
    // 1501:045e  mov cx, 0xc8  [x1156]
    c.c.x = (uint16_t)(0xc8u);
    // 1501:0461  sub cx, word ptr [0xe07]  [x1156]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0xe07u)), true));
    // 1501:0465  js 0x48a  [x1156]
    if (c.sf) goto L1549a;
L15477:
    if (c.tracing) c.traceAt(0x15477);
    // 1501:0467  je 0x48a  [x1156]
    if (c.zf) goto L1549a;
L15479:
    if (c.tracing) c.traceAt(0x15479);
    // 1501:0469  mov ax, word ptr [0xe07]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe07u)));
    // 1501:046c  mov dx, 0x28  [x1156]
    c.dx_.x = (uint16_t)(0x28u);
    // 1501:046f  mul dx  [x1156]
    c.mul16(c.dx_.x);
    // 1501:0471  add ax, 7  [x1156]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x7u, false));
    // 1501:0474  mov di, ax  [x1156]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:0476  xor ax, ax  [x1156]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L15488:
    if (c.tracing) c.traceAt(0x15488);
    // 1501:0478  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0479  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047a  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047b  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047c  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047d  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047e  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:047f  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0480  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0481  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0482  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0483  stosw word ptr es:[di], ax  [x58220]
    c.stos<16, false>(0);
    // 1501:0484  stosb byte ptr es:[di], al  [x58220]
    c.stos<8, false>(0);
    // 1501:0485  add di, 0xf  [x58220]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xfu, true));
    // 1501:0488  loop 0x478  [x58220]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15488;
L1549a:
    if (c.tracing) c.traceAt(0x1549a);
    // 1501:048a  call 0xf0e  [x1156]
    c.push16(0x48du); code_13(c, 0x15f1eu); if (c.ip != 0x48du) c.badReturn(0x1549a);
L1549d:
    if (c.tracing) c.traceAt(0x1549d);
    // 1501:048d  call 0xec6  [x1156]
    c.push16(0x490u); code_13(c, 0x15ed6u); if (c.ip != 0x490u) c.badReturn(0x1549d);
L154a0:
    if (c.tracing) c.traceAt(0x154a0);
    // 1501:0490  call 0xf69  [x1156]
    c.push16(0x493u); code_13(c, 0x15f79u); if (c.ip != 0x493u) c.badReturn(0x154a0);
L154a3:
    if (c.tracing) c.traceAt(0x154a3);
    // 1501:0493  call 0x573  [x1156]
    c.push16(0x496u); code_13(c, 0x15583u); if (c.ip != 0x496u) c.badReturn(0x154a3);
L154a6:
    if (c.tracing) c.traceAt(0x154a6);
    // 1501:0496  inc word ptr [2]  [x1156]
    c.w16(c.dsb + (uint16_t)(0x2u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2u)), false));
    // 1501:049a  mov si, word ptr [0x6f3]  [x1156]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f3u)));
    // 1501:049e  mov cx, 0x7fff  [x1156]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:04a1  mov bx, 0x46  [x1156]
    c.b.x = (uint16_t)(0x46u);
    // 1501:04a4  mov ax, word ptr [si + 0x6fb]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6fbu)));
    // 1501:04a8  cdq   [x1156]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:04a9  imul bx  [x1156]
    c.imul16(c.b.x);
    // 1501:04ab  idiv cx  [x1156]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4abu); }   // #DE: int 0, then again
    // 1501:04ad  add ax, 0x140  [x1156]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x140u, false));
    // 1501:04b0  mov word ptr [0x6f5], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0x6f5u), c.a.x);
    // 1501:04b3  cmp byte ptr [0x6ee], 0  [x1156]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x6eeu)), 0x0u, true);
    // 1501:04b8  je 0x4cd  [x1156]
    if (c.zf) goto L154dd;
L154ca:
    if (c.tracing) c.traceAt(0x154ca);
    // 1501:04ba  add word ptr [0x6f3], 8  [x957]
    c.w16(c.dsb + (uint16_t)(0x6f3u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x6f3u)), 0x8u, false));
    // 1501:04bf  cmp word ptr [0x6f3], 0x5a0  [x957]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6f3u)), 0x5a0u, true);
    // 1501:04c5  jb 0x4cd  [x957]
    if (c.cf) goto L154dd;
L154d7:
    if (c.tracing) c.traceAt(0x154d7);
    // 1501:04c7  sub word ptr [0x6f3], 0x5a0  [x5]
    c.w16(c.dsb + (uint16_t)(0x6f3u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6f3u)), 0x5a0u, true));
L154dd:
    if (c.tracing) c.traceAt(0x154dd);
    // 1501:04cd  mov si, word ptr [0x545e]  [x1156]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x545eu)));
    // 1501:04d1  add word ptr [0x545e], 2  [x1156]
    c.w16(c.dsb + (uint16_t)(0x545eu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x545eu)), 0x2u, false));
    // 1501:04d6  mov ax, word ptr [si + 0x5460]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x5460u)));
    // 1501:04da  mov word ptr [0x6f7], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0x6f7u), c.a.x);
    // 1501:04dd  cmp byte ptr [0x6ed], 0  [x1156]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x6edu)), 0x0u, true);
    // 1501:04e2  jne 0x530  [x1156]
    if (!c.zf) goto L15540;
L154f4:
    if (c.tracing) c.traceAt(0x154f4);
    // 1501:04e4  mov si, word ptr [0x6ef]  [x99]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6efu)));
    // 1501:04e8  mov cx, 0x7fff  [x99]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:04eb  mov bx, word ptr [0x6f1]  [x99]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f1u)));
    // 1501:04ef  mov ax, word ptr [si + 0x6fb]  [x99]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6fbu)));
    // 1501:04f3  cdq   [x99]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:04f4  imul bx  [x99]
    c.imul16(c.b.x);
    // 1501:04f6  idiv cx  [x99]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4f6u); }   // #DE: int 0, then again
    // 1501:04f8  add ax, 0xdac  [x99]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xdacu, false));
    // 1501:04fb  add ax, bx  [x99]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:04fd  mov word ptr [0x6eb], ax  [x99]
    c.w16(c.dsb + (uint16_t)(0x6ebu), c.a.x);
    // 1501:0500  add word ptr [0x223], 0x1900  [x99]
    c.w16(c.dsb + (uint16_t)(0x223u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x223u)), 0x1900u, true));
    // 1501:0506  jb 0x50d  [x99]
    if (c.cf) goto L1551d;
L15518:
    if (c.tracing) c.traceAt(0x15518);
    // 1501:0508  add word ptr [0x6ef], 8  [x90]
    c.w16(c.dsb + (uint16_t)(0x6efu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x8u, true));
L1551d:
    if (c.tracing) c.traceAt(0x1551d);
    // 1501:050d  cmp word ptr [0x6ef], 0x5a0  [x99]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x5a0u, true);
    // 1501:0513  jb 0x51b  [x99]
    if (c.cf) goto L1552b;
L15525:
    if (c.tracing) c.traceAt(0x15525);
    // 1501:0515  sub word ptr [0x6ef], 0x5a0  [x1]
    c.w16(c.dsb + (uint16_t)(0x6efu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x5a0u, true));
L1552b:
    if (c.tracing) c.traceAt(0x1552b);
    // 1501:051b  cmp word ptr [0x6ef], 0x168  [x99]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x168u, true);
    // 1501:0521  jne 0x52e  [x99]
    if (!c.zf) goto L1553e;
L15533:
    if (c.tracing) c.traceAt(0x15533);
    // 1501:0523  mov byte ptr [0x6ed], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x6edu), 0x1u);
    // 1501:0528  mov word ptr [0x6f1], 0x834  [x1]
    c.w16(c.dsb + (uint16_t)(0x6f1u), 0x834u);
L1553e:
    if (c.tracing) c.traceAt(0x1553e);
    // 1501:052e  jmp 0x570  [x99]
    goto L15580;
L15540:
    if (c.tracing) c.traceAt(0x15540);
    // 1501:0530  mov si, word ptr [0x6ef]  [x1057]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6efu)));
    // 1501:0534  mov cx, 0x7fff  [x1057]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:0537  mov bx, word ptr [0x6f1]  [x1057]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f1u)));
    // 1501:053b  mov ax, word ptr [si + 0x6fb]  [x1057]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6fbu)));
    // 1501:053f  cdq   [x1057]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:0540  imul bx  [x1057]
    c.imul16(c.b.x);
    // 1501:0542  idiv cx  [x1057]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x542u); }   // #DE: int 0, then again
    // 1501:0544  add ax, 0xd48  [x1057]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xd48u, false));
    // 1501:0547  mov word ptr [0x6eb], ax  [x1057]
    c.w16(c.dsb + (uint16_t)(0x6ebu), c.a.x);
    // 1501:054a  add word ptr [0x223], 0x1900  [x1057]
    c.w16(c.dsb + (uint16_t)(0x223u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x223u)), 0x1900u, true));
    // 1501:0550  jb 0x557  [x1057]
    if (c.cf) goto L15567;
L15562:
    if (c.tracing) c.traceAt(0x15562);
    // 1501:0552  add word ptr [0x6ef], 4  [x954]
    c.w16(c.dsb + (uint16_t)(0x6efu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x4u, true));
L15567:
    if (c.tracing) c.traceAt(0x15567);
    // 1501:0557  cmp word ptr [0x6ef], 0x2d0  [x1057]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x6efu)), 0x2d0u, true);
    // 1501:055d  jne 0x570  [x1057]
    if (!c.zf) goto L15580;
L1556f:
    if (c.tracing) c.traceAt(0x1556f);
    // 1501:055f  mov word ptr [0x6ef], 0  [x5]
    c.w16(c.dsb + (uint16_t)(0x6efu), 0x0u);
    // 1501:0565  add word ptr [0x6f1], 0x258  [x5]
    c.w16(c.dsb + (uint16_t)(0x6f1u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x6f1u)), 0x258u, true));
    // 1501:056b  mov byte ptr [0x6ee], 1  [x5]
    c.w8(c.dsb + (uint16_t)(0x6eeu), 0x1u);
L15580:
    if (c.tracing) c.traceAt(0x15580);
    // 1501:0570  jmp 0x3bc  [x1156]
    goto L153cc;
L15583:
    if (c.tracing) c.traceAt(0x15583);
    // 1501:0573  mov dx, 0x3ce  [x1156]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0576  mov al, 5  [x1156]
    c.a.l = (uint8_t)(0x5u);
    // 1501:0578  out dx, al  [x1156]
    c.ip = 0x579u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0579  inc dx  [x1156]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:057a  in al, dx  [x1156]
    c.ip = 0x57bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:057b  and al, 0xfc  [x1156]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:057d  or al, 1  [x1156]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 1501:057f  out dx, al  [x1156]
    c.ip = 0x580u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0580  mov dx, 0x3c4  [x1156]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0583  mov ax, 0xf02  [x1156]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0586  out dx, ax  [x1156]
    c.ip = 0x587u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0587  push ds  [x1156]
    c.push16(c.ds);
    // 1501:0588  mov ax, 0xa248  [x1156]
    c.a.x = (uint16_t)(0xa248u);
    // 1501:058b  mov ds, ax  [x1156]
    c.loadDs(c.a.x);
    // 1501:058d  mov bp, 7  [x1156]
    c.bp.x = (uint16_t)(0x7u);
    // 1501:0590  xor bx, bx  [x1156]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L155a2:
    if (c.tracing) c.traceAt(0x155a2);
    // 1501:0592  mov si, word ptr cs:[bx + 8]  [x231200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x8u)));
    // 1501:0597  or si, si  [x231200]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) | (c.si.x), true));
    // 1501:0599  je 0x5d8  [x231200]
    if (c.zf) goto L155e8;
L155ab:
    if (c.tracing) c.traceAt(0x155ab);
    // 1501:059b  cmp si, -1  [x113847]
    c.sub<16>(c.si.x, 0xffffu, true);
    // 1501:059e  jne 0x5d1  [x113847]
    if (!c.zf) goto L155e1;
L155b0:
    if (c.tracing) c.traceAt(0x155b0);
    // 1501:05a0  mov dx, 0x3ce  [x3159]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:05a3  mov al, 5  [x3159]
    c.a.l = (uint8_t)(0x5u);
    // 1501:05a5  out dx, al  [x3159]
    c.ip = 0x5a6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05a6  inc dx  [x3159]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:05a7  in al, dx  [x3159]
    c.ip = 0x5a8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:05a8  and al, 0xfc  [x3159]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:05aa  out dx, al  [x3159]
    c.ip = 0x5abu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05ab  push ds  [x3159]
    c.push16(c.ds);
    // 1501:05ac  mov ds, word ptr cs:[0x328]  [x3159]
    c.loadDs(c.r16(c.csb + (uint16_t)(0x328u)));
    // 1501:05b1  mov si, word ptr cs:[bx + 0x198]  [x3159]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x198u)));
    // 1501:05b6  add si, 0xe0d  [x3159]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xe0du, true));
    // 1501:05ba  mov di, bp  [x3159]
    c.di.x = (uint16_t)(c.bp.x);
    // 1501:05bc  mov cx, 0x19  [x3159]
    c.c.x = (uint16_t)(0x19u);
L155cf:
    if (c.tracing) c.traceAt(0x155cf);
    // 1501:05bf  rep movsb byte ptr es:[di], byte ptr [si]  [x82134]
    c.ip = 0x5c1u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L155d1:
    if (c.tracing) c.traceAt(0x155d1);
    // 1501:05c1  pop ds  [x3159]
    c.loadDs((uint16_t)c.pop16());
    // 1501:05c2  mov dx, 0x3ce  [x3159]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:05c5  mov al, 5  [x3159]
    c.a.l = (uint8_t)(0x5u);
    // 1501:05c7  out dx, al  [x3159]
    c.ip = 0x5c8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05c8  inc dx  [x3159]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:05c9  in al, dx  [x3159]
    c.ip = 0x5cau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:05ca  and al, 0xfc  [x3159]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:05cc  or al, 1  [x3159]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 1501:05ce  out dx, al  [x3159]
    c.ip = 0x5cfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05cf  jmp 0x5d8  [x3159]
    goto L155e8;
L155e1:
    if (c.tracing) c.traceAt(0x155e1);
    // 1501:05d1  mov di, bp  [x110688]
    c.di.x = (uint16_t)(c.bp.x);
    // 1501:05d3  mov cx, 0x19  [x110688]
    c.c.x = (uint16_t)(0x19u);
L155e6:
    if (c.tracing) c.traceAt(0x155e6);
    // 1501:05d6  rep movsb byte ptr es:[di], byte ptr [si]  [x2877888]
    c.ip = 0x5d8u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L155e8:
    if (c.tracing) c.traceAt(0x155e8);
    // 1501:05d8  add bp, 0x28  [x231200]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x28u, false));
    // 1501:05db  add bx, 2  [x231200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:05de  cmp bx, 0x190  [x231200]
    c.sub<16>(c.b.x, 0x190u, true);
    // 1501:05e2  jb 0x592  [x231200]
    if (c.cf) goto L155a2;
L155f4:
    if (c.tracing) c.traceAt(0x155f4);
    // 1501:05e4  pop ds  [x1156]
    c.loadDs((uint16_t)c.pop16());
    // 1501:05e5  mov dx, 0x3ce  [x1156]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:05e8  mov al, 5  [x1156]
    c.a.l = (uint8_t)(0x5u);
    // 1501:05ea  out dx, al  [x1156]
    c.ip = 0x5ebu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05eb  inc dx  [x1156]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:05ec  in al, dx  [x1156]
    c.ip = 0x5edu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:05ed  and al, 0xfc  [x1156]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), true));
    // 1501:05ef  out dx, al  [x1156]
    c.ip = 0x5f0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05f0  ret   [x1156]
    c.ip = c.pop16(); return;
L15601:
    if (c.tracing) c.traceAt(0x15601);
    // 1501:05f1  mov dx, 0x3da  [x1157]
    c.dx_.x = (uint16_t)(0x3dau);
L15604:
    if (c.tracing) c.traceAt(0x15604);
    // 1501:05f4  in al, dx  [x53927]
    c.ip = 0x5f5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15605:
    if (c.tracing) c.traceAt(0x15605);
    // 1501:05f5  test al, 8  [x71517]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:05f7  je 0x5f4  [x71517]
    if (c.zf) goto L15604;
L15609:
    if (c.tracing) c.traceAt(0x15609);
    // 1501:05f9  in al, dx  [x3690]
    c.ip = 0x5fau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1560a:
    if (c.tracing) c.traceAt(0x1560a);
    // 1501:05fa  test al, 8  [x4920]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:05fc  jne 0x5f9  [x4920]
    if (!c.zf) goto L15609;
L1560e:
    if (c.tracing) c.traceAt(0x1560e);
    // 1501:05fe  ret   [x1157]
    c.ip = c.pop16(); return;
L1560f:
    if (c.tracing) c.traceAt(0x1560f);
    // 1501:05ff  mov word ptr [0x220], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x220u), 0x0u);
    // 1501:0605  mov word ptr [0x365], 0x28  [x1]
    c.w16(c.dsb + (uint16_t)(0x365u), 0x28u);
    // 1501:060b  mov word ptr [0x21c], 0x54  [x1]
    c.w16(c.dsb + (uint16_t)(0x21cu), 0x54u);
L15621:
    if (c.tracing) c.traceAt(0x15621);
    // 1501:0611  mov ax, word ptr [0x21c]  [x80]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21cu)));
    // 1501:0614  mov word ptr [0x21e], ax  [x80]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.a.x);
    // 1501:0617  mov cx, word ptr [0x365]  [x80]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x365u)));
    // 1501:061b  mov ax, 0xe  [x80]
    c.a.x = (uint16_t)(0xeu);
    // 1501:061e  cdq   [x80]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:061f  div cx  [x80]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x61fu); }   // #DE: int 0, then again
    // 1501:0621  mov bp, word ptr [0x365]  [x80]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x365u)));
    // 1501:0625  sub ax, ax  [x80]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.a.x, true));
    // 1501:0627  mov si, 0x94  [x80]
    c.si.x = (uint16_t)(0x94u);
    // 1501:062a  mov cx, word ptr [0x365]  [x80]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x365u)));
L1563e:
    if (c.tracing) c.traceAt(0x1563e);
    // 1501:062e  add ax, dx  [x9520]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.dx_.x, false));
    // 1501:0630  cmp ax, bp  [x9520]
    c.sub<16>(c.a.x, c.bp.x, true);
    // 1501:0632  jl 0x637  [x9520]
    if ((c.sf != c.of)) goto L15647;
L15644:
    if (c.tracing) c.traceAt(0x15644);
    // 1501:0634  sub ax, bp  [x1120]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.bp.x, true));
    // 1501:0636  inc si  [x1120]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L15647:
    if (c.tracing) c.traceAt(0x15647);
    // 1501:0637  call 0x925  [x9520]
    c.push16(0x63au); code_13(c, 0x15935u); if (c.ip != 0x63au) c.badReturn(0x15647);
L1564a:
    if (c.tracing) c.traceAt(0x1564a);
    // 1501:063a  inc word ptr [0x21e]  [x9520]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x21eu)), true));
    // 1501:063e  loop 0x62e  [x9520]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1563e;
L15650:
    if (c.tracing) c.traceAt(0x15650);
    // 1501:0640  dec word ptr [0x21e]  [x80]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x21eu)), true));
    // 1501:0644  call 0x6b5  [x80]
    c.push16(0x647u); code_13(c, 0x156c5u); if (c.ip != 0x647u) c.badReturn(0x15654);
L15657:
    if (c.tracing) c.traceAt(0x15657);
    // 1501:0647  mov ax, word ptr [0x21c]  [x80]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21cu)));
    // 1501:064a  mov word ptr [0x21e], ax  [x80]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.a.x);
    // 1501:064d  call 0x6b5  [x80]
    c.push16(0x650u); code_13(c, 0x156c5u); if (c.ip != 0x650u) c.badReturn(0x1565d);
L15660:
    if (c.tracing) c.traceAt(0x15660);
    // 1501:0650  dec word ptr [0x21c]  [x80]
    c.w16(c.dsb + (uint16_t)(0x21cu), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x21cu)), false));
    // 1501:0654  add word ptr [0x365], 2  [x80]
    c.w16(c.dsb + (uint16_t)(0x365u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x365u)), 0x2u, false));
    // 1501:0659  add word ptr [0x220], 0x19  [x80]
    c.w16(c.dsb + (uint16_t)(0x220u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x220u)), 0x19u, false));
    // 1501:065e  cmp word ptr [0x365], 0xc8  [x80]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x365u)), 0xc8u, true);
    // 1501:0664  jb 0x611  [x80]
    if (c.cf) goto L15621;
L15676:
    if (c.tracing) c.traceAt(0x15676);
    // 1501:0666  ret   [x1]
    c.ip = c.pop16(); return;
L15677:
    if (c.tracing) c.traceAt(0x15677);
    // 1501:0667  mov word ptr [0x220], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x220u), 0x0u);
    // 1501:066d  mov word ptr [0x365], 0x28  [x1]
    c.w16(c.dsb + (uint16_t)(0x365u), 0x28u);
    // 1501:0673  mov word ptr [0x21c], 0x54  [x1]
    c.w16(c.dsb + (uint16_t)(0x21cu), 0x54u);
L15689:
    if (c.tracing) c.traceAt(0x15689);
    // 1501:0679  mov si, word ptr [0x21c]  [x80]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21cu)));
    // 1501:067d  mov word ptr [0x21e], si  [x80]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.si.x);
    // 1501:0681  mov cx, word ptr [0x365]  [x80]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x365u)));
L15695:
    if (c.tracing) c.traceAt(0x15695);
    // 1501:0685  mov si, word ptr [0x21e]  [x9520]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21eu)));
    // 1501:0689  mov bl, byte ptr [si + 0x225]  [x9520]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x225u)));
    // 1501:068d  shr si, 3  [x9520]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x3u) & 31), false));
    // 1501:0690  add si, word ptr [0x220]  [x9520]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x220u)), false));
    // 1501:0694  or byte ptr [si + 0xe0d], bl  [x9520]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xe0du), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xe0du))) | (c.b.l), true));
    // 1501:0698  inc word ptr [0x21e]  [x9520]
    c.w16(c.dsb + (uint16_t)(0x21eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x21eu)), true));
    // 1501:069c  loop 0x685  [x9520]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15695;
L156ae:
    if (c.tracing) c.traceAt(0x156ae);
    // 1501:069e  dec word ptr [0x21c]  [x80]
    c.w16(c.dsb + (uint16_t)(0x21cu), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x21cu)), false));
    // 1501:06a2  add word ptr [0x365], 2  [x80]
    c.w16(c.dsb + (uint16_t)(0x365u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x365u)), 0x2u, false));
    // 1501:06a7  add word ptr [0x220], 0x19  [x80]
    c.w16(c.dsb + (uint16_t)(0x220u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x220u)), 0x19u, false));
    // 1501:06ac  cmp word ptr [0x365], 0xc8  [x80]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x365u)), 0xc8u, true);
    // 1501:06b2  jb 0x679  [x80]
    if (c.cf) goto L15689;
L156c4:
    if (c.tracing) c.traceAt(0x156c4);
    // 1501:06b4  ret   [x1]
    c.ip = c.pop16(); return;
L156c5:
    if (c.tracing) c.traceAt(0x156c5);
    // 1501:06b5  mov di, word ptr [0x21e]  [x160]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21eu)));
    // 1501:06b9  mov cl, byte ptr [di + 0x225]  [x160]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x225u)));
    // 1501:06bd  shr di, 3  [x160]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:06c0  add di, word ptr [0x220]  [x160]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x220u)), false));
    // 1501:06c4  mov dx, 0x3c4  [x160]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:06c7  mov ax, 0x102  [x160]
    c.a.x = (uint16_t)(0x102u);
    // 1501:06ca  out dx, ax  [x160]
    c.ip = 0x6cbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:06cb  mov dx, 0x3ce  [x160]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:06ce  mov ax, 4  [x160]
    c.a.x = (uint16_t)(0x4u);
    // 1501:06d1  out dx, ax  [x160]
    c.ip = 0x6d2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:06d2  or byte ptr es:[di], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), false));
    // 1501:06d5  or byte ptr es:[di + 0x7d0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), false));
    // 1501:06da  or byte ptr es:[di + 0xfa0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), false));
    // 1501:06df  or byte ptr es:[di + 0x1770], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), false));
    // 1501:06e4  or byte ptr es:[di + 0x1f40], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), false));
    // 1501:06e9  or byte ptr es:[di + 0x2710], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), false));
    // 1501:06ee  or byte ptr es:[di + 0x2ee0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), false));
    // 1501:06f3  or byte ptr es:[di + 0x36b0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), false));
    // 1501:06f8  or byte ptr es:[di + 0x3e80], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), false));
    // 1501:06fd  or byte ptr es:[di + 0x4650], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), false));
    // 1501:0702  or byte ptr es:[di + 0x4e20], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), false));
    // 1501:0707  or byte ptr es:[di + 0x55f0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), false));
    // 1501:070c  or byte ptr es:[di + 0x5dc0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), false));
    // 1501:0711  or byte ptr es:[di + 0x6590], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), false));
    // 1501:0716  or byte ptr es:[di + 0x6d60], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), false));
    // 1501:071b  or byte ptr es:[di + 0x7530], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), false));
    // 1501:0720  or byte ptr es:[di + 0x7d00], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), false));
    // 1501:0725  or byte ptr es:[di - 0x7b30], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), false));
    // 1501:072a  or byte ptr es:[di - 0x7360], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), false));
    // 1501:072f  or byte ptr es:[di - 0x6b90], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), false));
    // 1501:0734  or byte ptr es:[di - 0x63c0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), false));
    // 1501:0739  or byte ptr es:[di - 0x5bf0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), false));
    // 1501:073e  or byte ptr es:[di - 0x5420], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), false));
    // 1501:0743  or byte ptr es:[di - 0x4c50], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), false));
    // 1501:0748  or byte ptr es:[di - 0x4480], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), false));
    // 1501:074d  or byte ptr es:[di - 0x3cb0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), false));
    // 1501:0752  or byte ptr es:[di - 0x34e0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), false));
    // 1501:0757  or byte ptr es:[di - 0x2d10], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), false));
    // 1501:075c  mov dx, 0x3c4  [x160]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:075f  mov ax, 0x202  [x160]
    c.a.x = (uint16_t)(0x202u);
    // 1501:0762  out dx, ax  [x160]
    c.ip = 0x763u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0763  mov dx, 0x3ce  [x160]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0766  mov ax, 0x104  [x160]
    c.a.x = (uint16_t)(0x104u);
    // 1501:0769  out dx, ax  [x160]
    c.ip = 0x76au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:076a  or byte ptr es:[di], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), false));
    // 1501:076d  or byte ptr es:[di + 0x7d0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), false));
    // 1501:0772  or byte ptr es:[di + 0xfa0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), false));
    // 1501:0777  or byte ptr es:[di + 0x1770], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), false));
    // 1501:077c  or byte ptr es:[di + 0x1f40], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), false));
    // 1501:0781  or byte ptr es:[di + 0x2710], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), false));
    // 1501:0786  or byte ptr es:[di + 0x2ee0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), false));
    // 1501:078b  or byte ptr es:[di + 0x36b0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), false));
    // 1501:0790  or byte ptr es:[di + 0x3e80], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), false));
    // 1501:0795  or byte ptr es:[di + 0x4650], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), false));
    // 1501:079a  or byte ptr es:[di + 0x4e20], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), false));
    // 1501:079f  or byte ptr es:[di + 0x55f0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), false));
    // 1501:07a4  or byte ptr es:[di + 0x5dc0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), false));
    // 1501:07a9  or byte ptr es:[di + 0x6590], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), false));
    // 1501:07ae  or byte ptr es:[di + 0x6d60], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), false));
    // 1501:07b3  or byte ptr es:[di + 0x7530], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), false));
    // 1501:07b8  or byte ptr es:[di + 0x7d00], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), false));
    // 1501:07bd  or byte ptr es:[di - 0x7b30], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), false));
    // 1501:07c2  or byte ptr es:[di - 0x7360], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), false));
    // 1501:07c7  or byte ptr es:[di - 0x6b90], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), false));
    // 1501:07cc  or byte ptr es:[di - 0x63c0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), false));
    // 1501:07d1  or byte ptr es:[di - 0x5bf0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), false));
    // 1501:07d6  or byte ptr es:[di - 0x5420], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), false));
    // 1501:07db  or byte ptr es:[di - 0x4c50], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), false));
    // 1501:07e0  or byte ptr es:[di - 0x4480], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), false));
    // 1501:07e5  or byte ptr es:[di - 0x3cb0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), false));
    // 1501:07ea  or byte ptr es:[di - 0x34e0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), false));
    // 1501:07ef  or byte ptr es:[di - 0x2d10], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), false));
    // 1501:07f4  mov dx, 0x3c4  [x160]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:07f7  mov ax, 0x402  [x160]
    c.a.x = (uint16_t)(0x402u);
    // 1501:07fa  out dx, ax  [x160]
    c.ip = 0x7fbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:07fb  mov dx, 0x3ce  [x160]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:07fe  mov ax, 0x204  [x160]
    c.a.x = (uint16_t)(0x204u);
    // 1501:0801  out dx, ax  [x160]
    c.ip = 0x802u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0802  or byte ptr es:[di], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), false));
    // 1501:0805  or byte ptr es:[di + 0x7d0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), false));
    // 1501:080a  or byte ptr es:[di + 0xfa0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), false));
    // 1501:080f  or byte ptr es:[di + 0x1770], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), false));
    // 1501:0814  or byte ptr es:[di + 0x1f40], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), false));
    // 1501:0819  or byte ptr es:[di + 0x2710], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), false));
    // 1501:081e  or byte ptr es:[di + 0x2ee0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), false));
    // 1501:0823  or byte ptr es:[di + 0x36b0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), false));
    // 1501:0828  or byte ptr es:[di + 0x3e80], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), false));
    // 1501:082d  or byte ptr es:[di + 0x4650], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), false));
    // 1501:0832  or byte ptr es:[di + 0x4e20], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), false));
    // 1501:0837  or byte ptr es:[di + 0x55f0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), false));
    // 1501:083c  or byte ptr es:[di + 0x5dc0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), false));
    // 1501:0841  or byte ptr es:[di + 0x6590], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), false));
    // 1501:0846  or byte ptr es:[di + 0x6d60], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), false));
    // 1501:084b  or byte ptr es:[di + 0x7530], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), false));
    // 1501:0850  or byte ptr es:[di + 0x7d00], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), false));
    // 1501:0855  or byte ptr es:[di - 0x7b30], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), false));
    // 1501:085a  or byte ptr es:[di - 0x7360], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), false));
    // 1501:085f  or byte ptr es:[di - 0x6b90], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), false));
    // 1501:0864  or byte ptr es:[di - 0x63c0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), false));
    // 1501:0869  or byte ptr es:[di - 0x5bf0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), false));
    // 1501:086e  or byte ptr es:[di - 0x5420], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), false));
    // 1501:0873  or byte ptr es:[di - 0x4c50], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), false));
    // 1501:0878  or byte ptr es:[di - 0x4480], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), false));
    // 1501:087d  or byte ptr es:[di - 0x3cb0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), false));
    // 1501:0882  or byte ptr es:[di - 0x34e0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), false));
    // 1501:0887  or byte ptr es:[di - 0x2d10], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), false));
    // 1501:088c  mov dx, 0x3c4  [x160]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:088f  mov ax, 0x802  [x160]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0892  out dx, ax  [x160]
    c.ip = 0x893u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0893  mov dx, 0x3ce  [x160]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0896  mov ax, 0x304  [x160]
    c.a.x = (uint16_t)(0x304u);
    // 1501:0899  out dx, ax  [x160]
    c.ip = 0x89au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:089a  or byte ptr es:[di], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), false));
    // 1501:089d  or byte ptr es:[di + 0x7d0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), false));
    // 1501:08a2  or byte ptr es:[di + 0xfa0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), false));
    // 1501:08a7  or byte ptr es:[di + 0x1770], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), false));
    // 1501:08ac  or byte ptr es:[di + 0x1f40], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), false));
    // 1501:08b1  or byte ptr es:[di + 0x2710], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), false));
    // 1501:08b6  or byte ptr es:[di + 0x2ee0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), false));
    // 1501:08bb  or byte ptr es:[di + 0x36b0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), false));
    // 1501:08c0  or byte ptr es:[di + 0x3e80], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), false));
    // 1501:08c5  or byte ptr es:[di + 0x4650], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), false));
    // 1501:08ca  or byte ptr es:[di + 0x4e20], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), false));
    // 1501:08cf  or byte ptr es:[di + 0x55f0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), false));
    // 1501:08d4  or byte ptr es:[di + 0x5dc0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), false));
    // 1501:08d9  or byte ptr es:[di + 0x6590], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), false));
    // 1501:08de  or byte ptr es:[di + 0x6d60], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), false));
    // 1501:08e3  or byte ptr es:[di + 0x7530], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), false));
    // 1501:08e8  or byte ptr es:[di + 0x7d00], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), false));
    // 1501:08ed  or byte ptr es:[di - 0x7b30], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), false));
    // 1501:08f2  or byte ptr es:[di - 0x7360], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), false));
    // 1501:08f7  or byte ptr es:[di - 0x6b90], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), false));
    // 1501:08fc  or byte ptr es:[di - 0x63c0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), false));
    // 1501:0901  or byte ptr es:[di - 0x5bf0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), false));
    // 1501:0906  or byte ptr es:[di - 0x5420], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), false));
    // 1501:090b  or byte ptr es:[di - 0x4c50], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), false));
    // 1501:0910  or byte ptr es:[di - 0x4480], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), false));
    // 1501:0915  or byte ptr es:[di - 0x3cb0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), false));
    // 1501:091a  or byte ptr es:[di - 0x34e0], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), true));
L1592f:
    if (c.tracing) c.traceAt(0x1592f);
    // 1501:091f  or byte ptr es:[di - 0x2d10], cl  [x160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), true));
    // 1501:0924  ret   [x160]
    c.ip = c.pop16(); return;
L15935:
    if (c.tracing) c.traceAt(0x15935);
    // 1501:0925  push di  [x9520]
    c.push16(c.di.x);
    // 1501:0926  push dx  [x9520]
    c.push16(c.dx_.x);
    // 1501:0927  push ax  [x9520]
    c.push16(c.a.x);
    // 1501:0928  push cx  [x9520]
    c.push16(c.c.x);
    // 1501:0929  mov di, word ptr [0x21e]  [x9520]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21eu)));
    // 1501:092d  mov cl, byte ptr [di + 0x225]  [x9520]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x225u)));
    // 1501:0931  shr di, 3  [x9520]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:0934  add di, word ptr [0x220]  [x9520]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x220u)), false));
    // 1501:0938  mov dx, 0x3c4  [x9520]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:093b  mov ax, 0x102  [x9520]
    c.a.x = (uint16_t)(0x102u);
    // 1501:093e  out dx, ax  [x9520]
    c.ip = 0x93fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:093f  mov dx, 0x3ce  [x9520]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0942  mov ax, 4  [x9520]
    c.a.x = (uint16_t)(0x4u);
    // 1501:0945  out dx, ax  [x9520]
    c.ip = 0x946u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0946  test byte ptr [si], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x))) & (0x1u), true);
    // 1501:0949  je 0x94e  [x9520]
    if (c.zf) goto L1595e;
L1595b:
    if (c.tracing) c.traceAt(0x1595b);
    // 1501:094b  or byte ptr es:[di], cl  [x6800]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), true));
L1595e:
    if (c.tracing) c.traceAt(0x1595e);
    // 1501:094e  test byte ptr [si + 0xe], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeu))) & (0x1u), true);
    // 1501:0952  je 0x959  [x9520]
    if (c.zf) goto L15969;
L15964:
    if (c.tracing) c.traceAt(0x15964);
    // 1501:0954  or byte ptr es:[di + 0x7d0], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), true));
L15969:
    if (c.tracing) c.traceAt(0x15969);
    // 1501:0959  test byte ptr [si + 0x1c], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x1cu))) & (0x1u), true);
    // 1501:095d  je 0x964  [x9520]
    if (c.zf) goto L15974;
L1596f:
    if (c.tracing) c.traceAt(0x1596f);
    // 1501:095f  or byte ptr es:[di + 0xfa0], cl  [x5394]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), true));
L15974:
    if (c.tracing) c.traceAt(0x15974);
    // 1501:0964  test byte ptr [si + 0x2a], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x2au))) & (0x1u), true);
    // 1501:0968  je 0x96f  [x9520]
    if (c.zf) goto L1597f;
L1597a:
    if (c.tracing) c.traceAt(0x1597a);
    // 1501:096a  or byte ptr es:[di + 0x1770], cl  [x4046]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), true));
L1597f:
    if (c.tracing) c.traceAt(0x1597f);
    // 1501:096f  test byte ptr [si + 0x38], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x38u))) & (0x1u), true);
    // 1501:0973  je 0x97a  [x9520]
    if (c.zf) goto L1598a;
L15985:
    if (c.tracing) c.traceAt(0x15985);
    // 1501:0975  or byte ptr es:[di + 0x1f40], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), true));
L1598a:
    if (c.tracing) c.traceAt(0x1598a);
    // 1501:097a  test byte ptr [si + 0x46], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x46u))) & (0x1u), true);
    // 1501:097e  je 0x985  [x9520]
    if (c.zf) goto L15995;
L15990:
    if (c.tracing) c.traceAt(0x15990);
    // 1501:0980  or byte ptr es:[di + 0x2710], cl  [x6086]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), true));
L15995:
    if (c.tracing) c.traceAt(0x15995);
    // 1501:0985  test byte ptr [si + 0x54], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x54u))) & (0x1u), true);
    // 1501:0989  je 0x990  [x9520]
    if (c.zf) goto L159a0;
L1599b:
    if (c.tracing) c.traceAt(0x1599b);
    // 1501:098b  or byte ptr es:[di + 0x2ee0], cl  [x6154]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), true));
L159a0:
    if (c.tracing) c.traceAt(0x159a0);
    // 1501:0990  test byte ptr [si + 0x62], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x62u))) & (0x1u), true);
    // 1501:0994  je 0x99b  [x9520]
    if (c.zf) goto L159ab;
L159a6:
    if (c.tracing) c.traceAt(0x159a6);
    // 1501:0996  or byte ptr es:[di + 0x36b0], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), true));
L159ab:
    if (c.tracing) c.traceAt(0x159ab);
    // 1501:099b  test byte ptr [si + 0x70], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x70u))) & (0x1u), true);
    // 1501:099f  je 0x9a6  [x9520]
    if (c.zf) goto L159b6;
L159b1:
    if (c.tracing) c.traceAt(0x159b1);
    // 1501:09a1  or byte ptr es:[di + 0x3e80], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), true));
L159b6:
    if (c.tracing) c.traceAt(0x159b6);
    // 1501:09a6  test byte ptr [si + 0x7e], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x7eu))) & (0x1u), true);
    // 1501:09aa  je 0x9b1  [x9520]
    if (c.zf) goto L159c1;
L159bc:
    if (c.tracing) c.traceAt(0x159bc);
    // 1501:09ac  or byte ptr es:[di + 0x4650], cl  [x4760]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), true));
L159c1:
    if (c.tracing) c.traceAt(0x159c1);
    // 1501:09b1  test byte ptr [si + 0x8c], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x8cu))) & (0x1u), true);
    // 1501:09b6  je 0x9bd  [x9520]
    if (c.zf) goto L159cd;
L159c8:
    if (c.tracing) c.traceAt(0x159c8);
    // 1501:09b8  or byte ptr es:[di + 0x4e20], cl  [x4012]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), true));
L159cd:
    if (c.tracing) c.traceAt(0x159cd);
    // 1501:09bd  test byte ptr [si + 0x9a], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x9au))) & (0x1u), true);
    // 1501:09c2  je 0x9c9  [x9520]
    if (c.zf) goto L159d9;
L159d4:
    if (c.tracing) c.traceAt(0x159d4);
    // 1501:09c4  or byte ptr es:[di + 0x55f0], cl  [x6166]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), true));
L159d9:
    if (c.tracing) c.traceAt(0x159d9);
    // 1501:09c9  test byte ptr [si + 0xa8], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xa8u))) & (0x1u), true);
    // 1501:09ce  je 0x9d5  [x9520]
    if (c.zf) goto L159e5;
L159e0:
    if (c.tracing) c.traceAt(0x159e0);
    // 1501:09d0  or byte ptr es:[di + 0x5dc0], cl  [x4760]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), true));
L159e5:
    if (c.tracing) c.traceAt(0x159e5);
    // 1501:09d5  test byte ptr [si + 0xb6], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xb6u))) & (0x1u), true);
    // 1501:09da  je 0x9e1  [x9520]
    if (c.zf) goto L159f1;
L159ec:
    if (c.tracing) c.traceAt(0x159ec);
    // 1501:09dc  or byte ptr es:[di + 0x6590], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), true));
L159f1:
    if (c.tracing) c.traceAt(0x159f1);
    // 1501:09e1  test byte ptr [si + 0xc4], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xc4u))) & (0x1u), true);
    // 1501:09e6  je 0x9ed  [x9520]
    if (c.zf) goto L159fd;
L159f8:
    if (c.tracing) c.traceAt(0x159f8);
    // 1501:09e8  or byte ptr es:[di + 0x6d60], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), true));
L159fd:
    if (c.tracing) c.traceAt(0x159fd);
    // 1501:09ed  test byte ptr [si + 0xd2], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xd2u))) & (0x1u), true);
    // 1501:09f2  je 0x9f9  [x9520]
    if (c.zf) goto L15a09;
L15a04:
    if (c.tracing) c.traceAt(0x15a04);
    // 1501:09f4  or byte ptr es:[di + 0x7530], cl  [x8840]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), true));
L15a09:
    if (c.tracing) c.traceAt(0x15a09);
    // 1501:09f9  test byte ptr [si + 0xe0], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xe0u))) & (0x1u), true);
    // 1501:09fe  je 0xa05  [x9520]
    if (c.zf) goto L15a15;
L15a10:
    if (c.tracing) c.traceAt(0x15a10);
    // 1501:0a00  or byte ptr es:[di + 0x7d00], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), true));
L15a15:
    if (c.tracing) c.traceAt(0x15a15);
    // 1501:0a05  test byte ptr [si + 0xee], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeeu))) & (0x1u), true);
    // 1501:0a0a  je 0xa11  [x9520]
    if (c.zf) goto L15a21;
L15a1c:
    if (c.tracing) c.traceAt(0x15a1c);
    // 1501:0a0c  or byte ptr es:[di - 0x7b30], cl  [x4760]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), true));
L15a21:
    if (c.tracing) c.traceAt(0x15a21);
    // 1501:0a11  test byte ptr [si + 0xfc], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xfcu))) & (0x1u), true);
    // 1501:0a16  je 0xa1d  [x9520]
    if (c.zf) goto L15a2d;
L15a28:
    if (c.tracing) c.traceAt(0x15a28);
    // 1501:0a18  or byte ptr es:[di - 0x7360], cl  [x3400]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), true));
L15a2d:
    if (c.tracing) c.traceAt(0x15a2d);
    // 1501:0a1d  test byte ptr [si + 0x10a], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x10au))) & (0x1u), true);
    // 1501:0a22  je 0xa29  [x9520]
    if (c.zf) goto L15a39;
L15a34:
    if (c.tracing) c.traceAt(0x15a34);
    // 1501:0a24  or byte ptr es:[di - 0x6b90], cl  [x7480]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), true));
L15a39:
    if (c.tracing) c.traceAt(0x15a39);
    // 1501:0a29  test byte ptr [si + 0x118], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x118u))) & (0x1u), true);
    // 1501:0a2e  je 0xa35  [x9520]
    if (c.zf) goto L15a45;
L15a40:
    if (c.tracing) c.traceAt(0x15a40);
    // 1501:0a30  or byte ptr es:[di - 0x63c0], cl  [x5474]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), true));
L15a45:
    if (c.tracing) c.traceAt(0x15a45);
    // 1501:0a35  test byte ptr [si + 0x126], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x126u))) & (0x1u), true);
    // 1501:0a3a  je 0xa41  [x9520]
    if (c.zf) goto L15a51;
L15a4c:
    if (c.tracing) c.traceAt(0x15a4c);
    // 1501:0a3c  or byte ptr es:[di - 0x5bf0], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), true));
L15a51:
    if (c.tracing) c.traceAt(0x15a51);
    // 1501:0a41  test byte ptr [si + 0x134], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x134u))) & (0x1u), true);
    // 1501:0a46  je 0xa4d  [x9520]
    if (c.zf) goto L15a5d;
L15a58:
    if (c.tracing) c.traceAt(0x15a58);
    // 1501:0a48  or byte ptr es:[di - 0x5420], cl  [x5394]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), true));
L15a5d:
    if (c.tracing) c.traceAt(0x15a5d);
    // 1501:0a4d  test byte ptr [si + 0x142], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x142u))) & (0x1u), true);
    // 1501:0a52  je 0xa59  [x9520]
    if (c.zf) goto L15a69;
L15a64:
    if (c.tracing) c.traceAt(0x15a64);
    // 1501:0a54  or byte ptr es:[di - 0x4c50], cl  [x4772]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), true));
L15a69:
    if (c.tracing) c.traceAt(0x15a69);
    // 1501:0a59  test byte ptr [si + 0x150], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x150u))) & (0x1u), true);
    // 1501:0a5e  je 0xa65  [x9520]
    if (c.zf) goto L15a75;
L15a70:
    if (c.tracing) c.traceAt(0x15a70);
    // 1501:0a60  or byte ptr es:[di - 0x4480], cl  [x6074]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), true));
L15a75:
    if (c.tracing) c.traceAt(0x15a75);
    // 1501:0a65  test byte ptr [si + 0x15e], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x15eu))) & (0x1u), true);
    // 1501:0a6a  je 0xa71  [x9520]
    if (c.zf) goto L15a81;
L15a7c:
    if (c.tracing) c.traceAt(0x15a7c);
    // 1501:0a6c  or byte ptr es:[di - 0x3cb0], cl  [x5406]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), true));
L15a81:
    if (c.tracing) c.traceAt(0x15a81);
    // 1501:0a71  test byte ptr [si + 0x16c], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x16cu))) & (0x1u), true);
    // 1501:0a76  je 0xa7d  [x9520]
    if (c.zf) goto L15a8d;
L15a88:
    if (c.tracing) c.traceAt(0x15a88);
    // 1501:0a78  or byte ptr es:[di - 0x34e0], cl  [x6052]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), true));
L15a8d:
    if (c.tracing) c.traceAt(0x15a8d);
    // 1501:0a7d  test byte ptr [si + 0x17a], 1  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x17au))) & (0x1u), true);
    // 1501:0a82  je 0xa89  [x9520]
    if (c.zf) goto L15a99;
L15a94:
    if (c.tracing) c.traceAt(0x15a94);
    // 1501:0a84  or byte ptr es:[di - 0x2d10], cl  [x8846]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), true));
L15a99:
    if (c.tracing) c.traceAt(0x15a99);
    // 1501:0a89  mov dx, 0x3c4  [x9520]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0a8c  mov ax, 0x202  [x9520]
    c.a.x = (uint16_t)(0x202u);
    // 1501:0a8f  out dx, ax  [x9520]
    c.ip = 0xa90u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0a90  mov dx, 0x3ce  [x9520]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0a93  mov ax, 0x104  [x9520]
    c.a.x = (uint16_t)(0x104u);
    // 1501:0a96  out dx, ax  [x9520]
    c.ip = 0xa97u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0a97  test byte ptr [si], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x))) & (0x2u), true);
    // 1501:0a9a  je 0xa9f  [x9520]
    if (c.zf) goto L15aaf;
L15aac:
    if (c.tracing) c.traceAt(0x15aac);
    // 1501:0a9c  or byte ptr es:[di], cl  [x2686]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), true));
L15aaf:
    if (c.tracing) c.traceAt(0x15aaf);
    // 1501:0a9f  test byte ptr [si + 0xe], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeu))) & (0x2u), true);
    // 1501:0aa3  je 0xaaa  [x9520]
    if (c.zf) goto L15aba;
L15ab5:
    if (c.tracing) c.traceAt(0x15ab5);
    // 1501:0aa5  or byte ptr es:[di + 0x7d0], cl  [x6800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), true));
L15aba:
    if (c.tracing) c.traceAt(0x15aba);
    // 1501:0aaa  test byte ptr [si + 0x1c], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x1cu))) & (0x2u), true);
    // 1501:0aae  je 0xab5  [x9520]
    if (c.zf) goto L15ac5;
L15ac0:
    if (c.tracing) c.traceAt(0x15ac0);
    // 1501:0ab0  or byte ptr es:[di + 0xfa0], cl  [x6200]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), true));
L15ac5:
    if (c.tracing) c.traceAt(0x15ac5);
    // 1501:0ab5  test byte ptr [si + 0x2a], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x2au))) & (0x2u), true);
    // 1501:0ab9  je 0xac0  [x9520]
    if (c.zf) goto L15ad0;
L15acb:
    if (c.tracing) c.traceAt(0x15acb);
    // 1501:0abb  or byte ptr es:[di + 0x1770], cl  [x6800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), true));
L15ad0:
    if (c.tracing) c.traceAt(0x15ad0);
    // 1501:0ac0  test byte ptr [si + 0x38], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x38u))) & (0x2u), true);
    // 1501:0ac4  je 0xacb  [x9520]
    if (c.zf) goto L15adb;
L15ad6:
    if (c.tracing) c.traceAt(0x15ad6);
    // 1501:0ac6  or byte ptr es:[di + 0x1f40], cl  [x6800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), true));
L15adb:
    if (c.tracing) c.traceAt(0x15adb);
    // 1501:0acb  test byte ptr [si + 0x46], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x46u))) & (0x2u), true);
    // 1501:0acf  je 0xad6  [x9520]
    if (c.zf) goto L15ae6;
L15ae1:
    if (c.tracing) c.traceAt(0x15ae1);
    // 1501:0ad1  or byte ptr es:[di + 0x2710], cl  [x6800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), true));
L15ae6:
    if (c.tracing) c.traceAt(0x15ae6);
    // 1501:0ad6  test byte ptr [si + 0x54], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x54u))) & (0x2u), true);
    // 1501:0ada  je 0xae1  [x9520]
    if (c.zf) goto L15af1;
L15aec:
    if (c.tracing) c.traceAt(0x15aec);
    // 1501:0adc  or byte ptr es:[di + 0x2ee0], cl  [x6834]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), true));
L15af1:
    if (c.tracing) c.traceAt(0x15af1);
    // 1501:0ae1  test byte ptr [si + 0x62], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x62u))) & (0x2u), true);
    // 1501:0ae5  je 0xaec  [x9520]
    if (c.zf) goto L15afc;
L15af7:
    if (c.tracing) c.traceAt(0x15af7);
    // 1501:0ae7  or byte ptr es:[di + 0x36b0], cl  [x4760]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), true));
L15afc:
    if (c.tracing) c.traceAt(0x15afc);
    // 1501:0aec  test byte ptr [si + 0x70], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x70u))) & (0x2u), true);
    // 1501:0af0  je 0xaf7  [x9520]
    if (c.zf) goto L15b07;
L15b02:
    if (c.tracing) c.traceAt(0x15b02);
    // 1501:0af2  or byte ptr es:[di + 0x3e80], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), true));
L15b07:
    if (c.tracing) c.traceAt(0x15b07);
    // 1501:0af7  test byte ptr [si + 0x7e], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x7eu))) & (0x2u), true);
    // 1501:0afb  je 0xb02  [x9520]
    if (c.zf) goto L15b12;
L15b0d:
    if (c.tracing) c.traceAt(0x15b0d);
    // 1501:0afd  or byte ptr es:[di + 0x4650], cl  [x4726]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), true));
L15b12:
    if (c.tracing) c.traceAt(0x15b12);
    // 1501:0b02  test byte ptr [si + 0x8c], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x8cu))) & (0x2u), true);
    // 1501:0b07  je 0xb0e  [x9520]
    if (c.zf) goto L15b1e;
L15b19:
    if (c.tracing) c.traceAt(0x15b19);
    // 1501:0b09  or byte ptr es:[di + 0x4e20], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), true));
L15b1e:
    if (c.tracing) c.traceAt(0x15b1e);
    // 1501:0b0e  test byte ptr [si + 0x9a], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x9au))) & (0x2u), true);
    // 1501:0b13  je 0xb1a  [x9520]
    if (c.zf) goto L15b2a;
L15b25:
    if (c.tracing) c.traceAt(0x15b25);
    // 1501:0b15  or byte ptr es:[di + 0x55f0], cl  [x7434]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), true));
L15b2a:
    if (c.tracing) c.traceAt(0x15b2a);
    // 1501:0b1a  test byte ptr [si + 0xa8], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xa8u))) & (0x2u), true);
    // 1501:0b1f  je 0xb26  [x9520]
    if (c.zf) goto L15b36;
L15b31:
    if (c.tracing) c.traceAt(0x15b31);
    // 1501:0b21  or byte ptr es:[di + 0x5dc0], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), true));
L15b36:
    if (c.tracing) c.traceAt(0x15b36);
    // 1501:0b26  test byte ptr [si + 0xb6], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xb6u))) & (0x2u), true);
    // 1501:0b2b  je 0xb32  [x9520]
    if (c.zf) goto L15b42;
L15b3d:
    if (c.tracing) c.traceAt(0x15b3d);
    // 1501:0b2d  or byte ptr es:[di + 0x6590], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), true));
L15b42:
    if (c.tracing) c.traceAt(0x15b42);
    // 1501:0b32  test byte ptr [si + 0xc4], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xc4u))) & (0x2u), true);
    // 1501:0b37  je 0xb3e  [x9520]
    if (c.zf) goto L15b4e;
L15b49:
    if (c.tracing) c.traceAt(0x15b49);
    // 1501:0b39  or byte ptr es:[di + 0x6d60], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), true));
L15b4e:
    if (c.tracing) c.traceAt(0x15b4e);
    // 1501:0b3e  test byte ptr [si + 0xd2], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xd2u))) & (0x2u), true);
    // 1501:0b43  je 0xb4a  [x9520]
    if (c.zf) goto L15b5a;
L15b55:
    if (c.tracing) c.traceAt(0x15b55);
    // 1501:0b45  or byte ptr es:[di + 0x7530], cl  [x680]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), true));
L15b5a:
    if (c.tracing) c.traceAt(0x15b5a);
    // 1501:0b4a  test byte ptr [si + 0xe0], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xe0u))) & (0x2u), true);
    // 1501:0b4f  je 0xb56  [x9520]
    if (c.zf) goto L15b66;
L15b61:
    if (c.tracing) c.traceAt(0x15b61);
    // 1501:0b51  or byte ptr es:[di + 0x7d00], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), true));
L15b66:
    if (c.tracing) c.traceAt(0x15b66);
    // 1501:0b56  test byte ptr [si + 0xee], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeeu))) & (0x2u), true);
    // 1501:0b5b  je 0xb62  [x9520]
    if (c.zf) goto L15b72;
L15b6d:
    if (c.tracing) c.traceAt(0x15b6d);
    // 1501:0b5d  or byte ptr es:[di - 0x7b30], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), true));
L15b72:
    if (c.tracing) c.traceAt(0x15b72);
    // 1501:0b62  test byte ptr [si + 0xfc], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xfcu))) & (0x2u), true);
    // 1501:0b67  je 0xb6e  [x9520]
    if (c.zf) goto L15b7e;
L15b79:
    if (c.tracing) c.traceAt(0x15b79);
    // 1501:0b69  or byte ptr es:[di - 0x7360], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), true));
L15b7e:
    if (c.tracing) c.traceAt(0x15b7e);
    // 1501:0b6e  test byte ptr [si + 0x10a], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x10au))) & (0x2u), true);
    // 1501:0b73  je 0xb7a  [x9520]
    if (c.zf) goto L15b8a;
L15b85:
    if (c.tracing) c.traceAt(0x15b85);
    // 1501:0b75  or byte ptr es:[di - 0x6b90], cl  [x6766]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), true));
L15b8a:
    if (c.tracing) c.traceAt(0x15b8a);
    // 1501:0b7a  test byte ptr [si + 0x118], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x118u))) & (0x2u), true);
    // 1501:0b7f  je 0xb86  [x9520]
    if (c.zf) goto L15b96;
L15b91:
    if (c.tracing) c.traceAt(0x15b91);
    // 1501:0b81  or byte ptr es:[di - 0x63c0], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), true));
L15b96:
    if (c.tracing) c.traceAt(0x15b96);
    // 1501:0b86  test byte ptr [si + 0x126], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x126u))) & (0x2u), true);
    // 1501:0b8b  je 0xb92  [x9520]
    if (c.zf) goto L15ba2;
L15b9d:
    if (c.tracing) c.traceAt(0x15b9d);
    // 1501:0b8d  or byte ptr es:[di - 0x5bf0], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), true));
L15ba2:
    if (c.tracing) c.traceAt(0x15ba2);
    // 1501:0b92  test byte ptr [si + 0x134], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x134u))) & (0x2u), true);
    // 1501:0b97  je 0xb9e  [x9520]
    if (c.zf) goto L15bae;
L15ba9:
    if (c.tracing) c.traceAt(0x15ba9);
    // 1501:0b99  or byte ptr es:[di - 0x5420], cl  [x6880]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), true));
L15bae:
    if (c.tracing) c.traceAt(0x15bae);
    // 1501:0b9e  test byte ptr [si + 0x142], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x142u))) & (0x2u), true);
    // 1501:0ba3  je 0xbaa  [x9520]
    if (c.zf) goto L15bba;
L15bb5:
    if (c.tracing) c.traceAt(0x15bb5);
    // 1501:0ba5  or byte ptr es:[di - 0x4c50], cl  [x7480]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), true));
L15bba:
    if (c.tracing) c.traceAt(0x15bba);
    // 1501:0baa  test byte ptr [si + 0x150], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x150u))) & (0x2u), true);
    // 1501:0baf  je 0xbb6  [x9520]
    if (c.zf) goto L15bc6;
L15bc1:
    if (c.tracing) c.traceAt(0x15bc1);
    // 1501:0bb1  or byte ptr es:[di - 0x4480], cl  [x6754]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), true));
L15bc6:
    if (c.tracing) c.traceAt(0x15bc6);
    // 1501:0bb6  test byte ptr [si + 0x15e], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x15eu))) & (0x2u), true);
    // 1501:0bbb  je 0xbc2  [x9520]
    if (c.zf) goto L15bd2;
L15bcd:
    if (c.tracing) c.traceAt(0x15bcd);
    // 1501:0bbd  or byte ptr es:[di - 0x3cb0], cl  [x6154]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), true));
L15bd2:
    if (c.tracing) c.traceAt(0x15bd2);
    // 1501:0bc2  test byte ptr [si + 0x16c], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x16cu))) & (0x2u), true);
    // 1501:0bc7  je 0xbce  [x9520]
    if (c.zf) goto L15bde;
L15bd9:
    if (c.tracing) c.traceAt(0x15bd9);
    // 1501:0bc9  or byte ptr es:[di - 0x34e0], cl  [x6200]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), true));
L15bde:
    if (c.tracing) c.traceAt(0x15bde);
    // 1501:0bce  test byte ptr [si + 0x17a], 2  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x17au))) & (0x2u), true);
    // 1501:0bd3  je 0xbda  [x9520]
    if (c.zf) goto L15bea;
L15be5:
    if (c.tracing) c.traceAt(0x15be5);
    // 1501:0bd5  or byte ptr es:[di - 0x2d10], cl  [x674]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), true));
L15bea:
    if (c.tracing) c.traceAt(0x15bea);
    // 1501:0bda  mov dx, 0x3c4  [x9520]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0bdd  mov ax, 0x402  [x9520]
    c.a.x = (uint16_t)(0x402u);
    // 1501:0be0  out dx, ax  [x9520]
    c.ip = 0xbe1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0be1  mov dx, 0x3ce  [x9520]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0be4  mov ax, 0x204  [x9520]
    c.a.x = (uint16_t)(0x204u);
    // 1501:0be7  out dx, ax  [x9520]
    c.ip = 0xbe8u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0be8  test byte ptr [si], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x))) & (0x4u), true);
    // 1501:0beb  je 0xbf0  [x9520]
    if (c.zf) goto L15c00;
L15bfd:
    if (c.tracing) c.traceAt(0x15bfd);
    // 1501:0bed  or byte ptr es:[di], cl  [x714]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.l), true));
L15c00:
    if (c.tracing) c.traceAt(0x15c00);
    // 1501:0bf0  test byte ptr [si + 0xe], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeu))) & (0x4u), true);
    // 1501:0bf4  je 0xbfb  [x9520]
    if (c.zf) goto L15c0b;
L15c06:
    if (c.tracing) c.traceAt(0x15c06);
    // 1501:0bf6  or byte ptr es:[di + 0x7d0], cl  [x2720]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d0u))) | (c.c.l), true));
L15c0b:
    if (c.tracing) c.traceAt(0x15c0b);
    // 1501:0bfb  test byte ptr [si + 0x1c], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x1cu))) & (0x4u), true);
    // 1501:0bff  je 0xc06  [x9520]
    if (c.zf) goto L15c16;
L15c11:
    if (c.tracing) c.traceAt(0x15c11);
    // 1501:0c01  or byte ptr es:[di + 0xfa0], cl  [x3400]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xfa0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xfa0u))) | (c.c.l), true));
L15c16:
    if (c.tracing) c.traceAt(0x15c16);
    // 1501:0c06  test byte ptr [si + 0x2a], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x2au))) & (0x4u), true);
    // 1501:0c0a  je 0xc11  [x9520]
    if (c.zf) goto L15c21;
L15c1c:
    if (c.tracing) c.traceAt(0x15c1c);
    // 1501:0c0c  or byte ptr es:[di + 0x1770], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1770u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1770u))) | (c.c.l), true));
L15c21:
    if (c.tracing) c.traceAt(0x15c21);
    // 1501:0c11  test byte ptr [si + 0x38], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x38u))) & (0x4u), true);
    // 1501:0c15  je 0xc1c  [x9520]
    if (c.zf) goto L15c2c;
L15c27:
    if (c.tracing) c.traceAt(0x15c27);
    // 1501:0c17  or byte ptr es:[di + 0x1f40], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1f40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1f40u))) | (c.c.l), true));
L15c2c:
    if (c.tracing) c.traceAt(0x15c2c);
    // 1501:0c1c  test byte ptr [si + 0x46], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x46u))) & (0x4u), true);
    // 1501:0c20  je 0xc27  [x9520]
    if (c.zf) goto L15c37;
L15c32:
    if (c.tracing) c.traceAt(0x15c32);
    // 1501:0c22  or byte ptr es:[di + 0x2710], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2710u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2710u))) | (c.c.l), true));
L15c37:
    if (c.tracing) c.traceAt(0x15c37);
    // 1501:0c27  test byte ptr [si + 0x54], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x54u))) & (0x4u), true);
    // 1501:0c2b  je 0xc32  [x9520]
    if (c.zf) goto L15c42;
L15c3d:
    if (c.tracing) c.traceAt(0x15c3d);
    // 1501:0c2d  or byte ptr es:[di + 0x2ee0], cl  [x4046]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2ee0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2ee0u))) | (c.c.l), true));
L15c42:
    if (c.tracing) c.traceAt(0x15c42);
    // 1501:0c32  test byte ptr [si + 0x62], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x62u))) & (0x4u), true);
    // 1501:0c36  je 0xc3d  [x9520]
    if (c.zf) goto L15c4d;
L15c48:
    if (c.tracing) c.traceAt(0x15c48);
    // 1501:0c38  or byte ptr es:[di + 0x36b0], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x36b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x36b0u))) | (c.c.l), true));
L15c4d:
    if (c.tracing) c.traceAt(0x15c4d);
    // 1501:0c3d  test byte ptr [si + 0x70], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x70u))) & (0x4u), true);
    // 1501:0c41  je 0xc48  [x9520]
    if (c.zf) goto L15c58;
L15c53:
    if (c.tracing) c.traceAt(0x15c53);
    // 1501:0c43  or byte ptr es:[di + 0x3e80], cl  [x6120]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3e80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3e80u))) | (c.c.l), true));
L15c58:
    if (c.tracing) c.traceAt(0x15c58);
    // 1501:0c48  test byte ptr [si + 0x7e], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x7eu))) & (0x4u), true);
    // 1501:0c4c  je 0xc53  [x9520]
    if (c.zf) goto L15c63;
L15c5e:
    if (c.tracing) c.traceAt(0x15c5e);
    // 1501:0c4e  or byte ptr es:[di + 0x4650], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4650u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4650u))) | (c.c.l), true));
L15c63:
    if (c.tracing) c.traceAt(0x15c63);
    // 1501:0c53  test byte ptr [si + 0x8c], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x8cu))) & (0x4u), true);
    // 1501:0c58  je 0xc5f  [x9520]
    if (c.zf) goto L15c6f;
L15c6a:
    if (c.tracing) c.traceAt(0x15c6a);
    // 1501:0c5a  or byte ptr es:[di + 0x4e20], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4e20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4e20u))) | (c.c.l), true));
L15c6f:
    if (c.tracing) c.traceAt(0x15c6f);
    // 1501:0c5f  test byte ptr [si + 0x9a], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x9au))) & (0x4u), true);
    // 1501:0c64  je 0xc6b  [x9520]
    if (c.zf) goto L15c7b;
L15c76:
    if (c.tracing) c.traceAt(0x15c76);
    // 1501:0c66  or byte ptr es:[di + 0x55f0], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x55f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x55f0u))) | (c.c.l), true));
L15c7b:
    if (c.tracing) c.traceAt(0x15c7b);
    // 1501:0c6b  test byte ptr [si + 0xa8], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xa8u))) & (0x4u), true);
    // 1501:0c70  je 0xc77  [x9520]
    if (c.zf) goto L15c87;
L15c82:
    if (c.tracing) c.traceAt(0x15c82);
    // 1501:0c72  or byte ptr es:[di + 0x5dc0], cl  [x2686]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5dc0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x5dc0u))) | (c.c.l), true));
L15c87:
    if (c.tracing) c.traceAt(0x15c87);
    // 1501:0c77  test byte ptr [si + 0xb6], 4  [x9521]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xb6u))) & (0x4u), true);
    // 1501:0c7c  je 0xc83  [x9521]
    if (c.zf) goto L15c93;
    c.notTranslated(0x15c8e, "fall-through");
L15c93:
    if (c.tracing) c.traceAt(0x15c93);
    // 1501:0c83  test byte ptr [si + 0xc4], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xc4u))) & (0x4u), true);
    // 1501:0c88  je 0xc8f  [x9520]
    if (c.zf) goto L15c9f;
L15c9a:
    if (c.tracing) c.traceAt(0x15c9a);
    // 1501:0c8a  or byte ptr es:[di + 0x6d60], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), true));
L15c9f:
    if (c.tracing) c.traceAt(0x15c9f);
    // 1501:0c8f  test byte ptr [si + 0xd2], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xd2u))) & (0x4u), true);
    // 1501:0c94  je 0xc9b  [x9520]
    if (c.zf) goto L15cab;
    c.notTranslated(0x15ca6, "fall-through");
L15cab:
    if (c.tracing) c.traceAt(0x15cab);
    // 1501:0c9b  test byte ptr [si + 0xe0], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xe0u))) & (0x4u), true);
    // 1501:0ca0  je 0xca7  [x9520]
    if (c.zf) goto L15cb7;
L15cb2:
    if (c.tracing) c.traceAt(0x15cb2);
    // 1501:0ca2  or byte ptr es:[di + 0x7d00], cl  [x2720]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), true));
L15cb7:
    if (c.tracing) c.traceAt(0x15cb7);
    // 1501:0ca7  test byte ptr [si + 0xee], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeeu))) & (0x4u), true);
    // 1501:0cac  je 0xcb3  [x9520]
    if (c.zf) goto L15cc3;
L15cbe:
    if (c.tracing) c.traceAt(0x15cbe);
    // 1501:0cae  or byte ptr es:[di - 0x7b30], cl  [x2720]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), true));
L15cc3:
    if (c.tracing) c.traceAt(0x15cc3);
    // 1501:0cb3  test byte ptr [si + 0xfc], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xfcu))) & (0x4u), true);
    // 1501:0cb8  je 0xcbf  [x9520]
    if (c.zf) goto L15ccf;
L15cca:
    if (c.tracing) c.traceAt(0x15cca);
    // 1501:0cba  or byte ptr es:[di - 0x7360], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), true));
L15ccf:
    if (c.tracing) c.traceAt(0x15ccf);
    // 1501:0cbf  test byte ptr [si + 0x10a], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x10au))) & (0x4u), true);
    // 1501:0cc4  je 0xccb  [x9520]
    if (c.zf) goto L15cdb;
L15cd6:
    if (c.tracing) c.traceAt(0x15cd6);
    // 1501:0cc6  or byte ptr es:[di - 0x6b90], cl  [x5440]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), true));
L15cdb:
    if (c.tracing) c.traceAt(0x15cdb);
    // 1501:0ccb  test byte ptr [si + 0x118], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x118u))) & (0x4u), true);
    // 1501:0cd0  je 0xcd7  [x9520]
    if (c.zf) goto L15ce7;
L15ce2:
    if (c.tracing) c.traceAt(0x15ce2);
    // 1501:0cd2  or byte ptr es:[di - 0x63c0], cl  [x4114]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), true));
L15ce7:
    if (c.tracing) c.traceAt(0x15ce7);
    // 1501:0cd7  test byte ptr [si + 0x126], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x126u))) & (0x4u), true);
    // 1501:0cdc  je 0xce3  [x9520]
    if (c.zf) goto L15cf3;
L15cee:
    if (c.tracing) c.traceAt(0x15cee);
    // 1501:0cde  or byte ptr es:[di - 0x5bf0], cl  [x4080]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), true));
L15cf3:
    if (c.tracing) c.traceAt(0x15cf3);
    // 1501:0ce3  test byte ptr [si + 0x134], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x134u))) & (0x4u), true);
    // 1501:0ce8  je 0xcef  [x9520]
    if (c.zf) goto L15cff;
L15cfa:
    if (c.tracing) c.traceAt(0x15cfa);
    // 1501:0cea  or byte ptr es:[di - 0x5420], cl  [x2720]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), true));
L15cff:
    if (c.tracing) c.traceAt(0x15cff);
    // 1501:0cef  test byte ptr [si + 0x142], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x142u))) & (0x4u), true);
    // 1501:0cf4  je 0xcfb  [x9520]
    if (c.zf) goto L15d0b;
L15d06:
    if (c.tracing) c.traceAt(0x15d06);
    // 1501:0cf6  or byte ptr es:[di - 0x4c50], cl  [x2754]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), true));
L15d0b:
    if (c.tracing) c.traceAt(0x15d0b);
    // 1501:0cfb  test byte ptr [si + 0x150], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x150u))) & (0x4u), true);
    // 1501:0d00  je 0xd07  [x9520]
    if (c.zf) goto L15d17;
L15d12:
    if (c.tracing) c.traceAt(0x15d12);
    // 1501:0d02  or byte ptr es:[di - 0x4480], cl  [x2800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), true));
L15d17:
    if (c.tracing) c.traceAt(0x15d17);
    // 1501:0d07  test byte ptr [si + 0x15e], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x15eu))) & (0x4u), true);
    // 1501:0d0c  je 0xd13  [x9520]
    if (c.zf) goto L15d23;
L15d1e:
    if (c.tracing) c.traceAt(0x15d1e);
    // 1501:0d0e  or byte ptr es:[di - 0x3cb0], cl  [x3434]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), true));
L15d23:
    if (c.tracing) c.traceAt(0x15d23);
    // 1501:0d13  test byte ptr [si + 0x16c], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x16cu))) & (0x4u), true);
    // 1501:0d18  je 0xd1f  [x9520]
    if (c.zf) goto L15d2f;
L15d2a:
    if (c.tracing) c.traceAt(0x15d2a);
    // 1501:0d1a  or byte ptr es:[di - 0x34e0], cl  [x3320]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), true));
L15d2f:
    if (c.tracing) c.traceAt(0x15d2f);
    // 1501:0d1f  test byte ptr [si + 0x17a], 4  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x17au))) & (0x4u), true);
    // 1501:0d24  je 0xd2b  [x9520]
    if (c.zf) goto L15d3b;
L15d36:
    if (c.tracing) c.traceAt(0x15d36);
    // 1501:0d26  or byte ptr es:[di - 0x2d10], cl  [x40]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), true));
L15d3b:
    if (c.tracing) c.traceAt(0x15d3b);
    // 1501:0d2b  mov dx, 0x3c4  [x9520]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0d2e  mov ax, 0x802  [x9520]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0d31  out dx, ax  [x9520]
    c.ip = 0xd32u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0d32  mov dx, 0x3ce  [x9520]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0d35  mov ax, 0x304  [x9520]
    c.a.x = (uint16_t)(0x304u);
    // 1501:0d38  out dx, ax  [x9520]
    c.ip = 0xd39u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0d39  test byte ptr [si], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x))) & (0x8u), true);
    // 1501:0d3c  je 0xd41  [x9520]
    if (c.zf) goto L15d51;
    c.notTranslated(0x15d4e, "fall-through");
L15d51:
    if (c.tracing) c.traceAt(0x15d51);
    // 1501:0d41  test byte ptr [si + 0xe], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeu))) & (0x8u), true);
    // 1501:0d45  je 0xd4c  [x9520]
    if (c.zf) goto L15d5c;
    c.notTranslated(0x15d57, "fall-through");
L15d5c:
    if (c.tracing) c.traceAt(0x15d5c);
    // 1501:0d4c  test byte ptr [si + 0x1c], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x1cu))) & (0x8u), true);
    // 1501:0d50  je 0xd57  [x9520]
    if (c.zf) goto L15d67;
    c.notTranslated(0x15d62, "fall-through");
L15d67:
    if (c.tracing) c.traceAt(0x15d67);
    // 1501:0d57  test byte ptr [si + 0x2a], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x2au))) & (0x8u), true);
    // 1501:0d5b  je 0xd62  [x9520]
    if (c.zf) goto L15d72;
    c.notTranslated(0x15d6d, "fall-through");
L15d72:
    if (c.tracing) c.traceAt(0x15d72);
    // 1501:0d62  test byte ptr [si + 0x38], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x38u))) & (0x8u), true);
    // 1501:0d66  je 0xd6d  [x9520]
    if (c.zf) goto L15d7d;
    c.notTranslated(0x15d78, "fall-through");
L15d7d:
    if (c.tracing) c.traceAt(0x15d7d);
    // 1501:0d6d  test byte ptr [si + 0x46], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x46u))) & (0x8u), true);
    // 1501:0d71  je 0xd78  [x9520]
    if (c.zf) goto L15d88;
    c.notTranslated(0x15d83, "fall-through");
L15d88:
    if (c.tracing) c.traceAt(0x15d88);
    // 1501:0d78  test byte ptr [si + 0x54], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x54u))) & (0x8u), true);
    // 1501:0d7c  je 0xd83  [x9520]
    if (c.zf) goto L15d93;
    c.notTranslated(0x15d8e, "fall-through");
L15d93:
    if (c.tracing) c.traceAt(0x15d93);
    // 1501:0d83  test byte ptr [si + 0x62], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x62u))) & (0x8u), true);
    // 1501:0d87  je 0xd8e  [x9520]
    if (c.zf) goto L15d9e;
    c.notTranslated(0x15d99, "fall-through");
L15d9e:
    if (c.tracing) c.traceAt(0x15d9e);
    // 1501:0d8e  test byte ptr [si + 0x70], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x70u))) & (0x8u), true);
    // 1501:0d92  je 0xd99  [x9520]
    if (c.zf) goto L15da9;
    c.notTranslated(0x15da4, "fall-through");
L15da9:
    if (c.tracing) c.traceAt(0x15da9);
    // 1501:0d99  test byte ptr [si + 0x7e], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x7eu))) & (0x8u), true);
    // 1501:0d9d  je 0xda4  [x9520]
    if (c.zf) goto L15db4;
    c.notTranslated(0x15daf, "fall-through");
L15db4:
    if (c.tracing) c.traceAt(0x15db4);
    // 1501:0da4  test byte ptr [si + 0x8c], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x8cu))) & (0x8u), true);
    // 1501:0da9  je 0xdb0  [x9520]
    if (c.zf) goto L15dc0;
    c.notTranslated(0x15dbb, "fall-through");
L15dc0:
    if (c.tracing) c.traceAt(0x15dc0);
    // 1501:0db0  test byte ptr [si + 0x9a], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x9au))) & (0x8u), true);
    // 1501:0db5  je 0xdbc  [x9520]
    if (c.zf) goto L15dcc;
    c.notTranslated(0x15dc7, "fall-through");
L15dcc:
    if (c.tracing) c.traceAt(0x15dcc);
    // 1501:0dbc  test byte ptr [si + 0xa8], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xa8u))) & (0x8u), true);
    // 1501:0dc1  je 0xdc8  [x9520]
    if (c.zf) goto L15dd8;
    c.notTranslated(0x15dd3, "fall-through");
L15dd8:
    if (c.tracing) c.traceAt(0x15dd8);
    // 1501:0dc8  test byte ptr [si + 0xb6], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xb6u))) & (0x8u), true);
    // 1501:0dcd  je 0xdd4  [x9520]
    if (c.zf) goto L15de4;
L15ddf:
    if (c.tracing) c.traceAt(0x15ddf);
    // 1501:0dcf  or byte ptr es:[di + 0x6590], cl  [x80]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6590u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6590u))) | (c.c.l), true));
L15de4:
    if (c.tracing) c.traceAt(0x15de4);
    // 1501:0dd4  test byte ptr [si + 0xc4], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xc4u))) & (0x8u), true);
    // 1501:0dd9  je 0xde0  [x9520]
    if (c.zf) goto L15df0;
L15deb:
    if (c.tracing) c.traceAt(0x15deb);
    // 1501:0ddb  or byte ptr es:[di + 0x6d60], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.l), false));
L15df0:
    if (c.tracing) c.traceAt(0x15df0);
    // 1501:0de0  test byte ptr [si + 0xd2], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xd2u))) & (0x8u), true);
    // 1501:0de5  je 0xdec  [x9520]
    if (c.zf) goto L15dfc;
L15df7:
    if (c.tracing) c.traceAt(0x15df7);
    // 1501:0de7  or byte ptr es:[di + 0x7530], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7530u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7530u))) | (c.c.l), false));
L15dfc:
    if (c.tracing) c.traceAt(0x15dfc);
    // 1501:0dec  test byte ptr [si + 0xe0], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xe0u))) & (0x8u), true);
    // 1501:0df1  je 0xdf8  [x9520]
    if (c.zf) goto L15e08;
L15e03:
    if (c.tracing) c.traceAt(0x15e03);
    // 1501:0df3  or byte ptr es:[di + 0x7d00], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7d00u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x7d00u))) | (c.c.l), false));
L15e08:
    if (c.tracing) c.traceAt(0x15e08);
    // 1501:0df8  test byte ptr [si + 0xee], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xeeu))) & (0x8u), true);
    // 1501:0dfd  je 0xe04  [x9520]
    if (c.zf) goto L15e14;
L15e0f:
    if (c.tracing) c.traceAt(0x15e0f);
    // 1501:0dff  or byte ptr es:[di - 0x7b30], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff84d0u))) | (c.c.l), false));
L15e14:
    if (c.tracing) c.traceAt(0x15e14);
    // 1501:0e04  test byte ptr [si + 0xfc], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0xfcu))) & (0x8u), true);
    // 1501:0e09  je 0xe10  [x9520]
    if (c.zf) goto L15e20;
L15e1b:
    if (c.tracing) c.traceAt(0x15e1b);
    // 1501:0e0b  or byte ptr es:[di - 0x7360], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff8ca0u))) | (c.c.l), false));
L15e20:
    if (c.tracing) c.traceAt(0x15e20);
    // 1501:0e10  test byte ptr [si + 0x10a], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x10au))) & (0x8u), true);
    // 1501:0e15  je 0xe1c  [x9520]
    if (c.zf) goto L15e2c;
L15e27:
    if (c.tracing) c.traceAt(0x15e27);
    // 1501:0e17  or byte ptr es:[di - 0x6b90], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9470u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9470u))) | (c.c.l), false));
L15e2c:
    if (c.tracing) c.traceAt(0x15e2c);
    // 1501:0e1c  test byte ptr [si + 0x118], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x118u))) & (0x8u), true);
    // 1501:0e21  je 0xe28  [x9520]
    if (c.zf) goto L15e38;
L15e33:
    if (c.tracing) c.traceAt(0x15e33);
    // 1501:0e23  or byte ptr es:[di - 0x63c0], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffff9c40u))) | (c.c.l), false));
L15e38:
    if (c.tracing) c.traceAt(0x15e38);
    // 1501:0e28  test byte ptr [si + 0x126], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x126u))) & (0x8u), true);
    // 1501:0e2d  je 0xe34  [x9520]
    if (c.zf) goto L15e44;
L15e3f:
    if (c.tracing) c.traceAt(0x15e3f);
    // 1501:0e2f  or byte ptr es:[di - 0x5bf0], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffa410u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffa410u))) | (c.c.l), false));
L15e44:
    if (c.tracing) c.traceAt(0x15e44);
    // 1501:0e34  test byte ptr [si + 0x134], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x134u))) & (0x8u), true);
    // 1501:0e39  je 0xe40  [x9520]
    if (c.zf) goto L15e50;
L15e4b:
    if (c.tracing) c.traceAt(0x15e4b);
    // 1501:0e3b  or byte ptr es:[di - 0x5420], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffabe0u))) | (c.c.l), false));
L15e50:
    if (c.tracing) c.traceAt(0x15e50);
    // 1501:0e40  test byte ptr [si + 0x142], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x142u))) & (0x8u), true);
    // 1501:0e45  je 0xe4c  [x9520]
    if (c.zf) goto L15e5c;
L15e57:
    if (c.tracing) c.traceAt(0x15e57);
    // 1501:0e47  or byte ptr es:[di - 0x4c50], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffb3b0u))) | (c.c.l), false));
L15e5c:
    if (c.tracing) c.traceAt(0x15e5c);
    // 1501:0e4c  test byte ptr [si + 0x150], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x150u))) & (0x8u), true);
    // 1501:0e51  je 0xe58  [x9520]
    if (c.zf) goto L15e68;
L15e63:
    if (c.tracing) c.traceAt(0x15e63);
    // 1501:0e53  or byte ptr es:[di - 0x4480], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffbb80u))) | (c.c.l), false));
L15e68:
    if (c.tracing) c.traceAt(0x15e68);
    // 1501:0e58  test byte ptr [si + 0x15e], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x15eu))) & (0x8u), true);
    // 1501:0e5d  je 0xe64  [x9520]
    if (c.zf) goto L15e74;
L15e6f:
    if (c.tracing) c.traceAt(0x15e6f);
    // 1501:0e5f  or byte ptr es:[di - 0x3cb0], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffc350u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffc350u))) | (c.c.l), false));
L15e74:
    if (c.tracing) c.traceAt(0x15e74);
    // 1501:0e64  test byte ptr [si + 0x16c], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x16cu))) & (0x8u), true);
    // 1501:0e69  je 0xe70  [x9520]
    if (c.zf) goto L15e80;
L15e7b:
    if (c.tracing) c.traceAt(0x15e7b);
    // 1501:0e6b  or byte ptr es:[di - 0x34e0], cl  [x9520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffcb20u))) | (c.c.l), false));
L15e80:
    if (c.tracing) c.traceAt(0x15e80);
    // 1501:0e70  test byte ptr [si + 0x17a], 8  [x9520]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(c.si.x + 0x17au))) & (0x8u), true);
    // 1501:0e75  je 0xe7c  [x9520]
    if (c.zf) goto L15e8c;
L15e87:
    if (c.tracing) c.traceAt(0x15e87);
    // 1501:0e77  or byte ptr es:[di - 0x2d10], cl  [x9480]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0xffffd2f0u))) | (c.c.l), true));
L15e8c:
    if (c.tracing) c.traceAt(0x15e8c);
    // 1501:0e7c  pop cx  [x9520]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:0e7d  pop ax  [x9520]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0e7e  pop dx  [x9520]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 1501:0e7f  pop di  [x9520]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0e80  ret   [x9520]
    c.ip = c.pop16(); return;
L15e91:
    if (c.tracing) c.traceAt(0x15e91);
    // 1501:0e81  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0e83  mov ax, 0xfd44  [x1]
    c.a.x = (uint16_t)(0xfd44u);
L15e96:
    if (c.tracing) c.traceAt(0x15e96);
    // 1501:0e86  push ax  [x14]
    c.push16(c.a.x);
    // 1501:0e87  mov bx, ax  [x14]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:0e89  neg bx  [x14]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:0e8b  mov word ptr [si + 0x36b], 0xfd44  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x36bu), 0xfd44u);
    // 1501:0e91  mov word ptr [si + 0x3bf], ax  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x3bfu), c.a.x);
    // 1501:0e95  mov word ptr [si + 0x413], 0x2bc  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x413u), 0x2bcu);
    // 1501:0e9b  mov word ptr [si + 0x467], bx  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x467u), c.b.x);
    // 1501:0e9f  add ax, 0xfffa  [x14]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xfffau, false));
    // 1501:0ea2  mov word ptr [si + 0x369], ax  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x369u), c.a.x);
    // 1501:0ea6  mov word ptr [si + 0x3bd], 0x2b6  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x3bdu), 0x2b6u);
    // 1501:0eac  add bx, -6  [x14]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0xfffau, false));
    // 1501:0eaf  mov word ptr [si + 0x411], bx  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x411u), c.b.x);
    // 1501:0eb3  mov word ptr [si + 0x465], 0xfd3e  [x14]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x465u), 0xfd3eu);
    // 1501:0eb9  pop ax  [x14]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0eba  add ax, 0x64  [x14]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 1501:0ebd  add si, 6  [x14]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:0ec0  cmp si, 0x54  [x14]
    c.sub<16>(c.si.x, 0x54u, true);
    // 1501:0ec3  jb 0xe86  [x14]
    if (c.cf) goto L15e96;
L15ed5:
    if (c.tracing) c.traceAt(0x15ed5);
    // 1501:0ec5  ret   [x1]
    c.ip = c.pop16(); return;
L15ed6:
    if (c.tracing) c.traceAt(0x15ed6);
    // 1501:0ec6  xor bp, bp  [x1156]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0ec8  xor di, di  [x1156]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15eda:
    if (c.tracing) c.traceAt(0x15eda);
    // 1501:0eca  mov si, word ptr ds:[bp + 0x4bb]  [x64736]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x4bbu)));
    // 1501:0ecf  mov bx, word ptr ds:[bp + 0x4b7]  [x64736]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x4b7u)));
    // 1501:0ed4  mov cx, word ptr ds:[bp + 0x4b9]  [x64736]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x4b9u)));
    // 1501:0ed9  add si, word ptr [0x6eb]  [x64736]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x6ebu)), false));
    // 1501:0edd  mov ax, 0x12f  [x64736]
    c.a.x = (uint16_t)(0x12fu);
    // 1501:0ee0  imul bx  [x64736]
    c.imul16(c.b.x);
    // 1501:0ee2  idiv si  [x64736]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xee2u); }   // #DE: int 0, then again
    // 1501:0ee4  mov word ptr [di + 0x607], ax  [x64736]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x607u), c.a.x);
    // 1501:0ee8  mov ax, 0x128  [x64736]
    c.a.x = (uint16_t)(0x128u);
    // 1501:0eeb  imul cx  [x64736]
    c.imul16(c.c.x);
    // 1501:0eed  idiv si  [x64736]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xeedu); }   // #DE: int 0, then again
    // 1501:0eef  add ax, 0x65  [x64736]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x65u, false));
    // 1501:0ef2  mov word ptr [di + 0x679], ax  [x64736]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x679u), c.a.x);
    // 1501:0ef6  add bp, 6  [x64736]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0ef9  add di, 2  [x64736]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0efc  cmp di, 0x70  [x64736]
    c.sub<16>(c.di.x, 0x70u, true);
    // 1501:0eff  jb 0xeca  [x64736]
    if (c.cf) goto L15eda;
L15f11:
    if (c.tracing) c.traceAt(0x15f11);
    // 1501:0f01  mov ax, word ptr [0x607]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x607u)));
    // 1501:0f04  mov word ptr [0x677], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0x677u), c.a.x);
    // 1501:0f07  mov ax, word ptr [0x679]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x679u)));
    // 1501:0f0a  mov word ptr [0x6e9], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0x6e9u), c.a.x);
    // 1501:0f0d  ret   [x1156]
    c.ip = c.pop16(); return;
L15f1e:
    if (c.tracing) c.traceAt(0x15f1e);
    // 1501:0f0e  xor bp, bp  [x1156]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
    // 1501:0f10  mov cx, 0x7fff  [x1156]
    c.c.x = (uint16_t)(0x7fffu);
L15f23:
    if (c.tracing) c.traceAt(0x15f23);
    // 1501:0f13  mov si, word ptr [0x6f7]  [x64736]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6f7u)));
    // 1501:0f17  mov ax, word ptr ds:[bp + 0x36b]  [x64736]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x36bu)));
    // 1501:0f1c  imul word ptr [si + 0x6fb]  [x64736]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6fbu)));
    // 1501:0f20  idiv cx  [x64736]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xf20u); }   // #DE: int 0, then again
    // 1501:0f22  push ax  [x64736]
    c.push16(c.a.x);
    // 1501:0f23  mov ax, word ptr ds:[bp + 0x369]  [x64736]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x369u)));
    // 1501:0f28  imul word ptr [si + 0x863]  [x64736]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x863u)));
    // 1501:0f2c  idiv cx  [x64736]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xf2cu); }   // #DE: int 0, then again
    // 1501:0f2e  pop bx  [x64736]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0f2f  add bx, ax  [x64736]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0f31  mov word ptr ds:[bp + 0x4b9], bx  [x64736]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x4b9u), c.b.x);
    // 1501:0f36  mov ax, word ptr ds:[bp + 0x36b]  [x64736]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x36bu)));
    // 1501:0f3b  imul word ptr [si + 0x863]  [x64736]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x863u)));
    // 1501:0f3f  idiv cx  [x64736]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xf3fu); }   // #DE: int 0, then again
    // 1501:0f41  push ax  [x64736]
    c.push16(c.a.x);
    // 1501:0f42  mov ax, word ptr ds:[bp + 0x369]  [x64736]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x369u)));
    // 1501:0f47  imul word ptr [si + 0x6fb]  [x64736]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6fbu)));
    // 1501:0f4b  idiv cx  [x64736]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xf4bu); }   // #DE: int 0, then again
    // 1501:0f4d  pop bx  [x64736]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0f4e  sub bx, ax  [x64736]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:0f50  mov word ptr ds:[bp + 0x4bb], bx  [x64736]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x4bbu), c.b.x);
    // 1501:0f55  mov bx, word ptr ds:[bp + 0x367]  [x64736]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x367u)));
    // 1501:0f5a  mov word ptr ds:[bp + 0x4b7], bx  [x64736]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x4b7u), c.b.x);
    // 1501:0f5f  add bp, 6  [x64736]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0f62  cmp bp, 0x150  [x64736]
    c.sub<16>(c.bp.x, 0x150u, true);
    // 1501:0f66  jb 0xf13  [x64736]
    if (c.cf) goto L15f23;
L15f78:
    if (c.tracing) c.traceAt(0x15f78);
    // 1501:0f68  ret   [x1156]
    c.ip = c.pop16(); return;
L15f79:
    if (c.tracing) c.traceAt(0x15f79);
    // 1501:0f69  xor si, si  [x1156]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0f6b  xor ax, ax  [x1156]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L15f7d:
    if (c.tracing) c.traceAt(0x15f7d);
    // 1501:0f6d  mov word ptr cs:[si + 8], ax  [x231200]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x8u), c.a.x);
    // 1501:0f72  add si, 2  [x231200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0f75  cmp si, 0x190  [x231200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:0f79  jb 0xf6d  [x231200]
    if (c.cf) goto L15f7d;
L15f8b:
    if (c.tracing) c.traceAt(0x15f8b);
    // 1501:0f7b  mov ax, word ptr [0xe03]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe03u)));
    // 1501:0f7e  mov word ptr [0xe05], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0xe05u), c.a.x);
    // 1501:0f81  mov ax, word ptr [0xe07]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xe07u)));
    // 1501:0f84  mov word ptr [0xe09], ax  [x1156]
    c.w16(c.dsb + (uint16_t)(0xe09u), c.a.x);
    // 1501:0f87  mov word ptr [0xe03], 0xc8  [x1156]
    c.w16(c.dsb + (uint16_t)(0xe03u), 0xc8u);
    // 1501:0f8d  mov word ptr [0xe07], 0  [x1156]
    c.w16(c.dsb + (uint16_t)(0xe07u), 0x0u);
    // 1501:0f93  mov ax, word ptr [0x695]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x695u)));
    // 1501:0f96  sub ax, word ptr [0x679]  [x1156]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x679u)), true));
    // 1501:0f9a  js 0xfe8  [x1156]
    if (c.sf) goto L15ff8;
L15fac:
    if (c.tracing) c.traceAt(0x15fac);
    // 1501:0f9c  mov si, 0x34  [x717]
    c.si.x = (uint16_t)(0x34u);
    // 1501:0f9f  mov di, 4  [x717]
    c.di.x = (uint16_t)(0x4u);
    // 1501:0fa2  call 0x126a  [x717]
    c.push16(0xfa5u); code_13(c, 0x1627au); if (c.ip != 0xfa5u) c.badReturn(0x15fb2);
L15fb5:
    if (c.tracing) c.traceAt(0x15fb5);
    // 1501:0fa5  mov si, 0  [x717]
    c.si.x = (uint16_t)(0x0u);
    // 1501:0fa8  mov bp, 0  [x717]
    c.bp.x = (uint16_t)(0x0u);
    // 1501:0fab  call 0x10ea  [x717]
    c.push16(0xfaeu); code_13(c, 0x160fau); if (c.ip != 0xfaeu) c.badReturn(0x15fbb);
L15fbe:
    if (c.tracing) c.traceAt(0x15fbe);
    // 1501:0fae  mov di, word ptr [0x679]  [x717]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x679u)));
    // 1501:0fb2  add di, di  [x717]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:0fb4  mov word ptr cs:[di + 8], 0xffff  [x717]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:0fbb  mov ax, word ptr [0x607]  [x717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x607u)));
    // 1501:0fbe  sub ax, 0x14  [x717]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:0fc1  mov dx, 0x19  [x717]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:0fc4  mul dx  [x717]
    c.mul16(c.dx_.x);
    // 1501:0fc6  mov word ptr cs:[di + 0x198], ax  [x717]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
    // 1501:0fcb  mov di, word ptr [0x695]  [x717]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x695u)));
    // 1501:0fcf  add di, di  [x717]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:0fd1  mov word ptr cs:[di + 8], 0xffff  [x717]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:0fd8  mov ax, word ptr [0x623]  [x717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x623u)));
    // 1501:0fdb  sub ax, 0x14  [x717]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:0fde  mov dx, 0x19  [x717]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:0fe1  mul dx  [x717]
    c.mul16(c.dx_.x);
    // 1501:0fe3  mov word ptr cs:[di + 0x198], ax  [x717]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
L15ff8:
    if (c.tracing) c.traceAt(0x15ff8);
    // 1501:0fe8  mov ax, word ptr [0x6b1]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6b1u)));
    // 1501:0feb  sub ax, word ptr [0x695]  [x1156]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x695u)), true));
    // 1501:0fef  js 0x103d  [x1156]
    if (c.sf) goto L1604d;
L16001:
    if (c.tracing) c.traceAt(0x16001);
    // 1501:0ff1  mov si, 0x4c  [x488]
    c.si.x = (uint16_t)(0x4cu);
    // 1501:0ff4  mov di, 0x1c  [x488]
    c.di.x = (uint16_t)(0x1cu);
    // 1501:0ff7  call 0x126a  [x488]
    c.push16(0xffau); code_13(c, 0x1627au); if (c.ip != 0xffau) c.badReturn(0x16007);
L1600a:
    if (c.tracing) c.traceAt(0x1600a);
    // 1501:0ffa  mov si, 0x1c  [x488]
    c.si.x = (uint16_t)(0x1cu);
    // 1501:0ffd  mov bp, 0x6d60  [x488]
    c.bp.x = (uint16_t)(0x6d60u);
    // 1501:1000  call 0x10ea  [x488]
    c.push16(0x1003u); code_13(c, 0x160fau); if (c.ip != 0x1003u) c.badReturn(0x16010);
L16013:
    if (c.tracing) c.traceAt(0x16013);
    // 1501:1003  mov di, word ptr [0x695]  [x488]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x695u)));
    // 1501:1007  add di, di  [x488]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:1009  mov word ptr cs:[di + 8], 0xffff  [x488]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:1010  mov ax, word ptr [0x623]  [x488]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x623u)));
    // 1501:1013  sub ax, 0x14  [x488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:1016  mov dx, 0x19  [x488]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:1019  mul dx  [x488]
    c.mul16(c.dx_.x);
    // 1501:101b  mov word ptr cs:[di + 0x198], ax  [x488]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
    // 1501:1020  mov di, word ptr [0x6b1]  [x488]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6b1u)));
    // 1501:1024  add di, di  [x488]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:1026  mov word ptr cs:[di + 8], 0xffff  [x488]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:102d  mov ax, word ptr [0x63f]  [x488]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x63fu)));
    // 1501:1030  sub ax, 0x14  [x488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:1033  mov dx, 0x19  [x488]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:1036  mul dx  [x488]
    c.mul16(c.dx_.x);
    // 1501:1038  mov word ptr cs:[di + 0x198], ax  [x488]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
L1604d:
    if (c.tracing) c.traceAt(0x1604d);
    // 1501:103d  mov ax, word ptr [0x6cd]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6cdu)));
    // 1501:1040  sub ax, word ptr [0x6b1]  [x1156]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x6b1u)), true));
    // 1501:1044  js 0x1092  [x1156]
    if (c.sf) goto L160a2;
L16056:
    if (c.tracing) c.traceAt(0x16056);
    // 1501:1046  mov si, 0x64  [x362]
    c.si.x = (uint16_t)(0x64u);
    // 1501:1049  mov di, 4  [x362]
    c.di.x = (uint16_t)(0x4u);
    // 1501:104c  call 0x126a  [x362]
    c.push16(0x104fu); code_13(c, 0x1627au); if (c.ip != 0x104fu) c.badReturn(0x1605c);
L1605f:
    if (c.tracing) c.traceAt(0x1605f);
    // 1501:104f  mov si, 0x38  [x362]
    c.si.x = (uint16_t)(0x38u);
    // 1501:1052  mov bp, 0  [x362]
    c.bp.x = (uint16_t)(0x0u);
    // 1501:1055  call 0x10ea  [x362]
    c.push16(0x1058u); code_13(c, 0x160fau); if (c.ip != 0x1058u) c.badReturn(0x16065);
L16068:
    if (c.tracing) c.traceAt(0x16068);
    // 1501:1058  mov di, word ptr [0x6b1]  [x362]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6b1u)));
    // 1501:105c  add di, di  [x362]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:105e  mov word ptr cs:[di + 8], 0xffff  [x362]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:1065  mov ax, word ptr [0x63f]  [x362]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x63fu)));
    // 1501:1068  sub ax, 0x14  [x362]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:106b  mov dx, 0x19  [x362]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:106e  mul dx  [x362]
    c.mul16(c.dx_.x);
    // 1501:1070  mov word ptr cs:[di + 0x198], ax  [x362]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
    // 1501:1075  mov di, word ptr [0x6cd]  [x362]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6cdu)));
    // 1501:1079  add di, di  [x362]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:107b  mov word ptr cs:[di + 8], 0xffff  [x362]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:1082  mov ax, word ptr [0x65b]  [x362]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x65bu)));
    // 1501:1085  sub ax, 0x14  [x362]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:1088  mov dx, 0x19  [x362]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:108b  mul dx  [x362]
    c.mul16(c.dx_.x);
    // 1501:108d  mov word ptr cs:[di + 0x198], ax  [x362]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
L160a2:
    if (c.tracing) c.traceAt(0x160a2);
    // 1501:1092  mov ax, word ptr [0x6e9]  [x1156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6e9u)));
    // 1501:1095  sub ax, word ptr [0x6cd]  [x1156]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x6cdu)), true));
    // 1501:1099  js 0x10e7  [x1156]
    if (c.sf) goto L160f7;
L160ab:
    if (c.tracing) c.traceAt(0x160ab);
    // 1501:109b  mov si, 0x7c  [x462]
    c.si.x = (uint16_t)(0x7cu);
    // 1501:109e  mov di, 0x1c  [x462]
    c.di.x = (uint16_t)(0x1cu);
    // 1501:10a1  call 0x126a  [x462]
    c.push16(0x10a4u); code_13(c, 0x1627au); if (c.ip != 0x10a4u) c.badReturn(0x160b1);
L160b4:
    if (c.tracing) c.traceAt(0x160b4);
    // 1501:10a4  mov si, 0x54  [x462]
    c.si.x = (uint16_t)(0x54u);
    // 1501:10a7  mov bp, 0x6d60  [x462]
    c.bp.x = (uint16_t)(0x6d60u);
    // 1501:10aa  call 0x10ea  [x462]
    c.push16(0x10adu); code_13(c, 0x160fau); if (c.ip != 0x10adu) c.badReturn(0x160ba);
L160bd:
    if (c.tracing) c.traceAt(0x160bd);
    // 1501:10ad  mov di, word ptr [0x6e9]  [x462]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6e9u)));
    // 1501:10b1  add di, di  [x462]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:10b3  mov word ptr cs:[di + 8], 0xffff  [x462]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:10ba  mov ax, word ptr [0x677]  [x462]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x677u)));
    // 1501:10bd  sub ax, 0x14  [x462]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:10c0  mov dx, 0x19  [x462]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:10c3  mul dx  [x462]
    c.mul16(c.dx_.x);
    // 1501:10c5  mov word ptr cs:[di + 0x198], ax  [x462]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
    // 1501:10ca  mov di, word ptr [0x6cd]  [x462]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6cdu)));
    // 1501:10ce  add di, di  [x462]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:10d0  mov word ptr cs:[di + 8], 0xffff  [x462]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), 0xffffu);
    // 1501:10d7  mov ax, word ptr [0x65b]  [x462]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x65bu)));
    // 1501:10da  sub ax, 0x14  [x462]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:10dd  mov dx, 0x19  [x462]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:10e0  mul dx  [x462]
    c.mul16(c.dx_.x);
    // 1501:10e2  mov word ptr cs:[di + 0x198], ax  [x462]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x198u), c.a.x);
L160f7:
    if (c.tracing) c.traceAt(0x160f7);
    // 1501:10e7  ret   [x1156]
    c.ip = c.pop16(); return;
L160fa:
    if (c.tracing) c.traceAt(0x160fa);
    // 1501:10ea  mov word ptr cs:[0x10e8], si  [x2029]
    c.w16(c.csb + (uint16_t)(0x10e8u), c.si.x);
    // 1501:10ef  add word ptr cs:[0x10e8], 0x1c  [x2029]
    c.w16(c.csb + (uint16_t)(0x10e8u), c.add<16>(c.r16(c.csb + (uint16_t)(0x10e8u)), 0x1cu, true));
L16105:
    if (c.tracing) c.traceAt(0x16105);
    // 1501:10f5  mov di, word ptr [si + 0x679]  [x28406]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679u)));
    // 1501:10f9  add di, di  [x28406]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:10fb  mov ax, word ptr [si + 0x607]  [x28406]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x607u)));
    // 1501:10ff  sub ax, 0x14  [x28406]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x14u, false));
    // 1501:1102  mov dx, 0x19  [x28406]
    c.dx_.x = (uint16_t)(0x19u);
    // 1501:1105  mul dx  [x28406]
    c.mul16(c.dx_.x);
    // 1501:1107  add ax, bp  [x28406]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.bp.x, false));
    // 1501:1109  mov cx, word ptr [si + 0x67b]  [x28406]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x67bu)));
    // 1501:110d  sub cx, word ptr [si + 0x679]  [x28406]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0x679u)), true));
    // 1501:1111  js 0x1141  [x28406]
    if (c.sf) goto L16151;
L16123:
    if (c.tracing) c.traceAt(0x16123);
    // 1501:1113  je 0x1141  [x28406]
    if (c.zf) goto L16151;
L16125:
    if (c.tracing) c.traceAt(0x16125);
    // 1501:1115  push ax  [x26454]
    c.push16(c.a.x);
    // 1501:1116  mov ax, word ptr [si + 0x607]  [x26454]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x607u)));
    // 1501:111a  sub ax, word ptr [si + 0x609]  [x26454]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0x609u)), false));
    // 1501:111e  add ax, 5  [x26454]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x5u, false));
    // 1501:1121  mov dx, 0x28  [x26454]
    c.dx_.x = (uint16_t)(0x28u);
    // 1501:1124  mul dx  [x26454]
    c.mul16(c.dx_.x);
    // 1501:1126  mov bx, ax  [x26454]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1128  mov ax, 0x190  [x26454]
    c.a.x = (uint16_t)(0x190u);
    // 1501:112b  mul cx  [x26454]
    c.mul16(c.c.x);
    // 1501:112d  add bx, ax  [x26454]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, true));
    // 1501:112f  pop ax  [x26454]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
L16140:
    if (c.tracing) c.traceAt(0x16140);
    // 1501:1130  mov word ptr cs:[di + 8], ax  [x112691]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 1501:1135  add ax, word ptr [bx + 0x15dd]  [x112691]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0x15ddu)), false));
    // 1501:1139  add bx, 2  [x112691]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:113c  add di, 2  [x112691]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:113f  loop 0x1130  [x112691]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16140;
L16151:
    if (c.tracing) c.traceAt(0x16151);
    // 1501:1141  add bp, 0x7d0  [x28406]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x7d0u, false));
    // 1501:1145  add si, 2  [x28406]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:1148  cmp si, word ptr cs:[0x10e8]  [x28406]
    c.sub<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x10e8u)), true);
    // 1501:114d  jb 0x10f5  [x28406]
    if (c.cf) goto L16105;
L1615f:
    if (c.tracing) c.traceAt(0x1615f);
    // 1501:114f  mov ax, word ptr [si + 0x679]  [x2029]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679u)));
    // 1501:1153  cmp word ptr [0xe07], ax  [x2029]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xe07u)), c.a.x, true);
    // 1501:1157  jae 0x115c  [x2029]
    if (!c.cf) goto L1616c;
L16169:
    if (c.tracing) c.traceAt(0x16169);
    // 1501:1159  mov word ptr [0xe07], ax  [x1767]
    c.w16(c.dsb + (uint16_t)(0xe07u), c.a.x);
L1616c:
    if (c.tracing) c.traceAt(0x1616c);
    // 1501:115c  mov ax, word ptr [si + 0x65d]  [x2029]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65du)));
    // 1501:1160  cmp word ptr [0xe03], ax  [x2029]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xe03u)), c.a.x, true);
    // 1501:1164  jbe 0x1169  [x2029]
    if ((c.cf || c.zf)) goto L16179;
L16176:
    if (c.tracing) c.traceAt(0x16176);
    // 1501:1166  mov word ptr [0xe03], ax  [x1402]
    c.w16(c.dsb + (uint16_t)(0xe03u), c.a.x);
L16179:
    if (c.tracing) c.traceAt(0x16179);
    // 1501:1169  ret   [x2029]
    c.ip = c.pop16(); return;
L1617a:
    if (c.tracing) c.traceAt(0x1617a);
    // 1501:116a  mov word ptr cs:[0x32a], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x32au), 0x0u);
    // 1501:1171  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L16183:
    if (c.tracing) c.traceAt(0x16183);
    // 1501:1173  mov word ptr cs:[0x330], 0xfffb  [x20]
    c.w16(c.csb + (uint16_t)(0x330u), 0xfffbu);
L1618a:
    if (c.tracing) c.traceAt(0x1618a);
    // 1501:117a  cmp word ptr cs:[0x32a], 0  [x200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x32au)), 0x0u, true);
    // 1501:1180  jne 0x1185  [x200]
    if (!c.zf) goto L16195;
L16192:
    if (c.tracing) c.traceAt(0x16192);
    // 1501:1182  jmp 0x1204  [x10]
    goto L16214;
L16195:
    if (c.tracing) c.traceAt(0x16195);
    // 1501:1185  push si  [x190]
    c.push16(c.si.x);
    // 1501:1186  mov word ptr cs:[0x32e], 0  [x190]
    c.w16(c.csb + (uint16_t)(0x32eu), 0x0u);
    // 1501:118d  mov cx, word ptr cs:[0x32a]  [x190]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x32au)));
    // 1501:1192  mov ax, word ptr cs:[0x330]  [x190]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x330u)));
    // 1501:1196  mov di, cx  [x190]
    c.di.x = (uint16_t)(c.c.x);
    // 1501:1198  xor dx, dx  [x190]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:119a  cmp ax, 0  [x190]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:119d  js 0x11d1  [x190]
    if (c.sf) goto L161e1;
L161af:
    if (c.tracing) c.traceAt(0x161af);
    // 1501:119f  div cx  [x95]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x119fu); }   // #DE: int 0, then again
    // 1501:11a1  mov word ptr cs:[0x32c], ax  [x95]
    c.w16(c.csb + (uint16_t)(0x32cu), c.a.x);
    // 1501:11a5  mov bx, dx  [x95]
    c.b.x = (uint16_t)(c.dx_.x);
    // 1501:11a7  mov cx, 0x14  [x95]
    c.c.x = (uint16_t)(0x14u);
L161ba:
    if (c.tracing) c.traceAt(0x161ba);
    // 1501:11aa  mov bp, word ptr cs:[0x32c]  [x1900]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x32cu)));
    // 1501:11af  add word ptr cs:[0x32e], bx  [x1900]
    c.w16(c.csb + (uint16_t)(0x32eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.b.x, false));
    // 1501:11b4  cmp word ptr cs:[0x32e], di  [x1900]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.di.x, true);
    // 1501:11b9  jl 0x11c1  [x1900]
    if ((c.sf != c.of)) goto L161d1;
L161cb:
    if (c.tracing) c.traceAt(0x161cb);
    // 1501:11bb  sub word ptr cs:[0x32e], di  [x347]
    c.w16(c.csb + (uint16_t)(0x32eu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.di.x, true));
    // 1501:11c0  inc bp  [x347]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
L161d1:
    if (c.tracing) c.traceAt(0x161d1);
    // 1501:11c1  mov ax, 0xffe7  [x1900]
    c.a.x = (uint16_t)(0xffe7u);
    // 1501:11c4  imul bp  [x1900]
    c.imul16(c.bp.x);
    // 1501:11c6  mov word ptr [si + 0x15dd], ax  [x1900]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x15ddu), c.a.x);
    // 1501:11ca  add si, 2  [x1900]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:11cd  loop 0x11aa  [x1900]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L161ba;
L161df:
    if (c.tracing) c.traceAt(0x161df);
    // 1501:11cf  jmp 0x1203  [x95]
    goto L16213;
L161e1:
    if (c.tracing) c.traceAt(0x161e1);
    // 1501:11d1  neg ax  [x95]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:11d3  div cx  [x95]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x11d3u); }   // #DE: int 0, then again
    // 1501:11d5  mov word ptr cs:[0x32c], ax  [x95]
    c.w16(c.csb + (uint16_t)(0x32cu), c.a.x);
    // 1501:11d9  mov bx, dx  [x95]
    c.b.x = (uint16_t)(c.dx_.x);
    // 1501:11db  mov cx, 0x14  [x95]
    c.c.x = (uint16_t)(0x14u);
L161ee:
    if (c.tracing) c.traceAt(0x161ee);
    // 1501:11de  mov bp, word ptr cs:[0x32c]  [x1900]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x32cu)));
    // 1501:11e3  add word ptr cs:[0x32e], bx  [x1900]
    c.w16(c.csb + (uint16_t)(0x32eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.b.x, false));
    // 1501:11e8  cmp word ptr cs:[0x32e], di  [x1900]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.di.x, true);
    // 1501:11ed  jl 0x11f5  [x1900]
    if ((c.sf != c.of)) goto L16205;
L161ff:
    if (c.tracing) c.traceAt(0x161ff);
    // 1501:11ef  sub word ptr cs:[0x32e], di  [x496]
    c.w16(c.csb + (uint16_t)(0x32eu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x32eu)), c.di.x, true));
    // 1501:11f4  inc bp  [x496]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
L16205:
    if (c.tracing) c.traceAt(0x16205);
    // 1501:11f5  mov ax, 0x19  [x1900]
    c.a.x = (uint16_t)(0x19u);
    // 1501:11f8  imul bp  [x1900]
    c.imul16(c.bp.x);
    // 1501:11fa  mov word ptr [si + 0x15dd], ax  [x1900]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x15ddu), c.a.x);
    // 1501:11fe  add si, 2  [x1900]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:1201  loop 0x11de  [x1900]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L161ee;
L16213:
    if (c.tracing) c.traceAt(0x16213);
    // 1501:1203  pop si  [x190]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
L16214:
    if (c.tracing) c.traceAt(0x16214);
    // 1501:1204  add si, 0x28  [x200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x28u, false));
    // 1501:1207  inc word ptr cs:[0x330]  [x200]
    c.w16(c.csb + (uint16_t)(0x330u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x330u)), false));
    // 1501:120c  cmp word ptr cs:[0x330], 5  [x200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x330u)), 0x5u, true);
    // 1501:1212  jge 0x1217  [x200]
    if ((c.sf == c.of)) goto L16227;
L16224:
    if (c.tracing) c.traceAt(0x16224);
    // 1501:1214  jmp 0x117a  [x180]
    goto L1618a;
L16227:
    if (c.tracing) c.traceAt(0x16227);
    // 1501:1217  inc word ptr cs:[0x32a]  [x20]
    c.w16(c.csb + (uint16_t)(0x32au), c.inc<16>(c.r16(c.csb + (uint16_t)(0x32au)), false));
    // 1501:121c  cmp word ptr cs:[0x32a], 0x14  [x20]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x32au)), 0x14u, true);
    // 1501:1222  jae 0x1227  [x20]
    if (!c.cf) goto L16237;
L16234:
    if (c.tracing) c.traceAt(0x16234);
    // 1501:1224  jmp 0x1173  [x19]
    goto L16183;
L16237:
    if (c.tracing) c.traceAt(0x16237);
    // 1501:1227  ret   [x1]
    c.ip = c.pop16(); return;
L16238:
    if (c.tracing) c.traceAt(0x16238);
    // 1501:1228  mov dx, 0x3c8  [x64]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:122b  mov al, 1  [x64]
    c.a.l = (uint8_t)(0x1u);
    // 1501:122d  out dx, al  [x64]
    c.ip = 0x122eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:122e  inc dx  [x64]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:122f  mov si, 7  [x64]
    c.si.x = (uint16_t)(0x7u);
    // 1501:1232  mov cx, 0x2d  [x64]
    c.c.x = (uint16_t)(0x2du);
    // 1501:1235  mov ah, byte ptr [0x545d]  [x64]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x545du)));
L16249:
    if (c.tracing) c.traceAt(0x16249);
    // 1501:1239  lodsb al, byte ptr [si]  [x2880]
    c.ip = 0x123au; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:123a  add al, ah  [x2880]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.a.h, false));
    // 1501:123c  cmp al, 0x3f  [x2880]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:123e  jb 0x1242  [x2880]
    if (c.cf) goto L16252;
L16250:
    if (c.tracing) c.traceAt(0x16250);
    // 1501:1240  mov al, 0x3f  [x724]
    c.a.l = (uint8_t)(0x3fu);
L16252:
    if (c.tracing) c.traceAt(0x16252);
    // 1501:1242  out dx, al  [x2880]
    c.ip = 0x1243u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1243  loop 0x1239  [x2880]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16249;
L16255:
    if (c.tracing) c.traceAt(0x16255);
    // 1501:1245  dec byte ptr [0x545d]  [x64]
    c.w8(c.dsb + (uint16_t)(0x545du), c.dec<8>(c.r8(c.dsb + (uint16_t)(0x545du)), true));
    // 1501:1249  ret   [x64]
    c.ip = c.pop16(); return;
L1625a:
    if (c.tracing) c.traceAt(0x1625a);
    // 1501:124a  mov dx, 0x3c8  [x69]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:124d  xor al, al  [x69]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:124f  out dx, al  [x69]
    c.ip = 0x1250u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1250  inc dx  [x69]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1251  mov si, 4  [x69]
    c.si.x = (uint16_t)(0x4u);
    // 1501:1254  mov cx, 0x30  [x69]
    c.c.x = (uint16_t)(0x30u);
    // 1501:1257  mov ah, byte ptr [0x545d]  [x69]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x545du)));
L1626b:
    if (c.tracing) c.traceAt(0x1626b);
    // 1501:125b  lodsb al, byte ptr [si]  [x3312]
    c.ip = 0x125cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:125c  sub al, ah  [x3312]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.h, true));
    // 1501:125e  jge 0x1262  [x3312]
    if ((c.sf == c.of)) goto L16272;
L16270:
    if (c.tracing) c.traceAt(0x16270);
    // 1501:1260  xor al, al  [x1750]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L16272:
    if (c.tracing) c.traceAt(0x16272);
    // 1501:1262  out dx, al  [x3312]
    c.ip = 0x1263u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1263  loop 0x125b  [x3312]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1626b;
L16275:
    if (c.tracing) c.traceAt(0x16275);
    // 1501:1265  inc byte ptr [0x545d]  [x69]
    c.w8(c.dsb + (uint16_t)(0x545du), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x545du)), true));
    // 1501:1269  ret   [x69]
    c.ip = c.pop16(); return;
L1627a:
    if (c.tracing) c.traceAt(0x1627a);
    // 1501:126a  mov cx, 0x18  [x2029]
    c.c.x = (uint16_t)(0x18u);
L1627d:
    if (c.tracing) c.traceAt(0x1627d);
    // 1501:126d  mov al, byte ptr [si]  [x48696]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:126f  mov byte ptr [di], al  [x48696]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.a.l);
    // 1501:1271  inc si  [x48696]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1272  inc di  [x48696]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:1273  loop 0x126d  [x48696]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1627d;
L16285:
    if (c.tracing) c.traceAt(0x16285);
    // 1501:1275  ret   [x2029]
    c.ip = c.pop16(); return;
L16286:
    if (c.tracing) c.traceAt(0x16286);
    // 1501:1276  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_13(13, {0x15010, 0x15346, 0x15375, 0x15377, 0x1538b, 0x1538d, 0x1539a, 0x153a1, 0x153a9, 0x153ac, 0x153af, 0x153b2, 0x153b7, 0x153cc, 0x153dd, 0x153e7, 0x153ff, 0x15406, 0x15409, 0x15411, 0x15414, 0x1541b, 0x1541e, 0x15425, 0x1542d, 0x1543a, 0x1543c, 0x15447, 0x15449, 0x15458, 0x1546a, 0x15477, 0x15479, 0x15488, 0x1549a, 0x1549d, 0x154a0, 0x154a3, 0x154a6, 0x154ca, 0x154d7, 0x154dd, 0x154f4, 0x15518, 0x1551d, 0x15525, 0x1552b, 0x15533, 0x1553e, 0x15540, 0x15562, 0x15567, 0x1556f, 0x15580, 0x15583, 0x155a2, 0x155ab, 0x155b0, 0x155cf, 0x155d1, 0x155e1, 0x155e6, 0x155e8, 0x155f4, 0x15601, 0x15604, 0x15605, 0x15609, 0x1560a, 0x1560e, 0x1560f, 0x15621, 0x1563e, 0x15644, 0x15647, 0x1564a, 0x15650, 0x15657, 0x15660, 0x15676, 0x15677, 0x15689, 0x15695, 0x156ae, 0x156c4, 0x156c5, 0x1592f, 0x15935, 0x1595b, 0x1595e, 0x15964, 0x15969, 0x1596f, 0x15974, 0x1597a, 0x1597f, 0x15985, 0x1598a, 0x15990, 0x15995, 0x1599b, 0x159a0, 0x159a6, 0x159ab, 0x159b1, 0x159b6, 0x159bc, 0x159c1, 0x159c8, 0x159cd, 0x159d4, 0x159d9, 0x159e0, 0x159e5, 0x159ec, 0x159f1, 0x159f8, 0x159fd, 0x15a04, 0x15a09, 0x15a10, 0x15a15, 0x15a1c, 0x15a21, 0x15a28, 0x15a2d, 0x15a34, 0x15a39, 0x15a40, 0x15a45, 0x15a4c, 0x15a51, 0x15a58, 0x15a5d, 0x15a64, 0x15a69, 0x15a70, 0x15a75, 0x15a7c, 0x15a81, 0x15a88, 0x15a8d, 0x15a94, 0x15a99, 0x15aac, 0x15aaf, 0x15ab5, 0x15aba, 0x15ac0, 0x15ac5, 0x15acb, 0x15ad0, 0x15ad6, 0x15adb, 0x15ae1, 0x15ae6, 0x15aec, 0x15af1, 0x15af7, 0x15afc, 0x15b02, 0x15b07, 0x15b0d, 0x15b12, 0x15b19, 0x15b1e, 0x15b25, 0x15b2a, 0x15b31, 0x15b36, 0x15b3d, 0x15b42, 0x15b49, 0x15b4e, 0x15b55, 0x15b5a, 0x15b61, 0x15b66, 0x15b6d, 0x15b72, 0x15b79, 0x15b7e, 0x15b85, 0x15b8a, 0x15b91, 0x15b96, 0x15b9d, 0x15ba2, 0x15ba9, 0x15bae, 0x15bb5, 0x15bba, 0x15bc1, 0x15bc6, 0x15bcd, 0x15bd2, 0x15bd9, 0x15bde, 0x15be5, 0x15bea, 0x15bfd, 0x15c00, 0x15c06, 0x15c0b, 0x15c11, 0x15c16, 0x15c1c, 0x15c21, 0x15c27, 0x15c2c, 0x15c32, 0x15c37, 0x15c3d, 0x15c42, 0x15c48, 0x15c4d, 0x15c53, 0x15c58, 0x15c5e, 0x15c63, 0x15c6a, 0x15c6f, 0x15c76, 0x15c7b, 0x15c82, 0x15c87, 0x15c93, 0x15c9a, 0x15c9f, 0x15cab, 0x15cb2, 0x15cb7, 0x15cbe, 0x15cc3, 0x15cca, 0x15ccf, 0x15cd6, 0x15cdb, 0x15ce2, 0x15ce7, 0x15cee, 0x15cf3, 0x15cfa, 0x15cff, 0x15d06, 0x15d0b, 0x15d12, 0x15d17, 0x15d1e, 0x15d23, 0x15d2a, 0x15d2f, 0x15d36, 0x15d3b, 0x15d51, 0x15d5c, 0x15d67, 0x15d72, 0x15d7d, 0x15d88, 0x15d93, 0x15d9e, 0x15da9, 0x15db4, 0x15dc0, 0x15dcc, 0x15dd8, 0x15ddf, 0x15de4, 0x15deb, 0x15df0, 0x15df7, 0x15dfc, 0x15e03, 0x15e08, 0x15e0f, 0x15e14, 0x15e1b, 0x15e20, 0x15e27, 0x15e2c, 0x15e33, 0x15e38, 0x15e3f, 0x15e44, 0x15e4b, 0x15e50, 0x15e57, 0x15e5c, 0x15e63, 0x15e68, 0x15e6f, 0x15e74, 0x15e7b, 0x15e80, 0x15e87, 0x15e8c, 0x15e91, 0x15e96, 0x15ed5, 0x15ed6, 0x15eda, 0x15f11, 0x15f1e, 0x15f23, 0x15f78, 0x15f79, 0x15f7d, 0x15f8b, 0x15fac, 0x15fb5, 0x15fbe, 0x15ff8, 0x16001, 0x1600a, 0x16013, 0x1604d, 0x16056, 0x1605f, 0x16068, 0x160a2, 0x160ab, 0x160b4, 0x160bd, 0x160f7, 0x160fa, 0x16105, 0x16123, 0x16125, 0x16140, 0x16151, 0x1615f, 0x16169, 0x1616c, 0x16176, 0x16179, 0x1617a, 0x16183, 0x1618a, 0x16192, 0x16195, 0x161af, 0x161ba, 0x161cb, 0x161d1, 0x161df, 0x161e1, 0x161ee, 0x161ff, 0x16205, 0x16213, 0x16214, 0x16224, 0x16227, 0x16234, 0x16237, 0x16238, 0x16249, 0x16250, 0x16252, 0x16255, 0x1625a, 0x1626b, 0x16270, 0x16272, 0x16275, 0x1627a, 0x1627d, 0x16285, 0x16286}, code_13);

}  // namespace show
