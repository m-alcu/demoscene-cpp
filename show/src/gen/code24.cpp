// Part 23 (NOTJUST.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_24(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x150fc: goto L150fc;
    case 0x1510b: goto L1510b;
    case 0x15115: goto L15115;
    case 0x15118: goto L15118;
    case 0x1511a: goto L1511a;
    case 0x15120: goto L15120;
    case 0x15129: goto L15129;
    case 0x15138: goto L15138;
    case 0x1514a: goto L1514a;
    case 0x1515f: goto L1515f;
    case 0x15162: goto L15162;
    case 0x15163: goto L15163;
    case 0x15167: goto L15167;
    case 0x15168: goto L15168;
    case 0x1516c: goto L1516c;
    case 0x15174: goto L15174;
    case 0x15188: goto L15188;
    case 0x1518f: goto L1518f;
    case 0x15191: goto L15191;
    case 0x15195: goto L15195;
    case 0x15197: goto L15197;
    case 0x1519b: goto L1519b;
    case 0x1519d: goto L1519d;
    case 0x151be: goto L151be;
    case 0x151c5: goto L151c5;
    case 0x151cc: goto L151cc;
    case 0x151ce: goto L151ce;
    case 0x151d4: goto L151d4;
    case 0x151d8: goto L151d8;
    case 0x151de: goto L151de;
    case 0x151f6: goto L151f6;
    case 0x1521c: goto L1521c;
    case 0x15221: goto L15221;
    case 0x15258: goto L15258;
    case 0x15264: goto L15264;
    case 0x1526c: goto L1526c;
    case 0x1527a: goto L1527a;
    case 0x1527c: goto L1527c;
    case 0x1527f: goto L1527f;
    case 0x15280: goto L15280;
    case 0x152a6: goto L152a6;
    case 0x152b4: goto L152b4;
    case 0x152b6: goto L152b6;
    case 0x152bb: goto L152bb;
    case 0x152c1: goto L152c1;
    case 0x152c7: goto L152c7;
    case 0x152cd: goto L152cd;
    case 0x152d4: goto L152d4;
    case 0x152f1: goto L152f1;
    case 0x152f7: goto L152f7;
    case 0x15305: goto L15305;
    case 0x15315: goto L15315;
    case 0x1532b: goto L1532b;
    case 0x1532c: goto L1532c;
    case 0x1533b: goto L1533b;
    case 0x15343: goto L15343;
    case 0x1534e: goto L1534e;
    case 0x15354: goto L15354;
    case 0x15359: goto L15359;
    case 0x1535f: goto L1535f;
    case 0x15365: goto L15365;
    case 0x15368: goto L15368;
    case 0x1536c: goto L1536c;
    case 0x15370: goto L15370;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xec  [x1]
    goto L150fc;
L150fc:
    if (c.tracing) c.traceAt(0x150fc);
    // 1501:00ec  mov word ptr cs:[0xe8], cx  [x1]
    c.w16(c.csb + (uint16_t)(0xe8u), c.c.x);
    // 1501:00f1  mov word ptr cs:[0xea], dx  [x1]
    c.w16(c.csb + (uint16_t)(0xeau), c.dx_.x);
    // 1501:00f6  mov ax, 0x10  [x1]
    c.a.x = (uint16_t)(0x10u);
    // 1501:00f9  int 0x10  [x1]
    c.ip = 0xfbu; c.d32 = false; c.intr(0x10, 0xfbu);
L1510b:
    if (c.tracing) c.traceAt(0x1510b);
    // 1501:00fb  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00fe  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0100  out dx, al  [x1]
    c.ip = 0x101u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0101  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0102  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L15115:
    if (c.tracing) c.traceAt(0x15115);
    // 1501:0105  out dx, al  [x48]
    c.ip = 0x106u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0106  loop 0x105  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15115;
L15118:
    if (c.tracing) c.traceAt(0x15118);
    // 1501:0108  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1511a:
    if (c.tracing) c.traceAt(0x1511a);
    // 1501:010a  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:010c  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:010e  int 0x10  [x16]
    c.ip = 0x110u; c.d32 = false; c.intr(0x10, 0x110u);
L15120:
    if (c.tracing) c.traceAt(0x15120);
    // 1501:0110  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:0112  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:0114  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:0117  jne 0x10a  [x16]
    if (!c.zf) goto L1511a;
L15129:
    if (c.tracing) c.traceAt(0x15129);
    // 1501:0119  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:011c  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:011e  mov word ptr cs:[0xa], 0  [x1]
    c.w16(c.csb + (uint16_t)(0xau), 0x0u);
    // 1501:0125  call 0x270  [x1]
    c.push16(0x128u); code_24(c, 0x15280u); if (c.ip != 0x128u) c.badReturn(0x15135);
L15138:
    if (c.tracing) c.traceAt(0x15138);
    // 1501:0128  mov byte ptr cs:[0xc], 0x3f  [x1]
    c.w8(c.csb + (uint16_t)(0xcu), 0x3fu);
    // 1501:012e  mov byte ptr cs:[0xd], 0x28  [x1]
    c.w8(c.csb + (uint16_t)(0xdu), 0x28u);
    // 1501:0134  mov byte ptr cs:[0xe], 0x38  [x1]
    c.w8(c.csb + (uint16_t)(0xeu), 0x38u);
L1514a:
    if (c.tracing) c.traceAt(0x1514a);
    // 1501:013a  push es  [x1088]
    c.ip = 0x13au; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:013b  mov ax, word ptr cs:[0xe8]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xe8u)));
    // 1501:013f  mov es, ax  [x1088]
    c.loadEs(c.a.x);
    // 1501:0141  mov si, word ptr cs:[0xea]  [x1088]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xeau)));
    // 1501:0146  mov dx, word ptr es:[si]  [x1088]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0149  pop es  [x1088]
    c.loadEs((uint16_t)c.pop16());
    // 1501:014a  cmp dx, 0  [x1088]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:014d  je 0x13a  [x1088]
    if (c.zf) goto L1514a;
L1515f:
    if (c.tracing) c.traceAt(0x1515f);
    // 1501:014f  mov dx, 0x3da  [x353]
    c.dx_.x = (uint16_t)(0x3dau);
L15162:
    if (c.tracing) c.traceAt(0x15162);
    // 1501:0152  in al, dx  [x1126]
    c.ip = 0x153u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15163:
    if (c.tracing) c.traceAt(0x15163);
    // 1501:0153  test al, 8  [x1501]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0155  jne 0x152  [x1501]
    if (!c.zf) goto L15162;
L15167:
    if (c.tracing) c.traceAt(0x15167);
    // 1501:0157  in al, dx  [x16414]
    c.ip = 0x158u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15168:
    if (c.tracing) c.traceAt(0x15168);
    // 1501:0158  test al, 8  [x21768]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:015a  je 0x157  [x21768]
    if (c.zf) goto L15167;
L1516c:
    if (c.tracing) c.traceAt(0x1516c);
    // 1501:015c  cmp byte ptr cs:[0xe7], 0  [x353]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xe7u)), 0x0u, true);
    // 1501:0162  jne 0x18d  [x353]
    if (!c.zf) goto L1519d;
L15174:
    if (c.tracing) c.traceAt(0x15174);
    // 1501:0164  mov dx, 0x3c8  [x338]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0167  mov al, byte ptr cs:[0xe6]  [x338]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xe6u)));
    // 1501:016b  out dx, al  [x338]
    c.ip = 0x16cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:016c  inc dx  [x338]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:016d  mov bl, byte ptr cs:[0xe3]  [x338]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xe3u)));
    // 1501:0172  mov cx, 3  [x338]
    c.c.x = (uint16_t)(0x3u);
    // 1501:0175  mov si, 0xc  [x338]
    c.si.x = (uint16_t)(0xcu);
L15188:
    if (c.tracing) c.traceAt(0x15188);
    // 1501:0178  mov al, byte ptr cs:[si]  [x1014]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:017b  sub al, bl  [x1014]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:017d  jns 0x181  [x1014]
    if (!c.sf) goto L15191;
L1518f:
    if (c.tracing) c.traceAt(0x1518f);
    // 1501:017f  xor al, al  [x39]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15191:
    if (c.tracing) c.traceAt(0x15191);
    // 1501:0181  cmp al, 0x3f  [x1014]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0183  jl 0x187  [x1014]
    if ((c.sf != c.of)) goto L15197;
L15195:
    if (c.tracing) c.traceAt(0x15195);
    // 1501:0185  mov al, 0x3f  [x21]
    c.a.l = (uint8_t)(0x3fu);
L15197:
    if (c.tracing) c.traceAt(0x15197);
    // 1501:0187  out dx, al  [x1014]
    c.ip = 0x188u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0188  inc si  [x1014]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0189  loop 0x178  [x1014]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15188;
L1519b:
    if (c.tracing) c.traceAt(0x1519b);
    // 1501:018b  jmp 0x1ce  [x338]
    goto L151de;
L1519d:
    if (c.tracing) c.traceAt(0x1519d);
    // 1501:018d  mov byte ptr cs:[0xc], 0x3f  [x15]
    c.w8(c.csb + (uint16_t)(0xcu), 0x3fu);
    // 1501:0193  mov byte ptr cs:[0xd], 0x28  [x15]
    c.w8(c.csb + (uint16_t)(0xdu), 0x28u);
    // 1501:0199  mov byte ptr cs:[0xe], 0x38  [x15]
    c.w8(c.csb + (uint16_t)(0xeu), 0x38u);
    // 1501:019f  mov dx, 0x3c8  [x15]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:01a2  mov al, 1  [x15]
    c.a.l = (uint8_t)(0x1u);
    // 1501:01a4  out dx, al  [x15]
    c.ip = 0x1a5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01a5  inc dx  [x15]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:01a6  mov bl, byte ptr cs:[0xe3]  [x15]
    c.b.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0xe3u)));
    // 1501:01ab  mov cx, 5  [x15]
    c.c.x = (uint16_t)(0x5u);
L151be:
    if (c.tracing) c.traceAt(0x151be);
    // 1501:01ae  push cx  [x75]
    c.push16(c.c.x);
    // 1501:01af  mov cx, 3  [x75]
    c.c.x = (uint16_t)(0x3u);
    // 1501:01b2  mov si, 0xc  [x75]
    c.si.x = (uint16_t)(0xcu);
L151c5:
    if (c.tracing) c.traceAt(0x151c5);
    // 1501:01b5  mov al, byte ptr cs:[si]  [x225]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:01b8  sub al, bl  [x225]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:01ba  jns 0x1be  [x225]
    if (!c.sf) goto L151ce;
L151cc:
    if (c.tracing) c.traceAt(0x151cc);
    // 1501:01bc  xor al, al  [x56]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L151ce:
    if (c.tracing) c.traceAt(0x151ce);
    // 1501:01be  cmp al, 0x3f  [x225]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:01c0  jl 0x1c4  [x225]
    if ((c.sf != c.of)) goto L151d4;
    c.notTranslated(0x151d2, "fall-through");
L151d4:
    if (c.tracing) c.traceAt(0x151d4);
    // 1501:01c4  out dx, al  [x225]
    c.ip = 0x1c5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:01c5  inc si  [x225]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:01c6  loop 0x1b5  [x225]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151c5;
L151d8:
    if (c.tracing) c.traceAt(0x151d8);
    // 1501:01c8  sub bl, 4  [x75]
    c.b.l = (uint8_t)(c.sub<8>(c.b.l, 0x4u, true));
    // 1501:01cb  pop cx  [x75]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:01cc  loop 0x1ae  [x75]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151be;
L151de:
    if (c.tracing) c.traceAt(0x151de);
    // 1501:01ce  push es  [x353]
    c.push16(c.es);
    // 1501:01cf  mov ax, word ptr cs:[0xe8]  [x353]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xe8u)));
    // 1501:01d3  mov es, ax  [x353]
    c.loadEs(c.a.x);
    // 1501:01d5  mov si, word ptr cs:[0xea]  [x353]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xeau)));
    // 1501:01da  mov dx, word ptr es:[si]  [x353]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:01dd  pop es  [x353]
    c.loadEs((uint16_t)c.pop16());
    // 1501:01de  cmp byte ptr cs:[0xe7], 0  [x353]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xe7u)), 0x0u, true);
    // 1501:01e4  jne 0x254  [x353]
    if (!c.zf) goto L15264;
L151f6:
    if (c.tracing) c.traceAt(0x151f6);
    // 1501:01e6  mov si, word ptr cs:[0x48]  [x338]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x48u)));
    // 1501:01eb  inc word ptr cs:[0x48]  [x338]
    c.w16(c.csb + (uint16_t)(0x48u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x48u)), false));
    // 1501:01f0  mov al, byte ptr cs:[si + 0x4a]  [x338]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x4au)));
    // 1501:01f5  shl al, 2  [x338]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x2u) & 31), false));
    // 1501:01f8  mov byte ptr cs:[0xe3], al  [x338]
    c.w8(c.csb + (uint16_t)(0xe3u), c.a.l);
    // 1501:01fc  inc word ptr cs:[0x44]  [x338]
    c.w16(c.csb + (uint16_t)(0x44u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x44u)), false));
    // 1501:0201  mov ax, word ptr cs:[0x46]  [x338]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x46u)));
    // 1501:0205  cmp word ptr cs:[0x44], ax  [x338]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x44u)), c.a.x, true);
    // 1501:020a  jb 0x254  [x338]
    if (c.cf) goto L15264;
L1521c:
    if (c.tracing) c.traceAt(0x1521c);
    // 1501:020c  cmp dx, 0  [x135]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:020f  je 0x254  [x135]
    if (c.zf) goto L15264;
L15221:
    if (c.tracing) c.traceAt(0x15221);
    // 1501:0211  mov ax, word ptr cs:[0x44]  [x5]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x44u)));
    // 1501:0215  add ax, 0x30  [x5]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x30u, false));
    // 1501:0218  mov word ptr cs:[0x46], ax  [x5]
    c.w16(c.csb + (uint16_t)(0x46u), c.a.x);
    // 1501:021c  mov word ptr cs:[0x48], 0  [x5]
    c.w16(c.csb + (uint16_t)(0x48u), 0x0u);
    // 1501:0223  inc byte ptr cs:[0xe6]  [x5]
    c.w8(c.csb + (uint16_t)(0xe6u), c.inc<8>(c.r8(c.csb + (uint16_t)(0xe6u)), false));
    // 1501:0228  mov byte ptr cs:[0xe3], 0x40  [x5]
    c.w8(c.csb + (uint16_t)(0xe3u), 0x40u);
    // 1501:022e  add byte ptr cs:[0xc], 3  [x5]
    c.w8(c.csb + (uint16_t)(0xcu), c.add<8>(c.r8(c.csb + (uint16_t)(0xcu)), 0x3u, false));
    // 1501:0234  add byte ptr cs:[0xd], 3  [x5]
    c.w8(c.csb + (uint16_t)(0xdu), c.add<8>(c.r8(c.csb + (uint16_t)(0xdu)), 0x3u, false));
    // 1501:023a  add byte ptr cs:[0xe], 3  [x5]
    c.w8(c.csb + (uint16_t)(0xeu), c.add<8>(c.r8(c.csb + (uint16_t)(0xeu)), 0x3u, false));
    // 1501:0240  cmp byte ptr cs:[0xe6], 6  [x5]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xe6u)), 0x6u, true);
    // 1501:0246  jb 0x254  [x5]
    if (c.cf) goto L15264;
L15258:
    if (c.tracing) c.traceAt(0x15258);
    // 1501:0248  mov byte ptr cs:[0xe7], 1  [x1]
    c.w8(c.csb + (uint16_t)(0xe7u), 0x1u);
    // 1501:024e  mov byte ptr cs:[0xe3], 0x24  [x1]
    c.w8(c.csb + (uint16_t)(0xe3u), 0x24u);
L15264:
    if (c.tracing) c.traceAt(0x15264);
    // 1501:0254  cmp byte ptr cs:[0xe7], 0  [x353]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xe7u)), 0x0u, true);
    // 1501:025a  je 0x26c  [x353]
    if (c.zf) goto L1527c;
L1526c:
    if (c.tracing) c.traceAt(0x1526c);
    // 1501:025c  add byte ptr cs:[0xe3], 2  [x16]
    c.w8(c.csb + (uint16_t)(0xe3u), c.add<8>(c.r8(c.csb + (uint16_t)(0xe3u)), 0x2u, false));
    // 1501:0262  cmp byte ptr cs:[0xe3], 0x44  [x16]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0xe3u)), 0x44u, true);
    // 1501:0268  jb 0x26c  [x16]
    if (c.cf) goto L1527c;
L1527a:
    if (c.tracing) c.traceAt(0x1527a);
    // 1501:026a  jmp 0x26f  [x1]
    goto L1527f;
L1527c:
    if (c.tracing) c.traceAt(0x1527c);
    // 1501:026c  jmp 0x14f  [x352]
    goto L1515f;
L1527f:
    if (c.tracing) c.traceAt(0x1527f);
    // 1501:026f  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L15280:
    if (c.tracing) c.traceAt(0x15280);
    // 1501:0270  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:0272  mov cl, byte ptr [0x1c]  [x1]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1cu)));
    // 1501:0276  rol al, cl  [x1]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:0278  mov byte ptr cs:[0x3d], al  [x1]
    c.w8(c.csb + (uint16_t)(0x3du), c.a.l);
    // 1501:027c  mov ax, word ptr [0x16]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16u)));
    // 1501:027f  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:0281  mov word ptr cs:[0x40], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x40u), c.a.x);
    // 1501:0285  mov ax, word ptr [0x14]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x14u)));
    // 1501:0288  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:028a  shr ax, 3  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:028d  mov word ptr cs:[0x42], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x42u), c.a.x);
    // 1501:0291  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:0294  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L152a6:
    if (c.tracing) c.traceAt(0x152a6);
    // 1501:0296  mov al, byte ptr [si + 0x30]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x30u)));
    // 1501:0299  shr al, 2  [x48]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:029c  mov byte ptr cs:[si + 0xc], al  [x48]
    c.w8(c.csb + (uint16_t)(c.si.x + 0xcu), c.a.l);
    // 1501:02a1  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:02a2  loop 0x296  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L152a6;
L152b4:
    if (c.tracing) c.traceAt(0x152b4);
    // 1501:02a4  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L152b6:
    if (c.tracing) c.traceAt(0x152b6);
    // 1501:02a6  cmp byte ptr [si], 0x42  [x97]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x42u, true);
    // 1501:02a9  jne 0x2bd  [x97]
    if (!c.zf) goto L152cd;
L152bb:
    if (c.tracing) c.traceAt(0x152bb);
    // 1501:02ab  cmp byte ptr [si + 1], 0x4f  [x3]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)), 0x4fu, true);
    // 1501:02af  jne 0x2bd  [x3]
    if (!c.zf) goto L152cd;
L152c1:
    if (c.tracing) c.traceAt(0x152c1);
    // 1501:02b1  cmp byte ptr [si + 2], 0x44  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x44u, true);
    // 1501:02b5  jne 0x2bd  [x1]
    if (!c.zf) goto L152cd;
L152c7:
    if (c.tracing) c.traceAt(0x152c7);
    // 1501:02b7  cmp byte ptr [si + 3], 0x59  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)), 0x59u, true);
    // 1501:02bb  je 0x2c4  [x1]
    if (c.zf) goto L152d4;
L152cd:
    if (c.tracing) c.traceAt(0x152cd);
    // 1501:02bd  inc si  [x96]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:02be  cmp si, 0x300  [x96]
    c.sub<16>(c.si.x, 0x300u, true);
    // 1501:02c2  jb 0x2a6  [x96]
    if (c.cf) goto L152b6;
L152d4:
    if (c.tracing) c.traceAt(0x152d4);
    // 1501:02c4  mov ax, word ptr [si + 6]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6u)));
    // 1501:02c7  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:02c9  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:02cc  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, true));
    // 1501:02ce  mov word ptr cs:[0x3e], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x3eu), c.a.x);
    // 1501:02d2  mov word ptr cs:[0xe4], 0  [x1]
    c.w16(c.csb + (uint16_t)(0xe4u), 0x0u);
    // 1501:02d9  mov ax, word ptr cs:[0xa]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0xau)));
    // 1501:02dd  mov word ptr cs:[8], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x8u), c.a.x);
L152f1:
    if (c.tracing) c.traceAt(0x152f1);
    // 1501:02e1  mov byte ptr cs:[0x3c], 1  [x350]
    c.w8(c.csb + (uint16_t)(0x3cu), 0x1u);
L152f7:
    if (c.tracing) c.traceAt(0x152f7);
    // 1501:02e7  mov dx, 0x3c4  [x1400]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:02ea  mov al, 2  [x1400]
    c.a.l = (uint8_t)(0x2u);
    // 1501:02ec  mov ah, byte ptr cs:[0x3c]  [x1400]
    c.a.h = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3cu)));
    // 1501:02f1  out dx, ax  [x1400]
    c.ip = 0x2f2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:02f2  call 0x31c  [x1400]
    c.push16(0x2f5u); code_24(c, 0x1532cu); if (c.ip != 0x2f5u) c.badReturn(0x15302);
L15305:
    if (c.tracing) c.traceAt(0x15305);
    // 1501:02f5  rol byte ptr cs:[0x3c], 1  [x1400]
    c.w8(c.csb + (uint16_t)(0x3cu), c.rol<8>(c.r8(c.csb + (uint16_t)(0x3cu)), (int)((0x1u) & 31), false));
    // 1501:02fa  mov al, byte ptr cs:[0x3d]  [x1400]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3du)));
    // 1501:02fe  cmp byte ptr cs:[0x3c], al  [x1400]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x3cu)), c.a.l, true);
    // 1501:0303  jb 0x2e7  [x1400]
    if (c.cf) goto L152f7;
L15315:
    if (c.tracing) c.traceAt(0x15315);
    // 1501:0305  add word ptr cs:[8], 0x50  [x350]
    c.w16(c.csb + (uint16_t)(0x8u), c.add<16>(c.r16(c.csb + (uint16_t)(0x8u)), 0x50u, false));
    // 1501:030b  inc word ptr cs:[0xe4]  [x350]
    c.w16(c.csb + (uint16_t)(0xe4u), c.inc<16>(c.r16(c.csb + (uint16_t)(0xe4u)), false));
    // 1501:0310  mov ax, word ptr cs:[0x40]  [x350]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x40u)));
    // 1501:0314  cmp word ptr cs:[0xe4], ax  [x350]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0xe4u)), c.a.x, true);
    // 1501:0319  jb 0x2e1  [x350]
    if (c.cf) goto L152f1;
L1532b:
    if (c.tracing) c.traceAt(0x1532b);
    // 1501:031b  ret   [x1]
    c.ip = c.pop16(); return;
L1532c:
    if (c.tracing) c.traceAt(0x1532c);
    // 1501:031c  mov di, word ptr cs:[8]  [x1400]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:0321  mov bp, di  [x1400]
    c.bp.x = (uint16_t)(c.di.x);
    // 1501:0323  add bp, word ptr cs:[0x42]  [x1400]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x42u)), true));
    // 1501:0328  mov dx, 0  [x1400]
    c.dx_.x = (uint16_t)(0x0u);
L1533b:
    if (c.tracing) c.traceAt(0x1533b);
    // 1501:032b  mov al, byte ptr [si]  [x3275]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:032d  xor ah, ah  [x3275]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:032f  cmp al, 0x80  [x3275]
    c.sub<8>(c.a.l, 0x80u, true);
    // 1501:0331  jb 0x349  [x3275]
    if (c.cf) goto L15359;
L15343:
    if (c.tracing) c.traceAt(0x15343);
    // 1501:0333  neg al  [x2374]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:0335  inc al  [x2374]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, false));
    // 1501:0337  mov cx, ax  [x2374]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0339  add dx, cx  [x2374]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:033b  mov al, byte ptr [si + 1]  [x2374]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
L1534e:
    if (c.tracing) c.traceAt(0x1534e);
    // 1501:033e  mov byte ptr es:[di], al  [x103451]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:0341  inc di  [x103451]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:0342  loop 0x33e  [x103451]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1534e;
L15354:
    if (c.tracing) c.traceAt(0x15354);
    // 1501:0344  add si, 2  [x2374]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:0347  jmp 0x35c  [x2374]
    goto L1536c;
L15359:
    if (c.tracing) c.traceAt(0x15359);
    // 1501:0349  mov cx, ax  [x901]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:034b  inc cx  [x901]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:034c  add dx, cx  [x901]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:034e  inc si  [x901]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L1535f:
    if (c.tracing) c.traceAt(0x1535f);
    // 1501:034f  mov al, byte ptr [si]  [x8549]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0351  cmp al, 0  [x8549]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:0353  je 0x358  [x8549]
    if (c.zf) goto L15368;
L15365:
    if (c.tracing) c.traceAt(0x15365);
    // 1501:0355  mov byte ptr es:[di], al  [x7214]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L15368:
    if (c.tracing) c.traceAt(0x15368);
    // 1501:0358  inc si  [x8549]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0359  inc di  [x8549]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:035a  loop 0x34f  [x8549]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1535f;
L1536c:
    if (c.tracing) c.traceAt(0x1536c);
    // 1501:035c  cmp di, bp  [x3275]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:035e  jb 0x32b  [x3275]
    if (c.cf) goto L1533b;
L15370:
    if (c.tracing) c.traceAt(0x15370);
    // 1501:0360  ret   [x1400]
    c.ip = c.pop16(); return;
}

static Register reg_code_24(24, {0x15010, 0x150fc, 0x1510b, 0x15115, 0x15118, 0x1511a, 0x15120, 0x15129, 0x15138, 0x1514a, 0x1515f, 0x15162, 0x15163, 0x15167, 0x15168, 0x1516c, 0x15174, 0x15188, 0x1518f, 0x15191, 0x15195, 0x15197, 0x1519b, 0x1519d, 0x151be, 0x151c5, 0x151cc, 0x151ce, 0x151d4, 0x151d8, 0x151de, 0x151f6, 0x1521c, 0x15221, 0x15258, 0x15264, 0x1526c, 0x1527a, 0x1527c, 0x1527f, 0x15280, 0x152a6, 0x152b4, 0x152b6, 0x152bb, 0x152c1, 0x152c7, 0x152cd, 0x152d4, 0x152f1, 0x152f7, 0x15305, 0x15315, 0x1532b, 0x1532c, 0x1533b, 0x15343, 0x1534e, 0x15354, 0x15359, 0x1535f, 0x15365, 0x15368, 0x1536c, 0x15370}, code_24);

}  // namespace show
