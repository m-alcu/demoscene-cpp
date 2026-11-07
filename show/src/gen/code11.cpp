// Part 10 (DO.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_11(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1501b: goto L1501b;
    case 0x1502c: goto L1502c;
    case 0x1503c: goto L1503c;
    case 0x15044: goto L15044;
    case 0x15047: goto L15047;
    case 0x1504a: goto L1504a;
    case 0x1504d: goto L1504d;
    case 0x15050: goto L15050;
    case 0x15063: goto L15063;
    case 0x15072: goto L15072;
    case 0x1507a: goto L1507a;
    case 0x1508f: goto L1508f;
    case 0x15090: goto L15090;
    case 0x15094: goto L15094;
    case 0x15095: goto L15095;
    case 0x15099: goto L15099;
    case 0x150c5: goto L150c5;
    case 0x150c7: goto L150c7;
    case 0x150cd: goto L150cd;
    case 0x150e3: goto L150e3;
    case 0x150ea: goto L150ea;
    case 0x150f7: goto L150f7;
    case 0x150f9: goto L150f9;
    case 0x15100: goto L15100;
    case 0x15103: goto L15103;
    case 0x15106: goto L15106;
    case 0x15109: goto L15109;
    case 0x1510c: goto L1510c;
    case 0x15121: goto L15121;
    case 0x1512d: goto L1512d;
    case 0x15139: goto L15139;
    case 0x1513e: goto L1513e;
    case 0x15146: goto L15146;
    case 0x15153: goto L15153;
    case 0x15159: goto L15159;
    case 0x15166: goto L15166;
    case 0x1516c: goto L1516c;
    case 0x1516e: goto L1516e;
    case 0x15175: goto L15175;
    case 0x15178: goto L15178;
    case 0x1517b: goto L1517b;
    case 0x151ab: goto L151ab;
    case 0x151b1: goto L151b1;
    case 0x151b4: goto L151b4;
    case 0x151d8: goto L151d8;
    case 0x151de: goto L151de;
    case 0x151e1: goto L151e1;
    case 0x15205: goto L15205;
    case 0x1520b: goto L1520b;
    case 0x1520e: goto L1520e;
    case 0x15232: goto L15232;
    case 0x15238: goto L15238;
    case 0x1523b: goto L1523b;
    case 0x15244: goto L15244;
    case 0x15247: goto L15247;
    case 0x1524d: goto L1524d;
    case 0x15250: goto L15250;
    case 0x15256: goto L15256;
    case 0x15259: goto L15259;
    case 0x1525e: goto L1525e;
    case 0x1526b: goto L1526b;
    case 0x1526f: goto L1526f;
    case 0x15275: goto L15275;
    case 0x15279: goto L15279;
    case 0x1527f: goto L1527f;
    case 0x15283: goto L15283;
    case 0x15289: goto L15289;
    case 0x1528c: goto L1528c;
    case 0x15296: goto L15296;
    case 0x15297: goto L15297;
    case 0x152a2: goto L152a2;
    case 0x152a6: goto L152a6;
    case 0x152b0: goto L152b0;
    case 0x152b3: goto L152b3;
    case 0x152c2: goto L152c2;
    case 0x152ce: goto L152ce;
    case 0x152d0: goto L152d0;
    case 0x152d9: goto L152d9;
    case 0x152df: goto L152df;
    case 0x152e5: goto L152e5;
    case 0x152ee: goto L152ee;
    case 0x1531d: goto L1531d;
    case 0x15320: goto L15320;
    case 0x15322: goto L15322;
    case 0x15329: goto L15329;
    case 0x1532d: goto L1532d;
    case 0x15338: goto L15338;
    case 0x15344: goto L15344;
    case 0x15347: goto L15347;
    case 0x1534e: goto L1534e;
    case 0x15354: goto L15354;
    case 0x15358: goto L15358;
    case 0x15359: goto L15359;
    case 0x15362: goto L15362;
    case 0x15373: goto L15373;
    case 0x15385: goto L15385;
    case 0x15387: goto L15387;
    case 0x15397: goto L15397;
    case 0x1539d: goto L1539d;
    case 0x1539f: goto L1539f;
    case 0x153a1: goto L153a1;
    case 0x153a7: goto L153a7;
    case 0x153a9: goto L153a9;
    case 0x153ac: goto L153ac;
    case 0x153be: goto L153be;
    case 0x153bf: goto L153bf;
    case 0x153c8: goto L153c8;
    case 0x153cc: goto L153cc;
    case 0x153d3: goto L153d3;
    case 0x153da: goto L153da;
    case 0x153db: goto L153db;
    case 0x15409: goto L15409;
    case 0x1540a: goto L1540a;
    case 0x1540e: goto L1540e;
    case 0x15415: goto L15415;
    case 0x1541c: goto L1541c;
    case 0x1541d: goto L1541d;
    case 0x15446: goto L15446;
    case 0x15453: goto L15453;
    case 0x15456: goto L15456;
    case 0x15458: goto L15458;
    case 0x15459: goto L15459;
    case 0x15482: goto L15482;
    case 0x1548f: goto L1548f;
    case 0x15492: goto L15492;
    case 0x15494: goto L15494;
    case 0x15495: goto L15495;
    case 0x1549a: goto L1549a;
    case 0x15559: goto L15559;
    case 0x1555c: goto L1555c;
    case 0x1555d: goto L1555d;
    case 0x15561: goto L15561;
    case 0x155a2: goto L155a2;
    case 0x155a3: goto L155a3;
    case 0x155a7: goto L155a7;
    case 0x15622: goto L15622;
    case 0x15624: goto L15624;
    case 0x15632: goto L15632;
    case 0x15635: goto L15635;
    case 0x15636: goto L15636;
    case 0x15638: goto L15638;
    case 0x15640: goto L15640;
    case 0x15647: goto L15647;
    case 0x1564c: goto L1564c;
    case 0x1564e: goto L1564e;
    case 0x1566e: goto L1566e;
    case 0x15670: goto L15670;
    case 0x15673: goto L15673;
    case 0x15679: goto L15679;
    case 0x1567a: goto L1567a;
    case 0x15688: goto L15688;
    case 0x1568e: goto L1568e;
    case 0x15697: goto L15697;
    case 0x156a0: goto L156a0;
    case 0x156a3: goto L156a3;
    case 0x1572b: goto L1572b;
    case 0x15732: goto L15732;
    case 0x15735: goto L15735;
    case 0x15736: goto L15736;
    case 0x15739: goto L15739;
    case 0x1573e: goto L1573e;
    case 0x1573f: goto L1573f;
    case 0x15743: goto L15743;
    case 0x15744: goto L15744;
    case 0x15750: goto L15750;
    case 0x15753: goto L15753;
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
    // 1501:0010  sub dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 1501:0013  mov word ptr cs:[9], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x9u), c.dx_.x);
    // 1501:0018  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:001a  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1502c:
    if (c.tracing) c.traceAt(0x1502c);
    // 1501:001c  mov word ptr [di + 0x378e], ax  [x200]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x378eu), c.a.x);
    // 1501:0020  add ax, 0x28  [x200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:0023  add di, 2  [x200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:0026  cmp di, 0x190  [x200]
    c.sub<16>(c.di.x, 0x190u, true);
    // 1501:002a  jne 0x1c  [x200]
    if (!c.zf) goto L1502c;
L1503c:
    if (c.tracing) c.traceAt(0x1503c);
    // 1501:002c  mov ax, 0xa200  [x1]
    c.a.x = (uint16_t)(0xa200u);
    // 1501:002f  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0031  call 0x485  [x1]
    c.push16(0x34u); code_11(c, 0x15495u); if (c.ip != 0x34u) c.badReturn(0x15041);
L15044:
    if (c.tracing) c.traceAt(0x15044);
    // 1501:0034  call 0x54d  [x1]
    c.push16(0x37u); code_11(c, 0x1555du); if (c.ip != 0x37u) c.badReturn(0x15044);
L15047:
    if (c.tracing) c.traceAt(0x15047);
    // 1501:0037  call 0x593  [x1]
    c.push16(0x3au); code_11(c, 0x155a3u); if (c.ip != 0x3au) c.badReturn(0x15047);
L1504a:
    if (c.tracing) c.traceAt(0x1504a);
    // 1501:003a  call 0x66a  [x1]
    c.push16(0x3du); code_11(c, 0x1567au); if (c.ip != 0x3du) c.badReturn(0x1504a);
L1504d:
    if (c.tracing) c.traceAt(0x1504d);
    // 1501:003d  call 0x726  [x1]
    c.push16(0x40u); code_11(c, 0x15736u); if (c.ip != 0x40u) c.badReturn(0x1504d);
L15050:
    if (c.tracing) c.traceAt(0x15050);
    // 1501:0040  push es  [x1]
    c.push16(c.es);
    // 1501:0041  mov ax, word ptr cs:[7]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:0045  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:0047  mov si, word ptr cs:[9]  [x1]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:004c  mov ax, word ptr es:[si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:004f  mov word ptr [0x3bb1], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x3bb1u), c.a.x);
    // 1501:0052  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L15063:
    if (c.tracing) c.traceAt(0x15063);
    // 1501:0053  mov cx, 0xa000  [x256]
    c.c.x = (uint16_t)(0xa000u);
    // 1501:0056  mov bx, 0xa200  [x256]
    c.b.x = (uint16_t)(0xa200u);
    // 1501:0059  xor al, al  [x256]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:005b  cmp byte ptr [0x391e], 0  [x256]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x391eu)), 0x0u, true);
    // 1501:0060  jne 0x6a  [x256]
    if (!c.zf) goto L1507a;
L15072:
    if (c.tracing) c.traceAt(0x15072);
    // 1501:0062  mov al, 1  [x128]
    c.a.l = (uint8_t)(0x1u);
    // 1501:0064  mov bx, 0xaa00  [x128]
    c.b.x = (uint16_t)(0xaa00u);
    // 1501:0067  mov cx, 0x2000  [x128]
    c.c.x = (uint16_t)(0x2000u);
L1507a:
    if (c.tracing) c.traceAt(0x1507a);
    // 1501:006a  mov byte ptr [0x391e], al  [x256]
    c.w8(c.dsb + (uint16_t)(0x391eu), c.a.l);
    // 1501:006d  mov es, bx  [x256]
    c.loadEs(c.b.x);
    // 1501:006f  mov dx, 0x3d4  [x256]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:0072  mov al, 0xc  [x256]
    c.a.l = (uint8_t)(0xcu);
    // 1501:0074  mov ah, ch  [x256]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:0076  out dx, ax  [x256]
    c.ip = 0x77u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:0077  mov al, 0xd  [x256]
    c.a.l = (uint8_t)(0xdu);
    // 1501:0079  mov ah, cl  [x256]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:007b  out dx, ax  [x256]
    c.ip = 0x7cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:007c  mov dx, 0x3da  [x256]
    c.dx_.x = (uint16_t)(0x3dau);
L1508f:
    if (c.tracing) c.traceAt(0x1508f);
    // 1501:007f  in al, dx  [x807]
    c.ip = 0x80u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15090:
    if (c.tracing) c.traceAt(0x15090);
    // 1501:0080  and al, 8  [x1076]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0082  jne 0x7f  [x1076]
    if (!c.zf) goto L1508f;
L15094:
    if (c.tracing) c.traceAt(0x15094);
    // 1501:0084  in al, dx  [x11944]
    c.ip = 0x85u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L15095:
    if (c.tracing) c.traceAt(0x15095);
    // 1501:0085  and al, 8  [x15840]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0087  je 0x84  [x15840]
    if (c.zf) goto L15094;
L15099:
    if (c.tracing) c.traceAt(0x15099);
    // 1501:0089  mov ax, word ptr [0x3bb1]  [x256]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3bb1u)));
    // 1501:008c  mov word ptr [0x3bb3], ax  [x256]
    c.w16(c.dsb + (uint16_t)(0x3bb3u), c.a.x);
    // 1501:008f  push es  [x256]
    c.push16(c.es);
    // 1501:0090  mov bx, word ptr cs:[7]  [x256]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7u)));
    // 1501:0095  mov es, bx  [x256]
    c.loadEs(c.b.x);
    // 1501:0097  mov si, word ptr cs:[9]  [x256]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x9u)));
    // 1501:009c  mov dx, word ptr es:[si]  [x256]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:009f  mov word ptr [0x3bb1], dx  [x256]
    c.w16(c.dsb + (uint16_t)(0x3bb1u), c.dx_.x);
    // 1501:00a3  pop es  [x256]
    c.loadEs((uint16_t)c.pop16());
    // 1501:00a4  mov dx, 0x3c8  [x256]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:00a7  xor al, al  [x256]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:00a9  out dx, al  [x256]
    c.ip = 0xaau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00aa  inc dx  [x256]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:00ab  mov al, 0x1f  [x256]
    c.a.l = (uint8_t)(0x1fu);
    // 1501:00ad  add al, byte ptr [0x3bac]  [x256]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x3bacu)), false));
    // 1501:00b1  cmp al, 0x3f  [x256]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:00b3  jbe 0xb7  [x256]
    if ((c.cf || c.zf)) goto L150c7;
L150c5:
    if (c.tracing) c.traceAt(0x150c5);
    // 1501:00b5  mov al, 0x3f  [x8]
    c.a.l = (uint8_t)(0x3fu);
L150c7:
    if (c.tracing) c.traceAt(0x150c7);
    // 1501:00b7  out dx, al  [x256]
    c.ip = 0xb8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00b8  out dx, al  [x256]
    c.ip = 0xb9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00b9  out dx, al  [x256]
    c.ip = 0xbau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:00ba  call 0x626  [x256]
    c.push16(0xbdu); code_11(c, 0x15636u); if (c.ip != 0xbdu) c.badReturn(0x150ca);
L150cd:
    if (c.tracing) c.traceAt(0x150cd);
    // 1501:00bd  mov dx, 0x3c4  [x256]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:00c0  mov ax, 0xf02  [x256]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:00c3  out dx, ax  [x256]
    c.ip = 0xc4u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:00c4  xor ax, ax  [x256]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:00c6  xor bp, bp  [x256]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:00c8  mov bx, word ptr [0x17a2]  [x256]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a2u)));
    // 1501:00cc  cmp byte ptr [0x391e], 0  [x256]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x391eu)), 0x0u, true);
    // 1501:00d1  je 0xda  [x256]
    if (c.zf) goto L150ea;
L150e3:
    if (c.tracing) c.traceAt(0x150e3);
    // 1501:00d3  mov bp, 0x7d0  [x128]
    c.bp.x = (uint16_t)(0x7d0u);
    // 1501:00d6  mov bx, word ptr [0x17a4]  [x128]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a4u)));
L150ea:
    if (c.tracing) c.traceAt(0x150ea);
    // 1501:00da  mov di, word ptr ds:[bp + 0x17a6]  [x43217]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x17a6u)));
    // 1501:00df  mov cx, word ptr ds:[bp + 0x2746]  [x43217]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x2746u)));
    // 1501:00e4  sar cx, 1  [x43217]
    c.c.x = (uint16_t)(c.sar<16>(c.c.x, (int)((0x1u) & 31), true));
    // 1501:00e6  inc cx  [x43217]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, true));
L150f7:
    if (c.tracing) c.traceAt(0x150f7);
    // 1501:00e7  rep stosw word ptr es:[di], ax  [x258906]
    c.stos<16, false>(1);
L150f9:
    if (c.tracing) c.traceAt(0x150f9);
    // 1501:00e9  add bp, 2  [x43217]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
    // 1501:00ec  cmp bp, bx  [x43217]
    c.sub<16>(c.bp.x, c.b.x, true);
    // 1501:00ee  jb 0xda  [x43217]
    if (c.cf) goto L150ea;
L15100:
    if (c.tracing) c.traceAt(0x15100);
    // 1501:00f0  call 0x485  [x256]
    c.push16(0xf3u); code_11(c, 0x15495u); if (c.ip != 0xf3u) c.badReturn(0x15100);
L15103:
    if (c.tracing) c.traceAt(0x15103);
    // 1501:00f3  call 0x54d  [x256]
    c.push16(0xf6u); code_11(c, 0x1555du); if (c.ip != 0xf6u) c.badReturn(0x15103);
L15106:
    if (c.tracing) c.traceAt(0x15106);
    // 1501:00f6  call 0x593  [x256]
    c.push16(0xf9u); code_11(c, 0x155a3u); if (c.ip != 0xf9u) c.badReturn(0x15106);
L15109:
    if (c.tracing) c.traceAt(0x15109);
    // 1501:00f9  call 0x66a  [x256]
    c.push16(0xfcu); code_11(c, 0x1567au); if (c.ip != 0xfcu) c.badReturn(0x15109);
L1510c:
    if (c.tracing) c.traceAt(0x1510c);
    // 1501:00fc  mov ax, word ptr [0x3bb1]  [x256]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3bb1u)));
    // 1501:00ff  sub ax, word ptr [0x3bb3]  [x256]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x3bb3u)), false));
    // 1501:0103  xor dx, dx  [x256]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:0105  mov cx, 0xe  [x256]
    c.c.x = (uint16_t)(0xeu);
    // 1501:0108  div cx  [x256]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x108u); }   // #DE: int 0, then again
    // 1501:010a  mov cx, ax  [x256]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:010c  cmp cx, 0  [x256]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:010f  je 0x15e  [x256]
    if (c.zf) goto L1516e;
L15121:
    if (c.tracing) c.traceAt(0x15121);
    // 1501:0111  inc word ptr [0x17a0]  [x256]
    c.w16(c.dsb + (uint16_t)(0x17a0u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x17a0u)), false));
    // 1501:0115  cmp word ptr [0x17a0], 0xf0  [x256]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x17a0u)), 0xf0u, true);
    // 1501:011b  jb 0x12e  [x256]
    if (c.cf) goto L1513e;
L1512d:
    if (c.tracing) c.traceAt(0x1512d);
    // 1501:011d  add byte ptr [0x3bac], 4  [x17]
    c.w8(c.dsb + (uint16_t)(0x3bacu), c.add<8>(c.r8(c.dsb + (uint16_t)(0x3bacu)), 0x4u, false));
    // 1501:0122  cmp byte ptr [0x3bac], 0x44  [x17]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x3bacu)), 0x44u, true);
    // 1501:0127  jb 0x12e  [x17]
    if (c.cf) goto L1513e;
L15139:
    if (c.tracing) c.traceAt(0x15139);
    // 1501:0129  mov byte ptr [0x3bab], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x3babu), 0x1u);
L1513e:
    if (c.tracing) c.traceAt(0x1513e);
    // 1501:012e  cmp word ptr [0x17a0], 0xf0  [x256]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x17a0u)), 0xf0u, true);
    // 1501:0134  ja 0x15c  [x256]
    if ((!c.cf && !c.zf)) goto L1516c;
L15146:
    if (c.tracing) c.traceAt(0x15146);
    // 1501:0136  add word ptr [0xe], 6  [x240]
    c.w16(c.dsb + (uint16_t)(0xeu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xeu)), 0x6u, false));
    // 1501:013b  cmp word ptr [0xe], 0x5a0  [x240]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xeu)), 0x5a0u, true);
    // 1501:0141  jb 0x149  [x240]
    if (c.cf) goto L15159;
L15153:
    if (c.tracing) c.traceAt(0x15153);
    // 1501:0143  sub word ptr [0xe], 0x5a0  [x1]
    c.w16(c.dsb + (uint16_t)(0xeu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xeu)), 0x5a0u, true));
L15159:
    if (c.tracing) c.traceAt(0x15159);
    // 1501:0149  add word ptr [0xa], 6  [x240]
    c.w16(c.dsb + (uint16_t)(0xau), c.add<16>(c.r16(c.dsb + (uint16_t)(0xau)), 0x6u, false));
    // 1501:014e  cmp word ptr [0xa], 0x5a0  [x240]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xau)), 0x5a0u, true);
    // 1501:0154  jb 0x15c  [x240]
    if (c.cf) goto L1516c;
L15166:
    if (c.tracing) c.traceAt(0x15166);
    // 1501:0156  sub word ptr [0xa], 0x5a0  [x1]
    c.w16(c.dsb + (uint16_t)(0xau), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xau)), 0x5a0u, true));
L1516c:
    if (c.tracing) c.traceAt(0x1516c);
    // 1501:015c  loop 0x111  [x256]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15121;
L1516e:
    if (c.tracing) c.traceAt(0x1516e);
    // 1501:015e  cmp byte ptr [0x3bab], 0  [x256]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x3babu)), 0x0u, true);
    // 1501:0163  je 0x168  [x256]
    if (c.zf) goto L15178;
L15175:
    if (c.tracing) c.traceAt(0x15175);
    // 1501:0165  jmp 0x734  [x1]
    goto L15744;
L15178:
    if (c.tracing) c.traceAt(0x15178);
    // 1501:0168  jmp 0x53  [x255]
    goto L15063;
L1517b:
    if (c.tracing) c.traceAt(0x1517b);
    // 1501:016b  mov word ptr [0xe3c], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0xe3cu), 0x0u);
    // 1501:0171  mov word ptr [0xe3e], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0xe3eu), 0x0u);
    // 1501:0177  mov ax, word ptr [0x7de]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7deu)));
    // 1501:017a  mov word ptr [0x7ee], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7eeu), c.a.x);
    // 1501:017d  mov ax, word ptr [0x7e6]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e6u)));
    // 1501:0180  mov word ptr [0x7f2], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f2u), c.a.x);
    // 1501:0183  mov ax, word ptr [0x7e0]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e0u)));
    // 1501:0186  mov word ptr [0x7f0], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f0u), c.a.x);
    // 1501:0189  mov ax, word ptr [0x7e8]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e8u)));
    // 1501:018c  mov word ptr [0x7f4], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f4u), c.a.x);
    // 1501:018f  mov word ptr [0x7fa], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x0u);
    // 1501:0195  cmp word ptr [0x7e6], ax  [x556]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x7e6u)), c.a.x, true);
    // 1501:0199  jb 0x1a1  [x556]
    if (c.cf) goto L151b1;
L151ab:
    if (c.tracing) c.traceAt(0x151ab);
    // 1501:019b  mov word ptr [0x7fa], 2  [x281]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x2u);
L151b1:
    if (c.tracing) c.traceAt(0x151b1);
    // 1501:01a1  call 0x349  [x556]
    c.push16(0x1a4u); code_11(c, 0x15359u); if (c.ip != 0x1a4u) c.badReturn(0x151b1);
L151b4:
    if (c.tracing) c.traceAt(0x151b4);
    // 1501:01a4  mov ax, word ptr [0x7e0]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e0u)));
    // 1501:01a7  mov word ptr [0x7ee], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7eeu), c.a.x);
    // 1501:01aa  mov ax, word ptr [0x7e8]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e8u)));
    // 1501:01ad  mov word ptr [0x7f2], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f2u), c.a.x);
    // 1501:01b0  mov ax, word ptr [0x7e2]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e2u)));
    // 1501:01b3  mov word ptr [0x7f0], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f0u), c.a.x);
    // 1501:01b6  mov ax, word ptr [0x7ea]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eau)));
    // 1501:01b9  mov word ptr [0x7f4], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f4u), c.a.x);
    // 1501:01bc  mov word ptr [0x7fa], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x0u);
    // 1501:01c2  cmp word ptr [0x7e8], ax  [x556]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x7e8u)), c.a.x, true);
    // 1501:01c6  jb 0x1ce  [x556]
    if (c.cf) goto L151de;
L151d8:
    if (c.tracing) c.traceAt(0x151d8);
    // 1501:01c8  mov word ptr [0x7fa], 2  [x229]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x2u);
L151de:
    if (c.tracing) c.traceAt(0x151de);
    // 1501:01ce  call 0x349  [x556]
    c.push16(0x1d1u); code_11(c, 0x15359u); if (c.ip != 0x1d1u) c.badReturn(0x151de);
L151e1:
    if (c.tracing) c.traceAt(0x151e1);
    // 1501:01d1  mov ax, word ptr [0x7e2]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e2u)));
    // 1501:01d4  mov word ptr [0x7ee], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7eeu), c.a.x);
    // 1501:01d7  mov ax, word ptr [0x7ea]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eau)));
    // 1501:01da  mov word ptr [0x7f2], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f2u), c.a.x);
    // 1501:01dd  mov ax, word ptr [0x7e4]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e4u)));
    // 1501:01e0  mov word ptr [0x7f0], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f0u), c.a.x);
    // 1501:01e3  mov ax, word ptr [0x7ec]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7ecu)));
    // 1501:01e6  mov word ptr [0x7f4], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f4u), c.a.x);
    // 1501:01e9  mov word ptr [0x7fa], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x0u);
    // 1501:01ef  cmp word ptr [0x7ea], ax  [x556]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x7eau)), c.a.x, true);
    // 1501:01f3  jb 0x1fb  [x556]
    if (c.cf) goto L1520b;
L15205:
    if (c.tracing) c.traceAt(0x15205);
    // 1501:01f5  mov word ptr [0x7fa], 2  [x285]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x2u);
L1520b:
    if (c.tracing) c.traceAt(0x1520b);
    // 1501:01fb  call 0x349  [x556]
    c.push16(0x1feu); code_11(c, 0x15359u); if (c.ip != 0x1feu) c.badReturn(0x1520b);
L1520e:
    if (c.tracing) c.traceAt(0x1520e);
    // 1501:01fe  mov ax, word ptr [0x7e4]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e4u)));
    // 1501:0201  mov word ptr [0x7ee], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7eeu), c.a.x);
    // 1501:0204  mov ax, word ptr [0x7ec]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7ecu)));
    // 1501:0207  mov word ptr [0x7f2], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f2u), c.a.x);
    // 1501:020a  mov ax, word ptr [0x7de]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7deu)));
    // 1501:020d  mov word ptr [0x7f0], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f0u), c.a.x);
    // 1501:0210  mov ax, word ptr [0x7e6]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e6u)));
    // 1501:0213  mov word ptr [0x7f4], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7f4u), c.a.x);
    // 1501:0216  mov word ptr [0x7fa], 0  [x556]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x0u);
    // 1501:021c  cmp word ptr [0x7ec], ax  [x556]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x7ecu)), c.a.x, true);
    // 1501:0220  jb 0x228  [x556]
    if (c.cf) goto L15238;
L15232:
    if (c.tracing) c.traceAt(0x15232);
    // 1501:0222  mov word ptr [0x7fa], 2  [x341]
    c.w16(c.dsb + (uint16_t)(0x7fau), 0x2u);
L15238:
    if (c.tracing) c.traceAt(0x15238);
    // 1501:0228  call 0x349  [x556]
    c.push16(0x22bu); code_11(c, 0x15359u); if (c.ip != 0x22bu) c.badReturn(0x15238);
L1523b:
    if (c.tracing) c.traceAt(0x1523b);
    // 1501:022b  mov ax, word ptr [0x7e6]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e6u)));
    // 1501:022e  cmp ax, word ptr [0x7e8]  [x556]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7e8u)), true);
    // 1501:0232  jbe 0x237  [x556]
    if ((c.cf || c.zf)) goto L15247;
L15244:
    if (c.tracing) c.traceAt(0x15244);
    // 1501:0234  mov ax, word ptr [0x7e8]  [x267]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e8u)));
L15247:
    if (c.tracing) c.traceAt(0x15247);
    // 1501:0237  cmp ax, word ptr [0x7ea]  [x556]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7eau)), true);
    // 1501:023b  jbe 0x240  [x556]
    if ((c.cf || c.zf)) goto L15250;
L1524d:
    if (c.tracing) c.traceAt(0x1524d);
    // 1501:023d  mov ax, word ptr [0x7ea]  [x163]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eau)));
L15250:
    if (c.tracing) c.traceAt(0x15250);
    // 1501:0240  cmp ax, word ptr [0x7ec]  [x556]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7ecu)), true);
    // 1501:0244  jbe 0x249  [x556]
    if ((c.cf || c.zf)) goto L15259;
L15256:
    if (c.tracing) c.traceAt(0x15256);
    // 1501:0246  mov ax, word ptr [0x7ec]  [x98]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7ecu)));
L15259:
    if (c.tracing) c.traceAt(0x15259);
    // 1501:0249  cmp ax, 0x257  [x556]
    c.sub<16>(c.a.x, 0x257u, true);
    // 1501:024c  jae 0x286  [x556]
    if (!c.cf) goto L15296;
L1525e:
    if (c.tracing) c.traceAt(0x1525e);
    // 1501:024e  mov word ptr [0x3bad], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x3badu), c.a.x);
    // 1501:0251  mov bx, word ptr [0x7e6]  [x556]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e6u)));
    // 1501:0255  cmp bx, word ptr [0x7e8]  [x556]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7e8u)), true);
    // 1501:0259  jae 0x25f  [x556]
    if (!c.cf) goto L1526f;
L1526b:
    if (c.tracing) c.traceAt(0x1526b);
    // 1501:025b  mov bx, word ptr [0x7e8]  [x275]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e8u)));
L1526f:
    if (c.tracing) c.traceAt(0x1526f);
    // 1501:025f  cmp bx, word ptr [0x7ea]  [x556]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7eau)), true);
    // 1501:0263  jae 0x269  [x556]
    if (!c.cf) goto L15279;
L15275:
    if (c.tracing) c.traceAt(0x15275);
    // 1501:0265  mov bx, word ptr [0x7ea]  [x275]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eau)));
L15279:
    if (c.tracing) c.traceAt(0x15279);
    // 1501:0269  cmp bx, word ptr [0x7ec]  [x556]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7ecu)), true);
    // 1501:026d  jae 0x273  [x556]
    if (!c.cf) goto L15283;
L1527f:
    if (c.tracing) c.traceAt(0x1527f);
    // 1501:026f  mov bx, word ptr [0x7ec]  [x159]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7ecu)));
L15283:
    if (c.tracing) c.traceAt(0x15283);
    // 1501:0273  cmp bx, 0x258  [x556]
    c.sub<16>(c.b.x, 0x258u, true);
    // 1501:0277  jb 0x27c  [x556]
    if (c.cf) goto L1528c;
L15289:
    if (c.tracing) c.traceAt(0x15289);
    // 1501:0279  mov bx, 0x257  [x33]
    c.b.x = (uint16_t)(0x257u);
L1528c:
    if (c.tracing) c.traceAt(0x1528c);
    // 1501:027c  shl bx, 2  [x556]
    c.b.x = (uint16_t)(c.shl<16>(c.b.x, (int)((0x2u) & 31), true));
    // 1501:027f  mov word ptr [0x3baf], bx  [x556]
    c.w16(c.dsb + (uint16_t)(0x3bafu), c.b.x);
    // 1501:0283  call 0x287  [x556]
    c.push16(0x286u); code_11(c, 0x15297u); if (c.ip != 0x286u) c.badReturn(0x15293);
L15296:
    if (c.tracing) c.traceAt(0x15296);
    // 1501:0286  ret   [x556]
    c.ip = c.pop16(); return;
L15297:
    if (c.tracing) c.traceAt(0x15297);
    // 1501:0287  mov bp, word ptr [0x17a2]  [x556]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a2u)));
    // 1501:028b  cmp byte ptr [0x391e], 0  [x556]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x391eu)), 0x0u, true);
    // 1501:0290  je 0x296  [x556]
    if (c.zf) goto L152a6;
L152a2:
    if (c.tracing) c.traceAt(0x152a2);
    // 1501:0292  mov bp, word ptr [0x17a4]  [x279]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a4u)));
L152a6:
    if (c.tracing) c.traceAt(0x152a6);
    // 1501:0296  mov bx, word ptr [0x3bad]  [x556]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x3badu)));
    // 1501:029a  cmp bx, 0x190  [x556]
    c.sub<16>(c.b.x, 0x190u, true);
    // 1501:029e  ja 0x2a3  [x556]
    if ((!c.cf && !c.zf)) goto L152b3;
L152b0:
    if (c.tracing) c.traceAt(0x152b0);
    // 1501:02a0  mov bx, 0x190  [x33]
    c.b.x = (uint16_t)(0x190u);
L152b3:
    if (c.tracing) c.traceAt(0x152b3);
    // 1501:02a3  mov si, bx  [x556]
    c.si.x = (uint16_t)(c.b.x);
    // 1501:02a5  sub si, 0x190  [x556]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x190u, true));
    // 1501:02a9  rol si, 1  [x556]
    c.si.x = (uint16_t)(c.rol<16>(c.si.x, (int)((0x1u) & 31), false));
    // 1501:02ab  mov dx, word ptr [si + 0x378e]  [x556]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x378eu)));
    // 1501:02af  rol bx, 2  [x556]
    c.b.x = (uint16_t)(c.rol<16>(c.b.x, (int)((0x2u) & 31), true));
L152c2:
    if (c.tracing) c.traceAt(0x152c2);
    // 1501:02b2  mov di, word ptr [bx + 0x7fc]  [x43512]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x7fcu)));
    // 1501:02b6  mov si, word ptr [bx + 0x7fe]  [x43512]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x7feu)));
    // 1501:02ba  cmp di, si  [x43512]
    c.sub<16>(c.di.x, c.si.x, true);
    // 1501:02bc  jbe 0x2c0  [x43512]
    if ((c.cf || c.zf)) goto L152d0;
L152ce:
    if (c.tracing) c.traceAt(0x152ce);
    // 1501:02be  xchg di, si  [x43]
    { const uint32_t t0 = c.di.x; c.di.x = (uint16_t)(c.si.x); c.si.x = (uint16_t)(t0); }
L152d0:
    if (c.tracing) c.traceAt(0x152d0);
    // 1501:02c0  cmp di, 0x190  [x43512]
    c.sub<16>(c.di.x, 0x190u, true);
    // 1501:02c4  jge 0x2c9  [x43512]
    if ((c.sf == c.of)) goto L152d9;
    c.notTranslated(0x152d6, "fall-through");
L152d9:
    if (c.tracing) c.traceAt(0x152d9);
    // 1501:02c9  cmp si, 0x190  [x43512]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:02cd  jle 0x328  [x43512]
    if ((c.zf || c.sf != c.of)) goto L15338;
L152df:
    if (c.tracing) c.traceAt(0x152df);
    // 1501:02cf  cmp di, 0x2cf  [x43512]
    c.sub<16>(c.di.x, 0x2cfu, true);
    // 1501:02d3  jae 0x328  [x43512]
    if (!c.cf) goto L15338;
L152e5:
    if (c.tracing) c.traceAt(0x152e5);
    // 1501:02d5  cmp si, 0x2d0  [x43512]
    c.sub<16>(c.si.x, 0x2d0u, true);
    // 1501:02d9  jb 0x2de  [x43512]
    if (c.cf) goto L152ee;
    c.notTranslated(0x152eb, "fall-through");
L152ee:
    if (c.tracing) c.traceAt(0x152ee);
    // 1501:02de  sub di, 0x190  [x43512]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, 0x190u, false));
    // 1501:02e2  sub si, 0x190  [x43512]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x190u, false));
    // 1501:02e6  mov cl, byte ptr [di + 0x392b]  [x43512]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x392bu)));
    // 1501:02ea  mov ch, byte ptr [si + 0x3a6b]  [x43512]
    c.c.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0x3a6bu)));
    // 1501:02ee  push cx  [x43512]
    c.push16(c.c.x);
    // 1501:02ef  sar si, 3  [x43512]
    c.si.x = (uint16_t)(c.sar<16>(c.si.x, (int)((0x3u) & 31), false));
    // 1501:02f2  sar di, 3  [x43512]
    c.di.x = (uint16_t)(c.sar<16>(c.di.x, (int)((0x3u) & 31), false));
    // 1501:02f5  mov cx, si  [x43512]
    c.c.x = (uint16_t)(c.si.x);
    // 1501:02f7  sub cx, di  [x43512]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, false));
    // 1501:02f9  add di, dx  [x43512]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:02fb  mov word ptr ds:[bp + 0x17a6], di  [x43512]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x17a6u), c.di.x);
    // 1501:0300  mov word ptr ds:[bp + 0x2746], cx  [x43512]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x2746u), c.c.x);
    // 1501:0305  push di  [x43512]
    c.push16(c.di.x);
    // 1501:0306  push cx  [x43512]
    c.push16(c.c.x);
    // 1501:0307  dec cx  [x43512]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 1501:0308  cmp cx, 0  [x43512]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:030b  jle 0x312  [x43512]
    if ((c.zf || c.sf != c.of)) goto L15322;
L1531d:
    if (c.tracing) c.traceAt(0x1531d);
    // 1501:030d  inc di  [x31517]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, true));
    // 1501:030e  mov al, 0xff  [x31517]
    c.a.l = (uint8_t)(0xffu);
L15320:
    if (c.tracing) c.traceAt(0x15320);
    // 1501:0310  rep stosb byte ptr es:[di], al  [x368106]
    c.stos<8, false>(1);
L15322:
    if (c.tracing) c.traceAt(0x15322);
    // 1501:0312  pop cx  [x43512]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:0313  pop di  [x43512]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 1501:0314  pop ax  [x43512]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 1501:0315  or cx, cx  [x43512]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) | (c.c.x), true));
    // 1501:0317  jne 0x31d  [x43512]
    if (!c.zf) goto L1532d;
L15329:
    if (c.tracing) c.traceAt(0x15329);
    // 1501:0319  and ah, al  [x5241]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 1501:031b  mov al, ah  [x5241]
    c.a.l = (uint8_t)(c.a.h);
L1532d:
    if (c.tracing) c.traceAt(0x1532d);
    // 1501:031d  or byte ptr es:[di], al  [x43512]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.l), false));
    // 1501:0320  add di, cx  [x43512]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.c.x, false));
    // 1501:0322  or byte ptr es:[di], ah  [x43512]
    c.w8(c.esb + (uint16_t)(c.di.x), c.logic<8>((c.r8(c.esb + (uint16_t)(c.di.x))) | (c.a.h), false));
    // 1501:0325  add bp, 2  [x43512]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x2u, false));
L15338:
    if (c.tracing) c.traceAt(0x15338);
    // 1501:0328  add bx, 4  [x43512]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, false));
    // 1501:032b  add dx, 0x28  [x43512]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x28u, false));
    // 1501:032e  cmp bx, word ptr [0x3baf]  [x43512]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x3bafu)), true);
    // 1501:0332  jae 0x337  [x43512]
    if (!c.cf) goto L15347;
L15344:
    if (c.tracing) c.traceAt(0x15344);
    // 1501:0334  jmp 0x2b2  [x42956]
    goto L152c2;
L15347:
    if (c.tracing) c.traceAt(0x15347);
    // 1501:0337  cmp byte ptr [0x391e], 0  [x556]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x391eu)), 0x0u, true);
    // 1501:033c  je 0x344  [x556]
    if (c.zf) goto L15354;
L1534e:
    if (c.tracing) c.traceAt(0x1534e);
    // 1501:033e  mov word ptr [0x17a4], bp  [x279]
    c.w16(c.dsb + (uint16_t)(0x17a4u), c.bp.x);
    // 1501:0342  jmp 0x348  [x279]
    goto L15358;
L15354:
    if (c.tracing) c.traceAt(0x15354);
    // 1501:0344  mov word ptr [0x17a2], bp  [x277]
    c.w16(c.dsb + (uint16_t)(0x17a2u), c.bp.x);
L15358:
    if (c.tracing) c.traceAt(0x15358);
    // 1501:0348  ret   [x556]
    c.ip = c.pop16(); return;
L15359:
    if (c.tracing) c.traceAt(0x15359);
    // 1501:0349  mov ax, word ptr [0x7f2]  [x2224]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f2u)));
    // 1501:034c  cmp ax, word ptr [0x7f4]  [x2224]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7f4u)), true);
    // 1501:0350  jbe 0x363  [x2224]
    if ((c.cf || c.zf)) goto L15373;
L15362:
    if (c.tracing) c.traceAt(0x15362);
    // 1501:0352  xchg word ptr [0x7f4], ax  [x1064]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x7f4u)); c.w16(c.dsb + (uint16_t)(0x7f4u), c.a.x); c.a.x = (uint16_t)(t0); }
    // 1501:0356  mov word ptr [0x7f2], ax  [x1064]
    c.w16(c.dsb + (uint16_t)(0x7f2u), c.a.x);
    // 1501:0359  mov ax, word ptr [0x7ee]  [x1064]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:035c  xchg word ptr [0x7f0], ax  [x1064]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x7f0u)); c.w16(c.dsb + (uint16_t)(0x7f0u), c.a.x); c.a.x = (uint16_t)(t0); }
    // 1501:0360  mov word ptr [0x7ee], ax  [x1064]
    c.w16(c.dsb + (uint16_t)(0x7eeu), c.a.x);
L15373:
    if (c.tracing) c.traceAt(0x15373);
    // 1501:0363  mov ax, word ptr [0x7f2]  [x2224]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f2u)));
    // 1501:0366  mov word ptr [0x7f8], ax  [x2224]
    c.w16(c.dsb + (uint16_t)(0x7f8u), c.a.x);
    // 1501:0369  mov ax, word ptr [0x7f0]  [x2224]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f0u)));
    // 1501:036c  sub ax, word ptr [0x7ee]  [x2224]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7eeu)), false));
    // 1501:0370  cmp ax, 0  [x2224]
    c.sub<16>(c.a.x, 0x0u, true);
    // 1501:0373  jge 0x377  [x2224]
    if ((c.sf == c.of)) goto L15387;
L15385:
    if (c.tracing) c.traceAt(0x15385);
    // 1501:0375  neg ax  [x1060]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L15387:
    if (c.tracing) c.traceAt(0x15387);
    // 1501:0377  mov bx, word ptr [0x7f4]  [x2224]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:037b  sub bx, word ptr [0x7f2]  [x2224]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:037f  mov cx, word ptr [0x7ee]  [x2224]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:0383  cmp ax, bx  [x2224]
    c.sub<16>(c.a.x, c.b.x, true);
    // 1501:0385  jb 0x391  [x2224]
    if (c.cf) goto L153a1;
L15397:
    if (c.tracing) c.traceAt(0x15397);
    // 1501:0387  cmp cx, word ptr [0x7f0]  [x1239]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7f0u)), true);
    // 1501:038b  ja 0x38f  [x1239]
    if ((!c.cf && !c.zf)) goto L1539f;
L1539d:
    if (c.tracing) c.traceAt(0x1539d);
    // 1501:038d  jmp 0x39c  [x621]
    goto L153ac;
L1539f:
    if (c.tracing) c.traceAt(0x1539f);
    // 1501:038f  jmp 0x3cb  [x618]
    goto L153db;
L153a1:
    if (c.tracing) c.traceAt(0x153a1);
    // 1501:0391  cmp cx, word ptr [0x7f0]  [x985]
    c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7f0u)), true);
    // 1501:0395  ja 0x399  [x985]
    if ((!c.cf && !c.zf)) goto L153a9;
L153a7:
    if (c.tracing) c.traceAt(0x153a7);
    // 1501:0397  jmp 0x40d  [x543]
    goto L1541d;
L153a9:
    if (c.tracing) c.traceAt(0x153a9);
    // 1501:0399  jmp 0x449  [x442]
    goto L15459;
L153ac:
    if (c.tracing) c.traceAt(0x153ac);
    // 1501:039c  mov di, word ptr [0x7f2]  [x621]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f2u)));
    // 1501:03a0  shl di, 2  [x621]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x2u) & 31), false));
    // 1501:03a3  add di, word ptr [0x7fa]  [x621]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x7fau)), false));
    // 1501:03a7  mov cx, bx  [x621]
    c.c.x = (uint16_t)(c.b.x);
    // 1501:03a9  cmp cx, 0  [x621]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:03ac  jne 0x3af  [x621]
    if (!c.zf) goto L153bf;
L153be:
    if (c.tracing) c.traceAt(0x153be);
    // 1501:03ae  ret   [x37]
    c.ip = c.pop16(); return;
L153bf:
    if (c.tracing) c.traceAt(0x153bf);
    // 1501:03af  mov si, ax  [x584]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:03b1  mov dx, bx  [x584]
    c.dx_.x = (uint16_t)(c.b.x);
    // 1501:03b3  xor bx, bx  [x584]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:03b5  mov ax, word ptr [0x7ee]  [x584]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
L153c8:
    if (c.tracing) c.traceAt(0x153c8);
    // 1501:03b8  mov word ptr [di + 0x7fc], ax  [x19575]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x7fcu), c.a.x);
L153cc:
    if (c.tracing) c.traceAt(0x153cc);
    // 1501:03bc  inc ax  [x55339]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:03bd  add bx, dx  [x55339]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.dx_.x, false));
    // 1501:03bf  cmp bx, si  [x55339]
    c.sub<16>(c.b.x, c.si.x, true);
    // 1501:03c1  jb 0x3bc  [x55339]
    if (c.cf) goto L153cc;
L153d3:
    if (c.tracing) c.traceAt(0x153d3);
    // 1501:03c3  sub bx, si  [x19575]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.si.x, false));
    // 1501:03c5  add di, 4  [x19575]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, true));
    // 1501:03c8  loop 0x3b8  [x19575]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L153c8;
L153da:
    if (c.tracing) c.traceAt(0x153da);
    // 1501:03ca  ret   [x584]
    c.ip = c.pop16(); return;
L153db:
    if (c.tracing) c.traceAt(0x153db);
    // 1501:03cb  mov di, word ptr [0x7f8]  [x618]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f8u)));
    // 1501:03cf  shl di, 2  [x618]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x2u) & 31), false));
    // 1501:03d2  add di, word ptr [0x7fa]  [x618]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x7fau)), false));
    // 1501:03d6  mov ax, word ptr [0x7ee]  [x618]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:03d9  sub ax, word ptr [0x7f0]  [x618]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7f0u)), false));
    // 1501:03dd  mov bx, ax  [x618]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:03df  mov si, word ptr [0x7f4]  [x618]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:03e3  sub si, word ptr [0x7f2]  [x618]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:03e7  mov ax, word ptr [0x7ee]  [x618]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:03ea  xor dx, dx  [x618]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:03ec  mov cx, word ptr [0x7f4]  [x618]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:03f0  sub cx, word ptr [0x7f2]  [x618]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:03f4  cmp cx, 0  [x618]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:03f7  jne 0x3fa  [x618]
    if (!c.zf) goto L1540a;
L15409:
    if (c.tracing) c.traceAt(0x15409);
    // 1501:03f9  ret   [x35]
    c.ip = c.pop16(); return;
L1540a:
    if (c.tracing) c.traceAt(0x1540a);
    // 1501:03fa  mov word ptr [di + 0x7fc], ax  [x19542]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x7fcu), c.a.x);
L1540e:
    if (c.tracing) c.traceAt(0x1540e);
    // 1501:03fe  dec ax  [x55010]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, false));
    // 1501:03ff  add dx, si  [x55010]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:0401  cmp dx, bx  [x55010]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:0403  jb 0x3fe  [x55010]
    if (c.cf) goto L1540e;
L15415:
    if (c.tracing) c.traceAt(0x15415);
    // 1501:0405  sub dx, bx  [x19542]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, false));
    // 1501:0407  add di, 4  [x19542]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, true));
    // 1501:040a  loop 0x3fa  [x19542]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1540a;
L1541c:
    if (c.tracing) c.traceAt(0x1541c);
    // 1501:040c  ret   [x583]
    c.ip = c.pop16(); return;
L1541d:
    if (c.tracing) c.traceAt(0x1541d);
    // 1501:040d  mov di, word ptr [0x7f8]  [x543]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f8u)));
    // 1501:0411  shl di, 2  [x543]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x2u) & 31), false));
    // 1501:0414  add di, word ptr [0x7fa]  [x543]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x7fau)), false));
    // 1501:0418  mov bx, word ptr [0x7f4]  [x543]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:041c  sub bx, word ptr [0x7f2]  [x543]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:0420  mov cx, word ptr [0x7f4]  [x543]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:0424  sub cx, word ptr [0x7f2]  [x543]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:0428  mov ax, word ptr [0x7f0]  [x543]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f0u)));
    // 1501:042b  sub ax, word ptr [0x7ee]  [x543]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7eeu)), false));
    // 1501:042f  mov si, ax  [x543]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:0431  mov ax, word ptr [0x7ee]  [x543]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:0434  xor dx, dx  [x543]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
L15446:
    if (c.tracing) c.traceAt(0x15446);
    // 1501:0436  mov word ptr [di + 0x7fc], ax  [x27350]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x7fcu), c.a.x);
    // 1501:043a  add di, 4  [x27350]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:043d  add dx, si  [x27350]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:043f  cmp dx, bx  [x27350]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:0441  jb 0x446  [x27350]
    if (c.cf) goto L15456;
L15453:
    if (c.tracing) c.traceAt(0x15453);
    // 1501:0443  sub dx, bx  [x8662]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:0445  inc ax  [x8662]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L15456:
    if (c.tracing) c.traceAt(0x15456);
    // 1501:0446  loop 0x436  [x27350]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15446;
L15458:
    if (c.tracing) c.traceAt(0x15458);
    // 1501:0448  ret   [x543]
    c.ip = c.pop16(); return;
L15459:
    if (c.tracing) c.traceAt(0x15459);
    // 1501:0449  mov di, word ptr [0x7f8]  [x442]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f8u)));
    // 1501:044d  shl di, 2  [x442]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x2u) & 31), false));
    // 1501:0450  add di, word ptr [0x7fa]  [x442]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0x7fau)), false));
    // 1501:0454  mov bx, word ptr [0x7f4]  [x442]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:0458  sub bx, word ptr [0x7f2]  [x442]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:045c  mov cx, word ptr [0x7f4]  [x442]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7f4u)));
    // 1501:0460  sub cx, word ptr [0x7f2]  [x442]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7f2u)), false));
    // 1501:0464  mov ax, word ptr [0x7ee]  [x442]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:0467  sub ax, word ptr [0x7f0]  [x442]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7f0u)), false));
    // 1501:046b  mov si, ax  [x442]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:046d  mov ax, word ptr [0x7ee]  [x442]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eeu)));
    // 1501:0470  xor dx, dx  [x442]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
L15482:
    if (c.tracing) c.traceAt(0x15482);
    // 1501:0472  mov word ptr [di + 0x7fc], ax  [x20775]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x7fcu), c.a.x);
    // 1501:0476  add di, 4  [x20775]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:0479  add dx, si  [x20775]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 1501:047b  cmp dx, bx  [x20775]
    c.sub<16>(c.dx_.x, c.b.x, true);
    // 1501:047d  jb 0x482  [x20775]
    if (c.cf) goto L15492;
L1548f:
    if (c.tracing) c.traceAt(0x1548f);
    // 1501:047f  sub dx, bx  [x8545]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.b.x, true));
    // 1501:0481  dec ax  [x8545]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
L15492:
    if (c.tracing) c.traceAt(0x15492);
    // 1501:0482  loop 0x472  [x20775]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15482;
L15494:
    if (c.tracing) c.traceAt(0x15494);
    // 1501:0484  ret   [x442]
    c.ip = c.pop16(); return;
L15495:
    if (c.tracing) c.traceAt(0x15495);
    // 1501:0485  mov cx, 0x7fff  [x257]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:0488  xor bp, bp  [x257]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L1549a:
    if (c.tracing) c.traceAt(0x1549a);
    // 1501:048a  mov si, word ptr [0xa]  [x3598]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xau)));
    // 1501:048e  mov ax, word ptr ds:[bp + 0x75a]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x75au)));
    // 1501:0493  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:0497  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x497u); }   // #DE: int 0, then again
    // 1501:0499  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:049a  mov ax, word ptr ds:[bp + 0x758]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x758u)));
    // 1501:049f  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:04a3  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4a3u); }   // #DE: int 0, then again
    // 1501:04a5  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:04a6  add bx, ax  [x3598]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:04a8  mov word ptr [4], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(0x4u), c.b.x);
    // 1501:04ac  mov ax, word ptr ds:[bp + 0x75a]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x75au)));
    // 1501:04b1  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:04b5  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4b5u); }   // #DE: int 0, then again
    // 1501:04b7  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:04b8  mov ax, word ptr ds:[bp + 0x758]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x758u)));
    // 1501:04bd  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:04c1  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4c1u); }   // #DE: int 0, then again
    // 1501:04c3  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:04c4  sub bx, ax  [x3598]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:04c6  mov word ptr [6], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(0x6u), c.b.x);
    // 1501:04ca  mov si, word ptr [0xc]  [x3598]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xcu)));
    // 1501:04ce  mov ax, word ptr [4]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 1501:04d1  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:04d5  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4d5u); }   // #DE: int 0, then again
    // 1501:04d7  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:04d8  mov ax, word ptr ds:[bp + 0x75c]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x75cu)));
    // 1501:04dd  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:04e1  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4e1u); }   // #DE: int 0, then again
    // 1501:04e3  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:04e4  sub bx, ax  [x3598]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:04e6  mov word ptr ds:[bp + 0x36e6], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x36e6u), c.b.x);
    // 1501:04eb  mov ax, word ptr ds:[bp + 0x75c]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x75cu)));
    // 1501:04f0  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:04f4  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4f4u); }   // #DE: int 0, then again
    // 1501:04f6  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:04f7  mov ax, word ptr [4]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 1501:04fa  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:04fe  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x4feu); }   // #DE: int 0, then again
    // 1501:0500  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:0501  add bx, ax  [x3598]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0503  mov word ptr [8], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(0x8u), c.b.x);
    // 1501:0507  mov si, word ptr [0xe]  [x3598]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xeu)));
    // 1501:050b  mov ax, word ptr [8]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8u)));
    // 1501:050e  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:0512  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x512u); }   // #DE: int 0, then again
    // 1501:0514  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:0515  mov ax, word ptr [6]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6u)));
    // 1501:0518  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:051c  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x51cu); }   // #DE: int 0, then again
    // 1501:051e  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:051f  add bx, ax  [x3598]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:0521  mov word ptr ds:[bp + 0x36e8], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x36e8u), c.b.x);
    // 1501:0526  mov ax, word ptr [8]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8u)));
    // 1501:0529  imul word ptr [si + 0x178]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x178u)));
    // 1501:052d  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x52du); }   // #DE: int 0, then again
    // 1501:052f  push ax  [x3598]
    c.push16(c.a.x);
    // 1501:0530  mov ax, word ptr [6]  [x3598]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x6u)));
    // 1501:0533  imul word ptr [si + 0x10]  [x3598]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0x10u)));
    // 1501:0537  idiv cx  [x3598]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x537u); }   // #DE: int 0, then again
    // 1501:0539  pop bx  [x3598]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:053a  sub bx, ax  [x3598]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:053c  mov word ptr ds:[bp + 0x36ea], bx  [x3598]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0x36eau), c.b.x);
    // 1501:0541  add bp, 6  [x3598]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:0544  cmp bp, 0x54  [x3598]
    c.sub<16>(c.bp.x, 0x54u, true);
    // 1501:0547  je 0x54c  [x3598]
    if (c.zf) goto L1555c;
L15559:
    if (c.tracing) c.traceAt(0x15559);
    // 1501:0549  jmp 0x48a  [x3341]
    goto L1549a;
L1555c:
    if (c.tracing) c.traceAt(0x1555c);
    // 1501:054c  ret   [x257]
    c.ip = c.pop16(); return;
L1555d:
    if (c.tracing) c.traceAt(0x1555d);
    // 1501:054d  xor bp, bp  [x257]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:054f  xor di, di  [x257]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L15561:
    if (c.tracing) c.traceAt(0x15561);
    // 1501:0551  mov si, word ptr ds:[bp + 0x36ea]  [x3598]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x36eau)));
    // 1501:0556  mov bx, word ptr ds:[bp + 0x36e6]  [x3598]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x36e6u)));
    // 1501:055b  mov cx, word ptr ds:[bp + 0x36e8]  [x3598]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x36e8u)));
    // 1501:0560  add si, 0x41a  [x3598]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x41au, false));
    // 1501:0564  mov ax, si  [x3598]
    c.a.x = (uint16_t)(c.si.x);
    // 1501:0566  sar ax, 5  [x3598]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x5u) & 31), false));
    // 1501:0569  mov word ptr [di + 0x3772], ax  [x3598]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x3772u), c.a.x);
    // 1501:056d  add si, word ptr [0x7f6]  [x3598]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x7f6u)), false));
    // 1501:0571  mov ax, 0xc8  [x3598]
    c.a.x = (uint16_t)(0xc8u);
    // 1501:0574  imul bx  [x3598]
    c.imul16(c.b.x);
    // 1501:0576  idiv si  [x3598]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x576u); }   // #DE: int 0, then again
    // 1501:0578  mov word ptr [di + 0x373a], ax  [x3598]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x373au), c.a.x);
    // 1501:057c  mov ax, 0xb8  [x3598]
    c.a.x = (uint16_t)(0xb8u);
    // 1501:057f  imul cx  [x3598]
    c.imul16(c.c.x);
    // 1501:0581  idiv si  [x3598]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x581u); }   // #DE: int 0, then again
    // 1501:0583  mov word ptr [di + 0x3756], ax  [x3598]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x3756u), c.a.x);
    // 1501:0587  add bp, 6  [x3598]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:058a  add di, 2  [x3598]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:058d  cmp di, 0x1c  [x3598]
    c.sub<16>(c.di.x, 0x1cu, true);
    // 1501:0590  jne 0x551  [x3598]
    if (!c.zf) goto L15561;
L155a2:
    if (c.tracing) c.traceAt(0x155a2);
    // 1501:0592  ret   [x257]
    c.ip = c.pop16(); return;
L155a3:
    if (c.tracing) c.traceAt(0x155a3);
    // 1501:0593  xor si, si  [x257]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:0595  xor bp, bp  [x257]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L155a7:
    if (c.tracing) c.traceAt(0x155a7);
    // 1501:0597  mov di, word ptr [si + 0x7ac]  [x1542]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7acu)));
    // 1501:059b  mov ax, word ptr [di + 0x373a]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x373au)));
    // 1501:059f  mov word ptr [0x7de], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7deu), c.a.x);
    // 1501:05a2  mov ax, word ptr [di + 0x3756]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x3756u)));
    // 1501:05a6  mov word ptr [0x7e6], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7e6u), c.a.x);
    // 1501:05a9  mov di, word ptr [si + 0x7ae]  [x1542]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7aeu)));
    // 1501:05ad  mov ax, word ptr [di + 0x373a]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x373au)));
    // 1501:05b1  mov word ptr [0x7e0], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7e0u), c.a.x);
    // 1501:05b4  mov ax, word ptr [di + 0x3756]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x3756u)));
    // 1501:05b8  mov word ptr [0x7e8], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7e8u), c.a.x);
    // 1501:05bb  mov di, word ptr [si + 0x7b0]  [x1542]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x7b0u)));
    // 1501:05bf  mov ax, word ptr [di + 0x373a]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x373au)));
    // 1501:05c3  mov word ptr [0x7e2], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7e2u), c.a.x);
    // 1501:05c6  mov ax, word ptr [di + 0x3756]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x3756u)));
    // 1501:05ca  mov word ptr [0x7ea], ax  [x1542]
    c.w16(c.dsb + (uint16_t)(0x7eau), c.a.x);
    // 1501:05cd  mov ax, word ptr [0x7ea]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eau)));
    // 1501:05d0  sub ax, word ptr [0x7e8]  [x1542]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7e8u)), false));
    // 1501:05d4  mov cx, word ptr [0x7de]  [x1542]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7deu)));
    // 1501:05d8  sub cx, word ptr [0x7e0]  [x1542]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7e0u)), false));
    // 1501:05dc  imul cx  [x1542]
    c.imul16(c.c.x);
    // 1501:05de  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:05e0  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:05e2  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:05e4  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:05e6  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:05e8  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:05ea  mov di, ax  [x1542]
    c.di.x = (uint16_t)(c.a.x);
    // 1501:05ec  mov ax, word ptr [0x7e6]  [x1542]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e6u)));
    // 1501:05ef  sub ax, word ptr [0x7e8]  [x1542]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7e8u)), false));
    // 1501:05f3  mov cx, word ptr [0x7e2]  [x1542]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7e2u)));
    // 1501:05f7  sub cx, word ptr [0x7e0]  [x1542]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x7e0u)), false));
    // 1501:05fb  imul cx  [x1542]
    c.imul16(c.c.x);
    // 1501:05fd  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:05ff  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:0601  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:0603  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:0605  rcr dx, 1  [x1542]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 1501:0607  rcr ax, 1  [x1542]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 1501:0609  sub di, ax  [x1542]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.a.x, false));
    // 1501:060b  xor al, al  [x1542]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:060d  cmp di, 0  [x1542]
    c.sub<16>(c.di.x, 0x0u, true);
    // 1501:0610  jl 0x614  [x1542]
    if ((c.sf != c.of)) goto L15624;
L15622:
    if (c.tracing) c.traceAt(0x15622);
    // 1501:0612  mov al, 1  [x556]
    c.a.l = (uint8_t)(0x1u);
L15624:
    if (c.tracing) c.traceAt(0x15624);
    // 1501:0614  mov byte ptr ds:[bp + 0x718], al  [x1542]
    c.w8(c.dsb + (uint16_t)(c.bp.x + 0x718u), c.a.l);
    // 1501:0619  inc bp  [x1542]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:061a  add si, 8  [x1542]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, false));
    // 1501:061d  cmp si, 0x30  [x1542]
    c.sub<16>(c.si.x, 0x30u, true);
    // 1501:0620  jae 0x625  [x1542]
    if (!c.cf) goto L15635;
L15632:
    if (c.tracing) c.traceAt(0x15632);
    // 1501:0622  jmp 0x597  [x1285]
    goto L155a7;
L15635:
    if (c.tracing) c.traceAt(0x15635);
    // 1501:0625  ret   [x257]
    c.ip = c.pop16(); return;
L15636:
    if (c.tracing) c.traceAt(0x15636);
    // 1501:0626  xor bp, bp  [x256]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L15638:
    if (c.tracing) c.traceAt(0x15638);
    // 1501:0628  cmp byte ptr ds:[bp + 0x718], 0  [x1536]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x718u)), 0x0u, true);
    // 1501:062e  je 0x663  [x1536]
    if (c.zf) goto L15673;
L15640:
    if (c.tracing) c.traceAt(0x15640);
    // 1501:0630  mov cl, 0  [x555]
    c.c.l = (uint8_t)(0x0u);
    // 1501:0632  cmp bp, 0  [x555]
    c.sub<16>(c.bp.x, 0x0u, true);
    // 1501:0635  je 0x63c  [x555]
    if (c.zf) goto L1564c;
L15647:
    if (c.tracing) c.traceAt(0x15647);
    // 1501:0637  cmp bp, 5  [x444]
    c.sub<16>(c.bp.x, 0x5u, true);
    // 1501:063a  jne 0x63e  [x444]
    if (!c.zf) goto L1564e;
L1564c:
    if (c.tracing) c.traceAt(0x1564c);
    // 1501:063c  mov cl, 2  [x248]
    c.c.l = (uint8_t)(0x2u);
L1564e:
    if (c.tracing) c.traceAt(0x1564e);
    // 1501:063e  mov dx, 0x3c8  [x555]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0641  mov al, byte ptr ds:[bp + 0x391f]  [x555]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x391fu)));
    // 1501:0646  out dx, al  [x555]
    c.ip = 0x647u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0647  inc dx  [x555]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:0648  mov si, bp  [x555]
    c.si.x = (uint16_t)(c.bp.x);
    // 1501:064a  add si, si  [x555]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.si.x, false));
    // 1501:064c  mov al, 0x3f  [x555]
    c.a.l = (uint8_t)(0x3fu);
    // 1501:064e  mov bx, word ptr [si + 0x3782]  [x555]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3782u)));
    // 1501:0652  sub al, bl  [x555]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, false));
    // 1501:0654  sar al, cl  [x555]
    c.a.l = (uint8_t)(c.sar<8>(c.a.l, (int)(c.c.l & 31), false));
    // 1501:0656  add al, byte ptr [0x3bac]  [x555]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x3bacu)), false));
    // 1501:065a  cmp al, 0x3f  [x555]
    c.sub<8>(c.a.l, 0x3fu, true);
    // 1501:065c  jbe 0x660  [x555]
    if ((c.cf || c.zf)) goto L15670;
L1566e:
    if (c.tracing) c.traceAt(0x1566e);
    // 1501:065e  mov al, 0x3f  [x4]
    c.a.l = (uint8_t)(0x3fu);
L15670:
    if (c.tracing) c.traceAt(0x15670);
    // 1501:0660  out dx, al  [x555]
    c.ip = 0x661u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0661  out dx, al  [x555]
    c.ip = 0x662u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0662  out dx, al  [x555]
    c.ip = 0x663u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
L15673:
    if (c.tracing) c.traceAt(0x15673);
    // 1501:0663  inc bp  [x1536]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:0664  cmp bp, 6  [x1536]
    c.sub<16>(c.bp.x, 0x6u, true);
    // 1501:0667  jb 0x628  [x1536]
    if (c.cf) goto L15638;
L15679:
    if (c.tracing) c.traceAt(0x15679);
    // 1501:0669  ret   [x256]
    c.ip = c.pop16(); return;
L1567a:
    if (c.tracing) c.traceAt(0x1567a);
    // 1501:066a  mov ax, 0  [x257]
    c.a.x = (uint16_t)(0x0u);
    // 1501:066d  mov bx, word ptr [0x17a4]  [x257]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a4u)));
    // 1501:0671  cmp byte ptr [0x391e], 0  [x257]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x391eu)), 0x0u, true);
    // 1501:0676  je 0x67e  [x257]
    if (c.zf) goto L1568e;
L15688:
    if (c.tracing) c.traceAt(0x15688);
    // 1501:0678  mov ax, word ptr [0x17a2]  [x128]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17a2u)));
    // 1501:067b  mov bx, 0x7d0  [x128]
    c.b.x = (uint16_t)(0x7d0u);
L1568e:
    if (c.tracing) c.traceAt(0x1568e);
    // 1501:067e  mov word ptr [0x17a2], ax  [x257]
    c.w16(c.dsb + (uint16_t)(0x17a2u), c.a.x);
    // 1501:0681  mov word ptr [0x17a4], bx  [x257]
    c.w16(c.dsb + (uint16_t)(0x17a4u), c.b.x);
    // 1501:0685  xor bp, bp  [x257]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
L15697:
    if (c.tracing) c.traceAt(0x15697);
    // 1501:0687  push bp  [x1542]
    c.push16(c.bp.x);
    // 1501:0688  cmp byte ptr ds:[bp + 0x718], 0  [x1542]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x718u)), 0x0u, true);
    // 1501:068e  jne 0x693  [x1542]
    if (!c.zf) goto L156a3;
L156a0:
    if (c.tracing) c.traceAt(0x156a0);
    // 1501:0690  jmp 0x71b  [x986]
    goto L1572b;
L156a3:
    if (c.tracing) c.traceAt(0x156a3);
    // 1501:0693  mov dx, 0x3c4  [x556]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:0696  mov al, 2  [x556]
    c.a.l = (uint8_t)(0x2u);
    // 1501:0698  mov ah, byte ptr ds:[bp + 0x391f]  [x556]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x391fu)));
    // 1501:069d  out dx, ax  [x556]
    c.ip = 0x69eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:069e  mov dx, 0x3ce  [x556]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:06a1  mov al, 4  [x556]
    c.a.l = (uint8_t)(0x4u);
    // 1501:06a3  mov ah, byte ptr ds:[bp + 0x3925]  [x556]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x + 0x3925u)));
    // 1501:06a8  out dx, ax  [x556]
    c.ip = 0x6a9u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:06a9  rol bp, 3  [x556]
    c.bp.x = (uint16_t)(c.rol<16>(c.bp.x, (int)((0x3u) & 31), false));
    // 1501:06ac  mov si, word ptr ds:[bp + 0x7ac]  [x556]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7acu)));
    // 1501:06b1  mov ax, word ptr [si + 0x373a]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x373au)));
    // 1501:06b5  add ax, word ptr [0]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0u)), false));
    // 1501:06b9  mov word ptr [0x7de], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7deu), c.a.x);
    // 1501:06bc  mov ax, word ptr [si + 0x3756]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3756u)));
    // 1501:06c0  add ax, word ptr [2]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2u)), false));
    // 1501:06c4  mov word ptr [0x7e6], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7e6u), c.a.x);
    // 1501:06c7  mov si, word ptr ds:[bp + 0x7ae]  [x556]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7aeu)));
    // 1501:06cc  mov ax, word ptr [si + 0x373a]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x373au)));
    // 1501:06d0  add ax, word ptr [0]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0u)), false));
    // 1501:06d4  mov word ptr [0x7e0], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7e0u), c.a.x);
    // 1501:06d7  mov ax, word ptr [si + 0x3756]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3756u)));
    // 1501:06db  add ax, word ptr [2]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2u)), false));
    // 1501:06df  mov word ptr [0x7e8], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7e8u), c.a.x);
    // 1501:06e2  mov si, word ptr ds:[bp + 0x7b0]  [x556]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7b0u)));
    // 1501:06e7  mov ax, word ptr [si + 0x373a]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x373au)));
    // 1501:06eb  add ax, word ptr [0]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0u)), false));
    // 1501:06ef  mov word ptr [0x7e2], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7e2u), c.a.x);
    // 1501:06f2  mov ax, word ptr [si + 0x3756]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3756u)));
    // 1501:06f6  add ax, word ptr [2]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2u)), false));
    // 1501:06fa  mov word ptr [0x7ea], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7eau), c.a.x);
    // 1501:06fd  mov si, word ptr ds:[bp + 0x7b2]  [x556]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0x7b2u)));
    // 1501:0702  mov ax, word ptr [si + 0x373a]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x373au)));
    // 1501:0706  add ax, word ptr [0]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0u)), false));
    // 1501:070a  mov word ptr [0x7e4], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7e4u), c.a.x);
    // 1501:070d  mov ax, word ptr [si + 0x3756]  [x556]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x3756u)));
    // 1501:0711  add ax, word ptr [2]  [x556]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2u)), true));
    // 1501:0715  mov word ptr [0x7ec], ax  [x556]
    c.w16(c.dsb + (uint16_t)(0x7ecu), c.a.x);
    // 1501:0718  call 0x16b  [x556]
    c.push16(0x71bu); code_11(c, 0x1517bu); if (c.ip != 0x71bu) c.badReturn(0x15728);
L1572b:
    if (c.tracing) c.traceAt(0x1572b);
    // 1501:071b  pop bp  [x1542]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 1501:071c  inc bp  [x1542]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, false));
    // 1501:071d  cmp bp, 6  [x1542]
    c.sub<16>(c.bp.x, 0x6u, true);
    // 1501:0720  je 0x725  [x1542]
    if (c.zf) goto L15735;
L15732:
    if (c.tracing) c.traceAt(0x15732);
    // 1501:0722  jmp 0x687  [x1285]
    goto L15697;
L15735:
    if (c.tracing) c.traceAt(0x15735);
    // 1501:0725  ret   [x257]
    c.ip = c.pop16(); return;
L15736:
    if (c.tracing) c.traceAt(0x15736);
    // 1501:0726  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L15739:
    if (c.tracing) c.traceAt(0x15739);
    // 1501:0729  in al, dx  [x1]
    c.ip = 0x72au; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 1501:072a  and al, 8  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:072c  jne 0x729  [x1]
    if (!c.zf) goto L15739;
L1573e:
    if (c.tracing) c.traceAt(0x1573e);
    // 1501:072e  in al, dx  [x45]
    c.ip = 0x72fu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1573f:
    if (c.tracing) c.traceAt(0x1573f);
    // 1501:072f  and al, 8  [x60]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:0731  je 0x72e  [x60]
    if (c.zf) goto L1573e;
L15743:
    if (c.tracing) c.traceAt(0x15743);
    // 1501:0733  ret   [x1]
    c.ip = c.pop16(); return;
L15744:
    if (c.tracing) c.traceAt(0x15744);
    // 1501:0734  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:0737  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:0739  out dx, al  [x1]
    c.ip = 0x73au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:073a  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:073b  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
    // 1501:073e  mov al, 0x3f  [x1]
    c.a.l = (uint8_t)(0x3fu);
L15750:
    if (c.tracing) c.traceAt(0x15750);
    // 1501:0740  out dx, al  [x48]
    c.ip = 0x741u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:0741  loop 0x740  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L15750;
L15753:
    if (c.tracing) c.traceAt(0x15753);
    // 1501:0743  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_11(11, {0x15010, 0x1501b, 0x1502c, 0x1503c, 0x15044, 0x15047, 0x1504a, 0x1504d, 0x15050, 0x15063, 0x15072, 0x1507a, 0x1508f, 0x15090, 0x15094, 0x15095, 0x15099, 0x150c5, 0x150c7, 0x150cd, 0x150e3, 0x150ea, 0x150f7, 0x150f9, 0x15100, 0x15103, 0x15106, 0x15109, 0x1510c, 0x15121, 0x1512d, 0x15139, 0x1513e, 0x15146, 0x15153, 0x15159, 0x15166, 0x1516c, 0x1516e, 0x15175, 0x15178, 0x1517b, 0x151ab, 0x151b1, 0x151b4, 0x151d8, 0x151de, 0x151e1, 0x15205, 0x1520b, 0x1520e, 0x15232, 0x15238, 0x1523b, 0x15244, 0x15247, 0x1524d, 0x15250, 0x15256, 0x15259, 0x1525e, 0x1526b, 0x1526f, 0x15275, 0x15279, 0x1527f, 0x15283, 0x15289, 0x1528c, 0x15296, 0x15297, 0x152a2, 0x152a6, 0x152b0, 0x152b3, 0x152c2, 0x152ce, 0x152d0, 0x152d9, 0x152df, 0x152e5, 0x152ee, 0x1531d, 0x15320, 0x15322, 0x15329, 0x1532d, 0x15338, 0x15344, 0x15347, 0x1534e, 0x15354, 0x15358, 0x15359, 0x15362, 0x15373, 0x15385, 0x15387, 0x15397, 0x1539d, 0x1539f, 0x153a1, 0x153a7, 0x153a9, 0x153ac, 0x153be, 0x153bf, 0x153c8, 0x153cc, 0x153d3, 0x153da, 0x153db, 0x15409, 0x1540a, 0x1540e, 0x15415, 0x1541c, 0x1541d, 0x15446, 0x15453, 0x15456, 0x15458, 0x15459, 0x15482, 0x1548f, 0x15492, 0x15494, 0x15495, 0x1549a, 0x15559, 0x1555c, 0x1555d, 0x15561, 0x155a2, 0x155a3, 0x155a7, 0x15622, 0x15624, 0x15632, 0x15635, 0x15636, 0x15638, 0x15640, 0x15647, 0x1564c, 0x1564e, 0x1566e, 0x15670, 0x15673, 0x15679, 0x1567a, 0x15688, 0x1568e, 0x15697, 0x156a0, 0x156a3, 0x1572b, 0x15732, 0x15735, 0x15736, 0x15739, 0x1573e, 0x1573f, 0x15743, 0x15744, 0x15750, 0x15753}, code_11);

}  // namespace show
