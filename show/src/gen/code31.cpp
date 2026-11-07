// Part 30 (END.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_31(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x21c12: goto L21c12;
    case 0x21c1d: goto L21c1d;
    case 0x21c24: goto L21c24;
    case 0x21c2a: goto L21c2a;
    case 0x21c33: goto L21c33;
    case 0x21c36: goto L21c36;
    case 0x21c3b: goto L21c3b;
    case 0x21c3c: goto L21c3c;
    case 0x21c40: goto L21c40;
    case 0x21c43: goto L21c43;
    case 0x21c46: goto L21c46;
    case 0x21c57: goto L21c57;
    case 0x21c61: goto L21c61;
    case 0x21c64: goto L21c64;
    case 0x21c65: goto L21c65;
    case 0x21c69: goto L21c69;
    case 0x21c6a: goto L21c6a;
    case 0x21c6e: goto L21c6e;
    case 0x21c71: goto L21c71;
    case 0x21c7f: goto L21c7f;
    case 0x21c81: goto L21c81;
    case 0x21c84: goto L21c84;
    case 0x21c85: goto L21c85;
    case 0x21c89: goto L21c89;
    case 0x21c90: goto L21c90;
    case 0x21c93: goto L21c93;
    case 0x21c9d: goto L21c9d;
    case 0x21ca0: goto L21ca0;
    case 0x21caf: goto L21caf;
    case 0x21cb5: goto L21cb5;
    case 0x21cbc: goto L21cbc;
    case 0x21cbf: goto L21cbf;
    case 0x21cc1: goto L21cc1;
    case 0x21ce7: goto L21ce7;
    case 0x21d79: goto L21d79;
    case 0x21d7c: goto L21d7c;
    case 0x21d89: goto L21d89;
    case 0x21d8d: goto L21d8d;
    case 0x21d93: goto L21d93;
    case 0x21dd3: goto L21dd3;
    case 0x21e0d: goto L21e0d;
    case 0x21e10: goto L21e10;
    case 0x21e31: goto L21e31;
    case 0x21e34: goto L21e34;
    case 0x21e55: goto L21e55;
    case 0x21e58: goto L21e58;
    case 0x21e79: goto L21e79;
    case 0x21e7c: goto L21e7c;
    case 0x21e9d: goto L21e9d;
    case 0x21ea0: goto L21ea0;
    case 0x21ec1: goto L21ec1;
    case 0x21ee2: goto L21ee2;
    case 0x21f03: goto L21f03;
    case 0x21f1f: goto L21f1f;
    case 0x21f21: goto L21f21;
    case 0x21f34: goto L21f34;
    case 0x21f37: goto L21f37;
    case 0x21f3f: goto L21f3f;
    case 0x21f4d: goto L21f4d;
    case 0x21f4f: goto L21f4f;
    case 0x21f55: goto L21f55;
    case 0x21f57: goto L21f57;
    case 0x21f5e: goto L21f5e;
    case 0x21f63: goto L21f63;
    case 0x21f6e: goto L21f6e;
    case 0x21f74: goto L21f74;
    case 0x21f7b: goto L21f7b;
    case 0x21f92: goto L21f92;
    case 0x21f9f: goto L21f9f;
    case 0x21fac: goto L21fac;
    case 0x21fb3: goto L21fb3;
    case 0x21fb6: goto L21fb6;
    case 0x21fbe: goto L21fbe;
    case 0x21fc1: goto L21fc1;
    case 0x21fc4: goto L21fc4;
    case 0x21fcf: goto L21fcf;
    case 0x21fe0: goto L21fe0;
    case 0x21fe1: goto L21fe1;
    case 0x21fe5: goto L21fe5;
    case 0x21fed: goto L21fed;
    case 0x21ff0: goto L21ff0;
    case 0x21ff3: goto L21ff3;
    case 0x21ffe: goto L21ffe;
    case 0x2200f: goto L2200f;
    case 0x22010: goto L22010;
    case 0x22013: goto L22013;
    case 0x2201b: goto L2201b;
    case 0x2201f: goto L2201f;
    case 0x2202f: goto L2202f;
    case 0x2203b: goto L2203b;
    case 0x2203e: goto L2203e;
    case 0x22046: goto L22046;
    case 0x2204a: goto L2204a;
    case 0x22059: goto L22059;
    case 0x22065: goto L22065;
    case 0x2207d: goto L2207d;
    case 0x22082: goto L22082;
    case 0x22084: goto L22084;
    case 0x2208f: goto L2208f;
    case 0x2209a: goto L2209a;
    case 0x2209b: goto L2209b;
    case 0x220ca: goto L220ca;
    case 0x220cb: goto L220cb;
    case 0x220ee: goto L220ee;
    case 0x220ef: goto L220ef;
    case 0x2210f: goto L2210f;
    case 0x2211d: goto L2211d;
    case 0x2211f: goto L2211f;
    case 0x22128: goto L22128;
    case 0x2213c: goto L2213c;
    case 0x22141: goto L22141;
    case 0x22143: goto L22143;
    case 0x22144: goto L22144;
    case 0x22147: goto L22147;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xffffcc02  [x1]
    goto L21c12;
L21c12:
    if (c.tracing) c.traceAt(0x21c12);
    // 1501:cc02  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 1501:cc04  mov word ptr cs:[0xcc00], ax  [x1]
    c.w16(c.csb + (uint16_t)(0xcc00u), c.a.x);
    // 1501:cc08  mov ax, 0x10  [x1]
    c.a.x = (uint16_t)(0x10u);
    // 1501:cc0b  int 0x10  [x1]
    c.ip = 0xcc0du; c.d32 = false; c.intr(0x10, 0xcc0du);
L21c1d:
    if (c.tracing) c.traceAt(0x21c1d);
    // 1501:cc0d  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:cc10  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:cc12  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L21c24:
    if (c.tracing) c.traceAt(0x21c24);
    // 1501:cc14  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:cc16  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:cc18  int 0x10  [x16]
    c.ip = 0xcc1au; c.d32 = false; c.intr(0x10, 0xcc1au);
L21c2a:
    if (c.tracing) c.traceAt(0x21c2a);
    // 1501:cc1a  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:cc1c  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:cc1e  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:cc21  jne 0xcc14  [x16]
    if (!c.zf) goto L21c24;
L21c33:
    if (c.tracing) c.traceAt(0x21c33);
    // 1501:cc23  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L21c36:
    if (c.tracing) c.traceAt(0x21c36);
    // 1501:cc26  in al, dx  [x1]
    c.ip = 0xcc27u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:cc27  and al, 8  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:cc29  jne 0xcc26  [x1]
    if (!c.zf) goto L21c36;
L21c3b:
    if (c.tracing) c.traceAt(0x21c3b);
    // 1501:cc2b  in al, dx  [x45]
    c.ip = 0xcc2cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21c3c:
    if (c.tracing) c.traceAt(0x21c3c);
    // 1501:cc2c  and al, 8  [x60]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:cc2e  je 0xcc2b  [x60]
    if (c.zf) goto L21c3b;
L21c40:
    if (c.tracing) c.traceAt(0x21c40);
    // 1501:cc30  call 0xd08b  [x1]
    c.push16(0xcc33u); code_31(c, 0x2209bu); if (c.ip != 0xcc33u) c.badReturn(0x21c40);
L21c43:
    if (c.tracing) c.traceAt(0x21c43);
    // 1501:cc33  call 0xd118  [x1]
    c.push16(0xcc36u); code_31(c, 0x22128u); if (c.ip != 0xcc36u) c.badReturn(0x21c43);
L21c46:
    if (c.tracing) c.traceAt(0x21c46);
    // 1501:cc36  mov dx, 0x3d4  [x6159]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:cc39  mov bx, word ptr [0xc973]  [x6159]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc973u)));
    // 1501:cc3d  add bx, 0x50  [x6159]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x50u, true));
    // 1501:cc40  mov al, 0xd  [x6159]
    c.a.l = (uint8_t)(0xdu);
    // 1501:cc42  mov ah, bl  [x6159]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:cc44  out dx, ax  [x6159]
    c.ip = 0xcc45u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cc45  jmp 0xcc47  [x6159]
    goto L21c57;
L21c57:
    if (c.tracing) c.traceAt(0x21c57);
    // 1501:cc47  mov dx, 0x3d4  [x6159]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:cc4a  mov al, 0xc  [x6159]
    c.a.l = (uint8_t)(0xcu);
    // 1501:cc4c  mov ah, bh  [x6159]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:cc4e  out dx, ax  [x6159]
    c.ip = 0xcc4fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cc4f  jmp 0xcc51  [x6159]
    goto L21c61;
L21c61:
    if (c.tracing) c.traceAt(0x21c61);
    // 1501:cc51  mov dx, 0x3da  [x6159]
    c.dx_.x = (uint16_t)(0x3dau);
L21c64:
    if (c.tracing) c.traceAt(0x21c64);
    // 1501:cc54  in al, dx  [x6161]
    c.ip = 0xcc55u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21c65:
    if (c.tracing) c.traceAt(0x21c65);
    // 1501:cc55  and al, 8  [x6162]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:cc57  jne 0xcc54  [x6162]
    if (!c.zf) goto L21c64;
L21c69:
    if (c.tracing) c.traceAt(0x21c69);
    // 1501:cc59  in al, dx  [x25330]
    c.ip = 0xcc5au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21c6a:
    if (c.tracing) c.traceAt(0x21c6a);
    // 1501:cc5a  and al, 8  [x33773]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:cc5c  je 0xcc59  [x33773]
    if (c.zf) goto L21c69;
L21c6e:
    if (c.tracing) c.traceAt(0x21c6e);
    // 1501:cc5e  call 0xd055  [x6159]
    c.push16(0xcc61u); code_31(c, 0x22065u); if (c.ip != 0xcc61u) c.badReturn(0x21c6e);
L21c71:
    if (c.tracing) c.traceAt(0x21c71);
    // 1501:cc61  mov si, word ptr [0xc862]  [x6159]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc862u)));
    // 1501:cc65  mov dx, 0x3c8  [x6159]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:cc68  xor al, al  [x6159]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:cc6a  out dx, al  [x6159]
    c.ip = 0xcc6bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:cc6b  inc dx  [x6159]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:cc6c  mov cx, 0x30  [x6159]
    c.c.x = (uint16_t)(0x30u);
L21c7f:
    if (c.tracing) c.traceAt(0x21c7f);
    // 1501:cc6f  rep outsb dx, byte ptr [si]  [x301791]
    c.ip = 0xcc71u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L21c81:
    if (c.tracing) c.traceAt(0x21c81);
    // 1501:cc71  mov dx, 0x3da  [x6159]
    c.dx_.x = (uint16_t)(0x3dau);
L21c84:
    if (c.tracing) c.traceAt(0x21c84);
    // 1501:cc74  in al, dx  [x36261]
    c.ip = 0xcc75u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21c85:
    if (c.tracing) c.traceAt(0x21c85);
    // 1501:cc75  and al, 1  [x46295]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x1u), true));
    // 1501:cc77  jne 0xcc74  [x46295]
    if (!c.zf) goto L21c84;
L21c89:
    if (c.tracing) c.traceAt(0x21c89);
    // 1501:cc79  inc word ptr [0xc86a]  [x6159]
    c.w16(c.dsb + (uint16_t)(0xffffc86au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffc86au)), true));
    // 1501:cc7d  call 0xcf2f  [x6159]
    c.push16(0xcc80u); code_31(c, 0x21f3fu); if (c.ip != 0xcc80u) c.badReturn(0x21c8d);
L21c90:
    if (c.tracing) c.traceAt(0x21c90);
    // 1501:cc80  call 0xd118  [x6159]
    c.push16(0xcc83u); code_31(c, 0x22128u); if (c.ip != 0xcc83u) c.badReturn(0x21c90);
L21c93:
    if (c.tracing) c.traceAt(0x21c93);
    // 1501:cc83  mov ax, es  [x6159]
    c.a.x = (uint16_t)(c.es);
    // 1501:cc85  add ax, 5  [x6159]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x5u, false));
    // 1501:cc88  cmp ax, 0xa6d6  [x6159]
    c.sub<16>(c.a.x, 0xa6d6u, true);
    // 1501:cc8b  jb 0xcc90  [x6159]
    if (c.cf) goto L21ca0;
L21c9d:
    if (c.tracing) c.traceAt(0x21c9d);
    // 1501:cc8d  mov ax, 0xa000  [x17]
    c.a.x = (uint16_t)(0xa000u);
L21ca0:
    if (c.tracing) c.traceAt(0x21ca0);
    // 1501:cc90  mov es, ax  [x6159]
    c.loadEs(c.a.x);
    // 1501:cc92  add word ptr [0xc973], 0x50  [x6159]
    c.w16(c.dsb + (uint16_t)(0xffffc973u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffc973u)), 0x50u, false));
    // 1501:cc97  cmp word ptr [0xc973], 0x6d60  [x6159]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffc973u)), 0x6d60u, true);
    // 1501:cc9d  jb 0xcca5  [x6159]
    if (c.cf) goto L21cb5;
L21caf:
    if (c.tracing) c.traceAt(0x21caf);
    // 1501:cc9f  mov word ptr [0xc973], 0  [x17]
    c.w16(c.dsb + (uint16_t)(0xffffc973u), 0x0u);
L21cb5:
    if (c.tracing) c.traceAt(0x21cb5);
    // 1501:cca5  cmp byte ptr [0xc86c], 0  [x6159]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffc86cu)), 0x0u, true);
    // 1501:ccaa  je 0xccaf  [x6159]
    if (c.zf) goto L21cbf;
L21cbc:
    if (c.tracing) c.traceAt(0x21cbc);
    // 1501:ccac  jmp 0xd134  [x1]
    goto L22144;
L21cbf:
    if (c.tracing) c.traceAt(0x21cbf);
    // 1501:ccaf  jmp 0xcc36  [x6158]
    goto L21c46;
L21cc1:
    if (c.tracing) c.traceAt(0x21cc1);
    // 1501:ccb1  push bx  [x39648]
    c.push16(c.b.x);
    // 1501:ccb2  sub al, 0x20  [x39648]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x20u, false));
    // 1501:ccb4  xor ah, ah  [x39648]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:ccb6  push ax  [x39648]
    c.push16(c.a.x);
    // 1501:ccb7  shl ax, 2  [x39648]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x2u) & 31), false));
    // 1501:ccba  mov si, ax  [x39648]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:ccbc  mov ax, 0x190  [x39648]
    c.a.x = (uint16_t)(0x190u);
    // 1501:ccbf  mul word ptr [0xc98f]  [x39648]
    c.mul16(c.r16(c.dsb + (uint16_t)(0xffffc98fu)));
    // 1501:ccc3  add si, ax  [x39648]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:ccc5  mov di, word ptr [0xc98d]  [x39648]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc98du)));
    // 1501:ccc9  shr di, 3  [x39648]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:cccc  mov cx, word ptr [0xc98d]  [x39648]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc98du)));
    // 1501:ccd0  and cx, 7  [x39648]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x7u), false));
    // 1501:ccd3  mov bx, cx  [x39648]
    c.b.x = (uint16_t)(c.c.x);
    // 1501:ccd5  xor bp, bp  [x39648]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L21ce7:
    if (c.tracing) c.traceAt(0x21ce7);
    // 1501:ccd7  mov dx, 0x3c4  [x158592]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:ccda  mov al, 2  [x158592]
    c.a.l = (uint8_t)(0x2u);
    // 1501:ccdc  mov ah, byte ptr ds:[bp - 0x367b]  [x158592]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc985u)));
    // 1501:cce1  out dx, ax  [x158592]
    c.ip = 0xcce2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cce2  mov dx, 0x3ce  [x158592]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:cce5  mov al, 4  [x158592]
    c.a.l = (uint8_t)(0x4u);
    // 1501:cce7  mov ah, byte ptr ds:[bp - 0x3677]  [x158592]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc989u)));
    // 1501:ccec  out dx, ax  [x158592]
    c.ip = 0xccedu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cced  mov al, byte ptr [si]  [x158592]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:ccf1  ror al, cl  [x158592]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ccf3  mov ah, al  [x158592]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:ccf5  and ah, byte ptr [bx - 0x368b]  [x158592]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ccf9  and al, byte ptr [bx - 0x3683]  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:ccfd  or byte ptr es:[di], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cd00  or byte ptr es:[di + 0x6d60], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:cd05  mov al, byte ptr [si + 1]  [x158592]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
    // 1501:cd09  ror al, cl  [x158592]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:cd0b  mov ch, al  [x158592]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:cd0d  and ch, byte ptr [bx - 0x368b]  [x158592]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cd11  and al, byte ptr [bx - 0x3683]  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cd15  or al, ah  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:cd17  or byte ptr es:[di + 1], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x1u))) | (c.a.l), false));
    // 1501:cd1b  or byte ptr es:[di + 0x6d61], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d61u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d61u))) | (c.a.l), false));
    // 1501:cd20  mov al, byte ptr [si + 2]  [x158592]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)));
    // 1501:cd24  ror al, cl  [x158592]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:cd26  mov ah, al  [x158592]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:cd28  and ah, byte ptr [bx - 0x368b]  [x158592]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cd2c  and al, byte ptr [bx - 0x3683]  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cd30  or al, ch  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:cd32  or byte ptr es:[di + 2], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x2u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x2u))) | (c.a.l), false));
    // 1501:cd36  or byte ptr es:[di + 0x6d62], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d62u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d62u))) | (c.a.l), false));
    // 1501:cd3b  mov al, byte ptr [si + 3]  [x158592]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)));
    // 1501:cd3f  ror al, cl  [x158592]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:cd41  mov ch, al  [x158592]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:cd43  and ch, byte ptr [bx - 0x368b]  [x158592]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cd47  and al, byte ptr [bx - 0x3683]  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cd4b  or al, ah  [x158592]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:cd4d  or byte ptr es:[di + 3], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x3u))) | (c.a.l), false));
    // 1501:cd51  or byte ptr es:[di + 0x6d63], al  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d63u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d63u))) | (c.a.l), false));
    // 1501:cd56  or byte ptr es:[di + 4], ch  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x4u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x4u))) | (c.c.h), false));
    // 1501:cd5a  or byte ptr es:[di + 0x6d64], ch  [x158592]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d64u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d64u))) | (c.c.h), false));
    // 1501:cd5f  add si, 0x3200  [x158592]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3200u, false));
    // 1501:cd63  inc bp  [x158592]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:cd64  cmp bp, 4  [x158592]
    c.sub<16>(c.bp.x, 0x4u, true);
    // 1501:cd67  jae 0xcd6c  [x158592]
    if (!c.cf) goto L21d7c;
L21d79:
    if (c.tracing) c.traceAt(0x21d79);
    // 1501:cd69  jmp 0xccd7  [x118944]
    goto L21ce7;
L21d7c:
    if (c.tracing) c.traceAt(0x21d7c);
    // 1501:cd6c  pop bx  [x39648]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:cd6d  xor ah, ah  [x39648]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:cd6f  mov al, byte ptr [bx - 0x366b]  [x39648]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc995u)));
    // 1501:cd73  add word ptr [0xc98d], ax  [x39648]
    c.w16(c.dsb + (uint16_t)(0xffffc98du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffc98du)), c.a.x, true));
    // 1501:cd77  pop bx  [x39648]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:cd78  ret   [x39648]
    c.ip = c.pop16(); return;
L21d89:
    if (c.tracing) c.traceAt(0x21d89);
    // 1501:cd79  cmp al, 0x20  [x9699]
    c.sub<8>(c.a.l, 0x20u, true);
    // 1501:cd7b  jne 0xcd83  [x9699]
    if (!c.zf) goto L21d93;
L21d8d:
    if (c.tracing) c.traceAt(0x21d8d);
    // 1501:cd7d  add word ptr [0xc98d], 0x14  [x1159]
    c.w16(c.dsb + (uint16_t)(0xffffc98du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffc98du)), 0x14u, true));
    // 1501:cd82  ret   [x1159]
    c.ip = c.pop16(); return;
L21d93:
    if (c.tracing) c.traceAt(0x21d93);
    // 1501:cd83  sub al, 0x20  [x8540]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x20u, false));
    // 1501:cd85  xor ah, ah  [x8540]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:cd87  add ax, ax  [x8540]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, false));
    // 1501:cd89  mov bp, ax  [x8540]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:cd8b  mov ax, word ptr ds:[bp - 0x378d]  [x8540]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffc873u)));
    // 1501:cd90  push ax  [x8540]
    c.push16(c.a.x);
    // 1501:cd91  shr ax, 3  [x8540]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:cd94  shl ax, 3  [x8540]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:cd97  mov word ptr [0xc86d], ax  [x8540]
    c.w16(c.dsb + (uint16_t)(0xc86du), c.a.x);
    // 1501:cd9a  mov si, word ptr ds:[bp - 0x370d]  [x8540]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffffc8f3u)));
    // 1501:cd9f  mov ax, 0xd6  [x8540]
    c.a.x = (uint16_t)(0xd6u);
    // 1501:cda2  mul word ptr [0xc98f]  [x8540]
    c.mul16(c.r16(c.dsb + (uint16_t)(0xffffc98fu)));
    // 1501:cda6  add si, ax  [x8540]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 1501:cda8  push bx  [x8540]
    c.push16(c.b.x);
    // 1501:cda9  mov di, word ptr [0xc98d]  [x8540]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc98du)));
    // 1501:cdad  shr di, 3  [x8540]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:cdb0  mov cx, word ptr [0xc98d]  [x8540]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc98du)));
    // 1501:cdb4  and cx, 7  [x8540]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x7u), false));
    // 1501:cdb7  mov bx, cx  [x8540]
    c.b.x = (uint16_t)(c.c.x);
    // 1501:cdb9  mov di, word ptr [0xc98d]  [x8540]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc98du)));
    // 1501:cdbd  shr di, 3  [x8540]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x3u) & 31), true));
    // 1501:cdc0  mov bp, 0  [x8540]
    c.bp.x = (uint16_t)(0x0u);
L21dd3:
    if (c.tracing) c.traceAt(0x21dd3);
    // 1501:cdc3  mov dx, 0x3c4  [x34160]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:cdc6  mov al, 2  [x34160]
    c.a.l = (uint8_t)(0x2u);
    // 1501:cdc8  mov ah, byte ptr ds:[bp - 0x367b]  [x34160]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc985u)));
    // 1501:cdcd  out dx, ax  [x34160]
    c.ip = 0xcdceu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cdce  mov dx, 0x3ce  [x34160]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:cdd1  mov al, 4  [x34160]
    c.a.l = (uint8_t)(0x4u);
    // 1501:cdd3  mov ah, byte ptr ds:[bp - 0x3677]  [x34160]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc989u)));
    // 1501:cdd8  out dx, ax  [x34160]
    c.ip = 0xcdd9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cdd9  push di  [x34160]
    c.push16(c.di.x);
    // 1501:cdda  mov dx, word ptr [0xc86d]  [x34160]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc86du)));
    // 1501:cdde  mov al, byte ptr cs:[si + 8]  [x34160]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x8u)));
    // 1501:cde3  ror al, cl  [x34160]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:cde5  mov ah, al  [x34160]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:cde7  and ah, byte ptr [bx - 0x368b]  [x34160]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cdeb  and al, byte ptr [bx - 0x3683]  [x34160]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cdef  or byte ptr es:[di], al  [x34160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cdf2  or byte ptr es:[di + 0x6d60], al  [x34160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:cdf7  inc di  [x34160]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:cdf8  sub dx, 8  [x34160]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:cdfb  jns 0xce00  [x34160]
    if (!c.sf) goto L21e10;
L21e0d:
    if (c.tracing) c.traceAt(0x21e0d);
    // 1501:cdfd  jmp 0xcf0f  [x732]
    goto L21f1f;
L21e10:
    if (c.tracing) c.traceAt(0x21e10);
    // 1501:ce00  mov al, byte ptr cs:[si + 9]  [x33428]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x9u)));
    // 1501:ce05  ror al, cl  [x33428]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ce07  mov ch, al  [x33428]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:ce09  and ch, byte ptr [bx - 0x368b]  [x33428]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ce0d  and al, byte ptr [bx - 0x3683]  [x33428]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:ce11  or al, ah  [x33428]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:ce13  or byte ptr es:[di], al  [x33428]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:ce16  or byte ptr es:[di + 0x6d60], al  [x33428]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ce1b  inc di  [x33428]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ce1c  sub dx, 8  [x33428]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ce1f  jns 0xce24  [x33428]
    if (!c.sf) goto L21e34;
L21e31:
    if (c.tracing) c.traceAt(0x21e31);
    // 1501:ce21  jmp 0xcf11  [x244]
    goto L21f21;
L21e34:
    if (c.tracing) c.traceAt(0x21e34);
    // 1501:ce24  mov al, byte ptr cs:[si + 0xa]  [x33184]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xau)));
    // 1501:ce29  ror al, cl  [x33184]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ce2b  mov ah, al  [x33184]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:ce2d  and ah, byte ptr [bx - 0x368b]  [x33184]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ce31  and al, byte ptr [bx - 0x3683]  [x33184]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:ce35  or al, ch  [x33184]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:ce37  or byte ptr es:[di], al  [x33184]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:ce3a  or byte ptr es:[di + 0x6d60], al  [x33184]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ce3f  inc di  [x33184]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ce40  sub dx, 8  [x33184]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ce43  jns 0xce48  [x33184]
    if (!c.sf) goto L21e58;
L21e55:
    if (c.tracing) c.traceAt(0x21e55);
    // 1501:ce45  jmp 0xcf0f  [x488]
    goto L21f1f;
L21e58:
    if (c.tracing) c.traceAt(0x21e58);
    // 1501:ce48  mov al, byte ptr cs:[si + 0xb]  [x32696]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xbu)));
    // 1501:ce4d  ror al, cl  [x32696]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ce4f  mov ch, al  [x32696]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:ce51  and ch, byte ptr [bx - 0x368b]  [x32696]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ce55  and al, byte ptr [bx - 0x3683]  [x32696]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:ce59  or al, ah  [x32696]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:ce5b  or byte ptr es:[di], al  [x32696]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:ce5e  or byte ptr es:[di + 0x6d60], al  [x32696]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ce63  inc di  [x32696]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ce64  sub dx, 8  [x32696]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ce67  jns 0xce6c  [x32696]
    if (!c.sf) goto L21e7c;
L21e79:
    if (c.tracing) c.traceAt(0x21e79);
    // 1501:ce69  jmp 0xcf11  [x244]
    goto L21f21;
L21e7c:
    if (c.tracing) c.traceAt(0x21e7c);
    // 1501:ce6c  mov al, byte ptr cs:[si + 0xc]  [x32452]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xcu)));
    // 1501:ce71  ror al, cl  [x32452]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ce73  mov ah, al  [x32452]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:ce75  and ah, byte ptr [bx - 0x368b]  [x32452]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ce79  and al, byte ptr [bx - 0x3683]  [x32452]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:ce7d  or al, ch  [x32452]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:ce7f  or byte ptr es:[di], al  [x32452]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:ce82  or byte ptr es:[di + 0x6d60], al  [x32452]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ce87  inc di  [x32452]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ce88  sub dx, 8  [x32452]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ce8b  jns 0xce90  [x32452]
    if (!c.sf) goto L21ea0;
L21e9d:
    if (c.tracing) c.traceAt(0x21e9d);
    // 1501:ce8d  jmp 0xcf0f  [x12932]
    goto L21f1f;
L21ea0:
    if (c.tracing) c.traceAt(0x21ea0);
    // 1501:ce90  mov al, byte ptr cs:[si + 0xd]  [x19520]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xdu)));
    // 1501:ce95  ror al, cl  [x19520]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ce97  mov ch, al  [x19520]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:ce99  and ch, byte ptr [bx - 0x368b]  [x19520]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:ce9d  and al, byte ptr [bx - 0x3683]  [x19520]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cea1  or al, ah  [x19520]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:cea3  or byte ptr es:[di], al  [x19520]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cea6  or byte ptr es:[di + 0x6d60], al  [x19520]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ceab  inc di  [x19520]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ceac  sub dx, 8  [x19520]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ceaf  js 0xcf11  [x19520]
    if (c.sf) goto L21f21;
L21ec1:
    if (c.tracing) c.traceAt(0x21ec1);
    // 1501:ceb1  mov al, byte ptr cs:[si + 0xe]  [x15372]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xeu)));
    // 1501:ceb6  ror al, cl  [x15372]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ceb8  mov ah, al  [x15372]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:ceba  and ah, byte ptr [bx - 0x368b]  [x15372]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cebe  and al, byte ptr [bx - 0x3683]  [x15372]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cec2  or al, ch  [x15372]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:cec4  or byte ptr es:[di], al  [x15372]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cec7  or byte ptr es:[di + 0x6d60], al  [x15372]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:cecc  inc di  [x15372]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:cecd  sub dx, 8  [x15372]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:ced0  js 0xcf0f  [x15372]
    if (c.sf) goto L21f1f;
L21ee2:
    if (c.tracing) c.traceAt(0x21ee2);
    // 1501:ced2  mov al, byte ptr cs:[si + 0xf]  [x3904]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0xfu)));
    // 1501:ced7  ror al, cl  [x3904]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:ced9  mov ch, al  [x3904]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:cedb  and ch, byte ptr [bx - 0x368b]  [x3904]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cedf  and al, byte ptr [bx - 0x3683]  [x3904]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cee3  or al, ah  [x3904]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:cee5  or byte ptr es:[di], al  [x3904]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cee8  or byte ptr es:[di + 0x6d60], al  [x3904]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), false));
    // 1501:ceed  inc di  [x3904]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:ceee  sub dx, 8  [x3904]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, true));
    // 1501:cef1  js 0xcf11  [x3904]
    if (c.sf) goto L21f21;
L21f03:
    if (c.tracing) c.traceAt(0x21f03);
    // 1501:cef3  mov al, byte ptr cs:[si + 0x10]  [x3904]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:cef8  ror al, cl  [x3904]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:cefa  mov ah, al  [x3904]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:cefc  and ah, byte ptr [bx - 0x368b]  [x3904]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc975u))), false));
    // 1501:cf00  and al, byte ptr [bx - 0x3683]  [x3904]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc97du))), false));
    // 1501:cf04  or al, ch  [x3904]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:cf06  or byte ptr es:[di], al  [x3904]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:cf09  or byte ptr es:[di + 0x6d60], al  [x3904]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.a.l), true));
    // 1501:cf0e  inc di  [x3904]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
L21f1f:
    if (c.tracing) c.traceAt(0x21f1f);
    // 1501:cf0f  mov ch, ah  [x29524]
    c.c.h = (uint8_t)(c.a.h);
L21f21:
    if (c.tracing) c.traceAt(0x21f21);
    // 1501:cf11  or byte ptr es:[di], ch  [x34160]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.c.h), false));
    // 1501:cf14  or byte ptr es:[di + 0x6d60], ch  [x34160]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x6d60u), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x + 0x6d60u))) | (c.c.h), false));
    // 1501:cf19  add si, 0x32fe  [x34160]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x32feu, false));
    // 1501:cf1d  pop di  [x34160]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:cf1e  inc bp  [x34160]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:cf1f  cmp bp, 4  [x34160]
    c.sub<16>(c.bp.x, 0x4u, true);
    // 1501:cf22  jae 0xcf27  [x34160]
    if (!c.cf) goto L21f37;
L21f34:
    if (c.tracing) c.traceAt(0x21f34);
    // 1501:cf24  jmp 0xcdc3  [x25620]
    goto L21dd3;
L21f37:
    if (c.tracing) c.traceAt(0x21f37);
    // 1501:cf27  pop bx  [x8540]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:cf28  pop ax  [x8540]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:cf29  inc ax  [x8540]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:cf2a  add word ptr [0xc98d], ax  [x8540]
    c.w16(c.dsb + (uint16_t)(0xffffc98du), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffc98du)), c.a.x, true));
    // 1501:cf2e  ret   [x8540]
    c.ip = c.pop16(); return;
L21f3f:
    if (c.tracing) c.traceAt(0x21f3f);
    // 1501:cf2f  mov dx, 0x3c4  [x6159]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:cf32  mov ax, 0xf02  [x6159]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:cf35  out dx, ax  [x6159]
    c.ip = 0xcf36u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cf36  xor di, di  [x6159]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:cf38  mov cx, 0x28  [x6159]
    c.c.x = (uint16_t)(0x28u);
    // 1501:cf3b  xor ax, ax  [x6159]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L21f4d:
    if (c.tracing) c.traceAt(0x21f4d);
    // 1501:cf3d  rep stosw word ptr es:[di], ax  [x252519]
    c.stos<16, false>(1);
L21f4f:
    if (c.tracing) c.traceAt(0x21f4f);
    // 1501:cf3f  mov di, 0x6d60  [x6159]
    c.di.x = (uint16_t)(0x6d60u);
    // 1501:cf42  mov cx, 0x28  [x6159]
    c.c.x = (uint16_t)(0x28u);
L21f55:
    if (c.tracing) c.traceAt(0x21f55);
    // 1501:cf45  rep stosw word ptr es:[di], ax  [x252519]
    c.stos<16, false>(1);
L21f57:
    if (c.tracing) c.traceAt(0x21f57);
    // 1501:cf47  cmp word ptr [0xc86f], 0  [x6159]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffc86fu)), 0x0u, true);
    // 1501:cf4c  je 0xcf53  [x6159]
    if (c.zf) goto L21f63;
L21f5e:
    if (c.tracing) c.traceAt(0x21f5e);
    // 1501:cf4e  dec word ptr [0xc86f]  [x1341]
    c.w16(c.dsb + (uint16_t)(0xffffc86fu), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xffffc86fu)), true));
    // 1501:cf52  ret   [x1341]
    c.ip = c.pop16(); return;
L21f63:
    if (c.tracing) c.traceAt(0x21f63);
    // 1501:cf53  mov bx, word ptr [0xc993]  [x4818]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc993u)));
    // 1501:cf57  cmp byte ptr [bx - 0x3610], 1  [x4818]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)), 0x1u, true);
    // 1501:cf5c  jne 0xcf64  [x4818]
    if (!c.zf) goto L21f74;
L21f6e:
    if (c.tracing) c.traceAt(0x21f6e);
    // 1501:cf5e  mov byte ptr [0xc86c], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xffffc86cu), 0x1u);
    // 1501:cf63  ret   [x1]
    c.ip = c.pop16(); return;
L21f74:
    if (c.tracing) c.traceAt(0x21f74);
    // 1501:cf64  cmp byte ptr [bx - 0x3610], 2  [x4817]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)), 0x2u, true);
    // 1501:cf69  jne 0xcf9c  [x4817]
    if (!c.zf) goto L21fac;
L21f7b:
    if (c.tracing) c.traceAt(0x21f7b);
    // 1501:cf6b  mov word ptr [0xc991], 0x172  [x7]
    c.w16(c.dsb + (uint16_t)(0xffffc991u), 0x172u);
    // 1501:cf71  mov byte ptr [0xc864], 1  [x7]
    c.w8(c.dsb + (uint16_t)(0xffffc864u), 0x1u);
    // 1501:cf76  add word ptr [0xc993], 2  [x7]
    c.w16(c.dsb + (uint16_t)(0xffffc993u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffffc993u)), 0x2u, false));
    // 1501:cf7b  cmp byte ptr [bx - 0x360f], 0  [x7]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f1u)), 0x0u, true);
    // 1501:cf80  jne 0xcf8f  [x7]
    if (!c.zf) goto L21f9f;
L21f92:
    if (c.tracing) c.traceAt(0x21f92);
    // 1501:cf82  mov word ptr [0xc862], 0xc830  [x3]
    c.w16(c.dsb + (uint16_t)(0xffffc862u), 0xc830u);
    // 1501:cf88  mov word ptr [0xc860], 0xc800  [x3]
    c.w16(c.dsb + (uint16_t)(0xffffc860u), 0xc800u);
    // 1501:cf8e  ret   [x3]
    c.ip = c.pop16(); return;
L21f9f:
    if (c.tracing) c.traceAt(0x21f9f);
    // 1501:cf8f  mov word ptr [0xc862], 0xc800  [x4]
    c.w16(c.dsb + (uint16_t)(0xffffc862u), 0xc800u);
    // 1501:cf95  mov word ptr [0xc860], 0xc830  [x4]
    c.w16(c.dsb + (uint16_t)(0xffffc860u), 0xc830u);
    // 1501:cf9b  ret   [x4]
    c.ip = c.pop16(); return;
L21fac:
    if (c.tracing) c.traceAt(0x21fac);
    // 1501:cf9c  cmp byte ptr [bx - 0x3610], 0xff  [x4810]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)), 0xffu, true);
    // 1501:cfa1  je 0xcfd1  [x4810]
    if (c.zf) goto L21fe1;
L21fb3:
    if (c.tracing) c.traceAt(0x21fb3);
    // 1501:cfa3  call 0xd000  [x3712]
    c.push16(0xcfa6u); code_31(c, 0x22010u); if (c.ip != 0xcfa6u) c.badReturn(0x21fb3);
L21fb6:
    if (c.tracing) c.traceAt(0x21fb6);
    // 1501:cfa6  mov al, byte ptr [bx - 0x3610]  [x43360]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)));
    // 1501:cfaa  cmp al, 0  [x43360]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:cfac  je 0xcfb4  [x43360]
    if (c.zf) goto L21fc4;
L21fbe:
    if (c.tracing) c.traceAt(0x21fbe);
    // 1501:cfae  call 0xccb1  [x39648]
    c.push16(0xcfb1u); code_31(c, 0x21cc1u); if (c.ip != 0xcfb1u) c.badReturn(0x21fbe);
L21fc1:
    if (c.tracing) c.traceAt(0x21fc1);
    // 1501:cfb1  inc bx  [x39648]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:cfb2  jmp 0xcfa6  [x39648]
    goto L21fb6;
L21fc4:
    if (c.tracing) c.traceAt(0x21fc4);
    // 1501:cfb4  inc word ptr [0xc98f]  [x3712]
    c.w16(c.dsb + (uint16_t)(0xffffc98fu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffc98fu)), false));
    // 1501:cfb8  cmp word ptr [0xc98f], 0x20  [x3712]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffc98fu)), 0x20u, true);
    // 1501:cfbd  jb 0xcfd0  [x3712]
    if (c.cf) goto L21fe0;
L21fcf:
    if (c.tracing) c.traceAt(0x21fcf);
    // 1501:cfbf  mov word ptr [0xc86f], 0xa  [x116]
    c.w16(c.dsb + (uint16_t)(0xffffc86fu), 0xau);
    // 1501:cfc5  mov word ptr [0xc98f], 0  [x116]
    c.w16(c.dsb + (uint16_t)(0xffffc98fu), 0x0u);
    // 1501:cfcb  inc bx  [x116]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:cfcc  mov word ptr [0xc993], bx  [x116]
    c.w16(c.dsb + (uint16_t)(0xffffc993u), c.b.x);
L21fe0:
    if (c.tracing) c.traceAt(0x21fe0);
    // 1501:cfd0  ret   [x3712]
    c.ip = c.pop16(); return;
L21fe1:
    if (c.tracing) c.traceAt(0x21fe1);
    // 1501:cfd1  inc bx  [x1098]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:cfd2  call 0xd02b  [x1098]
    c.push16(0xcfd5u); code_31(c, 0x2203bu); if (c.ip != 0xcfd5u) c.badReturn(0x21fe2);
L21fe5:
    if (c.tracing) c.traceAt(0x21fe5);
    // 1501:cfd5  mov al, byte ptr [bx - 0x3610]  [x10797]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)));
    // 1501:cfd9  cmp al, 0  [x10797]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:cfdb  je 0xcfe3  [x10797]
    if (c.zf) goto L21ff3;
L21fed:
    if (c.tracing) c.traceAt(0x21fed);
    // 1501:cfdd  call 0xcd79  [x9699]
    c.push16(0xcfe0u); code_31(c, 0x21d89u); if (c.ip != 0xcfe0u) c.badReturn(0x21fed);
L21ff0:
    if (c.tracing) c.traceAt(0x21ff0);
    // 1501:cfe0  inc bx  [x9699]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:cfe1  jmp 0xcfd5  [x9699]
    goto L21fe5;
L21ff3:
    if (c.tracing) c.traceAt(0x21ff3);
    // 1501:cfe3  inc word ptr [0xc98f]  [x1098]
    c.w16(c.dsb + (uint16_t)(0xffffc98fu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffc98fu)), false));
    // 1501:cfe7  cmp word ptr [0xc98f], 0x3d  [x1098]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffc98fu)), 0x3du, true);
    // 1501:cfec  jb 0xcfff  [x1098]
    if (c.cf) goto L2200f;
L21ffe:
    if (c.tracing) c.traceAt(0x21ffe);
    // 1501:cfee  mov word ptr [0xc86f], 0xa  [x18]
    c.w16(c.dsb + (uint16_t)(0xffffc86fu), 0xau);
    // 1501:cff4  mov word ptr [0xc98f], 0  [x18]
    c.w16(c.dsb + (uint16_t)(0xffffc98fu), 0x0u);
    // 1501:cffa  inc bx  [x18]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:cffb  mov word ptr [0xc993], bx  [x18]
    c.w16(c.dsb + (uint16_t)(0xffffc993u), c.b.x);
L2200f:
    if (c.tracing) c.traceAt(0x2200f);
    // 1501:cfff  ret   [x1098]
    c.ip = c.pop16(); return;
L22010:
    if (c.tracing) c.traceAt(0x22010);
    // 1501:d000  push bx  [x3712]
    c.push16(c.b.x);
    // 1501:d001  xor dx, dx  [x3712]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
L22013:
    if (c.tracing) c.traceAt(0x22013);
    // 1501:d003  mov al, byte ptr [bx - 0x3610]  [x43360]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)));
    // 1501:d007  cmp al, 0  [x43360]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:d009  je 0xd01f  [x43360]
    if (c.zf) goto L2202f;
L2201b:
    if (c.tracing) c.traceAt(0x2201b);
    // 1501:d00b  cmp al, 1  [x39648]
    c.sub<8>(c.a.l, 0x1u, true);
    // 1501:d00d  je 0xd01f  [x39648]
    if (c.zf) goto L2202f;
L2201f:
    if (c.tracing) c.traceAt(0x2201f);
    // 1501:d00f  xor ah, ah  [x39648]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:d011  sub al, 0x20  [x39648]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x20u, false));
    // 1501:d013  mov si, ax  [x39648]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d015  add dl, byte ptr [si - 0x366b]  [x39648]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc995u)), true));
    // 1501:d019  adc dh, 0  [x39648]
    c.dx_.h = (uint8_t)(c.add<8>(c.dx_.h, 0x0u, true, c.cf));
    // 1501:d01c  inc bx  [x39648]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:d01d  jmp 0xd003  [x39648]
    goto L22013;
L2202f:
    if (c.tracing) c.traceAt(0x2202f);
    // 1501:d01f  pop bx  [x3712]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d020  mov ax, 0x280  [x3712]
    c.a.x = (uint16_t)(0x280u);
    // 1501:d023  sub ax, dx  [x3712]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:d025  shr ax, 1  [x3712]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:d027  mov word ptr [0xc98d], ax  [x3712]
    c.w16(c.dsb + (uint16_t)(0xc98du), c.a.x);
    // 1501:d02a  ret   [x3712]
    c.ip = c.pop16(); return;
L2203b:
    if (c.tracing) c.traceAt(0x2203b);
    // 1501:d02b  push bx  [x1098]
    c.push16(c.b.x);
    // 1501:d02c  xor dx, dx  [x1098]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
L2203e:
    if (c.tracing) c.traceAt(0x2203e);
    // 1501:d02e  mov al, byte ptr [bx - 0x3610]  [x10797]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc9f0u)));
    // 1501:d032  cmp al, 0  [x10797]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:d034  je 0xd049  [x10797]
    if (c.zf) goto L22059;
L22046:
    if (c.tracing) c.traceAt(0x22046);
    // 1501:d036  cmp al, 1  [x9699]
    c.sub<8>(c.a.l, 0x1u, true);
    // 1501:d038  je 0xd049  [x9699]
    if (c.zf) goto L22059;
L2204a:
    if (c.tracing) c.traceAt(0x2204a);
    // 1501:d03a  xor ah, ah  [x9699]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:d03c  sub al, 0x20  [x9699]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x20u, false));
    // 1501:d03e  add ax, ax  [x9699]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, false));
    // 1501:d040  mov si, ax  [x9699]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d042  add dx, word ptr [si - 0x378d]  [x9699]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffc873u)), true));
    // 1501:d046  inc bx  [x9699]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:d047  jmp 0xd02e  [x9699]
    goto L2203e;
L22059:
    if (c.tracing) c.traceAt(0x22059);
    // 1501:d049  pop bx  [x1098]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d04a  mov ax, 0x280  [x1098]
    c.a.x = (uint16_t)(0x280u);
    // 1501:d04d  sub ax, dx  [x1098]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:d04f  shr ax, 1  [x1098]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:d051  mov word ptr [0xc98d], ax  [x1098]
    c.w16(c.dsb + (uint16_t)(0xc98du), c.a.x);
    // 1501:d054  ret   [x1098]
    c.ip = c.pop16(); return;
L22065:
    if (c.tracing) c.traceAt(0x22065);
    // 1501:d055  cli   [x6159]
    c.m.cli();
    // 1501:d056  mov al, 0x34  [x6159]
    c.a.l = (uint8_t)(0x34u);
    // 1501:d058  out 0x43, al  [x6159]
    c.ip = 0xd05au; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:d05a  mov ax, 0x97  [x6159]
    c.a.x = (uint16_t)(0x97u);
    // 1501:d05d  mov cx, 4  [x6159]
    c.c.x = (uint16_t)(0x4u);
    // 1501:d060  mul word ptr [0xc991]  [x6159]
    c.mul16(c.r16(c.dsb + (uint16_t)(0xffffc991u)));
    // 1501:d064  div cx  [x6159]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0xd064u); }   // #DE: int 0, then again
    // 1501:d066  out 0x40, al  [x6159]
    c.ip = 0xd068u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d068  mov al, ah  [x6159]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:d06a  out 0x40, al  [x6159]
    c.ip = 0xd06cu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d06c  sti   [x6159]
    c.ip = 0xd06du; c.d32 = false; c.m.sti();
L2207d:
    if (c.tracing) c.traceAt(0x2207d);
    // 1501:d06d  cmp byte ptr [0xc864], 0  [x6159]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffc864u)), 0x0u, true);
L22082:
    if (c.tracing) c.traceAt(0x22082);
    // 1501:d072  je 0xd08a  [x6159]
    if (c.zf) goto L2209a;
L22084:
    if (c.tracing) c.traceAt(0x22084);
    // 1501:d074  dec word ptr [0xc991]  [x2310]
    c.w16(c.dsb + (uint16_t)(0xffffc991u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xffffc991u)), false));
    // 1501:d078  cmp word ptr [0xc991], 0x28  [x2310]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffc991u)), 0x28u, true);
    // 1501:d07d  jg 0xd08a  [x2310]
    if ((!c.zf && c.sf == c.of)) goto L2209a;
L2208f:
    if (c.tracing) c.traceAt(0x2208f);
    // 1501:d07f  mov ax, word ptr [0xc860]  [x7]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc860u)));
    // 1501:d082  mov word ptr [0xc862], ax  [x7]
    c.w16(c.dsb + (uint16_t)(0xc862u), c.a.x);
    // 1501:d085  mov byte ptr [0xc864], 0  [x7]
    c.w8(c.dsb + (uint16_t)(0xffffc864u), 0x0u);
L2209a:
    if (c.tracing) c.traceAt(0x2209a);
    // 1501:d08a  ret   [x6159]
    c.ip = c.pop16(); return;
L2209b:
    if (c.tracing) c.traceAt(0x2209b);
    // 1501:d08b  cli   [x1]
    c.m.cli();
    // 1501:d08c  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:d08e  out 0x43, al  [x1]
    c.ip = 0xd090u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:d090  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 1501:d093  out 0x40, al  [x1]
    c.ip = 0xd095u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d095  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:d097  out 0x40, al  [x1]
    c.ip = 0xd099u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d099  push es  [x1]
    c.push16(c.es);
    // 1501:d09a  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:d09c  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:d09e  mov ax, word ptr es:[0x20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 1501:d0a2  mov word ptr [0xc866], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xc866u), c.a.x);
    // 1501:d0a5  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 1501:d0a9  mov word ptr [0xc868], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xc868u), c.a.x);
    // 1501:d0ac  mov ax, 0xd0df  [x1]
    c.a.x = (uint16_t)(0xd0dfu);
    // 1501:d0af  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:d0b3  mov word ptr es:[0x22], cs  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.cs);
    // 1501:d0b8  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:d0b9  sti   [x1]
    c.ip = 0xd0bau; c.d32 = false; c.m.sti();
L220ca:
    if (c.tracing) c.traceAt(0x220ca);
    // 1501:d0ba  ret   [x1]
    c.ip = c.pop16(); return;
L220cb:
    if (c.tracing) c.traceAt(0x220cb);
    // 1501:d0bb  cli   [x1]
    c.m.cli();
    // 1501:d0bc  push es  [x1]
    c.push16(c.es);
    // 1501:d0bd  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:d0bf  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:d0c1  mov ax, word ptr [0xc866]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc866u)));
    // 1501:d0c4  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:d0c8  mov ax, word ptr [0xc868]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc868u)));
    // 1501:d0cb  mov word ptr es:[0x22], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.a.x);
    // 1501:d0cf  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:d0d0  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:d0d2  out 0x43, al  [x1]
    c.ip = 0xd0d4u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:d0d4  mov ax, 0x4a9  [x1]
    c.a.x = (uint16_t)(0x4a9u);
    // 1501:d0d7  out 0x40, al  [x1]
    c.ip = 0xd0d9u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d0d9  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:d0db  out 0x40, al  [x1]
    c.ip = 0xd0ddu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d0dd  sti   [x1]
    c.ip = 0xd0deu; c.d32 = false; c.m.sti();
L220ee:
    if (c.tracing) c.traceAt(0x220ee);
    // 1501:d0de  ret   [x1]
    c.ip = c.pop16(); return;
L220ef:
    if (c.tracing) c.traceAt(0x220ef);
    // 1501:d0df  pushaw   [x6159]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:d0e0  mov al, 0x20  [x6159]
    c.a.l = (uint8_t)(0x20u);
    // 1501:d0e2  out 0x20, al  [x6159]
    c.ip = 0xd0e4u; c.d32 = false; c.out8(0x20, c.a.l);
    // 1501:d0e4  mov al, 0x34  [x6159]
    c.a.l = (uint8_t)(0x34u);
    // 1501:d0e6  out 0x43, al  [x6159]
    c.ip = 0xd0e8u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:d0e8  mov ax, 0  [x6159]
    c.a.x = (uint16_t)(0x0u);
    // 1501:d0eb  out 0x40, al  [x6159]
    c.ip = 0xd0edu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d0ed  mov al, ah  [x6159]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:d0ef  out 0x40, al  [x6159]
    c.ip = 0xd0f1u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:d0f1  push ds  [x6159]
    c.push16(c.ds);
    // 1501:d0f2  mov ax, word ptr cs:[0xcc00]  [x6159]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xcc00u)));
    // 1501:d0f6  mov ds, ax  [x6159]
    c.loadDs(c.a.x);
    // 1501:d0f8  cmp byte ptr [0xc865], 0  [x6159]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffc865u)), 0x0u, true);
    // 1501:d0fd  je 0xd10f  [x6159]
    if (c.zf) goto L2211f;
L2210f:
    if (c.tracing) c.traceAt(0x2210f);
    // 1501:d0ff  mov dx, 0x3c8  [x2304]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:d102  xor al, al  [x2304]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:d104  out dx, al  [x2304]
    c.ip = 0xd105u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:d105  inc dx  [x2304]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:d106  mov si, word ptr [0xc860]  [x2304]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffffc860u)));
    // 1501:d10a  mov cx, 0x30  [x2304]
    c.c.x = (uint16_t)(0x30u);
L2211d:
    if (c.tracing) c.traceAt(0x2211d);
    // 1501:d10d  rep outsb dx, byte ptr [si]  [x112896]
    c.ip = 0xd10fu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L2211f:
    if (c.tracing) c.traceAt(0x2211f);
    // 1501:d10f  mov al, byte ptr [0xc864]  [x6159]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xc864u)));
    // 1501:d112  mov byte ptr [0xc865], al  [x6159]
    c.w8(c.dsb + (uint16_t)(0xc865u), c.a.l);
    // 1501:d115  pop ds  [x6159]
    c.loadDs((uint16_t)c.pop16());
    // 1501:d116  popaw   [x6159]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:d117  iret   [x6159]
    c.iret(); return;
L22128:
    if (c.tracing) c.traceAt(0x22128);
    // 1501:d118  mov ax, 0x42cc  [x6160]
    c.a.x = (uint16_t)(0x42ccu);
    // 1501:d11b  add ax, word ptr [0xc871]  [x6160]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffffc871u)), false));
    // 1501:d11f  xor dx, dx  [x6160]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:d121  mov cx, 0x4a9  [x6160]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:d124  div cx  [x6160]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0xd124u); }   // #DE: int 0, then again
    // 1501:d126  mov word ptr [0xc871], dx  [x6160]
    c.w16(c.dsb + (uint16_t)(0xffffc871u), c.dx_.x);
    // 1501:d12a  mov cx, ax  [x6160]
    c.c.x = (uint16_t)(c.a.x);
L2213c:
    if (c.tracing) c.traceAt(0x2213c);
    // 1501:d12c  pushf   [x88295]
    c.push16(c.flags());
    // 1501:d12d  lcall [0xc866]  [x88295]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0xffffc866u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0xffffc866u) + 2); c.push16(c.cs); c.push16(0xd131u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L22141:
    if (c.tracing) c.traceAt(0x22141);
    // 1501:d131  loop 0xd12c  [x88295]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2213c;
L22143:
    if (c.tracing) c.traceAt(0x22143);
    // 1501:d133  ret   [x6160]
    c.ip = c.pop16(); return;
L22144:
    if (c.tracing) c.traceAt(0x22144);
    // 1501:d134  call 0xd0bb  [x1]
    c.push16(0xd137u); code_31(c, 0x220cbu); if (c.ip != 0xd137u) c.badReturn(0x22144);
L22147:
    if (c.tracing) c.traceAt(0x22147);
    // 1501:d137  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_31(31, {0x15010, 0x21c12, 0x21c1d, 0x21c24, 0x21c2a, 0x21c33, 0x21c36, 0x21c3b, 0x21c3c, 0x21c40, 0x21c43, 0x21c46, 0x21c57, 0x21c61, 0x21c64, 0x21c65, 0x21c69, 0x21c6a, 0x21c6e, 0x21c71, 0x21c7f, 0x21c81, 0x21c84, 0x21c85, 0x21c89, 0x21c90, 0x21c93, 0x21c9d, 0x21ca0, 0x21caf, 0x21cb5, 0x21cbc, 0x21cbf, 0x21cc1, 0x21ce7, 0x21d79, 0x21d7c, 0x21d89, 0x21d8d, 0x21d93, 0x21dd3, 0x21e0d, 0x21e10, 0x21e31, 0x21e34, 0x21e55, 0x21e58, 0x21e79, 0x21e7c, 0x21e9d, 0x21ea0, 0x21ec1, 0x21ee2, 0x21f03, 0x21f1f, 0x21f21, 0x21f34, 0x21f37, 0x21f3f, 0x21f4d, 0x21f4f, 0x21f55, 0x21f57, 0x21f5e, 0x21f63, 0x21f6e, 0x21f74, 0x21f7b, 0x21f92, 0x21f9f, 0x21fac, 0x21fb3, 0x21fb6, 0x21fbe, 0x21fc1, 0x21fc4, 0x21fcf, 0x21fe0, 0x21fe1, 0x21fe5, 0x21fed, 0x21ff0, 0x21ff3, 0x21ffe, 0x2200f, 0x22010, 0x22013, 0x2201b, 0x2201f, 0x2202f, 0x2203b, 0x2203e, 0x22046, 0x2204a, 0x22059, 0x22065, 0x2207d, 0x22082, 0x22084, 0x2208f, 0x2209a, 0x2209b, 0x220ca, 0x220cb, 0x220ee, 0x220ef, 0x2210f, 0x2211d, 0x2211f, 0x22128, 0x2213c, 0x22141, 0x22143, 0x22144, 0x22147}, code_31);

}  // namespace show
