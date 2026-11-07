// Part 25 (BIGS.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_26(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x15017: goto L15017;
    case 0x1501c: goto L1501c;
    case 0x15021: goto L15021;
    case 0x15047: goto L15047;
    case 0x15049: goto L15049;
    case 0x1505a: goto L1505a;
    case 0x1505c: goto L1505c;
    case 0x15064: goto L15064;
    case 0x1506c: goto L1506c;
    case 0x15074: goto L15074;
    case 0x15094: goto L15094;
    case 0x150f4: goto L150f4;
    case 0x150f7: goto L150f7;
    case 0x15109: goto L15109;
    case 0x1510c: goto L1510c;
    case 0x1511d: goto L1511d;
    case 0x15126: goto L15126;
    case 0x15137: goto L15137;
    case 0x15144: goto L15144;
    case 0x15151: goto L15151;
    case 0x1515c: goto L1515c;
    case 0x15167: goto L15167;
    case 0x15172: goto L15172;
    case 0x1517d: goto L1517d;
    case 0x15188: goto L15188;
    case 0x15193: goto L15193;
    case 0x1519e: goto L1519e;
    case 0x151a9: goto L151a9;
    case 0x151b4: goto L151b4;
    case 0x151d6: goto L151d6;
    case 0x151d9: goto L151d9;
    case 0x151dc: goto L151dc;
    case 0x151dd: goto L151dd;
    case 0x151e1: goto L151e1;
    case 0x151e2: goto L151e2;
    case 0x151e6: goto L151e6;
    case 0x151fb: goto L151fb;
    case 0x15213: goto L15213;
    case 0x1521d: goto L1521d;
    case 0x15220: goto L15220;
    case 0x1527e: goto L1527e;
    case 0x152d6: goto L152d6;
    case 0x152e1: goto L152e1;
    case 0x152e3: goto L152e3;
    case 0x152e6: goto L152e6;
    case 0x152e7: goto L152e7;
    case 0x152f0: goto L152f0;
    case 0x15314: goto L15314;
    case 0x15315: goto L15315;
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
    // 1501:002d  lea si, [0xaa4f]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0xaa4fu));
    // 1501:0034  mov cx, 0xa  [x1]
    c.c.x = (uint16_t)(0xau);
L15047:
    if (c.tracing) c.traceAt(0x15047);
    // 1501:0037  rep outsw dx, word ptr [si]  [x11]
    c.ip = 0x39u; c.d32 = false; c.outs<16, false>(c.dsb, 1);
L15049:
    if (c.tracing) c.traceAt(0x15049);
    // 1501:0039  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:003c  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:003e  out dx, al  [x1]
    c.ip = 0x3fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:003f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:0040  lea si, [0xa567]  [x1]
    c.si.x = (uint16_t)((uint32_t)(0xa567u));
    // 1501:0047  mov cx, 0xc0  [x1]
    c.c.x = (uint16_t)(0xc0u);
L1505a:
    if (c.tracing) c.traceAt(0x1505a);
    // 1501:004a  rep outsb dx, byte ptr [si]  [x193]
    c.ip = 0x4cu; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L1505c:
    if (c.tracing) c.traceAt(0x1505c);
    // 1501:004c  mov al, 0x40  [x1]
    c.a.l = (uint8_t)(0x40u);
    // 1501:004e  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:0051  call 0x2d7  [x1]
    c.push16(0x54u); code_26(c, 0x152e7u); if (c.ip != 0x54u) c.badReturn(0x15061);
L15064:
    if (c.tracing) c.traceAt(0x15064);
    // 1501:0054  mov al, 0x80  [x1]
    c.a.l = (uint8_t)(0x80u);
    // 1501:0056  mov di, 3  [x1]
    c.di.x = (uint16_t)(0x3u);
    // 1501:0059  call 0x2d7  [x1]
    c.push16(0x5cu); code_26(c, 0x152e7u); if (c.ip != 0x5cu) c.badReturn(0x15069);
L1506c:
    if (c.tracing) c.traceAt(0x1506c);
    // 1501:005c  mov al, 0xc0  [x1]
    c.a.l = (uint8_t)(0xc0u);
    // 1501:005e  mov di, 6  [x1]
    c.di.x = (uint16_t)(0x6u);
    // 1501:0061  call 0x2d7  [x1]
    c.push16(0x64u); code_26(c, 0x152e7u); if (c.ip != 0x64u) c.badReturn(0x15071);
L15074:
    if (c.tracing) c.traceAt(0x15074);
    // 1501:0064  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0067  mov ax, 0x5013  [x1]
    c.a.x = (uint16_t)(0x5013u);
    // 1501:006a  out dx, ax  [x1]
    c.ip = 0x6bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:006b  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:006e  mov ax, 0x109  [x1]
    c.a.x = (uint16_t)(0x109u);
    // 1501:0071  out dx, ax  [x1]
    c.ip = 0x72u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0072  mov word ptr [0xa560], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0xa560u), 0x0u);
    // 1501:007b  mov word ptr [0xa562], 0  [x1]
    c.w16(c.dsb + (uint32_t)(0xa562u), 0x0u);
L15094:
    if (c.tracing) c.traceAt(0x15094);
    // 1501:0084  mov si, word ptr [0xaa27]  [x896]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xaa27u)));
    // 1501:008b  add word ptr [0xaa27], 3  [x896]
    c.w16(c.dsb + (uint32_t)(0xaa27u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xaa27u)), 0x3u, false));
    // 1501:0093  and word ptr [0xaa27], 0x3ff  [x896]
    c.w16(c.dsb + (uint32_t)(0xaa27u), c.logic<16>((c.r16(c.dsb + (uint32_t)(0xaa27u))) & (0x3ffu), false));
    // 1501:009c  mov di, word ptr [0xaa29]  [x896]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xaa29u)));
    // 1501:00a3  add word ptr [0xaa29], -5  [x896]
    c.w16(c.dsb + (uint32_t)(0xaa29u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xaa29u)), 0xfffbu, false));
    // 1501:00ab  and word ptr [0xaa29], 0x3ff  [x896]
    c.w16(c.dsb + (uint32_t)(0xaa29u), c.logic<16>((c.r16(c.dsb + (uint32_t)(0xaa29u))) & (0x3ffu), false));
    // 1501:00b4  mov al, byte ptr [si - 0x59d9]  [x896]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffa627u)));
    // 1501:00b8  cwde   [x896]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:00b9  mov bx, ax  [x896]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:00bb  mov al, byte ptr [di - 0x59d9]  [x896]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffa627u)));
    // 1501:00bf  cwde   [x896]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:00c0  add ax, bx  [x896]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:00c2  sar ax, 1  [x896]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:00c4  add al, 0x50  [x896]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x50u, false));
    // 1501:00c6  mov ah, 0xa0  [x896]
    c.a.h = (uint8_t)(0xa0u);
    // 1501:00c8  mul ah  [x896]
    c.mul8(c.a.h);
    // 1501:00ca  mov cx, word ptr [0xa560]  [x896]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xa560u)));
    // 1501:00d1  add cx, ax  [x896]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.a.x, true));
    // 1501:00d3  inc cx  [x896]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, true));
    // 1501:00d4  mov dx, 0x3d4  [x896]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:00d7  mov al, 0xc  [x896]
    c.a.l = (uint8_t)(0xcu);
    // 1501:00d9  mov ah, ch  [x896]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:00db  out dx, ax  [x896]
    c.ip = 0xdcu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00dc  mov al, 0xd  [x896]
    c.a.l = (uint8_t)(0xdu);
    // 1501:00de  mov ah, cl  [x896]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:00e0  out dx, ax  [x896]
    c.ip = 0xe1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00e1  call 0x1c9  [x896]
    c.push16(0xe4u); code_26(c, 0x151d9u); if (c.ip != 0xe4u) c.badReturn(0x150f1);
L150f4:
    if (c.tracing) c.traceAt(0x150f4);
    // 1501:00e4  call 0x1eb  [x896]
    c.push16(0xe7u); code_26(c, 0x151fbu); if (c.ip != 0xe7u) c.badReturn(0x150f4);
L150f7:
    if (c.tracing) c.traceAt(0x150f7);
    // 1501:00e7  inc word ptr [0xa565]  [x896]
    c.w16(c.dsb + (uint32_t)(0xa565u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xa565u)), false));
    // 1501:00ee  cmp word ptr [0xa565], 0x380  [x896]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa565u)), 0x380u, true);
    // 1501:00f7  jne 0xfc  [x896]
    if (!c.zf) goto L1510c;
L15109:
    if (c.tracing) c.traceAt(0x15109);
    // 1501:00f9  jmp 0x305  [x1]
    goto L15315;
L1510c:
    if (c.tracing) c.traceAt(0x1510c);
    // 1501:00fc  inc word ptr [0xa560]  [x895]
    c.w16(c.dsb + (uint32_t)(0xa560u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xa560u)), false));
    // 1501:0103  cmp word ptr [0xa560], 0x50  [x895]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa560u)), 0x50u, true);
    // 1501:010b  jb 0x116  [x895]
    if (c.cf) goto L15126;
L1511d:
    if (c.tracing) c.traceAt(0x1511d);
    // 1501:010d  mov word ptr [0xa560], 0  [x11]
    c.w16(c.dsb + (uint32_t)(0xa560u), 0x0u);
L15126:
    if (c.tracing) c.traceAt(0x15126);
    // 1501:0116  inc word ptr [0xa562]  [x895]
    c.w16(c.dsb + (uint32_t)(0xa562u), c.inc<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), false));
    // 1501:011d  cmp word ptr [0xa562], 0x57  [x895]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x57u, true);
    // 1501:0125  je 0x1a4  [x895]
    if (c.zf) goto L151b4;
L15137:
    if (c.tracing) c.traceAt(0x15137);
    // 1501:0127  nop   [x894]
    // 1501:0128  nop   [x894]
    // 1501:0129  cmp word ptr [0xa562], 0x94  [x894]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x94u, true);
    // 1501:0132  je 0x1a4  [x894]
    if (c.zf) goto L151b4;
L15144:
    if (c.tracing) c.traceAt(0x15144);
    // 1501:0134  nop   [x893]
    // 1501:0135  nop   [x893]
    // 1501:0136  cmp word ptr [0xa562], 0xd1  [x893]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0xd1u, true);
    // 1501:013f  je 0x1a4  [x893]
    if (c.zf) goto L151b4;
L15151:
    if (c.tracing) c.traceAt(0x15151);
    // 1501:0141  cmp word ptr [0xa562], 0x10e  [x892]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x10eu, true);
    // 1501:014a  je 0x1a4  [x892]
    if (c.zf) goto L151b4;
L1515c:
    if (c.tracing) c.traceAt(0x1515c);
    // 1501:014c  cmp word ptr [0xa562], 0x17c  [x891]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x17cu, true);
    // 1501:0155  je 0x1a4  [x891]
    if (c.zf) goto L151b4;
L15167:
    if (c.tracing) c.traceAt(0x15167);
    // 1501:0157  cmp word ptr [0xa562], 0x1b9  [x890]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x1b9u, true);
    // 1501:0160  je 0x1a4  [x890]
    if (c.zf) goto L151b4;
L15172:
    if (c.tracing) c.traceAt(0x15172);
    // 1501:0162  cmp word ptr [0xa562], 0x1f6  [x889]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x1f6u, true);
    // 1501:016b  je 0x1a4  [x889]
    if (c.zf) goto L151b4;
L1517d:
    if (c.tracing) c.traceAt(0x1517d);
    // 1501:016d  cmp word ptr [0xa562], 0x233  [x888]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x233u, true);
    // 1501:0176  je 0x1a4  [x888]
    if (c.zf) goto L151b4;
L15188:
    if (c.tracing) c.traceAt(0x15188);
    // 1501:0178  cmp word ptr [0xa562], 0x270  [x887]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x270u, true);
    // 1501:0181  je 0x1a4  [x887]
    if (c.zf) goto L151b4;
L15193:
    if (c.tracing) c.traceAt(0x15193);
    // 1501:0183  cmp word ptr [0xa562], 0x295  [x886]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x295u, true);
    // 1501:018c  je 0x1a4  [x886]
    if (c.zf) goto L151b4;
L1519e:
    if (c.tracing) c.traceAt(0x1519e);
    // 1501:018e  cmp word ptr [0xa562], 0x2d2  [x885]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x2d2u, true);
    // 1501:0197  je 0x1a4  [x885]
    if (c.zf) goto L151b4;
L151a9:
    if (c.tracing) c.traceAt(0x151a9);
    // 1501:0199  cmp word ptr [0xa562], 0x3e8  [x884]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), 0x3e8u, true);
    // 1501:01a2  jne 0x1c6  [x884]
    if (!c.zf) goto L151d6;
L151b4:
    if (c.tracing) c.traceAt(0x151b4);
    // 1501:01a4  add byte ptr [0xa564], 0x40  [x11]
    c.w8(c.dsb + (uint32_t)(0xa564u), c.add<8>(c.r8(c.dsb + (uint32_t)(0xa564u)), 0x40u, false));
    // 1501:01ac  add word ptr [0xaa63], 3  [x11]
    c.w16(c.dsb + (uint32_t)(0xaa63u), c.add<16>(c.r16(c.dsb + (uint32_t)(0xaa63u)), 0x3u, false));
    // 1501:01b4  mov di, word ptr [0xaa63]  [x11]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xaa63u)));
    // 1501:01bb  mov al, byte ptr [0xa564]  [x11]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(0xa564u)));
    // 1501:01c1  add al, 0x40  [x11]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x40u, true));
    // 1501:01c3  call 0x2d7  [x11]
    c.push16(0x1c6u); code_26(c, 0x152e7u); if (c.ip != 0x1c6u) c.badReturn(0x151d3);
L151d6:
    if (c.tracing) c.traceAt(0x151d6);
    // 1501:01c6  jmp 0x84  [x895]
    goto L15094;
L151d9:
    if (c.tracing) c.traceAt(0x151d9);
    // 1501:01c9  mov dx, 0x3da  [x896]
    c.dx_.x = (uint16_t)(0x3dau);
L151dc:
    if (c.tracing) c.traceAt(0x151dc);
    // 1501:01cc  in al, dx  [x3537]
    c.ip = 0x1cdu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L151dd:
    if (c.tracing) c.traceAt(0x151dd);
    // 1501:01cd  test al, 8  [x4716]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:01cf  jne 0x1cc  [x4716]
    if (!c.zf) goto L151dc;
L151e1:
    if (c.tracing) c.traceAt(0x151e1);
    // 1501:01d1  in al, dx  [x45188]
    c.ip = 0x1d2u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L151e2:
    if (c.tracing) c.traceAt(0x151e2);
    // 1501:01d2  test al, 8  [x59952]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:01d4  je 0x1d1  [x59952]
    if (c.zf) goto L151e1;
L151e6:
    if (c.tracing) c.traceAt(0x151e6);
    // 1501:01d6  ret   [x896]
    c.ip = c.pop16(); return;
L151fb:
    if (c.tracing) c.traceAt(0x151fb);
    // 1501:01eb  mov di, word ptr [0xa560]  [x896]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xa560u)));
    // 1501:01f2  add di, 0x3e80  [x896]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3e80u, false));
    // 1501:01f6  mov si, word ptr [0xa562]  [x896]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(0xa562u)));
    // 1501:01fd  cmp si, 0x30f  [x896]
    c.sub<16>(c.si.x, 0x30fu, true);
    // 1501:0201  jb 0x20d  [x896]
    if (c.cf) goto L1521d;
L15213:
    if (c.tracing) c.traceAt(0x15213);
    // 1501:0203  dec word ptr [0xa562]  [x113]
    c.w16(c.dsb + (uint32_t)(0xa562u), c.dec<16>(c.r16(c.dsb + (uint32_t)(0xa562u)), true));
    // 1501:020a  mov si, 0  [x113]
    c.si.x = (uint16_t)(0x0u);
L1521d:
    if (c.tracing) c.traceAt(0x1521d);
    // 1501:020d  mov cx, 0x35  [x896]
    c.c.x = (uint16_t)(0x35u);
L15220:
    if (c.tracing) c.traceAt(0x15220);
    // 1501:0210  push si  [x47488]
    c.push16(c.si.x);
    // 1501:0211  mov ah, byte ptr [si]  [x47488]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x)));
    // 1501:0215  xor al, al  [x47488]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:0217  shl ax, 1  [x47488]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0219  mov bh, byte ptr [si + 1]  [x47488]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x1u)));
    // 1501:021d  xor bl, bl  [x47488]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) ^ (c.b.l), false));
    // 1501:021f  shl bx, 1  [x47488]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:0221  mov dx, ax  [x47488]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:0223  sub dx, bx  [x47488]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:0225  sar dx, 2  [x47488]
    c.dx_.x = (uint16_t)(c.sar<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 1501:0228  mov word ptr cs:[0x1db], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1dbu), c.a.x);
    // 1501:022c  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:022e  mov word ptr cs:[0x1dd], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1ddu), c.a.x);
    // 1501:0232  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:0234  mov word ptr cs:[0x1df], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1dfu), c.a.x);
    // 1501:0238  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:023a  mov word ptr cs:[0x1e1], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1e1u), c.a.x);
    // 1501:023e  mov ah, byte ptr [si + 0x310]  [x47488]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x310u)));
    // 1501:0242  xor al, al  [x47488]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:0244  shl ax, 1  [x47488]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 1501:0246  mov bh, byte ptr [si + 0x311]  [x47488]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x311u)));
    // 1501:024a  xor bl, bl  [x47488]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) ^ (c.b.l), false));
    // 1501:024c  shl bx, 1  [x47488]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:024e  mov dx, ax  [x47488]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:0250  sub dx, bx  [x47488]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:0252  sar dx, 2  [x47488]
    c.dx_.x = (uint16_t)(c.sar<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 1501:0255  mov word ptr cs:[0x1e3], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1e3u), c.a.x);
    // 1501:0259  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:025b  mov word ptr cs:[0x1e5], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1e5u), c.a.x);
    // 1501:025f  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:0261  mov word ptr cs:[0x1e7], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1e7u), c.a.x);
    // 1501:0265  sub ax, dx  [x47488]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, true));
    // 1501:0267  mov word ptr cs:[0x1e9], ax  [x47488]
    c.w16(c.csb + (uint16_t)(0x1e9u), c.a.x);
    // 1501:026b  mov bp, 0  [x47488]
    c.bp.x = (uint16_t)(0x0u);
L1527e:
    if (c.tracing) c.traceAt(0x1527e);
    // 1501:026e  mov dx, 0x3c4  [x189952]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0271  mov al, 2  [x189952]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0273  mov ah, byte ptr cs:[bp + 0x1d7]  [x189952]
    c.a.h = (uint8_t)(c.r8(c.csb + (uint16_t)(c.bp.x + 0x1d7u)));
    // 1501:0278  out dx, ax  [x189952]
    c.ip = 0x279u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0279  add bp, bp  [x189952]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.bp.x, false));
    // 1501:027b  mov ax, word ptr cs:[bp + 0x1db]  [x189952]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x1dbu)));
    // 1501:0280  mov bx, word ptr cs:[bp + 0x1e3]  [x189952]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x1e3u)));
    // 1501:0285  shr bp, 1  [x189952]
    c.bp.x = (uint16_t)(c.shr<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 1501:0287  mov dx, ax  [x189952]
    c.dx_.x = (uint16_t)(c.a.x);
    // 1501:0289  sub dx, bx  [x189952]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:028b  sar dx, 2  [x189952]
    c.dx_.x = (uint16_t)(c.sar<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 1501:028e  or ah, byte ptr [0xa564]  [x189952]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (c.r8(c.dsb + (uint32_t)(0xa564u))), false));
    // 1501:0295  mov byte ptr es:[di], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.h);
    // 1501:0298  mov byte ptr es:[di + 0x50], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x50u), c.a.h);
    // 1501:029c  sub ax, dx  [x189952]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:029e  mov byte ptr es:[di + 0xa0], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xa0u), c.a.h);
    // 1501:02a3  mov byte ptr es:[di + 0xf0], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0xf0u), c.a.h);
    // 1501:02a8  sub ax, dx  [x189952]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:02aa  mov byte ptr es:[di + 0x140], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x140u), c.a.h);
    // 1501:02af  mov byte ptr es:[di + 0x190], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x190u), c.a.h);
    // 1501:02b4  sub ax, dx  [x189952]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 1501:02b6  mov byte ptr es:[di + 0x1e0], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x1e0u), c.a.h);
    // 1501:02bb  mov byte ptr es:[di + 0x230], ah  [x189952]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x230u), c.a.h);
    // 1501:02c0  inc bp  [x189952]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:02c1  cmp bp, 4  [x189952]
    c.sub<16>(c.bp.x, 0x4u, true);
    // 1501:02c4  jb 0x26e  [x189952]
    if (c.cf) goto L1527e;
L152d6:
    if (c.tracing) c.traceAt(0x152d6);
    // 1501:02c6  pop si  [x47488]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:02c7  add si, 0x310  [x47488]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x310u, false));
    // 1501:02cb  add di, 0x280  [x47488]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x280u, true));
    // 1501:02cf  loop 0x2d3  [x47488]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L152e3;
L152e1:
    if (c.tracing) c.traceAt(0x152e1);
    // 1501:02d1  jmp 0x2d6  [x896]
    goto L152e6;
L152e3:
    if (c.tracing) c.traceAt(0x152e3);
    // 1501:02d3  jmp 0x210  [x46592]
    goto L15220;
L152e6:
    if (c.tracing) c.traceAt(0x152e6);
    // 1501:02d6  ret   [x896]
    c.ip = c.pop16(); return;
L152e7:
    if (c.tracing) c.traceAt(0x152e7);
    // 1501:02d7  mov dx, 0x3c8  [x14]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:02da  out dx, al  [x14]
    c.ip = 0x2dbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02db  inc dx  [x14]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:02dc  xor si, si  [x14]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:02de  xor bh, bh  [x14]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
L152f0:
    if (c.tracing) c.traceAt(0x152f0);
    // 1501:02e0  mov bl, byte ptr [di - 0x55d5]  [x896]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffaa2bu)));
    // 1501:02e4  mov al, byte ptr [bx + si - 0x5a99]  [x896]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0xffffa567u)));
    // 1501:02e8  out dx, al  [x896]
    c.ip = 0x2e9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02e9  mov bl, byte ptr [di - 0x55d4]  [x896]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffaa2cu)));
    // 1501:02ed  mov al, byte ptr [bx + si - 0x5a99]  [x896]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0xffffa567u)));
    // 1501:02f1  out dx, al  [x896]
    c.ip = 0x2f2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02f2  mov bl, byte ptr [di - 0x55d3]  [x896]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffaa2du)));
    // 1501:02f6  mov al, byte ptr [bx + si - 0x5a99]  [x896]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x + 0xffffa567u)));
    // 1501:02fa  out dx, al  [x896]
    c.ip = 0x2fbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:02fb  add si, 3  [x896]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, false));
    // 1501:02fe  cmp si, 0xc0  [x896]
    c.sub<16>(c.si.x, 0xc0u, true);
    // 1501:0302  jb 0x2e0  [x896]
    if (c.cf) goto L152f0;
L15314:
    if (c.tracing) c.traceAt(0x15314);
    // 1501:0304  ret   [x14]
    c.ip = c.pop16(); return;
L15315:
    if (c.tracing) c.traceAt(0x15315);
    // 1501:0305  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_26(26, {0x15010, 0x15017, 0x1501c, 0x15021, 0x15047, 0x15049, 0x1505a, 0x1505c, 0x15064, 0x1506c, 0x15074, 0x15094, 0x150f4, 0x150f7, 0x15109, 0x1510c, 0x1511d, 0x15126, 0x15137, 0x15144, 0x15151, 0x1515c, 0x15167, 0x15172, 0x1517d, 0x15188, 0x15193, 0x1519e, 0x151a9, 0x151b4, 0x151d6, 0x151d9, 0x151dc, 0x151dd, 0x151e1, 0x151e2, 0x151e6, 0x151fb, 0x15213, 0x1521d, 0x15220, 0x1527e, 0x152d6, 0x152e1, 0x152e3, 0x152e6, 0x152e7, 0x152f0, 0x15314, 0x15315}, code_26);

}  // namespace show
