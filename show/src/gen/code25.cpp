// Part 24 (RAS.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_25(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x150be: goto L150be;
    case 0x150cd: goto L150cd;
    case 0x150f9: goto L150f9;
    case 0x150fb: goto L150fb;
    case 0x15108: goto L15108;
    case 0x1510b: goto L1510b;
    case 0x15118: goto L15118;
    case 0x15122: goto L15122;
    case 0x15125: goto L15125;
    case 0x15128: goto L15128;
    case 0x1512b: goto L1512b;
    case 0x15131: goto L15131;
    case 0x15146: goto L15146;
    case 0x15149: goto L15149;
    case 0x15150: goto L15150;
    case 0x1515b: goto L1515b;
    case 0x15163: goto L15163;
    case 0x1516d: goto L1516d;
    case 0x15175: goto L15175;
    case 0x1517d: goto L1517d;
    case 0x1518b: goto L1518b;
    case 0x15194: goto L15194;
    case 0x15196: goto L15196;
    case 0x1519f: goto L1519f;
    case 0x151a7: goto L151a7;
    case 0x151a9: goto L151a9;
    case 0x151ad: goto L151ad;
    case 0x151af: goto L151af;
    case 0x151b7: goto L151b7;
    case 0x151bf: goto L151bf;
    case 0x151d0: goto L151d0;
    case 0x151d3: goto L151d3;
    case 0x151df: goto L151df;
    case 0x151e2: goto L151e2;
    case 0x15208: goto L15208;
    case 0x1520e: goto L1520e;
    case 0x15211: goto L15211;
    case 0x1523d: goto L1523d;
    case 0x15247: goto L15247;
    case 0x15249: goto L15249;
    case 0x15256: goto L15256;
    case 0x15263: goto L15263;
    case 0x1526f: goto L1526f;
    case 0x15275: goto L15275;
    case 0x15278: goto L15278;
    case 0x15280: goto L15280;
    case 0x1528c: goto L1528c;
    case 0x15291: goto L15291;
    case 0x15298: goto L15298;
    case 0x15299: goto L15299;
    case 0x152a1: goto L152a1;
    case 0x152ad: goto L152ad;
    case 0x152b0: goto L152b0;
    case 0x152bc: goto L152bc;
    case 0x152c7: goto L152c7;
    case 0x152c8: goto L152c8;
    case 0x152ee: goto L152ee;
    case 0x152f0: goto L152f0;
    case 0x152fd: goto L152fd;
    case 0x1531e: goto L1531e;
    case 0x15327: goto L15327;
    case 0x15341: goto L15341;
    case 0x15350: goto L15350;
    case 0x15356: goto L15356;
    case 0x1535c: goto L1535c;
    case 0x1535d: goto L1535d;
    case 0x15362: goto L15362;
    case 0x15371: goto L15371;
    case 0x15372: goto L15372;
    case 0x15378: goto L15378;
    case 0x15393: goto L15393;
    case 0x153a3: goto L153a3;
    case 0x153b0: goto L153b0;
    case 0x153b6: goto L153b6;
    case 0x153c9: goto L153c9;
    case 0x153cb: goto L153cb;
    case 0x153e6: goto L153e6;
    case 0x153e7: goto L153e7;
    case 0x15403: goto L15403;
    case 0x1540c: goto L1540c;
    case 0x15415: goto L15415;
    case 0x15416: goto L15416;
    case 0x1541e: goto L1541e;
    case 0x1543b: goto L1543b;
    case 0x1543c: goto L1543c;
    case 0x1543f: goto L1543f;
    case 0x15440: goto L15440;
    case 0x15444: goto L15444;
    case 0x15445: goto L15445;
    case 0x15449: goto L15449;
    case 0x1544a: goto L1544a;
    case 0x1544d: goto L1544d;
    case 0x15451: goto L15451;
    case 0x1545d: goto L1545d;
    case 0x15460: goto L15460;
    case 0x15467: goto L15467;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xae  [x1]
    goto L150be;
L150be:
    if (c.tracing) c.traceAt(0x150be);
    // 1501:00ae  mov word ptr cs:[0xaa], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xaau), c.c.x);
    // 1501:00b3  mov word ptr cs:[0xac], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xacu), c.dx_.x);
    // 1501:00b8  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:00bb  int 0x10  [x1]
    c.ip = 0xbdu; c.d32 = false; c.intr(0x10, 0xbdu);
L150cd:
    if (c.tracing) c.traceAt(0x150cd);
    // 1501:00bd  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00c0  mov ax, 0x604  [x1]
    c.a.x = (uint16_t)(0x604u);
    // 1501:00c3  out dx, ax  [x1]
    c.ip = 0xc4u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c4  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00c7  mov ax, 0x14  [x1]
    c.a.x = (uint16_t)(0x14u);
    // 1501:00ca  out dx, ax  [x1]
    c.ip = 0xcbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00cb  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00ce  mov al, 0x17  [x1]
    c.a.l = (uint8_t)(0x17u);
    // 1501:00d0  out dx, al  [x1]
    c.ip = 0xd1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00d1  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:00d2  in al, dx  [x1]
    c.ip = 0xd3u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:00d3  or al, 0x40  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x40u), false));
    // 1501:00d5  out dx, al  [x1]
    c.ip = 0xd6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00d6  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00d9  mov ax, 0x709  [x1]
    c.a.x = (uint16_t)(0x709u);
    // 1501:00dc  out dx, ax  [x1]
    c.ip = 0xddu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00dd  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:00e0  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:00e2  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:00e4  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:00e6  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L150f9:
    if (c.tracing) c.traceAt(0x150f9);
    // 1501:00e9  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L150fb:
    if (c.tracing) c.traceAt(0x150fb);
    // 1501:00eb  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00ee  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:00f0  out dx, al  [x1]
    c.ip = 0xf1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00f1  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:00f2  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 1501:00f5  mov si, 0x140  [x1]
    c.si.x = (uint16_t)(0x140u);
L15108:
    if (c.tracing) c.traceAt(0x15108);
    // 1501:00f8  outsb dx, byte ptr [si]  [x768]
    c.ip = 0xf9u; c.d32 = false; c.outs<8, false>(c.dsb, 0);
    // 1501:00f9  loop 0xf8  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15108;
L1510b:
    if (c.tracing) c.traceAt(0x1510b);
    // 1501:00fb  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:00fe  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0101  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0103  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0105  out dx, ax  [x1]
    c.ip = 0x106u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0106  jmp 0x108  [x1]
    goto L15118;
L15118:
    if (c.tracing) c.traceAt(0x15118);
    // 1501:0108  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:010b  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:010d  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:010f  out dx, ax  [x1]
    c.ip = 0x110u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0110  jmp 0x112  [x1]
    goto L15122;
L15122:
    if (c.tracing) c.traceAt(0x15122);
    // 1501:0112  call 0x34d  [x1]
    c.push16(0x115u); code_25(c, 0x1535du); if (c.ip != 0x115u) c.badReturn(0x15122);
L15125:
    if (c.tracing) c.traceAt(0x15125);
    // 1501:0115  call 0x253  [x1]
    c.push16(0x118u); code_25(c, 0x15263u); if (c.ip != 0x118u) c.badReturn(0x15125);
L15128:
    if (c.tracing) c.traceAt(0x15128);
    // 1501:0118  call 0x406  [x1]
    c.push16(0x11bu); code_25(c, 0x15416u); if (c.ip != 0x11bu) c.badReturn(0x15128);
L1512b:
    if (c.tracing) c.traceAt(0x1512b);
    // 1501:011b  mov word ptr [0x440], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x440u), 0x0u);
L15131:
    if (c.tracing) c.traceAt(0x15131);
    // 1501:0121  push es  [x1472]
    c.ip = 0x121u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:0122  mov ax, word ptr cs:[0xaa]  [x1472]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xaau)));
    // 1501:0126  mov es, ax  [x1472]
    c.loadEs(c.a.x);
    // 1501:0128  mov si, word ptr cs:[0xac]  [x1472]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xacu)));
    // 1501:012d  mov dx, word ptr es:[si]  [x1472]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0130  pop es  [x1472]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0131  cmp dx, 0  [x1472]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0134  je 0x121  [x1472]
    if (c.zf) goto L15131;
L15146:
    if (c.tracing) c.traceAt(0x15146);
    // 1501:0136  call 0x42c  [x697]
    c.push16(0x139u); code_25(c, 0x1543cu); if (c.ip != 0x139u) c.badReturn(0x15146);
L15149:
    if (c.tracing) c.traceAt(0x15149);
    // 1501:0139  cmp word ptr [0x5f0], 0x40  [x697]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0x40u, true);
    // 1501:013e  jae 0x14b  [x697]
    if (!c.cf) goto L1515b;
L15150:
    if (c.tracing) c.traceAt(0x15150);
    // 1501:0140  mov bx, 0x40  [x24]
    c.b.x = (uint16_t)(0x40u);
    // 1501:0143  sub bx, word ptr [0x5f0]  [x24]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x5f0u)), false));
    // 1501:0147  neg bx  [x24]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
    // 1501:0149  jmp 0x186  [x24]
    goto L15196;
L1515b:
    if (c.tracing) c.traceAt(0x1515b);
    // 1501:014b  cmp word ptr [0x5f0], 0x2a0  [x673]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0x2a0u, true);
    // 1501:0151  jb 0x15d  [x673]
    if (c.cf) goto L1516d;
L15163:
    if (c.tracing) c.traceAt(0x15163);
    // 1501:0153  mov bx, word ptr [0x5f0]  [x65]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5f0u)));
    // 1501:0157  sub bx, 0x2a0  [x65]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x2a0u, true));
    // 1501:015b  jmp 0x186  [x65]
    goto L15196;
L1516d:
    if (c.tracing) c.traceAt(0x1516d);
    // 1501:015d  cmp word ptr [0x5f0], 0xc0  [x608]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0xc0u, true);
    // 1501:0163  jb 0x1a7  [x608]
    if (c.cf) goto L151b7;
L15175:
    if (c.tracing) c.traceAt(0x15175);
    // 1501:0165  cmp word ptr [0x5f0], 0x140  [x480]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0x140u, true);
    // 1501:016b  jae 0x1a7  [x480]
    if (!c.cf) goto L151b7;
L1517d:
    if (c.tracing) c.traceAt(0x1517d);
    // 1501:016d  mov bx, 0xc0  [x128]
    c.b.x = (uint16_t)(0xc0u);
    // 1501:0170  sub bx, word ptr [0x5f0]  [x128]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x5f0u)), false));
    // 1501:0174  neg bx  [x128]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:0176  cmp bx, 0x40  [x128]
    c.sub<16>(c.b.x, 0x40u, true);
    // 1501:0179  jbe 0x186  [x128]
    if ((c.cf || c.zf)) goto L15196;
L1518b:
    if (c.tracing) c.traceAt(0x1518b);
    // 1501:017b  mov dx, 0x80  [x63]
    c.dx_.x = (uint16_t)(0x80u);
    // 1501:017e  sub dx, bx  [x63]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:0180  jns 0x184  [x63]
    if (!c.sf) goto L15194;
    c.notTranslated(0x15192, "fall-through");
L15194:
    if (c.tracing) c.traceAt(0x15194);
    // 1501:0184  mov bx, dx  [x63]
    c.b.x = (uint16_t)(c.dx_.x);
L15196:
    if (c.tracing) c.traceAt(0x15196);
    // 1501:0186  mov dx, 0x3c8  [x217]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0189  xor al, al  [x217]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:018b  out dx, al  [x217]
    c.ip = 0x18cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:018c  inc dx  [x217]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:018d  xor si, si  [x217]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1519f:
    if (c.tracing) c.traceAt(0x1519f);
    // 1501:018f  mov al, byte ptr [si + 0x140]  [x31248]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x140u)));
    // 1501:0193  add al, bl  [x31248]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, true));
    // 1501:0195  jns 0x199  [x31248]
    if (!c.sf) goto L151a9;
L151a7:
    if (c.tracing) c.traceAt(0x151a7);
    // 1501:0197  xor al, al  [x953]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L151a9:
    if (c.tracing) c.traceAt(0x151a9);
    // 1501:0199  cmp al, 0x3f  [x31248]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:019b  jle 0x19f  [x31248]
    if ((c.zf || c.sf != c.of)) goto L151af;
L151ad:
    if (c.tracing) c.traceAt(0x151ad);
    // 1501:019d  mov al, 0x3f  [x12747]
    c.a.l = (uint8_t)(0x3fu);
L151af:
    if (c.tracing) c.traceAt(0x151af);
    // 1501:019f  out dx, al  [x31248]
    c.ip = 0x1a0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01a0  inc si  [x31248]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:01a1  cmp si, 0x90  [x31248]
    c.sub<16>(c.si.x, 0x90u, true);
    // 1501:01a5  jb 0x18f  [x31248]
    if (c.cf) goto L1519f;
L151b7:
    if (c.tracing) c.traceAt(0x151b7);
    // 1501:01a7  cmp word ptr [0x5f0], 0x100  [x697]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0x100u, true);
    // 1501:01ad  jb 0x1c0  [x697]
    if (c.cf) goto L151d0;
L151bf:
    if (c.tracing) c.traceAt(0x151bf);
    // 1501:01af  mov word ptr cs:[8], 0x1900  [x481]
    c.w16(c.csb + (uint16_t)(0x8u), 0x1900u);
    // 1501:01b6  mov dx, 0x3d4  [x481]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:01b9  mov ax, 0x409  [x481]
    c.a.x = (uint16_t)(0x409u);
    // 1501:01bc  out dx, ax  [x481]
    c.ip = 0x1bdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:01bd  call 0x393  [x481]
    c.push16(0x1c0u); code_25(c, 0x153a3u); if (c.ip != 0x1c0u) c.badReturn(0x151cd);
L151d0:
    if (c.tracing) c.traceAt(0x151d0);
    // 1501:01c0  call 0x201  [x697]
    c.push16(0x1c3u); code_25(c, 0x15211u); if (c.ip != 0x1c3u) c.badReturn(0x151d0);
L151d3:
    if (c.tracing) c.traceAt(0x151d3);
    // 1501:01c3  inc word ptr [0x5f0]  [x697]
    c.w16(c.dsb + (uint16_t)(0x5f0u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), false));
    // 1501:01c7  cmp word ptr [0x5f0], 0x2e0  [x697]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f0u)), 0x2e0u, true);
    // 1501:01cd  jbe 0x1d2  [x697]
    if ((c.cf || c.zf)) goto L151e2;
L151df:
    if (c.tracing) c.traceAt(0x151df);
    // 1501:01cf  jmp 0x43a  [x1]
    goto L1544a;
L151e2:
    if (c.tracing) c.traceAt(0x151e2);
    // 1501:01d2  mov si, word ptr [0x544]  [x696]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x544u)));
    // 1501:01d6  add word ptr [0x544], 3  [x696]
    c.w16(c.dsb + (uint16_t)(0x544u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x544u)), 0x3u, false));
    // 1501:01db  and word ptr [0x544], 0xff  [x696]
    c.w16(c.dsb + (uint16_t)(0x544u), c.logic<16>((c.r16(c.dsb + (uint16_t)(0x544u))) & (0xffu), false));
    // 1501:01e1  mov al, byte ptr [si + 0x444]  [x696]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x444u)));
    // 1501:01e5  shl al, 1  [x696]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x1u) & 31), false));
    // 1501:01e7  sub al, 0x18  [x696]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x18u, false));
    // 1501:01e9  cwde   [x696]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:01ea  mov word ptr [0x54a], ax  [x696]
    c.w16(c.dsb + (uint16_t)(0x54au), c.a.x);
    // 1501:01ed  inc word ptr [0x440]  [x696]
    c.w16(c.dsb + (uint16_t)(0x440u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x440u)), false));
    // 1501:01f1  cmp word ptr [0x440], 0x14  [x696]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x440u)), 0x14u, true);
    // 1501:01f6  jb 0x1fe  [x696]
    if (c.cf) goto L1520e;
L15208:
    if (c.tracing) c.traceAt(0x15208);
    // 1501:01f8  mov word ptr [0x440], 0  [x34]
    c.w16(c.dsb + (uint16_t)(0x440u), 0x0u);
L1520e:
    if (c.tracing) c.traceAt(0x1520e);
    // 1501:01fe  jmp 0x136  [x696]
    goto L15146;
L15211:
    if (c.tracing) c.traceAt(0x15211);
    // 1501:0201  mov dx, 0x3ce  [x697]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:0204  mov al, 5  [x697]
    c.a.l = (uint8_t)(0x5u);
    // 1501:0206  out dx, al  [x697]
    c.ip = 0x207u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0207  inc dx  [x697]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:0208  in al, dx  [x697]
    c.ip = 0x209u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:0209  and al, 0xfc  [x697]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:020b  or al, 1  [x697]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 1501:020d  out dx, al  [x697]
    c.ip = 0x20eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:020e  mov dx, 0x3c4  [x697]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0211  mov ax, 0xf02  [x697]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:0214  out dx, ax  [x697]
    c.ip = 0x215u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0215  push ds  [x697]
    c.push16(c.ds);
    // 1501:0216  mov ax, word ptr [0x440]  [x697]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x440u)));
    // 1501:0219  mov dx, 0x780  [x697]
    c.dx_.x = (uint16_t)(0x780u);
    // 1501:021c  mul dx  [x697]
    c.mul16(c.dx_.x);
    // 1501:021e  mov dx, ax  [x697]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:0220  add dx, 0x1f40  [x697]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x1f40u, false));
    // 1501:0224  xor di, di  [x697]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:0226  xor bx, bx  [x697]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:0228  mov ax, 0xa000  [x697]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:022b  mov ds, ax  [x697]
    c.loadDs(c.a.x);
L1523d:
    if (c.tracing) c.traceAt(0x1523d);
    // 1501:022d  mov si, dx  [x48848]
    c.si.x = (uint16_t)(c.dx_.x);
    // 1501:022f  add si, word ptr cs:[bx + 0xa]  [x48848]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.csb + (uint16_t)(c.b.x + 0xau)), true));
    // 1501:0234  mov cx, 0x50  [x48848]
    c.c.x = (uint16_t)(0x50u);
L15247:
    if (c.tracing) c.traceAt(0x15247);
    // 1501:0237  rep movsb byte ptr es:[di], byte ptr [si]  [x3956688]
    c.ip = 0x239u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L15249:
    if (c.tracing) c.traceAt(0x15249);
    // 1501:0239  sub si, 0x50  [x48848]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x50u, false));
    // 1501:023c  add bx, 2  [x48848]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:023f  cmp di, word ptr cs:[8]  [x48848]
    c.sub<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x8u)), true);
    // 1501:0244  jb 0x22d  [x48848]
    if (c.cf) goto L1523d;
L15256:
    if (c.tracing) c.traceAt(0x15256);
    // 1501:0246  pop ds  [x697]
    c.loadDs((uint16_t)c.pop16());
    // 1501:0247  mov dx, 0x3ce  [x697]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:024a  mov al, 5  [x697]
    c.a.l = (uint8_t)(0x5u);
    // 1501:024c  out dx, al  [x697]
    c.ip = 0x24du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:024d  inc dx  [x697]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:024e  in al, dx  [x697]
    c.ip = 0x24fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:024f  and al, 0xfc  [x697]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), true));
    // 1501:0251  out dx, al  [x697]
    c.ip = 0x252u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0252  ret   [x697]
    c.ip = c.pop16(); return;
L15263:
    if (c.tracing) c.traceAt(0x15263);
    // 1501:0253  mov word ptr [0x440], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x440u), 0x0u);
    // 1501:0259  mov word ptr [0x54c], 0x1f40  [x1]
    c.w16(c.dsb + (uint16_t)(0x54cu), 0x1f40u);
L1526f:
    if (c.tracing) c.traceAt(0x1526f);
    // 1501:025f  mov word ptr [0x548], 0x2b6  [x20]
    c.w16(c.dsb + (uint16_t)(0x548u), 0x2b6u);
L15275:
    if (c.tracing) c.traceAt(0x15275);
    // 1501:0265  call 0x362  [x480]
    c.push16(0x268u); code_25(c, 0x15372u); if (c.ip != 0x268u) c.badReturn(0x15275);
L15278:
    if (c.tracing) c.traceAt(0x15278);
    // 1501:0268  mov ax, word ptr [0x5f0]  [x480]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5f0u)));
    // 1501:026b  mov word ptr [0x442], ax  [x480]
    c.w16(c.dsb + (uint16_t)(0x442u), c.a.x);
    // 1501:026e  xor si, si  [x480]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L15280:
    if (c.tracing) c.traceAt(0x15280);
    // 1501:0270  mov ax, word ptr [si + 0x5a0]  [x19200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x5a0u)));
    // 1501:0274  add ax, 0xa0  [x19200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 1501:0277  cmp ax, 0x140  [x19200]
    c.sub<16>(c.a.x, 0x140u, true);
    // 1501:027a  jg 0x289  [x19200]
    if ((!c.zf && c.sf == c.of)) goto L15299;
L1528c:
    if (c.tracing) c.traceAt(0x1528c);
    // 1501:027c  cmp ax, 0xffce  [x14700]
    c.sub<16>(c.a.x, 0xffceu, true);
    // 1501:027f  jl 0x289  [x14700]
    if ((c.sf != c.of)) goto L15299;
L15291:
    if (c.tracing) c.traceAt(0x15291);
    // 1501:0281  mov word ptr [0x546], ax  [x11500]
    c.w16(c.dsb + (uint16_t)(0x546u), c.a.x);
    // 1501:0284  push si  [x11500]
    c.push16(c.si.x);
    // 1501:0285  call 0x2ed  [x11500]
    c.push16(0x288u); code_25(c, 0x152fdu); if (c.ip != 0x288u) c.badReturn(0x15295);
L15298:
    if (c.tracing) c.traceAt(0x15298);
    // 1501:0288  pop si  [x11500]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
L15299:
    if (c.tracing) c.traceAt(0x15299);
    // 1501:0289  add si, 2  [x19200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:028c  cmp si, 0x50  [x19200]
    c.sub<16>(c.si.x, 0x50u, true);
    // 1501:028f  jb 0x270  [x19200]
    if (c.cf) goto L15280;
L152a1:
    if (c.tracing) c.traceAt(0x152a1);
    // 1501:0291  sub word ptr [0x548], 0x1a  [x480]
    c.w16(c.dsb + (uint16_t)(0x548u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x548u)), 0x1au, false));
    // 1501:0296  cmp word ptr [0x548], 0x46  [x480]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x548u)), 0x46u, true);
    // 1501:029b  jbe 0x2a0  [x480]
    if ((c.cf || c.zf)) goto L152b0;
L152ad:
    if (c.tracing) c.traceAt(0x152ad);
    // 1501:029d  call 0x2b8  [x460]
    c.push16(0x2a0u); code_25(c, 0x152c8u); if (c.ip != 0x2a0u) c.badReturn(0x152ad);
L152b0:
    if (c.tracing) c.traceAt(0x152b0);
    // 1501:02a0  add word ptr [0x54c], 0x50  [x480]
    c.w16(c.dsb + (uint16_t)(0x54cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x54cu)), 0x50u, false));
    // 1501:02a5  cmp word ptr [0x548], 0x46  [x480]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x548u)), 0x46u, true);
    // 1501:02aa  ja 0x265  [x480]
    if ((!c.cf && !c.zf)) goto L15275;
L152bc:
    if (c.tracing) c.traceAt(0x152bc);
    // 1501:02ac  inc word ptr [0x440]  [x20]
    c.w16(c.dsb + (uint16_t)(0x440u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x440u)), false));
    // 1501:02b0  cmp word ptr [0x440], 0x14  [x20]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x440u)), 0x14u, true);
    // 1501:02b5  jb 0x25f  [x20]
    if (c.cf) goto L1526f;
L152c7:
    if (c.tracing) c.traceAt(0x152c7);
    // 1501:02b7  ret   [x1]
    c.ip = c.pop16(); return;
L152c8:
    if (c.tracing) c.traceAt(0x152c8);
    // 1501:02b8  mov dx, 0x3ce  [x460]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:02bb  mov al, 5  [x460]
    c.a.l = (uint8_t)(0x5u);
    // 1501:02bd  out dx, al  [x460]
    c.ip = 0x2beu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02be  inc dx  [x460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:02bf  in al, dx  [x460]
    c.ip = 0x2c0u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:02c0  and al, 0xfc  [x460]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 1501:02c2  or al, 1  [x460]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 1501:02c4  out dx, al  [x460]
    c.ip = 0x2c5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02c5  mov dx, 0x3c4  [x460]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:02c8  mov ax, 0xf02  [x460]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:02cb  out dx, ax  [x460]
    c.ip = 0x2ccu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02cc  push ds  [x460]
    c.push16(c.ds);
    // 1501:02cd  mov si, word ptr [0x54c]  [x460]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x54cu)));
    // 1501:02d1  mov di, si  [x460]
    c.di.x = (uint16_t)(c.si.x);
    // 1501:02d3  add di, 0x50  [x460]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x50u, true));
    // 1501:02d6  mov cx, 0x50  [x460]
    c.c.x = (uint16_t)(0x50u);
    // 1501:02d9  mov ax, 0xa000  [x460]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:02dc  mov ds, ax  [x460]
    c.loadDs(c.a.x);
L152ee:
    if (c.tracing) c.traceAt(0x152ee);
    // 1501:02de  rep movsb byte ptr es:[di], byte ptr [si]  [x37260]
    c.ip = 0x2e0u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L152f0:
    if (c.tracing) c.traceAt(0x152f0);
    // 1501:02e0  pop ds  [x460]
    c.loadDs((uint16_t)c.pop16());
    // 1501:02e1  mov dx, 0x3ce  [x460]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:02e4  mov al, 5  [x460]
    c.a.l = (uint8_t)(0x5u);
    // 1501:02e6  out dx, al  [x460]
    c.ip = 0x2e7u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02e7  inc dx  [x460]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:02e8  in al, dx  [x460]
    c.ip = 0x2e9u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:02e9  and al, 0xfc  [x460]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), true));
    // 1501:02eb  out dx, al  [x460]
    c.ip = 0x2ecu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02ec  ret   [x460]
    c.ip = c.pop16(); return;
L152fd:
    if (c.tracing) c.traceAt(0x152fd);
    // 1501:02ed  mov ax, 0x1a  [x11500]
    c.a.x = (uint16_t)(0x1au);
    // 1501:02f0  cdq   [x11500]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:02f1  div word ptr [0x442]  [x11500]
    while (!c.div16(c.r16(c.dsb + (uint16_t)(0x442u)))) { c.d32 = false; c.intr(0, 0x2f1u); }   // #DE: int 0, then again
    // 1501:02f5  mov word ptr [0x5f2], ax  [x11500]
    c.w16(c.dsb + (uint16_t)(0x5f2u), c.a.x);
    // 1501:02f8  mov word ptr [0x5f4], dx  [x11500]
    c.w16(c.dsb + (uint16_t)(0x5f4u), c.dx_.x);
    // 1501:02fc  mov word ptr [0x5f6], 0  [x11500]
    c.w16(c.dsb + (uint16_t)(0x5f6u), 0x0u);
    // 1501:0302  mov al, 0x10  [x11500]
    c.a.l = (uint8_t)(0x10u);
    // 1501:0304  mov cx, word ptr [0x442]  [x11500]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x442u)));
    // 1501:0308  mov si, cx  [x11500]
    c.si.x = (uint16_t)(c.c.x);
    // 1501:030a  mov bx, word ptr [0x5f4]  [x11500]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5f4u)));
L1531e:
    if (c.tracing) c.traceAt(0x1531e);
    // 1501:030e  push ax  [x108519]
    c.push16(c.a.x);
    // 1501:030f  cmp word ptr [0x546], 0x140  [x108519]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x546u)), 0x140u, true);
    // 1501:0315  jae 0x331  [x108519]
    if (!c.cf) goto L15341;
L15327:
    if (c.tracing) c.traceAt(0x15327);
    // 1501:0317  push ax  [x94809]
    c.push16(c.a.x);
    // 1501:0318  mov di, word ptr [0x546]  [x94809]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x546u)));
    // 1501:031c  mov ah, byte ptr [di]  [x94809]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 1501:0320  shr di, 2  [x94809]
    c.di.x = (uint16_t)(c.shr<16>(c.di.x, (int)((0x2u) & 31), false));
    // 1501:0323  add di, word ptr [0x54c]  [x94809]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x54cu)), true));
    // 1501:0327  mov dx, 0x3c4  [x94809]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:032a  mov al, 2  [x94809]
    c.a.l = (uint8_t)(0x2u);
    // 1501:032c  out dx, ax  [x94809]
    c.ip = 0x32du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:032d  pop ax  [x94809]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:032e  mov byte ptr es:[di], al  [x94809]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L15341:
    if (c.tracing) c.traceAt(0x15341);
    // 1501:0331  pop ax  [x108519]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0332  add ax, word ptr [0x5f2]  [x108519]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x5f2u)), false));
    // 1501:0336  add word ptr [0x5f6], bx  [x108519]
    c.w16(c.dsb + (uint16_t)(0x5f6u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), c.b.x, false));
    // 1501:033a  cmp word ptr [0x5f6], si  [x108519]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), c.si.x, true);
    // 1501:033e  jb 0x346  [x108519]
    if (c.cf) goto L15356;
L15350:
    if (c.tracing) c.traceAt(0x15350);
    // 1501:0340  sub word ptr [0x5f6], si  [x48899]
    c.w16(c.dsb + (uint16_t)(0x5f6u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), c.si.x, true));
    // 1501:0344  inc al  [x48899]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, true));
L15356:
    if (c.tracing) c.traceAt(0x15356);
    // 1501:0346  inc word ptr [0x546]  [x108519]
    c.w16(c.dsb + (uint16_t)(0x546u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x546u)), true));
    // 1501:034a  loop 0x30e  [x108519]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1531e;
L1535c:
    if (c.tracing) c.traceAt(0x1535c);
    // 1501:034c  ret   [x11500]
    c.ip = c.pop16(); return;
L1535d:
    if (c.tracing) c.traceAt(0x1535d);
    // 1501:034d  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:034f  mov ax, 0xfe70  [x1]
    c.a.x = (uint16_t)(0xfe70u);
L15362:
    if (c.tracing) c.traceAt(0x15362);
    // 1501:0352  mov word ptr [si + 0x54e], ax  [x40]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x54eu), c.a.x);
    // 1501:0356  add ax, 0x14  [x40]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, false));
    // 1501:0359  add si, 2  [x40]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:035c  cmp si, 0x50  [x40]
    c.sub<16>(c.si.x, 0x50u, true);
    // 1501:035f  jb 0x352  [x40]
    if (c.cf) goto L15362;
L15371:
    if (c.tracing) c.traceAt(0x15371);
    // 1501:0361  ret   [x1]
    c.ip = c.pop16(); return;
L15372:
    if (c.tracing) c.traceAt(0x15372);
    // 1501:0362  xor di, di  [x480]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:0364  mov si, word ptr [0x548]  [x480]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x548u)));
L15378:
    if (c.tracing) c.traceAt(0x15378);
    // 1501:0368  mov bx, word ptr [di + 0x54e]  [x19200]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x54eu)));
    // 1501:036c  add bx, word ptr [0x440]  [x19200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x440u)), false));
    // 1501:0370  mov ax, 0x12c  [x19200]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:0373  imul bx  [x19200]
    c.imul16(c.b.x);
    // 1501:0375  idiv si  [x19200]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x375u); }   // #DE: int 0, then again
    // 1501:0377  mov word ptr [di + 0x5a0], ax  [x19200]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x5a0u), c.a.x);
    // 1501:037b  add di, 2  [x19200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:037e  cmp di, 0x50  [x19200]
    c.sub<16>(c.di.x, 0x50u, true);
    // 1501:0381  jne 0x368  [x19200]
    if (!c.zf) goto L15378;
L15393:
    if (c.tracing) c.traceAt(0x15393);
    // 1501:0383  mov bx, word ptr [di + 0x54e]  [x480]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x54eu)));
    // 1501:0387  mov ax, 0x12c  [x480]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:038a  imul bx  [x480]
    c.imul16(c.b.x);
    // 1501:038c  idiv si  [x480]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x38cu); }   // #DE: int 0, then again
    // 1501:038e  mov word ptr [di + 0x5a0], ax  [x480]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x5a0u), c.a.x);
    // 1501:0392  ret   [x480]
    c.ip = c.pop16(); return;
L153a3:
    if (c.tracing) c.traceAt(0x153a3);
    // 1501:0393  mov word ptr [0x5f8], 1  [x481]
    c.w16(c.dsb + (uint16_t)(0x5f8u), 0x1u);
    // 1501:0399  cmp word ptr [0x54a], 0  [x481]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x54au)), 0x0u, true);
    // 1501:039e  jns 0x3a6  [x481]
    if (!c.sf) goto L153b6;
L153b0:
    if (c.tracing) c.traceAt(0x153b0);
    // 1501:03a0  mov word ptr [0x5f8], 0xffff  [x253]
    c.w16(c.dsb + (uint16_t)(0x5f8u), 0xffffu);
L153b6:
    if (c.tracing) c.traceAt(0x153b6);
    // 1501:03a6  mov ax, word ptr [0x54a]  [x481]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x54au)));
    // 1501:03a9  cdq   [x481]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:03aa  mov cx, 0x50  [x481]
    c.c.x = (uint16_t)(0x50u);
    // 1501:03ad  idiv cx  [x481]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3adu); }   // #DE: int 0, then again
    // 1501:03af  mov word ptr [0x5f2], ax  [x481]
    c.w16(c.dsb + (uint16_t)(0x5f2u), c.a.x);
    // 1501:03b2  cmp word ptr [0x5f8], 1  [x481]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f8u)), 0x1u, true);
    // 1501:03b7  je 0x3bb  [x481]
    if (c.zf) goto L153cb;
L153c9:
    if (c.tracing) c.traceAt(0x153c9);
    // 1501:03b9  neg dx  [x253]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, true));
L153cb:
    if (c.tracing) c.traceAt(0x153cb);
    // 1501:03bb  mov word ptr [0x5f4], dx  [x481]
    c.w16(c.dsb + (uint16_t)(0x5f4u), c.dx_.x);
    // 1501:03bf  mov word ptr [0x5f6], 0  [x481]
    c.w16(c.dsb + (uint16_t)(0x5f6u), 0x0u);
    // 1501:03c5  xor si, si  [x481]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:03c7  mov ax, word ptr [0x54a]  [x481]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x54au)));
    // 1501:03ca  sar ax, 1  [x481]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:03cc  mov bx, 0xc  [x481]
    c.b.x = (uint16_t)(0xcu);
    // 1501:03cf  sub bx, ax  [x481]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:03d1  cmp ax, 0  [x481]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:03d4  jns 0x3d7  [x481]
    if (!c.sf) goto L153e7;
L153e6:
    if (c.tracing) c.traceAt(0x153e6);
    // 1501:03d6  dec bx  [x253]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, true));
L153e7:
    if (c.tracing) c.traceAt(0x153e7);
    // 1501:03d7  mov ax, 0x50  [x38480]
    c.a.x = (uint16_t)(0x50u);
    // 1501:03da  mul bx  [x38480]
    c.mul16(c.b.x);
    // 1501:03dc  mov word ptr cs:[si + 0xa], ax  [x38480]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xau), c.a.x);
    // 1501:03e1  add bx, word ptr [0x5f2]  [x38480]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x5f2u)), false));
    // 1501:03e5  mov ax, word ptr [0x5f4]  [x38480]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x5f4u)));
    // 1501:03e8  add word ptr [0x5f6], ax  [x38480]
    c.w16(c.dsb + (uint16_t)(0x5f6u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), c.a.x, false));
    // 1501:03ec  cmp word ptr [0x5f6], 0x50  [x38480]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), 0x50u, true);
    // 1501:03f1  jb 0x3fc  [x38480]
    if (c.cf) goto L1540c;
L15403:
    if (c.tracing) c.traceAt(0x15403);
    // 1501:03f3  sub word ptr [0x5f6], 0x50  [x7048]
    c.w16(c.dsb + (uint16_t)(0x5f6u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5f6u)), 0x50u, false));
    // 1501:03f8  add bx, word ptr [0x5f8]  [x7048]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x5f8u)), true));
L1540c:
    if (c.tracing) c.traceAt(0x1540c);
    // 1501:03fc  add si, 2  [x38480]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:03ff  cmp si, 0xa0  [x38480]
    c.sub<16>(c.si.x, 0xa0u, true);
    // 1501:0403  jb 0x3d7  [x38480]
    if (c.cf) goto L153e7;
L15415:
    if (c.tracing) c.traceAt(0x15415);
    // 1501:0405  ret   [x481]
    c.ip = c.pop16(); return;
L15416:
    if (c.tracing) c.traceAt(0x15416);
    // 1501:0406  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0408  mov di, 0x5e  [x1]
    c.di.x = (uint16_t)(0x5eu);
    // 1501:040b  mov ax, 0x17  [x1]
    c.a.x = (uint16_t)(0x17u);
L1541e:
    if (c.tracing) c.traceAt(0x1541e);
    // 1501:040e  push ax  [x24]
    c.push16(c.a.x);
    // 1501:040f  mov dx, 0x50  [x24]
    c.dx_.x = (uint16_t)(0x50u);
    // 1501:0412  mul dx  [x24]
    c.mul16(c.dx_.x);
    // 1501:0414  mov word ptr cs:[si + 0xa], ax  [x24]
    c.w16(c.csb + (uint16_t)(c.si.x + 0xau), c.a.x);
    // 1501:0419  mov word ptr cs:[di + 0xa], ax  [x24]
    c.w16(c.csb + (uint16_t)(c.di.x + 0xau), c.a.x);
    // 1501:041e  pop ax  [x24]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:041f  dec ax  [x24]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, false));
    // 1501:0420  add si, 2  [x24]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0423  sub di, 2  [x24]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x2u, false));
    // 1501:0426  cmp si, 0x30  [x24]
    c.sub<16>(c.si.x, 0x30u, true);
    // 1501:0429  jb 0x40e  [x24]
    if (c.cf) goto L1541e;
L1543b:
    if (c.tracing) c.traceAt(0x1543b);
    // 1501:042b  ret   [x1]
    c.ip = c.pop16(); return;
L1543c:
    if (c.tracing) c.traceAt(0x1543c);
    // 1501:042c  mov dx, 0x3da  [x760]
    c.dx_.x = (uint16_t)(0x3dau);
L1543f:
    if (c.tracing) c.traceAt(0x1543f);
    // 1501:042f  in al, dx  [x2428]
    c.ip = 0x430u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15440:
    if (c.tracing) c.traceAt(0x15440);
    // 1501:0430  test al, 8  [x3237]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0432  jne 0x42f  [x3237]
    if (!c.zf) goto L1543f;
L15444:
    if (c.tracing) c.traceAt(0x15444);
    // 1501:0434  in al, dx  [x35401]
    c.ip = 0x435u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15445:
    if (c.tracing) c.traceAt(0x15445);
    // 1501:0435  test al, 8  [x46948]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0437  je 0x434  [x46948]
    if (c.zf) goto L15444;
L15449:
    if (c.tracing) c.traceAt(0x15449);
    // 1501:0439  ret   [x760]
    c.ip = c.pop16(); return;
L1544a:
    if (c.tracing) c.traceAt(0x1544a);
    // 1501:043a  mov bx, 0x3f  [x1]
    c.b.x = (uint16_t)(0x3fu);
L1544d:
    if (c.tracing) c.traceAt(0x1544d);
    // 1501:043d  push bx  [x63]
    c.push16(c.b.x);
    // 1501:043e  call 0x42c  [x63]
    c.push16(0x441u); code_25(c, 0x1543cu); if (c.ip != 0x441u) c.badReturn(0x1544e);
L15451:
    if (c.tracing) c.traceAt(0x15451);
    // 1501:0441  mov dx, 0x3c8  [x63]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0444  xor al, al  [x63]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0446  out dx, al  [x63]
    c.ip = 0x447u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0447  inc dx  [x63]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0448  mov al, bl  [x63]
    c.a.l = (uint8_t)(c.b.l);
    // 1501:044a  mov cx, 0x90  [x63]
    c.c.x = (uint16_t)(0x90u);
L1545d:
    if (c.tracing) c.traceAt(0x1545d);
    // 1501:044d  out dx, al  [x9072]
    c.ip = 0x44eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:044e  loop 0x44d  [x9072]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1545d;
L15460:
    if (c.tracing) c.traceAt(0x15460);
    // 1501:0450  pop bx  [x63]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0451  dec bx  [x63]
    c.b.x = (uint16_t)(c.dec<16>(c.b.x, false));
    // 1501:0452  cmp bx, 0  [x63]
    c.sub<16>(c.b.x, 0x0u, true);
    // 1501:0455  jg 0x43d  [x63]
    if ((!c.zf && c.sf == c.of)) goto L1544d;
L15467:
    if (c.tracing) c.traceAt(0x15467);
    // 1501:0457  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_25(25, {0x15010, 0x150be, 0x150cd, 0x150f9, 0x150fb, 0x15108, 0x1510b, 0x15118, 0x15122, 0x15125, 0x15128, 0x1512b, 0x15131, 0x15146, 0x15149, 0x15150, 0x1515b, 0x15163, 0x1516d, 0x15175, 0x1517d, 0x1518b, 0x15194, 0x15196, 0x1519f, 0x151a7, 0x151a9, 0x151ad, 0x151af, 0x151b7, 0x151bf, 0x151d0, 0x151d3, 0x151df, 0x151e2, 0x15208, 0x1520e, 0x15211, 0x1523d, 0x15247, 0x15249, 0x15256, 0x15263, 0x1526f, 0x15275, 0x15278, 0x15280, 0x1528c, 0x15291, 0x15298, 0x15299, 0x152a1, 0x152ad, 0x152b0, 0x152bc, 0x152c7, 0x152c8, 0x152ee, 0x152f0, 0x152fd, 0x1531e, 0x15327, 0x15341, 0x15350, 0x15356, 0x1535c, 0x1535d, 0x15362, 0x15371, 0x15372, 0x15378, 0x15393, 0x153a3, 0x153b0, 0x153b6, 0x153c9, 0x153cb, 0x153e6, 0x153e7, 0x15403, 0x1540c, 0x15415, 0x15416, 0x1541e, 0x1543b, 0x1543c, 0x1543f, 0x15440, 0x15444, 0x15445, 0x15449, 0x1544a, 0x1544d, 0x15451, 0x1545d, 0x15460, 0x15467}, code_25);

}  // namespace show
