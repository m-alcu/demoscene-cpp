// Part 11 (TRON.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_12(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15017: goto L15017;
    case 0x1501f: goto L1501f;
    case 0x15032: goto L15032;
    case 0x15035: goto L15035;
    case 0x1503c: goto L1503c;
    case 0x15048: goto L15048;
    case 0x15054: goto L15054;
    case 0x15056: goto L15056;
    case 0x1505a: goto L1505a;
    case 0x1505f: goto L1505f;
    case 0x15067: goto L15067;
    case 0x1506a: goto L1506a;
    case 0x1506d: goto L1506d;
    case 0x15075: goto L15075;
    case 0x15078: goto L15078;
    case 0x1507b: goto L1507b;
    case 0x15081: goto L15081;
    case 0x15084: goto L15084;
    case 0x15085: goto L15085;
    case 0x15089: goto L15089;
    case 0x1508a: goto L1508a;
    case 0x1508e: goto L1508e;
    case 0x1508f: goto L1508f;
    case 0x150a5: goto L150a5;
    case 0x150a7: goto L150a7;
    case 0x150ad: goto L150ad;
    case 0x150af: goto L150af;
    case 0x150b6: goto L150b6;
    case 0x150c6: goto L150c6;
    case 0x150d3: goto L150d3;
    case 0x150d6: goto L150d6;
    case 0x150d8: goto L150d8;
    case 0x150e1: goto L150e1;
    case 0x150f6: goto L150f6;
    case 0x150f8: goto L150f8;
    case 0x150fe: goto L150fe;
    case 0x15100: goto L15100;
    case 0x15107: goto L15107;
    case 0x15117: goto L15117;
    case 0x15124: goto L15124;
    case 0x15127: goto L15127;
    case 0x15129: goto L15129;
    case 0x15132: goto L15132;
    case 0x153e8: goto L153e8;
    case 0x15401: goto L15401;
    case 0x1543b: goto L1543b;
    case 0x1544d: goto L1544d;
    case 0x15485: goto L15485;
    case 0x1548a: goto L1548a;
    case 0x154a8: goto L154a8;
    case 0x154aa: goto L154aa;
    case 0x154b6: goto L154b6;
    case 0x1552f: goto L1552f;
    case 0x15569: goto L15569;
    case 0x1557b: goto L1557b;
    case 0x155b3: goto L155b3;
    case 0x155b8: goto L155b8;
    case 0x155d6: goto L155d6;
    case 0x155d8: goto L155d8;
    case 0x155e4: goto L155e4;
    case 0x1565d: goto L1565d;
    case 0x15697: goto L15697;
    case 0x156a9: goto L156a9;
    case 0x156e1: goto L156e1;
    case 0x156e6: goto L156e6;
    case 0x15704: goto L15704;
    case 0x15706: goto L15706;
    case 0x15712: goto L15712;
    case 0x15773: goto L15773;
    case 0x15777: goto L15777;
    case 0x1577e: goto L1577e;
    case 0x15782: goto L15782;
    case 0x1578b: goto L1578b;
    case 0x15795: goto L15795;
    case 0x15796: goto L15796;
    case 0x15799: goto L15799;
    case 0x1579c: goto L1579c;
    case 0x157bb: goto L157bb;
    case 0x157c7: goto L157c7;
    case 0x157ce: goto L157ce;
    case 0x157db: goto L157db;
    case 0x157dd: goto L157dd;
    case 0x157e4: goto L157e4;
    case 0x157f0: goto L157f0;
    case 0x157f2: goto L157f2;
    case 0x157f8: goto L157f8;
    case 0x157fc: goto L157fc;
    case 0x15800: goto L15800;
    case 0x15801: goto L15801;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 7  [x1]
    goto L15017;
L15017:
    if (c.tracing) c.traceAt(0x15017);
    // 1501:0007  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:000a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:000c  call 0x7f  [x1]
    c.push16(0xfu); code_12(c, 0x1508fu); if (c.ip != 0xfu) c.badReturn(0x1501c);
L1501f:
    if (c.tracing) c.traceAt(0x1501f);
    // 1501:000f  mov cx, 0  [x1]
    c.c.x = (uint16_t)(0x0u);
    // 1501:0012  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0015  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0017  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:0019  out dx, ax  [x1]
    c.ip = 0x1au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:001a  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:001c  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:001e  out dx, ax  [x1]
    c.ip = 0x1fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:001f  call 0x763  [x1]
    c.push16(0x22u); code_12(c, 0x15773u); if (c.ip != 0x22u) c.badReturn(0x1502f);
L15032:
    if (c.tracing) c.traceAt(0x15032);
    // 1501:0022  call 0x71  [x449]
    c.push16(0x25u); code_12(c, 0x15081u); if (c.ip != 0x25u) c.badReturn(0x15032);
L15035:
    if (c.tracing) c.traceAt(0x15035);
    // 1501:0025  cmp word ptr [0xca64], 0x10  [x449]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffca64u)), 0x10u, true);
    // 1501:002a  jae 0x4f  [x449]
    if (!c.cf) goto L1505f;
L1503c:
    if (c.tracing) c.traceAt(0x1503c);
    // 1501:002c  xor si, si  [x16]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:002e  mov dx, 0x3c8  [x16]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0031  xor al, al  [x16]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0033  out dx, al  [x16]
    c.ip = 0x34u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0034  inc dx  [x16]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0035  mov cx, 0x30  [x16]
    c.c.x = (uint16_t)(0x30u);
L15048:
    if (c.tracing) c.traceAt(0x15048);
    // 1501:0038  mov al, byte ptr [si - 0x3800]  [x768]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)));
    // 1501:003c  add al, byte ptr [0xc860]  [x768]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0xffffc860u)), false));
    // 1501:0040  cmp al, 0x3f  [x768]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0042  jbe 0x46  [x768]
    if ((c.cf || c.zf)) goto L15056;
L15054:
    if (c.tracing) c.traceAt(0x15054);
    // 1501:0044  mov al, 0x3f  [x249]
    c.a.l = (uint8_t)(0x3fu);
L15056:
    if (c.tracing) c.traceAt(0x15056);
    // 1501:0046  out dx, al  [x768]
    c.ip = 0x47u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0047  inc si  [x768]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0048  loop 0x38  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15048;
L1505a:
    if (c.tracing) c.traceAt(0x1505a);
    // 1501:004a  sub byte ptr [0xc860], 4  [x16]
    c.w8(c.dsb + (uint16_t)(0xffffc860u), c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffc860u)), 0x4u, true));
L1505f:
    if (c.tracing) c.traceAt(0x1505f);
    // 1501:004f  cmp word ptr [0xca64], 0x180  [x449]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffca64u)), 0x180u, true);
    // 1501:0055  jb 0x5d  [x449]
    if (c.cf) goto L1506d;
L15067:
    if (c.tracing) c.traceAt(0x15067);
    // 1501:0057  call 0x78c  [x65]
    c.push16(0x5au); code_12(c, 0x1579cu); if (c.ip != 0x5au) c.badReturn(0x15067);
L1506a:
    if (c.tracing) c.traceAt(0x1506a);
    // 1501:005a  call 0x7be  [x65]
    c.push16(0x5du); code_12(c, 0x157ceu); if (c.ip != 0x5du) c.badReturn(0x1506a);
L1506d:
    if (c.tracing) c.traceAt(0x1506d);
    // 1501:005d  cmp word ptr [0xca64], 0x1c0  [x449]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffca64u)), 0x1c0u, true);
    // 1501:0063  jb 0x68  [x449]
    if (c.cf) goto L15078;
L15075:
    if (c.tracing) c.traceAt(0x15075);
    // 1501:0065  jmp 0x7f1  [x1]
    goto L15801;
L15078:
    if (c.tracing) c.traceAt(0x15078);
    // 1501:0068  call 0x3d8  [x448]
    c.push16(0x6bu); code_12(c, 0x153e8u); if (c.ip != 0x6bu) c.badReturn(0x15078);
L1507b:
    if (c.tracing) c.traceAt(0x1507b);
    // 1501:006b  inc word ptr [0xca64]  [x448]
    c.w16(c.dsb + (uint16_t)(0xffffca64u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffca64u)), true));
    // 1501:006f  jmp 0x22  [x448]
    goto L15032;
L15081:
    if (c.tracing) c.traceAt(0x15081);
    // 1501:0071  mov dx, 0x3da  [x449]
    c.dx_.x = (uint16_t)(0x3dau);
L15084:
    if (c.tracing) c.traceAt(0x15084);
    // 1501:0074  in al, dx  [x20882]
    c.ip = 0x75u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15085:
    if (c.tracing) c.traceAt(0x15085);
    // 1501:0075  test al, 8  [x27693]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0077  je 0x74  [x27693]
    if (c.zf) goto L15084;
L15089:
    if (c.tracing) c.traceAt(0x15089);
    // 1501:0079  in al, dx  [x1439]
    c.ip = 0x7au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1508a:
    if (c.tracing) c.traceAt(0x1508a);
    // 1501:007a  test al, 8  [x1919]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:007c  jne 0x79  [x1919]
    if (!c.zf) goto L15089;
L1508e:
    if (c.tracing) c.traceAt(0x1508e);
    // 1501:007e  ret   [x449]
    c.ip = c.pop16(); return;
L1508f:
    if (c.tracing) c.traceAt(0x1508f);
    // 1501:007f  push es  [x1]
    c.push16(c.es);
    // 1501:0080  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0083  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0085  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0088  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:008b  out dx, ax  [x1]
    c.ip = 0x8cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:008c  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:008f  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:0092  mov di, 0x41a  [x1]
    c.di.x = (uint16_t)(0x41au);
L150a5:
    if (c.tracing) c.traceAt(0x150a5);
    // 1501:0095  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L150a7:
    if (c.tracing) c.traceAt(0x150a7);
    // 1501:0097  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:009a  mov di, 0x1b12  [x1]
    c.di.x = (uint16_t)(0x1b12u);
L150ad:
    if (c.tracing) c.traceAt(0x150ad);
    // 1501:009d  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L150af:
    if (c.tracing) c.traceAt(0x150af);
    // 1501:009f  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:00a1  mov ah, 0x80  [x1]
    c.a.h = (uint8_t)(0x80u);
    // 1501:00a3  mov di, 0x419  [x1]
    c.di.x = (uint16_t)(0x419u);
L150b6:
    if (c.tracing) c.traceAt(0x150b6);
    // 1501:00a6  mov byte ptr es:[di], al  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:00a9  mov byte ptr es:[di + 0x15], ah  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 1501:00ad  add di, 0x28  [x148]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:00b0  cmp di, 0x1b30  [x148]
    c.sub<16>(c.di.x, 0x1b30u, true);
    // 1501:00b4  jb 0xa6  [x148]
    if (c.cf) goto L150b6;
L150c6:
    if (c.tracing) c.traceAt(0x150c6);
    // 1501:00b6  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00b9  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:00bc  out dx, ax  [x1]
    c.ip = 0xbdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00bd  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:00c0  mov di, 0x442  [x1]
    c.di.x = (uint16_t)(0x442u);
L150d3:
    if (c.tracing) c.traceAt(0x150d3);
    // 1501:00c3  mov cx, 0xa  [x146]
    c.c.x = (uint16_t)(0xau);
L150d6:
    if (c.tracing) c.traceAt(0x150d6);
    // 1501:00c6  rep stosw word ptr es:[di], ax  [x1606]
    c.stos<16, false>(1);
L150d8:
    if (c.tracing) c.traceAt(0x150d8);
    // 1501:00c8  add di, 0x14  [x146]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:00cb  cmp di, 0x1b08  [x146]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:00cf  jb 0xc3  [x146]
    if (c.cf) goto L150d3;
L150e1:
    if (c.tracing) c.traceAt(0x150e1);
    // 1501:00d1  mov ax, 0xa800  [x1]
    c.a.x = (uint16_t)(0xa800u);
    // 1501:00d4  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:00d6  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00d9  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:00dc  out dx, ax  [x1]
    c.ip = 0xddu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00dd  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:00e0  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:00e3  mov di, 0x41a  [x1]
    c.di.x = (uint16_t)(0x41au);
L150f6:
    if (c.tracing) c.traceAt(0x150f6);
    // 1501:00e6  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L150f8:
    if (c.tracing) c.traceAt(0x150f8);
    // 1501:00e8  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
    // 1501:00eb  mov di, 0x1b12  [x1]
    c.di.x = (uint16_t)(0x1b12u);
L150fe:
    if (c.tracing) c.traceAt(0x150fe);
    // 1501:00ee  rep stosw word ptr es:[di], ax  [x11]
    c.stos<16, false>(1);
L15100:
    if (c.tracing) c.traceAt(0x15100);
    // 1501:00f0  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:00f2  mov ah, 0x80  [x1]
    c.a.h = (uint8_t)(0x80u);
    // 1501:00f4  mov di, 0x419  [x1]
    c.di.x = (uint16_t)(0x419u);
L15107:
    if (c.tracing) c.traceAt(0x15107);
    // 1501:00f7  mov byte ptr es:[di], al  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:00fa  mov byte ptr es:[di + 0x15], ah  [x148]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x15u), c.a.h);
    // 1501:00fe  add di, 0x28  [x148]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:0101  cmp di, 0x1b30  [x148]
    c.sub<16>(c.di.x, 0x1b30u, true);
    // 1501:0105  jb 0xf7  [x148]
    if (c.cf) goto L15107;
L15117:
    if (c.tracing) c.traceAt(0x15117);
    // 1501:0107  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:010a  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:010d  out dx, ax  [x1]
    c.ip = 0x10eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:010e  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:0111  mov di, 0x442  [x1]
    c.di.x = (uint16_t)(0x442u);
L15124:
    if (c.tracing) c.traceAt(0x15124);
    // 1501:0114  mov cx, 0xa  [x146]
    c.c.x = (uint16_t)(0xau);
L15127:
    if (c.tracing) c.traceAt(0x15127);
    // 1501:0117  rep stosw word ptr es:[di], ax  [x1606]
    c.stos<16, false>(1);
L15129:
    if (c.tracing) c.traceAt(0x15129);
    // 1501:0119  add di, 0x14  [x146]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:011c  cmp di, 0x1b08  [x146]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:0120  jb 0x114  [x146]
    if (c.cf) goto L15124;
L15132:
    if (c.tracing) c.traceAt(0x15132);
    // 1501:0122  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0123  ret   [x1]
    c.ip = c.pop16(); return;
L153e8:
    if (c.tracing) c.traceAt(0x153e8);
    // 1501:03d8  mov dx, 0x3c4  [x448]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:03db  mov ax, 0x202  [x448]
    c.a.x = (uint16_t)(0x202u);
    // 1501:03de  out dx, ax  [x448]
    c.ip = 0x3dfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:03df  mov bx, word ptr cs:[0x124]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x124u)));
    // 1501:03e4  mov bp, word ptr cs:[0x126]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x126u)));
    // 1501:03e9  mov si, word ptr cs:[0x128]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x128u)));
    // 1501:03ee  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L15401:
    if (c.tracing) c.traceAt(0x15401);
    // 1501:03f1  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:03f5  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:03fa  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:03fe  mov ah, 0x28  [x65408]
    c.a.h = (uint8_t)(0x28u);
    // 1501:0400  mul ah  [x65408]
    c.mul8(c.a.h);
    // 1501:0402  mov word ptr cs:[di + 0x190], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x190u), c.a.x);
    // 1501:0407  add bx, word ptr cs:[0x136]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x136u)), false));
    // 1501:040c  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:0410  add bp, word ptr cs:[0x138]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x138u)), false));
    // 1501:0415  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:0419  add si, word ptr cs:[0x13a]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x13au)), false));
    // 1501:041e  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:0422  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0425  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:0429  jb 0x3f1  [x65408]
    if (c.cf) goto L15401;
L1543b:
    if (c.tracing) c.traceAt(0x1543b);
    // 1501:042b  mov bx, word ptr cs:[0x15a]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x15au)));
    // 1501:0430  mov bp, word ptr cs:[0x15c]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x15cu)));
    // 1501:0435  mov si, word ptr cs:[0x15e]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x15eu)));
    // 1501:043a  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L1544d:
    if (c.tracing) c.traceAt(0x1544d);
    // 1501:043d  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:0441  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:0446  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:044a  xor ah, ah  [x65408]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:044c  mov word ptr cs:[di + 0x2b4], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x2b4u), c.a.x);
    // 1501:0451  add bx, word ptr cs:[0x16c]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x16cu)), false));
    // 1501:0456  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:045a  add bp, word ptr cs:[0x16e]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x16eu)), false));
    // 1501:045f  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:0463  add si, word ptr cs:[0x170]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x170u)), false));
    // 1501:0468  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:046c  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:046f  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:0473  jb 0x43d  [x65408]
    if (c.cf) goto L1544d;
L15485:
    if (c.tracing) c.traceAt(0x15485);
    // 1501:0475  mov di, 0x442  [x448]
    c.di.x = (uint16_t)(0x442u);
    // 1501:0478  xor bp, bp  [x448]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L1548a:
    if (c.tracing) c.traceAt(0x1548a);
    // 1501:047a  mov bx, word ptr cs:[bp + 0x2b4]  [x65408]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x2b4u)));
    // 1501:047f  mov ax, bx  [x65408]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:0481  and ax, 7  [x65408]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:0484  mov dx, 0x1900  [x65408]
    c.dx_.x = (uint16_t)(0x1900u);
    // 1501:0487  mul dx  [x65408]
    c.mul16(c.dx_.x);
    // 1501:0489  mov si, ax  [x65408]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:048b  shr bx, 3  [x65408]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:048e  add si, bx  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.b.x, false));
    // 1501:0490  add si, word ptr cs:[bp + 0x190]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(c.bp.x + 0x190u)), true));
    // 1501:0495  mov cx, 0x14  [x65408]
    c.c.x = (uint16_t)(0x14u);
L154a8:
    if (c.tracing) c.traceAt(0x154a8);
    // 1501:0498  rep movsb byte ptr es:[di], byte ptr [si]  [x1373568]
    c.ip = 0x49au; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L154aa:
    if (c.tracing) c.traceAt(0x154aa);
    // 1501:049a  add bp, 2  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:049d  add di, 0x14  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:04a0  cmp di, 0x1b08  [x65408]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:04a4  jb 0x47a  [x65408]
    if (c.cf) goto L1548a;
L154b6:
    if (c.tracing) c.traceAt(0x154b6);
    // 1501:04a6  mov ax, word ptr cs:[0x148]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x148u)));
    // 1501:04aa  add word ptr cs:[0x124], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x124u), c.add<16>(c.r16(c.csb + (uint16_t)(0x124u)), c.a.x, false));
    // 1501:04af  and word ptr cs:[0x124], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x124u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x124u))) & (0x1ffu), false));
    // 1501:04b6  mov ax, word ptr cs:[0x14a]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x14au)));
    // 1501:04ba  add word ptr cs:[0x126], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x126u), c.add<16>(c.r16(c.csb + (uint16_t)(0x126u)), c.a.x, false));
    // 1501:04bf  and word ptr cs:[0x126], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x126u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x126u))) & (0x1ffu), false));
    // 1501:04c6  mov ax, word ptr cs:[0x14c]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x14cu)));
    // 1501:04ca  add word ptr cs:[0x128], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x128u), c.add<16>(c.r16(c.csb + (uint16_t)(0x128u)), c.a.x, false));
    // 1501:04cf  and word ptr cs:[0x128], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x128u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x128u))) & (0x1ffu), false));
    // 1501:04d6  mov ax, word ptr cs:[0x17e]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x17eu)));
    // 1501:04da  add word ptr cs:[0x15a], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x15au), c.add<16>(c.r16(c.csb + (uint16_t)(0x15au)), c.a.x, false));
    // 1501:04df  and word ptr cs:[0x15a], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x15au), c.logic<16>((c.r16(c.csb + (uint16_t)(0x15au))) & (0x1ffu), false));
    // 1501:04e6  mov ax, word ptr cs:[0x180]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x180u)));
    // 1501:04ea  add word ptr cs:[0x15c], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x15cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x15cu)), c.a.x, false));
    // 1501:04ef  and word ptr cs:[0x15c], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x15cu), c.logic<16>((c.r16(c.csb + (uint16_t)(0x15cu))) & (0x1ffu), false));
    // 1501:04f6  mov ax, word ptr cs:[0x182]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x182u)));
    // 1501:04fa  add word ptr cs:[0x15e], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x15eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x15eu)), c.a.x, false));
    // 1501:04ff  and word ptr cs:[0x15e], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x15eu), c.logic<16>((c.r16(c.csb + (uint16_t)(0x15eu))) & (0x1ffu), true));
    // 1501:0506  mov dx, 0x3c4  [x448]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0509  mov ax, 0x402  [x448]
    c.a.x = (uint16_t)(0x402u);
    // 1501:050c  out dx, ax  [x448]
    c.ip = 0x50du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:050d  mov bx, word ptr cs:[0x12a]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x12au)));
    // 1501:0512  mov bp, word ptr cs:[0x12c]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x12cu)));
    // 1501:0517  mov si, word ptr cs:[0x12e]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x12eu)));
    // 1501:051c  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L1552f:
    if (c.tracing) c.traceAt(0x1552f);
    // 1501:051f  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:0523  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:0528  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:052c  mov ah, 0x28  [x65408]
    c.a.h = (uint8_t)(0x28u);
    // 1501:052e  mul ah  [x65408]
    c.mul8(c.a.h);
    // 1501:0530  mov word ptr cs:[di + 0x190], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x190u), c.a.x);
    // 1501:0535  add bx, word ptr cs:[0x13c]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x13cu)), false));
    // 1501:053a  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:053e  add bp, word ptr cs:[0x13e]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x13eu)), false));
    // 1501:0543  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:0547  add si, word ptr cs:[0x140]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x140u)), false));
    // 1501:054c  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:0550  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0553  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:0557  jb 0x51f  [x65408]
    if (c.cf) goto L1552f;
L15569:
    if (c.tracing) c.traceAt(0x15569);
    // 1501:0559  mov bx, word ptr cs:[0x160]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x160u)));
    // 1501:055e  mov bp, word ptr cs:[0x162]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x162u)));
    // 1501:0563  mov si, word ptr cs:[0x164]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x164u)));
    // 1501:0568  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L1557b:
    if (c.tracing) c.traceAt(0x1557b);
    // 1501:056b  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:056f  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:0574  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:0578  xor ah, ah  [x65408]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:057a  mov word ptr cs:[di + 0x2b4], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x2b4u), c.a.x);
    // 1501:057f  add bx, word ptr cs:[0x172]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x172u)), false));
    // 1501:0584  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:0588  add bp, word ptr cs:[0x174]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x174u)), false));
    // 1501:058d  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:0591  add si, word ptr cs:[0x176]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x176u)), false));
    // 1501:0596  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:059a  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:059d  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:05a1  jb 0x56b  [x65408]
    if (c.cf) goto L1557b;
L155b3:
    if (c.tracing) c.traceAt(0x155b3);
    // 1501:05a3  mov di, 0x442  [x448]
    c.di.x = (uint16_t)(0x442u);
    // 1501:05a6  xor bp, bp  [x448]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L155b8:
    if (c.tracing) c.traceAt(0x155b8);
    // 1501:05a8  mov bx, word ptr cs:[bp + 0x2b4]  [x65408]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x2b4u)));
    // 1501:05ad  mov ax, bx  [x65408]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:05af  and ax, 7  [x65408]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:05b2  mov dx, 0x1900  [x65408]
    c.dx_.x = (uint16_t)(0x1900u);
    // 1501:05b5  mul dx  [x65408]
    c.mul16(c.dx_.x);
    // 1501:05b7  mov si, ax  [x65408]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:05b9  shr bx, 3  [x65408]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:05bc  add si, bx  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.b.x, false));
    // 1501:05be  add si, word ptr cs:[bp + 0x190]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(c.bp.x + 0x190u)), true));
    // 1501:05c3  mov cx, 0x14  [x65408]
    c.c.x = (uint16_t)(0x14u);
L155d6:
    if (c.tracing) c.traceAt(0x155d6);
    // 1501:05c6  rep movsb byte ptr es:[di], byte ptr [si]  [x1373568]
    c.ip = 0x5c8u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L155d8:
    if (c.tracing) c.traceAt(0x155d8);
    // 1501:05c8  add bp, 2  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:05cb  add di, 0x14  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:05ce  cmp di, 0x1b08  [x65408]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:05d2  jb 0x5a8  [x65408]
    if (c.cf) goto L155b8;
L155e4:
    if (c.tracing) c.traceAt(0x155e4);
    // 1501:05d4  mov ax, word ptr cs:[0x14e]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x14eu)));
    // 1501:05d8  add word ptr cs:[0x12a], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x12au), c.add<16>(c.r16(c.csb + (uint16_t)(0x12au)), c.a.x, false));
    // 1501:05dd  and word ptr cs:[0x12a], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x12au), c.logic<16>((c.r16(c.csb + (uint16_t)(0x12au))) & (0x1ffu), false));
    // 1501:05e4  mov ax, word ptr cs:[0x150]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x150u)));
    // 1501:05e8  add word ptr cs:[0x12c], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x12cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x12cu)), c.a.x, false));
    // 1501:05ed  and word ptr cs:[0x12c], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x12cu), c.logic<16>((c.r16(c.csb + (uint16_t)(0x12cu))) & (0x1ffu), false));
    // 1501:05f4  mov ax, word ptr cs:[0x152]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x152u)));
    // 1501:05f8  add word ptr cs:[0x12e], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x12eu), c.add<16>(c.r16(c.csb + (uint16_t)(0x12eu)), c.a.x, false));
    // 1501:05fd  and word ptr cs:[0x12e], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x12eu), c.logic<16>((c.r16(c.csb + (uint16_t)(0x12eu))) & (0x1ffu), false));
    // 1501:0604  mov ax, word ptr cs:[0x184]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x184u)));
    // 1501:0608  add word ptr cs:[0x160], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x160u), c.add<16>(c.r16(c.csb + (uint16_t)(0x160u)), c.a.x, false));
    // 1501:060d  and word ptr cs:[0x160], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x160u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x160u))) & (0x1ffu), false));
    // 1501:0614  mov ax, word ptr cs:[0x186]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x186u)));
    // 1501:0618  add word ptr cs:[0x162], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x162u), c.add<16>(c.r16(c.csb + (uint16_t)(0x162u)), c.a.x, false));
    // 1501:061d  and word ptr cs:[0x162], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x162u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x162u))) & (0x1ffu), false));
    // 1501:0624  mov ax, word ptr cs:[0x188]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x188u)));
    // 1501:0628  add word ptr cs:[0x164], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x164u), c.add<16>(c.r16(c.csb + (uint16_t)(0x164u)), c.a.x, false));
    // 1501:062d  and word ptr cs:[0x164], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x164u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x164u))) & (0x1ffu), true));
    // 1501:0634  mov dx, 0x3c4  [x448]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0637  mov ax, 0x802  [x448]
    c.a.x = (uint16_t)(0x802u);
    // 1501:063a  out dx, ax  [x448]
    c.ip = 0x63bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:063b  mov bx, word ptr cs:[0x130]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x130u)));
    // 1501:0640  mov bp, word ptr cs:[0x132]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x132u)));
    // 1501:0645  mov si, word ptr cs:[0x134]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x134u)));
    // 1501:064a  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L1565d:
    if (c.tracing) c.traceAt(0x1565d);
    // 1501:064d  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:0651  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:0656  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:065a  mov ah, 0x28  [x65408]
    c.a.h = (uint8_t)(0x28u);
    // 1501:065c  mul ah  [x65408]
    c.mul8(c.a.h);
    // 1501:065e  mov word ptr cs:[di + 0x190], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x190u), c.a.x);
    // 1501:0663  add bx, word ptr cs:[0x142]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x142u)), false));
    // 1501:0668  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:066c  add bp, word ptr cs:[0x144]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x144u)), false));
    // 1501:0671  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:0675  add si, word ptr cs:[0x146]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x146u)), false));
    // 1501:067a  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:067e  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0681  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:0685  jb 0x64d  [x65408]
    if (c.cf) goto L1565d;
L15697:
    if (c.tracing) c.traceAt(0x15697);
    // 1501:0687  mov bx, word ptr cs:[0x166]  [x448]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x166u)));
    // 1501:068c  mov bp, word ptr cs:[0x168]  [x448]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x168u)));
    // 1501:0691  mov si, word ptr cs:[0x16a]  [x448]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x16au)));
    // 1501:0696  mov di, 0  [x448]
    c.di.x = (uint16_t)(0x0u);
L156a9:
    if (c.tracing) c.traceAt(0x156a9);
    // 1501:0699  mov al, byte ptr [bx - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0xffffc864u)));
    // 1501:069d  add al, byte ptr ds:[bp - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.bp.x + 0xffffc864u)), false));
    // 1501:06a2  add al, byte ptr [si - 0x379c]  [x65408]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc864u)), false));
    // 1501:06a6  xor ah, ah  [x65408]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:06a8  mov word ptr cs:[di + 0x2b4], ax  [x65408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x2b4u), c.a.x);
    // 1501:06ad  add bx, word ptr cs:[0x178]  [x65408]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x178u)), false));
    // 1501:06b2  and bx, 0x1ff  [x65408]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x1ffu), false));
    // 1501:06b6  add bp, word ptr cs:[0x17a]  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x17au)), false));
    // 1501:06bb  and bp, 0x1ff  [x65408]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x1ffu), false));
    // 1501:06bf  add si, word ptr cs:[0x17c]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(0x17cu)), false));
    // 1501:06c4  and si, 0x1ff  [x65408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 1501:06c8  add di, 2  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:06cb  cmp di, 0x124  [x65408]
    c.sub<16>(c.di.x, 0x124u, true);
    // 1501:06cf  jb 0x699  [x65408]
    if (c.cf) goto L156a9;
L156e1:
    if (c.tracing) c.traceAt(0x156e1);
    // 1501:06d1  mov di, 0x442  [x448]
    c.di.x = (uint16_t)(0x442u);
    // 1501:06d4  xor bp, bp  [x448]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L156e6:
    if (c.tracing) c.traceAt(0x156e6);
    // 1501:06d6  mov bx, word ptr cs:[bp + 0x2b4]  [x65408]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x2b4u)));
    // 1501:06db  mov ax, bx  [x65408]
    c.a.x = (uint16_t)(c.b.x);
    // 1501:06dd  and ax, 7  [x65408]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:06e0  mov dx, 0x1900  [x65408]
    c.dx_.x = (uint16_t)(0x1900u);
    // 1501:06e3  mul dx  [x65408]
    c.mul16(c.dx_.x);
    // 1501:06e5  mov si, ax  [x65408]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:06e7  shr bx, 3  [x65408]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:06ea  add si, bx  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.b.x, false));
    // 1501:06ec  add si, word ptr cs:[bp + 0x190]  [x65408]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(c.bp.x + 0x190u)), true));
    // 1501:06f1  mov cx, 0x14  [x65408]
    c.c.x = (uint16_t)(0x14u);
L15704:
    if (c.tracing) c.traceAt(0x15704);
    // 1501:06f4  rep movsb byte ptr es:[di], byte ptr [si]  [x1373568]
    c.ip = 0x6f6u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L15706:
    if (c.tracing) c.traceAt(0x15706);
    // 1501:06f6  add bp, 2  [x65408]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:06f9  add di, 0x14  [x65408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:06fc  cmp di, 0x1b08  [x65408]
    c.sub<16>(c.di.x, 0x1b08u, true);
    // 1501:0700  jb 0x6d6  [x65408]
    if (c.cf) goto L156e6;
L15712:
    if (c.tracing) c.traceAt(0x15712);
    // 1501:0702  mov ax, word ptr cs:[0x154]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x154u)));
    // 1501:0706  add word ptr cs:[0x130], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x130u), c.add<16>(c.r16(c.csb + (uint16_t)(0x130u)), c.a.x, false));
    // 1501:070b  and word ptr cs:[0x130], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x130u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x130u))) & (0x1ffu), false));
    // 1501:0712  mov ax, word ptr cs:[0x156]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x156u)));
    // 1501:0716  add word ptr cs:[0x132], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x132u), c.add<16>(c.r16(c.csb + (uint16_t)(0x132u)), c.a.x, false));
    // 1501:071b  and word ptr cs:[0x132], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x132u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x132u))) & (0x1ffu), false));
    // 1501:0722  mov ax, word ptr cs:[0x158]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x158u)));
    // 1501:0726  add word ptr cs:[0x134], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x134u), c.add<16>(c.r16(c.csb + (uint16_t)(0x134u)), c.a.x, false));
    // 1501:072b  and word ptr cs:[0x134], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x134u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x134u))) & (0x1ffu), false));
    // 1501:0732  mov ax, word ptr cs:[0x18a]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x18au)));
    // 1501:0736  add word ptr cs:[0x166], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x166u), c.add<16>(c.r16(c.csb + (uint16_t)(0x166u)), c.a.x, false));
    // 1501:073b  and word ptr cs:[0x166], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x166u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x166u))) & (0x1ffu), false));
    // 1501:0742  mov ax, word ptr cs:[0x18c]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x18cu)));
    // 1501:0746  add word ptr cs:[0x168], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x168u), c.add<16>(c.r16(c.csb + (uint16_t)(0x168u)), c.a.x, false));
    // 1501:074b  and word ptr cs:[0x168], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x168u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x168u))) & (0x1ffu), false));
    // 1501:0752  mov ax, word ptr cs:[0x18e]  [x448]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x18eu)));
    // 1501:0756  add word ptr cs:[0x16a], ax  [x448]
    c.w16(c.csb + (uint16_t)(0x16au), c.add<16>(c.r16(c.csb + (uint16_t)(0x16au)), c.a.x, false));
    // 1501:075b  and word ptr cs:[0x16a], 0x1ff  [x448]
    c.w16(c.csb + (uint16_t)(0x16au), c.logic<16>((c.r16(c.csb + (uint16_t)(0x16au))) & (0x1ffu), true));
    // 1501:0762  ret   [x448]
    c.ip = c.pop16(); return;
L15773:
    if (c.tracing) c.traceAt(0x15773);
    // 1501:0763  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0765  clc   [x1]
    c.cf = false;
    // 1501:0766  pushf   [x1]
    c.push16(c.flags());
L15777:
    if (c.tracing) c.traceAt(0x15777);
    // 1501:0767  mov cx, 0x1900  [x7]
    c.c.x = (uint16_t)(0x1900u);
    // 1501:076a  add si, 0x1900  [x7]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x1900u, true));
L1577e:
    if (c.tracing) c.traceAt(0x1577e);
    // 1501:076e  dec si  [x44800]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, false));
    // 1501:076f  mov al, byte ptr [si]  [x44800]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0771  popf   [x44800]
    c.ip = 0x772u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L15782:
    if (c.tracing) c.traceAt(0x15782);
    // 1501:0772  rcl al, 1  [x44800]
    c.a.l = (uint8_t)(c.rcl<8>(c.a.l, (int)((0x1u) & 31)));
    // 1501:0774  pushf   [x44800]
    c.push16(c.flags());
    // 1501:0775  mov byte ptr [si + 0x1900], al  [x44800]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x1900u), c.a.l);
    // 1501:0779  loop 0x76e  [x44800]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1577e;
L1578b:
    if (c.tracing) c.traceAt(0x1578b);
    // 1501:077b  add si, 0x1900  [x7]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x1900u, false));
    // 1501:077f  cmp si, 0xaf00  [x7]
    c.sub<16>(c.si.x, 0xaf00u, true);
    // 1501:0783  jb 0x767  [x7]
    if (c.cf) goto L15777;
L15795:
    if (c.tracing) c.traceAt(0x15795);
    // 1501:0785  popf   [x1]
    c.ip = 0x786u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L15796:
    if (c.tracing) c.traceAt(0x15796);
    // 1501:0786  call 0x78c  [x1]
    c.push16(0x789u); code_12(c, 0x1579cu); if (c.ip != 0x789u) c.badReturn(0x15796);
L15799:
    if (c.tracing) c.traceAt(0x15799);
    // 1501:0789  ret   [x1]
    c.ip = c.pop16(); return;
L1579c:
    if (c.tracing) c.traceAt(0x1579c);
    // 1501:078c  mov dx, 0x3c4  [x66]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:078f  mov ax, 0xf02  [x66]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0792  out dx, ax  [x66]
    c.ip = 0x793u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0793  mov si, 0xca66  [x66]
    c.si.x = (uint16_t)(0xca66u);
    // 1501:0796  mov di, word ptr cs:[0x78a]  [x66]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x78au)));
    // 1501:079b  mov bp, di  [x66]
    c.bp.x = (uint16_t)(c.di.x);
    // 1501:079d  add bp, 0x258  [x66]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x258u, false));
    // 1501:07a1  xor ax, ax  [x66]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:07a3  stosw word ptr es:[di], ax  [x66]
    c.stos<16, false>(0);
    // 1501:07a4  stosw word ptr es:[di], ax  [x66]
    c.stos<16, false>(0);
    // 1501:07a5  stosw word ptr es:[di], ax  [x66]
    c.stos<16, false>(0);
    // 1501:07a6  stosw word ptr es:[di], ax  [x66]
    c.stos<16, false>(0);
    // 1501:07a7  stosw word ptr es:[di], ax  [x66]
    c.stos<16, false>(0);
    // 1501:07a8  add di, 0x1e  [x66]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x1eu, true));
L157bb:
    if (c.tracing) c.traceAt(0x157bb);
    // 1501:07ab  movsw word ptr es:[di], word ptr [si]  [x924]
    c.ip = 0x7acu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:07ac  movsw word ptr es:[di], word ptr [si]  [x924]
    c.ip = 0x7adu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:07ad  movsw word ptr es:[di], word ptr [si]  [x924]
    c.ip = 0x7aeu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:07ae  movsw word ptr es:[di], word ptr [si]  [x924]
    c.ip = 0x7afu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:07af  movsw word ptr es:[di], word ptr [si]  [x924]
    c.ip = 0x7b0u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:07b0  add di, 0x1e  [x924]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x1eu, false));
    // 1501:07b3  cmp di, bp  [x924]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:07b5  jb 0x7ab  [x924]
    if (c.cf) goto L157bb;
L157c7:
    if (c.tracing) c.traceAt(0x157c7);
    // 1501:07b7  add word ptr cs:[0x78a], 0x28  [x66]
    c.w16(c.csb + (uint16_t)(0x78au), c.add<16>(c.r16(c.csb + (uint16_t)(0x78au)), 0x28u, true));
    // 1501:07bd  ret   [x66]
    c.ip = c.pop16(); return;
L157ce:
    if (c.tracing) c.traceAt(0x157ce);
    // 1501:07be  mov dx, 0x3c8  [x65]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:07c1  xor al, al  [x65]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:07c3  out dx, al  [x65]
    c.ip = 0x7c4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:07c4  inc dx  [x65]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:07c5  mov si, 0xc800  [x65]
    c.si.x = (uint16_t)(0xc800u);
    // 1501:07c8  mov cx, 0x30  [x65]
    c.c.x = (uint16_t)(0x30u);
L157db:
    if (c.tracing) c.traceAt(0x157db);
    // 1501:07cb  rep outsb dx, byte ptr [si]  [x3185]
    c.ip = 0x7cdu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L157dd:
    if (c.tracing) c.traceAt(0x157dd);
    // 1501:07cd  xor si, si  [x65]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:07cf  mov di, si  [x65]
    c.di.x = (uint16_t)(c.si.x);
    // 1501:07d1  mov cx, 0x30  [x65]
    c.c.x = (uint16_t)(0x30u);
L157e4:
    if (c.tracing) c.traceAt(0x157e4);
    // 1501:07d4  mov al, byte ptr [si - 0x3800]  [x3120]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)));
    // 1501:07d8  mov ah, byte ptr [di - 0x37d0]  [x3120]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffc830u)));
    // 1501:07dc  cmp al, ah  [x3120]
    c.sub<8>(c.a.l, c.a.h, true);
    // 1501:07de  je 0x7ec  [x3120]
    if (c.zf) goto L157fc;
L157f0:
    if (c.tracing) c.traceAt(0x157f0);
    // 1501:07e0  jns 0x7e8  [x2073]
    if (!c.sf) goto L157f8;
L157f2:
    if (c.tracing) c.traceAt(0x157f2);
    // 1501:07e2  inc byte ptr [si - 0x3800]  [x2061]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)), true));
    // 1501:07e6  jmp 0x7ec  [x2061]
    goto L157fc;
L157f8:
    if (c.tracing) c.traceAt(0x157f8);
    // 1501:07e8  dec byte ptr [si - 0x3800]  [x12]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffc800u)), true));
L157fc:
    if (c.tracing) c.traceAt(0x157fc);
    // 1501:07ec  inc si  [x3120]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:07ed  inc di  [x3120]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:07ee  loop 0x7d4  [x3120]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L157e4;
L15800:
    if (c.tracing) c.traceAt(0x15800);
    // 1501:07f0  ret   [x65]
    c.ip = c.pop16(); return;
L15801:
    if (c.tracing) c.traceAt(0x15801);
    // 1501:07f1  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_12(12, {0x15010, 0x15017, 0x1501f, 0x15032, 0x15035, 0x1503c, 0x15048, 0x15054, 0x15056, 0x1505a, 0x1505f, 0x15067, 0x1506a, 0x1506d, 0x15075, 0x15078, 0x1507b, 0x15081, 0x15084, 0x15085, 0x15089, 0x1508a, 0x1508e, 0x1508f, 0x150a5, 0x150a7, 0x150ad, 0x150af, 0x150b6, 0x150c6, 0x150d3, 0x150d6, 0x150d8, 0x150e1, 0x150f6, 0x150f8, 0x150fe, 0x15100, 0x15107, 0x15117, 0x15124, 0x15127, 0x15129, 0x15132, 0x153e8, 0x15401, 0x1543b, 0x1544d, 0x15485, 0x1548a, 0x154a8, 0x154aa, 0x154b6, 0x1552f, 0x15569, 0x1557b, 0x155b3, 0x155b8, 0x155d6, 0x155d8, 0x155e4, 0x1565d, 0x15697, 0x156a9, 0x156e1, 0x156e6, 0x15704, 0x15706, 0x15712, 0x15773, 0x15777, 0x1577e, 0x15782, 0x1578b, 0x15795, 0x15796, 0x15799, 0x1579c, 0x157bb, 0x157c7, 0x157ce, 0x157db, 0x157dd, 0x157e4, 0x157f0, 0x157f2, 0x157f8, 0x157fc, 0x15800, 0x15801}, code_12);

}  // namespace show
