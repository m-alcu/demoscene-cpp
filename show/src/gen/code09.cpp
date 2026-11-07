// Part 8 (PIXEL.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_9(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x21c04: goto L21c04;
    case 0x21c20: goto L21c20;
    case 0x21c30: goto L21c30;
    case 0x21c32: goto L21c32;
    case 0x21c38: goto L21c38;
    case 0x21c41: goto L21c41;
    case 0x21c52: goto L21c52;
    case 0x21c54: goto L21c54;
    case 0x21c57: goto L21c57;
    case 0x21c5a: goto L21c5a;
    case 0x21c5d: goto L21c5d;
    case 0x21c70: goto L21c70;
    case 0x21c78: goto L21c78;
    case 0x21cb8: goto L21cb8;
    case 0x21cca: goto L21cca;
    case 0x21ccd: goto L21ccd;
    case 0x21cce: goto L21cce;
    case 0x21cd2: goto L21cd2;
    case 0x21cd3: goto L21cd3;
    case 0x21cd7: goto L21cd7;
    case 0x21ce1: goto L21ce1;
    case 0x21cf2: goto L21cf2;
    case 0x21d01: goto L21d01;
    case 0x21d03: goto L21d03;
    case 0x21d0a: goto L21d0a;
    case 0x21d40: goto L21d40;
    case 0x21d4e: goto L21d4e;
    case 0x21d58: goto L21d58;
    case 0x21d66: goto L21d66;
    case 0x21d76: goto L21d76;
    case 0x21d80: goto L21d80;
    case 0x21d8c: goto L21d8c;
    case 0x21d8f: goto L21d8f;
    case 0x21da0: goto L21da0;
    case 0x21da3: goto L21da3;
    case 0x21da5: goto L21da5;
    case 0x21da8: goto L21da8;
    case 0x21db9: goto L21db9;
    case 0x21dbc: goto L21dbc;
    case 0x21dd3: goto L21dd3;
    case 0x21dd6: goto L21dd6;
    case 0x21de9: goto L21de9;
    case 0x21df2: goto L21df2;
    case 0x21e06: goto L21e06;
    case 0x21e0f: goto L21e0f;
    case 0x21e12: goto L21e12;
    case 0x21e15: goto L21e15;
    case 0x21e2a: goto L21e2a;
    case 0x21e2d: goto L21e2d;
    case 0x21e2f: goto L21e2f;
    case 0x21e32: goto L21e32;
    case 0x21e39: goto L21e39;
    case 0x21e43: goto L21e43;
    case 0x21e46: goto L21e46;
    case 0x21e50: goto L21e50;
    case 0x21e5a: goto L21e5a;
    case 0x21e5d: goto L21e5d;
    case 0x21e6a: goto L21e6a;
    case 0x21e74: goto L21e74;
    case 0x21e7c: goto L21e7c;
    case 0x21e86: goto L21e86;
    case 0x21e8f: goto L21e8f;
    case 0x21ea2: goto L21ea2;
    case 0x21eab: goto L21eab;
    case 0x21ebe: goto L21ebe;
    case 0x21ec7: goto L21ec7;
    case 0x21eda: goto L21eda;
    case 0x21ee3: goto L21ee3;
    case 0x21f05: goto L21f05;
    case 0x21f1f: goto L21f1f;
    case 0x21f37: goto L21f37;
    case 0x21f3f: goto L21f3f;
    case 0x21f4e: goto L21f4e;
    case 0x21f58: goto L21f58;
    case 0x21f5d: goto L21f5d;
    case 0x21f7c: goto L21f7c;
    case 0x21f85: goto L21f85;
    case 0x21f90: goto L21f90;
    case 0x21fc3: goto L21fc3;
    case 0x21fc6: goto L21fc6;
    case 0x21fc8: goto L21fc8;
    case 0x220b8: goto L220b8;
    case 0x220bb: goto L220bb;
    case 0x220bc: goto L220bc;
    case 0x220c0: goto L220c0;
    case 0x220fd: goto L220fd;
    case 0x220fe: goto L220fe;
    case 0x22100: goto L22100;
    case 0x2213c: goto L2213c;
    case 0x22149: goto L22149;
    case 0x2214a: goto L2214a;
    case 0x22159: goto L22159;
    case 0x2218d: goto L2218d;
    case 0x221ab: goto L221ab;
    case 0x221ad: goto L221ad;
    case 0x221c6: goto L221c6;
    case 0x221cf: goto L221cf;
    case 0x221d1: goto L221d1;
    case 0x221d3: goto L221d3;
    case 0x221dc: goto L221dc;
    case 0x221df: goto L221df;
    case 0x221e3: goto L221e3;
    case 0x221f9: goto L221f9;
    case 0x2221f: goto L2221f;
    case 0x2222d: goto L2222d;
    case 0x2222e: goto L2222e;
    case 0x22234: goto L22234;
    case 0x22239: goto L22239;
    case 0x2223b: goto L2223b;
    case 0x2223c: goto L2223c;
    case 0x22252: goto L22252;
    case 0x22278: goto L22278;
    case 0x22286: goto L22286;
    case 0x22287: goto L22287;
    case 0x2228d: goto L2228d;
    case 0x22292: goto L22292;
    case 0x22294: goto L22294;
    case 0x22295: goto L22295;
    case 0x222c9: goto L222c9;
    case 0x222dc: goto L222dc;
    case 0x222e2: goto L222e2;
    case 0x222e3: goto L222e3;
    case 0x222e5: goto L222e5;
    case 0x222e6: goto L222e6;
    case 0x2231a: goto L2231a;
    case 0x2232d: goto L2232d;
    case 0x22333: goto L22333;
    case 0x22334: goto L22334;
    case 0x22336: goto L22336;
    case 0x22337: goto L22337;
    case 0x22346: goto L22346;
    case 0x2237a: goto L2237a;
    case 0x22398: goto L22398;
    case 0x2239a: goto L2239a;
    case 0x223b3: goto L223b3;
    case 0x223bc: goto L223bc;
    case 0x223be: goto L223be;
    case 0x223c0: goto L223c0;
    case 0x223c9: goto L223c9;
    case 0x223cb: goto L223cb;
    case 0x223ce: goto L223ce;
    case 0x223de: goto L223de;
    case 0x223ec: goto L223ec;
    case 0x22400: goto L22400;
    case 0x22403: goto L22403;
    case 0x22405: goto L22405;
    case 0x22406: goto L22406;
    case 0x22416: goto L22416;
    case 0x22424: goto L22424;
    case 0x22438: goto L22438;
    case 0x2243b: goto L2243b;
    case 0x2243d: goto L2243d;
    case 0x2243e: goto L2243e;
    case 0x22454: goto L22454;
    case 0x22468: goto L22468;
    case 0x2246b: goto L2246b;
    case 0x2246d: goto L2246d;
    case 0x2246e: goto L2246e;
    case 0x22484: goto L22484;
    case 0x22498: goto L22498;
    case 0x2249b: goto L2249b;
    case 0x2249d: goto L2249d;
    case 0x2249e: goto L2249e;
    case 0x224ad: goto L224ad;
    case 0x224e1: goto L224e1;
    case 0x224ff: goto L224ff;
    case 0x22501: goto L22501;
    case 0x2251a: goto L2251a;
    case 0x22523: goto L22523;
    case 0x22525: goto L22525;
    case 0x22527: goto L22527;
    case 0x22530: goto L22530;
    case 0x22532: goto L22532;
    case 0x22535: goto L22535;
    case 0x22545: goto L22545;
    case 0x22553: goto L22553;
    case 0x22567: goto L22567;
    case 0x2256a: goto L2256a;
    case 0x2256c: goto L2256c;
    case 0x2256d: goto L2256d;
    case 0x2257d: goto L2257d;
    case 0x2258b: goto L2258b;
    case 0x2259f: goto L2259f;
    case 0x225a2: goto L225a2;
    case 0x225a4: goto L225a4;
    case 0x225a5: goto L225a5;
    case 0x225bb: goto L225bb;
    case 0x225cf: goto L225cf;
    case 0x225d2: goto L225d2;
    case 0x225d4: goto L225d4;
    case 0x225d5: goto L225d5;
    case 0x225eb: goto L225eb;
    case 0x225ff: goto L225ff;
    case 0x22602: goto L22602;
    case 0x22604: goto L22604;
    case 0x22605: goto L22605;
    case 0x22625: goto L22625;
    case 0x2262e: goto L2262e;
    case 0x22637: goto L22637;
    case 0x22645: goto L22645;
    case 0x2264a: goto L2264a;
    case 0x2265f: goto L2265f;
    case 0x2266b: goto L2266b;
    case 0x2267b: goto L2267b;
    case 0x22692: goto L22692;
    case 0x226ab: goto L226ab;
    case 0x226b0: goto L226b0;
    case 0x226ba: goto L226ba;
    case 0x226c3: goto L226c3;
    case 0x226e6: goto L226e6;
    case 0x226ec: goto L226ec;
    case 0x2272a: goto L2272a;
    case 0x2272c: goto L2272c;
    case 0x22734: goto L22734;
    case 0x22735: goto L22735;
    case 0x22740: goto L22740;
    case 0x2275e: goto L2275e;
    case 0x22784: goto L22784;
    case 0x2279e: goto L2279e;
    case 0x227a3: goto L227a3;
    case 0x227c4: goto L227c4;
    case 0x227d3: goto L227d3;
    case 0x227da: goto L227da;
    case 0x227ec: goto L227ec;
    case 0x227ed: goto L227ed;
    case 0x227f6: goto L227f6;
    case 0x2284f: goto L2284f;
    case 0x22850: goto L22850;
    case 0x2285a: goto L2285a;
    case 0x22892: goto L22892;
    case 0x22894: goto L22894;
    case 0x228aa: goto L228aa;
    case 0x228ab: goto L228ab;
    case 0x228b4: goto L228b4;
    case 0x228c4: goto L228c4;
    case 0x228cd: goto L228cd;
    case 0x228dd: goto L228dd;
    case 0x228e6: goto L228e6;
    case 0x228f6: goto L228f6;
    case 0x228ff: goto L228ff;
    case 0x2290f: goto L2290f;
    case 0x22910: goto L22910;
    case 0x22912: goto L22912;
    case 0x22937: goto L22937;
    case 0x22946: goto L22946;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xffffcbf4  [x1]
    goto L21c04;
L21c04:
    if (c.tracing) c.traceAt(0x21c04);
    // 1501:cbf4  mov word ptr cs:[0xcbf0], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xffffcbf0u), c.c.x);
    // 1501:cbf9  mov word ptr cs:[0xcbf2], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xffffcbf2u), c.dx_.x);
    // 1501:cbfe  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:cc00  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:cc03  mov ax, 0x1413  [x1]
    c.a.x = (uint16_t)(0x1413u);
    // 1501:cc06  out dx, ax  [x1]
    c.ip = 0xcc07u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cc07  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:cc0a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:cc0c  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:cc0e  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L21c20:
    if (c.tracing) c.traceAt(0x21c20);
    // 1501:cc10  mov word ptr [di + 0x747b], ax  [x400]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x747bu), c.a.x);
    // 1501:cc14  add ax, 0x28  [x400]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:cc17  add di, 2  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:cc1a  cmp di, 0x320  [x400]
    c.sub<16>(c.di.x, 0x320u, true);
    // 1501:cc1e  jne 0xcc10  [x400]
    if (!c.zf) goto L21c20;
L21c30:
    if (c.tracing) c.traceAt(0x21c30);
    // 1501:cc20  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L21c32:
    if (c.tracing) c.traceAt(0x21c32);
    // 1501:cc22  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:cc24  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:cc26  int 0x10  [x16]
    c.ip = 0xcc28u; c.d32 = false; c.intr(0x10, 0xcc28u);
L21c38:
    if (c.tracing) c.traceAt(0x21c38);
    // 1501:cc28  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:cc2a  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:cc2c  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:cc2f  jne 0xcc22  [x16]
    if (!c.zf) goto L21c32;
L21c41:
    if (c.tracing) c.traceAt(0x21c41);
    // 1501:cc31  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:cc34  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:cc36  out dx, al  [x1]
    c.ip = 0xcc37u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:cc37  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:cc38  lea si, [0x644c]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x644cu));
    // 1501:cc3f  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L21c52:
    if (c.tracing) c.traceAt(0x21c52);
    // 1501:cc42  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0xcc44u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L21c54:
    if (c.tracing) c.traceAt(0x21c54);
    // 1501:cc44  call 0xd725  [x1]
    c.push16(0xcc47u); code_9(c, 0x22735u); if (c.ip != 0xcc47u) c.badReturn(0x21c54);
L21c57:
    if (c.tracing) c.traceAt(0x21c57);
    // 1501:cc47  call 0xd840  [x1]
    c.push16(0xcc4au); code_9(c, 0x22850u); if (c.ip != 0xcc4au) c.badReturn(0x21c57);
L21c5a:
    if (c.tracing) c.traceAt(0x21c5a);
    // 1501:cc4a  call 0xd5f5  [x1]
    c.push16(0xcc4du); code_9(c, 0x22605u); if (c.ip != 0xcc4du) c.badReturn(0x21c5a);
L21c5d:
    if (c.tracing) c.traceAt(0x21c5d);
    // 1501:cc4d  mov cx, 0x8000  [x1631]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:cc50  mov bx, 0xa000  [x1631]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:cc53  mov ax, 0  [x1631]
    c.a.x = (uint16_t)(0x0u);
    // 1501:cc56  cmp word ptr [0x78e3], 0  [x1631]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x78e3u)), 0x0u, true);
    // 1501:cc5e  jne 0xcc68  [x1631]
    if (!c.zf) goto L21c78;
L21c70:
    if (c.tracing) c.traceAt(0x21c70);
    // 1501:cc60  mov ax, 1  [x816]
    c.a.x = (uint16_t)(0x1u);
    // 1501:cc63  mov bx, 0xa800  [x816]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:cc66  xor cx, cx  [x816]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
L21c78:
    if (c.tracing) c.traceAt(0x21c78);
    // 1501:cc68  mov word ptr [0x78e3], ax  [x1631]
    c.w16(c.dsb + (uint32_t)(0x78e3u), c.a.x);
    // 1501:cc6e  mov es, bx  [x1631]
    c.loadEs(c.b.x);
    // 1501:cc70  mov ax, 0x28  [x1631]
    c.a.x = (uint16_t)(0x28u);
    // 1501:cc73  mov dx, 0xc8  [x1631]
    c.dx_.x = (uint16_t)(0xc8u);
    // 1501:cc76  sub dx, word ptr [0xc]  [x1631]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(0xcu)), false));
    // 1501:cc7d  mul dx  [x1631]
    c.mul16(c.dx_.x);
    // 1501:cc7f  add cx, ax  [x1631]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, false));
    // 1501:cc81  mov dx, 0x3d4  [x1631]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:cc84  mov al, 0xc  [x1631]
    c.a.l = (uint8_t)(0xcu);
    // 1501:cc86  mov ah, ch  [x1631]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:cc88  out dx, ax  [x1631]
    c.ip = 0xcc89u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cc89  mov al, 0xd  [x1631]
    c.a.l = (uint8_t)(0xdu);
    // 1501:cc8b  mov ah, cl  [x1631]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:cc8d  out dx, ax  [x1631]
    c.ip = 0xcc8eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cc8e  inc word ptr [0x7477]  [x1631]
    c.w16(c.dsb + (uint32_t)(0x7477u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x7477u)), false));
    // 1501:cc95  add word ptr [0x7479], 0xfa0  [x1631]
    c.w16(c.dsb + (uint32_t)(0x7479u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x7479u)), 0xfa0u, false));
    // 1501:cc9e  cmp word ptr [0x7477], 8  [x1631]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x7477u)), 0x8u, true);
    // 1501:cca6  jb 0xccba  [x1631]
    if (c.cf) goto L21cca;
L21cb8:
    if (c.tracing) c.traceAt(0x21cb8);
    // 1501:cca8  mov word ptr [0x7477], 0  [x203]
    c.w16(c.dsb + (uint32_t)(0x7477u), 0x0u);
    // 1501:ccb1  mov word ptr [0x7479], 0  [x203]
    c.w16(c.dsb + (uint32_t)(0x7479u), 0x0u);
L21cca:
    if (c.tracing) c.traceAt(0x21cca);
    // 1501:ccba  mov dx, 0x3da  [x1631]
    c.dx_.x = (uint16_t)(0x3dau);
L21ccd:
    if (c.tracing) c.traceAt(0x21ccd);
    // 1501:ccbd  in al, dx  [x5211]
    c.ip = 0xccbeu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21cce:
    if (c.tracing) c.traceAt(0x21cce);
    // 1501:ccbe  and al, 8  [x6948]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:ccc0  jne 0xccbd  [x6948]
    if (!c.zf) goto L21ccd;
L21cd2:
    if (c.tracing) c.traceAt(0x21cd2);
    // 1501:ccc2  in al, dx  [x76031]
    c.ip = 0xccc3u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L21cd3:
    if (c.tracing) c.traceAt(0x21cd3);
    // 1501:ccc3  and al, 8  [x100831]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:ccc5  je 0xccc2  [x100831]
    if (c.zf) goto L21cd2;
L21cd7:
    if (c.tracing) c.traceAt(0x21cd7);
    // 1501:ccc7  cmp byte ptr [3], 0  [x1631]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x3u)), 0x0u, true);
    // 1501:cccf  je 0xccfa  [x1631]
    if (c.zf) goto L21d0a;
L21ce1:
    if (c.tracing) c.traceAt(0x21ce1);
    // 1501:ccd1  inc byte ptr [0x78e5]  [x63]
    c.w8(c.dsb + (uint32_t)(0x78e5u), c.inc<8>(c.r8(c.dsb + (uint32_t)(0x78e5u)), false));
    // 1501:ccd8  mov dx, 0x3c8  [x63]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:ccdb  mov al, 0xf  [x63]
    c.a.l = (uint8_t)(0xfu);
    // 1501:ccdd  out dx, al  [x63]
    c.ip = 0xccdeu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:ccde  inc dx  [x63]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:ccdf  mov si, 0x2d  [x63]
    c.si.x = (uint16_t)(0x2du);
L21cf2:
    if (c.tracing) c.traceAt(0x21cf2);
    // 1501:cce2  mov al, byte ptr [si + 0x644c]  [x189]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x644cu)));
    // 1501:cce6  add al, byte ptr [0x78e5]  [x189]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint32_t)(0x78e5u)), false));
    // 1501:cced  cmp al, 0x3f  [x189]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:ccef  jbe 0xccf3  [x189]
    if ((c.cf || c.zf)) goto L21d03;
L21d01:
    if (c.tracing) c.traceAt(0x21d01);
    // 1501:ccf1  mov al, 0x3f  [x150]
    c.a.l = (uint8_t)(0x3fu);
L21d03:
    if (c.tracing) c.traceAt(0x21d03);
    // 1501:ccf3  out dx, al  [x189]
    c.ip = 0xccf4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:ccf4  inc si  [x189]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:ccf5  cmp si, 0x30  [x189]
    c.sub<16>(c.si.x, 0x30u, true);
    // 1501:ccf8  jb 0xcce2  [x189]
    if (c.cf) goto L21cf2;
L21d0a:
    if (c.tracing) c.traceAt(0x21d0a);
    // 1501:ccfa  mov si, word ptr [0x7477]  [x1631]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7477u)));
    // 1501:cd01  and si, 6  [x1631]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x6u), false));
    // 1501:cd04  shr si, 1  [x1631]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:cd06  mov dx, 0x3c4  [x1631]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:cd09  mov al, 2  [x1631]
    c.a.l = (uint8_t)(0x2u);
    // 1501:cd0b  mov ah, byte ptr [si + 0x26]  [x1631]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x26u)));
    // 1501:cd0f  out dx, ax  [x1631]
    c.ip = 0xcd10u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cd10  mov dx, 0x3ce  [x1631]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:cd13  mov al, 4  [x1631]
    c.a.l = (uint8_t)(0x4u);
    // 1501:cd15  mov ah, byte ptr [si + 0x2b]  [x1631]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2bu)));
    // 1501:cd19  out dx, ax  [x1631]
    c.ip = 0xcd1au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:cd1a  mov si, word ptr [0x7477]  [x1631]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7477u)));
    // 1501:cd21  rol si, 1  [x1631]
    c.si.x = (uint16_t)(c.rol<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:cd23  mov bx, word ptr [si + 0x32]  [x1631]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x32u)));
    // 1501:cd27  mov bp, word ptr [0x7479]  [x1631]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7479u)));
    // 1501:cd2e  xor al, al  [x1631]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L21d40:
    if (c.tracing) c.traceAt(0x21d40);
    // 1501:cd30  mov di, word ptr gs:[bp]  [x2337736]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.bp.x)));
    // 1501:cd34  mov byte ptr es:[di], al  [x2337736]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:cd37  add bp, 2  [x2337736]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:cd3a  cmp bp, bx  [x2337736]
    c.sub<16>(c.bp.x, c.b.x, true);
    // 1501:cd3c  jb 0xcd30  [x2337736]
    if (c.cf) goto L21d40;
L21d4e:
    if (c.tracing) c.traceAt(0x21d4e);
    // 1501:cd3e  cmp byte ptr [0x1d], 1  [x1631]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x1u, true);
    // 1501:cd46  jne 0xcd66  [x1631]
    if (!c.zf) goto L21d76;
L21d58:
    if (c.tracing) c.traceAt(0x21d58);
    // 1501:cd48  mov ax, 0xd327  [x19]
    c.a.x = (uint16_t)(0xd327u);
    // 1501:cd4b  mov word ptr [0x1e], ax  [x19]
    c.w16(c.dsb + (uint32_t)(0x1eu), c.a.x);
    // 1501:cd51  xor bp, bp  [x19]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
    // 1501:cd53  call 0xd0ee  [x19]
    c.push16(0xcd56u); code_9(c, 0x220feu); if (c.ip != 0xcd56u) c.badReturn(0x21d63);
L21d66:
    if (c.tracing) c.traceAt(0x21d66);
    // 1501:cd56  mov word ptr [0x22], bp  [x19]
    c.w16(c.dsb + (uint32_t)(0x22u), c.bp.x);
    // 1501:cd5d  mov bp, word ptr [0x7479]  [x19]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7479u)));
    // 1501:cd64  jmp 0xcdac  [x19]
    goto L21dbc;
L21d76:
    if (c.tracing) c.traceAt(0x21d76);
    // 1501:cd66  cmp byte ptr [0x1d], 0  [x1612]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x0u, true);
    // 1501:cd6e  jne 0xcdac  [x1612]
    if (!c.zf) goto L21dbc;
L21d80:
    if (c.tracing) c.traceAt(0x21d80);
    // 1501:cd70  mov ax, 0xd13a  [x1151]
    c.a.x = (uint16_t)(0xd13au);
    // 1501:cd73  mov word ptr [0x1e], ax  [x1151]
    c.w16(c.dsb + (uint32_t)(0x1eu), c.a.x);
    // 1501:cd79  call 0xcfb6  [x1151]
    c.push16(0xcd7cu); code_9(c, 0x21fc6u); if (c.ip != 0xcd7cu) c.badReturn(0x21d89);
L21d8c:
    if (c.tracing) c.traceAt(0x21d8c);
    // 1501:cd7c  call 0xd0ac  [x1151]
    c.push16(0xcd7fu); code_9(c, 0x220bcu); if (c.ip != 0xcd7fu) c.badReturn(0x21d8c);
L21d8f:
    if (c.tracing) c.traceAt(0x21d8f);
    // 1501:cd7f  mov bp, word ptr [0x7479]  [x1151]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7479u)));
    // 1501:cd86  cmp byte ptr [3], 0  [x1151]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x3u)), 0x0u, true);
    // 1501:cd8e  jne 0xcd95  [x1151]
    if (!c.zf) goto L21da5;
L21da0:
    if (c.tracing) c.traceAt(0x21da0);
    // 1501:cd90  call 0xd0ee  [x1144]
    c.push16(0xcd93u); code_9(c, 0x220feu); if (c.ip != 0xcd93u) c.badReturn(0x21da0);
L21da3:
    if (c.tracing) c.traceAt(0x21da3);
    // 1501:cd93  jmp 0xcdac  [x1144]
    goto L21dbc;
L21da5:
    if (c.tracing) c.traceAt(0x21da5);
    // 1501:cd95  call 0xd900  [x7]
    c.push16(0xcd98u); code_9(c, 0x22910u); if (c.ip != 0xcd98u) c.badReturn(0x21da5);
L21da8:
    if (c.tracing) c.traceAt(0x21da8);
    // 1501:cd98  inc byte ptr [3]  [x7]
    c.w8(c.dsb + (uint32_t)(0x3u), c.inc<8>(c.r8(c.dsb + (uint32_t)(0x3u)), false));
    // 1501:cd9f  cmp byte ptr [3], 8  [x7]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x3u)), 0x8u, true);
    // 1501:cda7  jb 0xcdac  [x7]
    if (c.cf) goto L21dbc;
L21db9:
    if (c.tracing) c.traceAt(0x21db9);
    // 1501:cda9  jmp 0xd936  [x1]
    goto L22946;
L21dbc:
    if (c.tracing) c.traceAt(0x21dbc);
    // 1501:cdac  mov si, word ptr [0x7477]  [x1630]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7477u)));
    // 1501:cdb3  rol si, 1  [x1630]
    c.si.x = (uint16_t)(c.rol<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:cdb5  mov word ptr [si + 0x32], bp  [x1630]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x32u), c.bp.x);
    // 1501:cdb9  cmp byte ptr [0x1d], 2  [x1630]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x2u, true);
    // 1501:cdc1  jne 0xce29  [x1630]
    if (!c.zf) goto L21e39;
L21dd3:
    if (c.tracing) c.traceAt(0x21dd3);
    // 1501:cdc3  call 0xd5f5  [x19]
    c.push16(0xcdc6u); code_9(c, 0x22605u); if (c.ip != 0xcdc6u) c.badReturn(0x21dd3);
L21dd6:
    if (c.tracing) c.traceAt(0x21dd6);
    // 1501:cdc6  add word ptr [0x6485], 0x46  [x19]
    c.w16(c.dsb + (uint32_t)(0x6485u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0x46u, false));
    // 1501:cdce  cmp word ptr [0x6485], 0x5a0  [x19]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0x5a0u, true);
    // 1501:cdd7  jb 0xcde2  [x19]
    if (c.cf) goto L21df2;
L21de9:
    if (c.tracing) c.traceAt(0x21de9);
    // 1501:cdd9  sub word ptr [0x6485], 0x5a0  [x1]
    c.w16(c.dsb + (uint32_t)(0x6485u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0x5a0u, true));
L21df2:
    if (c.tracing) c.traceAt(0x21df2);
    // 1501:cde2  add word ptr [0x6487], 0x96  [x19]
    c.w16(c.dsb + (uint32_t)(0x6487u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x96u, false));
    // 1501:cdeb  cmp word ptr [0x6487], 0x5a0  [x19]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x5a0u, true);
    // 1501:cdf4  jb 0xcdff  [x19]
    if (c.cf) goto L21e0f;
L21e06:
    if (c.tracing) c.traceAt(0x21e06);
    // 1501:cdf6  sub word ptr [0x6487], 0x5a0  [x2]
    c.w16(c.dsb + (uint32_t)(0x6487u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x5a0u, true));
L21e0f:
    if (c.tracing) c.traceAt(0x21e0f);
    // 1501:cdff  call 0xcfb6  [x19]
    c.push16(0xce02u); code_9(c, 0x21fc6u); if (c.ip != 0xce02u) c.badReturn(0x21e0f);
L21e12:
    if (c.tracing) c.traceAt(0x21e12);
    // 1501:ce02  call 0xd0ac  [x19]
    c.push16(0xce05u); code_9(c, 0x220bcu); if (c.ip != 0xce05u) c.badReturn(0x21e12);
L21e15:
    if (c.tracing) c.traceAt(0x21e15);
    // 1501:ce05  mov ax, 0xd48e  [x19]
    c.a.x = (uint16_t)(0xd48eu);
    // 1501:ce08  mov word ptr [0x1e], ax  [x19]
    c.w16(c.dsb + (uint32_t)(0x1eu), c.a.x);
    // 1501:ce0e  xor bp, bp  [x19]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:ce10  cmp byte ptr [3], 0  [x19]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x3u)), 0x0u, true);
    // 1501:ce18  je 0xce1f  [x19]
    if (c.zf) goto L21e2f;
L21e2a:
    if (c.tracing) c.traceAt(0x21e2a);
    // 1501:ce1a  call 0xd89b  [x1]
    c.push16(0xce1du); code_9(c, 0x228abu); if (c.ip != 0xce1du) c.badReturn(0x21e2a);
L21e2d:
    if (c.tracing) c.traceAt(0x21e2d);
    // 1501:ce1d  jmp 0xce22  [x1]
    goto L21e32;
L21e2f:
    if (c.tracing) c.traceAt(0x21e2f);
    // 1501:ce1f  call 0xd0ee  [x18]
    c.push16(0xce22u); code_9(c, 0x220feu); if (c.ip != 0xce22u) c.badReturn(0x21e2f);
L21e32:
    if (c.tracing) c.traceAt(0x21e32);
    // 1501:ce22  mov word ptr [0x20], bp  [x19]
    c.w16(c.dsb + (uint32_t)(0x20u), c.bp.x);
L21e39:
    if (c.tracing) c.traceAt(0x21e39);
    // 1501:ce29  cmp byte ptr [0x1d], 2  [x1630]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x2u, true);
    // 1501:ce31  jne 0xce36  [x1630]
    if (!c.zf) goto L21e46;
L21e43:
    if (c.tracing) c.traceAt(0x21e43);
    // 1501:ce33  call 0xd65b  [x19]
    c.push16(0xce36u); code_9(c, 0x2266bu); if (c.ip != 0xce36u) c.badReturn(0x21e43);
L21e46:
    if (c.tracing) c.traceAt(0x21e46);
    // 1501:ce36  cmp byte ptr [0x1d], 2  [x1630]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x2u, true);
    // 1501:ce3e  jb 0xce5a  [x1630]
    if (c.cf) goto L21e6a;
L21e50:
    if (c.tracing) c.traceAt(0x21e50);
    // 1501:ce40  cmp byte ptr [0x1d], 0x38  [x461]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x38u, true);
    // 1501:ce48  ja 0xce5a  [x461]
    if ((!c.cf && !c.zf)) goto L21e6a;
L21e5a:
    if (c.tracing) c.traceAt(0x21e5a);
    // 1501:ce4a  call 0xd7dd  [x461]
    c.push16(0xce4du); code_9(c, 0x227edu); if (c.ip != 0xce4du) c.badReturn(0x21e5a);
L21e5d:
    if (c.tracing) c.traceAt(0x21e5d);
    // 1501:ce4d  mov si, word ptr [0x7477]  [x461]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7477u)));
    // 1501:ce54  rol si, 1  [x461]
    c.si.x = (uint16_t)(c.rol<16>(c.si.x, (int)((0x1u) & 31), true));
    // 1501:ce56  mov word ptr [si + 0x32], bp  [x461]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x32u), c.bp.x);
L21e6a:
    if (c.tracing) c.traceAt(0x21e6a);
    // 1501:ce5a  cmp byte ptr [0x1d], 0x38  [x1630]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x38u, true);
    // 1501:ce62  jne 0xce6c  [x1630]
    if (!c.zf) goto L21e7c;
L21e74:
    if (c.tracing) c.traceAt(0x21e74);
    // 1501:ce64  mov byte ptr [0x1d], 0  [x4]
    c.w8(c.dsb + (uint32_t)(0x1du), 0x0u);
L21e7c:
    if (c.tracing) c.traceAt(0x21e7c);
    // 1501:ce6c  cmp byte ptr [0x1d], 0  [x1630]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(0x1du)), 0x0u, true);
    // 1501:ce74  je 0xce7f  [x1630]
    if (c.zf) goto L21e8f;
L21e86:
    if (c.tracing) c.traceAt(0x21e86);
    // 1501:ce76  inc byte ptr [0x1d]  [x476]
    c.w8(c.dsb + (uint32_t)(0x1du), c.inc<8>(c.r8(c.dsb + (uint32_t)(0x1du)), true));
    // 1501:ce7d  jmp 0xced3  [x476]
    goto L21ee3;
L21e8f:
    if (c.tracing) c.traceAt(0x21e8f);
    // 1501:ce7f  add word ptr [0x6485], 0xc  [x1154]
    c.w16(c.dsb + (uint32_t)(0x6485u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0xcu, false));
    // 1501:ce87  cmp word ptr [0x6485], 0x5a0  [x1154]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0x5a0u, true);
    // 1501:ce90  jb 0xce9b  [x1154]
    if (c.cf) goto L21eab;
L21ea2:
    if (c.tracing) c.traceAt(0x21ea2);
    // 1501:ce92  sub word ptr [0x6485], 0x5a0  [x9]
    c.w16(c.dsb + (uint32_t)(0x6485u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6485u)), 0x5a0u, true));
L21eab:
    if (c.tracing) c.traceAt(0x21eab);
    // 1501:ce9b  add word ptr [0x6487], 2  [x1154]
    c.w16(c.dsb + (uint32_t)(0x6487u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x2u, false));
    // 1501:cea3  cmp word ptr [0x6487], 0x5a0  [x1154]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x5a0u, true);
    // 1501:ceac  jb 0xceb7  [x1154]
    if (c.cf) goto L21ec7;
L21ebe:
    if (c.tracing) c.traceAt(0x21ebe);
    // 1501:ceae  sub word ptr [0x6487], 0x5a0  [x1]
    c.w16(c.dsb + (uint32_t)(0x6487u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6487u)), 0x5a0u, true));
L21ec7:
    if (c.tracing) c.traceAt(0x21ec7);
    // 1501:ceb7  add word ptr [0x6489], 6  [x1154]
    c.w16(c.dsb + (uint32_t)(0x6489u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6489u)), 0x6u, false));
    // 1501:cebf  cmp word ptr [0x6489], 0x5a0  [x1154]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6489u)), 0x5a0u, true);
    // 1501:cec8  jb 0xced3  [x1154]
    if (c.cf) goto L21ee3;
L21eda:
    if (c.tracing) c.traceAt(0x21eda);
    // 1501:ceca  sub word ptr [0x6489], 0x5a0  [x4]
    c.w16(c.dsb + (uint32_t)(0x6489u), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6489u)), 0x5a0u, true));
L21ee3:
    if (c.tracing) c.traceAt(0x21ee3);
    // 1501:ced3  push es  [x1630]
    c.push16(c.es);
    // 1501:ced4  mov ax, word ptr cs:[0xcbf0]  [x1630]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xcbf0u)));
    // 1501:ced8  mov es, ax  [x1630]
    c.loadEs(c.a.x);
    // 1501:ceda  mov si, word ptr cs:[0xcbf2]  [x1630]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xffffcbf2u)));
    // 1501:cedf  mov dx, word ptr es:[si]  [x1630]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:cee2  pop es  [x1630]
    c.loadEs((uint16_t)c.pop16());
    // 1501:cee3  inc word ptr [4]  [x1630]
    c.w16(c.dsb + (uint32_t)(0x4u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x4u)), false));
    // 1501:ceea  cmp word ptr [4], 0xb0  [x1630]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x4u)), 0xb0u, true);
    // 1501:cef3  jae 0xcf2f  [x1630]
    if (!c.cf) goto L21f3f;
L21f05:
    if (c.tracing) c.traceAt(0x21f05);
    // 1501:cef5  mov ax, word ptr [0xa]  [x175]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xau)));
    // 1501:cefb  sar ax, 1  [x175]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:cefd  add word ptr [0xc], ax  [x175]
    c.w16(c.dsb + (uint32_t)(0xcu), c.add<16>(c.r16(c.dsb + (uint32_t)(0xcu)), c.a.x, false));
    // 1501:cf04  cmp word ptr [0xc], 0xc8  [x175]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xcu)), 0xc8u, true);
    // 1501:cf0d  jb 0xcf27  [x175]
    if (c.cf) goto L21f37;
L21f1f:
    if (c.tracing) c.traceAt(0x21f1f);
    // 1501:cf0f  sub word ptr [0xa], 4  [x25]
    c.w16(c.dsb + (uint32_t)(0xau), c.sub<16>(c.r16(c.dsb + (uint32_t)(0xau)), 0x4u, false));
    // 1501:cf17  neg word ptr [0xa]  [x25]
    c.w16(c.dsb + (uint32_t)(0xau), c.neg<16>(c.r16(c.dsb + (uint32_t)(0xau)), true));
    // 1501:cf1e  mov word ptr [0xc], 0xc8  [x25]
    c.w16(c.dsb + (uint32_t)(0xcu), 0xc8u);
L21f37:
    if (c.tracing) c.traceAt(0x21f37);
    // 1501:cf27  add word ptr [0xa], 1  [x175]
    c.w16(c.dsb + (uint32_t)(0xau), c.add<16>(c.r16(c.dsb + (uint32_t)(0xau)), 0x1u, true));
L21f3f:
    if (c.tracing) c.traceAt(0x21f3f);
    // 1501:cf2f  mov ax, word ptr [6]  [x1630]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6u)));
    // 1501:cf35  cmp word ptr [4], ax  [x1630]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x4u)), c.a.x, true);
    // 1501:cf3c  jb 0xcf75  [x1630]
    if (c.cf) goto L21f85;
L21f4e:
    if (c.tracing) c.traceAt(0x21f4e);
    // 1501:cf3e  cmp word ptr [8], 0x12  [x124]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x8u)), 0x12u, true);
    // 1501:cf46  je 0xcf4d  [x124]
    if (c.zf) goto L21f5d;
L21f58:
    if (c.tracing) c.traceAt(0x21f58);
    // 1501:cf48  cmp dx, 0  [x109]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:cf4b  je 0xcf75  [x109]
    if (c.zf) goto L21f85;
L21f5d:
    if (c.tracing) c.traceAt(0x21f5d);
    // 1501:cf4d  mov ax, word ptr [8]  [x18]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x8u)));
    // 1501:cf53  add word ptr [6], ax  [x18]
    c.w16(c.dsb + (uint32_t)(0x6u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6u)), c.a.x, false));
    // 1501:cf5a  mov byte ptr [0x1d], 1  [x18]
    c.w8(c.dsb + (uint32_t)(0x1du), 0x1u);
    // 1501:cf62  cmp word ptr [0], 3  [x18]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0u)), 0x3u, true);
    // 1501:cf6a  jne 0xcf75  [x18]
    if (!c.zf) goto L21f85;
L21f7c:
    if (c.tracing) c.traceAt(0x21f7c);
    // 1501:cf6c  mov word ptr [8], 0x12  [x1]
    c.w16(c.dsb + (uint32_t)(0x8u), 0x12u);
L21f85:
    if (c.tracing) c.traceAt(0x21f85);
    // 1501:cf75  cmp word ptr [4], 0x620  [x1630]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x4u)), 0x620u, true);
    // 1501:cf7e  jne 0xcfb3  [x1630]
    if (!c.zf) goto L21fc3;
L21f90:
    if (c.tracing) c.traceAt(0x21f90);
    // 1501:cf80  mov byte ptr [3], 1  [x1]
    c.w8(c.dsb + (uint32_t)(0x3u), 0x1u);
    // 1501:cf88  mov ax, word ptr [8]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x8u)));
    // 1501:cf8e  add ax, 0x80  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, false));
    // 1501:cf91  add word ptr [6], ax  [x1]
    c.w16(c.dsb + (uint32_t)(0x6u), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6u)), c.a.x, false));
    // 1501:cf98  mov byte ptr [0x1d], 1  [x1]
    c.w8(c.dsb + (uint32_t)(0x1du), 0x1u);
    // 1501:cfa0  cmp word ptr [0], 5  [x1]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0u)), 0x5u, true);
    // 1501:cfa8  jne 0xcfb3  [x1]
    if (!c.zf) goto L21fc3;
    c.notTranslated(0x21fba, "fall-through");
L21fc3:
    if (c.tracing) c.traceAt(0x21fc3);
    // 1501:cfb3  jmp 0xcc4d  [x1630]
    goto L21c5d;
L21fc6:
    if (c.tracing) c.traceAt(0x21fc6);
    // 1501:cfb6  xor bp, bp  [x1170]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L21fc8:
    if (c.tracing) c.traceAt(0x21fc8);
    // 1501:cfb8  mov si, word ptr [0x6485]  [x30420]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6485u)));
    // 1501:cfbf  mov ax, word ptr ds:[bp + 0x6b95]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b95u)));
    // 1501:cfc4  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:cfc8  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:cfc9  mov ax, word ptr ds:[bp + 0x6b93]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b93u)));
    // 1501:cfce  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:cfd2  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:cfd3  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:cfd6  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:cfd9  add bx, ax  [x30420]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:cfdb  mov word ptr [0x647f], bx  [x30420]
    c.w16(c.dsb + (uint32_t)(0x647fu), c.b.x);
    // 1501:cfe2  mov ax, word ptr ds:[bp + 0x6b95]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b95u)));
    // 1501:cfe7  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:cfeb  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:cfec  mov ax, word ptr ds:[bp + 0x6b93]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b93u)));
    // 1501:cff1  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:cff5  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:cff6  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:cff9  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:cffc  sub bx, ax  [x30420]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:cffe  mov word ptr [0x6481], bx  [x30420]
    c.w16(c.dsb + (uint32_t)(0x6481u), c.b.x);
    // 1501:d005  mov si, word ptr [0x6487]  [x30420]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6487u)));
    // 1501:d00c  mov ax, word ptr [0x647f]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647fu)));
    // 1501:d012  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:d016  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:d017  mov ax, word ptr ds:[bp + 0x6b97]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b97u)));
    // 1501:d01c  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:d020  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d021  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:d024  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:d027  sub bx, ax  [x30420]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:d029  mov word ptr ds:[bp + 0x7373], bx  [x30420]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x7373u), c.b.x);
    // 1501:d02e  mov ax, word ptr ds:[bp + 0x6b97]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6b97u)));
    // 1501:d033  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:d037  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:d038  mov ax, word ptr [0x647f]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647fu)));
    // 1501:d03e  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:d042  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d043  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:d046  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:d049  add bx, ax  [x30420]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:d04b  mov word ptr [0x6483], bx  [x30420]
    c.w16(c.dsb + (uint32_t)(0x6483u), c.b.x);
    // 1501:d052  mov si, word ptr [0x6489]  [x30420]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6489u)));
    // 1501:d059  mov ax, word ptr [0x6483]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6483u)));
    // 1501:d05f  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:d063  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:d064  mov ax, word ptr [0x6481]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6481u)));
    // 1501:d06a  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:d06e  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d06f  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:d072  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:d075  add bx, ax  [x30420]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:d077  mov word ptr ds:[bp + 0x7375], bx  [x30420]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x7375u), c.b.x);
    // 1501:d07c  mov ax, word ptr [0x6483]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6483u)));
    // 1501:d082  imul word ptr [si + 0x65f3]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x65f3u)));
    // 1501:d086  push ax  [x30420]
    c.push16(c.a.x);
    // 1501:d087  mov ax, word ptr [0x6481]  [x30420]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6481u)));
    // 1501:d08d  imul word ptr [si + 0x648b]  [x30420]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x648bu)));
    // 1501:d091  pop bx  [x30420]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d092  sar ax, 7  [x30420]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:d095  sar bx, 7  [x30420]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x7u) & 31), false));
    // 1501:d098  sub bx, ax  [x30420]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:d09a  mov word ptr ds:[bp + 0x7377], bx  [x30420]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x7377u), c.b.x);
    // 1501:d09f  add bp, 6  [x30420]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:d0a2  cmp bp, 0x9c  [x30420]
    c.sub<16>(c.bp.x, 0x9cu, true);
    // 1501:d0a6  je 0xd0ab  [x30420]
    if (c.zf) goto L220bb;
L220b8:
    if (c.tracing) c.traceAt(0x220b8);
    // 1501:d0a8  jmp 0xcfb8  [x29250]
    goto L21fc8;
L220bb:
    if (c.tracing) c.traceAt(0x220bb);
    // 1501:d0ab  ret   [x1170]
    c.ip = c.pop16(); return;
L220bc:
    if (c.tracing) c.traceAt(0x220bc);
    // 1501:d0ac  xor bp, bp  [x1170]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:d0ae  xor di, di  [x1170]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L220c0:
    if (c.tracing) c.traceAt(0x220c0);
    // 1501:d0b0  mov si, word ptr ds:[bp + 0x7377]  [x30420]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7377u)));
    // 1501:d0b5  mov bx, word ptr ds:[bp + 0x7373]  [x30420]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7373u)));
    // 1501:d0ba  mov cx, word ptr ds:[bp + 0x7375]  [x30420]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7375u)));
    // 1501:d0bf  add si, word ptr [0x30]  [x30420]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint32_t)(0x30u)), false));
    // 1501:d0c6  mov ax, 0xfa  [x30420]
    c.a.x = (uint16_t)(0xfau);
    // 1501:d0c9  imul bx  [x30420]
    c.imul16(c.b.x);
    // 1501:d0cb  idiv si  [x30420]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xd0cbu); }   // #DE: int 0, then again
    // 1501:d0cd  add ax, 0xa0  [x30420]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 1501:d0d0  mov word ptr [di + 0x740f], ax  [x30420]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x740fu), c.a.x);
    // 1501:d0d4  mov ax, 0xfa  [x30420]
    c.a.x = (uint16_t)(0xfau);
    // 1501:d0d7  imul cx  [x30420]
    c.imul16(c.c.x);
    // 1501:d0d9  idiv si  [x30420]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0xd0d9u); }   // #DE: int 0, then again
    // 1501:d0db  add ax, 0x64  [x30420]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 1501:d0de  mov word ptr [di + 0x7443], ax  [x30420]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x7443u), c.a.x);
    // 1501:d0e2  add bp, 6  [x30420]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:d0e5  add di, 2  [x30420]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:d0e8  cmp di, 0x34  [x30420]
    c.sub<16>(c.di.x, 0x34u, true);
    // 1501:d0eb  jne 0xd0b0  [x30420]
    if (!c.zf) goto L220c0;
L220fd:
    if (c.tracing) c.traceAt(0x220fd);
    // 1501:d0ed  ret   [x1170]
    c.ip = c.pop16(); return;
L220fe:
    if (c.tracing) c.traceAt(0x220fe);
    // 1501:d0ee  xor bx, bx  [x1181]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L22100:
    if (c.tracing) c.traceAt(0x22100);
    // 1501:d0f0  mov si, word ptr [bx + 0x6c2f]  [x32408]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x6c2fu)));
    // 1501:d0f4  shl si, 1  [x32408]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:d0f6  mov ax, word ptr [si + 0x740f]  [x32408]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x740fu)));
    // 1501:d0fa  mov word ptr [0x78db], ax  [x32408]
    c.w16(c.dsb + (uint32_t)(0x78dbu), c.a.x);
    // 1501:d100  mov ax, word ptr [si + 0x7443]  [x32408]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7443u)));
    // 1501:d104  mov word ptr [0x78df], ax  [x32408]
    c.w16(c.dsb + (uint32_t)(0x78dfu), c.a.x);
    // 1501:d10a  mov si, word ptr [bx + 0x6c6f]  [x32408]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x6c6fu)));
    // 1501:d10e  shl si, 1  [x32408]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x1u) & 31), true));
    // 1501:d110  mov ax, word ptr [si + 0x740f]  [x32408]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x740fu)));
    // 1501:d114  mov word ptr [0x78dd], ax  [x32408]
    c.w16(c.dsb + (uint32_t)(0x78ddu), c.a.x);
    // 1501:d11a  mov ax, word ptr [si + 0x7443]  [x32408]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7443u)));
    // 1501:d11e  mov word ptr [0x78e1], ax  [x32408]
    c.w16(c.dsb + (uint32_t)(0x78e1u), c.a.x);
    // 1501:d124  push bx  [x32408]
    c.push16(c.b.x);
    // 1501:d125  call word ptr [0x1e]  [x32408]
    c.push16(0xd12cu); code_9(c, c.csb + (uint16_t)(c.r16(c.dsb + (uint32_t)(0x1eu)))); if (c.ip != 0xd12cu) c.badReturn(0x22135);
L2213c:
    if (c.tracing) c.traceAt(0x2213c);
    // 1501:d12c  pop bx  [x32408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:d12d  add bx, 2  [x32408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:d130  cmp bx, word ptr [0x6caf]  [x32408]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint32_t)(0x6cafu)), true);
    // 1501:d137  jb 0xd0f0  [x32408]
    if (c.cf) goto L22100;
L22149:
    if (c.tracing) c.traceAt(0x22149);
    // 1501:d139  ret   [x1181]
    c.ip = c.pop16(); return;
L2214a:
    if (c.tracing) c.traceAt(0x2214a);
    // 1501:d13a  mov ax, word ptr [0x78df]  [x31440]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d140  cmp ax, word ptr [0x78e1]  [x31440]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78e1u)), true);
    // 1501:d147  jbe 0xd17d  [x31440]
    if ((c.cf || c.zf)) goto L2218d;
L22159:
    if (c.tracing) c.traceAt(0x22159);
    // 1501:d149  mov ax, word ptr [0x78db]  [x16272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d14f  mov bx, word ptr [0x78dd]  [x16272]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d156  mov word ptr [0x78db], bx  [x16272]
    c.w16(c.dsb + (uint32_t)(0x78dbu), c.b.x);
    // 1501:d15d  mov word ptr [0x78dd], ax  [x16272]
    c.w16(c.dsb + (uint32_t)(0x78ddu), c.a.x);
    // 1501:d163  mov ax, word ptr [0x78df]  [x16272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d169  mov bx, word ptr [0x78e1]  [x16272]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d170  mov word ptr [0x78df], bx  [x16272]
    c.w16(c.dsb + (uint32_t)(0x78dfu), c.b.x);
    // 1501:d177  mov word ptr [0x78e1], ax  [x16272]
    c.w16(c.dsb + (uint32_t)(0x78e1u), c.a.x);
L2218d:
    if (c.tracing) c.traceAt(0x2218d);
    // 1501:d17d  mov ax, word ptr [0x78df]  [x31440]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d183  mov word ptr [0x647d], ax  [x31440]
    c.w16(c.dsb + (uint32_t)(0x647du), c.a.x);
    // 1501:d189  mov ax, word ptr [0x78dd]  [x31440]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d18f  sub ax, word ptr [0x78db]  [x31440]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78dbu)), false));
    // 1501:d196  cmp ax, 0  [x31440]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:d199  jge 0xd19d  [x31440]
    if ((c.sf == c.of)) goto L221ad;
L221ab:
    if (c.tracing) c.traceAt(0x221ab);
    // 1501:d19b  neg ax  [x15284]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L221ad:
    if (c.tracing) c.traceAt(0x221ad);
    // 1501:d19d  mov bx, word ptr [0x78e1]  [x31440]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d1a4  sub bx, word ptr [0x78df]  [x31440]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint32_t)(0x78dfu)), false));
    // 1501:d1ab  mov cx, word ptr [0x78db]  [x31440]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d1b2  cmp ax, bx  [x31440]
    c.sub<16>(c.a.x, c.b.x, true);
    // 1501:d1b4  jb 0xd1c3  [x31440]
    if (c.cf) goto L221d3;
L221c6:
    if (c.tracing) c.traceAt(0x221c6);
    // 1501:d1b6  cmp cx, word ptr [0x78dd]  [x15015]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d1bd  ja 0xd1c1  [x15015]
    if ((!c.cf && !c.zf)) goto L221d1;
L221cf:
    if (c.tracing) c.traceAt(0x221cf);
    // 1501:d1bf  jmp 0xd1d3  [x7553]
    goto L221e3;
L221d1:
    if (c.tracing) c.traceAt(0x221d1);
    // 1501:d1c1  jmp 0xd22c  [x7462]
    goto L2223c;
L221d3:
    if (c.tracing) c.traceAt(0x221d3);
    // 1501:d1c3  cmp cx, word ptr [0x78dd]  [x16425]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d1ca  ja 0xd1cf  [x16425]
    if ((!c.cf && !c.zf)) goto L221df;
L221dc:
    if (c.tracing) c.traceAt(0x221dc);
    // 1501:d1cc  jmp 0xd285  [x8603]
    goto L22295;
L221df:
    if (c.tracing) c.traceAt(0x221df);
    // 1501:d1cf  jmp 0xd2d6  [x7822]
    goto L222e6;
L221e3:
    if (c.tracing) c.traceAt(0x221e3);
    // 1501:d1d3  mov di, word ptr [0x647d]  [x7553]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
    // 1501:d1da  rol di, 1  [x7553]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), false));
    // 1501:d1dc  mov di, word ptr [di + 0x747b]  [x7553]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d1e0  mov cx, ax  [x7553]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d1e2  inc cx  [x7553]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d1e3  cmp cx, 0  [x7553]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d1e6  jne 0xd1e9  [x7553]
    if (!c.zf) goto L221f9;
    c.notTranslated(0x221f8, "fall-through");
L221f9:
    if (c.tracing) c.traceAt(0x221f9);
    // 1501:d1e9  mov si, bx  [x7553]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d1eb  mov bx, word ptr [0x78db]  [x7553]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d1f2  push ax  [x7553]
    c.push16(c.a.x);
    // 1501:d1f3  mov al, byte ptr [bx + 0x779b]  [x7553]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x779bu)));
    // 1501:d1f7  mov byte ptr [0x647c], al  [x7553]
    c.w8(c.dsb + (uint32_t)(0x647cu), c.a.l);
    // 1501:d1fd  pop ax  [x7553]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:d1fe  shr bx, 3  [x7553]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:d201  add di, bx  [x7553]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:d203  mov bx, ax  [x7553]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d205  mov dx, ax  [x7553]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d207  shr dx, 1  [x7553]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d209  mov al, byte ptr [0x647c]  [x7553]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x647cu)));
L2221f:
    if (c.tracing) c.traceAt(0x2221f);
    // 1501:d20f  or byte ptr es:[di], al  [x391332]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d212  mov word ptr gs:[bp], di  [x391332]
    c.w16(c.gsb + (uint16_t)(c.bp.x), c.di.x);
    // 1501:d216  add bp, 2  [x391332]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, true));
    // 1501:d219  ror al, 1  [x391332]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)((0x1u) & 31), true));
    // 1501:d21b  jae 0xd21e  [x391332]
    if (!c.cf) goto L2222e;
L2222d:
    if (c.tracing) c.traceAt(0x2222d);
    // 1501:d21d  inc di  [x48807]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
L2222e:
    if (c.tracing) c.traceAt(0x2222e);
    // 1501:d21e  add dx, si  [x391332]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d220  cmp dx, bx  [x391332]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d222  jb 0xd229  [x391332]
    if (c.cf) goto L22239;
L22234:
    if (c.tracing) c.traceAt(0x22234);
    // 1501:d224  sub dx, bx  [x151330]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:d226  add di, 0x28  [x151330]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
L22239:
    if (c.tracing) c.traceAt(0x22239);
    // 1501:d229  loop 0xd20f  [x391332]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2221f;
L2223b:
    if (c.tracing) c.traceAt(0x2223b);
    // 1501:d22b  ret   [x7553]
    c.ip = c.pop16(); return;
L2223c:
    if (c.tracing) c.traceAt(0x2223c);
    // 1501:d22c  mov di, word ptr [0x647d]  [x7462]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
    // 1501:d233  rol di, 1  [x7462]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), false));
    // 1501:d235  mov di, word ptr [di + 0x747b]  [x7462]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d239  mov cx, ax  [x7462]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d23b  inc cx  [x7462]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d23c  cmp cx, 0  [x7462]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d23f  jne 0xd242  [x7462]
    if (!c.zf) goto L22252;
    c.notTranslated(0x22251, "fall-through");
L22252:
    if (c.tracing) c.traceAt(0x22252);
    // 1501:d242  mov si, bx  [x7462]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d244  mov bx, word ptr [0x78db]  [x7462]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d24b  push ax  [x7462]
    c.push16(c.a.x);
    // 1501:d24c  mov al, byte ptr [bx + 0x779b]  [x7462]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x779bu)));
    // 1501:d250  mov byte ptr [0x647c], al  [x7462]
    c.w8(c.dsb + (uint32_t)(0x647cu), c.a.l);
    // 1501:d256  pop ax  [x7462]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:d257  shr bx, 3  [x7462]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:d25a  add di, bx  [x7462]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:d25c  mov bx, ax  [x7462]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d25e  mov dx, ax  [x7462]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d260  shr dx, 1  [x7462]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d262  mov al, byte ptr [0x647c]  [x7462]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x647cu)));
L22278:
    if (c.tracing) c.traceAt(0x22278);
    // 1501:d268  or byte ptr es:[di], al  [x383697]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d26b  mov word ptr gs:[bp], di  [x383697]
    c.w16(c.gsb + (uint16_t)(c.bp.x), c.di.x);
    // 1501:d26f  add bp, 2  [x383697]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, true));
    // 1501:d272  rol al, 1  [x383697]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)((0x1u) & 31), true));
    // 1501:d274  jae 0xd277  [x383697]
    if (!c.cf) goto L22287;
L22286:
    if (c.tracing) c.traceAt(0x22286);
    // 1501:d276  dec di  [x48312]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
L22287:
    if (c.tracing) c.traceAt(0x22287);
    // 1501:d277  add dx, si  [x383697]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d279  cmp dx, bx  [x383697]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d27b  jb 0xd282  [x383697]
    if (c.cf) goto L22292;
L2228d:
    if (c.tracing) c.traceAt(0x2228d);
    // 1501:d27d  sub dx, bx  [x142506]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:d27f  add di, 0x28  [x142506]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
L22292:
    if (c.tracing) c.traceAt(0x22292);
    // 1501:d282  loop 0xd268  [x383697]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22278;
L22294:
    if (c.tracing) c.traceAt(0x22294);
    // 1501:d284  ret   [x7462]
    c.ip = c.pop16(); return;
L22295:
    if (c.tracing) c.traceAt(0x22295);
    // 1501:d285  mov di, word ptr [0x647d]  [x8603]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
    // 1501:d28c  rol di, 1  [x8603]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), false));
    // 1501:d28e  mov di, word ptr [di + 0x747b]  [x8603]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d292  mov si, word ptr [0x78db]  [x8603]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d299  push ax  [x8603]
    c.push16(c.a.x);
    // 1501:d29a  mov al, byte ptr [si + 0x779b]  [x8603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x779bu)));
    // 1501:d29e  mov byte ptr [0x647c], al  [x8603]
    c.w8(c.dsb + (uint32_t)(0x647cu), c.a.l);
    // 1501:d2a4  pop ax  [x8603]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:d2a5  shr si, 3  [x8603]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x3u) & 31), false));
    // 1501:d2a8  add di, si  [x8603]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:d2aa  mov si, ax  [x8603]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d2ac  mov cx, bx  [x8603]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d2ae  inc cx  [x8603]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d2af  mov dx, bx  [x8603]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d2b1  shr dx, 1  [x8603]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d2b3  mov al, byte ptr [0x647c]  [x8603]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x647cu)));
L222c9:
    if (c.tracing) c.traceAt(0x222c9);
    // 1501:d2b9  or byte ptr es:[di], al  [x460465]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d2bc  mov word ptr gs:[bp], di  [x460465]
    c.w16(c.gsb + (uint16_t)(c.bp.x), c.di.x);
    // 1501:d2c0  add bp, 2  [x460465]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:d2c3  add di, 0x28  [x460465]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:d2c6  add dx, si  [x460465]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d2c8  cmp dx, bx  [x460465]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d2ca  jb 0xd2d3  [x460465]
    if (c.cf) goto L222e3;
L222dc:
    if (c.tracing) c.traceAt(0x222dc);
    // 1501:d2cc  sub dx, bx  [x167867]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d2ce  ror al, 1  [x167867]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)((0x1u) & 31), true));
    // 1501:d2d0  jae 0xd2d3  [x167867]
    if (!c.cf) goto L222e3;
L222e2:
    if (c.tracing) c.traceAt(0x222e2);
    // 1501:d2d2  inc di  [x20909]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
L222e3:
    if (c.tracing) c.traceAt(0x222e3);
    // 1501:d2d3  loop 0xd2b9  [x460465]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L222c9;
L222e5:
    if (c.tracing) c.traceAt(0x222e5);
    // 1501:d2d5  ret   [x8603]
    c.ip = c.pop16(); return;
L222e6:
    if (c.tracing) c.traceAt(0x222e6);
    // 1501:d2d6  mov di, word ptr [0x647d]  [x7822]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
    // 1501:d2dd  rol di, 1  [x7822]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), false));
    // 1501:d2df  mov di, word ptr [di + 0x747b]  [x7822]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d2e3  mov si, word ptr [0x78db]  [x7822]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d2ea  push ax  [x7822]
    c.push16(c.a.x);
    // 1501:d2eb  mov al, byte ptr [si + 0x779b]  [x7822]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x779bu)));
    // 1501:d2ef  mov byte ptr [0x647c], al  [x7822]
    c.w8(c.dsb + (uint32_t)(0x647cu), c.a.l);
    // 1501:d2f5  pop ax  [x7822]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:d2f6  shr si, 3  [x7822]
    c.si.x = (uint16_t)(c.shr<16>(c.si.x, (int)((0x3u) & 31), false));
    // 1501:d2f9  add di, si  [x7822]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.si.x, false));
    // 1501:d2fb  mov si, ax  [x7822]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d2fd  mov cx, bx  [x7822]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d2ff  inc cx  [x7822]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d300  mov dx, bx  [x7822]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d302  shr dx, 1  [x7822]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d304  mov al, byte ptr [0x647c]  [x7822]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0x647cu)));
L2231a:
    if (c.tracing) c.traceAt(0x2231a);
    // 1501:d30a  or byte ptr es:[di], al  [x411546]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d30d  mov word ptr gs:[bp], di  [x411546]
    c.w16(c.gsb + (uint16_t)(c.bp.x), c.di.x);
    // 1501:d311  add bp, 2  [x411546]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:d314  add di, 0x28  [x411546]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:d317  add dx, si  [x411546]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d319  cmp dx, bx  [x411546]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d31b  jb 0xd324  [x411546]
    if (c.cf) goto L22334;
L2232d:
    if (c.tracing) c.traceAt(0x2232d);
    // 1501:d31d  sub dx, bx  [x159128]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d31f  rol al, 1  [x159128]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)((0x1u) & 31), true));
    // 1501:d321  jae 0xd324  [x159128]
    if (!c.cf) goto L22334;
L22333:
    if (c.tracing) c.traceAt(0x22333);
    // 1501:d323  dec di  [x20081]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
L22334:
    if (c.tracing) c.traceAt(0x22334);
    // 1501:d324  loop 0xd30a  [x411546]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2231a;
L22336:
    if (c.tracing) c.traceAt(0x22336);
    // 1501:d326  ret   [x7822]
    c.ip = c.pop16(); return;
L22337:
    if (c.tracing) c.traceAt(0x22337);
    // 1501:d327  mov ax, word ptr [0x78df]  [x500]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d32d  cmp ax, word ptr [0x78e1]  [x500]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78e1u)), true);
    // 1501:d334  jbe 0xd36a  [x500]
    if ((c.cf || c.zf)) goto L2237a;
L22346:
    if (c.tracing) c.traceAt(0x22346);
    // 1501:d336  mov ax, word ptr [0x78db]  [x248]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d33c  mov bx, word ptr [0x78dd]  [x248]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d343  mov word ptr [0x78db], bx  [x248]
    c.w16(c.dsb + (uint32_t)(0x78dbu), c.b.x);
    // 1501:d34a  mov word ptr [0x78dd], ax  [x248]
    c.w16(c.dsb + (uint32_t)(0x78ddu), c.a.x);
    // 1501:d350  mov ax, word ptr [0x78df]  [x248]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d356  mov bx, word ptr [0x78e1]  [x248]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d35d  mov word ptr [0x78df], bx  [x248]
    c.w16(c.dsb + (uint32_t)(0x78dfu), c.b.x);
    // 1501:d364  mov word ptr [0x78e1], ax  [x248]
    c.w16(c.dsb + (uint32_t)(0x78e1u), c.a.x);
L2237a:
    if (c.tracing) c.traceAt(0x2237a);
    // 1501:d36a  mov ax, word ptr [0x78df]  [x500]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d370  mov word ptr [0x647d], ax  [x500]
    c.w16(c.dsb + (uint32_t)(0x647du), c.a.x);
    // 1501:d376  mov ax, word ptr [0x78dd]  [x500]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d37c  sub ax, word ptr [0x78db]  [x500]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78dbu)), false));
    // 1501:d383  cmp ax, 0  [x500]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:d386  jge 0xd38a  [x500]
    if ((c.sf == c.of)) goto L2239a;
L22398:
    if (c.tracing) c.traceAt(0x22398);
    // 1501:d388  neg ax  [x245]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L2239a:
    if (c.tracing) c.traceAt(0x2239a);
    // 1501:d38a  mov bx, word ptr [0x78e1]  [x500]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d391  sub bx, word ptr [0x78df]  [x500]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint32_t)(0x78dfu)), false));
    // 1501:d398  mov cx, word ptr [0x78db]  [x500]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d39f  cmp ax, bx  [x500]
    c.sub<16>(c.a.x, c.b.x, true);
    // 1501:d3a1  jb 0xd3b0  [x500]
    if (c.cf) goto L223c0;
L223b3:
    if (c.tracing) c.traceAt(0x223b3);
    // 1501:d3a3  cmp cx, word ptr [0x78dd]  [x243]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d3aa  ja 0xd3ae  [x243]
    if ((!c.cf && !c.zf)) goto L223be;
L223bc:
    if (c.tracing) c.traceAt(0x223bc);
    // 1501:d3ac  jmp 0xd3be  [x122]
    goto L223ce;
L223be:
    if (c.tracing) c.traceAt(0x223be);
    // 1501:d3ae  jmp 0xd3f6  [x121]
    goto L22406;
L223c0:
    if (c.tracing) c.traceAt(0x223c0);
    // 1501:d3b0  cmp cx, word ptr [0x78dd]  [x257]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d3b7  ja 0xd3bb  [x257]
    if ((!c.cf && !c.zf)) goto L223cb;
L223c9:
    if (c.tracing) c.traceAt(0x223c9);
    // 1501:d3b9  jmp 0xd42e  [x133]
    goto L2243e;
L223cb:
    if (c.tracing) c.traceAt(0x223cb);
    // 1501:d3bb  jmp 0xd45e  [x124]
    goto L2246e;
L223ce:
    if (c.tracing) c.traceAt(0x223ce);
    // 1501:d3be  mov di, word ptr [0x78db]  [x122]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d3c5  mov cx, ax  [x122]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d3c7  inc cx  [x122]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d3c8  cmp cx, 0  [x122]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d3cb  jne 0xd3ce  [x122]
    if (!c.zf) goto L223de;
    c.notTranslated(0x223dd, "fall-through");
L223de:
    if (c.tracing) c.traceAt(0x223de);
    // 1501:d3ce  mov si, bx  [x122]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d3d0  mov bx, ax  [x122]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d3d2  mov dx, ax  [x122]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d3d4  shr dx, 1  [x122]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d3d6  mov ax, word ptr [0x647d]  [x122]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L223ec:
    if (c.tracing) c.traceAt(0x223ec);
    // 1501:d3dc  mov word ptr cs:[bp + 8], di  [x5350]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x8u), c.di.x);
    // 1501:d3e1  mov word ptr cs:[bp + 0xa], ax  [x5350]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xau), c.a.x);
    // 1501:d3e6  add bp, 4  [x5350]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d3e9  inc di  [x5350]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:d3ea  add dx, si  [x5350]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d3ec  cmp dx, bx  [x5350]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d3ee  jb 0xd3f3  [x5350]
    if (c.cf) goto L22403;
L22400:
    if (c.tracing) c.traceAt(0x22400);
    // 1501:d3f0  sub dx, bx  [x2457]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d3f2  inc ax  [x2457]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L22403:
    if (c.tracing) c.traceAt(0x22403);
    // 1501:d3f3  loop 0xd3dc  [x5350]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L223ec;
L22405:
    if (c.tracing) c.traceAt(0x22405);
    // 1501:d3f5  ret   [x122]
    c.ip = c.pop16(); return;
L22406:
    if (c.tracing) c.traceAt(0x22406);
    // 1501:d3f6  mov di, word ptr [0x78db]  [x121]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d3fd  mov cx, ax  [x121]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d3ff  inc cx  [x121]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d400  cmp cx, 0  [x121]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d403  jne 0xd406  [x121]
    if (!c.zf) goto L22416;
    c.notTranslated(0x22415, "fall-through");
L22416:
    if (c.tracing) c.traceAt(0x22416);
    // 1501:d406  mov si, bx  [x121]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d408  mov bx, ax  [x121]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d40a  mov dx, ax  [x121]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d40c  shr dx, 1  [x121]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d40e  mov ax, word ptr [0x647d]  [x121]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L22424:
    if (c.tracing) c.traceAt(0x22424);
    // 1501:d414  mov word ptr cs:[bp + 8], di  [x6978]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x8u), c.di.x);
    // 1501:d419  mov word ptr cs:[bp + 0xa], ax  [x6978]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xau), c.a.x);
    // 1501:d41e  add bp, 4  [x6978]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d421  dec di  [x6978]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 1501:d422  add dx, si  [x6978]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d424  cmp dx, bx  [x6978]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d426  jb 0xd42b  [x6978]
    if (c.cf) goto L2243b;
L22438:
    if (c.tracing) c.traceAt(0x22438);
    // 1501:d428  sub dx, bx  [x2953]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d42a  inc ax  [x2953]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L2243b:
    if (c.tracing) c.traceAt(0x2243b);
    // 1501:d42b  loop 0xd414  [x6978]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22424;
L2243d:
    if (c.tracing) c.traceAt(0x2243d);
    // 1501:d42d  ret   [x121]
    c.ip = c.pop16(); return;
L2243e:
    if (c.tracing) c.traceAt(0x2243e);
    // 1501:d42e  mov di, word ptr [0x78db]  [x133]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d435  mov si, ax  [x133]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d437  mov cx, bx  [x133]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d439  inc cx  [x133]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d43a  mov dx, bx  [x133]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d43c  shr dx, 1  [x133]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d43e  mov ax, word ptr [0x647d]  [x133]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L22454:
    if (c.tracing) c.traceAt(0x22454);
    // 1501:d444  mov word ptr cs:[bp + 8], di  [x7299]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x8u), c.di.x);
    // 1501:d449  mov word ptr cs:[bp + 0xa], ax  [x7299]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xau), c.a.x);
    // 1501:d44e  add bp, 4  [x7299]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d451  inc ax  [x7299]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:d452  add dx, si  [x7299]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d454  cmp dx, bx  [x7299]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d456  jb 0xd45b  [x7299]
    if (c.cf) goto L2246b;
L22468:
    if (c.tracing) c.traceAt(0x22468);
    // 1501:d458  sub dx, bx  [x2886]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d45a  inc di  [x2886]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
L2246b:
    if (c.tracing) c.traceAt(0x2246b);
    // 1501:d45b  loop 0xd444  [x7299]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22454;
L2246d:
    if (c.tracing) c.traceAt(0x2246d);
    // 1501:d45d  ret   [x133]
    c.ip = c.pop16(); return;
L2246e:
    if (c.tracing) c.traceAt(0x2246e);
    // 1501:d45e  mov di, word ptr [0x78db]  [x124]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d465  mov si, ax  [x124]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d467  mov cx, bx  [x124]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d469  inc cx  [x124]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d46a  mov dx, bx  [x124]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d46c  shr dx, 1  [x124]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d46e  mov ax, word ptr [0x647d]  [x124]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L22484:
    if (c.tracing) c.traceAt(0x22484);
    // 1501:d474  mov word ptr cs:[bp + 8], di  [x6156]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x8u), c.di.x);
    // 1501:d479  mov word ptr cs:[bp + 0xa], ax  [x6156]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xau), c.a.x);
    // 1501:d47e  add bp, 4  [x6156]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d481  inc ax  [x6156]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:d482  add dx, si  [x6156]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d484  cmp dx, bx  [x6156]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d486  jb 0xd48b  [x6156]
    if (c.cf) goto L2249b;
L22498:
    if (c.tracing) c.traceAt(0x22498);
    // 1501:d488  sub dx, bx  [x2718]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d48a  dec di  [x2718]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
L2249b:
    if (c.tracing) c.traceAt(0x2249b);
    // 1501:d48b  loop 0xd474  [x6156]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22484;
L2249d:
    if (c.tracing) c.traceAt(0x2249d);
    // 1501:d48d  ret   [x124]
    c.ip = c.pop16(); return;
L2249e:
    if (c.tracing) c.traceAt(0x2249e);
    // 1501:d48e  mov ax, word ptr [0x78df]  [x468]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d494  cmp ax, word ptr [0x78e1]  [x468]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78e1u)), true);
    // 1501:d49b  jbe 0xd4d1  [x468]
    if ((c.cf || c.zf)) goto L224e1;
L224ad:
    if (c.tracing) c.traceAt(0x224ad);
    // 1501:d49d  mov ax, word ptr [0x78db]  [x222]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d4a3  mov bx, word ptr [0x78dd]  [x222]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d4aa  mov word ptr [0x78db], bx  [x222]
    c.w16(c.dsb + (uint32_t)(0x78dbu), c.b.x);
    // 1501:d4b1  mov word ptr [0x78dd], ax  [x222]
    c.w16(c.dsb + (uint32_t)(0x78ddu), c.a.x);
    // 1501:d4b7  mov ax, word ptr [0x78df]  [x222]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d4bd  mov bx, word ptr [0x78e1]  [x222]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d4c4  mov word ptr [0x78df], bx  [x222]
    c.w16(c.dsb + (uint32_t)(0x78dfu), c.b.x);
    // 1501:d4cb  mov word ptr [0x78e1], ax  [x222]
    c.w16(c.dsb + (uint32_t)(0x78e1u), c.a.x);
L224e1:
    if (c.tracing) c.traceAt(0x224e1);
    // 1501:d4d1  mov ax, word ptr [0x78df]  [x468]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dfu)));
    // 1501:d4d7  mov word ptr [0x647d], ax  [x468]
    c.w16(c.dsb + (uint32_t)(0x647du), c.a.x);
    // 1501:d4dd  mov ax, word ptr [0x78dd]  [x468]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78ddu)));
    // 1501:d4e3  sub ax, word ptr [0x78db]  [x468]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(0x78dbu)), false));
    // 1501:d4ea  cmp ax, 0  [x468]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:d4ed  jge 0xd4f1  [x468]
    if ((c.sf == c.of)) goto L22501;
L224ff:
    if (c.tracing) c.traceAt(0x224ff);
    // 1501:d4ef  neg ax  [x236]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L22501:
    if (c.tracing) c.traceAt(0x22501);
    // 1501:d4f1  mov bx, word ptr [0x78e1]  [x468]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78e1u)));
    // 1501:d4f8  sub bx, word ptr [0x78df]  [x468]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint32_t)(0x78dfu)), false));
    // 1501:d4ff  mov cx, word ptr [0x78db]  [x468]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d506  cmp ax, bx  [x468]
    c.sub<16>(c.a.x, c.b.x, true);
    // 1501:d508  jb 0xd517  [x468]
    if (c.cf) goto L22527;
L2251a:
    if (c.tracing) c.traceAt(0x2251a);
    // 1501:d50a  cmp cx, word ptr [0x78dd]  [x226]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d511  ja 0xd515  [x226]
    if ((!c.cf && !c.zf)) goto L22525;
L22523:
    if (c.tracing) c.traceAt(0x22523);
    // 1501:d513  jmp 0xd525  [x109]
    goto L22535;
L22525:
    if (c.tracing) c.traceAt(0x22525);
    // 1501:d515  jmp 0xd55d  [x117]
    goto L2256d;
L22527:
    if (c.tracing) c.traceAt(0x22527);
    // 1501:d517  cmp cx, word ptr [0x78dd]  [x242]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x78ddu)), true);
    // 1501:d51e  ja 0xd522  [x242]
    if ((!c.cf && !c.zf)) goto L22532;
L22530:
    if (c.tracing) c.traceAt(0x22530);
    // 1501:d520  jmp 0xd595  [x123]
    goto L225a5;
L22532:
    if (c.tracing) c.traceAt(0x22532);
    // 1501:d522  jmp 0xd5c5  [x119]
    goto L225d5;
L22535:
    if (c.tracing) c.traceAt(0x22535);
    // 1501:d525  mov di, word ptr [0x78db]  [x109]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d52c  mov cx, ax  [x109]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d52e  inc cx  [x109]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d52f  cmp cx, 0  [x109]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d532  jne 0xd535  [x109]
    if (!c.zf) goto L22545;
    c.notTranslated(0x22544, "fall-through");
L22545:
    if (c.tracing) c.traceAt(0x22545);
    // 1501:d535  mov si, bx  [x109]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d537  mov bx, ax  [x109]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d539  mov dx, ax  [x109]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d53b  shr dx, 1  [x109]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d53d  mov ax, word ptr [0x647d]  [x109]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L22553:
    if (c.tracing) c.traceAt(0x22553);
    // 1501:d543  mov word ptr cs:[bp - 0x7cb8], di  [x5157]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.di.x);
    // 1501:d548  mov word ptr cs:[bp - 0x7cb6], ax  [x5157]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.a.x);
    // 1501:d54d  add bp, 4  [x5157]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d550  inc di  [x5157]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 1501:d551  add dx, si  [x5157]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d553  cmp dx, bx  [x5157]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d555  jb 0xd55a  [x5157]
    if (c.cf) goto L2256a;
L22567:
    if (c.tracing) c.traceAt(0x22567);
    // 1501:d557  sub dx, bx  [x1860]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d559  inc ax  [x1860]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L2256a:
    if (c.tracing) c.traceAt(0x2256a);
    // 1501:d55a  loop 0xd543  [x5157]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22553;
L2256c:
    if (c.tracing) c.traceAt(0x2256c);
    // 1501:d55c  ret   [x109]
    c.ip = c.pop16(); return;
L2256d:
    if (c.tracing) c.traceAt(0x2256d);
    // 1501:d55d  mov di, word ptr [0x78db]  [x117]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d564  mov cx, ax  [x117]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:d566  inc cx  [x117]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d567  cmp cx, 0  [x117]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:d56a  jne 0xd56d  [x117]
    if (!c.zf) goto L2257d;
    c.notTranslated(0x2257c, "fall-through");
L2257d:
    if (c.tracing) c.traceAt(0x2257d);
    // 1501:d56d  mov si, bx  [x117]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:d56f  mov bx, ax  [x117]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d571  mov dx, ax  [x117]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d573  shr dx, 1  [x117]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d575  mov ax, word ptr [0x647d]  [x117]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L2258b:
    if (c.tracing) c.traceAt(0x2258b);
    // 1501:d57b  mov word ptr cs:[bp - 0x7cb8], di  [x6706]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.di.x);
    // 1501:d580  mov word ptr cs:[bp - 0x7cb6], ax  [x6706]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.a.x);
    // 1501:d585  add bp, 4  [x6706]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d588  dec di  [x6706]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 1501:d589  add dx, si  [x6706]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d58b  cmp dx, bx  [x6706]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d58d  jb 0xd592  [x6706]
    if (c.cf) goto L225a2;
L2259f:
    if (c.tracing) c.traceAt(0x2259f);
    // 1501:d58f  sub dx, bx  [x2708]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d591  inc ax  [x2708]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L225a2:
    if (c.tracing) c.traceAt(0x225a2);
    // 1501:d592  loop 0xd57b  [x6706]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2258b;
L225a4:
    if (c.tracing) c.traceAt(0x225a4);
    // 1501:d594  ret   [x117]
    c.ip = c.pop16(); return;
L225a5:
    if (c.tracing) c.traceAt(0x225a5);
    // 1501:d595  mov di, word ptr [0x78db]  [x123]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d59c  mov si, ax  [x123]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d59e  mov cx, bx  [x123]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d5a0  inc cx  [x123]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d5a1  mov dx, bx  [x123]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d5a3  shr dx, 1  [x123]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d5a5  mov ax, word ptr [0x647d]  [x123]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L225bb:
    if (c.tracing) c.traceAt(0x225bb);
    // 1501:d5ab  mov word ptr cs:[bp - 0x7cb8], di  [x6588]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.di.x);
    // 1501:d5b0  mov word ptr cs:[bp - 0x7cb6], ax  [x6588]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.a.x);
    // 1501:d5b5  add bp, 4  [x6588]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d5b8  inc ax  [x6588]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:d5b9  add dx, si  [x6588]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d5bb  cmp dx, bx  [x6588]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d5bd  jb 0xd5c2  [x6588]
    if (c.cf) goto L225d2;
L225cf:
    if (c.tracing) c.traceAt(0x225cf);
    // 1501:d5bf  sub dx, bx  [x2572]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d5c1  inc di  [x2572]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
L225d2:
    if (c.tracing) c.traceAt(0x225d2);
    // 1501:d5c2  loop 0xd5ab  [x6588]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L225bb;
L225d4:
    if (c.tracing) c.traceAt(0x225d4);
    // 1501:d5c4  ret   [x123]
    c.ip = c.pop16(); return;
L225d5:
    if (c.tracing) c.traceAt(0x225d5);
    // 1501:d5c5  mov di, word ptr [0x78db]  [x119]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x78dbu)));
    // 1501:d5cc  mov si, ax  [x119]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:d5ce  mov cx, bx  [x119]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:d5d0  inc cx  [x119]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:d5d1  mov dx, bx  [x119]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:d5d3  shr dx, 1  [x119]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 1501:d5d5  mov ax, word ptr [0x647d]  [x119]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x647du)));
L225eb:
    if (c.tracing) c.traceAt(0x225eb);
    // 1501:d5db  mov word ptr cs:[bp - 0x7cb8], di  [x6192]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.di.x);
    // 1501:d5e0  mov word ptr cs:[bp - 0x7cb6], ax  [x6192]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.a.x);
    // 1501:d5e5  add bp, 4  [x6192]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:d5e8  inc ax  [x6192]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:d5e9  add dx, si  [x6192]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:d5eb  cmp dx, bx  [x6192]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:d5ed  jb 0xd5f2  [x6192]
    if (c.cf) goto L22602;
L225ff:
    if (c.tracing) c.traceAt(0x225ff);
    // 1501:d5ef  sub dx, bx  [x2474]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:d5f1  dec di  [x2474]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
L22602:
    if (c.tracing) c.traceAt(0x22602);
    // 1501:d5f2  loop 0xd5db  [x6192]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L225eb;
L22604:
    if (c.tracing) c.traceAt(0x22604);
    // 1501:d5f4  ret   [x119]
    c.ip = c.pop16(); return;
L22605:
    if (c.tracing) c.traceAt(0x22605);
    // 1501:d5f5  inc word ptr [0]  [x20]
    c.w16(c.dsb + (uint32_t)(0u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0u)), false));
    // 1501:d5fc  mov si, word ptr [0x6cbd]  [x20]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6cbdu)));
    // 1501:d603  add word ptr [0x6cbd], 2  [x20]
    c.w16(c.dsb + (uint32_t)(0x6cbdu), c.add<16>(c.r16(c.dsb + (uint32_t)(0x6cbdu)), 0x2u, false));
    // 1501:d60b  cmp word ptr [0x6cbd], 8  [x20]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6cbdu)), 0x8u, true);
    // 1501:d613  jb 0xd61e  [x20]
    if (c.cf) goto L2262e;
L22625:
    if (c.tracing) c.traceAt(0x22625);
    // 1501:d615  mov word ptr [0x6cbd], 0  [x5]
    c.w16(c.dsb + (uint32_t)(0x6cbdu), 0x0u);
L2262e:
    if (c.tracing) c.traceAt(0x2262e);
    // 1501:d61e  mov si, word ptr [si + 0x6cb1]  [x20]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6cb1u)));
    // 1501:d622  mov cx, 0x4e  [x20]
    c.c.x = (uint16_t)(0x4eu);
    // 1501:d625  xor di, di  [x20]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L22637:
    if (c.tracing) c.traceAt(0x22637);
    // 1501:d627  mov ax, word ptr [si]  [x1560]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 1501:d629  mov word ptr [di + 0x6b93], ax  [x1560]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6b93u), c.a.x);
    // 1501:d62d  add si, 2  [x1560]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:d630  add di, 2  [x1560]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:d633  loop 0xd627  [x1560]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L22637;
L22645:
    if (c.tracing) c.traceAt(0x22645);
    // 1501:d635  mov cx, 0x20  [x20]
    c.c.x = (uint16_t)(0x20u);
    // 1501:d638  xor di, di  [x20]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L2264a:
    if (c.tracing) c.traceAt(0x2264a);
    // 1501:d63a  mov ax, word ptr [si]  [x640]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 1501:d63c  mov word ptr [di + 0x6c2f], ax  [x640]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6c2fu), c.a.x);
    // 1501:d640  mov ax, word ptr [si + 0x40]  [x640]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x40u)));
    // 1501:d643  mov word ptr [di + 0x6c6f], ax  [x640]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x6c6fu), c.a.x);
    // 1501:d647  add si, 2  [x640]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:d64a  add di, 2  [x640]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:d64d  loop 0xd63a  [x640]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2264a;
L2265f:
    if (c.tracing) c.traceAt(0x2265f);
    // 1501:d64f  add si, 0x40  [x20]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x40u, true));
    // 1501:d652  mov ax, word ptr [si]  [x20]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 1501:d654  mov word ptr [0x6caf], ax  [x20]
    c.w16(c.dsb + (uint32_t)(0x6cafu), c.a.x);
    // 1501:d65a  ret   [x20]
    c.ip = c.pop16(); return;
L2266b:
    if (c.tracing) c.traceAt(0x2266b);
    // 1501:d65b  mov cx, word ptr [0x22]  [x19]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22u)));
    // 1501:d662  cmp cx, word ptr [0x20]  [x19]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint32_t)(0x20u)), true);
    // 1501:d669  jae 0xd6a0  [x19]
    if (!c.cf) goto L226b0;
L2267b:
    if (c.tracing) c.traceAt(0x2267b);
    // 1501:d66b  mov cx, word ptr [0x20]  [x7]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x20u)));
    // 1501:d672  mov word ptr [0x24], cx  [x7]
    c.w16(c.dsb + (uint32_t)(0x24u), c.c.x);
    // 1501:d679  xor si, si  [x7]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:d67b  mov di, word ptr [0x22]  [x7]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x22u)));
L22692:
    if (c.tracing) c.traceAt(0x22692);
    // 1501:d682  mov ax, word ptr cs:[si + 8]  [x6212]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)));
    // 1501:d687  mov word ptr cs:[di + 8], ax  [x6212]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 1501:d68c  add si, 2  [x6212]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:d68f  add di, 2  [x6212]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:d692  cmp di, word ptr [0x24]  [x6212]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint32_t)(0x24u)), true);
    // 1501:d699  jb 0xd682  [x6212]
    if (c.cf) goto L22692;
L226ab:
    if (c.tracing) c.traceAt(0x226ab);
    // 1501:d69b  shr cx, 2  [x7]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), true));
    // 1501:d69e  jmp 0xd6aa  [x7]
    goto L226ba;
L226b0:
    if (c.tracing) c.traceAt(0x226b0);
    // 1501:d6a0  mov word ptr [0x24], cx  [x12]
    c.w16(c.dsb + (uint32_t)(0x24u), c.c.x);
    // 1501:d6a7  shr cx, 2  [x12]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), true));
L226ba:
    if (c.tracing) c.traceAt(0x226ba);
    // 1501:d6aa  xor si, si  [x19]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:d6ac  mov di, word ptr [0x24]  [x19]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x24u)));
L226c3:
    if (c.tracing) c.traceAt(0x226c3);
    // 1501:d6b3  mov ax, word ptr cs:[si + 8]  [x14449]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)));
    // 1501:d6b8  mov word ptr cs:[di + 8], ax  [x14449]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 1501:d6bd  mov ax, word ptr cs:[si + 0xa]  [x14449]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xau)));
    // 1501:d6c2  mov word ptr cs:[di + 0xa], ax  [x14449]
    c.w16(c.csb + (uint16_t)(c.di.x + 0xau), c.a.x);
    // 1501:d6c7  add si, 8  [x14449]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:d6ca  sub di, 8  [x14449]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x8u, false));
    // 1501:d6cd  cmp si, word ptr [0x24]  [x14449]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint32_t)(0x24u)), true);
    // 1501:d6d4  jb 0xd6b3  [x14449]
    if (c.cf) goto L226c3;
L226e6:
    if (c.tracing) c.traceAt(0x226e6);
    // 1501:d6d6  xor si, si  [x19]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:d6d8  xor di, di  [x19]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:d6da  xor bp, bp  [x19]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L226ec:
    if (c.tracing) c.traceAt(0x226ec);
    // 1501:d6dc  mov ax, word ptr cs:[di - 0x7cb8]  [x28889]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0xffff8348u)));
    // 1501:d6e1  sub ax, word ptr cs:[si + 8]  [x28889]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)), false));
    // 1501:d6e6  add ax, 0xc8  [x28889]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xc8u, false));
    // 1501:d6e9  mov bx, 0x40  [x28889]
    c.b.x = (uint16_t)(0x40u);
    // 1501:d6ec  mul bx  [x28889]
    c.mul16(c.b.x);
    // 1501:d6ee  mov bx, ax  [x28889]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d6f0  mov ax, word ptr cs:[di - 0x7cb6]  [x28889]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0xffff834au)));
    // 1501:d6f5  sub ax, word ptr cs:[si + 0xa]  [x28889]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0xau)), false));
    // 1501:d6fa  add ax, 0xc8  [x28889]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xc8u, false));
    // 1501:d6fd  mov dx, 0x40  [x28889]
    c.dx_.x = (uint16_t)(0x40u);
    // 1501:d700  mul dx  [x28889]
    c.mul16(c.dx_.x);
    // 1501:d702  mov dx, ax  [x28889]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:d704  mov word ptr cs:[bp + 0x41a8], bx  [x28889]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x41a8u), c.b.x);
    // 1501:d709  mov word ptr cs:[bp + 0x41aa], dx  [x28889]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0x41aau), c.dx_.x);
    // 1501:d70e  add di, 4  [x28889]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:d711  cmp di, word ptr [0x20]  [x28889]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint32_t)(0x20u)), true);
    // 1501:d718  jb 0xd71c  [x28889]
    if (c.cf) goto L2272c;
L2272a:
    if (c.tracing) c.traceAt(0x2272a);
    // 1501:d71a  xor di, di  [x20]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L2272c:
    if (c.tracing) c.traceAt(0x2272c);
    // 1501:d71c  add si, 4  [x28889]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:d71f  add bp, 4  [x28889]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, true));
    // 1501:d722  loop 0xd6dc  [x28889]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L226ec;
L22734:
    if (c.tracing) c.traceAt(0x22734);
    // 1501:d724  ret   [x19]
    c.ip = c.pop16(); return;
L22735:
    if (c.tracing) c.traceAt(0x22735);
    // 1501:d725  mov word ptr [0x6442], 0xff38  [x1]
    c.w16(c.dsb + (uint32_t)(0x6442u), 0xff38u);
    // 1501:d72e  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L22740:
    if (c.tracing) c.traceAt(0x22740);
    // 1501:d730  mov cx, 0x36  [x400]
    c.c.x = (uint16_t)(0x36u);
    // 1501:d733  mov word ptr [0x6444], 1  [x400]
    c.w16(c.dsb + (uint32_t)(0x6444u), 0x1u);
    // 1501:d73c  xor dx, dx  [x400]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:d73e  mov ax, word ptr [0x6442]  [x400]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6442u)));
    // 1501:d744  cmp word ptr [0x6442], 0  [x400]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x6442u)), 0x0u, true);
    // 1501:d74c  jns 0xd774  [x400]
    if (!c.sf) goto L22784;
L2275e:
    if (c.tracing) c.traceAt(0x2275e);
    // 1501:d74e  not dx  [x200]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:d750  neg word ptr [0x6444]  [x200]
    c.w16(c.dsb + (uint32_t)(0x6444u), c.neg<16>(c.r16(c.dsb + (uint32_t)(0x6444u)), false));
    // 1501:d757  idiv cx  [x200]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xd757u); }   // #DE: int 0, then again
    // 1501:d759  mov word ptr [0x6446], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x6446u), c.a.x);
    // 1501:d75f  neg dx  [x200]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:d761  mov word ptr [0x6448], dx  [x200]
    c.w16(c.dsb + (uint32_t)(0x6448u), c.dx_.x);
    // 1501:d768  neg ax  [x200]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:d76a  sar ax, 1  [x200]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:d76c  mov word ptr [0x644a], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x644au), c.a.x);
    // 1501:d772  jmp 0xd78e  [x200]
    goto L2279e;
L22784:
    if (c.tracing) c.traceAt(0x22784);
    // 1501:d774  idiv cx  [x200]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xd774u); }   // #DE: int 0, then again
    // 1501:d776  mov word ptr [0x6446], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x6446u), c.a.x);
    // 1501:d77c  mov word ptr [0x6448], dx  [x200]
    c.w16(c.dsb + (uint32_t)(0x6448u), c.dx_.x);
    // 1501:d783  mov ax, 0x36  [x200]
    c.a.x = (uint16_t)(0x36u);
    // 1501:d786  sar ax, 1  [x200]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:d788  mov word ptr [0x644a], ax  [x200]
    c.w16(c.dsb + (uint32_t)(0x644au), c.a.x);
L2279e:
    if (c.tracing) c.traceAt(0x2279e);
    // 1501:d78e  xor bx, bx  [x400]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:d790  mov cx, 0x36  [x400]
    c.c.x = (uint16_t)(0x36u);
L227a3:
    if (c.tracing) c.traceAt(0x227a3);
    // 1501:d793  mov dx, 0  [x21600]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:d796  add dx, word ptr [0x6446]  [x21600]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(0x6446u)), false));
    // 1501:d79d  mov ax, word ptr [0x6448]  [x21600]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x6448u)));
    // 1501:d7a3  add word ptr [0x644a], ax  [x21600]
    c.w16(c.dsb + (uint32_t)(0x644au), c.add<16>(c.r16(c.dsb + (uint32_t)(0x644au)), c.a.x, false));
    // 1501:d7aa  cmp word ptr [0x644a], 0x36  [x21600]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0x644au)), 0x36u, true);
    // 1501:d7b2  jl 0xd7c3  [x21600]
    if ((c.sf != c.of)) goto L227d3;
L227c4:
    if (c.tracing) c.traceAt(0x227c4);
    // 1501:d7b4  sub word ptr [0x644a], 0x36  [x10030]
    c.w16(c.dsb + (uint32_t)(0x644au), c.sub<16>(c.r16(c.dsb + (uint32_t)(0x644au)), 0x36u, false));
    // 1501:d7bc  add dx, word ptr [0x6444]  [x10030]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(0x6444u)), true));
L227d3:
    if (c.tracing) c.traceAt(0x227d3);
    // 1501:d7c3  mov byte ptr [bx + di + 0x42], dl  [x21600]
    c.w8(c.dsb + (uint16_t)(c.b.x + c.di.x + 0x42u), c.dx_.l);
    // 1501:d7c7  inc bx  [x21600]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 1501:d7c8  loop 0xd793  [x21600]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L227a3;
L227da:
    if (c.tracing) c.traceAt(0x227da);
    // 1501:d7ca  add di, 0x40  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x40u, false));
    // 1501:d7cd  inc word ptr [0x6442]  [x400]
    c.w16(c.dsb + (uint32_t)(0x6442u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0x6442u)), false));
    // 1501:d7d4  cmp di, 0x6400  [x400]
    c.sub<16>(c.di.x, 0x6400u, true);
    // 1501:d7d8  jb 0xd730  [x400]
    if (c.cf) goto L22740;
L227ec:
    if (c.tracing) c.traceAt(0x227ec);
    // 1501:d7dc  ret   [x1]
    c.ip = c.pop16(); return;
L227ed:
    if (c.tracing) c.traceAt(0x227ed);
    // 1501:d7dd  mov bp, word ptr [0x7479]  [x461]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0x7479u)));
    // 1501:d7e4  xor si, si  [x461]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L227f6:
    if (c.tracing) c.traceAt(0x227f6);
    // 1501:d7e6  mov di, word ptr cs:[si + 0xa]  [x691931]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xau)));
    // 1501:d7eb  rol di, 1  [x691931]
    c.di.x = (uint16_t)(c.rol<16>(c.di.x, (int)((0x1u) & 31), false));
    // 1501:d7ed  mov di, word ptr [di + 0x747b]  [x691931]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d7f1  mov ax, word ptr cs:[si + 8]  [x691931]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)));
    // 1501:d7f6  mov bx, ax  [x691931]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:d7f8  shr ax, 3  [x691931]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:d7fb  add di, ax  [x691931]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 1501:d7fd  mov al, byte ptr [bx + 0x779b]  [x691931]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x779bu)));
    // 1501:d801  or byte ptr es:[di], al  [x691931]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d804  mov word ptr gs:[bp], di  [x691931]
    c.w16(c.gsb + (uint16_t)(c.bp.x), c.di.x);
    // 1501:d808  add bp, 2  [x691931]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:d80b  mov di, word ptr cs:[si + 0x41a8]  [x691931]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x41a8u)));
    // 1501:d810  inc word ptr cs:[si + 0x41a8]  [x691931]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x41a8u), c.inc<16>(c.r16(c.csb + (uint16_t)(c.si.x + 0x41a8u)), false));
    // 1501:d815  mov al, byte ptr [di + 0x42]  [x691931]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x42u)));
    // 1501:d819  cwde   [x691931]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:d81a  add word ptr cs:[si + 8], ax  [x691931]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x8u), c.add<16>(c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)), c.a.x, false));
    // 1501:d81f  mov di, word ptr cs:[si + 0x41aa]  [x691931]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x41aau)));
    // 1501:d824  inc word ptr cs:[si + 0x41aa]  [x691931]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x41aau), c.inc<16>(c.r16(c.csb + (uint16_t)(c.si.x + 0x41aau)), false));
    // 1501:d829  mov al, byte ptr [di + 0x42]  [x691931]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x42u)));
    // 1501:d82d  cwde   [x691931]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:d82e  add word ptr cs:[si + 0xa], ax  [x691931]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xau), c.add<16>(c.r16(c.csb + (uint16_t)(c.si.x + 0xau)), c.a.x, false));
    // 1501:d833  add si, 4  [x691931]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:d836  cmp si, word ptr [0x24]  [x691931]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint32_t)(0x24u)), true);
    // 1501:d83d  jb 0xd7e6  [x691931]
    if (c.cf) goto L227f6;
L2284f:
    if (c.tracing) c.traceAt(0x2284f);
    // 1501:d83f  ret   [x461]
    c.ip = c.pop16(); return;
L22850:
    if (c.tracing) c.traceAt(0x22850);
    // 1501:d840  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 1501:d843  mov cx, 3  [x1]
    c.c.x = (uint16_t)(0x3u);
    // 1501:d846  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:d848  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L2285a:
    if (c.tracing) c.traceAt(0x2285a);
    // 1501:d84a  mov ax, word ptr [di + 0x648b]  [x6]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x648bu)));
    // 1501:d84e  imul bx  [x6]
    c.imul16(c.b.x);
    // 1501:d850  idiv cx  [x6]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xd850u); }   // #DE: int 0, then again
    // 1501:d852  mov word ptr [si + 0x6efb], ax  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6efbu), c.a.x);
    // 1501:d856  mov word ptr [si + 0x6f25], ax  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6f25u), c.a.x);
    // 1501:d85a  mov ax, word ptr [di + 0x65f3]  [x6]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x65f3u)));
    // 1501:d85e  imul bx  [x6]
    c.imul16(c.b.x);
    // 1501:d860  idiv cx  [x6]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xd860u); }   // #DE: int 0, then again
    // 1501:d862  mov word ptr [si + 0x6efd], ax  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6efdu), c.a.x);
    // 1501:d866  mov word ptr [si + 0x6f27], ax  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6f27u), c.a.x);
    // 1501:d86a  mov word ptr [si + 0x6eff], 0x64  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6effu), 0x64u);
    // 1501:d870  mov word ptr [si + 0x6f29], 0xff9c  [x6]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x6f29u), 0xff9cu);
    // 1501:d876  add di, 0xf0  [x6]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xf0u, false));
    // 1501:d87a  add si, 6  [x6]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x6u, false));
    // 1501:d87d  cmp si, 0x24  [x6]
    c.sub<16>(c.si.x, 0x24u, true);
    // 1501:d880  jb 0xd84a  [x6]
    if (c.cf) goto L2285a;
L22892:
    if (c.tracing) c.traceAt(0x22892);
    // 1501:d882  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L22894:
    if (c.tracing) c.traceAt(0x22894);
    // 1501:d884  mov ax, word ptr [si + 0x7019]  [x51]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7019u)));
    // 1501:d888  mov bx, 3  [x51]
    c.b.x = (uint16_t)(0x3u);
    // 1501:d88b  imul bx  [x51]
    c.imul16(c.b.x);
    // 1501:d88d  mov bx, 2  [x51]
    c.b.x = (uint16_t)(0x2u);
    // 1501:d890  idiv bx  [x51]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0xd890u); }   // #DE: int 0, then again
    // 1501:d892  add si, 2  [x51]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:d895  cmp si, 0x66  [x51]
    c.sub<16>(c.si.x, 0x66u, true);
    // 1501:d898  jb 0xd884  [x51]
    if (c.cf) goto L22894;
L228aa:
    if (c.tracing) c.traceAt(0x228aa);
    // 1501:d89a  ret   [x1]
    c.ip = c.pop16(); return;
L228ab:
    if (c.tracing) c.traceAt(0x228ab);
    // 1501:d89b  mov ax, 0x4f  [x1]
    c.a.x = (uint16_t)(0x4fu);
    // 1501:d89e  mov bx, 0x1a  [x1]
    c.b.x = (uint16_t)(0x1au);
    // 1501:d8a1  mov cx, 0xa1  [x1]
    c.c.x = (uint16_t)(0xa1u);
L228b4:
    if (c.tracing) c.traceAt(0x228b4);
    // 1501:d8a4  mov word ptr cs:[bp - 0x7cb8], ax  [x161]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.a.x);
    // 1501:d8a9  mov word ptr cs:[bp - 0x7cb6], bx  [x161]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.b.x);
    // 1501:d8ae  inc ax  [x161]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:d8af  add bp, 4  [x161]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, true));
    // 1501:d8b2  loop 0xd8a4  [x161]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L228b4;
L228c4:
    if (c.tracing) c.traceAt(0x228c4);
    // 1501:d8b4  mov ax, 0xf0  [x1]
    c.a.x = (uint16_t)(0xf0u);
    // 1501:d8b7  mov bx, 0x1a  [x1]
    c.b.x = (uint16_t)(0x1au);
    // 1501:d8ba  mov cx, 0x93  [x1]
    c.c.x = (uint16_t)(0x93u);
L228cd:
    if (c.tracing) c.traceAt(0x228cd);
    // 1501:d8bd  mov word ptr cs:[bp - 0x7cb8], ax  [x147]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.a.x);
    // 1501:d8c2  mov word ptr cs:[bp - 0x7cb6], bx  [x147]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.b.x);
    // 1501:d8c7  inc bx  [x147]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 1501:d8c8  add bp, 4  [x147]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, true));
    // 1501:d8cb  loop 0xd8bd  [x147]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L228cd;
L228dd:
    if (c.tracing) c.traceAt(0x228dd);
    // 1501:d8cd  mov ax, 0xf0  [x1]
    c.a.x = (uint16_t)(0xf0u);
    // 1501:d8d0  mov bx, 0xad  [x1]
    c.b.x = (uint16_t)(0xadu);
    // 1501:d8d3  mov cx, 0xa1  [x1]
    c.c.x = (uint16_t)(0xa1u);
L228e6:
    if (c.tracing) c.traceAt(0x228e6);
    // 1501:d8d6  mov word ptr cs:[bp - 0x7cb8], ax  [x161]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.a.x);
    // 1501:d8db  mov word ptr cs:[bp - 0x7cb6], bx  [x161]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.b.x);
    // 1501:d8e0  dec ax  [x161]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, false));
    // 1501:d8e1  add bp, 4  [x161]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, true));
    // 1501:d8e4  loop 0xd8d6  [x161]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L228e6;
L228f6:
    if (c.tracing) c.traceAt(0x228f6);
    // 1501:d8e6  mov ax, 0x4f  [x1]
    c.a.x = (uint16_t)(0x4fu);
    // 1501:d8e9  mov bx, 0xad  [x1]
    c.b.x = (uint16_t)(0xadu);
    // 1501:d8ec  mov cx, 0x93  [x1]
    c.c.x = (uint16_t)(0x93u);
L228ff:
    if (c.tracing) c.traceAt(0x228ff);
    // 1501:d8ef  mov word ptr cs:[bp - 0x7cb8], ax  [x147]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff8348u), c.a.x);
    // 1501:d8f4  mov word ptr cs:[bp - 0x7cb6], bx  [x147]
    c.w16(c.csb + (uint16_t)(c.bp.x + 0xffff834au), c.b.x);
    // 1501:d8f9  dec bx  [x147]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 1501:d8fa  add bp, 4  [x147]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, true));
    // 1501:d8fd  loop 0xd8ef  [x147]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L228ff;
L2290f:
    if (c.tracing) c.traceAt(0x2290f);
    // 1501:d8ff  ret   [x1]
    c.ip = c.pop16(); return;
L22910:
    if (c.tracing) c.traceAt(0x22910);
    // 1501:d900  xor si, si  [x7]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L22912:
    if (c.tracing) c.traceAt(0x22912);
    // 1501:d902  mov di, word ptr cs:[si - 0x7cb6]  [x4312]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xffff834au)));
    // 1501:d907  add di, di  [x4312]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:d909  mov di, word ptr [di + 0x747b]  [x4312]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x747bu)));
    // 1501:d90d  mov bx, word ptr cs:[si - 0x7cb8]  [x4312]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0xffff8348u)));
    // 1501:d912  mov al, byte ptr [bx + 0x779b]  [x4312]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x779bu)));
    // 1501:d916  shr bx, 3  [x4312]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:d919  add di, bx  [x4312]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:d91b  or byte ptr es:[di], al  [x4312]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:d91e  add si, 4  [x4312]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:d921  cmp si, 0x9a0  [x4312]
    c.sub<16>(c.si.x, 0x9a0u, true);
    // 1501:d925  jb 0xd902  [x4312]
    if (c.cf) goto L22912;
L22937:
    if (c.tracing) c.traceAt(0x22937);
    // 1501:d927  ret   [x7]
    c.ip = c.pop16(); return;
L22946:
    if (c.tracing) c.traceAt(0x22946);
    // 1501:d936  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_9(9, {0x15010, 0x21c04, 0x21c20, 0x21c30, 0x21c32, 0x21c38, 0x21c41, 0x21c52, 0x21c54, 0x21c57, 0x21c5a, 0x21c5d, 0x21c70, 0x21c78, 0x21cb8, 0x21cca, 0x21ccd, 0x21cce, 0x21cd2, 0x21cd3, 0x21cd7, 0x21ce1, 0x21cf2, 0x21d01, 0x21d03, 0x21d0a, 0x21d40, 0x21d4e, 0x21d58, 0x21d66, 0x21d76, 0x21d80, 0x21d8c, 0x21d8f, 0x21da0, 0x21da3, 0x21da5, 0x21da8, 0x21db9, 0x21dbc, 0x21dd3, 0x21dd6, 0x21de9, 0x21df2, 0x21e06, 0x21e0f, 0x21e12, 0x21e15, 0x21e2a, 0x21e2d, 0x21e2f, 0x21e32, 0x21e39, 0x21e43, 0x21e46, 0x21e50, 0x21e5a, 0x21e5d, 0x21e6a, 0x21e74, 0x21e7c, 0x21e86, 0x21e8f, 0x21ea2, 0x21eab, 0x21ebe, 0x21ec7, 0x21eda, 0x21ee3, 0x21f05, 0x21f1f, 0x21f37, 0x21f3f, 0x21f4e, 0x21f58, 0x21f5d, 0x21f7c, 0x21f85, 0x21f90, 0x21fc3, 0x21fc6, 0x21fc8, 0x220b8, 0x220bb, 0x220bc, 0x220c0, 0x220fd, 0x220fe, 0x22100, 0x2213c, 0x22149, 0x2214a, 0x22159, 0x2218d, 0x221ab, 0x221ad, 0x221c6, 0x221cf, 0x221d1, 0x221d3, 0x221dc, 0x221df, 0x221e3, 0x221f9, 0x2221f, 0x2222d, 0x2222e, 0x22234, 0x22239, 0x2223b, 0x2223c, 0x22252, 0x22278, 0x22286, 0x22287, 0x2228d, 0x22292, 0x22294, 0x22295, 0x222c9, 0x222dc, 0x222e2, 0x222e3, 0x222e5, 0x222e6, 0x2231a, 0x2232d, 0x22333, 0x22334, 0x22336, 0x22337, 0x22346, 0x2237a, 0x22398, 0x2239a, 0x223b3, 0x223bc, 0x223be, 0x223c0, 0x223c9, 0x223cb, 0x223ce, 0x223de, 0x223ec, 0x22400, 0x22403, 0x22405, 0x22406, 0x22416, 0x22424, 0x22438, 0x2243b, 0x2243d, 0x2243e, 0x22454, 0x22468, 0x2246b, 0x2246d, 0x2246e, 0x22484, 0x22498, 0x2249b, 0x2249d, 0x2249e, 0x224ad, 0x224e1, 0x224ff, 0x22501, 0x2251a, 0x22523, 0x22525, 0x22527, 0x22530, 0x22532, 0x22535, 0x22545, 0x22553, 0x22567, 0x2256a, 0x2256c, 0x2256d, 0x2257d, 0x2258b, 0x2259f, 0x225a2, 0x225a4, 0x225a5, 0x225bb, 0x225cf, 0x225d2, 0x225d4, 0x225d5, 0x225eb, 0x225ff, 0x22602, 0x22604, 0x22605, 0x22625, 0x2262e, 0x22637, 0x22645, 0x2264a, 0x2265f, 0x2266b, 0x2267b, 0x22692, 0x226ab, 0x226b0, 0x226ba, 0x226c3, 0x226e6, 0x226ec, 0x2272a, 0x2272c, 0x22734, 0x22735, 0x22740, 0x2275e, 0x22784, 0x2279e, 0x227a3, 0x227c4, 0x227d3, 0x227da, 0x227ec, 0x227ed, 0x227f6, 0x2284f, 0x22850, 0x2285a, 0x22892, 0x22894, 0x228aa, 0x228ab, 0x228b4, 0x228c4, 0x228cd, 0x228dd, 0x228e6, 0x228f6, 0x228ff, 0x2290f, 0x22910, 0x22912, 0x22937, 0x22946}, code_9);

}  // namespace show
