// Part 21 (RULES.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_22(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x16387: goto L16387;
    case 0x16390: goto L16390;
    case 0x16392: goto L16392;
    case 0x16398: goto L16398;
    case 0x163a1: goto L163a1;
    case 0x163ab: goto L163ab;
    case 0x163ae: goto L163ae;
    case 0x163c6: goto L163c6;
    case 0x163c8: goto L163c8;
    case 0x163d4: goto L163d4;
    case 0x163d6: goto L163d6;
    case 0x163e2: goto L163e2;
    case 0x163e4: goto L163e4;
    case 0x163f8: goto L163f8;
    case 0x163fa: goto L163fa;
    case 0x16407: goto L16407;
    case 0x16409: goto L16409;
    case 0x16416: goto L16416;
    case 0x16418: goto L16418;
    case 0x1641c: goto L1641c;
    case 0x1642d: goto L1642d;
    case 0x16430: goto L16430;
    case 0x1643e: goto L1643e;
    case 0x16473: goto L16473;
    case 0x16486: goto L16486;
    case 0x1648b: goto L1648b;
    case 0x1648d: goto L1648d;
    case 0x16493: goto L16493;
    case 0x16495: goto L16495;
    case 0x1649b: goto L1649b;
    case 0x1649d: goto L1649d;
    case 0x164a7: goto L164a7;
    case 0x164b1: goto L164b1;
    case 0x164b6: goto L164b6;
    case 0x164b8: goto L164b8;
    case 0x164bb: goto L164bb;
    case 0x164bf: goto L164bf;
    case 0x164cd: goto L164cd;
    case 0x164d3: goto L164d3;
    case 0x164dc: goto L164dc;
    case 0x164ea: goto L164ea;
    case 0x164ed: goto L164ed;
    case 0x164f4: goto L164f4;
    case 0x164fa: goto L164fa;
    case 0x164fd: goto L164fd;
    case 0x16500: goto L16500;
    case 0x16501: goto L16501;
    case 0x16505: goto L16505;
    case 0x16506: goto L16506;
    case 0x1650a: goto L1650a;
    case 0x1650b: goto L1650b;
    case 0x16517: goto L16517;
    case 0x16519: goto L16519;
    case 0x16525: goto L16525;
    case 0x16527: goto L16527;
    case 0x16539: goto L16539;
    case 0x1653d: goto L1653d;
    case 0x16540: goto L16540;
    case 0x16551: goto L16551;
    case 0x1655d: goto L1655d;
    case 0x16561: goto L16561;
    case 0x16564: goto L16564;
    case 0x16575: goto L16575;
    case 0x16577: goto L16577;
    case 0x1659e: goto L1659e;
    case 0x165bc: goto L165bc;
    case 0x165be: goto L165be;
    case 0x165cd: goto L165cd;
    case 0x165cf: goto L165cf;
    case 0x165de: goto L165de;
    case 0x165e0: goto L165e0;
    case 0x165ef: goto L165ef;
    case 0x165f1: goto L165f1;
    case 0x16600: goto L16600;
    case 0x16602: goto L16602;
    case 0x16611: goto L16611;
    case 0x16613: goto L16613;
    case 0x16622: goto L16622;
    case 0x16624: goto L16624;
    case 0x16633: goto L16633;
    case 0x16635: goto L16635;
    case 0x16644: goto L16644;
    case 0x16646: goto L16646;
    case 0x16655: goto L16655;
    case 0x16657: goto L16657;
    case 0x16666: goto L16666;
    case 0x16668: goto L16668;
    case 0x16677: goto L16677;
    case 0x16679: goto L16679;
    case 0x16688: goto L16688;
    case 0x1668a: goto L1668a;
    case 0x16699: goto L16699;
    case 0x1669b: goto L1669b;
    case 0x166aa: goto L166aa;
    case 0x166ac: goto L166ac;
    case 0x166bb: goto L166bb;
    case 0x166bd: goto L166bd;
    case 0x166cc: goto L166cc;
    case 0x166ce: goto L166ce;
    case 0x166dd: goto L166dd;
    case 0x166df: goto L166df;
    case 0x166ee: goto L166ee;
    case 0x166f0: goto L166f0;
    case 0x166ff: goto L166ff;
    case 0x16701: goto L16701;
    case 0x1670b: goto L1670b;
    case 0x1671b: goto L1671b;
    case 0x1671c: goto L1671c;
    case 0x16743: goto L16743;
    case 0x16761: goto L16761;
    case 0x16763: goto L16763;
    case 0x16772: goto L16772;
    case 0x16774: goto L16774;
    case 0x16783: goto L16783;
    case 0x16785: goto L16785;
    case 0x16794: goto L16794;
    case 0x16796: goto L16796;
    case 0x167a5: goto L167a5;
    case 0x167a7: goto L167a7;
    case 0x167b6: goto L167b6;
    case 0x167b8: goto L167b8;
    case 0x167c7: goto L167c7;
    case 0x167c9: goto L167c9;
    case 0x167d8: goto L167d8;
    case 0x167da: goto L167da;
    case 0x167e9: goto L167e9;
    case 0x167eb: goto L167eb;
    case 0x167fa: goto L167fa;
    case 0x167fc: goto L167fc;
    case 0x1680b: goto L1680b;
    case 0x1680d: goto L1680d;
    case 0x1681c: goto L1681c;
    case 0x1681e: goto L1681e;
    case 0x1682d: goto L1682d;
    case 0x1682f: goto L1682f;
    case 0x1683e: goto L1683e;
    case 0x16840: goto L16840;
    case 0x1684f: goto L1684f;
    case 0x16851: goto L16851;
    case 0x16860: goto L16860;
    case 0x16862: goto L16862;
    case 0x16871: goto L16871;
    case 0x16873: goto L16873;
    case 0x16882: goto L16882;
    case 0x16884: goto L16884;
    case 0x16893: goto L16893;
    case 0x16895: goto L16895;
    case 0x168a4: goto L168a4;
    case 0x168a6: goto L168a6;
    case 0x168b0: goto L168b0;
    case 0x168bf: goto L168bf;
    case 0x168c0: goto L168c0;
    case 0x168e3: goto L168e3;
    case 0x168ea: goto L168ea;
    case 0x168eb: goto L168eb;
    case 0x1690d: goto L1690d;
    case 0x16914: goto L16914;
    case 0x169e9: goto L169e9;
    case 0x169f5: goto L169f5;
    case 0x16a1f: goto L16a1f;
    case 0x16a4d: goto L16a4d;
    case 0x16a67: goto L16a67;
    case 0x16a6e: goto L16a6e;
    case 0x16a7c: goto L16a7c;
    case 0x16a7f: goto L16a7f;
    case 0x16a99: goto L16a99;
    case 0x16aa6: goto L16aa6;
    case 0x16aac: goto L16aac;
    case 0x16ab3: goto L16ab3;
    case 0x16ac6: goto L16ac6;
    case 0x16ac9: goto L16ac9;
    case 0x16acd: goto L16acd;
    case 0x16ae7: goto L16ae7;
    case 0x16aee: goto L16aee;
    case 0x16afc: goto L16afc;
    case 0x16aff: goto L16aff;
    case 0x16b1c: goto L16b1c;
    case 0x16b23: goto L16b23;
    case 0x16b29: goto L16b29;
    case 0x16b2c: goto L16b2c;
    case 0x16b2d: goto L16b2d;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x1377  [x1]
    goto L16387;
L16387:
    if (c.tracing) c.traceAt(0x16387);
    // 1501:1377  mov word ptr cs:[0x1375], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x1375u), c.a.x);
    // 1501:137b  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:137e  int 0x10  [x1]
    c.ip = 0x1380u; c.d32 = false; c.intr(0x10, 0x1380u);
L16390:
    if (c.tracing) c.traceAt(0x16390);
    // 1501:1380  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L16392:
    if (c.tracing) c.traceAt(0x16392);
    // 1501:1382  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:1384  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:1386  int 0x10  [x16]
    c.ip = 0x1388u; c.d32 = false; c.intr(0x10, 0x1388u);
L16398:
    if (c.tracing) c.traceAt(0x16398);
    // 1501:1388  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:138a  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:138c  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:138f  jne 0x1382  [x16]
    if (!c.zf) goto L16392;
L163a1:
    if (c.tracing) c.traceAt(0x163a1);
    // 1501:1391  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1394  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:1396  out dx, al  [x1]
    c.ip = 0x1397u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1397  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:1398  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L163ab:
    if (c.tracing) c.traceAt(0x163ab);
    // 1501:139b  out dx, al  [x48]
    c.ip = 0x139cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:139c  loop 0x139b  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L163ab;
L163ae:
    if (c.tracing) c.traceAt(0x163ae);
    // 1501:139e  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:13a1  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:13a3  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13a6  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:13a9  out dx, ax  [x1]
    c.ip = 0x13aau; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:13aa  lea si, [0]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0u));
    // 1501:13b1  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:13b3  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L163c6:
    if (c.tracing) c.traceAt(0x163c6);
    // 1501:13b6  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x13b8u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L163c8:
    if (c.tracing) c.traceAt(0x163c8);
    // 1501:13b8  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13bb  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:13be  out dx, ax  [x1]
    c.ip = 0x13bfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:13bf  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:13c1  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L163d4:
    if (c.tracing) c.traceAt(0x163d4);
    // 1501:13c4  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x13c6u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L163d6:
    if (c.tracing) c.traceAt(0x163d6);
    // 1501:13c6  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13c9  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:13cc  out dx, ax  [x1]
    c.ip = 0x13cdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:13cd  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:13cf  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L163e2:
    if (c.tracing) c.traceAt(0x163e2);
    // 1501:13d2  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x13d4u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L163e4:
    if (c.tracing) c.traceAt(0x163e4);
    // 1501:13d4  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13d7  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:13da  out dx, ax  [x1]
    c.ip = 0x13dbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:13db  lea si, [0x5dc0]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0x5dc0u));
    // 1501:13e2  mov di, 0x2000  [x1]
    c.di.x = (uint16_t)(0x2000u);
    // 1501:13e5  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L163f8:
    if (c.tracing) c.traceAt(0x163f8);
    // 1501:13e8  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x13eau; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L163fa:
    if (c.tracing) c.traceAt(0x163fa);
    // 1501:13ea  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13ed  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:13f0  out dx, ax  [x1]
    c.ip = 0x13f1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:13f1  mov di, 0x2000  [x1]
    c.di.x = (uint16_t)(0x2000u);
    // 1501:13f4  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L16407:
    if (c.tracing) c.traceAt(0x16407);
    // 1501:13f7  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x13f9u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L16409:
    if (c.tracing) c.traceAt(0x16409);
    // 1501:13f9  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:13fc  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:13ff  out dx, ax  [x1]
    c.ip = 0x1400u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1400  mov di, 0x2000  [x1]
    c.di.x = (uint16_t)(0x2000u);
    // 1501:1403  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L16416:
    if (c.tracing) c.traceAt(0x16416);
    // 1501:1406  rep movsw word ptr es:[di], word ptr [si]  [x4001]
    c.ip = 0x1408u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L16418:
    if (c.tracing) c.traceAt(0x16418);
    // 1501:1408  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:140a  mov ax, si  [x1]
    c.a.x = (uint16_t)(c.si.x);
L1641c:
    if (c.tracing) c.traceAt(0x1641c);
    // 1501:140c  mov word ptr cs:[si + 0xde5], ax  [x200]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xde5u), c.a.x);
    // 1501:1411  add ax, 0x28  [x200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:1414  add si, 2  [x200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:1417  cmp si, 0x190  [x200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:141b  jb 0x140c  [x200]
    if (c.cf) goto L1641c;
L1642d:
    if (c.tracing) c.traceAt(0x1642d);
    // 1501:141d  call 0x14fb  [x1]
    c.push16(0x1420u); code_22(c, 0x1650bu); if (c.ip != 0x1420u) c.badReturn(0x1642d);
L16430:
    if (c.tracing) c.traceAt(0x16430);
    // 1501:1420  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1423  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:1426  out dx, ax  [x1]
    c.ip = 0x1427u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1427  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:142a  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:142d  out dx, ax  [x1]
    c.ip = 0x142eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
L1643e:
    if (c.tracing) c.traceAt(0x1643e);
    // 1501:142e  inc word ptr [0xbbc8]  [x806]
    c.w16(c.dsb + (uint32_t)(0xbbc8u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xbbc8u)), false));
    // 1501:1435  and word ptr [0xbbc8], 1  [x806]
    c.w16(c.dsb + (uint32_t)(0xbbc8u), c.logic<16>((c.r16(c.dsb + (uint32_t)(0xbbc8u))) & (0x1u), false));
    // 1501:143d  mov si, word ptr [0xbbc8]  [x806]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xbbc8u)));
    // 1501:1444  shl si, 1  [x806]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x1u) & 31), true));
    // 1501:1446  mov ax, word ptr [si - 0x4432]  [x806]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffbbceu)));
    // 1501:144a  mov es, ax  [x806]
    c.loadEs(c.a.x);
    // 1501:144c  mov cx, word ptr [si - 0x4436]  [x806]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffffbbcau)));
    // 1501:1450  mov dx, 0x3d4  [x806]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:1453  mov al, 0xc  [x806]
    c.a.l = (uint8_t)(0xcu);
    // 1501:1455  mov ah, ch  [x806]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:1457  out dx, ax  [x806]
    c.ip = 0x1458u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1458  mov dx, 0x3d4  [x806]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:145b  mov al, 0xd  [x806]
    c.a.l = (uint8_t)(0xdu);
    // 1501:145d  mov ah, cl  [x806]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:145f  out dx, ax  [x806]
    c.ip = 0x1460u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:1460  call 0x14ed  [x806]
    c.push16(0x1463u); code_22(c, 0x164fdu); if (c.ip != 0x1463u) c.badReturn(0x16470);
L16473:
    if (c.tracing) c.traceAt(0x16473);
    // 1501:1463  mov dx, 0x3c8  [x806]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:1466  xor al, al  [x806]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:1468  out dx, al  [x806]
    c.ip = 0x1469u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1469  inc dx  [x806]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:146a  mov bl, byte ptr cs:[0x14]  [x806]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x14u)));
    // 1501:146f  lea si, [0xbb80]  [x806]
    c.si.x = (uint16_t)((uint32_t)(0xbb80u));
L16486:
    if (c.tracing) c.traceAt(0x16486);
    // 1501:1476  lodsb al, byte ptr [si]  [x6448]
    c.ip = 0x1477u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1477  sub al, bl  [x6448]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:1479  jge 0x147d  [x6448]
    if ((c.sf == c.of)) goto L1648d;
L1648b:
    if (c.tracing) c.traceAt(0x1648b);
    // 1501:147b  xor al, al  [x1271]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1648d:
    if (c.tracing) c.traceAt(0x1648d);
    // 1501:147d  out dx, al  [x6448]
    c.ip = 0x147eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:147e  lodsb al, byte ptr [si]  [x6448]
    c.ip = 0x147fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:147f  sub al, bl  [x6448]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:1481  jge 0x1485  [x6448]
    if ((c.sf == c.of)) goto L16495;
L16493:
    if (c.tracing) c.traceAt(0x16493);
    // 1501:1483  xor al, al  [x450]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L16495:
    if (c.tracing) c.traceAt(0x16495);
    // 1501:1485  out dx, al  [x6448]
    c.ip = 0x1486u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:1486  lodsb al, byte ptr [si]  [x6448]
    c.ip = 0x1487u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:1487  sub al, bl  [x6448]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:1489  jge 0x148d  [x6448]
    if ((c.sf == c.of)) goto L1649d;
L1649b:
    if (c.tracing) c.traceAt(0x1649b);
    // 1501:148b  xor al, al  [x406]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1649d:
    if (c.tracing) c.traceAt(0x1649d);
    // 1501:148d  out dx, al  [x6448]
    c.ip = 0x148eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:148e  add si, 3  [x6448]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, false));
    // 1501:1491  cmp si, 0xbbb0  [x6448]
    c.sub<16>(c.si.x, 0xbbb0u, true);
    // 1501:1495  jb 0x1476  [x6448]
    if (c.cf) goto L16486;
L164a7:
    if (c.tracing) c.traceAt(0x164a7);
    // 1501:1497  mov cx, 0x18  [x806]
    c.c.x = (uint16_t)(0x18u);
    // 1501:149a  lea si, [0xbbb0]  [x806]
    c.si.x = (uint16_t)((uint32_t)(0xbbb0u));
L164b1:
    if (c.tracing) c.traceAt(0x164b1);
    // 1501:14a1  lodsb al, byte ptr [si]  [x19344]
    c.ip = 0x14a2u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:14a2  sub al, bl  [x19344]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:14a4  jge 0x14a8  [x19344]
    if ((c.sf == c.of)) goto L164b8;
L164b6:
    if (c.tracing) c.traceAt(0x164b6);
    // 1501:14a6  xor al, al  [x840]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L164b8:
    if (c.tracing) c.traceAt(0x164b8);
    // 1501:14a8  out dx, al  [x19344]
    c.ip = 0x14a9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:14a9  loop 0x14a1  [x19344]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L164b1;
L164bb:
    if (c.tracing) c.traceAt(0x164bb);
    // 1501:14ab  push ds  [x806]
    c.push16(c.ds);
    // 1501:14ac  call 0x19d9  [x806]
    c.push16(0x14afu); code_22(c, 0x169e9u); if (c.ip != 0x14afu) c.badReturn(0x164bc);
L164bf:
    if (c.tracing) c.traceAt(0x164bf);
    // 1501:14af  pop ds  [x806]
    c.loadDs((uint16_t)c.pop16());
    // 1501:14b0  inc word ptr cs:[0x12]  [x806]
    c.w16(c.csb + (uint16_t)(0x12u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x12u)), false));
    // 1501:14b5  cmp word ptr cs:[0x12], 0x20  [x806]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x12u)), 0x20u, true);
    // 1501:14bb  jae 0x14c3  [x806]
    if (!c.cf) goto L164d3;
L164cd:
    if (c.tracing) c.traceAt(0x164cd);
    // 1501:14bd  sub byte ptr cs:[0x14], 2  [x31]
    c.w8(c.csb + (uint16_t)(0x14u), c.sub<8>(c.r8(c.csb + (uint16_t)(0x14u)), 0x2u, true));
L164d3:
    if (c.tracing) c.traceAt(0x164d3);
    // 1501:14c3  cmp word ptr cs:[0x12], 0x300  [x806]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x12u)), 0x300u, true);
    // 1501:14ca  jb 0x14dd  [x806]
    if (c.cf) goto L164ed;
L164dc:
    if (c.tracing) c.traceAt(0x164dc);
    // 1501:14cc  add byte ptr cs:[0x14], 2  [x39]
    c.w8(c.csb + (uint16_t)(0x14u), c.add<8>(c.r8(c.csb + (uint16_t)(0x14u)), 0x2u, false));
    // 1501:14d2  cmp byte ptr cs:[0x14], 0x50  [x39]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x14u)), 0x50u, true);
    // 1501:14d8  jb 0x14dd  [x39]
    if (c.cf) goto L164ed;
L164ea:
    if (c.tracing) c.traceAt(0x164ea);
    // 1501:14da  jmp 0x1b1d  [x1]
    goto L16b2d;
L164ed:
    if (c.tracing) c.traceAt(0x164ed);
    // 1501:14dd  dec word ptr cs:[0x10]  [x805]
    c.w16(c.csb + (uint16_t)(0x10u), c.dec<16>(c.r16(c.csb + (uint16_t)(0x10u)), true));
    // 1501:14e2  jns 0x14ea  [x805]
    if (!c.sf) goto L164fa;
L164f4:
    if (c.tracing) c.traceAt(0x164f4);
    // 1501:14e4  add word ptr cs:[0x10], 0x14  [x41]
    c.w16(c.csb + (uint16_t)(0x10u), c.add<16>(c.r16(c.csb + (uint16_t)(0x10u)), 0x14u, true));
L164fa:
    if (c.tracing) c.traceAt(0x164fa);
    // 1501:14ea  jmp 0x142e  [x805]
    goto L1643e;
L164fd:
    if (c.tracing) c.traceAt(0x164fd);
    // 1501:14ed  mov dx, 0x3da  [x806]
    c.dx_.x = (uint16_t)(0x3dau);
L16500:
    if (c.tracing) c.traceAt(0x16500);
    // 1501:14f0  in al, dx  [x37529]
    c.ip = 0x14f1u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16501:
    if (c.tracing) c.traceAt(0x16501);
    // 1501:14f1  test al, 8  [x49770]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:14f3  je 0x14f0  [x49770]
    if (c.zf) goto L16500;
L16505:
    if (c.tracing) c.traceAt(0x16505);
    // 1501:14f5  in al, dx  [x2574]
    c.ip = 0x14f6u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L16506:
    if (c.tracing) c.traceAt(0x16506);
    // 1501:14f6  test al, 8  [x3432]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:14f8  jne 0x14f5  [x3432]
    if (!c.zf) goto L16505;
L1650a:
    if (c.tracing) c.traceAt(0x1650a);
    // 1501:14fa  ret   [x806]
    c.ip = c.pop16(); return;
L1650b:
    if (c.tracing) c.traceAt(0x1650b);
    // 1501:14fb  push es  [x1]
    c.push16(c.es);
    // 1501:14fc  mov ax, word ptr cs:[0x1375]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1375u)));
    // 1501:1500  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1502  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:1505  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L16517:
    if (c.tracing) c.traceAt(0x16517);
    // 1501:1507  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L16519:
    if (c.tracing) c.traceAt(0x16519);
    // 1501:1509  mov ax, es  [x1]
    c.a.x = (uint16_t)(c.es);
    // 1501:150b  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, false));
    // 1501:150e  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:1510  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:1513  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L16525:
    if (c.tracing) c.traceAt(0x16525);
    // 1501:1515  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L16527:
    if (c.tracing) c.traceAt(0x16527);
    // 1501:1517  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:1518  push ds  [x1]
    c.push16(c.ds);
    // 1501:1519  mov ax, word ptr cs:[0x1375]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1375u)));
    // 1501:151d  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 1501:151f  mov word ptr cs:[0xc9c], 0xa5  [x1]
    c.w16(c.csb + (uint16_t)(0xc9cu), 0xa5u);
    // 1501:1526  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L16539:
    if (c.tracing) c.traceAt(0x16539);
    // 1501:1529  push bp  [x80]
    c.push16(c.bp.x);
    // 1501:152a  call 0x1567  [x80]
    c.push16(0x152du); code_22(c, 0x16577u); if (c.ip != 0x152du) c.badReturn(0x1653a);
L1653d:
    if (c.tracing) c.traceAt(0x1653d);
    // 1501:152d  call 0x170c  [x80]
    c.push16(0x1530u); code_22(c, 0x1671cu); if (c.ip != 0x1530u) c.badReturn(0x1653d);
L16540:
    if (c.tracing) c.traceAt(0x16540);
    // 1501:1530  pop bp  [x80]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:1531  sub word ptr cs:[0xc9c], 1  [x80]
    c.w16(c.csb + (uint16_t)(0xc9cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xc9cu)), 0x1u, false));
    // 1501:1537  add bp, 0x320  [x80]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x320u, false));
    // 1501:153b  cmp bp, 0xfa00  [x80]
    c.sub<16>(c.bp.x, 0xfa00u, true);
    // 1501:153f  jb 0x1529  [x80]
    if (c.cf) goto L16539;
L16551:
    if (c.tracing) c.traceAt(0x16551);
    // 1501:1541  mov ax, word ptr cs:[0x1375]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1375u)));
    // 1501:1545  add ax, 0x1000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1000u, true));
    // 1501:1548  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 1501:154a  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L1655d:
    if (c.tracing) c.traceAt(0x1655d);
    // 1501:154d  push bp  [x40]
    c.push16(c.bp.x);
    // 1501:154e  call 0x1567  [x40]
    c.push16(0x1551u); code_22(c, 0x16577u); if (c.ip != 0x1551u) c.badReturn(0x1655e);
L16561:
    if (c.tracing) c.traceAt(0x16561);
    // 1501:1551  call 0x170c  [x40]
    c.push16(0x1554u); code_22(c, 0x1671cu); if (c.ip != 0x1554u) c.badReturn(0x16561);
L16564:
    if (c.tracing) c.traceAt(0x16564);
    // 1501:1554  pop bp  [x40]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:1555  sub word ptr cs:[0xc9c], 1  [x40]
    c.w16(c.csb + (uint16_t)(0xc9cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0xc9cu)), 0x1u, false));
    // 1501:155b  add bp, 0x320  [x40]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x320u, false));
    // 1501:155f  cmp bp, 0x7d00  [x40]
    c.sub<16>(c.bp.x, 0x7d00u, true);
    // 1501:1563  jb 0x154d  [x40]
    if (c.cf) goto L1655d;
L16575:
    if (c.tracing) c.traceAt(0x16575);
    // 1501:1565  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:1566  ret   [x1]
    c.ip = c.pop16(); return;
L16577:
    if (c.tracing) c.traceAt(0x16577);
    // 1501:1567  mov word ptr cs:[0xc98], 0x46  [x120]
    c.w16(c.csb + (uint16_t)(0xc98u), 0x46u);
    // 1501:156e  mov word ptr cs:[0xc9a], 0xa0  [x120]
    c.w16(c.csb + (uint16_t)(0xc9au), 0xa0u);
    // 1501:1575  mov ax, 0x4000  [x120]
    c.a.x = (uint16_t)(0x4000u);
    // 1501:1578  xor dx, dx  [x120]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:157a  div word ptr cs:[0xc9c]  [x120]
    while (!c.div16(c.r16(c.csb + (uint16_t)(0xc9cu)))) { c.d32 = false; c.intr(0, 0x157au); }   // #DE: int 0, then again
    // 1501:157f  mov byte ptr cs:[0xc95], al  [x120]
    c.w8(c.csb + (uint16_t)(0xc95u), c.a.l);
    // 1501:1583  mov byte ptr cs:[0xc97], ah  [x120]
    c.w8(c.csb + (uint16_t)(0xc97u), c.a.h);
    // 1501:1588  mov byte ptr cs:[0xc96], 0  [x120]
    c.w8(c.csb + (uint16_t)(0xc96u), 0x0u);
L1659e:
    if (c.tracing) c.traceAt(0x1659e);
    // 1501:158e  mov si, word ptr cs:[0xc98]  [x19200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xc98u)));
    // 1501:1593  mov bx, word ptr cs:[0xc9a]  [x19200]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xc9au)));
    // 1501:1598  mov al, byte ptr cs:[bx + 0xca5]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0xca5u)));
    // 1501:159d  shr bx, 3  [x19200]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:15a0  mov di, bx  [x19200]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:15a2  add di, bp  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.bp.x, false));
    // 1501:15a4  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15aa  je 0x15ae  [x19200]
    if (c.zf) goto L165be;
L165bc:
    if (c.tracing) c.traceAt(0x165bc);
    // 1501:15ac  or byte ptr [di], al  [x240]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L165be:
    if (c.tracing) c.traceAt(0x165be);
    // 1501:15ae  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:15b2  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:15b5  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15bb  je 0x15bf  [x19200]
    if (c.zf) goto L165cf;
L165cd:
    if (c.tracing) c.traceAt(0x165cd);
    // 1501:15bd  or byte ptr [di], al  [x2111]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L165cf:
    if (c.tracing) c.traceAt(0x165cf);
    // 1501:15bf  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:15c3  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:15c6  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15cc  je 0x15d0  [x19200]
    if (c.zf) goto L165e0;
L165de:
    if (c.tracing) c.traceAt(0x165de);
    // 1501:15ce  or byte ptr [di], al  [x10529]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L165e0:
    if (c.tracing) c.traceAt(0x165e0);
    // 1501:15d0  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:15d4  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:15d7  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15dd  je 0x15e1  [x19200]
    if (c.zf) goto L165f1;
L165ef:
    if (c.tracing) c.traceAt(0x165ef);
    // 1501:15df  or byte ptr [di], al  [x11341]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L165f1:
    if (c.tracing) c.traceAt(0x165f1);
    // 1501:15e1  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:15e5  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:15e8  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15ee  je 0x15f2  [x19200]
    if (c.zf) goto L16602;
L16600:
    if (c.tracing) c.traceAt(0x16600);
    // 1501:15f0  or byte ptr [di], al  [x12164]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16602:
    if (c.tracing) c.traceAt(0x16602);
    // 1501:15f2  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:15f6  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:15f9  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:15ff  je 0x1603  [x19200]
    if (c.zf) goto L16613;
L16611:
    if (c.tracing) c.traceAt(0x16611);
    // 1501:1601  or byte ptr [di], al  [x12373]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16613:
    if (c.tracing) c.traceAt(0x16613);
    // 1501:1603  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1607  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:160a  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1610  je 0x1614  [x19200]
    if (c.zf) goto L16624;
L16622:
    if (c.tracing) c.traceAt(0x16622);
    // 1501:1612  or byte ptr [di], al  [x12442]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16624:
    if (c.tracing) c.traceAt(0x16624);
    // 1501:1614  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1618  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:161b  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1621  je 0x1625  [x19200]
    if (c.zf) goto L16635;
L16633:
    if (c.tracing) c.traceAt(0x16633);
    // 1501:1623  or byte ptr [di], al  [x11889]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16635:
    if (c.tracing) c.traceAt(0x16635);
    // 1501:1625  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1629  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:162c  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1632  je 0x1636  [x19200]
    if (c.zf) goto L16646;
L16644:
    if (c.tracing) c.traceAt(0x16644);
    // 1501:1634  or byte ptr [di], al  [x11934]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16646:
    if (c.tracing) c.traceAt(0x16646);
    // 1501:1636  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:163a  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:163d  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1643  je 0x1647  [x19200]
    if (c.zf) goto L16657;
L16655:
    if (c.tracing) c.traceAt(0x16655);
    // 1501:1645  or byte ptr [di], al  [x11584]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16657:
    if (c.tracing) c.traceAt(0x16657);
    // 1501:1647  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:164b  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:164e  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1654  je 0x1658  [x19200]
    if (c.zf) goto L16668;
L16666:
    if (c.tracing) c.traceAt(0x16666);
    // 1501:1656  or byte ptr [di], al  [x10708]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16668:
    if (c.tracing) c.traceAt(0x16668);
    // 1501:1658  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:165c  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:165f  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1665  je 0x1669  [x19200]
    if (c.zf) goto L16679;
L16677:
    if (c.tracing) c.traceAt(0x16677);
    // 1501:1667  or byte ptr [di], al  [x7790]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16679:
    if (c.tracing) c.traceAt(0x16679);
    // 1501:1669  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:166d  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1670  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1676  je 0x167a  [x19200]
    if (c.zf) goto L1668a;
L16688:
    if (c.tracing) c.traceAt(0x16688);
    // 1501:1678  or byte ptr [di], al  [x10514]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L1668a:
    if (c.tracing) c.traceAt(0x1668a);
    // 1501:167a  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:167e  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1681  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1687  je 0x168b  [x19200]
    if (c.zf) goto L1669b;
L16699:
    if (c.tracing) c.traceAt(0x16699);
    // 1501:1689  or byte ptr [di], al  [x11066]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L1669b:
    if (c.tracing) c.traceAt(0x1669b);
    // 1501:168b  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:168f  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1692  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1698  je 0x169c  [x19200]
    if (c.zf) goto L166ac;
L166aa:
    if (c.tracing) c.traceAt(0x166aa);
    // 1501:169a  or byte ptr [di], al  [x11034]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L166ac:
    if (c.tracing) c.traceAt(0x166ac);
    // 1501:169c  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16a0  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:16a3  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:16a9  je 0x16ad  [x19200]
    if (c.zf) goto L166bd;
L166bb:
    if (c.tracing) c.traceAt(0x166bb);
    // 1501:16ab  or byte ptr [di], al  [x10128]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L166bd:
    if (c.tracing) c.traceAt(0x166bd);
    // 1501:16ad  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16b1  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:16b4  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:16ba  je 0x16be  [x19200]
    if (c.zf) goto L166ce;
L166cc:
    if (c.tracing) c.traceAt(0x166cc);
    // 1501:16bc  or byte ptr [di], al  [x9629]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L166ce:
    if (c.tracing) c.traceAt(0x166ce);
    // 1501:16be  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16c2  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:16c5  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:16cb  je 0x16cf  [x19200]
    if (c.zf) goto L166df;
L166dd:
    if (c.tracing) c.traceAt(0x166dd);
    // 1501:16cd  or byte ptr [di], al  [x2375]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L166df:
    if (c.tracing) c.traceAt(0x166df);
    // 1501:16cf  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16d3  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:16d6  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:16dc  je 0x16e0  [x19200]
    if (c.zf) goto L166f0;
L166ee:
    if (c.tracing) c.traceAt(0x166ee);
    // 1501:16de  or byte ptr [di], al  [x2111]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L166f0:
    if (c.tracing) c.traceAt(0x166f0);
    // 1501:16e0  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16e4  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:16e7  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:16ed  je 0x16f1  [x19200]
    if (c.zf) goto L16701;
L166ff:
    if (c.tracing) c.traceAt(0x166ff);
    // 1501:16ef  or byte ptr [di], al  [x240]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16701:
    if (c.tracing) c.traceAt(0x16701);
    // 1501:16f1  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:16f5  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
    // 1501:16f8  call 0x18b0  [x19200]
    c.push16(0x16fbu); code_22(c, 0x168c0u); if (c.ip != 0x16fbu) c.badReturn(0x16708);
L1670b:
    if (c.tracing) c.traceAt(0x1670b);
    // 1501:16fb  inc word ptr cs:[0xc9a]  [x19200]
    c.w16(c.csb + (uint16_t)(0xc9au), c.inc<16>(c.r16(c.csb + (uint16_t)(0xc9au)), false));
    // 1501:1700  cmp word ptr cs:[0xc9a], 0x140  [x19200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xc9au)), 0x140u, true);
    // 1501:1707  jb 0x158e  [x19200]
    if (c.cf) goto L1659e;
L1671b:
    if (c.tracing) c.traceAt(0x1671b);
    // 1501:170b  ret   [x120]
    c.ip = c.pop16(); return;
L1671c:
    if (c.tracing) c.traceAt(0x1671c);
    // 1501:170c  mov word ptr cs:[0xc98], 0x45  [x120]
    c.w16(c.csb + (uint16_t)(0xc98u), 0x45u);
    // 1501:1713  mov word ptr cs:[0xc9a], 0x9f  [x120]
    c.w16(c.csb + (uint16_t)(0xc9au), 0x9fu);
    // 1501:171a  mov ax, 0x4000  [x120]
    c.a.x = (uint16_t)(0x4000u);
    // 1501:171d  xor dx, dx  [x120]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:171f  div word ptr cs:[0xc9c]  [x120]
    while (!c.div16(c.r16(c.csb + (uint16_t)(0xc9cu)))) { c.d32 = false; c.intr(0, 0x171fu); }   // #DE: int 0, then again
    // 1501:1724  mov byte ptr cs:[0xc95], al  [x120]
    c.w8(c.csb + (uint16_t)(0xc95u), c.a.l);
    // 1501:1728  mov byte ptr cs:[0xc97], ah  [x120]
    c.w8(c.csb + (uint16_t)(0xc97u), c.a.h);
    // 1501:172d  mov byte ptr cs:[0xc96], 0  [x120]
    c.w8(c.csb + (uint16_t)(0xc96u), 0x0u);
L16743:
    if (c.tracing) c.traceAt(0x16743);
    // 1501:1733  mov si, word ptr cs:[0xc98]  [x19200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xc98u)));
    // 1501:1738  mov bx, word ptr cs:[0xc9a]  [x19200]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xc9au)));
    // 1501:173d  mov al, byte ptr cs:[bx + 0xca5]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0xca5u)));
    // 1501:1742  shr bx, 3  [x19200]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:1745  mov di, bx  [x19200]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:1747  add di, bp  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.bp.x, false));
    // 1501:1749  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:174f  je 0x1753  [x19200]
    if (c.zf) goto L16763;
L16761:
    if (c.tracing) c.traceAt(0x16761);
    // 1501:1751  or byte ptr [di], al  [x206]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16763:
    if (c.tracing) c.traceAt(0x16763);
    // 1501:1753  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1757  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:175a  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1760  je 0x1764  [x19200]
    if (c.zf) goto L16774;
L16772:
    if (c.tracing) c.traceAt(0x16772);
    // 1501:1762  or byte ptr [di], al  [x8593]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16774:
    if (c.tracing) c.traceAt(0x16774);
    // 1501:1764  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1768  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:176b  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1771  je 0x1775  [x19200]
    if (c.zf) goto L16785;
L16783:
    if (c.tracing) c.traceAt(0x16783);
    // 1501:1773  or byte ptr [di], al  [x11129]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16785:
    if (c.tracing) c.traceAt(0x16785);
    // 1501:1775  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1779  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:177c  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1782  je 0x1786  [x19200]
    if (c.zf) goto L16796;
L16794:
    if (c.tracing) c.traceAt(0x16794);
    // 1501:1784  or byte ptr [di], al  [x11290]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16796:
    if (c.tracing) c.traceAt(0x16796);
    // 1501:1786  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:178a  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:178d  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1793  je 0x1797  [x19200]
    if (c.zf) goto L167a7;
L167a5:
    if (c.tracing) c.traceAt(0x167a5);
    // 1501:1795  or byte ptr [di], al  [x11437]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167a7:
    if (c.tracing) c.traceAt(0x167a7);
    // 1501:1797  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:179b  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:179e  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17a4  je 0x17a8  [x19200]
    if (c.zf) goto L167b8;
L167b6:
    if (c.tracing) c.traceAt(0x167b6);
    // 1501:17a6  or byte ptr [di], al  [x12204]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167b8:
    if (c.tracing) c.traceAt(0x167b8);
    // 1501:17a8  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:17ac  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:17af  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17b5  je 0x17b9  [x19200]
    if (c.zf) goto L167c9;
L167c7:
    if (c.tracing) c.traceAt(0x167c7);
    // 1501:17b7  or byte ptr [di], al  [x12392]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167c9:
    if (c.tracing) c.traceAt(0x167c9);
    // 1501:17b9  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:17bd  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:17c0  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17c6  je 0x17ca  [x19200]
    if (c.zf) goto L167da;
L167d8:
    if (c.tracing) c.traceAt(0x167d8);
    // 1501:17c8  or byte ptr [di], al  [x11147]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167da:
    if (c.tracing) c.traceAt(0x167da);
    // 1501:17ca  add si, 0xa0  [x19201]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:17ce  add di, 0x28  [x19201]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:17d1  cmp byte ptr cs:[si + 0x15], 0  [x19201]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17d7  je 0x17db  [x19201]
    if (c.zf) goto L167eb;
L167e9:
    if (c.tracing) c.traceAt(0x167e9);
    // 1501:17d9  or byte ptr [di], al  [x11393]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167eb:
    if (c.tracing) c.traceAt(0x167eb);
    // 1501:17db  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:17df  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:17e2  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17e8  je 0x17ec  [x19200]
    if (c.zf) goto L167fc;
L167fa:
    if (c.tracing) c.traceAt(0x167fa);
    // 1501:17ea  or byte ptr [di], al  [x12540]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L167fc:
    if (c.tracing) c.traceAt(0x167fc);
    // 1501:17ec  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:17f0  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:17f3  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:17f9  je 0x17fd  [x19200]
    if (c.zf) goto L1680d;
L1680b:
    if (c.tracing) c.traceAt(0x1680b);
    // 1501:17fb  or byte ptr [di], al  [x11476]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L1680d:
    if (c.tracing) c.traceAt(0x1680d);
    // 1501:17fd  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1801  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1804  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:180a  je 0x180e  [x19200]
    if (c.zf) goto L1681e;
L1681c:
    if (c.tracing) c.traceAt(0x1681c);
    // 1501:180c  or byte ptr [di], al  [x10747]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L1681e:
    if (c.tracing) c.traceAt(0x1681e);
    // 1501:180e  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1812  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1815  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:181b  je 0x181f  [x19200]
    if (c.zf) goto L1682f;
L1682d:
    if (c.tracing) c.traceAt(0x1682d);
    // 1501:181d  or byte ptr [di], al  [x10823]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L1682f:
    if (c.tracing) c.traceAt(0x1682f);
    // 1501:181f  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1823  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1826  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:182c  je 0x1830  [x19200]
    if (c.zf) goto L16840;
L1683e:
    if (c.tracing) c.traceAt(0x1683e);
    // 1501:182e  or byte ptr [di], al  [x12193]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16840:
    if (c.tracing) c.traceAt(0x16840);
    // 1501:1830  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1834  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1837  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:183d  je 0x1841  [x19200]
    if (c.zf) goto L16851;
L1684f:
    if (c.tracing) c.traceAt(0x1684f);
    // 1501:183f  or byte ptr [di], al  [x12419]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16851:
    if (c.tracing) c.traceAt(0x16851);
    // 1501:1841  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1845  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1848  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:184e  je 0x1852  [x19200]
    if (c.zf) goto L16862;
L16860:
    if (c.tracing) c.traceAt(0x16860);
    // 1501:1850  or byte ptr [di], al  [x12081]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16862:
    if (c.tracing) c.traceAt(0x16862);
    // 1501:1852  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1856  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:1859  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:185f  je 0x1863  [x19200]
    if (c.zf) goto L16873;
L16871:
    if (c.tracing) c.traceAt(0x16871);
    // 1501:1861  or byte ptr [di], al  [x11571]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16873:
    if (c.tracing) c.traceAt(0x16873);
    // 1501:1863  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1867  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:186a  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1870  je 0x1874  [x19200]
    if (c.zf) goto L16884;
L16882:
    if (c.tracing) c.traceAt(0x16882);
    // 1501:1872  or byte ptr [di], al  [x9760]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16884:
    if (c.tracing) c.traceAt(0x16884);
    // 1501:1874  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1878  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:187b  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1881  je 0x1885  [x19200]
    if (c.zf) goto L16895;
L16893:
    if (c.tracing) c.traceAt(0x16893);
    // 1501:1883  or byte ptr [di], al  [x8593]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L16895:
    if (c.tracing) c.traceAt(0x16895);
    // 1501:1885  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:1889  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:188c  cmp byte ptr cs:[si + 0x15], 0  [x19200]
    c.sub<8>(c.r8(c.csb + (uint16_t)(c.si.x + 0x15u)), 0x0u, true);
    // 1501:1892  je 0x1896  [x19200]
    if (c.zf) goto L168a6;
L168a4:
    if (c.tracing) c.traceAt(0x168a4);
    // 1501:1894  or byte ptr [di], al  [x206]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.dsb + (uint16_t)(c.di.x))) | (c.a.l), true));
L168a6:
    if (c.tracing) c.traceAt(0x168a6);
    // 1501:1896  add si, 0xa0  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:189a  add di, 0x28  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
    // 1501:189d  call 0x18db  [x19200]
    c.push16(0x18a0u); code_22(c, 0x168ebu); if (c.ip != 0x18a0u) c.badReturn(0x168ad);
L168b0:
    if (c.tracing) c.traceAt(0x168b0);
    // 1501:18a0  dec word ptr cs:[0xc9a]  [x19200]
    c.w16(c.csb + (uint16_t)(0xc9au), c.dec<16>(c.r16(c.csb + (uint16_t)(0xc9au)), false));
    // 1501:18a5  cmp word ptr cs:[0xc9a], 0  [x19200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xc9au)), 0x0u, true);
    // 1501:18ab  jge 0x1733  [x19200]
    if ((c.sf == c.of)) goto L16743;
L168bf:
    if (c.tracing) c.traceAt(0x168bf);
    // 1501:18af  ret   [x120]
    c.ip = c.pop16(); return;
L168c0:
    if (c.tracing) c.traceAt(0x168c0);
    // 1501:18b0  mov al, byte ptr cs:[0xc97]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xc97u)));
    // 1501:18b4  xor ah, ah  [x19200]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:18b6  add word ptr cs:[0xc98], ax  [x19200]
    c.w16(c.csb + (uint16_t)(0xc98u), c.add<16>(c.r16(c.csb + (uint16_t)(0xc98u)), c.a.x, false));
    // 1501:18bb  mov al, byte ptr cs:[0xc95]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xc95u)));
    // 1501:18bf  add byte ptr cs:[0xc96], al  [x19200]
    c.w8(c.csb + (uint16_t)(0xc96u), c.add<8>(c.r8(c.csb + (uint16_t)(0xc96u)), c.a.l, true));
    // 1501:18c4  adc word ptr cs:[0xc98], 0  [x19200]
    c.w16(c.csb + (uint16_t)(0xc98u), c.add<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0x0u, false, c.cf));
    // 1501:18ca  cmp word ptr cs:[0xc98], 0xa0  [x19200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0xa0u, true);
    // 1501:18d1  jb 0x18da  [x19200]
    if (c.cf) goto L168ea;
L168e3:
    if (c.tracing) c.traceAt(0x168e3);
    // 1501:18d3  sub word ptr cs:[0xc98], 0xa0  [x68]
    c.w16(c.csb + (uint16_t)(0xc98u), c.sub<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0xa0u, true));
L168ea:
    if (c.tracing) c.traceAt(0x168ea);
    // 1501:18da  ret   [x19200]
    c.ip = c.pop16(); return;
L168eb:
    if (c.tracing) c.traceAt(0x168eb);
    // 1501:18db  mov al, byte ptr cs:[0xc97]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xc97u)));
    // 1501:18df  xor ah, ah  [x19200]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:18e1  sub word ptr cs:[0xc98], ax  [x19200]
    c.w16(c.csb + (uint16_t)(0xc98u), c.sub<16>(c.r16(c.csb + (uint16_t)(0xc98u)), c.a.x, false));
    // 1501:18e6  mov al, byte ptr cs:[0xc95]  [x19200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xc95u)));
    // 1501:18ea  add byte ptr cs:[0xc96], al  [x19200]
    c.w8(c.csb + (uint16_t)(0xc96u), c.add<8>(c.r8(c.csb + (uint16_t)(0xc96u)), c.a.l, true));
    // 1501:18ef  sbb word ptr cs:[0xc98], 0  [x19200]
    c.w16(c.csb + (uint16_t)(0xc98u), c.sub<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0x0u, false, c.cf));
    // 1501:18f5  cmp word ptr cs:[0xc98], 0  [x19200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0x0u, true);
    // 1501:18fb  jns 0x1904  [x19200]
    if (!c.sf) goto L16914;
L1690d:
    if (c.tracing) c.traceAt(0x1690d);
    // 1501:18fd  add word ptr cs:[0xc98], 0xa0  [x101]
    c.w16(c.csb + (uint16_t)(0xc98u), c.add<16>(c.r16(c.csb + (uint16_t)(0xc98u)), 0xa0u, true));
L16914:
    if (c.tracing) c.traceAt(0x16914);
    // 1501:1904  ret   [x19200]
    c.ip = c.pop16(); return;
L169e9:
    if (c.tracing) c.traceAt(0x169e9);
    // 1501:19d9  mov di, word ptr cs:[0x19cd]  [x806]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19cdu)));
    // 1501:19de  mov bx, word ptr cs:[0x19cf]  [x806]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19cfu)));
    // 1501:19e3  xor si, si  [x806]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L169f5:
    if (c.tracing) c.traceAt(0x169f5);
    // 1501:19e5  and di, 0x3ff  [x161200]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x3ffu), false));
    // 1501:19e9  and bx, 0x3ff  [x161200]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x3ffu), false));
    // 1501:19ed  mov al, byte ptr cs:[di + 0xf75]  [x161200]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.di.x + 0xf75u)));
    // 1501:19f2  add al, byte ptr cs:[bx + 0xf75]  [x161200]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0xf75u)), false));
    // 1501:19f7  shr al, 1  [x161200]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x1u) & 31), false));
    // 1501:19f9  mov byte ptr cs:[si + 0x1905], al  [x161200]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x1905u), c.a.l);
    // 1501:19fe  add di, word ptr cs:[0x19d1]  [x161200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x19d1u)), false));
    // 1501:1a03  add bx, word ptr cs:[0x19d3]  [x161200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x19d3u)), false));
    // 1501:1a08  inc si  [x161200]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:1a09  cmp si, 0xc8  [x161200]
    c.sub<16>(c.si.x, 0xc8u, true);
    // 1501:1a0d  jb 0x19e5  [x161200]
    if (c.cf) goto L169f5;
L16a1f:
    if (c.tracing) c.traceAt(0x16a1f);
    // 1501:1a0f  mov ax, word ptr cs:[0x19cd]  [x806]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19cdu)));
    // 1501:1a13  add ax, word ptr cs:[0x19d5]  [x806]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x19d5u)), false));
    // 1501:1a18  mov word ptr cs:[0x19cd], ax  [x806]
    c.w16(c.csb + (uint16_t)(0x19cdu), c.a.x);
    // 1501:1a1c  mov ax, word ptr cs:[0x19cf]  [x806]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x19cfu)));
    // 1501:1a20  add ax, word ptr cs:[0x19d7]  [x806]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x19d7u)), true));
    // 1501:1a25  mov word ptr cs:[0x19cf], ax  [x806]
    c.w16(c.csb + (uint16_t)(0x19cfu), c.a.x);
    // 1501:1a29  mov di, 0xfa0  [x806]
    c.di.x = (uint16_t)(0xfa0u);
    // 1501:1a2c  mov bx, 0x64  [x806]
    c.b.x = (uint16_t)(0x64u);
    // 1501:1a2f  mov byte ptr cs:[0xca2], 0  [x806]
    c.w8(c.csb + (uint16_t)(0xca2u), 0x0u);
    // 1501:1a35  mov ax, word ptr cs:[0x10]  [x806]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x10u)));
    // 1501:1a39  mov word ptr cs:[0xca3], ax  [x806]
    c.w16(c.csb + (uint16_t)(0xca3u), c.a.x);
L16a4d:
    if (c.tracing) c.traceAt(0x16a4d);
    // 1501:1a3d  mov ax, 0x28  [x80600]
    c.a.x = (uint16_t)(0x28u);
    // 1501:1a40  mul word ptr cs:[0xca3]  [x80600]
    c.mul16(c.r16(c.csb + (uint16_t)(0xca3u)));
    // 1501:1a45  mov bp, ax  [x80600]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1a47  mov al, byte ptr cs:[bx + 0x1905]  [x80600]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x1905u)));
    // 1501:1a4c  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1a4e  mov cx, word ptr cs:[0x1375]  [x80600]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1375u)));
    // 1501:1a53  cmp al, 0x50  [x80600]
    c.sub<8>(c.a.l, 0x50u, true);
    // 1501:1a55  jb 0x1a5e  [x80600]
    if (c.cf) goto L16a6e;
L16a67:
    if (c.tracing) c.traceAt(0x16a67);
    // 1501:1a57  add cx, 0x1000  [x30113]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x1000u, false));
    // 1501:1a5b  sub ax, 0x50  [x30113]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x50u, true));
L16a6e:
    if (c.tracing) c.traceAt(0x16a6e);
    // 1501:1a5e  mov ds, cx  [x80600]
    c.loadDs(c.c.x);
    // 1501:1a60  mov dx, 0x320  [x80600]
    c.dx_.x = (uint16_t)(0x320u);
    // 1501:1a63  mul dx  [x80600]
    c.mul16(c.dx_.x);
    // 1501:1a65  mov si, ax  [x80600]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:1a67  add si, bp  [x80600]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.bp.x, true));
    // 1501:1a69  mov cx, 0xa  [x80600]
    c.c.x = (uint16_t)(0xau);
L16a7c:
    if (c.tracing) c.traceAt(0x16a7c);
    // 1501:1a6c  rep movsd dword ptr es:[di], dword ptr [si]  [x886600]
    c.ip = 0x1a6fu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L16a7f:
    if (c.tracing) c.traceAt(0x16a7f);
    // 1501:1a6f  inc word ptr cs:[0xca3]  [x80600]
    c.w16(c.csb + (uint16_t)(0xca3u), c.inc<16>(c.r16(c.csb + (uint16_t)(0xca3u)), false));
    // 1501:1a74  mov al, byte ptr cs:[bx + 0x1905]  [x80600]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x1905u)));
    // 1501:1a79  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1a7b  shl ax, 2  [x80600]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x2u) & 31), false));
    // 1501:1a7e  add byte ptr cs:[0xca2], al  [x80600]
    c.w8(c.csb + (uint16_t)(0xca2u), c.add<8>(c.r8(c.csb + (uint16_t)(0xca2u)), c.a.l, true));
    // 1501:1a83  pushf   [x80600]
    c.push16(c.flags());
    // 1501:1a84  mov al, ah  [x80600]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1a86  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1a88  popf   [x80600]
    c.ip = 0x1a89u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L16a99:
    if (c.tracing) c.traceAt(0x16a99);
    // 1501:1a89  adc word ptr cs:[0xca3], ax  [x80600]
    c.w16(c.csb + (uint16_t)(0xca3u), c.add<16>(c.r16(c.csb + (uint16_t)(0xca3u)), c.a.x, false, c.cf));
    // 1501:1a8e  cmp word ptr cs:[0xca3], 0x14  [x80600]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xca3u)), 0x14u, true);
    // 1501:1a94  jb 0x1a9c  [x80600]
    if (c.cf) goto L16aac;
L16aa6:
    if (c.tracing) c.traceAt(0x16aa6);
    // 1501:1a96  sub word ptr cs:[0xca3], 0x14  [x7729]
    c.w16(c.csb + (uint16_t)(0xca3u), c.sub<16>(c.r16(c.csb + (uint16_t)(0xca3u)), 0x14u, true));
L16aac:
    if (c.tracing) c.traceAt(0x16aac);
    // 1501:1a9c  inc bx  [x80600]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 1501:1a9d  cmp bx, 0xc8  [x80600]
    c.sub<16>(c.b.x, 0xc8u, true);
    // 1501:1aa1  jb 0x1a3d  [x80600]
    if (c.cf) goto L16a4d;
L16ab3:
    if (c.tracing) c.traceAt(0x16ab3);
    // 1501:1aa3  mov di, 0xf78  [x806]
    c.di.x = (uint16_t)(0xf78u);
    // 1501:1aa6  mov bx, 0x63  [x806]
    c.b.x = (uint16_t)(0x63u);
    // 1501:1aa9  mov byte ptr cs:[0xca2], 0  [x806]
    c.w8(c.csb + (uint16_t)(0xca2u), 0x0u);
    // 1501:1aaf  mov ax, word ptr cs:[0x10]  [x806]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x10u)));
    // 1501:1ab3  dec ax  [x806]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
    // 1501:1ab4  jns 0x1ab9  [x806]
    if (!c.sf) goto L16ac9;
L16ac6:
    if (c.tracing) c.traceAt(0x16ac6);
    // 1501:1ab6  add ax, 0x14  [x41]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
L16ac9:
    if (c.tracing) c.traceAt(0x16ac9);
    // 1501:1ab9  mov word ptr cs:[0xca3], ax  [x806]
    c.w16(c.csb + (uint16_t)(0xca3u), c.a.x);
L16acd:
    if (c.tracing) c.traceAt(0x16acd);
    // 1501:1abd  mov ax, 0x28  [x80600]
    c.a.x = (uint16_t)(0x28u);
    // 1501:1ac0  mul word ptr cs:[0xca3]  [x80600]
    c.mul16(c.r16(c.csb + (uint16_t)(0xca3u)));
    // 1501:1ac5  mov bp, ax  [x80600]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:1ac7  mov al, byte ptr cs:[bx + 0x1905]  [x80600]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x1905u)));
    // 1501:1acc  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1ace  mov cx, word ptr cs:[0x1375]  [x80600]
    c.c.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x1375u)));
    // 1501:1ad3  cmp al, 0x50  [x80600]
    c.sub<8>(c.a.l, 0x50u, true);
    // 1501:1ad5  jb 0x1ade  [x80600]
    if (c.cf) goto L16aee;
L16ae7:
    if (c.tracing) c.traceAt(0x16ae7);
    // 1501:1ad7  add cx, 0x1000  [x17855]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x1000u, false));
    // 1501:1adb  sub ax, 0x50  [x17855]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x50u, true));
L16aee:
    if (c.tracing) c.traceAt(0x16aee);
    // 1501:1ade  mov ds, cx  [x80600]
    c.loadDs(c.c.x);
    // 1501:1ae0  mov dx, 0x320  [x80600]
    c.dx_.x = (uint16_t)(0x320u);
    // 1501:1ae3  mul dx  [x80600]
    c.mul16(c.dx_.x);
    // 1501:1ae5  mov si, ax  [x80600]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:1ae7  add si, bp  [x80600]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.bp.x, true));
    // 1501:1ae9  mov cx, 0xa  [x80600]
    c.c.x = (uint16_t)(0xau);
L16afc:
    if (c.tracing) c.traceAt(0x16afc);
    // 1501:1aec  rep movsd dword ptr es:[di], dword ptr [si]  [x886600]
    c.ip = 0x1aefu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L16aff:
    if (c.tracing) c.traceAt(0x16aff);
    // 1501:1aef  sub di, 0x50  [x80600]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x50u, false));
    // 1501:1af2  dec word ptr cs:[0xca3]  [x80600]
    c.w16(c.csb + (uint16_t)(0xca3u), c.dec<16>(c.r16(c.csb + (uint16_t)(0xca3u)), false));
    // 1501:1af7  mov al, byte ptr cs:[bx + 0x1905]  [x80600]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.b.x + 0x1905u)));
    // 1501:1afc  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1afe  shl ax, 2  [x80600]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x2u) & 31), false));
    // 1501:1b01  add byte ptr cs:[0xca2], al  [x80600]
    c.w8(c.csb + (uint16_t)(0xca2u), c.add<8>(c.r8(c.csb + (uint16_t)(0xca2u)), c.a.l, true));
    // 1501:1b06  pushf   [x80600]
    c.push16(c.flags());
    // 1501:1b07  mov al, ah  [x80600]
    c.a.l = (uint8_t)(c.a.h);
    // 1501:1b09  xor ah, ah  [x80600]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:1b0b  popf   [x80600]
    c.ip = 0x1b0cu; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L16b1c:
    if (c.tracing) c.traceAt(0x16b1c);
    // 1501:1b0c  sbb word ptr cs:[0xca3], ax  [x80600]
    c.w16(c.csb + (uint16_t)(0xca3u), c.sub<16>(c.r16(c.csb + (uint16_t)(0xca3u)), c.a.x, true, c.cf));
    // 1501:1b11  jns 0x1b19  [x80600]
    if (!c.sf) goto L16b29;
L16b23:
    if (c.tracing) c.traceAt(0x16b23);
    // 1501:1b13  add word ptr cs:[0xca3], 0x14  [x7738]
    c.w16(c.csb + (uint16_t)(0xca3u), c.add<16>(c.r16(c.csb + (uint16_t)(0xca3u)), 0x14u, true));
L16b29:
    if (c.tracing) c.traceAt(0x16b29);
    // 1501:1b19  dec bx  [x80600]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, true));
    // 1501:1b1a  jns 0x1abd  [x80600]
    if (!c.sf) goto L16acd;
L16b2c:
    if (c.tracing) c.traceAt(0x16b2c);
    // 1501:1b1c  ret   [x806]
    c.ip = c.pop16(); return;
L16b2d:
    if (c.tracing) c.traceAt(0x16b2d);
    // 1501:1b1d  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_22(22, {0x15010, 0x16387, 0x16390, 0x16392, 0x16398, 0x163a1, 0x163ab, 0x163ae, 0x163c6, 0x163c8, 0x163d4, 0x163d6, 0x163e2, 0x163e4, 0x163f8, 0x163fa, 0x16407, 0x16409, 0x16416, 0x16418, 0x1641c, 0x1642d, 0x16430, 0x1643e, 0x16473, 0x16486, 0x1648b, 0x1648d, 0x16493, 0x16495, 0x1649b, 0x1649d, 0x164a7, 0x164b1, 0x164b6, 0x164b8, 0x164bb, 0x164bf, 0x164cd, 0x164d3, 0x164dc, 0x164ea, 0x164ed, 0x164f4, 0x164fa, 0x164fd, 0x16500, 0x16501, 0x16505, 0x16506, 0x1650a, 0x1650b, 0x16517, 0x16519, 0x16525, 0x16527, 0x16539, 0x1653d, 0x16540, 0x16551, 0x1655d, 0x16561, 0x16564, 0x16575, 0x16577, 0x1659e, 0x165bc, 0x165be, 0x165cd, 0x165cf, 0x165de, 0x165e0, 0x165ef, 0x165f1, 0x16600, 0x16602, 0x16611, 0x16613, 0x16622, 0x16624, 0x16633, 0x16635, 0x16644, 0x16646, 0x16655, 0x16657, 0x16666, 0x16668, 0x16677, 0x16679, 0x16688, 0x1668a, 0x16699, 0x1669b, 0x166aa, 0x166ac, 0x166bb, 0x166bd, 0x166cc, 0x166ce, 0x166dd, 0x166df, 0x166ee, 0x166f0, 0x166ff, 0x16701, 0x1670b, 0x1671b, 0x1671c, 0x16743, 0x16761, 0x16763, 0x16772, 0x16774, 0x16783, 0x16785, 0x16794, 0x16796, 0x167a5, 0x167a7, 0x167b6, 0x167b8, 0x167c7, 0x167c9, 0x167d8, 0x167da, 0x167e9, 0x167eb, 0x167fa, 0x167fc, 0x1680b, 0x1680d, 0x1681c, 0x1681e, 0x1682d, 0x1682f, 0x1683e, 0x16840, 0x1684f, 0x16851, 0x16860, 0x16862, 0x16871, 0x16873, 0x16882, 0x16884, 0x16893, 0x16895, 0x168a4, 0x168a6, 0x168b0, 0x168bf, 0x168c0, 0x168e3, 0x168ea, 0x168eb, 0x1690d, 0x16914, 0x169e9, 0x169f5, 0x16a1f, 0x16a4d, 0x16a67, 0x16a6e, 0x16a7c, 0x16a7f, 0x16a99, 0x16aa6, 0x16aac, 0x16ab3, 0x16ac6, 0x16ac9, 0x16acd, 0x16ae7, 0x16aee, 0x16afc, 0x16aff, 0x16b1c, 0x16b23, 0x16b29, 0x16b2c, 0x16b2d}, code_22);

}  // namespace show
