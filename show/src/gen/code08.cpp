// Part 7 (1LAP.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_8(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501b: goto L1501b;
    case 0x1502a: goto L1502a;
    case 0x15038: goto L15038;
    case 0x1503e: goto L1503e;
    case 0x15047: goto L15047;
    case 0x15057: goto L15057;
    case 0x1506c: goto L1506c;
    case 0x15072: goto L15072;
    case 0x15073: goto L15073;
    case 0x15077: goto L15077;
    case 0x15078: goto L15078;
    case 0x1507c: goto L1507c;
    case 0x1507e: goto L1507e;
    case 0x15084: goto L15084;
    case 0x15095: goto L15095;
    case 0x1509b: goto L1509b;
    case 0x150d9: goto L150d9;
    case 0x150da: goto L150da;
    case 0x150de: goto L150de;
    case 0x150df: goto L150df;
    case 0x150e3: goto L150e3;
    case 0x150f9: goto L150f9;
    case 0x150fc: goto L150fc;
    case 0x150ff: goto L150ff;
    case 0x15107: goto L15107;
    case 0x1510c: goto L1510c;
    case 0x15114: goto L15114;
    case 0x15127: goto L15127;
    case 0x15133: goto L15133;
    case 0x15136: goto L15136;
    case 0x1513a: goto L1513a;
    case 0x1516e: goto L1516e;
    case 0x1516f: goto L1516f;
    case 0x15182: goto L15182;
    case 0x1519e: goto L1519e;
    case 0x151a4: goto L151a4;
    case 0x151a6: goto L151a6;
    case 0x151ad: goto L151ad;
    case 0x151ae: goto L151ae;
    case 0x151b9: goto L151b9;
    case 0x151bb: goto L151bb;
    case 0x151d1: goto L151d1;
    case 0x151d9: goto L151d9;
    case 0x151de: goto L151de;
    case 0x151e4: goto L151e4;
    case 0x151ed: goto L151ed;
    case 0x1520c: goto L1520c;
    case 0x1520f: goto L1520f;
    case 0x15211: goto L15211;
    case 0x1521c: goto L1521c;
    case 0x15224: goto L15224;
    case 0x1522c: goto L1522c;
    case 0x15237: goto L15237;
    case 0x1523a: goto L1523a;
    case 0x1523b: goto L1523b;
    case 0x1523f: goto L1523f;
    case 0x15240: goto L15240;
    case 0x15244: goto L15244;
    case 0x1524e: goto L1524e;
    case 0x15257: goto L15257;
    case 0x15259: goto L15259;
    case 0x15261: goto L15261;
    case 0x15266: goto L15266;
    case 0x1526d: goto L1526d;
    case 0x1526f: goto L1526f;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xb  [x1]
    goto L1501b;
L1501b:
    if (c.tracing) c.traceAt(0x1501b);
    // 1501:000b  mov word ptr cs:[7], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.c.x);
    // 1501:0010  mov word ptr cs:[9], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), c.dx_.x);
    // 1501:0015  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:0018  int 0x10  [x1]
    c.ip = 0x1au; c.d32 = false; c.intr(0x10, 0x1au);
L1502a:
    if (c.tracing) c.traceAt(0x1502a);
    // 1501:001a  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:001d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:001f  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0022  mov ax, 0x2813  [x1]
    c.a.x = (uint16_t)(0x2813u);
    // 1501:0025  out dx, ax  [x1]
    c.ip = 0x26u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0026  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15038:
    if (c.tracing) c.traceAt(0x15038);
    // 1501:0028  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:002a  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:002c  int 0x10  [x16]
    c.ip = 0x2eu; c.d32 = false; c.intr(0x10, 0x2eu);
L1503e:
    if (c.tracing) c.traceAt(0x1503e);
    // 1501:002e  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:0030  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:0032  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:0035  jne 0x28  [x16]
    if (!c.zf) goto L15038;
L15047:
    if (c.tracing) c.traceAt(0x15047);
    // 1501:0037  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:003a  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:003c  out dx, al  [x1]
    c.ip = 0x3du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:003d  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:003e  mov al, 0x1c  [x1]
    c.a.l = (uint8_t)(0x1cu);
    // 1501:0040  out dx, al  [x1]
    c.ip = 0x41u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0041  mov al, 0xa  [x1]
    c.a.l = (uint8_t)(0xau);
    // 1501:0043  out dx, al  [x1]
    c.ip = 0x44u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0044  mov al, 0x16  [x1]
    c.a.l = (uint8_t)(0x16u);
    // 1501:0046  out dx, al  [x1]
    c.ip = 0x47u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L15057:
    if (c.tracing) c.traceAt(0x15057);
    // 1501:0047  push es  [x184]
    c.ip = 0x47u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:0048  mov ax, word ptr cs:[7]  [x184]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:004c  mov es, ax  [x184]
    c.loadEs(c.a.x);
    // 1501:004e  mov si, word ptr cs:[9]  [x184]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:0053  mov dx, word ptr es:[si]  [x184]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0056  pop es  [x184]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0057  cmp dx, 0  [x184]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:005a  je 0x47  [x184]
    if (c.zf) goto L15057;
L1506c:
    if (c.tracing) c.traceAt(0x1506c);
    // 1501:005c  mov cx, 0x38  [x1]
    c.c.x = (uint16_t)(0x38u);
    // 1501:005f  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L15072:
    if (c.tracing) c.traceAt(0x15072);
    // 1501:0062  in al, dx  [x178]
    c.ip = 0x63u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15073:
    if (c.tracing) c.traceAt(0x15073);
    // 1501:0063  and al, 8  [x237]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0065  jne 0x62  [x237]
    if (!c.zf) goto L15072;
L15077:
    if (c.tracing) c.traceAt(0x15077);
    // 1501:0067  in al, dx  [x2591]
    c.ip = 0x68u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15078:
    if (c.tracing) c.traceAt(0x15078);
    // 1501:0068  and al, 8  [x3436]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:006a  je 0x67  [x3436]
    if (c.zf) goto L15077;
L1507c:
    if (c.tracing) c.traceAt(0x1507c);
    // 1501:006c  loop 0x62  [x56]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15072;
L1507e:
    if (c.tracing) c.traceAt(0x1507e);
    // 1501:006e  mov word ptr [0x9cc], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x9ccu), 0x0u);
L15084:
    if (c.tracing) c.traceAt(0x15084);
    // 1501:0074  mov si, word ptr [0x9cc]  [x145]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x9ccu)));
    // 1501:0078  add word ptr [0x9cc], 0xa  [x145]
    c.w16(c.dsb + (uint16_t)(0x9ccu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x9ccu)), 0xau, false));
    // 1501:007d  cmp word ptr [0x9cc], 0x5a0  [x145]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x9ccu)), 0x5a0u, true);
    // 1501:0083  jb 0x8b  [x145]
    if (c.cf) goto L1509b;
L15095:
    if (c.tracing) c.traceAt(0x15095);
    // 1501:0085  sub word ptr [0x9cc], 0x5a0  [x1]
    c.w16(c.dsb + (uint16_t)(0x9ccu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x9ccu)), 0x5a0u, true));
L1509b:
    if (c.tracing) c.traceAt(0x1509b);
    // 1501:008b  mov bp, 0x8000  [x145]
    c.bp.x = (uint16_t)(0x8000u);
    // 1501:008e  mov ax, word ptr [si + 0x42a]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x42au)));
    // 1501:0092  imul word ptr [0x9ce]  [x145]
    c.imul16(c.r16(c.dsb + (uint16_t)(0x9ceu)));
    // 1501:0096  idiv bp  [x145]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0x96u); }   // #DE: int 0, then again
    // 1501:0098  add ax, 0xa0  [x145]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 1501:009b  mov cx, ax  [x145]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:009d  mov word ptr [0x9d0], ax  [x145]
    c.w16(c.dsb + (uint16_t)(0x9d0u), c.a.x);
    // 1501:00a0  mov ax, word ptr [si + 0x2c2]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x2c2u)));
    // 1501:00a4  imul word ptr [0x9ce]  [x145]
    c.imul16(c.r16(c.dsb + (uint16_t)(0x9ceu)));
    // 1501:00a8  idiv bp  [x145]
    while (!c.idiv16(c.bp.x)) { c.d32 = false; c.intr(0, 0xa8u); }   // #DE: int 0, then again
    // 1501:00aa  add ax, 0xc8  [x145]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xc8u, false));
    // 1501:00ad  mov dx, ax  [x145]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:00af  shr cx, 3  [x145]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x3u) & 31), false));
    // 1501:00b2  mov ax, 0x50  [x145]
    c.a.x = (uint16_t)(0x50u);
    // 1501:00b5  mul dx  [x145]
    c.mul16(c.dx_.x);
    // 1501:00b7  add cx, ax  [x145]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, true));
    // 1501:00b9  mov dx, 0x3d4  [x145]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00bc  mov al, 0xc  [x145]
    c.a.l = (uint8_t)(0xcu);
    // 1501:00be  mov ah, ch  [x145]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:00c0  out dx, ax  [x145]
    c.ip = 0xc1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c1  mov al, 0xd  [x145]
    c.a.l = (uint8_t)(0xdu);
    // 1501:00c3  mov ah, cl  [x145]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:00c5  out dx, ax  [x145]
    c.ip = 0xc6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c6  mov dx, 0x3da  [x145]
    c.dx_.x = (uint16_t)(0x3dau);
L150d9:
    if (c.tracing) c.traceAt(0x150d9);
    // 1501:00c9  in al, dx  [x459]
    c.ip = 0xcau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150da:
    if (c.tracing) c.traceAt(0x150da);
    // 1501:00ca  and al, 8  [x612]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:00cc  jne 0xc9  [x612]
    if (!c.zf) goto L150d9;
L150de:
    if (c.tracing) c.traceAt(0x150de);
    // 1501:00ce  in al, dx  [x6763]
    c.ip = 0xcfu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150df:
    if (c.tracing) c.traceAt(0x150df);
    // 1501:00cf  and al, 8  [x8969]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:00d1  je 0xce  [x8969]
    if (c.zf) goto L150de;
L150e3:
    if (c.tracing) c.traceAt(0x150e3);
    // 1501:00d3  mov dx, 0x3c0  [x145]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:00d6  mov al, 0x33  [x145]
    c.a.l = (uint8_t)(0x33u);
    // 1501:00d8  out dx, al  [x145]
    c.ip = 0xd9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00d9  mov ax, word ptr [0x9d0]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x9d0u)));
    // 1501:00dc  and al, 7  [x145]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), true));
    // 1501:00de  out dx, al  [x145]
    c.ip = 0xdfu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00df  mov dx, 0x3c4  [x145]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00e2  mov ax, 0x102  [x145]
    c.a.x = (uint16_t)(0x102u);
    // 1501:00e5  out dx, ax  [x145]
    c.ip = 0xe6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00e6  call 0x126  [x145]
    c.push16(0xe9u); code_8(c, 0x15136u); if (c.ip != 0xe9u) c.badReturn(0x150f6);
L150f9:
    if (c.tracing) c.traceAt(0x150f9);
    // 1501:00e9  call 0x19e  [x145]
    c.push16(0xecu); code_8(c, 0x151aeu); if (c.ip != 0xecu) c.badReturn(0x150f9);
L150fc:
    if (c.tracing) c.traceAt(0x150fc);
    // 1501:00ec  call 0x15f  [x145]
    c.push16(0xefu); code_8(c, 0x1516fu); if (c.ip != 0xefu) c.badReturn(0x150fc);
L150ff:
    if (c.tracing) c.traceAt(0x150ff);
    // 1501:00ef  cmp word ptr [0x10], 0x12c  [x145]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x10u)), 0x12cu, true);
    // 1501:00f5  jbe 0xfc  [x145]
    if ((c.cf || c.zf)) goto L1510c;
L15107:
    if (c.tracing) c.traceAt(0x15107);
    // 1501:00f7  sub word ptr [0x10], 0x14  [x145]
    c.w16(c.dsb + (uint16_t)(0x10u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x10u)), 0x14u, false));
L1510c:
    if (c.tracing) c.traceAt(0x1510c);
    // 1501:00fc  cmp word ptr [0x10], 0x12c  [x145]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x10u)), 0x12cu, true);
    // 1501:0102  jne 0x117  [x145]
    if (!c.zf) goto L15127;
L15114:
    if (c.tracing) c.traceAt(0x15114);
    // 1501:0104  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0107  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 1501:0109  out dx, al  [x1]
    c.ip = 0x10au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:010a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:010b  mov al, 0x3c  [x1]
    c.a.l = (uint8_t)(0x3cu);
    // 1501:010d  out dx, al  [x1]
    c.ip = 0x10eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:010e  mov al, 0x2a  [x1]
    c.a.l = (uint8_t)(0x2au);
    // 1501:0110  out dx, al  [x1]
    c.ip = 0x111u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0111  mov al, 0x36  [x1]
    c.a.l = (uint8_t)(0x36u);
    // 1501:0113  out dx, al  [x1]
    c.ip = 0x114u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0114  jmp 0x21c  [x1]
    goto L1522c;
L15127:
    if (c.tracing) c.traceAt(0x15127);
    // 1501:0117  dec word ptr [0x9ce]  [x144]
    c.w16(c.dsb + (uint16_t)(0x9ceu), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x9ceu)), true));
    // 1501:011b  jns 0x123  [x144]
    if (!c.sf) goto L15133;
    c.notTranslated(0x1512d, "fall-through");
L15133:
    if (c.tracing) c.traceAt(0x15133);
    // 1501:0123  jmp 0x74  [x144]
    goto L15084;
L15136:
    if (c.tracing) c.traceAt(0x15136);
    // 1501:0126  xor bp, bp  [x145]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:0128  xor di, di  [x145]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1513a:
    if (c.tracing) c.traceAt(0x1513a);
    // 1501:012a  mov si, word ptr ds:[bp + 8]  [x290]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x8u)));
    // 1501:012f  mov bx, word ptr ds:[bp + 4]  [x290]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x4u)));
    // 1501:0134  mov cx, word ptr ds:[bp + 6]  [x290]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x6u)));
    // 1501:0139  add si, word ptr [0x10]  [x290]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x10u)), false));
    // 1501:013d  mov ax, 0x12c  [x290]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:0140  imul bx  [x290]
    c.imul16(c.b.x);
    // 1501:0142  idiv si  [x290]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x142u); }   // #DE: int 0, then again
    // 1501:0144  mov word ptr [di + 0x12], ax  [x290]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x12u), c.a.x);
    // 1501:0148  mov ax, 0x12c  [x290]
    c.a.x = (uint16_t)(0x12cu);
    // 1501:014b  imul cx  [x290]
    c.imul16(c.c.x);
    // 1501:014d  idiv si  [x290]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x14du); }   // #DE: int 0, then again
    // 1501:014f  mov word ptr [di + 0x16], ax  [x290]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x16u), c.a.x);
    // 1501:0153  add bp, 6  [x290]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0156  add di, 2  [x290]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0159  cmp di, 4  [x290]
    c.sub<16>(c.di.x, 0x4u, true);
    // 1501:015c  jne 0x12a  [x290]
    if (!c.zf) goto L1513a;
L1516e:
    if (c.tracing) c.traceAt(0x1516e);
    // 1501:015e  ret   [x145]
    c.ip = c.pop16(); return;
L1516f:
    if (c.tracing) c.traceAt(0x1516f);
    // 1501:015f  mov ax, word ptr [0x16]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16u)));
    // 1501:0162  add ax, 0x64  [x145]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 1501:0165  cmp ax, 0  [x145]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:0168  jns 0x172  [x145]
    if (!c.sf) goto L15182;
    c.notTranslated(0x1517a, "fall-through");
L15182:
    if (c.tracing) c.traceAt(0x15182);
    // 1501:0172  mov dx, 0x50  [x145]
    c.dx_.x = (uint16_t)(0x50u);
    // 1501:0175  mul dx  [x145]
    c.mul16(c.dx_.x);
    // 1501:0177  mov di, ax  [x145]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:0179  mov ax, word ptr [0x18]  [x145]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x18u)));
    // 1501:017c  add ax, 0x64  [x145]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 1501:017f  mov dx, 0x50  [x145]
    c.dx_.x = (uint16_t)(0x50u);
    // 1501:0182  mul dx  [x145]
    c.mul16(c.dx_.x);
    // 1501:0184  mov bp, ax  [x145]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:0186  add di, 0x3e94  [x145]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3e94u, false));
    // 1501:018a  add bp, 0x3e94  [x145]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x3e94u, true));
L1519e:
    if (c.tracing) c.traceAt(0x1519e);
    // 1501:018e  mov si, 0x29a  [x6874]
    c.si.x = (uint16_t)(0x29au);
    // 1501:0191  mov cx, 0x14  [x6874]
    c.c.x = (uint16_t)(0x14u);
L151a4:
    if (c.tracing) c.traceAt(0x151a4);
    // 1501:0194  rep movsw word ptr es:[di], word ptr [si]  [x144354]
    c.ip = 0x196u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L151a6:
    if (c.tracing) c.traceAt(0x151a6);
    // 1501:0196  add di, 0x28  [x6874]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, false));
    // 1501:0199  cmp di, bp  [x6874]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:019b  jb 0x18e  [x6874]
    if (c.cf) goto L1519e;
L151ad:
    if (c.tracing) c.traceAt(0x151ad);
    // 1501:019d  ret   [x145]
    c.ip = c.pop16(); return;
L151ae:
    if (c.tracing) c.traceAt(0x151ae);
    // 1501:019e  push es  [x145]
    c.push16(c.es);
    // 1501:019f  push ds  [x145]
    c.push16(c.ds);
    // 1501:01a0  pop es  [x145]
    c.loadEs((uint16_t)c.pop16());
    // 1501:01a1  mov di, 0x29a  [x145]
    c.di.x = (uint16_t)(0x29au);
    // 1501:01a4  mov cx, 0x14  [x145]
    c.c.x = (uint16_t)(0x14u);
    // 1501:01a7  xor ax, ax  [x145]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L151b9:
    if (c.tracing) c.traceAt(0x151b9);
    // 1501:01a9  rep stosw word ptr es:[di], ax  [x3045]
    c.stos<16, false>(1);
L151bb:
    if (c.tracing) c.traceAt(0x151bb);
    // 1501:01ab  mov di, word ptr [0x12]  [x145]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12u)));
    // 1501:01af  add di, 0xa0  [x145]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0xa0u, false));
    // 1501:01b3  mov si, word ptr [0x14]  [x145]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x14u)));
    // 1501:01b7  add si, 0xa0  [x145]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, false));
    // 1501:01bb  cmp di, si  [x145]
    c.sub<16>(c.di.x, c.si.x, true);
    // 1501:01bd  jbe 0x1c1  [x145]
    if ((c.cf || c.zf)) goto L151d1;
    c.notTranslated(0x151cf, "fall-through");
L151d1:
    if (c.tracing) c.traceAt(0x151d1);
    // 1501:01c1  cmp di, 0  [x145]
    c.sub<16>(c.di.x, 0x0u, true);
    // 1501:01c4  jge 0x1c9  [x145]
    if ((c.sf == c.of)) goto L151d9;
    c.notTranslated(0x151d6, "fall-through");
L151d9:
    if (c.tracing) c.traceAt(0x151d9);
    // 1501:01c9  cmp si, 0  [x145]
    c.sub<16>(c.si.x, 0x0u, true);
    // 1501:01cc  jle 0x214  [x145]
    if ((c.zf || c.sf != c.of)) goto L15224;
L151de:
    if (c.tracing) c.traceAt(0x151de);
    // 1501:01ce  cmp di, 0x13f  [x145]
    c.sub<16>(c.di.x, 0x13fu, true);
    // 1501:01d2  jae 0x214  [x145]
    if (!c.cf) goto L15224;
L151e4:
    if (c.tracing) c.traceAt(0x151e4);
    // 1501:01d4  cmp si, 0x140  [x145]
    c.sub<16>(c.si.x, 0x140u, true);
    // 1501:01d8  jb 0x1dd  [x145]
    if (c.cf) goto L151ed;
    c.notTranslated(0x151ea, "fall-through");
L151ed:
    if (c.tracing) c.traceAt(0x151ed);
    // 1501:01dd  mov cl, byte ptr [di + 0x1a]  [x145]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x1au)));
    // 1501:01e1  mov ch, byte ptr [si + 0x15a]  [x145]
    c.c.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x15au)));
    // 1501:01e5  push cx  [x145]
    c.push16(c.c.x);
    // 1501:01e6  sar si, 3  [x145]
    c.si.x = (uint16_t)(c.sar<16>(c.si.x, (int)((0x3u) & 31), false));
    // 1501:01e9  sar di, 3  [x145]
    c.di.x = (uint16_t)(c.sar<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:01ec  mov cx, si  [x145]
    c.c.x = (uint16_t)(c.si.x);
    // 1501:01ee  sub cx, di  [x145]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, false));
    // 1501:01f0  add di, 0x29a  [x145]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x29au, false));
    // 1501:01f4  push di  [x145]
    c.push16(c.di.x);
    // 1501:01f5  push cx  [x145]
    c.push16(c.c.x);
    // 1501:01f6  dec cx  [x145]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 1501:01f7  cmp cx, 0  [x145]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:01fa  jle 0x201  [x145]
    if ((c.zf || c.sf != c.of)) goto L15211;
L1520c:
    if (c.tracing) c.traceAt(0x1520c);
    // 1501:01fc  inc di  [x145]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:01fd  mov al, 0xff  [x145]
    c.a.l = (uint8_t)(0xffu);
L1520f:
    if (c.tracing) c.traceAt(0x1520f);
    // 1501:01ff  rep stosb byte ptr es:[di], al  [x1386]
    c.stos<8, false>(1);
L15211:
    if (c.tracing) c.traceAt(0x15211);
    // 1501:0201  pop cx  [x145]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:0202  pop di  [x145]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0203  pop ax  [x145]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0204  or cx, cx  [x145]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) | (c.c.x), true));
    // 1501:0206  jne 0x20c  [x145]
    if (!c.zf) goto L1521c;
    c.notTranslated(0x15218, "fall-through");
L1521c:
    if (c.tracing) c.traceAt(0x1521c);
    // 1501:020c  or byte ptr es:[di], al  [x145]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:020f  add di, cx  [x145]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.c.x, false));
    // 1501:0211  or byte ptr es:[di], ah  [x145]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.h), true));
L15224:
    if (c.tracing) c.traceAt(0x15224);
    // 1501:0214  pop es  [x145]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0215  ret   [x145]
    c.ip = c.pop16(); return;
L1522c:
    if (c.tracing) c.traceAt(0x1522c);
    // 1501:021c  mov dx, 0x3c0  [x1]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:021f  mov al, 0x33  [x1]
    c.a.l = (uint8_t)(0x33u);
    // 1501:0221  out dx, al  [x1]
    c.ip = 0x222u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0222  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0224  out dx, al  [x1]
    c.ip = 0x225u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0225  mov bl, 0x30  [x1]
    c.b.l = (uint8_t)(0x30u);
L15237:
    if (c.tracing) c.traceAt(0x15237);
    // 1501:0227  mov dx, 0x3da  [x25]
    c.dx_.x = (uint16_t)(0x3dau);
L1523a:
    if (c.tracing) c.traceAt(0x1523a);
    // 1501:022a  in al, dx  [x78]
    c.ip = 0x22bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1523b:
    if (c.tracing) c.traceAt(0x1523b);
    // 1501:022b  and al, 8  [x104]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:022d  jne 0x22a  [x104]
    if (!c.zf) goto L1523a;
L1523f:
    if (c.tracing) c.traceAt(0x1523f);
    // 1501:022f  in al, dx  [x1168]
    c.ip = 0x230u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15240:
    if (c.tracing) c.traceAt(0x15240);
    // 1501:0230  and al, 8  [x1549]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0232  je 0x22f  [x1549]
    if (c.zf) goto L1523f;
L15244:
    if (c.tracing) c.traceAt(0x15244);
    // 1501:0234  mov dx, 0x3c8  [x25]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0237  xor al, al  [x25]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0239  out dx, al  [x25]
    c.ip = 0x23au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:023a  inc dx  [x25]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:023b  mov si, 0x216  [x25]
    c.si.x = (uint16_t)(0x216u);
L1524e:
    if (c.tracing) c.traceAt(0x1524e);
    // 1501:023e  mov al, byte ptr cs:[si]  [x450]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:0241  add al, bl  [x450]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 1501:0243  cmp al, 0x3f  [x450]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:0245  jb 0x249  [x450]
    if (c.cf) goto L15259;
L15257:
    if (c.tracing) c.traceAt(0x15257);
    // 1501:0247  mov al, 0x3f  [x244]
    c.a.l = (uint8_t)(0x3fu);
L15259:
    if (c.tracing) c.traceAt(0x15259);
    // 1501:0249  out dx, al  [x450]
    c.ip = 0x24au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:024a  inc si  [x450]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:024b  cmp si, 0x228  [x450]
    c.sub<16>(c.si.x, 0x228u, true);
    // 1501:024f  jb 0x23e  [x450]
    if (c.cf) goto L1524e;
L15261:
    if (c.tracing) c.traceAt(0x15261);
    // 1501:0251  sub bl, 2  [x25]
    c.b.l = (uint8_t)(c.sub<8>(c.b.l, 0x2u, true));
    // 1501:0254  jns 0x227  [x25]
    if (!c.sf) goto L15237;
L15266:
    if (c.tracing) c.traceAt(0x15266);
    // 1501:0256  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:0258  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:025a  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
L1526d:
    if (c.tracing) c.traceAt(0x1526d);
    // 1501:025d  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L1526f:
    if (c.tracing) c.traceAt(0x1526f);
    // 1501:025f  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_8(8, {0x15010, 0x1501b, 0x1502a, 0x15038, 0x1503e, 0x15047, 0x15057, 0x1506c, 0x15072, 0x15073, 0x15077, 0x15078, 0x1507c, 0x1507e, 0x15084, 0x15095, 0x1509b, 0x150d9, 0x150da, 0x150de, 0x150df, 0x150e3, 0x150f9, 0x150fc, 0x150ff, 0x15107, 0x1510c, 0x15114, 0x15127, 0x15133, 0x15136, 0x1513a, 0x1516e, 0x1516f, 0x15182, 0x1519e, 0x151a4, 0x151a6, 0x151ad, 0x151ae, 0x151b9, 0x151bb, 0x151d1, 0x151d9, 0x151de, 0x151e4, 0x151ed, 0x1520c, 0x1520f, 0x15211, 0x1521c, 0x15224, 0x1522c, 0x15237, 0x1523a, 0x1523b, 0x1523f, 0x15240, 0x15244, 0x1524e, 0x15257, 0x15259, 0x15261, 0x15266, 0x1526d, 0x1526f}, code_8);

}  // namespace show
