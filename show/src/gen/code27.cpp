// Part 26 (CYC.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_27(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x16aa6: goto L16aa6;
    case 0x16abb: goto L16abb;
    case 0x16ae3: goto L16ae3;
    case 0x16ae6: goto L16ae6;
    case 0x16aed: goto L16aed;
    case 0x16aef: goto L16aef;
    case 0x16afa: goto L16afa;
    case 0x16b0f: goto L16b0f;
    case 0x16b12: goto L16b12;
    case 0x16b18: goto L16b18;
    case 0x16b1d: goto L16b1d;
    case 0x16b20: goto L16b20;
    case 0x16b23: goto L16b23;
    case 0x16b25: goto L16b25;
    case 0x16b38: goto L16b38;
    case 0x16b4d: goto L16b4d;
    case 0x16b53: goto L16b53;
    case 0x16b54: goto L16b54;
    case 0x16b58: goto L16b58;
    case 0x16b59: goto L16b59;
    case 0x16b5d: goto L16b5d;
    case 0x16b5f: goto L16b5f;
    case 0x16b62: goto L16b62;
    case 0x16b7a: goto L16b7a;
    case 0x16b80: goto L16b80;
    case 0x16b9b: goto L16b9b;
    case 0x16ba6: goto L16ba6;
    case 0x16ba7: goto L16ba7;
    case 0x16bab: goto L16bab;
    case 0x16bac: goto L16bac;
    case 0x16bb0: goto L16bb0;
    case 0x16bb3: goto L16bb3;
    case 0x16bc6: goto L16bc6;
    case 0x16bc8: goto L16bc8;
    case 0x16bcb: goto L16bcb;
    case 0x16bce: goto L16bce;
    case 0x16bda: goto L16bda;
    case 0x16bdf: goto L16bdf;
    case 0x16be7: goto L16be7;
    case 0x16bec: goto L16bec;
    case 0x16bf4: goto L16bf4;
    case 0x16bf7: goto L16bf7;
    case 0x16bff: goto L16bff;
    case 0x16c04: goto L16c04;
    case 0x16c0b: goto L16c0b;
    case 0x16c0e: goto L16c0e;
    case 0x16c15: goto L16c15;
    case 0x16c18: goto L16c18;
    case 0x16c1b: goto L16c1b;
    case 0x16c22: goto L16c22;
    case 0x16c36: goto L16c36;
    case 0x16c3b: goto L16c3b;
    case 0x16c4e: goto L16c4e;
    case 0x16c5a: goto L16c5a;
    case 0x16c70: goto L16c70;
    case 0x16c77: goto L16c77;
    case 0x16c8c: goto L16c8c;
    case 0x16c91: goto L16c91;
    case 0x16ca4: goto L16ca4;
    case 0x16cb0: goto L16cb0;
    case 0x16cc6: goto L16cc6;
    case 0x16ccd: goto L16ccd;
    case 0x16ce6: goto L16ce6;
    case 0x16ceb: goto L16ceb;
    case 0x16cfe: goto L16cfe;
    case 0x16d0a: goto L16d0a;
    case 0x16d20: goto L16d20;
    case 0x16d21: goto L16d21;
    case 0x16d30: goto L16d30;
    case 0x16d33: goto L16d33;
    case 0x16d3d: goto L16d3d;
    case 0x16d3e: goto L16d3e;
    case 0x16d59: goto L16d59;
    case 0x16d88: goto L16d88;
    case 0x16d89: goto L16d89;
    case 0x16dac: goto L16dac;
    case 0x16daf: goto L16daf;
    case 0x16dc4: goto L16dc4;
    case 0x16def: goto L16def;
    case 0x16dff: goto L16dff;
    case 0x16e01: goto L16e01;
    case 0x16e10: goto L16e10;
    case 0x16e1e: goto L16e1e;
    case 0x16e20: goto L16e20;
    case 0x16e26: goto L16e26;
    case 0x16e27: goto L16e27;
    case 0x16e2b: goto L16e2b;
    case 0x16e2c: goto L16e2c;
    case 0x16e30: goto L16e30;
    case 0x16e32: goto L16e32;
    case 0x16e38: goto L16e38;
    case 0x16e3a: goto L16e3a;
    case 0x16e44: goto L16e44;
    case 0x16e58: goto L16e58;
    case 0x16e5d: goto L16e5d;
    case 0x16e5f: goto L16e5f;
    case 0x16e6b: goto L16e6b;
    case 0x16e8b: goto L16e8b;
    case 0x16e90: goto L16e90;
    case 0x16e92: goto L16e92;
    case 0x16e93: goto L16e93;
    case 0x16e9b: goto L16e9b;
    case 0x16ea2: goto L16ea2;
    case 0x16ea9: goto L16ea9;
    case 0x16eb7: goto L16eb7;
    case 0x16ec3: goto L16ec3;
    case 0x16ec7: goto L16ec7;
    case 0x16ece: goto L16ece;
    case 0x16ed5: goto L16ed5;
    case 0x16ef6: goto L16ef6;
    case 0x16efb: goto L16efb;
    case 0x16f04: goto L16f04;
    case 0x16f07: goto L16f07;
    case 0x16f09: goto L16f09;
    case 0x16f0d: goto L16f0d;
    case 0x16f0f: goto L16f0f;
    case 0x16f15: goto L16f15;
    case 0x16f19: goto L16f19;
    case 0x16f1b: goto L16f1b;
    case 0x16f1f: goto L16f1f;
    case 0x16f22: goto L16f22;
    case 0x16f3c: goto L16f3c;
    case 0x16f43: goto L16f43;
    case 0x16f44: goto L16f44;
    case 0x16f4a: goto L16f4a;
    case 0x16f4b: goto L16f4b;
    case 0x16f4f: goto L16f4f;
    case 0x16f50: goto L16f50;
    case 0x16f54: goto L16f54;
    case 0x16f56: goto L16f56;
    case 0x16f69: goto L16f69;
    case 0x16f7a: goto L16f7a;
    case 0x16f7d: goto L16f7d;
    case 0x16f86: goto L16f86;
    case 0x16f87: goto L16f87;
    case 0x16f8b: goto L16f8b;
    case 0x16f8c: goto L16f8c;
    case 0x16f90: goto L16f90;
    case 0x16fa0: goto L16fa0;
    case 0x16fa2: goto L16fa2;
    case 0x16fb6: goto L16fb6;
    case 0x16fbe: goto L16fbe;
    case 0x16fc4: goto L16fc4;
    case 0x16fc8: goto L16fc8;
    case 0x16fd8: goto L16fd8;
    case 0x16fda: goto L16fda;
    case 0x16ff4: goto L16ff4;
    case 0x16fff: goto L16fff;
    case 0x1700b: goto L1700b;
    case 0x1700e: goto L1700e;
    case 0x17014: goto L17014;
    case 0x17017: goto L17017;
    case 0x17018: goto L17018;
    case 0x1701c: goto L1701c;
    case 0x1701d: goto L1701d;
    case 0x17021: goto L17021;
    case 0x17034: goto L17034;
    case 0x1703c: goto L1703c;
    case 0x1703e: goto L1703e;
    case 0x17046: goto L17046;
    case 0x17050: goto L17050;
    case 0x17053: goto L17053;
    case 0x1705b: goto L1705b;
    case 0x17081: goto L17081;
    case 0x1708c: goto L1708c;
    case 0x17098: goto L17098;
    case 0x1709b: goto L1709b;
    case 0x170ac: goto L170ac;
    case 0x170b7: goto L170b7;
    case 0x170d8: goto L170d8;
    case 0x170e3: goto L170e3;
    case 0x170ef: goto L170ef;
    case 0x170f2: goto L170f2;
    case 0x17103: goto L17103;
    case 0x1710e: goto L1710e;
    case 0x1712f: goto L1712f;
    case 0x1713a: goto L1713a;
    case 0x17146: goto L17146;
    case 0x17149: goto L17149;
    case 0x1715a: goto L1715a;
    case 0x17165: goto L17165;
    case 0x17186: goto L17186;
    case 0x17191: goto L17191;
    case 0x1719d: goto L1719d;
    case 0x171a0: goto L171a0;
    case 0x171b1: goto L171b1;
    case 0x171bc: goto L171bc;
    case 0x171cc: goto L171cc;
    case 0x171d3: goto L171d3;
    case 0x171e3: goto L171e3;
    case 0x171e8: goto L171e8;
    case 0x171eb: goto L171eb;
    case 0x17205: goto L17205;
    case 0x17212: goto L17212;
    case 0x17222: goto L17222;
    case 0x17227: goto L17227;
    case 0x17228: goto L17228;
    case 0x1722b: goto L1722b;
    case 0x1722e: goto L1722e;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x1a96  [x1]
    goto L16aa6;
L16aa6:
    if (c.tracing) c.traceAt(0x16aa6);
    // 1501:1a96  mov word ptr cs:[0x1a92], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x1a92u), c.c.x);
    // 1501:1a9b  mov word ptr cs:[0x1a94], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x1a94u), c.dx_.x);
    // 1501:1aa0  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 1501:1aa2  mov word ptr cs:[0x1a90], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1a90u), c.a.x);
    // 1501:1aa6  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:1aa9  int 0x10  [x1]
    c.ip = 0x1aabu; c.d32 = false; c.intr(0x10, 0x1aabu);
L16abb:
    if (c.tracing) c.traceAt(0x16abb);
    // 1501:1aab  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:1aae  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:1ab1  out dx, ax  [x1]
    c.ip = 0x1ab2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1ab2  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1ab5  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:1ab8  out dx, ax  [x1]
    c.ip = 0x1ab9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1ab9  mov ax, 0xe317  [x1]
    c.a.x = (uint16_t)(0xe317u);
    // 1501:1abc  out dx, ax  [x1]
    c.ip = 0x1abdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1abd  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:1ac0  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1ac2  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1ac5  mov ax, 9  [x1]
    c.a.x = (uint16_t)(0x9u);
    // 1501:1ac8  out dx, ax  [x1]
    c.ip = 0x1ac9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1ac9  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1acc  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:1ace  out dx, al  [x1]
    c.ip = 0x1acfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1acf  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1ad0  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L16ae3:
    if (c.tracing) c.traceAt(0x16ae3);
    // 1501:1ad3  out dx, al  [x768]
    c.ip = 0x1ad4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1ad4  loop 0x1ad3  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16ae3;
L16ae6:
    if (c.tracing) c.traceAt(0x16ae6);
    // 1501:1ad6  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:1ad8  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:1ada  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L16aed:
    if (c.tracing) c.traceAt(0x16aed);
    // 1501:1add  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L16aef:
    if (c.tracing) c.traceAt(0x16aef);
    // 1501:1adf  mov word ptr cs:[0x178e], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x178eu), 0x0u);
    // 1501:1ae6  push cs  [x1]
    c.push16(c.cs);
    // 1501:1ae7  call 0x1e83  [x1]
    c.push16(0x1aeau); code_27(c, 0x16e93u); if (c.ip != 0x1aeau) c.badReturn(0x16af7);
L16afa:
    if (c.tracing) c.traceAt(0x16afa);
    // 1501:1aea  push es  [x2]
    c.ip = 0x1aeau; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:1aeb  mov ax, word ptr cs:[0x1a92]  [x2]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1a92u)));
    // 1501:1aef  mov es, ax  [x2]
    c.loadEs(c.a.x);
    // 1501:1af1  mov si, word ptr cs:[0x1a94]  [x2]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1a94u)));
    // 1501:1af6  mov dx, word ptr es:[si]  [x2]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:1af9  pop es  [x2]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1afa  cmp dx, 0  [x2]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:1afd  je 0x1aea  [x2]
    if (c.zf) goto L16afa;
L16b0f:
    if (c.tracing) c.traceAt(0x16b0f);
    // 1501:1aff  call 0x1f34  [x1]
    c.push16(0x1b02u); code_27(c, 0x16f44u); if (c.ip != 0x1b02u) c.badReturn(0x16b0f);
L16b12:
    if (c.tracing) c.traceAt(0x16b12);
    // 1501:1b02  mov si, 0xc01  [x1]
    c.si.x = (uint16_t)(0xc01u);
    // 1501:1b05  mov cx, 0xc800  [x1]
    c.c.x = (uint16_t)(0xc800u);
L16b18:
    if (c.tracing) c.traceAt(0x16b18);
    // 1501:1b08  cmp byte ptr [si], 0  [x51200]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x0u, true);
    // 1501:1b0b  jne 0x1b10  [x51200]
    if (!c.zf) goto L16b20;
L16b1d:
    if (c.tracing) c.traceAt(0x16b1d);
    // 1501:1b0d  mov byte ptr [si], 1  [x172]
    c.w8(c.dsb + (uint16_t)(c.si.x), 0x1u);
L16b20:
    if (c.tracing) c.traceAt(0x16b20);
    // 1501:1b10  inc si  [x51200]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:1b11  loop 0x1b08  [x51200]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16b18;
L16b23:
    if (c.tracing) c.traceAt(0x16b23);
    // 1501:1b13  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L16b25:
    if (c.tracing) c.traceAt(0x16b25);
    // 1501:1b15  mov al, byte ptr [si]  [x1536]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b19  mov byte ptr [si + 0x600], al  [x1536]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x600u), c.a.l);
    // 1501:1b1d  shr byte ptr [si], 1  [x1536]
    c.w8(c.dsb + (uint16_t)(c.si.x), c.shr<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), (int)((0x1u) & 31), false));
    // 1501:1b21  inc si  [x1536]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1b22  cmp si, 0x600  [x1536]
    c.sub<16>(c.si.x, 0x600u, true);
    // 1501:1b26  jb 0x1b15  [x1536]
    if (c.cf) goto L16b25;
L16b38:
    if (c.tracing) c.traceAt(0x16b38);
    // 1501:1b28  push es  [x42]
    c.ip = 0x1b28u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:1b29  mov ax, word ptr cs:[0x1a92]  [x42]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1a92u)));
    // 1501:1b2d  mov es, ax  [x42]
    c.loadEs(c.a.x);
    // 1501:1b2f  mov si, word ptr cs:[0x1a94]  [x42]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1a94u)));
    // 1501:1b34  mov dx, word ptr es:[si]  [x42]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:1b37  pop es  [x42]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1b38  cmp dx, 0  [x42]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:1b3b  je 0x1b28  [x42]
    if (c.zf) goto L16b38;
L16b4d:
    if (c.tracing) c.traceAt(0x16b4d);
    // 1501:1b3d  mov cx, 0x25  [x1]
    c.c.x = (uint16_t)(0x25u);
    // 1501:1b40  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L16b53:
    if (c.tracing) c.traceAt(0x16b53);
    // 1501:1b43  in al, dx  [x112]
    c.ip = 0x1b44u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16b54:
    if (c.tracing) c.traceAt(0x16b54);
    // 1501:1b44  test al, 8  [x149]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1b46  jne 0x1b43  [x149]
    if (!c.zf) goto L16b53;
L16b58:
    if (c.tracing) c.traceAt(0x16b58);
    // 1501:1b48  in al, dx  [x1708]
    c.ip = 0x1b49u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16b59:
    if (c.tracing) c.traceAt(0x16b59);
    // 1501:1b49  test al, 8  [x2265]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1b4b  je 0x1b48  [x2265]
    if (c.zf) goto L16b58;
L16b5d:
    if (c.tracing) c.traceAt(0x16b5d);
    // 1501:1b4d  loop 0x1b43  [x37]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16b53;
L16b5f:
    if (c.tracing) c.traceAt(0x16b5f);
    // 1501:1b4f  call 0x1d49  [x1]
    c.push16(0x1b52u); code_27(c, 0x16d59u); if (c.ip != 0x1b52u) c.badReturn(0x16b5f);
L16b62:
    if (c.tracing) c.traceAt(0x16b62);
    // 1501:1b52  mov si, word ptr [0xd401]  [x1184]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd401u)));
    // 1501:1b56  mov cx, word ptr [si - 0x2bfd]  [x1184]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffd403u)));
    // 1501:1b5a  add cx, 0x15e0  [x1184]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x15e0u, false));
    // 1501:1b5e  add word ptr [0xd401], 2  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffd401u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd401u)), 0x2u, false));
    // 1501:1b63  cmp word ptr [0xd401], 4  [x1184]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffd401u)), 0x4u, true);
    // 1501:1b68  jb 0x1b70  [x1184]
    if (c.cf) goto L16b80;
L16b7a:
    if (c.tracing) c.traceAt(0x16b7a);
    // 1501:1b6a  mov word ptr [0xd401], 0  [x592]
    c.w16(c.dsb + (uint16_t)(0xffffd401u), 0x0u);
L16b80:
    if (c.tracing) c.traceAt(0x16b80);
    // 1501:1b70  mov es, bx  [x1184]
    c.loadEs(c.b.x);
    // 1501:1b72  mov dx, 0x3d4  [x1184]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1b75  mov al, 0xc  [x1184]
    c.a.l = (uint8_t)(0xcu);
    // 1501:1b77  mov ah, ch  [x1184]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:1b79  out dx, ax  [x1184]
    c.ip = 0x1b7au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1b7a  mov al, 0xd  [x1184]
    c.a.l = (uint8_t)(0xdu);
    // 1501:1b7c  mov ah, cl  [x1184]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:1b7e  out dx, ax  [x1184]
    c.ip = 0x1b7fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1b7f  inc word ptr [0xec30]  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec30u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffec30u)), false));
    // 1501:1b83  and word ptr [0xec30], 1  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec30u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffec30u))) & (0x1u), true));
    // 1501:1b88  mov dx, 0x3da  [x1184]
    c.dx_.x = (uint16_t)(0x3dau);
L16b9b:
    if (c.tracing) c.traceAt(0x16b9b);
    // 1501:1b8b  cmp byte ptr cs:[0x1d9e], 0  [x3552]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x1d9eu)), 0x0u, true);
    // 1501:1b91  je 0x1b96  [x3552]
    if (c.zf) goto L16ba6;
    c.notTranslated(0x16ba3, "fall-through");
L16ba6:
    if (c.tracing) c.traceAt(0x16ba6);
    // 1501:1b96  in al, dx  [x3552]
    c.ip = 0x1b97u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16ba7:
    if (c.tracing) c.traceAt(0x16ba7);
    // 1501:1b97  test al, 8  [x4736]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1b99  jne 0x1b8b  [x4736]
    if (!c.zf) goto L16b9b;
L16bab:
    if (c.tracing) c.traceAt(0x16bab);
    // 1501:1b9b  in al, dx  [x22481]
    c.ip = 0x1b9cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16bac:
    if (c.tracing) c.traceAt(0x16bac);
    // 1501:1b9c  test al, 8  [x28397]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1b9e  je 0x1b9b  [x28397]
    if (c.zf) goto L16bab;
L16bb0:
    if (c.tracing) c.traceAt(0x16bb0);
    // 1501:1ba0  call 0x1d11  [x1184]
    c.push16(0x1ba3u); code_27(c, 0x16d21u); if (c.ip != 0x1ba3u) c.badReturn(0x16bb0);
L16bb3:
    if (c.tracing) c.traceAt(0x16bb3);
    // 1501:1ba3  mov dx, 0x3c8  [x1184]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1ba6  xor al, al  [x1184]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:1ba8  mov al, 1  [x1184]
    c.a.l = (uint8_t)(0x1u);
    // 1501:1baa  out dx, al  [x1184]
    c.ip = 0x1babu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1bab  inc dx  [x1184]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:1bac  mov si, 0xd416  [x1184]
    c.si.x = (uint16_t)(0xd416u);
    // 1501:1baf  add si, word ptr [0xec32]  [x1184]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffffec32u)), true));
    // 1501:1bb3  mov cx, 0x2fd  [x1184]
    c.c.x = (uint16_t)(0x2fdu);
L16bc6:
    if (c.tracing) c.traceAt(0x16bc6);
    // 1501:1bb6  rep outsb dx, byte ptr [si]  [x906944]
    c.ip = 0x1bb8u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16bc8:
    if (c.tracing) c.traceAt(0x16bc8);
    // 1501:1bb8  call 0x1e5b  [x1184]
    c.push16(0x1bbbu); code_27(c, 0x16e6bu); if (c.ip != 0x1bbbu) c.badReturn(0x16bc8);
L16bcb:
    if (c.tracing) c.traceAt(0x16bcb);
    // 1501:1bbb  call 0x1c0b  [x1184]
    c.push16(0x1bbeu); code_27(c, 0x16c1bu); if (c.ip != 0x1bbeu) c.badReturn(0x16bcb);
L16bce:
    if (c.tracing) c.traceAt(0x16bce);
    // 1501:1bbe  inc word ptr [0xec2d]  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec2du), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffec2du)), false));
    // 1501:1bc2  cmp word ptr [0xec2d], 0x12b  [x1184]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec2du)), 0x12bu, true);
    // 1501:1bc8  jne 0x1bcf  [x1184]
    if (!c.zf) goto L16bdf;
L16bda:
    if (c.tracing) c.traceAt(0x16bda);
    // 1501:1bca  or byte ptr [0xc00], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xc00u), c.logic<8>((c.r8(c.dsb + (uint16_t)(0xc00u))) | (0x1u), true));
L16bdf:
    if (c.tracing) c.traceAt(0x16bdf);
    // 1501:1bcf  cmp word ptr [0xec2d], 0x238  [x1184]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec2du)), 0x238u, true);
    // 1501:1bd5  jne 0x1bdc  [x1184]
    if (!c.zf) goto L16bec;
L16be7:
    if (c.tracing) c.traceAt(0x16be7);
    // 1501:1bd7  or byte ptr [0xc00], 2  [x1]
    c.w8(c.dsb + (uint16_t)(0xc00u), c.logic<8>((c.r8(c.dsb + (uint16_t)(0xc00u))) | (0x2u), true));
L16bec:
    if (c.tracing) c.traceAt(0x16bec);
    // 1501:1bdc  cmp word ptr [0xec2d], 0x4a0  [x1184]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec2du)), 0x4a0u, true);
    // 1501:1be2  jne 0x1be7  [x1184]
    if (!c.zf) goto L16bf7;
L16bf4:
    if (c.tracing) c.traceAt(0x16bf4);
    // 1501:1be4  jmp 0x2218  [x1]
    goto L17228;
L16bf7:
    if (c.tracing) c.traceAt(0x16bf7);
    // 1501:1be7  cmp word ptr [0xec2d], 0x400  [x1183]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec2du)), 0x400u, true);
    // 1501:1bed  jne 0x1bf4  [x1183]
    if (!c.zf) goto L16c04;
L16bff:
    if (c.tracing) c.traceAt(0x16bff);
    // 1501:1bef  mov byte ptr [0xec2c], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffec2cu), 0x0u);
L16c04:
    if (c.tracing) c.traceAt(0x16c04);
    // 1501:1bf4  cmp byte ptr [0xec2b], 0  [x1183]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffec2bu)), 0x0u, true);
    // 1501:1bf9  jne 0x1bfe  [x1183]
    if (!c.zf) goto L16c0e;
L16c0b:
    if (c.tracing) c.traceAt(0x16c0b);
    // 1501:1bfb  call 0x204b  [x158]
    c.push16(0x1bfeu); code_27(c, 0x1705bu); if (c.ip != 0x1bfeu) c.badReturn(0x16c0b);
L16c0e:
    if (c.tracing) c.traceAt(0x16c0e);
    // 1501:1bfe  cmp byte ptr [0xec2c], 0  [x1183]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffec2cu)), 0x0u, true);
    // 1501:1c03  jne 0x1c08  [x1183]
    if (!c.zf) goto L16c18;
L16c15:
    if (c.tracing) c.traceAt(0x16c15);
    // 1501:1c05  call 0x21db  [x158]
    c.push16(0x1c08u); code_27(c, 0x171ebu); if (c.ip != 0x1c08u) c.badReturn(0x16c15);
L16c18:
    if (c.tracing) c.traceAt(0x16c18);
    // 1501:1c08  jmp 0x1b52  [x1183]
    goto L16b62;
L16c1b:
    if (c.tracing) c.traceAt(0x16c1b);
    // 1501:1c0b  test byte ptr [0xc00], 1  [x1184]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(0xc00u))) & (0x1u), true);
    // 1501:1c10  je 0x1c60  [x1184]
    if (c.zf) goto L16c70;
L16c22:
    if (c.tracing) c.traceAt(0x16c22);
    // 1501:1c12  xor di, di  [x885]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:1c14  add di, word ptr [0xec34]  [x885]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffffec34u)), false));
    // 1501:1c18  mov dx, di  [x885]
    c.dx_.x = (uint16_t)(c.di.x);
    // 1501:1c1a  add dx, 0xc00  [x885]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0xc00u, true));
    // 1501:1c1e  mov bx, word ptr [0xd407]  [x885]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd407u)));
    // 1501:1c22  mov si, word ptr [0xd409]  [x885]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd409u)));
L16c36:
    if (c.tracing) c.traceAt(0x16c36);
    // 1501:1c26  push bx  [x28320]
    c.push16(c.b.x);
    // 1501:1c27  push si  [x28320]
    c.push16(c.si.x);
    // 1501:1c28  mov cx, 0x20  [x28320]
    c.c.x = (uint16_t)(0x20u);
L16c3b:
    if (c.tracing) c.traceAt(0x16c3b);
    // 1501:1c2b  mov al, byte ptr [bx]  [x906240]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1c2d  add al, byte ptr [si]  [x906240]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x)), false));
    // 1501:1c2f  mov byte ptr [di - 0x2bed], al  [x906240]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0xffffd413u), c.a.l);
    // 1501:1c33  add di, 3  [x906240]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 1501:1c36  add bx, 4  [x906240]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, false));
    // 1501:1c39  add si, 3  [x906240]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:1c3c  loop 0x1c2b  [x906240]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16c3b;
L16c4e:
    if (c.tracing) c.traceAt(0x16c4e);
    // 1501:1c3e  pop si  [x28320]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1c3f  pop bx  [x28320]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1c40  add bx, 2  [x28320]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:1c43  add si, 5  [x28320]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x5u, false));
    // 1501:1c46  cmp di, dx  [x28320]
    c.sub<16>(c.di.x, c.dx_.x, true);
    // 1501:1c48  jb 0x1c26  [x28320]
    if (c.cf) goto L16c36;
L16c5a:
    if (c.tracing) c.traceAt(0x16c5a);
    // 1501:1c4a  add word ptr [0xd407], -5  [x885]
    c.w16(c.dsb + (uint16_t)(0xffffd407u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd407u)), 0xfffbu, false));
    // 1501:1c4f  and word ptr [0xd407], 0x1ff  [x885]
    c.w16(c.dsb + (uint16_t)(0xffffd407u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd407u))) & (0x1ffu), false));
    // 1501:1c55  add word ptr [0xd409], 4  [x885]
    c.w16(c.dsb + (uint16_t)(0xffffd409u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd409u)), 0x4u, false));
    // 1501:1c5a  and word ptr [0xd409], 0x1ff  [x885]
    c.w16(c.dsb + (uint16_t)(0xffffd409u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd409u))) & (0x1ffu), true));
L16c70:
    if (c.tracing) c.traceAt(0x16c70);
    // 1501:1c60  test byte ptr [0xc00], 2  [x1184]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(0xc00u))) & (0x2u), true);
    // 1501:1c65  je 0x1cb6  [x1184]
    if (c.zf) goto L16cc6;
L16c77:
    if (c.tracing) c.traceAt(0x16c77);
    // 1501:1c67  mov di, 1  [x616]
    c.di.x = (uint16_t)(0x1u);
    // 1501:1c6a  add di, word ptr [0xec34]  [x616]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffffec34u)), false));
    // 1501:1c6e  mov dx, di  [x616]
    c.dx_.x = (uint16_t)(c.di.x);
    // 1501:1c70  add dx, 0xc00  [x616]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0xc00u, true));
    // 1501:1c74  mov bx, word ptr [0xd40b]  [x616]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd40bu)));
    // 1501:1c78  mov si, word ptr [0xd40d]  [x616]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd40du)));
L16c8c:
    if (c.tracing) c.traceAt(0x16c8c);
    // 1501:1c7c  push bx  [x19712]
    c.push16(c.b.x);
    // 1501:1c7d  push si  [x19712]
    c.push16(c.si.x);
    // 1501:1c7e  mov cx, 0x20  [x19712]
    c.c.x = (uint16_t)(0x20u);
L16c91:
    if (c.tracing) c.traceAt(0x16c91);
    // 1501:1c81  mov al, byte ptr [bx]  [x630784]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1c83  add al, byte ptr [si]  [x630784]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x)), false));
    // 1501:1c85  mov byte ptr [di - 0x2bed], al  [x630784]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0xffffd413u), c.a.l);
    // 1501:1c89  add di, 3  [x630784]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 1501:1c8c  add bx, 5  [x630784]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x5u, false));
    // 1501:1c8f  add si, 4  [x630784]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:1c92  loop 0x1c81  [x630784]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16c91;
L16ca4:
    if (c.tracing) c.traceAt(0x16ca4);
    // 1501:1c94  pop si  [x19712]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1c95  pop bx  [x19712]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1c96  add bx, 3  [x19712]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x3u, false));
    // 1501:1c99  add si, 5  [x19712]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x5u, false));
    // 1501:1c9c  cmp di, dx  [x19712]
    c.sub<16>(c.di.x, c.dx_.x, true);
    // 1501:1c9e  jb 0x1c7c  [x19712]
    if (c.cf) goto L16c8c;
L16cb0:
    if (c.tracing) c.traceAt(0x16cb0);
    // 1501:1ca0  add word ptr [0xd40b], 3  [x616]
    c.w16(c.dsb + (uint16_t)(0xffffd40bu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd40bu)), 0x3u, false));
    // 1501:1ca5  and word ptr [0xd40b], 0x1ff  [x616]
    c.w16(c.dsb + (uint16_t)(0xffffd40bu), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd40bu))) & (0x1ffu), false));
    // 1501:1cab  add word ptr [0xd40d], -7  [x616]
    c.w16(c.dsb + (uint16_t)(0xffffd40du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd40du)), 0xfff9u, false));
    // 1501:1cb0  and word ptr [0xd40d], 0x1ff  [x616]
    c.w16(c.dsb + (uint16_t)(0xffffd40du), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd40du))) & (0x1ffu), true));
L16cc6:
    if (c.tracing) c.traceAt(0x16cc6);
    // 1501:1cb6  test byte ptr [0xc00], 4  [x1184]
    c.logic<8>((c.r8(c.dsb + (uint16_t)(0xc00u))) & (0x4u), true);
    // 1501:1cbb  je 0x1d10  [x1184]
    if (c.zf) goto L16d20;
L16ccd:
    if (c.tracing) c.traceAt(0x16ccd);
    // 1501:1cbd  mov di, 2  [x1184]
    c.di.x = (uint16_t)(0x2u);
    // 1501:1cc0  add di, word ptr [0xec34]  [x1184]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffffec34u)), false));
    // 1501:1cc4  mov dx, di  [x1184]
    c.dx_.x = (uint16_t)(c.di.x);
    // 1501:1cc6  add dx, 0xc00  [x1184]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0xc00u, false));
    // 1501:1cca  mov bx, word ptr [0xd40f]  [x1184]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd40fu)));
    // 1501:1cce  mov si, word ptr [0xd411]  [x1184]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffd411u)));
    // 1501:1cd2  add si, 0x200  [x1184]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x200u, true));
L16ce6:
    if (c.tracing) c.traceAt(0x16ce6);
    // 1501:1cd6  push bx  [x37888]
    c.push16(c.b.x);
    // 1501:1cd7  push si  [x37888]
    c.push16(c.si.x);
    // 1501:1cd8  mov cx, 0x20  [x37888]
    c.c.x = (uint16_t)(0x20u);
L16ceb:
    if (c.tracing) c.traceAt(0x16ceb);
    // 1501:1cdb  mov al, byte ptr [bx]  [x1212416]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 1501:1cdd  add al, byte ptr [si]  [x1212416]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x)), false));
    // 1501:1cdf  mov byte ptr [di - 0x2bed], al  [x1212416]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0xffffd413u), c.a.l);
    // 1501:1ce3  add di, 3  [x1212416]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 1501:1ce6  add bx, 9  [x1212416]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x9u, false));
    // 1501:1ce9  add si, 7  [x1212416]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x7u, true));
    // 1501:1cec  loop 0x1cdb  [x1212416]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16ceb;
L16cfe:
    if (c.tracing) c.traceAt(0x16cfe);
    // 1501:1cee  pop si  [x37888]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:1cef  pop bx  [x37888]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1cf0  add bx, 9  [x37888]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x9u, false));
    // 1501:1cf3  add si, -4  [x37888]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xfffcu, false));
    // 1501:1cf6  cmp di, dx  [x37888]
    c.sub<16>(c.di.x, c.dx_.x, true);
    // 1501:1cf8  jb 0x1cd6  [x37888]
    if (c.cf) goto L16ce6;
L16d0a:
    if (c.tracing) c.traceAt(0x16d0a);
    // 1501:1cfa  add word ptr [0xd40f], 8  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffd40fu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd40fu)), 0x8u, false));
    // 1501:1cff  and word ptr [0xd40f], 0x1ff  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffd40fu), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd40fu))) & (0x1ffu), false));
    // 1501:1d05  add word ptr [0xd411], 5  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffd411u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffd411u)), 0x5u, false));
    // 1501:1d0a  and word ptr [0xd411], 0x1ff  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffd411u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0xffffd411u))) & (0x1ffu), true));
L16d20:
    if (c.tracing) c.traceAt(0x16d20);
    // 1501:1d10  ret   [x1184]
    c.ip = c.pop16(); return;
L16d21:
    if (c.tracing) c.traceAt(0x16d21);
    // 1501:1d11  cli   [x1184]
    c.m.cli();
    // 1501:1d12  mov al, 0x34  [x1184]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d14  out 0x43, al  [x1184]
    c.ip = 0x1d16u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d16  mov ax, word ptr [0xec13]  [x1184]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec13u)));
    // 1501:1d19  out 0x40, al  [x1184]
    c.ip = 0x1d1bu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d1b  mov al, ah  [x1184]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d1d  out 0x40, al  [x1184]
    c.ip = 0x1d1fu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d1f  sti   [x1184]
    c.ip = 0x1d20u; c.d32 = false; c.m.sti();
L16d30:
    if (c.tracing) c.traceAt(0x16d30);
    // 1501:1d20  mov ax, 0  [x1184]
    c.a.x = (uint16_t)(0x0u);
L16d33:
    if (c.tracing) c.traceAt(0x16d33);
    // 1501:1d23  mov bx, 0xc00  [x1184]
    c.b.x = (uint16_t)(0xc00u);
    // 1501:1d26  cmp word ptr [0xec30], 0  [x1184]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec30u)), 0x0u, true);
    // 1501:1d2b  je 0x1d2e  [x1184]
    if (c.zf) goto L16d3e;
L16d3d:
    if (c.tracing) c.traceAt(0x16d3d);
    // 1501:1d2d  xchg bx, ax  [x592]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
L16d3e:
    if (c.tracing) c.traceAt(0x16d3e);
    // 1501:1d2e  mov word ptr [0xec32], ax  [x1184]
    c.w16(c.dsb + (uint16_t)(0xec32u), c.a.x);
    // 1501:1d31  mov word ptr [0xec34], bx  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec34u), c.b.x);
    // 1501:1d35  mov word ptr [0xec1f], 2  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec1fu), 0x2u);
    // 1501:1d3b  mov word ptr [0xec1d], 0xd716  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec1du), 0xd716u);
    // 1501:1d41  mov ax, word ptr [0xec32]  [x1184]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec32u)));
    // 1501:1d44  add word ptr [0xec1d], ax  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec1du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec1du)), c.a.x, true));
    // 1501:1d48  ret   [x1184]
    c.ip = c.pop16(); return;
L16d59:
    if (c.tracing) c.traceAt(0x16d59);
    // 1501:1d49  cli   [x1]
    c.m.cli();
    // 1501:1d4a  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d4c  out 0x43, al  [x1]
    c.ip = 0x1d4eu; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d4e  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:1d51  out 0x40, al  [x1]
    c.ip = 0x1d53u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d53  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d55  out 0x40, al  [x1]
    c.ip = 0x1d57u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d57  push es  [x1]
    c.push16(c.es);
    // 1501:1d58  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:1d5a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1d5c  mov ax, word ptr es:[0x20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 1501:1d60  mov word ptr [0xec27], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xec27u), c.a.x);
    // 1501:1d63  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 1501:1d67  mov word ptr [0xec29], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xec29u), c.a.x);
    // 1501:1d6a  mov ax, 0x1d9f  [x1]
    c.a.x = (uint16_t)(0x1d9fu);
    // 1501:1d6d  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:1d71  mov word ptr es:[0x22], cs  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.cs);
    // 1501:1d76  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1d77  sti   [x1]
    c.ip = 0x1d78u; c.d32 = false; c.m.sti();
L16d88:
    if (c.tracing) c.traceAt(0x16d88);
    // 1501:1d78  ret   [x1]
    c.ip = c.pop16(); return;
L16d89:
    if (c.tracing) c.traceAt(0x16d89);
    // 1501:1d79  cli   [x1]
    c.m.cli();
    // 1501:1d7a  push es  [x1]
    c.push16(c.es);
    // 1501:1d7b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:1d7d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1d7f  mov ax, word ptr [0xec27]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec27u)));
    // 1501:1d82  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:1d86  mov ax, word ptr [0xec29]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec29u)));
    // 1501:1d89  mov word ptr es:[0x22], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.a.x);
    // 1501:1d8d  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1d8e  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1d90  out 0x43, al  [x1]
    c.ip = 0x1d92u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1d92  mov ax, 0x4a9  [x1]
    c.a.x = (uint16_t)(0x4a9u);
    // 1501:1d95  out 0x40, al  [x1]
    c.ip = 0x1d97u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d97  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1d99  out 0x40, al  [x1]
    c.ip = 0x1d9bu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1d9b  sti   [x1]
    c.ip = 0x1d9cu; c.d32 = false; c.m.sti();
L16dac:
    if (c.tracing) c.traceAt(0x16dac);
    // 1501:1d9c  ret   [x1]
    c.ip = c.pop16(); return;
L16daf:
    if (c.tracing) c.traceAt(0x16daf);
    // 1501:1d9f  cmp byte ptr cs:[0x1d9d], 0  [x4732]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x1d9du)), 0x0u, true);
    // 1501:1da5  je 0x1db4  [x4732]
    if (c.zf) goto L16dc4;
    c.notTranslated(0x16db7, "fall-through");
L16dc4:
    if (c.tracing) c.traceAt(0x16dc4);
    // 1501:1db4  pushaw   [x4732]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:1db5  mov byte ptr cs:[0x1d9d], 0xff  [x4732]
    c.w8(c.csb + (uint16_t)(0x1d9du), 0xffu);
    // 1501:1dbb  mov si, word ptr [0xec1f]  [x4732]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffec1fu)));
    // 1501:1dbf  add word ptr [0xec1f], 2  [x4732]
    c.w16(c.dsb + (uint16_t)(0xffffec1fu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec1fu)), 0x2u, false));
    // 1501:1dc4  mov al, 0x34  [x4732]
    c.a.l = (uint8_t)(0x34u);
    // 1501:1dc6  out 0x43, al  [x4732]
    c.ip = 0x1dc8u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:1dc8  mov ax, word ptr [si - 0x13ed]  [x4732]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffec13u)));
    // 1501:1dcc  mov bx, ax  [x4732]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1dce  out 0x40, al  [x4732]
    c.ip = 0x1dd0u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1dd0  mov al, ah  [x4732]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1dd2  out 0x40, al  [x4732]
    c.ip = 0x1dd4u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:1dd4  mov ax, word ptr [0xec23]  [x4732]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec23u)));
    // 1501:1dd7  mov word ptr [0xec25], ax  [x4732]
    c.w16(c.dsb + (uint16_t)(0xec25u), c.a.x);
    // 1501:1dda  cmp bx, 0  [x4732]
    c.sub<16>(c.b.x, 0x0u, true);
    // 1501:1ddd  jne 0x1e00  [x4732]
    if (!c.zf) goto L16e10;
L16def:
    if (c.tracing) c.traceAt(0x16def);
    // 1501:1ddf  push ds  [x1183]
    c.push16(c.ds);
    // 1501:1de0  push cs  [x1183]
    c.push16(c.cs);
    // 1501:1de1  pop ds  [x1183]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1de2  mov dx, 0x3c8  [x1183]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1de5  mov al, 1  [x1183]
    c.a.l = (uint8_t)(0x1u);
    // 1501:1de7  out dx, al  [x1183]
    c.ip = 0x1de8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1de8  inc dx  [x1183]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1de9  mov si, 0x1793  [x1183]
    c.si.x = (uint16_t)(0x1793u);
    // 1501:1dec  mov cx, 0x2d  [x1183]
    c.c.x = (uint16_t)(0x2du);
L16dff:
    if (c.tracing) c.traceAt(0x16dff);
    // 1501:1def  rep outsb dx, byte ptr [si]  [x54418]
    c.ip = 0x1df1u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16e01:
    if (c.tracing) c.traceAt(0x16e01);
    // 1501:1df1  pop ds  [x1183]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1df2  mov word ptr [0xec23], 0xf30  [x1183]
    c.w16(c.dsb + (uint16_t)(0xffffec23u), 0xf30u);
    // 1501:1df8  add word ptr [0xec1d], 0x300  [x1183]
    c.w16(c.dsb + (uint16_t)(0xffffec1du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec1du)), 0x300u, true));
    // 1501:1dfe  jmp 0x1e34  [x1183]
    goto L16e44;
L16e10:
    if (c.tracing) c.traceAt(0x16e10);
    // 1501:1e00  mov dx, 0x3c8  [x3549]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1e03  mov al, 1  [x3549]
    c.a.l = (uint8_t)(0x1u);
    // 1501:1e05  out dx, al  [x3549]
    c.ip = 0x1e06u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1e06  inc dx  [x3549]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1e07  mov si, word ptr [0xec1d]  [x3549]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffec1du)));
    // 1501:1e0b  mov cx, 0x17d  [x3549]
    c.c.x = (uint16_t)(0x17du);
L16e1e:
    if (c.tracing) c.traceAt(0x16e1e);
    // 1501:1e0e  rep outsb dx, byte ptr [si]  [x1355718]
    c.ip = 0x1e10u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16e20:
    if (c.tracing) c.traceAt(0x16e20);
    // 1501:1e10  mov cx, 4  [x3549]
    c.c.x = (uint16_t)(0x4u);
    // 1501:1e13  mov dx, 0x3da  [x3549]
    c.dx_.x = (uint16_t)(0x3dau);
L16e26:
    if (c.tracing) c.traceAt(0x16e26);
    // 1501:1e16  in al, dx  [x35490]
    c.ip = 0x1e17u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16e27:
    if (c.tracing) c.traceAt(0x16e27);
    // 1501:1e17  test al, 1  [x46137]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:1e19  jne 0x1e16  [x46137]
    if (!c.zf) goto L16e26;
L16e2b:
    if (c.tracing) c.traceAt(0x16e2b);
    // 1501:1e1b  in al, dx  [x39039]
    c.ip = 0x1e1cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16e2c:
    if (c.tracing) c.traceAt(0x16e2c);
    // 1501:1e1c  test al, 1  [x53235]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:1e1e  je 0x1e1b  [x53235]
    if (c.zf) goto L16e2b;
L16e30:
    if (c.tracing) c.traceAt(0x16e30);
    // 1501:1e20  loop 0x1e16  [x14196]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16e26;
L16e32:
    if (c.tracing) c.traceAt(0x16e32);
    // 1501:1e22  mov dx, 0x3c9  [x3549]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 1501:1e25  mov cx, 0x180  [x3549]
    c.c.x = (uint16_t)(0x180u);
L16e38:
    if (c.tracing) c.traceAt(0x16e38);
    // 1501:1e28  rep outsb dx, byte ptr [si]  [x1366365]
    c.ip = 0x1e2au; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16e3a:
    if (c.tracing) c.traceAt(0x16e3a);
    // 1501:1e2a  mov word ptr [0xec23], bx  [x3549]
    c.w16(c.dsb + (uint16_t)(0xffffec23u), c.b.x);
    // 1501:1e2e  add word ptr [0xec1d], 0x300  [x3549]
    c.w16(c.dsb + (uint16_t)(0xffffec1du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec1du)), 0x300u, true));
L16e44:
    if (c.tracing) c.traceAt(0x16e44);
    // 1501:1e34  mov ax, word ptr [0xec25]  [x4732]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec25u)));
    // 1501:1e37  add ax, word ptr [0xec21]  [x4732]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffec21u)), false));
    // 1501:1e3b  xor dx, dx  [x4732]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1e3d  mov cx, 0x4a9  [x4732]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:1e40  div cx  [x4732]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x1e40u); }   // #DE: int 0, then again
    // 1501:1e42  mov word ptr [0xec21], dx  [x4732]
    c.w16(c.dsb + (uint16_t)(0xffffec21u), c.dx_.x);
    // 1501:1e46  mov cx, ax  [x4732]
    c.c.x = (uint16_t)(c.a.x);
L16e58:
    if (c.tracing) c.traceAt(0x16e58);
    // 1501:1e48  pushf   [x13156]
    c.push16(c.flags());
    // 1501:1e49  lcall [0xec27]  [x13156]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0xffffec27u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0xffffec27u) + 2); c.push16(c.cs); c.push16(0x1e4du); c.loadCs(t1); c.callLinear(c.csb + t0); }
L16e5d:
    if (c.tracing) c.traceAt(0x16e5d);
    // 1501:1e4d  loop 0x1e48  [x13156]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16e58;
L16e5f:
    if (c.tracing) c.traceAt(0x16e5f);
    // 1501:1e4f  mov al, 0x20  [x4732]
    c.a.l = (uint8_t)(0x20u);
    // 1501:1e51  out 0x20, al  [x4732]
    c.ip = 0x1e53u; c.d32 = false; c.out8(0x20, c.a.l);
    // 1501:1e53  popaw   [x4732]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:1e54  mov byte ptr cs:[0x1d9d], 0  [x4732]
    c.w8(c.csb + (uint16_t)(0x1d9du), 0x0u);
    // 1501:1e5a  iret   [x4732]
    c.iret(); return;
L16e6b:
    if (c.tracing) c.traceAt(0x16e6b);
    // 1501:1e5b  mov ax, word ptr [0xec23]  [x1184]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec23u)));
    // 1501:1e5e  mov word ptr [0xec25], ax  [x1184]
    c.w16(c.dsb + (uint16_t)(0xec25u), c.a.x);
    // 1501:1e61  mov ax, word ptr [0xec13]  [x1184]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec13u)));
    // 1501:1e64  mov word ptr [0xec23], ax  [x1184]
    c.w16(c.dsb + (uint16_t)(0xec23u), c.a.x);
    // 1501:1e67  mov ax, word ptr [0xec25]  [x1184]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec25u)));
    // 1501:1e6a  add ax, word ptr [0xec21]  [x1184]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffec21u)), false));
    // 1501:1e6e  xor dx, dx  [x1184]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:1e70  mov cx, 0x4a9  [x1184]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:1e73  div cx  [x1184]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x1e73u); }   // #DE: int 0, then again
    // 1501:1e75  mov word ptr [0xec21], dx  [x1184]
    c.w16(c.dsb + (uint16_t)(0xffffec21u), c.dx_.x);
    // 1501:1e79  mov cx, ax  [x1184]
    c.c.x = (uint16_t)(c.a.x);
L16e8b:
    if (c.tracing) c.traceAt(0x16e8b);
    // 1501:1e7b  pushf   [x3856]
    c.push16(c.flags());
    // 1501:1e7c  lcall [0xec27]  [x3856]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0xffffec27u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0xffffec27u) + 2); c.push16(c.cs); c.push16(0x1e80u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L16e90:
    if (c.tracing) c.traceAt(0x16e90);
    // 1501:1e80  loop 0x1e7b  [x3856]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16e8b;
L16e92:
    if (c.tracing) c.traceAt(0x16e92);
    // 1501:1e82  ret   [x1184]
    c.ip = c.pop16(); return;
L16e93:
    if (c.tracing) c.traceAt(0x16e93);
    // 1501:1e83  push ds  [x1]
    c.push16(c.ds);
    // 1501:1e84  push cs  [x1]
    c.push16(c.cs);
    // 1501:1e85  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1e86  cld   [x1]
    c.df = false;
    // 1501:1e87  push es  [x1]
    c.push16(c.es);
    // 1501:1e88  mov si, 7  [x1]
    c.si.x = (uint16_t)(0x7u);
L16e9b:
    if (c.tracing) c.traceAt(0x16e9b);
    // 1501:1e8b  inc si  [x41]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1e8c  cmp word ptr [si], 0x4d43  [x41]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4d43u, true);
    // 1501:1e90  jne 0x1e8b  [x41]
    if (!c.zf) goto L16e9b;
L16ea2:
    if (c.tracing) c.traceAt(0x16ea2);
    // 1501:1e92  cmp word ptr [si + 2], 0x5041  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5041u, true);
    // 1501:1e97  jne 0x1e8b  [x1]
    if (!c.zf) goto L16e9b;
L16ea9:
    if (c.tracing) c.traceAt(0x16ea9);
    // 1501:1e99  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:1e9c  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:1e9e  mov ax, word ptr cs:[0x1a90]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1a90u)));
    // 1501:1ea2  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1ea4  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L16eb7:
    if (c.tracing) c.traceAt(0x16eb7);
    // 1501:1ea7  lodsb al, byte ptr [si]  [x768]
    c.ip = 0x1ea8u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1ea8  shr al, 2  [x768]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:1eab  mov byte ptr cs:[di + 0x1790], al  [x768]
    c.w8(c.csb + (uint16_t)(c.di.x + 0x1790u), c.a.l);
    // 1501:1eb0  inc di  [x768]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:1eb1  loop 0x1ea7  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16eb7;
L16ec3:
    if (c.tracing) c.traceAt(0x16ec3);
    // 1501:1eb3  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1eb4  mov si, 0xffff  [x1]
    c.si.x = (uint16_t)(0xffffu);
L16ec7:
    if (c.tracing) c.traceAt(0x16ec7);
    // 1501:1eb7  inc si  [x1757]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1eb8  cmp word ptr [si], 0x4f42  [x1757]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4f42u, true);
    // 1501:1ebc  jne 0x1eb7  [x1757]
    if (!c.zf) goto L16ec7;
L16ece:
    if (c.tracing) c.traceAt(0x16ece);
    // 1501:1ebe  cmp word ptr [si + 2], 0x5944  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5944u, true);
    // 1501:1ec3  jne 0x1eb7  [x1]
    if (!c.zf) goto L16ec7;
L16ed5:
    if (c.tracing) c.traceAt(0x16ed5);
    // 1501:1ec5  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:1ec8  mov al, byte ptr [si + 3]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)));
    // 1501:1ecb  mov ah, byte ptr [si + 2]  [x1]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)));
    // 1501:1ece  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:1ed1  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, true));
    // 1501:1ed3  mov bp, ax  [x1]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1ed5  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:1ed8  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 1501:1eda  out dx, al  [x1]
    c.ip = 0x1edbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1edb  mov byte ptr cs:[0x1f11], 1  [x1]
    c.w8(c.csb + (uint16_t)(0x1f11u), 0x1u);
    // 1501:1ee1  mov di, word ptr cs:[0x178e]  [x1]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x178eu)));
L16ef6:
    if (c.tracing) c.traceAt(0x16ef6);
    // 1501:1ee6  lodsb al, byte ptr [si]  [x1395]
    c.ip = 0x1ee7u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1ee7  and al, al  [x1395]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.a.l), true));
    // 1501:1ee9  jns 0x1eff  [x1395]
    if (!c.sf) goto L16f0f;
L16efb:
    if (c.tracing) c.traceAt(0x16efb);
    // 1501:1eeb  neg al  [x738]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:1eed  mov cl, al  [x738]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:1eef  inc cl  [x738]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:1ef1  xor ch, ch  [x738]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
    // 1501:1ef3  lodsb al, byte ptr [si]  [x738]
    c.ip = 0x1ef4u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
L16f04:
    if (c.tracing) c.traceAt(0x16f04);
    // 1501:1ef4  call 0x1f12  [x12907]
    c.push16(0x1ef7u); code_27(c, 0x16f22u); if (c.ip != 0x1ef7u) c.badReturn(0x16f04);
L16f07:
    if (c.tracing) c.traceAt(0x16f07);
    // 1501:1ef7  loop 0x1ef4  [x12907]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16f04;
L16f09:
    if (c.tracing) c.traceAt(0x16f09);
    // 1501:1ef9  cmp si, bp  [x738]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:1efb  jb 0x1ee6  [x738]
    if (c.cf) goto L16ef6;
L16f0d:
    if (c.tracing) c.traceAt(0x16f0d);
    // 1501:1efd  jmp 0x1f0f  [x1]
    goto L16f1f;
L16f0f:
    if (c.tracing) c.traceAt(0x16f0f);
    // 1501:1eff  mov cl, al  [x657]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:1f01  inc cl  [x657]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:1f03  xor ch, ch  [x657]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
L16f15:
    if (c.tracing) c.traceAt(0x16f15);
    // 1501:1f05  lodsb al, byte ptr [si]  [x2133]
    c.ip = 0x1f06u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1f06  call 0x1f12  [x2133]
    c.push16(0x1f09u); code_27(c, 0x16f22u); if (c.ip != 0x1f09u) c.badReturn(0x16f16);
L16f19:
    if (c.tracing) c.traceAt(0x16f19);
    // 1501:1f09  loop 0x1f05  [x2133]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16f15;
L16f1b:
    if (c.tracing) c.traceAt(0x16f1b);
    // 1501:1f0b  cmp si, bp  [x657]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:1f0d  jb 0x1ee6  [x657]
    if (c.cf) goto L16ef6;
L16f1f:
    if (c.tracing) c.traceAt(0x16f1f);
    // 1501:1f0f  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1f10  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L16f22:
    if (c.tracing) c.traceAt(0x16f22);
    // 1501:1f12  push ax  [x15040]
    c.push16(c.a.x);
    // 1501:1f13  mov dx, 0x3c5  [x15040]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:1f16  mov al, byte ptr cs:[0x1f11]  [x15040]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x1f11u)));
    // 1501:1f1a  out dx, al  [x15040]
    c.ip = 0x1f1bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1f1b  pop ax  [x15040]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:1f1c  mov byte ptr es:[di], al  [x15040]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:1f1f  shl byte ptr cs:[0x1f11], 1  [x15040]
    c.w8(c.csb + (uint16_t)(0x1f11u), c.shl<8>(c.r8(c.csb + (uint16_t)(0x1f11u)), (int)((0x1u) & 31), false));
    // 1501:1f24  cmp byte ptr cs:[0x1f11], 8  [x15040]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x1f11u)), 0x8u, true);
    // 1501:1f2a  jbe 0x1f33  [x15040]
    if ((c.cf || c.zf)) goto L16f43;
L16f3c:
    if (c.tracing) c.traceAt(0x16f3c);
    // 1501:1f2c  inc di  [x3760]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:1f2d  mov byte ptr cs:[0x1f11], 1  [x3760]
    c.w8(c.csb + (uint16_t)(0x1f11u), 0x1u);
L16f43:
    if (c.tracing) c.traceAt(0x16f43);
    // 1501:1f33  ret   [x15040]
    c.ip = c.pop16(); return;
L16f44:
    if (c.tracing) c.traceAt(0x16f44);
    // 1501:1f34  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
    // 1501:1f37  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L16f4a:
    if (c.tracing) c.traceAt(0x16f4a);
    // 1501:1f3a  in al, dx  [x99]
    c.ip = 0x1f3bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16f4b:
    if (c.tracing) c.traceAt(0x16f4b);
    // 1501:1f3b  test al, 8  [x132]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1f3d  jne 0x1f3a  [x132]
    if (!c.zf) goto L16f4a;
L16f4f:
    if (c.tracing) c.traceAt(0x16f4f);
    // 1501:1f3f  in al, dx  [x1496]
    c.ip = 0x1f40u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16f50:
    if (c.tracing) c.traceAt(0x16f50);
    // 1501:1f40  test al, 8  [x1984]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1f42  je 0x1f3f  [x1984]
    if (c.zf) goto L16f4f;
L16f54:
    if (c.tracing) c.traceAt(0x16f54);
    // 1501:1f44  loop 0x1f3a  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16f4a;
L16f56:
    if (c.tracing) c.traceAt(0x16f56);
    // 1501:1f46  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
    // 1501:1f49  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1f4c  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:1f4e  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:1f50  out dx, ax  [x1]
    c.ip = 0x1f51u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1f51  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:1f53  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:1f55  out dx, ax  [x1]
    c.ip = 0x1f56u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1f56  mov cx, 0x100  [x1]
    c.c.x = (uint16_t)(0x100u);
L16f69:
    if (c.tracing) c.traceAt(0x16f69);
    // 1501:1f59  push cx  [x99]
    c.push16(c.c.x);
    // 1501:1f5a  mov cx, word ptr [0xec36]  [x99]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffec36u)));
    // 1501:1f5e  mov dx, 0x3d4  [x99]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1f61  mov ax, 7  [x99]
    c.a.x = (uint16_t)(0x7u);
    // 1501:1f64  test cx, 0x100  [x99]
    c.logic<16>((c.c.x) & (0x100u), true);
    // 1501:1f68  je 0x1f6d  [x99]
    if (c.zf) goto L16f7d;
L16f7a:
    if (c.tracing) c.traceAt(0x16f7a);
    // 1501:1f6a  or ah, 0x10  [x50]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x10u), true));
L16f7d:
    if (c.tracing) c.traceAt(0x16f7d);
    // 1501:1f6d  out dx, ax  [x99]
    c.ip = 0x1f6eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1f6e  mov al, 0x18  [x99]
    c.a.l = (uint8_t)(0x18u);
    // 1501:1f70  mov ah, cl  [x99]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:1f72  out dx, ax  [x99]
    c.ip = 0x1f73u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1f73  mov dx, 0x3da  [x99]
    c.dx_.x = (uint16_t)(0x3dau);
L16f86:
    if (c.tracing) c.traceAt(0x16f86);
    // 1501:1f76  in al, dx  [x312]
    c.ip = 0x1f77u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16f87:
    if (c.tracing) c.traceAt(0x16f87);
    // 1501:1f77  test al, 8  [x416]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1f79  jne 0x1f76  [x416]
    if (!c.zf) goto L16f86;
L16f8b:
    if (c.tracing) c.traceAt(0x16f8b);
    // 1501:1f7b  in al, dx  [x4620]
    c.ip = 0x1f7cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16f8c:
    if (c.tracing) c.traceAt(0x16f8c);
    // 1501:1f7c  test al, 8  [x6127]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:1f7e  je 0x1f7b  [x6127]
    if (c.zf) goto L16f8b;
L16f90:
    if (c.tracing) c.traceAt(0x16f90);
    // 1501:1f80  push ds  [x99]
    c.push16(c.ds);
    // 1501:1f81  push cs  [x99]
    c.push16(c.cs);
    // 1501:1f82  pop ds  [x99]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1f83  mov dx, 0x3c8  [x99]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1f86  mov al, 1  [x99]
    c.a.l = (uint8_t)(0x1u);
    // 1501:1f88  out dx, al  [x99]
    c.ip = 0x1f89u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1f89  inc dx  [x99]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1f8a  mov si, 0x1793  [x99]
    c.si.x = (uint16_t)(0x1793u);
    // 1501:1f8d  mov cx, 0x2d  [x99]
    c.c.x = (uint16_t)(0x2du);
L16fa0:
    if (c.tracing) c.traceAt(0x16fa0);
    // 1501:1f90  rep outsb dx, byte ptr [si]  [x4554]
    c.ip = 0x1f92u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16fa2:
    if (c.tracing) c.traceAt(0x16fa2);
    // 1501:1f92  pop ds  [x99]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1f93  mov ax, word ptr [0xec38]  [x99]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec38u)));
    // 1501:1f96  inc word ptr [0xec38]  [x99]
    c.w16(c.dsb + (uint16_t)(0xffffec38u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffec38u)), false));
    // 1501:1f9a  sar ax, 3  [x99]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:1f9d  add word ptr [0xec36], ax  [x99]
    c.w16(c.dsb + (uint16_t)(0xffffec36u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), c.a.x, false));
    // 1501:1fa1  cmp ax, 0  [x99]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:1fa4  js 0x1fb4  [x99]
    if (c.sf) goto L16fc4;
L16fb6:
    if (c.tracing) c.traceAt(0x16fb6);
    // 1501:1fa6  cmp word ptr [0xec36], 0x154  [x49]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), 0x154u, true);
    // 1501:1fac  jb 0x1fb4  [x49]
    if (c.cf) goto L16fc4;
L16fbe:
    if (c.tracing) c.traceAt(0x16fbe);
    // 1501:1fae  sub word ptr [0xec36], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffec36u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), c.a.x, true));
    // 1501:1fb2  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:1fb3  ret   [x1]
    c.ip = c.pop16(); return;
L16fc4:
    if (c.tracing) c.traceAt(0x16fc4);
    // 1501:1fb4  pop cx  [x98]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:1fb5  loop 0x1f59  [x98]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16f69;
    c.notTranslated(0x16fc7, "fall-through");
L16fc8:
    if (c.tracing) c.traceAt(0x16fc8);
    // 1501:1fb8  push ds  [x1]
    c.push16(c.ds);
    // 1501:1fb9  push cs  [x1]
    c.push16(c.cs);
    // 1501:1fba  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1fbb  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1fbe  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:1fc0  out dx, al  [x1]
    c.ip = 0x1fc1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1fc1  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1fc2  mov si, 0x1793  [x1]
    c.si.x = (uint16_t)(0x1793u);
    // 1501:1fc5  mov cx, 0x2d  [x1]
    c.c.x = (uint16_t)(0x2du);
L16fd8:
    if (c.tracing) c.traceAt(0x16fd8);
    // 1501:1fc8  rep outsb dx, byte ptr [si]  [x46]
    c.ip = 0x1fcau; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L16fda:
    if (c.tracing) c.traceAt(0x16fda);
    // 1501:1fca  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1fcb  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
    // 1501:1fce  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1fd1  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:1fd3  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:1fd5  out dx, ax  [x1]
    c.ip = 0x1fd6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1fd6  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:1fd8  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:1fda  out dx, ax  [x1]
    c.ip = 0x1fdbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1fdb  mov word ptr [0xec38], 0xffd8  [x1]
    c.w16(c.dsb + (uint16_t)(0xffffec38u), 0xffd8u);
    // 1501:1fe1  mov cx, 0x100  [x1]
    c.c.x = (uint16_t)(0x100u);
L16ff4:
    if (c.tracing) c.traceAt(0x16ff4);
    // 1501:1fe4  push cx  [x104]
    c.push16(c.c.x);
    // 1501:1fe5  mov cx, word ptr [0xec36]  [x104]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffec36u)));
    // 1501:1fe9  cmp cx, 0x19a  [x104]
    c.sub<16>(c.c.x, 0x19au, true);
    // 1501:1fed  jae 0x2004  [x104]
    if (!c.cf) goto L17014;
L16fff:
    if (c.tracing) c.traceAt(0x16fff);
    // 1501:1fef  mov dx, 0x3d4  [x100]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1ff2  mov ax, 7  [x100]
    c.a.x = (uint16_t)(0x7u);
    // 1501:1ff5  test cx, 0x100  [x100]
    c.logic<16>((c.c.x) & (0x100u), true);
    // 1501:1ff9  je 0x1ffe  [x100]
    if (c.zf) goto L1700e;
L1700b:
    if (c.tracing) c.traceAt(0x1700b);
    // 1501:1ffb  or ah, 0x10  [x51]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x10u), true));
L1700e:
    if (c.tracing) c.traceAt(0x1700e);
    // 1501:1ffe  out dx, ax  [x100]
    c.ip = 0x1fffu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1fff  mov al, 0x18  [x100]
    c.a.l = (uint8_t)(0x18u);
    // 1501:2001  mov ah, cl  [x100]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:2003  out dx, ax  [x100]
    c.ip = 0x2004u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
L17014:
    if (c.tracing) c.traceAt(0x17014);
    // 1501:2004  mov dx, 0x3da  [x104]
    c.dx_.x = (uint16_t)(0x3dau);
L17017:
    if (c.tracing) c.traceAt(0x17017);
    // 1501:2007  in al, dx  [x330]
    c.ip = 0x2008u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L17018:
    if (c.tracing) c.traceAt(0x17018);
    // 1501:2008  test al, 8  [x440]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:200a  jne 0x2007  [x440]
    if (!c.zf) goto L17017;
L1701c:
    if (c.tracing) c.traceAt(0x1701c);
    // 1501:200c  in al, dx  [x4850]
    c.ip = 0x200du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1701d:
    if (c.tracing) c.traceAt(0x1701d);
    // 1501:200d  test al, 8  [x6432]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:200f  je 0x200c  [x6432]
    if (c.zf) goto L1701c;
L17021:
    if (c.tracing) c.traceAt(0x17021);
    // 1501:2011  mov ax, word ptr [0xec38]  [x104]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xec38u)));
    // 1501:2014  inc word ptr [0xec38]  [x104]
    c.w16(c.dsb + (uint16_t)(0xffffec38u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffec38u)), false));
    // 1501:2018  sar ax, 3  [x104]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:201b  add word ptr [0xec36], ax  [x104]
    c.w16(c.dsb + (uint16_t)(0xffffec36u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), c.a.x, false));
    // 1501:201f  cmp ax, 0  [x104]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:2022  js 0x202e  [x104]
    if (c.sf) goto L1703e;
L17034:
    if (c.tracing) c.traceAt(0x17034);
    // 1501:2024  cmp word ptr [0xec36], 0x1b8  [x64]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), 0x1b8u, true);
    // 1501:202a  jb 0x202e  [x64]
    if (c.cf) goto L1703e;
L1703c:
    if (c.tracing) c.traceAt(0x1703c);
    // 1501:202c  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:202d  ret   [x1]
    c.ip = c.pop16(); return;
L1703e:
    if (c.tracing) c.traceAt(0x1703e);
    // 1501:202e  cmp word ptr [0xec36], 0x19a  [x103]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffec36u)), 0x19au, true);
    // 1501:2034  jb 0x2043  [x103]
    if (c.cf) goto L17053;
L17046:
    if (c.tracing) c.traceAt(0x17046);
    // 1501:2036  mov dx, 0x3c8  [x4]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:2039  xor al, al  [x4]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:203b  out dx, al  [x4]
    c.ip = 0x203cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:203c  inc dx  [x4]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:203d  mov cx, 0x30  [x4]
    c.c.x = (uint16_t)(0x30u);
L17050:
    if (c.tracing) c.traceAt(0x17050);
    // 1501:2040  out dx, al  [x192]
    c.ip = 0x2041u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:2041  loop 0x2040  [x192]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17050;
L17053:
    if (c.tracing) c.traceAt(0x17053);
    // 1501:2043  pop cx  [x103]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:2044  loop 0x1fe4  [x103]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L16ff4;
    c.notTranslated(0x17056, "fall-through");
L1705b:
    if (c.tracing) c.traceAt(0x1705b);
    // 1501:204b  mov ax, 0xa000  [x158]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:204e  mov es, ax  [x158]
    c.loadEs(c.a.x);
    // 1501:2050  mov dx, 0x3c4  [x158]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:2053  mov ax, 0x102  [x158]
    c.a.x = (uint16_t)(0x102u);
    // 1501:2056  out dx, ax  [x158]
    c.ip = 0x2057u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2057  mov si, 0xc01  [x158]
    c.si.x = (uint16_t)(0xc01u);
    // 1501:205a  add si, word ptr cs:[0x2049]  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x2049u)), false));
    // 1501:205f  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:2064  add di, 0x15e0  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x15e0u, false));
    // 1501:2068  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:206b  cmp di, 0x78a0  [x158]
    c.sub<16>(c.di.x, 0x78a0u, true);
    // 1501:206f  jae 0x207c  [x158]
    if (!c.cf) goto L1708c;
L17081:
    if (c.tracing) c.traceAt(0x17081);
    // 1501:2071  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:2073  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:2076  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:2077  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:207a  loop 0x2071  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17081;
L1708c:
    if (c.tracing) c.traceAt(0x1708c);
    // 1501:207c  mov ax, word ptr cs:[0x2049]  [x158]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2049u)));
    // 1501:2080  add ax, 0x500  [x158]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x500u, false));
    // 1501:2083  cmp ax, 0x6400  [x158]
    c.sub<16>(c.a.x, 0x6400u, true);
    // 1501:2086  jb 0x208b  [x158]
    if (c.cf) goto L1709b;
L17098:
    if (c.tracing) c.traceAt(0x17098);
    // 1501:2088  sub ax, 0x6400  [x6]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x6400u, true));
L1709b:
    if (c.tracing) c.traceAt(0x1709b);
    // 1501:208b  mov si, 0x7001  [x158]
    c.si.x = (uint16_t)(0x7001u);
    // 1501:208e  add si, ax  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:2090  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:2095  add di, 0x9420  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x9420u, true));
    // 1501:2099  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
L170ac:
    if (c.tracing) c.traceAt(0x170ac);
    // 1501:209c  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:209e  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:20a1  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:20a2  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:20a5  loop 0x209c  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L170ac;
L170b7:
    if (c.tracing) c.traceAt(0x170b7);
    // 1501:20a7  mov dx, 0x3c4  [x158]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:20aa  mov ax, 0x202  [x158]
    c.a.x = (uint16_t)(0x202u);
    // 1501:20ad  out dx, ax  [x158]
    c.ip = 0x20aeu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:20ae  mov si, 0xc02  [x158]
    c.si.x = (uint16_t)(0xc02u);
    // 1501:20b1  add si, word ptr cs:[0x2049]  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x2049u)), false));
    // 1501:20b6  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:20bb  add di, 0x15e0  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x15e0u, false));
    // 1501:20bf  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:20c2  cmp di, 0x78a0  [x158]
    c.sub<16>(c.di.x, 0x78a0u, true);
    // 1501:20c6  jae 0x20d3  [x158]
    if (!c.cf) goto L170e3;
L170d8:
    if (c.tracing) c.traceAt(0x170d8);
    // 1501:20c8  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:20ca  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:20cd  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:20ce  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:20d1  loop 0x20c8  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L170d8;
L170e3:
    if (c.tracing) c.traceAt(0x170e3);
    // 1501:20d3  mov ax, word ptr cs:[0x2049]  [x158]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2049u)));
    // 1501:20d7  add ax, 0x500  [x158]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x500u, false));
    // 1501:20da  cmp ax, 0x6400  [x158]
    c.sub<16>(c.a.x, 0x6400u, true);
    // 1501:20dd  jb 0x20e2  [x158]
    if (c.cf) goto L170f2;
L170ef:
    if (c.tracing) c.traceAt(0x170ef);
    // 1501:20df  sub ax, 0x6400  [x6]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x6400u, true));
L170f2:
    if (c.tracing) c.traceAt(0x170f2);
    // 1501:20e2  mov si, 0x7002  [x158]
    c.si.x = (uint16_t)(0x7002u);
    // 1501:20e5  add si, ax  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:20e7  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:20ec  add di, 0x9420  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x9420u, true));
    // 1501:20f0  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
L17103:
    if (c.tracing) c.traceAt(0x17103);
    // 1501:20f3  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:20f5  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:20f8  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:20f9  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:20fc  loop 0x20f3  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17103;
L1710e:
    if (c.tracing) c.traceAt(0x1710e);
    // 1501:20fe  mov dx, 0x3c4  [x158]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:2101  mov ax, 0x402  [x158]
    c.a.x = (uint16_t)(0x402u);
    // 1501:2104  out dx, ax  [x158]
    c.ip = 0x2105u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2105  mov si, 0xc03  [x158]
    c.si.x = (uint16_t)(0xc03u);
    // 1501:2108  add si, word ptr cs:[0x2049]  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x2049u)), false));
    // 1501:210d  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:2112  add di, 0x15e0  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x15e0u, false));
    // 1501:2116  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:2119  cmp di, 0x78a0  [x158]
    c.sub<16>(c.di.x, 0x78a0u, true);
    // 1501:211d  jae 0x212a  [x158]
    if (!c.cf) goto L1713a;
L1712f:
    if (c.tracing) c.traceAt(0x1712f);
    // 1501:211f  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:2121  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:2124  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:2125  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:2128  loop 0x211f  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1712f;
L1713a:
    if (c.tracing) c.traceAt(0x1713a);
    // 1501:212a  mov ax, word ptr cs:[0x2049]  [x158]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2049u)));
    // 1501:212e  add ax, 0x500  [x158]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x500u, false));
    // 1501:2131  cmp ax, 0x6400  [x158]
    c.sub<16>(c.a.x, 0x6400u, true);
    // 1501:2134  jb 0x2139  [x158]
    if (c.cf) goto L17149;
L17146:
    if (c.tracing) c.traceAt(0x17146);
    // 1501:2136  sub ax, 0x6400  [x6]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x6400u, true));
L17149:
    if (c.tracing) c.traceAt(0x17149);
    // 1501:2139  mov si, 0x7003  [x158]
    c.si.x = (uint16_t)(0x7003u);
    // 1501:213c  add si, ax  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:213e  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:2143  add di, 0x9420  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x9420u, true));
    // 1501:2147  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
L1715a:
    if (c.tracing) c.traceAt(0x1715a);
    // 1501:214a  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:214c  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:214f  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:2150  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:2153  loop 0x214a  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1715a;
L17165:
    if (c.tracing) c.traceAt(0x17165);
    // 1501:2155  mov dx, 0x3c4  [x158]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:2158  mov ax, 0x802  [x158]
    c.a.x = (uint16_t)(0x802u);
    // 1501:215b  out dx, ax  [x158]
    c.ip = 0x215cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:215c  mov si, 0xc04  [x158]
    c.si.x = (uint16_t)(0xc04u);
    // 1501:215f  add si, word ptr cs:[0x2049]  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x2049u)), false));
    // 1501:2164  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:2169  add di, 0x15e0  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x15e0u, false));
    // 1501:216d  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:2170  cmp di, 0x78a0  [x158]
    c.sub<16>(c.di.x, 0x78a0u, true);
    // 1501:2174  jae 0x2181  [x158]
    if (!c.cf) goto L17191;
L17186:
    if (c.tracing) c.traceAt(0x17186);
    // 1501:2176  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:2178  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:217b  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:217c  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:217f  loop 0x2176  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17186;
L17191:
    if (c.tracing) c.traceAt(0x17191);
    // 1501:2181  mov ax, word ptr cs:[0x2049]  [x158]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2049u)));
    // 1501:2185  add ax, 0x500  [x158]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x500u, false));
    // 1501:2188  cmp ax, 0x6400  [x158]
    c.sub<16>(c.a.x, 0x6400u, true);
    // 1501:218b  jb 0x2190  [x158]
    if (c.cf) goto L171a0;
L1719d:
    if (c.tracing) c.traceAt(0x1719d);
    // 1501:218d  sub ax, 0x6400  [x6]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x6400u, true));
L171a0:
    if (c.tracing) c.traceAt(0x171a0);
    // 1501:2190  mov si, 0x7004  [x158]
    c.si.x = (uint16_t)(0x7004u);
    // 1501:2193  add si, ax  [x158]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:2195  mov di, word ptr cs:[0x2047]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2047u)));
    // 1501:219a  add di, 0x9420  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x9420u, true));
    // 1501:219e  mov cx, 0xa0  [x158]
    c.c.x = (uint16_t)(0xa0u);
L171b1:
    if (c.tracing) c.traceAt(0x171b1);
    // 1501:21a1  mov al, byte ptr [si]  [x25280]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:21a3  mov byte ptr es:[di], al  [x25280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:21a6  inc di  [x25280]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:21a7  add si, 4  [x25280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 1501:21aa  loop 0x21a1  [x25280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L171b1;
L171bc:
    if (c.tracing) c.traceAt(0x171bc);
    // 1501:21ac  add word ptr cs:[0x2049], 0x280  [x158]
    c.w16(c.csb + (uint16_t)(0x2049u), c.add<16>(c.r16(c.csb + (uint16_t)(0x2049u)), 0x280u, false));
    // 1501:21b3  cmp word ptr cs:[0x2049], 0x6400  [x158]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2049u)), 0x6400u, true);
    // 1501:21ba  jb 0x21c3  [x158]
    if (c.cf) goto L171d3;
L171cc:
    if (c.tracing) c.traceAt(0x171cc);
    // 1501:21bc  mov word ptr cs:[0x2049], 0  [x3]
    c.w16(c.csb + (uint16_t)(0x2049u), 0x0u);
L171d3:
    if (c.tracing) c.traceAt(0x171d3);
    // 1501:21c3  add word ptr cs:[0x2047], 0xa0  [x158]
    c.w16(c.csb + (uint16_t)(0x2047u), c.add<16>(c.r16(c.csb + (uint16_t)(0x2047u)), 0xa0u, false));
    // 1501:21ca  cmp word ptr cs:[0x2047], 0x62c0  [x158]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2047u)), 0x62c0u, true);
    // 1501:21d1  jb 0x21d8  [x158]
    if (c.cf) goto L171e8;
L171e3:
    if (c.tracing) c.traceAt(0x171e3);
    // 1501:21d3  mov byte ptr [0xec2b], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffec2bu), 0x1u);
L171e8:
    if (c.tracing) c.traceAt(0x171e8);
    // 1501:21d8  ret   [x158]
    c.ip = c.pop16(); return;
L171eb:
    if (c.tracing) c.traceAt(0x171eb);
    // 1501:21db  mov ax, 0xa000  [x158]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:21de  mov es, ax  [x158]
    c.loadEs(c.a.x);
    // 1501:21e0  mov dx, 0x3c4  [x158]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:21e3  mov ax, 0xf02  [x158]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:21e6  out dx, ax  [x158]
    c.ip = 0x21e7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:21e7  mov di, word ptr cs:[0x21d9]  [x158]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x21d9u)));
    // 1501:21ec  add di, 0x15e0  [x158]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x15e0u, false));
    // 1501:21f0  mov cx, 0x50  [x158]
    c.c.x = (uint16_t)(0x50u);
    // 1501:21f3  xor ax, ax  [x158]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L17205:
    if (c.tracing) c.traceAt(0x17205);
    // 1501:21f5  mov word ptr es:[di], ax  [x12640]
    c.w16(c.esb + (uint16_t)(c.di.x), c.a.x);
    // 1501:21f8  mov word ptr es:[di + 0x7e40], ax  [x12640]
    c.w16(c.esb + (uint16_t)(c.di.x + 0x7e40u), c.a.x);
    // 1501:21fd  add di, 2  [x12640]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:2200  loop 0x21f5  [x12640]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17205;
L17212:
    if (c.tracing) c.traceAt(0x17212);
    // 1501:2202  add word ptr cs:[0x21d9], 0xa0  [x158]
    c.w16(c.csb + (uint16_t)(0x21d9u), c.add<16>(c.r16(c.csb + (uint16_t)(0x21d9u)), 0xa0u, false));
    // 1501:2209  cmp word ptr cs:[0x21d9], 0x62c0  [x158]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x21d9u)), 0x62c0u, true);
    // 1501:2210  jb 0x2217  [x158]
    if (c.cf) goto L17227;
L17222:
    if (c.tracing) c.traceAt(0x17222);
    // 1501:2212  mov byte ptr [0xec2c], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffec2cu), 0x1u);
L17227:
    if (c.tracing) c.traceAt(0x17227);
    // 1501:2217  ret   [x158]
    c.ip = c.pop16(); return;
L17228:
    if (c.tracing) c.traceAt(0x17228);
    // 1501:2218  call 0x1d79  [x1]
    c.push16(0x221bu); code_27(c, 0x16d89u); if (c.ip != 0x221bu) c.badReturn(0x17228);
L1722b:
    if (c.tracing) c.traceAt(0x1722b);
    // 1501:221b  call 0x1fb8  [x1]
    c.push16(0x221eu); code_27(c, 0x16fc8u); if (c.ip != 0x221eu) c.badReturn(0x1722b);
L1722e:
    if (c.tracing) c.traceAt(0x1722e);
    // 1501:221e  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_27(27, {0x15010, 0x16aa6, 0x16abb, 0x16ae3, 0x16ae6, 0x16aed, 0x16aef, 0x16afa, 0x16b0f, 0x16b12, 0x16b18, 0x16b1d, 0x16b20, 0x16b23, 0x16b25, 0x16b38, 0x16b4d, 0x16b53, 0x16b54, 0x16b58, 0x16b59, 0x16b5d, 0x16b5f, 0x16b62, 0x16b7a, 0x16b80, 0x16b9b, 0x16ba6, 0x16ba7, 0x16bab, 0x16bac, 0x16bb0, 0x16bb3, 0x16bc6, 0x16bc8, 0x16bcb, 0x16bce, 0x16bda, 0x16bdf, 0x16be7, 0x16bec, 0x16bf4, 0x16bf7, 0x16bff, 0x16c04, 0x16c0b, 0x16c0e, 0x16c15, 0x16c18, 0x16c1b, 0x16c22, 0x16c36, 0x16c3b, 0x16c4e, 0x16c5a, 0x16c70, 0x16c77, 0x16c8c, 0x16c91, 0x16ca4, 0x16cb0, 0x16cc6, 0x16ccd, 0x16ce6, 0x16ceb, 0x16cfe, 0x16d0a, 0x16d20, 0x16d21, 0x16d30, 0x16d33, 0x16d3d, 0x16d3e, 0x16d59, 0x16d88, 0x16d89, 0x16dac, 0x16daf, 0x16dc4, 0x16def, 0x16dff, 0x16e01, 0x16e10, 0x16e1e, 0x16e20, 0x16e26, 0x16e27, 0x16e2b, 0x16e2c, 0x16e30, 0x16e32, 0x16e38, 0x16e3a, 0x16e44, 0x16e58, 0x16e5d, 0x16e5f, 0x16e6b, 0x16e8b, 0x16e90, 0x16e92, 0x16e93, 0x16e9b, 0x16ea2, 0x16ea9, 0x16eb7, 0x16ec3, 0x16ec7, 0x16ece, 0x16ed5, 0x16ef6, 0x16efb, 0x16f04, 0x16f07, 0x16f09, 0x16f0d, 0x16f0f, 0x16f15, 0x16f19, 0x16f1b, 0x16f1f, 0x16f22, 0x16f3c, 0x16f43, 0x16f44, 0x16f4a, 0x16f4b, 0x16f4f, 0x16f50, 0x16f54, 0x16f56, 0x16f69, 0x16f7a, 0x16f7d, 0x16f86, 0x16f87, 0x16f8b, 0x16f8c, 0x16f90, 0x16fa0, 0x16fa2, 0x16fb6, 0x16fbe, 0x16fc4, 0x16fc8, 0x16fd8, 0x16fda, 0x16ff4, 0x16fff, 0x1700b, 0x1700e, 0x17014, 0x17017, 0x17018, 0x1701c, 0x1701d, 0x17021, 0x17034, 0x1703c, 0x1703e, 0x17046, 0x17050, 0x17053, 0x1705b, 0x17081, 0x1708c, 0x17098, 0x1709b, 0x170ac, 0x170b7, 0x170d8, 0x170e3, 0x170ef, 0x170f2, 0x17103, 0x1710e, 0x1712f, 0x1713a, 0x17146, 0x17149, 0x1715a, 0x17165, 0x17186, 0x17191, 0x1719d, 0x171a0, 0x171b1, 0x171bc, 0x171cc, 0x171d3, 0x171e3, 0x171e8, 0x171eb, 0x17205, 0x17212, 0x17222, 0x17227, 0x17228, 0x1722b, 0x1722e}, code_27);

}  // namespace show
