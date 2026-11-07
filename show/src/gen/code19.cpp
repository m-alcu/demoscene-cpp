// Part 18 (INTER.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_19(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501b: goto L1501b;
    case 0x1502a: goto L1502a;
    case 0x1503b: goto L1503b;
    case 0x1503e: goto L1503e;
    case 0x15040: goto L15040;
    case 0x15046: goto L15046;
    case 0x1504f: goto L1504f;
    case 0x1505c: goto L1505c;
    case 0x15066: goto L15066;
    case 0x1506e: goto L1506e;
    case 0x15083: goto L15083;
    case 0x15089: goto L15089;
    case 0x1508a: goto L1508a;
    case 0x1508e: goto L1508e;
    case 0x1508f: goto L1508f;
    case 0x15093: goto L15093;
    case 0x15095: goto L15095;
    case 0x15098: goto L15098;
    case 0x150a7: goto L150a7;
    case 0x150b5: goto L150b5;
    case 0x150cb: goto L150cb;
    case 0x150d5: goto L150d5;
    case 0x150de: goto L150de;
    case 0x150df: goto L150df;
    case 0x150e3: goto L150e3;
    case 0x150e6: goto L150e6;
    case 0x150e7: goto L150e7;
    case 0x150eb: goto L150eb;
    case 0x150ec: goto L150ec;
    case 0x150f0: goto L150f0;
    case 0x15103: goto L15103;
    case 0x15110: goto L15110;
    case 0x15112: goto L15112;
    case 0x1511e: goto L1511e;
    case 0x15120: goto L15120;
    case 0x15123: goto L15123;
    case 0x15124: goto L15124;
    case 0x15147: goto L15147;
    case 0x15154: goto L15154;
    case 0x15156: goto L15156;
    case 0x1515b: goto L1515b;
    case 0x15161: goto L15161;
    case 0x15167: goto L15167;
    case 0x1516d: goto L1516d;
    case 0x15174: goto L15174;
    case 0x1518d: goto L1518d;
    case 0x15192: goto L15192;
    case 0x1519f: goto L1519f;
    case 0x151ac: goto L151ac;
    case 0x151be: goto L151be;
    case 0x151bf: goto L151bf;
    case 0x151cc: goto L151cc;
    case 0x151d4: goto L151d4;
    case 0x151df: goto L151df;
    case 0x151e5: goto L151e5;
    case 0x151ea: goto L151ea;
    case 0x151f0: goto L151f0;
    case 0x151f6: goto L151f6;
    case 0x151f9: goto L151f9;
    case 0x151fd: goto L151fd;
    case 0x15201: goto L15201;
    case 0x15202: goto L15202;
    case 0x1522f: goto L1522f;
    case 0x15237: goto L15237;
    case 0x15241: goto L15241;
    case 0x1524e: goto L1524e;
    case 0x15254: goto L15254;
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
    // 1501:001a  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:001d  mov ax, 0x2813  [x1]
    c.a.x = (uint16_t)(0x2813u);
    // 1501:0020  out dx, ax  [x1]
    c.ip = 0x21u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0021  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0024  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0026  out dx, al  [x1]
    c.ip = 0x27u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0027  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0028  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1503b:
    if (c.tracing) c.traceAt(0x1503b);
    // 1501:002b  out dx, al  [x48]
    c.ip = 0x2cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:002c  loop 0x2b  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1503b;
L1503e:
    if (c.tracing) c.traceAt(0x1503e);
    // 1501:002e  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15040:
    if (c.tracing) c.traceAt(0x15040);
    // 1501:0030  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:0032  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:0034  int 0x10  [x16]
    c.ip = 0x36u; c.d32 = false; c.intr(0x10, 0x36u);
L15046:
    if (c.tracing) c.traceAt(0x15046);
    // 1501:0036  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:0038  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:003a  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:003d  jne 0x30  [x16]
    if (!c.zf) goto L15040;
L1504f:
    if (c.tracing) c.traceAt(0x1504f);
    // 1501:003f  mov bx, 0x8000  [x1]
    c.b.x = (uint16_t)(0x8000u);
    // 1501:0042  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0045  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0047  mov ah, bl  [x1]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0049  out dx, ax  [x1]
    c.ip = 0x4au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:004a  jmp 0x4c  [x1]
    goto L1505c;
L1505c:
    if (c.tracing) c.traceAt(0x1505c);
    // 1501:004c  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:004f  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0051  mov ah, bh  [x1]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:0053  out dx, ax  [x1]
    c.ip = 0x54u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0054  jmp 0x56  [x1]
    goto L15066;
L15066:
    if (c.tracing) c.traceAt(0x15066);
    // 1501:0056  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0059  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:005b  call 0x114  [x1]
    c.push16(0x5eu); code_19(c, 0x15124u); if (c.ip != 0x5eu) c.badReturn(0x1506b);
L1506e:
    if (c.tracing) c.traceAt(0x1506e);
    // 1501:005e  push es  [x112]
    c.ip = 0x5eu; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:005f  mov ax, word ptr cs:[7]  [x112]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:0063  mov es, ax  [x112]
    c.loadEs(c.a.x);
    // 1501:0065  mov si, word ptr cs:[9]  [x112]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:006a  mov dx, word ptr es:[si]  [x112]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:006d  pop es  [x112]
    c.loadEs((uint16_t)c.pop16());
    // 1501:006e  cmp dx, 0  [x112]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0071  je 0x5e  [x112]
    if (c.zf) goto L1506e;
L15083:
    if (c.tracing) c.traceAt(0x15083);
    // 1501:0073  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
    // 1501:0076  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L15089:
    if (c.tracing) c.traceAt(0x15089);
    // 1501:0079  in al, dx  [x124]
    c.ip = 0x7au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1508a:
    if (c.tracing) c.traceAt(0x1508a);
    // 1501:007a  test al, 8  [x165]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:007c  jne 0x79  [x165]
    if (!c.zf) goto L15089;
L1508e:
    if (c.tracing) c.traceAt(0x1508e);
    // 1501:007e  in al, dx  [x1831]
    c.ip = 0x7fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1508f:
    if (c.tracing) c.traceAt(0x1508f);
    // 1501:007f  test al, 8  [x2428]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0081  je 0x7e  [x2428]
    if (c.zf) goto L1508e;
L15093:
    if (c.tracing) c.traceAt(0x15093);
    // 1501:0083  loop 0x79  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15089;
L15095:
    if (c.tracing) c.traceAt(0x15095);
    // 1501:0085  call 0x1f2  [x304]
    c.push16(0x88u); code_19(c, 0x15202u); if (c.ip != 0x88u) c.badReturn(0x15095);
L15098:
    if (c.tracing) c.traceAt(0x15098);
    // 1501:0088  mov word ptr [0x1ba9], 0x92  [x304]
    c.w16(c.dsb + (uint16_t)(0x1ba9u), 0x92u);
    // 1501:008e  xor ax, ax  [x304]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:0090  cmp byte ptr [0x1ba8], 0  [x304]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1ba8u)), 0x0u, true);
    // 1501:0095  jne 0xa5  [x304]
    if (!c.zf) goto L150b5;
L150a7:
    if (c.tracing) c.traceAt(0x150a7);
    // 1501:0097  mov word ptr [0x1ba9], 0x66  [x89]
    c.w16(c.dsb + (uint16_t)(0x1ba9u), 0x66u);
    // 1501:009d  mov ax, word ptr [0x1ba6]  [x89]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1ba6u)));
    // 1501:00a0  mov dx, 0x50  [x89]
    c.dx_.x = (uint16_t)(0x50u);
    // 1501:00a3  mul dx  [x89]
    c.mul16(c.dx_.x);
L150b5:
    if (c.tracing) c.traceAt(0x150b5);
    // 1501:00a5  mov bx, word ptr [0x1ba2]  [x304]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1ba2u)));
    // 1501:00a9  sar bx, 3  [x304]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:00ac  add bx, ax  [x304]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:00ae  add bx, 0x50  [x304]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x50u, true));
    // 1501:00b1  mov dx, 0x3d4  [x304]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00b4  mov al, 0xd  [x304]
    c.a.l = (uint8_t)(0xdu);
    // 1501:00b6  mov ah, bl  [x304]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:00b8  out dx, ax  [x304]
    c.ip = 0xb9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00b9  jmp 0xbb  [x304]
    goto L150cb;
L150cb:
    if (c.tracing) c.traceAt(0x150cb);
    // 1501:00bb  mov dx, 0x3d4  [x304]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00be  mov al, 0xc  [x304]
    c.a.l = (uint8_t)(0xcu);
    // 1501:00c0  mov ah, bh  [x304]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:00c2  out dx, ax  [x304]
    c.ip = 0xc3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c3  jmp 0xc5  [x304]
    goto L150d5;
L150d5:
    if (c.tracing) c.traceAt(0x150d5);
    // 1501:00c5  mov ax, word ptr [0x1ba0]  [x304]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1ba0u)));
    // 1501:00c8  mov word ptr [0x1ba2], ax  [x304]
    c.w16(c.dsb + (uint16_t)(0x1ba2u), c.a.x);
    // 1501:00cb  mov dx, 0x3da  [x304]
    c.dx_.x = (uint16_t)(0x3dau);
L150de:
    if (c.tracing) c.traceAt(0x150de);
    // 1501:00ce  in al, dx  [x13399]
    c.ip = 0xcfu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150df:
    if (c.tracing) c.traceAt(0x150df);
    // 1501:00cf  test al, 8  [x17663]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:00d1  je 0xce  [x17663]
    if (c.zf) goto L150de;
L150e3:
    if (c.tracing) c.traceAt(0x150e3);
    // 1501:00d3  mov dx, 0x3da  [x304]
    c.dx_.x = (uint16_t)(0x3dau);
L150e6:
    if (c.tracing) c.traceAt(0x150e6);
    // 1501:00d6  in al, dx  [x2290]
    c.ip = 0xd7u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150e7:
    if (c.tracing) c.traceAt(0x150e7);
    // 1501:00d7  test al, 1  [x2952]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:00d9  jne 0xd6  [x2952]
    if (!c.zf) goto L150e6;
L150eb:
    if (c.tracing) c.traceAt(0x150eb);
    // 1501:00db  in al, dx  [x930]
    c.ip = 0xdcu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L150ec:
    if (c.tracing) c.traceAt(0x150ec);
    // 1501:00dc  test al, 1  [x1240]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:00de  je 0xdb  [x1240]
    if (c.zf) goto L150eb;
L150f0:
    if (c.tracing) c.traceAt(0x150f0);
    // 1501:00e0  mov dx, 0x3c0  [x304]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:00e3  mov al, 0x33  [x304]
    c.a.l = (uint8_t)(0x33u);
    // 1501:00e5  out dx, al  [x304]
    c.ip = 0xe6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00e6  mov ax, word ptr [0x1ba0]  [x304]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1ba0u)));
    // 1501:00e9  and al, 7  [x304]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), false));
    // 1501:00eb  out dx, al  [x304]
    c.ip = 0xecu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00ec  cmp word ptr [0x1494], 1  [x304]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1494u)), 0x1u, true);
    // 1501:00f1  jne 0x102  [x304]
    if (!c.zf) goto L15112;
L15103:
    if (c.tracing) c.traceAt(0x15103);
    // 1501:00f3  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00f6  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:00f8  out dx, al  [x1]
    c.ip = 0xf9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00f9  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:00fa  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:00fd  mov si, 0x145a  [x1]
    c.si.x = (uint16_t)(0x145au);
L15110:
    if (c.tracing) c.traceAt(0x15110);
    // 1501:0100  rep outsb dx, byte ptr [si]  [x49]
    c.ip = 0x102u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L15112:
    if (c.tracing) c.traceAt(0x15112);
    // 1501:0102  inc word ptr [0x1494]  [x304]
    c.w16(c.dsb + (uint16_t)(0x1494u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x1494u)), false));
    // 1501:0106  cmp word ptr [0x1494], 0x130  [x304]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1494u)), 0x130u, true);
    // 1501:010c  jb 0x110  [x304]
    if (c.cf) goto L15120;
L1511e:
    if (c.tracing) c.traceAt(0x1511e);
    // 1501:010e  jmp 0x113  [x1]
    goto L15123;
L15120:
    if (c.tracing) c.traceAt(0x15120);
    // 1501:0110  jmp 0x85  [x303]
    goto L15095;
L15123:
    if (c.tracing) c.traceAt(0x15123);
    // 1501:0113  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L15124:
    if (c.tracing) c.traceAt(0x15124);
    // 1501:0114  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:0116  mov cl, byte ptr [0x1c]  [x1]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1cu)));
    // 1501:011a  rol al, cl  [x1]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:011c  mov byte ptr [0x148d], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x148du), c.a.l);
    // 1501:011f  mov ax, word ptr [0x16]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16u)));
    // 1501:0122  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:0124  mov word ptr [0x1490], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1490u), c.a.x);
    // 1501:0127  mov ax, word ptr [0x14]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x14u)));
    // 1501:012a  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:012c  shr ax, 3  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:012f  mov word ptr [0x1492], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1492u), c.a.x);
    // 1501:0132  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:0135  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L15147:
    if (c.tracing) c.traceAt(0x15147);
    // 1501:0137  mov al, byte ptr [si + 0x30]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x30u)));
    // 1501:013a  shr al, 2  [x48]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:013d  mov byte ptr [si + 0x145a], al  [x48]
    c.w8(c.dsb + (uint16_t)(c.si.x + 0x145au), c.a.l);
    // 1501:0141  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0142  loop 0x137  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15147;
L15154:
    if (c.tracing) c.traceAt(0x15154);
    // 1501:0144  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L15156:
    if (c.tracing) c.traceAt(0x15156);
    // 1501:0146  cmp byte ptr [si], 0x42  [x97]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x42u, true);
    // 1501:0149  jne 0x15d  [x97]
    if (!c.zf) goto L1516d;
L1515b:
    if (c.tracing) c.traceAt(0x1515b);
    // 1501:014b  cmp byte ptr [si + 1], 0x4f  [x3]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)), 0x4fu, true);
    // 1501:014f  jne 0x15d  [x3]
    if (!c.zf) goto L1516d;
L15161:
    if (c.tracing) c.traceAt(0x15161);
    // 1501:0151  cmp byte ptr [si + 2], 0x44  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x44u, true);
    // 1501:0155  jne 0x15d  [x1]
    if (!c.zf) goto L1516d;
L15167:
    if (c.tracing) c.traceAt(0x15167);
    // 1501:0157  cmp byte ptr [si + 3], 0x59  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)), 0x59u, true);
    // 1501:015b  je 0x164  [x1]
    if (c.zf) goto L15174;
L1516d:
    if (c.tracing) c.traceAt(0x1516d);
    // 1501:015d  inc si  [x96]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:015e  cmp si, 0x300  [x96]
    c.sub<16>(c.si.x, 0x300u, true);
    // 1501:0162  jb 0x146  [x96]
    if (c.cf) goto L15156;
L15174:
    if (c.tracing) c.traceAt(0x15174);
    // 1501:0164  mov ax, word ptr [si + 6]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6u)));
    // 1501:0167  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:0169  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:016c  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, true));
    // 1501:016e  mov word ptr [0x148e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x148eu), c.a.x);
    // 1501:0171  mov word ptr [0x148a], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x148au), 0x0u);
    // 1501:0177  mov word ptr [0x1458], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x1458u), 0x0u);
L1518d:
    if (c.tracing) c.traceAt(0x1518d);
    // 1501:017d  mov byte ptr [0x148c], 1  [x200]
    c.w8(c.dsb + (uint16_t)(0x148cu), 0x1u);
L15192:
    if (c.tracing) c.traceAt(0x15192);
    // 1501:0182  mov dx, 0x3c4  [x800]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0185  mov al, 2  [x800]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0187  mov ah, byte ptr [0x148c]  [x800]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x148cu)));
    // 1501:018b  out dx, ax  [x800]
    c.ip = 0x18cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:018c  call 0x1af  [x800]
    c.push16(0x18fu); code_19(c, 0x151bfu); if (c.ip != 0x18fu) c.badReturn(0x1519c);
L1519f:
    if (c.tracing) c.traceAt(0x1519f);
    // 1501:018f  rol byte ptr [0x148c], 1  [x800]
    c.w8(c.dsb + (uint16_t)(0x148cu), c.rol<8>(c.r8(c.dsb + (uint16_t)(0x148cu)), (int)((0x1u) & 31), false));
    // 1501:0193  mov al, byte ptr [0x148d]  [x800]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x148du)));
    // 1501:0196  cmp byte ptr [0x148c], al  [x800]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x148cu)), c.a.l, true);
    // 1501:019a  jb 0x182  [x800]
    if (c.cf) goto L15192;
L151ac:
    if (c.tracing) c.traceAt(0x151ac);
    // 1501:019c  add word ptr [0x1458], 0x50  [x200]
    c.w16(c.dsb + (uint16_t)(0x1458u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1458u)), 0x50u, false));
    // 1501:01a1  inc word ptr [0x148a]  [x200]
    c.w16(c.dsb + (uint16_t)(0x148au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x148au)), false));
    // 1501:01a5  mov ax, word ptr [0x1490]  [x200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1490u)));
    // 1501:01a8  cmp word ptr [0x148a], ax  [x200]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x148au)), c.a.x, true);
    // 1501:01ac  jb 0x17d  [x200]
    if (c.cf) goto L1518d;
L151be:
    if (c.tracing) c.traceAt(0x151be);
    // 1501:01ae  ret   [x1]
    c.ip = c.pop16(); return;
L151bf:
    if (c.tracing) c.traceAt(0x151bf);
    // 1501:01af  mov di, word ptr [0x1458]  [x800]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1458u)));
    // 1501:01b3  mov bp, di  [x800]
    c.bp.x = (uint16_t)(c.di.x);
    // 1501:01b5  add bp, word ptr [0x1492]  [x800]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0x1492u)), true));
    // 1501:01b9  mov dx, 0  [x800]
    c.dx_.x = (uint16_t)(0x0u);
L151cc:
    if (c.tracing) c.traceAt(0x151cc);
    // 1501:01bc  mov al, byte ptr [si]  [x1583]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:01be  xor ah, ah  [x1583]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:01c0  cmp al, 0x80  [x1583]
    c.sub<8>(c.a.l, 0x80u, true);
    // 1501:01c2  jb 0x1da  [x1583]
    if (c.cf) goto L151ea;
L151d4:
    if (c.tracing) c.traceAt(0x151d4);
    // 1501:01c4  neg al  [x1105]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:01c6  inc al  [x1105]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, false));
    // 1501:01c8  mov cx, ax  [x1105]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:01ca  add dx, cx  [x1105]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:01cc  mov al, byte ptr [si + 1]  [x1105]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
L151df:
    if (c.tracing) c.traceAt(0x151df);
    // 1501:01cf  mov byte ptr es:[di], al  [x29585]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:01d2  inc di  [x29585]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:01d3  loop 0x1cf  [x29585]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151df;
L151e5:
    if (c.tracing) c.traceAt(0x151e5);
    // 1501:01d5  add si, 2  [x1105]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:01d8  jmp 0x1ed  [x1105]
    goto L151fd;
L151ea:
    if (c.tracing) c.traceAt(0x151ea);
    // 1501:01da  mov cx, ax  [x478]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:01dc  inc cx  [x478]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:01dd  add dx, cx  [x478]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:01df  inc si  [x478]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L151f0:
    if (c.tracing) c.traceAt(0x151f0);
    // 1501:01e0  mov al, byte ptr [si]  [x2415]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:01e2  cmp al, 0  [x2415]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:01e4  je 0x1e9  [x2415]
    if (c.zf) goto L151f9;
L151f6:
    if (c.tracing) c.traceAt(0x151f6);
    // 1501:01e6  mov byte ptr es:[di], al  [x2199]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L151f9:
    if (c.tracing) c.traceAt(0x151f9);
    // 1501:01e9  inc si  [x2415]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:01ea  inc di  [x2415]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:01eb  loop 0x1e0  [x2415]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151f0;
L151fd:
    if (c.tracing) c.traceAt(0x151fd);
    // 1501:01ed  cmp di, bp  [x1583]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:01ef  jb 0x1bc  [x1583]
    if (c.cf) goto L151cc;
L15201:
    if (c.tracing) c.traceAt(0x15201);
    // 1501:01f1  ret   [x800]
    c.ip = c.pop16(); return;
L15202:
    if (c.tracing) c.traceAt(0x15202);
    // 1501:01f2  mov si, word ptr [0x1b9e]  [x304]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1b9eu)));
    // 1501:01f6  mov ax, word ptr [si + 0x1496]  [x304]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1496u)));
    // 1501:01fa  cdq   [x304]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:01fb  idiv word ptr [0x1ba9]  [x304]
    while (!c.idiv16(c.r16(c.dsb + (uint16_t)(0x1ba9u)))) { c.d32 = false; c.intr(0, 0x1fbu); }   // #DE: int 0, then again
    // 1501:01ff  mov word ptr [0x1ba0], ax  [x304]
    c.w16(c.dsb + (uint16_t)(0x1ba0u), c.a.x);
    // 1501:0202  mov si, word ptr [0x1ba4]  [x304]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1ba4u)));
    // 1501:0206  mov ax, word ptr [si + 0x1496]  [x304]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1496u)));
    // 1501:020a  cdq   [x304]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:020b  mov bx, 0x94  [x304]
    c.b.x = (uint16_t)(0x94u);
    // 1501:020e  idiv bx  [x304]
    while (!c.idiv16(c.b.x)) { c.d32 = false; c.intr(0, 0x20eu); }   // #DE: int 0, then again
    // 1501:0210  mov word ptr [0x1ba6], ax  [x304]
    c.w16(c.dsb + (uint16_t)(0x1ba6u), c.a.x);
    // 1501:0213  add word ptr [0x1b9e], 4  [x304]
    c.w16(c.dsb + (uint16_t)(0x1b9eu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1b9eu)), 0x4u, false));
    // 1501:0218  cmp byte ptr [0x1ba8], 1  [x304]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1ba8u)), 0x1u, true);
    // 1501:021d  jae 0x244  [x304]
    if (!c.cf) goto L15254;
L1522f:
    if (c.tracing) c.traceAt(0x1522f);
    // 1501:021f  cmp word ptr [0x1b9e], 0x2d0  [x90]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1b9eu)), 0x2d0u, true);
    // 1501:0225  jb 0x231  [x90]
    if (c.cf) goto L15241;
L15237:
    if (c.tracing) c.traceAt(0x15237);
    // 1501:0227  sub word ptr [0x1b9e], 0x2d0  [x1]
    c.w16(c.dsb + (uint16_t)(0x1b9eu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1b9eu)), 0x2d0u, true));
    // 1501:022d  inc byte ptr [0x1ba8]  [x1]
    c.w8(c.dsb + (uint16_t)(0x1ba8u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x1ba8u)), true));
L15241:
    if (c.tracing) c.traceAt(0x15241);
    // 1501:0231  add word ptr [0x1ba4], 2  [x90]
    c.w16(c.dsb + (uint16_t)(0x1ba4u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x1ba4u)), 0x2u, false));
    // 1501:0236  cmp word ptr [0x1ba4], 0x2d0  [x90]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1ba4u)), 0x2d0u, true);
    // 1501:023c  jb 0x244  [x90]
    if (c.cf) goto L15254;
L1524e:
    if (c.tracing) c.traceAt(0x1524e);
    // 1501:023e  sub word ptr [0x1ba4], 0x2d0  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ba4u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1ba4u)), 0x2d0u, true));
L15254:
    if (c.tracing) c.traceAt(0x15254);
    // 1501:0244  ret   [x304]
    c.ip = c.pop16(); return;
}

static Register reg_code_19(19, {0x15010, 0x1501b, 0x1502a, 0x1503b, 0x1503e, 0x15040, 0x15046, 0x1504f, 0x1505c, 0x15066, 0x1506e, 0x15083, 0x15089, 0x1508a, 0x1508e, 0x1508f, 0x15093, 0x15095, 0x15098, 0x150a7, 0x150b5, 0x150cb, 0x150d5, 0x150de, 0x150df, 0x150e3, 0x150e6, 0x150e7, 0x150eb, 0x150ec, 0x150f0, 0x15103, 0x15110, 0x15112, 0x1511e, 0x15120, 0x15123, 0x15124, 0x15147, 0x15154, 0x15156, 0x1515b, 0x15161, 0x15167, 0x1516d, 0x15174, 0x1518d, 0x15192, 0x1519f, 0x151ac, 0x151be, 0x151bf, 0x151cc, 0x151d4, 0x151df, 0x151e5, 0x151ea, 0x151f0, 0x151f6, 0x151f9, 0x151fd, 0x15201, 0x15202, 0x1522f, 0x15237, 0x15241, 0x1524e, 0x15254}, code_19);

}  // namespace show
