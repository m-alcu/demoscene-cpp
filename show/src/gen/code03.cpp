// Part 2 (QQ.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_3(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1fda3: goto L1fda3;
    case 0x1fdb9: goto L1fdb9;
    case 0x1fdbb: goto L1fdbb;
    case 0x1fdd1: goto L1fdd1;
    case 0x1fdd7: goto L1fdd7;
    case 0x1fddc: goto L1fddc;
    case 0x1fde1: goto L1fde1;
    case 0x1fe03: goto L1fe03;
    case 0x1fe05: goto L1fe05;
    case 0x1fe0f: goto L1fe0f;
    case 0x1fe12: goto L1fe12;
    case 0x1fe1f: goto L1fe1f;
    case 0x1fe21: goto L1fe21;
    case 0x1fe2f: goto L1fe2f;
    case 0x1fe31: goto L1fe31;
    case 0x1fe3a: goto L1fe3a;
    case 0x1fe3c: goto L1fe3c;
    case 0x1fe51: goto L1fe51;
    case 0x1fe55: goto L1fe55;
    case 0x1fe82: goto L1fe82;
    case 0x1fe83: goto L1fe83;
    case 0x1fe98: goto L1fe98;
    case 0x1fe9b: goto L1fe9b;
    case 0x1fe9e: goto L1fe9e;
    case 0x1fea0: goto L1fea0;
    case 0x1fea7: goto L1fea7;
    case 0x1fec1: goto L1fec1;
    case 0x1fec5: goto L1fec5;
    case 0x1fedb: goto L1fedb;
    case 0x1fee5: goto L1fee5;
    case 0x1fee8: goto L1fee8;
    case 0x1fef8: goto L1fef8;
    case 0x1fefd: goto L1fefd;
    case 0x1feff: goto L1feff;
    case 0x1ff02: goto L1ff02;
    case 0x1ff13: goto L1ff13;
    case 0x1ff15: goto L1ff15;
    case 0x1ff18: goto L1ff18;
    case 0x1ff1b: goto L1ff1b;
    case 0x1ff1d: goto L1ff1d;
    case 0x1ff29: goto L1ff29;
    case 0x1ff2d: goto L1ff2d;
    case 0x1ff30: goto L1ff30;
    case 0x1ff37: goto L1ff37;
    case 0x1ff39: goto L1ff39;
    case 0x1ff46: goto L1ff46;
    case 0x1ff48: goto L1ff48;
    case 0x1ff50: goto L1ff50;
    case 0x1ff53: goto L1ff53;
    case 0x1ff5d: goto L1ff5d;
    case 0x1ff68: goto L1ff68;
    case 0x1ff6b: goto L1ff6b;
    case 0x1ff77: goto L1ff77;
    case 0x1ff84: goto L1ff84;
    case 0x1ff90: goto L1ff90;
    case 0x1ff9d: goto L1ff9d;
    case 0x1ffa9: goto L1ffa9;
    case 0x1ffb6: goto L1ffb6;
    case 0x1ffc2: goto L1ffc2;
    case 0x1ffcf: goto L1ffcf;
    case 0x1ffd5: goto L1ffd5;
    case 0x1ffd8: goto L1ffd8;
    case 0x1ffdf: goto L1ffdf;
    case 0x1fff5: goto L1fff5;
    case 0x1fffc: goto L1fffc;
    case 0x1fffe: goto L1fffe;
    case 0x20006: goto L20006;
    case 0x20008: goto L20008;
    case 0x20010: goto L20010;
    case 0x20012: goto L20012;
    case 0x20015: goto L20015;
    case 0x20018: goto L20018;
    case 0x20037: goto L20037;
    case 0x2003c: goto L2003c;
    case 0x20044: goto L20044;
    case 0x20057: goto L20057;
    case 0x2005e: goto L2005e;
    case 0x20066: goto L20066;
    case 0x2006a: goto L2006a;
    case 0x20072: goto L20072;
    case 0x20078: goto L20078;
    case 0x20080: goto L20080;
    case 0x20083: goto L20083;
    case 0x20086: goto L20086;
    case 0x200ae: goto L200ae;
    case 0x200b4: goto L200b4;
    case 0x200b8: goto L200b8;
    case 0x200be: goto L200be;
    case 0x200c2: goto L200c2;
    case 0x200d5: goto L200d5;
    case 0x200e5: goto L200e5;
    case 0x200f4: goto L200f4;
    case 0x200fa: goto L200fa;
    case 0x20109: goto L20109;
    case 0x2010f: goto L2010f;
    case 0x20133: goto L20133;
    case 0x20154: goto L20154;
    case 0x20171: goto L20171;
    case 0x2018e: goto L2018e;
    case 0x20191: goto L20191;
    case 0x20192: goto L20192;
    case 0x20196: goto L20196;
    case 0x20199: goto L20199;
    case 0x2019a: goto L2019a;
    case 0x2019e: goto L2019e;
    case 0x2019f: goto L2019f;
    case 0x201be: goto L201be;
    case 0x201cc: goto L201cc;
    case 0x201d7: goto L201d7;
    case 0x201da: goto L201da;
    case 0x201e1: goto L201e1;
    case 0x201ea: goto L201ea;
    case 0x20200: goto L20200;
    case 0x20201: goto L20201;
    case 0x20219: goto L20219;
    case 0x2022b: goto L2022b;
    case 0x20231: goto L20231;
    case 0x20238: goto L20238;
    case 0x20240: goto L20240;
    case 0x20242: goto L20242;
    case 0x2024a: goto L2024a;
    case 0x2024e: goto L2024e;
    case 0x20252: goto L20252;
    case 0x20254: goto L20254;
    case 0x2025c: goto L2025c;
    case 0x20260: goto L20260;
    case 0x20264: goto L20264;
    case 0x20266: goto L20266;
    case 0x20269: goto L20269;
    case 0x20276: goto L20276;
    case 0x20278: goto L20278;
    case 0x20279: goto L20279;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xffffad93  [x1]
    goto L1fda3;
L1fda3:
    if (c.tracing) c.traceAt(0x1fda3);
    // 1501:ad93  mov word ptr cs:[0xad8f], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xffffad8fu), c.c.x);
    // 1501:ad98  mov word ptr cs:[0xad91], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xffffad91u), c.dx_.x);
    // 1501:ad9d  mov word ptr cs:[0x3a8d], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x3a8du), c.a.x);
    // 1501:ada1  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:ada4  mov bp, 0x12c  [x1]
    c.bp.x = (uint16_t)(0x12cu);
    // 1501:ada7  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1fdb9:
    if (c.tracing) c.traceAt(0x1fdb9);
    // 1501:ada9  xor si, si  [x40]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1fdbb:
    if (c.tracing) c.traceAt(0x1fdbb);
    // 1501:adab  mov al, byte ptr [si - 0x5b80]  [x12800]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffa480u)));
    // 1501:adaf  cwde   [x12800]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:adb0  imul bx  [x12800]
    c.imul16(c.b.x);
    // 1501:adb2  idiv bp  [x12800]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xadb2u); }   // #DE: int 0, then again
    // 1501:adb4  mov byte ptr cs:[di + 0x710], al  [x12800]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x710u), c.a.l);
    // 1501:adb9  inc si  [x12800]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:adba  inc di  [x12800]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:adbb  cmp si, 0x140  [x12800]
    c.sub<16>(c.si.x, 0x140u, true);
    // 1501:adbf  jb 0xadab  [x12800]
    if (c.cf) goto L1fdbb;
L1fdd1:
    if (c.tracing) c.traceAt(0x1fdd1);
    // 1501:adc1  inc bx  [x40]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 1501:adc2  cmp bx, 0x28  [x40]
    c.sub<16>(c.b.x, 0x28u, true);
    // 1501:adc5  jb 0xada9  [x40]
    if (c.cf) goto L1fdb9;
L1fdd7:
    if (c.tracing) c.traceAt(0x1fdd7);
    // 1501:adc7  mov ax, 0x12  [x1]
    c.a.x = (uint16_t)(0x12u);
    // 1501:adca  int 0x10  [x1]
    c.ip = 0xadccu; c.d32 = false; c.intr(0x10, 0xadccu);
L1fddc:
    if (c.tracing) c.traceAt(0x1fddc);
    // 1501:adcc  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:adcf  int 0x10  [x1]
    c.ip = 0xadd1u; c.d32 = false; c.intr(0x10, 0xadd1u);
L1fde1:
    if (c.tracing) c.traceAt(0x1fde1);
    // 1501:add1  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:add4  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:add7  out dx, ax  [x1]
    c.ip = 0xadd8u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:add8  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:addb  out dx, ax  [x1]
    c.ip = 0xaddcu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:addc  mov ax, 0x100  [x1]
    c.a.x = (uint16_t)(0x100u);
    // 1501:addf  out dx, ax  [x1]
    c.ip = 0xade0u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:ade0  mov dl, 0xc2  [x1]
    c.dx_.l = (uint8_t)(0xc2u);
    // 1501:ade2  mov al, 0xe3  [x1]
    c.a.l = (uint8_t)(0xe3u);
    // 1501:ade4  out dx, al  [x1]
    c.ip = 0xade5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:ade5  mov dl, 0xc4  [x1]
    c.dx_.l = (uint8_t)(0xc4u);
    // 1501:ade7  mov ax, 0x300  [x1]
    c.a.x = (uint16_t)(0x300u);
    // 1501:adea  out dx, ax  [x1]
    c.ip = 0xadebu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:adeb  mov dl, 0xd4  [x1]
    c.dx_.l = (uint8_t)(0xd4u);
    // 1501:aded  mov si, 0xa637  [x1]
    c.si.x = (uint16_t)(0xa637u);
    // 1501:adf0  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
L1fe03:
    if (c.tracing) c.traceAt(0x1fe03);
    // 1501:adf3  rep outsw dx, word ptr [si]  [x11]
    c.ip = 0xadf5u; c.d32 = false; c.outs<16, false>(c.dsb, 1);
L1fe05:
    if (c.tracing) c.traceAt(0x1fe05);
    // 1501:adf5  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:adf8  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:adfa  out dx, al  [x1]
    c.ip = 0xadfbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:adfb  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:adfc  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L1fe0f:
    if (c.tracing) c.traceAt(0x1fe0f);
    // 1501:adff  out dx, al  [x768]
    c.ip = 0xae00u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:ae00  loop 0xadff  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1fe0f;
L1fe12:
    if (c.tracing) c.traceAt(0x1fe12);
    // 1501:ae02  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:ae05  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:ae07  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:ae09  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:ae0c  mov ax, 0x2020  [x1]
    c.a.x = (uint16_t)(0x2020u);
L1fe1f:
    if (c.tracing) c.traceAt(0x1fe1f);
    // 1501:ae0f  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L1fe21:
    if (c.tracing) c.traceAt(0x1fe21);
    // 1501:ae11  push ds  [x1]
    c.push16(c.ds);
    // 1501:ae12  push es  [x1]
    c.push16(c.es);
    // 1501:ae13  mov ax, word ptr cs:[0x3a8d]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a8du)));
    // 1501:ae17  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:ae19  mov cx, 0x7d00  [x1]
    c.c.x = (uint16_t)(0x7d00u);
    // 1501:ae1c  mov ax, 0x2020  [x1]
    c.a.x = (uint16_t)(0x2020u);
L1fe2f:
    if (c.tracing) c.traceAt(0x1fe2f);
    // 1501:ae1f  rep stosw word ptr es:[di], ax  [x32001]
    c.stos<16, false>(1);
L1fe31:
    if (c.tracing) c.traceAt(0x1fe31);
    // 1501:ae21  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:ae24  mov di, 0x4380  [x1]
    c.di.x = (uint16_t)(0x4380u);
    // 1501:ae27  mov cx, 0x51e0  [x1]
    c.c.x = (uint16_t)(0x51e0u);
L1fe3a:
    if (c.tracing) c.traceAt(0x1fe3a);
    // 1501:ae2a  rep movsw word ptr es:[di], word ptr [si]  [x20961]
    c.ip = 0xae2cu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1fe3c:
    if (c.tracing) c.traceAt(0x1fe3c);
    // 1501:ae2c  mov ax, es  [x1]
    c.a.x = (uint16_t)(c.es);
    // 1501:ae2e  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 1501:ae30  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:ae31  mov word ptr cs:[0x3a53], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x3a53u), 0x0u);
    // 1501:ae38  mov word ptr cs:[0x3a50], 1  [x1]
    c.w16(c.csb + (uint16_t)(0x3a50u), 0x1u);
    // 1501:ae3f  sub si, si  [x1]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.si.x, true));
L1fe51:
    if (c.tracing) c.traceAt(0x1fe51);
    // 1501:ae41  push si  [x16]
    c.push16(c.si.x);
    // 1501:ae42  call 0xb18f  [x16]
    c.push16(0xae45u); code_3(c, 0x2019fu); if (c.ip != 0xae45u) c.badReturn(0x1fe52);
L1fe55:
    if (c.tracing) c.traceAt(0x1fe55);
    // 1501:ae45  pop si  [x16]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:ae46  mov ax, word ptr cs:[0x3a53]  [x16]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a53u)));
    // 1501:ae4a  mov word ptr cs:[si + 0x3a55], ax  [x16]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x3a55u), c.a.x);
    // 1501:ae4f  mov ax, 0xe1  [x16]
    c.a.x = (uint16_t)(0xe1u);
    // 1501:ae52  mov cx, word ptr cs:[0x3a50]  [x16]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:ae57  div cl  [x16]
    while (!c.div8(c.c.l)) { c.d32 = false; c.intr(0, 0xae57u); }   // #DE: int 0, then again
    // 1501:ae59  mov ah, 0x50  [x16]
    c.a.h = (uint8_t)(0x50u);
    // 1501:ae5b  mul ah  [x16]
    c.mul8(c.a.h);
    // 1501:ae5d  add word ptr cs:[0x3a53], ax  [x16]
    c.w16(c.csb + (uint16_t)(0x3a53u), c.add<16>(c.r16(c.csb + (uint16_t)(0x3a53u)), c.a.x, false));
    // 1501:ae62  add si, 2  [x16]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:ae65  inc word ptr cs:[0x3a50]  [x16]
    c.w16(c.csb + (uint16_t)(0x3a50u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3a50u)), false));
    // 1501:ae6a  cmp word ptr cs:[0x3a50], 0x10  [x16]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x3a50u)), 0x10u, true);
    // 1501:ae70  jbe 0xae41  [x16]
    if ((c.cf || c.zf)) goto L1fe51;
L1fe82:
    if (c.tracing) c.traceAt(0x1fe82);
    // 1501:ae72  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
L1fe83:
    if (c.tracing) c.traceAt(0x1fe83);
    // 1501:ae73  push es  [x626]
    c.ip = 0xae73u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:ae74  mov ax, word ptr cs:[0xad8f]  [x626]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xad8fu)));
    // 1501:ae78  mov es, ax  [x626]
    c.loadEs(c.a.x);
    // 1501:ae7a  mov si, word ptr cs:[0xad91]  [x626]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xffffad91u)));
    // 1501:ae7f  mov dx, word ptr es:[si]  [x626]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:ae82  pop es  [x626]
    c.loadEs((uint16_t)c.pop16());
    // 1501:ae83  cmp dx, 0  [x626]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:ae86  je 0xae73  [x626]
    if (c.zf) goto L1fe83;
L1fe98:
    if (c.tracing) c.traceAt(0x1fe98);
    // 1501:ae88  mov cx, 0x12  [x1]
    c.c.x = (uint16_t)(0x12u);
L1fe9b:
    if (c.tracing) c.traceAt(0x1fe9b);
    // 1501:ae8b  call 0xb17e  [x18]
    c.push16(0xae8eu); code_3(c, 0x2018eu); if (c.ip != 0xae8eu) c.badReturn(0x1fe9b);
L1fe9e:
    if (c.tracing) c.traceAt(0x1fe9e);
    // 1501:ae8e  loop 0xae8b  [x18]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1fe9b;
L1fea0:
    if (c.tracing) c.traceAt(0x1fea0);
    // 1501:ae90  mov word ptr cs:[0x3a50], 0x1e  [x1]
    c.w16(c.csb + (uint16_t)(0x3a50u), 0x1eu);
L1fea7:
    if (c.tracing) c.traceAt(0x1fea7);
    // 1501:ae97  mov si, word ptr cs:[0x3a50]  [x16]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:ae9c  mov cx, word ptr cs:[si + 0x3a55]  [x16]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x3a55u)));
    // 1501:aea1  mov dx, 0x3d4  [x16]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:aea4  mov al, 0xc  [x16]
    c.a.l = (uint8_t)(0xcu);
    // 1501:aea6  mov ah, ch  [x16]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:aea8  out dx, ax  [x16]
    c.ip = 0xaea9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:aea9  mov al, 0xd  [x16]
    c.a.l = (uint8_t)(0xdu);
    // 1501:aeab  mov ah, cl  [x16]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:aead  out dx, ax  [x16]
    c.ip = 0xaeaeu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:aeae  mov cx, 3  [x16]
    c.c.x = (uint16_t)(0x3u);
L1fec1:
    if (c.tracing) c.traceAt(0x1fec1);
    // 1501:aeb1  push cx  [x48]
    c.push16(c.c.x);
    // 1501:aeb2  call 0xb17e  [x48]
    c.push16(0xaeb5u); code_3(c, 0x2018eu); if (c.ip != 0xaeb5u) c.badReturn(0x1fec2);
L1fec5:
    if (c.tracing) c.traceAt(0x1fec5);
    // 1501:aeb5  mov dx, 0x3d4  [x48]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:aeb8  mov al, 9  [x48]
    c.a.l = (uint8_t)(0x9u);
    // 1501:aeba  mov bx, word ptr cs:[0x3a50]  [x48]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:aebf  shr bx, 1  [x48]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:aec1  inc bx  [x48]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 1501:aec2  shl bx, 1  [x48]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), true));
    // 1501:aec4  dec bx  [x48]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, true));
    // 1501:aec5  mov ah, bl  [x48]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:aec7  out dx, ax  [x48]
    c.ip = 0xaec8u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:aec8  pop cx  [x48]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:aec9  loop 0xaeb1  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1fec1;
L1fedb:
    if (c.tracing) c.traceAt(0x1fedb);
    // 1501:aecb  mov bx, word ptr cs:[0x3a50]  [x16]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:aed0  sub bx, 0xd  [x16]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0xdu, true));
    // 1501:aed3  jns 0xaed8  [x16]
    if (!c.sf) goto L1fee8;
L1fee5:
    if (c.tracing) c.traceAt(0x1fee5);
    // 1501:aed5  mov bx, 0  [x7]
    c.b.x = (uint16_t)(0x0u);
L1fee8:
    if (c.tracing) c.traceAt(0x1fee8);
    // 1501:aed8  shl bl, 2  [x16]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x2u) & 31), false));
    // 1501:aedb  mov dx, 0x3c8  [x16]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:aede  xor al, al  [x16]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:aee0  out dx, al  [x16]
    c.ip = 0xaee1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:aee1  inc dx  [x16]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:aee2  mov si, 0xa3c0  [x16]
    c.si.x = (uint16_t)(0xa3c0u);
    // 1501:aee5  mov cx, 0x300  [x16]
    c.c.x = (uint16_t)(0x300u);
L1fef8:
    if (c.tracing) c.traceAt(0x1fef8);
    // 1501:aee8  lodsb al, byte ptr [si]  [x12288]
    c.ip = 0xaee9u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:aee9  sub al, bl  [x12288]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:aeeb  jns 0xaeef  [x12288]
    if (!c.sf) goto L1feff;
L1fefd:
    if (c.tracing) c.traceAt(0x1fefd);
    // 1501:aeed  xor al, al  [x5004]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1feff:
    if (c.tracing) c.traceAt(0x1feff);
    // 1501:aeef  out dx, al  [x12288]
    c.ip = 0xaef0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:aef0  loop 0xaee8  [x12288]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1fef8;
L1ff02:
    if (c.tracing) c.traceAt(0x1ff02);
    // 1501:aef2  inc word ptr [0xa5d3]  [x16]
    c.w16(c.dsb + (uint16_t)(0xffffa5d3u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), false));
    // 1501:aef6  sub word ptr cs:[0x3a50], 2  [x16]
    c.w16(c.csb + (uint16_t)(0x3a50u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x3a50u)), 0x2u, false));
    // 1501:aefc  cmp word ptr [0xa5d3], 0x10  [x16]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x10u, true);
    // 1501:af01  jae 0xaf05  [x16]
    if (!c.cf) goto L1ff15;
L1ff13:
    if (c.tracing) c.traceAt(0x1ff13);
    // 1501:af03  jmp 0xae97  [x15]
    goto L1fea7;
L1ff15:
    if (c.tracing) c.traceAt(0x1ff15);
    // 1501:af05  mov cx, 0x70  [x1]
    c.c.x = (uint16_t)(0x70u);
L1ff18:
    if (c.tracing) c.traceAt(0x1ff18);
    // 1501:af08  call 0xb17e  [x112]
    c.push16(0xaf0bu); code_3(c, 0x2018eu); if (c.ip != 0xaf0bu) c.badReturn(0x1ff18);
L1ff1b:
    if (c.tracing) c.traceAt(0x1ff1b);
    // 1501:af0b  loop 0xaf08  [x112]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ff18;
L1ff1d:
    if (c.tracing) c.traceAt(0x1ff1d);
    // 1501:af0d  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:af10  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:af13  out dx, ax  [x1]
    c.ip = 0xaf14u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:af14  mov cx, 0x3c  [x1]
    c.c.x = (uint16_t)(0x3cu);
    // 1501:af17  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ff29:
    if (c.tracing) c.traceAt(0x1ff29);
    // 1501:af19  push cx  [x60]
    c.push16(c.c.x);
    // 1501:af1a  call 0xb17e  [x60]
    c.push16(0xaf1du); code_3(c, 0x2018eu); if (c.ip != 0xaf1du) c.badReturn(0x1ff2a);
L1ff2d:
    if (c.tracing) c.traceAt(0x1ff2d);
    // 1501:af1d  call 0xb21b  [x60]
    c.push16(0xaf20u); code_3(c, 0x2022bu); if (c.ip != 0xaf20u) c.badReturn(0x1ff2d);
L1ff30:
    if (c.tracing) c.traceAt(0x1ff30);
    // 1501:af20  push di  [x60]
    c.push16(c.di.x);
    // 1501:af21  mov ax, 0x2121  [x60]
    c.a.x = (uint16_t)(0x2121u);
    // 1501:af24  mov cx, 0x50  [x60]
    c.c.x = (uint16_t)(0x50u);
L1ff37:
    if (c.tracing) c.traceAt(0x1ff37);
    // 1501:af27  rep stosw word ptr es:[di], ax  [x4860]
    c.stos<16, false>(1);
L1ff39:
    if (c.tracing) c.traceAt(0x1ff39);
    // 1501:af29  mov ax, 0x4b00  [x60]
    c.a.x = (uint16_t)(0x4b00u);
    // 1501:af2c  sub ax, di  [x60]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.di.x, true));
    // 1501:af2e  mov di, ax  [x60]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:af30  mov ax, 0x2222  [x60]
    c.a.x = (uint16_t)(0x2222u);
    // 1501:af33  mov cx, 0x50  [x60]
    c.c.x = (uint16_t)(0x50u);
L1ff46:
    if (c.tracing) c.traceAt(0x1ff46);
    // 1501:af36  rep stosw word ptr es:[di], ax  [x4860]
    c.stos<16, false>(1);
L1ff48:
    if (c.tracing) c.traceAt(0x1ff48);
    // 1501:af38  pop di  [x60]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:af39  add di, 0xa0  [x60]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xa0u, true));
    // 1501:af3d  pop cx  [x60]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:af3e  loop 0xaf19  [x60]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ff29;
L1ff50:
    if (c.tracing) c.traceAt(0x1ff50);
    // 1501:af40  call 0xb17e  [x1]
    c.push16(0xaf43u); code_3(c, 0x2018eu); if (c.ip != 0xaf43u) c.badReturn(0x1ff50);
L1ff53:
    if (c.tracing) c.traceAt(0x1ff53);
    // 1501:af43  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:af46  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:af48  out dx, al  [x1]
    c.ip = 0xaf49u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:af49  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:af4a  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L1ff5d:
    if (c.tracing) c.traceAt(0x1ff5d);
    // 1501:af4d  mov al, 0x11  [x32]
    c.a.l = (uint8_t)(0x11u);
    // 1501:af4f  out dx, al  [x32]
    c.ip = 0xaf50u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:af50  mov al, 0  [x32]
    c.a.l = (uint8_t)(0x0u);
    // 1501:af52  out dx, al  [x32]
    c.ip = 0xaf53u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:af53  mov al, 0x11  [x32]
    c.a.l = (uint8_t)(0x11u);
    // 1501:af55  out dx, al  [x32]
    c.ip = 0xaf56u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:af56  loop 0xaf4d  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ff5d;
L1ff68:
    if (c.tracing) c.traceAt(0x1ff68);
    // 1501:af58  call 0xb17e  [x1]
    c.push16(0xaf5bu); code_3(c, 0x2018eu); if (c.ip != 0xaf5bu) c.badReturn(0x1ff68);
L1ff6b:
    if (c.tracing) c.traceAt(0x1ff6b);
    // 1501:af5b  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:af5e  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:af61  out dx, ax  [x1]
    c.ip = 0xaf62u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:af62  mov si, 0x3a8f  [x1]
    c.si.x = (uint16_t)(0x3a8fu);
    // 1501:af65  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ff77:
    if (c.tracing) c.traceAt(0x1ff77);
    // 1501:af67  mov al, byte ptr cs:[si]  [x7360]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:af6a  stosb byte ptr es:[di], al  [x7360]
    c.stos<8, false>(0);
    // 1501:af6b  add si, 4  [x7360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:af6e  cmp si, 0xad8f  [x7360]
    c.sub<16>(c.si.x, 0xad8fu, true);
    // 1501:af72  jb 0xaf67  [x7360]
    if (c.cf) goto L1ff77;
L1ff84:
    if (c.tracing) c.traceAt(0x1ff84);
    // 1501:af74  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:af77  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:af7a  out dx, ax  [x1]
    c.ip = 0xaf7bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:af7b  mov si, 0x3a90  [x1]
    c.si.x = (uint16_t)(0x3a90u);
    // 1501:af7e  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ff90:
    if (c.tracing) c.traceAt(0x1ff90);
    // 1501:af80  mov al, byte ptr cs:[si]  [x7360]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:af83  stosb byte ptr es:[di], al  [x7360]
    c.stos<8, false>(0);
    // 1501:af84  add si, 4  [x7360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:af87  cmp si, 0xad8f  [x7360]
    c.sub<16>(c.si.x, 0xad8fu, true);
    // 1501:af8b  jb 0xaf80  [x7360]
    if (c.cf) goto L1ff90;
L1ff9d:
    if (c.tracing) c.traceAt(0x1ff9d);
    // 1501:af8d  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:af90  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:af93  out dx, ax  [x1]
    c.ip = 0xaf94u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:af94  mov si, 0x3a91  [x1]
    c.si.x = (uint16_t)(0x3a91u);
    // 1501:af97  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ffa9:
    if (c.tracing) c.traceAt(0x1ffa9);
    // 1501:af99  mov al, byte ptr cs:[si]  [x7360]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:af9c  stosb byte ptr es:[di], al  [x7360]
    c.stos<8, false>(0);
    // 1501:af9d  add si, 4  [x7360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:afa0  cmp si, 0xad8f  [x7360]
    c.sub<16>(c.si.x, 0xad8fu, true);
    // 1501:afa4  jb 0xaf99  [x7360]
    if (c.cf) goto L1ffa9;
L1ffb6:
    if (c.tracing) c.traceAt(0x1ffb6);
    // 1501:afa6  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:afa9  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:afac  out dx, ax  [x1]
    c.ip = 0xafadu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:afad  mov si, 0x3a92  [x1]
    c.si.x = (uint16_t)(0x3a92u);
    // 1501:afb0  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ffc2:
    if (c.tracing) c.traceAt(0x1ffc2);
    // 1501:afb2  mov al, byte ptr cs:[si]  [x7360]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:afb5  stosb byte ptr es:[di], al  [x7360]
    c.stos<8, false>(0);
    // 1501:afb6  add si, 4  [x7360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:afb9  cmp si, 0xad8f  [x7360]
    c.sub<16>(c.si.x, 0xad8fu, true);
    // 1501:afbd  jb 0xafb2  [x7360]
    if (c.cf) goto L1ffc2;
L1ffcf:
    if (c.tracing) c.traceAt(0x1ffcf);
    // 1501:afbf  mov word ptr [0xa5d3], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffa5d3u), 0x0u);
L1ffd5:
    if (c.tracing) c.traceAt(0x1ffd5);
    // 1501:afc5  call 0xb17e  [x272]
    c.push16(0xafc8u); code_3(c, 0x2018eu); if (c.ip != 0xafc8u) c.badReturn(0x1ffd5);
L1ffd8:
    if (c.tracing) c.traceAt(0x1ffd8);
    // 1501:afc8  cmp word ptr [0xa5d3], 0x20  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x20u, true);
    // 1501:afcd  ja 0xb005  [x272]
    if ((!c.cf && !c.zf)) goto L20015;
L1ffdf:
    if (c.tracing) c.traceAt(0x1ffdf);
    // 1501:afcf  mov bx, 0x20  [x33]
    c.b.x = (uint16_t)(0x20u);
    // 1501:afd2  sub bx, word ptr [0xa5d3]  [x33]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), false));
    // 1501:afd6  shl bl, 1  [x33]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), true));
    // 1501:afd8  mov dx, 0x3c8  [x33]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:afdb  mov al, 1  [x33]
    c.a.l = (uint8_t)(0x1u);
    // 1501:afdd  out dx, al  [x33]
    c.ip = 0xafdeu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:afde  inc dx  [x33]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:afdf  mov cx, 0x1f  [x33]
    c.c.x = (uint16_t)(0x1fu);
    // 1501:afe2  mov si, 0xa5d8  [x33]
    c.si.x = (uint16_t)(0xa5d8u);
L1fff5:
    if (c.tracing) c.traceAt(0x1fff5);
    // 1501:afe5  lodsb al, byte ptr [si]  [x1023]
    c.ip = 0xafe6u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:afe6  sub al, bl  [x1023]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, false));
    // 1501:afe8  cmp al, 0x11  [x1023]
    c.sub<8>(c.a.l, 0x11u, true);
    // 1501:afea  jge 0xafee  [x1023]
    if ((c.sf == c.of)) goto L1fffe;
L1fffc:
    if (c.tracing) c.traceAt(0x1fffc);
    // 1501:afec  mov al, 0x11  [x677]
    c.a.l = (uint8_t)(0x11u);
L1fffe:
    if (c.tracing) c.traceAt(0x1fffe);
    // 1501:afee  out dx, al  [x1023]
    c.ip = 0xafefu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:afef  lodsb al, byte ptr [si]  [x1023]
    c.ip = 0xaff0u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:aff0  sub al, bl  [x1023]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, false));
    // 1501:aff2  cmp al, 0  [x1023]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:aff4  jge 0xaff8  [x1023]
    if ((c.sf == c.of)) goto L20008;
L20006:
    if (c.tracing) c.traceAt(0x20006);
    // 1501:aff6  mov al, 0  [x515]
    c.a.l = (uint8_t)(0x0u);
L20008:
    if (c.tracing) c.traceAt(0x20008);
    // 1501:aff8  out dx, al  [x1023]
    c.ip = 0xaff9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:aff9  lodsb al, byte ptr [si]  [x1023]
    c.ip = 0xaffau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:affa  sub al, bl  [x1023]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, false));
    // 1501:affc  cmp al, 0x11  [x1023]
    c.sub<8>(c.a.l, 0x11u, true);
    // 1501:affe  jge 0xb002  [x1023]
    if ((c.sf == c.of)) goto L20012;
L20010:
    if (c.tracing) c.traceAt(0x20010);
    // 1501:b000  mov al, 0x11  [x593]
    c.a.l = (uint8_t)(0x11u);
L20012:
    if (c.tracing) c.traceAt(0x20012);
    // 1501:b002  out dx, al  [x1023]
    c.ip = 0xb003u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:b003  loop 0xafe5  [x1023]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1fff5;
L20015:
    if (c.tracing) c.traceAt(0x20015);
    // 1501:b005  call 0xb076  [x272]
    c.push16(0xb008u); code_3(c, 0x20086u); if (c.ip != 0xb008u) c.badReturn(0x20015);
L20018:
    if (c.tracing) c.traceAt(0x20018);
    // 1501:b008  mov si, word ptr [0xa5cf]  [x272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffa5cfu)));
    // 1501:b00c  mov ax, word ptr cs:[si + 8]  [x272]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)));
    // 1501:b011  cdq   [x272]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:b012  idiv word ptr [0xa5d1]  [x272]
    while (!c.idiv16(c.r16(c.dsb + (uint16_t)(0xffffa5d1u)))) { c.d32 = false; c.intr(0, 0xb012u); }   // #DE: int 0, then again
    // 1501:b016  add ax, 0x78  [x272]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x78u, false));
    // 1501:b019  mov word ptr [0xa5c5], ax  [x272]
    c.w16(c.dsb + (uint16_t)(0xa5c5u), c.a.x);
    // 1501:b01c  inc word ptr [0xa5d3]  [x272]
    c.w16(c.dsb + (uint16_t)(0xffffa5d3u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), false));
    // 1501:b020  cmp word ptr [0xa5d3], 0x28  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x28u, true);
    // 1501:b025  jae 0xb02c  [x272]
    if (!c.cf) goto L2003c;
L20037:
    if (c.tracing) c.traceAt(0x20037);
    // 1501:b027  add byte ptr [0xa5c0], 1  [x39]
    c.w8(c.dsb + (uint16_t)(0xffffa5c0u), c.add<8>(c.r8(c.dsb + (uint16_t)(0xffffa5c0u)), 0x1u, true));
L2003c:
    if (c.tracing) c.traceAt(0x2003c);
    // 1501:b02c  cmp word ptr [0xa5d3], 0x100  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x100u, true);
    // 1501:b032  jae 0xb047  [x272]
    if (!c.cf) goto L20057;
L20044:
    if (c.tracing) c.traceAt(0x20044);
    // 1501:b034  add word ptr [0xa5cf], 4  [x255]
    c.w16(c.dsb + (uint16_t)(0xffffa5cfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffa5cfu)), 0x4u, false));
    // 1501:b039  cmp word ptr [0xa5cf], 0x5a0  [x255]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5cfu)), 0x5a0u, true);
    // 1501:b03f  jb 0xb047  [x255]
    if (c.cf) goto L20057;
    c.notTranslated(0x20051, "fall-through");
L20057:
    if (c.tracing) c.traceAt(0x20057);
    // 1501:b047  cmp word ptr [0xa5d3], 0x70  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x70u, true);
    // 1501:b04c  jb 0xb05a  [x272]
    if (c.cf) goto L2006a;
L2005e:
    if (c.tracing) c.traceAt(0x2005e);
    // 1501:b04e  cmp word ptr [0xa5d3], 0x120  [x161]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x120u, true);
    // 1501:b054  jae 0xb05a  [x161]
    if (!c.cf) goto L2006a;
L20066:
    if (c.tracing) c.traceAt(0x20066);
    // 1501:b056  dec word ptr [0xa5d1]  [x161]
    c.w16(c.dsb + (uint16_t)(0xffffa5d1u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d1u)), true));
L2006a:
    if (c.tracing) c.traceAt(0x2006a);
    // 1501:b05a  cmp word ptr [0xa5d3], 0xb0  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0xb0u, true);
    // 1501:b060  jne 0xb068  [x272]
    if (!c.zf) goto L20078;
L20072:
    if (c.tracing) c.traceAt(0x20072);
    // 1501:b062  mov word ptr [0xa635], 0xb161  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffa635u), 0xb161u);
L20078:
    if (c.tracing) c.traceAt(0x20078);
    // 1501:b068  cmp word ptr [0xa5d3], 0x110  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5d3u)), 0x110u, true);
    // 1501:b06e  jae 0xb073  [x272]
    if (!c.cf) goto L20083;
L20080:
    if (c.tracing) c.traceAt(0x20080);
    // 1501:b070  jmp 0xafc5  [x271]
    goto L1ffd5;
L20083:
    if (c.tracing) c.traceAt(0x20083);
    // 1501:b073  jmp 0xb269  [x1]
    goto L20279;
L20086:
    if (c.tracing) c.traceAt(0x20086);
    // 1501:b076  mov dx, 0x3c4  [x272]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:b079  mov al, 2  [x272]
    c.a.l = (uint8_t)(0x2u);
    // 1501:b07b  out dx, al  [x272]
    c.ip = 0xb07cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:b07c  mov si, word ptr [0xa5c1]  [x272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffa5c1u)));
    // 1501:b080  mov di, word ptr [0xa5c3]  [x272]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffa5c3u)));
    // 1501:b084  mov word ptr cs:[0x3a89], 0  [x272]
    c.w16(c.csb + (uint16_t)(0x3a89u), 0x0u);
    // 1501:b08b  mov ax, 0x140  [x272]
    c.a.x = (uint16_t)(0x140u);
    // 1501:b08e  mov bl, byte ptr [0xa5c0]  [x272]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffffa5c0u)));
    // 1501:b092  xor bh, bh  [x272]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 1501:b094  mul bx  [x272]
    c.mul16(c.b.x);
    // 1501:b096  add ax, 0x710  [x272]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x710u, true));
    // 1501:b099  mov bx, ax  [x272]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:b09b  mov cx, 0x140  [x272]
    c.c.x = (uint16_t)(0x140u);
L200ae:
    if (c.tracing) c.traceAt(0x200ae);
    // 1501:b09e  cmp si, 0x140  [x87040]
    c.sub<16>(c.si.x, 0x140u, true);
    // 1501:b0a2  jb 0xb0a8  [x87040]
    if (c.cf) goto L200b8;
L200b4:
    if (c.tracing) c.traceAt(0x200b4);
    // 1501:b0a4  sub si, 0x140  [x271]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x140u, true));
L200b8:
    if (c.tracing) c.traceAt(0x200b8);
    // 1501:b0a8  cmp di, 0x140  [x87040]
    c.sub<16>(c.di.x, 0x140u, true);
    // 1501:b0ac  jb 0xb0b2  [x87040]
    if (c.cf) goto L200c2;
L200be:
    if (c.tracing) c.traceAt(0x200be);
    // 1501:b0ae  sub di, 0x140  [x812]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x140u, true));
L200c2:
    if (c.tracing) c.traceAt(0x200c2);
    // 1501:b0b2  mov al, byte ptr cs:[bx + si]  [x87040]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + c.si.x)));
    // 1501:b0b5  add al, byte ptr cs:[bx + di]  [x87040]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + c.di.x)), false));
    // 1501:b0b8  cwde   [x87040]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:b0b9  add ax, word ptr [0xa5c5]  [x87040]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffa5c5u)), true));
    // 1501:b0bd  mov word ptr cs:[0x3a8b], ax  [x87040]
    c.w16(c.csb + (uint16_t)(0x3a8bu), c.a.x);
    // 1501:b0c1  push bx  [x87040]
    c.push16(c.b.x);
    // 1501:b0c2  call 0xb123  [x87040]
    c.push16(0xb0c5u); code_3(c, 0x20133u); if (c.ip != 0xb0c5u) c.badReturn(0x200d2);
L200d5:
    if (c.tracing) c.traceAt(0x200d5);
    // 1501:b0c5  pop bx  [x87040]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:b0c6  inc word ptr cs:[0x3a89]  [x87040]
    c.w16(c.csb + (uint16_t)(0x3a89u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3a89u)), false));
    // 1501:b0cb  add si, word ptr [0xa5c7]  [x87040]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffffa5c7u)), false));
    // 1501:b0cf  add di, word ptr [0xa5cb]  [x87040]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffffa5cbu)), true));
    // 1501:b0d3  loop 0xb09e  [x87040]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L200ae;
L200e5:
    if (c.tracing) c.traceAt(0x200e5);
    // 1501:b0d5  mov ax, word ptr [0xa5c9]  [x272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa5c9u)));
    // 1501:b0d8  add word ptr [0xa5c1], ax  [x272]
    c.w16(c.dsb + (uint16_t)(0xffffa5c1u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c1u)), c.a.x, false));
    // 1501:b0dc  cmp word ptr [0xa5c1], 0x140  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c1u)), 0x140u, true);
    // 1501:b0e2  jb 0xb0ea  [x272]
    if (c.cf) goto L200fa;
L200f4:
    if (c.tracing) c.traceAt(0x200f4);
    // 1501:b0e4  sub word ptr [0xa5c1], 0x140  [x2]
    c.w16(c.dsb + (uint16_t)(0xffffa5c1u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c1u)), 0x140u, true));
L200fa:
    if (c.tracing) c.traceAt(0x200fa);
    // 1501:b0ea  mov ax, word ptr [0xa5cd]  [x272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa5cdu)));
    // 1501:b0ed  add word ptr [0xa5c3], ax  [x272]
    c.w16(c.dsb + (uint16_t)(0xffffa5c3u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c3u)), c.a.x, false));
    // 1501:b0f1  cmp word ptr [0xa5c3], 0x140  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c3u)), 0x140u, true);
    // 1501:b0f7  jb 0xb0ff  [x272]
    if (c.cf) goto L2010f;
L20109:
    if (c.tracing) c.traceAt(0x20109);
    // 1501:b0f9  sub word ptr [0xa5c3], 0x140  [x268]
    c.w16(c.dsb + (uint16_t)(0xffffa5c3u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffa5c3u)), 0x140u, true));
L2010f:
    if (c.tracing) c.traceAt(0x2010f);
    // 1501:b0ff  ret   [x272]
    c.ip = c.pop16(); return;
L20133:
    if (c.tracing) c.traceAt(0x20133);
    // 1501:b123  mov ax, 0x50  [x87040]
    c.a.x = (uint16_t)(0x50u);
    // 1501:b126  mul word ptr cs:[0x3a8b]  [x87040]
    c.mul16(c.r16(c.csb + (uint16_t)(0x3a8bu)));
    // 1501:b12b  mov bp, ax  [x87040]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:b12d  mov bx, word ptr cs:[0x3a89]  [x87040]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a89u)));
    // 1501:b132  mov dx, 0x3c5  [x87040]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:b135  mov al, byte ptr cs:[bx + 0x3910]  [x87040]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x3910u)));
    // 1501:b13a  out dx, al  [x87040]
    c.ip = 0xb13bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:b13b  shr bx, 2  [x87040]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x2u) & 31), false));
    // 1501:b13e  add bp, bx  [x87040]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.b.x, true));
    // 1501:b140  jmp word ptr [0xa635]  [x87040]
    t = c.csb + (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffa635u))); goto dispatch;
L20154:
    if (c.tracing) c.traceAt(0x20154);
    // 1501:b144  mov byte ptr es:[bp - 0x190], 0x21  [x56320]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xfffffe70u), 0x21u);
    // 1501:b14a  mov byte ptr es:[bp - 0x140], 0x21  [x56320]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xfffffec0u), 0x21u);
    // 1501:b150  mov byte ptr es:[bp - 0xf0], 0x21  [x56320]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xffffff10u), 0x21u);
    // 1501:b156  mov byte ptr es:[bp - 0xa0], 0x21  [x56320]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xffffff60u), 0x21u);
    // 1501:b15c  mov byte ptr es:[bp - 0x50], 0x21  [x56320]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xffffffb0u), 0x21u);
L20171:
    if (c.tracing) c.traceAt(0x20171);
    // 1501:b161  mov byte ptr es:[bp], 0x22  [x87040]
    c.w8(c.esb + (uint16_t)(c.bp.x), 0x22u);
    // 1501:b166  mov byte ptr es:[bp + 0x50], 0x22  [x87040]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0x50u), 0x22u);
    // 1501:b16b  mov byte ptr es:[bp + 0xa0], 0x22  [x87040]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xa0u), 0x22u);
    // 1501:b171  mov byte ptr es:[bp + 0xf0], 0x22  [x87040]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0xf0u), 0x22u);
    // 1501:b177  mov byte ptr es:[bp + 0x140], 0x22  [x87040]
    c.w8(c.esb + (uint16_t)(c.bp.x + 0x140u), 0x22u);
    // 1501:b17d  ret   [x87040]
    c.ip = c.pop16(); return;
L2018e:
    if (c.tracing) c.traceAt(0x2018e);
    // 1501:b17e  mov dx, 0x3da  [x512]
    c.dx_.x = (uint16_t)(0x3dau);
L20191:
    if (c.tracing) c.traceAt(0x20191);
    // 1501:b181  in al, dx  [x2029]
    c.ip = 0xb182u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L20192:
    if (c.tracing) c.traceAt(0x20192);
    // 1501:b182  and al, 8  [x2705]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:b184  jne 0xb181  [x2705]
    if (!c.zf) goto L20191;
L20196:
    if (c.tracing) c.traceAt(0x20196);
    // 1501:b186  mov dx, 0x3da  [x512]
    c.dx_.x = (uint16_t)(0x3dau);
L20199:
    if (c.tracing) c.traceAt(0x20199);
    // 1501:b189  in al, dx  [x25772]
    c.ip = 0xb18au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L2019a:
    if (c.tracing) c.traceAt(0x2019a);
    // 1501:b18a  and al, 8  [x34192]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:b18c  je 0xb189  [x34192]
    if (c.zf) goto L20199;
L2019e:
    if (c.tracing) c.traceAt(0x2019e);
    // 1501:b18e  ret   [x512]
    c.ip = c.pop16(); return;
L2019f:
    if (c.tracing) c.traceAt(0x2019f);
    // 1501:b18f  mov dx, 0x3c4  [x16]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:b192  mov al, 2  [x16]
    c.a.l = (uint8_t)(0x2u);
    // 1501:b194  out dx, al  [x16]
    c.ip = 0xb195u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:b195  mov si, 0  [x16]
    c.si.x = (uint16_t)(0x0u);
    // 1501:b198  mov ax, word ptr cs:[0x3a50]  [x16]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:b19c  shr ax, 1  [x16]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:b19e  add si, ax  [x16]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:b1a0  mov dx, 0x140  [x16]
    c.dx_.x = (uint16_t)(0x140u);
    // 1501:b1a3  mul dx  [x16]
    c.mul16(c.dx_.x);
    // 1501:b1a5  add si, ax  [x16]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, true));
    // 1501:b1a7  mov word ptr cs:[0x3a8b], 0  [x16]
    c.w16(c.csb + (uint16_t)(0x3a8bu), 0x0u);
L201be:
    if (c.tracing) c.traceAt(0x201be);
    // 1501:b1ae  push si  [x843]
    c.push16(c.si.x);
    // 1501:b1af  mov word ptr cs:[0x3a89], 0  [x843]
    c.w16(c.csb + (uint16_t)(0x3a89u), 0x0u);
    // 1501:b1b6  mov bp, si  [x843]
    c.bp.x = (uint16_t)(c.si.x);
    // 1501:b1b8  add bp, 0x140  [x843]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x140u, true));
L201cc:
    if (c.tracing) c.traceAt(0x201cc);
    // 1501:b1bc  mov al, byte ptr [si]  [x106686]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:b1be  mov byte ptr cs:[0x3a52], al  [x106686]
    c.w8(c.csb + (uint16_t)(0x3a52u), c.a.l);
    // 1501:b1c2  mov cx, word ptr cs:[0x3a50]  [x106686]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a50u)));
L201d7:
    if (c.tracing) c.traceAt(0x201d7);
    // 1501:b1c7  call 0xb1f1  [x271120]
    c.push16(0xb1cau); code_3(c, 0x20201u); if (c.ip != 0xb1cau) c.badReturn(0x201d7);
L201da:
    if (c.tracing) c.traceAt(0x201da);
    // 1501:b1ca  inc word ptr cs:[0x3a89]  [x271120]
    c.w16(c.csb + (uint16_t)(0x3a89u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3a89u)), true));
    // 1501:b1cf  loop 0xb1c7  [x271120]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L201d7;
L201e1:
    if (c.tracing) c.traceAt(0x201e1);
    // 1501:b1d1  add si, word ptr cs:[0x3a50]  [x106686]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x3a50u)), false));
    // 1501:b1d6  cmp si, bp  [x106686]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:b1d8  jb 0xb1bc  [x106686]
    if (c.cf) goto L201cc;
L201ea:
    if (c.tracing) c.traceAt(0x201ea);
    // 1501:b1da  pop si  [x843]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:b1db  inc word ptr cs:[0x3a8b]  [x843]
    c.w16(c.csb + (uint16_t)(0x3a8bu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3a8bu)), false));
    // 1501:b1e0  mov ax, 0x140  [x843]
    c.a.x = (uint16_t)(0x140u);
    // 1501:b1e3  mul word ptr cs:[0x3a50]  [x843]
    c.mul16(c.r16(c.csb + (uint16_t)(0x3a50u)));
    // 1501:b1e8  add si, ax  [x843]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:b1ea  cmp si, 0xfa00  [x843]
    c.sub<16>(c.si.x, 0xfa00u, true);
    // 1501:b1ee  jb 0xb1ae  [x843]
    if (c.cf) goto L201be;
L20200:
    if (c.tracing) c.traceAt(0x20200);
    // 1501:b1f0  ret   [x16]
    c.ip = c.pop16(); return;
L20201:
    if (c.tracing) c.traceAt(0x20201);
    // 1501:b1f1  mov ax, 0x50  [x271120]
    c.a.x = (uint16_t)(0x50u);
    // 1501:b1f4  mul word ptr cs:[0x3a8b]  [x271120]
    c.mul16(c.r16(c.csb + (uint16_t)(0x3a8bu)));
    // 1501:b1f9  mov di, ax  [x271120]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:b1fb  mov bx, word ptr cs:[0x3a89]  [x271120]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3a89u)));
    // 1501:b200  mov al, byte ptr cs:[bx + 0x3910]  [x271120]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x3910u)));
    // 1501:b205  mov dx, 0x3c5  [x271120]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:b208  out dx, al  [x271120]
    c.ip = 0xb209u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L20219:
    if (c.tracing) c.traceAt(0x20219);
    // 1501:b209  shr bx, 2  [x271121]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x2u) & 31), false));
    // 1501:b20c  add di, bx  [x271121]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:b20e  add di, word ptr cs:[0x3a53]  [x271121]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x3a53u)), true));
    // 1501:b213  mov al, byte ptr cs:[0x3a52]  [x271121]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3a52u)));
    // 1501:b217  mov byte ptr es:[di], al  [x271121]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:b21a  ret   [x271121]
    c.ip = c.pop16(); return;
L2022b:
    if (c.tracing) c.traceAt(0x2022b);
    // 1501:b21b  mov si, 0xa3c3  [x60]
    c.si.x = (uint16_t)(0xa3c3u);
    // 1501:b21e  mov cx, 0x1f  [x60]
    c.c.x = (uint16_t)(0x1fu);
L20231:
    if (c.tracing) c.traceAt(0x20231);
    // 1501:b221  mov al, byte ptr [0xa420]  [x1860]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xa420u)));
    // 1501:b224  cmp byte ptr [si], al  [x1860]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b226  je 0xb232  [x1860]
    if (c.zf) goto L20242;
L20238:
    if (c.tracing) c.traceAt(0x20238);
    // 1501:b228  cmp byte ptr [si], al  [x1172]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b22a  jns 0xb230  [x1172]
    if (!c.sf) goto L20240;
    c.notTranslated(0x2023c, "fall-through");
L20240:
    if (c.tracing) c.traceAt(0x20240);
    // 1501:b230  dec byte ptr [si]  [x1172]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), true));
L20242:
    if (c.tracing) c.traceAt(0x20242);
    // 1501:b232  inc si  [x1860]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:b233  mov al, byte ptr [0xa421]  [x1860]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xa421u)));
    // 1501:b236  cmp byte ptr [si], al  [x1860]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b238  je 0xb244  [x1860]
    if (c.zf) goto L20254;
L2024a:
    if (c.tracing) c.traceAt(0x2024a);
    // 1501:b23a  cmp byte ptr [si], al  [x700]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b23c  jns 0xb242  [x700]
    if (!c.sf) goto L20252;
L2024e:
    if (c.tracing) c.traceAt(0x2024e);
    // 1501:b23e  inc byte ptr [si]  [x12]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), true));
    // 1501:b240  jmp 0xb244  [x12]
    goto L20254;
L20252:
    if (c.tracing) c.traceAt(0x20252);
    // 1501:b242  dec byte ptr [si]  [x688]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), true));
L20254:
    if (c.tracing) c.traceAt(0x20254);
    // 1501:b244  inc si  [x1860]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:b245  mov al, byte ptr [0xa422]  [x1860]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xa422u)));
    // 1501:b248  cmp byte ptr [si], al  [x1860]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b24a  je 0xb256  [x1860]
    if (c.zf) goto L20266;
L2025c:
    if (c.tracing) c.traceAt(0x2025c);
    // 1501:b24c  cmp byte ptr [si], al  [x688]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), c.a.l, true);
    // 1501:b24e  jns 0xb254  [x688]
    if (!c.sf) goto L20264;
L20260:
    if (c.tracing) c.traceAt(0x20260);
    // 1501:b250  inc byte ptr [si]  [x20]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), true));
    // 1501:b252  jmp 0xb256  [x20]
    goto L20266;
L20264:
    if (c.tracing) c.traceAt(0x20264);
    // 1501:b254  dec byte ptr [si]  [x668]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), true));
L20266:
    if (c.tracing) c.traceAt(0x20266);
    // 1501:b256  inc si  [x1860]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:b257  loop 0xb221  [x1860]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L20231;
L20269:
    if (c.tracing) c.traceAt(0x20269);
    // 1501:b259  mov dx, 0x3c8  [x60]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:b25c  xor al, al  [x60]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:b25e  out dx, al  [x60]
    c.ip = 0xb25fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:b25f  inc dx  [x60]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:b260  mov si, 0xa3c0  [x60]
    c.si.x = (uint16_t)(0xa3c0u);
    // 1501:b263  mov cx, 0x60  [x60]
    c.c.x = (uint16_t)(0x60u);
L20276:
    if (c.tracing) c.traceAt(0x20276);
    // 1501:b266  rep outsb dx, byte ptr [si]  [x5820]
    c.ip = 0xb268u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L20278:
    if (c.tracing) c.traceAt(0x20278);
    // 1501:b268  ret   [x60]
    c.ip = c.pop16(); return;
L20279:
    if (c.tracing) c.traceAt(0x20279);
    // 1501:b269  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_3(3, {0x15010, 0x1fda3, 0x1fdb9, 0x1fdbb, 0x1fdd1, 0x1fdd7, 0x1fddc, 0x1fde1, 0x1fe03, 0x1fe05, 0x1fe0f, 0x1fe12, 0x1fe1f, 0x1fe21, 0x1fe2f, 0x1fe31, 0x1fe3a, 0x1fe3c, 0x1fe51, 0x1fe55, 0x1fe82, 0x1fe83, 0x1fe98, 0x1fe9b, 0x1fe9e, 0x1fea0, 0x1fea7, 0x1fec1, 0x1fec5, 0x1fedb, 0x1fee5, 0x1fee8, 0x1fef8, 0x1fefd, 0x1feff, 0x1ff02, 0x1ff13, 0x1ff15, 0x1ff18, 0x1ff1b, 0x1ff1d, 0x1ff29, 0x1ff2d, 0x1ff30, 0x1ff37, 0x1ff39, 0x1ff46, 0x1ff48, 0x1ff50, 0x1ff53, 0x1ff5d, 0x1ff68, 0x1ff6b, 0x1ff77, 0x1ff84, 0x1ff90, 0x1ff9d, 0x1ffa9, 0x1ffb6, 0x1ffc2, 0x1ffcf, 0x1ffd5, 0x1ffd8, 0x1ffdf, 0x1fff5, 0x1fffc, 0x1fffe, 0x20006, 0x20008, 0x20010, 0x20012, 0x20015, 0x20018, 0x20037, 0x2003c, 0x20044, 0x20057, 0x2005e, 0x20066, 0x2006a, 0x20072, 0x20078, 0x20080, 0x20083, 0x20086, 0x200ae, 0x200b4, 0x200b8, 0x200be, 0x200c2, 0x200d5, 0x200e5, 0x200f4, 0x200fa, 0x20109, 0x2010f, 0x20133, 0x20154, 0x20171, 0x2018e, 0x20191, 0x20192, 0x20196, 0x20199, 0x2019a, 0x2019e, 0x2019f, 0x201be, 0x201cc, 0x201d7, 0x201da, 0x201e1, 0x201ea, 0x20200, 0x20201, 0x20219, 0x2022b, 0x20231, 0x20238, 0x20240, 0x20242, 0x2024a, 0x2024e, 0x20252, 0x20254, 0x2025c, 0x20260, 0x20264, 0x20266, 0x20269, 0x20276, 0x20278, 0x20279}, code_3);

}  // namespace show
