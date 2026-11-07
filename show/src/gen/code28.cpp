// Part 27 (BOB.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_28(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1553e: goto L1553e;
    case 0x15553: goto L15553;
    case 0x1555a: goto L1555a;
    case 0x15560: goto L15560;
    case 0x15569: goto L15569;
    case 0x1556d: goto L1556d;
    case 0x1557e: goto L1557e;
    case 0x15584: goto L15584;
    case 0x15587: goto L15587;
    case 0x15592: goto L15592;
    case 0x1559f: goto L1559f;
    case 0x155a2: goto L155a2;
    case 0x155af: goto L155af;
    case 0x155b2: goto L155b2;
    case 0x155c7: goto L155c7;
    case 0x155ca: goto L155ca;
    case 0x155d3: goto L155d3;
    case 0x155dc: goto L155dc;
    case 0x1560a: goto L1560a;
    case 0x15611: goto L15611;
    case 0x15613: goto L15613;
    case 0x1561c: goto L1561c;
    case 0x15631: goto L15631;
    case 0x1563c: goto L1563c;
    case 0x1563d: goto L1563d;
    case 0x15641: goto L15641;
    case 0x15642: goto L15642;
    case 0x15646: goto L15646;
    case 0x15649: goto L15649;
    case 0x1565b: goto L1565b;
    case 0x1565e: goto L1565e;
    case 0x1567a: goto L1567a;
    case 0x15680: goto L15680;
    case 0x15698: goto L15698;
    case 0x15699: goto L15699;
    case 0x1569d: goto L1569d;
    case 0x1569e: goto L1569e;
    case 0x156a2: goto L156a2;
    case 0x156a5: goto L156a5;
    case 0x156af: goto L156af;
    case 0x156b7: goto L156b7;
    case 0x156ba: goto L156ba;
    case 0x15702: goto L15702;
    case 0x15705: goto L15705;
    case 0x15707: goto L15707;
    case 0x1576d: goto L1576d;
    case 0x1577d: goto L1577d;
    case 0x1577e: goto L1577e;
    case 0x15798: goto L15798;
    case 0x157a0: goto L157a0;
    case 0x157a2: goto L157a2;
    case 0x157ad: goto L157ad;
    case 0x157ca: goto L157ca;
    case 0x157cd: goto L157cd;
    case 0x157d0: goto L157d0;
    case 0x157d3: goto L157d3;
    case 0x157d7: goto L157d7;
    case 0x157de: goto L157de;
    case 0x157f1: goto L157f1;
    case 0x157fa: goto L157fa;
    case 0x1580d: goto L1580d;
    case 0x15816: goto L15816;
    case 0x15829: goto L15829;
    case 0x15832: goto L15832;
    case 0x1584e: goto L1584e;
    case 0x15861: goto L15861;
    case 0x1586a: goto L1586a;
    case 0x1587d: goto L1587d;
    case 0x15886: goto L15886;
    case 0x15899: goto L15899;
    case 0x158a2: goto L158a2;
    case 0x158b5: goto L158b5;
    case 0x158be: goto L158be;
    case 0x158d1: goto L158d1;
    case 0x158da: goto L158da;
    case 0x158ed: goto L158ed;
    case 0x158f6: goto L158f6;
    case 0x15909: goto L15909;
    case 0x15912: goto L15912;
    case 0x15925: goto L15925;
    case 0x1592e: goto L1592e;
    case 0x15941: goto L15941;
    case 0x1594a: goto L1594a;
    case 0x1595d: goto L1595d;
    case 0x15966: goto L15966;
    case 0x15979: goto L15979;
    case 0x15982: goto L15982;
    case 0x15995: goto L15995;
    case 0x1599e: goto L1599e;
    case 0x159b1: goto L159b1;
    case 0x159ba: goto L159ba;
    case 0x159cd: goto L159cd;
    case 0x159d6: goto L159d6;
    case 0x159e9: goto L159e9;
    case 0x159f2: goto L159f2;
    case 0x15a05: goto L15a05;
    case 0x15a0e: goto L15a0e;
    case 0x15a21: goto L15a21;
    case 0x15a2a: goto L15a2a;
    case 0x15a3d: goto L15a3d;
    case 0x15a46: goto L15a46;
    case 0x15a59: goto L15a59;
    case 0x15a62: goto L15a62;
    case 0x15a75: goto L15a75;
    case 0x15a7e: goto L15a7e;
    case 0x15a9f: goto L15a9f;
    case 0x15aae: goto L15aae;
    case 0x15ab3: goto L15ab3;
    case 0x15abd: goto L15abd;
    case 0x15add: goto L15add;
    case 0x15af4: goto L15af4;
    case 0x15afe: goto L15afe;
    case 0x15b06: goto L15b06;
    case 0x15b18: goto L15b18;
    case 0x15b27: goto L15b27;
    case 0x15b2c: goto L15b2c;
    case 0x15b2f: goto L15b2f;
    case 0x15b3a: goto L15b3a;
    case 0x15b3d: goto L15b3d;
    case 0x15b84: goto L15b84;
    case 0x15b8b: goto L15b8b;
    case 0x15c65: goto L15c65;
    case 0x15c68: goto L15c68;
    case 0x15c6d: goto L15c6d;
    case 0x15c70: goto L15c70;
    case 0x15c71: goto L15c71;
    case 0x15c7d: goto L15c7d;
    case 0x15cc2: goto L15cc2;
    case 0x15cc3: goto L15cc3;
    case 0x15cce: goto L15cce;
    case 0x15cec: goto L15cec;
    case 0x15d12: goto L15d12;
    case 0x15d29: goto L15d29;
    case 0x15d35: goto L15d35;
    case 0x15d50: goto L15d50;
    case 0x15d5f: goto L15d5f;
    case 0x15d71: goto L15d71;
    case 0x15d84: goto L15d84;
    case 0x15d85: goto L15d85;
    case 0x15db8: goto L15db8;
    case 0x15dd1: goto L15dd1;
    case 0x15e0d: goto L15e0d;
    case 0x15e26: goto L15e26;
    case 0x15e62: goto L15e62;
    case 0x15e7b: goto L15e7b;
    case 0x15eb7: goto L15eb7;
    case 0x15ed0: goto L15ed0;
    case 0x15ed9: goto L15ed9;
    case 0x1605a: goto L1605a;
    case 0x162cf: goto L162cf;
    case 0x16545: goto L16545;
    case 0x167b6: goto L167b6;
    case 0x16a2c: goto L16a2c;
    case 0x16ca3: goto L16ca3;
    case 0x16cc7: goto L16cc7;
    case 0x16ccd: goto L16ccd;
    case 0x16cd0: goto L16cd0;
    case 0x16cd6: goto L16cd6;
    case 0x16cd9: goto L16cd9;
    case 0x16cdf: goto L16cdf;
    case 0x16ce2: goto L16ce2;
    case 0x16ce8: goto L16ce8;
    case 0x16ceb: goto L16ceb;
    case 0x16cf1: goto L16cf1;
    case 0x16cf4: goto L16cf4;
    case 0x16cfa: goto L16cfa;
    case 0x16cfd: goto L16cfd;
    case 0x16d03: goto L16d03;
    case 0x16d06: goto L16d06;
    case 0x16d0c: goto L16d0c;
    case 0x16d0f: goto L16d0f;
    case 0x16d15: goto L16d15;
    case 0x16d18: goto L16d18;
    case 0x16d1e: goto L16d1e;
    case 0x16d21: goto L16d21;
    case 0x16d22: goto L16d22;
    case 0x16d34: goto L16d34;
    case 0x16d3c: goto L16d3c;
    case 0x16d3d: goto L16d3d;
    case 0x16d75: goto L16d75;
    case 0x16d76: goto L16d76;
    case 0x16d9f: goto L16d9f;
    case 0x16da0: goto L16da0;
    case 0x16dbc: goto L16dbc;
    case 0x16dcb: goto L16dcb;
    case 0x16de9: goto L16de9;
    case 0x16df0: goto L16df0;
    case 0x16df2: goto L16df2;
    case 0x16df5: goto L16df5;
    case 0x16df6: goto L16df6;
    case 0x16e0d: goto L16e0d;
    case 0x16e0f: goto L16e0f;
    case 0x16e12: goto L16e12;
    case 0x16e13: goto L16e13;
    case 0x16e62: goto L16e62;
    case 0x16e65: goto L16e65;
    case 0x16e6d: goto L16e6d;
    case 0x16e70: goto L16e70;
    case 0x16e71: goto L16e71;
    case 0x16e75: goto L16e75;
    case 0x16e76: goto L16e76;
    case 0x16e7a: goto L16e7a;
    case 0x16e7d: goto L16e7d;
    case 0x16e87: goto L16e87;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x52e  [x1]
    goto L1553e;
L1553e:
    if (c.tracing) c.traceAt(0x1553e);
    // 1501:052e  mov word ptr cs:[0x52a], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x52au), c.c.x);
    // 1501:0533  mov word ptr cs:[0x52c], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x52cu), c.dx_.x);
    // 1501:0538  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:053a  mov word ptr cs:[0x528], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x528u), c.a.x);
    // 1501:053e  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:0541  int 0x10  [x1]
    c.ip = 0x543u; c.d32 = false; c.intr(0x10, 0x543u);
L15553:
    if (c.tracing) c.traceAt(0x15553);
    // 1501:0543  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0546  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0548  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1555a:
    if (c.tracing) c.traceAt(0x1555a);
    // 1501:054a  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:054c  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:054e  int 0x10  [x16]
    c.ip = 0x550u; c.d32 = false; c.intr(0x10, 0x550u);
L15560:
    if (c.tracing) c.traceAt(0x15560);
    // 1501:0550  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:0552  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:0554  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:0557  jne 0x54a  [x16]
    if (!c.zf) goto L1555a;
L15569:
    if (c.tracing) c.traceAt(0x15569);
    // 1501:0559  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:055b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1556d:
    if (c.tracing) c.traceAt(0x1556d);
    // 1501:055d  mov word ptr cs:[di + 0x208], ax  [x400]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x208u), c.a.x);
    // 1501:0562  add ax, 0x40  [x400]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x40u, false));
    // 1501:0565  add di, 2  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0568  cmp di, 0x320  [x400]
    c.sub<16>(c.di.x, 0x320u, true);
    // 1501:056c  jne 0x55d  [x400]
    if (!c.zf) goto L1556d;
L1557e:
    if (c.tracing) c.traceAt(0x1557e);
    // 1501:056e  mov si, 0xa  [x1]
    c.si.x = (uint16_t)(0xau);
    // 1501:0571  mov di, 0x14  [x1]
    c.di.x = (uint16_t)(0x14u);
L15584:
    if (c.tracing) c.traceAt(0x15584);
    // 1501:0574  call 0x1e03  [x15]
    c.push16(0x577u); code_28(c, 0x16e13u); if (c.ip != 0x577u) c.badReturn(0x15584);
L15587:
    if (c.tracing) c.traceAt(0x15587);
    // 1501:0577  cwde   [x15]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:0578  add ax, 0xa0  [x15]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, true));
    // 1501:057b  mov word ptr [si + 0x640f], ax  [x15]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x640fu), c.a.x);
    // 1501:057f  call 0x1e03  [x15]
    c.push16(0x582u); code_28(c, 0x16e13u); if (c.ip != 0x582u) c.badReturn(0x1558f);
L15592:
    if (c.tracing) c.traceAt(0x15592);
    // 1501:0582  cwde   [x15]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:0583  sar ax, 1  [x15]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0585  add ax, 0x78  [x15]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x78u, true));
    // 1501:0588  mov word ptr [si + 0x6441], ax  [x15]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6441u), c.a.x);
    // 1501:058c  call 0x1e03  [x15]
    c.push16(0x58fu); code_28(c, 0x16e13u); if (c.ip != 0x58fu) c.badReturn(0x1559c);
L1559f:
    if (c.tracing) c.traceAt(0x1559f);
    // 1501:058f  call 0x1e03  [x15]
    c.push16(0x592u); code_28(c, 0x16e13u); if (c.ip != 0x592u) c.badReturn(0x1559f);
L155a2:
    if (c.tracing) c.traceAt(0x155a2);
    // 1501:0592  and al, 7  [x15]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), false));
    // 1501:0594  xor ah, ah  [x15]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:0596  shl ax, 1  [x15]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:0598  mov word ptr [di + 0x6473], ax  [x15]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6473u), c.a.x);
    // 1501:059c  call 0x1e03  [x15]
    c.push16(0x59fu); code_28(c, 0x16e13u); if (c.ip != 0x59fu) c.badReturn(0x155ac);
L155af:
    if (c.tracing) c.traceAt(0x155af);
    // 1501:059f  call 0x1e03  [x15]
    c.push16(0x5a2u); code_28(c, 0x16e13u); if (c.ip != 0x5a2u) c.badReturn(0x155af);
L155b2:
    if (c.tracing) c.traceAt(0x155b2);
    // 1501:05a2  and al, 7  [x15]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), false));
    // 1501:05a4  xor ah, ah  [x15]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:05a6  shl ax, 1  [x15]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:05a8  mov word ptr [di + 0x6475], ax  [x15]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6475u), c.a.x);
    // 1501:05ac  add di, 4  [x15]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:05af  add si, 2  [x15]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:05b2  cmp si, 0x28  [x15]
    c.sub<16>(c.si.x, 0x28u, true);
    // 1501:05b5  jb 0x574  [x15]
    if (c.cf) goto L15584;
L155c7:
    if (c.tracing) c.traceAt(0x155c7);
    // 1501:05b7  call 0xcb3  [x1]
    c.push16(0x5bau); code_28(c, 0x15cc3u); if (c.ip != 0x5bau) c.badReturn(0x155c7);
L155ca:
    if (c.tracing) c.traceAt(0x155ca);
    // 1501:05ba  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:05bd  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:05c0  out dx, al  [x1]
    c.ip = 0x5c1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05c1  jmp 0x5c3  [x1]
    goto L155d3;
L155d3:
    if (c.tracing) c.traceAt(0x155d3);
    // 1501:05c3  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:05c6  mov ax, 0x2013  [x1]
    c.a.x = (uint16_t)(0x2013u);
    // 1501:05c9  out dx, ax  [x1]
    c.ip = 0x5cau; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05ca  jmp 0x5cc  [x1]
    goto L155dc;
L155dc:
    if (c.tracing) c.traceAt(0x155dc);
    // 1501:05cc  mov dx, 0x3c2  [x1]
    c.dx_.x = (uint16_t)(0x3c2u);
    // 1501:05cf  mov al, 0xe3  [x1]
    c.a.l = (uint8_t)(0xe3u);
    // 1501:05d1  out dx, al  [x1]
    c.ip = 0x5d2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05d2  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:05d5  mov ax, 0x616  [x1]
    c.a.x = (uint16_t)(0x616u);
    // 1501:05d8  out dx, ax  [x1]
    c.ip = 0x5d9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05d9  mov ax, 0xe715  [x1]
    c.a.x = (uint16_t)(0xe715u);
    // 1501:05dc  out dx, ax  [x1]
    c.ip = 0x5ddu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05dd  mov ax, 0xdf12  [x1]
    c.a.x = (uint16_t)(0xdf12u);
    // 1501:05e0  out dx, ax  [x1]
    c.ip = 0x5e1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05e1  mov ax, 0x2a11  [x1]
    c.a.x = (uint16_t)(0x2a11u);
    // 1501:05e4  out dx, ax  [x1]
    c.ip = 0x5e5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05e5  mov ax, 0xea10  [x1]
    c.a.x = (uint16_t)(0xea10u);
    // 1501:05e8  out dx, ax  [x1]
    c.ip = 0x5e9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05e9  mov ax, 0x3e07  [x1]
    c.a.x = (uint16_t)(0x3e07u);
    // 1501:05ec  out dx, ax  [x1]
    c.ip = 0x5edu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05ed  mov ax, 0xd06  [x1]
    c.a.x = (uint16_t)(0xd06u);
    // 1501:05f0  out dx, ax  [x1]
    c.ip = 0x5f1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:05f1  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:05f4  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:05f7  out dx, al  [x1]
    c.ip = 0x5f8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:05f8  jmp 0x5fa  [x1]
    goto L1560a;
L1560a:
    if (c.tracing) c.traceAt(0x1560a);
    // 1501:05fa  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:05fc  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:05fe  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L15611:
    if (c.tracing) c.traceAt(0x15611);
    // 1501:0601  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L15613:
    if (c.tracing) c.traceAt(0x15613);
    // 1501:0603  mov word ptr [0x704f], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0x704fu), 0x0u);
L1561c:
    if (c.tracing) c.traceAt(0x1561c);
    // 1501:060c  push es  [x366]
    c.ip = 0x60cu; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:060d  mov ax, word ptr cs:[0x52a]  [x366]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52au)));
    // 1501:0611  mov es, ax  [x366]
    c.loadEs(c.a.x);
    // 1501:0613  mov si, word ptr cs:[0x52c]  [x366]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52cu)));
    // 1501:0618  mov dx, word ptr es:[si]  [x366]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:061b  pop es  [x366]
    c.loadEs((uint16_t)c.pop16());
    // 1501:061c  cmp dx, 0  [x366]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:061f  je 0x60c  [x366]
    if (c.zf) goto L1561c;
L15631:
    if (c.tracing) c.traceAt(0x15631);
    // 1501:0621  mov byte ptr [0x64ef], 0  [x1]
    c.w8(c.dsb + (uint32_t)(0x64efu), 0x0u);
    // 1501:0629  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L1563c:
    if (c.tracing) c.traceAt(0x1563c);
    // 1501:062c  in al, dx  [x142]
    c.ip = 0x62du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1563d:
    if (c.tracing) c.traceAt(0x1563d);
    // 1501:062d  test al, 8  [x175]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:062f  je 0x62c  [x175]
    if (c.zf) goto L1563c;
L15641:
    if (c.tracing) c.traceAt(0x15641);
    // 1501:0631  in al, dx  [x58]
    c.ip = 0x632u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15642:
    if (c.tracing) c.traceAt(0x15642);
    // 1501:0632  test al, 8  [x61]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0634  jne 0x631  [x61]
    if (!c.zf) goto L15641;
L15646:
    if (c.tracing) c.traceAt(0x15646);
    // 1501:0636  call 0x1dac  [x16]
    c.push16(0x639u); code_28(c, 0x16dbcu); if (c.ip != 0x639u) c.badReturn(0x15646);
L15649:
    if (c.tracing) c.traceAt(0x15649);
    // 1501:0639  add byte ptr [0x64ef], 4  [x16]
    c.w8(c.dsb + (uint32_t)(0x64efu), c.add<8>(c.r8(c.dsb + (uint32_t)(0x64efu)), 0x4u, false));
    // 1501:0641  cmp byte ptr [0x64ef], 0x40  [x16]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x64efu)), 0x40u, true);
    // 1501:0649  jb 0x62c  [x16]
    if (c.cf) goto L1563c;
L1565b:
    if (c.tracing) c.traceAt(0x1565b);
    // 1501:064b  call 0x1d2d  [x1]
    c.push16(0x64eu); code_28(c, 0x16d3du); if (c.ip != 0x64eu) c.badReturn(0x1565b);
L1565e:
    if (c.tracing) c.traceAt(0x1565e);
    // 1501:064e  inc word ptr [0x6400]  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6400u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x6400u)), false));
    // 1501:0655  and word ptr [0x6400], 7  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6400u), c.logic<16>((c.r16(c.dsb + (uint32_t)(0x6400u))) & (0x7u), false));
    // 1501:065d  mov cx, 0x8000  [x1717]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:0660  mov bx, 0xa000  [x1717]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:0663  mov ax, es  [x1717]
    c.a.x = (uint16_t)(c.es);
    // 1501:0665  cmp ax, 0xa000  [x1717]
    c.sub<16>(c.a.x, 0xa000u, true);
    // 1501:0668  jne 0x670  [x1717]
    if (!c.zf) goto L15680;
L1567a:
    if (c.tracing) c.traceAt(0x1567a);
    // 1501:066a  mov bx, 0xa800  [x859]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:066d  mov cx, 0  [x859]
    c.c.x = (uint16_t)(0x0u);
L15680:
    if (c.tracing) c.traceAt(0x15680);
    // 1501:0670  mov es, bx  [x1717]
    c.loadEs(c.b.x);
    // 1501:0672  add cx, 0xc  [x1717]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0xcu, true));
    // 1501:0675  mov dx, 0x3d4  [x1717]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0678  mov al, 0xc  [x1717]
    c.a.l = (uint8_t)(0xcu);
    // 1501:067a  mov ah, ch  [x1717]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:067c  out dx, ax  [x1717]
    c.ip = 0x67du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:067d  mov dx, 0x3d4  [x1717]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0680  mov al, 0xd  [x1717]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0682  mov ah, cl  [x1717]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:0684  out dx, ax  [x1717]
    c.ip = 0x685u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0685  mov dx, 0x3da  [x1717]
    c.dx_.x = (uint16_t)(0x3dau);
L15698:
    if (c.tracing) c.traceAt(0x15698);
    // 1501:0688  in ax, dx  [x5149]
    c.ip = 0x689u; c.d32 = false; c.a.x = c.in16(c.dx_.x);
L15699:
    if (c.tracing) c.traceAt(0x15699);
    // 1501:0689  and al, 8  [x6865]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:068b  jne 0x688  [x6865]
    if (!c.zf) goto L15698;
L1569d:
    if (c.tracing) c.traceAt(0x1569d);
    // 1501:068d  in ax, dx  [x4956979]
    c.ip = 0x68eu; c.d32 = false; c.a.x = c.in16(c.dx_.x);
L1569e:
    if (c.tracing) c.traceAt(0x1569e);
    // 1501:068e  and al, 8  [x6608733]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0690  je 0x68d  [x6608733]
    if (c.zf) goto L1569d;
L156a2:
    if (c.tracing) c.traceAt(0x156a2);
    // 1501:0692  call 0x1dac  [x1717]
    c.push16(0x695u); code_28(c, 0x16dbcu); if (c.ip != 0x695u) c.badReturn(0x156a2);
L156a5:
    if (c.tracing) c.traceAt(0x156a5);
    // 1501:0695  cmp byte ptr [0x64ef], 0  [x1717]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x64efu)), 0x0u, true);
    // 1501:069d  je 0x6a7  [x1717]
    if (c.zf) goto L156b7;
L156af:
    if (c.tracing) c.traceAt(0x156af);
    // 1501:069f  sub byte ptr [0x64ef], 4  [x320]
    c.w8(c.dsb + (uint32_t)(0x64efu), c.sub<8>(c.r8(c.dsb + (uint32_t)(0x64efu)), 0x4u, true));
L156b7:
    if (c.tracing) c.traceAt(0x156b7);
    // 1501:06a7  call 0x1d12  [x1717]
    c.push16(0x6aau); code_28(c, 0x16d22u); if (c.ip != 0x6aau) c.badReturn(0x156b7);
L156ba:
    if (c.tracing) c.traceAt(0x156ba);
    // 1501:06aa  mov si, word ptr [0x6400]  [x1717]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6400u)));
    // 1501:06b1  shr si, 1  [x1717]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:06b3  mov ah, byte ptr [si + 0x6402]  [x1717]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x6402u)));
    // 1501:06b7  mov dx, 0x3c4  [x1717]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:06ba  mov al, 2  [x1717]
    c.a.l = (uint8_t)(0x2u);
    // 1501:06bc  out dx, ax  [x1717]
    c.ip = 0x6bdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:06bd  mov ax, 0x9c4  [x1717]
    c.a.x = (uint16_t)(0x9c4u);
    // 1501:06c0  mul word ptr [0x6400]  [x1717]
    c.mul16(c.r16(c.dsb + (uint32_t)(0x6400u)));
    // 1501:06c7  add ax, word ptr cs:[0x528]  [x1717]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x528u)), false));
    // 1501:06cc  mov gs, ax  [x1717]
    c.loadGs(c.a.x);
    // 1501:06ce  cld   [x1717]
    c.df = false;
    // 1501:06cf  mov ax, 0x28  [x1717]
    c.a.x = (uint16_t)(0x28u);
    // 1501:06d2  mul word ptr [0x64d7]  [x1717]
    c.mul16(c.r16(c.dsb + (uint32_t)(0x64d7u)));
    // 1501:06d9  mov cx, ax  [x1717]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:06db  xor ax, ax  [x1717]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:06dd  cli   [x1717]
    c.m.cli();
    // 1501:06de  mov ax, sp  [x1717]
    c.a.x = (uint16_t)(c.sp.x);
    // 1501:06e0  mov word ptr [0x64db], ax  [x1717]
    c.w16(c.dsb + (uint32_t)(0x64dbu), c.a.x);
    // 1501:06e6  mov ax, ss  [x1717]
    c.a.x = (uint16_t)(c.ss);
    // 1501:06e8  mov word ptr [0x64d9], ax  [x1717]
    c.w16(c.dsb + (uint32_t)(0x64d9u), c.a.x);
    // 1501:06ee  mov ax, gs  [x1717]
    c.a.x = (uint16_t)(c.gs);
    // 1501:06f0  mov ss, ax  [x1717]
    c.loadSs(c.a.x);
L15702:
    if (c.tracing) c.traceAt(0x15702);
    // 1501:06f2  mov sp, 0  [x1717]
    c.sp.x = (uint16_t)(0x0u);
L15705:
    if (c.tracing) c.traceAt(0x15705);
    // 1501:06f5  xor al, al  [x1717]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15707:
    if (c.tracing) c.traceAt(0x15707);
    // 1501:06f7  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:06f8  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:06fb  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:06fc  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:06ff  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0700  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0703  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0704  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0707  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0708  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:070b  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:070c  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:070f  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0710  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0713  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0714  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0717  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0718  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:071b  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:071c  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:071f  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0720  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0723  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0724  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0727  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0728  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:072b  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:072c  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:072f  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0730  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0733  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0734  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0737  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0738  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:073b  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:073c  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:073f  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0740  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0743  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0744  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0747  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0748  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:074b  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:074c  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:074f  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0750  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0753  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0754  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0757  pop di  [x751360]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0758  mov byte ptr es:[di], al  [x751360]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:075b  loop 0x6f7  [x751360]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15707;
L1576d:
    if (c.tracing) c.traceAt(0x1576d);
    // 1501:075d  mov ax, word ptr [0x64db]  [x1717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x64dbu)));
    // 1501:0763  mov sp, ax  [x1717]
    c.sp.x = (uint16_t)(c.a.x);
    // 1501:0765  mov ax, word ptr [0x64d9]  [x1717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x64d9u)));
    // 1501:076b  mov ss, ax  [x1717]
    c.loadSs(c.a.x);
L1577d:
    if (c.tracing) c.traceAt(0x1577d);
    // 1501:076d  sti   [x1717]
    c.ip = 0x76eu; c.d32 = false; c.m.sti();
L1577e:
    if (c.tracing) c.traceAt(0x1577e);
    // 1501:076e  mov ax, 0x4e20  [x1717]
    c.a.x = (uint16_t)(0x4e20u);
    // 1501:0771  add ax, word ptr [0x705b]  [x1717]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x705bu)), false));
    // 1501:0778  xor dx, dx  [x1717]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:077a  mov cx, 0x4a9  [x1717]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:077d  div cx  [x1717]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x77du); }   // #DE: int 0, then again
    // 1501:077f  mov word ptr [0x705b], dx  [x1717]
    c.w16(c.dsb + (uint32_t)(0x705bu), c.dx_.x);
    // 1501:0786  mov cx, ax  [x1717]
    c.c.x = (uint16_t)(c.a.x);
L15798:
    if (c.tracing) c.traceAt(0x15798);
    // 1501:0788  pushf   [x28784]
    c.push16(c.flags());
    // 1501:0789  lcall [0x7057]  [x28784]
    { const uint32_t t0 = c.r16(c.dsb + (uint32_t)(0x7057u)); const uint16_t t1 = c.r16(c.dsb + (uint32_t)(0x7057u) + 2); c.push16(c.cs); c.push16(0x790u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L157a0:
    if (c.tracing) c.traceAt(0x157a0);
    // 1501:0790  loop 0x788  [x28784]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15798;
L157a2:
    if (c.tracing) c.traceAt(0x157a2);
    // 1501:0792  xor si, si  [x1717]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0794  xor bx, bx  [x1717]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:0796  mov cx, word ptr [0x64d7]  [x1717]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x64d7u)));
L157ad:
    if (c.tracing) c.traceAt(0x157ad);
    // 1501:079d  push cx  [x18784]
    c.push16(c.c.x);
    // 1501:079e  push bx  [x18784]
    c.push16(c.b.x);
    // 1501:079f  push si  [x18784]
    c.push16(c.si.x);
    // 1501:07a0  mov ax, word ptr [bx + 0x640f]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x640fu)));
    // 1501:07a4  mov word ptr [0x64f1], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x64f1u), c.a.x);
    // 1501:07aa  mov ax, word ptr [bx + 0x6441]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x6441u)));
    // 1501:07ae  mov word ptr [0x64f3], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x64f3u), c.a.x);
    // 1501:07b4  mov di, 0  [x18784]
    c.di.x = (uint16_t)(0x0u);
    // 1501:07b7  call 0xb2d  [x18784]
    c.push16(0x7bau); code_28(c, 0x15b3du); if (c.ip != 0x7bau) c.badReturn(0x157c7);
L157ca:
    if (c.tracing) c.traceAt(0x157ca);
    // 1501:07ba  call 0xb74  [x18784]
    c.push16(0x7bdu); code_28(c, 0x15b84u); if (c.ip != 0x7bdu) c.badReturn(0x157ca);
L157cd:
    if (c.tracing) c.traceAt(0x157cd);
    // 1501:07bd  call 0xc61  [x18784]
    c.push16(0x7c0u); code_28(c, 0x15c71u); if (c.ip != 0x7c0u) c.badReturn(0x157cd);
L157d0:
    if (c.tracing) c.traceAt(0x157d0);
    // 1501:07c0  call 0xd75  [x18784]
    c.push16(0x7c3u); code_28(c, 0x15d85u); if (c.ip != 0x7c3u) c.badReturn(0x157d0);
L157d3:
    if (c.tracing) c.traceAt(0x157d3);
    // 1501:07c3  pop si  [x18784]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:07c4  call 0x1cb7  [x18784]
    c.push16(0x7c7u); code_28(c, 0x16cc7u); if (c.ip != 0x7c7u) c.badReturn(0x157d4);
L157d7:
    if (c.tracing) c.traceAt(0x157d7);
    // 1501:07c7  pop bx  [x18784]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:07c8  pop cx  [x18784]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:07c9  add bx, 2  [x18784]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:07cc  loop 0x79d  [x18784]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L157ad;
L157de:
    if (c.tracing) c.traceAt(0x157de);
    // 1501:07ce  add word ptr [0x6541], 0xa  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6541u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6541u)), 0xau, false));
    // 1501:07d6  cmp word ptr [0x6541], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6541u)), 0x5a0u, true);
    // 1501:07df  jb 0x7ea  [x1717]
    if (c.cf) goto L157fa;
L157f1:
    if (c.tracing) c.traceAt(0x157f1);
    // 1501:07e1  sub word ptr [0x6541], 0x5a0  [x11]
    c.w16(c.dsb + (uint32_t)(0x6541u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6541u)), 0x5a0u, true));
L157fa:
    if (c.tracing) c.traceAt(0x157fa);
    // 1501:07ea  add word ptr [0x6591], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6591u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6591u)), 0x2u, false));
    // 1501:07f2  cmp word ptr [0x6591], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6591u)), 0x5a0u, true);
    // 1501:07fb  jb 0x806  [x1717]
    if (c.cf) goto L15816;
L1580d:
    if (c.tracing) c.traceAt(0x1580d);
    // 1501:07fd  sub word ptr [0x6591], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x6591u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6591u)), 0x5a0u, true));
L15816:
    if (c.tracing) c.traceAt(0x15816);
    // 1501:0806  add word ptr [0x65e1], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65e1u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65e1u)), 0x4u, false));
    // 1501:080e  cmp word ptr [0x65e1], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e1u)), 0x5a0u, true);
    // 1501:0817  jb 0x822  [x1717]
    if (c.cf) goto L15832;
L15829:
    if (c.tracing) c.traceAt(0x15829);
    // 1501:0819  sub word ptr [0x65e1], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x65e1u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e1u)), 0x5a0u, true));
L15832:
    if (c.tracing) c.traceAt(0x15832);
    // 1501:0822  add word ptr [0x6543], 0  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6543u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6543u)), 0x0u, false));
    // 1501:082a  cmp word ptr [0x6543], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6543u)), 0x5a0u, true);
    // 1501:0833  jb 0x83e  [x1717]
    if (c.cf) goto L1584e;
    c.notTranslated(0x15845, "fall-through");
L1584e:
    if (c.tracing) c.traceAt(0x1584e);
    // 1501:083e  add word ptr [0x6593], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6593u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6593u)), 0x2u, false));
    // 1501:0846  cmp word ptr [0x6593], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6593u)), 0x5a0u, true);
    // 1501:084f  jb 0x85a  [x1717]
    if (c.cf) goto L1586a;
L15861:
    if (c.tracing) c.traceAt(0x15861);
    // 1501:0851  sub word ptr [0x6593], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x6593u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6593u)), 0x5a0u, true));
L1586a:
    if (c.tracing) c.traceAt(0x1586a);
    // 1501:085a  add word ptr [0x65e3], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65e3u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65e3u)), 0x4u, false));
    // 1501:0862  cmp word ptr [0x65e3], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e3u)), 0x5a0u, true);
    // 1501:086b  jb 0x876  [x1717]
    if (c.cf) goto L15886;
L1587d:
    if (c.tracing) c.traceAt(0x1587d);
    // 1501:086d  sub word ptr [0x65e3], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x65e3u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e3u)), 0x5a0u, true));
L15886:
    if (c.tracing) c.traceAt(0x15886);
    // 1501:0876  add word ptr [0x6545], 8  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6545u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6545u)), 0x8u, false));
    // 1501:087e  cmp word ptr [0x6545], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6545u)), 0x5a0u, true);
    // 1501:0887  jb 0x892  [x1717]
    if (c.cf) goto L158a2;
L15899:
    if (c.tracing) c.traceAt(0x15899);
    // 1501:0889  sub word ptr [0x6545], 0x5a0  [x9]
    c.w16(c.dsb + (uint32_t)(0x6545u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6545u)), 0x5a0u, true));
L158a2:
    if (c.tracing) c.traceAt(0x158a2);
    // 1501:0892  add word ptr [0x6595], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6595u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6595u)), 0x4u, false));
    // 1501:089a  cmp word ptr [0x6595], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6595u)), 0x5a0u, true);
    // 1501:08a3  jb 0x8ae  [x1717]
    if (c.cf) goto L158be;
L158b5:
    if (c.tracing) c.traceAt(0x158b5);
    // 1501:08a5  sub word ptr [0x6595], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x6595u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6595u)), 0x5a0u, true));
L158be:
    if (c.tracing) c.traceAt(0x158be);
    // 1501:08ae  add word ptr [0x65e5], 6  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65e5u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65e5u)), 0x6u, false));
    // 1501:08b6  cmp word ptr [0x65e5], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e5u)), 0x5a0u, true);
    // 1501:08bf  jb 0x8ca  [x1717]
    if (c.cf) goto L158da;
L158d1:
    if (c.tracing) c.traceAt(0x158d1);
    // 1501:08c1  sub word ptr [0x65e5], 0x5a0  [x7]
    c.w16(c.dsb + (uint32_t)(0x65e5u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e5u)), 0x5a0u, true));
L158da:
    if (c.tracing) c.traceAt(0x158da);
    // 1501:08ca  add word ptr [0x6547], 8  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6547u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6547u)), 0x8u, false));
    // 1501:08d2  cmp word ptr [0x6547], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6547u)), 0x5a0u, true);
    // 1501:08db  jb 0x8e6  [x1717]
    if (c.cf) goto L158f6;
L158ed:
    if (c.tracing) c.traceAt(0x158ed);
    // 1501:08dd  sub word ptr [0x6547], 0x5a0  [x9]
    c.w16(c.dsb + (uint32_t)(0x6547u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6547u)), 0x5a0u, true));
L158f6:
    if (c.tracing) c.traceAt(0x158f6);
    // 1501:08e6  add word ptr [0x6597], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6597u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6597u)), 0x4u, false));
    // 1501:08ee  cmp word ptr [0x6597], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6597u)), 0x5a0u, true);
    // 1501:08f7  jb 0x902  [x1717]
    if (c.cf) goto L15912;
L15909:
    if (c.tracing) c.traceAt(0x15909);
    // 1501:08f9  sub word ptr [0x6597], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x6597u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6597u)), 0x5a0u, true));
L15912:
    if (c.tracing) c.traceAt(0x15912);
    // 1501:0902  add word ptr [0x65e7], 6  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65e7u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65e7u)), 0x6u, false));
    // 1501:090a  cmp word ptr [0x65e7], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e7u)), 0x5a0u, true);
    // 1501:0913  jb 0x91e  [x1717]
    if (c.cf) goto L1592e;
L15925:
    if (c.tracing) c.traceAt(0x15925);
    // 1501:0915  sub word ptr [0x65e7], 0x5a0  [x7]
    c.w16(c.dsb + (uint32_t)(0x65e7u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e7u)), 0x5a0u, true));
L1592e:
    if (c.tracing) c.traceAt(0x1592e);
    // 1501:091e  add word ptr [0x6549], 6  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6549u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6549u)), 0x6u, false));
    // 1501:0926  cmp word ptr [0x6549], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6549u)), 0x5a0u, true);
    // 1501:092f  jb 0x93a  [x1717]
    if (c.cf) goto L1594a;
L15941:
    if (c.tracing) c.traceAt(0x15941);
    // 1501:0931  sub word ptr [0x6549], 0x5a0  [x7]
    c.w16(c.dsb + (uint32_t)(0x6549u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6549u)), 0x5a0u, true));
L1594a:
    if (c.tracing) c.traceAt(0x1594a);
    // 1501:093a  add word ptr [0x6599], 6  [x1717]
    c.w16(c.dsb + (uint32_t)(0x6599u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6599u)), 0x6u, false));
    // 1501:0942  cmp word ptr [0x6599], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6599u)), 0x5a0u, true);
    // 1501:094b  jb 0x956  [x1717]
    if (c.cf) goto L15966;
L1595d:
    if (c.tracing) c.traceAt(0x1595d);
    // 1501:094d  sub word ptr [0x6599], 0x5a0  [x7]
    c.w16(c.dsb + (uint32_t)(0x6599u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6599u)), 0x5a0u, true));
L15966:
    if (c.tracing) c.traceAt(0x15966);
    // 1501:0956  add word ptr [0x65e9], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65e9u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65e9u)), 0x2u, false));
    // 1501:095e  cmp word ptr [0x65e9], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e9u)), 0x5a0u, true);
    // 1501:0967  jb 0x972  [x1717]
    if (c.cf) goto L15982;
L15979:
    if (c.tracing) c.traceAt(0x15979);
    // 1501:0969  sub word ptr [0x65e9], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x65e9u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65e9u)), 0x5a0u, true));
L15982:
    if (c.tracing) c.traceAt(0x15982);
    // 1501:0972  add word ptr [0x654b], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x654bu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x654bu)), 0x4u, false));
    // 1501:097a  cmp word ptr [0x654b], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654bu)), 0x5a0u, true);
    // 1501:0983  jb 0x98e  [x1717]
    if (c.cf) goto L1599e;
L15995:
    if (c.tracing) c.traceAt(0x15995);
    // 1501:0985  sub word ptr [0x654b], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x654bu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654bu)), 0x5a0u, true));
L1599e:
    if (c.tracing) c.traceAt(0x1599e);
    // 1501:098e  add word ptr [0x659b], 4  [x1717]
    c.w16(c.dsb + (uint32_t)(0x659bu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x659bu)), 0x4u, false));
    // 1501:0996  cmp word ptr [0x659b], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659bu)), 0x5a0u, true);
    // 1501:099f  jb 0x9aa  [x1717]
    if (c.cf) goto L159ba;
L159b1:
    if (c.tracing) c.traceAt(0x159b1);
    // 1501:09a1  sub word ptr [0x659b], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x659bu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659bu)), 0x5a0u, true));
L159ba:
    if (c.tracing) c.traceAt(0x159ba);
    // 1501:09aa  add word ptr [0x65eb], 8  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65ebu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65ebu)), 0x8u, false));
    // 1501:09b2  cmp word ptr [0x65eb], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65ebu)), 0x5a0u, true);
    // 1501:09bb  jb 0x9c6  [x1717]
    if (c.cf) goto L159d6;
L159cd:
    if (c.tracing) c.traceAt(0x159cd);
    // 1501:09bd  sub word ptr [0x65eb], 0x5a0  [x9]
    c.w16(c.dsb + (uint32_t)(0x65ebu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65ebu)), 0x5a0u, true));
L159d6:
    if (c.tracing) c.traceAt(0x159d6);
    // 1501:09c6  add word ptr [0x654d], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x654du), c.add<16>(c.r16(c.dsb + (uint32_t)(0x654du)), 0x2u, false));
    // 1501:09ce  cmp word ptr [0x654d], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654du)), 0x5a0u, true);
    // 1501:09d7  jb 0x9e2  [x1717]
    if (c.cf) goto L159f2;
L159e9:
    if (c.tracing) c.traceAt(0x159e9);
    // 1501:09d9  sub word ptr [0x654d], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x654du), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654du)), 0x5a0u, true));
L159f2:
    if (c.tracing) c.traceAt(0x159f2);
    // 1501:09e2  add word ptr [0x659d], 6  [x1717]
    c.w16(c.dsb + (uint32_t)(0x659du), c.add<16>(c.r16(c.dsb + (uint32_t)(0x659du)), 0x6u, false));
    // 1501:09ea  cmp word ptr [0x659d], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659du)), 0x5a0u, true);
    // 1501:09f3  jb 0x9fe  [x1717]
    if (c.cf) goto L15a0e;
L15a05:
    if (c.tracing) c.traceAt(0x15a05);
    // 1501:09f5  sub word ptr [0x659d], 0x5a0  [x7]
    c.w16(c.dsb + (uint32_t)(0x659du), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659du)), 0x5a0u, true));
L15a0e:
    if (c.tracing) c.traceAt(0x15a0e);
    // 1501:09fe  add word ptr [0x65ed], 0xa  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65edu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65edu)), 0xau, false));
    // 1501:0a06  cmp word ptr [0x65ed], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65edu)), 0x5a0u, true);
    // 1501:0a0f  jb 0xa1a  [x1717]
    if (c.cf) goto L15a2a;
L15a21:
    if (c.tracing) c.traceAt(0x15a21);
    // 1501:0a11  sub word ptr [0x65ed], 0x5a0  [x11]
    c.w16(c.dsb + (uint32_t)(0x65edu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65edu)), 0x5a0u, true));
L15a2a:
    if (c.tracing) c.traceAt(0x15a2a);
    // 1501:0a1a  add word ptr [0x654f], 8  [x1717]
    c.w16(c.dsb + (uint32_t)(0x654fu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x654fu)), 0x8u, false));
    // 1501:0a22  cmp word ptr [0x654f], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654fu)), 0x5a0u, true);
    // 1501:0a2b  jb 0xa36  [x1717]
    if (c.cf) goto L15a46;
L15a3d:
    if (c.tracing) c.traceAt(0x15a3d);
    // 1501:0a2d  sub word ptr [0x654f], 0x5a0  [x9]
    c.w16(c.dsb + (uint32_t)(0x654fu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x654fu)), 0x5a0u, true));
L15a46:
    if (c.tracing) c.traceAt(0x15a46);
    // 1501:0a36  add word ptr [0x659f], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x659fu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x659fu)), 0x2u, false));
    // 1501:0a3e  cmp word ptr [0x659f], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659fu)), 0x5a0u, true);
    // 1501:0a47  jb 0xa52  [x1717]
    if (c.cf) goto L15a62;
L15a59:
    if (c.tracing) c.traceAt(0x15a59);
    // 1501:0a49  sub word ptr [0x659f], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x659fu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x659fu)), 0x5a0u, true));
L15a62:
    if (c.tracing) c.traceAt(0x15a62);
    // 1501:0a52  add word ptr [0x65ef], 2  [x1717]
    c.w16(c.dsb + (uint32_t)(0x65efu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x65efu)), 0x2u, false));
    // 1501:0a5a  cmp word ptr [0x65ef], 0x5a0  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65efu)), 0x5a0u, true);
    // 1501:0a63  jb 0xa6e  [x1717]
    if (c.cf) goto L15a7e;
L15a75:
    if (c.tracing) c.traceAt(0x15a75);
    // 1501:0a65  sub word ptr [0x65ef], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x65efu), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x65efu)), 0x5a0u, true));
L15a7e:
    if (c.tracing) c.traceAt(0x15a7e);
    // 1501:0a6e  inc word ptr [0x704f]  [x1717]
    c.w16(c.dsb + (uint32_t)(0x704fu), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x704fu)), false));
    // 1501:0a75  push es  [x1717]
    c.push16(c.es);
    // 1501:0a76  mov ax, word ptr cs:[0x52a]  [x1717]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52au)));
    // 1501:0a7a  mov es, ax  [x1717]
    c.loadEs(c.a.x);
    // 1501:0a7c  mov si, word ptr cs:[0x52c]  [x1717]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52cu)));
    // 1501:0a81  mov dx, word ptr es:[si]  [x1717]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0a84  pop es  [x1717]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0a85  cmp byte ptr [0x6631], 0  [x1717]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x6631u)), 0x0u, true);
    // 1501:0a8d  jne 0xae4  [x1717]
    if (!c.zf) goto L15af4;
L15a9f:
    if (c.tracing) c.traceAt(0x15a9f);
    // 1501:0a8f  mov ax, word ptr [0x7051]  [x1430]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7051u)));
    // 1501:0a95  cmp word ptr [0x704f], ax  [x1430]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x704fu)), c.a.x, true);
    // 1501:0a9c  jb 0xae4  [x1430]
    if (c.cf) goto L15af4;
L15aae:
    if (c.tracing) c.traceAt(0x15aae);
    // 1501:0a9e  cmp dx, 0  [x586]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0aa1  je 0xae4  [x586]
    if (c.zf) goto L15af4;
L15ab3:
    if (c.tracing) c.traceAt(0x15ab3);
    // 1501:0aa3  cmp byte ptr [0x6406], 0  [x20]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x6406u)), 0x0u, true);
    // 1501:0aab  jne 0xacd  [x20]
    if (!c.zf) goto L15add;
L15abd:
    if (c.tracing) c.traceAt(0x15abd);
    // 1501:0aad  mov byte ptr [0x64ef], 0x40  [x19]
    c.w8(c.dsb + (uint32_t)(0x64efu), 0x40u);
    // 1501:0ab5  mov ax, word ptr [0x704f]  [x19]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x704fu)));
    // 1501:0abb  add ax, 0x20  [x19]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x20u, true));
    // 1501:0abe  mov word ptr [0x7051], ax  [x19]
    c.w16(c.dsb + (uint32_t)(0x7051u), c.a.x);
    // 1501:0ac4  inc word ptr [0x64d7]  [x19]
    c.w16(c.dsb + (uint32_t)(0x64d7u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x64d7u)), true));
    // 1501:0acb  jmp 0xae4  [x19]
    goto L15af4;
L15add:
    if (c.tracing) c.traceAt(0x15add);
    // 1501:0acd  mov byte ptr [0x6631], 1  [x1]
    c.w8(c.dsb + (uint32_t)(0x6631u), 0x1u);
    // 1501:0ad5  mov ax, word ptr [0x704f]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x704fu)));
    // 1501:0adb  add ax, 0x100  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x100u, true));
    // 1501:0ade  mov word ptr [0x7053], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0x7053u), c.a.x);
L15af4:
    if (c.tracing) c.traceAt(0x15af4);
    // 1501:0ae4  cmp word ptr [0x64d7], 0x14  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x64d7u)), 0x14u, true);
    // 1501:0aec  jb 0xaf6  [x1717]
    if (c.cf) goto L15b06;
L15afe:
    if (c.tracing) c.traceAt(0x15afe);
    // 1501:0aee  mov byte ptr [0x6406], 1  [x345]
    c.w8(c.dsb + (uint32_t)(0x6406u), 0x1u);
L15b06:
    if (c.tracing) c.traceAt(0x15b06);
    // 1501:0af6  cmp byte ptr [0x704e], 0  [x1717]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x704eu)), 0x0u, true);
    // 1501:0afe  je 0xb08  [x1717]
    if (c.zf) goto L15b18;
    c.notTranslated(0x15b10, "fall-through");
L15b18:
    if (c.tracing) c.traceAt(0x15b18);
    // 1501:0b08  mov ax, word ptr [0x7053]  [x1717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7053u)));
    // 1501:0b0e  cmp word ptr [0x704f], ax  [x1717]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x704fu)), c.a.x, true);
    // 1501:0b15  jb 0xb1f  [x1717]
    if (c.cf) goto L15b2f;
L15b27:
    if (c.tracing) c.traceAt(0x15b27);
    // 1501:0b17  cmp dx, 0  [x32]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0b1a  je 0xb1f  [x32]
    if (c.zf) goto L15b2f;
L15b2c:
    if (c.tracing) c.traceAt(0x15b2c);
    // 1501:0b1c  jmp 0x1e52  [x1]
    goto L16e62;
L15b2f:
    if (c.tracing) c.traceAt(0x15b2f);
    // 1501:0b1f  mov dx, 0x60  [x1716]
    c.dx_.x = (uint16_t)(0x60u);
    // 1501:0b22  in al, dx  [x1716]
    c.ip = 0xb23u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:0b23  cmp al, 1  [x1716]
    c.sub<8>(c.a.l, 0x1u, true);
    // 1501:0b25  jne 0xb2a  [x1716]
    if (!c.zf) goto L15b3a;
    c.notTranslated(0x15b37, "fall-through");
L15b3a:
    if (c.tracing) c.traceAt(0x15b3a);
    // 1501:0b2a  jmp 0x64e  [x1716]
    goto L1565e;
L15b3d:
    if (c.tracing) c.traceAt(0x15b3d);
    // 1501:0b2d  shl bx, 1  [x18784]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 1501:0b2f  mov di, word ptr [bx + 0x6473]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x6473u)));
    // 1501:0b33  mov ax, word ptr [di + 0x6541]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6541u)));
    // 1501:0b37  mov word ptr [0x6535], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x6535u), c.a.x);
    // 1501:0b3d  mov ax, word ptr [di + 0x6591]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6591u)));
    // 1501:0b41  mov word ptr [0x6539], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x6539u), c.a.x);
    // 1501:0b47  mov ax, word ptr [di + 0x65e1]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x65e1u)));
    // 1501:0b4b  mov word ptr [0x653d], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x653du), c.a.x);
    // 1501:0b51  mov di, word ptr [bx + 0x6475]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x6475u)));
    // 1501:0b55  mov ax, word ptr [di + 0x6541]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6541u)));
    // 1501:0b59  mov word ptr [0x6537], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x6537u), c.a.x);
    // 1501:0b5f  mov ax, word ptr [di + 0x6591]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6591u)));
    // 1501:0b63  mov word ptr [0x653b], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x653bu), c.a.x);
    // 1501:0b69  mov ax, word ptr [di + 0x65e1]  [x18784]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x65e1u)));
    // 1501:0b6d  mov word ptr [0x653f], ax  [x18784]
    c.w16(c.dsb + (uint32_t)(0x653fu), c.a.x);
    // 1501:0b73  ret   [x18784]
    c.ip = c.pop16(); return;
L15b84:
    if (c.tracing) c.traceAt(0x15b84);
    // 1501:0b74  xor bp, bp  [x18784]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0b76  mov cx, 0x7fff  [x18784]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:0b79  xor di, di  [x18784]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15b8b:
    if (c.tracing) c.traceAt(0x15b8b);
    // 1501:0b7b  mov si, word ptr [di + 0x6535]  [x150272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6535u)));
    // 1501:0b7f  mov ax, word ptr ds:[bp + 0x6d64]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d64u)));
    // 1501:0b84  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0b88  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xb88u); }   // #DE: int 0, then again
    // 1501:0b8a  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0b8b  mov ax, word ptr ds:[bp + 0x6d62]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d62u)));
    // 1501:0b90  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0b94  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xb94u); }   // #DE: int 0, then again
    // 1501:0b96  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0b97  add bx, ax  [x150272]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0b99  mov word ptr [0x6529], bx  [x150272]
    c.w16(c.dsb + (uint32_t)(0x6529u), c.b.x);
    // 1501:0ba0  mov ax, word ptr ds:[bp + 0x6d64]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d64u)));
    // 1501:0ba5  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0ba9  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xba9u); }   // #DE: int 0, then again
    // 1501:0bab  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0bac  mov ax, word ptr ds:[bp + 0x6d62]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d62u)));
    // 1501:0bb1  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0bb5  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbb5u); }   // #DE: int 0, then again
    // 1501:0bb7  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0bb8  sub bx, ax  [x150272]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:0bba  mov word ptr [0x652b], bx  [x150272]
    c.w16(c.dsb + (uint32_t)(0x652bu), c.b.x);
    // 1501:0bc1  mov si, word ptr [di + 0x6539]  [x150272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6539u)));
    // 1501:0bc5  mov ax, word ptr [0x6529]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6529u)));
    // 1501:0bcb  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0bcf  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbcfu); }   // #DE: int 0, then again
    // 1501:0bd1  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0bd2  mov ax, word ptr ds:[bp + 0x6d66]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d66u)));
    // 1501:0bd7  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0bdb  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbdbu); }   // #DE: int 0, then again
    // 1501:0bdd  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0bde  sub bx, ax  [x150272]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:0be0  mov word ptr ds:[bp + 0x6dc2], bx  [x150272]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x6dc2u), c.b.x);
    // 1501:0be5  mov ax, word ptr ds:[bp + 0x6d66]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6d66u)));
    // 1501:0bea  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0bee  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbeeu); }   // #DE: int 0, then again
    // 1501:0bf0  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0bf1  mov ax, word ptr [0x6529]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6529u)));
    // 1501:0bf7  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0bfb  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbfbu); }   // #DE: int 0, then again
    // 1501:0bfd  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0bfe  add bx, ax  [x150272]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0c00  mov word ptr [0x652d], bx  [x150272]
    c.w16(c.dsb + (uint32_t)(0x652du), c.b.x);
    // 1501:0c07  mov si, word ptr [di + 0x653d]  [x150272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x653du)));
    // 1501:0c0b  mov ax, word ptr [0x652d]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x652du)));
    // 1501:0c11  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0c15  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xc15u); }   // #DE: int 0, then again
    // 1501:0c17  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0c18  mov ax, word ptr [0x652b]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x652bu)));
    // 1501:0c1e  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0c22  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xc22u); }   // #DE: int 0, then again
    // 1501:0c24  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0c25  add bx, ax  [x150272]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0c27  mov word ptr ds:[bp + 0x6dc4], bx  [x150272]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x6dc4u), c.b.x);
    // 1501:0c2c  mov ax, word ptr [0x652d]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x652du)));
    // 1501:0c32  imul word ptr [si + 0x679a]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x679au)));
    // 1501:0c36  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xc36u); }   // #DE: int 0, then again
    // 1501:0c38  push ax  [x150272]
    c.push16(c.a.x);
    // 1501:0c39  mov ax, word ptr [0x652b]  [x150272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x652bu)));
    // 1501:0c3f  imul word ptr [si + 0x6632]  [x150272]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6632u)));
    // 1501:0c43  idiv cx  [x150272]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xc43u); }   // #DE: int 0, then again
    // 1501:0c45  pop bx  [x150272]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0c46  sub bx, ax  [x150272]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:0c48  mov word ptr ds:[bp + 0x6dc6], bx  [x150272]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x6dc6u), c.b.x);
    // 1501:0c4d  add bp, 6  [x150272]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0c50  cmp bp, 0x18  [x150272]
    c.sub<16>(c.bp.x, 0x18u, true);
    // 1501:0c53  jne 0xc58  [x150272]
    if (!c.zf) goto L15c68;
L15c65:
    if (c.tracing) c.traceAt(0x15c65);
    // 1501:0c55  mov di, 2  [x18784]
    c.di.x = (uint16_t)(0x2u);
L15c68:
    if (c.tracing) c.traceAt(0x15c68);
    // 1501:0c58  cmp bp, 0x30  [x150272]
    c.sub<16>(c.bp.x, 0x30u, true);
    // 1501:0c5b  jae 0xc60  [x150272]
    if (!c.cf) goto L15c70;
L15c6d:
    if (c.tracing) c.traceAt(0x15c6d);
    // 1501:0c5d  jmp 0xb7b  [x131488]
    goto L15b8b;
L15c70:
    if (c.tracing) c.traceAt(0x15c70);
    // 1501:0c60  ret   [x18784]
    c.ip = c.pop16(); return;
L15c71:
    if (c.tracing) c.traceAt(0x15c71);
    // 1501:0c61  add word ptr [0x64f1], 0x60  [x18784]
    c.w16(c.dsb + (uint32_t)(0x64f1u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x64f1u)), 0x60u, false));
    // 1501:0c69  xor bp, bp  [x18784]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0c6b  xor di, di  [x18784]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15c7d:
    if (c.tracing) c.traceAt(0x15c7d);
    // 1501:0c6d  mov si, word ptr ds:[bp + 0x6dc6]  [x150272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6dc6u)));
    // 1501:0c72  mov bx, word ptr ds:[bp + 0x6dc2]  [x150272]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6dc2u)));
    // 1501:0c77  mov cx, word ptr ds:[bp + 0x6dc4]  [x150272]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6dc4u)));
    // 1501:0c7c  add si, word ptr [0x64f5]  [x150272]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint32_t)(0x64f5u)), false));
    // 1501:0c83  mov ax, 0xc8  [x150272]
    c.a.x = (uint16_t)(0xc8u);
    // 1501:0c86  imul bx  [x150272]
    c.imul16(c.b.x);
    // 1501:0c88  idiv si  [x150272]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xc88u); }   // #DE: int 0, then again
    // 1501:0c8a  add ax, word ptr [0x64f1]  [x150272]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x64f1u)), false));
    // 1501:0c91  mov word ptr [di + 0x6f22], ax  [x150272]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6f22u), c.a.x);
    // 1501:0c95  mov ax, 0xc8  [x150272]
    c.a.x = (uint16_t)(0xc8u);
    // 1501:0c98  imul cx  [x150272]
    c.imul16(c.c.x);
    // 1501:0c9a  idiv si  [x150272]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xc9au); }   // #DE: int 0, then again
    // 1501:0c9c  add ax, word ptr [0x64f3]  [x150272]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x64f3u)), false));
    // 1501:0ca3  mov word ptr [di + 0x6f62], ax  [x150272]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6f62u), c.a.x);
    // 1501:0ca7  add bp, 6  [x150272]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0caa  add di, 2  [x150272]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0cad  cmp di, 0x10  [x150272]
    c.sub<16>(c.di.x, 0x10u, true);
    // 1501:0cb0  jne 0xc6d  [x150272]
    if (!c.zf) goto L15c7d;
L15cc2:
    if (c.tracing) c.traceAt(0x15cc2);
    // 1501:0cb2  ret   [x18784]
    c.ip = c.pop16(); return;
L15cc3:
    if (c.tracing) c.traceAt(0x15cc3);
    // 1501:0cb3  mov word ptr [0x64dd], 0xff38  [x1]
    c.w16(c.dsb + (uint32_t)(0x64ddu), 0xff38u);
    // 1501:0cbc  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15cce:
    if (c.tracing) c.traceAt(0x15cce);
    // 1501:0cbe  mov cx, 9  [x400]
    c.c.x = (uint16_t)(0x9u);
    // 1501:0cc1  mov word ptr [0x64df], 1  [x400]
    c.w16(c.dsb + (uint32_t)(0x64dfu), 0x1u);
    // 1501:0cca  xor dx, dx  [x400]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:0ccc  mov ax, word ptr [0x64dd]  [x400]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x64ddu)));
    // 1501:0cd2  cmp word ptr [0x64dd], 0  [x400]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x64ddu)), 0x0u, true);
    // 1501:0cda  jns 0xd02  [x400]
    if (!c.sf) goto L15d12;
L15cec:
    if (c.tracing) c.traceAt(0x15cec);
    // 1501:0cdc  not dx  [x200]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:0cde  neg word ptr [0x64df]  [x200]
    c.w16(c.dsb + (uint32_t)(0x64dfu), c.neg<16>(c.r16(c.dsb + (uint32_t)(0x64dfu)), false));
    // 1501:0ce5  idiv cx  [x200]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xce5u); }   // #DE: int 0, then again
    // 1501:0ce7  mov word ptr [0x64e1], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e1u), c.a.x);
    // 1501:0ced  neg dx  [x200]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:0cef  mov word ptr [0x64e3], dx  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e3u), c.dx_.x);
    // 1501:0cf6  neg ax  [x200]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:0cf8  sar ax, 1  [x200]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:0cfa  mov word ptr [0x64e5], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e5u), c.a.x);
    // 1501:0d00  jmp 0xd19  [x200]
    goto L15d29;
L15d12:
    if (c.tracing) c.traceAt(0x15d12);
    // 1501:0d02  idiv cx  [x200]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xd02u); }   // #DE: int 0, then again
    // 1501:0d04  mov word ptr [0x64e1], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e1u), c.a.x);
    // 1501:0d0a  mov word ptr [0x64e3], dx  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e3u), c.dx_.x);
    // 1501:0d11  sar ax, 1  [x200]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:0d13  mov word ptr [0x64e5], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x64e5u), c.a.x);
L15d29:
    if (c.tracing) c.traceAt(0x15d29);
    // 1501:0d19  xor bx, bx  [x400]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:0d1b  mov cx, 9  [x400]
    c.c.x = (uint16_t)(0x9u);
    // 1501:0d1e  mov bp, word ptr [0x64e3]  [x400]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x64e3u)));
L15d35:
    if (c.tracing) c.traceAt(0x15d35);
    // 1501:0d25  mov ax, 0  [x3600]
    c.a.x = (uint16_t)(0x0u);
    // 1501:0d28  add ax, word ptr [0x64e1]  [x3600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x64e1u)), false));
    // 1501:0d2f  add word ptr [0x64e5], bp  [x3600]
    c.w16(c.dsb + (uint32_t)(0x64e5u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x64e5u)), c.bp.x, false));
    // 1501:0d36  cmp word ptr [0x64e5], 9  [x3600]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x64e5u)), 0x9u, true);
    // 1501:0d3e  jl 0xd4f  [x3600]
    if ((c.sf != c.of)) goto L15d5f;
L15d50:
    if (c.tracing) c.traceAt(0x15d50);
    // 1501:0d40  sub word ptr [0x64e5], 9  [x1665]
    c.w16(c.dsb + (uint32_t)(0x64e5u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x64e5u)), 0x9u, false));
    // 1501:0d48  add ax, word ptr [0x64df]  [x1665]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x64dfu)), true));
L15d5f:
    if (c.tracing) c.traceAt(0x15d5f);
    // 1501:0d4f  mov word ptr [bx + di], ax  [x3600]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x), c.a.x);
    // 1501:0d53  mov dx, 0x40  [x3600]
    c.dx_.x = (uint16_t)(0x40u);
    // 1501:0d56  mul dx  [x3600]
    c.mul16(c.dx_.x);
    // 1501:0d58  mov word ptr [bx + di + 0x3200], ax  [x3600]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0x3200u), c.a.x);
    // 1501:0d5c  add bx, 2  [x3600]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:0d5f  loop 0xd25  [x3600]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15d35;
L15d71:
    if (c.tracing) c.traceAt(0x15d71);
    // 1501:0d61  add di, 0x20  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x20u, false));
    // 1501:0d64  add word ptr [0x64dd], 1  [x400]
    c.w16(c.dsb + (uint32_t)(0x64ddu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x64ddu)), 0x1u, false));
    // 1501:0d6c  cmp di, 0x3200  [x400]
    c.sub<16>(c.di.x, 0x3200u, true);
    // 1501:0d70  jb 0xcbe  [x400]
    if (c.cf) goto L15cce;
L15d84:
    if (c.tracing) c.traceAt(0x15d84);
    // 1501:0d74  ret   [x1]
    c.ip = c.pop16(); return;
L15d85:
    if (c.tracing) c.traceAt(0x15d85);
    // 1501:0d75  xor si, si  [x18784]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0d77  mov bp, word ptr [0x6f2a]  [x18784]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f2au)));
    // 1501:0d7e  mov dx, word ptr [0x6f22]  [x18784]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f22u)));
    // 1501:0d85  sub bp, dx  [x18784]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0d87  add bp, 0xc8  [x18784]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0xc8u, false));
    // 1501:0d8b  shl bp, 5  [x18784]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0d8e  mov di, word ptr [0x6f6a]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f6au)));
    // 1501:0d95  mov bx, word ptr [0x6f62]  [x18784]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f62u)));
    // 1501:0d9c  sub di, bx  [x18784]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0d9e  add di, 0xc8  [x18784]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xc8u, false));
    // 1501:0da2  shl di, 5  [x18784]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), true));
    // 1501:0da5  mov cx, 9  [x18784]
    c.c.x = (uint16_t)(0x9u);
L15db8:
    if (c.tracing) c.traceAt(0x15db8);
    // 1501:0da8  mov word ptr [si + 0x6e82], dx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0dac  mov word ptr [si + 0x6ed2], bx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0db0  add dx, word ptr ds:[bp]  [x169056]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x)), false));
    // 1501:0db4  add bx, word ptr [di]  [x169056]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x)), false));
    // 1501:0db6  add si, 2  [x169056]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0db9  add bp, 2  [x169056]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:0dbc  add di, 2  [x169056]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:0dbf  loop 0xda8  [x169056]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15db8;
L15dd1:
    if (c.tracing) c.traceAt(0x15dd1);
    // 1501:0dc1  mov word ptr [si + 0x6e82], dx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0dc5  mov word ptr [si + 0x6ed2], bx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0dc9  mov si, 0x14  [x18784]
    c.si.x = (uint16_t)(0x14u);
    // 1501:0dcc  mov bp, word ptr [0x6f2c]  [x18784]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f2cu)));
    // 1501:0dd3  mov dx, word ptr [0x6f24]  [x18784]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f24u)));
    // 1501:0dda  sub bp, dx  [x18784]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0ddc  add bp, 0xc8  [x18784]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0xc8u, false));
    // 1501:0de0  shl bp, 5  [x18784]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0de3  mov di, word ptr [0x6f6c]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f6cu)));
    // 1501:0dea  mov bx, word ptr [0x6f64]  [x18784]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f64u)));
    // 1501:0df1  sub di, bx  [x18784]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0df3  add di, 0xc8  [x18784]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xc8u, false));
    // 1501:0df7  shl di, 5  [x18784]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), true));
    // 1501:0dfa  mov cx, 9  [x18784]
    c.c.x = (uint16_t)(0x9u);
L15e0d:
    if (c.tracing) c.traceAt(0x15e0d);
    // 1501:0dfd  mov word ptr [si + 0x6e82], dx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0e01  mov word ptr [si + 0x6ed2], bx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0e05  add dx, word ptr ds:[bp]  [x169056]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x)), false));
    // 1501:0e09  add bx, word ptr [di]  [x169056]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x)), false));
    // 1501:0e0b  add si, 2  [x169056]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0e0e  add bp, 2  [x169056]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:0e11  add di, 2  [x169056]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:0e14  loop 0xdfd  [x169056]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15e0d;
L15e26:
    if (c.tracing) c.traceAt(0x15e26);
    // 1501:0e16  mov word ptr [si + 0x6e82], dx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0e1a  mov word ptr [si + 0x6ed2], bx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0e1e  mov si, 0x28  [x18784]
    c.si.x = (uint16_t)(0x28u);
    // 1501:0e21  mov bp, word ptr [0x6f2e]  [x18784]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f2eu)));
    // 1501:0e28  mov dx, word ptr [0x6f26]  [x18784]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f26u)));
    // 1501:0e2f  sub bp, dx  [x18784]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0e31  add bp, 0xc8  [x18784]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0xc8u, false));
    // 1501:0e35  shl bp, 5  [x18784]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0e38  mov di, word ptr [0x6f6e]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f6eu)));
    // 1501:0e3f  mov bx, word ptr [0x6f66]  [x18784]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f66u)));
    // 1501:0e46  sub di, bx  [x18784]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0e48  add di, 0xc8  [x18784]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xc8u, false));
    // 1501:0e4c  shl di, 5  [x18784]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), true));
    // 1501:0e4f  mov cx, 9  [x18784]
    c.c.x = (uint16_t)(0x9u);
L15e62:
    if (c.tracing) c.traceAt(0x15e62);
    // 1501:0e52  mov word ptr [si + 0x6e82], dx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0e56  mov word ptr [si + 0x6ed2], bx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0e5a  add dx, word ptr ds:[bp]  [x169056]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x)), false));
    // 1501:0e5e  add bx, word ptr [di]  [x169056]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x)), false));
    // 1501:0e60  add si, 2  [x169056]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0e63  add bp, 2  [x169056]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:0e66  add di, 2  [x169056]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:0e69  loop 0xe52  [x169056]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15e62;
L15e7b:
    if (c.tracing) c.traceAt(0x15e7b);
    // 1501:0e6b  mov word ptr [si + 0x6e82], dx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0e6f  mov word ptr [si + 0x6ed2], bx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0e73  mov si, 0x3c  [x18784]
    c.si.x = (uint16_t)(0x3cu);
    // 1501:0e76  mov bp, word ptr [0x6f30]  [x18784]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f30u)));
    // 1501:0e7d  mov dx, word ptr [0x6f28]  [x18784]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f28u)));
    // 1501:0e84  sub bp, dx  [x18784]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0e86  add bp, 0xc8  [x18784]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0xc8u, false));
    // 1501:0e8a  shl bp, 5  [x18784]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0e8d  mov di, word ptr [0x6f70]  [x18784]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f70u)));
    // 1501:0e94  mov bx, word ptr [0x6f68]  [x18784]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6f68u)));
    // 1501:0e9b  sub di, bx  [x18784]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0e9d  add di, 0xc8  [x18784]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xc8u, false));
    // 1501:0ea1  shl di, 5  [x18784]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), true));
    // 1501:0ea4  mov cx, 9  [x18784]
    c.c.x = (uint16_t)(0x9u);
L15eb7:
    if (c.tracing) c.traceAt(0x15eb7);
    // 1501:0ea7  mov word ptr [si + 0x6e82], dx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0eab  mov word ptr [si + 0x6ed2], bx  [x169056]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0eaf  add dx, word ptr ds:[bp]  [x169056]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x)), false));
    // 1501:0eb3  add bx, word ptr [di]  [x169056]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x)), false));
    // 1501:0eb5  add si, 2  [x169056]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0eb8  add bp, 2  [x169056]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:0ebb  add di, 2  [x169056]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:0ebe  loop 0xea7  [x169056]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15eb7;
L15ed0:
    if (c.tracing) c.traceAt(0x15ed0);
    // 1501:0ec0  mov word ptr [si + 0x6e82], dx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6e82u), c.dx_.x);
    // 1501:0ec4  mov word ptr [si + 0x6ed2], bx  [x18784]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ed2u), c.b.x);
    // 1501:0ec8  ret   [x18784]
    c.ip = c.pop16(); return;
L15ed9:
    if (c.tracing) c.traceAt(0x15ed9);
    // 1501:0ec9  push si  [x187840]
    c.push16(c.si.x);
    // 1501:0eca  xor si, si  [x187840]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0ecc  push di  [x187840]
    c.push16(c.di.x);
    // 1501:0ecd  mov bp, word ptr [di + 0x6eaa]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6eaau)));
    // 1501:0ed1  mov dx, word ptr [di + 0x6e82]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6e82u)));
    // 1501:0ed5  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0ed7  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0eda  mov bx, word ptr [di + 0x6ed2]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6ed2u)));
    // 1501:0ede  mov di, word ptr [di + 0x6efa]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6efau)));
    // 1501:0ee2  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0ee4  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:0ee7  mov word ptr [si + 0x6fa2], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fa2u), c.dx_.x);
    // 1501:0eeb  mov word ptr [si + 0x6ff2], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ff2u), c.b.x);
    // 1501:0eef  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:0ef4  add bx, word ptr [di + 0x1900]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1900u)), false));
    // 1501:0ef8  mov word ptr [si + 0x6fa4], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fa4u), c.dx_.x);
    // 1501:0efc  mov word ptr [si + 0x6ff4], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ff4u), c.b.x);
    // 1501:0f00  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:0f05  add bx, word ptr [di + 0x1902]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1902u)), false));
    // 1501:0f09  mov word ptr [si + 0x6fa6], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fa6u), c.dx_.x);
    // 1501:0f0d  mov word ptr [si + 0x6ff6], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ff6u), c.b.x);
    // 1501:0f11  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:0f16  add bx, word ptr [di + 0x1904]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1904u)), false));
    // 1501:0f1a  mov word ptr [si + 0x6fa8], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fa8u), c.dx_.x);
    // 1501:0f1e  mov word ptr [si + 0x6ff8], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ff8u), c.b.x);
    // 1501:0f22  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:0f27  add bx, word ptr [di + 0x1906]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1906u)), false));
    // 1501:0f2b  mov word ptr [si + 0x6faa], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6faau), c.dx_.x);
    // 1501:0f2f  mov word ptr [si + 0x6ffa], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ffau), c.b.x);
    // 1501:0f33  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:0f38  add bx, word ptr [di + 0x1908]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1908u)), false));
    // 1501:0f3c  mov word ptr [si + 0x6fac], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6facu), c.dx_.x);
    // 1501:0f40  mov word ptr [si + 0x6ffc], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ffcu), c.b.x);
    // 1501:0f44  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:0f49  add bx, word ptr [di + 0x190a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190au)), false));
    // 1501:0f4d  mov word ptr [si + 0x6fae], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6faeu), c.dx_.x);
    // 1501:0f51  mov word ptr [si + 0x6ffe], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6ffeu), c.b.x);
    // 1501:0f55  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:0f5a  add bx, word ptr [di + 0x190c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190cu)), false));
    // 1501:0f5e  mov word ptr [si + 0x6fb0], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fb0u), c.dx_.x);
    // 1501:0f62  mov word ptr [si + 0x7000], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7000u), c.b.x);
    // 1501:0f66  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:0f6b  add bx, word ptr [di + 0x190e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190eu)), false));
    // 1501:0f6f  mov word ptr [si + 0x6fb2], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fb2u), c.dx_.x);
    // 1501:0f73  mov word ptr [si + 0x7002], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7002u), c.b.x);
    // 1501:0f77  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:0f7c  add bx, word ptr [di + 0x1910]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1910u)), false));
    // 1501:0f80  mov word ptr [si + 0x6fb4], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fb4u), c.dx_.x);
    // 1501:0f84  mov word ptr [si + 0x7004], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7004u), c.b.x);
    // 1501:0f88  pop di  [x187840]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0f89  xor si, si  [x187840]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0f8b  push di  [x187840]
    c.push16(c.di.x);
    // 1501:0f8c  mov bp, word ptr [di + 0x6ebe]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6ebeu)));
    // 1501:0f90  mov dx, word ptr [di + 0x6e96]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6e96u)));
    // 1501:0f94  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:0f96  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:0f99  mov bx, word ptr [di + 0x6ee6]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6ee6u)));
    // 1501:0f9d  mov di, word ptr [di + 0x6f0e]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x6f0eu)));
    // 1501:0fa1  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:0fa3  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:0fa6  mov word ptr [si + 0x6fb6], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fb6u), c.dx_.x);
    // 1501:0faa  mov word ptr [si + 0x7006], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7006u), c.b.x);
    // 1501:0fae  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:0fb3  add bx, word ptr [di + 0x1900]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1900u)), false));
    // 1501:0fb7  mov word ptr [si + 0x6fb8], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fb8u), c.dx_.x);
    // 1501:0fbb  mov word ptr [si + 0x7008], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7008u), c.b.x);
    // 1501:0fbf  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:0fc4  add bx, word ptr [di + 0x1902]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1902u)), false));
    // 1501:0fc8  mov word ptr [si + 0x6fba], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fbau), c.dx_.x);
    // 1501:0fcc  mov word ptr [si + 0x700a], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x700au), c.b.x);
    // 1501:0fd0  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:0fd5  add bx, word ptr [di + 0x1904]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1904u)), false));
    // 1501:0fd9  mov word ptr [si + 0x6fbc], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fbcu), c.dx_.x);
    // 1501:0fdd  mov word ptr [si + 0x700c], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x700cu), c.b.x);
    // 1501:0fe1  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:0fe6  add bx, word ptr [di + 0x1906]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1906u)), false));
    // 1501:0fea  mov word ptr [si + 0x6fbe], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fbeu), c.dx_.x);
    // 1501:0fee  mov word ptr [si + 0x700e], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x700eu), c.b.x);
    // 1501:0ff2  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:0ff7  add bx, word ptr [di + 0x1908]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1908u)), false));
    // 1501:0ffb  mov word ptr [si + 0x6fc0], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fc0u), c.dx_.x);
    // 1501:0fff  mov word ptr [si + 0x7010], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7010u), c.b.x);
    // 1501:1003  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1008  add bx, word ptr [di + 0x190a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190au)), false));
    // 1501:100c  mov word ptr [si + 0x6fc2], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fc2u), c.dx_.x);
    // 1501:1010  mov word ptr [si + 0x7012], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7012u), c.b.x);
    // 1501:1014  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1019  add bx, word ptr [di + 0x190c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190cu)), false));
    // 1501:101d  mov word ptr [si + 0x6fc4], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fc4u), c.dx_.x);
    // 1501:1021  mov word ptr [si + 0x7014], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7014u), c.b.x);
    // 1501:1025  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:102a  add bx, word ptr [di + 0x190e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x190eu)), false));
    // 1501:102e  mov word ptr [si + 0x6fc6], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fc6u), c.dx_.x);
    // 1501:1032  mov word ptr [si + 0x7016], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7016u), c.b.x);
    // 1501:1036  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:103b  add bx, word ptr [di + 0x1910]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x1910u)), true));
    // 1501:103f  mov word ptr [si + 0x6fc8], dx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6fc8u), c.dx_.x);
    // 1501:1043  mov word ptr [si + 0x7018], bx  [x187840]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x7018u), c.b.x);
    // 1501:1047  pop di  [x187840]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:1048  pop si  [x187840]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1049  ret   [x187840]
    c.ip = c.pop16(); return;
L1605a:
    if (c.tracing) c.traceAt(0x1605a);
    // 1501:104a  mov bp, word ptr [0x6fb6]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fb6u)));
    // 1501:1051  mov dx, word ptr [0x6fa2]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fa2u)));
    // 1501:1058  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:105a  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:105d  mov di, word ptr [0x7006]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7006u)));
    // 1501:1064  mov bx, word ptr [0x6ff2]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ff2u)));
    // 1501:106b  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:106d  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:1070  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:1073  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1075  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1079  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:107c  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:107e  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1082  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:1085  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:108a  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:108e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1090  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1094  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1097  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1099  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:109d  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:10a1  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:10a6  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:10aa  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:10ac  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:10b0  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:10b3  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:10b5  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:10b9  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:10bd  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:10c2  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:10c6  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:10c8  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:10cc  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:10cf  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:10d1  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:10d5  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:10d9  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:10de  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:10e2  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:10e4  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:10e8  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:10eb  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:10ed  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:10f1  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:10f5  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:10fa  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:10fe  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1100  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1104  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1107  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1109  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:110d  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1111  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1116  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:111a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:111c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1120  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1123  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1125  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1129  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:112d  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1132  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:1136  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1138  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:113c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:113f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1141  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1145  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1149  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:114e  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1152  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1154  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1158  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:115b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:115d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1161  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:1165  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:116a  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:116e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1170  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1178  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:117b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:117d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1181  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:1185  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1188  mov bp, word ptr [0x6fb8]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fb8u)));
    // 1501:118f  mov dx, word ptr [0x6fa4]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fa4u)));
    // 1501:1196  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1198  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:119b  mov di, word ptr [0x7008]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7008u)));
    // 1501:11a2  mov bx, word ptr [0x6ff4]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ff4u)));
    // 1501:11a9  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:11ab  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:11ae  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:11b1  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:11b3  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:11b7  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:11ba  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:11bc  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:11c0  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:11c3  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:11c8  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:11cc  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:11ce  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:11d2  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:11d5  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:11d7  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:11db  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:11df  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:11e4  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:11e8  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:11ea  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:11ee  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:11f1  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:11f3  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:11f7  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:11fb  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:1200  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1204  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1206  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:120a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:120d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:120f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1213  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:1217  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:121c  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1220  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1222  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1226  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1229  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:122b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:122f  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:1233  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:1238  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:123c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:123e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1242  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1245  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1247  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:124b  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:124f  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1254  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1258  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:125a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:125e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1261  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1263  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1267  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:126b  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1270  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:1274  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1276  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:127a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:127d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:127f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1283  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1287  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:128c  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1290  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1292  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1296  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1299  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:129b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:129f  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:12a3  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:12a8  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:12ac  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:12ae  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:12b6  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:12b9  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, true));
    // 1501:12bb  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
L162cf:
    if (c.tracing) c.traceAt(0x162cf);
    // 1501:12bf  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:12c3  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:12c6  mov bp, word ptr [0x6fba]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fbau)));
    // 1501:12cd  mov dx, word ptr [0x6fa6]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fa6u)));
    // 1501:12d4  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:12d6  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:12d9  mov di, word ptr [0x700a]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x700au)));
    // 1501:12e0  mov bx, word ptr [0x6ff6]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ff6u)));
    // 1501:12e7  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:12e9  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:12ec  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:12ef  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:12f1  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:12f5  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:12f8  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:12fa  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:12fe  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:1301  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:1306  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:130a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:130c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1310  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1313  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1315  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1319  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:131d  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:1322  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:1326  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1328  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:132c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:132f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1331  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1335  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:1339  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:133e  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1342  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1344  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1348  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:134b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:134d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1351  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:1355  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:135a  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:135e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1360  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1364  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1367  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1369  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:136d  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:1371  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:1376  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:137a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:137c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1380  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1383  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1385  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1389  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:138d  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1392  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1396  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1398  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:139c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:139f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:13a1  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:13a5  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:13a9  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:13ae  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:13b2  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:13b4  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:13b8  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:13bb  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:13bd  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:13c1  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:13c5  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:13ca  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:13ce  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:13d0  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:13d4  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:13d7  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:13d9  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:13dd  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:13e1  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:13e6  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:13ea  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:13ec  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:13f4  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:13f7  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:13f9  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:13fd  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:1401  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1404  mov bp, word ptr [0x6fbc]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fbcu)));
    // 1501:140b  mov dx, word ptr [0x6fa8]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fa8u)));
    // 1501:1412  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1414  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:1417  mov di, word ptr [0x700c]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x700cu)));
    // 1501:141e  mov bx, word ptr [0x6ff8]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ff8u)));
    // 1501:1425  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:1427  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:142a  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:142d  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:142f  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1433  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1436  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1438  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:143c  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:143f  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:1444  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1448  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:144a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:144e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1451  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1453  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1457  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:145b  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:1460  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:1464  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1466  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:146a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:146d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:146f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1473  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:1477  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:147c  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1480  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1482  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1486  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1489  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:148b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:148f  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:1493  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1498  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:149c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:149e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:14a2  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:14a5  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:14a7  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:14ab  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:14af  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:14b4  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:14b8  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:14ba  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:14be  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:14c1  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:14c3  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:14c7  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:14cb  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:14d0  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:14d4  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:14d6  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:14da  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:14dd  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:14df  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:14e3  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:14e7  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:14ec  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:14f0  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:14f2  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:14f6  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:14f9  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:14fb  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:14ff  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1503  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1508  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:150c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:150e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1512  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1515  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1517  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:151b  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:151f  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:1524  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:1528  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:152a  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1532  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), true));
L16545:
    if (c.tracing) c.traceAt(0x16545);
    // 1501:1535  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1537  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:153b  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:153f  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1542  mov bp, word ptr [0x6fbe]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fbeu)));
    // 1501:1549  mov dx, word ptr [0x6faa]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6faau)));
    // 1501:1550  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1552  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:1555  mov di, word ptr [0x700e]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x700eu)));
    // 1501:155c  mov bx, word ptr [0x6ffa]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ffau)));
    // 1501:1563  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:1565  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:1568  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:156b  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:156d  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1571  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1574  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1576  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:157a  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:157d  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:1582  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1586  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1588  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:158c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:158f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1591  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1595  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:1599  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:159e  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:15a2  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:15a4  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:15a8  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:15ab  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:15ad  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:15b1  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:15b5  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:15ba  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:15be  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:15c0  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:15c4  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:15c7  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:15c9  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:15cd  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:15d1  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:15d6  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:15da  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:15dc  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:15e0  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:15e3  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:15e5  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:15e9  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:15ed  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:15f2  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:15f6  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:15f8  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:15fc  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:15ff  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1601  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1605  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1609  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:160e  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1612  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1614  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1618  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:161b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:161d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1621  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:1625  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:162a  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:162e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1630  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1634  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1637  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1639  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:163d  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1641  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1646  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:164a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:164c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1650  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1653  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1655  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1659  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:165d  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:1662  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:1666  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1668  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1670  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1673  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1675  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1679  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:167d  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1680  mov bp, word ptr [0x6fc0]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fc0u)));
    // 1501:1687  mov dx, word ptr [0x6fac]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6facu)));
    // 1501:168e  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1690  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:1693  mov di, word ptr [0x7010]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7010u)));
    // 1501:169a  mov bx, word ptr [0x6ffc]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ffcu)));
    // 1501:16a1  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:16a3  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:16a6  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:16a9  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:16ab  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:16af  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:16b2  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:16b4  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:16b8  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:16bb  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:16c0  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:16c4  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:16c6  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:16ca  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:16cd  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:16cf  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:16d3  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:16d7  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:16dc  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:16e0  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:16e2  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:16e6  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:16e9  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:16eb  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:16ef  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:16f3  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:16f8  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:16fc  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:16fe  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1702  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1705  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1707  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:170b  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:170f  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1714  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1718  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:171a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:171e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1721  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1723  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1727  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:172b  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:1730  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:1734  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1736  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:173a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:173d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:173f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1743  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1747  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:174c  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1750  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1752  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1756  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1759  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:175b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:175f  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:1763  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1768  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:176c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:176e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1772  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1775  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1777  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:177b  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:177f  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1784  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1788  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:178a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:178e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1791  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1793  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1797  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:179b  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:17a0  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), true));
    // 1501:17a4  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
L167b6:
    if (c.tracing) c.traceAt(0x167b6);
    // 1501:17a6  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:17ae  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:17b1  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:17b3  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:17b7  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:17bb  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:17be  mov bp, word ptr [0x6fc2]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fc2u)));
    // 1501:17c5  mov dx, word ptr [0x6fae]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6faeu)));
    // 1501:17cc  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:17ce  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:17d1  mov di, word ptr [0x7012]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7012u)));
    // 1501:17d8  mov bx, word ptr [0x6ffe]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6ffeu)));
    // 1501:17df  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:17e1  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:17e4  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:17e7  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:17e9  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:17ed  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:17f0  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:17f2  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:17f6  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:17f9  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:17fe  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1802  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1804  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1808  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:180b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:180d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1811  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:1815  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:181a  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:181e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1820  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1824  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1827  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1829  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:182d  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:1831  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:1836  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:183a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:183c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1840  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1843  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1845  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1849  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:184d  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1852  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1856  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1858  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:185c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:185f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1861  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1865  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:1869  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:186e  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:1872  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1874  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1878  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:187b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:187d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1881  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1885  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:188a  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:188e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1890  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1894  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1897  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1899  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:189d  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:18a1  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:18a6  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:18aa  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:18ac  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:18b0  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:18b3  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:18b5  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:18b9  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:18bd  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:18c2  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:18c6  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:18c8  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:18cc  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:18cf  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:18d1  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:18d5  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:18d9  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:18de  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:18e2  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:18e4  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:18ec  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:18ef  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:18f1  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:18f5  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:18f9  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:18fc  mov bp, word ptr [0x6fc4]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fc4u)));
    // 1501:1903  mov dx, word ptr [0x6fb0]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fb0u)));
    // 1501:190a  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:190c  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:190f  mov di, word ptr [0x7014]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7014u)));
    // 1501:1916  mov bx, word ptr [0x7000]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7000u)));
    // 1501:191d  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:191f  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:1922  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:1925  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1927  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:192b  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:192e  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1930  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1934  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:1937  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:193c  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1940  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1942  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1946  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1949  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:194b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:194f  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:1953  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:1958  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:195c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:195e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1962  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1965  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1967  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:196b  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:196f  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:1974  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1978  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:197a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:197e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1981  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1983  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1987  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:198b  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1990  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1994  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1996  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:199a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:199d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:199f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:19a3  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:19a7  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:19ac  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:19b0  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:19b2  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:19b6  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:19b9  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:19bb  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:19bf  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:19c3  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:19c8  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:19cc  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:19ce  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:19d2  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:19d5  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:19d7  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:19db  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:19df  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:19e4  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:19e8  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:19ea  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:19ee  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:19f1  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:19f3  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:19f7  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:19fb  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1a00  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1a04  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1a06  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1a0a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1a0d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1a0f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1a13  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:1a17  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), true));
L16a2c:
    if (c.tracing) c.traceAt(0x16a2c);
    // 1501:1a1c  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:1a20  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1a22  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1a2a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1a2d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1a2f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1a33  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:1a37  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1a3a  mov bp, word ptr [0x6fc6]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fc6u)));
    // 1501:1a41  mov dx, word ptr [0x6fb2]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fb2u)));
    // 1501:1a48  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1a4a  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:1a4d  mov di, word ptr [0x7016]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7016u)));
    // 1501:1a54  mov bx, word ptr [0x7002]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7002u)));
    // 1501:1a5b  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:1a5d  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:1a60  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:1a63  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1a65  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1a69  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1a6c  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1a6e  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1a72  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:1a75  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:1a7a  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1a7e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1a80  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1a84  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1a87  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1a89  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1a8d  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:1a91  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:1a96  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:1a9a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1a9c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1aa0  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1aa3  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1aa5  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1aa9  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:1aad  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:1ab2  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1ab6  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1ab8  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1abc  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1abf  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1ac1  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1ac5  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:1ac9  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1ace  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1ad2  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1ad4  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1ad8  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1adb  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1add  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1ae1  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:1ae5  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:1aea  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:1aee  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1af0  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1af4  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1af7  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1af9  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1afd  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1b01  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1b06  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1b0a  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1b0c  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1b10  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1b13  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1b15  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1b19  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:1b1d  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1b22  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:1b26  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1b28  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1b2c  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1b2f  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1b31  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1b35  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1b39  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1b3e  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1b42  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1b44  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1b48  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1b4b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1b4d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1b51  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
    // 1501:1b55  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:1b5a  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:1b5e  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1b60  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1b68  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1b6b  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1b6d  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1b71  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:1b75  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:1b78  mov bp, word ptr [0x6fc8]  [x187840]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fc8u)));
    // 1501:1b7f  mov dx, word ptr [0x6fb4]  [x187840]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6fb4u)));
    // 1501:1b86  sub bp, dx  [x187840]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.dx_.x, false));
    // 1501:1b88  shl bp, 5  [x187840]
    c.bp.x = (uint16_t)(c.shl<16>(c.bp.x, (int)((0x5u) & 31), false));
    // 1501:1b8b  mov di, word ptr [0x7018]  [x187840]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7018u)));
    // 1501:1b92  mov bx, word ptr [0x7004]  [x187840]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7004u)));
    // 1501:1b99  sub di, bx  [x187840]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, false));
    // 1501:1b9b  shl di, 5  [x187840]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x5u) & 31), false));
    // 1501:1b9e  shl bx, 6  [x187840]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x6u) & 31), false));
    // 1501:1ba1  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1ba3  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1ba7  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1baa  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1bac  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1bb0  mov word ptr gs:[si], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x), c.c.x);
    // 1501:1bb3  add dx, word ptr ds:[bp + 0x1900]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1900u)), false));
    // 1501:1bb8  add bx, word ptr [di + 0x4b00]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b00u)), false));
    // 1501:1bbc  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1bbe  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1bc2  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1bc5  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1bc7  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1bcb  mov word ptr gs:[si + 2], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x2u), c.c.x);
    // 1501:1bcf  add dx, word ptr ds:[bp + 0x1902]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1902u)), false));
    // 1501:1bd4  add bx, word ptr [di + 0x4b02]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b02u)), false));
    // 1501:1bd8  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1bda  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1bde  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1be1  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1be3  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1be7  mov word ptr gs:[si + 4], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x4u), c.c.x);
    // 1501:1beb  add dx, word ptr ds:[bp + 0x1904]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1904u)), false));
    // 1501:1bf0  add bx, word ptr [di + 0x4b04]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b04u)), false));
    // 1501:1bf4  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1bf6  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1bfa  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1bfd  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1bff  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c03  mov word ptr gs:[si + 6], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x6u), c.c.x);
    // 1501:1c07  add dx, word ptr ds:[bp + 0x1906]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1906u)), false));
    // 1501:1c0c  add bx, word ptr [di + 0x4b06]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b06u)), false));
    // 1501:1c10  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c12  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1c16  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1c19  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1c1b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c1f  mov word ptr gs:[si + 8], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x8u), c.c.x);
    // 1501:1c23  add dx, word ptr ds:[bp + 0x1908]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1908u)), false));
    // 1501:1c28  add bx, word ptr [di + 0x4b08]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b08u)), false));
    // 1501:1c2c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c2e  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1c32  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1c35  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1c37  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c3b  mov word ptr gs:[si + 0xa], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xau), c.c.x);
    // 1501:1c3f  add dx, word ptr ds:[bp + 0x190a]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190au)), false));
    // 1501:1c44  add bx, word ptr [di + 0x4b0a]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0au)), false));
    // 1501:1c48  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c4a  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1c4e  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1c51  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1c53  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c57  mov word ptr gs:[si + 0xc], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xcu), c.c.x);
    // 1501:1c5b  add dx, word ptr ds:[bp + 0x190c]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190cu)), false));
    // 1501:1c60  add bx, word ptr [di + 0x4b0c]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0cu)), false));
    // 1501:1c64  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c66  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1c6a  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1c6d  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1c6f  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c73  mov word ptr gs:[si + 0xe], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0xeu), c.c.x);
    // 1501:1c77  add dx, word ptr ds:[bp + 0x190e]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x190eu)), false));
    // 1501:1c7c  add bx, word ptr [di + 0x4b0e]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b0eu)), false));
    // 1501:1c80  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c82  mov al, byte ptr cs:[ecx]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e)));
    // 1501:1c86  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1c89  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, true));
    // 1501:1c8b  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1c8f  mov word ptr gs:[si + 0x10], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x10u), c.c.x);
L16ca3:
    if (c.tracing) c.traceAt(0x16ca3);
    // 1501:1c93  add dx, word ptr ds:[bp + 0x1910]  [x187840]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x1910u)), false));
    // 1501:1c98  add bx, word ptr [di + 0x4b10]  [x187840]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x4b10u)), false));
    // 1501:1c9c  mov cx, dx  [x187840]
    c.c.x = (uint16_t)(c.dx_.x);
    // 1501:1c9e  mov al, byte ptr cs:[ecx + 8]  [x187840]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint32_t)(c.c.e + 0x8u)));
    // 1501:1ca6  shr cx, 3  [x187840]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:1ca9  add cx, bx  [x187840]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.b.x, false));
    // 1501:1cab  mov byte ptr es:[ecx], al  [x187840]
    c.w8(c.esb + (uint32_t)(c.c.e), c.a.l);
    // 1501:1caf  mov word ptr gs:[si + 0x12], cx  [x187840]
    c.w16(c.gsb + (uint16_t)(c.si.x + 0x12u), c.c.x);
    // 1501:1cb3  add si, 0x14  [x187840]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, true));
    // 1501:1cb6  ret   [x187840]
    c.ip = c.pop16(); return;
L16cc7:
    if (c.tracing) c.traceAt(0x16cc7);
    // 1501:1cb7  mov di, 0  [x18784]
    c.di.x = (uint16_t)(0x0u);
    // 1501:1cba  call 0xec9  [x18784]
    c.push16(0x1cbdu); code_28(c, 0x15ed9u); if (c.ip != 0x1cbdu) c.badReturn(0x16cca);
L16ccd:
    if (c.tracing) c.traceAt(0x16ccd);
    // 1501:1cbd  call 0x104a  [x18784]
    c.push16(0x1cc0u); code_28(c, 0x1605au); if (c.ip != 0x1cc0u) c.badReturn(0x16ccd);
L16cd0:
    if (c.tracing) c.traceAt(0x16cd0);
    // 1501:1cc0  mov di, 2  [x18784]
    c.di.x = (uint16_t)(0x2u);
    // 1501:1cc3  call 0xec9  [x18784]
    c.push16(0x1cc6u); code_28(c, 0x15ed9u); if (c.ip != 0x1cc6u) c.badReturn(0x16cd3);
L16cd6:
    if (c.tracing) c.traceAt(0x16cd6);
    // 1501:1cc6  call 0x104a  [x18784]
    c.push16(0x1cc9u); code_28(c, 0x1605au); if (c.ip != 0x1cc9u) c.badReturn(0x16cd6);
L16cd9:
    if (c.tracing) c.traceAt(0x16cd9);
    // 1501:1cc9  mov di, 4  [x18784]
    c.di.x = (uint16_t)(0x4u);
    // 1501:1ccc  call 0xec9  [x18784]
    c.push16(0x1ccfu); code_28(c, 0x15ed9u); if (c.ip != 0x1ccfu) c.badReturn(0x16cdc);
L16cdf:
    if (c.tracing) c.traceAt(0x16cdf);
    // 1501:1ccf  call 0x104a  [x18784]
    c.push16(0x1cd2u); code_28(c, 0x1605au); if (c.ip != 0x1cd2u) c.badReturn(0x16cdf);
L16ce2:
    if (c.tracing) c.traceAt(0x16ce2);
    // 1501:1cd2  mov di, 6  [x18784]
    c.di.x = (uint16_t)(0x6u);
    // 1501:1cd5  call 0xec9  [x18784]
    c.push16(0x1cd8u); code_28(c, 0x15ed9u); if (c.ip != 0x1cd8u) c.badReturn(0x16ce5);
L16ce8:
    if (c.tracing) c.traceAt(0x16ce8);
    // 1501:1cd8  call 0x104a  [x18784]
    c.push16(0x1cdbu); code_28(c, 0x1605au); if (c.ip != 0x1cdbu) c.badReturn(0x16ce8);
L16ceb:
    if (c.tracing) c.traceAt(0x16ceb);
    // 1501:1cdb  mov di, 8  [x18784]
    c.di.x = (uint16_t)(0x8u);
    // 1501:1cde  call 0xec9  [x18784]
    c.push16(0x1ce1u); code_28(c, 0x15ed9u); if (c.ip != 0x1ce1u) c.badReturn(0x16cee);
L16cf1:
    if (c.tracing) c.traceAt(0x16cf1);
    // 1501:1ce1  call 0x104a  [x18784]
    c.push16(0x1ce4u); code_28(c, 0x1605au); if (c.ip != 0x1ce4u) c.badReturn(0x16cf1);
L16cf4:
    if (c.tracing) c.traceAt(0x16cf4);
    // 1501:1ce4  mov di, 0xa  [x18784]
    c.di.x = (uint16_t)(0xau);
    // 1501:1ce7  call 0xec9  [x18784]
    c.push16(0x1ceau); code_28(c, 0x15ed9u); if (c.ip != 0x1ceau) c.badReturn(0x16cf7);
L16cfa:
    if (c.tracing) c.traceAt(0x16cfa);
    // 1501:1cea  call 0x104a  [x18784]
    c.push16(0x1cedu); code_28(c, 0x1605au); if (c.ip != 0x1cedu) c.badReturn(0x16cfa);
L16cfd:
    if (c.tracing) c.traceAt(0x16cfd);
    // 1501:1ced  mov di, 0xc  [x18784]
    c.di.x = (uint16_t)(0xcu);
    // 1501:1cf0  call 0xec9  [x18784]
    c.push16(0x1cf3u); code_28(c, 0x15ed9u); if (c.ip != 0x1cf3u) c.badReturn(0x16d00);
L16d03:
    if (c.tracing) c.traceAt(0x16d03);
    // 1501:1cf3  call 0x104a  [x18784]
    c.push16(0x1cf6u); code_28(c, 0x1605au); if (c.ip != 0x1cf6u) c.badReturn(0x16d03);
L16d06:
    if (c.tracing) c.traceAt(0x16d06);
    // 1501:1cf6  mov di, 0xe  [x18784]
    c.di.x = (uint16_t)(0xeu);
    // 1501:1cf9  call 0xec9  [x18784]
    c.push16(0x1cfcu); code_28(c, 0x15ed9u); if (c.ip != 0x1cfcu) c.badReturn(0x16d09);
L16d0c:
    if (c.tracing) c.traceAt(0x16d0c);
    // 1501:1cfc  call 0x104a  [x18784]
    c.push16(0x1cffu); code_28(c, 0x1605au); if (c.ip != 0x1cffu) c.badReturn(0x16d0c);
L16d0f:
    if (c.tracing) c.traceAt(0x16d0f);
    // 1501:1cff  mov di, 0x10  [x18784]
    c.di.x = (uint16_t)(0x10u);
    // 1501:1d02  call 0xec9  [x18784]
    c.push16(0x1d05u); code_28(c, 0x15ed9u); if (c.ip != 0x1d05u) c.badReturn(0x16d12);
L16d15:
    if (c.tracing) c.traceAt(0x16d15);
    // 1501:1d05  call 0x104a  [x18784]
    c.push16(0x1d08u); code_28(c, 0x1605au); if (c.ip != 0x1d08u) c.badReturn(0x16d15);
L16d18:
    if (c.tracing) c.traceAt(0x16d18);
    // 1501:1d08  mov di, 0x12  [x18784]
    c.di.x = (uint16_t)(0x12u);
    // 1501:1d0b  call 0xec9  [x18784]
    c.push16(0x1d0eu); code_28(c, 0x15ed9u); if (c.ip != 0x1d0eu) c.badReturn(0x16d1b);
L16d1e:
    if (c.tracing) c.traceAt(0x16d1e);
    // 1501:1d0e  call 0x104a  [x18784]
    c.push16(0x1d11u); code_28(c, 0x1605au); if (c.ip != 0x1d11u) c.badReturn(0x16d1e);
L16d21:
    if (c.tracing) c.traceAt(0x16d21);
    // 1501:1d11  ret   [x18784]
    c.ip = c.pop16(); return;
L16d22:
    if (c.tracing) c.traceAt(0x16d22);
    // 1501:1d12  cli   [x1717]
    c.m.cli();
    // 1501:1d13  mov al, 0x34  [x1717]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d15  out 0x43, al  [x1717]
    c.ip = 0x1d17u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d17  mov ax, word ptr [0x7055]  [x1717]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7055u)));
    // 1501:1d1d  out 0x40, al  [x1717]
    c.ip = 0x1d1fu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d1f  mov al, ah  [x1717]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d21  out 0x40, al  [x1717]
    c.ip = 0x1d23u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d23  sti   [x1717]
    c.ip = 0x1d24u; c.d32 = false; c.m.sti();
L16d34:
    if (c.tracing) c.traceAt(0x16d34);
    // 1501:1d24  mov byte ptr [0x704e], 0  [x1717]
    c.w8(c.dsb + (uint32_t)(0x704eu), 0x0u);
L16d3c:
    if (c.tracing) c.traceAt(0x16d3c);
    // 1501:1d2c  ret   [x1717]
    c.ip = c.pop16(); return;
L16d3d:
    if (c.tracing) c.traceAt(0x16d3d);
    // 1501:1d2d  cli   [x1]
    c.m.cli();
    // 1501:1d2e  push es  [x1]
    c.push16(c.es);
    // 1501:1d2f  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:1d31  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1d33  mov ax, word ptr es:[0x20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 1501:1d37  mov word ptr [0x7057], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0x7057u), c.a.x);
    // 1501:1d3d  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 1501:1d41  mov word ptr [0x7059], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0x7059u), c.a.x);
    // 1501:1d47  mov ax, 0x1d90  [x1]
    c.a.x = (uint16_t)(0x1d90u);
    // 1501:1d4a  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:1d4e  mov word ptr es:[0x22], cs  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.cs);
    // 1501:1d53  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1d54  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d56  out 0x43, al  [x1]
    c.ip = 0x1d58u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d58  mov ax, word ptr [0x7055]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7055u)));
    // 1501:1d5e  out 0x40, al  [x1]
    c.ip = 0x1d60u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d60  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d62  out 0x40, al  [x1]
    c.ip = 0x1d64u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d64  sti   [x1]
    c.ip = 0x1d65u; c.d32 = false; c.m.sti();
L16d75:
    if (c.tracing) c.traceAt(0x16d75);
    // 1501:1d65  ret   [x1]
    c.ip = c.pop16(); return;
L16d76:
    if (c.tracing) c.traceAt(0x16d76);
    // 1501:1d66  cli   [x1]
    c.m.cli();
    // 1501:1d67  push es  [x1]
    c.push16(c.es);
    // 1501:1d68  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:1d6a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1d6c  mov ax, word ptr [0x7057]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7057u)));
    // 1501:1d72  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:1d76  mov ax, word ptr [0x7059]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7059u)));
    // 1501:1d7c  mov word ptr es:[0x22], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.a.x);
    // 1501:1d80  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1d81  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d83  out 0x43, al  [x1]
    c.ip = 0x1d85u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d85  mov ax, 0x4a9  [x1]
    c.a.x = (uint16_t)(0x4a9u);
    // 1501:1d88  out 0x40, al  [x1]
    c.ip = 0x1d8au; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d8a  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d8c  out 0x40, al  [x1]
    c.ip = 0x1d8eu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d8e  sti   [x1]
    c.ip = 0x1d8fu; c.d32 = false; c.m.sti();
L16d9f:
    if (c.tracing) c.traceAt(0x16d9f);
    // 1501:1d8f  ret   [x1]
    c.ip = c.pop16(); return;
L16da0:
    if (c.tracing) c.traceAt(0x16da0);
    // 1501:1d90  pushaw   [x1717]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:1d91  mov al, 0x34  [x1717]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d93  out 0x43, al  [x1717]
    c.ip = 0x1d95u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d95  mov ax, 0  [x1717]
    c.a.x = (uint16_t)(0x0u);
    // 1501:1d98  out 0x40, al  [x1717]
    c.ip = 0x1d9au; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d9a  mov al, ah  [x1717]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d9c  out 0x40, al  [x1717]
    c.ip = 0x1d9eu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d9e  mov byte ptr [0x704e], 1  [x1717]
    c.w8(c.dsb + (uint32_t)(0x704eu), 0x1u);
    // 1501:1da6  mov al, 0x20  [x1717]
    c.a.l = (uint8_t)(0x20u);
    // 1501:1da8  out 0x20, al  [x1717]
    c.ip = 0x1daau; c.d32 = false; c.out8(0x20, c.a.l);
    // 1501:1daa  popaw   [x1717]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:1dab  iret   [x1717]
    c.iret(); return;
L16dbc:
    if (c.tracing) c.traceAt(0x16dbc);
    // 1501:1dac  mov al, byte ptr [0x64ef]  [x1733]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x64efu)));
    // 1501:1db2  cmp byte ptr [0x64f0], al  [x1733]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x64f0u)), c.a.l, true);
    // 1501:1db9  je 0x1de5  [x1733]
    if (c.zf) goto L16df5;
L16dcb:
    if (c.tracing) c.traceAt(0x16dcb);
    // 1501:1dbb  mov byte ptr [0x64f0], al  [x355]
    c.w8(c.dsb + (uint32_t)(0x64f0u), c.a.l);
    // 1501:1dc1  mov dx, 0x3c8  [x355]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1dc4  xor al, al  [x355]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:1dc6  out dx, al  [x355]
    c.ip = 0x1dc7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1dc7  inc dx  [x355]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1dc8  mov si, word ptr [0x6527]  [x355]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6527u)));
    // 1501:1dcf  mov cx, 0x30  [x355]
    c.c.x = (uint16_t)(0x30u);
    // 1501:1dd2  mov bl, byte ptr [0x64ef]  [x355]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x64efu)));
L16de9:
    if (c.tracing) c.traceAt(0x16de9);
    // 1501:1dd9  lodsb al, byte ptr [si]  [x17040]
    c.ip = 0x1ddau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1dda  add al, bl  [x17040]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:1ddc  cmp al, 0x3f  [x17040]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:1dde  jb 0x1de2  [x17040]
    if (c.cf) goto L16df2;
L16df0:
    if (c.tracing) c.traceAt(0x16df0);
    // 1501:1de0  mov al, 0x3f  [x11037]
    c.a.l = (uint8_t)(0x3fu);
L16df2:
    if (c.tracing) c.traceAt(0x16df2);
    // 1501:1de2  out dx, al  [x17040]
    c.ip = 0x1de3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1de3  loop 0x1dd9  [x17040]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16de9;
L16df5:
    if (c.tracing) c.traceAt(0x16df5);
    // 1501:1de5  ret   [x1733]
    c.ip = c.pop16(); return;
L16df6:
    if (c.tracing) c.traceAt(0x16df6);
    // 1501:1de6  mov dx, 0x3c8  [x17]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1de9  xor al, al  [x17]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:1deb  out dx, al  [x17]
    c.ip = 0x1decu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1dec  inc dx  [x17]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:1ded  mov cx, 0x30  [x17]
    c.c.x = (uint16_t)(0x30u);
    // 1501:1df0  mov bl, byte ptr [0x64ef]  [x17]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x64efu)));
    // 1501:1df7  add al, bl  [x17]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:1df9  cmp al, 0x3f  [x17]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:1dfb  jb 0x1dff  [x17]
    if (c.cf) goto L16e0f;
L16e0d:
    if (c.tracing) c.traceAt(0x16e0d);
    // 1501:1dfd  mov al, 0x3f  [x1]
    c.a.l = (uint8_t)(0x3fu);
L16e0f:
    if (c.tracing) c.traceAt(0x16e0f);
    // 1501:1dff  out dx, al  [x816]
    c.ip = 0x1e00u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1e00  loop 0x1dff  [x816]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16e0f;
L16e12:
    if (c.tracing) c.traceAt(0x16e12);
    // 1501:1e02  ret   [x17]
    c.ip = c.pop16(); return;
L16e13:
    if (c.tracing) c.traceAt(0x16e13);
    // 1501:1e03  push bx  [x90]
    c.push16(c.b.x);
    // 1501:1e04  push cx  [x90]
    c.push16(c.c.x);
    // 1501:1e05  push dx  [x90]
    c.push16(c.dx_.x);
    // 1501:1e06  mov ax, word ptr [0x6407]  [x90]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6407u)));
    // 1501:1e0c  mov bx, word ptr [0x6409]  [x90]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6409u)));
    // 1501:1e13  mov cx, word ptr [0x640b]  [x90]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x640bu)));
    // 1501:1e1a  mov dx, word ptr [0x640d]  [x90]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x640du)));
    // 1501:1e21  add ax, bx  [x90]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:1e23  rol ax, cl  [x90]
    c.a.x = (uint16_t)(c.rol<16>(c.a.x, (int)(c.c.l & 31), false));
    // 1501:1e25  xor ax, dx  [x90]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.dx_.x), false));
    // 1501:1e27  xchg ch, cl  [x90]
    { const uint32_t t0 = c.c.h; c.c.h = (uint8_t)(c.c.l); c.c.l = (uint8_t)(t0); }
    // 1501:1e29  add bx, cx  [x90]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 1501:1e2b  add dx, bx  [x90]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false));
    // 1501:1e2d  add cx, ax  [x90]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, false));
    // 1501:1e2f  ror bx, 1  [x90]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), true));
    // 1501:1e31  sbb ax, dx  [x90]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, true, c.cf));
    // 1501:1e33  mov word ptr [0x640d], dx  [x90]
    c.w16(c.dsb + (uint32_t)(0x640du), c.dx_.x);
    // 1501:1e3a  mov word ptr [0x640b], dx  [x90]
    c.w16(c.dsb + (uint32_t)(0x640bu), c.dx_.x);
    // 1501:1e41  mov word ptr [0x6409], dx  [x90]
    c.w16(c.dsb + (uint32_t)(0x6409u), c.dx_.x);
    // 1501:1e48  mov word ptr [0x6407], ax  [x90]
    c.w16(c.dsb + (uint32_t)(0x6407u), c.a.x);
    // 1501:1e4e  pop dx  [x90]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 1501:1e4f  pop cx  [x90]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:1e50  pop bx  [x90]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1e51  ret   [x90]
    c.ip = c.pop16(); return;
L16e62:
    if (c.tracing) c.traceAt(0x16e62);
    // 1501:1e52  call 0x1d66  [x1]
    c.push16(0x1e55u); code_28(c, 0x16d76u); if (c.ip != 0x1e55u) c.badReturn(0x16e62);
L16e65:
    if (c.tracing) c.traceAt(0x16e65);
    // 1501:1e55  mov byte ptr [0x64ef], 0x40  [x1]
    c.w8(c.dsb + (uint32_t)(0x64efu), 0x40u);
L16e6d:
    if (c.tracing) c.traceAt(0x16e6d);
    // 1501:1e5d  mov dx, 0x3da  [x17]
    c.dx_.x = (uint16_t)(0x3dau);
L16e70:
    if (c.tracing) c.traceAt(0x16e70);
    // 1501:1e60  in al, dx  [x836]
    c.ip = 0x1e61u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16e71:
    if (c.tracing) c.traceAt(0x16e71);
    // 1501:1e61  test al, 8  [x1109]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1e63  je 0x1e60  [x1109]
    if (c.zf) goto L16e70;
L16e75:
    if (c.tracing) c.traceAt(0x16e75);
    // 1501:1e65  in al, dx  [x84]
    c.ip = 0x1e66u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16e76:
    if (c.tracing) c.traceAt(0x16e76);
    // 1501:1e66  test al, 8  [x112]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1e68  jne 0x1e65  [x112]
    if (!c.zf) goto L16e75;
L16e7a:
    if (c.tracing) c.traceAt(0x16e7a);
    // 1501:1e6a  call 0x1de6  [x17]
    c.push16(0x1e6du); code_28(c, 0x16df6u); if (c.ip != 0x1e6du) c.badReturn(0x16e7a);
L16e7d:
    if (c.tracing) c.traceAt(0x16e7d);
    // 1501:1e6d  sub byte ptr [0x64ef], 4  [x17]
    c.w8(c.dsb + (uint32_t)(0x64efu), c.sub<8>(c.r8(c.dsb + (uint32_t)(0x64efu)), 0x4u, true));
    // 1501:1e75  jns 0x1e5d  [x17]
    if (!c.sf) goto L16e6d;
L16e87:
    if (c.tracing) c.traceAt(0x16e87);
    // 1501:1e77  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_28(28, {0x15010, 0x1553e, 0x15553, 0x1555a, 0x15560, 0x15569, 0x1556d, 0x1557e, 0x15584, 0x15587, 0x15592, 0x1559f, 0x155a2, 0x155af, 0x155b2, 0x155c7, 0x155ca, 0x155d3, 0x155dc, 0x1560a, 0x15611, 0x15613, 0x1561c, 0x15631, 0x1563c, 0x1563d, 0x15641, 0x15642, 0x15646, 0x15649, 0x1565b, 0x1565e, 0x1567a, 0x15680, 0x15698, 0x15699, 0x1569d, 0x1569e, 0x156a2, 0x156a5, 0x156af, 0x156b7, 0x156ba, 0x15702, 0x15705, 0x15707, 0x1576d, 0x1577d, 0x1577e, 0x15798, 0x157a0, 0x157a2, 0x157ad, 0x157ca, 0x157cd, 0x157d0, 0x157d3, 0x157d7, 0x157de, 0x157f1, 0x157fa, 0x1580d, 0x15816, 0x15829, 0x15832, 0x1584e, 0x15861, 0x1586a, 0x1587d, 0x15886, 0x15899, 0x158a2, 0x158b5, 0x158be, 0x158d1, 0x158da, 0x158ed, 0x158f6, 0x15909, 0x15912, 0x15925, 0x1592e, 0x15941, 0x1594a, 0x1595d, 0x15966, 0x15979, 0x15982, 0x15995, 0x1599e, 0x159b1, 0x159ba, 0x159cd, 0x159d6, 0x159e9, 0x159f2, 0x15a05, 0x15a0e, 0x15a21, 0x15a2a, 0x15a3d, 0x15a46, 0x15a59, 0x15a62, 0x15a75, 0x15a7e, 0x15a9f, 0x15aae, 0x15ab3, 0x15abd, 0x15add, 0x15af4, 0x15afe, 0x15b06, 0x15b18, 0x15b27, 0x15b2c, 0x15b2f, 0x15b3a, 0x15b3d, 0x15b84, 0x15b8b, 0x15c65, 0x15c68, 0x15c6d, 0x15c70, 0x15c71, 0x15c7d, 0x15cc2, 0x15cc3, 0x15cce, 0x15cec, 0x15d12, 0x15d29, 0x15d35, 0x15d50, 0x15d5f, 0x15d71, 0x15d84, 0x15d85, 0x15db8, 0x15dd1, 0x15e0d, 0x15e26, 0x15e62, 0x15e7b, 0x15eb7, 0x15ed0, 0x15ed9, 0x1605a, 0x162cf, 0x16545, 0x167b6, 0x16a2c, 0x16ca3, 0x16cc7, 0x16ccd, 0x16cd0, 0x16cd6, 0x16cd9, 0x16cdf, 0x16ce2, 0x16ce8, 0x16ceb, 0x16cf1, 0x16cf4, 0x16cfa, 0x16cfd, 0x16d03, 0x16d06, 0x16d0c, 0x16d0f, 0x16d15, 0x16d18, 0x16d1e, 0x16d21, 0x16d22, 0x16d34, 0x16d3c, 0x16d3d, 0x16d75, 0x16d76, 0x16d9f, 0x16da0, 0x16dbc, 0x16dcb, 0x16de9, 0x16df0, 0x16df2, 0x16df5, 0x16df6, 0x16e0d, 0x16e0f, 0x16e12, 0x16e13, 0x16e62, 0x16e65, 0x16e6d, 0x16e70, 0x16e71, 0x16e75, 0x16e76, 0x16e7a, 0x16e7d, 0x16e87}, code_28);

}  // namespace show
