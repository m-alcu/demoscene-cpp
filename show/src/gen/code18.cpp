// Part 17 (ZZZ.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_18(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15d3b: goto L15d3b;
    case 0x15d5c: goto L15d5c;
    case 0x15d5f: goto L15d5f;
    case 0x15d74: goto L15d74;
    case 0x15d77: goto L15d77;
    case 0x15d7a: goto L15d7a;
    case 0x15d7c: goto L15d7c;
    case 0x15d7e: goto L15d7e;
    case 0x15d81: goto L15d81;
    case 0x15d8e: goto L15d8e;
    case 0x15d97: goto L15d97;
    case 0x15d99: goto L15d99;
    case 0x15d9d: goto L15d9d;
    case 0x15da5: goto L15da5;
    case 0x15db0: goto L15db0;
    case 0x15dc4: goto L15dc4;
    case 0x15dd1: goto L15dd1;
    case 0x15dd7: goto L15dd7;
    case 0x15de9: goto L15de9;
    case 0x15e19: goto L15e19;
    case 0x15e22: goto L15e22;
    case 0x15e24: goto L15e24;
    case 0x15e28: goto L15e28;
    case 0x15e32: goto L15e32;
    case 0x15e35: goto L15e35;
    case 0x15e38: goto L15e38;
    case 0x15ea8: goto L15ea8;
    case 0x15eaf: goto L15eaf;
    case 0x15ebe: goto L15ebe;
    case 0x15ec5: goto L15ec5;
    case 0x15ecd: goto L15ecd;
    case 0x15edc: goto L15edc;
    case 0x15ee3: goto L15ee3;
    case 0x15ef2: goto L15ef2;
    case 0x15ef9: goto L15ef9;
    case 0x15f06: goto L15f06;
    case 0x15f0c: goto L15f0c;
    case 0x15f14: goto L15f14;
    case 0x15f1c: goto L15f1c;
    case 0x15f21: goto L15f21;
    case 0x15f29: goto L15f29;
    case 0x15f31: goto L15f31;
    case 0x15f36: goto L15f36;
    case 0x15f3f: goto L15f3f;
    case 0x15f48: goto L15f48;
    case 0x15f5e: goto L15f5e;
    case 0x15f67: goto L15f67;
    case 0x15f70: goto L15f70;
    case 0x15f7f: goto L15f7f;
    case 0x15f88: goto L15f88;
    case 0x15f8f: goto L15f8f;
    case 0x15f92: goto L15f92;
    case 0x15f94: goto L15f94;
    case 0x15f99: goto L15f99;
    case 0x15f9c: goto L15f9c;
    case 0x15fa0: goto L15fa0;
    case 0x15fd7: goto L15fd7;
    case 0x15fdd: goto L15fdd;
    case 0x15fe8: goto L15fe8;
    case 0x15fee: goto L15fee;
    case 0x15ff8: goto L15ff8;
    case 0x16002: goto L16002;
    case 0x16004: goto L16004;
    case 0x16005: goto L16005;
    case 0x161b9: goto L161b9;
    case 0x16372: goto L16372;
    case 0x163be: goto L163be;
    case 0x16560: goto L16560;
    case 0x16705: goto L16705;
    case 0x16779: goto L16779;
    case 0x1691b: goto L1691b;
    case 0x16ac0: goto L16ac0;
    case 0x16b34: goto L16b34;
    case 0x16cd6: goto L16cd6;
    case 0x16e7b: goto L16e7b;
    case 0x16ef1: goto L16ef1;
    case 0x16f2a: goto L16f2a;
    case 0x16f2f: goto L16f2f;
    case 0x16fa7: goto L16fa7;
    case 0x16fac: goto L16fac;
    case 0x1702b: goto L1702b;
    case 0x1702c: goto L1702c;
    case 0x17033: goto L17033;
    case 0x1704b: goto L1704b;
    case 0x1704c: goto L1704c;
    case 0x17055: goto L17055;
    case 0x1708b: goto L1708b;
    case 0x170a1: goto L170a1;
    case 0x170ba: goto L170ba;
    case 0x170c5: goto L170c5;
    case 0x170cd: goto L170cd;
    case 0x170df: goto L170df;
    case 0x170e4: goto L170e4;
    case 0x170f5: goto L170f5;
    case 0x170f6: goto L170f6;
    case 0x170f9: goto L170f9;
    case 0x170fa: goto L170fa;
    case 0x170fe: goto L170fe;
    case 0x170ff: goto L170ff;
    case 0x17103: goto L17103;
    case 0x17104: goto L17104;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xd2b  [x1]
    goto L15d3b;
L15d3b:
    if (c.tracing) c.traceAt(0x15d3b);
    // 1501:0d2b  mov word ptr cs:[0xd25], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xd25u), c.c.x);
    // 1501:0d30  mov word ptr cs:[0xd27], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xd27u), c.dx_.x);
    // 1501:0d35  sub dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 1501:0d38  mov word ptr cs:[0xd29], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xd29u), c.dx_.x);
    // 1501:0d3d  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:0d3f  add ax, 0xfd0  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xfd0u, true));
    // 1501:0d42  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 1501:0d44  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0d47  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0d49  call 0x201c  [x1]
    c.push16(0xd4cu); code_18(c, 0x1702cu); if (c.ip != 0xd4cu) c.badReturn(0x15d59);
L15d5c:
    if (c.tracing) c.traceAt(0x15d5c);
    // 1501:0d4c  call 0x203c  [x1]
    c.push16(0xd4fu); code_18(c, 0x1704cu); if (c.ip != 0xd4fu) c.badReturn(0x15d5c);
L15d5f:
    if (c.tracing) c.traceAt(0x15d5f);
    // 1501:0d4f  push es  [x1946]
    c.ip = 0xd4fu; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:0d50  mov ax, word ptr cs:[0xd25]  [x1946]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd25u)));
    // 1501:0d54  mov es, ax  [x1946]
    c.loadEs(c.a.x);
    // 1501:0d56  mov si, word ptr cs:[0xd27]  [x1946]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd27u)));
    // 1501:0d5b  mov dx, word ptr es:[si]  [x1946]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0d5e  pop es  [x1946]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0d5f  cmp dx, 0  [x1946]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0d62  je 0xd4f  [x1946]
    if (c.zf) goto L15d5f;
L15d74:
    if (c.tracing) c.traceAt(0x15d74);
    // 1501:0d64  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L15d77:
    if (c.tracing) c.traceAt(0x15d77);
    // 1501:0d67  call 0x20e6  [x48]
    c.push16(0xd6au); code_18(c, 0x170f6u); if (c.ip != 0xd6au) c.badReturn(0x15d77);
L15d7a:
    if (c.tracing) c.traceAt(0x15d7a);
    // 1501:0d6a  loop 0xd67  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15d77;
L15d7c:
    if (c.tracing) c.traceAt(0x15d7c);
    // 1501:0d6c  mov bl, 0  [x1]
    c.b.l = (uint8_t)(0x0u);
L15d7e:
    if (c.tracing) c.traceAt(0x15d7e);
    // 1501:0d6e  call 0x20e6  [x16]
    c.push16(0xd71u); code_18(c, 0x170f6u); if (c.ip != 0xd71u) c.badReturn(0x15d7e);
L15d81:
    if (c.tracing) c.traceAt(0x15d81);
    // 1501:0d71  mov dx, 0x3c8  [x16]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0d74  xor al, al  [x16]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0d76  out dx, al  [x16]
    c.ip = 0xd77u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0d77  inc dx  [x16]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0d78  mov si, 0xc  [x16]
    c.si.x = (uint16_t)(0xcu);
    // 1501:0d7b  mov cx, 0x300  [x16]
    c.c.x = (uint16_t)(0x300u);
L15d8e:
    if (c.tracing) c.traceAt(0x15d8e);
    // 1501:0d7e  mov al, byte ptr cs:[si]  [x12288]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:0d81  add al, bl  [x12288]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:0d83  cmp al, 0x3f  [x12288]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0d85  jb 0xd89  [x12288]
    if (c.cf) goto L15d99;
L15d97:
    if (c.tracing) c.traceAt(0x15d97);
    // 1501:0d87  mov al, 0x3f  [x4812]
    c.a.l = (uint8_t)(0x3fu);
L15d99:
    if (c.tracing) c.traceAt(0x15d99);
    // 1501:0d89  out dx, al  [x12288]
    c.ip = 0xd8au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0d8a  inc si  [x12288]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0d8b  loop 0xd7e  [x12288]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15d8e;
L15d9d:
    if (c.tracing) c.traceAt(0x15d9d);
    // 1501:0d8d  add bl, 4  [x16]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, 0x4u, false));
    // 1501:0d90  cmp bl, 0x40  [x16]
    c.sub<8>(c.b.l, 0x40u, true);
    // 1501:0d93  jb 0xd6e  [x16]
    if (c.cf) goto L15d7e;
L15da5:
    if (c.tracing) c.traceAt(0x15da5);
    // 1501:0d95  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0d98  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 1501:0d9a  mov ah, 4  [x1]
    c.a.h = (uint8_t)(0x4u);
    // 1501:0d9c  out dx, ax  [x1]
    c.ip = 0xd9du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0d9d  call 0x20e6  [x1]
    c.push16(0xda0u); code_18(c, 0x170f6u); if (c.ip != 0xda0u) c.badReturn(0x15dad);
L15db0:
    if (c.tracing) c.traceAt(0x15db0);
    // 1501:0da0  push es  [x1]
    c.push16(c.es);
    // 1501:0da1  mov ax, word ptr cs:[0xd25]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd25u)));
    // 1501:0da5  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0da7  mov si, word ptr cs:[0xd29]  [x1]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd29u)));
    // 1501:0dac  mov ax, word ptr es:[si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0daf  mov word ptr cs:[8], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x8u), c.a.x);
    // 1501:0db3  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L15dc4:
    if (c.tracing) c.traceAt(0x15dc4);
    // 1501:0db4  mov ax, es  [x1026]
    c.a.x = (uint16_t)(c.es);
    // 1501:0db6  mov bx, 0xa800  [x1026]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:0db9  mov cx, 0  [x1026]
    c.c.x = (uint16_t)(0x0u);
    // 1501:0dbc  cmp ax, 0xa000  [x1026]
    c.sub<16>(c.a.x, 0xa000u, true);
    // 1501:0dbf  je 0xdc7  [x1026]
    if (c.zf) goto L15dd7;
L15dd1:
    if (c.tracing) c.traceAt(0x15dd1);
    // 1501:0dc1  mov bx, 0xa000  [x513]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:0dc4  mov cx, 0x8000  [x513]
    c.c.x = (uint16_t)(0x8000u);
L15dd7:
    if (c.tracing) c.traceAt(0x15dd7);
    // 1501:0dc7  mov es, bx  [x1026]
    c.loadEs(c.b.x);
    // 1501:0dc9  mov dx, 0x3d4  [x1026]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0dcc  mov al, 0xc  [x1026]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0dce  mov ah, ch  [x1026]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:0dd0  out dx, ax  [x1026]
    c.ip = 0xdd1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0dd1  mov al, 0xd  [x1026]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0dd3  mov ah, cl  [x1026]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:0dd5  out dx, ax  [x1026]
    c.ip = 0xdd6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0dd6  call 0x20e6  [x1026]
    c.push16(0xdd9u); code_18(c, 0x170f6u); if (c.ip != 0xdd9u) c.badReturn(0x15de6);
L15de9:
    if (c.tracing) c.traceAt(0x15de9);
    // 1501:0dd9  mov ax, word ptr cs:[8]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:0ddd  mov word ptr cs:[0xa], ax  [x1026]
    c.w16(c.csb + (uint16_t)(0xau), c.a.x);
    // 1501:0de1  push es  [x1026]
    c.push16(c.es);
    // 1501:0de2  mov bx, word ptr cs:[0xd25]  [x1026]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd25u)));
    // 1501:0de7  mov es, bx  [x1026]
    c.loadEs(c.b.x);
    // 1501:0de9  mov si, word ptr cs:[0xd29]  [x1026]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xd29u)));
    // 1501:0dee  mov dx, word ptr es:[si]  [x1026]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0df1  mov word ptr cs:[8], dx  [x1026]
    c.w16(c.csb + (uint16_t)(0x8u), c.dx_.x);
    // 1501:0df6  pop es  [x1026]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0df7  mov dx, 0x3c8  [x1026]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0dfa  xor al, al  [x1026]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0dfc  out dx, al  [x1026]
    c.ip = 0xdfdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0dfd  inc dx  [x1026]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0dfe  mov si, 0xc  [x1026]
    c.si.x = (uint16_t)(0xcu);
    // 1501:0e01  mov bl, byte ptr cs:[0x5e6]  [x1026]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x5e6u)));
    // 1501:0e06  mov cx, 0x300  [x1026]
    c.c.x = (uint16_t)(0x300u);
L15e19:
    if (c.tracing) c.traceAt(0x15e19);
    // 1501:0e09  mov al, byte ptr cs:[si]  [x787968]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:0e0c  add al, bl  [x787968]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:0e0e  cmp al, 0x3f  [x787968]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0e10  jb 0xe14  [x787968]
    if (c.cf) goto L15e24;
L15e22:
    if (c.tracing) c.traceAt(0x15e22);
    // 1501:0e12  mov al, 0x3f  [x23671]
    c.a.l = (uint8_t)(0x3fu);
L15e24:
    if (c.tracing) c.traceAt(0x15e24);
    // 1501:0e14  out dx, al  [x787968]
    c.ip = 0xe15u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0e15  inc si  [x787968]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0e16  loop 0xe09  [x787968]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15e19;
L15e28:
    if (c.tracing) c.traceAt(0x15e28);
    // 1501:0e18  mov dx, 0x3c4  [x1026]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0e1b  mov ax, 0xf02  [x1026]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0e1e  out dx, ax  [x1026]
    c.ip = 0xe1fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0e1f  call 0x1ee1  [x1026]
    c.push16(0xe22u); code_18(c, 0x16ef1u); if (c.ip != 0xe22u) c.badReturn(0x15e2f);
L15e32:
    if (c.tracing) c.traceAt(0x15e32);
    // 1501:0e22  call 0x1f1a  [x1026]
    c.push16(0xe25u); code_18(c, 0x16f2au); if (c.ip != 0xe25u) c.badReturn(0x15e32);
L15e35:
    if (c.tracing) c.traceAt(0x15e35);
    // 1501:0e25  call 0xf8c  [x1026]
    c.push16(0xe28u); code_18(c, 0x15f9cu); if (c.ip != 0xe28u) c.badReturn(0x15e35);
L15e38:
    if (c.tracing) c.traceAt(0x15e38);
    // 1501:0e28  mov bp, 0x7fff  [x1026]
    c.bp.x = (uint16_t)(0x7fffu);
    // 1501:0e2b  mov bx, word ptr cs:[0x5e2]  [x1026]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5e2u)));
    // 1501:0e30  mov si, word ptr cs:[0x5de]  [x1026]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5deu)));
    // 1501:0e35  mov di, word ptr cs:[0x5e0]  [x1026]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5e0u)));
    // 1501:0e3a  mov ax, word ptr cs:[si + 0x61b]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:0e3f  imul bx  [x1026]
    c.imul16(c.b.x);
    // 1501:0e41  idiv bp  [x1026]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xe41u); }   // #DE: int 0, then again
    // 1501:0e43  mov cx, ax  [x1026]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0e45  mov ax, word ptr cs:[di + 0x61b]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x61bu)));
    // 1501:0e4a  imul bx  [x1026]
    c.imul16(c.b.x);
    // 1501:0e4c  idiv bp  [x1026]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xe4cu); }   // #DE: int 0, then again
    // 1501:0e4e  add ax, cx  [x1026]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, false));
    // 1501:0e50  add ax, 0x7d  [x1026]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x7du, false));
    // 1501:0e53  mov word ptr cs:[0x605], ax  [x1026]
    c.w16(c.csb + (uint16_t)(0x605u), c.a.x);
    // 1501:0e57  mov ax, word ptr cs:[si + 0x783]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:0e5c  imul bx  [x1026]
    c.imul16(c.b.x);
    // 1501:0e5e  idiv bp  [x1026]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xe5eu); }   // #DE: int 0, then again
    // 1501:0e60  mov cx, ax  [x1026]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0e62  mov ax, word ptr cs:[di + 0x783]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x783u)));
    // 1501:0e67  imul bx  [x1026]
    c.imul16(c.b.x);
    // 1501:0e69  idiv bp  [x1026]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xe69u); }   // #DE: int 0, then again
    // 1501:0e6b  mov ax, cx  [x1026]
    c.a.x = (uint16_t)(c.c.x);
    // 1501:0e6d  add ax, 0x6a  [x1026]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x6au, false));
    // 1501:0e70  mov word ptr cs:[0x607], ax  [x1026]
    c.w16(c.csb + (uint16_t)(0x607u), c.a.x);
    // 1501:0e74  mov ax, word ptr cs:[8]  [x1026]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:0e78  sub ax, word ptr cs:[0xa]  [x1026]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xau)), false));
    // 1501:0e7d  xor dx, dx  [x1026]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:0e7f  mov cx, 0x10  [x1026]
    c.c.x = (uint16_t)(0x10u);
    // 1501:0e82  div cx  [x1026]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0xe82u); }   // #DE: int 0, then again
    // 1501:0e84  mov cx, ax  [x1026]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0e86  mov cx, 1  [x1026]
    c.c.x = (uint16_t)(0x1u);
    // 1501:0e89  add word ptr cs:[0x5de], 6  [x1026]
    c.w16(c.csb + (uint16_t)(0x5deu), c.add<16>(c.r16(c.csb + (uint16_t)(0x5deu)), 0x6u, false));
    // 1501:0e8f  cmp word ptr cs:[0x5de], 0x5a0  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5deu)), 0x5a0u, true);
    // 1501:0e96  jb 0xe9f  [x1026]
    if (c.cf) goto L15eaf;
L15ea8:
    if (c.tracing) c.traceAt(0x15ea8);
    // 1501:0e98  sub word ptr cs:[0x5de], 0x5a0  [x4]
    c.w16(c.csb + (uint16_t)(0x5deu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5deu)), 0x5a0u, true));
L15eaf:
    if (c.tracing) c.traceAt(0x15eaf);
    // 1501:0e9f  add word ptr cs:[0x5e0], 2  [x1026]
    c.w16(c.csb + (uint16_t)(0x5e0u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5e0u)), 0x2u, false));
    // 1501:0ea5  cmp word ptr cs:[0x5e0], 0x5a0  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e0u)), 0x5a0u, true);
    // 1501:0eac  jb 0xeb5  [x1026]
    if (c.cf) goto L15ec5;
L15ebe:
    if (c.tracing) c.traceAt(0x15ebe);
    // 1501:0eae  sub word ptr cs:[0x5e0], 0x5a0  [x1]
    c.w16(c.csb + (uint16_t)(0x5e0u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e0u)), 0x5a0u, true));
L15ec5:
    if (c.tracing) c.traceAt(0x15ec5);
    // 1501:0eb5  cmp word ptr cs:[0x5e4], 0x10  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x10u, true);
    // 1501:0ebb  jb 0xee9  [x1026]
    if (c.cf) goto L15ef9;
L15ecd:
    if (c.tracing) c.traceAt(0x15ecd);
    // 1501:0ebd  add word ptr cs:[0x5e7], 6  [x1010]
    c.w16(c.csb + (uint16_t)(0x5e7u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5e7u)), 0x6u, false));
    // 1501:0ec3  cmp word ptr cs:[0x5e7], 0x5a0  [x1010]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e7u)), 0x5a0u, true);
    // 1501:0eca  jb 0xed3  [x1010]
    if (c.cf) goto L15ee3;
L15edc:
    if (c.tracing) c.traceAt(0x15edc);
    // 1501:0ecc  sub word ptr cs:[0x5e7], 0x5a0  [x4]
    c.w16(c.csb + (uint16_t)(0x5e7u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e7u)), 0x5a0u, true));
L15ee3:
    if (c.tracing) c.traceAt(0x15ee3);
    // 1501:0ed3  add word ptr cs:[0x5e9], 6  [x1010]
    c.w16(c.csb + (uint16_t)(0x5e9u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x6u, false));
    // 1501:0ed9  cmp word ptr cs:[0x5e9], 0x5a0  [x1010]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x5a0u, true);
    // 1501:0ee0  jb 0xee9  [x1010]
    if (c.cf) goto L15ef9;
L15ef2:
    if (c.tracing) c.traceAt(0x15ef2);
    // 1501:0ee2  sub word ptr cs:[0x5e9], 0x5a0  [x3]
    c.w16(c.csb + (uint16_t)(0x5e9u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x5a0u, true));
L15ef9:
    if (c.tracing) c.traceAt(0x15ef9);
    // 1501:0ee9  inc word ptr cs:[0x5e4]  [x1026]
    c.w16(c.csb + (uint16_t)(0x5e4u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), false));
    // 1501:0eee  cmp word ptr cs:[0x5e4], 0x20  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x20u, true);
    // 1501:0ef4  jae 0xefc  [x1026]
    if (!c.cf) goto L15f0c;
L15f06:
    if (c.tracing) c.traceAt(0x15f06);
    // 1501:0ef6  sub byte ptr cs:[0x5e6], 2  [x31]
    c.w8(c.csb + (uint16_t)(0x5e6u), c.sub<8>(c.r8(c.csb + (uint16_t)(0x5e6u)), 0x2u, true));
L15f0c:
    if (c.tracing) c.traceAt(0x15f0c);
    // 1501:0efc  cmp word ptr cs:[0x5e4], 0x10  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x10u, true);
    // 1501:0f02  jb 0xf11  [x1026]
    if (c.cf) goto L15f21;
L15f14:
    if (c.tracing) c.traceAt(0x15f14);
    // 1501:0f04  cmp word ptr cs:[0x5e4], 0x56  [x1011]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x56u, true);
    // 1501:0f0a  jae 0xf11  [x1011]
    if (!c.cf) goto L15f21;
L15f1c:
    if (c.tracing) c.traceAt(0x15f1c);
    // 1501:0f0c  dec word ptr cs:[0x60d]  [x70]
    c.w16(c.csb + (uint16_t)(0x60du), c.dec<16>(c.r16(c.csb + (uint16_t)(0x60du)), true));
L15f21:
    if (c.tracing) c.traceAt(0x15f21);
    // 1501:0f11  cmp word ptr cs:[0x5e4], 0x10  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x10u, true);
    // 1501:0f17  jb 0xf26  [x1026]
    if (c.cf) goto L15f36;
L15f29:
    if (c.tracing) c.traceAt(0x15f29);
    // 1501:0f19  cmp word ptr cs:[0x5e4], 0x4c  [x1011]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x4cu, true);
    // 1501:0f1f  jae 0xf26  [x1011]
    if (!c.cf) goto L15f36;
L15f31:
    if (c.tracing) c.traceAt(0x15f31);
    // 1501:0f21  inc word ptr cs:[0x5e2]  [x60]
    c.w16(c.csb + (uint16_t)(0x5e2u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x5e2u)), true));
L15f36:
    if (c.tracing) c.traceAt(0x15f36);
    // 1501:0f26  cmp word ptr cs:[0x5e4], 0x80  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x80u, true);
    // 1501:0f2d  jb 0xf4e  [x1026]
    if (c.cf) goto L15f5e;
L15f3f:
    if (c.tracing) c.traceAt(0x15f3f);
    // 1501:0f2f  cmp word ptr cs:[0x5e4], 0xe0  [x899]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0xe0u, true);
    // 1501:0f36  jae 0xf4e  [x899]
    if (!c.cf) goto L15f5e;
L15f48:
    if (c.tracing) c.traceAt(0x15f48);
    // 1501:0f38  add word ptr cs:[0x5e9], 4  [x96]
    c.w16(c.csb + (uint16_t)(0x5e9u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x4u, false));
    // 1501:0f3e  cmp word ptr cs:[0x5e9], 0x5a0  [x96]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x5a0u, true);
    // 1501:0f45  jb 0xf4e  [x96]
    if (c.cf) goto L15f5e;
    c.notTranslated(0x15f57, "fall-through");
L15f5e:
    if (c.tracing) c.traceAt(0x15f5e);
    // 1501:0f4e  cmp word ptr cs:[0x5e4], 0x200  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x200u, true);
    // 1501:0f55  jb 0xf6f  [x1026]
    if (c.cf) goto L15f7f;
L15f67:
    if (c.tracing) c.traceAt(0x15f67);
    // 1501:0f57  cmp word ptr cs:[0x5e4], 0x320  [x515]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x320u, true);
    // 1501:0f5e  jae 0xf6f  [x515]
    if (!c.cf) goto L15f7f;
L15f70:
    if (c.tracing) c.traceAt(0x15f70);
    // 1501:0f60  sub word ptr cs:[0x5e9], 4  [x288]
    c.w16(c.csb + (uint16_t)(0x5e9u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e9u)), 0x4u, true));
    // 1501:0f66  jns 0xf6f  [x288]
    if (!c.sf) goto L15f7f;
    c.notTranslated(0x15f78, "fall-through");
L15f7f:
    if (c.tracing) c.traceAt(0x15f7f);
    // 1501:0f6f  cmp word ptr cs:[0x5e4], 0x3e0  [x1026]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5e4u)), 0x3e0u, true);
    // 1501:0f76  jb 0xf82  [x1026]
    if (c.cf) goto L15f92;
L15f88:
    if (c.tracing) c.traceAt(0x15f88);
    // 1501:0f78  dec word ptr cs:[0x60d]  [x35]
    c.w16(c.csb + (uint16_t)(0x60du), c.dec<16>(c.r16(c.csb + (uint16_t)(0x60du)), true));
    // 1501:0f7d  jns 0xf82  [x35]
    if (!c.sf) goto L15f92;
L15f8f:
    if (c.tracing) c.traceAt(0x15f8f);
    // 1501:0f7f  jmp 0x20f4  [x1]
    goto L17104;
L15f92:
    if (c.tracing) c.traceAt(0x15f92);
    // 1501:0f82  loop 0xf86  [x1025]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) { t = 0x15f96u; goto dispatch; }
L15f94:
    if (c.tracing) c.traceAt(0x15f94);
    // 1501:0f84  jmp 0xf89  [x1025]
    goto L15f99;
L15f99:
    if (c.tracing) c.traceAt(0x15f99);
    // 1501:0f89  jmp 0xdb4  [x1025]
    goto L15dc4;
L15f9c:
    if (c.tracing) c.traceAt(0x15f9c);
    // 1501:0f8c  xor bp, bp  [x1026]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0f8e  xor di, di  [x1026]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15fa0:
    if (c.tracing) c.traceAt(0x15fa0);
    // 1501:0f90  mov ax, word ptr cs:[bp - 0x600]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xfffffa00u)));
    // 1501:0f95  mov word ptr cs:[0x5ed], ax  [x98496]
    c.w16(c.csb + (uint16_t)(0x5edu), c.a.x);
    // 1501:0f99  mov ax, word ptr cs:[bp - 0x5fe]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xfffffa02u)));
    // 1501:0f9e  mov word ptr cs:[0x5ef], ax  [x98496]
    c.w16(c.csb + (uint16_t)(0x5efu), c.a.x);
    // 1501:0fa2  mov ax, word ptr cs:[bp - 0x470]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xfffffb90u)));
    // 1501:0fa7  mov word ptr cs:[0x5f1], ax  [x98496]
    c.w16(c.csb + (uint16_t)(0x5f1u), c.a.x);
    // 1501:0fab  mov ax, word ptr cs:[bp - 0x46e]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0xfffffb92u)));
    // 1501:0fb0  mov word ptr cs:[0x5f3], ax  [x98496]
    c.w16(c.csb + (uint16_t)(0x5f3u), c.a.x);
    // 1501:0fb4  push bp  [x98496]
    c.push16(c.bp.x);
    // 1501:0fb5  mov word ptr cs:[0x611], 0  [x98496]
    c.w16(c.csb + (uint16_t)(0x611u), 0x0u);
    // 1501:0fbc  mov ax, word ptr cs:[0x5f1]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f1u)));
    // 1501:0fc0  sub ax, word ptr cs:[0x5ed]  [x98496]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), true));
    // 1501:0fc5  jns 0xfcd  [x98496]
    if (!c.sf) goto L15fdd;
L15fd7:
    if (c.tracing) c.traceAt(0x15fd7);
    // 1501:0fc7  or word ptr cs:[0x611], 2  [x51728]
    c.w16(c.csb + (uint16_t)(0x611u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x611u))) | (0x2u), true));
L15fdd:
    if (c.tracing) c.traceAt(0x15fdd);
    // 1501:0fcd  mov ax, word ptr cs:[0x5f3]  [x98496]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f3u)));
    // 1501:0fd1  sub ax, word ptr cs:[0x5ef]  [x98496]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5efu)), true));
    // 1501:0fd6  jns 0xfde  [x98496]
    if (!c.sf) goto L15fee;
L15fe8:
    if (c.tracing) c.traceAt(0x15fe8);
    // 1501:0fd8  or word ptr cs:[0x611], 4  [x51787]
    c.w16(c.csb + (uint16_t)(0x611u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x611u))) | (0x4u), true));
L15fee:
    if (c.tracing) c.traceAt(0x15fee);
    // 1501:0fde  mov si, word ptr cs:[0x611]  [x98496]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x611u)));
    // 1501:0fe3  call word ptr cs:[si + 0x613]  [x98496]
    c.push16(0xfe8u); code_18(c, c.csb + (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x613u)))); if (c.ip != 0xfe8u) c.badReturn(0x15ff3);
L15ff8:
    if (c.tracing) c.traceAt(0x15ff8);
    // 1501:0fe8  pop bp  [x98496]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:0fe9  add bp, 4  [x98496]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:0fec  cmp bp, 0x180  [x98496]
    c.sub<16>(c.bp.x, 0x180u, true);
    // 1501:0ff0  jae 0xff4  [x98496]
    if (!c.cf) goto L16004;
L16002:
    if (c.tracing) c.traceAt(0x16002);
    // 1501:0ff2  jmp 0xf90  [x97470]
    goto L15fa0;
L16004:
    if (c.tracing) c.traceAt(0x16004);
    // 1501:0ff4  ret   [x1026]
    c.ip = c.pop16(); return;
L16005:
    if (c.tracing) c.traceAt(0x16005);
    // 1501:0ff5  mov bx, 0xa0  [x23603]
    c.b.x = (uint16_t)(0xa0u);
    // 1501:0ff8  mul bx  [x23603]
    c.mul16(c.b.x);
    // 1501:0ffa  mov bx, ax  [x23603]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:0ffc  mov ax, word ptr cs:[0x5f1]  [x23603]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f1u)));
    // 1501:1000  sub ax, word ptr cs:[0x5ed]  [x23603]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:1005  mov bp, 0xa0  [x23603]
    c.bp.x = (uint16_t)(0xa0u);
    // 1501:1008  mul bp  [x23603]
    c.mul16(c.bp.x);
    // 1501:100a  mov bp, ax  [x23603]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:100c  mov ax, 0x140  [x23603]
    c.a.x = (uint16_t)(0x140u);
    // 1501:100f  imul word ptr cs:[0x5ef]  [x23603]
    c.imul16(c.r16(c.csb + (uint16_t)(0x5efu)));
    // 1501:1014  add ax, word ptr cs:[0x5ed]  [x23603]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:1019  mov si, ax  [x23603]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:101b  mov cx, 0x50  [x23603]
    c.c.x = (uint16_t)(0x50u);
    // 1501:101e  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1020  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1021  add si, word ptr gs:[bp]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:1025  add si, word ptr fs:[bx]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:1028  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:102a  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:102b  add si, word ptr gs:[bp + 2]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:102f  add si, word ptr fs:[bx + 2]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:1033  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1035  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1036  add si, word ptr gs:[bp + 4]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:103a  add si, word ptr fs:[bx + 4]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:103e  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1040  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1041  add si, word ptr gs:[bp + 6]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:1045  add si, word ptr fs:[bx + 6]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:1049  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:104b  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:104c  add si, word ptr gs:[bp + 8]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:1050  add si, word ptr fs:[bx + 8]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:1054  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1056  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1057  add si, word ptr gs:[bp + 0xa]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:105b  add si, word ptr fs:[bx + 0xa]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:105f  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1061  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1062  add si, word ptr gs:[bp + 0xc]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:1066  add si, word ptr fs:[bx + 0xc]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:106a  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:106c  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:106d  add si, word ptr gs:[bp + 0xe]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:1071  add si, word ptr fs:[bx + 0xe]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:1075  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1077  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1078  add si, word ptr gs:[bp + 0x10]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:107c  add si, word ptr fs:[bx + 0x10]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:1080  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1082  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1083  add si, word ptr gs:[bp + 0x12]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:1087  add si, word ptr fs:[bx + 0x12]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:108b  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:108d  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:108e  add si, word ptr gs:[bp + 0x14]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:1092  add si, word ptr fs:[bx + 0x14]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:1096  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1098  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1099  add si, word ptr gs:[bp + 0x16]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:109d  add si, word ptr fs:[bx + 0x16]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:10a1  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10a3  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10a4  add si, word ptr gs:[bp + 0x18]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:10a8  add si, word ptr fs:[bx + 0x18]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:10ac  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10ae  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10af  add si, word ptr gs:[bp + 0x1a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:10b3  add si, word ptr fs:[bx + 0x1a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:10b7  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10b9  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10ba  add si, word ptr gs:[bp + 0x1c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:10be  add si, word ptr fs:[bx + 0x1c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:10c2  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10c4  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10c5  add si, word ptr gs:[bp + 0x1e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:10c9  add si, word ptr fs:[bx + 0x1e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:10cd  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10cf  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10d0  add si, word ptr gs:[bp + 0x20]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:10d4  add si, word ptr fs:[bx + 0x20]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:10d8  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10da  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10db  add si, word ptr gs:[bp + 0x22]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:10df  add si, word ptr fs:[bx + 0x22]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:10e3  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10e5  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10e6  add si, word ptr gs:[bp + 0x24]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:10ea  add si, word ptr fs:[bx + 0x24]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:10ee  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10f0  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10f1  add si, word ptr gs:[bp + 0x26]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:10f5  add si, word ptr fs:[bx + 0x26]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:10f9  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:10fb  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:10fc  add si, word ptr gs:[bp + 0x28]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:1100  add si, word ptr fs:[bx + 0x28]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:1104  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1106  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1107  add si, word ptr gs:[bp + 0x2a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:110b  add si, word ptr fs:[bx + 0x2a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:110f  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1111  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1112  add si, word ptr gs:[bp + 0x2c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:1116  add si, word ptr fs:[bx + 0x2c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:111a  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:111c  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:111d  add si, word ptr gs:[bp + 0x2e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:1121  add si, word ptr fs:[bx + 0x2e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:1125  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1127  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1128  add si, word ptr gs:[bp + 0x30]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:112c  add si, word ptr fs:[bx + 0x30]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:1130  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1132  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1133  add si, word ptr gs:[bp + 0x32]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:1137  add si, word ptr fs:[bx + 0x32]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:113b  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:113d  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:113e  add si, word ptr gs:[bp + 0x34]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:1142  add si, word ptr fs:[bx + 0x34]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:1146  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1148  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1149  add si, word ptr gs:[bp + 0x36]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:114d  add si, word ptr fs:[bx + 0x36]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:1151  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1153  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1154  add si, word ptr gs:[bp + 0x38]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:1158  add si, word ptr fs:[bx + 0x38]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:115c  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:115e  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:115f  add si, word ptr gs:[bp + 0x3a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:1163  add si, word ptr fs:[bx + 0x3a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:1167  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1169  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:116a  add si, word ptr gs:[bp + 0x3c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:116e  add si, word ptr fs:[bx + 0x3c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:1172  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1174  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1175  add si, word ptr gs:[bp + 0x3e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:1179  add si, word ptr fs:[bx + 0x3e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:117d  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:117f  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1180  add si, word ptr gs:[bp + 0x40]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:1184  add si, word ptr fs:[bx + 0x40]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:1188  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:118a  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:118b  add si, word ptr gs:[bp + 0x42]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:118f  add si, word ptr fs:[bx + 0x42]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x42u)), false));
    // 1501:1193  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1195  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1196  add si, word ptr gs:[bp + 0x44]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:119a  add si, word ptr fs:[bx + 0x44]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:119e  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11a0  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11a1  add si, word ptr gs:[bp + 0x46]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:11a5  add si, word ptr fs:[bx + 0x46]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x46u)), true));
L161b9:
    if (c.tracing) c.traceAt(0x161b9);
    // 1501:11a9  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11ab  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11ac  add si, word ptr gs:[bp + 0x48]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:11b0  add si, word ptr fs:[bx + 0x48]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:11b4  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11b6  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11b7  add si, word ptr gs:[bp + 0x4a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:11bb  add si, word ptr fs:[bx + 0x4a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:11bf  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11c1  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11c2  add si, word ptr gs:[bp + 0x4c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:11c6  add si, word ptr fs:[bx + 0x4c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:11ca  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11cc  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11cd  add si, word ptr gs:[bp + 0x4e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:11d1  add si, word ptr fs:[bx + 0x4e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:11d5  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11d7  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11d8  add si, word ptr gs:[bp + 0x50]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:11dc  add si, word ptr fs:[bx + 0x50]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:11e0  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11e2  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11e3  add si, word ptr gs:[bp + 0x52]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:11e7  add si, word ptr fs:[bx + 0x52]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:11eb  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11ed  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11ee  add si, word ptr gs:[bp + 0x54]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:11f2  add si, word ptr fs:[bx + 0x54]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:11f6  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:11f8  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:11f9  add si, word ptr gs:[bp + 0x56]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:11fd  add si, word ptr fs:[bx + 0x56]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:1201  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1203  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1204  add si, word ptr gs:[bp + 0x58]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:1208  add si, word ptr fs:[bx + 0x58]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:120c  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:120e  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:120f  add si, word ptr gs:[bp + 0x5a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:1213  add si, word ptr fs:[bx + 0x5a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:1217  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1219  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:121a  add si, word ptr gs:[bp + 0x5c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:121e  add si, word ptr fs:[bx + 0x5c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:1222  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1224  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1225  add si, word ptr gs:[bp + 0x5e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:1229  add si, word ptr fs:[bx + 0x5e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:122d  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:122f  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1230  add si, word ptr gs:[bp + 0x60]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:1234  add si, word ptr fs:[bx + 0x60]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:1238  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:123a  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:123b  add si, word ptr gs:[bp + 0x62]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:123f  add si, word ptr fs:[bx + 0x62]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:1243  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1245  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1246  add si, word ptr gs:[bp + 0x64]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:124a  add si, word ptr fs:[bx + 0x64]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:124e  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1250  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1251  add si, word ptr gs:[bp + 0x66]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:1255  add si, word ptr fs:[bx + 0x66]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:1259  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:125b  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:125c  add si, word ptr gs:[bp + 0x68]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:1260  add si, word ptr fs:[bx + 0x68]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:1264  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1266  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1267  add si, word ptr gs:[bp + 0x6a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:126b  add si, word ptr fs:[bx + 0x6a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:126f  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1271  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1272  add si, word ptr gs:[bp + 0x6c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:1276  add si, word ptr fs:[bx + 0x6c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:127a  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:127c  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:127d  add si, word ptr gs:[bp + 0x6e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:1281  add si, word ptr fs:[bx + 0x6e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:1285  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1287  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1288  add si, word ptr gs:[bp + 0x70]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:128c  add si, word ptr fs:[bx + 0x70]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:1290  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1292  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1293  add si, word ptr gs:[bp + 0x72]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:1297  add si, word ptr fs:[bx + 0x72]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:129b  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:129d  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:129e  add si, word ptr gs:[bp + 0x74]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:12a2  add si, word ptr fs:[bx + 0x74]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:12a6  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12a8  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12a9  add si, word ptr gs:[bp + 0x76]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:12ad  add si, word ptr fs:[bx + 0x76]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:12b1  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12b3  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12b4  add si, word ptr gs:[bp + 0x78]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:12b8  add si, word ptr fs:[bx + 0x78]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:12bc  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12be  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12bf  add si, word ptr gs:[bp + 0x7a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:12c3  add si, word ptr fs:[bx + 0x7a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:12c7  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12c9  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12ca  add si, word ptr gs:[bp + 0x7c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:12ce  add si, word ptr fs:[bx + 0x7c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:12d2  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12d4  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12d5  add si, word ptr gs:[bp + 0x7e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:12d9  add si, word ptr fs:[bx + 0x7e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:12dd  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12df  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12e0  add si, word ptr gs:[bp + 0x80]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:12e5  add si, word ptr fs:[bx + 0x80]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:12ea  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12ec  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12ed  add si, word ptr gs:[bp + 0x82]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:12f2  add si, word ptr fs:[bx + 0x82]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:12f7  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:12f9  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:12fa  add si, word ptr gs:[bp + 0x84]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:12ff  add si, word ptr fs:[bx + 0x84]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:1304  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1306  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1307  add si, word ptr gs:[bp + 0x86]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:130c  add si, word ptr fs:[bx + 0x86]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:1311  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1313  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1314  add si, word ptr gs:[bp + 0x88]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:1319  add si, word ptr fs:[bx + 0x88]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:131e  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1320  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1321  add si, word ptr gs:[bp + 0x8a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:1326  add si, word ptr fs:[bx + 0x8a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:132b  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:132d  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:132e  add si, word ptr gs:[bp + 0x8c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:1333  add si, word ptr fs:[bx + 0x8c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8cu)), false));
    // 1501:1338  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:133a  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:133b  add si, word ptr gs:[bp + 0x8e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:1340  add si, word ptr fs:[bx + 0x8e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:1345  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1347  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1348  add si, word ptr gs:[bp + 0x90]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:134d  add si, word ptr fs:[bx + 0x90]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:1352  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1354  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1355  add si, word ptr gs:[bp + 0x92]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:135a  add si, word ptr fs:[bx + 0x92]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x92u)), true));
    // 1501:135f  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1361  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
L16372:
    if (c.tracing) c.traceAt(0x16372);
    // 1501:1362  add si, word ptr gs:[bp + 0x94]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:1367  add si, word ptr fs:[bx + 0x94]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:136c  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:136e  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:136f  add si, word ptr gs:[bp + 0x96]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:1374  add si, word ptr fs:[bx + 0x96]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:1379  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:137b  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:137c  add si, word ptr gs:[bp + 0x98]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:1381  add si, word ptr fs:[bx + 0x98]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:1386  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1388  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1389  add si, word ptr gs:[bp + 0x9a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:138e  add si, word ptr fs:[bx + 0x9a]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:1393  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1395  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:1396  add si, word ptr gs:[bp + 0x9c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:139b  add si, word ptr fs:[bx + 0x9c]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:13a0  mov al, byte ptr [si]  [x23603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:13a2  stosb byte ptr es:[di], al  [x23603]
    c.stos<8, false>(0);
    // 1501:13a3  add si, word ptr gs:[bp + 0x9e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:13a8  add si, word ptr fs:[bx + 0x9e]  [x23603]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9eu)), true));
    // 1501:13ad  ret   [x23603]
    c.ip = c.pop16(); return;
L163be:
    if (c.tracing) c.traceAt(0x163be);
    // 1501:13ae  mov bx, 0xa0  [x23106]
    c.b.x = (uint16_t)(0xa0u);
    // 1501:13b1  mul bx  [x23106]
    c.mul16(c.b.x);
    // 1501:13b3  mov bx, ax  [x23106]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:13b5  mov ax, word ptr cs:[0x5f1]  [x23106]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f1u)));
    // 1501:13b9  sub ax, word ptr cs:[0x5ed]  [x23106]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:13be  neg ax  [x23106]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:13c0  mov bp, 0xa0  [x23106]
    c.bp.x = (uint16_t)(0xa0u);
    // 1501:13c3  mul bp  [x23106]
    c.mul16(c.bp.x);
    // 1501:13c5  mov bp, ax  [x23106]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:13c7  mov ax, 0x140  [x23106]
    c.a.x = (uint16_t)(0x140u);
    // 1501:13ca  imul word ptr cs:[0x5ef]  [x23106]
    c.imul16(c.r16(c.csb + (uint16_t)(0x5efu)));
    // 1501:13cf  add ax, word ptr cs:[0x5ed]  [x23106]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:13d4  mov si, ax  [x23106]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:13d6  mov cx, 0x50  [x23106]
    c.c.x = (uint16_t)(0x50u);
    // 1501:13d9  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:13db  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:13dc  sub si, word ptr gs:[bp]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:13e0  add si, word ptr fs:[bx]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:13e3  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:13e5  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:13e6  sub si, word ptr gs:[bp + 2]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:13ea  add si, word ptr fs:[bx + 2]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:13ee  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:13f0  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:13f1  sub si, word ptr gs:[bp + 4]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:13f5  add si, word ptr fs:[bx + 4]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:13f9  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:13fb  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:13fc  sub si, word ptr gs:[bp + 6]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:1400  add si, word ptr fs:[bx + 6]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:1404  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1406  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1407  sub si, word ptr gs:[bp + 8]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:140b  add si, word ptr fs:[bx + 8]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:140f  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1411  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1412  sub si, word ptr gs:[bp + 0xa]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:1416  add si, word ptr fs:[bx + 0xa]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:141a  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:141c  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:141d  sub si, word ptr gs:[bp + 0xc]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:1421  add si, word ptr fs:[bx + 0xc]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:1425  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1427  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1428  sub si, word ptr gs:[bp + 0xe]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:142c  add si, word ptr fs:[bx + 0xe]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:1430  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1432  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1433  sub si, word ptr gs:[bp + 0x10]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:1437  add si, word ptr fs:[bx + 0x10]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:143b  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:143d  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:143e  sub si, word ptr gs:[bp + 0x12]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:1442  add si, word ptr fs:[bx + 0x12]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:1446  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1448  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1449  sub si, word ptr gs:[bp + 0x14]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:144d  add si, word ptr fs:[bx + 0x14]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:1451  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1453  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1454  sub si, word ptr gs:[bp + 0x16]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:1458  add si, word ptr fs:[bx + 0x16]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:145c  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:145e  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:145f  sub si, word ptr gs:[bp + 0x18]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:1463  add si, word ptr fs:[bx + 0x18]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:1467  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1469  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:146a  sub si, word ptr gs:[bp + 0x1a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:146e  add si, word ptr fs:[bx + 0x1a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:1472  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1474  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1475  sub si, word ptr gs:[bp + 0x1c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:1479  add si, word ptr fs:[bx + 0x1c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:147d  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:147f  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1480  sub si, word ptr gs:[bp + 0x1e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:1484  add si, word ptr fs:[bx + 0x1e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:1488  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:148a  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:148b  sub si, word ptr gs:[bp + 0x20]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:148f  add si, word ptr fs:[bx + 0x20]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:1493  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1495  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1496  sub si, word ptr gs:[bp + 0x22]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:149a  add si, word ptr fs:[bx + 0x22]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:149e  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14a0  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14a1  sub si, word ptr gs:[bp + 0x24]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:14a5  add si, word ptr fs:[bx + 0x24]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:14a9  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14ab  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14ac  sub si, word ptr gs:[bp + 0x26]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:14b0  add si, word ptr fs:[bx + 0x26]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:14b4  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14b6  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14b7  sub si, word ptr gs:[bp + 0x28]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:14bb  add si, word ptr fs:[bx + 0x28]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:14bf  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14c1  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14c2  sub si, word ptr gs:[bp + 0x2a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:14c6  add si, word ptr fs:[bx + 0x2a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:14ca  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14cc  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14cd  sub si, word ptr gs:[bp + 0x2c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:14d1  add si, word ptr fs:[bx + 0x2c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:14d5  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14d7  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14d8  sub si, word ptr gs:[bp + 0x2e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:14dc  add si, word ptr fs:[bx + 0x2e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:14e0  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14e2  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14e3  sub si, word ptr gs:[bp + 0x30]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:14e7  add si, word ptr fs:[bx + 0x30]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:14eb  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14ed  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14ee  sub si, word ptr gs:[bp + 0x32]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:14f2  add si, word ptr fs:[bx + 0x32]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:14f6  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:14f8  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:14f9  sub si, word ptr gs:[bp + 0x34]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:14fd  add si, word ptr fs:[bx + 0x34]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:1501  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1503  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1504  sub si, word ptr gs:[bp + 0x36]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:1508  add si, word ptr fs:[bx + 0x36]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:150c  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:150e  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:150f  sub si, word ptr gs:[bp + 0x38]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:1513  add si, word ptr fs:[bx + 0x38]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:1517  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1519  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:151a  sub si, word ptr gs:[bp + 0x3a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:151e  add si, word ptr fs:[bx + 0x3a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:1522  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1524  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1525  sub si, word ptr gs:[bp + 0x3c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:1529  add si, word ptr fs:[bx + 0x3c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:152d  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:152f  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1530  sub si, word ptr gs:[bp + 0x3e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:1534  add si, word ptr fs:[bx + 0x3e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:1538  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:153a  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:153b  sub si, word ptr gs:[bp + 0x40]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:153f  add si, word ptr fs:[bx + 0x40]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:1543  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1545  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1546  sub si, word ptr gs:[bp + 0x42]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:154a  add si, word ptr fs:[bx + 0x42]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x42u)), true));
    // 1501:154e  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
L16560:
    if (c.tracing) c.traceAt(0x16560);
    // 1501:1550  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1551  sub si, word ptr gs:[bp + 0x44]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:1555  add si, word ptr fs:[bx + 0x44]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:1559  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:155b  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:155c  sub si, word ptr gs:[bp + 0x46]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:1560  add si, word ptr fs:[bx + 0x46]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:1564  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1566  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1567  sub si, word ptr gs:[bp + 0x48]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:156b  add si, word ptr fs:[bx + 0x48]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:156f  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1571  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1572  sub si, word ptr gs:[bp + 0x4a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:1576  add si, word ptr fs:[bx + 0x4a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:157a  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:157c  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:157d  sub si, word ptr gs:[bp + 0x4c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:1581  add si, word ptr fs:[bx + 0x4c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:1585  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1587  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1588  sub si, word ptr gs:[bp + 0x4e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:158c  add si, word ptr fs:[bx + 0x4e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:1590  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1592  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1593  sub si, word ptr gs:[bp + 0x50]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:1597  add si, word ptr fs:[bx + 0x50]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:159b  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:159d  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:159e  sub si, word ptr gs:[bp + 0x52]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:15a2  add si, word ptr fs:[bx + 0x52]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:15a6  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15a8  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15a9  sub si, word ptr gs:[bp + 0x54]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:15ad  add si, word ptr fs:[bx + 0x54]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:15b1  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15b3  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15b4  sub si, word ptr gs:[bp + 0x56]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:15b8  add si, word ptr fs:[bx + 0x56]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:15bc  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15be  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15bf  sub si, word ptr gs:[bp + 0x58]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:15c3  add si, word ptr fs:[bx + 0x58]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:15c7  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15c9  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15ca  sub si, word ptr gs:[bp + 0x5a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:15ce  add si, word ptr fs:[bx + 0x5a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:15d2  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15d4  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15d5  sub si, word ptr gs:[bp + 0x5c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:15d9  add si, word ptr fs:[bx + 0x5c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:15dd  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15df  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15e0  sub si, word ptr gs:[bp + 0x5e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:15e4  add si, word ptr fs:[bx + 0x5e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:15e8  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15ea  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15eb  sub si, word ptr gs:[bp + 0x60]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:15ef  add si, word ptr fs:[bx + 0x60]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:15f3  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:15f5  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:15f6  sub si, word ptr gs:[bp + 0x62]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:15fa  add si, word ptr fs:[bx + 0x62]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:15fe  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1600  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1601  sub si, word ptr gs:[bp + 0x64]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:1605  add si, word ptr fs:[bx + 0x64]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:1609  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:160b  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:160c  sub si, word ptr gs:[bp + 0x66]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:1610  add si, word ptr fs:[bx + 0x66]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:1614  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1616  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1617  sub si, word ptr gs:[bp + 0x68]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:161b  add si, word ptr fs:[bx + 0x68]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:161f  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1621  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1622  sub si, word ptr gs:[bp + 0x6a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:1626  add si, word ptr fs:[bx + 0x6a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:162a  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:162c  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:162d  sub si, word ptr gs:[bp + 0x6c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:1631  add si, word ptr fs:[bx + 0x6c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:1635  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1637  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1638  sub si, word ptr gs:[bp + 0x6e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:163c  add si, word ptr fs:[bx + 0x6e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:1640  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1642  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1643  sub si, word ptr gs:[bp + 0x70]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:1647  add si, word ptr fs:[bx + 0x70]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:164b  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:164d  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:164e  sub si, word ptr gs:[bp + 0x72]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:1652  add si, word ptr fs:[bx + 0x72]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:1656  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1658  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1659  sub si, word ptr gs:[bp + 0x74]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:165d  add si, word ptr fs:[bx + 0x74]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:1661  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1663  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1664  sub si, word ptr gs:[bp + 0x76]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:1668  add si, word ptr fs:[bx + 0x76]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:166c  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:166e  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:166f  sub si, word ptr gs:[bp + 0x78]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:1673  add si, word ptr fs:[bx + 0x78]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:1677  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1679  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:167a  sub si, word ptr gs:[bp + 0x7a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:167e  add si, word ptr fs:[bx + 0x7a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:1682  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1684  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1685  sub si, word ptr gs:[bp + 0x7c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:1689  add si, word ptr fs:[bx + 0x7c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:168d  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:168f  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1690  sub si, word ptr gs:[bp + 0x7e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:1694  add si, word ptr fs:[bx + 0x7e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:1698  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:169a  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:169b  sub si, word ptr gs:[bp + 0x80]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:16a0  add si, word ptr fs:[bx + 0x80]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:16a5  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16a7  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16a8  sub si, word ptr gs:[bp + 0x82]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:16ad  add si, word ptr fs:[bx + 0x82]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:16b2  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16b4  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16b5  sub si, word ptr gs:[bp + 0x84]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:16ba  add si, word ptr fs:[bx + 0x84]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:16bf  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16c1  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16c2  sub si, word ptr gs:[bp + 0x86]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:16c7  add si, word ptr fs:[bx + 0x86]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:16cc  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16ce  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16cf  sub si, word ptr gs:[bp + 0x88]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:16d4  add si, word ptr fs:[bx + 0x88]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:16d9  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16db  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16dc  sub si, word ptr gs:[bp + 0x8a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:16e1  add si, word ptr fs:[bx + 0x8a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:16e6  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:16e8  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16e9  sub si, word ptr gs:[bp + 0x8c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:16ee  add si, word ptr fs:[bx + 0x8c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8cu)), true));
    // 1501:16f3  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
L16705:
    if (c.tracing) c.traceAt(0x16705);
    // 1501:16f5  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:16f6  sub si, word ptr gs:[bp + 0x8e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:16fb  add si, word ptr fs:[bx + 0x8e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:1700  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1702  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1703  sub si, word ptr gs:[bp + 0x90]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:1708  add si, word ptr fs:[bx + 0x90]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:170d  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:170f  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1710  sub si, word ptr gs:[bp + 0x92]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:1715  add si, word ptr fs:[bx + 0x92]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x92u)), false));
    // 1501:171a  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:171c  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:171d  sub si, word ptr gs:[bp + 0x94]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:1722  add si, word ptr fs:[bx + 0x94]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:1727  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1729  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:172a  sub si, word ptr gs:[bp + 0x96]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:172f  add si, word ptr fs:[bx + 0x96]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:1734  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1736  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1737  sub si, word ptr gs:[bp + 0x98]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:173c  add si, word ptr fs:[bx + 0x98]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:1741  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1743  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1744  sub si, word ptr gs:[bp + 0x9a]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:1749  add si, word ptr fs:[bx + 0x9a]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:174e  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1750  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:1751  sub si, word ptr gs:[bp + 0x9c]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:1756  add si, word ptr fs:[bx + 0x9c]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:175b  mov al, byte ptr [si]  [x23106]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:175d  stosb byte ptr es:[di], al  [x23106]
    c.stos<8, false>(0);
    // 1501:175e  sub si, word ptr gs:[bp + 0x9e]  [x23106]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:1763  add si, word ptr fs:[bx + 0x9e]  [x23106]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9eu)), true));
    // 1501:1768  ret   [x23106]
    c.ip = c.pop16(); return;
L16779:
    if (c.tracing) c.traceAt(0x16779);
    // 1501:1769  neg ax  [x23165]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:176b  mov bx, 0xa0  [x23165]
    c.b.x = (uint16_t)(0xa0u);
    // 1501:176e  mul bx  [x23165]
    c.mul16(c.b.x);
    // 1501:1770  mov bx, ax  [x23165]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1772  mov ax, word ptr cs:[0x5f1]  [x23165]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f1u)));
    // 1501:1776  sub ax, word ptr cs:[0x5ed]  [x23165]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:177b  mov bp, 0xa0  [x23165]
    c.bp.x = (uint16_t)(0xa0u);
    // 1501:177e  mul bp  [x23165]
    c.mul16(c.bp.x);
    // 1501:1780  mov bp, ax  [x23165]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1782  mov ax, 0x140  [x23165]
    c.a.x = (uint16_t)(0x140u);
    // 1501:1785  imul word ptr cs:[0x5ef]  [x23165]
    c.imul16(c.r16(c.csb + (uint16_t)(0x5efu)));
    // 1501:178a  add ax, word ptr cs:[0x5ed]  [x23165]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:178f  mov si, ax  [x23165]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:1791  mov cx, 0x50  [x23165]
    c.c.x = (uint16_t)(0x50u);
    // 1501:1794  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1796  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1797  add si, word ptr gs:[bp]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:179b  sub si, word ptr fs:[bx]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:179e  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17a0  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17a1  add si, word ptr gs:[bp + 2]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:17a5  sub si, word ptr fs:[bx + 2]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:17a9  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17ab  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17ac  add si, word ptr gs:[bp + 4]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:17b0  sub si, word ptr fs:[bx + 4]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:17b4  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17b6  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17b7  add si, word ptr gs:[bp + 6]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:17bb  sub si, word ptr fs:[bx + 6]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:17bf  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17c1  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17c2  add si, word ptr gs:[bp + 8]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:17c6  sub si, word ptr fs:[bx + 8]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:17ca  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17cc  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17cd  add si, word ptr gs:[bp + 0xa]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:17d1  sub si, word ptr fs:[bx + 0xa]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:17d5  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17d7  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17d8  add si, word ptr gs:[bp + 0xc]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:17dc  sub si, word ptr fs:[bx + 0xc]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:17e0  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17e2  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17e3  add si, word ptr gs:[bp + 0xe]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:17e7  sub si, word ptr fs:[bx + 0xe]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:17eb  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17ed  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17ee  add si, word ptr gs:[bp + 0x10]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:17f2  sub si, word ptr fs:[bx + 0x10]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:17f6  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:17f8  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:17f9  add si, word ptr gs:[bp + 0x12]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:17fd  sub si, word ptr fs:[bx + 0x12]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:1801  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1803  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1804  add si, word ptr gs:[bp + 0x14]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:1808  sub si, word ptr fs:[bx + 0x14]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:180c  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:180e  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:180f  add si, word ptr gs:[bp + 0x16]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:1813  sub si, word ptr fs:[bx + 0x16]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:1817  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1819  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:181a  add si, word ptr gs:[bp + 0x18]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:181e  sub si, word ptr fs:[bx + 0x18]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:1822  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1824  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1825  add si, word ptr gs:[bp + 0x1a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:1829  sub si, word ptr fs:[bx + 0x1a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:182d  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:182f  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1830  add si, word ptr gs:[bp + 0x1c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:1834  sub si, word ptr fs:[bx + 0x1c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:1838  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:183a  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:183b  add si, word ptr gs:[bp + 0x1e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:183f  sub si, word ptr fs:[bx + 0x1e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:1843  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1845  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1846  add si, word ptr gs:[bp + 0x20]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:184a  sub si, word ptr fs:[bx + 0x20]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:184e  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1850  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1851  add si, word ptr gs:[bp + 0x22]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:1855  sub si, word ptr fs:[bx + 0x22]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:1859  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:185b  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:185c  add si, word ptr gs:[bp + 0x24]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:1860  sub si, word ptr fs:[bx + 0x24]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:1864  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1866  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1867  add si, word ptr gs:[bp + 0x26]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:186b  sub si, word ptr fs:[bx + 0x26]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:186f  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1871  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1872  add si, word ptr gs:[bp + 0x28]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:1876  sub si, word ptr fs:[bx + 0x28]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:187a  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:187c  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:187d  add si, word ptr gs:[bp + 0x2a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:1881  sub si, word ptr fs:[bx + 0x2a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:1885  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1887  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1888  add si, word ptr gs:[bp + 0x2c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:188c  sub si, word ptr fs:[bx + 0x2c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:1890  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1892  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1893  add si, word ptr gs:[bp + 0x2e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:1897  sub si, word ptr fs:[bx + 0x2e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:189b  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:189d  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:189e  add si, word ptr gs:[bp + 0x30]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:18a2  sub si, word ptr fs:[bx + 0x30]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:18a6  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18a8  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18a9  add si, word ptr gs:[bp + 0x32]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:18ad  sub si, word ptr fs:[bx + 0x32]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:18b1  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18b3  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18b4  add si, word ptr gs:[bp + 0x34]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:18b8  sub si, word ptr fs:[bx + 0x34]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:18bc  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18be  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18bf  add si, word ptr gs:[bp + 0x36]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:18c3  sub si, word ptr fs:[bx + 0x36]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:18c7  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18c9  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18ca  add si, word ptr gs:[bp + 0x38]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:18ce  sub si, word ptr fs:[bx + 0x38]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:18d2  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18d4  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18d5  add si, word ptr gs:[bp + 0x3a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:18d9  sub si, word ptr fs:[bx + 0x3a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:18dd  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18df  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18e0  add si, word ptr gs:[bp + 0x3c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:18e4  sub si, word ptr fs:[bx + 0x3c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:18e8  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18ea  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18eb  add si, word ptr gs:[bp + 0x3e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:18ef  sub si, word ptr fs:[bx + 0x3e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:18f3  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:18f5  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:18f6  add si, word ptr gs:[bp + 0x40]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:18fa  sub si, word ptr fs:[bx + 0x40]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:18fe  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1900  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1901  add si, word ptr gs:[bp + 0x42]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:1905  sub si, word ptr fs:[bx + 0x42]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x42u)), true));
    // 1501:1909  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
L1691b:
    if (c.tracing) c.traceAt(0x1691b);
    // 1501:190b  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:190c  add si, word ptr gs:[bp + 0x44]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:1910  sub si, word ptr fs:[bx + 0x44]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:1914  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1916  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1917  add si, word ptr gs:[bp + 0x46]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:191b  sub si, word ptr fs:[bx + 0x46]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:191f  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1921  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1922  add si, word ptr gs:[bp + 0x48]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:1926  sub si, word ptr fs:[bx + 0x48]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:192a  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:192c  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:192d  add si, word ptr gs:[bp + 0x4a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:1931  sub si, word ptr fs:[bx + 0x4a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:1935  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1937  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1938  add si, word ptr gs:[bp + 0x4c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:193c  sub si, word ptr fs:[bx + 0x4c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:1940  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1942  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1943  add si, word ptr gs:[bp + 0x4e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:1947  sub si, word ptr fs:[bx + 0x4e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:194b  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:194d  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:194e  add si, word ptr gs:[bp + 0x50]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:1952  sub si, word ptr fs:[bx + 0x50]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:1956  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1958  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1959  add si, word ptr gs:[bp + 0x52]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:195d  sub si, word ptr fs:[bx + 0x52]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:1961  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1963  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1964  add si, word ptr gs:[bp + 0x54]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:1968  sub si, word ptr fs:[bx + 0x54]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:196c  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:196e  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:196f  add si, word ptr gs:[bp + 0x56]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:1973  sub si, word ptr fs:[bx + 0x56]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:1977  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1979  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:197a  add si, word ptr gs:[bp + 0x58]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:197e  sub si, word ptr fs:[bx + 0x58]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:1982  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1984  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1985  add si, word ptr gs:[bp + 0x5a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:1989  sub si, word ptr fs:[bx + 0x5a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:198d  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:198f  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1990  add si, word ptr gs:[bp + 0x5c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:1994  sub si, word ptr fs:[bx + 0x5c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:1998  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:199a  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:199b  add si, word ptr gs:[bp + 0x5e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:199f  sub si, word ptr fs:[bx + 0x5e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:19a3  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19a5  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19a6  add si, word ptr gs:[bp + 0x60]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:19aa  sub si, word ptr fs:[bx + 0x60]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:19ae  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19b0  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19b1  add si, word ptr gs:[bp + 0x62]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:19b5  sub si, word ptr fs:[bx + 0x62]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:19b9  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19bb  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19bc  add si, word ptr gs:[bp + 0x64]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:19c0  sub si, word ptr fs:[bx + 0x64]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:19c4  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19c6  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19c7  add si, word ptr gs:[bp + 0x66]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:19cb  sub si, word ptr fs:[bx + 0x66]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:19cf  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19d1  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19d2  add si, word ptr gs:[bp + 0x68]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:19d6  sub si, word ptr fs:[bx + 0x68]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:19da  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19dc  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19dd  add si, word ptr gs:[bp + 0x6a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:19e1  sub si, word ptr fs:[bx + 0x6a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:19e5  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19e7  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19e8  add si, word ptr gs:[bp + 0x6c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:19ec  sub si, word ptr fs:[bx + 0x6c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:19f0  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19f2  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19f3  add si, word ptr gs:[bp + 0x6e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:19f7  sub si, word ptr fs:[bx + 0x6e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:19fb  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:19fd  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:19fe  add si, word ptr gs:[bp + 0x70]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:1a02  sub si, word ptr fs:[bx + 0x70]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:1a06  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a08  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a09  add si, word ptr gs:[bp + 0x72]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:1a0d  sub si, word ptr fs:[bx + 0x72]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:1a11  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a13  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a14  add si, word ptr gs:[bp + 0x74]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:1a18  sub si, word ptr fs:[bx + 0x74]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:1a1c  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a1e  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a1f  add si, word ptr gs:[bp + 0x76]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:1a23  sub si, word ptr fs:[bx + 0x76]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:1a27  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a29  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a2a  add si, word ptr gs:[bp + 0x78]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:1a2e  sub si, word ptr fs:[bx + 0x78]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:1a32  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a34  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a35  add si, word ptr gs:[bp + 0x7a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:1a39  sub si, word ptr fs:[bx + 0x7a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:1a3d  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a3f  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a40  add si, word ptr gs:[bp + 0x7c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:1a44  sub si, word ptr fs:[bx + 0x7c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:1a48  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a4a  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a4b  add si, word ptr gs:[bp + 0x7e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:1a4f  sub si, word ptr fs:[bx + 0x7e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:1a53  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a55  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a56  add si, word ptr gs:[bp + 0x80]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:1a5b  sub si, word ptr fs:[bx + 0x80]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:1a60  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a62  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a63  add si, word ptr gs:[bp + 0x82]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:1a68  sub si, word ptr fs:[bx + 0x82]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:1a6d  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a6f  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a70  add si, word ptr gs:[bp + 0x84]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:1a75  sub si, word ptr fs:[bx + 0x84]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:1a7a  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a7c  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a7d  add si, word ptr gs:[bp + 0x86]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:1a82  sub si, word ptr fs:[bx + 0x86]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:1a87  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a89  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a8a  add si, word ptr gs:[bp + 0x88]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:1a8f  sub si, word ptr fs:[bx + 0x88]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:1a94  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1a96  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1a97  add si, word ptr gs:[bp + 0x8a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:1a9c  sub si, word ptr fs:[bx + 0x8a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:1aa1  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1aa3  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1aa4  add si, word ptr gs:[bp + 0x8c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:1aa9  sub si, word ptr fs:[bx + 0x8c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8cu)), true));
    // 1501:1aae  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
L16ac0:
    if (c.tracing) c.traceAt(0x16ac0);
    // 1501:1ab0  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1ab1  add si, word ptr gs:[bp + 0x8e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:1ab6  sub si, word ptr fs:[bx + 0x8e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:1abb  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1abd  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1abe  add si, word ptr gs:[bp + 0x90]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:1ac3  sub si, word ptr fs:[bx + 0x90]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:1ac8  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1aca  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1acb  add si, word ptr gs:[bp + 0x92]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:1ad0  sub si, word ptr fs:[bx + 0x92]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x92u)), false));
    // 1501:1ad5  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ad7  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1ad8  add si, word ptr gs:[bp + 0x94]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:1add  sub si, word ptr fs:[bx + 0x94]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:1ae2  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ae4  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1ae5  add si, word ptr gs:[bp + 0x96]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:1aea  sub si, word ptr fs:[bx + 0x96]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:1aef  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1af1  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1af2  add si, word ptr gs:[bp + 0x98]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:1af7  sub si, word ptr fs:[bx + 0x98]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:1afc  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1afe  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1aff  add si, word ptr gs:[bp + 0x9a]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:1b04  sub si, word ptr fs:[bx + 0x9a]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:1b09  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b0b  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1b0c  add si, word ptr gs:[bp + 0x9c]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:1b11  sub si, word ptr fs:[bx + 0x9c]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:1b16  mov al, byte ptr [si]  [x23165]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b18  stosb byte ptr es:[di], al  [x23165]
    c.stos<8, false>(0);
    // 1501:1b19  add si, word ptr gs:[bp + 0x9e]  [x23165]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:1b1e  sub si, word ptr fs:[bx + 0x9e]  [x23165]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9eu)), true));
    // 1501:1b23  ret   [x23165]
    c.ip = c.pop16(); return;
L16b34:
    if (c.tracing) c.traceAt(0x16b34);
    // 1501:1b24  neg ax  [x28622]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:1b26  mov bx, 0xa0  [x28622]
    c.b.x = (uint16_t)(0xa0u);
    // 1501:1b29  mul bx  [x28622]
    c.mul16(c.b.x);
    // 1501:1b2b  mov bx, ax  [x28622]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:1b2d  mov ax, word ptr cs:[0x5f1]  [x28622]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f1u)));
    // 1501:1b31  sub ax, word ptr cs:[0x5ed]  [x28622]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:1b36  neg ax  [x28622]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:1b38  mov bp, 0xa0  [x28622]
    c.bp.x = (uint16_t)(0xa0u);
    // 1501:1b3b  mul bp  [x28622]
    c.mul16(c.bp.x);
    // 1501:1b3d  mov bp, ax  [x28622]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1b3f  mov ax, 0x140  [x28622]
    c.a.x = (uint16_t)(0x140u);
    // 1501:1b42  imul word ptr cs:[0x5ef]  [x28622]
    c.imul16(c.r16(c.csb + (uint16_t)(0x5efu)));
    // 1501:1b47  add ax, word ptr cs:[0x5ed]  [x28622]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x5edu)), false));
    // 1501:1b4c  mov si, ax  [x28622]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:1b4e  mov cx, 0x50  [x28622]
    c.c.x = (uint16_t)(0x50u);
    // 1501:1b51  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b53  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b54  sub si, word ptr gs:[bp]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:1b58  sub si, word ptr fs:[bx]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:1b5b  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b5d  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b5e  sub si, word ptr gs:[bp + 2]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2u)), false));
    // 1501:1b62  sub si, word ptr fs:[bx + 2]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)), false));
    // 1501:1b66  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b68  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b69  sub si, word ptr gs:[bp + 4]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4u)), false));
    // 1501:1b6d  sub si, word ptr fs:[bx + 4]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)), false));
    // 1501:1b71  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b73  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b74  sub si, word ptr gs:[bp + 6]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6u)), false));
    // 1501:1b78  sub si, word ptr fs:[bx + 6]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 1501:1b7c  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b7e  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b7f  sub si, word ptr gs:[bp + 8]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8u)), false));
    // 1501:1b83  sub si, word ptr fs:[bx + 8]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8u)), false));
    // 1501:1b87  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b89  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b8a  sub si, word ptr gs:[bp + 0xa]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xau)), false));
    // 1501:1b8e  sub si, word ptr fs:[bx + 0xa]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 1501:1b92  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b94  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1b95  sub si, word ptr gs:[bp + 0xc]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xcu)), false));
    // 1501:1b99  sub si, word ptr fs:[bx + 0xc]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xcu)), false));
    // 1501:1b9d  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1b9f  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ba0  sub si, word ptr gs:[bp + 0xe]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0xeu)), false));
    // 1501:1ba4  sub si, word ptr fs:[bx + 0xe]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 1501:1ba8  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1baa  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bab  sub si, word ptr gs:[bp + 0x10]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x10u)), false));
    // 1501:1baf  sub si, word ptr fs:[bx + 0x10]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x10u)), false));
    // 1501:1bb3  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bb5  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bb6  sub si, word ptr gs:[bp + 0x12]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x12u)), false));
    // 1501:1bba  sub si, word ptr fs:[bx + 0x12]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x12u)), false));
    // 1501:1bbe  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bc0  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bc1  sub si, word ptr gs:[bp + 0x14]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x14u)), false));
    // 1501:1bc5  sub si, word ptr fs:[bx + 0x14]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x14u)), false));
    // 1501:1bc9  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bcb  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bcc  sub si, word ptr gs:[bp + 0x16]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x16u)), false));
    // 1501:1bd0  sub si, word ptr fs:[bx + 0x16]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x16u)), false));
    // 1501:1bd4  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bd6  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bd7  sub si, word ptr gs:[bp + 0x18]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x18u)), false));
    // 1501:1bdb  sub si, word ptr fs:[bx + 0x18]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x18u)), false));
    // 1501:1bdf  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1be1  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1be2  sub si, word ptr gs:[bp + 0x1a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1au)), false));
    // 1501:1be6  sub si, word ptr fs:[bx + 0x1a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1au)), false));
    // 1501:1bea  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bec  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bed  sub si, word ptr gs:[bp + 0x1c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1cu)), false));
    // 1501:1bf1  sub si, word ptr fs:[bx + 0x1c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1cu)), false));
    // 1501:1bf5  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1bf7  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1bf8  sub si, word ptr gs:[bp + 0x1e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x1eu)), false));
    // 1501:1bfc  sub si, word ptr fs:[bx + 0x1e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x1eu)), false));
    // 1501:1c00  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c02  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c03  sub si, word ptr gs:[bp + 0x20]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x20u)), false));
    // 1501:1c07  sub si, word ptr fs:[bx + 0x20]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x20u)), false));
    // 1501:1c0b  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c0d  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c0e  sub si, word ptr gs:[bp + 0x22]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x22u)), false));
    // 1501:1c12  sub si, word ptr fs:[bx + 0x22]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x22u)), false));
    // 1501:1c16  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c18  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c19  sub si, word ptr gs:[bp + 0x24]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x24u)), false));
    // 1501:1c1d  sub si, word ptr fs:[bx + 0x24]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x24u)), false));
    // 1501:1c21  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c23  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c24  sub si, word ptr gs:[bp + 0x26]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x26u)), false));
    // 1501:1c28  sub si, word ptr fs:[bx + 0x26]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x26u)), false));
    // 1501:1c2c  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c2e  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c2f  sub si, word ptr gs:[bp + 0x28]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x28u)), false));
    // 1501:1c33  sub si, word ptr fs:[bx + 0x28]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x28u)), false));
    // 1501:1c37  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c39  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c3a  sub si, word ptr gs:[bp + 0x2a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2au)), false));
    // 1501:1c3e  sub si, word ptr fs:[bx + 0x2a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2au)), false));
    // 1501:1c42  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c44  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c45  sub si, word ptr gs:[bp + 0x2c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2cu)), false));
    // 1501:1c49  sub si, word ptr fs:[bx + 0x2c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2cu)), false));
    // 1501:1c4d  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c4f  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c50  sub si, word ptr gs:[bp + 0x2e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x2eu)), false));
    // 1501:1c54  sub si, word ptr fs:[bx + 0x2e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x2eu)), false));
    // 1501:1c58  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c5a  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c5b  sub si, word ptr gs:[bp + 0x30]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x30u)), false));
    // 1501:1c5f  sub si, word ptr fs:[bx + 0x30]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x30u)), false));
    // 1501:1c63  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c65  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c66  sub si, word ptr gs:[bp + 0x32]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x32u)), false));
    // 1501:1c6a  sub si, word ptr fs:[bx + 0x32]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x32u)), false));
    // 1501:1c6e  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c70  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c71  sub si, word ptr gs:[bp + 0x34]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x34u)), false));
    // 1501:1c75  sub si, word ptr fs:[bx + 0x34]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x34u)), false));
    // 1501:1c79  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c7b  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c7c  sub si, word ptr gs:[bp + 0x36]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x36u)), false));
    // 1501:1c80  sub si, word ptr fs:[bx + 0x36]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x36u)), false));
    // 1501:1c84  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c86  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c87  sub si, word ptr gs:[bp + 0x38]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x38u)), false));
    // 1501:1c8b  sub si, word ptr fs:[bx + 0x38]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x38u)), false));
    // 1501:1c8f  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c91  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c92  sub si, word ptr gs:[bp + 0x3a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3au)), false));
    // 1501:1c96  sub si, word ptr fs:[bx + 0x3a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3au)), false));
    // 1501:1c9a  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1c9c  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1c9d  sub si, word ptr gs:[bp + 0x3c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3cu)), false));
    // 1501:1ca1  sub si, word ptr fs:[bx + 0x3c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3cu)), false));
    // 1501:1ca5  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ca7  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ca8  sub si, word ptr gs:[bp + 0x3e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x3eu)), false));
    // 1501:1cac  sub si, word ptr fs:[bx + 0x3e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x3eu)), false));
    // 1501:1cb0  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cb2  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cb3  sub si, word ptr gs:[bp + 0x40]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x40u)), false));
    // 1501:1cb7  sub si, word ptr fs:[bx + 0x40]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x40u)), false));
    // 1501:1cbb  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cbd  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cbe  sub si, word ptr gs:[bp + 0x42]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x42u)), false));
    // 1501:1cc2  sub si, word ptr fs:[bx + 0x42]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x42u)), true));
L16cd6:
    if (c.tracing) c.traceAt(0x16cd6);
    // 1501:1cc6  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cc8  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cc9  sub si, word ptr gs:[bp + 0x44]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x44u)), false));
    // 1501:1ccd  sub si, word ptr fs:[bx + 0x44]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x44u)), false));
    // 1501:1cd1  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cd3  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cd4  sub si, word ptr gs:[bp + 0x46]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x46u)), false));
    // 1501:1cd8  sub si, word ptr fs:[bx + 0x46]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x46u)), false));
    // 1501:1cdc  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cde  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cdf  sub si, word ptr gs:[bp + 0x48]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x48u)), false));
    // 1501:1ce3  sub si, word ptr fs:[bx + 0x48]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x48u)), false));
    // 1501:1ce7  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ce9  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cea  sub si, word ptr gs:[bp + 0x4a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4au)), false));
    // 1501:1cee  sub si, word ptr fs:[bx + 0x4a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4au)), false));
    // 1501:1cf2  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cf4  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1cf5  sub si, word ptr gs:[bp + 0x4c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4cu)), false));
    // 1501:1cf9  sub si, word ptr fs:[bx + 0x4c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4cu)), false));
    // 1501:1cfd  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1cff  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d00  sub si, word ptr gs:[bp + 0x4e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x4eu)), false));
    // 1501:1d04  sub si, word ptr fs:[bx + 0x4e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x4eu)), false));
    // 1501:1d08  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d0a  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d0b  sub si, word ptr gs:[bp + 0x50]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x50u)), false));
    // 1501:1d0f  sub si, word ptr fs:[bx + 0x50]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x50u)), false));
    // 1501:1d13  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d15  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d16  sub si, word ptr gs:[bp + 0x52]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x52u)), false));
    // 1501:1d1a  sub si, word ptr fs:[bx + 0x52]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x52u)), false));
    // 1501:1d1e  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d20  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d21  sub si, word ptr gs:[bp + 0x54]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x54u)), false));
    // 1501:1d25  sub si, word ptr fs:[bx + 0x54]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x54u)), false));
    // 1501:1d29  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d2b  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d2c  sub si, word ptr gs:[bp + 0x56]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x56u)), false));
    // 1501:1d30  sub si, word ptr fs:[bx + 0x56]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x56u)), false));
    // 1501:1d34  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d36  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d37  sub si, word ptr gs:[bp + 0x58]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x58u)), false));
    // 1501:1d3b  sub si, word ptr fs:[bx + 0x58]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x58u)), false));
    // 1501:1d3f  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d41  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d42  sub si, word ptr gs:[bp + 0x5a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5au)), false));
    // 1501:1d46  sub si, word ptr fs:[bx + 0x5a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5au)), false));
    // 1501:1d4a  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d4c  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d4d  sub si, word ptr gs:[bp + 0x5c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5cu)), false));
    // 1501:1d51  sub si, word ptr fs:[bx + 0x5c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5cu)), false));
    // 1501:1d55  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d57  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d58  sub si, word ptr gs:[bp + 0x5e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x5eu)), false));
    // 1501:1d5c  sub si, word ptr fs:[bx + 0x5e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x5eu)), false));
    // 1501:1d60  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d62  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d63  sub si, word ptr gs:[bp + 0x60]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x60u)), false));
    // 1501:1d67  sub si, word ptr fs:[bx + 0x60]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x60u)), false));
    // 1501:1d6b  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d6d  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d6e  sub si, word ptr gs:[bp + 0x62]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x62u)), false));
    // 1501:1d72  sub si, word ptr fs:[bx + 0x62]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x62u)), false));
    // 1501:1d76  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d78  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d79  sub si, word ptr gs:[bp + 0x64]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64u)), false));
    // 1501:1d7d  sub si, word ptr fs:[bx + 0x64]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x64u)), false));
    // 1501:1d81  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d83  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d84  sub si, word ptr gs:[bp + 0x66]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x66u)), false));
    // 1501:1d88  sub si, word ptr fs:[bx + 0x66]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x66u)), false));
    // 1501:1d8c  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d8e  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d8f  sub si, word ptr gs:[bp + 0x68]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x68u)), false));
    // 1501:1d93  sub si, word ptr fs:[bx + 0x68]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x68u)), false));
    // 1501:1d97  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1d99  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1d9a  sub si, word ptr gs:[bp + 0x6a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6au)), false));
    // 1501:1d9e  sub si, word ptr fs:[bx + 0x6a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6au)), false));
    // 1501:1da2  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1da4  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1da5  sub si, word ptr gs:[bp + 0x6c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6cu)), false));
    // 1501:1da9  sub si, word ptr fs:[bx + 0x6c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6cu)), false));
    // 1501:1dad  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1daf  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1db0  sub si, word ptr gs:[bp + 0x6e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6eu)), false));
    // 1501:1db4  sub si, word ptr fs:[bx + 0x6e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x6eu)), false));
    // 1501:1db8  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1dba  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1dbb  sub si, word ptr gs:[bp + 0x70]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x70u)), false));
    // 1501:1dbf  sub si, word ptr fs:[bx + 0x70]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x70u)), false));
    // 1501:1dc3  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1dc5  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1dc6  sub si, word ptr gs:[bp + 0x72]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x72u)), false));
    // 1501:1dca  sub si, word ptr fs:[bx + 0x72]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x72u)), false));
    // 1501:1dce  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1dd0  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1dd1  sub si, word ptr gs:[bp + 0x74]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x74u)), false));
    // 1501:1dd5  sub si, word ptr fs:[bx + 0x74]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x74u)), false));
    // 1501:1dd9  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ddb  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ddc  sub si, word ptr gs:[bp + 0x76]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x76u)), false));
    // 1501:1de0  sub si, word ptr fs:[bx + 0x76]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x76u)), false));
    // 1501:1de4  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1de6  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1de7  sub si, word ptr gs:[bp + 0x78]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x78u)), false));
    // 1501:1deb  sub si, word ptr fs:[bx + 0x78]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x78u)), false));
    // 1501:1def  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1df1  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1df2  sub si, word ptr gs:[bp + 0x7a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7au)), false));
    // 1501:1df6  sub si, word ptr fs:[bx + 0x7a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7au)), false));
    // 1501:1dfa  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1dfc  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1dfd  sub si, word ptr gs:[bp + 0x7c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7cu)), false));
    // 1501:1e01  sub si, word ptr fs:[bx + 0x7c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7cu)), false));
    // 1501:1e05  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e07  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e08  sub si, word ptr gs:[bp + 0x7e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x7eu)), false));
    // 1501:1e0c  sub si, word ptr fs:[bx + 0x7e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x7eu)), false));
    // 1501:1e10  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e12  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e13  sub si, word ptr gs:[bp + 0x80]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x80u)), false));
    // 1501:1e18  sub si, word ptr fs:[bx + 0x80]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x80u)), false));
    // 1501:1e1d  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e1f  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e20  sub si, word ptr gs:[bp + 0x82]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x82u)), false));
    // 1501:1e25  sub si, word ptr fs:[bx + 0x82]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x82u)), false));
    // 1501:1e2a  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e2c  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e2d  sub si, word ptr gs:[bp + 0x84]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x84u)), false));
    // 1501:1e32  sub si, word ptr fs:[bx + 0x84]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x84u)), false));
    // 1501:1e37  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e39  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e3a  sub si, word ptr gs:[bp + 0x86]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x86u)), false));
    // 1501:1e3f  sub si, word ptr fs:[bx + 0x86]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x86u)), false));
    // 1501:1e44  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e46  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e47  sub si, word ptr gs:[bp + 0x88]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x88u)), false));
    // 1501:1e4c  sub si, word ptr fs:[bx + 0x88]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x88u)), false));
    // 1501:1e51  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e53  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e54  sub si, word ptr gs:[bp + 0x8a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8au)), false));
    // 1501:1e59  sub si, word ptr fs:[bx + 0x8a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8au)), false));
    // 1501:1e5e  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e60  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e61  sub si, word ptr gs:[bp + 0x8c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8cu)), false));
    // 1501:1e66  sub si, word ptr fs:[bx + 0x8c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8cu)), true));
L16e7b:
    if (c.tracing) c.traceAt(0x16e7b);
    // 1501:1e6b  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e6d  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e6e  sub si, word ptr gs:[bp + 0x8e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x8eu)), false));
    // 1501:1e73  sub si, word ptr fs:[bx + 0x8e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x8eu)), false));
    // 1501:1e78  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e7a  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e7b  sub si, word ptr gs:[bp + 0x90]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x90u)), false));
    // 1501:1e80  sub si, word ptr fs:[bx + 0x90]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x90u)), false));
    // 1501:1e85  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e87  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e88  sub si, word ptr gs:[bp + 0x92]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x92u)), false));
    // 1501:1e8d  sub si, word ptr fs:[bx + 0x92]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x92u)), false));
    // 1501:1e92  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1e94  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1e95  sub si, word ptr gs:[bp + 0x94]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x94u)), false));
    // 1501:1e9a  sub si, word ptr fs:[bx + 0x94]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x94u)), false));
    // 1501:1e9f  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ea1  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ea2  sub si, word ptr gs:[bp + 0x96]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x96u)), false));
    // 1501:1ea7  sub si, word ptr fs:[bx + 0x96]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x96u)), false));
    // 1501:1eac  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1eae  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1eaf  sub si, word ptr gs:[bp + 0x98]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x98u)), false));
    // 1501:1eb4  sub si, word ptr fs:[bx + 0x98]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x98u)), false));
    // 1501:1eb9  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ebb  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ebc  sub si, word ptr gs:[bp + 0x9a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9au)), false));
    // 1501:1ec1  sub si, word ptr fs:[bx + 0x9a]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9au)), false));
    // 1501:1ec6  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ec8  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ec9  sub si, word ptr gs:[bp + 0x9c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9cu)), false));
    // 1501:1ece  sub si, word ptr fs:[bx + 0x9c]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9cu)), false));
    // 1501:1ed3  mov al, byte ptr [si]  [x28622]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:1ed5  stosb byte ptr es:[di], al  [x28622]
    c.stos<8, false>(0);
    // 1501:1ed6  sub si, word ptr gs:[bp + 0x9e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x + 0x9eu)), false));
    // 1501:1edb  sub si, word ptr fs:[bx + 0x9e]  [x28622]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x + 0x9eu)), true));
    // 1501:1ee0  ret   [x28622]
    c.ip = c.pop16(); return;
L16ef1:
    if (c.tracing) c.traceAt(0x16ef1);
    // 1501:1ee1  mov si, word ptr cs:[0x5e7]  [x1026]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5e7u)));
    // 1501:1ee6  mov cx, 0x7fff  [x1026]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:1ee9  mov ax, 0xff65  [x1026]
    c.a.x = (uint16_t)(0xff65u);
    // 1501:1eec  imul word ptr cs:[si + 0x783]  [x1026]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:1ef1  idiv cx  [x1026]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1ef1u); }   // #DE: int 0, then again
    // 1501:1ef3  imul word ptr cs:[0x60d]  [x1026]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1ef8  idiv word ptr cs:[0x60f]  [x1026]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1ef8u); }   // #DE: int 0, then again
    // 1501:1efd  mov word ptr cs:[0x609], ax  [x1026]
    c.w16(c.csb + (uint16_t)(0x609u), c.a.x);
    // 1501:1f01  mov ax, 0xff65  [x1026]
    c.a.x = (uint16_t)(0xff65u);
    // 1501:1f04  imul word ptr cs:[si + 0x61b]  [x1026]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:1f09  idiv cx  [x1026]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1f09u); }   // #DE: int 0, then again
    // 1501:1f0b  imul word ptr cs:[0x60d]  [x1026]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1f10  idiv word ptr cs:[0x60f]  [x1026]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1f10u); }   // #DE: int 0, then again
    // 1501:1f15  mov word ptr cs:[0x60b], ax  [x1026]
    c.w16(c.csb + (uint16_t)(0x60bu), c.a.x);
    // 1501:1f19  ret   [x1026]
    c.ip = c.pop16(); return;
L16f2a:
    if (c.tracing) c.traceAt(0x16f2a);
    // 1501:1f1a  mov cx, 0x7fff  [x1026]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:1f1d  xor di, di  [x1026]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L16f2f:
    if (c.tracing) c.traceAt(0x16f2f);
    // 1501:1f1f  mov si, word ptr cs:[0x5e7]  [x102600]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5e7u)));
    // 1501:1f24  mov ax, word ptr cs:[di + 0x44e]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44eu)));
    // 1501:1f29  imul word ptr cs:[si + 0x61b]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:1f2e  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1f2eu); }   // #DE: int 0, then again
    // 1501:1f30  push ax  [x102600]
    c.push16(c.a.x);
    // 1501:1f31  mov ax, word ptr cs:[di + 0x44c]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44cu)));
    // 1501:1f36  imul word ptr cs:[si + 0x783]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:1f3b  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1f3bu); }   // #DE: int 0, then again
    // 1501:1f3d  pop bx  [x102600]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1f3e  add ax, bx  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:1f40  imul word ptr cs:[0x60d]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1f45  idiv word ptr cs:[0x60f]  [x102600]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1f45u); }   // #DE: int 0, then again
    // 1501:1f4a  sub ax, word ptr cs:[0x609]  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x609u)), false));
    // 1501:1f4f  add ax, word ptr cs:[0x605]  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x605u)), false));
    // 1501:1f54  mov word ptr cs:[di - 0x600], ax  [x102600]
    c.w16(c.csb + (uint16_t)(c.di.x + 0xfffffa00u), c.a.x);
    // 1501:1f59  mov ax, word ptr cs:[di + 0x44e]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44eu)));
    // 1501:1f5e  imul word ptr cs:[si + 0x783]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:1f63  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1f63u); }   // #DE: int 0, then again
    // 1501:1f65  push ax  [x102600]
    c.push16(c.a.x);
    // 1501:1f66  mov ax, word ptr cs:[di + 0x44c]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44cu)));
    // 1501:1f6b  imul word ptr cs:[si + 0x61b]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:1f70  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1f70u); }   // #DE: int 0, then again
    // 1501:1f72  pop bx  [x102600]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1f73  sub ax, bx  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:1f75  imul word ptr cs:[0x60d]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1f7a  idiv word ptr cs:[0x60f]  [x102600]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1f7au); }   // #DE: int 0, then again
    // 1501:1f7f  sub ax, word ptr cs:[0x60b]  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x60bu)), false));
    // 1501:1f84  add ax, word ptr cs:[0x607]  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x607u)), false));
    // 1501:1f89  mov word ptr cs:[di - 0x5fe], ax  [x102600]
    c.w16(c.csb + (uint16_t)(c.di.x + 0xfffffa02u), c.a.x);
    // 1501:1f8e  add di, 4  [x102600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:1f91  cmp di, 0x190  [x102600]
    c.sub<16>(c.di.x, 0x190u, true);
    // 1501:1f95  jb 0x1f1f  [x102600]
    if (c.cf) goto L16f2f;
L16fa7:
    if (c.tracing) c.traceAt(0x16fa7);
    // 1501:1f97  xor di, di  [x1026]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:1f99  mov bp, 0x320  [x1026]
    c.bp.x = (uint16_t)(0x320u);
L16fac:
    if (c.tracing) c.traceAt(0x16fac);
    // 1501:1f9c  mov si, word ptr cs:[0x5e9]  [x102600]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5e9u)));
    // 1501:1fa1  sub bp, 4  [x102600]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, 0x4u, false));
    // 1501:1fa4  mov ax, word ptr cs:[di + 0x44e]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44eu)));
    // 1501:1fa9  imul word ptr cs:[si + 0x61b]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:1fae  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1faeu); }   // #DE: int 0, then again
    // 1501:1fb0  push ax  [x102600]
    c.push16(c.a.x);
    // 1501:1fb1  mov ax, word ptr cs:[di + 0x44c]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44cu)));
    // 1501:1fb6  imul word ptr cs:[si + 0x783]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:1fbb  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1fbbu); }   // #DE: int 0, then again
    // 1501:1fbd  pop bx  [x102600]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1fbe  add ax, bx  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:1fc0  imul word ptr cs:[0x60d]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1fc5  idiv word ptr cs:[0x60f]  [x102600]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1fc5u); }   // #DE: int 0, then again
    // 1501:1fca  sub ax, word ptr cs:[0x609]  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x609u)), false));
    // 1501:1fcf  neg ax  [x102600]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:1fd1  add ax, word ptr cs:[0x605]  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x605u)), false));
    // 1501:1fd6  mov word ptr cs:[bp - 0x600], ax  [x102600]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xfffffa00u), c.a.x);
    // 1501:1fdb  mov ax, word ptr cs:[di + 0x44e]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44eu)));
    // 1501:1fe0  imul word ptr cs:[si + 0x783]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x783u)));
    // 1501:1fe5  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1fe5u); }   // #DE: int 0, then again
    // 1501:1fe7  push ax  [x102600]
    c.push16(c.a.x);
    // 1501:1fe8  mov ax, word ptr cs:[di + 0x44c]  [x102600]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x44cu)));
    // 1501:1fed  imul word ptr cs:[si + 0x61b]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x61bu)));
    // 1501:1ff2  idiv cx  [x102600]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x1ff2u); }   // #DE: int 0, then again
    // 1501:1ff4  pop bx  [x102600]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:1ff5  sub ax, bx  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:1ff7  imul word ptr cs:[0x60d]  [x102600]
    c.imul16(c.r16(c.csb + (uint16_t)(0x60du)));
    // 1501:1ffc  idiv word ptr cs:[0x60f]  [x102600]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x60fu)))) { c.d32 = false; c.intr(0, 0x1ffcu); }   // #DE: int 0, then again
    // 1501:2001  sub ax, word ptr cs:[0x60b]  [x102600]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x60bu)), false));
    // 1501:2006  neg ax  [x102600]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:2008  add ax, word ptr cs:[0x607]  [x102600]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x607u)), false));
    // 1501:200d  mov word ptr cs:[bp - 0x5fe], ax  [x102600]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xfffffa02u), c.a.x);
    // 1501:2012  add di, 4  [x102600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:2015  cmp di, 0x190  [x102600]
    c.sub<16>(c.di.x, 0x190u, true);
    // 1501:2019  jb 0x1f9c  [x102600]
    if (c.cf) goto L16fac;
L1702b:
    if (c.tracing) c.traceAt(0x1702b);
    // 1501:201b  ret   [x1026]
    c.ip = c.pop16(); return;
L1702c:
    if (c.tracing) c.traceAt(0x1702c);
    // 1501:201c  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:201e  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 1501:2020  mov ax, 0x60  [x1]
    c.a.x = (uint16_t)(0x60u);
L17033:
    if (c.tracing) c.traceAt(0x17033);
    // 1501:2023  mov word ptr cs:[si + 0x44c], 0  [x100]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x44cu), 0x0u);
    // 1501:202a  mov word ptr cs:[si + 0x44e], ax  [x100]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x44eu), c.a.x);
    // 1501:202f  sub ax, 2  [x100]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x2u, false));
    // 1501:2032  add si, 4  [x100]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:2035  cmp si, 0x190  [x100]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:2039  jb 0x2023  [x100]
    if (c.cf) goto L17033;
L1704b:
    if (c.tracing) c.traceAt(0x1704b);
    // 1501:203b  ret   [x1]
    c.ip = c.pop16(); return;
L1704c:
    if (c.tracing) c.traceAt(0x1704c);
    // 1501:203c  mov word ptr cs:[0x5dc], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x5dcu), 0x0u);
    // 1501:2043  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L17055:
    if (c.tracing) c.traceAt(0x17055);
    // 1501:2045  mov cx, 0x50  [x400]
    c.c.x = (uint16_t)(0x50u);
    // 1501:2048  mov word ptr cs:[0x5fb], 1  [x400]
    c.w16(c.csb + (uint16_t)(0x5fbu), 0x1u);
    // 1501:204f  xor dx, dx  [x400]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:2051  mov ax, word ptr cs:[0x5dc]  [x400]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5dcu)));
    // 1501:2055  cmp word ptr cs:[0x5dc], 0  [x400]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5dcu)), 0x0u, true);
    // 1501:205b  jns 0x207b  [x400]
    if (!c.sf) goto L1708b;
    c.notTranslated(0x1706d, "fall-through");
L1708b:
    if (c.tracing) c.traceAt(0x1708b);
    // 1501:207b  idiv cx  [x400]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x207bu); }   // #DE: int 0, then again
    // 1501:207d  mov word ptr cs:[0x5f5], ax  [x400]
    c.w16(c.csb + (uint16_t)(0x5f5u), c.a.x);
    // 1501:2081  mov word ptr cs:[0x5f7], dx  [x400]
    c.w16(c.csb + (uint16_t)(0x5f7u), c.dx_.x);
    // 1501:2086  sar ax, 1  [x400]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:2088  mov word ptr cs:[0x5f9], ax  [x400]
    c.w16(c.csb + (uint16_t)(0x5f9u), c.a.x);
    // 1501:208c  xor bx, bx  [x400]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:208e  mov cx, 0x50  [x400]
    c.c.x = (uint16_t)(0x50u);
L170a1:
    if (c.tracing) c.traceAt(0x170a1);
    // 1501:2091  mov dx, 0  [x32000]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:2094  add dx, word ptr cs:[0x5f5]  [x32000]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x5f5u)), false));
    // 1501:2099  mov ax, word ptr cs:[0x5f7]  [x32000]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x5f7u)));
    // 1501:209d  add word ptr cs:[0x5f9], ax  [x32000]
    c.w16(c.csb + (uint16_t)(0x5f9u), c.add<16>(c.r16(c.csb + (uint16_t)(0x5f9u)), c.a.x, false));
    // 1501:20a2  cmp word ptr cs:[0x5f9], 0x50  [x32000]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x5f9u)), 0x50u, true);
    // 1501:20a8  jl 0x20b5  [x32000]
    if ((c.sf != c.of)) goto L170c5;
L170ba:
    if (c.tracing) c.traceAt(0x170ba);
    // 1501:20aa  sub word ptr cs:[0x5f9], 0x50  [x15800]
    c.w16(c.csb + (uint16_t)(0x5f9u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x5f9u)), 0x50u, false));
    // 1501:20b0  add dx, word ptr cs:[0x5fb]  [x15800]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x5fbu)), true));
L170c5:
    if (c.tracing) c.traceAt(0x170c5);
    // 1501:20b5  mov word ptr gs:[bx + di], dx  [x32000]
    c.w16(c.gsb + (uint16_t)(c.b.x + c.di.x), c.dx_.x);
    // 1501:20b8  add bx, 2  [x32000]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:20bb  loop 0x2091  [x32000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L170a1;
L170cd:
    if (c.tracing) c.traceAt(0x170cd);
    // 1501:20bd  add di, 0xa0  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xa0u, false));
    // 1501:20c1  add word ptr cs:[0x5dc], 1  [x400]
    c.w16(c.csb + (uint16_t)(0x5dcu), c.add<16>(c.r16(c.csb + (uint16_t)(0x5dcu)), 0x1u, false));
    // 1501:20c7  cmp di, 0xfa00  [x400]
    c.sub<16>(c.di.x, 0xfa00u, true);
    // 1501:20cb  jb 0x2045  [x400]
    if (c.cf) goto L17055;
L170df:
    if (c.tracing) c.traceAt(0x170df);
    // 1501:20cf  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:20d1  mov bx, 0x140  [x1]
    c.b.x = (uint16_t)(0x140u);
L170e4:
    if (c.tracing) c.traceAt(0x170e4);
    // 1501:20d4  mov ax, word ptr gs:[si]  [x32000]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.si.x)));
    // 1501:20d7  mul bx  [x32000]
    c.mul16(c.b.x);
    // 1501:20d9  mov word ptr fs:[si], ax  [x32000]
    c.w16(c.fsb + (uint16_t)(c.si.x), c.a.x);
    // 1501:20dc  add si, 2  [x32000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:20df  cmp si, 0xfa00  [x32000]
    c.sub<16>(c.si.x, 0xfa00u, true);
    // 1501:20e3  jb 0x20d4  [x32000]
    if (c.cf) goto L170e4;
L170f5:
    if (c.tracing) c.traceAt(0x170f5);
    // 1501:20e5  ret   [x1]
    c.ip = c.pop16(); return;
L170f6:
    if (c.tracing) c.traceAt(0x170f6);
    // 1501:20e6  mov dx, 0x3da  [x1091]
    c.dx_.x = (uint16_t)(0x3dau);
L170f9:
    if (c.tracing) c.traceAt(0x170f9);
    // 1501:20e9  in al, dx  [x4321]
    c.ip = 0x20eau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L170fa:
    if (c.tracing) c.traceAt(0x170fa);
    // 1501:20ea  and al, 8  [x5761]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:20ec  jne 0x20e9  [x5761]
    if (!c.zf) goto L170f9;
L170fe:
    if (c.tracing) c.traceAt(0x170fe);
    // 1501:20ee  in al, dx  [x54986]
    c.ip = 0x20efu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L170ff:
    if (c.tracing) c.traceAt(0x170ff);
    // 1501:20ef  and al, 8  [x72951]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:20f1  je 0x20ee  [x72951]
    if (c.zf) goto L170fe;
L17103:
    if (c.tracing) c.traceAt(0x17103);
    // 1501:20f3  ret   [x1091]
    c.ip = c.pop16(); return;
L17104:
    if (c.tracing) c.traceAt(0x17104);
    // 1501:20f4  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_18(18, {0x15010, 0x15d3b, 0x15d5c, 0x15d5f, 0x15d74, 0x15d77, 0x15d7a, 0x15d7c, 0x15d7e, 0x15d81, 0x15d8e, 0x15d97, 0x15d99, 0x15d9d, 0x15da5, 0x15db0, 0x15dc4, 0x15dd1, 0x15dd7, 0x15de9, 0x15e19, 0x15e22, 0x15e24, 0x15e28, 0x15e32, 0x15e35, 0x15e38, 0x15ea8, 0x15eaf, 0x15ebe, 0x15ec5, 0x15ecd, 0x15edc, 0x15ee3, 0x15ef2, 0x15ef9, 0x15f06, 0x15f0c, 0x15f14, 0x15f1c, 0x15f21, 0x15f29, 0x15f31, 0x15f36, 0x15f3f, 0x15f48, 0x15f5e, 0x15f67, 0x15f70, 0x15f7f, 0x15f88, 0x15f8f, 0x15f92, 0x15f94, 0x15f99, 0x15f9c, 0x15fa0, 0x15fd7, 0x15fdd, 0x15fe8, 0x15fee, 0x15ff8, 0x16002, 0x16004, 0x16005, 0x161b9, 0x16372, 0x163be, 0x16560, 0x16705, 0x16779, 0x1691b, 0x16ac0, 0x16b34, 0x16cd6, 0x16e7b, 0x16ef1, 0x16f2a, 0x16f2f, 0x16fa7, 0x16fac, 0x1702b, 0x1702c, 0x17033, 0x1704b, 0x1704c, 0x17055, 0x1708b, 0x170a1, 0x170ba, 0x170c5, 0x170cd, 0x170df, 0x170e4, 0x170f5, 0x170f6, 0x170f9, 0x170fa, 0x170fe, 0x170ff, 0x17103, 0x17104}, code_18);

}  // namespace show
