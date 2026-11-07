// Part 14 (NEWG.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_15(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x189d9: goto L189d9;
    case 0x189f2: goto L189f2;
    case 0x189f4: goto L189f4;
    case 0x18a04: goto L18a04;
    case 0x18a06: goto L18a06;
    case 0x18a0b: goto L18a0b;
    case 0x18a15: goto L18a15;
    case 0x18a18: goto L18a18;
    case 0x18a26: goto L18a26;
    case 0x18a2c: goto L18a2c;
    case 0x18a35: goto L18a35;
    case 0x18a47: goto L18a47;
    case 0x18a4a: goto L18a4a;
    case 0x18a66: goto L18a66;
    case 0x18a69: goto L18a69;
    case 0x18a7b: goto L18a7b;
    case 0x18a7d: goto L18a7d;
    case 0x18a8e: goto L18a8e;
    case 0x18a90: goto L18a90;
    case 0x18aa4: goto L18aa4;
    case 0x18aa6: goto L18aa6;
    case 0x18abb: goto L18abb;
    case 0x18acc: goto L18acc;
    case 0x18ace: goto L18ace;
    case 0x18ae5: goto L18ae5;
    case 0x18aed: goto L18aed;
    case 0x18afe: goto L18afe;
    case 0x18b08: goto L18b08;
    case 0x18b0a: goto L18b0a;
    case 0x18b0d: goto L18b0d;
    case 0x18b21: goto L18b21;
    case 0x18b3a: goto L18b3a;
    case 0x18b49: goto L18b49;
    case 0x18b62: goto L18b62;
    case 0x18b7e: goto L18b7e;
    case 0x18b82: goto L18b82;
    case 0x18b85: goto L18b85;
    case 0x18b8f: goto L18b8f;
    case 0x18b91: goto L18b91;
    case 0x18b9c: goto L18b9c;
    case 0x18bb7: goto L18bb7;
    case 0x18bc0: goto L18bc0;
    case 0x18bdd: goto L18bdd;
    case 0x18be4: goto L18be4;
    case 0x18c02: goto L18c02;
    case 0x18c04: goto L18c04;
    case 0x18c07: goto L18c07;
    case 0x18c41: goto L18c41;
    case 0x18c4a: goto L18c4a;
    case 0x18c5b: goto L18c5b;
    case 0x18c61: goto L18c61;
    case 0x18c6a: goto L18c6a;
    case 0x18c7b: goto L18c7b;
    case 0x18c96: goto L18c96;
    case 0x18c9f: goto L18c9f;
    case 0x18cbc: goto L18cbc;
    case 0x18cc6: goto L18cc6;
    case 0x18ccb: goto L18ccb;
    case 0x18ce1: goto L18ce1;
    case 0x18ce4: goto L18ce4;
    case 0x18ce7: goto L18ce7;
    case 0x18cea: goto L18cea;
    case 0x18ceb: goto L18ceb;
    case 0x18cef: goto L18cef;
    case 0x18cf0: goto L18cf0;
    case 0x18cf4: goto L18cf4;
    case 0x18cf5: goto L18cf5;
    case 0x18d1d: goto L18d1d;
    case 0x18d35: goto L18d35;
    case 0x18d3b: goto L18d3b;
    case 0x18d45: goto L18d45;
    case 0x18d46: goto L18d46;
    case 0x18d4a: goto L18d4a;
    case 0x18d56: goto L18d56;
    case 0x18d5f: goto L18d5f;
    case 0x18d90: goto L18d90;
    case 0x18dae: goto L18dae;
    case 0x18db4: goto L18db4;
    case 0x18db7: goto L18db7;
    case 0x18dc7: goto L18dc7;
    case 0x18dca: goto L18dca;
    case 0x18dcb: goto L18dcb;
    case 0x18dd4: goto L18dd4;
    case 0x18ddd: goto L18ddd;
    case 0x18de1: goto L18de1;
    case 0x18dea: goto L18dea;
    case 0x18dee: goto L18dee;
    case 0x18df7: goto L18df7;
    case 0x18dfb: goto L18dfb;
    case 0x18e04: goto L18e04;
    case 0x18e08: goto L18e08;
    case 0x18e11: goto L18e11;
    case 0x18e15: goto L18e15;
    case 0x18e1e: goto L18e1e;
    case 0x18e22: goto L18e22;
    case 0x18e2b: goto L18e2b;
    case 0x18e2f: goto L18e2f;
    case 0x18e38: goto L18e38;
    case 0x18e3c: goto L18e3c;
    case 0x18e46: goto L18e46;
    case 0x18e47: goto L18e47;
    case 0x18e55: goto L18e55;
    case 0x18e57: goto L18e57;
    case 0x18e5b: goto L18e5b;
    case 0x18e68: goto L18e68;
    case 0x18e78: goto L18e78;
    case 0x18e79: goto L18e79;
    case 0x18e7c: goto L18e7c;
    case 0x18e9c: goto L18e9c;
    case 0x18ea7: goto L18ea7;
    case 0x18eae: goto L18eae;
    case 0x18ebe: goto L18ebe;
    case 0x18ec7: goto L18ec7;
    case 0x18ecb: goto L18ecb;
    case 0x18ecd: goto L18ecd;
    case 0x18ed1: goto L18ed1;
    case 0x18eef: goto L18eef;
    case 0x18ef2: goto L18ef2;
    case 0x18efb: goto L18efb;
    case 0x18f00: goto L18f00;
    case 0x18f3e: goto L18f3e;
    case 0x18f46: goto L18f46;
    case 0x18f62: goto L18f62;
    case 0x18f6e: goto L18f6e;
    case 0x18f79: goto L18f79;
    case 0x18f7a: goto L18f7a;
    case 0x18f8c: goto L18f8c;
    case 0x18f8d: goto L18f8d;
    case 0x18f91: goto L18f91;
    case 0x18fd1: goto L18fd1;
    case 0x18fd2: goto L18fd2;
    case 0x18fd9: goto L18fd9;
    case 0x18fdd: goto L18fdd;
    case 0x18fdf: goto L18fdf;
    case 0x18fe1: goto L18fe1;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x39c9  [x1]
    goto L189d9;
L189d9:
    if (c.tracing) c.traceAt(0x189d9);
    // 1501:39c9  mov word ptr cs:[0x39c5], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x39c5u), c.c.x);
    // 1501:39ce  mov word ptr cs:[0x39c7], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x39c7u), c.dx_.x);
    // 1501:39d3  mov word ptr cs:[0x39c3], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x39c3u), c.a.x);
    // 1501:39d7  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:39d9  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:39db  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:39dd  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:39e0  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L189f2:
    if (c.tracing) c.traceAt(0x189f2);
    // 1501:39e2  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L189f4:
    if (c.tracing) c.traceAt(0x189f4);
    // 1501:39e4  mov ax, word ptr cs:[0x39c3]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39c3u)));
    // 1501:39e8  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:39eb  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:39ed  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:39ef  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:39f2  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L18a04:
    if (c.tracing) c.traceAt(0x18a04);
    // 1501:39f4  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L18a06:
    if (c.tracing) c.traceAt(0x18a06);
    // 1501:39f6  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:39f9  int 0x10  [x1]
    c.ip = 0x39fbu; c.d32 = false; c.intr(0x10, 0x39fbu);
L18a0b:
    if (c.tracing) c.traceAt(0x18a0b);
    // 1501:39fb  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:39fe  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:3a00  out dx, al  [x1]
    c.ip = 0x3a01u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:3a01  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:3a02  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L18a15:
    if (c.tracing) c.traceAt(0x18a15);
    // 1501:3a05  out dx, al  [x48]
    c.ip = 0x3a06u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:3a06  loop 0x3a05  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18a15;
L18a18:
    if (c.tracing) c.traceAt(0x18a18);
    // 1501:3a08  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:3a0b  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:3a0d  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:3a10  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:3a13  out dx, ax  [x1]
    c.ip = 0x3a14u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3a14  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L18a26:
    if (c.tracing) c.traceAt(0x18a26);
    // 1501:3a16  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:3a18  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:3a1a  int 0x10  [x16]
    c.ip = 0x3a1cu; c.d32 = false; c.intr(0x10, 0x3a1cu);
L18a2c:
    if (c.tracing) c.traceAt(0x18a2c);
    // 1501:3a1c  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:3a1e  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:3a20  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:3a23  jne 0x3a16  [x16]
    if (!c.zf) goto L18a26;
L18a35:
    if (c.tracing) c.traceAt(0x18a35);
    // 1501:3a25  mov word ptr [0x22a3], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0x22a3u), 0x0u);
    // 1501:3a2e  mov word ptr [0x22a1], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0x22a1u), 0x0u);
L18a47:
    if (c.tracing) c.traceAt(0x18a47);
    // 1501:3a37  call 0x3d36  [x21]
    c.push16(0x3a3au); code_15(c, 0x18d46u); if (c.ip != 0x3a3au) c.badReturn(0x18a47);
L18a4a:
    if (c.tracing) c.traceAt(0x18a4a);
    // 1501:3a3a  add word ptr [0x22a1], 0x320  [x21]
    c.w16(c.dsb + (uint32_t)(0x22a1u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x22a1u)), 0x320u, false));
    // 1501:3a43  add word ptr [0x22a3], 8  [x21]
    c.w16(c.dsb + (uint32_t)(0x22a3u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x22a3u)), 0x8u, false));
    // 1501:3a4b  cmp word ptr [0x22a3], 0xa8  [x21]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22a3u)), 0xa8u, true);
    // 1501:3a54  jb 0x3a37  [x21]
    if (c.cf) goto L18a47;
L18a66:
    if (c.tracing) c.traceAt(0x18a66);
    // 1501:3a56  call 0x3e37  [x1]
    c.push16(0x3a59u); code_15(c, 0x18e47u); if (c.ip != 0x3a59u) c.badReturn(0x18a66);
L18a69:
    if (c.tracing) c.traceAt(0x18a69);
    // 1501:3a59  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:3a5c  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:3a5f  out dx, ax  [x1]
    c.ip = 0x3a60u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3a60  push ds  [x1]
    c.push16(c.ds);
    // 1501:3a61  push cs  [x1]
    c.push16(c.cs);
    // 1501:3a62  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:3a63  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:3a65  mov si, 8  [x1]
    c.si.x = (uint16_t)(0x8u);
    // 1501:3a68  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L18a7b:
    if (c.tracing) c.traceAt(0x18a7b);
    // 1501:3a6b  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x3a6du; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L18a7d:
    if (c.tracing) c.traceAt(0x18a7d);
    // 1501:3a6d  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:3a6e  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:3a71  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:3a74  out dx, ax  [x1]
    c.ip = 0x3a75u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3a75  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:3a78  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
    // 1501:3a7b  mov di, 0xaf0  [x1]
    c.di.x = (uint16_t)(0xaf0u);
L18a8e:
    if (c.tracing) c.traceAt(0x18a8e);
    // 1501:3a7e  rep stosw word ptr es:[di], ax  [x2001]
    c.stos<16, false>(1);
L18a90:
    if (c.tracing) c.traceAt(0x18a90);
    // 1501:3a80  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:3a83  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:3a86  out dx, ax  [x1]
    c.ip = 0x3a87u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3a87  lea si, [0x22d9]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x22d9u));
    // 1501:3a8e  mov di, 0x192  [x1]
    c.di.x = (uint16_t)(0x192u);
    // 1501:3a91  mov cx, 0x500  [x1]
    c.c.x = (uint16_t)(0x500u);
L18aa4:
    if (c.tracing) c.traceAt(0x18aa4);
    // 1501:3a94  rep movsb byte ptr es:[di], byte ptr [si]  [x1281]
    c.ip = 0x3a96u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L18aa6:
    if (c.tracing) c.traceAt(0x18aa6);
    // 1501:3a96  push es  [x946]
    c.ip = 0x3a96u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:3a97  mov ax, word ptr cs:[0x39c5]  [x946]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39c5u)));
    // 1501:3a9b  mov es, ax  [x946]
    c.loadEs(c.a.x);
    // 1501:3a9d  mov si, word ptr cs:[0x39c7]  [x946]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39c7u)));
    // 1501:3aa2  mov dx, word ptr es:[si]  [x946]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:3aa5  pop es  [x946]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3aa6  cmp dx, 0  [x946]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:3aa9  je 0x3a96  [x946]
    if (c.zf) goto L18aa6;
L18abb:
    if (c.tracing) c.traceAt(0x18abb);
    // 1501:3aab  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:3aae  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:3ab0  out dx, al  [x1]
    c.ip = 0x3ab1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:3ab1  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:3ab2  lea si, [0x22a5]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x22a5u));
    // 1501:3ab9  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L18acc:
    if (c.tracing) c.traceAt(0x18acc);
    // 1501:3abc  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0x3abeu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L18ace:
    if (c.tracing) c.traceAt(0x18ace);
    // 1501:3abe  mov si, word ptr [0x22d7]  [x2398]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22d7u)));
    // 1501:3ac5  mov ax, word ptr [si + 0x1beb]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1bebu)));
    // 1501:3ac9  sar ax, 0xa  [x2398]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0xau) & 31), true));
    // 1501:3acc  mov word ptr [0x22d5], ax  [x2398]
    c.w16(c.dsb + (uint32_t)(0x22d5u), c.a.x);
    // 1501:3ad2  call 0x3cd7  [x2398]
    c.push16(0x3ad5u); code_15(c, 0x18ce7u); if (c.ip != 0x3ad5u) c.badReturn(0x18ae2);
L18ae5:
    if (c.tracing) c.traceAt(0x18ae5);
    // 1501:3ad5  cmp byte ptr cs:[0x39c2], 0  [x2398]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x39c2u)), 0x0u, true);
    // 1501:3adb  je 0x3afd  [x2398]
    if (c.zf) goto L18b0d;
L18aed:
    if (c.tracing) c.traceAt(0x18aed);
    // 1501:3add  mov dx, 0x3c8  [x19]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:3ae0  xor al, al  [x19]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:3ae2  out dx, al  [x19]
    c.ip = 0x3ae3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:3ae3  inc dx  [x19]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:3ae4  mov cx, 0x30  [x19]
    c.c.x = (uint16_t)(0x30u);
    // 1501:3ae7  lea si, [0x22a5]  [x19]
    c.si.x = (uint16_t)((uint32_t)(0x22a5u));
L18afe:
    if (c.tracing) c.traceAt(0x18afe);
    // 1501:3aee  lodsb al, byte ptr [si]  [x912]
    c.ip = 0x3aefu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:3aef  add al, byte ptr cs:[0x39c2]  [x912]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.csb + (uint16_t)(0x39c2u)), false));
    // 1501:3af4  cmp al, 0x3f  [x912]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:3af6  jb 0x3afa  [x912]
    if (c.cf) goto L18b0a;
L18b08:
    if (c.tracing) c.traceAt(0x18b08);
    // 1501:3af8  mov al, 0x3f  [x347]
    c.a.l = (uint8_t)(0x3fu);
L18b0a:
    if (c.tracing) c.traceAt(0x18b0a);
    // 1501:3afa  out dx, al  [x912]
    c.ip = 0x3afbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:3afb  loop 0x3aee  [x912]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18afe;
L18b0d:
    if (c.tracing) c.traceAt(0x18b0d);
    // 1501:3afd  mov dx, 0x3c4  [x2398]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:3b00  mov ax, 0x102  [x2398]
    c.a.x = (uint16_t)(0x102u);
    // 1501:3b03  out dx, ax  [x2398]
    c.ip = 0x3b04u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3b04  lea si, [0xc]  [x2398]
    c.si.x = (uint16_t)((uint32_t)(0xcu));
    // 1501:3b0b  mov di, 0xaf0  [x2398]
    c.di.x = (uint16_t)(0xaf0u);
    // 1501:3b0e  mov cx, 0x64  [x2398]
    c.c.x = (uint16_t)(0x64u);
L18b21:
    if (c.tracing) c.traceAt(0x18b21);
    // 1501:3b11  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b12u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b12  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b13u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b13  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b14u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b14  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b15u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b15  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b16u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b16  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b17u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b17  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b18u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b18  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b19u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b19  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1au; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1a  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1bu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1b  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1cu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1c  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1du; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1d  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1eu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1e  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b1fu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b1f  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b20u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b20  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b21u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b21  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b22u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b22  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b23u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b23  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b24u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b24  movsw word ptr es:[di], word ptr [si]  [x239800]
    c.ip = 0x3b25u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:3b25  add si, 0x18  [x239800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x18u, true));
    // 1501:3b28  loop 0x3b11  [x239800]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18b21;
L18b3a:
    if (c.tracing) c.traceAt(0x18b3a);
    // 1501:3b2a  push es  [x2398]
    c.push16(c.es);
    // 1501:3b2b  push ds  [x2398]
    c.push16(c.ds);
    // 1501:3b2c  pop es  [x2398]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3b2d  lea di, [0xc]  [x2398]
    c.di.x = (uint16_t)((uint32_t)(0xcu));
    // 1501:3b34  xor ax, ax  [x2398]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:3b36  mov cx, 0x64  [x2398]
    c.c.x = (uint16_t)(0x64u);
L18b49:
    if (c.tracing) c.traceAt(0x18b49);
    // 1501:3b39  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3a  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3b  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3c  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3d  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3e  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b3f  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b40  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b41  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b42  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b43  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b44  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b45  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b46  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b47  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b48  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b49  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b4a  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b4b  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b4c  stosw word ptr es:[di], ax  [x239800]
    c.stos<16, false>(0);
    // 1501:3b4d  add di, 0x18  [x239800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x18u, true));
    // 1501:3b50  loop 0x3b39  [x239800]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18b49;
L18b62:
    if (c.tracing) c.traceAt(0x18b62);
    // 1501:3b52  pop es  [x2398]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3b53  mov ax, word ptr cs:[0x39bc]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39bcu)));
    // 1501:3b57  push ax  [x2398]
    c.push16(c.a.x);
    // 1501:3b58  mov ax, word ptr [0x22d7]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22d7u)));
    // 1501:3b5e  push ax  [x2398]
    c.push16(c.a.x);
    // 1501:3b5f  mov ax, word ptr [0x218f]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x218fu)));
    // 1501:3b65  mov word ptr [0x218d], ax  [x2398]
    c.w16(c.dsb + (uint32_t)(0x218du), c.a.x);
    // 1501:3b6b  mov cx, 5  [x2398]
    c.c.x = (uint16_t)(0x5u);
L18b7e:
    if (c.tracing) c.traceAt(0x18b7e);
    // 1501:3b6e  push cx  [x11990]
    c.push16(c.c.x);
    // 1501:3b6f  call 0x3f7d  [x11990]
    c.push16(0x3b72u); code_15(c, 0x18f8du); if (c.ip != 0x3b72u) c.badReturn(0x18b7f);
L18b82:
    if (c.tracing) c.traceAt(0x18b82);
    // 1501:3b72  call 0x3e6c  [x11990]
    c.push16(0x3b75u); code_15(c, 0x18e7cu); if (c.ip != 0x3b75u) c.badReturn(0x18b82);
L18b85:
    if (c.tracing) c.traceAt(0x18b85);
    // 1501:3b75  mov si, word ptr [0x218d]  [x11990]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x218du)));
    // 1501:3b7c  call 0x3fc2  [x11990]
    c.push16(0x3b7fu); code_15(c, 0x18fd2u); if (c.ip != 0x3b7fu) c.badReturn(0x18b8c);
L18b8f:
    if (c.tracing) c.traceAt(0x18b8f);
    // 1501:3b7f  jae 0x3b8c  [x11990]
    if (!c.cf) goto L18b9c;
L18b91:
    if (c.tracing) c.traceAt(0x18b91);
    // 1501:3b81  pop cx  [x20]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:3b82  mov byte ptr [0x1a82], 1  [x20]
    c.w8(c.dsb + (uint32_t)(0x1a82u), 0x1u);
    // 1501:3b8a  jmp 0x3bf7  [x20]
    goto L18c07;
L18b9c:
    if (c.tracing) c.traceAt(0x18b9c);
    // 1501:3b8c  mov word ptr [0x218d], si  [x11970]
    c.w16(c.dsb + (uint32_t)(0x218du), c.si.x);
    // 1501:3b93  add word ptr [0x22d7], 0xc8  [x11970]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0xc8u, false));
    // 1501:3b9c  cmp word ptr [0x22d7], 0x5a0  [x11970]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true);
    // 1501:3ba5  jb 0x3bb0  [x11970]
    if (c.cf) goto L18bc0;
L18bb7:
    if (c.tracing) c.traceAt(0x18bb7);
    // 1501:3ba7  sub word ptr [0x22d7], 0x5a0  [x1576]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true));
L18bc0:
    if (c.tracing) c.traceAt(0x18bc0);
    // 1501:3bb0  mov si, word ptr [0x22d7]  [x11970]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22d7u)));
    // 1501:3bb7  mov ax, word ptr [si + 0x1beb]  [x11970]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1bebu)));
    // 1501:3bbb  sar ax, 0xa  [x11970]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0xau) & 31), false));
    // 1501:3bbe  mov word ptr [0x22d5], ax  [x11970]
    c.w16(c.dsb + (uint32_t)(0x22d5u), c.a.x);
    // 1501:3bc4  sub word ptr cs:[0x39bc], 0x90  [x11970]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x90u, true));
    // 1501:3bcb  jns 0x3bd4  [x11970]
    if (!c.sf) goto L18be4;
L18bdd:
    if (c.tracing) c.traceAt(0x18bdd);
    // 1501:3bcd  add word ptr cs:[0x39bc], 0x2d0  [x2378]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.add<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x2d0u, true));
L18be4:
    if (c.tracing) c.traceAt(0x18be4);
    // 1501:3bd4  mov si, word ptr cs:[0x39bc]  [x11970]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39bcu)));
    // 1501:3bd9  mov cx, 0x10  [x11970]
    c.c.x = (uint16_t)(0x10u);
    // 1501:3bdc  mov ax, word ptr [si + 0x1a83]  [x11970]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1a83u)));
    // 1501:3be0  cdq   [x11970]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:3be1  idiv cx  [x11970]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3be1u); }   // #DE: int 0, then again
    // 1501:3be3  mov word ptr cs:[0x39ba], 0x85c  [x11970]
    c.w16(c.csb + (uint16_t)(0x39bau), 0x85cu);
    // 1501:3bea  sub word ptr cs:[0x39ba], ax  [x11970]
    c.w16(c.csb + (uint16_t)(0x39bau), c.sub<16>(c.r16(c.csb + (uint16_t)(0x39bau)), c.a.x, true));
    // 1501:3bef  pop cx  [x11970]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:3bf0  loop 0x3bf4  [x11970]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18c04;
L18c02:
    if (c.tracing) c.traceAt(0x18c02);
    // 1501:3bf2  jmp 0x3bf7  [x2378]
    goto L18c07;
L18c04:
    if (c.tracing) c.traceAt(0x18c04);
    // 1501:3bf4  jmp 0x3b6e  [x9592]
    goto L18b7e;
L18c07:
    if (c.tracing) c.traceAt(0x18c07);
    // 1501:3bf7  pop ax  [x2398]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:3bf8  mov word ptr [0x22d7], ax  [x2398]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.a.x);
    // 1501:3bfe  pop ax  [x2398]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:3bff  mov word ptr cs:[0x39bc], ax  [x2398]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.a.x);
    // 1501:3c03  mov si, word ptr cs:[0x39bc]  [x2398]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39bcu)));
    // 1501:3c08  mov cx, 0x10  [x2398]
    c.c.x = (uint16_t)(0x10u);
    // 1501:3c0b  mov ax, word ptr [si + 0x1a83]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1a83u)));
    // 1501:3c0f  cdq   [x2398]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:3c10  idiv cx  [x2398]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3c10u); }   // #DE: int 0, then again
    // 1501:3c12  mov word ptr cs:[0x39ba], 0x85c  [x2398]
    c.w16(c.csb + (uint16_t)(0x39bau), 0x85cu);
    // 1501:3c19  sub word ptr cs:[0x39ba], ax  [x2398]
    c.w16(c.csb + (uint16_t)(0x39bau), c.sub<16>(c.r16(c.csb + (uint16_t)(0x39bau)), c.a.x, false));
    // 1501:3c1e  add word ptr [0x22d7], 8  [x2398]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x8u, false));
    // 1501:3c26  cmp word ptr [0x22d7], 0x5a0  [x2398]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true);
    // 1501:3c2f  jb 0x3c3a  [x2398]
    if (c.cf) goto L18c4a;
L18c41:
    if (c.tracing) c.traceAt(0x18c41);
    // 1501:3c31  sub word ptr [0x22d7], 0x5a0  [x10]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true));
L18c4a:
    if (c.tracing) c.traceAt(0x18c4a);
    // 1501:3c3a  add word ptr cs:[0x39bc], 2  [x2398]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.add<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x2u, false));
    // 1501:3c40  add word ptr [0x1a80], 0x1500  [x2398]
    c.w16(c.dsb + (uint32_t)(0x1a80u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x1a80u)), 0x1500u, true));
    // 1501:3c49  jae 0x3c51  [x2398]
    if (!c.cf) goto L18c61;
L18c5b:
    if (c.tracing) c.traceAt(0x18c5b);
    // 1501:3c4b  add word ptr cs:[0x39bc], 2  [x196]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.add<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x2u, true));
L18c61:
    if (c.tracing) c.traceAt(0x18c61);
    // 1501:3c51  cmp word ptr cs:[0x39bc], 0x2d0  [x2398]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x2d0u, true);
    // 1501:3c58  jb 0x3c8f  [x2398]
    if (c.cf) goto L18c9f;
L18c6a:
    if (c.tracing) c.traceAt(0x18c6a);
    // 1501:3c5a  sub word ptr cs:[0x39bc], 0x90  [x36]
    c.w16(c.csb + (uint16_t)(0x39bcu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x39bcu)), 0x90u, true));
    // 1501:3c61  mov si, word ptr [0x218f]  [x36]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x218fu)));
    // 1501:3c68  call 0x3fc2  [x36]
    c.push16(0x3c6bu); code_15(c, 0x18fd2u); if (c.ip != 0x3c6bu) c.badReturn(0x18c78);
L18c7b:
    if (c.tracing) c.traceAt(0x18c7b);
    // 1501:3c6b  mov word ptr [0x218f], si  [x36]
    c.w16(c.dsb + (uint32_t)(0x218fu), c.si.x);
    // 1501:3c72  add word ptr [0x22d7], 0xc8  [x36]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0xc8u, false));
    // 1501:3c7b  cmp word ptr [0x22d7], 0x5a0  [x36]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true);
    // 1501:3c84  jb 0x3c8f  [x36]
    if (c.cf) goto L18c9f;
L18c96:
    if (c.tracing) c.traceAt(0x18c96);
    // 1501:3c86  sub word ptr [0x22d7], 0x5a0  [x8]
    c.w16(c.dsb + (uint32_t)(0x22d7u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x22d7u)), 0x5a0u, true));
L18c9f:
    if (c.tracing) c.traceAt(0x18c9f);
    // 1501:3c8f  push es  [x2398]
    c.push16(c.es);
    // 1501:3c90  mov ax, word ptr cs:[0x39c5]  [x2398]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39c5u)));
    // 1501:3c94  mov es, ax  [x2398]
    c.loadEs(c.a.x);
    // 1501:3c96  mov si, word ptr cs:[0x39c7]  [x2398]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39c7u)));
    // 1501:3c9b  mov dx, word ptr es:[si]  [x2398]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:3c9e  pop es  [x2398]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3c9f  mov dx, 1  [x2398]
    c.dx_.x = (uint16_t)(0x1u);
    // 1501:3ca2  cmp byte ptr [0x1a82], 0  [x2398]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1a82u)), 0x0u, true);
    // 1501:3caa  je 0x3cd4  [x2398]
    if (c.zf) goto L18ce4;
L18cbc:
    if (c.tracing) c.traceAt(0x18cbc);
    // 1501:3cac  cmp byte ptr [0x1a82], 2  [x20]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1a82u)), 0x2u, true);
    // 1501:3cb4  je 0x3cbb  [x20]
    if (c.zf) goto L18ccb;
L18cc6:
    if (c.tracing) c.traceAt(0x18cc6);
    // 1501:3cb6  cmp dx, 0  [x20]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:3cb9  je 0x3cd4  [x20]
    if (c.zf) goto L18ce4;
L18ccb:
    if (c.tracing) c.traceAt(0x18ccb);
    // 1501:3cbb  mov byte ptr [0x1a82], 2  [x20]
    c.w8(c.dsb + (uint32_t)(0x1a82u), 0x2u);
    // 1501:3cc3  add byte ptr cs:[0x39c2], 4  [x20]
    c.w8(c.csb + (uint16_t)(0x39c2u), c.add<8>(c.r8(c.csb + (uint16_t)(0x39c2u)), 0x4u, false));
    // 1501:3cc9  cmp byte ptr cs:[0x39c2], 0x50  [x20]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x39c2u)), 0x50u, true);
    // 1501:3ccf  jb 0x3cd4  [x20]
    if (c.cf) goto L18ce4;
L18ce1:
    if (c.tracing) c.traceAt(0x18ce1);
    // 1501:3cd1  jmp 0x3fd1  [x1]
    goto L18fe1;
L18ce4:
    if (c.tracing) c.traceAt(0x18ce4);
    // 1501:3cd4  jmp 0x3abe  [x2397]
    goto L18ace;
L18ce7:
    if (c.tracing) c.traceAt(0x18ce7);
    // 1501:3cd7  mov dx, 0x3da  [x2398]
    c.dx_.x = (uint16_t)(0x3dau);
L18cea:
    if (c.tracing) c.traceAt(0x18cea);
    // 1501:3cda  in al, dx  [x111782]
    c.ip = 0x3cdbu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L18ceb:
    if (c.tracing) c.traceAt(0x18ceb);
    // 1501:3cdb  test al, 8  [x148243]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:3cdd  je 0x3cda  [x148243]
    if (c.zf) goto L18cea;
L18cef:
    if (c.tracing) c.traceAt(0x18cef);
    // 1501:3cdf  in al, dx  [x7659]
    c.ip = 0x3ce0u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L18cf0:
    if (c.tracing) c.traceAt(0x18cf0);
    // 1501:3ce0  test al, 8  [x10212]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:3ce2  jne 0x3cdf  [x10212]
    if (!c.zf) goto L18cef;
L18cf4:
    if (c.tracing) c.traceAt(0x18cf4);
    // 1501:3ce4  ret   [x2398]
    c.ip = c.pop16(); return;
L18cf5:
    if (c.tracing) c.traceAt(0x18cf5);
    // 1501:3ce5  mov cx, word ptr cs:[0x38f6]  [x11990]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
    // 1501:3cea  xor dx, dx  [x11990]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:3cec  mov ax, 7  [x11990]
    c.a.x = (uint16_t)(0x7u);
    // 1501:3cef  div cx  [x11990]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x3cefu); }   // #DE: int 0, then again
    // 1501:3cf1  mov word ptr cs:[0x38f0], ax  [x11990]
    c.w16(c.csb + (uint16_t)(0x38f0u), c.a.x);
    // 1501:3cf5  mov word ptr cs:[0x38f2], dx  [x11990]
    c.w16(c.csb + (uint16_t)(0x38f2u), c.dx_.x);
    // 1501:3cfa  mov word ptr cs:[0x38f4], 3  [x11990]
    c.w16(c.csb + (uint16_t)(0x38f4u), 0x3u);
    // 1501:3d01  xor bx, bx  [x11990]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:3d03  mov bp, word ptr cs:[0x38f6]  [x11990]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
    // 1501:3d08  mov cx, word ptr cs:[0x38f6]  [x11990]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
L18d1d:
    if (c.tracing) c.traceAt(0x18d1d);
    // 1501:3d0d  mov si, 0  [x197450]
    c.si.x = (uint16_t)(0x0u);
    // 1501:3d10  add si, word ptr cs:[0x38f0]  [x197450]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x38f0u)), false));
    // 1501:3d15  mov ax, word ptr cs:[0x38f2]  [x197450]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f2u)));
    // 1501:3d19  add word ptr cs:[0x38f4], ax  [x197450]
    c.w16(c.csb + (uint16_t)(0x38f4u), c.add<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.a.x, false));
    // 1501:3d1e  cmp word ptr cs:[0x38f4], bp  [x197450]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.bp.x, true);
    // 1501:3d23  jl 0x3d2b  [x197450]
    if ((c.sf != c.of)) goto L18d3b;
L18d35:
    if (c.tracing) c.traceAt(0x18d35);
    // 1501:3d25  sub word ptr cs:[0x38f4], bp  [x56331]
    c.w16(c.csb + (uint16_t)(0x38f4u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.bp.x, true));
    // 1501:3d2a  inc si  [x56331]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L18d3b:
    if (c.tracing) c.traceAt(0x18d3b);
    // 1501:3d2b  mov word ptr cs:[bx + 0x3848], si  [x197450]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x3848u), c.si.x);
    // 1501:3d30  add bx, 2  [x197450]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:3d33  loop 0x3d0d  [x197450]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18d1d;
L18d45:
    if (c.tracing) c.traceAt(0x18d45);
    // 1501:3d35  ret   [x11990]
    c.ip = c.pop16(); return;
L18d46:
    if (c.tracing) c.traceAt(0x18d46);
    // 1501:3d36  xor si, si  [x21]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:3d38  xor al, al  [x21]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L18d4a:
    if (c.tracing) c.traceAt(0x18d4a);
    // 1501:3d3a  mov byte ptr cs:[si + 0x1f48], al  [x134400]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x1f48u), c.a.l);
    // 1501:3d3f  inc si  [x134400]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:3d40  cmp si, 0x1900  [x134400]
    c.sub<16>(c.si.x, 0x1900u, true);
    // 1501:3d44  jb 0x3d3a  [x134400]
    if (c.cf) goto L18d4a;
L18d56:
    if (c.tracing) c.traceAt(0x18d56);
    // 1501:3d46  mov word ptr cs:[0x38f6], 1  [x21]
    c.w16(c.csb + (uint16_t)(0x38f6u), 0x1u);
    // 1501:3d4d  xor di, di  [x21]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L18d5f:
    if (c.tracing) c.traceAt(0x18d5f);
    // 1501:3d4f  mov cx, word ptr cs:[0x38f6]  [x1659]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
    // 1501:3d54  xor dx, dx  [x1659]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:3d56  mov ax, 8  [x1659]
    c.a.x = (uint16_t)(0x8u);
    // 1501:3d59  div cx  [x1659]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x3d59u); }   // #DE: int 0, then again
    // 1501:3d5b  mov word ptr cs:[0x38f0], ax  [x1659]
    c.w16(c.csb + (uint16_t)(0x38f0u), c.a.x);
    // 1501:3d5f  mov word ptr cs:[0x38f2], dx  [x1659]
    c.w16(c.csb + (uint16_t)(0x38f2u), c.dx_.x);
    // 1501:3d64  shr ax, 1  [x1659]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:3d66  mov word ptr cs:[0x38f4], 4  [x1659]
    c.w16(c.csb + (uint16_t)(0x38f4u), 0x4u);
    // 1501:3d6d  xor bx, bx  [x1659]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:3d6f  mov bp, word ptr cs:[0x38f6]  [x1659]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
    // 1501:3d74  mov cx, word ptr cs:[0x38f6]  [x1659]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f6u)));
    // 1501:3d79  mov si, word ptr [0x22a3]  [x1659]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22a3u)));
L18d90:
    if (c.tracing) c.traceAt(0x18d90);
    // 1501:3d80  mov al, byte ptr [si + 0x1900]  [x66360]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1900u)));
    // 1501:3d84  mov byte ptr cs:[bx + di + 0x1f48], al  [x66360]
    c.w8(c.csb + (uint16_t)(c.b.x + c.di.x + 0x1f48u), c.a.l);
    // 1501:3d89  add si, word ptr cs:[0x38f0]  [x66360]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x38f0u)), false));
    // 1501:3d8e  mov ax, word ptr cs:[0x38f2]  [x66360]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38f2u)));
    // 1501:3d92  add word ptr cs:[0x38f4], ax  [x66360]
    c.w16(c.csb + (uint16_t)(0x38f4u), c.add<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.a.x, false));
    // 1501:3d97  cmp word ptr cs:[0x38f4], bp  [x66360]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.bp.x, true);
    // 1501:3d9c  jl 0x3da4  [x66360]
    if ((c.sf != c.of)) goto L18db4;
L18dae:
    if (c.tracing) c.traceAt(0x18dae);
    // 1501:3d9e  sub word ptr cs:[0x38f4], bp  [x12201]
    c.w16(c.csb + (uint16_t)(0x38f4u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x38f4u)), c.bp.x, true));
    // 1501:3da3  inc si  [x12201]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L18db4:
    if (c.tracing) c.traceAt(0x18db4);
    // 1501:3da4  inc bx  [x66360]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:3da5  loop 0x3d80  [x66360]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18d90;
L18db7:
    if (c.tracing) c.traceAt(0x18db7);
    // 1501:3da7  add di, 0x50  [x1659]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x50u, false));
    // 1501:3daa  inc word ptr cs:[0x38f6]  [x1659]
    c.w16(c.csb + (uint16_t)(0x38f6u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x38f6u)), false));
    // 1501:3daf  cmp word ptr cs:[0x38f6], 0x50  [x1659]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x38f6u)), 0x50u, true);
    // 1501:3db5  jb 0x3d4f  [x1659]
    if (c.cf) goto L18d5f;
L18dc7:
    if (c.tracing) c.traceAt(0x18dc7);
    // 1501:3db7  call 0x3dbb  [x21]
    c.push16(0x3dbau); code_15(c, 0x18dcbu); if (c.ip != 0x3dbau) c.badReturn(0x18dc7);
L18dca:
    if (c.tracing) c.traceAt(0x18dca);
    // 1501:3dba  ret   [x21]
    c.ip = c.pop16(); return;
L18dcb:
    if (c.tracing) c.traceAt(0x18dcb);
    // 1501:3dbb  xor si, si  [x21]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:3dbd  mov di, word ptr [0x22a1]  [x21]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22a1u)));
L18dd4:
    if (c.tracing) c.traceAt(0x18dd4);
    // 1501:3dc4  mov al, byte ptr cs:[si + 0x1f48]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f48u)));
    // 1501:3dc9  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3dcb  je 0x3dd1  [x16800]
    if (c.zf) goto L18de1;
L18ddd:
    if (c.tracing) c.traceAt(0x18ddd);
    // 1501:3dcd  or byte ptr gs:[di], 0x80  [x4941]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x80u), true));
L18de1:
    if (c.tracing) c.traceAt(0x18de1);
    // 1501:3dd1  mov al, byte ptr cs:[si + 0x1f49]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f49u)));
    // 1501:3dd6  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3dd8  je 0x3dde  [x16800]
    if (c.zf) goto L18dee;
L18dea:
    if (c.tracing) c.traceAt(0x18dea);
    // 1501:3dda  or byte ptr gs:[di], 0x40  [x4837]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x40u), true));
L18dee:
    if (c.tracing) c.traceAt(0x18dee);
    // 1501:3dde  mov al, byte ptr cs:[si + 0x1f4a]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4au)));
    // 1501:3de3  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3de5  je 0x3deb  [x16800]
    if (c.zf) goto L18dfb;
L18df7:
    if (c.tracing) c.traceAt(0x18df7);
    // 1501:3de7  or byte ptr gs:[di], 0x20  [x4682]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x20u), true));
L18dfb:
    if (c.tracing) c.traceAt(0x18dfb);
    // 1501:3deb  mov al, byte ptr cs:[si + 0x1f4b]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4bu)));
    // 1501:3df0  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3df2  je 0x3df8  [x16800]
    if (c.zf) goto L18e08;
L18e04:
    if (c.tracing) c.traceAt(0x18e04);
    // 1501:3df4  or byte ptr gs:[di], 0x10  [x4523]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x10u), true));
L18e08:
    if (c.tracing) c.traceAt(0x18e08);
    // 1501:3df8  mov al, byte ptr cs:[si + 0x1f4c]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4cu)));
    // 1501:3dfd  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3dff  je 0x3e05  [x16800]
    if (c.zf) goto L18e15;
L18e11:
    if (c.tracing) c.traceAt(0x18e11);
    // 1501:3e01  or byte ptr gs:[di], 8  [x4391]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x8u), true));
L18e15:
    if (c.tracing) c.traceAt(0x18e15);
    // 1501:3e05  mov al, byte ptr cs:[si + 0x1f4d]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4du)));
    // 1501:3e0a  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3e0c  je 0x3e12  [x16800]
    if (c.zf) goto L18e22;
L18e1e:
    if (c.tracing) c.traceAt(0x18e1e);
    // 1501:3e0e  or byte ptr gs:[di], 4  [x4265]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x4u), true));
L18e22:
    if (c.tracing) c.traceAt(0x18e22);
    // 1501:3e12  mov al, byte ptr cs:[si + 0x1f4e]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4eu)));
    // 1501:3e17  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3e19  je 0x3e1f  [x16800]
    if (c.zf) goto L18e2f;
L18e2b:
    if (c.tracing) c.traceAt(0x18e2b);
    // 1501:3e1b  or byte ptr gs:[di], 2  [x4150]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x2u), true));
L18e2f:
    if (c.tracing) c.traceAt(0x18e2f);
    // 1501:3e1f  mov al, byte ptr cs:[si + 0x1f4f]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x1f4fu)));
    // 1501:3e24  cmp al, 0  [x16800]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3e26  je 0x3e2c  [x16800]
    if (c.zf) goto L18e3c;
L18e38:
    if (c.tracing) c.traceAt(0x18e38);
    // 1501:3e28  or byte ptr gs:[di], 1  [x4030]
    c.w8(c.gsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.gsb + (uint16_t)(c.di.x))) | (0x1u), true));
L18e3c:
    if (c.tracing) c.traceAt(0x18e3c);
    // 1501:3e2c  add si, 8  [x16800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:3e2f  inc di  [x16800]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:3e30  cmp si, 0x1900  [x16800]
    c.sub<16>(c.si.x, 0x1900u, true);
    // 1501:3e34  jb 0x3dc4  [x16800]
    if (c.cf) goto L18dd4;
L18e46:
    if (c.tracing) c.traceAt(0x18e46);
    // 1501:3e36  ret   [x21]
    c.ip = c.pop16(); return;
L18e47:
    if (c.tracing) c.traceAt(0x18e47);
    // 1501:3e37  push gs  [x1]
    c.push16(c.gs);
    // 1501:3e39  mov ax, gs  [x1]
    c.a.x = (uint16_t)(c.gs);
    // 1501:3e3b  add ax, 0x41a  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x41au, true));
    // 1501:3e3e  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 1501:3e40  mov cx, 8  [x1]
    c.c.x = (uint16_t)(0x8u);
    // 1501:3e43  clc   [x1]
    c.cf = false;
    // 1501:3e44  pushf   [x1]
    c.push16(c.flags());
L18e55:
    if (c.tracing) c.traceAt(0x18e55);
    // 1501:3e45  xor si, si  [x8]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L18e57:
    if (c.tracing) c.traceAt(0x18e57);
    // 1501:3e47  mov al, byte ptr gs:[si]  [x134400]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x)));
    // 1501:3e4a  popf   [x134400]
    c.ip = 0x3e4bu; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L18e5b:
    if (c.tracing) c.traceAt(0x18e5b);
    // 1501:3e4b  rcr al, 1  [x134400]
    c.a.l = (uint8_t)(c.rcr<8>(c.a.l, (int)((0x1u) & 31)));
    // 1501:3e4d  pushf   [x134400]
    c.push16(c.flags());
    // 1501:3e4e  mov byte ptr fs:[si], al  [x134400]
    c.w8(c.fsb + (uint16_t)(c.si.x), c.a.l);
    // 1501:3e51  inc si  [x134400]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:3e52  cmp si, 0x41a0  [x134400]
    c.sub<16>(c.si.x, 0x41a0u, true);
    // 1501:3e56  jb 0x3e47  [x134400]
    if (c.cf) goto L18e57;
L18e68:
    if (c.tracing) c.traceAt(0x18e68);
    // 1501:3e58  mov ax, gs  [x8]
    c.a.x = (uint16_t)(c.gs);
    // 1501:3e5a  add ax, 0x41a  [x8]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x41au, false));
    // 1501:3e5d  mov gs, ax  [x8]
    c.loadGs(c.a.x);
    // 1501:3e5f  mov ax, fs  [x8]
    c.a.x = (uint16_t)(c.fs);
    // 1501:3e61  add ax, 0x41a  [x8]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x41au, true));
    // 1501:3e64  mov fs, ax  [x8]
    c.loadFs(c.a.x);
    // 1501:3e66  loop 0x3e45  [x8]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18e55;
L18e78:
    if (c.tracing) c.traceAt(0x18e78);
    // 1501:3e68  popf   [x1]
    c.ip = 0x3e69u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L18e79:
    if (c.tracing) c.traceAt(0x18e79);
    // 1501:3e69  pop gs  [x1]
    c.loadGs((uint16_t)c.pop16());
    // 1501:3e6b  ret   [x1]
    c.ip = c.pop16(); return;
L18e7c:
    if (c.tracing) c.traceAt(0x18e7c);
    // 1501:3e6c  mov ax, word ptr cs:[0x398a]  [x11990]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x398au)));
    // 1501:3e70  mov word ptr cs:[0x38ea], ax  [x11990]
    c.w16(c.csb + (uint16_t)(0x38eau), c.a.x);
    // 1501:3e74  mov ax, word ptr cs:[0x39b8]  [x11990]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x39b8u)));
    // 1501:3e78  sub ax, word ptr cs:[0x398a]  [x11990]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x398au)), true));
    // 1501:3e7d  mov word ptr cs:[0x38ee], ax  [x11990]
    c.w16(c.csb + (uint16_t)(0x38eeu), c.a.x);
    // 1501:3e81  mov ax, word ptr cs:[0x38ee]  [x11990]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38eeu)));
    // 1501:3e85  mov word ptr cs:[0x38f6], ax  [x11990]
    c.w16(c.csb + (uint16_t)(0x38f6u), c.a.x);
    // 1501:3e89  call 0x3ce5  [x11990]
    c.push16(0x3e8cu); code_15(c, 0x18cf5u); if (c.ip != 0x3e8cu) c.badReturn(0x18e99);
L18e9c:
    if (c.tracing) c.traceAt(0x18e9c);
    // 1501:3e8c  mov cx, 0xffff  [x11990]
    c.c.x = (uint16_t)(0xffffu);
    // 1501:3e8f  mov si, word ptr [0x218d]  [x11990]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x218du)));
    // 1501:3e96  dec si  [x11990]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
L18ea7:
    if (c.tracing) c.traceAt(0x18ea7);
    // 1501:3e97  inc cx  [x85119]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:3e98  inc si  [x85119]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:3e99  cmp byte ptr [si], 0  [x85119]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x0u, true);
    // 1501:3e9c  jne 0x3e97  [x85119]
    if (!c.zf) goto L18ea7;
L18eae:
    if (c.tracing) c.traceAt(0x18eae);
    // 1501:3e9e  mov si, word ptr [0x218d]  [x11990]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x218du)));
    // 1501:3ea5  mov ax, cx  [x11990]
    c.a.x = (uint16_t)(c.c.x);
    // 1501:3ea7  mov di, 0xb  [x11990]
    c.di.x = (uint16_t)(0xbu);
    // 1501:3eaa  sub di, ax  [x11990]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.a.x, true));
    // 1501:3eac  rol di, 1  [x11990]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), true));
L18ebe:
    if (c.tracing) c.traceAt(0x18ebe);
    // 1501:3eae  push cx  [x73129]
    c.push16(c.c.x);
    // 1501:3eaf  push si  [x73129]
    c.push16(c.si.x);
    // 1501:3eb0  push di  [x73129]
    c.push16(c.di.x);
    // 1501:3eb1  mov al, byte ptr [si]  [x73129]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:3eb3  cmp al, 0  [x73129]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3eb5  je 0x3eec  [x73129]
    if (c.zf) { t = 0x18efcu; goto dispatch; }
L18ec7:
    if (c.tracing) c.traceAt(0x18ec7);
    // 1501:3eb7  cmp al, 0xff  [x73129]
    c.sub<8>(c.a.l, 0xffu, true);
    // 1501:3eb9  jne 0x3ebd  [x73129]
    if (!c.zf) goto L18ecd;
L18ecb:
    if (c.tracing) c.traceAt(0x18ecb);
    // 1501:3ebb  mov al, 0x20  [x20]
    c.a.l = (uint8_t)(0x20u);
L18ecd:
    if (c.tracing) c.traceAt(0x18ecd);
    // 1501:3ebd  cmp al, 0x20  [x73129]
    c.sub<8>(c.a.l, 0x20u, true);
    // 1501:3ebf  je 0x3ee2  [x73129]
    if (c.zf) goto L18ef2;
L18ed1:
    if (c.tracing) c.traceAt(0x18ed1);
    // 1501:3ec1  mov bx, word ptr cs:[di + 0x395e]  [x71081]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x395eu)));
    // 1501:3ec6  sub bx, word ptr cs:[di + 0x395a]  [x71081]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.csb + (uint16_t)(c.di.x + 0x395au)), false));
    // 1501:3ecb  mov word ptr cs:[0x38ec], bx  [x71081]
    c.w16(c.csb + (uint16_t)(0x38ecu), c.b.x);
    // 1501:3ed0  mov bx, word ptr cs:[di + 0x395a]  [x71081]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x395au)));
    // 1501:3ed5  mov word ptr cs:[0x38e8], bx  [x71081]
    c.w16(c.csb + (uint16_t)(0x38e8u), c.b.x);
    // 1501:3eda  cmp bx, 0  [x71081]
    c.sub<16>(c.b.x, 0x0u, true);
    // 1501:3edd  js 0x3ee2  [x71081]
    if (c.sf) goto L18ef2;
L18eef:
    if (c.tracing) c.traceAt(0x18eef);
    // 1501:3edf  call 0x3ef0  [x70862]
    c.push16(0x3ee2u); code_15(c, 0x18f00u); if (c.ip != 0x3ee2u) c.badReturn(0x18eef);
L18ef2:
    if (c.tracing) c.traceAt(0x18ef2);
    // 1501:3ee2  pop di  [x73129]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:3ee3  pop si  [x73129]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:3ee4  pop cx  [x73129]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:3ee5  add di, 4  [x73129]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, true));
    // 1501:3ee8  inc si  [x73129]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:3ee9  loop 0x3eae  [x73129]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18ebe;
L18efb:
    if (c.tracing) c.traceAt(0x18efb);
    // 1501:3eeb  ret   [x11990]
    c.ip = c.pop16(); return;
L18f00:
    if (c.tracing) c.traceAt(0x18f00);
    // 1501:3ef0  push ax  [x70862]
    c.push16(c.a.x);
    // 1501:3ef1  mov ax, word ptr cs:[0x38e8]  [x70862]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38e8u)));
    // 1501:3ef5  and ax, 7  [x70862]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:3ef8  mov dx, 0x41a  [x70862]
    c.dx_.x = (uint16_t)(0x41au);
    // 1501:3efb  mul dx  [x70862]
    c.mul16(c.dx_.x);
    // 1501:3efd  add ax, word ptr cs:[0x39c3]  [x70862]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x39c3u)), false));
    // 1501:3f02  mov gs, ax  [x70862]
    c.loadGs(c.a.x);
    // 1501:3f04  mov ax, word ptr cs:[0x38ee]  [x70862]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38eeu)));
    // 1501:3f08  add ax, ax  [x70862]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, false));
    // 1501:3f0a  mov word ptr cs:[0x38f8], ax  [x70862]
    c.w16(c.csb + (uint16_t)(0x38f8u), c.a.x);
    // 1501:3f0e  mov ax, 0x40  [x70862]
    c.a.x = (uint16_t)(0x40u);
    // 1501:3f11  mul word ptr cs:[0x38ea]  [x70862]
    c.mul16(c.r16(c.csb + (uint16_t)(0x38eau)));
    // 1501:3f16  mov di, ax  [x70862]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:3f18  mov bx, word ptr cs:[0x38e8]  [x70862]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38e8u)));
    // 1501:3f1d  shr bx, 3  [x70862]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:3f20  add di, bx  [x70862]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:3f22  mov bp, 0  [x70862]
    c.bp.x = (uint16_t)(0x0u);
    // 1501:3f25  pop bx  [x70862]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:3f26  sub bl, 0x41  [x70862]
    c.b.l = (uint8_t)(c.sub<8>(c.b.l, 0x41u, false));
    // 1501:3f29  xor bh, bh  [x70862]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 1501:3f2b  shl bx, 3  [x70862]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x3u) & 31), true));
L18f3e:
    if (c.tracing) c.traceAt(0x18f3e);
    // 1501:3f2e  mov al, byte ptr [bx + 0x19a8]  [x1163544]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x19a8u)));
    // 1501:3f32  cmp al, 0xff  [x1163544]
    c.sub<8>(c.a.l, 0xffu, true);
    // 1501:3f34  je 0x3f6a  [x1163544]
    if (c.zf) goto L18f7a;
L18f46:
    if (c.tracing) c.traceAt(0x18f46);
    // 1501:3f36  xor ah, ah  [x1161348]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:3f38  mov dx, 0x320  [x1161348]
    c.dx_.x = (uint16_t)(0x320u);
    // 1501:3f3b  mul dx  [x1161348]
    c.mul16(c.dx_.x);
    // 1501:3f3d  mov si, ax  [x1161348]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:3f3f  mov ax, 0xa  [x1161348]
    c.a.x = (uint16_t)(0xau);
    // 1501:3f42  mul word ptr cs:[0x38ec]  [x1161348]
    c.mul16(c.r16(c.csb + (uint16_t)(0x38ecu)));
    // 1501:3f47  sub ax, 0xa  [x1161348]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0xau, false));
    // 1501:3f4a  add si, ax  [x1161348]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:3f4c  cmp di, 0x1900  [x1161348]
    c.sub<16>(c.di.x, 0x1900u, true);
    // 1501:3f50  jae 0x3f6a  [x1161348]
    if (!c.cf) goto L18f7a;
L18f62:
    if (c.tracing) c.traceAt(0x18f62);
    // 1501:3f52  push di  [x1108525]
    c.push16(c.di.x);
    // 1501:3f53  mov cx, word ptr cs:[0x38ec]  [x1108525]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x38ecu)));
    // 1501:3f58  shr cx, 3  [x1108525]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:3f5b  add cx, 2  [x1108525]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x2u, true));
L18f6e:
    if (c.tracing) c.traceAt(0x18f6e);
    // 1501:3f5e  mov al, byte ptr gs:[si]  [x6750161]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x)));
    // 1501:3f61  inc si  [x6750161]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:3f62  or byte ptr [di], al  [x6750161]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
    // 1501:3f66  inc di  [x6750161]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:3f67  loop 0x3f5e  [x6750161]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18f6e;
L18f79:
    if (c.tracing) c.traceAt(0x18f79);
    // 1501:3f69  pop di  [x1108525]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
L18f7a:
    if (c.tracing) c.traceAt(0x18f7a);
    // 1501:3f6a  add di, 0x40  [x1163544]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x40u, false));
    // 1501:3f6d  add bx, word ptr cs:[bp + 0x3848]  [x1163544]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(c.bp.x + 0x3848u)), false));
    // 1501:3f72  add bp, 2  [x1163544]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:3f75  cmp bp, word ptr cs:[0x38f8]  [x1163544]
    c.sub<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x38f8u)), true);
    // 1501:3f7a  jb 0x3f2e  [x1163544]
    if (c.cf) goto L18f3e;
L18f8c:
    if (c.tracing) c.traceAt(0x18f8c);
    // 1501:3f7c  ret   [x70862]
    c.ip = c.pop16(); return;
L18f8d:
    if (c.tracing) c.traceAt(0x18f8d);
    // 1501:3f7d  xor bp, bp  [x11990]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:3f7f  xor di, di  [x11990]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L18f91:
    if (c.tracing) c.traceAt(0x18f91);
    // 1501:3f81  mov bx, word ptr cs:[bp + 0x38fa]  [x287760]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x38fau)));
    // 1501:3f86  mov cx, word ptr cs:[bp + 0x38fc]  [x287760]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x38fcu)));
    // 1501:3f8b  mov ax, 0x12c  [x287760]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:3f8e  imul bx  [x287760]
    c.imul16(c.b.x);
    // 1501:3f90  idiv word ptr cs:[0x39ba]  [x287760]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x39bau)))) { c.d32 = false; c.intr(0, 0x3f90u); }   // #DE: int 0, then again
    // 1501:3f95  add ax, 0x100  [x287760]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x100u, false));
    // 1501:3f98  mov word ptr cs:[di + 0x395a], ax  [x287760]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x395au), c.a.x);
    // 1501:3f9d  mov ax, 0x12c  [x287760]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:3fa0  imul cx  [x287760]
    c.imul16(c.c.x);
    // 1501:3fa2  idiv word ptr cs:[0x39ba]  [x287760]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x39bau)))) { c.d32 = false; c.intr(0, 0x3fa2u); }   // #DE: int 0, then again
    // 1501:3fa7  add ax, 0x32  [x287760]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x32u, false));
    // 1501:3faa  add ax, word ptr [0x22d5]  [x287760]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x22d5u)), false));
    // 1501:3fb1  mov word ptr cs:[di + 0x398a], ax  [x287760]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x398au), c.a.x);
    // 1501:3fb6  add bp, 4  [x287760]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:3fb9  add di, 2  [x287760]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:3fbc  cmp di, 0x30  [x287760]
    c.sub<16>(c.di.x, 0x30u, true);
    // 1501:3fbf  jne 0x3f81  [x287760]
    if (!c.zf) goto L18f91;
L18fd1:
    if (c.tracing) c.traceAt(0x18fd1);
    // 1501:3fc1  ret   [x11990]
    c.ip = c.pop16(); return;
L18fd2:
    if (c.tracing) c.traceAt(0x18fd2);
    // 1501:3fc2  mov al, byte ptr [si]  [x85329]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:3fc4  inc si  [x85329]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:3fc5  cmp al, 0xff  [x85329]
    c.sub<8>(c.a.l, 0xffu, true);
    // 1501:3fc7  je 0x3fcf  [x85329]
    if (c.zf) goto L18fdf;
L18fd9:
    if (c.tracing) c.traceAt(0x18fd9);
    // 1501:3fc9  cmp al, 0  [x85309]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:3fcb  jne 0x3fc2  [x85309]
    if (!c.zf) goto L18fd2;
L18fdd:
    if (c.tracing) c.traceAt(0x18fdd);
    // 1501:3fcd  clc   [x12006]
    c.cf = false;
    // 1501:3fce  ret   [x12006]
    c.ip = c.pop16(); return;
L18fdf:
    if (c.tracing) c.traceAt(0x18fdf);
    // 1501:3fcf  stc   [x20]
    c.cf = true;
    // 1501:3fd0  ret   [x20]
    c.ip = c.pop16(); return;
L18fe1:
    if (c.tracing) c.traceAt(0x18fe1);
    // 1501:3fd1  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_15(15, {0x15010, 0x189d9, 0x189f2, 0x189f4, 0x18a04, 0x18a06, 0x18a0b, 0x18a15, 0x18a18, 0x18a26, 0x18a2c, 0x18a35, 0x18a47, 0x18a4a, 0x18a66, 0x18a69, 0x18a7b, 0x18a7d, 0x18a8e, 0x18a90, 0x18aa4, 0x18aa6, 0x18abb, 0x18acc, 0x18ace, 0x18ae5, 0x18aed, 0x18afe, 0x18b08, 0x18b0a, 0x18b0d, 0x18b21, 0x18b3a, 0x18b49, 0x18b62, 0x18b7e, 0x18b82, 0x18b85, 0x18b8f, 0x18b91, 0x18b9c, 0x18bb7, 0x18bc0, 0x18bdd, 0x18be4, 0x18c02, 0x18c04, 0x18c07, 0x18c41, 0x18c4a, 0x18c5b, 0x18c61, 0x18c6a, 0x18c7b, 0x18c96, 0x18c9f, 0x18cbc, 0x18cc6, 0x18ccb, 0x18ce1, 0x18ce4, 0x18ce7, 0x18cea, 0x18ceb, 0x18cef, 0x18cf0, 0x18cf4, 0x18cf5, 0x18d1d, 0x18d35, 0x18d3b, 0x18d45, 0x18d46, 0x18d4a, 0x18d56, 0x18d5f, 0x18d90, 0x18dae, 0x18db4, 0x18db7, 0x18dc7, 0x18dca, 0x18dcb, 0x18dd4, 0x18ddd, 0x18de1, 0x18dea, 0x18dee, 0x18df7, 0x18dfb, 0x18e04, 0x18e08, 0x18e11, 0x18e15, 0x18e1e, 0x18e22, 0x18e2b, 0x18e2f, 0x18e38, 0x18e3c, 0x18e46, 0x18e47, 0x18e55, 0x18e57, 0x18e5b, 0x18e68, 0x18e78, 0x18e79, 0x18e7c, 0x18e9c, 0x18ea7, 0x18eae, 0x18ebe, 0x18ec7, 0x18ecb, 0x18ecd, 0x18ed1, 0x18eef, 0x18ef2, 0x18efb, 0x18f00, 0x18f3e, 0x18f46, 0x18f62, 0x18f6e, 0x18f79, 0x18f7a, 0x18f8c, 0x18f8d, 0x18f91, 0x18fd1, 0x18fd2, 0x18fd9, 0x18fdd, 0x18fdf, 0x18fe1}, code_15);

}  // namespace show
