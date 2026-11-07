// Part 29 (HAM.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_30(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x17ef4: goto L17ef4;
    case 0x17f11: goto L17f11;
    case 0x17f13: goto L17f13;
    case 0x17f21: goto L17f21;
    case 0x17f23: goto L17f23;
    case 0x17f2d: goto L17f2d;
    case 0x17f32: goto L17f32;
    case 0x17f4e: goto L17f4e;
    case 0x17f51: goto L17f51;
    case 0x17f5c: goto L17f5c;
    case 0x17f5f: goto L17f5f;
    case 0x17f62: goto L17f62;
    case 0x17f77: goto L17f77;
    case 0x17f7a: goto L17f7a;
    case 0x17f7d: goto L17f7d;
    case 0x17f80: goto L17f80;
    case 0x17f83: goto L17f83;
    case 0x17f98: goto L17f98;
    case 0x17f9a: goto L17f9a;
    case 0x17fb1: goto L17fb1;
    case 0x17fb7: goto L17fb7;
    case 0x17fcd: goto L17fcd;
    case 0x17fd3: goto L17fd3;
    case 0x17fe9: goto L17fe9;
    case 0x17fef: goto L17fef;
    case 0x17ff2: goto L17ff2;
    case 0x17ffb: goto L17ffb;
    case 0x18005: goto L18005;
    case 0x18086: goto L18086;
    case 0x18095: goto L18095;
    case 0x1809c: goto L1809c;
    case 0x180ab: goto L180ab;
    case 0x180b2: goto L180b2;
    case 0x180c1: goto L180c1;
    case 0x180c8: goto L180c8;
    case 0x180d7: goto L180d7;
    case 0x180de: goto L180de;
    case 0x180ed: goto L180ed;
    case 0x180f4: goto L180f4;
    case 0x18103: goto L18103;
    case 0x1810a: goto L1810a;
    case 0x18119: goto L18119;
    case 0x18120: goto L18120;
    case 0x18129: goto L18129;
    case 0x18131: goto L18131;
    case 0x18138: goto L18138;
    case 0x18147: goto L18147;
    case 0x1814e: goto L1814e;
    case 0x18156: goto L18156;
    case 0x1815d: goto L1815d;
    case 0x18162: goto L18162;
    case 0x18179: goto L18179;
    case 0x1817c: goto L1817c;
    case 0x18189: goto L18189;
    case 0x18196: goto L18196;
    case 0x1819e: goto L1819e;
    case 0x181a3: goto L181a3;
    case 0x181ab: goto L181ab;
    case 0x181b4: goto L181b4;
    case 0x181b9: goto L181b9;
    case 0x181c2: goto L181c2;
    case 0x181cb: goto L181cb;
    case 0x181d0: goto L181d0;
    case 0x181d9: goto L181d9;
    case 0x181e2: goto L181e2;
    case 0x181e7: goto L181e7;
    case 0x181f0: goto L181f0;
    case 0x181f9: goto L181f9;
    case 0x181fe: goto L181fe;
    case 0x18207: goto L18207;
    case 0x18210: goto L18210;
    case 0x18215: goto L18215;
    case 0x1821e: goto L1821e;
    case 0x18227: goto L18227;
    case 0x1822c: goto L1822c;
    case 0x18235: goto L18235;
    case 0x1823e: goto L1823e;
    case 0x18243: goto L18243;
    case 0x1824c: goto L1824c;
    case 0x18255: goto L18255;
    case 0x1825a: goto L1825a;
    case 0x18263: goto L18263;
    case 0x18271: goto L18271;
    case 0x18274: goto L18274;
    case 0x18277: goto L18277;
    case 0x18282: goto L18282;
    case 0x182b9: goto L182b9;
    case 0x182bf: goto L182bf;
    case 0x182ca: goto L182ca;
    case 0x182d0: goto L182d0;
    case 0x182da: goto L182da;
    case 0x182e4: goto L182e4;
    case 0x182e6: goto L182e6;
    case 0x182e7: goto L182e7;
    case 0x18310: goto L18310;
    case 0x18327: goto L18327;
    case 0x18328: goto L18328;
    case 0x18353: goto L18353;
    case 0x1836a: goto L1836a;
    case 0x1836b: goto L1836b;
    case 0x18396: goto L18396;
    case 0x183ad: goto L183ad;
    case 0x183ae: goto L183ae;
    case 0x183db: goto L183db;
    case 0x183f2: goto L183f2;
    case 0x183f3: goto L183f3;
    case 0x18406: goto L18406;
    case 0x18492: goto L18492;
    case 0x18495: goto L18495;
    case 0x18496: goto L18496;
    case 0x184a0: goto L184a0;
    case 0x184b7: goto L184b7;
    case 0x184b8: goto L184b8;
    case 0x184c1: goto L184c1;
    case 0x184f7: goto L184f7;
    case 0x1850d: goto L1850d;
    case 0x18526: goto L18526;
    case 0x18531: goto L18531;
    case 0x18539: goto L18539;
    case 0x1854a: goto L1854a;
    case 0x1854f: goto L1854f;
    case 0x18560: goto L18560;
    case 0x18561: goto L18561;
    case 0x18588: goto L18588;
    case 0x18589: goto L18589;
    case 0x1858d: goto L1858d;
    case 0x1858e: goto L1858e;
    case 0x18592: goto L18592;
    case 0x18595: goto L18595;
    case 0x18596: goto L18596;
    case 0x185a6: goto L185a6;
    case 0x185a9: goto L185a9;
    case 0x185b3: goto L185b3;
    case 0x185be: goto L185be;
    case 0x185c7: goto L185c7;
    case 0x185df: goto L185df;
    case 0x18611: goto L18611;
    case 0x18612: goto L18612;
    case 0x18637: goto L18637;
    case 0x18638: goto L18638;
    case 0x18666: goto L18666;
    case 0x18668: goto L18668;
    case 0x1866e: goto L1866e;
    case 0x1866f: goto L1866f;
    case 0x18673: goto L18673;
    case 0x18674: goto L18674;
    case 0x18678: goto L18678;
    case 0x1867a: goto L1867a;
    case 0x18680: goto L18680;
    case 0x18682: goto L18682;
    case 0x18690: goto L18690;
    case 0x18691: goto L18691;
    case 0x18699: goto L18699;
    case 0x1869d: goto L1869d;
    case 0x186b3: goto L186b3;
    case 0x186b9: goto L186b9;
    case 0x18707: goto L18707;
    case 0x1870b: goto L1870b;
    case 0x18721: goto L18721;
    case 0x18727: goto L18727;
    case 0x18777: goto L18777;
    case 0x18790: goto L18790;
    case 0x18798: goto L18798;
    case 0x1879a: goto L1879a;
    case 0x187a2: goto L187a2;
    case 0x187a4: goto L187a4;
    case 0x187ac: goto L187ac;
    case 0x187ae: goto L187ae;
    case 0x187b4: goto L187b4;
    case 0x187b6: goto L187b6;
    case 0x187b7: goto L187b7;
    case 0x187cd: goto L187cd;
    case 0x187d3: goto L187d3;
    case 0x187d5: goto L187d5;
    case 0x187d6: goto L187d6;
    case 0x187d9: goto L187d9;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x2ee4  [x1]
    goto L17ef4;
L17ef4:
    if (c.tracing) c.traceAt(0x17ef4);
    // 1501:2ee4  mov word ptr cs:[0x2ee0], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x2ee0u), c.c.x);
    // 1501:2ee9  mov word ptr cs:[0x2ee2], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x2ee2u), c.dx_.x);
    // 1501:2eee  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 1501:2ef0  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:2ef3  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 1501:2ef5  sub ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x1000u, false));
    // 1501:2ef8  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:2efa  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:2efc  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:2eff  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L17f11:
    if (c.tracing) c.traceAt(0x17f11);
    // 1501:2f01  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L17f13:
    if (c.tracing) c.traceAt(0x17f13);
    // 1501:2f03  mov ax, es  [x1]
    c.a.x = (uint16_t)(c.es);
    // 1501:2f05  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:2f08  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:2f0a  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:2f0c  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:2f0f  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L17f21:
    if (c.tracing) c.traceAt(0x17f21);
    // 1501:2f11  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L17f23:
    if (c.tracing) c.traceAt(0x17f23);
    // 1501:2f13  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:2f16  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:2f18  mov ax, 0x12  [x1]
    c.a.x = (uint16_t)(0x12u);
    // 1501:2f1b  int 0x10  [x1]
    c.ip = 0x2f1du; c.d32 = false; c.intr(0x10, 0x2f1du);
L17f2d:
    if (c.tracing) c.traceAt(0x17f2d);
    // 1501:2f1d  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:2f20  int 0x10  [x1]
    c.ip = 0x2f22u; c.d32 = false; c.intr(0x10, 0x2f22u);
L17f32:
    if (c.tracing) c.traceAt(0x17f32);
    // 1501:2f22  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:2f25  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:2f28  out dx, ax  [x1]
    c.ip = 0x2f29u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2f29  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:2f2c  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:2f2f  out dx, ax  [x1]
    c.ip = 0x2f30u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2f30  mov ax, 0xe317  [x1]
    c.a.x = (uint16_t)(0xe317u);
    // 1501:2f33  out dx, ax  [x1]
    c.ip = 0x2f34u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2f34  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:2f37  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:2f39  out dx, al  [x1]
    c.ip = 0x2f3au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:2f3a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:2f3b  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L17f4e:
    if (c.tracing) c.traceAt(0x17f4e);
    // 1501:2f3e  out dx, al  [x768]
    c.ip = 0x2f3fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:2f3f  loop 0x2f3e  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L17f4e;
L17f51:
    if (c.tracing) c.traceAt(0x17f51);
    // 1501:2f41  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:2f44  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 1501:2f46  mov ah, 3  [x1]
    c.a.h = (uint8_t)(0x3u);
    // 1501:2f48  out dx, ax  [x1]
    c.ip = 0x2f49u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:2f49  call 0x3486  [x1]
    c.push16(0x2f4cu); code_30(c, 0x18496u); if (c.ip != 0x2f4cu) c.badReturn(0x17f59);
L17f5c:
    if (c.tracing) c.traceAt(0x17f5c);
    // 1501:2f4c  call 0x34a8  [x1]
    c.push16(0x2f4fu); code_30(c, 0x184b8u); if (c.ip != 0x2f4fu) c.badReturn(0x17f5c);
L17f5f:
    if (c.tracing) c.traceAt(0x17f5f);
    // 1501:2f4f  call 0x3681  [x1]
    c.push16(0x2f52u); code_30(c, 0x18691u); if (c.ip != 0x2f52u) c.badReturn(0x17f5f);
L17f62:
    if (c.tracing) c.traceAt(0x17f62);
    // 1501:2f52  push es  [x544]
    c.ip = 0x2f52u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:2f53  mov ax, word ptr cs:[0x2ee0]  [x544]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2ee0u)));
    // 1501:2f57  mov es, ax  [x544]
    c.loadEs(c.a.x);
    // 1501:2f59  mov si, word ptr cs:[0x2ee2]  [x544]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2ee2u)));
    // 1501:2f5e  mov dx, word ptr es:[si]  [x544]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:2f61  pop es  [x544]
    c.loadEs((uint16_t)c.pop16());
    // 1501:2f62  cmp dx, 0  [x544]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:2f65  je 0x2f52  [x544]
    if (c.zf) goto L17f62;
L17f77:
    if (c.tracing) c.traceAt(0x17f77);
    // 1501:2f67  call 0x3551  [x1]
    c.push16(0x2f6au); code_30(c, 0x18561u); if (c.ip != 0x2f6au) c.badReturn(0x17f77);
L17f7a:
    if (c.tracing) c.traceAt(0x17f7a);
    // 1501:2f6a  call 0x35cf  [x1]
    c.push16(0x2f6du); code_30(c, 0x185dfu); if (c.ip != 0x2f6du) c.badReturn(0x17f7a);
L17f7d:
    if (c.tracing) c.traceAt(0x17f7d);
    // 1501:2f6d  call 0x37a7  [x1487]
    c.push16(0x2f70u); code_30(c, 0x187b7u); if (c.ip != 0x2f70u) c.badReturn(0x17f7d);
L17f80:
    if (c.tracing) c.traceAt(0x17f80);
    // 1501:2f70  call 0x3551  [x1487]
    c.push16(0x2f73u); code_30(c, 0x18561u); if (c.ip != 0x2f73u) c.badReturn(0x17f80);
L17f83:
    if (c.tracing) c.traceAt(0x17f83);
    // 1501:2f73  push ds  [x1487]
    c.push16(c.ds);
    // 1501:2f74  push cs  [x1487]
    c.push16(c.cs);
    // 1501:2f75  pop ds  [x1487]
    c.loadDs((uint16_t)c.pop16());
    // 1501:2f76  mov dx, 0x3c8  [x1487]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:2f79  mov al, 1  [x1487]
    c.a.l = (uint8_t)(0x1u);
    // 1501:2f7b  out dx, al  [x1487]
    c.ip = 0x2f7cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:2f7c  inc dx  [x1487]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:2f7d  mov si, 0xb  [x1487]
    c.si.x = (uint16_t)(0xbu);
    // 1501:2f80  add si, word ptr cs:[0x1e0a]  [x1487]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x1e0au)), true));
    // 1501:2f85  mov cx, 0x2fd  [x1487]
    c.c.x = (uint16_t)(0x2fdu);
L17f98:
    if (c.tracing) c.traceAt(0x17f98);
    // 1501:2f88  rep outsb dx, byte ptr [si]  [x1139042]
    c.ip = 0x2f8au; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L17f9a:
    if (c.tracing) c.traceAt(0x17f9a);
    // 1501:2f8a  pop ds  [x1487]
    c.loadDs((uint16_t)c.pop16());
    // 1501:2f8b  mov ax, word ptr cs:[0x20a6]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20a6u)));
    // 1501:2f8f  mov word ptr cs:[0x20b2], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b2u), c.a.x);
    // 1501:2f93  mov ax, word ptr cs:[0x20ac]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20acu)));
    // 1501:2f97  mov word ptr cs:[0x20b4], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b4u), c.a.x);
    // 1501:2f9b  mov si, 0  [x1487]
    c.si.x = (uint16_t)(0x0u);
    // 1501:2f9e  call 0x33e3  [x1487]
    c.push16(0x2fa1u); code_30(c, 0x183f3u); if (c.ip != 0x2fa1u) c.badReturn(0x17fae);
L17fb1:
    if (c.tracing) c.traceAt(0x17fb1);
    // 1501:2fa1  mov di, 0  [x1487]
    c.di.x = (uint16_t)(0x0u);
    // 1501:2fa4  call 0x3267  [x1487]
    c.push16(0x2fa7u); code_30(c, 0x18277u); if (c.ip != 0x2fa7u) c.badReturn(0x17fb4);
L17fb7:
    if (c.tracing) c.traceAt(0x17fb7);
    // 1501:2fa7  mov ax, word ptr cs:[0x20a8]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20a8u)));
    // 1501:2fab  mov word ptr cs:[0x20b2], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b2u), c.a.x);
    // 1501:2faf  mov ax, word ptr cs:[0x20ae]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20aeu)));
    // 1501:2fb3  mov word ptr cs:[0x20b4], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b4u), c.a.x);
    // 1501:2fb7  mov si, 2  [x1487]
    c.si.x = (uint16_t)(0x2u);
    // 1501:2fba  call 0x33e3  [x1487]
    c.push16(0x2fbdu); code_30(c, 0x183f3u); if (c.ip != 0x2fbdu) c.badReturn(0x17fca);
L17fcd:
    if (c.tracing) c.traceAt(0x17fcd);
    // 1501:2fbd  mov di, 1  [x1487]
    c.di.x = (uint16_t)(0x1u);
    // 1501:2fc0  call 0x3267  [x1487]
    c.push16(0x2fc3u); code_30(c, 0x18277u); if (c.ip != 0x2fc3u) c.badReturn(0x17fd0);
L17fd3:
    if (c.tracing) c.traceAt(0x17fd3);
    // 1501:2fc3  mov ax, word ptr cs:[0x20aa]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20aau)));
    // 1501:2fc7  mov word ptr cs:[0x20b2], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b2u), c.a.x);
    // 1501:2fcb  mov ax, word ptr cs:[0x20b0]  [x1487]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20b0u)));
    // 1501:2fcf  mov word ptr cs:[0x20b4], ax  [x1487]
    c.w16(c.csb + (uint16_t)(0x20b4u), c.a.x);
    // 1501:2fd3  mov si, 4  [x1487]
    c.si.x = (uint16_t)(0x4u);
    // 1501:2fd6  call 0x33e3  [x1487]
    c.push16(0x2fd9u); code_30(c, 0x183f3u); if (c.ip != 0x2fd9u) c.badReturn(0x17fe6);
L17fe9:
    if (c.tracing) c.traceAt(0x17fe9);
    // 1501:2fd9  mov di, 2  [x1487]
    c.di.x = (uint16_t)(0x2u);
    // 1501:2fdc  call 0x3267  [x1487]
    c.push16(0x2fdfu); code_30(c, 0x18277u); if (c.ip != 0x2fdfu) c.badReturn(0x17fec);
L17fef:
    if (c.tracing) c.traceAt(0x17fef);
    // 1501:2fdf  mov bx, 0  [x1487]
    c.b.x = (uint16_t)(0x0u);
L17ff2:
    if (c.tracing) c.traceAt(0x17ff2);
    // 1501:2fe2  cmp word ptr cs:[0x2ede], 0x19d  [x4461]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x19du, true);
    // 1501:2fe9  jb 0x2ff5  [x4461]
    if (c.cf) goto L18005;
L17ffb:
    if (c.tracing) c.traceAt(0x17ffb);
    // 1501:2feb  mov ax, word ptr cs:[bx + 0x20b8]  [x3222]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x20b8u)));
    // 1501:2ff0  mov word ptr cs:[bx + 0x2094], ax  [x3222]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x2094u), c.a.x);
L18005:
    if (c.tracing) c.traceAt(0x18005);
    // 1501:2ff5  mov bp, 0x7fff  [x4461]
    c.bp.x = (uint16_t)(0x7fffu);
    // 1501:2ff8  mov si, word ptr cs:[bx + 0x2088]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x2088u)));
    // 1501:2ffd  mov si, word ptr cs:[si + 0x205c]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x205cu)));
    // 1501:3002  mov ax, word ptr cs:[si + 0x27d4]  [x4461]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x27d4u)));
    // 1501:3007  imul word ptr cs:[bx + 0x2094]  [x4461]
    c.imul16(c.r16(c.csb + (uint16_t)(c.b.x + 0x2094u)));
    // 1501:300c  idiv bp  [x4461]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x300cu); }   // #DE: int 0, then again
    // 1501:300e  mov cx, ax  [x4461]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:3010  mov si, word ptr cs:[bx + 0x208e]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x208eu)));
    // 1501:3015  mov si, word ptr cs:[si + 0x205c]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x205cu)));
    // 1501:301a  mov ax, word ptr cs:[si + 0x27d4]  [x4461]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x27d4u)));
    // 1501:301f  imul word ptr cs:[bx + 0x2094]  [x4461]
    c.imul16(c.r16(c.csb + (uint16_t)(c.b.x + 0x2094u)));
    // 1501:3024  idiv bp  [x4461]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x3024u); }   // #DE: int 0, then again
    // 1501:3026  add ax, cx  [x4461]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, false));
    // 1501:3028  add ax, word ptr cs:[bx + 0x209a]  [x4461]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.b.x + 0x209au)), false));
    // 1501:302d  mov word ptr cs:[bx + 0x20a6], ax  [x4461]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x20a6u), c.a.x);
    // 1501:3032  mov si, word ptr cs:[bx + 0x2088]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x2088u)));
    // 1501:3037  mov si, word ptr cs:[si + 0x205c]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x205cu)));
    // 1501:303c  mov ax, word ptr cs:[si + 0x293c]  [x4461]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x293cu)));
    // 1501:3041  imul word ptr cs:[bx + 0x2094]  [x4461]
    c.imul16(c.r16(c.csb + (uint16_t)(c.b.x + 0x2094u)));
    // 1501:3046  idiv bp  [x4461]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x3046u); }   // #DE: int 0, then again
    // 1501:3048  mov cx, ax  [x4461]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:304a  mov si, word ptr cs:[bx + 0x208e]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x208eu)));
    // 1501:304f  mov si, word ptr cs:[si + 0x205c]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x205cu)));
    // 1501:3054  mov ax, word ptr cs:[si + 0x293c]  [x4461]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x293cu)));
    // 1501:3059  imul word ptr cs:[bx + 0x2094]  [x4461]
    c.imul16(c.r16(c.csb + (uint16_t)(c.b.x + 0x2094u)));
    // 1501:305e  idiv bp  [x4461]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x305eu); }   // #DE: int 0, then again
    // 1501:3060  add ax, cx  [x4461]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, false));
    // 1501:3062  add ax, word ptr cs:[bx + 0x20a0]  [x4461]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.b.x + 0x20a0u)), false));
    // 1501:3067  mov word ptr cs:[bx + 0x20ac], ax  [x4461]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x20acu), c.a.x);
    // 1501:306c  add bx, 2  [x4461]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:306f  cmp bx, 6  [x4461]
    c.sub<16>(c.b.x, 0x6u, true);
    // 1501:3072  jb 0x2fe2  [x4461]
    if (c.cf) goto L17ff2;
L18086:
    if (c.tracing) c.traceAt(0x18086);
    // 1501:3076  add word ptr cs:[0x205c], 6  [x1487]
    c.w16(c.csb + (uint16_t)(0x205cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x205cu)), 0x6u, false));
    // 1501:307c  cmp word ptr cs:[0x205c], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x205cu)), 0x5a0u, true);
    // 1501:3083  jl 0x308c  [x1487]
    if ((c.sf != c.of)) goto L1809c;
L18095:
    if (c.tracing) c.traceAt(0x18095);
    // 1501:3085  sub word ptr cs:[0x205c], 0x5a0  [x6]
    c.w16(c.csb + (uint16_t)(0x205cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x205cu)), 0x5a0u, true));
L1809c:
    if (c.tracing) c.traceAt(0x1809c);
    // 1501:308c  add word ptr cs:[0x205e], 2  [x1487]
    c.w16(c.csb + (uint16_t)(0x205eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x205eu)), 0x2u, false));
    // 1501:3092  cmp word ptr cs:[0x205e], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x205eu)), 0x5a0u, true);
    // 1501:3099  jl 0x30a2  [x1487]
    if ((c.sf != c.of)) goto L180b2;
L180ab:
    if (c.tracing) c.traceAt(0x180ab);
    // 1501:309b  sub word ptr cs:[0x205e], 0x5a0  [x2]
    c.w16(c.csb + (uint16_t)(0x205eu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x205eu)), 0x5a0u, true));
L180b2:
    if (c.tracing) c.traceAt(0x180b2);
    // 1501:30a2  add word ptr cs:[0x2060], 8  [x1487]
    c.w16(c.csb + (uint16_t)(0x2060u), c.add<16>(c.r16(c.csb + (uint16_t)(0x2060u)), 0x8u, false));
    // 1501:30a8  cmp word ptr cs:[0x2060], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2060u)), 0x5a0u, true);
    // 1501:30af  jl 0x30b8  [x1487]
    if ((c.sf != c.of)) goto L180c8;
L180c1:
    if (c.tracing) c.traceAt(0x180c1);
    // 1501:30b1  sub word ptr cs:[0x2060], 0x5a0  [x8]
    c.w16(c.csb + (uint16_t)(0x2060u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x2060u)), 0x5a0u, true));
L180c8:
    if (c.tracing) c.traceAt(0x180c8);
    // 1501:30b8  add word ptr cs:[0x2062], 4  [x1487]
    c.w16(c.csb + (uint16_t)(0x2062u), c.add<16>(c.r16(c.csb + (uint16_t)(0x2062u)), 0x4u, false));
    // 1501:30be  cmp word ptr cs:[0x2062], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2062u)), 0x5a0u, true);
    // 1501:30c5  jl 0x30ce  [x1487]
    if ((c.sf != c.of)) goto L180de;
L180d7:
    if (c.tracing) c.traceAt(0x180d7);
    // 1501:30c7  sub word ptr cs:[0x2062], 0x5a0  [x4]
    c.w16(c.csb + (uint16_t)(0x2062u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x2062u)), 0x5a0u, true));
L180de:
    if (c.tracing) c.traceAt(0x180de);
    // 1501:30ce  add word ptr cs:[0x2068], 8  [x1487]
    c.w16(c.csb + (uint16_t)(0x2068u), c.add<16>(c.r16(c.csb + (uint16_t)(0x2068u)), 0x8u, false));
    // 1501:30d4  cmp word ptr cs:[0x2068], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2068u)), 0x5a0u, true);
    // 1501:30db  jb 0x30e4  [x1487]
    if (c.cf) goto L180f4;
L180ed:
    if (c.tracing) c.traceAt(0x180ed);
    // 1501:30dd  sub word ptr cs:[0x2068], 0x5a0  [x8]
    c.w16(c.csb + (uint16_t)(0x2068u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x2068u)), 0x5a0u, true));
L180f4:
    if (c.tracing) c.traceAt(0x180f4);
    // 1501:30e4  add word ptr cs:[0x206a], 0xa  [x1487]
    c.w16(c.csb + (uint16_t)(0x206au), c.add<16>(c.r16(c.csb + (uint16_t)(0x206au)), 0xau, false));
    // 1501:30ea  cmp word ptr cs:[0x206a], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x206au)), 0x5a0u, true);
    // 1501:30f1  jb 0x30fa  [x1487]
    if (c.cf) goto L1810a;
L18103:
    if (c.tracing) c.traceAt(0x18103);
    // 1501:30f3  sub word ptr cs:[0x206a], 0x5a0  [x10]
    c.w16(c.csb + (uint16_t)(0x206au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x206au)), 0x5a0u, true));
L1810a:
    if (c.tracing) c.traceAt(0x1810a);
    // 1501:30fa  add word ptr cs:[0x206c], 0xc  [x1487]
    c.w16(c.csb + (uint16_t)(0x206cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x206cu)), 0xcu, false));
    // 1501:3100  cmp word ptr cs:[0x206c], 0x5a0  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x206cu)), 0x5a0u, true);
    // 1501:3107  jb 0x3110  [x1487]
    if (c.cf) goto L18120;
L18119:
    if (c.tracing) c.traceAt(0x18119);
    // 1501:3109  sub word ptr cs:[0x206c], 0x5a0  [x12]
    c.w16(c.csb + (uint16_t)(0x206cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x206cu)), 0x5a0u, true));
L18120:
    if (c.tracing) c.traceAt(0x18120);
    // 1501:3110  cmp word ptr cs:[0x2ede], 0x24e  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x24eu, true);
    // 1501:3117  jb 0x3179  [x1487]
    if (c.cf) goto L18189;
L18129:
    if (c.tracing) c.traceAt(0x18129);
    // 1501:3119  sub word ptr cs:[0x1f64], 2  [x897]
    c.w16(c.csb + (uint16_t)(0x1f64u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x1f64u)), 0x2u, true));
    // 1501:311f  jns 0x3128  [x897]
    if (!c.sf) goto L18138;
L18131:
    if (c.tracing) c.traceAt(0x18131);
    // 1501:3121  add word ptr cs:[0x1f64], 0x5a0  [x2]
    c.w16(c.csb + (uint16_t)(0x1f64u), c.add<16>(c.r16(c.csb + (uint16_t)(0x1f64u)), 0x5a0u, true));
L18138:
    if (c.tracing) c.traceAt(0x18138);
    // 1501:3128  add word ptr cs:[0x1f66], 4  [x897]
    c.w16(c.csb + (uint16_t)(0x1f66u), c.add<16>(c.r16(c.csb + (uint16_t)(0x1f66u)), 0x4u, false));
    // 1501:312e  cmp word ptr cs:[0x1f66], 0x5a0  [x897]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x1f66u)), 0x5a0u, true);
    // 1501:3135  jl 0x313e  [x897]
    if ((c.sf != c.of)) goto L1814e;
L18147:
    if (c.tracing) c.traceAt(0x18147);
    // 1501:3137  sub word ptr cs:[0x1f66], 0x5a0  [x2]
    c.w16(c.csb + (uint16_t)(0x1f66u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x1f66u)), 0x5a0u, true));
L1814e:
    if (c.tracing) c.traceAt(0x1814e);
    // 1501:313e  sub word ptr cs:[0x1f68], 6  [x897]
    c.w16(c.csb + (uint16_t)(0x1f68u), c.sub<16>(c.r16(c.csb + (uint16_t)(0x1f68u)), 0x6u, true));
    // 1501:3144  jns 0x314d  [x897]
    if (!c.sf) goto L1815d;
L18156:
    if (c.tracing) c.traceAt(0x18156);
    // 1501:3146  add word ptr cs:[0x1f68], 0x5a0  [x4]
    c.w16(c.csb + (uint16_t)(0x1f68u), c.add<16>(c.r16(c.csb + (uint16_t)(0x1f68u)), 0x5a0u, true));
L1815d:
    if (c.tracing) c.traceAt(0x1815d);
    // 1501:314d  mov cx, 0x333  [x897]
    c.c.x = (uint16_t)(0x333u);
    // 1501:3150  xor bx, bx  [x897]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L18162:
    if (c.tracing) c.traceAt(0x18162);
    // 1501:3152  mov si, word ptr cs:[bx + 0x1f64]  [x2691]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x1f64u)));
    // 1501:3157  mov ax, word ptr cs:[si + 0x27d4]  [x2691]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x27d4u)));
    // 1501:315c  cdq   [x2691]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:315d  idiv cx  [x2691]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x315du); }   // #DE: int 0, then again
    // 1501:315f  add ax, 0x40  [x2691]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x40u, false));
    // 1501:3162  sub ax, word ptr cs:[0x20b6]  [x2691]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x20b6u)), true));
    // 1501:3167  jns 0x316c  [x2691]
    if (!c.sf) goto L1817c;
L18179:
    if (c.tracing) c.traceAt(0x18179);
    // 1501:3169  mov ax, 0  [x225]
    c.a.x = (uint16_t)(0x0u);
L1817c:
    if (c.tracing) c.traceAt(0x1817c);
    // 1501:316c  mov word ptr cs:[bx + 0x20b8], ax  [x2691]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x20b8u), c.a.x);
    // 1501:3171  add bx, 2  [x2691]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:3174  cmp bx, 6  [x2691]
    c.sub<16>(c.b.x, 0x6u, true);
    // 1501:3177  jb 0x3152  [x2691]
    if (c.cf) goto L18162;
L18189:
    if (c.tracing) c.traceAt(0x18189);
    // 1501:3179  inc word ptr cs:[0x2ede]  [x1487]
    c.w16(c.csb + (uint16_t)(0x2edeu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), false));
    // 1501:317e  cmp word ptr cs:[0x2ede], 0x3b  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x3bu, true);
    // 1501:3184  jb 0x3193  [x1487]
    if (c.cf) goto L181a3;
L18196:
    if (c.tracing) c.traceAt(0x18196);
    // 1501:3186  cmp word ptr cs:[0x2ede], 0x76  [x1429]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x76u, true);
    // 1501:318c  jae 0x3193  [x1429]
    if (!c.cf) goto L181a3;
L1819e:
    if (c.tracing) c.traceAt(0x1819e);
    // 1501:318e  inc word ptr cs:[0x20b8]  [x59]
    c.w16(c.csb + (uint16_t)(0x20b8u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20b8u)), true));
L181a3:
    if (c.tracing) c.traceAt(0x181a3);
    // 1501:3193  cmp word ptr cs:[0x2ede], 0x76  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x76u, true);
    // 1501:3199  jb 0x31a9  [x1487]
    if (c.cf) goto L181b9;
L181ab:
    if (c.tracing) c.traceAt(0x181ab);
    // 1501:319b  cmp word ptr cs:[0x2ede], 0xb1  [x1370]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0xb1u, true);
    // 1501:31a2  jae 0x31a9  [x1370]
    if (!c.cf) goto L181b9;
L181b4:
    if (c.tracing) c.traceAt(0x181b4);
    // 1501:31a4  dec word ptr cs:[0x20b8]  [x59]
    c.w16(c.csb + (uint16_t)(0x20b8u), c.dec<16>(c.r16(c.csb + (uint16_t)(0x20b8u)), true));
L181b9:
    if (c.tracing) c.traceAt(0x181b9);
    // 1501:31a9  cmp word ptr cs:[0x2ede], 0xb1  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0xb1u, true);
    // 1501:31b0  jb 0x31c0  [x1487]
    if (c.cf) goto L181d0;
L181c2:
    if (c.tracing) c.traceAt(0x181c2);
    // 1501:31b2  cmp word ptr cs:[0x2ede], 0xec  [x1311]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0xecu, true);
    // 1501:31b9  jae 0x31c0  [x1311]
    if (!c.cf) goto L181d0;
L181cb:
    if (c.tracing) c.traceAt(0x181cb);
    // 1501:31bb  inc word ptr cs:[0x20ba]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bau), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20bau)), true));
L181d0:
    if (c.tracing) c.traceAt(0x181d0);
    // 1501:31c0  cmp word ptr cs:[0x2ede], 0xec  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0xecu, true);
    // 1501:31c7  jb 0x31d7  [x1487]
    if (c.cf) goto L181e7;
L181d9:
    if (c.tracing) c.traceAt(0x181d9);
    // 1501:31c9  cmp word ptr cs:[0x2ede], 0x127  [x1252]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x127u, true);
    // 1501:31d0  jae 0x31d7  [x1252]
    if (!c.cf) goto L181e7;
L181e2:
    if (c.tracing) c.traceAt(0x181e2);
    // 1501:31d2  dec word ptr cs:[0x20ba]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bau), c.dec<16>(c.r16(c.csb + (uint16_t)(0x20bau)), true));
L181e7:
    if (c.tracing) c.traceAt(0x181e7);
    // 1501:31d7  cmp word ptr cs:[0x2ede], 0x127  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x127u, true);
    // 1501:31de  jb 0x31ee  [x1487]
    if (c.cf) goto L181fe;
L181f0:
    if (c.tracing) c.traceAt(0x181f0);
    // 1501:31e0  cmp word ptr cs:[0x2ede], 0x162  [x1193]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x162u, true);
    // 1501:31e7  jae 0x31ee  [x1193]
    if (!c.cf) goto L181fe;
L181f9:
    if (c.tracing) c.traceAt(0x181f9);
    // 1501:31e9  inc word ptr cs:[0x20bc]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bcu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20bcu)), true));
L181fe:
    if (c.tracing) c.traceAt(0x181fe);
    // 1501:31ee  cmp word ptr cs:[0x2ede], 0x162  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x162u, true);
    // 1501:31f5  jb 0x3205  [x1487]
    if (c.cf) goto L18215;
L18207:
    if (c.tracing) c.traceAt(0x18207);
    // 1501:31f7  cmp word ptr cs:[0x2ede], 0x19d  [x1134]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x19du, true);
    // 1501:31fe  jae 0x3205  [x1134]
    if (!c.cf) goto L18215;
L18210:
    if (c.tracing) c.traceAt(0x18210);
    // 1501:3200  dec word ptr cs:[0x20bc]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bcu), c.dec<16>(c.r16(c.csb + (uint16_t)(0x20bcu)), true));
L18215:
    if (c.tracing) c.traceAt(0x18215);
    // 1501:3205  cmp word ptr cs:[0x2ede], 0x19d  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x19du, true);
    // 1501:320c  jb 0x321c  [x1487]
    if (c.cf) goto L1822c;
L1821e:
    if (c.tracing) c.traceAt(0x1821e);
    // 1501:320e  cmp word ptr cs:[0x2ede], 0x1d8  [x1075]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x1d8u, true);
    // 1501:3215  jae 0x321c  [x1075]
    if (!c.cf) goto L1822c;
L18227:
    if (c.tracing) c.traceAt(0x18227);
    // 1501:3217  inc word ptr cs:[0x20b8]  [x59]
    c.w16(c.csb + (uint16_t)(0x20b8u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20b8u)), true));
L1822c:
    if (c.tracing) c.traceAt(0x1822c);
    // 1501:321c  cmp word ptr cs:[0x2ede], 0x1d8  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x1d8u, true);
    // 1501:3223  jb 0x3233  [x1487]
    if (c.cf) goto L18243;
L18235:
    if (c.tracing) c.traceAt(0x18235);
    // 1501:3225  cmp word ptr cs:[0x2ede], 0x213  [x1016]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x213u, true);
    // 1501:322c  jae 0x3233  [x1016]
    if (!c.cf) goto L18243;
L1823e:
    if (c.tracing) c.traceAt(0x1823e);
    // 1501:322e  inc word ptr cs:[0x20ba]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bau), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20bau)), true));
L18243:
    if (c.tracing) c.traceAt(0x18243);
    // 1501:3233  cmp word ptr cs:[0x2ede], 0x213  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x213u, true);
    // 1501:323a  jb 0x324a  [x1487]
    if (c.cf) goto L1825a;
L1824c:
    if (c.tracing) c.traceAt(0x1824c);
    // 1501:323c  cmp word ptr cs:[0x2ede], 0x24e  [x957]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x24eu, true);
    // 1501:3243  jae 0x324a  [x957]
    if (!c.cf) goto L1825a;
L18255:
    if (c.tracing) c.traceAt(0x18255);
    // 1501:3245  inc word ptr cs:[0x20bc]  [x59]
    c.w16(c.csb + (uint16_t)(0x20bcu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20bcu)), true));
L1825a:
    if (c.tracing) c.traceAt(0x1825a);
    // 1501:324a  cmp word ptr cs:[0x2ede], 0x550  [x1487]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x2edeu)), 0x550u, true);
    // 1501:3251  jb 0x3264  [x1487]
    if (c.cf) goto L18274;
L18263:
    if (c.tracing) c.traceAt(0x18263);
    // 1501:3253  inc word ptr cs:[0x20b6]  [x128]
    c.w16(c.csb + (uint16_t)(0x20b6u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x20b6u)), false));
    // 1501:3258  cmp word ptr cs:[0x20b6], 0x80  [x128]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x20b6u)), 0x80u, true);
    // 1501:325f  jb 0x3264  [x128]
    if (c.cf) goto L18274;
L18271:
    if (c.tracing) c.traceAt(0x18271);
    // 1501:3261  jmp 0x37c6  [x1]
    goto L187d6;
L18274:
    if (c.tracing) c.traceAt(0x18274);
    // 1501:3264  jmp 0x2f6d  [x1486]
    goto L17f7d;
L18277:
    if (c.tracing) c.traceAt(0x18277);
    // 1501:3267  xor bp, bp  [x4461]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:3269  add di, 8  [x4461]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x8u, false));
    // 1501:326d  add di, word ptr cs:[0x1e08]  [x4461]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x1e08u)), true));
L18282:
    if (c.tracing) c.traceAt(0x18282);
    // 1501:3272  mov ax, word ptr gs:[bp + 0x6400]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6400u)));
    // 1501:3277  mov word ptr cs:[0x2070], ax  [x178440]
    c.w16(c.csb + (uint16_t)(0x2070u), c.a.x);
    // 1501:327b  mov ax, word ptr gs:[bp + 0x6402]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.bp.x + 0x6402u)));
    // 1501:3280  mov word ptr cs:[0x2072], ax  [x178440]
    c.w16(c.csb + (uint16_t)(0x2072u), c.a.x);
    // 1501:3284  mov ax, word ptr gs:[bp + 0x64a0]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64a0u)));
    // 1501:3289  mov word ptr cs:[0x2074], ax  [x178440]
    c.w16(c.csb + (uint16_t)(0x2074u), c.a.x);
    // 1501:328d  mov ax, word ptr gs:[bp + 0x64a2]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.bp.x + 0x64a2u)));
    // 1501:3292  mov word ptr cs:[0x2076], ax  [x178440]
    c.w16(c.csb + (uint16_t)(0x2076u), c.a.x);
    // 1501:3296  push bp  [x178440]
    c.push16(c.bp.x);
    // 1501:3297  mov word ptr cs:[0x20c2], 0  [x178440]
    c.w16(c.csb + (uint16_t)(0x20c2u), 0x0u);
    // 1501:329e  mov ax, word ptr cs:[0x2074]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2074u)));
    // 1501:32a2  sub ax, word ptr cs:[0x2070]  [x178440]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), true));
    // 1501:32a7  jns 0x32af  [x178440]
    if (!c.sf) goto L182bf;
L182b9:
    if (c.tracing) c.traceAt(0x182b9);
    // 1501:32a9  or word ptr cs:[0x20c2], 2  [x66804]
    c.w16(c.csb + (uint16_t)(0x20c2u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x20c2u))) | (0x2u), true));
L182bf:
    if (c.tracing) c.traceAt(0x182bf);
    // 1501:32af  mov ax, word ptr cs:[0x2076]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2076u)));
    // 1501:32b3  sub ax, word ptr cs:[0x2072]  [x178440]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2072u)), true));
    // 1501:32b8  jns 0x32c0  [x178440]
    if (!c.sf) goto L182d0;
L182ca:
    if (c.tracing) c.traceAt(0x182ca);
    // 1501:32ba  or word ptr cs:[0x20c2], 4  [x65714]
    c.w16(c.csb + (uint16_t)(0x20c2u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x20c2u))) | (0x4u), true));
L182d0:
    if (c.tracing) c.traceAt(0x182d0);
    // 1501:32c0  mov si, word ptr cs:[0x20c2]  [x178440]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x20c2u)));
    // 1501:32c5  call word ptr cs:[si + 0x20c4]  [x178440]
    c.push16(0x32cau); code_30(c, c.csb + (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x20c4u)))); if (c.ip != 0x32cau) c.badReturn(0x182d5);
L182da:
    if (c.tracing) c.traceAt(0x182da);
    // 1501:32ca  pop bp  [x178440]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:32cb  add bp, 4  [x178440]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:32ce  cmp bp, 0xa0  [x178440]
    c.sub<16>(c.bp.x, 0xa0u, true);
    // 1501:32d2  jae 0x32d6  [x178440]
    if (!c.cf) goto L182e6;
L182e4:
    if (c.tracing) c.traceAt(0x182e4);
    // 1501:32d4  jmp 0x3272  [x173979]
    goto L18282;
L182e6:
    if (c.tracing) c.traceAt(0x182e6);
    // 1501:32d6  ret   [x4461]
    c.ip = c.pop16(); return;
L182e7:
    if (c.tracing) c.traceAt(0x182e7);
    // 1501:32d7  mov bx, 0x40  [x79812]
    c.b.x = (uint16_t)(0x40u);
    // 1501:32da  mul bx  [x79812]
    c.mul16(c.b.x);
    // 1501:32dc  mov bx, ax  [x79812]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:32de  mov ax, word ptr cs:[0x2074]  [x79812]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2074u)));
    // 1501:32e2  sub ax, word ptr cs:[0x2070]  [x79812]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), false));
    // 1501:32e7  mov bp, 0x40  [x79812]
    c.bp.x = (uint16_t)(0x40u);
    // 1501:32ea  mul bp  [x79812]
    c.mul16(c.bp.x);
    // 1501:32ec  mov bp, ax  [x79812]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:32ee  mov ax, 0x100  [x79812]
    c.a.x = (uint16_t)(0x100u);
    // 1501:32f1  imul word ptr cs:[0x2072]  [x79812]
    c.imul16(c.r16(c.csb + (uint16_t)(0x2072u)));
    // 1501:32f6  add ax, word ptr cs:[0x2070]  [x79812]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), true));
    // 1501:32fb  mov si, ax  [x79812]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:32fd  mov cx, 0x20  [x79812]
    c.c.x = (uint16_t)(0x20u);
L18310:
    if (c.tracing) c.traceAt(0x18310);
    // 1501:3300  mov al, byte ptr [si]  [x2553984]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:3302  mov byte ptr cs:[di], al  [x2553984]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 1501:3305  add si, word ptr gs:[bp]  [x2553984]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:3309  add si, word ptr fs:[bx]  [x2553984]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:330c  add bp, 2  [x2553984]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:330f  add bx, 2  [x2553984]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:3312  add di, 3  [x2553984]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, true));
    // 1501:3315  loop 0x3300  [x2553984]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18310;
L18327:
    if (c.tracing) c.traceAt(0x18327);
    // 1501:3317  ret   [x79812]
    c.ip = c.pop16(); return;
L18328:
    if (c.tracing) c.traceAt(0x18328);
    // 1501:3318  mov bx, 0x40  [x32914]
    c.b.x = (uint16_t)(0x40u);
    // 1501:331b  mul bx  [x32914]
    c.mul16(c.b.x);
    // 1501:331d  mov bx, ax  [x32914]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:331f  mov ax, word ptr cs:[0x2074]  [x32914]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2074u)));
    // 1501:3323  sub ax, word ptr cs:[0x2070]  [x32914]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), false));
    // 1501:3328  neg ax  [x32914]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:332a  mov bp, 0x40  [x32914]
    c.bp.x = (uint16_t)(0x40u);
    // 1501:332d  mul bp  [x32914]
    c.mul16(c.bp.x);
    // 1501:332f  mov bp, ax  [x32914]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:3331  mov ax, 0x100  [x32914]
    c.a.x = (uint16_t)(0x100u);
    // 1501:3334  imul word ptr cs:[0x2072]  [x32914]
    c.imul16(c.r16(c.csb + (uint16_t)(0x2072u)));
    // 1501:3339  add ax, word ptr cs:[0x2070]  [x32914]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), true));
    // 1501:333e  mov si, ax  [x32914]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:3340  mov cx, 0x20  [x32914]
    c.c.x = (uint16_t)(0x20u);
L18353:
    if (c.tracing) c.traceAt(0x18353);
    // 1501:3343  mov al, byte ptr [si]  [x1053248]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:3345  mov byte ptr cs:[di], al  [x1053248]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 1501:3348  sub si, word ptr gs:[bp]  [x1053248]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:334c  add si, word ptr fs:[bx]  [x1053248]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:334f  add bp, 2  [x1053248]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:3352  add bx, 2  [x1053248]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:3355  add di, 3  [x1053248]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, true));
    // 1501:3358  loop 0x3343  [x1053248]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18353;
L1836a:
    if (c.tracing) c.traceAt(0x1836a);
    // 1501:335a  ret   [x32914]
    c.ip = c.pop16(); return;
L1836b:
    if (c.tracing) c.traceAt(0x1836b);
    // 1501:335b  neg ax  [x31824]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:335d  mov bx, 0x40  [x31824]
    c.b.x = (uint16_t)(0x40u);
    // 1501:3360  mul bx  [x31824]
    c.mul16(c.b.x);
    // 1501:3362  mov bx, ax  [x31824]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:3364  mov ax, word ptr cs:[0x2074]  [x31824]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2074u)));
    // 1501:3368  sub ax, word ptr cs:[0x2070]  [x31824]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), false));
    // 1501:336d  mov bp, 0x40  [x31824]
    c.bp.x = (uint16_t)(0x40u);
    // 1501:3370  mul bp  [x31824]
    c.mul16(c.bp.x);
    // 1501:3372  mov bp, ax  [x31824]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:3374  mov ax, 0x100  [x31824]
    c.a.x = (uint16_t)(0x100u);
    // 1501:3377  imul word ptr cs:[0x2072]  [x31824]
    c.imul16(c.r16(c.csb + (uint16_t)(0x2072u)));
    // 1501:337c  add ax, word ptr cs:[0x2070]  [x31824]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), true));
    // 1501:3381  mov si, ax  [x31824]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:3383  mov cx, 0x20  [x31824]
    c.c.x = (uint16_t)(0x20u);
L18396:
    if (c.tracing) c.traceAt(0x18396);
    // 1501:3386  mov al, byte ptr [si]  [x1018368]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:3388  mov byte ptr cs:[di], al  [x1018368]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 1501:338b  add si, word ptr gs:[bp]  [x1018368]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:338f  sub si, word ptr fs:[bx]  [x1018368]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:3392  add bp, 2  [x1018368]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:3395  add bx, 2  [x1018368]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:3398  add di, 3  [x1018368]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, true));
    // 1501:339b  loop 0x3386  [x1018368]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18396;
L183ad:
    if (c.tracing) c.traceAt(0x183ad);
    // 1501:339d  ret   [x31824]
    c.ip = c.pop16(); return;
L183ae:
    if (c.tracing) c.traceAt(0x183ae);
    // 1501:339e  neg ax  [x33890]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:33a0  mov bx, 0x40  [x33890]
    c.b.x = (uint16_t)(0x40u);
    // 1501:33a3  mul bx  [x33890]
    c.mul16(c.b.x);
    // 1501:33a5  mov bx, ax  [x33890]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:33a7  mov ax, word ptr cs:[0x2074]  [x33890]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x2074u)));
    // 1501:33ab  sub ax, word ptr cs:[0x2070]  [x33890]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), false));
    // 1501:33b0  neg ax  [x33890]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:33b2  mov bp, 0x40  [x33890]
    c.bp.x = (uint16_t)(0x40u);
    // 1501:33b5  mul bp  [x33890]
    c.mul16(c.bp.x);
    // 1501:33b7  mov bp, ax  [x33890]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:33b9  mov ax, 0x100  [x33890]
    c.a.x = (uint16_t)(0x100u);
    // 1501:33bc  imul word ptr cs:[0x2072]  [x33890]
    c.imul16(c.r16(c.csb + (uint16_t)(0x2072u)));
    // 1501:33c1  add ax, word ptr cs:[0x2070]  [x33890]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x2070u)), true));
    // 1501:33c6  mov si, ax  [x33890]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:33c8  mov cx, 0x20  [x33890]
    c.c.x = (uint16_t)(0x20u);
L183db:
    if (c.tracing) c.traceAt(0x183db);
    // 1501:33cb  mov al, byte ptr [si]  [x1084480]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:33cd  mov byte ptr cs:[di], al  [x1084480]
    c.w8(c.csb + (uint16_t)(c.di.x), c.a.l);
    // 1501:33d0  sub si, word ptr gs:[bp]  [x1084480]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.gsb + (uint16_t)(c.bp.x)), false));
    // 1501:33d4  sub si, word ptr fs:[bx]  [x1084480]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.fsb + (uint16_t)(c.b.x)), false));
    // 1501:33d7  add bp, 2  [x1084480]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:33da  add bx, 2  [x1084480]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:33dd  add di, 3  [x1084480]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, true));
    // 1501:33e0  loop 0x33cb  [x1084480]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L183db;
L183f2:
    if (c.tracing) c.traceAt(0x183f2);
    // 1501:33e2  ret   [x33890]
    c.ip = c.pop16(); return;
L183f3:
    if (c.tracing) c.traceAt(0x183f3);
    // 1501:33e3  mov ax, word ptr cs:[si + 0x20b8]  [x4461]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x20b8u)));
    // 1501:33e8  mov word ptr cs:[0x20be], ax  [x4461]
    c.w16(c.csb + (uint16_t)(0x20beu), c.a.x);
    // 1501:33ec  mov si, word ptr cs:[si + 0x2068]  [x4461]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x2068u)));
    // 1501:33f1  xor di, di  [x4461]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:33f3  mov bp, 0x140  [x4461]
    c.bp.x = (uint16_t)(0x140u);
L18406:
    if (c.tracing) c.traceAt(0x18406);
    // 1501:33f6  sub bp, 4  [x178440]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, 0x4u, false));
    // 1501:33f9  mov ax, word ptr cs:[di + 0x1f6c]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x1f6cu)));
    // 1501:33fe  imul word ptr cs:[si + 0x20cc]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x20ccu)));
    // 1501:3403  push ax  [x178440]
    c.push16(c.a.x);
    // 1501:3404  mov ax, word ptr cs:[di + 0x1f6a]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x1f6au)));
    // 1501:3409  imul word ptr cs:[si + 0x2234]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x2234u)));
    // 1501:340e  pop cx  [x178440]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:340f  sar ax, 7  [x178440]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:3412  sar cx, 7  [x178440]
    c.c.x = (uint16_t)(c.sar<16>(c.c.x, (int)((0x7u) & 31), false));
    // 1501:3415  add ax, cx  [x178440]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, false));
    // 1501:3417  imul word ptr cs:[0x20be]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(0x20beu)));
    // 1501:341c  idiv word ptr cs:[0x20c0]  [x178440]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x20c0u)))) { c.d32 = false; c.intr(0, 0x341cu); }   // #DE: int 0, then again
    // 1501:3421  mov cx, ax  [x178440]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:3423  add ax, word ptr cs:[0x20b2]  [x178440]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x20b2u)), false));
    // 1501:3428  mov word ptr gs:[di + 0x6400], ax  [x178440]
    c.w16(c.gsb + (uint16_t)(c.di.x + 0x6400u), c.a.x);
    // 1501:342d  neg cx  [x178440]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:342f  add cx, word ptr cs:[0x20b2]  [x178440]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.r16(c.csb + (uint16_t)(0x20b2u)), false));
    // 1501:3434  mov word ptr gs:[bp + 0x6400], cx  [x178440]
    c.w16(c.gsb + (uint16_t)(c.bp.x + 0x6400u), c.c.x);
    // 1501:3439  mov ax, word ptr cs:[di + 0x1f6c]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x1f6cu)));
    // 1501:343e  imul word ptr cs:[si + 0x2234]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x2234u)));
    // 1501:3443  push ax  [x178440]
    c.push16(c.a.x);
    // 1501:3444  mov ax, word ptr cs:[di + 0x1f6a]  [x178440]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x1f6au)));
    // 1501:3449  imul word ptr cs:[si + 0x20cc]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x20ccu)));
    // 1501:344e  pop cx  [x178440]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:344f  sar ax, 7  [x178440]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), false));
    // 1501:3452  sar cx, 7  [x178440]
    c.c.x = (uint16_t)(c.sar<16>(c.c.x, (int)((0x7u) & 31), false));
    // 1501:3455  sub ax, cx  [x178440]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.c.x, false));
    // 1501:3457  imul word ptr cs:[0x20be]  [x178440]
    c.imul16(c.r16(c.csb + (uint16_t)(0x20beu)));
    // 1501:345c  idiv word ptr cs:[0x20c0]  [x178440]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x20c0u)))) { c.d32 = false; c.intr(0, 0x345cu); }   // #DE: int 0, then again
    // 1501:3461  mov cx, ax  [x178440]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:3463  add ax, word ptr cs:[0x20b4]  [x178440]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x20b4u)), false));
    // 1501:3468  mov word ptr gs:[di + 0x6402], ax  [x178440]
    c.w16(c.gsb + (uint16_t)(c.di.x + 0x6402u), c.a.x);
    // 1501:346d  neg cx  [x178440]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:346f  add cx, word ptr cs:[0x20b4]  [x178440]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.r16(c.csb + (uint16_t)(0x20b4u)), false));
    // 1501:3474  mov word ptr gs:[bp + 0x6402], cx  [x178440]
    c.w16(c.gsb + (uint16_t)(c.bp.x + 0x6402u), c.c.x);
    // 1501:3479  add di, 4  [x178440]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:347c  cmp di, 0xa0  [x178440]
    c.sub<16>(c.di.x, 0xa0u, true);
    // 1501:3480  jae 0x3485  [x178440]
    if (!c.cf) goto L18495;
L18492:
    if (c.tracing) c.traceAt(0x18492);
    // 1501:3482  jmp 0x33f6  [x173979]
    goto L18406;
L18495:
    if (c.tracing) c.traceAt(0x18495);
    // 1501:3485  ret   [x4461]
    c.ip = c.pop16(); return;
L18496:
    if (c.tracing) c.traceAt(0x18496);
    // 1501:3486  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:3488  xor dx, dx  [x1]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 1501:348a  mov bx, 4  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 1501:348d  mov ax, 0x50  [x1]
    c.a.x = (uint16_t)(0x50u);
L184a0:
    if (c.tracing) c.traceAt(0x184a0);
    // 1501:3490  mov word ptr cs:[si + 0x1f6a], 0xff6a  [x40]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x1f6au), 0xff6au);
    // 1501:3497  mov word ptr cs:[si + 0x1f6c], ax  [x40]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x1f6cu), c.a.x);
    // 1501:349c  sub ax, bx  [x40]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:349e  add si, 4  [x40]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:34a1  cmp si, 0xa0  [x40]
    c.sub<16>(c.si.x, 0xa0u, true);
    // 1501:34a5  jb 0x3490  [x40]
    if (c.cf) goto L184a0;
L184b7:
    if (c.tracing) c.traceAt(0x184b7);
    // 1501:34a7  ret   [x1]
    c.ip = c.pop16(); return;
L184b8:
    if (c.tracing) c.traceAt(0x184b8);
    // 1501:34a8  mov word ptr cs:[0x205a], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x205au), 0x0u);
    // 1501:34af  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L184c1:
    if (c.tracing) c.traceAt(0x184c1);
    // 1501:34b1  mov cx, 0x20  [x400]
    c.c.x = (uint16_t)(0x20u);
    // 1501:34b4  mov word ptr cs:[0x207e], 1  [x400]
    c.w16(c.csb + (uint16_t)(0x207eu), 0x1u);
    // 1501:34bb  xor dx, dx  [x400]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:34bd  mov ax, word ptr cs:[0x205a]  [x400]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x205au)));
    // 1501:34c1  cmp word ptr cs:[0x205a], 0  [x400]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x205au)), 0x0u, true);
    // 1501:34c7  jns 0x34e7  [x400]
    if (!c.sf) goto L184f7;
    c.notTranslated(0x184d9, "fall-through");
L184f7:
    if (c.tracing) c.traceAt(0x184f7);
    // 1501:34e7  idiv cx  [x400]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x34e7u); }   // #DE: int 0, then again
    // 1501:34e9  mov word ptr cs:[0x2078], ax  [x400]
    c.w16(c.csb + (uint16_t)(0x2078u), c.a.x);
    // 1501:34ed  mov word ptr cs:[0x207a], dx  [x400]
    c.w16(c.csb + (uint16_t)(0x207au), c.dx_.x);
    // 1501:34f2  sar ax, 1  [x400]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:34f4  mov word ptr cs:[0x207c], ax  [x400]
    c.w16(c.csb + (uint16_t)(0x207cu), c.a.x);
    // 1501:34f8  xor bx, bx  [x400]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:34fa  mov cx, 0x20  [x400]
    c.c.x = (uint16_t)(0x20u);
L1850d:
    if (c.tracing) c.traceAt(0x1850d);
    // 1501:34fd  mov dx, 0  [x12800]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:3500  add dx, word ptr cs:[0x2078]  [x12800]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x2078u)), false));
    // 1501:3505  mov ax, word ptr cs:[0x207a]  [x12800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x207au)));
    // 1501:3509  add word ptr cs:[0x207c], ax  [x12800]
    c.w16(c.csb + (uint16_t)(0x207cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x207cu)), c.a.x, false));
    // 1501:350e  cmp word ptr cs:[0x207c], 0x20  [x12800]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x207cu)), 0x20u, true);
    // 1501:3514  jl 0x3521  [x12800]
    if ((c.sf != c.of)) goto L18531;
L18526:
    if (c.tracing) c.traceAt(0x18526);
    // 1501:3516  sub word ptr cs:[0x207c], 0x20  [x6072]
    c.w16(c.csb + (uint16_t)(0x207cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x207cu)), 0x20u, false));
    // 1501:351c  add dx, word ptr cs:[0x207e]  [x6072]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x207eu)), true));
L18531:
    if (c.tracing) c.traceAt(0x18531);
    // 1501:3521  mov word ptr gs:[bx + di], dx  [x12800]
    c.w16(c.gsb + (uint16_t)(c.b.x + c.di.x), c.dx_.x);
    // 1501:3524  add bx, 2  [x12800]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:3527  loop 0x34fd  [x12800]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1850d;
L18539:
    if (c.tracing) c.traceAt(0x18539);
    // 1501:3529  add di, 0x40  [x400]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x40u, false));
    // 1501:352c  add word ptr cs:[0x205a], 1  [x400]
    c.w16(c.csb + (uint16_t)(0x205au), c.add<16>(c.r16(c.csb + (uint16_t)(0x205au)), 0x1u, false));
    // 1501:3532  cmp di, 0x6400  [x400]
    c.sub<16>(c.di.x, 0x6400u, true);
    // 1501:3536  jb 0x34b1  [x400]
    if (c.cf) goto L184c1;
L1854a:
    if (c.tracing) c.traceAt(0x1854a);
    // 1501:353a  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:353c  mov bx, 0x100  [x1]
    c.b.x = (uint16_t)(0x100u);
L1854f:
    if (c.tracing) c.traceAt(0x1854f);
    // 1501:353f  mov ax, word ptr gs:[si]  [x12800]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint16_t)(c.si.x)));
    // 1501:3542  mul bx  [x12800]
    c.mul16(c.b.x);
    // 1501:3544  mov word ptr fs:[si], ax  [x12800]
    c.w16(c.fsb + (uint16_t)(c.si.x), c.a.x);
    // 1501:3547  add si, 2  [x12800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:354a  cmp si, 0x6400  [x12800]
    c.sub<16>(c.si.x, 0x6400u, true);
    // 1501:354e  jb 0x353f  [x12800]
    if (c.cf) goto L1854f;
L18560:
    if (c.tracing) c.traceAt(0x18560);
    // 1501:3550  ret   [x1]
    c.ip = c.pop16(); return;
L18561:
    if (c.tracing) c.traceAt(0x18561);
    // 1501:3551  inc word ptr cs:[0x1e0c]  [x1488]
    c.w16(c.csb + (uint16_t)(0x1e0cu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x1e0cu)), false));
    // 1501:3556  and word ptr cs:[0x1e0c], 1  [x1488]
    c.w16(c.csb + (uint16_t)(0x1e0cu), c.logic<16>((c.r16(c.csb + (uint16_t)(0x1e0cu))) & (0x1u), false));
    // 1501:355c  mov cx, word ptr cs:[0x1e0c]  [x1488]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e0cu)));
    // 1501:3561  mov ax, 0x8050  [x1488]
    c.a.x = (uint16_t)(0x8050u);
    // 1501:3564  mul cx  [x1488]
    c.mul16(c.c.x);
    // 1501:3566  mov cx, ax  [x1488]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:3568  mov dx, 0x3d4  [x1488]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:356b  mov al, 0xc  [x1488]
    c.a.l = (uint8_t)(0xcu);
    // 1501:356d  mov ah, ch  [x1488]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:356f  out dx, ax  [x1488]
    c.ip = 0x3570u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3570  mov al, 0xd  [x1488]
    c.a.l = (uint8_t)(0xdu);
    // 1501:3572  mov ah, cl  [x1488]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:3574  out dx, ax  [x1488]
    c.ip = 0x3575u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:3575  mov dx, 0x3da  [x1488]
    c.dx_.x = (uint16_t)(0x3dau);
L18588:
    if (c.tracing) c.traceAt(0x18588);
    // 1501:3578  in al, dx  [x29787]
    c.ip = 0x3579u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L18589:
    if (c.tracing) c.traceAt(0x18589);
    // 1501:3579  test al, 8  [x37237]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:357b  je 0x3578  [x37237]
    if (c.zf) goto L18588;
L1858d:
    if (c.tracing) c.traceAt(0x1858d);
    // 1501:357d  in al, dx  [x4464]
    c.ip = 0x357eu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1858e:
    if (c.tracing) c.traceAt(0x1858e);
    // 1501:357e  test al, 8  [x5952]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:3580  jne 0x357d  [x5952]
    if (!c.zf) goto L1858d;
L18592:
    if (c.tracing) c.traceAt(0x18592);
    // 1501:3582  call 0x3586  [x1488]
    c.push16(0x3585u); code_30(c, 0x18596u); if (c.ip != 0x3585u) c.badReturn(0x18592);
L18595:
    if (c.tracing) c.traceAt(0x18595);
    // 1501:3585  ret   [x1488]
    c.ip = c.pop16(); return;
L18596:
    if (c.tracing) c.traceAt(0x18596);
    // 1501:3586  cli   [x1488]
    c.m.cli();
    // 1501:3587  mov al, 0x34  [x1488]
    c.a.l = (uint8_t)(0x34u);
    // 1501:3589  out 0x43, al  [x1488]
    c.ip = 0x358bu; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:358b  mov ax, word ptr cs:[0x1e0e]  [x1488]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e0eu)));
    // 1501:358f  out 0x40, al  [x1488]
    c.ip = 0x3591u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3591  mov al, ah  [x1488]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:3593  out 0x40, al  [x1488]
    c.ip = 0x3595u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3595  sti   [x1488]
    c.ip = 0x3596u; c.d32 = false; c.m.sti();
L185a6:
    if (c.tracing) c.traceAt(0x185a6);
    // 1501:3596  mov ax, 0xf00  [x1488]
    c.a.x = (uint16_t)(0xf00u);
L185a9:
    if (c.tracing) c.traceAt(0x185a9);
    // 1501:3599  xor bx, bx  [x1488]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 1501:359b  cmp word ptr cs:[0x1e0c], 0  [x1488]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x1e0cu)), 0x0u, true);
    // 1501:35a1  jne 0x35ae  [x1488]
    if (!c.zf) goto L185be;
L185b3:
    if (c.tracing) c.traceAt(0x185b3);
    // 1501:35a3  mov word ptr cs:[0x1e08], ax  [x744]
    c.w16(c.csb + (uint16_t)(0x1e08u), c.a.x);
    // 1501:35a7  mov word ptr cs:[0x1e0a], bx  [x744]
    c.w16(c.csb + (uint16_t)(0x1e0au), c.b.x);
    // 1501:35ac  jmp 0x35b7  [x744]
    goto L185c7;
L185be:
    if (c.tracing) c.traceAt(0x185be);
    // 1501:35ae  mov word ptr cs:[0x1e08], bx  [x744]
    c.w16(c.csb + (uint16_t)(0x1e08u), c.b.x);
    // 1501:35b3  mov word ptr cs:[0x1e0a], ax  [x744]
    c.w16(c.csb + (uint16_t)(0x1e0au), c.a.x);
L185c7:
    if (c.tracing) c.traceAt(0x185c7);
    // 1501:35b7  mov word ptr cs:[0x1e1a], 2  [x1488]
    c.w16(c.csb + (uint16_t)(0x1e1au), 0x2u);
    // 1501:35be  mov word ptr cs:[0x1e18], 0x30b  [x1488]
    c.w16(c.csb + (uint16_t)(0x1e18u), 0x30bu);
    // 1501:35c5  mov ax, word ptr cs:[0x1e0a]  [x1488]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e0au)));
    // 1501:35c9  add word ptr cs:[0x1e18], ax  [x1488]
    c.w16(c.csb + (uint16_t)(0x1e18u), c.add<16>(c.r16(c.csb + (uint16_t)(0x1e18u)), c.a.x, true));
    // 1501:35ce  ret   [x1488]
    c.ip = c.pop16(); return;
L185df:
    if (c.tracing) c.traceAt(0x185df);
    // 1501:35cf  cli   [x1]
    c.m.cli();
    // 1501:35d0  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:35d2  out 0x43, al  [x1]
    c.ip = 0x35d4u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:35d4  mov ax, word ptr cs:[0x1e0e]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e0eu)));
    // 1501:35d8  out 0x40, al  [x1]
    c.ip = 0x35dau; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:35da  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:35dc  out 0x40, al  [x1]
    c.ip = 0x35deu; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:35de  push es  [x1]
    c.push16(c.es);
    // 1501:35df  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:35e1  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:35e3  mov ax, word ptr es:[0x20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x20u)));
    // 1501:35e7  mov word ptr cs:[0x1e20], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1e20u), c.a.x);
    // 1501:35eb  mov ax, word ptr es:[0x22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x22u)));
    // 1501:35ef  mov word ptr cs:[0x1e22], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1e22u), c.a.x);
    // 1501:35f3  mov ax, 0x3628  [x1]
    c.a.x = (uint16_t)(0x3628u);
    // 1501:35f6  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:35fa  mov word ptr es:[0x22], cs  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.cs);
    // 1501:35ff  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3600  sti   [x1]
    c.ip = 0x3601u; c.d32 = false; c.m.sti();
L18611:
    if (c.tracing) c.traceAt(0x18611);
    // 1501:3601  ret   [x1]
    c.ip = c.pop16(); return;
L18612:
    if (c.tracing) c.traceAt(0x18612);
    // 1501:3602  cli   [x1]
    c.m.cli();
    // 1501:3603  push es  [x1]
    c.push16(c.es);
    // 1501:3604  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:3606  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:3608  mov ax, word ptr cs:[0x1e20]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e20u)));
    // 1501:360c  mov word ptr es:[0x20], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x20u), c.a.x);
    // 1501:3610  mov ax, word ptr cs:[0x1e22]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e22u)));
    // 1501:3614  mov word ptr es:[0x22], ax  [x1]
    c.w16(c.esb + (uint16_t)(0x22u), c.a.x);
    // 1501:3618  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:3619  mov al, 0x34  [x1]
    c.a.l = (uint8_t)(0x34u);
    // 1501:361b  out 0x43, al  [x1]
    c.ip = 0x361du; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:361d  mov ax, 0x4a9  [x1]
    c.a.x = (uint16_t)(0x4a9u);
    // 1501:3620  out 0x40, al  [x1]
    c.ip = 0x3622u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3622  mov al, ah  [x1]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:3624  out 0x40, al  [x1]
    c.ip = 0x3626u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3626  sti   [x1]
    c.ip = 0x3627u; c.d32 = false; c.m.sti();
L18637:
    if (c.tracing) c.traceAt(0x18637);
    // 1501:3627  ret   [x1]
    c.ip = c.pop16(); return;
L18638:
    if (c.tracing) c.traceAt(0x18638);
    // 1501:3628  cli   [x5948]
    c.m.cli();
    // 1501:3629  pushaw   [x5948]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:362a  mov si, word ptr cs:[0x1e1a]  [x5948]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e1au)));
    // 1501:362f  add word ptr cs:[0x1e1a], 2  [x5948]
    c.w16(c.csb + (uint16_t)(0x1e1au), c.add<16>(c.r16(c.csb + (uint16_t)(0x1e1au)), 0x2u, true));
    // 1501:3635  mov al, 0x34  [x5948]
    c.a.l = (uint8_t)(0x34u);
    // 1501:3637  out 0x43, al  [x5948]
    c.ip = 0x3639u; c.d32 = false; c.out8(0x43, c.a.l);
    // 1501:3639  mov ax, word ptr cs:[si + 0x1e0e]  [x5948]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x1e0eu)));
    // 1501:363e  out 0x40, al  [x5948]
    c.ip = 0x3640u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3640  mov al, ah  [x5948]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:3642  out 0x40, al  [x5948]
    c.ip = 0x3644u; c.d32 = false; c.out8(0x40, c.a.l);
    // 1501:3644  push ds  [x5948]
    c.push16(c.ds);
    // 1501:3645  push cs  [x5948]
    c.push16(c.cs);
    // 1501:3646  pop ds  [x5948]
    c.loadDs((uint16_t)c.pop16());
    // 1501:3647  mov dx, 0x3c8  [x5948]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:364a  mov al, 1  [x5948]
    c.a.l = (uint8_t)(0x1u);
    // 1501:364c  out dx, al  [x5948]
    c.ip = 0x364du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:364d  inc dx  [x5948]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:364e  mov si, word ptr cs:[0x1e18]  [x5948]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1e18u)));
    // 1501:3653  mov cx, 0x17d  [x5948]
    c.c.x = (uint16_t)(0x17du);
L18666:
    if (c.tracing) c.traceAt(0x18666);
    // 1501:3656  rep outsb dx, byte ptr [si]  [x2272136]
    c.ip = 0x3658u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L18668:
    if (c.tracing) c.traceAt(0x18668);
    // 1501:3658  mov cx, 5  [x5948]
    c.c.x = (uint16_t)(0x5u);
    // 1501:365b  mov dx, 0x3da  [x5948]
    c.dx_.x = (uint16_t)(0x3dau);
L1866e:
    if (c.tracing) c.traceAt(0x1866e);
    // 1501:365e  in al, dx  [x81785]
    c.ip = 0x365fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1866f:
    if (c.tracing) c.traceAt(0x1866f);
    // 1501:365f  test al, 1  [x107064]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:3661  jne 0x365e  [x107064]
    if (!c.zf) goto L1866e;
L18673:
    if (c.tracing) c.traceAt(0x18673);
    // 1501:3663  in al, dx  [x84759]
    c.ip = 0x3664u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L18674:
    if (c.tracing) c.traceAt(0x18674);
    // 1501:3664  test al, 1  [x114499]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:3666  je 0x3663  [x114499]
    if (c.zf) goto L18673;
L18678:
    if (c.tracing) c.traceAt(0x18678);
    // 1501:3668  loop 0x365e  [x29740]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1866e;
L1867a:
    if (c.tracing) c.traceAt(0x1867a);
    // 1501:366a  mov dx, 0x3c9  [x5948]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 1501:366d  mov cx, 0x180  [x5948]
    c.c.x = (uint16_t)(0x180u);
L18680:
    if (c.tracing) c.traceAt(0x18680);
    // 1501:3670  rep outsb dx, byte ptr [si]  [x2289980]
    c.ip = 0x3672u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L18682:
    if (c.tracing) c.traceAt(0x18682);
    // 1501:3672  pop ds  [x5948]
    c.loadDs((uint16_t)c.pop16());
    // 1501:3673  add word ptr cs:[0x1e18], 0x300  [x5948]
    c.w16(c.csb + (uint16_t)(0x1e18u), c.add<16>(c.r16(c.csb + (uint16_t)(0x1e18u)), 0x300u, true));
    // 1501:367a  mov al, 0x20  [x5948]
    c.a.l = (uint8_t)(0x20u);
    // 1501:367c  out 0x20, al  [x5948]
    c.ip = 0x367eu; c.d32 = false; c.out8(0x20, c.a.l);
    // 1501:367e  popaw   [x5948]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:367f  sti   [x5948]
    c.ip = 0x3680u; c.d32 = false; c.m.sti();
L18690:
    if (c.tracing) c.traceAt(0x18690);
    // 1501:3680  iret   [x5948]
    c.iret(); return;
L18691:
    if (c.tracing) c.traceAt(0x18691);
    // 1501:3681  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:3683  mov di, 0x2d6  [x1]
    c.di.x = (uint16_t)(0x2d6u);
    // 1501:3686  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
L18699:
    if (c.tracing) c.traceAt(0x18699);
    // 1501:3689  push cx  [x40]
    c.push16(c.c.x);
    // 1501:368a  mov cx, 0x20  [x40]
    c.c.x = (uint16_t)(0x20u);
L1869d:
    if (c.tracing) c.traceAt(0x1869d);
    // 1501:368d  mov byte ptr es:[di], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:3690  mov byte ptr es:[di + 1], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1u), c.a.l);
    // 1501:3694  mov byte ptr es:[di + 0x50], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x50u), c.a.l);
    // 1501:3698  mov byte ptr es:[di + 0x51], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x51u), c.a.l);
    // 1501:369c  add di, 2  [x1280]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:369f  add al, 1  [x1280]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x1u, true));
    // 1501:36a1  loop 0x368d  [x1280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1869d;
L186b3:
    if (c.tracing) c.traceAt(0x186b3);
    // 1501:36a3  add di, 0x60  [x40]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x60u, true));
    // 1501:36a6  pop cx  [x40]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:36a7  loop 0x3689  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18699;
L186b9:
    if (c.tracing) c.traceAt(0x186b9);
    // 1501:36a9  mov word ptr es:[0x2d6], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x2d6u), 0x101u);
    // 1501:36b0  mov word ptr es:[0x326], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x326u), 0x101u);
    // 1501:36b7  mov word ptr es:[0x7d6], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x7d6u), 0x101u);
    // 1501:36be  mov word ptr es:[0x826], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x826u), 0x101u);
    // 1501:36c5  mov word ptr es:[0xcd6], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xcd6u), 0x101u);
    // 1501:36cc  mov word ptr es:[0xd26], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xd26u), 0x101u);
    // 1501:36d3  mov word ptr es:[0x11d6], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x11d6u), 0x101u);
    // 1501:36da  mov word ptr es:[0x1226], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x1226u), 0x101u);
    // 1501:36e1  mov word ptr es:[0x16d6], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x16d6u), 0x101u);
    // 1501:36e8  mov word ptr es:[0x1726], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0x1726u), 0x101u);
    // 1501:36ef  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:36f1  mov di, 0x82d5  [x1]
    c.di.x = (uint16_t)(0x82d5u);
    // 1501:36f4  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
L18707:
    if (c.tracing) c.traceAt(0x18707);
    // 1501:36f7  push cx  [x40]
    c.push16(c.c.x);
    // 1501:36f8  mov cx, 0x20  [x40]
    c.c.x = (uint16_t)(0x20u);
L1870b:
    if (c.tracing) c.traceAt(0x1870b);
    // 1501:36fb  mov byte ptr es:[di], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:36fe  mov byte ptr es:[di + 1], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1u), c.a.l);
    // 1501:3702  mov byte ptr es:[di + 0x50], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x50u), c.a.l);
    // 1501:3706  mov byte ptr es:[di + 0x51], al  [x1280]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x51u), c.a.l);
    // 1501:370a  add di, 2  [x1280]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:370d  add al, 1  [x1280]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x1u, true));
    // 1501:370f  loop 0x36fb  [x1280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1870b;
L18721:
    if (c.tracing) c.traceAt(0x18721);
    // 1501:3711  add di, 0x60  [x40]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x60u, true));
    // 1501:3714  pop cx  [x40]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:3715  loop 0x36f7  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18707;
L18727:
    if (c.tracing) c.traceAt(0x18727);
    // 1501:3717  mov word ptr es:[0x82d5], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff82d5u), 0x101u);
    // 1501:371e  mov word ptr es:[0x8325], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff8325u), 0x101u);
    // 1501:3725  mov word ptr es:[0x87d5], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff87d5u), 0x101u);
    // 1501:372c  mov word ptr es:[0x8825], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff8825u), 0x101u);
    // 1501:3733  mov word ptr es:[0x8cd5], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff8cd5u), 0x101u);
    // 1501:373a  mov word ptr es:[0x8d25], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff8d25u), 0x101u);
    // 1501:3741  mov word ptr es:[0x91d5], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff91d5u), 0x101u);
    // 1501:3748  mov word ptr es:[0x9225], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff9225u), 0x101u);
    // 1501:374f  mov word ptr es:[0x96d5], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff96d5u), 0x101u);
    // 1501:3756  mov word ptr es:[0x9725], 0x101  [x1]
    c.w16(c.esb + (uint16_t)(0xffff9725u), 0x101u);
    // 1501:375d  mov cx, 0x50  [x1]
    c.c.x = (uint16_t)(0x50u);
    // 1501:3760  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:3762  mov ah, 0x1f  [x1]
    c.a.h = (uint8_t)(0x1fu);
    // 1501:3764  mov di, 0x2d6  [x1]
    c.di.x = (uint16_t)(0x2d6u);
L18777:
    if (c.tracing) c.traceAt(0x18777);
    // 1501:3767  mov byte ptr es:[di + 0x7fff], al  [x80]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x7fffu), c.a.l);
    // 1501:376c  mov byte ptr es:[di - 0x8000], al  [x80]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xffff8000u), c.a.l);
    // 1501:3771  mov byte ptr es:[di], al  [x80]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:3774  mov byte ptr es:[di + 0x3f], al  [x80]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x3fu), c.a.l);
    // 1501:3778  add ah, 0x20  [x80]
    c.a.h = (uint8_t)(c.add<8>(c.a.h, 0x20u, false));
    // 1501:377b  add di, 0x50  [x80]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x50u, true));
    // 1501:377e  loop 0x3767  [x80]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L18777;
L18790:
    if (c.tracing) c.traceAt(0x18790);
    // 1501:3780  mov di, 0x82d5  [x1]
    c.di.x = (uint16_t)(0x82d5u);
    // 1501:3783  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:3785  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L18798:
    if (c.tracing) c.traceAt(0x18798);
    // 1501:3788  rep stosw word ptr es:[di], ax  [x33]
    c.stos<16, false>(1);
L1879a:
    if (c.tracing) c.traceAt(0x1879a);
    // 1501:378a  mov di, 0x1b86  [x1]
    c.di.x = (uint16_t)(0x1b86u);
    // 1501:378d  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:378f  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
L187a2:
    if (c.tracing) c.traceAt(0x187a2);
    // 1501:3792  rep stosw word ptr es:[di], ax  [x33]
    c.stos<16, false>(1);
L187a4:
    if (c.tracing) c.traceAt(0x187a4);
    // 1501:3794  mov di, 0x1bd6  [x1]
    c.di.x = (uint16_t)(0x1bd6u);
    // 1501:3797  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:3799  mov cx, 0x320  [x1]
    c.c.x = (uint16_t)(0x320u);
L187ac:
    if (c.tracing) c.traceAt(0x187ac);
    // 1501:379c  rep stosw word ptr es:[di], ax  [x801]
    c.stos<16, false>(1);
L187ae:
    if (c.tracing) c.traceAt(0x187ae);
    // 1501:379e  mov di, 0x9bd5  [x1]
    c.di.x = (uint16_t)(0x9bd5u);
    // 1501:37a1  mov cx, 0x320  [x1]
    c.c.x = (uint16_t)(0x320u);
L187b4:
    if (c.tracing) c.traceAt(0x187b4);
    // 1501:37a4  rep stosw word ptr es:[di], ax  [x801]
    c.stos<16, false>(1);
L187b6:
    if (c.tracing) c.traceAt(0x187b6);
    // 1501:37a6  ret   [x1]
    c.ip = c.pop16(); return;
L187b7:
    if (c.tracing) c.traceAt(0x187b7);
    // 1501:37a7  mov ax, 0x42cc  [x1487]
    c.a.x = (uint16_t)(0x42ccu);
    // 1501:37aa  add ax, word ptr cs:[0x1e1c]  [x1487]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x1e1cu)), false));
    // 1501:37af  xor dx, dx  [x1487]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:37b1  mov cx, 0x4a9  [x1487]
    c.c.x = (uint16_t)(0x4a9u);
    // 1501:37b4  div cx  [x1487]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x37b4u); }   // #DE: int 0, then again
    // 1501:37b6  mov word ptr cs:[0x1e1c], dx  [x1487]
    c.w16(c.csb + (uint16_t)(0x1e1cu), c.dx_.x);
    // 1501:37bb  mov cx, ax  [x1487]
    c.c.x = (uint16_t)(c.a.x);
L187cd:
    if (c.tracing) c.traceAt(0x187cd);
    // 1501:37bd  pushf   [x21314]
    c.push16(c.flags());
    // 1501:37be  lcall cs:[0x1e20]  [x21314]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x1e20u)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x1e20u) + 2); c.push16(c.cs); c.push16(0x37c3u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L187d3:
    if (c.tracing) c.traceAt(0x187d3);
    // 1501:37c3  loop 0x37bd  [x21314]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L187cd;
L187d5:
    if (c.tracing) c.traceAt(0x187d5);
    // 1501:37c5  ret   [x1487]
    c.ip = c.pop16(); return;
L187d6:
    if (c.tracing) c.traceAt(0x187d6);
    // 1501:37c6  call 0x3602  [x1]
    c.push16(0x37c9u); code_30(c, 0x18612u); if (c.ip != 0x37c9u) c.badReturn(0x187d6);
L187d9:
    if (c.tracing) c.traceAt(0x187d9);
    // 1501:37c9  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_30(30, {0x15010, 0x17ef4, 0x17f11, 0x17f13, 0x17f21, 0x17f23, 0x17f2d, 0x17f32, 0x17f4e, 0x17f51, 0x17f5c, 0x17f5f, 0x17f62, 0x17f77, 0x17f7a, 0x17f7d, 0x17f80, 0x17f83, 0x17f98, 0x17f9a, 0x17fb1, 0x17fb7, 0x17fcd, 0x17fd3, 0x17fe9, 0x17fef, 0x17ff2, 0x17ffb, 0x18005, 0x18086, 0x18095, 0x1809c, 0x180ab, 0x180b2, 0x180c1, 0x180c8, 0x180d7, 0x180de, 0x180ed, 0x180f4, 0x18103, 0x1810a, 0x18119, 0x18120, 0x18129, 0x18131, 0x18138, 0x18147, 0x1814e, 0x18156, 0x1815d, 0x18162, 0x18179, 0x1817c, 0x18189, 0x18196, 0x1819e, 0x181a3, 0x181ab, 0x181b4, 0x181b9, 0x181c2, 0x181cb, 0x181d0, 0x181d9, 0x181e2, 0x181e7, 0x181f0, 0x181f9, 0x181fe, 0x18207, 0x18210, 0x18215, 0x1821e, 0x18227, 0x1822c, 0x18235, 0x1823e, 0x18243, 0x1824c, 0x18255, 0x1825a, 0x18263, 0x18271, 0x18274, 0x18277, 0x18282, 0x182b9, 0x182bf, 0x182ca, 0x182d0, 0x182da, 0x182e4, 0x182e6, 0x182e7, 0x18310, 0x18327, 0x18328, 0x18353, 0x1836a, 0x1836b, 0x18396, 0x183ad, 0x183ae, 0x183db, 0x183f2, 0x183f3, 0x18406, 0x18492, 0x18495, 0x18496, 0x184a0, 0x184b7, 0x184b8, 0x184c1, 0x184f7, 0x1850d, 0x18526, 0x18531, 0x18539, 0x1854a, 0x1854f, 0x18560, 0x18561, 0x18588, 0x18589, 0x1858d, 0x1858e, 0x18592, 0x18595, 0x18596, 0x185a6, 0x185a9, 0x185b3, 0x185be, 0x185c7, 0x185df, 0x18611, 0x18612, 0x18637, 0x18638, 0x18666, 0x18668, 0x1866e, 0x1866f, 0x18673, 0x18674, 0x18678, 0x1867a, 0x18680, 0x18682, 0x18690, 0x18691, 0x18699, 0x1869d, 0x186b3, 0x186b9, 0x18707, 0x1870b, 0x18721, 0x18727, 0x18777, 0x18790, 0x18798, 0x1879a, 0x187a2, 0x187a4, 0x187ac, 0x187ae, 0x187b4, 0x187b6, 0x187b7, 0x187cd, 0x187d3, 0x187d5, 0x187d6, 0x187d9}, code_30);

}  // namespace show
