// Part 15 (STOP.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_16(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1505e: goto L1505e;
    case 0x15075: goto L15075;
    case 0x1507f: goto L1507f;
    case 0x1508b: goto L1508b;
    case 0x1508e: goto L1508e;
    case 0x15090: goto L15090;
    case 0x15096: goto L15096;
    case 0x1509f: goto L1509f;
    case 0x150b2: goto L150b2;
    case 0x150b4: goto L150b4;
    case 0x150be: goto L150be;
    case 0x150c4: goto L150c4;
    case 0x150c5: goto L150c5;
    case 0x150c9: goto L150c9;
    case 0x150ca: goto L150ca;
    case 0x150ce: goto L150ce;
    case 0x150d0: goto L150d0;
    case 0x150e5: goto L150e5;
    case 0x150f2: goto L150f2;
    case 0x150f9: goto L150f9;
    case 0x150ff: goto L150ff;
    case 0x15102: goto L15102;
    case 0x15103: goto L15103;
    case 0x15107: goto L15107;
    case 0x15108: goto L15108;
    case 0x1510c: goto L1510c;
    case 0x15114: goto L15114;
    case 0x15121: goto L15121;
    case 0x1512b: goto L1512b;
    case 0x1512d: goto L1512d;
    case 0x15131: goto L15131;
    case 0x15147: goto L15147;
    case 0x15152: goto L15152;
    case 0x15160: goto L15160;
    case 0x15164: goto L15164;
    case 0x15167: goto L15167;
    case 0x15176: goto L15176;
    case 0x1517b: goto L1517b;
    case 0x15180: goto L15180;
    case 0x15187: goto L15187;
    case 0x15195: goto L15195;
    case 0x15197: goto L15197;
    case 0x1519a: goto L1519a;
    case 0x1519b: goto L1519b;
    case 0x151c1: goto L151c1;
    case 0x151cf: goto L151cf;
    case 0x151d1: goto L151d1;
    case 0x151d6: goto L151d6;
    case 0x151dc: goto L151dc;
    case 0x151e2: goto L151e2;
    case 0x151e8: goto L151e8;
    case 0x151ef: goto L151ef;
    case 0x1520c: goto L1520c;
    case 0x15212: goto L15212;
    case 0x15220: goto L15220;
    case 0x15230: goto L15230;
    case 0x15246: goto L15246;
    case 0x15247: goto L15247;
    case 0x15256: goto L15256;
    case 0x1525e: goto L1525e;
    case 0x15269: goto L15269;
    case 0x1526f: goto L1526f;
    case 0x15274: goto L15274;
    case 0x1527a: goto L1527a;
    case 0x15280: goto L15280;
    case 0x15283: goto L15283;
    case 0x15287: goto L15287;
    case 0x1528b: goto L1528b;
    case 0x1528c: goto L1528c;
    case 0x15294: goto L15294;
    case 0x15295: goto L15295;
    case 0x152b9: goto L152b9;
    case 0x152cc: goto L152cc;
    case 0x152d7: goto L152d7;
    case 0x152eb: goto L152eb;
    case 0x152f1: goto L152f1;
    case 0x152f9: goto L152f9;
    case 0x152ff: goto L152ff;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x4e  [x1]
    goto L1505e;
L1505e:
    if (c.tracing) c.traceAt(0x1505e);
    // 1501:004e  mov word ptr cs:[0x4a], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x4au), c.c.x);
    // 1501:0053  mov word ptr cs:[0x4c], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x4cu), c.dx_.x);
    // 1501:0058  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 1501:005b  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:005e  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0060  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0062  out dx, ax  [x1]
    c.ip = 0x63u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0063  jmp 0x65  [x1]
    goto L15075;
L15075:
    if (c.tracing) c.traceAt(0x15075);
    // 1501:0065  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0068  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:006a  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:006c  out dx, ax  [x1]
    c.ip = 0x6du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:006d  jmp 0x6f  [x1]
    goto L1507f;
L1507f:
    if (c.tracing) c.traceAt(0x1507f);
    // 1501:006f  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0072  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0074  out dx, al  [x1]
    c.ip = 0x75u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0075  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0076  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:0079  mov al, 0x3f  [x1]
    c.a.l = (uint8_t)(0x3fu);
L1508b:
    if (c.tracing) c.traceAt(0x1508b);
    // 1501:007b  out dx, al  [x48]
    c.ip = 0x7cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:007c  loop 0x7b  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1508b;
L1508e:
    if (c.tracing) c.traceAt(0x1508e);
    // 1501:007e  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15090:
    if (c.tracing) c.traceAt(0x15090);
    // 1501:0080  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:0082  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:0084  int 0x10  [x16]
    c.ip = 0x86u; c.d32 = false; c.intr(0x10, 0x86u);
L15096:
    if (c.tracing) c.traceAt(0x15096);
    // 1501:0086  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:0088  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:008a  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:008d  jne 0x80  [x16]
    if (!c.zf) goto L15090;
L1509f:
    if (c.tracing) c.traceAt(0x1509f);
    // 1501:008f  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0092  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0094  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0097  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:009a  out dx, ax  [x1]
    c.ip = 0x9bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:009b  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:009d  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:009f  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L150b2:
    if (c.tracing) c.traceAt(0x150b2);
    // 1501:00a2  rep stosw word ptr es:[di], ax  [x4001]
    c.stos<16, false>(1);
L150b4:
    if (c.tracing) c.traceAt(0x150b4);
    // 1501:00a4  mov word ptr cs:[9], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), 0x0u);
    // 1501:00ab  call 0x18b  [x1]
    c.push16(0xaeu); code_16(c, 0x1519bu); if (c.ip != 0xaeu) c.badReturn(0x150bb);
L150be:
    if (c.tracing) c.traceAt(0x150be);
    // 1501:00ae  mov cx, 0x20  [x1]
    c.c.x = (uint16_t)(0x20u);
    // 1501:00b1  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L150c4:
    if (c.tracing) c.traceAt(0x150c4);
    // 1501:00b4  in al, dx  [x100]
    c.ip = 0xb5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150c5:
    if (c.tracing) c.traceAt(0x150c5);
    // 1501:00b5  test al, 8  [x133]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:00b7  jne 0xb4  [x133]
    if (!c.zf) goto L150c4;
L150c9:
    if (c.tracing) c.traceAt(0x150c9);
    // 1501:00b9  in al, dx  [x1492]
    c.ip = 0xbau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150ca:
    if (c.tracing) c.traceAt(0x150ca);
    // 1501:00ba  test al, 8  [x1979]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:00bc  je 0xb9  [x1979]
    if (c.zf) goto L150c9;
L150ce:
    if (c.tracing) c.traceAt(0x150ce);
    // 1501:00be  loop 0xb4  [x32]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150c4;
L150d0:
    if (c.tracing) c.traceAt(0x150d0);
    // 1501:00c0  push es  [x1690]
    c.ip = 0xc0u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:00c1  mov ax, word ptr cs:[0x4a]  [x1690]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4au)));
    // 1501:00c5  mov es, ax  [x1690]
    c.loadEs(c.a.x);
    // 1501:00c7  mov si, word ptr cs:[0x4c]  [x1690]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4cu)));
    // 1501:00cc  mov dx, word ptr es:[si]  [x1690]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:00cf  pop es  [x1690]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00d0  cmp dx, 0  [x1690]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:00d3  je 0xc0  [x1690]
    if (c.zf) goto L150d0;
L150e5:
    if (c.tracing) c.traceAt(0x150e5);
    // 1501:00d5  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00d8  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:00da  out dx, al  [x1]
    c.ip = 0xdbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00db  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:00dc  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:00df  mov si, 0xb  [x1]
    c.si.x = (uint16_t)(0xbu);
L150f2:
    if (c.tracing) c.traceAt(0x150f2);
    // 1501:00e2  mov al, byte ptr cs:[si]  [x48]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:00e5  out dx, al  [x48]
    c.ip = 0xe6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00e6  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:00e7  loop 0xe2  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L150f2;
L150f9:
    if (c.tracing) c.traceAt(0x150f9);
    // 1501:00e9  mov byte ptr cs:[0x49], 0  [x1]
    c.w8(c.csb + (uint16_t)(0x49u), 0x0u);
L150ff:
    if (c.tracing) c.traceAt(0x150ff);
    // 1501:00ef  mov dx, 0x3da  [x625]
    c.dx_.x = (uint16_t)(0x3dau);
L15102:
    if (c.tracing) c.traceAt(0x15102);
    // 1501:00f2  in al, dx  [x1984]
    c.ip = 0xf3u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15103:
    if (c.tracing) c.traceAt(0x15103);
    // 1501:00f3  test al, 8  [x2645]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:00f5  jne 0xf2  [x2645]
    if (!c.zf) goto L15102;
L15107:
    if (c.tracing) c.traceAt(0x15107);
    // 1501:00f7  in al, dx  [x29137]
    c.ip = 0xf8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15108:
    if (c.tracing) c.traceAt(0x15108);
    // 1501:00f8  test al, 8  [x38641]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:00fa  je 0xf7  [x38641]
    if (c.zf) goto L15107;
L1510c:
    if (c.tracing) c.traceAt(0x1510c);
    // 1501:00fc  cmp byte ptr cs:[0x49], 0  [x625]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x49u)), 0x0u, true);
    // 1501:0102  je 0x121  [x625]
    if (c.zf) goto L15131;
L15114:
    if (c.tracing) c.traceAt(0x15114);
    // 1501:0104  mov dx, 0x3c8  [x19]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0107  xor al, al  [x19]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0109  out dx, al  [x19]
    c.ip = 0x10au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:010a  inc dx  [x19]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:010b  mov cx, 0x30  [x19]
    c.c.x = (uint16_t)(0x30u);
    // 1501:010e  mov si, 0xb  [x19]
    c.si.x = (uint16_t)(0xbu);
L15121:
    if (c.tracing) c.traceAt(0x15121);
    // 1501:0111  mov al, byte ptr cs:[si]  [x912]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:0114  sub al, byte ptr cs:[0x49]  [x912]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(0x49u)), true));
    // 1501:0119  jns 0x11d  [x912]
    if (!c.sf) goto L1512d;
L1512b:
    if (c.tracing) c.traceAt(0x1512b);
    // 1501:011b  xor al, al  [x546]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1512d:
    if (c.tracing) c.traceAt(0x1512d);
    // 1501:011d  out dx, al  [x912]
    c.ip = 0x11eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:011e  inc si  [x912]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:011f  loop 0x111  [x912]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15121;
L15131:
    if (c.tracing) c.traceAt(0x15131);
    // 1501:0121  push es  [x625]
    c.push16(c.es);
    // 1501:0122  mov ax, word ptr cs:[0x4a]  [x625]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4au)));
    // 1501:0126  mov es, ax  [x625]
    c.loadEs(c.a.x);
    // 1501:0128  mov si, word ptr cs:[0x4c]  [x625]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4cu)));
    // 1501:012d  mov dx, word ptr es:[si]  [x625]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0130  pop es  [x625]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0131  push dx  [x625]
    c.push16(c.dx_.x);
    // 1501:0132  cmp dx, 0  [x625]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0135  je 0x157  [x625]
    if (c.zf) goto L15167;
L15147:
    if (c.tracing) c.traceAt(0x15147);
    // 1501:0137  mov ax, word ptr cs:[0x47]  [x27]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x47u)));
    // 1501:013b  cmp word ptr cs:[0x45], ax  [x27]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x45u)), c.a.x, true);
    // 1501:0140  jb 0x157  [x27]
    if (c.cf) goto L15167;
L15152:
    if (c.tracing) c.traceAt(0x15152);
    // 1501:0142  mov ax, word ptr cs:[0x45]  [x10]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x45u)));
    // 1501:0146  add ax, 0x14  [x10]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
    // 1501:0149  mov word ptr cs:[0x47], ax  [x10]
    c.w16(c.csb + (uint16_t)(0x47u), c.a.x);
    // 1501:014d  mov cx, 0x11  [x10]
    c.c.x = (uint16_t)(0x11u);
L15160:
    if (c.tracing) c.traceAt(0x15160);
    // 1501:0150  push cx  [x170]
    c.push16(c.c.x);
    // 1501:0151  call 0x27c  [x170]
    c.push16(0x154u); code_16(c, 0x1528cu); if (c.ip != 0x154u) c.badReturn(0x15161);
L15164:
    if (c.tracing) c.traceAt(0x15164);
    // 1501:0154  pop cx  [x170]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:0155  loop 0x150  [x170]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15160;
L15167:
    if (c.tracing) c.traceAt(0x15167);
    // 1501:0157  pop dx  [x625]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 1501:0158  inc word ptr cs:[0x45]  [x625]
    c.w16(c.csb + (uint16_t)(0x45u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x45u)), false));
    // 1501:015d  cmp word ptr cs:[0x45], 0x240  [x625]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x45u)), 0x240u, true);
    // 1501:0164  jb 0x170  [x625]
    if (c.cf) goto L15180;
L15176:
    if (c.tracing) c.traceAt(0x15176);
    // 1501:0166  cmp dx, 0  [x50]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0169  je 0x170  [x50]
    if (c.zf) goto L15180;
L1517b:
    if (c.tracing) c.traceAt(0x1517b);
    // 1501:016b  mov byte ptr [0x2b21], 1  [x3]
    c.w8(c.dsb + (uint16_t)(0x2b21u), 0x1u);
L15180:
    if (c.tracing) c.traceAt(0x15180);
    // 1501:0170  cmp byte ptr [0x2b21], 1  [x625]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2b21u)), 0x1u, true);
    // 1501:0175  jne 0x187  [x625]
    if (!c.zf) goto L15197;
L15187:
    if (c.tracing) c.traceAt(0x15187);
    // 1501:0177  add byte ptr cs:[0x49], 4  [x20]
    c.w8(c.csb + (uint16_t)(0x49u), c.add<8>(c.r8(c.csb + (uint16_t)(0x49u)), 0x4u, false));
    // 1501:017d  cmp byte ptr cs:[0x49], 0x50  [x20]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x49u)), 0x50u, true);
    // 1501:0183  jb 0x187  [x20]
    if (c.cf) goto L15197;
L15195:
    if (c.tracing) c.traceAt(0x15195);
    // 1501:0185  jmp 0x18a  [x1]
    goto L1519a;
L15197:
    if (c.tracing) c.traceAt(0x15197);
    // 1501:0187  jmp 0xef  [x624]
    goto L150ff;
L1519a:
    if (c.tracing) c.traceAt(0x1519a);
    // 1501:018a  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L1519b:
    if (c.tracing) c.traceAt(0x1519b);
    // 1501:018b  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:018d  mov cl, byte ptr [0x1c]  [x1]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1cu)));
    // 1501:0191  rol al, cl  [x1]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:0193  mov byte ptr cs:[0x3e], al  [x1]
    c.w8(c.csb + (uint16_t)(0x3eu), c.a.l);
    // 1501:0197  mov ax, word ptr [0x16]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16u)));
    // 1501:019a  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:019c  mov word ptr cs:[0x41], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x41u), c.a.x);
    // 1501:01a0  mov ax, word ptr [0x14]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x14u)));
    // 1501:01a3  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:01a5  shr ax, 3  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:01a8  mov word ptr cs:[0x43], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x43u), c.a.x);
    // 1501:01ac  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:01af  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L151c1:
    if (c.tracing) c.traceAt(0x151c1);
    // 1501:01b1  mov al, byte ptr [si + 0x30]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x30u)));
    // 1501:01b4  shr al, 2  [x48]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:01b7  mov byte ptr cs:[si + 0xb], al  [x48]
    c.w8(c.csb + (uint16_t)(c.si.x + 0xbu), c.a.l);
    // 1501:01bc  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:01bd  loop 0x1b1  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151c1;
L151cf:
    if (c.tracing) c.traceAt(0x151cf);
    // 1501:01bf  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L151d1:
    if (c.tracing) c.traceAt(0x151d1);
    // 1501:01c1  cmp byte ptr [si], 0x42  [x97]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x42u, true);
    // 1501:01c4  jne 0x1d8  [x97]
    if (!c.zf) goto L151e8;
L151d6:
    if (c.tracing) c.traceAt(0x151d6);
    // 1501:01c6  cmp byte ptr [si + 1], 0x4f  [x3]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)), 0x4fu, true);
    // 1501:01ca  jne 0x1d8  [x3]
    if (!c.zf) goto L151e8;
L151dc:
    if (c.tracing) c.traceAt(0x151dc);
    // 1501:01cc  cmp byte ptr [si + 2], 0x44  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x44u, true);
    // 1501:01d0  jne 0x1d8  [x1]
    if (!c.zf) goto L151e8;
L151e2:
    if (c.tracing) c.traceAt(0x151e2);
    // 1501:01d2  cmp byte ptr [si + 3], 0x59  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)), 0x59u, true);
    // 1501:01d6  je 0x1df  [x1]
    if (c.zf) goto L151ef;
L151e8:
    if (c.tracing) c.traceAt(0x151e8);
    // 1501:01d8  inc si  [x96]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:01d9  cmp si, 0x300  [x96]
    c.sub<16>(c.si.x, 0x300u, true);
    // 1501:01dd  jb 0x1c1  [x96]
    if (c.cf) goto L151d1;
L151ef:
    if (c.tracing) c.traceAt(0x151ef);
    // 1501:01df  mov ax, word ptr [si + 6]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6u)));
    // 1501:01e2  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:01e4  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:01e7  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, true));
    // 1501:01e9  mov word ptr cs:[0x3f], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x3fu), c.a.x);
    // 1501:01ed  mov word ptr cs:[0x3b], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x3bu), 0x0u);
    // 1501:01f4  mov ax, word ptr cs:[9]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:01f8  mov word ptr cs:[7], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.a.x);
L1520c:
    if (c.tracing) c.traceAt(0x1520c);
    // 1501:01fc  mov byte ptr cs:[0x3d], 1  [x200]
    c.w8(c.csb + (uint16_t)(0x3du), 0x1u);
L15212:
    if (c.tracing) c.traceAt(0x15212);
    // 1501:0202  mov dx, 0x3c4  [x800]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0205  mov al, 2  [x800]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0207  mov ah, byte ptr cs:[0x3d]  [x800]
    c.a.h = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3du)));
    // 1501:020c  out dx, ax  [x800]
    c.ip = 0x20du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:020d  call 0x237  [x800]
    c.push16(0x210u); code_16(c, 0x15247u); if (c.ip != 0x210u) c.badReturn(0x1521d);
L15220:
    if (c.tracing) c.traceAt(0x15220);
    // 1501:0210  rol byte ptr cs:[0x3d], 1  [x800]
    c.w8(c.csb + (uint16_t)(0x3du), c.rol<8>(c.r8(c.csb + (uint16_t)(0x3du)), (int)((0x1u) & 31), false));
    // 1501:0215  mov al, byte ptr cs:[0x3e]  [x800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3eu)));
    // 1501:0219  cmp byte ptr cs:[0x3d], al  [x800]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x3du)), c.a.l, true);
    // 1501:021e  jb 0x202  [x800]
    if (c.cf) goto L15212;
L15230:
    if (c.tracing) c.traceAt(0x15230);
    // 1501:0220  add word ptr cs:[7], 0x28  [x200]
    c.w16(c.csb + (uint16_t)(0x7u), c.add<16>(c.r16(c.csb + (uint16_t)(0x7u)), 0x28u, false));
    // 1501:0226  inc word ptr cs:[0x3b]  [x200]
    c.w16(c.csb + (uint16_t)(0x3bu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3bu)), false));
    // 1501:022b  mov ax, word ptr cs:[0x41]  [x200]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x41u)));
    // 1501:022f  cmp word ptr cs:[0x3b], ax  [x200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x3bu)), c.a.x, true);
    // 1501:0234  jb 0x1fc  [x200]
    if (c.cf) goto L1520c;
L15246:
    if (c.tracing) c.traceAt(0x15246);
    // 1501:0236  ret   [x1]
    c.ip = c.pop16(); return;
L15247:
    if (c.tracing) c.traceAt(0x15247);
    // 1501:0237  mov di, word ptr cs:[7]  [x800]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:023c  mov bp, di  [x800]
    c.bp.x = (uint16_t)(c.di.x);
    // 1501:023e  add bp, word ptr cs:[0x43]  [x800]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x43u)), true));
    // 1501:0243  mov dx, 0  [x800]
    c.dx_.x = (uint16_t)(0x0u);
L15256:
    if (c.tracing) c.traceAt(0x15256);
    // 1501:0246  mov al, byte ptr [si]  [x3017]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0248  xor ah, ah  [x3017]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:024a  cmp al, 0x80  [x3017]
    c.sub<8>(c.a.l, 0x80u, true);
    // 1501:024c  jb 0x264  [x3017]
    if (c.cf) goto L15274;
L1525e:
    if (c.tracing) c.traceAt(0x1525e);
    // 1501:024e  neg al  [x1842]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:0250  inc al  [x1842]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, false));
    // 1501:0252  mov cx, ax  [x1842]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0254  add dx, cx  [x1842]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:0256  mov al, byte ptr [si + 1]  [x1842]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
L15269:
    if (c.tracing) c.traceAt(0x15269);
    // 1501:0259  mov byte ptr es:[di], al  [x26921]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:025c  inc di  [x26921]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:025d  loop 0x259  [x26921]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15269;
L1526f:
    if (c.tracing) c.traceAt(0x1526f);
    // 1501:025f  add si, 2  [x1842]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:0262  jmp 0x277  [x1842]
    goto L15287;
L15274:
    if (c.tracing) c.traceAt(0x15274);
    // 1501:0264  mov cx, ax  [x1175]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0266  inc cx  [x1175]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:0267  add dx, cx  [x1175]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:0269  inc si  [x1175]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L1527a:
    if (c.tracing) c.traceAt(0x1527a);
    // 1501:026a  mov al, byte ptr [si]  [x5079]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:026c  cmp al, 0  [x5079]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:026e  je 0x273  [x5079]
    if (c.zf) goto L15283;
L15280:
    if (c.tracing) c.traceAt(0x15280);
    // 1501:0270  mov byte ptr es:[di], al  [x4234]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L15283:
    if (c.tracing) c.traceAt(0x15283);
    // 1501:0273  inc si  [x5079]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0274  inc di  [x5079]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:0275  loop 0x26a  [x5079]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1527a;
L15287:
    if (c.tracing) c.traceAt(0x15287);
    // 1501:0277  cmp di, bp  [x3017]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:0279  jb 0x246  [x3017]
    if (c.cf) goto L15256;
L1528b:
    if (c.tracing) c.traceAt(0x1528b);
    // 1501:027b  ret   [x800]
    c.ip = c.pop16(); return;
L1528c:
    if (c.tracing) c.traceAt(0x1528c);
    // 1501:027c  cmp word ptr [0x2b1f], 0x8000  [x170]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2b1fu)), 0x8000u, true);
    // 1501:0282  jne 0x285  [x170]
    if (!c.zf) goto L15295;
L15294:
    if (c.tracing) c.traceAt(0x15294);
    // 1501:0284  ret   [x17]
    c.ip = c.pop16(); return;
L15295:
    if (c.tracing) c.traceAt(0x15295);
    // 1501:0285  mov dx, 0x3c4  [x153]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0288  mov ax, 0xe02  [x153]
    c.a.x = (uint16_t)(0xe02u);
    // 1501:028b  out dx, ax  [x153]
    c.ip = 0x28cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:028c  mov di, word ptr [0x2b1f]  [x153]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2b1fu)));
    // 1501:0290  add di, word ptr [0x2b1d]  [x153]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x2b1du)), false));
    // 1501:0294  add di, 0x427  [x153]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x427u, false));
    // 1501:0298  mov si, word ptr [0x2b1b]  [x153]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2b1bu)));
    // 1501:029c  inc word ptr [0x2b1b]  [x153]
    c.w16(c.dsb + (uint16_t)(0x2b1bu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2b1bu)), false));
    // 1501:02a0  mov bl, byte ptr [si + 0x2a82]  [x153]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2a82u)));
    // 1501:02a4  xor bh, bh  [x153]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 1501:02a6  sub bl, 0x20  [x153]
    c.b.l = (uint8_t)(c.sub<8>(c.b.l, 0x20u, true));
L152b9:
    if (c.tracing) c.traceAt(0x152b9);
    // 1501:02a9  mov al, byte ptr [bx + 0x273a]  [x2142]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x273au)));
    // 1501:02ad  mov byte ptr es:[di], al  [x2142]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:02b0  add di, 0x28  [x2142]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:02b3  add bx, 0x3c  [x2142]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x3cu, false));
    // 1501:02b6  cmp bx, 0x348  [x2142]
    c.sub<16>(c.b.x, 0x348u, true);
    // 1501:02ba  jb 0x2a9  [x2142]
    if (c.cf) goto L152b9;
L152cc:
    if (c.tracing) c.traceAt(0x152cc);
    // 1501:02bc  inc word ptr [0x2b1d]  [x153]
    c.w16(c.dsb + (uint16_t)(0x2b1du), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2b1du)), false));
    // 1501:02c0  cmp word ptr [0x2b1d], 0x11  [x153]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2b1du)), 0x11u, true);
    // 1501:02c5  jb 0x2ef  [x153]
    if (c.cf) goto L152ff;
L152d7:
    if (c.tracing) c.traceAt(0x152d7);
    // 1501:02c7  mov word ptr [0x2b1d], 0  [x9]
    c.w16(c.dsb + (uint16_t)(0x2b1du), 0x0u);
    // 1501:02cd  add word ptr [0x2b1f], 0x230  [x9]
    c.w16(c.dsb + (uint16_t)(0x2b1fu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x2b1fu)), 0x230u, false));
    // 1501:02d3  cmp word ptr [0x2b1f], 0xd20  [x9]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2b1fu)), 0xd20u, true);
    // 1501:02d9  jne 0x2e1  [x9]
    if (!c.zf) goto L152f1;
L152eb:
    if (c.tracing) c.traceAt(0x152eb);
    // 1501:02db  add word ptr [0x2b1f], 0x230  [x1]
    c.w16(c.dsb + (uint16_t)(0x2b1fu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x2b1fu)), 0x230u, true));
L152f1:
    if (c.tracing) c.traceAt(0x152f1);
    // 1501:02e1  cmp word ptr [0x2b1f], 0x15e0  [x9]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2b1fu)), 0x15e0u, true);
    // 1501:02e7  jb 0x2ef  [x9]
    if (c.cf) goto L152ff;
L152f9:
    if (c.tracing) c.traceAt(0x152f9);
    // 1501:02e9  mov word ptr [0x2b1f], 0x8000  [x1]
    c.w16(c.dsb + (uint16_t)(0x2b1fu), 0x8000u);
L152ff:
    if (c.tracing) c.traceAt(0x152ff);
    // 1501:02ef  ret   [x153]
    c.ip = c.pop16(); return;
}

static Register reg_code_16(16, {0x15010, 0x1505e, 0x15075, 0x1507f, 0x1508b, 0x1508e, 0x15090, 0x15096, 0x1509f, 0x150b2, 0x150b4, 0x150be, 0x150c4, 0x150c5, 0x150c9, 0x150ca, 0x150ce, 0x150d0, 0x150e5, 0x150f2, 0x150f9, 0x150ff, 0x15102, 0x15103, 0x15107, 0x15108, 0x1510c, 0x15114, 0x15121, 0x1512b, 0x1512d, 0x15131, 0x15147, 0x15152, 0x15160, 0x15164, 0x15167, 0x15176, 0x1517b, 0x15180, 0x15187, 0x15195, 0x15197, 0x1519a, 0x1519b, 0x151c1, 0x151cf, 0x151d1, 0x151d6, 0x151dc, 0x151e2, 0x151e8, 0x151ef, 0x1520c, 0x15212, 0x15220, 0x15230, 0x15246, 0x15247, 0x15256, 0x1525e, 0x15269, 0x1526f, 0x15274, 0x1527a, 0x15280, 0x15283, 0x15287, 0x1528b, 0x1528c, 0x15294, 0x15295, 0x152b9, 0x152cc, 0x152d7, 0x152eb, 0x152f1, 0x152f9, 0x152ff}, code_16);

}  // namespace show
