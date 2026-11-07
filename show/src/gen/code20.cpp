// Part 19 (CIR.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_20(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501b: goto L1501b;
    case 0x15030: goto L15030;
    case 0x15032: goto L15032;
    case 0x15038: goto L15038;
    case 0x15041: goto L15041;
    case 0x15057: goto L15057;
    case 0x1505a: goto L1505a;
    case 0x15069: goto L15069;
    case 0x1506b: goto L1506b;
    case 0x1507a: goto L1507a;
    case 0x1507c: goto L1507c;
    case 0x1507f: goto L1507f;
    case 0x15082: goto L15082;
    case 0x15085: goto L15085;
    case 0x15098: goto L15098;
    case 0x1509b: goto L1509b;
    case 0x150a2: goto L150a2;
    case 0x150df: goto L150df;
    case 0x150e3: goto L150e3;
    case 0x150ea: goto L150ea;
    case 0x150ed: goto L150ed;
    case 0x150f4: goto L150f4;
    case 0x150f7: goto L150f7;
    case 0x150fa: goto L150fa;
    case 0x15101: goto L15101;
    case 0x15104: goto L15104;
    case 0x15107: goto L15107;
    case 0x15113: goto L15113;
    case 0x15118: goto L15118;
    case 0x15120: goto L15120;
    case 0x15122: goto L15122;
    case 0x15125: goto L15125;
    case 0x1514a: goto L1514a;
    case 0x1514c: goto L1514c;
    case 0x1515b: goto L1515b;
    case 0x1515d: goto L1515d;
    case 0x1516b: goto L1516b;
    case 0x1516d: goto L1516d;
    case 0x1516e: goto L1516e;
    case 0x15171: goto L15171;
    case 0x15176: goto L15176;
    case 0x15177: goto L15177;
    case 0x1517b: goto L1517b;
    case 0x1517c: goto L1517c;
    case 0x15186: goto L15186;
    case 0x15187: goto L15187;
    case 0x1518b: goto L1518b;
    case 0x15193: goto L15193;
    case 0x15198: goto L15198;
    case 0x151ba: goto L151ba;
    case 0x151bb: goto L151bb;
    case 0x151bf: goto L151bf;
    case 0x151c0: goto L151c0;
    case 0x15245: goto L15245;
    case 0x1524b: goto L1524b;
    case 0x15258: goto L15258;
    case 0x1525e: goto L1525e;
    case 0x1526b: goto L1526b;
    case 0x15271: goto L15271;
    case 0x1527e: goto L1527e;
    case 0x15284: goto L15284;
    case 0x15291: goto L15291;
    case 0x15297: goto L15297;
    case 0x152a4: goto L152a4;
    case 0x152aa: goto L152aa;
    case 0x1544d: goto L1544d;
    case 0x1545e: goto L1545e;
    case 0x15499: goto L15499;
    case 0x15503: goto L15503;
    case 0x1552b: goto L1552b;
    case 0x1553f: goto L1553f;
    case 0x15550: goto L15550;
    case 0x1558b: goto L1558b;
    case 0x155f5: goto L155f5;
    case 0x1561d: goto L1561d;
    case 0x1561f: goto L1561f;
    case 0x15628: goto L15628;
    case 0x1562e: goto L1562e;
    case 0x15662: goto L15662;
    case 0x1566f: goto L1566f;
    case 0x15671: goto L15671;
    case 0x1567e: goto L1567e;
    case 0x15680: goto L15680;
    case 0x15683: goto L15683;
    case 0x1568d: goto L1568d;
    case 0x15693: goto L15693;
    case 0x15699: goto L15699;
    case 0x1569d: goto L1569d;
    case 0x156a3: goto L156a3;
    case 0x156a4: goto L156a4;
    case 0x156b5: goto L156b5;
    case 0x156ba: goto L156ba;
    case 0x156bc: goto L156bc;
    case 0x156bf: goto L156bf;
    case 0x156cb: goto L156cb;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0xb  [x1]
    goto L1501b;
L1501b:
    if (c.tracing) c.traceAt(0x1501b);
    // 1501:000b  mov word ptr [0x6799], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x6799u), c.a.x);
    // 1501:000e  mov word ptr cs:[7], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.c.x);
    // 1501:0013  sub dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, true));
    // 1501:0016  mov word ptr cs:[9], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), c.dx_.x);
    // 1501:001b  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:001e  int 0x10  [x1]
    c.ip = 0x20u; c.d32 = false; c.intr(0x10, 0x20u);
L15030:
    if (c.tracing) c.traceAt(0x15030);
    // 1501:0020  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15032:
    if (c.tracing) c.traceAt(0x15032);
    // 1501:0022  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:0024  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:0026  int 0x10  [x16]
    c.ip = 0x28u; c.d32 = false; c.intr(0x10, 0x28u);
L15038:
    if (c.tracing) c.traceAt(0x15038);
    // 1501:0028  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:002a  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:002c  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:002f  jne 0x22  [x16]
    if (!c.zf) goto L15032;
L15041:
    if (c.tracing) c.traceAt(0x15041);
    // 1501:0031  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0034  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0036  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0039  mov ax, 0x1f13  [x1]
    c.a.x = (uint16_t)(0x1f13u);
    // 1501:003c  out dx, ax  [x1]
    c.ip = 0x3du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:003d  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0040  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0042  out dx, al  [x1]
    c.ip = 0x43u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0043  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0044  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L15057:
    if (c.tracing) c.traceAt(0x15057);
    // 1501:0047  out dx, al  [x48]
    c.ip = 0x48u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0048  loop 0x47  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15057;
L1505a:
    if (c.tracing) c.traceAt(0x1505a);
    // 1501:004a  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:004d  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:0050  out dx, ax  [x1]
    c.ip = 0x51u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0051  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:0054  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:0056  mov cx, 0x2e04  [x1]
    c.c.x = (uint16_t)(0x2e04u);
L15069:
    if (c.tracing) c.traceAt(0x15069);
    // 1501:0059  rep movsw word ptr es:[di], word ptr [si]  [x11781]
    c.ip = 0x5bu; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1506b:
    if (c.tracing) c.traceAt(0x1506b);
    // 1501:005b  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:005e  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:0061  out dx, ax  [x1]
    c.ip = 0x62u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0062  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:0064  mov cx, 0x2e04  [x1]
    c.c.x = (uint16_t)(0x2e04u);
    // 1501:0067  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
L1507a:
    if (c.tracing) c.traceAt(0x1507a);
    // 1501:006a  rep stosw word ptr es:[di], ax  [x11781]
    c.stos<16, false>(1);
L1507c:
    if (c.tracing) c.traceAt(0x1507c);
    // 1501:006c  call 0x60f  [x1]
    c.push16(0x6fu); code_20(c, 0x1561fu); if (c.ip != 0x6fu) c.badReturn(0x1507c);
L1507f:
    if (c.tracing) c.traceAt(0x1507f);
    // 1501:006f  call 0x1b0  [x1]
    c.push16(0x72u); code_20(c, 0x151c0u); if (c.ip != 0x72u) c.badReturn(0x1507f);
L15082:
    if (c.tracing) c.traceAt(0x15082);
    // 1501:0072  call 0x15e  [x1]
    c.push16(0x75u); code_20(c, 0x1516eu); if (c.ip != 0x75u) c.badReturn(0x15082);
L15085:
    if (c.tracing) c.traceAt(0x15085);
    // 1501:0075  push es  [x1]
    c.push16(c.es);
    // 1501:0076  mov ax, word ptr cs:[7]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:007a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:007c  mov si, word ptr cs:[9]  [x1]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:0081  mov ax, word ptr es:[si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:0084  mov word ptr [0x679e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x679eu), c.a.x);
    // 1501:0087  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L15098:
    if (c.tracing) c.traceAt(0x15098);
    // 1501:0088  call 0x16c  [x576]
    c.push16(0x8bu); code_20(c, 0x1517cu); if (c.ip != 0x8bu) c.badReturn(0x15098);
L1509b:
    if (c.tracing) c.traceAt(0x1509b);
    // 1501:008b  cmp word ptr [0x5c9a], 0x14  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x5c9au)), 0x14u, true);
    // 1501:0090  ja 0xd3  [x576]
    if ((!c.cf && !c.zf)) goto L150e3;
L150a2:
    if (c.tracing) c.traceAt(0x150a2);
    // 1501:0092  mov ax, word ptr [0x679e]  [x21]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x679eu)));
    // 1501:0095  mov word ptr [0x67a0], ax  [x21]
    c.w16(c.dsb + (uint16_t)(0x67a0u), c.a.x);
    // 1501:0098  push es  [x21]
    c.push16(c.es);
    // 1501:0099  mov bx, word ptr cs:[7]  [x21]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:009e  mov es, bx  [x21]
    c.loadEs(c.b.x);
    // 1501:00a0  mov si, word ptr cs:[9]  [x21]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:00a5  mov dx, word ptr es:[si]  [x21]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:00a8  mov word ptr [0x679e], dx  [x21]
    c.w16(c.dsb + (uint16_t)(0x679eu), c.dx_.x);
    // 1501:00ac  pop es  [x21]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00ad  sub dx, ax  [x21]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.a.x, false));
    // 1501:00af  cmp dx, 0x14  [x21]
    c.sub<16>(c.dx_.x, 0x14u, true);
    // 1501:00b2  jl 0xcf  [x21]
    if ((c.sf != c.of)) goto L150df;
    c.notTranslated(0x150c4, "fall-through");
L150df:
    if (c.tracing) c.traceAt(0x150df);
    // 1501:00cf  inc word ptr [0x5c9a]  [x21]
    c.w16(c.dsb + (uint16_t)(0x5c9au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x5c9au)), true));
L150e3:
    if (c.tracing) c.traceAt(0x150e3);
    // 1501:00d3  cmp word ptr [0x679c], 0x20  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x679cu)), 0x20u, true);
    // 1501:00d8  jae 0xdd  [x576]
    if (!c.cf) goto L150ed;
L150ea:
    if (c.tracing) c.traceAt(0x150ea);
    // 1501:00da  call 0x694  [x32]
    c.push16(0xddu); code_20(c, 0x156a4u); if (c.ip != 0xddu) c.badReturn(0x150ea);
L150ed:
    if (c.tracing) c.traceAt(0x150ed);
    // 1501:00dd  cmp byte ptr [0x679b], 0  [x576]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x679bu)), 0x0u, true);
    // 1501:00e2  je 0xe7  [x576]
    if (c.zf) goto L150f7;
L150f4:
    if (c.tracing) c.traceAt(0x150f4);
    // 1501:00e4  call 0x661  [x64]
    c.push16(0xe7u); code_20(c, 0x15671u); if (c.ip != 0xe7u) c.badReturn(0x150f4);
L150f7:
    if (c.tracing) c.traceAt(0x150f7);
    // 1501:00e7  call 0x43d  [x576]
    c.push16(0xeau); code_20(c, 0x1544du); if (c.ip != 0xeau) c.badReturn(0x150f7);
L150fa:
    if (c.tracing) c.traceAt(0x150fa);
    // 1501:00ea  cmp byte ptr [0x5c9c], 0  [x576]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x5c9cu)), 0x0u, true);
    // 1501:00ef  jne 0xf4  [x576]
    if (!c.zf) goto L15104;
L15101:
    if (c.tracing) c.traceAt(0x15101);
    // 1501:00f1  call 0x52f  [x576]
    c.push16(0xf4u); code_20(c, 0x1553fu); if (c.ip != 0xf4u) c.badReturn(0x15101);
L15104:
    if (c.tracing) c.traceAt(0x15104);
    // 1501:00f4  call 0x1b0  [x576]
    c.push16(0xf7u); code_20(c, 0x151c0u); if (c.ip != 0xf7u) c.badReturn(0x15104);
L15107:
    if (c.tracing) c.traceAt(0x15107);
    // 1501:00f7  inc word ptr [0x679c]  [x576]
    c.w16(c.dsb + (uint16_t)(0x679cu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x679cu)), false));
    // 1501:00fb  cmp word ptr [0x679c], 0x200  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x679cu)), 0x200u, true);
    // 1501:0101  jne 0x108  [x576]
    if (!c.zf) goto L15118;
L15113:
    if (c.tracing) c.traceAt(0x15113);
    // 1501:0103  mov byte ptr [0x679b], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x679bu), 0x1u);
L15118:
    if (c.tracing) c.traceAt(0x15118);
    // 1501:0108  cmp word ptr [0x679c], 0x240  [x576]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x679cu)), 0x240u, true);
    // 1501:010e  jb 0x112  [x576]
    if (c.cf) goto L15122;
L15120:
    if (c.tracing) c.traceAt(0x15120);
    // 1501:0110  jmp 0x115  [x1]
    goto L15125;
L15122:
    if (c.tracing) c.traceAt(0x15122);
    // 1501:0112  jmp 0x88  [x575]
    goto L15098;
L15125:
    if (c.tracing) c.traceAt(0x15125);
    // 1501:0115  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0118  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:011a  mov ah, 0  [x1]
    c.a.h = (uint8_t)(0x0u);
    // 1501:011c  out dx, ax  [x1]
    c.ip = 0x11du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:011d  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:011f  mov ah, 0  [x1]
    c.a.h = (uint8_t)(0x0u);
    // 1501:0121  out dx, ax  [x1]
    c.ip = 0x122u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0122  mov dx, 0x3c0  [x1]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:0125  mov al, 0x33  [x1]
    c.a.l = (uint8_t)(0x33u);
    // 1501:0127  out dx, al  [x1]
    c.ip = 0x128u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0128  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:012a  out dx, al  [x1]
    c.ip = 0x12bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:012b  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:012e  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:0131  out dx, ax  [x1]
    c.ip = 0x132u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0132  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:0134  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:0137  mov cx, 0x1900  [x1]
    c.c.x = (uint16_t)(0x1900u);
L1514a:
    if (c.tracing) c.traceAt(0x1514a);
    // 1501:013a  rep stosw word ptr es:[di], ax  [x6401]
    c.stos<16, false>(1);
L1514c:
    if (c.tracing) c.traceAt(0x1514c);
    // 1501:013c  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:013f  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:0142  out dx, ax  [x1]
    c.ip = 0x143u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0143  mov di, 0x3200  [x1]
    c.di.x = (uint16_t)(0x3200u);
    // 1501:0146  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:0148  mov cx, 0x2300  [x1]
    c.c.x = (uint16_t)(0x2300u);
L1515b:
    if (c.tracing) c.traceAt(0x1515b);
    // 1501:014b  rep stosw word ptr es:[di], ax  [x8961]
    c.stos<16, false>(1);
L1515d:
    if (c.tracing) c.traceAt(0x1515d);
    // 1501:014d  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0150  mov ax, 0xb02  [x1]
    c.a.x = (uint16_t)(0xb02u);
    // 1501:0153  out dx, ax  [x1]
    c.ip = 0x154u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0154  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:0156  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:0158  mov cx, 0x4000  [x1]
    c.c.x = (uint16_t)(0x4000u);
L1516b:
    if (c.tracing) c.traceAt(0x1516b);
    // 1501:015b  rep stosw word ptr es:[di], ax  [x16385]
    c.stos<16, false>(1);
L1516d:
    if (c.tracing) c.traceAt(0x1516d);
    // 1501:015d  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L1516e:
    if (c.tracing) c.traceAt(0x1516e);
    // 1501:015e  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L15171:
    if (c.tracing) c.traceAt(0x15171);
    // 1501:0161  in al, dx  [x1]
    c.ip = 0x162u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:0162  test al, 8  [x1]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0164  jne 0x161  [x1]
    if (!c.zf) goto L15171;
L15176:
    if (c.tracing) c.traceAt(0x15176);
    // 1501:0166  in al, dx  [x43]
    c.ip = 0x167u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15177:
    if (c.tracing) c.traceAt(0x15177);
    // 1501:0167  test al, 8  [x57]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0169  je 0x166  [x57]
    if (c.zf) goto L15176;
L1517b:
    if (c.tracing) c.traceAt(0x1517b);
    // 1501:016b  ret   [x1]
    c.ip = c.pop16(); return;
L1517c:
    if (c.tracing) c.traceAt(0x1517c);
    // 1501:016c  mov bx, word ptr [0x64a1]  [x576]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:0170  and bl, 7  [x576]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) & (0x7u), true));
    // 1501:0173  mov dx, 0x3da  [x576]
    c.dx_.x = (uint16_t)(0x3dau);
L15186:
    if (c.tracing) c.traceAt(0x15186);
    // 1501:0176  in al, dx  [x1848]
    c.ip = 0x177u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15187:
    if (c.tracing) c.traceAt(0x15187);
    // 1501:0177  test al, 8  [x2464]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0179  jne 0x176  [x2464]
    if (!c.zf) goto L15186;
L1518b:
    if (c.tracing) c.traceAt(0x1518b);
    // 1501:017b  mov dx, 0x3c0  [x576]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:017e  mov al, 0x33  [x576]
    c.a.l = (uint8_t)(0x33u);
    // 1501:0180  out dx, al  [x576]
    c.ip = 0x181u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0181  jmp 0x183  [x576]
    goto L15193;
L15193:
    if (c.tracing) c.traceAt(0x15193);
    // 1501:0183  mov al, bl  [x576]
    c.a.l = (uint8_t)(c.b.l);
    // 1501:0185  out dx, al  [x576]
    c.ip = 0x186u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0186  jmp 0x188  [x576]
    goto L15198;
L15198:
    if (c.tracing) c.traceAt(0x15198);
    // 1501:0188  mov ax, word ptr [0x64a3]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a3u)));
    // 1501:018b  mov bx, 0x3e  [x576]
    c.b.x = (uint16_t)(0x3eu);
    // 1501:018e  mul bx  [x576]
    c.mul16(c.b.x);
    // 1501:0190  mov bx, ax  [x576]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:0192  mov ax, word ptr [0x64a1]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:0195  shr ax, 3  [x576]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:0198  add bx, ax  [x576]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, true));
    // 1501:019a  mov dx, 0x3d4  [x576]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:019d  mov al, 0xc  [x576]
    c.a.l = (uint8_t)(0xcu);
    // 1501:019f  mov ah, bh  [x576]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:01a1  out dx, ax  [x576]
    c.ip = 0x1a2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:01a2  mov al, 0xd  [x576]
    c.a.l = (uint8_t)(0xdu);
    // 1501:01a4  mov ah, bl  [x576]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:01a6  out dx, ax  [x576]
    c.ip = 0x1a7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:01a7  mov dx, 0x3da  [x576]
    c.dx_.x = (uint16_t)(0x3dau);
L151ba:
    if (c.tracing) c.traceAt(0x151ba);
    // 1501:01aa  in al, dx  [x26844]
    c.ip = 0x1abu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L151bb:
    if (c.tracing) c.traceAt(0x151bb);
    // 1501:01ab  test al, 8  [x35600]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:01ad  je 0x1aa  [x35600]
    if (c.zf) goto L151ba;
L151bf:
    if (c.tracing) c.traceAt(0x151bf);
    // 1501:01af  ret   [x576]
    c.ip = c.pop16(); return;
L151c0:
    if (c.tracing) c.traceAt(0x151c0);
    // 1501:01b0  mov word ptr [0x64a1], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a1u), 0x5au);
    // 1501:01b6  mov word ptr [0x64a3], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a3u), 0x5au);
    // 1501:01bc  mov word ptr [0x64a5], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a5u), 0x5au);
    // 1501:01c2  mov word ptr [0x64a7], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a7u), 0x5au);
    // 1501:01c8  mov word ptr [0x64a9], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a9u), 0x5au);
    // 1501:01ce  mov word ptr [0x64ab], 0x5a  [x577]
    c.w16(c.dsb + (uint16_t)(0x64abu), 0x5au);
    // 1501:01d4  mov si, word ptr [0x64ad]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64adu)));
    // 1501:01d8  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:01dc  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:01de  add word ptr [0x64a1], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a1u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64a1u)), c.a.x, false));
    // 1501:01e2  mov si, word ptr [0x64af]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64afu)));
    // 1501:01e6  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:01ea  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:01ec  add word ptr [0x64a3], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a3u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64a3u)), c.a.x, false));
    // 1501:01f0  mov si, word ptr [0x64b1]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64b1u)));
    // 1501:01f4  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:01f8  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:01fa  add word ptr [0x64a5], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a5u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64a5u)), c.a.x, false));
    // 1501:01fe  mov si, word ptr [0x64b3]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64b3u)));
    // 1501:0202  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:0206  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0208  add word ptr [0x64a7], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a7u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64a7u)), c.a.x, false));
    // 1501:020c  mov si, word ptr [0x64b5]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64b5u)));
    // 1501:0210  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:0214  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0216  add word ptr [0x64a9], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64a9u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64a9u)), c.a.x, false));
    // 1501:021a  mov si, word ptr [0x64b7]  [x577]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64b7u)));
    // 1501:021e  mov ax, word ptr [si + 0x64b9]  [x577]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x64b9u)));
    // 1501:0222  sar ax, 1  [x577]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0224  add word ptr [0x64ab], ax  [x577]
    c.w16(c.dsb + (uint16_t)(0x64abu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64abu)), c.a.x, false));
    // 1501:0228  add word ptr [0x64ad], 2  [x577]
    c.w16(c.dsb + (uint16_t)(0x64adu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64adu)), 0x2u, false));
    // 1501:022d  cmp word ptr [0x64ad], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64adu)), 0x2d0u, true);
    // 1501:0233  jb 0x23b  [x577]
    if (c.cf) goto L1524b;
L15245:
    if (c.tracing) c.traceAt(0x15245);
    // 1501:0235  sub word ptr [0x64ad], 0x2d0  [x1]
    c.w16(c.dsb + (uint16_t)(0x64adu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64adu)), 0x2d0u, true));
L1524b:
    if (c.tracing) c.traceAt(0x1524b);
    // 1501:023b  add word ptr [0x64af], 4  [x577]
    c.w16(c.dsb + (uint16_t)(0x64afu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64afu)), 0x4u, false));
    // 1501:0240  cmp word ptr [0x64af], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64afu)), 0x2d0u, true);
    // 1501:0246  jb 0x24e  [x577]
    if (c.cf) goto L1525e;
L15258:
    if (c.tracing) c.traceAt(0x15258);
    // 1501:0248  sub word ptr [0x64af], 0x2d0  [x3]
    c.w16(c.dsb + (uint16_t)(0x64afu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64afu)), 0x2d0u, true));
L1525e:
    if (c.tracing) c.traceAt(0x1525e);
    // 1501:024e  add word ptr [0x64b1], 6  [x577]
    c.w16(c.dsb + (uint16_t)(0x64b1u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64b1u)), 0x6u, false));
    // 1501:0253  cmp word ptr [0x64b1], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b1u)), 0x2d0u, true);
    // 1501:0259  jb 0x261  [x577]
    if (c.cf) goto L15271;
L1526b:
    if (c.tracing) c.traceAt(0x1526b);
    // 1501:025b  sub word ptr [0x64b1], 0x2d0  [x4]
    c.w16(c.dsb + (uint16_t)(0x64b1u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b1u)), 0x2d0u, true));
L15271:
    if (c.tracing) c.traceAt(0x15271);
    // 1501:0261  add word ptr [0x64b3], 2  [x577]
    c.w16(c.dsb + (uint16_t)(0x64b3u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64b3u)), 0x2u, false));
    // 1501:0266  cmp word ptr [0x64b3], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b3u)), 0x2d0u, true);
    // 1501:026c  jb 0x274  [x577]
    if (c.cf) goto L15284;
L1527e:
    if (c.tracing) c.traceAt(0x1527e);
    // 1501:026e  sub word ptr [0x64b3], 0x2d0  [x1]
    c.w16(c.dsb + (uint16_t)(0x64b3u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b3u)), 0x2d0u, true));
L15284:
    if (c.tracing) c.traceAt(0x15284);
    // 1501:0274  add word ptr [0x64b5], 2  [x577]
    c.w16(c.dsb + (uint16_t)(0x64b5u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64b5u)), 0x2u, false));
    // 1501:0279  cmp word ptr [0x64b5], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b5u)), 0x2d0u, true);
    // 1501:027f  jb 0x287  [x577]
    if (c.cf) goto L15297;
L15291:
    if (c.tracing) c.traceAt(0x15291);
    // 1501:0281  sub word ptr [0x64b5], 0x2d0  [x1]
    c.w16(c.dsb + (uint16_t)(0x64b5u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b5u)), 0x2d0u, true));
L15297:
    if (c.tracing) c.traceAt(0x15297);
    // 1501:0287  add word ptr [0x64b7], 8  [x577]
    c.w16(c.dsb + (uint16_t)(0x64b7u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x64b7u)), 0x8u, false));
    // 1501:028c  cmp word ptr [0x64b7], 0x2d0  [x577]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b7u)), 0x2d0u, true);
    // 1501:0292  jb 0x29a  [x577]
    if (c.cf) goto L152aa;
L152a4:
    if (c.tracing) c.traceAt(0x152a4);
    // 1501:0294  sub word ptr [0x64b7], 0x2d0  [x6]
    c.w16(c.dsb + (uint16_t)(0x64b7u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x64b7u)), 0x2d0u, true));
L152aa:
    if (c.tracing) c.traceAt(0x152aa);
    // 1501:029a  ret   [x577]
    c.ip = c.pop16(); return;
L1544d:
    if (c.tracing) c.traceAt(0x1544d);
    // 1501:043d  xor si, si  [x576]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:043f  mov bx, word ptr cs:[0x42b]  [x576]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x42bu)));
    // 1501:0444  mov di, word ptr cs:[0x42d]  [x576]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x42du)));
    // 1501:0449  mov bp, word ptr cs:[0x42f]  [x576]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x42fu)));
L1545e:
    if (c.tracing) c.traceAt(0x1545e);
    // 1501:044e  add bx, word ptr cs:[0x431]  [x115200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x431u)), false));
    // 1501:0453  and bx, 0x7fe  [x115200]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x7feu), false));
    // 1501:0457  add di, word ptr cs:[0x433]  [x115200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x433u)), false));
    // 1501:045c  and di, 0x7fe  [x115200]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7feu), false));
    // 1501:0460  add bp, word ptr cs:[0x435]  [x115200]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x435u)), false));
    // 1501:0465  and bp, 0x7fe  [x115200]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x7feu), false));
    // 1501:0469  mov ax, word ptr [bx + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x5c9du)));
    // 1501:046d  add ax, word ptr [di + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x5c9du)), false));
    // 1501:0471  add ax, word ptr ds:[bp + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x5c9du)), false));
    // 1501:0476  mov dx, 0x3e  [x115200]
    c.dx_.x = (uint16_t)(0x3eu);
    // 1501:0479  mul dx  [x115200]
    c.mul16(c.dx_.x);
    // 1501:047b  mov word ptr cs:[si + 0x29b], ax  [x115200]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x29bu), c.a.x);
    // 1501:0480  add si, 2  [x115200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0483  cmp si, 0x190  [x115200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:0487  jb 0x44e  [x115200]
    if (c.cf) goto L1545e;
L15499:
    if (c.tracing) c.traceAt(0x15499);
    // 1501:0489  mov ax, word ptr cs:[0x437]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x437u)));
    // 1501:048d  add word ptr cs:[0x42b], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x42bu), c.add<16>(c.r16(c.csb + (uint16_t)(0x42bu)), c.a.x, false));
    // 1501:0492  mov ax, word ptr cs:[0x439]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x439u)));
    // 1501:0496  add word ptr cs:[0x42d], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x42du), c.add<16>(c.r16(c.csb + (uint16_t)(0x42du)), c.a.x, false));
    // 1501:049b  mov ax, word ptr cs:[0x43b]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x43bu)));
    // 1501:049f  add word ptr cs:[0x42f], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x42fu), c.add<16>(c.r16(c.csb + (uint16_t)(0x42fu)), c.a.x, false));
    // 1501:04a4  mov dx, 0x3c4  [x576]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:04a7  mov ax, 0x202  [x576]
    c.a.x = (uint16_t)(0x202u);
    // 1501:04aa  out dx, ax  [x576]
    c.ip = 0x4abu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:04ab  mov ax, word ptr [0x64a5]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a5u)));
    // 1501:04ae  mov word ptr [0x649d], ax  [x576]
    c.w16(c.dsb + (uint16_t)(0x649du), c.a.x);
    // 1501:04b1  mov ax, word ptr [0x64a1]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:04b4  and ax, 7  [x576]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:04b7  add ax, 8  [x576]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x8u, false));
    // 1501:04ba  sub word ptr [0x649d], ax  [x576]
    c.w16(c.dsb + (uint16_t)(0x649du), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x649du)), c.a.x, false));
    // 1501:04be  mov ax, 0x3e  [x576]
    c.a.x = (uint16_t)(0x3eu);
    // 1501:04c1  mul word ptr [0x64a3]  [x576]
    c.mul16(c.r16(c.dsb + (uint16_t)(0x64a3u)));
    // 1501:04c5  mov di, ax  [x576]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:04c7  mov ax, word ptr [0x64a1]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:04ca  shr ax, 3  [x576]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:04cd  add di, ax  [x576]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 1501:04cf  push ds  [x576]
    c.push16(c.ds);
    // 1501:04d0  mov ax, word ptr [0x649d]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x649du)));
    // 1501:04d3  shr ax, 3  [x576]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:04d6  push ax  [x576]
    c.push16(c.a.x);
    // 1501:04d7  mov bx, word ptr [0x6799]  [x576]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6799u)));
    // 1501:04db  mov ax, 0x5c1  [x576]
    c.a.x = (uint16_t)(0x5c1u);
    // 1501:04de  mov cx, word ptr [0x649d]  [x576]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x649du)));
    // 1501:04e2  and cx, 7  [x576]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x7u), false));
    // 1501:04e5  sub cx, 7  [x576]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x7u, false));
    // 1501:04e8  neg cx  [x576]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:04ea  mul cx  [x576]
    c.mul16(c.c.x);
    // 1501:04ec  add bx, ax  [x576]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:04ee  mov ds, bx  [x576]
    c.loadDs(c.b.x);
    // 1501:04f0  pop dx  [x576]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 1501:04f1  xor bx, bx  [x576]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15503:
    if (c.tracing) c.traceAt(0x15503);
    // 1501:04f3  mov si, word ptr cs:[bx + 0x29b]  [x115200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x29bu)));
    // 1501:04f8  add si, dx  [x115200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, false));
    // 1501:04fa  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x4fbu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:04fb  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x4fcu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:04fc  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x4fdu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:04fd  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x4feu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:04fe  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x4ffu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:04ff  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x500u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0500  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x501u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0501  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x502u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0502  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x503u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0503  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x504u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0504  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x505u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0505  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x506u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0506  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x507u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0507  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x508u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0508  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x509u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0509  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50au; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050a  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50bu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050b  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50cu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050c  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50du; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050d  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50eu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050e  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x50fu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:050f  add bx, 2  [x115200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:0512  add di, 0x14  [x115200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:0515  cmp bx, 0x190  [x115200]
    c.sub<16>(c.b.x, 0x190u, true);
    // 1501:0519  jb 0x4f3  [x115200]
    if (c.cf) goto L15503;
L1552b:
    if (c.tracing) c.traceAt(0x1552b);
    // 1501:051b  pop ds  [x576]
    c.loadDs((uint16_t)c.pop16());
    // 1501:051c  ret   [x576]
    c.ip = c.pop16(); return;
L1553f:
    if (c.tracing) c.traceAt(0x1553f);
    // 1501:052f  xor si, si  [x576]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:0531  mov bx, word ptr cs:[0x51d]  [x576]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x51du)));
    // 1501:0536  mov di, word ptr cs:[0x51f]  [x576]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x51fu)));
    // 1501:053b  mov bp, word ptr cs:[0x521]  [x576]
    c.bp.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x521u)));
L15550:
    if (c.tracing) c.traceAt(0x15550);
    // 1501:0540  add bx, word ptr cs:[0x523]  [x115200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.csb + (uint16_t)(0x523u)), false));
    // 1501:0545  and bx, 0x7fe  [x115200]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x7feu), false));
    // 1501:0549  add di, word ptr cs:[0x525]  [x115200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.csb + (uint16_t)(0x525u)), false));
    // 1501:054e  and di, 0x7fe  [x115200]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) & (0x7feu), false));
    // 1501:0552  add bp, word ptr cs:[0x527]  [x115200]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x527u)), false));
    // 1501:0557  and bp, 0x7fe  [x115200]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) & (0x7feu), false));
    // 1501:055b  mov ax, word ptr [bx + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x5c9du)));
    // 1501:055f  add ax, word ptr [di + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.di.x + 0x5c9du)), false));
    // 1501:0563  add ax, word ptr ds:[bp + 0x5c9d]  [x115200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.bp.x + 0x5c9du)), false));
    // 1501:0568  mov dx, 0x3e  [x115200]
    c.dx_.x = (uint16_t)(0x3eu);
    // 1501:056b  mul dx  [x115200]
    c.mul16(c.dx_.x);
    // 1501:056d  mov word ptr cs:[si + 0x29b], ax  [x115200]
    c.w16(c.csb + (uint16_t)(c.si.x + 0x29bu), c.a.x);
    // 1501:0572  add si, 2  [x115200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:0575  cmp si, 0x190  [x115200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:0579  jb 0x540  [x115200]
    if (c.cf) goto L15550;
L1558b:
    if (c.tracing) c.traceAt(0x1558b);
    // 1501:057b  mov ax, word ptr cs:[0x529]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x529u)));
    // 1501:057f  add word ptr cs:[0x51d], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x51du), c.add<16>(c.r16(c.csb + (uint16_t)(0x51du)), c.a.x, false));
    // 1501:0584  mov ax, word ptr cs:[0x52b]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52bu)));
    // 1501:0588  add word ptr cs:[0x51f], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x51fu), c.add<16>(c.r16(c.csb + (uint16_t)(0x51fu)), c.a.x, false));
    // 1501:058d  mov ax, word ptr cs:[0x52d]  [x576]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x52du)));
    // 1501:0591  add word ptr cs:[0x521], ax  [x576]
    c.w16(c.csb + (uint16_t)(0x521u), c.add<16>(c.r16(c.csb + (uint16_t)(0x521u)), c.a.x, false));
    // 1501:0596  mov dx, 0x3c4  [x576]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0599  mov ax, 0x402  [x576]
    c.a.x = (uint16_t)(0x402u);
    // 1501:059c  out dx, ax  [x576]
    c.ip = 0x59du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:059d  mov ax, word ptr [0x64a9]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a9u)));
    // 1501:05a0  mov word ptr [0x649d], ax  [x576]
    c.w16(c.dsb + (uint16_t)(0x649du), c.a.x);
    // 1501:05a3  mov ax, word ptr [0x64a1]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:05a6  and ax, 7  [x576]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x7u), false));
    // 1501:05a9  add ax, 8  [x576]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x8u, false));
    // 1501:05ac  sub word ptr [0x649d], ax  [x576]
    c.w16(c.dsb + (uint16_t)(0x649du), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x649du)), c.a.x, false));
    // 1501:05b0  mov ax, 0x3e  [x576]
    c.a.x = (uint16_t)(0x3eu);
    // 1501:05b3  mul word ptr [0x64a3]  [x576]
    c.mul16(c.r16(c.dsb + (uint16_t)(0x64a3u)));
    // 1501:05b7  mov di, ax  [x576]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:05b9  mov ax, word ptr [0x64a1]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x64a1u)));
    // 1501:05bc  shr ax, 3  [x576]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:05bf  add di, ax  [x576]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 1501:05c1  push ds  [x576]
    c.push16(c.ds);
    // 1501:05c2  mov ax, word ptr [0x649d]  [x576]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x649du)));
    // 1501:05c5  shr ax, 3  [x576]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:05c8  push ax  [x576]
    c.push16(c.a.x);
    // 1501:05c9  mov bx, word ptr [0x6799]  [x576]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6799u)));
    // 1501:05cd  mov ax, 0x5c1  [x576]
    c.a.x = (uint16_t)(0x5c1u);
    // 1501:05d0  mov cx, word ptr [0x649d]  [x576]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x649du)));
    // 1501:05d4  and cx, 7  [x576]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x7u), false));
    // 1501:05d7  sub cx, 7  [x576]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x7u, false));
    // 1501:05da  neg cx  [x576]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, false));
    // 1501:05dc  mul cx  [x576]
    c.mul16(c.c.x);
    // 1501:05de  add bx, ax  [x576]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:05e0  mov ds, bx  [x576]
    c.loadDs(c.b.x);
    // 1501:05e2  pop dx  [x576]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 1501:05e3  xor bx, bx  [x576]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L155f5:
    if (c.tracing) c.traceAt(0x155f5);
    // 1501:05e5  mov si, word ptr cs:[bx + 0x29b]  [x115200]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.b.x + 0x29bu)));
    // 1501:05ea  add si, dx  [x115200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, false));
    // 1501:05ec  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5edu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05ed  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5eeu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05ee  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5efu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05ef  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f0u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f0  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f1u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f1  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f2u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f2  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f3u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f3  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f4u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f4  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f5u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f5  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f6u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f6  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f7u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f7  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f8u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f8  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5f9u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05f9  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5fau; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05fa  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5fbu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05fb  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5fcu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05fc  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5fdu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05fd  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5feu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05fe  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x5ffu; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:05ff  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x600u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0600  movsw word ptr es:[di], word ptr [si]  [x115200]
    c.ip = 0x601u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:0601  add bx, 2  [x115200]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, false));
    // 1501:0604  add di, 0x14  [x115200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, false));
    // 1501:0607  cmp bx, 0x190  [x115200]
    c.sub<16>(c.b.x, 0x190u, true);
    // 1501:060b  jb 0x5e5  [x115200]
    if (c.cf) goto L155f5;
L1561d:
    if (c.tracing) c.traceAt(0x1561d);
    // 1501:060d  pop ds  [x576]
    c.loadDs((uint16_t)c.pop16());
    // 1501:060e  ret   [x576]
    c.ip = c.pop16(); return;
L1561f:
    if (c.tracing) c.traceAt(0x1561f);
    // 1501:060f  push es  [x1]
    c.push16(c.es);
    // 1501:0610  mov ax, word ptr [0x6799]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6799u)));
    // 1501:0613  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0615  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
L15628:
    if (c.tracing) c.traceAt(0x15628);
    // 1501:0618  mov cl, bl  [x8]
    c.c.l = (uint8_t)(c.b.l);
    // 1501:061a  xor si, si  [x8]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:061c  mov ch, 0  [x8]
    c.c.h = (uint8_t)(0x0u);
L1562e:
    if (c.tracing) c.traceAt(0x1562e);
    // 1501:061e  mov al, byte ptr [si]  [x94240]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0622  ror al, cl  [x94240]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:0624  mov ah, al  [x94240]
    c.a.h = (uint8_t)(c.a.l);
    // 1501:0626  and ah, byte ptr [bx + 0x6791]  [x94240]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0x6791u))), false));
    // 1501:062a  and al, byte ptr [bx + 0x6789]  [x94240]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0x6789u))), false));
    // 1501:062e  or al, ch  [x94240]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.c.h), false));
    // 1501:0630  mov byte ptr es:[si], al  [x94240]
    c.w8(c.esb + (uint16_t)(c.si.x), c.a.l);
    // 1501:0633  mov al, byte ptr [si + 1]  [x94240]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
    // 1501:0637  ror al, cl  [x94240]
    c.a.l = (uint8_t)(c.ror<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:0639  mov ch, al  [x94240]
    c.c.h = (uint8_t)(c.a.l);
    // 1501:063b  and ch, byte ptr [bx + 0x6791]  [x94240]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0x6791u))), false));
    // 1501:063f  and al, byte ptr [bx + 0x6789]  [x94240]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.b.x + 0x6789u))), false));
    // 1501:0643  or al, ah  [x94240]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.h), false));
    // 1501:0645  mov byte ptr es:[si + 1], al  [x94240]
    c.w8(c.esb + (uint16_t)(c.si.x + 0x1u), c.a.l);
    // 1501:0649  add si, 2  [x94240]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:064c  cmp si, 0x5c08  [x94240]
    c.sub<16>(c.si.x, 0x5c08u, true);
    // 1501:0650  jb 0x61e  [x94240]
    if (c.cf) goto L1562e;
L15662:
    if (c.tracing) c.traceAt(0x15662);
    // 1501:0652  mov ax, es  [x8]
    c.a.x = (uint16_t)(c.es);
    // 1501:0654  add ax, 0x5c1  [x8]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x5c1u, false));
    // 1501:0657  mov es, ax  [x8]
    c.loadEs(c.a.x);
    // 1501:0659  inc bx  [x8]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 1501:065a  cmp bx, 8  [x8]
    c.sub<16>(c.b.x, 0x8u, true);
    // 1501:065d  jb 0x618  [x8]
    if (c.cf) goto L15628;
L1566f:
    if (c.tracing) c.traceAt(0x1566f);
    // 1501:065f  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:0660  ret   [x1]
    c.ip = c.pop16(); return;
L15671:
    if (c.tracing) c.traceAt(0x15671);
    // 1501:0661  mov dx, 0x3c8  [x64]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0664  xor al, al  [x64]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0666  out dx, al  [x64]
    c.ip = 0x667u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0667  inc dx  [x64]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0668  mov si, 0x5c08  [x64]
    c.si.x = (uint16_t)(0x5c08u);
    // 1501:066b  mov cx, 0x30  [x64]
    c.c.x = (uint16_t)(0x30u);
L1567e:
    if (c.tracing) c.traceAt(0x1567e);
    // 1501:066e  rep outsb dx, byte ptr [si]  [x3136]
    c.ip = 0x670u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15680:
    if (c.tracing) c.traceAt(0x15680);
    // 1501:0670  mov si, 3  [x64]
    c.si.x = (uint16_t)(0x3u);
L15683:
    if (c.tracing) c.traceAt(0x15683);
    // 1501:0673  mov al, byte ptr [si + 0x5c08]  [x2880]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x5c08u)));
    // 1501:0677  cmp al, byte ptr [si + 0x5c68]  [x2880]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0x5c68u)), true);
    // 1501:067b  jge 0x683  [x2880]
    if ((c.sf == c.of)) goto L15693;
L1568d:
    if (c.tracing) c.traceAt(0x1568d);
    // 1501:067d  inc byte ptr [si + 0x5c08]  [x869]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x5c08u), c.inc<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x5c08u)), true));
    // 1501:0681  jmp 0x68d  [x869]
    goto L1569d;
L15693:
    if (c.tracing) c.traceAt(0x15693);
    // 1501:0683  cmp al, byte ptr [si + 0x5c68]  [x2011]
    c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(c.si.x + 0x5c68u)), true);
    // 1501:0687  jle 0x68d  [x2011]
    if ((c.zf || c.sf != c.of)) goto L1569d;
L15699:
    if (c.tracing) c.traceAt(0x15699);
    // 1501:0689  dec byte ptr [si + 0x5c08]  [x206]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x5c08u), c.dec<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x5c08u)), true));
L1569d:
    if (c.tracing) c.traceAt(0x1569d);
    // 1501:068d  inc si  [x2880]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:068e  cmp si, 0x30  [x2880]
    c.sub<16>(c.si.x, 0x30u, true);
    // 1501:0691  jb 0x673  [x2880]
    if (c.cf) goto L15683;
L156a3:
    if (c.tracing) c.traceAt(0x156a3);
    // 1501:0693  ret   [x64]
    c.ip = c.pop16(); return;
L156a4:
    if (c.tracing) c.traceAt(0x156a4);
    // 1501:0694  mov bl, byte ptr [0x5c98]  [x32]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x5c98u)));
    // 1501:0698  mov dx, 0x3c8  [x32]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:069b  xor al, al  [x32]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:069d  out dx, al  [x32]
    c.ip = 0x69eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:069e  inc dx  [x32]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:069f  mov si, 0x5c08  [x32]
    c.si.x = (uint16_t)(0x5c08u);
    // 1501:06a2  mov cx, 0x30  [x32]
    c.c.x = (uint16_t)(0x30u);
L156b5:
    if (c.tracing) c.traceAt(0x156b5);
    // 1501:06a5  lodsb al, byte ptr [si]  [x1536]
    c.ip = 0x6a6u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 1501:06a6  sub al, bl  [x1536]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:06a8  jge 0x6ac  [x1536]
    if ((c.sf == c.of)) goto L156bc;
L156ba:
    if (c.tracing) c.traceAt(0x156ba);
    // 1501:06aa  xor al, al  [x1314]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L156bc:
    if (c.tracing) c.traceAt(0x156bc);
    // 1501:06ac  out dx, al  [x1536]
    c.ip = 0x6adu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:06ad  loop 0x6a5  [x1536]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L156b5;
L156bf:
    if (c.tracing) c.traceAt(0x156bf);
    // 1501:06af  sub byte ptr [0x5c98], 2  [x32]
    c.w8(c.dsb + (uint16_t)(0x5c98u), c.sub<8>(c.r8(c.dsb + (uint16_t)(0x5c98u)), 0x2u, true));
    // 1501:06b4  jns 0x6bb  [x32]
    if (!c.sf) goto L156cb;
    c.notTranslated(0x156c6, "fall-through");
L156cb:
    if (c.tracing) c.traceAt(0x156cb);
    // 1501:06bb  ret   [x32]
    c.ip = c.pop16(); return;
}

static Register reg_code_20(20, {0x15010, 0x1501b, 0x15030, 0x15032, 0x15038, 0x15041, 0x15057, 0x1505a, 0x15069, 0x1506b, 0x1507a, 0x1507c, 0x1507f, 0x15082, 0x15085, 0x15098, 0x1509b, 0x150a2, 0x150df, 0x150e3, 0x150ea, 0x150ed, 0x150f4, 0x150f7, 0x150fa, 0x15101, 0x15104, 0x15107, 0x15113, 0x15118, 0x15120, 0x15122, 0x15125, 0x1514a, 0x1514c, 0x1515b, 0x1515d, 0x1516b, 0x1516d, 0x1516e, 0x15171, 0x15176, 0x15177, 0x1517b, 0x1517c, 0x15186, 0x15187, 0x1518b, 0x15193, 0x15198, 0x151ba, 0x151bb, 0x151bf, 0x151c0, 0x15245, 0x1524b, 0x15258, 0x1525e, 0x1526b, 0x15271, 0x1527e, 0x15284, 0x15291, 0x15297, 0x152a4, 0x152aa, 0x1544d, 0x1545e, 0x15499, 0x15503, 0x1552b, 0x1553f, 0x15550, 0x1558b, 0x155f5, 0x1561d, 0x1561f, 0x15628, 0x1562e, 0x15662, 0x1566f, 0x15671, 0x1567e, 0x15680, 0x15683, 0x1568d, 0x15693, 0x15699, 0x1569d, 0x156a3, 0x156a4, 0x156b5, 0x156ba, 0x156bc, 0x156bf, 0x156cb}, code_20);

}  // namespace show
