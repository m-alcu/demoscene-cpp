// Part 5 (COPPER.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_6(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1505d: goto L1505d;
    case 0x1506c: goto L1506c;
    case 0x15076: goto L15076;
    case 0x15079: goto L15079;
    case 0x15082: goto L15082;
    case 0x15088: goto L15088;
    case 0x15091: goto L15091;
    case 0x150a0: goto L150a0;
    case 0x150b5: goto L150b5;
    case 0x150e4: goto L150e4;
    case 0x150ea: goto L150ea;
    case 0x150f7: goto L150f7;
    case 0x150fd: goto L150fd;
    case 0x1511b: goto L1511b;
    case 0x15125: goto L15125;
    case 0x1512e: goto L1512e;
    case 0x1512f: goto L1512f;
    case 0x15133: goto L15133;
    case 0x15136: goto L15136;
    case 0x15137: goto L15137;
    case 0x1513b: goto L1513b;
    case 0x1513c: goto L1513c;
    case 0x15140: goto L15140;
    case 0x15159: goto L15159;
    case 0x15163: goto L15163;
    case 0x15165: goto L15165;
    case 0x15169: goto L15169;
    case 0x15176: goto L15176;
    case 0x1517c: goto L1517c;
    case 0x15195: goto L15195;
    case 0x1519a: goto L1519a;
    case 0x151a0: goto L151a0;
    case 0x151a8: goto L151a8;
    case 0x151b6: goto L151b6;
    case 0x151b8: goto L151b8;
    case 0x151bb: goto L151bb;
    case 0x151bc: goto L151bc;
    case 0x151e2: goto L151e2;
    case 0x151f0: goto L151f0;
    case 0x151f2: goto L151f2;
    case 0x151f7: goto L151f7;
    case 0x151fd: goto L151fd;
    case 0x15203: goto L15203;
    case 0x15209: goto L15209;
    case 0x15210: goto L15210;
    case 0x1522d: goto L1522d;
    case 0x15233: goto L15233;
    case 0x15241: goto L15241;
    case 0x15251: goto L15251;
    case 0x15267: goto L15267;
    case 0x15268: goto L15268;
    case 0x15277: goto L15277;
    case 0x1527f: goto L1527f;
    case 0x1528a: goto L1528a;
    case 0x15290: goto L15290;
    case 0x15295: goto L15295;
    case 0x1529b: goto L1529b;
    case 0x152a1: goto L152a1;
    case 0x152a4: goto L152a4;
    case 0x152a8: goto L152a8;
    case 0x152ac: goto L152ac;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x4d  [x1]
    goto L1505d;
L1505d:
    if (c.tracing) c.traceAt(0x1505d);
    // 1501:004d  mov word ptr cs:[0x49], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x49u), c.c.x);
    // 1501:0052  mov word ptr cs:[0x4b], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x4bu), c.dx_.x);
    // 1501:0057  mov ax, 0xd  [x1]
    c.a.x = (uint16_t)(0xdu);
    // 1501:005a  int 0x10  [x1]
    c.ip = 0x5cu; c.d32 = false; c.intr(0x10, 0x5cu);
L1506c:
    if (c.tracing) c.traceAt(0x1506c);
    // 1501:005c  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:005f  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0061  out dx, al  [x1]
    c.ip = 0x62u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0062  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0063  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L15076:
    if (c.tracing) c.traceAt(0x15076);
    // 1501:0066  out dx, al  [x48]
    c.ip = 0x67u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0067  loop 0x66  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15076;
L15079:
    if (c.tracing) c.traceAt(0x15079);
    // 1501:0069  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:006c  mov ax, 0x2813  [x1]
    c.a.x = (uint16_t)(0x2813u);
    // 1501:006f  out dx, ax  [x1]
    c.ip = 0x70u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0070  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L15082:
    if (c.tracing) c.traceAt(0x15082);
    // 1501:0072  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:0074  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:0076  int 0x10  [x16]
    c.ip = 0x78u; c.d32 = false; c.intr(0x10, 0x78u);
L15088:
    if (c.tracing) c.traceAt(0x15088);
    // 1501:0078  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:007a  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:007c  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:007f  jne 0x72  [x16]
    if (!c.zf) goto L15082;
L15091:
    if (c.tracing) c.traceAt(0x15091);
    // 1501:0081  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:0084  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0086  mov word ptr cs:[9], 0x3ea8  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), 0x3ea8u);
    // 1501:008d  call 0x1ac  [x1]
    c.push16(0x90u); code_6(c, 0x151bcu); if (c.ip != 0x90u) c.badReturn(0x1509d);
L150a0:
    if (c.tracing) c.traceAt(0x150a0);
    // 1501:0090  push es  [x518]
    c.ip = 0x90u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:0091  mov ax, word ptr cs:[0x49]  [x518]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x49u)));
    // 1501:0095  mov es, ax  [x518]
    c.loadEs(c.a.x);
    // 1501:0097  mov si, word ptr cs:[0x4b]  [x518]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4bu)));
    // 1501:009c  mov dx, word ptr es:[si]  [x518]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:009f  pop es  [x518]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00a0  cmp dx, 0  [x518]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:00a3  je 0x90  [x518]
    if (c.zf) goto L150a0;
L150b5:
    if (c.tracing) c.traceAt(0x150b5);
    // 1501:00a5  mov si, word ptr [0x2322]  [x356]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2322u)));
    // 1501:00a9  mov ax, word ptr [si + 0x1d82]  [x356]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1d82u)));
    // 1501:00ad  mov cx, 0x7fff  [x356]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:00b0  mov dx, word ptr [0x2324]  [x356]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2324u)));
    // 1501:00b4  imul dx  [x356]
    c.imul16(c.dx_.x);
    // 1501:00b6  idiv cx  [x356]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xb6u); }   // #DE: int 0, then again
    // 1501:00b8  mov word ptr [0x2326], ax  [x356]
    c.w16(c.dsb + (uint16_t)(0x2326u), c.a.x);
    // 1501:00bb  mov ax, word ptr [si + 0x1c1a]  [x356]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1c1au)));
    // 1501:00bf  mov cx, 0x7fff  [x356]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:00c2  mov dx, word ptr [0x2324]  [x356]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2324u)));
    // 1501:00c6  imul dx  [x356]
    c.imul16(c.dx_.x);
    // 1501:00c8  idiv cx  [x356]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xc8u); }   // #DE: int 0, then again
    // 1501:00ca  mov word ptr [0x232a], ax  [x356]
    c.w16(c.dsb + (uint16_t)(0x232au), c.a.x);
    // 1501:00cd  sub word ptr [0x2324], 2  [x356]
    c.w16(c.dsb + (uint16_t)(0x2324u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2324u)), 0x2u, true));
    // 1501:00d2  jns 0xda  [x356]
    if (!c.sf) goto L150ea;
L150e4:
    if (c.tracing) c.traceAt(0x150e4);
    // 1501:00d4  mov word ptr [0x2324], 0  [x232]
    c.w16(c.dsb + (uint16_t)(0x2324u), 0x0u);
L150ea:
    if (c.tracing) c.traceAt(0x150ea);
    // 1501:00da  add word ptr [0x2322], 0xe  [x356]
    c.w16(c.dsb + (uint16_t)(0x2322u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x2322u)), 0xeu, false));
    // 1501:00df  cmp word ptr [0x2322], 0x5a0  [x356]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2322u)), 0x5a0u, true);
    // 1501:00e5  jb 0xed  [x356]
    if (c.cf) goto L150fd;
L150f7:
    if (c.tracing) c.traceAt(0x150f7);
    // 1501:00e7  sub word ptr [0x2322], 0x5a0  [x3]
    c.w16(c.dsb + (uint16_t)(0x2322u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2322u)), 0x5a0u, true));
L150fd:
    if (c.tracing) c.traceAt(0x150fd);
    // 1501:00ed  mov bx, word ptr [0x2328]  [x356]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2328u)));
    // 1501:00f1  sar bx, 3  [x356]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:00f4  mov ax, 0x50  [x356]
    c.a.x = (uint16_t)(0x50u);
    // 1501:00f7  imul word ptr [0x232a]  [x356]
    c.imul16(c.r16(c.dsb + (uint16_t)(0x232au)));
    // 1501:00fb  add bx, ax  [x356]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:00fd  add bx, 0x3ea8  [x356]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x3ea8u, true));
    // 1501:0101  mov dx, 0x3d4  [x356]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0104  mov al, 0xd  [x356]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0106  mov ah, bl  [x356]
    c.a.h = (uint8_t)(c.b.l);
    // 1501:0108  out dx, ax  [x356]
    c.ip = 0x109u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0109  jmp 0x10b  [x356]
    goto L1511b;
L1511b:
    if (c.tracing) c.traceAt(0x1511b);
    // 1501:010b  mov dx, 0x3d4  [x356]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:010e  mov al, 0xc  [x356]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0110  mov ah, bh  [x356]
    c.a.h = (uint8_t)(c.b.h);
    // 1501:0112  out dx, ax  [x356]
    c.ip = 0x113u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0113  jmp 0x115  [x356]
    goto L15125;
L15125:
    if (c.tracing) c.traceAt(0x15125);
    // 1501:0115  mov ax, word ptr [0x2326]  [x356]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2326u)));
    // 1501:0118  mov word ptr [0x2328], ax  [x356]
    c.w16(c.dsb + (uint16_t)(0x2328u), c.a.x);
    // 1501:011b  mov dx, 0x3da  [x356]
    c.dx_.x = (uint16_t)(0x3dau);
L1512e:
    if (c.tracing) c.traceAt(0x1512e);
    // 1501:011e  in al, dx  [x15721]
    c.ip = 0x11fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1512f:
    if (c.tracing) c.traceAt(0x1512f);
    // 1501:011f  test al, 8  [x20724]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:0121  je 0x11e  [x20724]
    if (c.zf) goto L1512e;
L15133:
    if (c.tracing) c.traceAt(0x15133);
    // 1501:0123  mov dx, 0x3da  [x356]
    c.dx_.x = (uint16_t)(0x3dau);
L15136:
    if (c.tracing) c.traceAt(0x15136);
    // 1501:0126  in al, dx  [x2690]
    c.ip = 0x127u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15137:
    if (c.tracing) c.traceAt(0x15137);
    // 1501:0127  test al, 1  [x3468]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:0129  jne 0x126  [x3468]
    if (!c.zf) goto L15136;
L1513b:
    if (c.tracing) c.traceAt(0x1513b);
    // 1501:012b  in al, dx  [x1098]
    c.ip = 0x12cu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1513c:
    if (c.tracing) c.traceAt(0x1513c);
    // 1501:012c  test al, 1  [x1464]
    c.logic<8>((c.a.l) & (0x1u), true);
    // 1501:012e  je 0x12b  [x1464]
    if (c.zf) goto L1513b;
L15140:
    if (c.tracing) c.traceAt(0x15140);
    // 1501:0130  mov dx, 0x3c0  [x356]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 1501:0133  mov al, 0x33  [x356]
    c.a.l = (uint8_t)(0x33u);
    // 1501:0135  out dx, al  [x356]
    c.ip = 0x136u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0136  mov ax, word ptr [0x2326]  [x356]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2326u)));
    // 1501:0139  and al, 7  [x356]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x7u), false));
    // 1501:013b  out dx, al  [x356]
    c.ip = 0x13cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:013c  mov dx, 0x3c8  [x356]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:013f  xor al, al  [x356]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0141  out dx, al  [x356]
    c.ip = 0x142u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0142  inc dx  [x356]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0143  mov cx, 0x30  [x356]
    c.c.x = (uint16_t)(0x30u);
    // 1501:0146  mov si, 0xb  [x356]
    c.si.x = (uint16_t)(0xbu);
L15159:
    if (c.tracing) c.traceAt(0x15159);
    // 1501:0149  mov al, byte ptr cs:[si]  [x17088]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:014c  sub al, byte ptr cs:[0x47]  [x17088]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.r8(c.csb + (uint16_t)(0x47u)), true));
    // 1501:0151  jns 0x155  [x17088]
    if (!c.sf) goto L15165;
L15163:
    if (c.tracing) c.traceAt(0x15163);
    // 1501:0153  xor al, al  [x4709]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L15165:
    if (c.tracing) c.traceAt(0x15165);
    // 1501:0155  out dx, al  [x17088]
    c.ip = 0x156u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0156  inc si  [x17088]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:0157  loop 0x149  [x17088]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15159;
L15169:
    if (c.tracing) c.traceAt(0x15169);
    // 1501:0159  inc word ptr cs:[0x45]  [x356]
    c.w16(c.csb + (uint16_t)(0x45u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x45u)), false));
    // 1501:015e  cmp word ptr cs:[0x45], 0x20  [x356]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x45u)), 0x20u, true);
    // 1501:0164  jae 0x16c  [x356]
    if (!c.cf) goto L1517c;
L15176:
    if (c.tracing) c.traceAt(0x15176);
    // 1501:0166  sub byte ptr cs:[0x47], 2  [x31]
    c.w8(c.csb + (uint16_t)(0x47u), c.sub<8>(c.r8(c.csb + (uint16_t)(0x47u)), 0x2u, true));
L1517c:
    if (c.tracing) c.traceAt(0x1517c);
    // 1501:016c  push es  [x356]
    c.push16(c.es);
    // 1501:016d  mov ax, word ptr cs:[0x49]  [x356]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x49u)));
    // 1501:0171  mov es, ax  [x356]
    c.loadEs(c.a.x);
    // 1501:0173  mov si, word ptr cs:[0x4b]  [x356]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x4bu)));
    // 1501:0178  mov dx, word ptr es:[si]  [x356]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:017b  pop es  [x356]
    c.loadEs((uint16_t)c.pop16());
    // 1501:017c  cmp word ptr cs:[0x45], 0x110  [x356]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x45u)), 0x110u, true);
    // 1501:0183  jb 0x190  [x356]
    if (c.cf) goto L151a0;
L15195:
    if (c.tracing) c.traceAt(0x15195);
    // 1501:0185  cmp dx, 0  [x85]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:0188  je 0x190  [x85]
    if (c.zf) goto L151a0;
L1519a:
    if (c.tracing) c.traceAt(0x1519a);
    // 1501:018a  mov byte ptr cs:[0x48], 1  [x3]
    c.w8(c.csb + (uint16_t)(0x48u), 0x1u);
L151a0:
    if (c.tracing) c.traceAt(0x151a0);
    // 1501:0190  cmp byte ptr cs:[0x48], 0  [x356]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x48u)), 0x0u, true);
    // 1501:0196  je 0x1a8  [x356]
    if (c.zf) goto L151b8;
L151a8:
    if (c.tracing) c.traceAt(0x151a8);
    // 1501:0198  add byte ptr cs:[0x47], 4  [x20]
    c.w8(c.csb + (uint16_t)(0x47u), c.add<8>(c.r8(c.csb + (uint16_t)(0x47u)), 0x4u, false));
    // 1501:019e  cmp byte ptr cs:[0x47], 0x50  [x20]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x47u)), 0x50u, true);
    // 1501:01a4  jb 0x1a8  [x20]
    if (c.cf) goto L151b8;
L151b6:
    if (c.tracing) c.traceAt(0x151b6);
    // 1501:01a6  jmp 0x1ab  [x1]
    goto L151bb;
L151b8:
    if (c.tracing) c.traceAt(0x151b8);
    // 1501:01a8  jmp 0xa5  [x355]
    goto L150b5;
L151bb:
    if (c.tracing) c.traceAt(0x151bb);
    // 1501:01ab  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L151bc:
    if (c.tracing) c.traceAt(0x151bc);
    // 1501:01ac  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:01ae  mov cl, byte ptr [0x1c]  [x1]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1cu)));
    // 1501:01b2  rol al, cl  [x1]
    c.a.l = (uint8_t)(c.rol<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:01b4  mov byte ptr cs:[0x3e], al  [x1]
    c.w8(c.csb + (uint16_t)(0x3eu), c.a.l);
    // 1501:01b8  mov ax, word ptr [0x16]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16u)));
    // 1501:01bb  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:01bd  mov word ptr cs:[0x41], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x41u), c.a.x);
    // 1501:01c1  mov ax, word ptr [0x14]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x14u)));
    // 1501:01c4  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:01c6  shr ax, 3  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x3u) & 31), false));
    // 1501:01c9  mov word ptr cs:[0x43], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x43u), c.a.x);
    // 1501:01cd  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:01d0  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L151e2:
    if (c.tracing) c.traceAt(0x151e2);
    // 1501:01d2  mov al, byte ptr [si + 0x30]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x30u)));
    // 1501:01d5  shr al, 2  [x48]
    c.a.l = (uint8_t)(c.shr<8>(c.a.l, (int)((0x2u) & 31), true));
    // 1501:01d8  mov byte ptr cs:[si + 0xb], al  [x48]
    c.w8(c.csb + (uint16_t)(c.si.x + 0xbu), c.a.l);
    // 1501:01dd  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:01de  loop 0x1d2  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L151e2;
L151f0:
    if (c.tracing) c.traceAt(0x151f0);
    // 1501:01e0  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L151f2:
    if (c.tracing) c.traceAt(0x151f2);
    // 1501:01e2  cmp byte ptr [si], 0x42  [x97]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x42u, true);
    // 1501:01e5  jne 0x1f9  [x97]
    if (!c.zf) goto L15209;
L151f7:
    if (c.tracing) c.traceAt(0x151f7);
    // 1501:01e7  cmp byte ptr [si + 1], 0x4f  [x3]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)), 0x4fu, true);
    // 1501:01eb  jne 0x1f9  [x3]
    if (!c.zf) goto L15209;
L151fd:
    if (c.tracing) c.traceAt(0x151fd);
    // 1501:01ed  cmp byte ptr [si + 2], 0x44  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x2u)), 0x44u, true);
    // 1501:01f1  jne 0x1f9  [x1]
    if (!c.zf) goto L15209;
L15203:
    if (c.tracing) c.traceAt(0x15203);
    // 1501:01f3  cmp byte ptr [si + 3], 0x59  [x1]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3u)), 0x59u, true);
    // 1501:01f7  je 0x200  [x1]
    if (c.zf) goto L15210;
L15209:
    if (c.tracing) c.traceAt(0x15209);
    // 1501:01f9  inc si  [x96]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:01fa  cmp si, 0x300  [x96]
    c.sub<16>(c.si.x, 0x300u, true);
    // 1501:01fe  jb 0x1e2  [x96]
    if (c.cf) goto L151f2;
L15210:
    if (c.tracing) c.traceAt(0x15210);
    // 1501:0200  mov ax, word ptr [si + 6]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x6u)));
    // 1501:0203  xchg ah, al  [x1]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:0205  add si, 8  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:0208  add ax, si  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.si.x, true));
    // 1501:020a  mov word ptr cs:[0x3f], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x3fu), c.a.x);
    // 1501:020e  mov word ptr cs:[0x3b], 0  [x1]
    c.w16(c.csb + (uint16_t)(0x3bu), 0x0u);
    // 1501:0215  mov ax, word ptr cs:[9]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:0219  mov word ptr cs:[7], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x7u), c.a.x);
L1522d:
    if (c.tracing) c.traceAt(0x1522d);
    // 1501:021d  mov byte ptr cs:[0x3d], 1  [x200]
    c.w8(c.csb + (uint16_t)(0x3du), 0x1u);
L15233:
    if (c.tracing) c.traceAt(0x15233);
    // 1501:0223  mov dx, 0x3c4  [x800]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0226  mov al, 2  [x800]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0228  mov ah, byte ptr cs:[0x3d]  [x800]
    c.a.h = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3du)));
    // 1501:022d  out dx, ax  [x800]
    c.ip = 0x22eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:022e  call 0x258  [x800]
    c.push16(0x231u); code_6(c, 0x15268u); if (c.ip != 0x231u) c.badReturn(0x1523e);
L15241:
    if (c.tracing) c.traceAt(0x15241);
    // 1501:0231  rol byte ptr cs:[0x3d], 1  [x800]
    c.w8(c.csb + (uint16_t)(0x3du), c.rol<8>(c.r8(c.csb + (uint16_t)(0x3du)), (int)((0x1u) & 31), false));
    // 1501:0236  mov al, byte ptr cs:[0x3e]  [x800]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(0x3eu)));
    // 1501:023a  cmp byte ptr cs:[0x3d], al  [x800]
    c.sub<8>(c.r8(c.csb + (uint16_t)(0x3du)), c.a.l, true);
    // 1501:023f  jb 0x223  [x800]
    if (c.cf) goto L15233;
L15251:
    if (c.tracing) c.traceAt(0x15251);
    // 1501:0241  add word ptr cs:[7], 0x50  [x200]
    c.w16(c.csb + (uint16_t)(0x7u), c.add<16>(c.r16(c.csb + (uint16_t)(0x7u)), 0x50u, false));
    // 1501:0247  inc word ptr cs:[0x3b]  [x200]
    c.w16(c.csb + (uint16_t)(0x3bu), c.inc<16>(c.r16(c.csb + (uint16_t)(0x3bu)), false));
    // 1501:024c  mov ax, word ptr cs:[0x41]  [x200]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x41u)));
    // 1501:0250  cmp word ptr cs:[0x3b], ax  [x200]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x3bu)), c.a.x, true);
    // 1501:0255  jb 0x21d  [x200]
    if (c.cf) goto L1522d;
L15267:
    if (c.tracing) c.traceAt(0x15267);
    // 1501:0257  ret   [x1]
    c.ip = c.pop16(); return;
L15268:
    if (c.tracing) c.traceAt(0x15268);
    // 1501:0258  mov di, word ptr cs:[7]  [x800]
    c.di.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:025d  mov bp, di  [x800]
    c.bp.x = (uint16_t)(c.di.x);
    // 1501:025f  add bp, word ptr cs:[0x43]  [x800]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x43u)), true));
    // 1501:0264  mov dx, 0  [x800]
    c.dx_.x = (uint16_t)(0x0u);
L15277:
    if (c.tracing) c.traceAt(0x15277);
    // 1501:0267  mov al, byte ptr [si]  [x1562]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0269  xor ah, ah  [x1562]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 1501:026b  cmp al, 0x80  [x1562]
    c.sub<8>(c.a.l, 0x80u, true);
    // 1501:026d  jb 0x285  [x1562]
    if (c.cf) goto L15295;
L1527f:
    if (c.tracing) c.traceAt(0x1527f);
    // 1501:026f  neg al  [x1074]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 1501:0271  inc al  [x1074]
    c.a.l = (uint8_t)(c.inc<8>(c.a.l, false));
    // 1501:0273  mov cx, ax  [x1074]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0275  add dx, cx  [x1074]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:0277  mov al, byte ptr [si + 1]  [x1074]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
L1528a:
    if (c.tracing) c.traceAt(0x1528a);
    // 1501:027a  mov byte ptr es:[di], al  [x27547]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:027d  inc di  [x27547]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:027e  loop 0x27a  [x27547]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1528a;
L15290:
    if (c.tracing) c.traceAt(0x15290);
    // 1501:0280  add si, 2  [x1074]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:0283  jmp 0x298  [x1074]
    goto L152a8;
L15295:
    if (c.tracing) c.traceAt(0x15295);
    // 1501:0285  mov cx, ax  [x488]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:0287  inc cx  [x488]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 1501:0288  add dx, cx  [x488]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.c.x, true));
    // 1501:028a  inc si  [x488]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L1529b:
    if (c.tracing) c.traceAt(0x1529b);
    // 1501:028b  mov al, byte ptr [si]  [x4453]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:028d  cmp al, 0  [x4453]
    c.sub<8>(c.a.l, 0x0u, true);
    // 1501:028f  je 0x294  [x4453]
    if (c.zf) goto L152a4;
L152a1:
    if (c.tracing) c.traceAt(0x152a1);
    // 1501:0291  mov byte ptr es:[di], al  [x3549]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L152a4:
    if (c.tracing) c.traceAt(0x152a4);
    // 1501:0294  inc si  [x4453]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:0295  inc di  [x4453]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:0296  loop 0x28b  [x4453]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1529b;
L152a8:
    if (c.tracing) c.traceAt(0x152a8);
    // 1501:0298  cmp di, bp  [x1562]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 1501:029a  jb 0x267  [x1562]
    if (c.cf) goto L15277;
L152ac:
    if (c.tracing) c.traceAt(0x152ac);
    // 1501:029c  ret   [x800]
    c.ip = c.pop16(); return;
}

static Register reg_code_6(6, {0x15010, 0x1505d, 0x1506c, 0x15076, 0x15079, 0x15082, 0x15088, 0x15091, 0x150a0, 0x150b5, 0x150e4, 0x150ea, 0x150f7, 0x150fd, 0x1511b, 0x15125, 0x1512e, 0x1512f, 0x15133, 0x15136, 0x15137, 0x1513b, 0x1513c, 0x15140, 0x15159, 0x15163, 0x15165, 0x15169, 0x15176, 0x1517c, 0x15195, 0x1519a, 0x151a0, 0x151a8, 0x151b6, 0x151b8, 0x151bb, 0x151bc, 0x151e2, 0x151f0, 0x151f2, 0x151f7, 0x151fd, 0x15203, 0x15209, 0x15210, 0x1522d, 0x15233, 0x15241, 0x15251, 0x15267, 0x15268, 0x15277, 0x1527f, 0x1528a, 0x15290, 0x15295, 0x1529b, 0x152a1, 0x152a4, 0x152a8, 0x152ac}, code_6);

}  // namespace show
