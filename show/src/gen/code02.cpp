// Part 1 (START.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_2(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x248fc: goto L248fc;
    case 0x24909: goto L24909;
    case 0x2491d: goto L2491d;
    case 0x2491f: goto L2491f;
    case 0x2492f: goto L2492f;
    case 0x24931: goto L24931;
    case 0x24936: goto L24936;
    case 0x24938: goto L24938;
    case 0x24947: goto L24947;
    case 0x24949: goto L24949;
    case 0x24953: goto L24953;
    case 0x24959: goto L24959;
    case 0x2495b: goto L2495b;
    case 0x24960: goto L24960;
    case 0x24962: goto L24962;
    case 0x24968: goto L24968;
    case 0x2496b: goto L2496b;
    case 0x24978: goto L24978;
    case 0x24985: goto L24985;
    case 0x24987: goto L24987;
    case 0x2499a: goto L2499a;
    case 0x249af: goto L249af;
    case 0x249b2: goto L249b2;
    case 0x249b5: goto L249b5;
    case 0x249b7: goto L249b7;
    case 0x249ba: goto L249ba;
    case 0x249bd: goto L249bd;
    case 0x249d2: goto L249d2;
    case 0x249d5: goto L249d5;
    case 0x249d8: goto L249d8;
    case 0x249e5: goto L249e5;
    case 0x24a02: goto L24a02;
    case 0x24a13: goto L24a13;
    case 0x24a18: goto L24a18;
    case 0x24a20: goto L24a20;
    case 0x24a25: goto L24a25;
    case 0x24a3b: goto L24a3b;
    case 0x24a46: goto L24a46;
    case 0x24a4c: goto L24a4c;
    case 0x24a4f: goto L24a4f;
    case 0x24a5d: goto L24a5d;
    case 0x24a6d: goto L24a6d;
    case 0x24a74: goto L24a74;
    case 0x24a7a: goto L24a7a;
    case 0x24a84: goto L24a84;
    case 0x24a8c: goto L24a8c;
    case 0x24a94: goto L24a94;
    case 0x24aab: goto L24aab;
    case 0x24aad: goto L24aad;
    case 0x24ab5: goto L24ab5;
    case 0x24ad2: goto L24ad2;
    case 0x24ae2: goto L24ae2;
    case 0x24ae9: goto L24ae9;
    case 0x24aef: goto L24aef;
    case 0x24af7: goto L24af7;
    case 0x24aff: goto L24aff;
    case 0x24b05: goto L24b05;
    case 0x24b1c: goto L24b1c;
    case 0x24b1e: goto L24b1e;
    case 0x24b24: goto L24b24;
    case 0x24b41: goto L24b41;
    case 0x24b50: goto L24b50;
    case 0x24b52: goto L24b52;
    case 0x24b69: goto L24b69;
    case 0x24b6c: goto L24b6c;
    case 0x24b6d: goto L24b6d;
    case 0x24b70: goto L24b70;
    case 0x24b71: goto L24b71;
    case 0x24b75: goto L24b75;
    case 0x24b76: goto L24b76;
    case 0x24b7a: goto L24b7a;
    case 0x24b7b: goto L24b7b;
    case 0x24b7e: goto L24b7e;
    case 0x24b7f: goto L24b7f;
    case 0x24b83: goto L24b83;
    case 0x24b84: goto L24b84;
    case 0x24b88: goto L24b88;
    case 0x24b8b: goto L24b8b;
    case 0x24b8c: goto L24b8c;
    case 0x24ba0: goto L24ba0;
    case 0x24ba5: goto L24ba5;
    case 0x24ba7: goto L24ba7;
    case 0x24ba8: goto L24ba8;
    case 0x24bb0: goto L24bb0;
    case 0x24bb4: goto L24bb4;
    case 0x24bbf: goto L24bbf;
    case 0x24bc0: goto L24bc0;
    case 0x24bc1: goto L24bc1;
    case 0x24bd0: goto L24bd0;
    case 0x24bd9: goto L24bd9;
    case 0x24bdb: goto L24bdb;
    case 0x24c0a: goto L24c0a;
    case 0x24c0b: goto L24c0b;
    case 0x24c2e: goto L24c2e;
    case 0x24c2f: goto L24c2f;
    case 0x24c43: goto L24c43;
    case 0x24c49: goto L24c49;
    case 0x24c4d: goto L24c4d;
    case 0x24c53: goto L24c53;
    case 0x24c5f: goto L24c5f;
    case 0x24c97: goto L24c97;
    case 0x24c9a: goto L24c9a;
    case 0x24c9c: goto L24c9c;
    case 0x24ca5: goto L24ca5;
    case 0x24caf: goto L24caf;
    case 0x24cb3: goto L24cb3;
    case 0x24cb6: goto L24cb6;
    case 0x24ccb: goto L24ccb;
    case 0x24ccf: goto L24ccf;
    case 0x24cd4: goto L24cd4;
    case 0x24cd7: goto L24cd7;
    case 0x24cf5: goto L24cf5;
    case 0x24cf8: goto L24cf8;
    case 0x24cfb: goto L24cfb;
    case 0x24cfe: goto L24cfe;
    case 0x24d00: goto L24d00;
    case 0x24d07: goto L24d07;
    case 0x24d0e: goto L24d0e;
    case 0x24d14: goto L24d14;
    case 0x24d17: goto L24d17;
    case 0x24d19: goto L24d19;
    case 0x24d1e: goto L24d1e;
    case 0x24d24: goto L24d24;
    case 0x24d2a: goto L24d2a;
    case 0x24d2e: goto L24d2e;
    case 0x24d31: goto L24d31;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xfffff8ec  [x1]
    goto L248fc;
L248fc:
    if (c.tracing) c.traceAt(0x248fc);
    // 1501:f8ec  mov word ptr cs:[0xf8e8], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xfffff8e8u), c.c.x);
    // 1501:f8f1  mov word ptr cs:[0xf8ea], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xfffff8eau), c.dx_.x);
    // 1501:f8f6  call 0xfb98  [x1]
    c.push16(0xf8f9u); code_2(c, 0x24ba8u); if (c.ip != 0xf8f9u) c.badReturn(0x24906);
L24909:
    if (c.tracing) c.traceAt(0x24909);
    // 1501:f8f9  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:f8fc  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:f8fe  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:f901  mov ax, 0xe02  [x1]
    c.a.x = (uint16_t)(0xe02u);
    // 1501:f904  out dx, ax  [x1]
    c.ip = 0xf905u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f905  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:f908  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:f90a  mov cx, 0xa0  [x1]
    c.c.x = (uint16_t)(0xa0u);
L2491d:
    if (c.tracing) c.traceAt(0x2491d);
    // 1501:f90d  rep stosw word ptr es:[di], ax  [x161]
    c.stos<16, false>(1);
L2491f:
    if (c.tracing) c.traceAt(0x2491f);
    // 1501:f90f  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:f912  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:f915  out dx, ax  [x1]
    c.ip = 0xf916u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f916  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:f919  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:f91c  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
L2492f:
    if (c.tracing) c.traceAt(0x2492f);
    // 1501:f91f  rep stosw word ptr es:[di], ax  [x21]
    c.stos<16, false>(1);
L24931:
    if (c.tracing) c.traceAt(0x24931);
    // 1501:f921  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:f923  mov cx, 0x3c  [x1]
    c.c.x = (uint16_t)(0x3cu);
L24936:
    if (c.tracing) c.traceAt(0x24936);
    // 1501:f926  rep stosw word ptr es:[di], ax  [x61]
    c.stos<16, false>(1);
L24938:
    if (c.tracing) c.traceAt(0x24938);
    // 1501:f928  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:f92b  mov ax, 0xe02  [x1]
    c.a.x = (uint16_t)(0xe02u);
    // 1501:f92e  out dx, ax  [x1]
    c.ip = 0xf92fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f92f  mov di, 0xa0  [x1]
    c.di.x = (uint16_t)(0xa0u);
    // 1501:f932  mov cx, 0x6d10  [x1]
    c.c.x = (uint16_t)(0x6d10u);
    // 1501:f935  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L24947:
    if (c.tracing) c.traceAt(0x24947);
    // 1501:f937  rep stosw word ptr es:[di], ax  [x27921]
    c.stos<16, false>(1);
L24949:
    if (c.tracing) c.traceAt(0x24949);
    // 1501:f939  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:f93c  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:f93f  out dx, ax  [x1]
    c.ip = 0xf940u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f940  mov di, 0xa0  [x1]
    c.di.x = (uint16_t)(0xa0u);
L24953:
    if (c.tracing) c.traceAt(0x24953);
    // 1501:f943  mov cx, 0x14  [x349]
    c.c.x = (uint16_t)(0x14u);
    // 1501:f946  mov ax, 0xffff  [x349]
    c.a.x = (uint16_t)(0xffffu);
L24959:
    if (c.tracing) c.traceAt(0x24959);
    // 1501:f949  rep stosw word ptr es:[di], ax  [x7329]
    c.stos<16, false>(1);
L2495b:
    if (c.tracing) c.traceAt(0x2495b);
    // 1501:f94b  mov cx, 0x3c  [x349]
    c.c.x = (uint16_t)(0x3cu);
    // 1501:f94e  xor ax, ax  [x349]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L24960:
    if (c.tracing) c.traceAt(0x24960);
    // 1501:f950  rep stosw word ptr es:[di], ax  [x21289]
    c.stos<16, false>(1);
L24962:
    if (c.tracing) c.traceAt(0x24962);
    // 1501:f952  cmp di, 0xdac0  [x349]
    c.sub<16>(c.di.x, 0xdac0u, true);
    // 1501:f956  jb 0xf943  [x349]
    if (c.cf) goto L24953;
L24968:
    if (c.tracing) c.traceAt(0x24968);
    // 1501:f958  call 0xfb5d  [x1]
    c.push16(0xf95bu); code_2(c, 0x24b6du); if (c.ip != 0xf95bu) c.badReturn(0x24968);
L2496b:
    if (c.tracing) c.traceAt(0x2496b);
    // 1501:f95b  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:f95e  mov al, 0x13  [x1]
    c.a.l = (uint8_t)(0x13u);
    // 1501:f960  out dx, al  [x1]
    c.ip = 0xf961u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:f961  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:f962  mov al, 0x50  [x1]
    c.a.l = (uint8_t)(0x50u);
    // 1501:f964  out dx, al  [x1]
    c.ip = 0xf965u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:f965  call 0xfb5d  [x1]
    c.push16(0xf968u); code_2(c, 0x24b6du); if (c.ip != 0xf968u) c.badReturn(0x24975);
L24978:
    if (c.tracing) c.traceAt(0x24978);
    // 1501:f968  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:f96b  sub al, al  [x1]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.a.l, true));
    // 1501:f96d  out dx, al  [x1]
    c.ip = 0xf96eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:f96e  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:f96f  mov si, 0x5eff  [x1]
    c.si.x = (uint16_t)(0x5effu);
    // 1501:f972  mov cx, 0x18  [x1]
    c.c.x = (uint16_t)(0x18u);
L24985:
    if (c.tracing) c.traceAt(0x24985);
    // 1501:f975  rep outsb dx, byte ptr [si]  [x25]
    c.ip = 0xf977u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L24987:
    if (c.tracing) c.traceAt(0x24987);
    // 1501:f977  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:f97a  mov ax, 9  [x1]
    c.a.x = (uint16_t)(0x9u);
    // 1501:f97d  out dx, ax  [x1]
    c.ip = 0xf97eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f97e  mov word ptr [0x5c32], 0xb0  [x1]
    c.w16(c.dsb + (uint16_t)(0x5c32u), 0xb0u);
    // 1501:f984  mov word ptr [0x5c30], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x5c30u), 0x0u);
L2499a:
    if (c.tracing) c.traceAt(0x2499a);
    // 1501:f98a  push es  [x24]
    c.ip = 0xf98au; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:f98b  mov ax, word ptr cs:[0xf8e8]  [x24]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xf8e8u)));
    // 1501:f98f  mov es, ax  [x24]
    c.loadEs(c.a.x);
    // 1501:f991  mov si, word ptr cs:[0xf8ea]  [x24]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xfffff8eau)));
    // 1501:f996  mov dx, word ptr es:[si]  [x24]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:f999  pop es  [x24]
    c.loadEs((uint16_t)c.pop16());
    // 1501:f99a  cmp dx, 0  [x24]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:f99d  je 0xf98a  [x24]
    if (c.zf) goto L2499a;
L249af:
    if (c.tracing) c.traceAt(0x249af);
    // 1501:f99f  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L249b2:
    if (c.tracing) c.traceAt(0x249b2);
    // 1501:f9a2  call 0xfb5d  [x32]
    c.push16(0xf9a5u); code_2(c, 0x24b6du); if (c.ip != 0xf9a5u) c.badReturn(0x249b2);
L249b5:
    if (c.tracing) c.traceAt(0x249b5);
    // 1501:f9a5  loop 0xf9a2  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L249b2;
L249b7:
    if (c.tracing) c.traceAt(0x249b7);
    // 1501:f9a7  call 0xfbcb  [x1]
    c.push16(0xf9aau); code_2(c, 0x24bdbu); if (c.ip != 0xf9aau) c.badReturn(0x249b7);
L249ba:
    if (c.tracing) c.traceAt(0x249ba);
    // 1501:f9aa  call 0xfb7c  [x1]
    c.push16(0xf9adu); code_2(c, 0x24b8cu); if (c.ip != 0xf9adu) c.badReturn(0x249ba);
L249bd:
    if (c.tracing) c.traceAt(0x249bd);
    // 1501:f9ad  mov cx, word ptr [0x5c30]  [x428]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c30u)));
    // 1501:f9b1  inc cx  [x428]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, true));
    // 1501:f9b2  mov dx, 0x3d4  [x428]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:f9b5  mov al, 0xc  [x428]
    c.a.l = (uint8_t)(0xcu);
    // 1501:f9b7  mov ah, ch  [x428]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:f9b9  out dx, ax  [x428]
    c.ip = 0xf9bau; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f9ba  mov al, 0xd  [x428]
    c.a.l = (uint8_t)(0xdu);
    // 1501:f9bc  mov ah, cl  [x428]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:f9be  out dx, ax  [x428]
    c.ip = 0xf9bfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:f9bf  call 0xfb5d  [x428]
    c.push16(0xf9c2u); code_2(c, 0x24b6du); if (c.ip != 0xf9c2u) c.badReturn(0x249cf);
L249d2:
    if (c.tracing) c.traceAt(0x249d2);
    // 1501:f9c2  call 0xfb7c  [x428]
    c.push16(0xf9c5u); code_2(c, 0x24b8cu); if (c.ip != 0xf9c5u) c.badReturn(0x249d2);
L249d5:
    if (c.tracing) c.traceAt(0x249d5);
    // 1501:f9c5  call 0xfa3f  [x428]
    c.push16(0xf9c8u); code_2(c, 0x24a4fu); if (c.ip != 0xf9c8u) c.badReturn(0x249d5);
L249d8:
    if (c.tracing) c.traceAt(0x249d8);
    // 1501:f9c8  add word ptr [0x5c32], 8  [x428]
    c.w16(c.dsb + (uint16_t)(0x5c32u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x5c32u)), 0x8u, false));
    // 1501:f9cd  cmp word ptr [0x5c32], 0xc8  [x428]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5c32u)), 0xc8u, true);
    // 1501:f9d3  jb 0xfa2b  [x428]
    if (c.cf) goto L24a3b;
L249e5:
    if (c.tracing) c.traceAt(0x249e5);
    // 1501:f9d5  mov byte ptr [0x5c2f], 0xff  [x18]
    c.w8(c.dsb + (uint16_t)(0x5c2fu), 0xffu);
    // 1501:f9da  mov word ptr [0x5c32], 0  [x18]
    c.w16(c.dsb + (uint16_t)(0x5c32u), 0x0u);
    // 1501:f9e0  mov di, word ptr [0x5c2d]  [x18]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c2du)));
    // 1501:f9e4  add word ptr [0x5c2d], 2  [x18]
    c.w16(c.dsb + (uint16_t)(0x5c2du), c.add<16>(c.r16(c.dsb + (uint16_t)(0x5c2du)), 0x2u, false));
    // 1501:f9e9  mov ax, word ptr [di + 0x5c09]  [x18]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x5c09u)));
    // 1501:f9ed  cmp ax, 0xffff  [x18]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 1501:f9f0  jne 0xfa03  [x18]
    if (!c.zf) goto L24a13;
L24a02:
    if (c.tracing) c.traceAt(0x24a02);
    // 1501:f9f2  jmp 0xfc33  [x1]
    goto L24c43;
L24a13:
    if (c.tracing) c.traceAt(0x24a13);
    // 1501:fa03  cmp ax, 1  [x17]
    c.sub<16>(c.a.x, 0x1u, true);
    // 1501:fa06  jne 0xfa10  [x17]
    if (!c.zf) goto L24a20;
L24a18:
    if (c.tracing) c.traceAt(0x24a18);
    // 1501:fa08  mov ax, 0  [x4]
    c.a.x = (uint16_t)(0x0u);
    // 1501:fa0b  mov byte ptr [0x5c2f], 0  [x4]
    c.w8(c.dsb + (uint16_t)(0x5c2fu), 0x0u);
L24a20:
    if (c.tracing) c.traceAt(0x24a20);
    // 1501:fa10  mov word ptr [0x776], ax  [x17]
    c.w16(c.dsb + (uint16_t)(0x776u), c.a.x);
    // 1501:fa13  xor si, si  [x17]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L24a25:
    if (c.tracing) c.traceAt(0x24a25);
    // 1501:fa15  mov byte ptr [si + 0x5c34], 0  [x5950]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x5c34u), 0x0u);
    // 1501:fa1a  mov byte ptr [si + 0x5c35], 0  [x5950]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x5c35u), 0x0u);
    // 1501:fa1f  add di, 6  [x5950]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:fa22  add si, 2  [x5950]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:fa25  cmp si, 0x2bc  [x5950]
    c.sub<16>(c.si.x, 0x2bcu, true);
    // 1501:fa29  jb 0xfa15  [x5950]
    if (c.cf) goto L24a25;
L24a3b:
    if (c.tracing) c.traceAt(0x24a3b);
    // 1501:fa2b  inc word ptr [0x5c30]  [x427]
    c.w16(c.dsb + (uint16_t)(0x5c30u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x5c30u)), false));
    // 1501:fa2f  cmp word ptr [0x5c30], 0x50  [x427]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5c30u)), 0x50u, true);
    // 1501:fa34  jb 0xfa3c  [x427]
    if (c.cf) goto L24a4c;
L24a46:
    if (c.tracing) c.traceAt(0x24a46);
    // 1501:fa36  mov word ptr [0x5c30], 0  [x5]
    c.w16(c.dsb + (uint16_t)(0x5c30u), 0x0u);
L24a4c:
    if (c.tracing) c.traceAt(0x24a4c);
    // 1501:fa3c  jmp 0xf9ad  [x427]
    goto L249bd;
L24a4f:
    if (c.tracing) c.traceAt(0x24a4f);
    // 1501:fa3f  mov dx, word ptr [0x5c32]  [x428]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c32u)));
    // 1501:fa43  mov si, word ptr [0x776]  [x428]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x776u)));
    // 1501:fa47  xor bp, bp  [x428]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
    // 1501:fa49  mov di, word ptr [0x5c30]  [x428]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c30u)));
L24a5d:
    if (c.tracing) c.traceAt(0x24a5d);
    // 1501:fa4d  mov dx, word ptr [0x5c32]  [x149800]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c32u)));
    // 1501:fa51  xor bh, bh  [x149800]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 1501:fa53  mov bl, byte ptr ds:[bp + 0x5c35]  [x149800]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u)));
    // 1501:fa58  cmp bx, 6  [x149800]
    c.sub<16>(c.b.x, 0x6u, true);
    // 1501:fa5b  je 0xfa64  [x149800]
    if (c.zf) goto L24a74;
L24a6d:
    if (c.tracing) c.traceAt(0x24a6d);
    // 1501:fa5d  cmp byte ptr [bx + si + 0x9f8], 0xff  [x149760]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)), 0xffu, true);
    // 1501:fa62  jne 0xfa6a  [x149760]
    if (!c.zf) goto L24a7a;
L24a74:
    if (c.tracing) c.traceAt(0x24a74);
    // 1501:fa64  mov byte ptr ds:[bp + 0x5c34], 2  [x18442]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x2u);
L24a7a:
    if (c.tracing) c.traceAt(0x24a7a);
    // 1501:fa6a  xor al, al  [x149800]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:fa6c  cmp byte ptr ds:[bp + 0x5c34], 1  [x149800]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u)), 0x1u, true);
    // 1501:fa72  je 0xfa9d  [x149800]
    if (c.zf) goto L24aad;
L24a84:
    if (c.tracing) c.traceAt(0x24a84);
    // 1501:fa74  cmp byte ptr ds:[bp + 0x5c34], 2  [x51356]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u)), 0x2u, true);
    // 1501:fa7a  je 0xfac2  [x51356]
    if (c.zf) goto L24ad2;
L24a8c:
    if (c.tracing) c.traceAt(0x24a8c);
    // 1501:fa7c  mov al, 0  [x32914]
    c.a.l = (uint8_t)(0x0u);
    // 1501:fa7e  cmp byte ptr [bx + si + 0x9f8], dl  [x32914]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)), c.dx_.l, true);
    // 1501:fa82  jae 0xfa9b  [x32914]
    if (!c.cf) goto L24aab;
L24a94:
    if (c.tracing) c.traceAt(0x24a94);
    // 1501:fa84  push di  [x9304]
    c.push16(c.di.x);
    // 1501:fa85  xor dh, dh  [x9304]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 1501:fa87  mov dl, byte ptr [bx + si + 0x9f8]  [x9304]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)));
    // 1501:fa8b  mov di, dx  [x9304]
    c.di.x = (uint16_t)(c.dx_.x);
    // 1501:fa8d  and di, 7  [x9304]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7u), true));
    // 1501:fa90  mov al, byte ptr [di + 0x778]  [x9304]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x778u)));
    // 1501:fa94  pop di  [x9304]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:fa95  mov byte ptr ds:[bp + 0x5c34], 1  [x9304]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x1u);
L24aab:
    if (c.tracing) c.traceAt(0x24aab);
    // 1501:fa9b  jmp 0xfac2  [x32914]
    goto L24ad2;
L24aad:
    if (c.tracing) c.traceAt(0x24aad);
    // 1501:fa9d  mov al, 0xff  [x98444]
    c.a.l = (uint8_t)(0xffu);
    // 1501:fa9f  cmp byte ptr [bx + si + 0x9f9], dl  [x98444]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f9u)), c.dx_.l, true);
    // 1501:faa3  jae 0xfac2  [x98444]
    if (!c.cf) goto L24ad2;
L24ab5:
    if (c.tracing) c.traceAt(0x24ab5);
    // 1501:faa5  push di  [x8846]
    c.push16(c.di.x);
    // 1501:faa6  xor dh, dh  [x8846]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 1501:faa8  mov dl, byte ptr [bx + si + 0x9f9]  [x8846]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f9u)));
    // 1501:faac  mov di, dx  [x8846]
    c.di.x = (uint16_t)(c.dx_.x);
    // 1501:faae  and di, 7  [x8846]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7u), false));
    // 1501:fab1  mov al, byte ptr [di + 0x8b8]  [x8846]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x8b8u)));
    // 1501:fab5  pop di  [x8846]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:fab6  mov byte ptr ds:[bp + 0x5c34], 0  [x8846]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x0u);
    // 1501:fabc  add byte ptr ds:[bp + 0x5c35], 2  [x8846]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u), c.add<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u)), 0x2u, true));
L24ad2:
    if (c.tracing) c.traceAt(0x24ad2);
    // 1501:fac2  mov dx, word ptr [0x5c32]  [x149800]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5c32u)));
    // 1501:fac6  xor bh, bh  [x149800]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 1501:fac8  mov bl, byte ptr ds:[bp + 0x5c35]  [x149800]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u)));
    // 1501:facd  cmp bx, 6  [x149800]
    c.sub<16>(c.b.x, 0x6u, true);
    // 1501:fad0  je 0xfad9  [x149800]
    if (c.zf) goto L24ae9;
L24ae2:
    if (c.tracing) c.traceAt(0x24ae2);
    // 1501:fad2  cmp byte ptr [bx + si + 0x9f8], 0xff  [x149720]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)), 0xffu, true);
    // 1501:fad7  jne 0xfadf  [x149720]
    if (!c.zf) goto L24aef;
L24ae9:
    if (c.tracing) c.traceAt(0x24ae9);
    // 1501:fad9  mov byte ptr ds:[bp + 0x5c34], 2  [x24442]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x2u);
L24aef:
    if (c.tracing) c.traceAt(0x24aef);
    // 1501:fadf  cmp byte ptr ds:[bp + 0x5c34], 1  [x149800]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u)), 0x1u, true);
    // 1501:fae5  je 0xfb0e  [x149800]
    if (c.zf) goto L24b1e;
L24af7:
    if (c.tracing) c.traceAt(0x24af7);
    // 1501:fae7  cmp byte ptr ds:[bp + 0x5c34], 2  [x50898]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u)), 0x2u, true);
    // 1501:faed  je 0xfb31  [x50898]
    if (c.zf) goto L24b41;
L24aff:
    if (c.tracing) c.traceAt(0x24aff);
    // 1501:faef  cmp byte ptr [bx + si + 0x9f8], dl  [x26456]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)), c.dx_.l, true);
    // 1501:faf3  jae 0xfb0c  [x26456]
    if (!c.cf) goto L24b1c;
L24b05:
    if (c.tracing) c.traceAt(0x24b05);
    // 1501:faf5  push di  [x58]
    c.push16(c.di.x);
    // 1501:faf6  xor dh, dh  [x58]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 1501:faf8  mov dl, byte ptr [bx + si + 0x9f8]  [x58]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f8u)));
    // 1501:fafc  mov di, dx  [x58]
    c.di.x = (uint16_t)(c.dx_.x);
    // 1501:fafe  and di, 7  [x58]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7u), false));
    // 1501:fb01  or al, byte ptr [di + 0x778]  [x58]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.r8(c.dsb + (uint16_t)(c.di.x + 0x778u))), true));
    // 1501:fb05  pop di  [x58]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:fb06  mov byte ptr ds:[bp + 0x5c34], 1  [x58]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x1u);
L24b1c:
    if (c.tracing) c.traceAt(0x24b1c);
    // 1501:fb0c  jmp 0xfb31  [x26456]
    goto L24b41;
L24b1e:
    if (c.tracing) c.traceAt(0x24b1e);
    // 1501:fb0e  cmp byte ptr [bx + si + 0x9f9], dl  [x98902]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f9u)), c.dx_.l, true);
    // 1501:fb12  jae 0xfb31  [x98902]
    if (!c.cf) goto L24b41;
L24b24:
    if (c.tracing) c.traceAt(0x24b24);
    // 1501:fb14  push di  [x516]
    c.push16(c.di.x);
    // 1501:fb15  xor dh, dh  [x516]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 1501:fb17  mov dl, byte ptr [bx + si + 0x9f9]  [x516]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0x9f9u)));
    // 1501:fb1b  mov di, dx  [x516]
    c.di.x = (uint16_t)(c.dx_.x);
    // 1501:fb1d  and di, 7  [x516]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7u), false));
    // 1501:fb20  and al, byte ptr [di + 0x8b8]  [x516]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.di.x + 0x8b8u))), false));
    // 1501:fb24  pop di  [x516]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:fb25  mov byte ptr ds:[bp + 0x5c34], 0  [x516]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c34u), 0x0u);
    // 1501:fb2b  add byte ptr ds:[bp + 0x5c35], 2  [x516]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u), c.add<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x5c35u)), 0x2u, true));
L24b41:
    if (c.tracing) c.traceAt(0x24b41);
    // 1501:fb31  and al, byte ptr [0x5c2f]  [x149800]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(0x5c2fu))), false));
    // 1501:fb35  mov byte ptr es:[di + 0x50], al  [x149800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x50u), c.a.l);
    // 1501:fb39  cmp word ptr [0x5c30], 0x28  [x149800]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5c30u)), 0x28u, true);
    // 1501:fb3e  jae 0xfb42  [x149800]
    if (!c.cf) goto L24b52;
L24b50:
    if (c.tracing) c.traceAt(0x24b50);
    // 1501:fb40  not al  [x79800]
    c.a.l = (uint8_t)(~(c.a.l));
L24b52:
    if (c.tracing) c.traceAt(0x24b52);
    // 1501:fb42  mov byte ptr es:[di], al  [x149800]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:fb45  not byte ptr es:[di + 0x28]  [x149800]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x28u), ~(c.r8(c.esb + (uint16_t)(c.di.x + 0x28u))));
    // 1501:fb49  add si, 6  [x149800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:fb4c  add di, 0xa0  [x149800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xa0u, false));
    // 1501:fb50  add bp, 2  [x149800]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:fb53  cmp di, 0xdac0  [x149800]
    c.sub<16>(c.di.x, 0xdac0u, true);
    // 1501:fb57  jae 0xfb5c  [x149800]
    if (!c.cf) goto L24b6c;
L24b69:
    if (c.tracing) c.traceAt(0x24b69);
    // 1501:fb59  jmp 0xfa4d  [x149372]
    goto L24a5d;
L24b6c:
    if (c.tracing) c.traceAt(0x24b6c);
    // 1501:fb5c  ret   [x428]
    c.ip = c.pop16(); return;
L24b6d:
    if (c.tracing) c.traceAt(0x24b6d);
    // 1501:fb5d  mov dx, 0x3da  [x462]
    c.dx_.x = (uint16_t)(0x3dau);
L24b70:
    if (c.tracing) c.traceAt(0x24b70);
    // 1501:fb60  in al, dx  [x1388]
    c.ip = 0xfb61u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24b71:
    if (c.tracing) c.traceAt(0x24b71);
    // 1501:fb61  and al, 8  [x1850]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:fb63  jne 0xfb60  [x1850]
    if (!c.zf) goto L24b70;
L24b75:
    if (c.tracing) c.traceAt(0x24b75);
    // 1501:fb65  in al, dx  [x3593]
    c.ip = 0xfb66u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24b76:
    if (c.tracing) c.traceAt(0x24b76);
    // 1501:fb66  and al, 8  [x4637]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:fb68  je 0xfb65  [x4637]
    if (c.zf) goto L24b75;
L24b7a:
    if (c.tracing) c.traceAt(0x24b7a);
    // 1501:fb6a  ret   [x462]
    c.ip = c.pop16(); return;
L24b7b:
    if (c.tracing) c.traceAt(0x24b7b);
    // 1501:fb6b  mov dx, 0x3da  [x188]
    c.dx_.x = (uint16_t)(0x3dau);
L24b7e:
    if (c.tracing) c.traceAt(0x24b7e);
    // 1501:fb6e  in al, dx  [x564]
    c.ip = 0xfb6fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24b7f:
    if (c.tracing) c.traceAt(0x24b7f);
    // 1501:fb6f  and al, 8  [x752]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:fb71  jne 0xfb6e  [x752]
    if (!c.zf) goto L24b7e;
L24b83:
    if (c.tracing) c.traceAt(0x24b83);
    // 1501:fb73  in al, dx  [x899]
    c.ip = 0xfb74u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L24b84:
    if (c.tracing) c.traceAt(0x24b84);
    // 1501:fb74  and al, 8  [x1136]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:fb76  je 0xfb73  [x1136]
    if (c.zf) goto L24b83;
L24b88:
    if (c.tracing) c.traceAt(0x24b88);
    // 1501:fb78  call 0xfb7c  [x188]
    c.push16(0xfb7bu); code_2(c, 0x24b8cu); if (c.ip != 0xfb7bu) c.badReturn(0x24b88);
L24b8b:
    if (c.tracing) c.traceAt(0x24b8b);
    // 1501:fb7b  ret   [x188]
    c.ip = c.pop16(); return;
L24b8c:
    if (c.tracing) c.traceAt(0x24b8c);
    // 1501:fb7c  mov ax, 0x42cc  [x617]
    c.a.x = (uint16_t)(0x42ccu);
    // 1501:fb7f  add ax, word ptr [0x5efd]  [x617]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x5efdu)), false));
    // 1501:fb83  xor dx, dx  [x617]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:fb85  mov cx, 0x4a9  [x617]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:fb88  div cx  [x617]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0xfb88u); }   // #DE: int 0, then again
    // 1501:fb8a  mov word ptr [0x5efd], dx  [x617]
    c.w16(c.dsb + (uint16_t)(0x5efdu), c.dx_.x);
    // 1501:fb8e  mov cx, ax  [x617]
    c.c.x = (uint16_t)(c.a.x);
L24ba0:
    if (c.tracing) c.traceAt(0x24ba0);
    // 1501:fb90  pushf   [x8843]
    c.push16(c.flags());
    // 1501:fb91  lcall [0x5ef9]  [x8843]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x5ef9u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x5ef9u) + 2); c.push16(c.cs); c.push16(0xfb95u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L24ba5:
    if (c.tracing) c.traceAt(0x24ba5);
    // 1501:fb95  loop 0xfb90  [x8843]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24ba0;
L24ba7:
    if (c.tracing) c.traceAt(0x24ba7);
    // 1501:fb97  ret   [x617]
    c.ip = c.pop16(); return;
L24ba8:
    if (c.tracing) c.traceAt(0x24ba8);
    // 1501:fb98  mov si, 8  [x1]
    c.si.x = (uint16_t)(0x8u);
    // 1501:fb9b  clc   [x1]
    c.cf = false;
    // 1501:fb9c  pushf   [x1]
    c.push16(c.flags());
    // 1501:fb9d  mov cx, 0xd9c4  [x1]
    c.c.x = (uint16_t)(0xd9c4u);
L24bb0:
    if (c.tracing) c.traceAt(0x24bb0);
    // 1501:fba0  mov al, byte ptr cs:[si]  [x55748]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:fba3  popf   [x55748]
    c.ip = 0xfba4u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L24bb4:
    if (c.tracing) c.traceAt(0x24bb4);
    // 1501:fba4  rcr al, 1  [x55748]
    c.a.l = (uint8_t)(c.rcr<8>(c.a.l, (int)((0x1u) & 31)));
    // 1501:fba6  pushf   [x55748]
    c.push16(c.flags());
    // 1501:fba7  mov byte ptr cs:[si + 0x1f1c], al  [x55748]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x1f1cu), c.a.l);
    // 1501:fbac  inc si  [x55748]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:fbad  loop 0xfba0  [x55748]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24bb0;
L24bbf:
    if (c.tracing) c.traceAt(0x24bbf);
    // 1501:fbaf  popf   [x1]
    c.ip = 0xfbb0u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L24bc0:
    if (c.tracing) c.traceAt(0x24bc0);
    // 1501:fbb0  ret   [x1]
    c.ip = c.pop16(); return;
L24bc1:
    if (c.tracing) c.traceAt(0x24bc1);
    // 1501:fbb1  push cx  [x40]
    c.push16(c.c.x);
    // 1501:fbb2  mov dx, 0x3c4  [x40]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:fbb5  mov ax, 0x102  [x40]
    c.a.x = (uint16_t)(0x102u);
    // 1501:fbb8  out dx, ax  [x40]
    c.ip = 0xfbb9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:fbb9  mov di, bp  [x40]
    c.di.x = (uint16_t)(c.bp.x);
    // 1501:fbbb  sub ax, ax  [x40]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.a.x, true));
    // 1501:fbbd  mov cx, 0x15e  [x40]
    c.c.x = (uint16_t)(0x15eu);
L24bd0:
    if (c.tracing) c.traceAt(0x24bd0);
    // 1501:fbc0  mov word ptr es:[di], ax  [x14000]
    c.w16(c.esb + (uint16_t)(c.di.x), c.a.x);
    // 1501:fbc3  add di, 0xa0  [x14000]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xa0u, true));
    // 1501:fbc7  loop 0xfbc0  [x14000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24bd0;
L24bd9:
    if (c.tracing) c.traceAt(0x24bd9);
    // 1501:fbc9  pop cx  [x40]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:fbca  ret   [x40]
    c.ip = c.pop16(); return;
L24bdb:
    if (c.tracing) c.traceAt(0x24bdb);
    // 1501:fbcb  cli   [x1]
    c.m.cli();
    // 1501:fbcc  push es  [x1]
    c.push16(c.es);
    // 1501:fbcd  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:fbcf  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:fbd1  mov ax, word ptr es:[0x20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 1501:fbd5  mov word ptr [0x5ef9], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x5ef9u), c.a.x);
    // 1501:fbd8  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 1501:fbdc  mov word ptr [0x5efb], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x5efbu), c.a.x);
    // 1501:fbdf  mov ax, 0xfc1f  [x1]
    c.a.x = (uint16_t)(0xfc1fu);
    // 1501:fbe2  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:fbe6  mov word ptr es:[0x22], cs  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.cs);
    // 1501:fbeb  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:fbec  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:fbee  out 0x43, al  [x1]
    c.ip = 0xfbf0u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:fbf0  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:fbf3  out 0x40, al  [x1]
    c.ip = 0xfbf5u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fbf5  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:fbf7  out 0x40, al  [x1]
    c.ip = 0xfbf9u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fbf9  sti   [x1]
    c.ip = 0xfbfau; c.d32 = false; c.m.sti();
L24c0a:
    if (c.tracing) c.traceAt(0x24c0a);
    // 1501:fbfa  ret   [x1]
    c.ip = c.pop16(); return;
L24c0b:
    if (c.tracing) c.traceAt(0x24c0b);
    // 1501:fbfb  cli   [x1]
    c.m.cli();
    // 1501:fbfc  push es  [x1]
    c.push16(c.es);
    // 1501:fbfd  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:fbff  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:fc01  mov ax, word ptr [0x5ef9]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5ef9u)));
    // 1501:fc04  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:fc08  mov ax, word ptr [0x5efb]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5efbu)));
    // 1501:fc0b  mov word ptr es:[0x22], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.a.x);
    // 1501:fc0f  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:fc10  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:fc12  out 0x43, al  [x1]
    c.ip = 0xfc14u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:fc14  mov ax, 0x4a9  [x1]
    c.a.x = (uint16_t)(0x4a9u);
    // 1501:fc17  out 0x40, al  [x1]
    c.ip = 0xfc19u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fc19  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:fc1b  out 0x40, al  [x1]
    c.ip = 0xfc1du; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fc1d  sti   [x1]
    c.ip = 0xfc1eu; c.d32 = false; c.m.sti();
L24c2e:
    if (c.tracing) c.traceAt(0x24c2e);
    // 1501:fc1e  ret   [x1]
    c.ip = c.pop16(); return;
L24c2f:
    if (c.tracing) c.traceAt(0x24c2f);
    // 1501:fc1f  pushaw   [x160]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:fc20  mov al, 0x34  [x160]
    c.a.l = (uint8_t)(0x34u);
    // 1501:fc22  out 0x43, al  [x160]
    c.ip = 0xfc24u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:fc24  mov ax, 0  [x160]
    c.a.x = (uint16_t)(0x0u);
    // 1501:fc27  out 0x40, al  [x160]
    c.ip = 0xfc29u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fc29  mov al, ah  [x160]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:fc2b  out 0x40, al  [x160]
    c.ip = 0xfc2du; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:fc2d  mov al, 0x20  [x160]
    c.a.l = (uint8_t)(0x20u);
    // 1501:fc2f  out 0x20, al  [x160]
    c.ip = 0xfc31u; c.d32 = false; c.out8(0x20, c.a.l);
    // 1501:fc31  popaw   [x160]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:fc32  iret   [x160]
    c.iret(); return;
L24c43:
    if (c.tracing) c.traceAt(0x24c43);
    // 1501:fc33  mov cx, 0x8c  [x1]
    c.c.x = (uint16_t)(0x8cu);
    // 1501:fc36  mov bp, 0x438  [x1]
    c.bp.x = (uint16_t)(0x438u);
L24c49:
    if (c.tracing) c.traceAt(0x24c49);
    // 1501:fc39  push cx  [x140]
    c.push16(c.c.x);
    // 1501:fc3a  call 0xfb6b  [x140]
    c.push16(0xfc3du); code_2(c, 0x24b7bu); if (c.ip != 0xfc3du) c.badReturn(0x24c4a);
L24c4d:
    if (c.tracing) c.traceAt(0x24c4d);
    // 1501:fc3d  cmp bp, 0x168  [x140]
    c.sub<16>(c.bp.x, 0x168u, true);
    // 1501:fc41  jne 0xfc4f  [x140]
    if (!c.zf) goto L24c5f;
L24c53:
    if (c.tracing) c.traceAt(0x24c53);
    // 1501:fc43  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:fc46  mov al, 3  [x1]
    c.a.l = (uint8_t)(0x3u);
    // 1501:fc48  out dx, al  [x1]
    c.ip = 0xfc49u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:fc49  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:fc4a  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:fc4c  out dx, al  [x1]
    c.ip = 0xfc4du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:fc4d  out dx, al  [x1]
    c.ip = 0xfc4eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:fc4e  out dx, al  [x1]
    c.ip = 0xfc4fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L24c5f:
    if (c.tracing) c.traceAt(0x24c5f);
    // 1501:fc4f  mov dx, 0x3c4  [x140]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:fc52  mov ax, 0x202  [x140]
    c.a.x = (uint16_t)(0x202u);
    // 1501:fc55  out dx, ax  [x140]
    c.ip = 0xfc56u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:fc56  mov cx, 0xa3  [x140]
    c.c.x = (uint16_t)(0xa3u);
    // 1501:fc59  mov ax, word ptr ds:[bp]  [x140]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:fc5e  add ax, 0x8000  [x140]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x8000u, false));
    // 1501:fc61  sub dx, dx  [x140]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.dx_.x, false));
    // 1501:fc63  div cx  [x140]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0xfc63u); }   // #DE: int 0, then again
    // 1501:fc65  mov di, ax  [x140]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:fc67  shr di, 3  [x140]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:fc6a  add di, 0x3499  [x140]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3499u, false));
    // 1501:fc6e  and ax, 7  [x140]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:fc71  mov dx, 0x1f1c  [x140]
    c.dx_.x = (uint16_t)(0x1f1cu);
    // 1501:fc74  mul dx  [x140]
    c.mul16(c.dx_.x);
    // 1501:fc76  mov si, ax  [x140]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:fc78  add si, 8  [x140]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, true));
    // 1501:fc7c  mov word ptr [0x708], si  [x140]
    c.w16(c.dsb + (uint16_t)(0x708u), c.si.x);
    // 1501:fc80  mov word ptr [0x70a], di  [x140]
    c.w16(c.dsb + (uint16_t)(0x70au), c.di.x);
    // 1501:fc84  push ds  [x140]
    c.push16(c.ds);
    // 1501:fc85  push cs  [x140]
    c.push16(c.cs);
    // 1501:fc86  pop ds  [x140]
    c.loadDs((uint16_t)c.pop16());
L24c97:
    if (c.tracing) c.traceAt(0x24c97);
    // 1501:fc87  mov cx, 0x16  [x25340]
    c.c.x = (uint16_t)(0x16u);
L24c9a:
    if (c.tracing) c.traceAt(0x24c9a);
    // 1501:fc8a  rep movsw word ptr es:[di], word ptr [si]  [x582820]
    c.ip = 0xfc8cu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L24c9c:
    if (c.tracing) c.traceAt(0x24c9c);
    // 1501:fc8c  add di, 0x74  [x25340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x74u, false));
    // 1501:fc8f  cmp di, 0xa5a0  [x25340]
    c.sub<16>(c.di.x, 0xa5a0u, true);
    // 1501:fc93  jb 0xfc87  [x25340]
    if (c.cf) goto L24c97;
L24ca5:
    if (c.tracing) c.traceAt(0x24ca5);
    // 1501:fc95  pop ds  [x140]
    c.loadDs((uint16_t)c.pop16());
    // 1501:fc96  add bp, 8  [x140]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x8u, false));
    // 1501:fc99  cmp bp, 0x5a0  [x140]
    c.sub<16>(c.bp.x, 0x5a0u, true);
    // 1501:fc9d  jb 0xfca3  [x140]
    if (c.cf) goto L24cb3;
L24caf:
    if (c.tracing) c.traceAt(0x24caf);
    // 1501:fc9f  sub bp, 0x5a0  [x1]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, 0x5a0u, true));
L24cb3:
    if (c.tracing) c.traceAt(0x24cb3);
    // 1501:fca3  pop cx  [x140]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:fca4  loop 0xfc39  [x140]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24c49;
L24cb6:
    if (c.tracing) c.traceAt(0x24cb6);
    // 1501:fca6  sub bp, 8  [x1]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, 0x8u, true));
    // 1501:fca9  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:fcac  mov bp, 0x43  [x1]
    c.bp.x = (uint16_t)(0x43u);
    // 1501:fcaf  mov ax, word ptr [0x70a]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x70au)));
    // 1501:fcb2  mov word ptr [0x70e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x70eu), c.a.x);
    // 1501:fcb5  mov word ptr [0x70c], 0xa0  [x1]
    c.w16(c.dsb + (uint16_t)(0x70cu), 0xa0u);
L24ccb:
    if (c.tracing) c.traceAt(0x24ccb);
    // 1501:fcbb  push cx  [x48]
    c.push16(c.c.x);
    // 1501:fcbc  call 0xfb6b  [x48]
    c.push16(0xfcbfu); code_2(c, 0x24b7bu); if (c.ip != 0xfcbfu) c.badReturn(0x24ccc);
L24ccf:
    if (c.tracing) c.traceAt(0x24ccf);
    // 1501:fcbf  cmp bp, 0x1c  [x48]
    c.sub<16>(c.bp.x, 0x1cu, true);
    // 1501:fcc2  jb 0xfcc7  [x48]
    if (c.cf) goto L24cd7;
L24cd4:
    if (c.tracing) c.traceAt(0x24cd4);
    // 1501:fcc4  call 0xfbb1  [x40]
    c.push16(0xfcc7u); code_2(c, 0x24bc1u); if (c.ip != 0xfcc7u) c.badReturn(0x24cd4);
L24cd7:
    if (c.tracing) c.traceAt(0x24cd7);
    // 1501:fcc7  mov dx, 0x3c4  [x48]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:fcca  mov ax, 0x202  [x48]
    c.a.x = (uint16_t)(0x202u);
    // 1501:fccd  out dx, ax  [x48]
    c.ip = 0xfcceu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:fcce  mov ax, word ptr [0x70c]  [x48]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x70cu)));
    // 1501:fcd1  add word ptr [0x70a], ax  [x48]
    c.w16(c.dsb + (uint16_t)(0x70au), c.add<16>(c.r16(c.dsb + (uint16_t)(0x70au)), c.a.x, false));
    // 1501:fcd5  mov si, word ptr [0x708]  [x48]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x708u)));
    // 1501:fcd9  mov di, word ptr [0x70a]  [x48]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x70au)));
    // 1501:fcdd  mov dx, di  [x48]
    c.dx_.x = (uint16_t)(c.di.x);
    // 1501:fcdf  add dx, 0x7120  [x48]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x7120u, true));
    // 1501:fce3  jae 0xfce8  [x48]
    if (!c.cf) goto L24cf8;
L24cf5:
    if (c.tracing) c.traceAt(0x24cf5);
    // 1501:fce5  mov dx, 0xdac0  [x16]
    c.dx_.x = (uint16_t)(0xdac0u);
L24cf8:
    if (c.tracing) c.traceAt(0x24cf8);
    // 1501:fce8  push ds  [x48]
    c.push16(c.ds);
    // 1501:fce9  push cs  [x48]
    c.push16(c.cs);
    // 1501:fcea  pop ds  [x48]
    c.loadDs((uint16_t)c.pop16());
L24cfb:
    if (c.tracing) c.traceAt(0x24cfb);
    // 1501:fceb  mov cx, 0x16  [x6512]
    c.c.x = (uint16_t)(0x16u);
L24cfe:
    if (c.tracing) c.traceAt(0x24cfe);
    // 1501:fcee  rep movsw word ptr es:[di], word ptr [si]  [x149776]
    c.ip = 0xfcf0u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L24d00:
    if (c.tracing) c.traceAt(0x24d00);
    // 1501:fcf0  add di, 0x74  [x6512]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x74u, false));
    // 1501:fcf3  cmp di, dx  [x6512]
    c.sub<16>(c.di.x, c.dx_.x, true);
    // 1501:fcf5  jb 0xfceb  [x6512]
    if (c.cf) goto L24cfb;
L24d07:
    if (c.tracing) c.traceAt(0x24d07);
    // 1501:fcf7  pop ds  [x48]
    c.loadDs((uint16_t)c.pop16());
    // 1501:fcf8  mov di, word ptr [0x70e]  [x48]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x70eu)));
    // 1501:fcfc  sub ax, ax  [x48]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.a.x, true));
L24d0e:
    if (c.tracing) c.traceAt(0x24d0e);
    // 1501:fcfe  cmp di, word ptr [0x70a]  [x5404]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x70au)), true);
    // 1501:fd02  jae 0xfd0e  [x5404]
    if (!c.cf) goto L24d1e;
L24d14:
    if (c.tracing) c.traceAt(0x24d14);
    // 1501:fd04  mov cx, 0x16  [x5356]
    c.c.x = (uint16_t)(0x16u);
L24d17:
    if (c.tracing) c.traceAt(0x24d17);
    // 1501:fd07  rep stosw word ptr es:[di], ax  [x123188]
    c.stos<16, false>(1);
L24d19:
    if (c.tracing) c.traceAt(0x24d19);
    // 1501:fd09  add di, 0x74  [x5356]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x74u, true));
    // 1501:fd0c  jmp 0xfcfe  [x5356]
    goto L24d0e;
L24d1e:
    if (c.tracing) c.traceAt(0x24d1e);
    // 1501:fd0e  test bp, 3  [x48]
    c.logic<16>((c.bp.x) & (0x3u), true);
    // 1501:fd12  jne 0xfd1a  [x48]
    if (!c.zf) goto L24d2a;
L24d24:
    if (c.tracing) c.traceAt(0x24d24);
    // 1501:fd14  add word ptr [0x70c], 0xa0  [x12]
    c.w16(c.dsb + (uint16_t)(0x70cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x70cu)), 0xa0u, true));
L24d2a:
    if (c.tracing) c.traceAt(0x24d2a);
    // 1501:fd1a  dec bp  [x48]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 1501:fd1b  pop cx  [x48]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:fd1c  loop 0xfcbb  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24ccb;
L24d2e:
    if (c.tracing) c.traceAt(0x24d2e);
    // 1501:fd1e  call 0xfbfb  [x1]
    c.push16(0xfd21u); code_2(c, 0x24c0bu); if (c.ip != 0xfd21u) c.badReturn(0x24d2e);
L24d31:
    if (c.tracing) c.traceAt(0x24d31);
    // 1501:fd21  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_2(2, {0x15010, 0x248fc, 0x24909, 0x2491d, 0x2491f, 0x2492f, 0x24931, 0x24936, 0x24938, 0x24947, 0x24949, 0x24953, 0x24959, 0x2495b, 0x24960, 0x24962, 0x24968, 0x2496b, 0x24978, 0x24985, 0x24987, 0x2499a, 0x249af, 0x249b2, 0x249b5, 0x249b7, 0x249ba, 0x249bd, 0x249d2, 0x249d5, 0x249d8, 0x249e5, 0x24a02, 0x24a13, 0x24a18, 0x24a20, 0x24a25, 0x24a3b, 0x24a46, 0x24a4c, 0x24a4f, 0x24a5d, 0x24a6d, 0x24a74, 0x24a7a, 0x24a84, 0x24a8c, 0x24a94, 0x24aab, 0x24aad, 0x24ab5, 0x24ad2, 0x24ae2, 0x24ae9, 0x24aef, 0x24af7, 0x24aff, 0x24b05, 0x24b1c, 0x24b1e, 0x24b24, 0x24b41, 0x24b50, 0x24b52, 0x24b69, 0x24b6c, 0x24b6d, 0x24b70, 0x24b71, 0x24b75, 0x24b76, 0x24b7a, 0x24b7b, 0x24b7e, 0x24b7f, 0x24b83, 0x24b84, 0x24b88, 0x24b8b, 0x24b8c, 0x24ba0, 0x24ba5, 0x24ba7, 0x24ba8, 0x24bb0, 0x24bb4, 0x24bbf, 0x24bc0, 0x24bc1, 0x24bd0, 0x24bd9, 0x24bdb, 0x24c0a, 0x24c0b, 0x24c2e, 0x24c2f, 0x24c43, 0x24c49, 0x24c4d, 0x24c53, 0x24c5f, 0x24c97, 0x24c9a, 0x24c9c, 0x24ca5, 0x24caf, 0x24cb3, 0x24cb6, 0x24ccb, 0x24ccf, 0x24cd4, 0x24cd7, 0x24cf5, 0x24cf8, 0x24cfb, 0x24cfe, 0x24d00, 0x24d07, 0x24d0e, 0x24d14, 0x24d17, 0x24d19, 0x24d1e, 0x24d24, 0x24d2a, 0x24d2e, 0x24d31}, code_2);

}  // namespace show
