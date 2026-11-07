// Part 9 (TMAP.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_10(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1a612: goto L1a612;
    case 0x1a61f: goto L1a61f;
    case 0x1a62f: goto L1a62f;
    case 0x1a63d: goto L1a63d;
    case 0x1a63f: goto L1a63f;
    case 0x1a64c: goto L1a64c;
    case 0x1a654: goto L1a654;
    case 0x1a66a: goto L1a66a;
    case 0x1a66d: goto L1a66d;
    case 0x1a670: goto L1a670;
    case 0x1a673: goto L1a673;
    case 0x1a676: goto L1a676;
    case 0x1a67c: goto L1a67c;
    case 0x1a67f: goto L1a67f;
    case 0x1a68e: goto L1a68e;
    case 0x1a696: goto L1a696;
    case 0x1a6ab: goto L1a6ab;
    case 0x1a6b2: goto L1a6b2;
    case 0x1a6b5: goto L1a6b5;
    case 0x1a6c9: goto L1a6c9;
    case 0x1a6d6: goto L1a6d6;
    case 0x1a6e9: goto L1a6e9;
    case 0x1a71b: goto L1a71b;
    case 0x1a721: goto L1a721;
    case 0x1a727: goto L1a727;
    case 0x1a750: goto L1a750;
    case 0x1a753: goto L1a753;
    case 0x1a756: goto L1a756;
    case 0x1a759: goto L1a759;
    case 0x1a76f: goto L1a76f;
    case 0x1a77b: goto L1a77b;
    case 0x1a780: goto L1a780;
    case 0x1a788: goto L1a788;
    case 0x1a78b: goto L1a78b;
    case 0x1a797: goto L1a797;
    case 0x1a79d: goto L1a79d;
    case 0x1a7c6: goto L1a7c6;
    case 0x1a7cc: goto L1a7cc;
    case 0x1a7f5: goto L1a7f5;
    case 0x1a7fb: goto L1a7fb;
    case 0x1a824: goto L1a824;
    case 0x1a82a: goto L1a82a;
    case 0x1a853: goto L1a853;
    case 0x1a859: goto L1a859;
    case 0x1a882: goto L1a882;
    case 0x1a888: goto L1a888;
    case 0x1a8b1: goto L1a8b1;
    case 0x1a8b7: goto L1a8b7;
    case 0x1a8e0: goto L1a8e0;
    case 0x1a8e6: goto L1a8e6;
    case 0x1a908: goto L1a908;
    case 0x1a90b: goto L1a90b;
    case 0x1a90c: goto L1a90c;
    case 0x1a910: goto L1a910;
    case 0x1a911: goto L1a911;
    case 0x1a915: goto L1a915;
    case 0x1a916: goto L1a916;
    case 0x1a924: goto L1a924;
    case 0x1a926: goto L1a926;
    case 0x1a92f: goto L1a92f;
    case 0x1a93d: goto L1a93d;
    case 0x1a93f: goto L1a93f;
    case 0x1a943: goto L1a943;
    case 0x1a945: goto L1a945;
    case 0x1a982: goto L1a982;
    case 0x1a98d: goto L1a98d;
    case 0x1a98e: goto L1a98e;
    case 0x1a997: goto L1a997;
    case 0x1a9a5: goto L1a9a5;
    case 0x1a9a7: goto L1a9a7;
    case 0x1a9e4: goto L1a9e4;
    case 0x1a9ef: goto L1a9ef;
    case 0x1a9f0: goto L1a9f0;
    case 0x1aa00: goto L1aa00;
    case 0x1aa16: goto L1aa16;
    case 0x1aa18: goto L1aa18;
    case 0x1aa56: goto L1aa56;
    case 0x1aaa0: goto L1aaa0;
    case 0x1aaa9: goto L1aaa9;
    case 0x1aabd: goto L1aabd;
    case 0x1aabf: goto L1aabf;
    case 0x1aac9: goto L1aac9;
    case 0x1aad3: goto L1aad3;
    case 0x1aad9: goto L1aad9;
    case 0x1aade: goto L1aade;
    case 0x1aaf4: goto L1aaf4;
    case 0x1aafb: goto L1aafb;
    case 0x1ab02: goto L1ab02;
    case 0x1ab03: goto L1ab03;
    case 0x1ab29: goto L1ab29;
    case 0x1ab31: goto L1ab31;
    case 0x1ab35: goto L1ab35;
    case 0x1ab43: goto L1ab43;
    case 0x1ab48: goto L1ab48;
    case 0x1ab4a: goto L1ab4a;
    case 0x1ab4b: goto L1ab4b;
    case 0x1ab56: goto L1ab56;
    case 0x1ab85: goto L1ab85;
    case 0x1ab95: goto L1ab95;
    case 0x1ab9d: goto L1ab9d;
    case 0x1abaa: goto L1abaa;
    case 0x1abb6: goto L1abb6;
    case 0x1abb7: goto L1abb7;
    case 0x1abbe: goto L1abbe;
    case 0x1ac1c: goto L1ac1c;
    case 0x1ac1e: goto L1ac1e;
    case 0x1ac1f: goto L1ac1f;
    case 0x1ac23: goto L1ac23;
    case 0x1ac5e: goto L1ac5e;
    case 0x1ac5f: goto L1ac5f;
    case 0x1ac67: goto L1ac67;
    case 0x1ac7c: goto L1ac7c;
    case 0x1ac96: goto L1ac96;
    case 0x1aca4: goto L1aca4;
    case 0x1aca9: goto L1aca9;
    case 0x1acbe: goto L1acbe;
    case 0x1acc7: goto L1acc7;
    case 0x1acd1: goto L1acd1;
    case 0x1acdf: goto L1acdf;
    case 0x1ace0: goto L1ace0;
    case 0x1ace2: goto L1ace2;
    case 0x1acfa: goto L1acfa;
    case 0x1ad0e: goto L1ad0e;
    case 0x1ad27: goto L1ad27;
    case 0x1ad3b: goto L1ad3b;
    case 0x1ad44: goto L1ad44;
    case 0x1ad45: goto L1ad45;
    case 0x1ad47: goto L1ad47;
    case 0x1ad51: goto L1ad51;
    case 0x1ad54: goto L1ad54;
    case 0x1ad58: goto L1ad58;
    case 0x1ad5b: goto L1ad5b;
    case 0x1ad5f: goto L1ad5f;
    case 0x1ad62: goto L1ad62;
    case 0x1ad66: goto L1ad66;
    case 0x1ad69: goto L1ad69;
    case 0x1ad6d: goto L1ad6d;
    case 0x1ad70: goto L1ad70;
    case 0x1ad74: goto L1ad74;
    case 0x1ad77: goto L1ad77;
    case 0x1ad7b: goto L1ad7b;
    case 0x1ad7e: goto L1ad7e;
    case 0x1ad82: goto L1ad82;
    case 0x1ad85: goto L1ad85;
    case 0x1ad90: goto L1ad90;
    case 0x1ad91: goto L1ad91;
    case 0x1ada7: goto L1ada7;
    case 0x1ada9: goto L1ada9;
    case 0x1adaf: goto L1adaf;
    case 0x1adb1: goto L1adb1;
    case 0x1adb8: goto L1adb8;
    case 0x1adc8: goto L1adc8;
    case 0x1add5: goto L1add5;
    case 0x1add8: goto L1add8;
    case 0x1adda: goto L1adda;
    case 0x1ade3: goto L1ade3;
    case 0x1adf8: goto L1adf8;
    case 0x1adfa: goto L1adfa;
    case 0x1ae00: goto L1ae00;
    case 0x1ae02: goto L1ae02;
    case 0x1ae09: goto L1ae09;
    case 0x1ae19: goto L1ae19;
    case 0x1ae26: goto L1ae26;
    case 0x1ae29: goto L1ae29;
    case 0x1ae2b: goto L1ae2b;
    case 0x1ae34: goto L1ae34;
    case 0x1ae37: goto L1ae37;
    case 0x1ae3b: goto L1ae3b;
    case 0x1ae3e: goto L1ae3e;
    case 0x1ae41: goto L1ae41;
    case 0x1ae44: goto L1ae44;
    case 0x1ae4f: goto L1ae4f;
    case 0x1ae5b: goto L1ae5b;
    case 0x1ae5f: goto L1ae5f;
    case 0x1ae66: goto L1ae66;
    case 0x1ae6e: goto L1ae6e;
    case 0x1ae6f: goto L1ae6f;
    case 0x1ae7c: goto L1ae7c;
    case 0x1ae7e: goto L1ae7e;
    case 0x1ae80: goto L1ae80;
    case 0x1ae8a: goto L1ae8a;
    case 0x1ae90: goto L1ae90;
    case 0x1ae96: goto L1ae96;
    case 0x1ae9a: goto L1ae9a;
    case 0x1aea0: goto L1aea0;
    case 0x1aea1: goto L1aea1;
    case 0x1aec9: goto L1aec9;
    case 0x1aed1: goto L1aed1;
    case 0x1aee3: goto L1aee3;
    case 0x1aee4: goto L1aee4;
    case 0x1aeec: goto L1aeec;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x5602  [x1]
    goto L1a612;
L1a612:
    if (c.tracing) c.traceAt(0x1a612);
    // 1501:5602  mov word ptr cs:[8], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x8u), c.a.x);
    // 1501:5606  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:5609  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:560b  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:560d  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1a61f:
    if (c.tracing) c.traceAt(0x1a61f);
    // 1501:560f  mov word ptr [si - 0x7e89], ax  [x200]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8177u), c.a.x);
    // 1501:5613  add si, 2  [x200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5616  add ax, 0x28  [x200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:5619  cmp si, 0x190  [x200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:561d  jb 0x560f  [x200]
    if (c.cf) goto L1a61f;
L1a62f:
    if (c.tracing) c.traceAt(0x1a62f);
    // 1501:561f  push es  [x1]
    c.push16(c.es);
    // 1501:5620  mov ax, word ptr cs:[8]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:5624  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:5626  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:5628  mov cx, 0x7d00  [x1]
    c.c.x = (uint16_t)(0x7d00u);
    // 1501:562b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1a63d:
    if (c.tracing) c.traceAt(0x1a63d);
    // 1501:562d  rep stosw word ptr es:[di], ax  [x32001]
    c.stos<16, false>(1);
L1a63f:
    if (c.tracing) c.traceAt(0x1a63f);
    // 1501:562f  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5630  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:5632  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5635  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:5637  out dx, al  [x1]
    c.ip = 0x5638u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5638  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:5639  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1a64c:
    if (c.tracing) c.traceAt(0x1a64c);
    // 1501:563c  mov al, byte ptr [si - 0x122]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu)));
    // 1501:5640  out dx, al  [x48]
    c.ip = 0x5641u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5641  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:5642  loop 0x563c  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a64c;
L1a654:
    if (c.tracing) c.traceAt(0x1a654);
    // 1501:5644  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5647  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:5649  out dx, al  [x1]
    c.ip = 0x564au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:564a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:564b  mov al, byte ptr [0xfede]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xfedeu)));
    // 1501:564e  out dx, al  [x1]
    c.ip = 0x564fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:564f  mov al, byte ptr [0xfedf]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xfedfu)));
    // 1501:5652  out dx, al  [x1]
    c.ip = 0x5653u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5653  mov al, byte ptr [0xfee0]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xfee0u)));
    // 1501:5656  out dx, al  [x1]
    c.ip = 0x5657u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5657  call 0x5aaf  [x1]
    c.push16(0x565au); code_10(c, 0x1aabfu); if (c.ip != 0x565au) c.badReturn(0x1a667);
L1a66a:
    if (c.tracing) c.traceAt(0x1a66a);
    // 1501:565a  call 0x5b3b  [x1]
    c.push16(0x565du); code_10(c, 0x1ab4bu); if (c.ip != 0x565du) c.badReturn(0x1a66a);
L1a66d:
    if (c.tracing) c.traceAt(0x1a66d);
    // 1501:565d  call 0x5c4f  [x1]
    c.push16(0x5660u); code_10(c, 0x1ac5fu); if (c.ip != 0x5660u) c.badReturn(0x1a66d);
L1a670:
    if (c.tracing) c.traceAt(0x1a670);
    // 1501:5660  call 0x5d35  [x1]
    c.push16(0x5663u); code_10(c, 0x1ad45u); if (c.ip != 0x5663u) c.badReturn(0x1a670);
L1a673:
    if (c.tracing) c.traceAt(0x1a673);
    // 1501:5663  call 0x5d81  [x1]
    c.push16(0x5666u); code_10(c, 0x1ad91u); if (c.ip != 0x5666u) c.badReturn(0x1a673);
L1a676:
    if (c.tracing) c.traceAt(0x1a676);
    // 1501:5666  mov word ptr [0x8e56], 0x50  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8e56u), 0x50u);
L1a67c:
    if (c.tracing) c.traceAt(0x1a67c);
    // 1501:566c  call 0x5e91  [x1728]
    c.push16(0x566fu); code_10(c, 0x1aea1u); if (c.ip != 0x566fu) c.badReturn(0x1a67c);
L1a67f:
    if (c.tracing) c.traceAt(0x1a67f);
    // 1501:566f  mov cx, 0x8000  [x1728]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:5672  mov bx, 0xa000  [x1728]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:5675  xor ax, ax  [x1728]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:5677  cmp word ptr [0x8027], 0  [x1728]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8027u)), 0x0u, true);
    // 1501:567c  jne 0x5686  [x1728]
    if (!c.zf) goto L1a696;
L1a68e:
    if (c.tracing) c.traceAt(0x1a68e);
    // 1501:567e  mov ax, 1  [x864]
    c.a.x = (uint16_t)(0x1u);
    // 1501:5681  mov bx, 0xa800  [x864]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:5684  xor cx, cx  [x864]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
L1a696:
    if (c.tracing) c.traceAt(0x1a696);
    // 1501:5686  mov word ptr [0x8027], ax  [x1728]
    c.w16(c.dsb + (uint16_t)(0x8027u), c.a.x);
    // 1501:5689  mov es, bx  [x1728]
    c.loadEs(c.b.x);
    // 1501:568b  mov dx, 0x3d4  [x1728]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:568e  mov al, 0xc  [x1728]
    c.a.l = (uint8_t)(0xcu);
    // 1501:5690  mov ah, ch  [x1728]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:5692  out dx, ax  [x1728]
    c.ip = 0x5693u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5693  mov al, 0xd  [x1728]
    c.a.l = (uint8_t)(0xdu);
    // 1501:5695  mov ah, cl  [x1728]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:5697  out dx, ax  [x1728]
    c.ip = 0x5698u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5698  call 0x58f8  [x1728]
    c.push16(0x569bu); code_10(c, 0x1a908u); if (c.ip != 0x569bu) c.badReturn(0x1a6a8);
L1a6ab:
    if (c.tracing) c.traceAt(0x1a6ab);
    // 1501:569b  cmp byte ptr [0xff3e], 1  [x1728]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffff3eu)), 0x1u, true);
    // 1501:56a0  jne 0x56a5  [x1728]
    if (!c.zf) goto L1a6b5;
L1a6b2:
    if (c.tracing) c.traceAt(0x1a6b2);
    // 1501:56a2  call 0x5e5f  [x64]
    c.push16(0x56a5u); code_10(c, 0x1ae6fu); if (c.ip != 0x56a5u) c.badReturn(0x1a6b2);
L1a6b5:
    if (c.tracing) c.traceAt(0x1a6b5);
    // 1501:56a5  mov ax, 0  [x1728]
    c.a.x = (uint16_t)(0x0u);
    // 1501:56a8  mov si, ax  [x1728]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:56aa  mov dx, 0x3c4  [x1728]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:56ad  mov al, 2  [x1728]
    c.a.l = (uint8_t)(0x2u);
    // 1501:56af  mov ah, byte ptr [si - 0x7ffd]  [x1728]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffff8003u)));
    // 1501:56b3  mov ah, 0xe  [x1728]
    c.a.h = (uint8_t)(0xeu);
    // 1501:56b5  out dx, ax  [x1728]
    c.ip = 0x56b6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:56b6  call 0x59e0  [x1728]
    c.push16(0x56b9u); code_10(c, 0x1a9f0u); if (c.ip != 0x56b9u) c.badReturn(0x1a6c6);
L1a6c9:
    if (c.tracing) c.traceAt(0x1a6c9);
    // 1501:56b9  push es  [x1728]
    c.push16(c.es);
    // 1501:56ba  mov ax, word ptr cs:[8]  [x1728]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:56be  mov es, ax  [x1728]
    c.loadEs(c.a.x);
    // 1501:56c0  mov ax, 0  [x1728]
    c.a.x = (uint16_t)(0x0u);
    // 1501:56c3  mov di, 0x645  [x1728]
    c.di.x = (uint16_t)(0x645u);
L1a6d6:
    if (c.tracing) c.traceAt(0x1a6d6);
    // 1501:56c6  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56c7  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56c8  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56c9  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56ca  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56cb  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56cc  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56cd  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56ce  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56cf  stosw word ptr es:[di], ax  [x252288]
    c.stos<16, false>(0);
    // 1501:56d0  add di, 0x14  [x252288]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:56d3  cmp di, 0x1d15  [x252288]
    c.sub<16>(c.di.x, 0x1d15u, true);
    // 1501:56d7  jb 0x56c6  [x252288]
    if (c.cf) goto L1a6d6;
L1a6e9:
    if (c.tracing) c.traceAt(0x1a6e9);
    // 1501:56d9  pop es  [x1728]
    c.loadEs((uint16_t)c.pop16());
    // 1501:56da  mov word ptr [0x802b], 0  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff802bu), 0x0u);
    // 1501:56e0  mov ax, word ptr [0x801f]  [x1728]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x801fu)));
    // 1501:56e3  mov word ptr [0x8029], ax  [x1728]
    c.w16(c.dsb + (uint16_t)(0x8029u), c.a.x);
    // 1501:56e6  mov word ptr [0x8009], 0  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8009u), 0x0u);
    // 1501:56ec  mov word ptr [0x8c21], 0  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8c21u), 0x0u);
    // 1501:56f2  mov cx, word ptr cs:[0xa]  [x1728]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xau)));
    // 1501:56f7  mov word ptr cs:[0xc], 0xccde  [x1728]
    c.w16(c.csb + (uint16_t)(0xcu), 0xccdeu);
    // 1501:56fe  mov word ptr cs:[0xe], 0xe5de  [x1728]
    c.w16(c.csb + (uint16_t)(0xeu), 0xe5deu);
    // 1501:5705  mov word ptr [0x8b0f], 0x21c  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8b0fu), 0x21cu);
L1a71b:
    if (c.tracing) c.traceAt(0x1a71b);
    // 1501:570b  push cx  [x8791]
    c.push16(c.c.x);
    // 1501:570c  cmp cx, 1  [x8791]
    c.sub<16>(c.c.x, 0x1u, true);
    // 1501:570f  jne 0x5717  [x8791]
    if (!c.zf) goto L1a727;
L1a721:
    if (c.tracing) c.traceAt(0x1a721);
    // 1501:5711  mov ax, word ptr [0x8b11]  [x1728]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8b11u)));
    // 1501:5714  mov word ptr [0x8b0f], ax  [x1728]
    c.w16(c.dsb + (uint16_t)(0x8b0fu), c.a.x);
L1a727:
    if (c.tracing) c.traceAt(0x1a727);
    // 1501:5717  mov si, word ptr [0x8c21]  [x8791]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8c21u)));
    // 1501:571b  mov di, word ptr [si - 0x73bd]  [x8791]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)));
    // 1501:571f  xor ah, ah  [x8791]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:5721  mov al, byte ptr [di - 0x75f1]  [x8791]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffff8a0fu)));
    // 1501:5725  shl al, 1  [x8791]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x1u) & 31), false));
    // 1501:5727  add ax, 0x28  [x8791]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:572a  mov word ptr [0x801b], ax  [x8791]
    c.w16(c.dsb + (uint16_t)(0x801bu), c.a.x);
    // 1501:572d  mov di, word ptr [si - 0x73ad]  [x8791]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)));
    // 1501:5731  mov al, byte ptr [di - 0x75f1]  [x8791]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffff8a0fu)));
    // 1501:5735  shl al, 1  [x8791]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x1u) & 31), false));
    // 1501:5737  add ax, 0x30  [x8791]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x30u, true));
    // 1501:573a  mov word ptr [0x801d], ax  [x8791]
    c.w16(c.dsb + (uint16_t)(0x801du), c.a.x);
    // 1501:573d  call 0x5ba7  [x8791]
    c.push16(0x5740u); code_10(c, 0x1abb7u); if (c.ip != 0x5740u) c.badReturn(0x1a74d);
L1a750:
    if (c.tracing) c.traceAt(0x1a750);
    // 1501:5740  call 0x5cd0  [x8791]
    c.push16(0x5743u); code_10(c, 0x1ace0u); if (c.ip != 0x5743u) c.badReturn(0x1a750);
L1a753:
    if (c.tracing) c.traceAt(0x1a753);
    // 1501:5743  call 0x5c0f  [x8791]
    c.push16(0x5746u); code_10(c, 0x1ac1fu); if (c.ip != 0x5746u) c.badReturn(0x1a753);
L1a756:
    if (c.tracing) c.traceAt(0x1a756);
    // 1501:5746  call 0x5906  [x8791]
    c.push16(0x5749u); code_10(c, 0x1a916u); if (c.ip != 0x5749u) c.badReturn(0x1a756);
L1a759:
    if (c.tracing) c.traceAt(0x1a759);
    // 1501:5749  add word ptr [0x8c21], 2  [x8791]
    c.w16(c.dsb + (uint16_t)(0xffff8c21u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8c21u)), 0x2u, false));
    // 1501:574e  add word ptr cs:[0xc], 0x320  [x8791]
    c.w16(c.csb + (uint16_t)(0xcu), c.add<16>(c.r16(c.csb + (uint16_t)(0xcu)), 0x320u, false));
    // 1501:5755  add word ptr cs:[0xe], 0x320  [x8791]
    c.w16(c.csb + (uint16_t)(0xeu), c.add<16>(c.r16(c.csb + (uint16_t)(0xeu)), 0x320u, true));
    // 1501:575c  pop cx  [x8791]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:575d  loop 0x570b  [x8791]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a71b;
L1a76f:
    if (c.tracing) c.traceAt(0x1a76f);
    // 1501:575f  inc word ptr [0x8000]  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8000u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), false));
    // 1501:5763  cmp word ptr [0x8000], 0x680  [x1728]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x680u, true);
    // 1501:5769  jne 0x5770  [x1728]
    if (!c.zf) goto L1a780;
L1a77b:
    if (c.tracing) c.traceAt(0x1a77b);
    // 1501:576b  mov byte ptr [0xff3e], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffff3eu), 0x1u);
L1a780:
    if (c.tracing) c.traceAt(0x1a780);
    // 1501:5770  cmp word ptr [0x8000], 0x6c0  [x1728]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x6c0u, true);
    // 1501:5776  jne 0x577b  [x1728]
    if (!c.zf) goto L1a78b;
L1a788:
    if (c.tracing) c.traceAt(0x1a788);
    // 1501:5778  jmp 0x5edc  [x1]
    goto L1aeec;
L1a78b:
    if (c.tracing) c.traceAt(0x1a78b);
    // 1501:577b  xor si, si  [x1727]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:577d  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:5781  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:5785  jns 0x578d  [x1727]
    if (!c.sf) goto L1a79d;
L1a797:
    if (c.tracing) c.traceAt(0x1a797);
    // 1501:5787  add word ptr [si - 0x73dd], 0x5a0  [x8]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a79d:
    if (c.tracing) c.traceAt(0x1a79d);
    // 1501:578d  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:5791  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:5795  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:579b  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:579f  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:57a3  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:57a9  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:57ac  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:57b0  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:57b4  jns 0x57bc  [x1727]
    if (!c.sf) goto L1a7cc;
L1a7c6:
    if (c.tracing) c.traceAt(0x1a7c6);
    // 1501:57b6  add word ptr [si - 0x73dd], 0x5a0  [x5]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a7cc:
    if (c.tracing) c.traceAt(0x1a7cc);
    // 1501:57bc  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:57c0  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:57c4  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:57ca  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:57ce  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:57d2  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:57d8  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:57db  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:57df  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:57e3  jns 0x57eb  [x1727]
    if (!c.sf) goto L1a7fb;
L1a7f5:
    if (c.tracing) c.traceAt(0x1a7f5);
    // 1501:57e5  add word ptr [si - 0x73dd], 0x5a0  [x8]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a7fb:
    if (c.tracing) c.traceAt(0x1a7fb);
    // 1501:57eb  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:57ef  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:57f3  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:57f9  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:57fd  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:5801  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:5807  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:580a  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:580e  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:5812  jns 0x581a  [x1727]
    if (!c.sf) goto L1a82a;
L1a824:
    if (c.tracing) c.traceAt(0x1a824);
    // 1501:5814  add word ptr [si - 0x73dd], 0x5a0  [x10]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a82a:
    if (c.tracing) c.traceAt(0x1a82a);
    // 1501:581a  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:581e  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:5822  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:5828  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:582c  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:5830  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:5836  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5839  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:583d  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:5841  jns 0x5849  [x1727]
    if (!c.sf) goto L1a859;
L1a853:
    if (c.tracing) c.traceAt(0x1a853);
    // 1501:5843  add word ptr [si - 0x73dd], 0x5a0  [x12]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a859:
    if (c.tracing) c.traceAt(0x1a859);
    // 1501:5849  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:584d  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:5851  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:5857  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:585b  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:585f  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:5865  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5868  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:586c  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:5870  jns 0x5878  [x1727]
    if (!c.sf) goto L1a888;
L1a882:
    if (c.tracing) c.traceAt(0x1a882);
    // 1501:5872  add word ptr [si - 0x73dd], 0x5a0  [x15]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a888:
    if (c.tracing) c.traceAt(0x1a888);
    // 1501:5878  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:587c  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:5880  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:5886  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:588a  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:588e  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:5894  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5897  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:589b  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:589f  jns 0x58a7  [x1727]
    if (!c.sf) goto L1a8b7;
L1a8b1:
    if (c.tracing) c.traceAt(0x1a8b1);
    // 1501:58a1  add word ptr [si - 0x73dd], 0x5a0  [x17]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a8b7:
    if (c.tracing) c.traceAt(0x1a8b7);
    // 1501:58a7  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:58ab  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:58af  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:58b5  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:58b9  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:58bd  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:58c3  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:58c6  mov ax, word ptr [si - 0x73cd]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c33u)));
    // 1501:58ca  sub word ptr [si - 0x73dd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), c.a.x, true));
    // 1501:58ce  jns 0x58d6  [x1727]
    if (!c.sf) goto L1a8e6;
L1a8e0:
    if (c.tracing) c.traceAt(0x1a8e0);
    // 1501:58d0  add word ptr [si - 0x73dd], 0x5a0  [x10]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)), 0x5a0u, true));
L1a8e6:
    if (c.tracing) c.traceAt(0x1a8e6);
    // 1501:58d6  mov ax, word ptr [si - 0x739d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c63u)));
    // 1501:58da  add word ptr [si - 0x73bd], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u)), c.a.x, false));
    // 1501:58de  and word ptr [si - 0x73bd], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c43u))) & (0xffu), false));
    // 1501:58e4  mov ax, word ptr [si - 0x738d]  [x1727]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c73u)));
    // 1501:58e8  add word ptr [si - 0x73ad], ax  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.add<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u)), c.a.x, false));
    // 1501:58ec  and word ptr [si - 0x73ad], 0xff  [x1727]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u), c.logic<16>((c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c53u))) & (0xffu), false));
    // 1501:58f2  add si, 2  [x1727]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:58f5  jmp 0x566c  [x1727]
    goto L1a67c;
L1a908:
    if (c.tracing) c.traceAt(0x1a908);
    // 1501:58f8  mov dx, 0x3da  [x1792]
    c.dx_.x = (uint16_t)(0x3dau);
L1a90b:
    if (c.tracing) c.traceAt(0x1a90b);
    // 1501:58fb  in al, dx  [x83494]
    c.ip = 0x58fcu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1a90c:
    if (c.tracing) c.traceAt(0x1a90c);
    // 1501:58fc  test al, 8  [x110728]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:58fe  je 0x58fb  [x110728]
    if (c.zf) goto L1a90b;
L1a910:
    if (c.tracing) c.traceAt(0x1a910);
    // 1501:5900  in al, dx  [x5720]
    c.ip = 0x5901u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1a911:
    if (c.tracing) c.traceAt(0x1a911);
    // 1501:5901  test al, 8  [x7627]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:5903  jne 0x5900  [x7627]
    if (!c.zf) goto L1a910;
L1a915:
    if (c.tracing) c.traceAt(0x1a915);
    // 1501:5905  ret   [x1792]
    c.ip = c.pop16(); return;
L1a916:
    if (c.tracing) c.traceAt(0x1a916);
    // 1501:5906  mov si, word ptr [0x8009]  [x8791]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8009u)));
    // 1501:590a  mov ax, word ptr [si - 0x7275]  [x8791]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8bu)));
    // 1501:590e  cmp word ptr [si - 0x7263], ax  [x8791]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d9du)), c.a.x, true);
    // 1501:5912  jns 0x5916  [x8791]
    if (!c.sf) goto L1a926;
L1a924:
    if (c.tracing) c.traceAt(0x1a924);
    // 1501:5914  jmp 0x597e  [x4294]
    goto L1a98e;
L1a926:
    if (c.tracing) c.traceAt(0x1a926);
    // 1501:5916  mov word ptr [0x8e58], 0  [x4497]
    c.w16(c.dsb + (uint16_t)(0xffff8e58u), 0x0u);
    // 1501:591c  mov cx, 0xa  [x4497]
    c.c.x = (uint16_t)(0xau);
L1a92f:
    if (c.tracing) c.traceAt(0x1a92f);
    // 1501:591f  push cx  [x44970]
    c.push16(c.c.x);
    // 1501:5920  push si  [x44970]
    c.push16(c.si.x);
    // 1501:5921  mov ax, word ptr [si - 0x7273]  [x44970]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8du)));
    // 1501:5925  sub ax, word ptr [si - 0x7275]  [x44970]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8bu)), true));
    // 1501:5929  dec al  [x44970]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, true));
    // 1501:592b  jns 0x592f  [x44970]
    if (!c.sf) goto L1a93f;
L1a93d:
    if (c.tracing) c.traceAt(0x1a93d);
    // 1501:592d  mov al, 0  [x4050]
    c.a.l = (uint8_t)(0x0u);
L1a93f:
    if (c.tracing) c.traceAt(0x1a93f);
    // 1501:592f  cmp al, 8  [x44970]
    c.sub<8>(c.a.l, 0x8u, true);
    // 1501:5931  jb 0x5935  [x44970]
    if (c.cf) goto L1a945;
L1a943:
    if (c.tracing) c.traceAt(0x1a943);
    // 1501:5933  mov al, 7  [x2]
    c.a.l = (uint8_t)(0x7u);
L1a945:
    if (c.tracing) c.traceAt(0x1a945);
    // 1501:5935  mov byte ptr [0x8e5a], al  [x44970]
    c.w8(c.dsb + (uint16_t)(0x8e5au), c.a.l);
    // 1501:5938  mov di, word ptr [si - 0x721d]  [x44970]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8de3u)));
    // 1501:593c  add di, di  [x44970]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:593e  mov di, word ptr [di - 0x7e89]  [x44970]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffff8177u)));
    // 1501:5942  mov bx, word ptr [si - 0x7275]  [x44970]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8bu)));
    // 1501:5946  shr bx, 3  [x44970]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:5949  add di, bx  [x44970]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:594b  mov word ptr [0x8e5c], di  [x44970]
    c.w16(c.dsb + (uint16_t)(0xffff8e5cu), c.di.x);
    // 1501:594f  mov bx, word ptr [si - 0x7275]  [x44970]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8bu)));
    // 1501:5953  and bl, 7  [x44970]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) & (0x7u), false));
    // 1501:5956  mov byte ptr [0x8e5b], bl  [x44970]
    c.w8(c.dsb + (uint16_t)(0xffff8e5bu), c.b.l);
    // 1501:595a  mov ax, word ptr [si - 0x721d]  [x44970]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8de3u)));
    // 1501:595e  sub ax, word ptr [0x801d]  [x44970]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff801du)), false));
    // 1501:5962  neg ax  [x44970]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:5964  shl ax, 1  [x44970]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:5966  inc ax  [x44970]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
    // 1501:5967  mov word ptr [0x8e56], ax  [x44970]
    c.w16(c.dsb + (uint16_t)(0x8e56u), c.a.x);
    // 1501:596a  mov bp, word ptr cs:[0xc]  [x44970]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xcu)));
    // 1501:596f  call 0x5a08  [x44970]
    c.push16(0x5972u); code_10(c, 0x1aa18u); if (c.ip != 0x5972u) c.badReturn(0x1a97f);
L1a982:
    if (c.tracing) c.traceAt(0x1a982);
    // 1501:5972  inc word ptr [0x8e58]  [x44970]
    c.w16(c.dsb + (uint16_t)(0xffff8e58u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8e58u)), false));
    // 1501:5976  pop si  [x44970]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:5977  add si, 2  [x44970]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:597a  pop cx  [x44970]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:597b  loop 0x591f  [x44970]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a92f;
L1a98d:
    if (c.tracing) c.traceAt(0x1a98d);
    // 1501:597d  ret   [x4497]
    c.ip = c.pop16(); return;
L1a98e:
    if (c.tracing) c.traceAt(0x1a98e);
    // 1501:597e  mov word ptr [0x8e58], 0  [x4294]
    c.w16(c.dsb + (uint16_t)(0xffff8e58u), 0x0u);
    // 1501:5984  mov cx, 0xa  [x4294]
    c.c.x = (uint16_t)(0xau);
L1a997:
    if (c.tracing) c.traceAt(0x1a997);
    // 1501:5987  push cx  [x42940]
    c.push16(c.c.x);
    // 1501:5988  push si  [x42940]
    c.push16(c.si.x);
    // 1501:5989  mov ax, word ptr [si - 0x7275]  [x42940]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8bu)));
    // 1501:598d  sub ax, word ptr [si - 0x7273]  [x42940]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8du)), true));
    // 1501:5991  dec al  [x42940]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, true));
    // 1501:5993  jns 0x5997  [x42940]
    if (!c.sf) goto L1a9a7;
L1a9a5:
    if (c.tracing) c.traceAt(0x1a9a5);
    // 1501:5995  mov al, 0  [x1811]
    c.a.l = (uint8_t)(0x0u);
L1a9a7:
    if (c.tracing) c.traceAt(0x1a9a7);
    // 1501:5997  mov byte ptr [0x8e5a], al  [x42940]
    c.w8(c.dsb + (uint16_t)(0x8e5au), c.a.l);
    // 1501:599a  mov di, word ptr [si - 0x721d]  [x42940]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8de3u)));
    // 1501:599e  add di, di  [x42940]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:59a0  mov di, word ptr [di - 0x7e89]  [x42940]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffff8177u)));
    // 1501:59a4  mov bx, word ptr [si - 0x7273]  [x42940]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8du)));
    // 1501:59a8  shr bx, 3  [x42940]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:59ab  add di, bx  [x42940]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:59ad  mov word ptr [0x8e5c], di  [x42940]
    c.w16(c.dsb + (uint16_t)(0xffff8e5cu), c.di.x);
    // 1501:59b1  mov bx, word ptr [si - 0x7273]  [x42940]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d8du)));
    // 1501:59b5  and bl, 7  [x42940]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) & (0x7u), false));
    // 1501:59b8  mov byte ptr [0x8e5b], bl  [x42940]
    c.w8(c.dsb + (uint16_t)(0xffff8e5bu), c.b.l);
    // 1501:59bc  mov ax, word ptr [si - 0x721d]  [x42940]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8de3u)));
    // 1501:59c0  sub ax, word ptr [0x801d]  [x42940]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff801du)), false));
    // 1501:59c4  neg ax  [x42940]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:59c6  shl ax, 1  [x42940]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:59c8  inc ax  [x42940]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
    // 1501:59c9  mov word ptr [0x8e56], ax  [x42940]
    c.w16(c.dsb + (uint16_t)(0x8e56u), c.a.x);
    // 1501:59cc  mov bp, word ptr cs:[0xe]  [x42940]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xeu)));
    // 1501:59d1  call 0x5a08  [x42940]
    c.push16(0x59d4u); code_10(c, 0x1aa18u); if (c.ip != 0x59d4u) c.badReturn(0x1a9e1);
L1a9e4:
    if (c.tracing) c.traceAt(0x1a9e4);
    // 1501:59d4  inc word ptr [0x8e58]  [x42940]
    c.w16(c.dsb + (uint16_t)(0xffff8e58u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8e58u)), false));
    // 1501:59d8  pop si  [x42940]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:59d9  add si, 2  [x42940]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:59dc  pop cx  [x42940]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:59dd  loop 0x5987  [x42940]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a997;
L1a9ef:
    if (c.tracing) c.traceAt(0x1a9ef);
    // 1501:59df  ret   [x4294]
    c.ip = c.pop16(); return;
L1a9f0:
    if (c.tracing) c.traceAt(0x1a9f0);
    // 1501:59e0  push ds  [x1728]
    c.push16(c.ds);
    // 1501:59e1  mov ax, word ptr cs:[8]  [x1728]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:59e5  mov ds, ax  [x1728]
    c.loadDs(c.a.x);
    // 1501:59e7  mov cx, 0x5b4  [x1728]
    c.c.x = (uint16_t)(0x5b4u);
    // 1501:59ea  mov si, 0x645  [x1728]
    c.si.x = (uint16_t)(0x645u);
    // 1501:59ed  mov di, 0x442  [x1728]
    c.di.x = (uint16_t)(0x442u);
L1aa00:
    if (c.tracing) c.traceAt(0x1aa00);
    // 1501:59f0  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f1u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f1  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f2u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f2  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f3u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f3  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f4u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f4  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f5u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f5  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f6u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f6  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f7u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f7  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f8u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f8  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59f9u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59f9  movsw word ptr es:[di], word ptr [si]  [x252288]
    c.ip = 0x59fau; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:59fa  add si, 0x14  [x252288]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x14u, false));
    // 1501:59fd  add di, 0x14  [x252288]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:5a00  cmp si, 0x1d15  [x252288]
    c.sub<16>(c.si.x, 0x1d15u, true);
    // 1501:5a04  jb 0x59f0  [x252288]
    if (c.cf) goto L1aa00;
L1aa16:
    if (c.tracing) c.traceAt(0x1aa16);
    // 1501:5a06  pop ds  [x1728]
    c.loadDs((uint16_t)c.pop16());
    // 1501:5a07  ret   [x1728]
    c.ip = c.pop16(); return;
L1aa18:
    if (c.tracing) c.traceAt(0x1aa18);
    // 1501:5a08  add bp, word ptr [0x802b]  [x87910]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0xffff802bu)), false));
    // 1501:5a0c  add bp, word ptr [0x8e58]  [x87910]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0xffff8e58u)), false));
    // 1501:5a10  mov cx, word ptr [0x8e56]  [x87910]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e56u)));
    // 1501:5a14  shr cx, 2  [x87910]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), false));
    // 1501:5a17  mov di, word ptr [0x8e5c]  [x87910]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e5cu)));
    // 1501:5a1b  mov si, word ptr [0x8e56]  [x87910]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e56u)));
    // 1501:5a1f  mov ax, 0xa0  [x87910]
    c.a.x = (uint16_t)(0xa0u);
    // 1501:5a22  mul si  [x87910]
    c.mul16(c.si.x);
    // 1501:5a24  sub ax, 0xa0  [x87910]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0xa0u, false));
    // 1501:5a27  add ax, 0x8e5e  [x87910]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x8e5eu, false));
    // 1501:5a2a  mov si, ax  [x87910]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5a2c  mov al, byte ptr [0x8e5b]  [x87910]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x8e5bu)));
    // 1501:5a2f  shl al, 3  [x87910]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x3u) & 31), false));
    // 1501:5a32  add al, byte ptr [0x8e5a]  [x87910]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0xffff8e5au)), false));
    // 1501:5a36  mov bh, al  [x87910]
    c.b.h = (uint8_t)(c.a.l);
    // 1501:5a38  push es  [x87910]
    c.push16(c.es);
    // 1501:5a39  mov ax, word ptr cs:[8]  [x87910]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:5a3d  mov es, ax  [x87910]
    c.loadEs(c.a.x);
    // 1501:5a3f  add di, word ptr [0x8029]  [x87910]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffff8029u)), true));
    // 1501:5a43  mov dx, 0x28  [x87910]
    c.dx_.x = (uint16_t)(0x28u);
L1aa56:
    if (c.tracing) c.traceAt(0x1aa56);
    // 1501:5a46  mov bl, byte ptr ds:[bp]  [x1472567]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5a4a  add bx, bx  [x1472567]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5a4c  mov ax, word ptr [bx]  [x1472567]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5a4e  ror bx, 1  [x1472567]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:5a50  or word ptr es:[di], ax  [x1472567]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:5a53  add di, dx  [x1472567]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5a55  lodsw ax, word ptr [si]  [x1472567]
    c.ip = 0x5a56u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5a56  add bp, ax  [x1472567]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:5a58  mov bl, byte ptr ds:[bp]  [x1472567]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5a5c  add bx, bx  [x1472567]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5a5e  mov ax, word ptr [bx]  [x1472567]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5a60  ror bx, 1  [x1472567]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:5a62  or word ptr es:[di], ax  [x1472567]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:5a65  add di, dx  [x1472567]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5a67  lodsw ax, word ptr [si]  [x1472567]
    c.ip = 0x5a68u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5a68  add bp, ax  [x1472567]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:5a6a  mov bl, byte ptr ds:[bp]  [x1472567]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5a6e  add bx, bx  [x1472567]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5a70  mov ax, word ptr [bx]  [x1472567]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5a72  ror bx, 1  [x1472567]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:5a74  or word ptr es:[di], ax  [x1472567]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:5a77  add di, dx  [x1472567]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5a79  lodsw ax, word ptr [si]  [x1472567]
    c.ip = 0x5a7au; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5a7a  add bp, ax  [x1472567]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:5a7c  mov bl, byte ptr ds:[bp]  [x1472567]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5a80  add bx, bx  [x1472567]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5a82  mov ax, word ptr [bx]  [x1472567]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5a84  ror bx, 1  [x1472567]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:5a86  or word ptr es:[di], ax  [x1472567]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:5a89  add di, dx  [x1472567]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5a8b  lodsw ax, word ptr [si]  [x1472567]
    c.ip = 0x5a8cu; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5a8c  add bp, ax  [x1472567]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, true));
    // 1501:5a8e  loop 0x5a46  [x1472567]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa56;
L1aaa0:
    if (c.tracing) c.traceAt(0x1aaa0);
    // 1501:5a90  mov cx, word ptr [0x8e56]  [x87910]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e56u)));
    // 1501:5a94  and cx, 3  [x87910]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
    // 1501:5a97  je 0x5aad  [x87910]
    if (c.zf) goto L1aabd;
L1aaa9:
    if (c.tracing) c.traceAt(0x1aaa9);
    // 1501:5a99  mov bl, byte ptr ds:[bp]  [x184544]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5a9d  add bx, bx  [x184544]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5a9f  mov ax, word ptr [bx]  [x184544]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5aa1  ror bx, 1  [x184544]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:5aa3  or word ptr es:[di], ax  [x184544]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:5aa6  add di, dx  [x184544]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5aa8  lodsw ax, word ptr [si]  [x184544]
    c.ip = 0x5aa9u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5aa9  add bp, ax  [x184544]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, true));
    // 1501:5aab  loop 0x5a99  [x184544]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aaa9;
L1aabd:
    if (c.tracing) c.traceAt(0x1aabd);
    // 1501:5aad  pop es  [x87910]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5aae  ret   [x87910]
    c.ip = c.pop16(); return;
L1aabf:
    if (c.tracing) c.traceAt(0x1aabf);
    // 1501:5aaf  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:5ab1  mov byte ptr [0x8e3d], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xffff8e3du), 0x0u);
    // 1501:5ab6  mov cx, 8  [x1]
    c.c.x = (uint16_t)(0x8u);
L1aac9:
    if (c.tracing) c.traceAt(0x1aac9);
    // 1501:5ab9  push cx  [x8]
    c.push16(c.c.x);
    // 1501:5aba  mov word ptr [0x8e3b], 1  [x8]
    c.w16(c.dsb + (uint16_t)(0xffff8e3bu), 0x1u);
    // 1501:5ac0  mov cx, 8  [x8]
    c.c.x = (uint16_t)(0x8u);
L1aad3:
    if (c.tracing) c.traceAt(0x1aad3);
    // 1501:5ac3  push cx  [x64]
    c.push16(c.c.x);
    // 1501:5ac4  mov cx, 0x100  [x64]
    c.c.x = (uint16_t)(0x100u);
    // 1501:5ac7  xor ax, ax  [x64]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1aad9:
    if (c.tracing) c.traceAt(0x1aad9);
    // 1501:5ac9  pushaw   [x16384]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:5aca  push si  [x16384]
    c.push16(c.si.x);
    // 1501:5acb  call 0x5af3  [x16384]
    c.push16(0x5aceu); code_10(c, 0x1ab03u); if (c.ip != 0x5aceu) c.badReturn(0x1aadb);
L1aade:
    if (c.tracing) c.traceAt(0x1aade);
    // 1501:5ace  pop si  [x16384]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:5acf  mov cl, byte ptr [0x8e3d]  [x16384]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffff8e3du)));
    // 1501:5ad3  xchg ah, al  [x16384]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5ad5  shr ax, cl  [x16384]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)(c.c.l & 31), false));
    // 1501:5ad7  xchg ah, al  [x16384]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5ad9  mov word ptr [si], ax  [x16384]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.a.x);
    // 1501:5add  popaw   [x16384]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:5ade  inc ax  [x16384]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:5adf  add si, 2  [x16384]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:5ae2  loop 0x5ac9  [x16384]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aad9;
L1aaf4:
    if (c.tracing) c.traceAt(0x1aaf4);
    // 1501:5ae4  inc word ptr [0x8e3b]  [x64]
    c.w16(c.dsb + (uint16_t)(0xffff8e3bu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8e3bu)), true));
    // 1501:5ae8  pop cx  [x64]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5ae9  loop 0x5ac3  [x64]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aad3;
L1aafb:
    if (c.tracing) c.traceAt(0x1aafb);
    // 1501:5aeb  inc byte ptr [0x8e3d]  [x8]
    c.w8(c.dsb + (uint16_t)(0xffff8e3du), c.inc<8>(c.r8(c.dsb + (uint16_t)(0xffff8e3du)), true));
    // 1501:5aef  pop cx  [x8]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5af0  loop 0x5ab9  [x8]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aac9;
L1ab02:
    if (c.tracing) c.traceAt(0x1ab02);
    // 1501:5af2  ret   [x1]
    c.ip = c.pop16(); return;
L1ab03:
    if (c.tracing) c.traceAt(0x1ab03);
    // 1501:5af3  push ax  [x16384]
    c.push16(c.a.x);
    // 1501:5af4  mov ax, word ptr [0x8e3b]  [x16384]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8e3bu)));
    // 1501:5af7  mov bx, 8  [x16384]
    c.b.x = (uint16_t)(0x8u);
    // 1501:5afa  cdq   [x16384]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:5afb  div bx  [x16384]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x5afbu); }   // #DE: int 0, then again
    // 1501:5afd  mov word ptr [0x8e52], dx  [x16384]
    c.w16(c.dsb + (uint16_t)(0xffff8e52u), c.dx_.x);
    // 1501:5b01  mov word ptr [0x8e50], ax  [x16384]
    c.w16(c.dsb + (uint16_t)(0x8e50u), c.a.x);
    // 1501:5b04  mov word ptr [0x8e54], 0  [x16384]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), 0x0u);
    // 1501:5b0a  pop bx  [x16384]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5b0b  mov cx, 8  [x16384]
    c.c.x = (uint16_t)(0x8u);
    // 1501:5b0e  xor ax, ax  [x16384]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:5b10  mov bp, word ptr [0x8e52]  [x16384]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e52u)));
    // 1501:5b14  mov dx, 8  [x16384]
    c.dx_.x = (uint16_t)(0x8u);
    // 1501:5b17  xor si, si  [x16384]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1ab29:
    if (c.tracing) c.traceAt(0x1ab29);
    // 1501:5b19  and al, byte ptr [si - 0x71c2]  [x131072]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.si.x + 0xffff8e3eu))), true));
    // 1501:5b1d  rcl bl, 1  [x131072]
    c.b.l = (uint8_t)(c.rcl<8>(c.b.l, (int)((0x1u) & 31)));
    // 1501:5b1f  jae 0x5b25  [x131072]
    if (!c.cf) goto L1ab35;
L1ab31:
    if (c.tracing) c.traceAt(0x1ab31);
    // 1501:5b21  or al, byte ptr [si - 0x71ba]  [x65536]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.r8(c.dsb + (uint16_t)(c.si.x + 0xffff8e46u))), true));
L1ab35:
    if (c.tracing) c.traceAt(0x1ab35);
    // 1501:5b25  add si, word ptr [0x8e50]  [x131072]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8e50u)), false));
    // 1501:5b29  add word ptr [0x8e54], bp  [x131072]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.bp.x, false));
    // 1501:5b2d  cmp word ptr [0x8e54], dx  [x131072]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.dx_.x, true);
    // 1501:5b31  jb 0x5b38  [x131072]
    if (c.cf) goto L1ab48;
L1ab43:
    if (c.tracing) c.traceAt(0x1ab43);
    // 1501:5b33  sub word ptr [0x8e54], dx  [x57344]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.dx_.x, true));
    // 1501:5b37  inc si  [x57344]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L1ab48:
    if (c.tracing) c.traceAt(0x1ab48);
    // 1501:5b38  loop 0x5b19  [x131072]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ab29;
L1ab4a:
    if (c.tracing) c.traceAt(0x1ab4a);
    // 1501:5b3a  ret   [x16384]
    c.ip = c.pop16(); return;
L1ab4b:
    if (c.tracing) c.traceAt(0x1ab4b);
    // 1501:5b3b  mov word ptr [0x8e56], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8e56u), 0x1u);
    // 1501:5b41  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:5b43  mov cx, 0x64  [x1]
    c.c.x = (uint16_t)(0x64u);
L1ab56:
    if (c.tracing) c.traceAt(0x1ab56);
    // 1501:5b46  push cx  [x100]
    c.push16(c.c.x);
    // 1501:5b47  push si  [x100]
    c.push16(c.si.x);
    // 1501:5b48  mov word ptr [0x8e4e], 0xa  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8e4eu), 0xau);
    // 1501:5b4e  mov ax, 0x50  [x100]
    c.a.x = (uint16_t)(0x50u);
    // 1501:5b51  cdq   [x100]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:5b52  div word ptr [0x8e56]  [x100]
    while (!c.div16(c.r16(c.dsb + (uint16_t)(0xffff8e56u)))) { c.d32 = false; c.intr(0, 0x5b52u); }   // #DE: int 0, then again
    // 1501:5b56  mov word ptr [0x8e52], dx  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8e52u), c.dx_.x);
    // 1501:5b5a  mov bx, 0xa  [x100]
    c.b.x = (uint16_t)(0xau);
    // 1501:5b5d  mul bx  [x100]
    c.mul16(c.b.x);
    // 1501:5b5f  mov word ptr [0x8e50], ax  [x100]
    c.w16(c.dsb + (uint16_t)(0x8e50u), c.a.x);
    // 1501:5b62  mov word ptr [0x8e54], 0  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), 0x0u);
    // 1501:5b68  mov cx, 0x50  [x100]
    c.c.x = (uint16_t)(0x50u);
    // 1501:5b6b  xor ax, ax  [x100]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:5b6d  mov bx, word ptr [0x8e52]  [x100]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e52u)));
    // 1501:5b71  mov dx, word ptr [0x8e56]  [x100]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8e56u)));
L1ab85:
    if (c.tracing) c.traceAt(0x1ab85);
    // 1501:5b75  mov bp, ax  [x8000]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:5b77  add ax, word ptr [0x8e50]  [x8000]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff8e50u)), false));
    // 1501:5b7b  add word ptr [0x8e54], bx  [x8000]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.b.x, false));
    // 1501:5b7f  cmp word ptr [0x8e54], dx  [x8000]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.dx_.x, true);
    // 1501:5b83  jb 0x5b8d  [x8000]
    if (c.cf) goto L1ab9d;
L1ab95:
    if (c.tracing) c.traceAt(0x1ab95);
    // 1501:5b85  sub word ptr [0x8e54], dx  [x3721]
    c.w16(c.dsb + (uint16_t)(0xffff8e54u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8e54u)), c.dx_.x, false));
    // 1501:5b89  add ax, word ptr [0x8e4e]  [x3721]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff8e4eu)), true));
L1ab9d:
    if (c.tracing) c.traceAt(0x1ab9d);
    // 1501:5b8d  mov word ptr [si - 0x71a2], ax  [x8000]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8e5eu), c.a.x);
    // 1501:5b91  sub word ptr [si - 0x71a2], bp  [x8000]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8e5eu), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8e5eu)), c.bp.x, false));
    // 1501:5b95  add si, 2  [x8000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:5b98  loop 0x5b75  [x8000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ab85;
L1abaa:
    if (c.tracing) c.traceAt(0x1abaa);
    // 1501:5b9a  inc word ptr [0x8e56]  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8e56u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8e56u)), false));
    // 1501:5b9e  pop si  [x100]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:5b9f  add si, 0xa0  [x100]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, true));
    // 1501:5ba3  pop cx  [x100]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5ba4  loop 0x5b46  [x100]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ab56;
L1abb6:
    if (c.tracing) c.traceAt(0x1abb6);
    // 1501:5ba6  ret   [x1]
    c.ip = c.pop16(); return;
L1abb7:
    if (c.tracing) c.traceAt(0x1abb7);
    // 1501:5ba7  xor bp, bp  [x8791]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:5ba9  mov cx, 0x8000  [x8791]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:5bac  xor di, di  [x8791]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1abbe:
    if (c.tracing) c.traceAt(0x1abbe);
    // 1501:5bae  mov bp, word ptr [di - 0x7ff5]  [x70328]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffff800bu)));
    // 1501:5bb2  mov ax, word ptr ds:[bp - 0x74eb]  [x70328]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b15u)));
    // 1501:5bb7  mov word ptr ds:[bp - 0x737b], ax  [x70328]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8c85u), c.a.x);
    // 1501:5bbc  mov si, word ptr [0x8c21]  [x70328]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8c21u)));
    // 1501:5bc0  mov si, word ptr [si - 0x73dd]  [x70328]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8c23u)));
    // 1501:5bc4  mov ax, word ptr ds:[bp - 0x74ed]  [x70328]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b13u)));
    // 1501:5bc9  imul word ptr [si - 0x7b91]  [x70328]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff846fu)));
    // 1501:5bcd  idiv cx  [x70328]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5bcdu); }   // #DE: int 0, then again
    // 1501:5bcf  push ax  [x70328]
    c.push16(c.a.x);
    // 1501:5bd0  mov ax, word ptr ds:[bp - 0x74e9]  [x70328]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b17u)));
    // 1501:5bd5  imul word ptr [si - 0x7cf9]  [x70328]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8307u)));
    // 1501:5bd9  idiv cx  [x70328]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5bd9u); }   // #DE: int 0, then again
    // 1501:5bdb  pop bx  [x70328]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5bdc  sub bx, ax  [x70328]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:5bde  neg bx  [x70328]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:5be0  mov word ptr ds:[bp - 0x737d], bx  [x70328]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8c83u), c.b.x);
    // 1501:5be5  mov ax, word ptr ds:[bp - 0x74e9]  [x70328]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b17u)));
    // 1501:5bea  imul word ptr [si - 0x7b91]  [x70328]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff846fu)));
    // 1501:5bee  idiv cx  [x70328]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5beeu); }   // #DE: int 0, then again
    // 1501:5bf0  push ax  [x70328]
    c.push16(c.a.x);
    // 1501:5bf1  mov ax, word ptr ds:[bp - 0x74ed]  [x70328]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b13u)));
    // 1501:5bf6  imul word ptr [si - 0x7cf9]  [x70328]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8307u)));
    // 1501:5bfa  idiv cx  [x70328]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5bfau); }   // #DE: int 0, then again
    // 1501:5bfc  pop bx  [x70328]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5bfd  add bx, ax  [x70328]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:5bff  mov word ptr ds:[bp - 0x7379], bx  [x70328]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8c87u), c.b.x);
    // 1501:5c04  add di, 2  [x70328]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:5c07  cmp di, 0x10  [x70328]
    c.sub<16>(c.di.x, 0x10u, true);
    // 1501:5c0a  jae 0x5c0e  [x70328]
    if (!c.cf) goto L1ac1e;
L1ac1c:
    if (c.tracing) c.traceAt(0x1ac1c);
    // 1501:5c0c  jmp 0x5bae  [x61537]
    goto L1abbe;
L1ac1e:
    if (c.tracing) c.traceAt(0x1ac1e);
    // 1501:5c0e  ret   [x8791]
    c.ip = c.pop16(); return;
L1ac1f:
    if (c.tracing) c.traceAt(0x1ac1f);
    // 1501:5c0f  xor bp, bp  [x8791]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:5c11  xor di, di  [x8791]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ac23:
    if (c.tracing) c.traceAt(0x1ac23);
    // 1501:5c13  mov si, word ptr ds:[bp - 0x7379]  [x386804]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8c87u)));
    // 1501:5c18  mov bx, word ptr ds:[bp - 0x737d]  [x386804]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8c83u)));
    // 1501:5c1d  mov cx, word ptr [0x8c85]  [x386804]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8c85u)));
    // 1501:5c21  add si, word ptr [0x8b0f]  [x386804]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8b0fu)), false));
    // 1501:5c25  mov ax, 0xc8  [x386804]
    c.a.x = (uint16_t)(0xc8u);
    // 1501:5c28  imul bx  [x386804]
    c.imul16(c.b.x);
    // 1501:5c2a  idiv si  [x386804]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x5c2au); }   // #DE: int 0, then again
    // 1501:5c2c  add ax, word ptr [0x801b]  [x386804]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff801bu)), false));
    // 1501:5c30  mov word ptr [di - 0x7275], ax  [x386804]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffff8d8bu), c.a.x);
    // 1501:5c34  mov ax, 0xc8  [x386804]
    c.a.x = (uint16_t)(0xc8u);
    // 1501:5c37  imul cx  [x386804]
    c.imul16(c.c.x);
    // 1501:5c39  idiv si  [x386804]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x5c39u); }   // #DE: int 0, then again
    // 1501:5c3b  add ax, word ptr [0x801d]  [x386804]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff801du)), false));
    // 1501:5c3f  mov word ptr [di - 0x721d], ax  [x386804]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffff8de3u), c.a.x);
    // 1501:5c43  add bp, 6  [x386804]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:5c46  add di, 2  [x386804]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:5c49  cmp di, 0x58  [x386804]
    c.sub<16>(c.di.x, 0x58u, true);
    // 1501:5c4c  jne 0x5c13  [x386804]
    if (!c.zf) goto L1ac23;
L1ac5e:
    if (c.tracing) c.traceAt(0x1ac5e);
    // 1501:5c4e  ret   [x8791]
    c.ip = c.pop16(); return;
L1ac5f:
    if (c.tracing) c.traceAt(0x1ac5f);
    // 1501:5c4f  mov word ptr [0x802d], 0xfe0c  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff802du), 0xfe0cu);
    // 1501:5c55  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ac67:
    if (c.tracing) c.traceAt(0x1ac67);
    // 1501:5c57  mov cx, 0xa  [x910]
    c.c.x = (uint16_t)(0xau);
    // 1501:5c5a  mov word ptr [0x802f], 1  [x910]
    c.w16(c.dsb + (uint16_t)(0xffff802fu), 0x1u);
    // 1501:5c60  xor dx, dx  [x910]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:5c62  mov ax, word ptr [0x802d]  [x910]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x802du)));
    // 1501:5c65  cmp word ptr [0x802d], 0  [x910]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff802du)), 0x0u, true);
    // 1501:5c6a  jns 0x5c86  [x910]
    if (!c.sf) goto L1ac96;
L1ac7c:
    if (c.tracing) c.traceAt(0x1ac7c);
    // 1501:5c6c  not dx  [x500]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:5c6e  neg word ptr [0x802f]  [x500]
    c.w16(c.dsb + (uint16_t)(0xffff802fu), c.neg<16>(c.r16(c.dsb + (uint16_t)(0xffff802fu)), false));
    // 1501:5c72  idiv cx  [x500]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5c72u); }   // #DE: int 0, then again
    // 1501:5c74  mov word ptr [0x8031], ax  [x500]
    c.w16(c.dsb + (uint16_t)(0x8031u), c.a.x);
    // 1501:5c77  neg dx  [x500]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:5c79  mov word ptr [0x8033], dx  [x500]
    c.w16(c.dsb + (uint16_t)(0xffff8033u), c.dx_.x);
    // 1501:5c7d  neg ax  [x500]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:5c7f  sar ax, 1  [x500]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:5c81  mov word ptr [0x8035], ax  [x500]
    c.w16(c.dsb + (uint16_t)(0x8035u), c.a.x);
    // 1501:5c84  jmp 0x5c94  [x500]
    goto L1aca4;
L1ac96:
    if (c.tracing) c.traceAt(0x1ac96);
    // 1501:5c86  idiv cx  [x410]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5c86u); }   // #DE: int 0, then again
    // 1501:5c88  mov word ptr [0x8031], ax  [x410]
    c.w16(c.dsb + (uint16_t)(0x8031u), c.a.x);
    // 1501:5c8b  mov word ptr [0x8033], dx  [x410]
    c.w16(c.dsb + (uint16_t)(0xffff8033u), c.dx_.x);
    // 1501:5c8f  sar ax, 1  [x410]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:5c91  mov word ptr [0x8035], ax  [x410]
    c.w16(c.dsb + (uint16_t)(0x8035u), c.a.x);
L1aca4:
    if (c.tracing) c.traceAt(0x1aca4);
    // 1501:5c94  xor bx, bx  [x910]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:5c96  mov cx, 0xa  [x910]
    c.c.x = (uint16_t)(0xau);
L1aca9:
    if (c.tracing) c.traceAt(0x1aca9);
    // 1501:5c99  mov dx, 0  [x9100]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:5c9c  add dx, word ptr [0x8031]  [x9100]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0xffff8031u)), false));
    // 1501:5ca0  mov ax, word ptr [0x8033]  [x9100]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8033u)));
    // 1501:5ca3  add word ptr [0x8035], ax  [x9100]
    c.w16(c.dsb + (uint16_t)(0xffff8035u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8035u)), c.a.x, false));
    // 1501:5ca7  cmp word ptr [0x8035], 0xa  [x9100]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8035u)), 0xau, true);
    // 1501:5cac  jl 0x5cb7  [x9100]
    if ((c.sf != c.of)) goto L1acc7;
L1acbe:
    if (c.tracing) c.traceAt(0x1acbe);
    // 1501:5cae  sub word ptr [0x8035], 0xa  [x4706]
    c.w16(c.dsb + (uint16_t)(0xffff8035u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8035u)), 0xau, false));
    // 1501:5cb3  add dx, word ptr [0x802f]  [x4706]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0xffff802fu)), true));
L1acc7:
    if (c.tracing) c.traceAt(0x1acc7);
    // 1501:5cb7  mov word ptr cs:[bx + di + 0x10], dx  [x9100]
    c.w16(c.csb + (uint16_t)(c.b.x + c.di.x + 0x10u), c.dx_.x);
    // 1501:5cbc  add bx, 2  [x9100]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:5cbf  loop 0x5c99  [x9100]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aca9;
L1acd1:
    if (c.tracing) c.traceAt(0x1acd1);
    // 1501:5cc1  add di, 0x16  [x910]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x16u, false));
    // 1501:5cc4  add word ptr [0x802d], 1  [x910]
    c.w16(c.dsb + (uint16_t)(0xffff802du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff802du)), 0x1u, false));
    // 1501:5cc9  cmp di, 0x4e20  [x910]
    c.sub<16>(c.di.x, 0x4e20u, true);
    // 1501:5ccd  jb 0x5c57  [x910]
    if (c.cf) goto L1ac67;
L1acdf:
    if (c.tracing) c.traceAt(0x1acdf);
    // 1501:5ccf  ret   [x1]
    c.ip = c.pop16(); return;
L1ace0:
    if (c.tracing) c.traceAt(0x1ace0);
    // 1501:5cd0  xor bx, bx  [x8791]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1ace2:
    if (c.tracing) c.traceAt(0x1ace2);
    // 1501:5cd2  mov ax, word ptr [bx - 0x7341]  [x35164]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8cbfu)));
    // 1501:5cd6  sub ax, word ptr [bx - 0x737d]  [x35164]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8c83u)), false));
    // 1501:5cda  add ax, 0x1f4  [x35164]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1f4u, false));
    // 1501:5cdd  mov bp, 0x16  [x35164]
    c.bp.x = (uint16_t)(0x16u);
    // 1501:5ce0  imul bp  [x35164]
    c.imul16(c.bp.x);
    // 1501:5ce2  mov si, ax  [x35164]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5ce4  mov ax, word ptr [bx - 0x737d]  [x35164]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8c83u)));
    // 1501:5ce8  xor di, di  [x35164]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1acfa:
    if (c.tracing) c.traceAt(0x1acfa);
    // 1501:5cea  mov word ptr [bx + di - 0x737d], ax  [x386804]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0xffff8c83u), c.a.x);
    // 1501:5cee  add ax, word ptr cs:[si + 0x10]  [x386804]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0x10u)), false));
    // 1501:5cf3  add si, 2  [x386804]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5cf6  add di, 6  [x386804]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:5cf9  cmp di, 0x42  [x386804]
    c.sub<16>(c.di.x, 0x42u, true);
    // 1501:5cfc  jb 0x5cea  [x386804]
    if (c.cf) goto L1acfa;
L1ad0e:
    if (c.tracing) c.traceAt(0x1ad0e);
    // 1501:5cfe  mov ax, word ptr [bx - 0x733d]  [x35164]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8cc3u)));
    // 1501:5d02  sub ax, word ptr [bx - 0x7379]  [x35164]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8c87u)), false));
    // 1501:5d06  add ax, 0x1f4  [x35164]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1f4u, false));
    // 1501:5d09  mov bp, 0x16  [x35164]
    c.bp.x = (uint16_t)(0x16u);
    // 1501:5d0c  imul bp  [x35164]
    c.imul16(c.bp.x);
    // 1501:5d0e  mov si, ax  [x35164]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5d10  mov ax, word ptr [bx - 0x7379]  [x35164]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8c87u)));
    // 1501:5d14  mov di, 4  [x35164]
    c.di.x = (uint16_t)(0x4u);
L1ad27:
    if (c.tracing) c.traceAt(0x1ad27);
    // 1501:5d17  mov word ptr [bx + di - 0x737d], ax  [x386804]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0xffff8c83u), c.a.x);
    // 1501:5d1b  add ax, word ptr cs:[si + 0x10]  [x386804]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0x10u)), false));
    // 1501:5d20  add si, 2  [x386804]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5d23  add di, 6  [x386804]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:5d26  cmp di, 0x42  [x386804]
    c.sub<16>(c.di.x, 0x42u, true);
    // 1501:5d29  jb 0x5d17  [x386804]
    if (c.cf) goto L1ad27;
L1ad3b:
    if (c.tracing) c.traceAt(0x1ad3b);
    // 1501:5d2b  add bx, 0x42  [x35164]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x42u, false));
    // 1501:5d2e  cmp bx, 0x108  [x35164]
    c.sub<16>(c.b.x, 0x108u, true);
    // 1501:5d32  jb 0x5cd2  [x35164]
    if (c.cf) goto L1ace2;
L1ad44:
    if (c.tracing) c.traceAt(0x1ad44);
    // 1501:5d34  ret   [x8791]
    c.ip = c.pop16(); return;
L1ad45:
    if (c.tracing) c.traceAt(0x1ad45);
    // 1501:5d35  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1ad47:
    if (c.tracing) c.traceAt(0x1ad47);
    // 1501:5d37  mov al, byte ptr [si - 0x3322]  [x6400]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffccdeu)));
    // 1501:5d3b  xor ah, ah  [x6400]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:5d3d  test al, 1  [x6400]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:5d3f  je 0x5d44  [x6400]
    if (c.zf) goto L1ad54;
L1ad51:
    if (c.tracing) c.traceAt(0x1ad51);
    // 1501:5d41  or ah, 0x80  [x2757]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x80u), true));
L1ad54:
    if (c.tracing) c.traceAt(0x1ad54);
    // 1501:5d44  test al, 2  [x6400]
    c.logic<8>((c.a.l) & (0x2u), true);
    // 1501:5d46  je 0x5d4b  [x6400]
    if (c.zf) goto L1ad5b;
L1ad58:
    if (c.tracing) c.traceAt(0x1ad58);
    // 1501:5d48  or ah, 0x40  [x2802]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x40u), true));
L1ad5b:
    if (c.tracing) c.traceAt(0x1ad5b);
    // 1501:5d4b  test al, 4  [x6400]
    c.logic<8>((c.a.l) & (0x4u), true);
    // 1501:5d4d  je 0x5d52  [x6400]
    if (c.zf) goto L1ad62;
L1ad5f:
    if (c.tracing) c.traceAt(0x1ad5f);
    // 1501:5d4f  or ah, 0x20  [x2698]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x20u), true));
L1ad62:
    if (c.tracing) c.traceAt(0x1ad62);
    // 1501:5d52  test al, 8  [x6400]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:5d54  je 0x5d59  [x6400]
    if (c.zf) goto L1ad69;
L1ad66:
    if (c.tracing) c.traceAt(0x1ad66);
    // 1501:5d56  or ah, 0x10  [x2658]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x10u), true));
L1ad69:
    if (c.tracing) c.traceAt(0x1ad69);
    // 1501:5d59  test al, 0x10  [x6400]
    c.logic<8>((c.a.l) & (0x10u), true);
    // 1501:5d5b  je 0x5d60  [x6400]
    if (c.zf) goto L1ad70;
L1ad6d:
    if (c.tracing) c.traceAt(0x1ad6d);
    // 1501:5d5d  or ah, 8  [x2743]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x8u), true));
L1ad70:
    if (c.tracing) c.traceAt(0x1ad70);
    // 1501:5d60  test al, 0x20  [x6400]
    c.logic<8>((c.a.l) & (0x20u), true);
    // 1501:5d62  je 0x5d67  [x6400]
    if (c.zf) goto L1ad77;
L1ad74:
    if (c.tracing) c.traceAt(0x1ad74);
    // 1501:5d64  or ah, 4  [x2714]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x4u), true));
L1ad77:
    if (c.tracing) c.traceAt(0x1ad77);
    // 1501:5d67  test al, 0x40  [x6400]
    c.logic<8>((c.a.l) & (0x40u), true);
    // 1501:5d69  je 0x5d6e  [x6400]
    if (c.zf) goto L1ad7e;
L1ad7b:
    if (c.tracing) c.traceAt(0x1ad7b);
    // 1501:5d6b  or ah, 2  [x2748]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x2u), true));
L1ad7e:
    if (c.tracing) c.traceAt(0x1ad7e);
    // 1501:5d6e  test al, 0x80  [x6400]
    c.logic<8>((c.a.l) & (0x80u), true);
    // 1501:5d70  je 0x5d75  [x6400]
    if (c.zf) goto L1ad85;
L1ad82:
    if (c.tracing) c.traceAt(0x1ad82);
    // 1501:5d72  or ah, 1  [x2772]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (0x1u), true));
L1ad85:
    if (c.tracing) c.traceAt(0x1ad85);
    // 1501:5d75  mov byte ptr [si - 0x1a22], ah  [x6400]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xffffe5deu), c.a.h);
    // 1501:5d79  inc si  [x6400]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:5d7a  cmp si, 0x1900  [x6400]
    c.sub<16>(c.si.x, 0x1900u, true);
    // 1501:5d7e  jb 0x5d37  [x6400]
    if (c.cf) goto L1ad47;
L1ad90:
    if (c.tracing) c.traceAt(0x1ad90);
    // 1501:5d80  ret   [x1]
    c.ip = c.pop16(); return;
L1ad91:
    if (c.tracing) c.traceAt(0x1ad91);
    // 1501:5d81  push es  [x1]
    c.push16(c.es);
    // 1501:5d82  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:5d85  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:5d87  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5d8a  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:5d8d  out dx, ax  [x1]
    c.ip = 0x5d8eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d8e  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:5d91  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:5d94  mov di, 0x41a  [x1]
    c.di.x = (uint16_t)(0x41au);
L1ada7:
    if (c.tracing) c.traceAt(0x1ada7);
    // 1501:5d97  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L1ada9:
    if (c.tracing) c.traceAt(0x1ada9);
    // 1501:5d99  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:5d9c  mov di, 0x1b12  [x1]
    c.di.x = (uint16_t)(0x1b12u);
L1adaf:
    if (c.tracing) c.traceAt(0x1adaf);
    // 1501:5d9f  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L1adb1:
    if (c.tracing) c.traceAt(0x1adb1);
    // 1501:5da1  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:5da3  mov ah, 0x80  [x1]
    c.a.h = (uint8_t)(0x80u);
    // 1501:5da5  mov di, 0x419  [x1]
    c.di.x = (uint16_t)(0x419u);
L1adb8:
    if (c.tracing) c.traceAt(0x1adb8);
    // 1501:5da8  mov byte ptr es:[di], al  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:5dab  mov byte ptr es:[di + 0x15], ah  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 1501:5daf  add di, 0x28  [x148]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:5db2  cmp di, 0x1b30  [x148]
    c.sub<16>(c.di.x, 0x1b30u, true);
    // 1501:5db6  jb 0x5da8  [x148]
    if (c.cf) goto L1adb8;
L1adc8:
    if (c.tracing) c.traceAt(0x1adc8);
    // 1501:5db8  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5dbb  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:5dbe  out dx, ax  [x1]
    c.ip = 0x5dbfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5dbf  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:5dc2  mov di, 0x442  [x1]
    c.di.x = (uint16_t)(0x442u);
L1add5:
    if (c.tracing) c.traceAt(0x1add5);
    // 1501:5dc5  mov cx, 0xa  [x146]
    c.c.x = (uint16_t)(0xau);
L1add8:
    if (c.tracing) c.traceAt(0x1add8);
    // 1501:5dc8  rep stosw word ptr es:[di], ax  [x1606]
    c.stos<16, false>(1);
L1adda:
    if (c.tracing) c.traceAt(0x1adda);
    // 1501:5dca  add di, 0x14  [x146]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:5dcd  cmp di, 0x1b08  [x146]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:5dd1  jb 0x5dc5  [x146]
    if (c.cf) goto L1add5;
L1ade3:
    if (c.tracing) c.traceAt(0x1ade3);
    // 1501:5dd3  mov ax, 0xa800  [x1]
    c.a.x = (uint16_t)(0xa800u);
    // 1501:5dd6  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:5dd8  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5ddb  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:5dde  out dx, ax  [x1]
    c.ip = 0x5ddfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5ddf  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:5de2  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:5de5  mov di, 0x41a  [x1]
    c.di.x = (uint16_t)(0x41au);
L1adf8:
    if (c.tracing) c.traceAt(0x1adf8);
    // 1501:5de8  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L1adfa:
    if (c.tracing) c.traceAt(0x1adfa);
    // 1501:5dea  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:5ded  mov di, 0x1b12  [x1]
    c.di.x = (uint16_t)(0x1b12u);
L1ae00:
    if (c.tracing) c.traceAt(0x1ae00);
    // 1501:5df0  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L1ae02:
    if (c.tracing) c.traceAt(0x1ae02);
    // 1501:5df2  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:5df4  mov ah, 0x80  [x1]
    c.a.h = (uint8_t)(0x80u);
    // 1501:5df6  mov di, 0x419  [x1]
    c.di.x = (uint16_t)(0x419u);
L1ae09:
    if (c.tracing) c.traceAt(0x1ae09);
    // 1501:5df9  mov byte ptr es:[di], al  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:5dfc  mov byte ptr es:[di + 0x15], ah  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 1501:5e00  add di, 0x28  [x148]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:5e03  cmp di, 0x1b30  [x148]
    c.sub<16>(c.di.x, 0x1b30u, true);
    // 1501:5e07  jb 0x5df9  [x148]
    if (c.cf) goto L1ae09;
L1ae19:
    if (c.tracing) c.traceAt(0x1ae19);
    // 1501:5e09  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5e0c  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:5e0f  out dx, ax  [x1]
    c.ip = 0x5e10u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5e10  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:5e13  mov di, 0x442  [x1]
    c.di.x = (uint16_t)(0x442u);
L1ae26:
    if (c.tracing) c.traceAt(0x1ae26);
    // 1501:5e16  mov cx, 0xa  [x146]
    c.c.x = (uint16_t)(0xau);
L1ae29:
    if (c.tracing) c.traceAt(0x1ae29);
    // 1501:5e19  rep stosw word ptr es:[di], ax  [x1606]
    c.stos<16, false>(1);
L1ae2b:
    if (c.tracing) c.traceAt(0x1ae2b);
    // 1501:5e1b  add di, 0x14  [x146]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:5e1e  cmp di, 0x1b08  [x146]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:5e22  jb 0x5e16  [x146]
    if (c.cf) goto L1ae26;
L1ae34:
    if (c.tracing) c.traceAt(0x1ae34);
    // 1501:5e24  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5e25  mov ah, 0  [x1]
    c.a.h = (uint8_t)(0x0u);
L1ae37:
    if (c.tracing) c.traceAt(0x1ae37);
    // 1501:5e27  push ax  [x16]
    c.push16(c.a.x);
    // 1501:5e28  call 0x58f8  [x16]
    c.push16(0x5e2bu); code_10(c, 0x1a908u); if (c.ip != 0x5e2bu) c.badReturn(0x1ae38);
L1ae3b:
    if (c.tracing) c.traceAt(0x1ae3b);
    // 1501:5e2b  call 0x58f8  [x16]
    c.push16(0x5e2eu); code_10(c, 0x1a908u); if (c.ip != 0x5e2eu) c.badReturn(0x1ae3b);
L1ae3e:
    if (c.tracing) c.traceAt(0x1ae3e);
    // 1501:5e2e  call 0x58f8  [x16]
    c.push16(0x5e31u); code_10(c, 0x1a908u); if (c.ip != 0x5e31u) c.badReturn(0x1ae3e);
L1ae41:
    if (c.tracing) c.traceAt(0x1ae41);
    // 1501:5e31  call 0x58f8  [x16]
    c.push16(0x5e34u); code_10(c, 0x1a908u); if (c.ip != 0x5e34u) c.badReturn(0x1ae41);
L1ae44:
    if (c.tracing) c.traceAt(0x1ae44);
    // 1501:5e34  pop cx  [x16]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5e35  push cx  [x16]
    c.push16(c.c.x);
    // 1501:5e36  mov dx, 0x3c8  [x16]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5e39  mov al, 1  [x16]
    c.a.l = (uint8_t)(0x1u);
    // 1501:5e3b  out dx, al  [x16]
    c.ip = 0x5e3cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5e3c  inc dx  [x16]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:5e3d  xor si, si  [x16]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1ae4f:
    if (c.tracing) c.traceAt(0x1ae4f);
    // 1501:5e3f  mov al, byte ptr [si - 0x122]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu)));
    // 1501:5e43  sub al, ch  [x48]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.h, false));
    // 1501:5e45  cmp al, byte ptr [si - 0x11f]  [x48]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffee1u)), true);
    // 1501:5e49  jge 0x5e4f  [x48]
    if ((c.sf == c.of)) goto L1ae5f;
L1ae5b:
    if (c.tracing) c.traceAt(0x1ae5b);
    // 1501:5e4b  mov al, byte ptr [si - 0x11f]  [x25]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffee1u)));
L1ae5f:
    if (c.tracing) c.traceAt(0x1ae5f);
    // 1501:5e4f  out dx, al  [x48]
    c.ip = 0x5e50u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5e50  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:5e51  cmp si, 3  [x48]
    c.sub<16>(c.si.x, 0x3u, true);
    // 1501:5e54  jb 0x5e3f  [x48]
    if (c.cf) goto L1ae4f;
L1ae66:
    if (c.tracing) c.traceAt(0x1ae66);
    // 1501:5e56  pop ax  [x16]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:5e57  inc ah  [x16]
    c.a.h = (uint8_t)(c.inc<8>(c.a.h, false));
    // 1501:5e59  cmp ah, 0x10  [x16]
    c.sub<8>(c.a.h, 0x10u, true);
    // 1501:5e5c  jb 0x5e27  [x16]
    if (c.cf) goto L1ae37;
L1ae6e:
    if (c.tracing) c.traceAt(0x1ae6e);
    // 1501:5e5e  ret   [x1]
    c.ip = c.pop16(); return;
L1ae6f:
    if (c.tracing) c.traceAt(0x1ae6f);
    // 1501:5e5f  mov dx, 0x3c8  [x64]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5e62  xor al, al  [x64]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:5e64  out dx, al  [x64]
    c.ip = 0x5e65u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5e65  inc dx  [x64]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:5e66  mov si, 0xfede  [x64]
    c.si.x = (uint16_t)(0xfedeu);
    // 1501:5e69  mov cx, 0x30  [x64]
    c.c.x = (uint16_t)(0x30u);
L1ae7c:
    if (c.tracing) c.traceAt(0x1ae7c);
    // 1501:5e6c  rep outsb dx, byte ptr [si]  [x3136]
    c.ip = 0x5e6eu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1ae7e:
    if (c.tracing) c.traceAt(0x1ae7e);
    // 1501:5e6e  xor si, si  [x64]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1ae80:
    if (c.tracing) c.traceAt(0x1ae80);
    // 1501:5e70  mov al, byte ptr [si - 0x122]  [x3072]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu)));
    // 1501:5e74  cmp al, byte ptr [si - 0xf2]  [x3072]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffff0eu)), true);
    // 1501:5e78  jge 0x5e80  [x3072]
    if ((c.sf == c.of)) goto L1ae90;
L1ae8a:
    if (c.tracing) c.traceAt(0x1ae8a);
    // 1501:5e7a  inc byte ptr [si - 0x122]  [x386]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu)), true));
    // 1501:5e7e  jmp 0x5e8a  [x386]
    goto L1ae9a;
L1ae90:
    if (c.tracing) c.traceAt(0x1ae90);
    // 1501:5e80  cmp al, byte ptr [si - 0xf2]  [x2686]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffff0eu)), true);
    // 1501:5e84  jle 0x5e8a  [x2686]
    if ((c.zf || c.sf != c.of)) goto L1ae9a;
L1ae96:
    if (c.tracing) c.traceAt(0x1ae96);
    // 1501:5e86  dec byte ptr [si - 0x122]  [x441]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xfffffedeu)), true));
L1ae9a:
    if (c.tracing) c.traceAt(0x1ae9a);
    // 1501:5e8a  inc si  [x3072]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:5e8b  cmp si, 0x30  [x3072]
    c.sub<16>(c.si.x, 0x30u, true);
    // 1501:5e8e  jb 0x5e70  [x3072]
    if (c.cf) goto L1ae80;
L1aea0:
    if (c.tracing) c.traceAt(0x1aea0);
    // 1501:5e90  ret   [x64]
    c.ip = c.pop16(); return;
L1aea1:
    if (c.tracing) c.traceAt(0x1aea1);
    // 1501:5e91  mov si, word ptr cs:[0x5600]  [x1728]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5600u)));
    // 1501:5e96  mov ax, word ptr [si - 0x7cf9]  [x1728]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8307u)));
    // 1501:5e9a  mov cx, 0x10  [x1728]
    c.c.x = (uint16_t)(0x10u);
    // 1501:5e9d  cdq   [x1728]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:5e9e  idiv cx  [x1728]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5e9eu); }   // #DE: int 0, then again
    // 1501:5ea0  mov word ptr [0x8b11], 0xa0a  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8b11u), 0xa0au);
    // 1501:5ea6  sub word ptr [0x8b11], ax  [x1728]
    c.w16(c.dsb + (uint16_t)(0xffff8b11u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8b11u)), c.a.x, false));
    // 1501:5eaa  add word ptr cs:[0x5600], 2  [x1728]
    c.w16(c.csb + (uint16_t)(0x5600u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5600u)), 0x2u, false));
    // 1501:5eb0  cmp word ptr cs:[0x5600], 0x168  [x1728]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5600u)), 0x168u, true);
    // 1501:5eb7  jb 0x5ed3  [x1728]
    if (c.cf) goto L1aee3;
L1aec9:
    if (c.tracing) c.traceAt(0x1aec9);
    // 1501:5eb9  cmp word ptr cs:[0xa], 8  [x296]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xau)), 0x8u, true);
    // 1501:5ebf  jae 0x5ed4  [x296]
    if (!c.cf) goto L1aee4;
L1aed1:
    if (c.tracing) c.traceAt(0x1aed1);
    // 1501:5ec1  inc word ptr cs:[0xa]  [x7]
    c.w16(c.csb + (uint16_t)(0xau), c.inc<16>(c.r16(c.csb + (uint16_t)(0xau)), true));
    // 1501:5ec6  mov word ptr cs:[0x5600], 0  [x7]
    c.w16(c.csb + (uint16_t)(0x5600u), 0x0u);
    // 1501:5ecd  mov word ptr [0x8b11], 0xa0a  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8b11u), 0xa0au);
L1aee3:
    if (c.tracing) c.traceAt(0x1aee3);
    // 1501:5ed3  ret   [x1439]
    c.ip = c.pop16(); return;
L1aee4:
    if (c.tracing) c.traceAt(0x1aee4);
    // 1501:5ed4  mov word ptr cs:[0x5600], 0x168  [x289]
    c.w16(c.csb + (uint16_t)(0x5600u), 0x168u);
    // 1501:5edb  ret   [x289]
    c.ip = c.pop16(); return;
L1aeec:
    if (c.tracing) c.traceAt(0x1aeec);
    // 1501:5edc  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_10(10, {0x15010, 0x1a612, 0x1a61f, 0x1a62f, 0x1a63d, 0x1a63f, 0x1a64c, 0x1a654, 0x1a66a, 0x1a66d, 0x1a670, 0x1a673, 0x1a676, 0x1a67c, 0x1a67f, 0x1a68e, 0x1a696, 0x1a6ab, 0x1a6b2, 0x1a6b5, 0x1a6c9, 0x1a6d6, 0x1a6e9, 0x1a71b, 0x1a721, 0x1a727, 0x1a750, 0x1a753, 0x1a756, 0x1a759, 0x1a76f, 0x1a77b, 0x1a780, 0x1a788, 0x1a78b, 0x1a797, 0x1a79d, 0x1a7c6, 0x1a7cc, 0x1a7f5, 0x1a7fb, 0x1a824, 0x1a82a, 0x1a853, 0x1a859, 0x1a882, 0x1a888, 0x1a8b1, 0x1a8b7, 0x1a8e0, 0x1a8e6, 0x1a908, 0x1a90b, 0x1a90c, 0x1a910, 0x1a911, 0x1a915, 0x1a916, 0x1a924, 0x1a926, 0x1a92f, 0x1a93d, 0x1a93f, 0x1a943, 0x1a945, 0x1a982, 0x1a98d, 0x1a98e, 0x1a997, 0x1a9a5, 0x1a9a7, 0x1a9e4, 0x1a9ef, 0x1a9f0, 0x1aa00, 0x1aa16, 0x1aa18, 0x1aa56, 0x1aaa0, 0x1aaa9, 0x1aabd, 0x1aabf, 0x1aac9, 0x1aad3, 0x1aad9, 0x1aade, 0x1aaf4, 0x1aafb, 0x1ab02, 0x1ab03, 0x1ab29, 0x1ab31, 0x1ab35, 0x1ab43, 0x1ab48, 0x1ab4a, 0x1ab4b, 0x1ab56, 0x1ab85, 0x1ab95, 0x1ab9d, 0x1abaa, 0x1abb6, 0x1abb7, 0x1abbe, 0x1ac1c, 0x1ac1e, 0x1ac1f, 0x1ac23, 0x1ac5e, 0x1ac5f, 0x1ac67, 0x1ac7c, 0x1ac96, 0x1aca4, 0x1aca9, 0x1acbe, 0x1acc7, 0x1acd1, 0x1acdf, 0x1ace0, 0x1ace2, 0x1acfa, 0x1ad0e, 0x1ad27, 0x1ad3b, 0x1ad44, 0x1ad45, 0x1ad47, 0x1ad51, 0x1ad54, 0x1ad58, 0x1ad5b, 0x1ad5f, 0x1ad62, 0x1ad66, 0x1ad69, 0x1ad6d, 0x1ad70, 0x1ad74, 0x1ad77, 0x1ad7b, 0x1ad7e, 0x1ad82, 0x1ad85, 0x1ad90, 0x1ad91, 0x1ada7, 0x1ada9, 0x1adaf, 0x1adb1, 0x1adb8, 0x1adc8, 0x1add5, 0x1add8, 0x1adda, 0x1ade3, 0x1adf8, 0x1adfa, 0x1ae00, 0x1ae02, 0x1ae09, 0x1ae19, 0x1ae26, 0x1ae29, 0x1ae2b, 0x1ae34, 0x1ae37, 0x1ae3b, 0x1ae3e, 0x1ae41, 0x1ae44, 0x1ae4f, 0x1ae5b, 0x1ae5f, 0x1ae66, 0x1ae6e, 0x1ae6f, 0x1ae7c, 0x1ae7e, 0x1ae80, 0x1ae8a, 0x1ae90, 0x1ae96, 0x1ae9a, 0x1aea0, 0x1aea1, 0x1aec9, 0x1aed1, 0x1aee3, 0x1aee4, 0x1aeec}, code_10);

}  // namespace show
