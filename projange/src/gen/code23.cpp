// Program 23, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_23(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x5ce90: goto L5ce90;
    case 0x5ceb9: goto L5ceb9;
    case 0x5cef8: goto L5cef8;
    case 0x5cf09: goto L5cf09;
    case 0x5cf0c: goto L5cf0c;
    case 0x5d1b4: goto L5d1b4;
    case 0x5d1b8: goto L5d1b8;
    case 0x5d1d9: goto L5d1d9;
    case 0x5d2a0: goto L5d2a0;
    case 0x5d2a2: goto L5d2a2;
    case 0x5d2b8: goto L5d2b8;
    case 0x5d2ce: goto L5d2ce;
    case 0x5d2ee: goto L5d2ee;
    case 0x5d2f8: goto L5d2f8;
    case 0x5d30b: goto L5d30b;
    case 0x5d334: goto L5d334;
    case 0x5d354: goto L5d354;
    case 0x5d35e: goto L5d35e;
    case 0x5d371: goto L5d371;
    case 0x5d39a: goto L5d39a;
    case 0x5d3a4: goto L5d3a4;
    case 0x5d3dd: goto L5d3dd;
    case 0x5d3e1: goto L5d3e1;
    case 0x5d3f6: goto L5d3f6;
    case 0x5d403: goto L5d403;
    case 0x5d409: goto L5d409;
    case 0x5d40d: goto L5d40d;
    case 0x5d411: goto L5d411;
    case 0x5d413: goto L5d413;
    case 0x5d418: goto L5d418;
    case 0x5d41a: goto L5d41a;
    case 0x5d428: goto L5d428;
    case 0x5d431: goto L5d431;
    case 0x5d449: goto L5d449;
    case 0x5d472: goto L5d472;
    case 0x5d491: goto L5d491;
    case 0x5d49e: goto L5d49e;
    case 0x5d4be: goto L5d4be;
    case 0x5d4c8: goto L5d4c8;
    case 0x5d4db: goto L5d4db;
    case 0x5d504: goto L5d504;
    case 0x5d50b: goto L5d50b;
    case 0x5d516: goto L5d516;
    case 0x5d536: goto L5d536;
    case 0x5d540: goto L5d540;
    case 0x5d553: goto L5d553;
    case 0x5d57c: goto L5d57c;
    case 0x5d589: goto L5d589;
    case 0x5d58c: goto L5d58c;
    case 0x5d5a6: goto L5d5a6;
    case 0x5d5d6: goto L5d5d6;
    case 0x5d5eb: goto L5d5eb;
    case 0x5d635: goto L5d635;
    case 0x5d63a: goto L5d63a;
    case 0x5d63c: goto L5d63c;
    case 0x5d647: goto L5d647;
    case 0x5d659: goto L5d659;
    case 0x5d661: goto L5d661;
    case 0x5d695: goto L5d695;
    case 0x5d697: goto L5d697;
    case 0x5d69a: goto L5d69a;
    case 0x5d69d: goto L5d69d;
    case 0x5d6af: goto L5d6af;
    case 0x5d6b0: goto L5d6b0;
    case 0x5d6cb: goto L5d6cb;
    case 0x5d6fd: goto L5d6fd;
    case 0x5d755: goto L5d755;
    case 0x5d76d: goto L5d76d;
    case 0x5d773: goto L5d773;
    case 0x5d779: goto L5d779;
    case 0x5d785: goto L5d785;
    case 0x5d7a6: goto L5d7a6;
    case 0x5d7cb: goto L5d7cb;
    case 0x5d7d1: goto L5d7d1;
    case 0x5d7de: goto L5d7de;
    case 0x5d7ec: goto L5d7ec;
    case 0x5d7f0: goto L5d7f0;
    case 0x5d7f5: goto L5d7f5;
    case 0x5d81e: goto L5d81e;
    case 0x5d86e: goto L5d86e;
    case 0x5d888: goto L5d888;
    case 0x5d892: goto L5d892;
    case 0x5d8f3: goto L5d8f3;
    case 0x5d91c: goto L5d91c;
    case 0x5d930: goto L5d930;
    case 0x5d934: goto L5d934;
    case 0x5d999: goto L5d999;
    case 0x5d9ca: goto L5d9ca;
    case 0x5d9fa: goto L5d9fa;
    case 0x5da08: goto L5da08;
    case 0x5da0e: goto L5da0e;
    case 0x5da13: goto L5da13;
    case 0x5da16: goto L5da16;
    case 0x5da18: goto L5da18;
    case 0x5da23: goto L5da23;
    case 0x5da2e: goto L5da2e;
    case 0x5da5e: goto L5da5e;
    case 0x5da6c: goto L5da6c;
    case 0x5da72: goto L5da72;
    case 0x5da77: goto L5da77;
    case 0x5da7a: goto L5da7a;
    case 0x5da7c: goto L5da7c;
    case 0x5da8e: goto L5da8e;
    case 0x5da95: goto L5da95;
    case 0x5da9d: goto L5da9d;
    case 0x5daa9: goto L5daa9;
    case 0x5daaf: goto L5daaf;
    case 0x5db4b: goto L5db4b;
    case 0x5db55: goto L5db55;
    case 0x5db5d: goto L5db5d;
    case 0x5db60: goto L5db60;
    case 0x5db68: goto L5db68;
    case 0x5db93: goto L5db93;
    case 0x5dbab: goto L5dbab;
    case 0x5dbac: goto L5dbac;
    case 0x5dbc8: goto L5dbc8;
    case 0x5dbdb: goto L5dbdb;
    case 0x5dbe6: goto L5dbe6;
    case 0x5dbe8: goto L5dbe8;
    case 0x5dc00: goto L5dc00;
    case 0x5dc71: goto L5dc71;
    case 0x5dc75: goto L5dc75;
    case 0x5dc79: goto L5dc79;
    case 0x5dc7a: goto L5dc7a;
    case 0x5dc7e: goto L5dc7e;
    case 0x5dc82: goto L5dc82;
    case 0x5dc89: goto L5dc89;
    case 0x5dc93: goto L5dc93;
    case 0x5dc9a: goto L5dc9a;
    case 0x5dca4: goto L5dca4;
    case 0x5dcab: goto L5dcab;
    case 0x5dcb5: goto L5dcb5;
    case 0x5dcbc: goto L5dcbc;
    case 0x5dcc6: goto L5dcc6;
    case 0x5dccd: goto L5dccd;
    case 0x5dcd7: goto L5dcd7;
    case 0x5dcde: goto L5dcde;
    case 0x5dce8: goto L5dce8;
    case 0x5dcef: goto L5dcef;
    case 0x5dcf9: goto L5dcf9;
    case 0x5dd00: goto L5dd00;
    case 0x5dd0a: goto L5dd0a;
    case 0x5dd11: goto L5dd11;
    case 0x5dd1b: goto L5dd1b;
    case 0x5dd22: goto L5dd22;
    case 0x5dd2c: goto L5dd2c;
    case 0x5dd33: goto L5dd33;
    case 0x5dd3d: goto L5dd3d;
    case 0x5dd44: goto L5dd44;
    case 0x5dd4e: goto L5dd4e;
    case 0x5dd55: goto L5dd55;
    case 0x5dd5f: goto L5dd5f;
    case 0x5dd63: goto L5dd63;
    case 0x5dd68: goto L5dd68;
    case 0x5dd7d: goto L5dd7d;
    case 0x5dd7e: goto L5dd7e;
    case 0x5dd87: goto L5dd87;
    case 0x5ddfb: goto L5ddfb;
    case 0x5ddfd: goto L5ddfd;
    case 0x5ddfe: goto L5ddfe;
    case 0x5de0b: goto L5de0b;
    case 0x5de0f: goto L5de0f;
    case 0x5de27: goto L5de27;
    case 0x5deb5: goto L5deb5;
    case 0x5dec4: goto L5dec4;
    case 0x5ded3: goto L5ded3;
    case 0x5dee7: goto L5dee7;
    case 0x5def6: goto L5def6;
    case 0x5df0a: goto L5df0a;
    case 0x5df1e: goto L5df1e;
    case 0x5df32: goto L5df32;
    case 0x5df46: goto L5df46;
    case 0x5df55: goto L5df55;
    default: c.callLinear(t); return;
    }
L5ce90:
    if (c.tracing) c.traceAt(0x5ce90);
    // 5ce9:0000  push es  [x1429]
    c.push16(c.es);
    // 5ce9:0001  mov ax, 0x5cc2  [x1429]
    c.a.x = (uint16_t)(0x5cc2u);
    // 5ce9:0004  mov es, ax  [x1429]
    c.loadEs(c.a.x);
    // 5ce9:0006  mov cl, byte ptr [0x1f5]  [x1429]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 5ce9:000a  mov ch, byte ptr [0x1f6]  [x1429]
    c.c.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f6u)));
    // 5ce9:000e  mov dl, byte ptr [0x1f3]  [x1429]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f3u)));
    // 5ce9:0012  mov dh, byte ptr [0x1f4]  [x1429]
    c.dx_.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 5ce9:0016  mov al, byte ptr [0x1f5]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 5ce9:0019  sub al, byte ptr [0x1f3]  [x1429]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x1f3u)), false));
    // 5ce9:001d  mov cl, byte ptr [0x1f6]  [x1429]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f6u)));
    // 5ce9:0021  sub cl, byte ptr [0x1f4]  [x1429]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.r8(c.dsb + (uint16_t)(0x1f4u)), false));
    // 5ce9:0025  cmp al, cl  [x1429]
    c.sub<8>(c.a.l, c.c.l, true);
    // 5ce9:0027  jae 0x29  [x1429]
    if (!c.cf) goto L5ceb9;
L5ceb9:
    if (c.tracing) c.traceAt(0x5ceb9);
    // 5ce9:0029  xor ax, ax  [x1429]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 5ce9:002b  xor bx, bx  [x1429]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 5ce9:002d  mov al, byte ptr [0x1f6]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f6u)));
    // 5ce9:0030  mov bl, byte ptr [0x1f4]  [x1429]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 5ce9:0034  sub ax, bx  [x1429]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 5ce9:0036  shl eax, 0x10  [x1429]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:003a  cdq   [x1429]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:003c  xor ecx, ecx  [x1429]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), false));
    // 5ce9:003f  mov cl, byte ptr [0x1f5]  [x1429]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 5ce9:0043  sub cl, byte ptr [0x1f3]  [x1429]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.r8(c.dsb + (uint16_t)(0x1f3u)), false));
    // 5ce9:0047  idiv ecx  [x1429]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x47u); }   // #DE: int 0, then again
    // 5ce9:004a  mov ecx, eax  [x1429]
    c.c.e = (uint32_t)(c.a.e);
    // 5ce9:004d  xor edx, edx  [x1429]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5ce9:0050  mov dl, byte ptr [0x1f5]  [x1429]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 5ce9:0054  sub dl, byte ptr [0x1f3]  [x1429]
    c.dx_.l = (uint8_t)(c.sub<8>(c.dx_.l, c.r8(c.dsb + (uint16_t)(0x1f3u)), false));
    // 5ce9:0058  mov esi, edx  [x1429]
    c.si.e = (uint32_t)(c.dx_.e);
    // 5ce9:005b  mov dl, byte ptr [0x1f4]  [x1429]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 5ce9:005f  shl edx, 0x10  [x1429]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 5ce9:0063  xor bx, bx  [x1429]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 5ce9:0065  mov di, 0  [x1429]
    c.di.x = (uint16_t)(0x0u);
L5cef8:
    if (c.tracing) c.traceAt(0x5cef8);
    // 5ce9:0068  mov eax, edx  [x114320]
    c.a.e = (uint32_t)(c.dx_.e);
    // 5ce9:006b  sar eax, 0x10  [x114320]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:006f  mov byte ptr es:[di], al  [x114320]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0072  inc di  [x114320]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 5ce9:0073  add edx, ecx  [x114320]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.c.e, true));
    // 5ce9:0076  dec si  [x114320]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 5ce9:0077  jne 0x68  [x114320]
    if (!c.zf) goto L5cef8;
L5cf09:
    if (c.tracing) c.traceAt(0x5cf09);
    // 5ce9:0079  pop es  [x1429]
    c.loadEs((uint16_t)c.pop16());
    // 5ce9:007a  retf   [x1429]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5cf0c:
    if (c.tracing) c.traceAt(0x5cf0c);
    // 5ce9:007c  mov ax, 0x24f1  [x9449]
    c.a.x = (uint16_t)(0x24f1u);
    // 5ce9:007f  mov es, ax  [x9449]
    c.loadEs(c.a.x);
    // 5ce9:0081  mov ebx, dword ptr [0x1ae]  [x9449]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1aeu)));
    // 5ce9:0086  mov edi, dword ptr [0x1b2]  [x9449]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b2u)));
    // 5ce9:008b  add ebx, ebx  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5ce9:008e  add edi, edi  [x9449]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 5ce9:0091  mov ebp, ebx  [x9449]
    c.bp.e = (uint32_t)(c.b.e);
    // 5ce9:0094  add ebx, edi  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 5ce9:0097  sub ebp, edi  [x9449]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 5ce9:009a  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:00a4  add eax, dword ptr es:[ebp*2 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5ce9:00ae  sar eax, 1  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5ce9:00b1  mov dword ptr [0x18a], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x18au), c.a.e);
    // 5ce9:00b5  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:00bf  add eax, dword ptr es:[ebp*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5ce9:00c9  sar eax, 1  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5ce9:00cc  mov dword ptr [0x18e], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x18eu), c.a.e);
    // 5ce9:00d0  mov ebx, edi  [x9449]
    c.b.e = (uint32_t)(c.di.e);
    // 5ce9:00d3  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:00dd  mov dword ptr [0x192], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x192u), c.a.e);
    // 5ce9:00e1  mov ebp, dword ptr [0x1b6]  [x9449]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b6u)));
    // 5ce9:00e6  add ebp, ebp  [x9449]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:00e9  mov eax, ebx  [x9449]
    c.a.e = (uint32_t)(c.b.e);
    // 5ce9:00ec  sub ebx, ebp  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 5ce9:00ef  add ebp, eax  [x9449]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5ce9:00f2  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:00fc  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5ce9:0106  sar eax, 1  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5ce9:0109  mov dword ptr [0x19e], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x19eu), c.a.e);
    // 5ce9:010d  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:0117  add eax, dword ptr es:[ebp*2 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5ce9:0121  sar eax, 1  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5ce9:0124  mov dword ptr [0x1aa], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x1aau), c.a.e);
    // 5ce9:0128  mov ebx, dword ptr [0x1ae]  [x9449]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1aeu)));
    // 5ce9:012d  add ebx, dword ptr [0x1b2]  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b2u)), false));
    // 5ce9:0132  sub ebx, dword ptr [0x1b6]  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b6u)), false));
    // 5ce9:0137  add ebx, ebx  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5ce9:013a  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:0144  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:014e  mov edx, ecx  [x9449]
    c.dx_.e = (uint32_t)(c.c.e);
    // 5ce9:0151  neg edx  [x9449]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 5ce9:0154  mov edi, eax  [x9449]
    c.di.e = (uint32_t)(c.a.e);
    // 5ce9:0157  mov esi, dword ptr [0x1b6]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b6u)));
    // 5ce9:015c  add esi, esi  [x9449]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5ce9:015f  add ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5ce9:0162  add ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5ce9:0165  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:016f  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:0179  sub eax, esi  [x9449]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:017c  sub ecx, ebp  [x9449]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5ce9:017f  sub edx, ebp  [x9449]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 5ce9:0182  add edi, esi  [x9449]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 5ce9:0185  mov esi, dword ptr [0x1b2]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b2u)));
    // 5ce9:018a  add esi, esi  [x9449]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5ce9:018d  sub ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5ce9:0190  sub ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5ce9:0193  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:019d  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:01a7  add eax, esi  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 5ce9:01aa  add ecx, ebp  [x9449]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 5ce9:01ad  add edx, ebp  [x9449]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5ce9:01b0  sub edi, esi  [x9449]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5ce9:01b3  mov esi, dword ptr [0x1b6]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b6u)));
    // 5ce9:01b8  add esi, esi  [x9449]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5ce9:01bb  sub ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5ce9:01be  sub ebx, esi  [x9449]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5ce9:01c1  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:01cb  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:01d5  sub eax, esi  [x9449]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:01d8  sub ecx, ebp  [x9449]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5ce9:01db  add edx, ebp  [x9449]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5ce9:01de  sub edi, esi  [x9449]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5ce9:01e1  sar eax, 2  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 5ce9:01e5  sar ecx, 2  [x9449]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 5ce9:01e9  sar edx, 2  [x9449]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 5ce9:01ed  sar edi, 2  [x9449]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 5ce9:01f1  mov dword ptr [0x196], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x196u), c.a.e);
    // 5ce9:01f5  mov dword ptr [0x19a], ecx  [x9449]
    c.w32(c.dsb + (uint16_t)(0x19au), c.c.e);
    // 5ce9:01fa  mov dword ptr [0x1a2], edx  [x9449]
    c.w32(c.dsb + (uint16_t)(0x1a2u), c.dx_.e);
    // 5ce9:01ff  mov dword ptr [0x1a6], edi  [x9449]
    c.w32(c.dsb + (uint16_t)(0x1a6u), c.di.e);
    // 5ce9:0204  mov ebx, dword ptr [0x1ae]  [x9449]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1aeu)));
    // 5ce9:0209  mov ebp, ebx  [x9449]
    c.bp.e = (uint32_t)(c.b.e);
    // 5ce9:020c  add ebx, dword ptr [0x1b6]  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b6u)), false));
    // 5ce9:0211  sub ebp, dword ptr [0x1b6]  [x9449]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x1b6u)), false));
    // 5ce9:0216  add ebx, ebx  [x9449]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5ce9:0219  add ebp, ebp  [x9449]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:021c  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:0226  add eax, dword ptr es:[ebp*2 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5ce9:0230  sar eax, 1  [x9449]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5ce9:0233  add dword ptr [0x196], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x196u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x196u)), c.a.e, false));
    // 5ce9:0238  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:0242  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x9449]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5ce9:024c  sar ecx, 1  [x9449]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 5ce9:024f  sub dword ptr [0x19a], ecx  [x9449]
    c.w32(c.dsb + (uint16_t)(0x19au), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x19au)), c.c.e, false));
    // 5ce9:0254  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x9449]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5ce9:025e  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x9449]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5ce9:0268  sar edx, 1  [x9449]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 5ce9:026b  sub dword ptr [0x1a2], edx  [x9449]
    c.w32(c.dsb + (uint16_t)(0x1a2u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1a2u)), c.dx_.e, false));
    // 5ce9:0270  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x9449]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5ce9:027a  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x9449]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5ce9:0284  sar edi, 1  [x9449]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 5ce9:0287  sub dword ptr [0x1a6], edi  [x9449]
    c.w32(c.dsb + (uint16_t)(0x1a6u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1a6u)), c.di.e, false));
    // 5ce9:028c  mov eax, dword ptr [0x18a]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x18au)));
    // 5ce9:0290  mov dword ptr cs:[0x3a4], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3a4u), c.a.e);
    // 5ce9:0295  mov eax, dword ptr [0x18e]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x18eu)));
    // 5ce9:0299  mov dword ptr cs:[0x3ab], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3abu), c.a.e);
    // 5ce9:029e  mov eax, dword ptr [0x192]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x192u)));
    // 5ce9:02a2  mov dword ptr cs:[0x3b5], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3b5u), c.a.e);
    // 5ce9:02a7  mov eax, dword ptr [0x196]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x196u)));
    // 5ce9:02ab  mov dword ptr cs:[0x3d4], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3d4u), c.a.e);
    // 5ce9:02b0  mov eax, dword ptr [0x19a]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x19au)));
    // 5ce9:02b4  mov dword ptr cs:[0x3db], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3dbu), c.a.e);
    // 5ce9:02b9  mov eax, dword ptr [0x19e]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x19eu)));
    // 5ce9:02bd  mov dword ptr cs:[0x3e5], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x3e5u), c.a.e);
    // 5ce9:02c2  mov eax, dword ptr [0x1a2]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a2u)));
    // 5ce9:02c6  mov dword ptr cs:[0x364], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x364u), c.a.e);
    // 5ce9:02cb  mov eax, dword ptr [0x1a6]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a6u)));
    // 5ce9:02cf  mov dword ptr cs:[0x36b], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x36bu), c.a.e);
    // 5ce9:02d4  mov eax, dword ptr [0x1aa]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1aau)));
    // 5ce9:02d8  mov dword ptr cs:[0x375], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0x375u), c.a.e);
    // 5ce9:02dd  mov eax, dword ptr [0x1b2]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b2u)));
    // 5ce9:02e1  and eax, 0x3ff  [x9449]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 5ce9:02e7  mov eax, dword ptr es:[eax*4 + 0x3000]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.a.e * 4 + 0x3000u)));
    // 5ce9:02f1  cdq   [x9449]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:02f3  mov ebp, 2  [x9449]
    c.bp.e = (uint32_t)(0x2u);
    // 5ce9:02f9  idiv ebp  [x9449]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x2f9u); }   // #DE: int 0, then again
    // 5ce9:02fc  mov dword ptr [0x207], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x207u), c.a.e);
    // 5ce9:0300  mov eax, dword ptr [0x1b2]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b2u)));
    // 5ce9:0304  and eax, 0x3ff  [x9449]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 5ce9:030a  mov eax, dword ptr es:[eax*4 + 0x3400]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.a.e * 4 + 0x3400u)));
    // 5ce9:0314  cdq   [x9449]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:0316  mov ebp, 2  [x9449]
    c.bp.e = (uint32_t)(0x2u);
    // 5ce9:031c  idiv ebp  [x9449]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x31cu); }   // #DE: int 0, then again
    // 5ce9:031f  mov dword ptr [0x203], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x203u), c.a.e);
    // 5ce9:0323  retf   [x9449]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5d1b4:
    if (c.tracing) c.traceAt(0x5d1b4);
    // 5ce9:0324  push cs  [x9449]
    c.push16(c.cs);
    // 5ce9:0325  call 0x7c  [x9449]
    c.push16(0x328u); code_23(c, 0x5cf0cu); if (c.ip != 0x328u) c.badReturn(0x5d1b5);
L5d1b8:
    if (c.tracing) c.traceAt(0x5d1b8);
    // 5ce9:0328  lfs si, ptr [0x17e]  [x9449]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5ce9:032d  movzx esi, si  [x9449]
    c.si.e = (uint32_t)(c.si.x);
    // 5ce9:0331  mov eax, dword ptr fs:[esi]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 5ce9:0336  shl eax, 4  [x9449]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 5ce9:033a  mov word ptr [0x17a], ax  [x9449]
    c.w16(c.dsb + (uint16_t)(0x17au), c.a.x);
    // 5ce9:033d  add esi, 8  [x9449]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 5ce9:0341  add word ptr [0x17a], si  [x9449]
    c.w16(c.dsb + (uint16_t)(0x17au), c.add<16>(c.r16(c.dsb + (uint16_t)(0x17au)), c.si.x, true));
    // 5ce9:0345  les di, ptr [0x182]  [x9449]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x182u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x182u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L5d1d9:
    if (c.tracing) c.traceAt(0x5d1d9);
    // 5ce9:0349  mov ebx, dword ptr fs:[si]  [x491616]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:034d  mov ecx, dword ptr fs:[si + 4]  [x491616]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 5ce9:0352  mov edi, dword ptr fs:[si + 8]  [x491616]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 5ce9:0357  sub edi, dword ptr [0x1ff]  [x491616]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x1ffu)), false));
    // 5ce9:035c  add ebx, dword ptr [0x1f7]  [x491616]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1f7u)), false));
    // 5ce9:0361  imul eax, ebx, 0xffffff80  [x491616]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5d1f4))));
    // 5ce9:0368  imul ebp, ecx, 7  [x491616]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5d1fb))));
    // 5ce9:036f  add eax, ebp  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5ce9:0372  imul ebp, edi, 0xfffffe10  [x491616]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5d205))));
    // 5ce9:0379  add eax, ebp  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5ce9:037c  mov dword ptr es:[si + 8], eax  [x491616]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 5ce9:0381  mov ebp, 0x32  [x491616]
    c.bp.e = (uint32_t)(0x32u);
    // 5ce9:0387  imul ebp  [x491616]
    c.imul32(c.bp.e);
    // 5ce9:038a  mov ebp, 0xfa  [x491616]
    c.bp.e = (uint32_t)(0xfau);
    // 5ce9:0390  idiv ebp  [x491616]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x390u); }   // #DE: int 0, then again
    // 5ce9:0393  add eax, 0xfa0  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xfa0u, false));
    // 5ce9:0399  or eax, 1  [x491616]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) | (0x1u), false));
    // 5ce9:039d  mov dword ptr [0x1ce], eax  [x491616]
    c.w32(c.dsb + (uint16_t)(0x1ceu), c.a.e);
    // 5ce9:03a1  imul ebp, ebx, 0xfffffe11  [x491616]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5d234))));
    // 5ce9:03a8  imul eax, ecx, 0x1b  [x491616]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5d23b))));
    // 5ce9:03af  add ebp, eax  [x491616]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5ce9:03b2  imul eax, edi, 0x7f  [x491616]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5d245))));
    // 5ce9:03b9  add eax, ebp  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5ce9:03bc  shl eax, 5  [x491616]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x5u) & 31), false));
    // 5ce9:03c0  cdq   [x491616]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:03c2  idiv dword ptr [0x1ce]  [x491616]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x1ceu)))) { c.d32 = false; c.intr(0, 0x3c2u); }   // #DE: int 0, then again
    // 5ce9:03c7  add eax, 0x9f  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 5ce9:03cd  mov dword ptr es:[si], eax  [x491616]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 5ce9:03d1  imul ebp, ebx, 0xffffffe4  [x491616]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x5d264))));
    // 5ce9:03d8  imul eax, ecx, 0xfffffe01  [x491616]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5d26b))));
    // 5ce9:03df  add ebp, eax  [x491616]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5ce9:03e2  imul eax, edi, 0  [x491616]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x5d275))));
    // 5ce9:03e9  add eax, ebp  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5ce9:03ec  add eax, dword ptr [0x1fb]  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1fbu)), false));
    // 5ce9:03f1  shl eax, 5  [x491616]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x5u) & 31), false));
    // 5ce9:03f5  cdq   [x491616]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:03f7  idiv dword ptr [0x1ce]  [x491616]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x1ceu)))) { c.d32 = false; c.intr(0, 0x3f7u); }   // #DE: int 0, then again
    // 5ce9:03fc  add eax, 0x78  [x491616]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x78u, false));
    // 5ce9:0400  mov dword ptr es:[si + 4], eax  [x491616]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 5ce9:0405  add si, 0x10  [x491616]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 5ce9:0408  cmp si, word ptr [0x17a]  [x491616]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x17au)), true);
    // 5ce9:040c  jb 0x349  [x491616]
    if (c.cf) goto L5d1d9;
L5d2a0:
    if (c.tracing) c.traceAt(0x5d2a0);
    // 5ce9:0410  jmp 0x412  [x9449]
    goto L5d2a2;
L5d2a2:
    if (c.tracing) c.traceAt(0x5d2a2);
    // 5ce9:0412  retf   [x9449]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5d2b8:
    if (c.tracing) c.traceAt(0x5d2b8);
    // 5ce9:0428  mov edx, dword ptr [0x1d2]  [x73009]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d2u)));
    // 5ce9:042d  mov eax, dword ptr fs:[edx + 4]  [x73009]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:0433  imul eax, eax, 0x50  [x73009]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 5ce9:0437  mov dword ptr [0x164], eax  [x73009]
    c.w32(c.dsb + (uint16_t)(0x164u), c.a.e);
    // 5ce9:043b  xor edi, edi  [x73009]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L5d2ce:
    if (c.tracing) c.traceAt(0x5d2ce);
    // 5ce9:043e  mov edx, dword ptr [0x1d6]  [x80170]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d6u)));
    // 5ce9:0443  mov esi, dword ptr fs:[edx]  [x80170]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:0448  mov edi, dword ptr fs:[edx + 4]  [x80170]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:044e  sub edx, 8  [x80170]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 5ce9:0452  mov dword ptr [0x1d6], edx  [x80170]
    c.w32(c.dsb + (uint16_t)(0x1d6u), c.dx_.e);
    // 5ce9:0457  cmp edx, dword ptr [0x1da]  [x80170]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1dau)), true);
    // 5ce9:045c  jge 0x468  [x80170]
    if ((c.sf == c.of)) goto L5d2f8;
L5d2ee:
    if (c.tracing) c.traceAt(0x5d2ee);
    // 5ce9:045e  mov edx, dword ptr [0x1de]  [x29372]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1deu)));
    // 5ce9:0463  mov dword ptr [0x1d6], edx  [x29372]
    c.w32(c.dsb + (uint16_t)(0x1d6u), c.dx_.e);
L5d2f8:
    if (c.tracing) c.traceAt(0x5d2f8);
    // 5ce9:0468  mov eax, dword ptr fs:[edx]  [x80170]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:046d  mov ebx, dword ptr fs:[edx + 4]  [x80170]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:0473  mov edx, ebx  [x80170]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5ce9:0476  sub edx, edi  [x80170]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5ce9:0479  je 0x43e  [x80170]
    if (c.zf) goto L5d2ce;
L5d30b:
    if (c.tracing) c.traceAt(0x5d30b);
    // 5ce9:047b  mov dword ptr [0x158], edx  [x73009]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dx_.e);
    // 5ce9:0480  mov ecx, ebx  [x73009]
    c.c.e = (uint32_t)(c.b.e);
    // 5ce9:0483  sub ecx, edi  [x73009]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5ce9:0486  sub eax, esi  [x73009]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:0489  shl eax, 0x10  [x73009]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:048d  cdq   [x73009]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:048f  or ecx, 1  [x73009]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 5ce9:0493  idiv ecx  [x73009]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x493u); }   // #DE: int 0, then again
    // 5ce9:0496  mov dword ptr cs:[0x5ed], eax  [x73009]
    c.w32(c.csb + (uint16_t)(0x5edu), c.a.e);
    // 5ce9:049b  shl esi, 0x10  [x73009]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5ce9:049f  mov dword ptr [0x150], esi  [x73009]
    c.w32(c.dsb + (uint16_t)(0x150u), c.si.e);
L5d334:
    if (c.tracing) c.traceAt(0x5d334);
    // 5ce9:04a4  mov edx, dword ptr [0x1d2]  [x91070]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d2u)));
    // 5ce9:04a9  mov esi, dword ptr fs:[edx]  [x91070]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:04ae  mov edi, dword ptr fs:[edx + 4]  [x91070]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:04b4  add edx, 8  [x91070]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5ce9:04b8  mov dword ptr [0x1d2], edx  [x91070]
    c.w32(c.dsb + (uint16_t)(0x1d2u), c.dx_.e);
    // 5ce9:04bd  cmp edx, dword ptr [0x1de]  [x91070]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1deu)), true);
    // 5ce9:04c2  jle 0x4ce  [x91070]
    if ((c.zf || c.sf != c.of)) goto L5d35e;
L5d354:
    if (c.tracing) c.traceAt(0x5d354);
    // 5ce9:04c4  mov edx, dword ptr [0x1da]  [x17477]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1dau)));
    // 5ce9:04c9  mov dword ptr [0x1d2], edx  [x17477]
    c.w32(c.dsb + (uint16_t)(0x1d2u), c.dx_.e);
L5d35e:
    if (c.tracing) c.traceAt(0x5d35e);
    // 5ce9:04ce  mov eax, dword ptr fs:[edx]  [x91070]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:04d3  mov ebx, dword ptr fs:[edx + 4]  [x91070]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:04d9  mov edx, ebx  [x91070]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5ce9:04dc  sub edx, edi  [x91070]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5ce9:04df  je 0x4a4  [x91070]
    if (c.zf) goto L5d334;
L5d371:
    if (c.tracing) c.traceAt(0x5d371);
    // 5ce9:04e1  mov dword ptr [0x15c], edx  [x73009]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dx_.e);
    // 5ce9:04e6  mov ecx, ebx  [x73009]
    c.c.e = (uint32_t)(c.b.e);
    // 5ce9:04e9  sub ecx, edi  [x73009]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5ce9:04ec  sub eax, esi  [x73009]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:04ef  shl eax, 0x10  [x73009]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:04f3  cdq   [x73009]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:04f5  or ecx, 1  [x73009]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 5ce9:04f9  idiv ecx  [x73009]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4f9u); }   // #DE: int 0, then again
    // 5ce9:04fc  mov dword ptr cs:[0x5f6], eax  [x73009]
    c.w32(c.csb + (uint16_t)(0x5f6u), c.a.e);
    // 5ce9:0501  shl esi, 0x10  [x73009]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5ce9:0505  mov dword ptr [0x154], esi  [x73009]
    c.w32(c.dsb + (uint16_t)(0x154u), c.si.e);
L5d39a:
    if (c.tracing) c.traceAt(0x5d39a);
    // 5ce9:050a  cmp dword ptr [0x164], 0  [x1029757]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x164u)), 0x0u, true);
    // 5ce9:0510  jl 0x5e2  [x1029757]
    if ((c.sf != c.of)) goto L5d472;
L5d3a4:
    if (c.tracing) c.traceAt(0x5d3a4);
    // 5ce9:0514  mov eax, dword ptr [0x150]  [x1028321]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x150u)));
    // 5ce9:0518  mov edx, dword ptr [0x154]  [x1028321]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x154u)));
    // 5ce9:051d  sar eax, 0x10  [x1028321]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:0521  sar edx, 0x10  [x1028321]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 5ce9:0525  mov bh, byte ptr gs:[eax*8 + 0x7d02]  [x1028321]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d02u)));
    // 5ce9:052e  mov bl, byte ptr gs:[edx*8 + 0x7d04]  [x1028321]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d04u)));
    // 5ce9:0537  mov di, word ptr gs:[eax*8 + 0x7d00]  [x1028321]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d00u)));
    // 5ce9:0540  mov cx, word ptr gs:[edx*8 + 0x7d00]  [x1028321]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d00u)));
    // 5ce9:0549  sub cx, di  [x1028321]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 5ce9:054b  je 0x598  [x1028321]
    if (c.zf) goto L5d428;
L5d3dd:
    if (c.tracing) c.traceAt(0x5d3dd);
    // 5ce9:054d  js 0x6f9  [x784665]
    if (c.sf) goto L5d589;
L5d3e1:
    if (c.tracing) c.traceAt(0x5d3e1);
    // 5ce9:0551  add edi, dword ptr [0x164]  [x784052]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x164u)), true));
    // 5ce9:0556  mov dx, 0x3c4  [x784052]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5ce9:0559  mov al, 2  [x784052]
    c.a.l = (uint8_t)(0x2u);
    // 5ce9:055b  mov ah, bh  [x784052]
    c.a.h = (uint8_t)(c.b.h);
    // 5ce9:055d  out dx, ax  [x784052]
    c.ip = 0x55eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:055e  mov eax, dword ptr [0x144]  [x784052]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 5ce9:0562  stosb byte ptr es:[di], al  [x784052]
    c.stos<8, false>(0);
    // 5ce9:0563  dec cx  [x784052]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5ce9:0564  je 0x58a  [x784052]
    if (c.zf) goto L5d41a;
L5d3f6:
    if (c.tracing) c.traceAt(0x5d3f6);
    // 5ce9:0566  mov ax, 0xf02  [x536692]
    c.a.x = (uint16_t)(0xf02u);
    // 5ce9:0569  out dx, ax  [x536692]
    c.ip = 0x56au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:056a  mov eax, dword ptr [0x144]  [x536692]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 5ce9:056e  cmp cx, 2  [x536692]
    c.sub<16>(c.c.x, 0x2u, true);
    // 5ce9:0571  jb 0x57d  [x536692]
    if (c.cf) goto L5d40d;
L5d403:
    if (c.tracing) c.traceAt(0x5d403);
    // 5ce9:0573  test di, 1  [x372015]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 5ce9:0577  jne 0x57d  [x372015]
    if (!c.zf) goto L5d40d;
L5d409:
    if (c.tracing) c.traceAt(0x5d409);
    // 5ce9:0579  stosb byte ptr es:[di], al  [x167573]
    c.stos<8, false>(0);
    // 5ce9:057a  dec cx  [x167573]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5ce9:057b  je 0x5e2  [x167573]
    if (c.zf) goto L5d472;
L5d40d:
    if (c.tracing) c.traceAt(0x5d40d);
    // 5ce9:057d  mov si, cx  [x536692]
    c.si.x = (uint16_t)(c.c.x);
    // 5ce9:057f  shr cx, 1  [x536692]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L5d411:
    if (c.tracing) c.traceAt(0x5d411);
    // 5ce9:0581  rep stosw word ptr es:[di], ax  [x1549556]
    c.stos<16, false>(1);
L5d413:
    if (c.tracing) c.traceAt(0x5d413);
    // 5ce9:0583  mov cx, si  [x536692]
    c.c.x = (uint16_t)(c.si.x);
    // 5ce9:0585  and cx, 1  [x536692]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L5d418:
    if (c.tracing) c.traceAt(0x5d418);
    // 5ce9:0588  rep stosb byte ptr es:[di], al  [x868572]
    c.stos<8, false>(1);
L5d41a:
    if (c.tracing) c.traceAt(0x5d41a);
    // 5ce9:058a  mov ah, bl  [x784052]
    c.a.h = (uint8_t)(c.b.l);
    // 5ce9:058c  mov al, 2  [x784052]
    c.a.l = (uint8_t)(0x2u);
    // 5ce9:058e  out dx, ax  [x784052]
    c.ip = 0x58fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:058f  mov eax, dword ptr [0x144]  [x784052]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 5ce9:0593  mov byte ptr es:[di], al  [x784052]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0596  jmp 0x5e2  [x784052]
    goto L5d472;
L5d428:
    if (c.tracing) c.traceAt(0x5d428);
    // 5ce9:0598  mov si, 0x8000  [x243656]
    c.si.x = (uint16_t)(0x8000u);
    // 5ce9:059b  mov cx, ax  [x243656]
    c.c.x = (uint16_t)(c.a.x);
    // 5ce9:059d  and cx, dx  [x243656]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 5ce9:059f  js 0x5e2  [x243656]
    if (c.sf) goto L5d472;
L5d431:
    if (c.tracing) c.traceAt(0x5d431);
    // 5ce9:05a1  mov ax, word ptr gs:[eax*8 + 0x7d06]  [x219480]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d06u)));
    // 5ce9:05aa  mov dx, word ptr gs:[edx*8 + 0x7d06]  [x219480]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d06u)));
    // 5ce9:05b3  mov cx, ax  [x219480]
    c.c.x = (uint16_t)(c.a.x);
    // 5ce9:05b5  and cx, dx  [x219480]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 5ce9:05b7  js 0x5e2  [x219480]
    if (c.sf) goto L5d472;
L5d449:
    if (c.tracing) c.traceAt(0x5d449);
    // 5ce9:05b9  add edi, dword ptr [0x164]  [x193596]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x164u)), false));
    // 5ce9:05be  mov bx, 0xf03  [x193596]
    c.b.x = (uint16_t)(0xf03u);
    // 5ce9:05c1  mov cx, ax  [x193596]
    c.c.x = (uint16_t)(c.a.x);
    // 5ce9:05c3  and cl, bl  [x193596]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 5ce9:05c5  mov al, bh  [x193596]
    c.a.l = (uint8_t)(c.b.h);
    // 5ce9:05c7  shl al, cl  [x193596]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 5ce9:05c9  mov cx, dx  [x193596]
    c.c.x = (uint16_t)(c.dx_.x);
    // 5ce9:05cb  not cx  [x193596]
    c.c.x = (uint16_t)(~(c.c.x));
    // 5ce9:05cd  and cl, bl  [x193596]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 5ce9:05cf  mov ah, bh  [x193596]
    c.a.h = (uint8_t)(c.b.h);
    // 5ce9:05d1  shr ah, cl  [x193596]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5ce9:05d3  and ah, al  [x193596]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 5ce9:05d5  mov dx, 0x3c4  [x193596]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5ce9:05d8  mov al, 2  [x193596]
    c.a.l = (uint8_t)(0x2u);
    // 5ce9:05da  out dx, ax  [x193596]
    c.ip = 0x5dbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:05db  mov eax, dword ptr [0x144]  [x193596]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 5ce9:05df  mov byte ptr es:[di], al  [x193596]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L5d472:
    if (c.tracing) c.traceAt(0x5d472);
    // 5ce9:05e2  add dword ptr [0x164], 0x50  [x1029144]
    c.w32(c.dsb + (uint16_t)(0x164u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x164u)), 0x50u, false));
    // 5ce9:05e8  add dword ptr [0x150], 0x60000  [x1029144]
    c.w32(c.dsb + (uint16_t)(0x150u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x150u)), (c.r32(0x5d47d)), false));
    // 5ce9:05f1  add dword ptr [0x154], 0x90000  [x1029144]
    c.w32(c.dsb + (uint16_t)(0x154u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x154u)), (c.r32(0x5d486)), true));
    // 5ce9:05fa  dec dword ptr [0x158]  [x1029144]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x158u)), true));
    // 5ce9:05ff  jne 0x674  [x1029144]
    if (!c.zf) goto L5d504;
L5d491:
    if (c.tracing) c.traceAt(0x5d491);
    // 5ce9:0601  mov eax, dword ptr [0x1d2]  [x113479]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d2u)));
    // 5ce9:0605  cmp eax, dword ptr [0x1d6]  [x113479]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1d6u)), true);
    // 5ce9:060a  je 0x6f9  [x113479]
    if (c.zf) goto L5d589;
L5d49e:
    if (c.tracing) c.traceAt(0x5d49e);
    // 5ce9:060e  mov edx, dword ptr [0x1d6]  [x87954]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d6u)));
    // 5ce9:0613  mov esi, dword ptr fs:[edx]  [x87954]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:0618  mov edi, dword ptr fs:[edx + 4]  [x87954]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:061e  sub edx, 8  [x87954]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 5ce9:0622  mov dword ptr [0x1d6], edx  [x87954]
    c.w32(c.dsb + (uint16_t)(0x1d6u), c.dx_.e);
    // 5ce9:0627  cmp edx, dword ptr [0x1da]  [x87954]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1dau)), true);
    // 5ce9:062c  jge 0x638  [x87954]
    if ((c.sf == c.of)) goto L5d4c8;
L5d4be:
    if (c.tracing) c.traceAt(0x5d4be);
    // 5ce9:062e  mov edx, dword ptr [0x1de]  [x21129]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1deu)));
    // 5ce9:0633  mov dword ptr [0x1d6], edx  [x21129]
    c.w32(c.dsb + (uint16_t)(0x1d6u), c.dx_.e);
L5d4c8:
    if (c.tracing) c.traceAt(0x5d4c8);
    // 5ce9:0638  mov eax, dword ptr fs:[edx]  [x87954]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:063d  mov ebx, dword ptr fs:[edx + 4]  [x87954]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:0643  mov edx, ebx  [x87954]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5ce9:0646  sub edx, edi  [x87954]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5ce9:0649  je 0x60e  [x87954]
    if (c.zf) goto L5d49e;
L5d4db:
    if (c.tracing) c.traceAt(0x5d4db);
    // 5ce9:064b  mov dword ptr [0x158], edx  [x64714]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dx_.e);
    // 5ce9:0650  mov ecx, ebx  [x64714]
    c.c.e = (uint32_t)(c.b.e);
    // 5ce9:0653  sub ecx, edi  [x64714]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5ce9:0656  sub eax, esi  [x64714]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:0659  shl eax, 0x10  [x64714]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:065d  cdq   [x64714]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:065f  or ecx, 1  [x64714]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 5ce9:0663  idiv ecx  [x64714]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x663u); }   // #DE: int 0, then again
    // 5ce9:0666  mov dword ptr cs:[0x5ed], eax  [x64714]
    c.w32(c.csb + (uint16_t)(0x5edu), c.a.e);
    // 5ce9:066b  shl esi, 0x10  [x64714]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5ce9:066f  mov dword ptr [0x150], esi  [x64714]
    c.w32(c.dsb + (uint16_t)(0x150u), c.si.e);
L5d504:
    if (c.tracing) c.traceAt(0x5d504);
    // 5ce9:0674  dec dword ptr [0x15c]  [x980379]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x15cu)), true));
    // 5ce9:0679  jne 0x6ec  [x980379]
    if (!c.zf) goto L5d57c;
L5d50b:
    if (c.tracing) c.traceAt(0x5d50b);
    // 5ce9:067b  mov eax, dword ptr [0x1d2]  [x68861]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d2u)));
    // 5ce9:067f  cmp eax, dword ptr [0x1d6]  [x68861]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1d6u)), true);
    // 5ce9:0684  je 0x6f9  [x68861]
    if (c.zf) goto L5d589;
L5d516:
    if (c.tracing) c.traceAt(0x5d516);
    // 5ce9:0686  mov edx, dword ptr [0x1d2]  [x92111]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d2u)));
    // 5ce9:068b  mov esi, dword ptr fs:[edx]  [x92111]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:0690  mov edi, dword ptr fs:[edx + 4]  [x92111]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:0696  add edx, 8  [x92111]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5ce9:069a  mov dword ptr [0x1d2], edx  [x92111]
    c.w32(c.dsb + (uint16_t)(0x1d2u), c.dx_.e);
    // 5ce9:069f  cmp edx, dword ptr [0x1de]  [x92111]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1deu)), true);
    // 5ce9:06a4  jle 0x6b0  [x92111]
    if ((c.zf || c.sf != c.of)) goto L5d540;
L5d536:
    if (c.tracing) c.traceAt(0x5d536);
    // 5ce9:06a6  mov edx, dword ptr [0x1da]  [x22141]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1dau)));
    // 5ce9:06ab  mov dword ptr [0x1d2], edx  [x22141]
    c.w32(c.dsb + (uint16_t)(0x1d2u), c.dx_.e);
L5d540:
    if (c.tracing) c.traceAt(0x5d540);
    // 5ce9:06b0  mov eax, dword ptr fs:[edx]  [x92111]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5ce9:06b5  mov ebx, dword ptr fs:[edx + 4]  [x92111]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5ce9:06bb  mov edx, ebx  [x92111]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5ce9:06be  sub edx, edi  [x92111]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5ce9:06c1  je 0x686  [x92111]
    if (c.zf) goto L5d516;
L5d553:
    if (c.tracing) c.traceAt(0x5d553);
    // 5ce9:06c3  mov dword ptr [0x15c], edx  [x68861]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dx_.e);
    // 5ce9:06c8  mov ecx, ebx  [x68861]
    c.c.e = (uint32_t)(c.b.e);
    // 5ce9:06cb  sub ecx, edi  [x68861]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5ce9:06ce  sub eax, esi  [x68861]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5ce9:06d1  shl eax, 0x10  [x68861]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5ce9:06d5  cdq   [x68861]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:06d7  or ecx, 1  [x68861]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 5ce9:06db  idiv ecx  [x68861]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x6dbu); }   // #DE: int 0, then again
    // 5ce9:06de  mov dword ptr cs:[0x5f6], eax  [x68861]
    c.w32(c.csb + (uint16_t)(0x5f6u), c.a.e);
    // 5ce9:06e3  shl esi, 0x10  [x68861]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5ce9:06e7  mov dword ptr [0x154], esi  [x68861]
    c.w32(c.dsb + (uint16_t)(0x154u), c.si.e);
L5d57c:
    if (c.tracing) c.traceAt(0x5d57c);
    // 5ce9:06ec  cmp dword ptr [0x164], 0x3340  [x980379]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x164u)), (c.r32(0x5d581)), true);
    // 5ce9:06f5  jl 0x50a  [x980379]
    if ((c.sf != c.of)) goto L5d39a;
L5d589:
    if (c.tracing) c.traceAt(0x5d589);
    // 5ce9:06f9  retf   [x73009]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5d58c:
    if (c.tracing) c.traceAt(0x5d58c);
    // 5ce9:06fc  mov byte ptr [0x1f3], 0  [x1429]
    c.w8(c.dsb + (uint16_t)(0x1f3u), 0x0u);
    // 5ce9:0701  mov byte ptr [0x1f5], 0x50  [x1429]
    c.w8(c.dsb + (uint16_t)(0x1f5u), 0x50u);
    // 5ce9:0706  mov al, byte ptr [0x25d]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x25du)));
    // 5ce9:0709  mov byte ptr [0x1f4], al  [x1429]
    c.w8(c.dsb + (uint16_t)(0x1f4u), c.a.l);
    // 5ce9:070c  mov al, byte ptr [0x25e]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x25eu)));
    // 5ce9:070f  mov byte ptr [0x1f6], al  [x1429]
    c.w8(c.dsb + (uint16_t)(0x1f6u), c.a.l);
    // 5ce9:0712  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0713  call 0  [x1429]
    c.push16(0x716u); code_23(c, 0x5ce90u); if (c.ip != 0x716u) c.badReturn(0x5d5a3);
L5d5a6:
    if (c.tracing) c.traceAt(0x5d5a6);
    // 5ce9:0716  mov ax, word ptr [0x1ea]  [x1429]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1eau)));
    // 5ce9:0719  not ax  [x1429]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5ce9:071b  and ax, 0x600  [x1429]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 5ce9:071e  add ax, 0xa000  [x1429]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 5ce9:0721  mov es, ax  [x1429]
    c.loadEs(c.a.x);
    // 5ce9:0723  mov ah, 0xf  [x1429]
    c.a.h = (uint8_t)(0xfu);
    // 5ce9:0725  mov dx, 0x3c4  [x1429]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5ce9:0728  mov al, 2  [x1429]
    c.a.l = (uint8_t)(0x2u);
    // 5ce9:072a  out dx, ax  [x1429]
    c.ip = 0x72bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:072b  mov eax, 0  [x1429]
    c.a.e = (uint32_t)(0x0u);
    // 5ce9:0731  cld   [x1429]
    c.df = false;
    // 5ce9:0732  mov ax, 0x2d22  [x1429]
    c.a.x = (uint16_t)(0x2d22u);
    // 5ce9:0735  mov fs, ax  [x1429]
    c.loadFs(c.a.x);
    // 5ce9:0737  xor edi, edi  [x1429]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 5ce9:073a  xor eax, eax  [x1429]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 5ce9:073d  xor ebx, ebx  [x1429]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5ce9:0740  xor edx, edx  [x1429]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
    // 5ce9:0743  mov dx, 0x50  [x1429]
    c.dx_.x = (uint16_t)(0x50u);
L5d5d6:
    if (c.tracing) c.traceAt(0x5d5d6);
    // 5ce9:0746  mov al, byte ptr [bx]  [x114320]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 5ce9:074a  mov si, ax  [x114320]
    c.si.x = (uint16_t)(c.a.x);
    // 5ce9:074c  sub si, word ptr [0x22f]  [x114320]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x22fu)), false));
    // 5ce9:0750  add si, 0xf0  [x114320]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xf0u, false));
    // 5ce9:0754  xor di, di  [x114320]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5ce9:0756  add di, bx  [x114320]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, true));
    // 5ce9:0758  mov cx, 0x1e  [x114320]
    c.c.x = (uint16_t)(0x1eu);
L5d5eb:
    if (c.tracing) c.traceAt(0x5d5eb);
    // 5ce9:075b  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:075e  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:075f  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0762  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:0764  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:0767  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:0768  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:076b  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:076d  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:0770  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:0771  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0774  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:0776  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:0779  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:077a  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:077d  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:077f  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:0782  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:0783  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0786  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:0788  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:078b  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:078c  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:078f  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:0791  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:0794  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:0795  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:0798  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 5ce9:079a  mov al, byte ptr fs:[si]  [x3429600]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5ce9:079d  inc si  [x3429600]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 5ce9:079e  mov byte ptr es:[di], al  [x3429600]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 5ce9:07a1  add di, dx  [x3429600]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, true));
    // 5ce9:07a3  loop 0x75b  [x3429600]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d5eb;
L5d635:
    if (c.tracing) c.traceAt(0x5d635);
    // 5ce9:07a5  inc bx  [x114320]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 5ce9:07a6  cmp bx, dx  [x114320]
    c.sub<16>(c.b.x, c.dx_.x, true);
    // 5ce9:07a8  jb 0x746  [x114320]
    if (c.cf) goto L5d5d6;
L5d63a:
    if (c.tracing) c.traceAt(0x5d63a);
    // 5ce9:07aa  retf   [x1429]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5d63c:
    if (c.tracing) c.traceAt(0x5d63c);
    // 5ce9:07ac  mov ax, 0x42fe  [x1]
    c.a.x = (uint16_t)(0x42feu);
    // 5ce9:07af  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5ce9:07b1  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 5ce9:07b4  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L5d647:
    if (c.tracing) c.traceAt(0x5d647);
    // 5ce9:07b7  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 5ce9:07ba  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 5ce9:07bb  mov ax, 0xf  [x4000]
    c.a.x = (uint16_t)(0xfu);
    // 5ce9:07be  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 5ce9:07bf  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 5ce9:07c2  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 5ce9:07c3  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 5ce9:07c6  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 5ce9:07c7  loop 0x7b7  [x4000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d647;
L5d659:
    if (c.tracing) c.traceAt(0x5d659);
    // 5ce9:07c9  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 5ce9:07cc  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 5ce9:07ce  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L5d661:
    if (c.tracing) c.traceAt(0x5d661);
    // 5ce9:07d1  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5ce9:07d3  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 5ce9:07d6  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5ce9:07d7  push cx  [x320]
    c.push16(c.c.x);
    // 5ce9:07d8  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5ce9:07da  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5ce9:07dd  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5ce9:07df  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5ce9:07e1  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 5ce9:07e3  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 5ce9:07e5  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 5ce9:07e7  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5ce9:07e8  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5ce9:07e9  push cx  [x320]
    c.push16(c.c.x);
    // 5ce9:07ea  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5ce9:07ec  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 5ce9:07ee  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5ce9:07f1  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5ce9:07f3  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5ce9:07f5  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 5ce9:07f7  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 5ce9:07f9  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5ce9:07fa  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5ce9:07fc  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5ce9:07fd  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5ce9:07fe  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 5ce9:0800  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 5ce9:0803  jb 0x807  [x320]
    if (c.cf) goto L5d697;
L5d695:
    if (c.tracing) c.traceAt(0x5d695);
    // 5ce9:0805  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L5d697:
    if (c.tracing) c.traceAt(0x5d697);
    // 5ce9:0807  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 5ce9:0808  loop 0x7d1  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d661;
L5d69a:
    if (c.tracing) c.traceAt(0x5d69a);
    // 5ce9:080a  mov cx, 0xe60  [x1]
    c.c.x = (uint16_t)(0xe60u);
L5d69d:
    if (c.tracing) c.traceAt(0x5d69d);
    // 5ce9:080d  mov ax, 0x4f  [x3680]
    c.a.x = (uint16_t)(0x4fu);
    // 5ce9:0810  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 5ce9:0811  mov ax, 0  [x3680]
    c.a.x = (uint16_t)(0x0u);
    // 5ce9:0814  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 5ce9:0815  mov ax, 0xf  [x3680]
    c.a.x = (uint16_t)(0xfu);
    // 5ce9:0818  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 5ce9:0819  mov ax, 0xffff  [x3680]
    c.a.x = (uint16_t)(0xffffu);
    // 5ce9:081c  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 5ce9:081d  loop 0x80d  [x3680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d69d;
L5d6af:
    if (c.tracing) c.traceAt(0x5d6af);
    // 5ce9:081f  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5d6b0:
    if (c.tracing) c.traceAt(0x5d6b0);
    // 5ce9:0820  les bx, ptr [0x17e]  [x9449]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:0824  mov eax, dword ptr es:[bx + 4]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)));
    // 5ce9:0829  mov byte ptr [0x1ec], al  [x9449]
    c.w8(c.dsb + (uint16_t)(0x1ecu), c.a.l);
    // 5ce9:082c  mov ebx, dword ptr [0x140]  [x9449]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:0831  cmp dword ptr es:[bx - 4], 0  [x9449]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 5ce9:0837  je 0x965  [x9449]
    if (c.zf) goto L5d7f5;
L5d6cb:
    if (c.tracing) c.traceAt(0x5d6cb);
    // 5ce9:083b  mov dword ptr [0x148], 0  [x6855]
    c.w32(c.dsb + (uint16_t)(0x148u), 0x0u);
    // 5ce9:0844  les bx, ptr [0x17e]  [x6855]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:0848  mov esi, dword ptr [0x140]  [x6855]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:084d  mov dword ptr [0x1ed], esi  [x6855]
    c.w32(c.dsb + (uint16_t)(0x1edu), c.si.e);
    // 5ce9:0852  mov eax, dword ptr es:[si - 8]  [x6855]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 5ce9:0857  mov dword ptr [0x14c], eax  [x6855]
    c.w32(c.dsb + (uint16_t)(0x14cu), c.a.e);
    // 5ce9:085b  les bx, ptr [0x17e]  [x6855]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:085f  lfs bp, ptr [0x182]  [x6855]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x182u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x182u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5ce9:0864  xor ebx, ebx  [x6855]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5ce9:0867  xor ebp, ebp  [x6855]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 5ce9:086a  xor edx, edx  [x6855]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L5d6fd:
    if (c.tracing) c.traceAt(0x5d6fd);
    // 5ce9:086d  mov ebx, esi  [x285922]
    c.b.e = (uint32_t)(c.si.e);
    // 5ce9:0870  mov bx, word ptr es:[ebx]  [x285922]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0874  mov ecx, dword ptr es:[ebx]  [x285922]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0879  mov edi, ecx  [x285922]
    c.di.e = (uint32_t)(c.c.e);
    // 5ce9:087c  add ebx, 0x18  [x285922]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5ce9:0880  xor eax, eax  [x285922]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 5ce9:0883  mov ebp, dword ptr es:[ebx]  [x285922]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0888  add ebp, ebp  [x285922]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:088b  add eax, dword ptr fs:[ebp*8 + 0x10]  [x285922]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5ce9:0895  mov ebp, dword ptr es:[ebx + 4]  [x285922]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 5ce9:089b  add ebp, ebp  [x285922]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:089e  add eax, dword ptr fs:[ebp*8 + 0x10]  [x285922]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5ce9:08a8  mov ebp, dword ptr es:[ebx + 8]  [x285922]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 5ce9:08ae  add ebp, ebp  [x285922]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:08b1  add eax, dword ptr fs:[ebp*8 + 0x10]  [x285922]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5ce9:08bb  add ebx, 0xc  [x285922]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 5ce9:08bf  sub ecx, 3  [x285922]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 5ce9:08c3  je 0x8dd  [x285922]
    if (c.zf) goto L5d76d;
L5d755:
    if (c.tracing) c.traceAt(0x5d755);
    // 5ce9:08c5  mov ebp, dword ptr es:[ebx]  [x265422]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:08ca  add ebp, ebp  [x265422]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:08cd  add eax, dword ptr fs:[ebp*8 + 0x10]  [x265422]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5ce9:08d7  add ebx, 4  [x265422]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5ce9:08db  loop 0x8c5  [x265422]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d755;
L5d76d:
    if (c.tracing) c.traceAt(0x5d76d);
    // 5ce9:08dd  cmp edi, 4  [x285922]
    c.sub<32>(c.di.e, 0x4u, true);
    // 5ce9:08e1  jne 0x8e9  [x285922]
    if (!c.zf) goto L5d779;
L5d773:
    if (c.tracing) c.traceAt(0x5d773);
    // 5ce9:08e3  sar eax, 0xe  [x265422]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), true));
    // 5ce9:08e7  jmp 0x8f5  [x265422]
    goto L5d785;
L5d779:
    if (c.tracing) c.traceAt(0x5d779);
    // 5ce9:08e9  sar eax, 0xc  [x20500]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xcu) & 31), false));
    // 5ce9:08ed  cdq   [x20500]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5ce9:08ef  mov ecx, edi  [x20500]
    c.c.e = (uint32_t)(c.di.e);
    // 5ce9:08f2  idiv ecx  [x20500]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x8f2u); }   // #DE: int 0, then again
L5d785:
    if (c.tracing) c.traceAt(0x5d785);
    // 5ce9:08f5  add eax, 0x8000  [x285922]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 5ce9:08fb  mov word ptr es:[esi + 2], ax  [x285922]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 5ce9:0900  add esi, 4  [x285922]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 5ce9:0904  inc dword ptr [0x148]  [x285922]
    c.w32(c.dsb + (uint16_t)(0x148u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x148u)), false));
    // 5ce9:0909  mov eax, dword ptr [0x14c]  [x285922]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14cu)));
    // 5ce9:090d  cmp dword ptr [0x148], eax  [x285922]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x148u)), c.a.e, true);
    // 5ce9:0912  jb 0x86d  [x285922]
    if (c.cf) goto L5d6fd;
L5d7a6:
    if (c.tracing) c.traceAt(0x5d7a6);
    // 5ce9:0916  mov esi, dword ptr [0x1ed]  [x6855]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1edu)));
    // 5ce9:091b  mov dword ptr [0x140], esi  [x6855]
    c.w32(c.dsb + (uint16_t)(0x140u), c.si.e);
    // 5ce9:0920  mov edi, 4  [x6855]
    c.di.e = (uint32_t)(0x4u);
    // 5ce9:0926  les bx, ptr [0x17e]  [x6855]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:092a  mov ebp, dword ptr [0x140]  [x6855]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:092f  mov edx, dword ptr es:[ebp - 8]  [x6855]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
    // 5ce9:0935  xor ebx, ebx  [x6855]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5ce9:0938  xor ecx, ecx  [x6855]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L5d7cb:
    if (c.tracing) c.traceAt(0x5d7cb);
    // 5ce9:093b  mov bx, bp  [x13442]
    c.b.x = (uint16_t)(c.bp.x);
    // 5ce9:093d  mov cx, dx  [x13442]
    c.c.x = (uint16_t)(c.dx_.x);
    // 5ce9:093f  xor si, si  [x13442]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L5d7d1:
    if (c.tracing) c.traceAt(0x5d7d1);
    // 5ce9:0941  mov eax, dword ptr es:[ebx]  [x1077312]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0946  cmp eax, dword ptr es:[ebx + 4]  [x1077312]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 5ce9:094c  jae 0x95c  [x1077312]
    if (!c.cf) goto L5d7ec;
L5d7de:
    if (c.tracing) c.traceAt(0x5d7de);
    // 5ce9:094e  xchg dword ptr es:[ebx + 4], eax  [x103819]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 5ce9:0954  mov dword ptr es:[ebx], eax  [x103819]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 5ce9:0959  mov si, 1  [x103819]
    c.si.x = (uint16_t)(0x1u);
L5d7ec:
    if (c.tracing) c.traceAt(0x5d7ec);
    // 5ce9:095c  add bx, di  [x1077312]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.di.x, true));
    // 5ce9:095e  loop 0x941  [x1077312]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d7d1;
L5d7f0:
    if (c.tracing) c.traceAt(0x5d7f0);
    // 5ce9:0960  cmp si, 0  [x13442]
    c.sub<16>(c.si.x, 0x0u, true);
    // 5ce9:0963  jne 0x93b  [x13442]
    if (!c.zf) goto L5d7cb;
L5d7f5:
    if (c.tracing) c.traceAt(0x5d7f5);
    // 5ce9:0965  mov ax, word ptr [0x1ea]  [x9449]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1eau)));
    // 5ce9:0968  not ax  [x9449]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5ce9:096a  and ax, 0x600  [x9449]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 5ce9:096d  add ax, 0xa000  [x9449]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 5ce9:0970  mov word ptr [0x1f1], ax  [x9449]
    c.w16(c.dsb + (uint16_t)(0x1f1u), c.a.x);
    // 5ce9:0973  mov dword ptr [0x148], 0  [x9449]
    c.w32(c.dsb + (uint16_t)(0x148u), 0x0u);
    // 5ce9:097c  les bx, ptr [0x17e]  [x9449]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:0980  mov ebx, dword ptr [0x140]  [x9449]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:0985  mov eax, dword ptr es:[bx - 8]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 5ce9:098a  mov dword ptr [0x14c], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x14cu), c.a.e);
L5d81e:
    if (c.tracing) c.traceAt(0x5d81e);
    // 5ce9:098e  xor ebx, ebx  [x306674]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5ce9:0991  xor ebp, ebp  [x306674]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 5ce9:0994  xor edx, edx  [x306674]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5ce9:0997  les bx, ptr [0x17e]  [x306674]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17eu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5ce9:099b  lfs bp, ptr [0x182]  [x306674]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x182u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x182u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5ce9:09a0  mov ax, 0x529e  [x306674]
    c.a.x = (uint16_t)(0x529eu);
    // 5ce9:09a3  mov gs, ax  [x306674]
    c.loadGs(c.a.x);
    // 5ce9:09a5  mov ebx, dword ptr [0x140]  [x306674]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:09aa  mov ax, word ptr es:[bx + 2]  [x306674]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x + 0x2u)));
    // 5ce9:09ae  mov word ptr [0x20b], ax  [x306674]
    c.w16(c.dsb + (uint16_t)(0x20bu), c.a.x);
    // 5ce9:09b1  mov bx, word ptr es:[bx]  [x306674]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5ce9:09b4  mov ecx, dword ptr es:[ebx + 0x14]  [x306674]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 5ce9:09ba  mov dword ptr [0x144], ecx  [x306674]
    c.w32(c.dsb + (uint16_t)(0x144u), c.c.e);
    // 5ce9:09bf  mov ecx, dword ptr es:[ebx]  [x306674]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:09c4  mov dword ptr gs:[edx], ecx  [x306674]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 5ce9:09c9  add ebx, 0x18  [x306674]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5ce9:09cd  mov ebx, dword ptr [0x140]  [x306674]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:09d2  mov bx, word ptr es:[bx]  [x306674]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5ce9:09d5  mov ecx, dword ptr es:[ebx]  [x306674]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:09da  add ebx, 0x18  [x306674]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, true));
L5d86e:
    if (c.tracing) c.traceAt(0x5d86e);
    // 5ce9:09de  mov ebp, dword ptr es:[ebx]  [x1023489]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:09e3  add ebp, ebp  [x1023489]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:09e6  mov eax, dword ptr fs:[ebp*8 + 0x10]  [x1023489]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)));
    // 5ce9:09f0  cmp eax, 0  [x1023489]
    c.sub<32>(c.a.e, 0x0u, true);
    // 5ce9:09f4  jle 0xd03  [x1023489]
    if ((c.zf || c.sf != c.of)) goto L5db93;
L5d888:
    if (c.tracing) c.traceAt(0x5d888);
    // 5ce9:09f8  add edx, 8  [x958821]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5ce9:09fc  add ebx, 4  [x958821]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5ce9:0a00  loop 0x9de  [x958821]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d86e;
L5d892:
    if (c.tracing) c.traceAt(0x5d892);
    // 5ce9:0a02  mov ebx, dword ptr [0x140]  [x242006]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:0a07  mov bx, word ptr es:[bx]  [x242006]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5ce9:0a0a  add ebx, 0x18  [x242006]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5ce9:0a0e  mov ebp, dword ptr es:[ebx]  [x242006]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0a13  add ebp, ebp  [x242006]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:0a16  mov ecx, ebp  [x242006]
    c.c.e = (uint32_t)(c.bp.e);
    // 5ce9:0a19  mov ebp, dword ptr es:[ebx + 4]  [x242006]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 5ce9:0a1f  add ebp, ebp  [x242006]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:0a22  mov edi, dword ptr fs:[ebp*8 + 8]  [x242006]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5ce9:0a2c  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x242006]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5ce9:0a36  mov ebp, dword ptr es:[ebx + 8]  [x242006]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 5ce9:0a3c  add ebp, ebp  [x242006]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:0a3f  mov edx, dword ptr fs:[ebp*8 + 8]  [x242006]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5ce9:0a49  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x242006]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5ce9:0a53  mov ebx, ecx  [x242006]
    c.b.e = (uint32_t)(c.c.e);
    // 5ce9:0a56  mov eax, ebp  [x242006]
    c.a.e = (uint32_t)(c.bp.e);
    // 5ce9:0a59  sub eax, esi  [x242006]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 5ce9:0a5c  mov dword ptr cs:[0xa73], eax  [x242006]
    c.w32(c.csb + (uint16_t)(0xa73u), c.a.e);
    // 5ce9:0a61  jmp 0xa63  [x242006]
    goto L5d8f3;
L5d8f3:
    if (c.tracing) c.traceAt(0x5d8f3);
    // 5ce9:0a63  mov eax, edi  [x242006]
    c.a.e = (uint32_t)(c.di.e);
    // 5ce9:0a66  sub eax, dword ptr fs:[ebx*8 + 8]  [x242006]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 5ce9:0a70  imul eax, eax, 0x46  [x242006]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x5d903))));
    // 5ce9:0a77  mov ecx, esi  [x242006]
    c.c.e = (uint32_t)(c.si.e);
    // 5ce9:0a7a  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x242006]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 5ce9:0a84  mov dword ptr cs:[0xa95], ecx  [x242006]
    c.w32(c.csb + (uint16_t)(0xa95u), c.c.e);
    // 5ce9:0a8a  jmp 0xa8c  [x242006]
    goto L5d91c;
L5d91c:
    if (c.tracing) c.traceAt(0x5d91c);
    // 5ce9:0a8c  mov ecx, edx  [x242006]
    c.c.e = (uint32_t)(c.dx_.e);
    // 5ce9:0a8f  sub ecx, edi  [x242006]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5ce9:0a92  imul ecx, ecx, 0xfffffff9  [x242006]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x5d925))));
    // 5ce9:0a99  cmp eax, ecx  [x242006]
    c.sub<32>(c.a.e, c.c.e, true);
    // 5ce9:0a9c  jl 0xd03  [x242006]
    if ((c.sf != c.of)) goto L5db93;
L5d930:
    if (c.tracing) c.traceAt(0x5d930);
    // 5ce9:0aa0  je 0xd03  [x144080]
    if (c.zf) goto L5db93;
L5d934:
    if (c.tracing) c.traceAt(0x5d934);
    // 5ce9:0aa4  mov ebx, dword ptr [0x140]  [x117649]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 5ce9:0aa9  mov bx, word ptr es:[bx]  [x117649]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5ce9:0aac  mov ecx, dword ptr es:[ebx]  [x117649]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0ab1  mov dword ptr gs:[0], ecx  [x117649]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 5ce9:0ab7  add ebx, 0x18  [x117649]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5ce9:0abb  mov dword ptr gs:[0xc], edi  [x117649]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 5ce9:0ac1  mov dword ptr gs:[0x10], esi  [x117649]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 5ce9:0ac7  mov dword ptr gs:[0x14], edx  [x117649]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 5ce9:0acd  mov dword ptr gs:[0x18], ebp  [x117649]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 5ce9:0ad3  mov ebp, dword ptr es:[ebx]  [x117649]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0ad8  add ebp, ebp  [x117649]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:0adb  mov eax, dword ptr fs:[ebp*8 + 8]  [x117649]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5ce9:0ae5  mov dword ptr gs:[4], eax  [x117649]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 5ce9:0aea  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x117649]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5ce9:0af4  mov dword ptr gs:[8], eax  [x117649]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 5ce9:0af9  mov edx, 0x1c  [x117649]
    c.dx_.e = (uint32_t)(0x1cu);
    // 5ce9:0aff  add ebx, 0xc  [x117649]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 5ce9:0b03  sub ecx, 3  [x117649]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 5ce9:0b07  je 0xb3a  [x117649]
    if (c.zf) goto L5d9ca;
L5d999:
    if (c.tracing) c.traceAt(0x5d999);
    // 5ce9:0b09  mov ebp, dword ptr es:[ebx]  [x108776]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5ce9:0b0e  add ebp, ebp  [x108776]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5ce9:0b11  mov eax, dword ptr fs:[ebp*8 + 8]  [x108776]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5ce9:0b1b  mov dword ptr gs:[edx], eax  [x108776]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 5ce9:0b20  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x108776]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5ce9:0b2a  mov dword ptr gs:[edx + 4], eax  [x108776]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 5ce9:0b30  add edx, 8  [x108776]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5ce9:0b34  add ebx, 4  [x108776]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5ce9:0b38  loop 0xb09  [x108776]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d999;
L5d9ca:
    if (c.tracing) c.traceAt(0x5d9ca);
    // 5ce9:0b3a  xor edi, edi  [x117649]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 5ce9:0b3d  mov ecx, dword ptr gs:[edi]  [x117649]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0b42  lea eax, [edi + 4]  [x117649]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 5ce9:0b47  mov dword ptr [0x1da], eax  [x117649]
    c.w32(c.dsb + (uint16_t)(0x1dau), c.a.e);
    // 5ce9:0b4b  lea ebx, [ecx - 1]  [x117649]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 5ce9:0b50  lea eax, [eax + ebx*8]  [x117649]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 5ce9:0b55  mov dword ptr [0x1de], eax  [x117649]
    c.w32(c.dsb + (uint16_t)(0x1deu), c.a.e);
    // 5ce9:0b59  dec ecx  [x117649]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 5ce9:0b5b  add edi, 4  [x117649]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x4u, true));
    // 5ce9:0b5f  mov eax, dword ptr gs:[edi]  [x117649]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0b64  mov ebx, edi  [x117649]
    c.b.e = (uint32_t)(c.di.e);
    // 5ce9:0b67  mov ebp, eax  [x117649]
    c.bp.e = (uint32_t)(c.a.e);
L5d9fa:
    if (c.tracing) c.traceAt(0x5d9fa);
    // 5ce9:0b6a  add edi, 8  [x344074]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 5ce9:0b6e  mov edx, dword ptr gs:[edi]  [x344074]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0b73  cmp ebp, edx  [x344074]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 5ce9:0b76  jle 0xb7e  [x344074]
    if ((c.zf || c.sf != c.of)) goto L5da0e;
L5da08:
    if (c.tracing) c.traceAt(0x5da08);
    // 5ce9:0b78  mov ebp, edx  [x110730]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 5ce9:0b7b  mov ebx, edi  [x110730]
    c.b.e = (uint32_t)(c.di.e);
L5da0e:
    if (c.tracing) c.traceAt(0x5da0e);
    // 5ce9:0b7e  cmp eax, edx  [x344074]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 5ce9:0b81  jge 0xb86  [x344074]
    if ((c.sf == c.of)) goto L5da16;
L5da13:
    if (c.tracing) c.traceAt(0x5da13);
    // 5ce9:0b83  mov eax, edx  [x125493]
    c.a.e = (uint32_t)(c.dx_.e);
L5da16:
    if (c.tracing) c.traceAt(0x5da16);
    // 5ce9:0b86  loop 0xb6a  [x344074]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5d9fa;
L5da18:
    if (c.tracing) c.traceAt(0x5da18);
    // 5ce9:0b88  mov ecx, ebp  [x117649]
    c.c.e = (uint32_t)(c.bp.e);
    // 5ce9:0b8b  cmp eax, 0  [x117649]
    c.sub<32>(c.a.e, 0x0u, true);
    // 5ce9:0b8f  jle 0xd03  [x117649]
    if ((c.zf || c.sf != c.of)) goto L5db93;
L5da23:
    if (c.tracing) c.traceAt(0x5da23);
    // 5ce9:0b93  cmp ecx, 0x13f  [x105010]
    c.sub<32>(c.c.e, 0x13fu, true);
    // 5ce9:0b9a  jge 0xd03  [x105010]
    if ((c.sf == c.of)) goto L5db93;
L5da2e:
    if (c.tracing) c.traceAt(0x5da2e);
    // 5ce9:0b9e  xor edi, edi  [x82234]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 5ce9:0ba1  mov ecx, dword ptr gs:[edi]  [x82234]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0ba6  lea eax, [edi + 4]  [x82234]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 5ce9:0bab  mov dword ptr [0x1da], eax  [x82234]
    c.w32(c.dsb + (uint16_t)(0x1dau), c.a.e);
    // 5ce9:0baf  lea ebx, [ecx - 1]  [x82234]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 5ce9:0bb4  lea eax, [eax + ebx*8]  [x82234]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 5ce9:0bb9  mov dword ptr [0x1de], eax  [x82234]
    c.w32(c.dsb + (uint16_t)(0x1deu), c.a.e);
    // 5ce9:0bbd  dec ecx  [x82234]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 5ce9:0bbf  add edi, 8  [x82234]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 5ce9:0bc3  mov eax, dword ptr gs:[edi]  [x82234]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0bc8  mov ebx, edi  [x82234]
    c.b.e = (uint32_t)(c.di.e);
    // 5ce9:0bcb  mov ebp, eax  [x82234]
    c.bp.e = (uint32_t)(c.a.e);
L5da5e:
    if (c.tracing) c.traceAt(0x5da5e);
    // 5ce9:0bce  add edi, 8  [x239628]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 5ce9:0bd2  mov edx, dword ptr gs:[edi]  [x239628]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5ce9:0bd7  cmp ebp, edx  [x239628]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 5ce9:0bda  jle 0xbe2  [x239628]
    if ((c.zf || c.sf != c.of)) goto L5da72;
L5da6c:
    if (c.tracing) c.traceAt(0x5da6c);
    // 5ce9:0bdc  mov ebp, edx  [x60067]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 5ce9:0bdf  mov ebx, edi  [x60067]
    c.b.e = (uint32_t)(c.di.e);
L5da72:
    if (c.tracing) c.traceAt(0x5da72);
    // 5ce9:0be2  cmp eax, edx  [x239628]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 5ce9:0be5  jge 0xbea  [x239628]
    if ((c.sf == c.of)) goto L5da7a;
L5da77:
    if (c.tracing) c.traceAt(0x5da77);
    // 5ce9:0be7  mov eax, edx  [x80095]
    c.a.e = (uint32_t)(c.dx_.e);
L5da7a:
    if (c.tracing) c.traceAt(0x5da7a);
    // 5ce9:0bea  loop 0xbce  [x239628]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5da5e;
L5da7c:
    if (c.tracing) c.traceAt(0x5da7c);
    // 5ce9:0bec  mov ecx, ebp  [x82234]
    c.c.e = (uint32_t)(c.bp.e);
    // 5ce9:0bef  sub ebx, 4  [x82234]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 5ce9:0bf3  cmp ecx, 0xf0  [x82234]
    c.sub<32>(c.c.e, 0xf0u, true);
    // 5ce9:0bfa  jg 0xd03  [x82234]
    if ((!c.zf && c.sf == c.of)) goto L5db93;
L5da8e:
    if (c.tracing) c.traceAt(0x5da8e);
    // 5ce9:0bfe  cmp eax, ecx  [x81080]
    c.sub<32>(c.a.e, c.c.e, true);
    // 5ce9:0c01  je 0xd03  [x81080]
    if (c.zf) goto L5db93;
L5da95:
    if (c.tracing) c.traceAt(0x5da95);
    // 5ce9:0c05  cmp eax, 0  [x81080]
    c.sub<32>(c.a.e, 0x0u, true);
    // 5ce9:0c09  jl 0xd03  [x81080]
    if ((c.sf != c.of)) goto L5db93;
L5da9d:
    if (c.tracing) c.traceAt(0x5da9d);
    // 5ce9:0c0d  imul eax, eax, 0x50  [x81080]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 5ce9:0c11  cmp eax, 0x4b00  [x81080]
    c.sub<32>(c.a.e, 0x4b00u, true);
    // 5ce9:0c17  jle 0xc1f  [x81080]
    if ((c.zf || c.sf != c.of)) goto L5daaf;
L5daa9:
    if (c.tracing) c.traceAt(0x5daa9);
    // 5ce9:0c19  mov eax, 0x4b00  [x1558]
    c.a.e = (uint32_t)(0x4b00u);
L5daaf:
    if (c.tracing) c.traceAt(0x5daaf);
    // 5ce9:0c1f  mov word ptr cs:[0x6f1], ax  [x81080]
    c.w16(c.csb + (uint16_t)(0x6f1u), c.a.x);
    // 5ce9:0c23  mov dword ptr [0x1d2], ebx  [x81080]
    c.w32(c.dsb + (uint16_t)(0x1d2u), c.b.e);
    // 5ce9:0c28  mov dword ptr [0x1d6], ebx  [x81080]
    c.w32(c.dsb + (uint16_t)(0x1d6u), c.b.e);
    // 5ce9:0c2d  cmp byte ptr [0x1ec], 2  [x81080]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1ecu)), 0x2u, true);
    // 5ce9:0c32  je 0xcbb  [x81080]
    if (c.zf) goto L5db4b;
    c.notTranslated(0x5dac6, "fall-through");
L5db4b:
    if (c.tracing) c.traceAt(0x5db4b);
    // 5ce9:0cbb  mov bx, word ptr [0x20b]  [x81080]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x20bu)));
    // 5ce9:0cbf  sub bx, 0x8000  [x81080]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8000u, true));
    // 5ce9:0cc3  js 0xd03  [x81080]
    if (c.sf) goto L5db93;
L5db55:
    if (c.tracing) c.traceAt(0x5db55);
    // 5ce9:0cc5  sar bx, 8  [x73009]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0x8u) & 31), false));
    // 5ce9:0cc8  cmp bx, 0x1f  [x73009]
    c.sub<16>(c.b.x, 0x1fu, true);
    // 5ce9:0ccb  jle 0xcd0  [x73009]
    if ((c.zf || c.sf != c.of)) goto L5db60;
L5db5d:
    if (c.tracing) c.traceAt(0x5db5d);
    // 5ce9:0ccd  mov bx, 0x1f  [x3735]
    c.b.x = (uint16_t)(0x1fu);
L5db60:
    if (c.tracing) c.traceAt(0x5db60);
    // 5ce9:0cd0  cmp bx, 0  [x73009]
    c.sub<16>(c.b.x, 0x0u, true);
    // 5ce9:0cd3  jge 0xcd8  [x73009]
    if ((c.sf == c.of)) goto L5db68;
    c.notTranslated(0x5db65, "fall-through");
L5db68:
    if (c.tracing) c.traceAt(0x5db68);
    // 5ce9:0cd8  mov eax, dword ptr [0x144]  [x73009]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 5ce9:0cdc  shl eax, 5  [x73009]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x5u) & 31), false));
    // 5ce9:0ce0  add al, bl  [x73009]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 5ce9:0ce2  mov ah, al  [x73009]
    c.a.h = (uint8_t)(c.a.l);
    // 5ce9:0ce4  mov cx, ax  [x73009]
    c.c.x = (uint16_t)(c.a.x);
    // 5ce9:0ce6  shl eax, 0x10  [x73009]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 5ce9:0cea  mov ax, cx  [x73009]
    c.a.x = (uint16_t)(c.c.x);
    // 5ce9:0cec  mov dword ptr [0x144], eax  [x73009]
    c.w32(c.dsb + (uint16_t)(0x144u), c.a.e);
    // 5ce9:0cf0  mov ax, 0x529e  [x73009]
    c.a.x = (uint16_t)(0x529eu);
    // 5ce9:0cf3  mov fs, ax  [x73009]
    c.loadFs(c.a.x);
    // 5ce9:0cf5  mov cx, 0x42fe  [x73009]
    c.c.x = (uint16_t)(0x42feu);
    // 5ce9:0cf8  mov gs, cx  [x73009]
    c.loadGs(c.c.x);
    // 5ce9:0cfa  mov ax, word ptr [0x1f1]  [x73009]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1f1u)));
    // 5ce9:0cfd  mov es, ax  [x73009]
    c.loadEs(c.a.x);
    // 5ce9:0cff  push cs  [x73009]
    c.push16(c.cs);
    // 5ce9:0d00  call 0x428  [x73009]
    c.push16(0xd03u); code_23(c, 0x5d2b8u); if (c.ip != 0xd03u) c.badReturn(0x5db90);
L5db93:
    if (c.tracing) c.traceAt(0x5db93);
    // 5ce9:0d03  add dword ptr [0x140], 4  [x306674]
    c.w32(c.dsb + (uint16_t)(0x140u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x140u)), 0x4u, false));
    // 5ce9:0d09  inc dword ptr [0x148]  [x306674]
    c.w32(c.dsb + (uint16_t)(0x148u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x148u)), false));
    // 5ce9:0d0e  mov eax, dword ptr [0x14c]  [x306674]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14cu)));
    // 5ce9:0d12  cmp dword ptr [0x148], eax  [x306674]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x148u)), c.a.e, true);
    // 5ce9:0d17  jne 0x98e  [x306674]
    if (!c.zf) goto L5d81e;
L5dbab:
    if (c.tracing) c.traceAt(0x5dbab);
    // 5ce9:0d1b  retf   [x9449]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dbac:
    if (c.tracing) c.traceAt(0x5dbac);
    // 5ce9:0d1c  mov eax, dword ptr [0x1a2]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a2u)));
    // 5ce9:0d20  mov dword ptr cs:[0xc5a], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0xc5au), c.a.e);
    // 5ce9:0d25  mov eax, dword ptr [0x1a6]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a6u)));
    // 5ce9:0d29  mov dword ptr cs:[0xc61], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0xc61u), c.a.e);
    // 5ce9:0d2e  mov eax, dword ptr [0x1aa]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1aau)));
    // 5ce9:0d32  mov dword ptr cs:[0xc6b], eax  [x9449]
    c.w32(c.csb + (uint16_t)(0xc6bu), c.a.e);
    // 5ce9:0d37  retf   [x9449]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dbc8:
    if (c.tracing) c.traceAt(0x5dbc8);
    // 5ce9:0d38  push ds  [x1]
    c.push16(c.ds);
    // 5ce9:0d39  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5ce9:0d3b  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 5ce9:0d3e  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 5ce9:0d40  out dx, al  [x1]
    c.ip = 0xd41u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5ce9:0d41  cld   [x1]
    c.df = false;
    // 5ce9:0d42  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 5ce9:0d45  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 5ce9:0d47  out dx, al  [x1]
    c.ip = 0xd48u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5ce9:0d48  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L5dbdb:
    if (c.tracing) c.traceAt(0x5dbdb);
    // 5ce9:0d4b  mov dx, 0x3c9  [x255]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 5ce9:0d4e  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xd4fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5ce9:0d4f  out dx, al  [x255]
    c.ip = 0xd50u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5ce9:0d50  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xd51u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5ce9:0d51  out dx, al  [x255]
    c.ip = 0xd52u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5ce9:0d52  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xd53u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5ce9:0d53  out dx, al  [x255]
    c.ip = 0xd54u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5ce9:0d54  loop 0xd4b  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5dbdb;
L5dbe6:
    if (c.tracing) c.traceAt(0x5dbe6);
    // 5ce9:0d56  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5ce9:0d57  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dbe8:
    if (c.tracing) c.traceAt(0x5dbe8);
    // 5ce9:0d58  mov ax, word ptr [0x1ea]  [x1429]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1eau)));
    // 5ce9:0d5b  not ax  [x1429]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5ce9:0d5d  and ax, 0x600  [x1429]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 5ce9:0d60  shl ah, 4  [x1429]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 5ce9:0d63  mov dx, 0x3d4  [x1429]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 5ce9:0d66  mov al, 0xc  [x1429]
    c.a.l = (uint8_t)(0xcu);
    // 5ce9:0d68  out dx, ax  [x1429]
    c.ip = 0xd69u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5ce9:0d69  not word ptr [0x1ea]  [x1429]
    c.w16(c.dsb + (uint16_t)(0x1eau), ~(c.r16(c.dsb + (uint16_t)(0x1eau))));
    // 5ce9:0d6d  retf   [x1429]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dc00:
    if (c.tracing) c.traceAt(0x5dc00);
    // 5ce9:0d70  mov ax, 0x4033  [x9449]
    c.a.x = (uint16_t)(0x4033u);
    // 5ce9:0d73  mov fs, ax  [x9449]
    c.loadFs(c.a.x);
    // 5ce9:0d75  mov bx, word ptr fs:[0]  [x9449]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 5ce9:0d7a  mov cx, word ptr [0x20d]  [x9449]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x20du)));
    // 5ce9:0d7e  shl cx, 2  [x9449]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 5ce9:0d81  add bx, cx  [x9449]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 5ce9:0d83  mov bx, word ptr fs:[bx]  [x9449]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 5ce9:0d86  mov cx, word ptr fs:[bx]  [x9449]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 5ce9:0d89  mov dx, word ptr fs:[bx + 2]  [x9449]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 5ce9:0d8d  mov word ptr [0x17e], cx  [x9449]
    c.w16(c.dsb + (uint16_t)(0x17eu), c.c.x);
    // 5ce9:0d91  mov word ptr [0x180], dx  [x9449]
    c.w16(c.dsb + (uint16_t)(0x180u), c.dx_.x);
    // 5ce9:0d95  mov ax, word ptr fs:[bx + 4]  [x9449]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 5ce9:0d99  movzx eax, ax  [x9449]
    c.a.e = (uint32_t)(c.a.x);
    // 5ce9:0d9d  mov dword ptr [0x140], eax  [x9449]
    c.w32(c.dsb + (uint16_t)(0x140u), c.a.e);
    // 5ce9:0da1  mov eax, dword ptr fs:[bx + 0x16]  [x9449]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 5ce9:0da6  mov edx, dword ptr fs:[bx + 0x1a]  [x9449]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 5ce9:0dab  mov ecx, dword ptr fs:[bx + 0x1e]  [x9449]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 5ce9:0db0  add eax, dword ptr fs:[bx + 6]  [x9449]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 5ce9:0db5  add edx, dword ptr fs:[bx + 0xa]  [x9449]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 5ce9:0dba  add ecx, dword ptr fs:[bx + 0xe]  [x9449]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 5ce9:0dbf  mov ebp, 0x3ff  [x9449]
    c.bp.e = (uint32_t)(0x3ffu);
    // 5ce9:0dc5  and eax, ebp  [x9449]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 5ce9:0dc8  and edx, ebp  [x9449]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 5ce9:0dcb  and ecx, ebp  [x9449]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 5ce9:0dce  mov dword ptr fs:[bx + 0x16], eax  [x9449]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 5ce9:0dd3  mov dword ptr fs:[bx + 0x1a], edx  [x9449]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 5ce9:0dd8  mov dword ptr fs:[bx + 0x1e], ecx  [x9449]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 5ce9:0ddd  push cs  [x9449]
    c.push16(c.cs);
    // 5ce9:0dde  call 0x324  [x9449]
    c.push16(0xde1u); code_23(c, 0x5d1b4u); if (c.ip != 0xde1u) c.badReturn(0x5dc6e);
L5dc71:
    if (c.tracing) c.traceAt(0x5dc71);
    // 5ce9:0de1  push cs  [x9449]
    c.push16(c.cs);
    // 5ce9:0de2  call 0xd1c  [x9449]
    c.push16(0xde5u); code_23(c, 0x5dbacu); if (c.ip != 0xde5u) c.badReturn(0x5dc72);
L5dc75:
    if (c.tracing) c.traceAt(0x5dc75);
    // 5ce9:0de5  push cs  [x9449]
    c.push16(c.cs);
    // 5ce9:0de6  call 0x820  [x9449]
    c.push16(0xde9u); code_23(c, 0x5d6b0u); if (c.ip != 0xde9u) c.badReturn(0x5dc76);
L5dc79:
    if (c.tracing) c.traceAt(0x5dc79);
    // 5ce9:0de9  retf   [x9449]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dc7a:
    if (c.tracing) c.traceAt(0x5dc7a);
    // 5ce9:0dea  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0deb  call 0xeee  [x1429]
    c.push16(0xdeeu); code_23(c, 0x5dd7eu); if (c.ip != 0xdeeu) c.badReturn(0x5dc7b);
L5dc7e:
    if (c.tracing) c.traceAt(0x5dc7e);
    // 5ce9:0dee  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0def  call 0x6fc  [x1429]
    c.push16(0xdf2u); code_23(c, 0x5d58cu); if (c.ip != 0xdf2u) c.badReturn(0x5dc7f);
L5dc82:
    if (c.tracing) c.traceAt(0x5dc82);
    // 5ce9:0df2  cmp byte ptr [0x226], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x226u)), 0x1u, true);
    // 5ce9:0df7  jne 0xe03  [x1429]
    if (!c.zf) goto L5dc93;
L5dc89:
    if (c.tracing) c.traceAt(0x5dc89);
    // 5ce9:0df9  mov word ptr [0x20d], 6  [x578]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x6u);
    // 5ce9:0dff  push cs  [x578]
    c.push16(c.cs);
    // 5ce9:0e00  call 0xd70  [x578]
    c.push16(0xe03u); code_23(c, 0x5dc00u); if (c.ip != 0xe03u) c.badReturn(0x5dc90);
L5dc93:
    if (c.tracing) c.traceAt(0x5dc93);
    // 5ce9:0e03  cmp byte ptr [0x227], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x227u)), 0x1u, true);
    // 5ce9:0e08  jne 0xe14  [x1429]
    if (!c.zf) goto L5dca4;
L5dc9a:
    if (c.tracing) c.traceAt(0x5dc9a);
    // 5ce9:0e0a  mov word ptr [0x20d], 7  [x777]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x7u);
    // 5ce9:0e10  push cs  [x777]
    c.push16(c.cs);
    // 5ce9:0e11  call 0xd70  [x777]
    c.push16(0xe14u); code_23(c, 0x5dc00u); if (c.ip != 0xe14u) c.badReturn(0x5dca1);
L5dca4:
    if (c.tracing) c.traceAt(0x5dca4);
    // 5ce9:0e14  cmp byte ptr [0x228], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x228u)), 0x1u, true);
    // 5ce9:0e19  jne 0xe25  [x1429]
    if (!c.zf) goto L5dcb5;
L5dcab:
    if (c.tracing) c.traceAt(0x5dcab);
    // 5ce9:0e1b  mov word ptr [0x20d], 8  [x926]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x8u);
    // 5ce9:0e21  push cs  [x926]
    c.push16(c.cs);
    // 5ce9:0e22  call 0xd70  [x926]
    c.push16(0xe25u); code_23(c, 0x5dc00u); if (c.ip != 0xe25u) c.badReturn(0x5dcb2);
L5dcb5:
    if (c.tracing) c.traceAt(0x5dcb5);
    // 5ce9:0e25  cmp byte ptr [0x229], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x229u)), 0x1u, true);
    // 5ce9:0e2a  jne 0xe36  [x1429]
    if (!c.zf) goto L5dcc6;
L5dcbc:
    if (c.tracing) c.traceAt(0x5dcbc);
    // 5ce9:0e2c  mov word ptr [0x20d], 9  [x1024]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x9u);
    // 5ce9:0e32  push cs  [x1024]
    c.push16(c.cs);
    // 5ce9:0e33  call 0xd70  [x1024]
    c.push16(0xe36u); code_23(c, 0x5dc00u); if (c.ip != 0xe36u) c.badReturn(0x5dcc3);
L5dcc6:
    if (c.tracing) c.traceAt(0x5dcc6);
    // 5ce9:0e36  cmp byte ptr [0x22a], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x22au)), 0x1u, true);
    // 5ce9:0e3b  jne 0xe47  [x1429]
    if (!c.zf) goto L5dcd7;
L5dccd:
    if (c.tracing) c.traceAt(0x5dccd);
    // 5ce9:0e3d  mov word ptr [0x20d], 0xa  [x1165]
    c.w16(c.dsb + (uint16_t)(0x20du), 0xau);
    // 5ce9:0e43  push cs  [x1165]
    c.push16(c.cs);
    // 5ce9:0e44  call 0xd70  [x1165]
    c.push16(0xe47u); code_23(c, 0x5dc00u); if (c.ip != 0xe47u) c.badReturn(0x5dcd4);
L5dcd7:
    if (c.tracing) c.traceAt(0x5dcd7);
    // 5ce9:0e47  cmp byte ptr [0x22b], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x22bu)), 0x1u, true);
    // 5ce9:0e4c  jne 0xe58  [x1429]
    if (!c.zf) goto L5dce8;
L5dcde:
    if (c.tracing) c.traceAt(0x5dcde);
    // 5ce9:0e4e  mov word ptr [0x20d], 0xb  [x1429]
    c.w16(c.dsb + (uint16_t)(0x20du), 0xbu);
    // 5ce9:0e54  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0e55  call 0xd70  [x1429]
    c.push16(0xe58u); code_23(c, 0x5dc00u); if (c.ip != 0xe58u) c.badReturn(0x5dce5);
L5dce8:
    if (c.tracing) c.traceAt(0x5dce8);
    // 5ce9:0e58  cmp byte ptr [0x22c], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x22cu)), 0x1u, true);
    // 5ce9:0e5d  jne 0xe69  [x1429]
    if (!c.zf) goto L5dcf9;
L5dcef:
    if (c.tracing) c.traceAt(0x5dcef);
    // 5ce9:0e5f  mov word ptr [0x20d], 0xc  [x1429]
    c.w16(c.dsb + (uint16_t)(0x20du), 0xcu);
    // 5ce9:0e65  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0e66  call 0xd70  [x1429]
    c.push16(0xe69u); code_23(c, 0x5dc00u); if (c.ip != 0xe69u) c.badReturn(0x5dcf6);
L5dcf9:
    if (c.tracing) c.traceAt(0x5dcf9);
    // 5ce9:0e69  cmp byte ptr [0x225], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x225u)), 0x1u, true);
    // 5ce9:0e6e  jne 0xe7a  [x1429]
    if (!c.zf) goto L5dd0a;
L5dd00:
    if (c.tracing) c.traceAt(0x5dd00);
    // 5ce9:0e70  mov word ptr [0x20d], 5  [x264]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x5u);
    // 5ce9:0e76  push cs  [x264]
    c.push16(c.cs);
    // 5ce9:0e77  call 0xd70  [x264]
    c.push16(0xe7au); code_23(c, 0x5dc00u); if (c.ip != 0xe7au) c.badReturn(0x5dd07);
L5dd0a:
    if (c.tracing) c.traceAt(0x5dd0a);
    // 5ce9:0e7a  cmp byte ptr [0x224], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x224u)), 0x1u, true);
    // 5ce9:0e7f  jne 0xe8b  [x1429]
    if (!c.zf) goto L5dd1b;
L5dd11:
    if (c.tracing) c.traceAt(0x5dd11);
    // 5ce9:0e81  mov word ptr [0x20d], 4  [x313]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x4u);
    // 5ce9:0e87  push cs  [x313]
    c.push16(c.cs);
    // 5ce9:0e88  call 0xd70  [x313]
    c.push16(0xe8bu); code_23(c, 0x5dc00u); if (c.ip != 0xe8bu) c.badReturn(0x5dd18);
L5dd1b:
    if (c.tracing) c.traceAt(0x5dd1b);
    // 5ce9:0e8b  cmp byte ptr [0x223], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x223u)), 0x1u, true);
    // 5ce9:0e90  jne 0xe9c  [x1429]
    if (!c.zf) goto L5dd2c;
L5dd22:
    if (c.tracing) c.traceAt(0x5dd22);
    // 5ce9:0e92  mov word ptr [0x20d], 3  [x318]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x3u);
    // 5ce9:0e98  push cs  [x318]
    c.push16(c.cs);
    // 5ce9:0e99  call 0xd70  [x318]
    c.push16(0xe9cu); code_23(c, 0x5dc00u); if (c.ip != 0xe9cu) c.badReturn(0x5dd29);
L5dd2c:
    if (c.tracing) c.traceAt(0x5dd2c);
    // 5ce9:0e9c  cmp byte ptr [0x222], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x222u)), 0x1u, true);
    // 5ce9:0ea1  jne 0xead  [x1429]
    if (!c.zf) goto L5dd3d;
L5dd33:
    if (c.tracing) c.traceAt(0x5dd33);
    // 5ce9:0ea3  mov word ptr [0x20d], 2  [x290]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x2u);
    // 5ce9:0ea9  push cs  [x290]
    c.push16(c.cs);
    // 5ce9:0eaa  call 0xd70  [x290]
    c.push16(0xeadu); code_23(c, 0x5dc00u); if (c.ip != 0xeadu) c.badReturn(0x5dd3a);
L5dd3d:
    if (c.tracing) c.traceAt(0x5dd3d);
    // 5ce9:0ead  cmp byte ptr [0x221], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x221u)), 0x1u, true);
    // 5ce9:0eb2  jne 0xebe  [x1429]
    if (!c.zf) goto L5dd4e;
L5dd44:
    if (c.tracing) c.traceAt(0x5dd44);
    // 5ce9:0eb4  mov word ptr [0x20d], 1  [x578]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x1u);
    // 5ce9:0eba  push cs  [x578]
    c.push16(c.cs);
    // 5ce9:0ebb  call 0xd70  [x578]
    c.push16(0xebeu); code_23(c, 0x5dc00u); if (c.ip != 0xebeu) c.badReturn(0x5dd4b);
L5dd4e:
    if (c.tracing) c.traceAt(0x5dd4e);
    // 5ce9:0ebe  cmp byte ptr [0x220], 1  [x1429]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x220u)), 0x1u, true);
    // 5ce9:0ec3  jne 0xecf  [x1429]
    if (!c.zf) goto L5dd5f;
L5dd55:
    if (c.tracing) c.traceAt(0x5dd55);
    // 5ce9:0ec5  mov word ptr [0x20d], 0  [x358]
    c.w16(c.dsb + (uint16_t)(0x20du), 0x0u);
    // 5ce9:0ecb  push cs  [x358]
    c.push16(c.cs);
    // 5ce9:0ecc  call 0xd70  [x358]
    c.push16(0xecfu); code_23(c, 0x5dc00u); if (c.ip != 0xecfu) c.badReturn(0x5dd5c);
L5dd5f:
    if (c.tracing) c.traceAt(0x5dd5f);
    // 5ce9:0ecf  push cs  [x1429]
    c.push16(c.cs);
    // 5ce9:0ed0  call 0xd58  [x1429]
    c.push16(0xed3u); code_23(c, 0x5dbe8u); if (c.ip != 0xed3u) c.badReturn(0x5dd60);
L5dd63:
    if (c.tracing) c.traceAt(0x5dd63);
    // 5ce9:0ed3  mov bx, 0xe  [x1429]
    c.b.x = (uint16_t)(0xeu);
    // 5ce9:0ed6  int 0xff  [x1429]
    c.ip = 0xed8u; c.d32 = false; c.intr(0xff, 0xed8u);
L5dd68:
    if (c.tracing) c.traceAt(0x5dd68);
    // 5ce9:0ed8  mov word ptr [0x231], ax  [x1429]
    c.w16(c.dsb + (uint16_t)(0x231u), c.a.x);
    // 5ce9:0edb  mov ax, word ptr [0x231]  [x1429]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x231u)));
    // 5ce9:0ede  add word ptr [0x261], ax  [x1429]
    c.w16(c.dsb + (uint16_t)(0x261u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x261u)), c.a.x, false));
    // 5ce9:0ee2  mov ax, word ptr [0x22d]  [x1429]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x22du)));
    // 5ce9:0ee5  cmp word ptr [0x261], ax  [x1429]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x261u)), c.a.x, true);
    // 5ce9:0ee9  jle 0xdea  [x1429]
    if ((c.zf || c.sf != c.of)) goto L5dc7a;
L5dd7d:
    if (c.tracing) c.traceAt(0x5dd7d);
    // 5ce9:0eed  retf   [x10]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5dd7e:
    if (c.tracing) c.traceAt(0x5dd7e);
    // 5ce9:0eee  mov ax, 0x2d5a  [x1429]
    c.a.x = (uint16_t)(0x2d5au);
    // 5ce9:0ef1  mov es, ax  [x1429]
    c.loadEs(c.a.x);
    // 5ce9:0ef3  mov cx, word ptr [0x231]  [x1429]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x231u)));
L5dd87:
    if (c.tracing) c.traceAt(0x5dd87);
    // 5ce9:0ef7  mov di, word ptr [0x21d]  [x1429]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21du)));
    // 5ce9:0efb  mov eax, dword ptr es:[di]  [x1429]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.di.x)));
    // 5ce9:0eff  mov dword ptr [0x1f7], eax  [x1429]
    c.w32(c.dsb + (uint16_t)(0x1f7u), c.a.e);
    // 5ce9:0f03  mov eax, dword ptr es:[di + 4]  [x1429]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.di.x + 0x4u)));
    // 5ce9:0f08  mov dword ptr [0x1ff], eax  [x1429]
    c.w32(c.dsb + (uint16_t)(0x1ffu), c.a.e);
    // 5ce9:0f0c  movzx eax, word ptr es:[di + 8]  [x1429]
    c.a.e = (uint32_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x8u)));
    // 5ce9:0f12  and eax, 0x3ff  [x1429]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 5ce9:0f18  mov dword ptr [0x1ae], eax  [x1429]
    c.w32(c.dsb + (uint16_t)(0x1aeu), c.a.e);
    // 5ce9:0f1c  movzx eax, word ptr es:[di + 0xa]  [x1429]
    c.a.e = (uint32_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0xau)));
    // 5ce9:0f22  and eax, 0x3ff  [x1429]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 5ce9:0f28  mov dword ptr [0x1b2], eax  [x1429]
    c.w32(c.dsb + (uint16_t)(0x1b2u), c.a.e);
    // 5ce9:0f2c  mov al, byte ptr es:[di + 0xc]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.di.x + 0xcu)));
    // 5ce9:0f30  mov byte ptr [0x25d], al  [x1429]
    c.w8(c.dsb + (uint16_t)(0x25du), c.a.l);
    // 5ce9:0f33  mov al, byte ptr es:[di + 0xd]  [x1429]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.di.x + 0xdu)));
    // 5ce9:0f37  mov byte ptr [0x25e], al  [x1429]
    c.w8(c.dsb + (uint16_t)(0x25eu), c.a.l);
    // 5ce9:0f3a  movsx eax, word ptr es:[di + 0xe]  [x1429]
    c.a.e = (uint32_t)((uint32_t)(int32_t)(int16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0xeu))));
    // 5ce9:0f40  mov ebx, eax  [x1429]
    c.b.e = (uint32_t)(c.a.e);
    // 5ce9:0f43  shl eax, 0xc  [x1429]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0xcu) & 31), false));
    // 5ce9:0f47  add eax, 0x15e000  [x1429]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x15e000u, false));
    // 5ce9:0f4d  mov dword ptr [0x1fb], eax  [x1429]
    c.w32(c.dsb + (uint16_t)(0x1fbu), c.a.e);
    // 5ce9:0f51  mov ax, word ptr es:[di + 0x10]  [x1429]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x10u)));
    // 5ce9:0f55  mov word ptr [0x22f], ax  [x1429]
    c.w16(c.dsb + (uint16_t)(0x22fu), c.a.x);
    // 5ce9:0f58  add word ptr [0x21d], 0x12  [x1429]
    c.w16(c.dsb + (uint16_t)(0x21du), c.add<16>(c.r16(c.dsb + (uint16_t)(0x21du)), 0x12u, false));
    // 5ce9:0f5d  cmp word ptr [0x21d], 0x648c  [x1429]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x21du)), 0x648cu, true);
    // 5ce9:0f63  jb 0xf6b  [x1429]
    if (c.cf) goto L5ddfb;
    c.notTranslated(0x5ddf5, "fall-through");
L5ddfb:
    if (c.tracing) c.traceAt(0x5ddfb);
    // 5ce9:0f6b  loop 0xef7  [x1429]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5dd87;
L5ddfd:
    if (c.tracing) c.traceAt(0x5ddfd);
    // 5ce9:0f6d  retf   [x1429]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L5ddfe:
    if (c.tracing) c.traceAt(0x5ddfe);
    // 5ce9:0f6e  mov ax, 0x5cc2  [x1]
    c.a.x = (uint16_t)(0x5cc2u);
    // 5ce9:0f71  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5ce9:0f73  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 5ce9:0f76  mov ax, 2  [x1]
    c.a.x = (uint16_t)(0x2u);
    // 5ce9:0f79  int 0xff  [x1]
    c.ip = 0xf7bu; c.d32 = false; c.intr(0xff, 0xf7bu);
L5de0b:
    if (c.tracing) c.traceAt(0x5de0b);
    // 5ce9:0f7b  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:0f7c  call 0x7ac  [x1]
    c.push16(0xf7fu); code_23(c, 0x5d63cu); if (c.ip != 0xf7fu) c.badReturn(0x5de0c);
L5de0f:
    if (c.tracing) c.traceAt(0x5de0f);
    // 5ce9:0f7f  mov ax, 0x410a  [x1]
    c.a.x = (uint16_t)(0x410au);
    // 5ce9:0f82  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 5ce9:0f85  mov si, 0x182  [x1]
    c.si.x = (uint16_t)(0x182u);
    // 5ce9:0f88  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 5ce9:0f8a  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 5ce9:0f8d  mov ax, 0x2cf2  [x1]
    c.a.x = (uint16_t)(0x2cf2u);
    // 5ce9:0f90  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5ce9:0f93  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:0f94  call 0xd38  [x1]
    c.push16(0xf97u); code_23(c, 0x5dbc8u); if (c.ip != 0xf97u) c.badReturn(0x5de24);
L5de27:
    if (c.tracing) c.traceAt(0x5de27);
    // 5ce9:0f97  mov dword ptr [0x1ff], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1ffu), 0x0u);
    // 5ce9:0fa0  mov dword ptr [0x1fb], 0x124f80  [x1]
    c.w32(c.dsb + (uint16_t)(0x1fbu), 0x124f80u);
    // 5ce9:0fa9  mov dword ptr [0x1ae], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1aeu), 0x0u);
    // 5ce9:0fb2  mov dword ptr [0x1b2], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1b2u), 0x0u);
    // 5ce9:0fbb  mov dword ptr [0x1b6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1b6u), 0x0u);
    // 5ce9:0fc4  mov byte ptr [0x226], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x226u), 0x1u);
    // 5ce9:0fc9  mov byte ptr [0x227], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x227u), 0x1u);
    // 5ce9:0fce  mov byte ptr [0x228], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x228u), 0x1u);
    // 5ce9:0fd3  mov byte ptr [0x229], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x229u), 0x1u);
    // 5ce9:0fd8  mov byte ptr [0x22a], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x22au), 0x1u);
    // 5ce9:0fdd  mov byte ptr [0x22b], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x22bu), 0x1u);
    // 5ce9:0fe2  mov byte ptr [0x22c], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x22cu), 0x1u);
    // 5ce9:0fe7  mov byte ptr [0x220], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x220u), 0x0u);
    // 5ce9:0fec  mov byte ptr [0x221], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x221u), 0x0u);
    // 5ce9:0ff1  mov byte ptr [0x222], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x222u), 0x0u);
    // 5ce9:0ff6  mov byte ptr [0x223], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x223u), 0x0u);
    // 5ce9:0ffb  mov byte ptr [0x224], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x224u), 0x0u);
    // 5ce9:1000  mov byte ptr [0x225], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x225u), 0x0u);
    // 5ce9:1005  mov word ptr [0x261], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x261u), 0x0u);
    // 5ce9:100b  mov word ptr [0x231], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0x231u), 0x1u);
    // 5ce9:1011  mov byte ptr [0x220], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x220u), 0x1u);
    // 5ce9:1016  mov byte ptr [0x221], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x221u), 0x1u);
    // 5ce9:101b  mov word ptr [0x22d], 0x165  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x165u);
    // 5ce9:1021  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1022  call 0xdea  [x1]
    c.push16(0x1025u); code_23(c, 0x5dc7au); if (c.ip != 0x1025u) c.badReturn(0x5deb2);
L5deb5:
    if (c.tracing) c.traceAt(0x5deb5);
    // 5ce9:1025  mov byte ptr [0x220], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x220u), 0x0u);
    // 5ce9:102a  mov word ptr [0x22d], 0x1e6  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x1e6u);
    // 5ce9:1030  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1031  call 0xdea  [x1]
    c.push16(0x1034u); code_23(c, 0x5dc7au); if (c.ip != 0x1034u) c.badReturn(0x5dec1);
L5dec4:
    if (c.tracing) c.traceAt(0x5dec4);
    // 5ce9:1034  mov byte ptr [0x222], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x222u), 0x1u);
    // 5ce9:1039  mov word ptr [0x22d], 0x241  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x241u);
    // 5ce9:103f  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1040  call 0xdea  [x1]
    c.push16(0x1043u); code_23(c, 0x5dc7au); if (c.ip != 0x1043u) c.badReturn(0x5ded0);
L5ded3:
    if (c.tracing) c.traceAt(0x5ded3);
    // 5ce9:1043  mov byte ptr [0x221], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x221u), 0x0u);
    // 5ce9:1048  mov byte ptr [0x226], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x226u), 0x0u);
    // 5ce9:104d  mov word ptr [0x22d], 0x2c1  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x2c1u);
    // 5ce9:1053  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1054  call 0xdea  [x1]
    c.push16(0x1057u); code_23(c, 0x5dc7au); if (c.ip != 0x1057u) c.badReturn(0x5dee4);
L5dee7:
    if (c.tracing) c.traceAt(0x5dee7);
    // 5ce9:1057  mov byte ptr [0x223], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x223u), 0x1u);
    // 5ce9:105c  mov word ptr [0x22d], 0x308  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x308u);
    // 5ce9:1062  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1063  call 0xdea  [x1]
    c.push16(0x1066u); code_23(c, 0x5dc7au); if (c.ip != 0x1066u) c.badReturn(0x5def3);
L5def6:
    if (c.tracing) c.traceAt(0x5def6);
    // 5ce9:1066  mov byte ptr [0x222], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x222u), 0x0u);
    // 5ce9:106b  mov byte ptr [0x227], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x227u), 0x0u);
    // 5ce9:1070  mov word ptr [0x22d], 0x39d  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x39du);
    // 5ce9:1076  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:1077  call 0xdea  [x1]
    c.push16(0x107au); code_23(c, 0x5dc7au); if (c.ip != 0x107au) c.badReturn(0x5df07);
L5df0a:
    if (c.tracing) c.traceAt(0x5df0a);
    // 5ce9:107a  mov byte ptr [0x224], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x224u), 0x1u);
    // 5ce9:107f  mov byte ptr [0x228], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x228u), 0x0u);
    // 5ce9:1084  mov word ptr [0x22d], 0x3ff  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x3ffu);
    // 5ce9:108a  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:108b  call 0xdea  [x1]
    c.push16(0x108eu); code_23(c, 0x5dc7au); if (c.ip != 0x108eu) c.badReturn(0x5df1b);
L5df1e:
    if (c.tracing) c.traceAt(0x5df1e);
    // 5ce9:108e  mov byte ptr [0x223], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x223u), 0x0u);
    // 5ce9:1093  mov byte ptr [0x229], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x229u), 0x0u);
    // 5ce9:1098  mov word ptr [0x22d], 0x48c  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x48cu);
    // 5ce9:109e  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:109f  call 0xdea  [x1]
    c.push16(0x10a2u); code_23(c, 0x5dc7au); if (c.ip != 0x10a2u) c.badReturn(0x5df2f);
L5df32:
    if (c.tracing) c.traceAt(0x5df32);
    // 5ce9:10a2  mov byte ptr [0x225], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0x225u), 0x1u);
    // 5ce9:10a7  mov byte ptr [0x22a], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x22au), 0x0u);
    // 5ce9:10ac  mov word ptr [0x22d], 0x4d6  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x4d6u);
    // 5ce9:10b2  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:10b3  call 0xdea  [x1]
    c.push16(0x10b6u); code_23(c, 0x5dc7au); if (c.ip != 0x10b6u) c.badReturn(0x5df43);
L5df46:
    if (c.tracing) c.traceAt(0x5df46);
    // 5ce9:10b6  mov byte ptr [0x224], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x224u), 0x0u);
    // 5ce9:10bb  mov word ptr [0x22d], 0x594  [x1]
    c.w16(c.dsb + (uint16_t)(0x22du), 0x594u);
    // 5ce9:10c1  push cs  [x1]
    c.push16(c.cs);
    // 5ce9:10c2  call 0xdea  [x1]
    c.push16(0x10c5u); code_23(c, 0x5dc7au); if (c.ip != 0x10c5u) c.badReturn(0x5df52);
L5df55:
    if (c.tracing) c.traceAt(0x5df55);
    // 5ce9:10c5  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 5ce9:10c7  int 0x21  [x1]
    c.ip = 0x10c9u; c.d32 = false; c.intr(0x21, 0x10c9u);
    c.notTranslated(0x5df59, "fall-through");
}

static Register reg23(23, {0x5ce90, 0x5ceb9, 0x5cef8, 0x5cf09, 0x5cf0c, 0x5d1b4, 0x5d1b8, 0x5d1d9, 0x5d2a0, 0x5d2a2, 0x5d2b8, 0x5d2ce, 0x5d2ee, 0x5d2f8, 0x5d30b, 0x5d334, 0x5d354, 0x5d35e, 0x5d371, 0x5d39a, 0x5d3a4, 0x5d3dd, 0x5d3e1, 0x5d3f6, 0x5d403, 0x5d409, 0x5d40d, 0x5d411, 0x5d413, 0x5d418, 0x5d41a, 0x5d428, 0x5d431, 0x5d449, 0x5d472, 0x5d491, 0x5d49e, 0x5d4be, 0x5d4c8, 0x5d4db, 0x5d504, 0x5d50b, 0x5d516, 0x5d536, 0x5d540, 0x5d553, 0x5d57c, 0x5d589, 0x5d58c, 0x5d5a6, 0x5d5d6, 0x5d5eb, 0x5d635, 0x5d63a, 0x5d63c, 0x5d647, 0x5d659, 0x5d661, 0x5d695, 0x5d697, 0x5d69a, 0x5d69d, 0x5d6af, 0x5d6b0, 0x5d6cb, 0x5d6fd, 0x5d755, 0x5d76d, 0x5d773, 0x5d779, 0x5d785, 0x5d7a6, 0x5d7cb, 0x5d7d1, 0x5d7de, 0x5d7ec, 0x5d7f0, 0x5d7f5, 0x5d81e, 0x5d86e, 0x5d888, 0x5d892, 0x5d8f3, 0x5d91c, 0x5d930, 0x5d934, 0x5d999, 0x5d9ca, 0x5d9fa, 0x5da08, 0x5da0e, 0x5da13, 0x5da16, 0x5da18, 0x5da23, 0x5da2e, 0x5da5e, 0x5da6c, 0x5da72, 0x5da77, 0x5da7a, 0x5da7c, 0x5da8e, 0x5da95, 0x5da9d, 0x5daa9, 0x5daaf, 0x5db4b, 0x5db55, 0x5db5d, 0x5db60, 0x5db68, 0x5db93, 0x5dbab, 0x5dbac, 0x5dbc8, 0x5dbdb, 0x5dbe6, 0x5dbe8, 0x5dc00, 0x5dc71, 0x5dc75, 0x5dc79, 0x5dc7a, 0x5dc7e, 0x5dc82, 0x5dc89, 0x5dc93, 0x5dc9a, 0x5dca4, 0x5dcab, 0x5dcb5, 0x5dcbc, 0x5dcc6, 0x5dccd, 0x5dcd7, 0x5dcde, 0x5dce8, 0x5dcef, 0x5dcf9, 0x5dd00, 0x5dd0a, 0x5dd11, 0x5dd1b, 0x5dd22, 0x5dd2c, 0x5dd33, 0x5dd3d, 0x5dd44, 0x5dd4e, 0x5dd55, 0x5dd5f, 0x5dd63, 0x5dd68, 0x5dd7d, 0x5dd7e, 0x5dd87, 0x5ddfb, 0x5ddfd, 0x5ddfe, 0x5de0b, 0x5de0f, 0x5de27, 0x5deb5, 0x5dec4, 0x5ded3, 0x5dee7, 0x5def6, 0x5df0a, 0x5df1e, 0x5df32, 0x5df46, 0x5df55}, code_23);

}  // namespace angel
