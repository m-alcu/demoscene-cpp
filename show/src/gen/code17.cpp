// Part 16 (ART.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_17(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15017: goto L15017;
    case 0x1501c: goto L1501c;
    case 0x15021: goto L15021;
    case 0x15043: goto L15043;
    case 0x15045: goto L15045;
    case 0x1504f: goto L1504f;
    case 0x15052: goto L15052;
    case 0x15056: goto L15056;
    case 0x15059: goto L15059;
    case 0x15060: goto L15060;
    case 0x15071: goto L15071;
    case 0x15076: goto L15076;
    case 0x15078: goto L15078;
    case 0x1507b: goto L1507b;
    case 0x1507f: goto L1507f;
    case 0x1508a: goto L1508a;
    case 0x1508e: goto L1508e;
    case 0x15096: goto L15096;
    case 0x15098: goto L15098;
    case 0x1509a: goto L1509a;
    case 0x1509b: goto L1509b;
    case 0x1509e: goto L1509e;
    case 0x1509f: goto L1509f;
    case 0x150a3: goto L150a3;
    case 0x150a4: goto L150a4;
    case 0x150a8: goto L150a8;
    case 0x150a9: goto L150a9;
    case 0x150ae: goto L150ae;
    case 0x150b5: goto L150b5;
    case 0x150bc: goto L150bc;
    case 0x150c9: goto L150c9;
    case 0x150d0: goto L150d0;
    case 0x150d4: goto L150d4;
    case 0x150db: goto L150db;
    case 0x150e2: goto L150e2;
    case 0x15100: goto L15100;
    case 0x15105: goto L15105;
    case 0x1510e: goto L1510e;
    case 0x15111: goto L15111;
    case 0x15113: goto L15113;
    case 0x15117: goto L15117;
    case 0x15119: goto L15119;
    case 0x1511f: goto L1511f;
    case 0x15123: goto L15123;
    case 0x15125: goto L15125;
    case 0x15129: goto L15129;
    case 0x1512b: goto L1512b;
    case 0x15146: goto L15146;
    case 0x1514d: goto L1514d;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 7  [x1]
    goto L15017;
L15017:
    if (c.tracing) c.traceAt(0x15017);
    // 1501:0007  mov ax, 0x12  [x1]
    c.a.x = (uint16_t)(0x12u);
    // 1501:000a  int 0x10  [x1]
    c.ip = 0xcu; c.d32 = false; c.intr(0x10, 0xcu);
L1501c:
    if (c.tracing) c.traceAt(0x1501c);
    // 1501:000c  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:000f  int 0x10  [x1]
    c.ip = 0x11u; c.d32 = false; c.intr(0x10, 0x11u);
L15021:
    if (c.tracing) c.traceAt(0x15021);
    // 1501:0011  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0014  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:0017  out dx, ax  [x1]
    c.ip = 0x18u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0018  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:001b  out dx, ax  [x1]
    c.ip = 0x1cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:001c  mov ax, 0x100  [x1]
    c.a.x = (uint16_t)(0x100u);
    // 1501:001f  out dx, ax  [x1]
    c.ip = 0x20u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0020  mov dl, 0xc2  [x1]
    c.dx_.l = (uint8_t)(0xc2u);
    // 1501:0022  mov al, 0xe3  [x1]
    c.a.l = (uint8_t)(0xe3u);
    // 1501:0024  out dx, al  [x1]
    c.ip = 0x25u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0025  mov dl, 0xc4  [x1]
    c.dx_.l = (uint8_t)(0xc4u);
    // 1501:0027  mov ax, 0x300  [x1]
    c.a.x = (uint16_t)(0x300u);
    // 1501:002a  out dx, ax  [x1]
    c.ip = 0x2bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:002b  mov dl, 0xd4  [x1]
    c.dx_.l = (uint8_t)(0xd4u);
    // 1501:002d  mov si, 0xd6a2  [x1]
    c.si.x = (uint16_t)(0xd6a2u);
    // 1501:0030  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
L15043:
    if (c.tracing) c.traceAt(0x15043);
    // 1501:0033  rep outsw dx, word ptr [si]  [x11]
    c.ip = 0x35u; c.d32 = false; c.outs<16, false>(c.dsb, 1);
L15045:
    if (c.tracing) c.traceAt(0x15045);
    // 1501:0035  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0038  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:003a  out dx, al  [x1]
    c.ip = 0x3bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:003b  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:003c  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L1504f:
    if (c.tracing) c.traceAt(0x1504f);
    // 1501:003f  out dx, al  [x768]
    c.ip = 0x40u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0040  loop 0x3f  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1504f;
L15052:
    if (c.tracing) c.traceAt(0x15052);
    // 1501:0042  push cs  [x1]
    c.push16(c.cs);
    // 1501:0043  call 0x99  [x1]
    c.push16(0x46u); code_17(c, 0x150a9u); if (c.ip != 0x46u) c.badReturn(0x15053);
L15056:
    if (c.tracing) c.traceAt(0x15056);
    // 1501:0046  call 0x8b  [x544]
    c.push16(0x49u); code_17(c, 0x1509bu); if (c.ip != 0x49u) c.badReturn(0x15056);
L15059:
    if (c.tracing) c.traceAt(0x15059);
    // 1501:0049  cmp byte ptr [0xd6a1], 0  [x544]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xffffd6a1u)), 0x0u, true);
    // 1501:004e  je 0x6f  [x544]
    if (c.zf) goto L1507f;
L15060:
    if (c.tracing) c.traceAt(0x15060);
    // 1501:0050  mov dx, 0x3c8  [x128]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0053  xor al, al  [x128]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0055  out dx, al  [x128]
    c.ip = 0x56u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0056  inc dx  [x128]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0057  mov si, 0xd39e  [x128]
    c.si.x = (uint16_t)(0xd39eu);
    // 1501:005a  mov cx, 0x300  [x128]
    c.c.x = (uint16_t)(0x300u);
    // 1501:005d  mov bl, byte ptr [0xd6a0]  [x128]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffffd6a0u)));
L15071:
    if (c.tracing) c.traceAt(0x15071);
    // 1501:0061  lodsb al, byte ptr [si]  [x98304]
    c.ip = 0x62u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:0062  sub al, bl  [x98304]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:0064  jge 0x68  [x98304]
    if ((c.sf == c.of)) goto L15078;
L15076:
    if (c.tracing) c.traceAt(0x15076);
    // 1501:0066  xor al, al  [x77900]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15078:
    if (c.tracing) c.traceAt(0x15078);
    // 1501:0068  out dx, al  [x98304]
    c.ip = 0x69u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0069  loop 0x61  [x98304]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15071;
L1507b:
    if (c.tracing) c.traceAt(0x1507b);
    // 1501:006b  mov byte ptr [0xd6a1], bl  [x128]
    c.w8(c.dsb + (uint16_t)(0xffffd6a1u), c.b.l);
L1507f:
    if (c.tracing) c.traceAt(0x1507f);
    // 1501:006f  inc word ptr [0xd69e]  [x544]
    c.w16(c.dsb + (uint16_t)(0xffffd69eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffffd69eu)), false));
    // 1501:0073  cmp word ptr [0xd69e], 0x40  [x544]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffd69eu)), 0x40u, true);
    // 1501:0078  jb 0x7e  [x544]
    if (c.cf) goto L1508e;
L1508a:
    if (c.tracing) c.traceAt(0x1508a);
    // 1501:007a  dec byte ptr [0xd6a0]  [x481]
    c.w8(c.dsb + (uint16_t)(0xffffd6a0u), c.dec<8>(c.r8(c.dsb + (uint16_t)(0xffffd6a0u)), true));
L1508e:
    if (c.tracing) c.traceAt(0x1508e);
    // 1501:007e  cmp word ptr [0xd69e], 0x220  [x544]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffffd69eu)), 0x220u, true);
    // 1501:0084  jb 0x88  [x544]
    if (c.cf) goto L15098;
L15096:
    if (c.tracing) c.traceAt(0x15096);
    // 1501:0086  jmp 0x8a  [x1]
    goto L1509a;
L15098:
    if (c.tracing) c.traceAt(0x15098);
    // 1501:0088  jmp 0x46  [x543]
    goto L15056;
L1509a:
    if (c.tracing) c.traceAt(0x1509a);
    // 1501:008a  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L1509b:
    if (c.tracing) c.traceAt(0x1509b);
    // 1501:008b  mov dx, 0x3da  [x544]
    c.dx_.x = (uint16_t)(0x3dau);
L1509e:
    if (c.tracing) c.traceAt(0x1509e);
    // 1501:008e  in al, dx  [x2148]
    c.ip = 0x8fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1509f:
    if (c.tracing) c.traceAt(0x1509f);
    // 1501:008f  test al, 8  [x2864]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0091  jne 0x8e  [x2864]
    if (!c.zf) goto L1509e;
L150a3:
    if (c.tracing) c.traceAt(0x150a3);
    // 1501:0093  in al, dx  [x27433]
    c.ip = 0x94u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150a4:
    if (c.tracing) c.traceAt(0x150a4);
    // 1501:0094  test al, 8  [x36396]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0096  je 0x93  [x36396]
    if (c.zf) goto L150a3;
L150a8:
    if (c.tracing) c.traceAt(0x150a8);
    // 1501:0098  ret   [x544]
    c.ip = c.pop16(); return;
L150a9:
    if (c.tracing) c.traceAt(0x150a9);
    // 1501:0099  cld   [x1]
    c.df = false;
    // 1501:009a  push es  [x1]
    c.push16(c.es);
    // 1501:009b  mov si, 0xffff  [x1]
    c.si.x = (uint16_t)(0xffffu);
L150ae:
    if (c.tracing) c.traceAt(0x150ae);
    // 1501:009e  inc si  [x41]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:009f  cmp word ptr [si], 0x4d43  [x41]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4d43u, true);
    // 1501:00a3  jne 0x9e  [x41]
    if (!c.zf) goto L150ae;
L150b5:
    if (c.tracing) c.traceAt(0x150b5);
    // 1501:00a5  cmp word ptr [si + 2], 0x5041  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5041u, true);
    // 1501:00aa  jne 0x9e  [x1]
    if (!c.zf) goto L150ae;
L150bc:
    if (c.tracing) c.traceAt(0x150bc);
    // 1501:00ac  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, true));
    // 1501:00af  mov di, 0xd39e  [x1]
    c.di.x = (uint16_t)(0xd39eu);
    // 1501:00b2  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 1501:00b4  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:00b6  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L150c9:
    if (c.tracing) c.traceAt(0x150c9);
    // 1501:00b9  lodsb al, byte ptr [si]  [x768]
    c.ip = 0xbau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:00ba  shr al, 2  [x768]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:00bd  stosb byte ptr es:[di], al  [x768]
    c.stos<8, false>(0);
    // 1501:00be  loop 0xb9  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150c9;
L150d0:
    if (c.tracing) c.traceAt(0x150d0);
    // 1501:00c0  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00c1  mov si, 0xffff  [x1]
    c.si.x = (uint16_t)(0xffffu);
L150d4:
    if (c.tracing) c.traceAt(0x150d4);
    // 1501:00c4  inc si  [x4887]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:00c5  cmp word ptr [si], 0x4f42  [x4887]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x)), 0x4f42u, true);
    // 1501:00c9  jne 0xc4  [x4887]
    if (!c.zf) goto L150d4;
L150db:
    if (c.tracing) c.traceAt(0x150db);
    // 1501:00cb  cmp word ptr [si + 2], 0x5944  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x5944u, true);
    // 1501:00d0  jne 0xc4  [x1]
    if (!c.zf) goto L150d4;
L150e2:
    if (c.tracing) c.traceAt(0x150e2);
    // 1501:00d2  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:00d5  mov al, byte ptr [si + 3]  [x1]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)));
    // 1501:00d8  mov ah, byte ptr [si + 2]  [x1]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)));
    // 1501:00db  add si, 4  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:00de  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, false));
    // 1501:00e0  mov bp, ax  [x1]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:00e2  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00e5  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 1501:00e7  out dx, al  [x1]
    c.ip = 0xe8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00e8  mov byte ptr cs:[0x11a], 1  [x1]
    c.w8(c.csb + (uint16_t)(0x11au), 0x1u);
    // 1501:00ee  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15100:
    if (c.tracing) c.traceAt(0x15100);
    // 1501:00f0  lodsb al, byte ptr [si]  [x7605]
    c.ip = 0xf1u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:00f1  and al, al  [x7605]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.a.l), true));
    // 1501:00f3  jns 0x109  [x7605]
    if (!c.sf) goto L15119;
L15105:
    if (c.tracing) c.traceAt(0x15105);
    // 1501:00f5  neg al  [x4558]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:00f7  mov cl, al  [x4558]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:00f9  inc cl  [x4558]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:00fb  xor ch, ch  [x4558]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
    // 1501:00fd  lodsb al, byte ptr [si]  [x4558]
    c.ip = 0xfeu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
L1510e:
    if (c.tracing) c.traceAt(0x1510e);
    // 1501:00fe  call 0x11b  [x44804]
    c.push16(0x101u); code_17(c, 0x1512bu); if (c.ip != 0x101u) c.badReturn(0x1510e);
L15111:
    if (c.tracing) c.traceAt(0x15111);
    // 1501:0101  loop 0xfe  [x44804]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1510e;
L15113:
    if (c.tracing) c.traceAt(0x15113);
    // 1501:0103  cmp si, bp  [x4558]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:0105  jb 0xf0  [x4558]
    if (c.cf) goto L15100;
L15117:
    if (c.tracing) c.traceAt(0x15117);
    // 1501:0107  jmp 0x119  [x1]
    goto L15129;
L15119:
    if (c.tracing) c.traceAt(0x15119);
    // 1501:0109  mov cl, al  [x3047]
    c.c.l = (uint8_t)(c.a.l);
    // 1501:010b  inc cl  [x3047]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 1501:010d  xor ch, ch  [x3047]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
L1511f:
    if (c.tracing) c.traceAt(0x1511f);
    // 1501:010f  lodsb al, byte ptr [si]  [x37116]
    c.ip = 0x110u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:0110  call 0x11b  [x37116]
    c.push16(0x113u); code_17(c, 0x1512bu); if (c.ip != 0x113u) c.badReturn(0x15120);
L15123:
    if (c.tracing) c.traceAt(0x15123);
    // 1501:0113  loop 0x10f  [x37116]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1511f;
L15125:
    if (c.tracing) c.traceAt(0x15125);
    // 1501:0115  cmp si, bp  [x3047]
    c.sub<16>(c.si.x, c.bp.x, true);
    // 1501:0117  jb 0xf0  [x3047]
    if (c.cf) goto L15100;
L15129:
    if (c.tracing) c.traceAt(0x15129);
    // 1501:0119  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L1512b:
    if (c.tracing) c.traceAt(0x1512b);
    // 1501:011b  push ax  [x81920]
    c.push16(c.a.x);
    // 1501:011c  mov dx, 0x3c5  [x81920]
    c.dx_.x = (uint16_t)(0x3c5u);
    // 1501:011f  mov al, byte ptr cs:[0x11a]  [x81920]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x11au)));
    // 1501:0123  out dx, al  [x81920]
    c.ip = 0x124u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0124  pop ax  [x81920]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0125  mov byte ptr es:[di + 5], al  [x81920]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x5u), c.a.l);
    // 1501:0129  shl byte ptr cs:[0x11a], 1  [x81920]
    c.w8(c.csb + (uint16_t)(0x11au), c.shl<8>(c.r8(c.csb + (uint16_t)(0x11au)), (int)((0x1u) & 31), false));
    // 1501:012e  cmp byte ptr cs:[0x11a], 8  [x81920]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x11au)), 0x8u, true);
    // 1501:0134  jbe 0x13d  [x81920]
    if ((c.cf || c.zf)) goto L1514d;
L15146:
    if (c.tracing) c.traceAt(0x15146);
    // 1501:0136  inc di  [x20480]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:0137  mov byte ptr cs:[0x11a], 1  [x20480]
    c.w8(c.csb + (uint16_t)(0x11au), 0x1u);
L1514d:
    if (c.tracing) c.traceAt(0x1514d);
    // 1501:013d  ret   [x81920]
    c.ip = c.pop16(); return;
}

static Register reg_code_17(17, {0x15010, 0x15017, 0x1501c, 0x15021, 0x15043, 0x15045, 0x1504f, 0x15052, 0x15056, 0x15059, 0x15060, 0x15071, 0x15076, 0x15078, 0x1507b, 0x1507f, 0x1508a, 0x1508e, 0x15096, 0x15098, 0x1509a, 0x1509b, 0x1509e, 0x1509f, 0x150a3, 0x150a4, 0x150a8, 0x150a9, 0x150ae, 0x150b5, 0x150bc, 0x150c9, 0x150d0, 0x150d4, 0x150db, 0x150e2, 0x15100, 0x15105, 0x1510e, 0x15111, 0x15113, 0x15117, 0x15119, 0x1511f, 0x15123, 0x15125, 0x15129, 0x1512b, 0x15146, 0x1514d}, code_17);

}  // namespace show
