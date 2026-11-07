// Program 12, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_12(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x66030: goto L66030;
    case 0x6604d: goto L6604d;
    case 0x6631b: goto L6631b;
    case 0x6631f: goto L6631f;
    case 0x66340: goto L66340;
    case 0x663e9: goto L663e9;
    case 0x663eb: goto L663eb;
    case 0x66404: goto L66404;
    case 0x6641c: goto L6641c;
    case 0x6643b: goto L6643b;
    case 0x66443: goto L66443;
    case 0x66456: goto L66456;
    case 0x6647b: goto L6647b;
    case 0x6649a: goto L6649a;
    case 0x664a2: goto L664a2;
    case 0x664b5: goto L664b5;
    case 0x664da: goto L664da;
    case 0x664e4: goto L664e4;
    case 0x6651d: goto L6651d;
    case 0x66521: goto L66521;
    case 0x66539: goto L66539;
    case 0x66546: goto L66546;
    case 0x6654c: goto L6654c;
    case 0x66550: goto L66550;
    case 0x66554: goto L66554;
    case 0x66556: goto L66556;
    case 0x6655b: goto L6655b;
    case 0x6655d: goto L6655d;
    case 0x66567: goto L66567;
    case 0x66570: goto L66570;
    case 0x66588: goto L66588;
    case 0x665b0: goto L665b0;
    case 0x665cf: goto L665cf;
    case 0x665da: goto L665da;
    case 0x665f9: goto L665f9;
    case 0x66601: goto L66601;
    case 0x66614: goto L66614;
    case 0x66639: goto L66639;
    case 0x66640: goto L66640;
    case 0x66649: goto L66649;
    case 0x66668: goto L66668;
    case 0x66670: goto L66670;
    case 0x66683: goto L66683;
    case 0x666a8: goto L666a8;
    case 0x666b5: goto L666b5;
    case 0x666b6: goto L666b6;
    case 0x666ec: goto L666ec;
    case 0x666ee: goto L666ee;
    case 0x66725: goto L66725;
    case 0x66730: goto L66730;
    case 0x66742: goto L66742;
    case 0x6674a: goto L6674a;
    case 0x6677e: goto L6677e;
    case 0x66780: goto L66780;
    case 0x66783: goto L66783;
    case 0x66786: goto L66786;
    case 0x66798: goto L66798;
    case 0x667bc: goto L667bc;
    case 0x667cd: goto L667cd;
    case 0x667d2: goto L667d2;
    case 0x667e1: goto L667e1;
    case 0x66813: goto L66813;
    case 0x6686b: goto L6686b;
    case 0x66883: goto L66883;
    case 0x66889: goto L66889;
    case 0x6688f: goto L6688f;
    case 0x6689b: goto L6689b;
    case 0x668bc: goto L668bc;
    case 0x668db: goto L668db;
    case 0x668e4: goto L668e4;
    case 0x668f1: goto L668f1;
    case 0x668ff: goto L668ff;
    case 0x66904: goto L66904;
    case 0x6690a: goto L6690a;
    case 0x66933: goto L66933;
    case 0x669c0: goto L669c0;
    case 0x669e9: goto L669e9;
    case 0x669fd: goto L669fd;
    case 0x66a01: goto L66a01;
    case 0x66a66: goto L66a66;
    case 0x66a97: goto L66a97;
    case 0x66ac5: goto L66ac5;
    case 0x66ad3: goto L66ad3;
    case 0x66ad9: goto L66ad9;
    case 0x66ade: goto L66ade;
    case 0x66ae1: goto L66ae1;
    case 0x66ae3: goto L66ae3;
    case 0x66af5: goto L66af5;
    case 0x66afc: goto L66afc;
    case 0x66b03: goto L66b03;
    case 0x66b0f: goto L66b0f;
    case 0x66b15: goto L66b15;
    case 0x66b2a: goto L66b2a;
    case 0x66b6d: goto L66b6d;
    case 0x66b77: goto L66b77;
    case 0x66b79: goto L66b79;
    case 0x66b7f: goto L66b7f;
    case 0x66b81: goto L66b81;
    case 0x66b92: goto L66b92;
    case 0x66b9c: goto L66b9c;
    case 0x66b9e: goto L66b9e;
    case 0x66ba4: goto L66ba4;
    case 0x66ba6: goto L66ba6;
    case 0x66bbd: goto L66bbd;
    case 0x66bd0: goto L66bd0;
    case 0x66be8: goto L66be8;
    case 0x66be9: goto L66be9;
    case 0x66e30: goto L66e30;
    case 0x66e43: goto L66e43;
    case 0x66e4e: goto L66e4e;
    case 0x66e50: goto L66e50;
    case 0x66e66: goto L66e66;
    case 0x66e9b: goto L66e9b;
    case 0x66f03: goto L66f03;
    case 0x66f07: goto L66f07;
    case 0x66f0b: goto L66f0b;
    case 0x66f0f: goto L66f0f;
    case 0x66f10: goto L66f10;
    case 0x66f24: goto L66f24;
    case 0x66f2d: goto L66f2d;
    case 0x66f36: goto L66f36;
    case 0x66f37: goto L66f37;
    case 0x66f48: goto L66f48;
    case 0x66f4c: goto L66f4c;
    case 0x66f50: goto L66f50;
    case 0x66f54: goto L66f54;
    case 0x66f58: goto L66f58;
    case 0x66f62: goto L66f62;
    case 0x66f7a: goto L66f7a;
    case 0x66f8c: goto L66f8c;
    case 0x66ffe: goto L66ffe;
    case 0x67002: goto L67002;
    case 0x6703f: goto L6703f;
    case 0x6707c: goto L6707c;
    case 0x670b9: goto L670b9;
    case 0x670bd: goto L670bd;
    case 0x670c2: goto L670c2;
    case 0x670c9: goto L670c9;
    case 0x670fe: goto L670fe;
    case 0x6710b: goto L6710b;
    case 0x6711b: goto L6711b;
    case 0x6712d: goto L6712d;
    case 0x6713f: goto L6713f;
    case 0x67157: goto L67157;
    default: c.callLinear(t); return;
    }
L66030:
    if (c.tracing) c.traceAt(0x66030);
    // 6603:0000  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 6603:0003  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 6603:0005  out dx, al  [x1]
    c.ip = 0x6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0006  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 6603:0007  in al, dx  [x1]
    c.ip = 0x8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 6603:0008  and al, 0xe0  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xe0u), false));
    // 6603:000a  or al, bl  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.b.l), true));
    // 6603:000c  out dx, al  [x1]
    c.ip = 0xdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:000d  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6604d:
    if (c.tracing) c.traceAt(0x6604d);
    // 6603:001d  mov ax, 0x24f1  [x801]
    c.a.x = (uint16_t)(0x24f1u);
    // 6603:0020  mov es, ax  [x801]
    c.loadEs(c.a.x);
    // 6603:0022  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:0027  mov edi, dword ptr [0x6e]  [x801]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 6603:002c  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:002f  add edi, edi  [x801]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 6603:0032  mov ebp, ebx  [x801]
    c.bp.e = (uint32_t)(c.b.e);
    // 6603:0035  add ebx, edi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 6603:0038  sub ebp, edi  [x801]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 6603:003b  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0045  add eax, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:004f  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0052  mov dword ptr [0x46], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x46u), c.a.e);
    // 6603:0056  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0060  add eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:006a  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:006d  mov dword ptr [0x4a], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x4au), c.a.e);
    // 6603:0071  mov ebx, edi  [x801]
    c.b.e = (uint32_t)(c.di.e);
    // 6603:0074  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:007e  mov dword ptr [0x4e], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.a.e);
    // 6603:0082  mov ebp, dword ptr [0x72]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:0087  add ebp, ebp  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:008a  mov eax, ebx  [x801]
    c.a.e = (uint32_t)(c.b.e);
    // 6603:008d  sub ebx, ebp  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 6603:0090  add ebp, eax  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6603:0093  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:009d  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:00a7  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:00aa  mov dword ptr [0x5a], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x5au), c.a.e);
    // 6603:00ae  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:00b8  add eax, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:00c2  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:00c5  mov dword ptr [0x66], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x66u), c.a.e);
    // 6603:00c9  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:00ce  add ebx, dword ptr [0x6e]  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x6eu)), false));
    // 6603:00d3  sub ebx, dword ptr [0x72]  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:00d8  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:00db  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:00e5  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:00ef  mov edx, ecx  [x801]
    c.dx_.e = (uint32_t)(c.c.e);
    // 6603:00f2  neg edx  [x801]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 6603:00f5  mov edi, eax  [x801]
    c.di.e = (uint32_t)(c.a.e);
    // 6603:00f8  mov esi, dword ptr [0x72]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:00fd  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:0100  add ebx, esi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6603:0103  add ebx, esi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6603:0106  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0110  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:011a  sub eax, esi  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:011d  sub ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6603:0120  sub edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 6603:0123  add edi, esi  [x801]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 6603:0126  mov esi, dword ptr [0x6e]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 6603:012b  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:012e  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0131  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0134  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:013e  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0148  add eax, esi  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 6603:014b  add ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 6603:014e  add edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6603:0151  sub edi, esi  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6603:0154  mov esi, dword ptr [0x72]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:0159  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:015c  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:015f  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0162  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:016c  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0176  sub eax, esi  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0179  sub ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6603:017c  add edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6603:017f  sub edi, esi  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6603:0182  sar eax, 2  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 6603:0186  sar ecx, 2  [x801]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 6603:018a  sar edx, 2  [x801]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 6603:018e  sar edi, 2  [x801]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 6603:0192  mov dword ptr [0x52], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x52u), c.a.e);
    // 6603:0196  mov dword ptr [0x56], ecx  [x801]
    c.w32(c.dsb + (uint16_t)(0x56u), c.c.e);
    // 6603:019b  mov dword ptr [0x5e], edx  [x801]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.dx_.e);
    // 6603:01a0  mov dword ptr [0x62], edi  [x801]
    c.w32(c.dsb + (uint16_t)(0x62u), c.di.e);
    // 6603:01a5  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:01aa  mov ebp, ebx  [x801]
    c.bp.e = (uint32_t)(c.b.e);
    // 6603:01ad  add ebx, dword ptr [0x72]  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:01b2  sub ebp, dword ptr [0x72]  [x801]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:01b7  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:01ba  add ebp, ebp  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:01bd  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:01c7  add eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:01d1  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:01d4  add dword ptr [0x52], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x52u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x52u)), c.a.e, false));
    // 6603:01d9  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:01e3  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:01ed  sar ecx, 1  [x801]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 6603:01f0  sub dword ptr [0x56], ecx  [x801]
    c.w32(c.dsb + (uint16_t)(0x56u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x56u)), c.c.e, false));
    // 6603:01f5  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:01ff  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:0209  sar edx, 1  [x801]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 6603:020c  sub dword ptr [0x5e], edx  [x801]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), c.dx_.e, false));
    // 6603:0211  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:021b  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:0225  sar edi, 1  [x801]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 6603:0228  sub dword ptr [0x62], edi  [x801]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x62u)), c.di.e, false));
    // 6603:022d  sar dword ptr [0x5e], 3  [x801]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), (int)((0x3u) & 31), false));
    // 6603:0233  sar dword ptr [0x62], 3  [x801]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x62u)), (int)((0x3u) & 31), false));
    // 6603:0239  sar dword ptr [0x66], 3  [x801]
    c.w32(c.dsb + (uint16_t)(0x66u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x66u)), (int)((0x3u) & 31), false));
    // 6603:023f  shl dword ptr [0x46], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x46u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x46u)), (int)((0x7u) & 31), false));
    // 6603:0245  shl dword ptr [0x4a], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x4au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4au)), (int)((0x7u) & 31), false));
    // 6603:024b  shl dword ptr [0x4e], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4eu)), (int)((0x7u) & 31), false));
    // 6603:0251  shl dword ptr [0x52], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x52u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x52u)), (int)((0x7u) & 31), false));
    // 6603:0257  shl dword ptr [0x56], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x56u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x56u)), (int)((0x7u) & 31), false));
    // 6603:025d  shl dword ptr [0x5a], 7  [x801]
    c.w32(c.dsb + (uint16_t)(0x5au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5au)), (int)((0x7u) & 31), false));
    // 6603:0263  mov eax, dword ptr [0x46]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x46u)));
    // 6603:0267  mov dword ptr cs:[0x350], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x350u), c.a.e);
    // 6603:026c  mov eax, dword ptr [0x4a]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4au)));
    // 6603:0270  mov dword ptr cs:[0x357], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x357u), c.a.e);
    // 6603:0275  mov eax, dword ptr [0x4e]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4eu)));
    // 6603:0279  mov dword ptr cs:[0x361], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x361u), c.a.e);
    // 6603:027e  mov eax, dword ptr [0x52]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x52u)));
    // 6603:0282  imul eax, eax, 0xa0  [x801]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 6603:0289  mov ecx, 0xf0  [x801]
    c.c.e = (uint32_t)(0xf0u);
    // 6603:028f  cdq   [x801]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:0291  idiv ecx  [x801]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x291u); }   // #DE: int 0, then again
    // 6603:0294  mov dword ptr cs:[0x381], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x381u), c.a.e);
    // 6603:0299  mov eax, dword ptr [0x56]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x56u)));
    // 6603:029d  imul eax, eax, 0xa0  [x801]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 6603:02a4  mov ecx, 0xf0  [x801]
    c.c.e = (uint32_t)(0xf0u);
    // 6603:02aa  cdq   [x801]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:02ac  idiv ecx  [x801]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x2acu); }   // #DE: int 0, then again
    // 6603:02af  mov dword ptr cs:[0x388], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x388u), c.a.e);
    // 6603:02b4  mov eax, dword ptr [0x5a]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5au)));
    // 6603:02b8  imul eax, eax, 0xa0  [x801]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 6603:02bf  mov ecx, 0xf0  [x801]
    c.c.e = (uint32_t)(0xf0u);
    // 6603:02c5  cdq   [x801]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:02c7  idiv ecx  [x801]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x2c7u); }   // #DE: int 0, then again
    // 6603:02ca  mov dword ptr cs:[0x392], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x392u), c.a.e);
    // 6603:02cf  mov eax, dword ptr [0x5e]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 6603:02d3  mov dword ptr cs:[0x321], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x321u), c.a.e);
    // 6603:02d8  mov eax, dword ptr [0x62]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 6603:02dc  mov dword ptr cs:[0x328], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x328u), c.a.e);
    // 6603:02e1  mov eax, dword ptr [0x66]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 6603:02e5  mov dword ptr cs:[0x332], eax  [x801]
    c.w32(c.csb + (uint16_t)(0x332u), c.a.e);
    // 6603:02ea  retf   [x801]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6631b:
    if (c.tracing) c.traceAt(0x6631b);
    // 6603:02eb  push cs  [x801]
    c.push16(c.cs);
    // 6603:02ec  call 0x1d  [x801]
    c.push16(0x2efu); code_12(c, 0x6604du); if (c.ip != 0x2efu) c.badReturn(0x6631c);
L6631f:
    if (c.tracing) c.traceAt(0x6631f);
    // 6603:02ef  lfs si, ptr [0x3a]  [x801]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6603:02f4  movzx esi, si  [x801]
    c.si.e = (uint32_t)(c.si.x);
    // 6603:02f8  mov eax, dword ptr fs:[esi]  [x801]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 6603:02fd  shl eax, 4  [x801]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 6603:0301  mov word ptr [0x36], ax  [x801]
    c.w16(c.dsb + (uint16_t)(0x36u), c.a.x);
    // 6603:0304  add esi, 8  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 6603:0308  add word ptr [0x36], si  [x801]
    c.w16(c.dsb + (uint16_t)(0x36u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x36u)), c.si.x, true));
    // 6603:030c  les di, ptr [0x3e]  [x801]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L66340:
    if (c.tracing) c.traceAt(0x66340);
    // 6603:0310  mov ebx, dword ptr fs:[si]  [x127893]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 6603:0314  mov ecx, dword ptr fs:[si + 4]  [x127893]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 6603:0319  mov edi, dword ptr fs:[si + 8]  [x127893]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 6603:031e  imul eax, ebx, 0xffffffff  [x127893]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66351))));
    // 6603:0325  imul ebp, ecx, 0  [x127893]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66358))));
    // 6603:032c  add eax, ebp  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:032f  imul ebp, edi, 0x40  [x127893]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66362))));
    // 6603:0336  add eax, ebp  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:0339  add eax, dword ptr [0x9b]  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x9bu)), false));
    // 6603:033e  mov dword ptr es:[si + 8], eax  [x127893]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 6603:0343  add eax, 0x1d4c0  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x1d4c0u, false));
    // 6603:0349  mov dword ptr [0x76], eax  [x127893]
    c.w32(c.dsb + (uint16_t)(0x76u), c.a.e);
    // 6603:034d  imul ebp, ebx, 0xffff2480  [x127893]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66380))));
    // 6603:0354  imul eax, ecx, 0x8380  [x127893]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66387))));
    // 6603:035b  add ebp, eax  [x127893]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6603:035e  imul eax, edi, 0xfffffb80  [x127893]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66391))));
    // 6603:0365  add eax, ebp  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:0368  add eax, dword ptr [0x93]  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x93u)), false));
    // 6603:036d  cdq   [x127893]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:036f  idiv dword ptr [0x76]  [x127893]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x36fu); }   // #DE: int 0, then again
    // 6603:0374  add eax, 0x9f  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 6603:037a  mov dword ptr es:[si], eax  [x127893]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 6603:037e  imul ebp, ebx, 0x57aa  [x127893]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x663b1))));
    // 6603:0385  imul eax, ecx, 0x9255  [x127893]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x663b8))));
    // 6603:038c  add ebp, eax  [x127893]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6603:038f  imul eax, edi, 0  [x127893]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x663c2))));
    // 6603:0396  add eax, ebp  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:0399  add eax, dword ptr [0x97]  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x97u)), false));
    // 6603:039e  cdq   [x127893]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:03a0  idiv dword ptr [0x76]  [x127893]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x3a0u); }   // #DE: int 0, then again
    // 6603:03a5  add eax, 0x50  [x127893]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x50u, false));
    // 6603:03a9  mov dword ptr es:[si + 4], eax  [x127893]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 6603:03ae  add si, 0x10  [x127893]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 6603:03b1  cmp si, word ptr [0x36]  [x127893]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x36u)), true);
    // 6603:03b5  jb 0x310  [x127893]
    if (c.cf) goto L66340;
L663e9:
    if (c.tracing) c.traceAt(0x663e9);
    // 6603:03b9  jmp 0x3bb  [x801]
    goto L663eb;
L663eb:
    if (c.tracing) c.traceAt(0x663eb);
    // 6603:03bb  retf   [x801]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66404:
    if (c.tracing) c.traceAt(0x66404);
    // 6603:03d4  xor edx, edx  [x74702]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:03d7  mov dx, word ptr [0x7a]  [x74702]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 6603:03db  mov eax, dword ptr fs:[edx + 4]  [x74702]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:03e1  imul eax, eax, 0x50  [x74702]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 6603:03e5  mov dword ptr [0x20], eax  [x74702]
    c.w32(c.dsb + (uint16_t)(0x20u), c.a.e);
    // 6603:03e9  xor edi, edi  [x74702]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L6641c:
    if (c.tracing) c.traceAt(0x6641c);
    // 6603:03ec  xor edx, edx  [x76591]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:03ef  mov dx, word ptr [0x7c]  [x76591]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 6603:03f3  mov esi, dword ptr fs:[edx]  [x76591]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:03f8  mov edi, dword ptr fs:[edx + 4]  [x76591]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:03fe  sub dx, 8  [x76591]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 6603:0401  mov word ptr [0x7c], dx  [x76591]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 6603:0405  cmp dx, word ptr [0x7e]  [x76591]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 6603:0409  jge 0x413  [x76591]
    if ((c.sf == c.of)) goto L66443;
L6643b:
    if (c.tracing) c.traceAt(0x6643b);
    // 6603:040b  mov dx, word ptr [0x80]  [x26440]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 6603:040f  mov word ptr [0x7c], dx  [x26440]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L66443:
    if (c.tracing) c.traceAt(0x66443);
    // 6603:0413  mov eax, dword ptr fs:[edx]  [x76591]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:0418  mov ebx, dword ptr fs:[edx + 4]  [x76591]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:041e  mov edx, ebx  [x76591]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6603:0421  sub edx, edi  [x76591]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6603:0424  je 0x3ec  [x76591]
    if (c.zf) goto L6641c;
L66456:
    if (c.tracing) c.traceAt(0x66456);
    // 6603:0426  mov dword ptr [0x18], edx  [x74702]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 6603:042b  mov ecx, ebx  [x74702]
    c.c.e = (uint32_t)(c.b.e);
    // 6603:042e  sub ecx, edi  [x74702]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6603:0431  sub eax, esi  [x74702]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0434  shl eax, 0x10  [x74702]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6603:0438  cdq   [x74702]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:043a  idiv ecx  [x74702]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x43au); }   // #DE: int 0, then again
    // 6603:043d  mov dword ptr cs:[0x58b], eax  [x74702]
    c.w32(c.csb + (uint16_t)(0x58bu), c.a.e);
    // 6603:0442  shl esi, 0x10  [x74702]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6603:0446  mov dword ptr [0x10], esi  [x74702]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L6647b:
    if (c.tracing) c.traceAt(0x6647b);
    // 6603:044b  xor edx, edx  [x77631]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:044e  mov dx, word ptr [0x7a]  [x77631]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 6603:0452  mov esi, dword ptr fs:[edx]  [x77631]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:0457  mov edi, dword ptr fs:[edx + 4]  [x77631]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:045d  add dx, 8  [x77631]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 6603:0460  mov word ptr [0x7a], dx  [x77631]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 6603:0464  cmp dx, word ptr [0x80]  [x77631]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 6603:0468  jle 0x472  [x77631]
    if ((c.zf || c.sf != c.of)) goto L664a2;
L6649a:
    if (c.tracing) c.traceAt(0x6649a);
    // 6603:046a  mov dx, word ptr [0x7e]  [x32820]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 6603:046e  mov word ptr [0x7a], dx  [x32820]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L664a2:
    if (c.tracing) c.traceAt(0x664a2);
    // 6603:0472  mov eax, dword ptr fs:[edx]  [x77631]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:0477  mov ebx, dword ptr fs:[edx + 4]  [x77631]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:047d  mov edx, ebx  [x77631]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6603:0480  sub edx, edi  [x77631]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6603:0483  je 0x44b  [x77631]
    if (c.zf) goto L6647b;
L664b5:
    if (c.tracing) c.traceAt(0x664b5);
    // 6603:0485  mov dword ptr [0x1c], edx  [x74702]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 6603:048a  mov ecx, ebx  [x74702]
    c.c.e = (uint32_t)(c.b.e);
    // 6603:048d  sub ecx, edi  [x74702]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6603:0490  sub eax, esi  [x74702]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0493  shl eax, 0x10  [x74702]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6603:0497  cdq   [x74702]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:0499  idiv ecx  [x74702]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x499u); }   // #DE: int 0, then again
    // 6603:049c  mov dword ptr cs:[0x594], eax  [x74702]
    c.w32(c.csb + (uint16_t)(0x594u), c.a.e);
    // 6603:04a1  shl esi, 0x10  [x74702]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6603:04a5  mov dword ptr [0x14], esi  [x74702]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L664da:
    if (c.tracing) c.traceAt(0x664da);
    // 6603:04aa  cmp dword ptr [0x20], 0  [x903967]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x0u, true);
    // 6603:04b0  jl 0x580  [x903967]
    if ((c.sf != c.of)) goto L665b0;
L664e4:
    if (c.tracing) c.traceAt(0x664e4);
    // 6603:04b4  mov eax, dword ptr [0x10]  [x836159]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 6603:04b8  mov edx, dword ptr [0x14]  [x836159]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 6603:04bd  sar edx, 0x10  [x836159]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 6603:04c1  sar eax, 0x10  [x836159]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6603:04c5  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x836159]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 6603:04ce  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x836159]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 6603:04d7  mov di, word ptr gs:[eax*8 + 0x3e80]  [x836159]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 6603:04e0  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x836159]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 6603:04e9  sub cx, di  [x836159]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 6603:04eb  je 0x537  [x836159]
    if (c.zf) goto L66567;
L6651d:
    if (c.tracing) c.traceAt(0x6651d);
    // 6603:04ed  js 0x685  [x507694]
    if (c.sf) goto L666b5;
L66521:
    if (c.tracing) c.traceAt(0x66521);
    // 6603:04f1  add edi, dword ptr [0x20]  [x507579]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), true));
    // 6603:04f6  mov dx, 0x3c4  [x507579]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6603:04f9  mov al, 2  [x507579]
    c.a.l = (uint8_t)(0x2u);
    // 6603:04fb  mov ah, bh  [x507579]
    c.a.h = (uint8_t)(c.b.h);
    // 6603:04fd  out dx, ax  [x507579]
    c.ip = 0x4feu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:04fe  mov bh, byte ptr [4]  [x507579]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 6603:0502  mov byte ptr es:[di], bh  [x507579]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 6603:0505  inc di  [x507579]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 6603:0506  dec cx  [x507579]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 6603:0507  je 0x52d  [x507579]
    if (c.zf) goto L6655d;
L66539:
    if (c.tracing) c.traceAt(0x66539);
    // 6603:0509  mov ax, 0xf02  [x303890]
    c.a.x = (uint16_t)(0xf02u);
    // 6603:050c  out dx, ax  [x303890]
    c.ip = 0x50du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:050d  mov al, bh  [x303890]
    c.a.l = (uint8_t)(c.b.h);
    // 6603:050f  mov ah, bh  [x303890]
    c.a.h = (uint8_t)(c.b.h);
    // 6603:0511  cmp cx, 2  [x303890]
    c.sub<16>(c.c.x, 0x2u, true);
    // 6603:0514  jb 0x520  [x303890]
    if (c.cf) goto L66550;
L66546:
    if (c.tracing) c.traceAt(0x66546);
    // 6603:0516  test di, 1  [x170854]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 6603:051a  jne 0x520  [x170854]
    if (!c.zf) goto L66550;
L6654c:
    if (c.tracing) c.traceAt(0x6654c);
    // 6603:051c  stosb byte ptr es:[di], al  [x81995]
    c.stos<8, false>(0);
    // 6603:051d  dec cx  [x81995]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 6603:051e  je 0x580  [x81995]
    if (c.zf) goto L665b0;
L66550:
    if (c.tracing) c.traceAt(0x66550);
    // 6603:0520  mov si, cx  [x303890]
    c.si.x = (uint16_t)(c.c.x);
    // 6603:0522  shr cx, 1  [x303890]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L66554:
    if (c.tracing) c.traceAt(0x66554);
    // 6603:0524  rep stosw word ptr es:[di], ax  [x477059]
    c.stos<16, false>(1);
L66556:
    if (c.tracing) c.traceAt(0x66556);
    // 6603:0526  mov cx, si  [x303890]
    c.c.x = (uint16_t)(c.si.x);
    // 6603:0528  and cx, 1  [x303890]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L6655b:
    if (c.tracing) c.traceAt(0x6655b);
    // 6603:052b  rep stosb byte ptr es:[di], al  [x520789]
    c.stos<8, false>(1);
L6655d:
    if (c.tracing) c.traceAt(0x6655d);
    // 6603:052d  mov ah, bl  [x507579]
    c.a.h = (uint8_t)(c.b.l);
    // 6603:052f  mov al, 2  [x507579]
    c.a.l = (uint8_t)(0x2u);
    // 6603:0531  out dx, ax  [x507579]
    c.ip = 0x532u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:0532  mov byte ptr es:[di], bh  [x507579]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 6603:0535  jmp 0x580  [x507579]
    goto L665b0;
L66567:
    if (c.tracing) c.traceAt(0x66567);
    // 6603:0537  mov si, 0x8000  [x328465]
    c.si.x = (uint16_t)(0x8000u);
    // 6603:053a  mov cx, ax  [x328465]
    c.c.x = (uint16_t)(c.a.x);
    // 6603:053c  and cx, dx  [x328465]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 6603:053e  js 0x580  [x328465]
    if (c.sf) goto L665b0;
L66570:
    if (c.tracing) c.traceAt(0x66570);
    // 6603:0540  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x180881]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 6603:0549  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x180881]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 6603:0552  mov cx, ax  [x180881]
    c.c.x = (uint16_t)(c.a.x);
    // 6603:0554  and cx, dx  [x180881]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 6603:0556  js 0x580  [x180881]
    if (c.sf) goto L665b0;
L66588:
    if (c.tracing) c.traceAt(0x66588);
    // 6603:0558  add edi, dword ptr [0x20]  [x173975]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), false));
    // 6603:055d  mov bx, 0xf03  [x173975]
    c.b.x = (uint16_t)(0xf03u);
    // 6603:0560  mov cx, ax  [x173975]
    c.c.x = (uint16_t)(c.a.x);
    // 6603:0562  and cl, bl  [x173975]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 6603:0564  mov al, bh  [x173975]
    c.a.l = (uint8_t)(c.b.h);
    // 6603:0566  shl al, cl  [x173975]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 6603:0568  mov cx, dx  [x173975]
    c.c.x = (uint16_t)(c.dx_.x);
    // 6603:056a  not cx  [x173975]
    c.c.x = (uint16_t)(~(c.c.x));
    // 6603:056c  and cl, bl  [x173975]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 6603:056e  mov ah, bh  [x173975]
    c.a.h = (uint8_t)(c.b.h);
    // 6603:0570  shr ah, cl  [x173975]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6603:0572  and ah, al  [x173975]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 6603:0574  mov dx, 0x3c4  [x173975]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6603:0577  mov al, 2  [x173975]
    c.a.l = (uint8_t)(0x2u);
    // 6603:0579  out dx, ax  [x173975]
    c.ip = 0x57au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:057a  mov al, byte ptr [4]  [x173975]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 6603:057d  mov byte ptr es:[di], al  [x173975]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L665b0:
    if (c.tracing) c.traceAt(0x665b0);
    // 6603:0580  add dword ptr [0x20], 0x50  [x903852]
    c.w32(c.dsb + (uint16_t)(0x20u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x50u, false));
    // 6603:0586  add dword ptr [0x10], 0xfffe8e39  [x903852]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x665bb)), false));
    // 6603:058f  add dword ptr [0x14], 0x65555  [x903852]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x665c4)), true));
    // 6603:0598  dec dword ptr [0x18]  [x903852]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 6603:059d  jne 0x609  [x903852]
    if (!c.zf) goto L66639;
L665cf:
    if (c.tracing) c.traceAt(0x665cf);
    // 6603:059f  mov ax, word ptr [0x7a]  [x111585]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 6603:05a2  cmp ax, word ptr [0x7c]  [x111585]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 6603:05a6  je 0x685  [x111585]
    if (c.zf) goto L666b5;
L665da:
    if (c.tracing) c.traceAt(0x665da);
    // 6603:05aa  xor edx, edx  [x46212]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:05ad  mov dx, word ptr [0x7c]  [x46212]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 6603:05b1  mov esi, dword ptr fs:[edx]  [x46212]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:05b6  mov edi, dword ptr fs:[edx + 4]  [x46212]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:05bc  sub dx, 8  [x46212]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 6603:05bf  mov word ptr [0x7c], dx  [x46212]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 6603:05c3  cmp dx, word ptr [0x7e]  [x46212]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 6603:05c7  jge 0x5d1  [x46212]
    if ((c.sf == c.of)) goto L66601;
L665f9:
    if (c.tracing) c.traceAt(0x665f9);
    // 6603:05c9  mov dx, word ptr [0x80]  [x12021]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 6603:05cd  mov word ptr [0x7c], dx  [x12021]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L66601:
    if (c.tracing) c.traceAt(0x66601);
    // 6603:05d1  mov eax, dword ptr fs:[edx]  [x46212]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:05d6  mov ebx, dword ptr fs:[edx + 4]  [x46212]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:05dc  mov edx, ebx  [x46212]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6603:05df  sub edx, edi  [x46212]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6603:05e2  je 0x5aa  [x46212]
    if (c.zf) goto L665da;
L66614:
    if (c.tracing) c.traceAt(0x66614);
    // 6603:05e4  mov dword ptr [0x18], edx  [x41711]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 6603:05e9  mov ecx, ebx  [x41711]
    c.c.e = (uint32_t)(c.b.e);
    // 6603:05ec  sub ecx, edi  [x41711]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6603:05ef  sub eax, esi  [x41711]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:05f2  shl eax, 0x10  [x41711]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6603:05f6  cdq   [x41711]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:05f8  idiv ecx  [x41711]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x5f8u); }   // #DE: int 0, then again
    // 6603:05fb  mov dword ptr cs:[0x58b], eax  [x41711]
    c.w32(c.csb + (uint16_t)(0x58bu), c.a.e);
    // 6603:0600  shl esi, 0x10  [x41711]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6603:0604  mov dword ptr [0x10], esi  [x41711]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L66639:
    if (c.tracing) c.traceAt(0x66639);
    // 6603:0609  dec dword ptr [0x1c]  [x833978]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 6603:060e  jne 0x678  [x833978]
    if (!c.zf) goto L666a8;
L66640:
    if (c.tracing) c.traceAt(0x66640);
    // 6603:0610  mov ax, word ptr [0x7a]  [x41848]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 6603:0613  cmp ax, word ptr [0x7c]  [x41848]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 6603:0617  je 0x685  [x41848]
    if (c.zf) goto L666b5;
L66649:
    if (c.tracing) c.traceAt(0x66649);
    // 6603:0619  xor edx, edx  [x46355]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:061c  mov dx, word ptr [0x7a]  [x46355]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 6603:0620  mov esi, dword ptr fs:[edx]  [x46355]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:0625  mov edi, dword ptr fs:[edx + 4]  [x46355]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:062b  add dx, 8  [x46355]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 6603:062e  mov word ptr [0x7a], dx  [x46355]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 6603:0632  cmp dx, word ptr [0x80]  [x46355]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 6603:0636  jle 0x640  [x46355]
    if ((c.zf || c.sf != c.of)) goto L66670;
L66668:
    if (c.tracing) c.traceAt(0x66668);
    // 6603:0638  mov dx, word ptr [0x7e]  [x7608]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 6603:063c  mov word ptr [0x7a], dx  [x7608]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L66670:
    if (c.tracing) c.traceAt(0x66670);
    // 6603:0640  mov eax, dword ptr fs:[edx]  [x46355]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6603:0645  mov ebx, dword ptr fs:[edx + 4]  [x46355]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6603:064b  mov edx, ebx  [x46355]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6603:064e  sub edx, edi  [x46355]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6603:0651  je 0x619  [x46355]
    if (c.zf) goto L66649;
L66683:
    if (c.tracing) c.traceAt(0x66683);
    // 6603:0653  mov dword ptr [0x1c], edx  [x41848]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 6603:0658  mov ecx, ebx  [x41848]
    c.c.e = (uint32_t)(c.b.e);
    // 6603:065b  sub ecx, edi  [x41848]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6603:065e  sub eax, esi  [x41848]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0661  shl eax, 0x10  [x41848]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6603:0665  cdq   [x41848]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:0667  idiv ecx  [x41848]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x667u); }   // #DE: int 0, then again
    // 6603:066a  mov dword ptr cs:[0x594], eax  [x41848]
    c.w32(c.csb + (uint16_t)(0x594u), c.a.e);
    // 6603:066f  shl esi, 0x10  [x41848]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6603:0673  mov dword ptr [0x14], esi  [x41848]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L666a8:
    if (c.tracing) c.traceAt(0x666a8);
    // 6603:0678  cmp dword ptr [0x20], 0x6e0  [x833978]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), (c.r32(0x666ad)), true);
    // 6603:0681  jl 0x4aa  [x833978]
    if ((c.sf != c.of)) goto L664da;
L666b5:
    if (c.tracing) c.traceAt(0x666b5);
    // 6603:0685  retf   [x74702]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L666b6:
    if (c.tracing) c.traceAt(0x666b6);
    // 6603:0686  mov ax, word ptr [0x8a]  [x269]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 6603:0689  not ax  [x269]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6603:068b  and ax, 0x600  [x269]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6603:068e  add ax, 0xa000  [x269]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 6603:0691  mov es, ax  [x269]
    c.loadEs(c.a.x);
    // 6603:0693  mov dx, 0x3ce  [x269]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 6603:0696  mov al, 5  [x269]
    c.a.l = (uint8_t)(0x5u);
    // 6603:0698  out dx, al  [x269]
    c.ip = 0x699u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0699  inc dx  [x269]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 6603:069a  in al, dx  [x269]
    c.ip = 0x69bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 6603:069b  mov byte ptr [0x35], al  [x269]
    c.w8(c.dsb + (uint16_t)(0x35u), c.a.l);
    // 6603:069e  and al, 0xfc  [x269]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 6603:06a0  or al, 1  [x269]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 6603:06a2  and al, 0xf7  [x269]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xf7u), true));
    // 6603:06a4  out dx, al  [x269]
    c.ip = 0x6a5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:06a5  mov ah, 0xf  [x269]
    c.a.h = (uint8_t)(0xfu);
    // 6603:06a7  mov dx, 0x3c4  [x269]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6603:06aa  mov al, 2  [x269]
    c.a.l = (uint8_t)(0x2u);
    // 6603:06ac  out dx, ax  [x269]
    c.ip = 0x6adu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:06ad  push ds  [x269]
    c.push16(c.ds);
    // 6603:06ae  mov ax, 0xac00  [x269]
    c.a.x = (uint16_t)(0xac00u);
    // 6603:06b1  mov ds, ax  [x269]
    c.loadDs(c.a.x);
    // 6603:06b3  mov di, 0  [x269]
    c.di.x = (uint16_t)(0x0u);
    // 6603:06b6  mov si, di  [x269]
    c.si.x = (uint16_t)(c.di.x);
    // 6603:06b8  cld   [x269]
    c.df = false;
    // 6603:06b9  mov cx, 0x3200  [x269]
    c.c.x = (uint16_t)(0x3200u);
L666ec:
    if (c.tracing) c.traceAt(0x666ec);
    // 6603:06bc  rep movsb byte ptr es:[di], byte ptr [si]  [x3443469]
    c.ip = 0x6beu; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L666ee:
    if (c.tracing) c.traceAt(0x666ee);
    // 6603:06be  pop ds  [x269]
    c.loadDs((uint16_t)c.pop16());
    // 6603:06bf  mov dx, 0x3ce  [x269]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 6603:06c2  mov al, 5  [x269]
    c.a.l = (uint8_t)(0x5u);
    // 6603:06c4  out dx, al  [x269]
    c.ip = 0x6c5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:06c5  inc dx  [x269]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 6603:06c6  mov al, byte ptr [0x35]  [x269]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x35u)));
    // 6603:06c9  out dx, al  [x269]
    c.ip = 0x6cau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:06ca  mov ah, 0xf  [x269]
    c.a.h = (uint8_t)(0xfu);
    // 6603:06cc  mov dx, 0x3c4  [x269]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6603:06cf  mov al, 2  [x269]
    c.a.l = (uint8_t)(0x2u);
    // 6603:06d1  out dx, ax  [x269]
    c.ip = 0x6d2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:06d2  retf   [x269]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66725:
    if (c.tracing) c.traceAt(0x66725);
    // 6603:06f5  mov ax, 0x55db  [x1]
    c.a.x = (uint16_t)(0x55dbu);
    // 6603:06f8  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6603:06fa  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 6603:06fd  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L66730:
    if (c.tracing) c.traceAt(0x66730);
    // 6603:0700  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 6603:0703  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 6603:0704  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 6603:0707  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 6603:0708  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 6603:070b  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 6603:070c  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 6603:070f  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 6603:0710  loop 0x700  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66730;
L66742:
    if (c.tracing) c.traceAt(0x66742);
    // 6603:0712  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 6603:0715  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 6603:0717  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L6674a:
    if (c.tracing) c.traceAt(0x6674a);
    // 6603:071a  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 6603:071c  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 6603:071f  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6603:0720  push cx  [x320]
    c.push16(c.c.x);
    // 6603:0721  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 6603:0723  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 6603:0726  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 6603:0728  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6603:072a  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 6603:072c  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 6603:072e  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 6603:0730  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 6603:0731  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6603:0732  push cx  [x320]
    c.push16(c.c.x);
    // 6603:0733  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 6603:0735  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 6603:0737  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 6603:073a  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 6603:073c  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6603:073e  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 6603:0740  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 6603:0742  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6603:0743  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 6603:0745  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6603:0746  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 6603:0747  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 6603:0749  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 6603:074c  jb 0x750  [x320]
    if (c.cf) goto L66780;
L6677e:
    if (c.tracing) c.traceAt(0x6677e);
    // 6603:074e  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L66780:
    if (c.tracing) c.traceAt(0x66780);
    // 6603:0750  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 6603:0751  loop 0x71a  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6674a;
L66783:
    if (c.tracing) c.traceAt(0x66783);
    // 6603:0753  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L66786:
    if (c.tracing) c.traceAt(0x66786);
    // 6603:0756  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 6603:0759  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 6603:075a  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 6603:075d  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 6603:075e  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 6603:0761  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 6603:0762  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 6603:0765  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 6603:0766  loop 0x756  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66786;
L66798:
    if (c.tracing) c.traceAt(0x66798);
    // 6603:0768  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L667bc:
    if (c.tracing) c.traceAt(0x667bc);
    // 6603:078c  les bx, ptr [0x3a]  [x801]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:0790  mov byte ptr [0x8c], 0  [x801]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x0u);
    // 6603:0795  cmp dword ptr es:[bx + 4], 0  [x801]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)), 0x0u, true);
    // 6603:079b  je 0x7a2  [x801]
    if (c.zf) goto L667d2;
L667cd:
    if (c.tracing) c.traceAt(0x667cd);
    // 6603:079d  mov byte ptr [0x8c], 1  [x801]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x1u);
L667d2:
    if (c.tracing) c.traceAt(0x667d2);
    // 6603:07a2  mov ebx, dword ptr [0]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:07a7  cmp dword ptr es:[bx - 4], 0  [x801]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 6603:07ad  je 0x8da  [x801]
    if (c.zf) goto L6690a;
L667e1:
    if (c.tracing) c.traceAt(0x667e1);
    // 6603:07b1  mov dword ptr [8], 0  [x267]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 6603:07ba  les bx, ptr [0x3a]  [x267]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:07be  mov esi, dword ptr [0]  [x267]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:07c3  mov dword ptr [0x8d], esi  [x267]
    c.w32(c.dsb + (uint16_t)(0x8du), c.si.e);
    // 6603:07c8  mov eax, dword ptr es:[si - 8]  [x267]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 6603:07cd  mov dword ptr [0xc], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
    // 6603:07d1  les bx, ptr [0x3a]  [x267]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:07d5  lfs bp, ptr [0x3e]  [x267]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6603:07da  xor ebx, ebx  [x267]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6603:07dd  xor ebp, ebp  [x267]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 6603:07e0  xor edx, edx  [x267]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L66813:
    if (c.tracing) c.traceAt(0x66813);
    // 6603:07e3  mov ebx, esi  [x28035]
    c.b.e = (uint32_t)(c.si.e);
    // 6603:07e6  mov bx, word ptr es:[ebx]  [x28035]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 6603:07ea  mov ecx, dword ptr es:[ebx]  [x28035]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:07ef  mov edi, ecx  [x28035]
    c.di.e = (uint32_t)(c.c.e);
    // 6603:07f2  add ebx, 0x18  [x28035]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6603:07f6  xor eax, eax  [x28035]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 6603:07f9  mov ebp, dword ptr es:[ebx]  [x28035]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:07fe  add ebp, ebp  [x28035]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0801  add eax, dword ptr fs:[ebp*8 + 0x10]  [x28035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6603:080b  mov ebp, dword ptr es:[ebx + 4]  [x28035]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 6603:0811  add ebp, ebp  [x28035]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0814  add eax, dword ptr fs:[ebp*8 + 0x10]  [x28035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6603:081e  mov ebp, dword ptr es:[ebx + 8]  [x28035]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 6603:0824  add ebp, ebp  [x28035]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0827  add eax, dword ptr fs:[ebp*8 + 0x10]  [x28035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6603:0831  add ebx, 0xc  [x28035]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 6603:0835  sub ecx, 3  [x28035]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 6603:0839  je 0x853  [x28035]
    if (c.zf) goto L66883;
L6686b:
    if (c.tracing) c.traceAt(0x6686b);
    // 6603:083b  mov ebp, dword ptr es:[ebx]  [x23496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:0840  add ebp, ebp  [x23496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0843  add eax, dword ptr fs:[ebp*8 + 0x10]  [x23496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6603:084d  add ebx, 4  [x23496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6603:0851  loop 0x83b  [x23496]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6686b;
L66883:
    if (c.tracing) c.traceAt(0x66883);
    // 6603:0853  cmp edi, 4  [x28035]
    c.sub<32>(c.di.e, 0x4u, true);
    // 6603:0857  jne 0x85f  [x28035]
    if (!c.zf) goto L6688f;
L66889:
    if (c.tracing) c.traceAt(0x66889);
    // 6603:0859  sar eax, 0xa  [x23496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xau) & 31), true));
    // 6603:085d  jmp 0x86b  [x23496]
    goto L6689b;
L6688f:
    if (c.tracing) c.traceAt(0x6688f);
    // 6603:085f  sar eax, 8  [x4539]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 6603:0863  cdq   [x4539]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6603:0865  mov ecx, edi  [x4539]
    c.c.e = (uint32_t)(c.di.e);
    // 6603:0868  idiv ecx  [x4539]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x868u); }   // #DE: int 0, then again
L6689b:
    if (c.tracing) c.traceAt(0x6689b);
    // 6603:086b  add eax, 0x8000  [x28035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 6603:0871  mov word ptr es:[esi + 2], ax  [x28035]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 6603:0876  add esi, 4  [x28035]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 6603:087a  inc dword ptr [8]  [x28035]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 6603:087f  mov eax, dword ptr [0xc]  [x28035]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 6603:0883  cmp dword ptr [8], eax  [x28035]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 6603:0888  jb 0x7e3  [x28035]
    if (c.cf) goto L66813;
L668bc:
    if (c.tracing) c.traceAt(0x668bc);
    // 6603:088c  mov esi, dword ptr [0x8d]  [x267]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x8du)));
    // 6603:0891  mov dword ptr [0], esi  [x267]
    c.w32(c.dsb + (uint16_t)(0u), c.si.e);
    // 6603:0896  mov edi, 4  [x267]
    c.di.e = (uint32_t)(0x4u);
    // 6603:089c  les bx, ptr [0x3a]  [x267]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:08a0  mov ebp, dword ptr [0]  [x267]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:08a5  mov edx, dword ptr es:[ebp - 8]  [x267]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
L668db:
    if (c.tracing) c.traceAt(0x668db);
    // 6603:08ab  mov ebx, ebp  [x524]
    c.b.e = (uint32_t)(c.bp.e);
    // 6603:08ae  mov ecx, edx  [x524]
    c.c.e = (uint32_t)(c.dx_.e);
    // 6603:08b1  xor esi, esi  [x524]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
L668e4:
    if (c.tracing) c.traceAt(0x668e4);
    // 6603:08b4  mov eax, dword ptr es:[ebx]  [x55020]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:08b9  cmp eax, dword ptr es:[ebx + 4]  [x55020]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 6603:08bf  jae 0x8cf  [x55020]
    if (!c.cf) goto L668ff;
L668f1:
    if (c.tracing) c.traceAt(0x668f1);
    // 6603:08c1  xchg dword ptr es:[ebx + 4], eax  [x8391]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 6603:08c7  mov dword ptr es:[ebx], eax  [x8391]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 6603:08cc  not esi  [x8391]
    c.si.e = (uint32_t)(~(c.si.e));
L668ff:
    if (c.tracing) c.traceAt(0x668ff);
    // 6603:08cf  add ebx, edi  [x55020]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, true));
    // 6603:08d2  loop 0x8b4  [x55020]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L668e4;
L66904:
    if (c.tracing) c.traceAt(0x66904);
    // 6603:08d4  cmp esi, 0  [x524]
    c.sub<32>(c.si.e, 0x0u, true);
    // 6603:08d8  jne 0x8ab  [x524]
    if (!c.zf) goto L668db;
L6690a:
    if (c.tracing) c.traceAt(0x6690a);
    // 6603:08da  mov ax, word ptr [0x8a]  [x801]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 6603:08dd  not ax  [x801]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6603:08df  and ax, 0x600  [x801]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6603:08e2  add ax, 0xa000  [x801]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 6603:08e5  mov word ptr [0x91], ax  [x801]
    c.w16(c.dsb + (uint16_t)(0x91u), c.a.x);
    // 6603:08e8  mov dword ptr [8], 0  [x801]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 6603:08f1  les bx, ptr [0x3a]  [x801]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:08f5  mov ebx, dword ptr [0]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:08fa  mov eax, dword ptr es:[bx - 8]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 6603:08ff  mov dword ptr [0xc], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L66933:
    if (c.tracing) c.traceAt(0x66933);
    // 6603:0903  xor ebx, ebx  [x208527]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6603:0906  xor ebp, ebp  [x208527]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 6603:0909  xor edx, edx  [x208527]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6603:090c  les bx, ptr [0x3a]  [x208527]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6603:0910  lfs bp, ptr [0x3e]  [x208527]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6603:0915  mov ax, 0x657b  [x208527]
    c.a.x = (uint16_t)(0x657bu);
    // 6603:0918  mov gs, ax  [x208527]
    c.loadGs(c.a.x);
    // 6603:091a  mov ebx, dword ptr [0]  [x208527]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:091f  mov bx, word ptr es:[bx]  [x208527]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6603:0922  mov ecx, dword ptr es:[ebx + 0x14]  [x208527]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 6603:0928  mov dword ptr [4], ecx  [x208527]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 6603:092d  mov ecx, dword ptr es:[ebx]  [x208527]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:0932  mov dword ptr gs:[edx], ecx  [x208527]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 6603:0937  add ebx, 0x18  [x208527]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6603:093b  mov ebp, dword ptr es:[ebx]  [x208527]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:0940  add ebp, ebp  [x208527]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0943  mov ecx, ebp  [x208527]
    c.c.e = (uint32_t)(c.bp.e);
    // 6603:0946  mov ebp, dword ptr es:[ebx + 4]  [x208527]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 6603:094c  add ebp, ebp  [x208527]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:094f  mov edi, dword ptr fs:[ebp*8 + 8]  [x208527]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6603:0959  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x208527]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6603:0963  mov ebp, dword ptr es:[ebx + 8]  [x208527]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 6603:0969  add ebp, ebp  [x208527]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:096c  mov edx, dword ptr fs:[ebp*8 + 8]  [x208527]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6603:0976  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x208527]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6603:0980  mov ebx, ecx  [x208527]
    c.b.e = (uint32_t)(c.c.e);
    // 6603:0983  mov eax, ebp  [x208527]
    c.a.e = (uint32_t)(c.bp.e);
    // 6603:0986  sub eax, esi  [x208527]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 6603:0989  mov dword ptr cs:[0x9a0], eax  [x208527]
    c.w32(c.csb + (uint16_t)(0x9a0u), c.a.e);
    // 6603:098e  jmp 0x990  [x208527]
    goto L669c0;
L669c0:
    if (c.tracing) c.traceAt(0x669c0);
    // 6603:0990  mov eax, edi  [x208527]
    c.a.e = (uint32_t)(c.di.e);
    // 6603:0993  sub eax, dword ptr fs:[ebx*8 + 8]  [x208527]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 6603:099d  imul eax, eax, 6  [x208527]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x669d0))));
    // 6603:09a4  mov ecx, esi  [x208527]
    c.c.e = (uint32_t)(c.si.e);
    // 6603:09a7  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x208527]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 6603:09b1  mov dword ptr cs:[0x9c2], ecx  [x208527]
    c.w32(c.csb + (uint16_t)(0x9c2u), c.c.e);
    // 6603:09b7  jmp 0x9b9  [x208527]
    goto L669e9;
L669e9:
    if (c.tracing) c.traceAt(0x669e9);
    // 6603:09b9  mov ecx, edx  [x208527]
    c.c.e = (uint32_t)(c.dx_.e);
    // 6603:09bc  sub ecx, edi  [x208527]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6603:09bf  imul ecx, ecx, 3  [x208527]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x669f2))));
    // 6603:09c6  cmp eax, ecx  [x208527]
    c.sub<32>(c.a.e, c.c.e, true);
    // 6603:09c9  jl 0xba0  [x208527]
    if ((c.sf != c.of)) goto L66bd0;
L669fd:
    if (c.tracing) c.traceAt(0x669fd);
    // 6603:09cd  je 0xba0  [x99924]
    if (c.zf) goto L66bd0;
L66a01:
    if (c.tracing) c.traceAt(0x66a01);
    // 6603:09d1  mov ebx, dword ptr [0]  [x96777]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:09d6  mov bx, word ptr es:[bx]  [x96777]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6603:09d9  mov ecx, dword ptr es:[ebx]  [x96777]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:09de  mov dword ptr gs:[0], ecx  [x96777]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 6603:09e4  add ebx, 0x18  [x96777]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6603:09e8  mov dword ptr gs:[0xc], edi  [x96777]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 6603:09ee  mov dword ptr gs:[0x10], esi  [x96777]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 6603:09f4  mov dword ptr gs:[0x14], edx  [x96777]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 6603:09fa  mov dword ptr gs:[0x18], ebp  [x96777]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 6603:0a00  mov ebp, dword ptr es:[ebx]  [x96777]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:0a05  add ebp, ebp  [x96777]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0a08  mov eax, dword ptr fs:[ebp*8 + 8]  [x96777]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6603:0a12  mov dword ptr gs:[4], eax  [x96777]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 6603:0a17  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x96777]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6603:0a21  mov dword ptr gs:[8], eax  [x96777]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 6603:0a26  mov edx, 0x1c  [x96777]
    c.dx_.e = (uint32_t)(0x1cu);
    // 6603:0a2c  add ebx, 0xc  [x96777]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 6603:0a30  sub ecx, 3  [x96777]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 6603:0a34  je 0xa67  [x96777]
    if (c.zf) goto L66a97;
L66a66:
    if (c.tracing) c.traceAt(0x66a66);
    // 6603:0a36  mov ebp, dword ptr es:[ebx]  [x10668]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6603:0a3b  add ebp, ebp  [x10668]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0a3e  mov eax, dword ptr fs:[ebp*8 + 8]  [x10668]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6603:0a48  mov dword ptr gs:[edx], eax  [x10668]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 6603:0a4d  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x10668]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6603:0a57  mov dword ptr gs:[edx + 4], eax  [x10668]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 6603:0a5d  add edx, 8  [x10668]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6603:0a61  add ebx, 4  [x10668]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6603:0a65  loop 0xa36  [x10668]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66a66;
L66a97:
    if (c.tracing) c.traceAt(0x66a97);
    // 6603:0a67  xor edi, edi  [x96777]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 6603:0a6a  mov ecx, dword ptr gs:[edi]  [x96777]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6603:0a6f  lea eax, [edi + 4]  [x96777]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 6603:0a74  mov word ptr [0x7e], ax  [x96777]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.a.x);
    // 6603:0a77  lea ebx, [ecx - 1]  [x96777]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 6603:0a7c  lea eax, [eax + ebx*8]  [x96777]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 6603:0a81  mov word ptr [0x80], ax  [x96777]
    c.w16(c.dsb + (uint16_t)(0x80u), c.a.x);
    // 6603:0a84  dec ecx  [x96777]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 6603:0a86  add edi, 8  [x96777]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 6603:0a8a  mov eax, dword ptr gs:[edi]  [x96777]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6603:0a8f  mov ebx, edi  [x96777]
    c.b.e = (uint32_t)(c.di.e);
    // 6603:0a92  mov ebp, eax  [x96777]
    c.bp.e = (uint32_t)(c.a.e);
L66ac5:
    if (c.tracing) c.traceAt(0x66ac5);
    // 6603:0a95  add edi, 8  [x204222]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 6603:0a99  mov edx, dword ptr gs:[edi]  [x204222]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6603:0a9e  cmp ebp, edx  [x204222]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 6603:0aa1  jle 0xaa9  [x204222]
    if ((c.zf || c.sf != c.of)) goto L66ad9;
L66ad3:
    if (c.tracing) c.traceAt(0x66ad3);
    // 6603:0aa3  mov ebp, edx  [x86822]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 6603:0aa6  mov ebx, edi  [x86822]
    c.b.e = (uint32_t)(c.di.e);
L66ad9:
    if (c.tracing) c.traceAt(0x66ad9);
    // 6603:0aa9  cmp eax, edx  [x204222]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 6603:0aac  jge 0xab1  [x204222]
    if ((c.sf == c.of)) goto L66ae1;
L66ade:
    if (c.tracing) c.traceAt(0x66ade);
    // 6603:0aae  mov eax, edx  [x84443]
    c.a.e = (uint32_t)(c.dx_.e);
L66ae1:
    if (c.tracing) c.traceAt(0x66ae1);
    // 6603:0ab1  loop 0xa95  [x204222]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66ac5;
L66ae3:
    if (c.tracing) c.traceAt(0x66ae3);
    // 6603:0ab3  mov ecx, ebp  [x96777]
    c.c.e = (uint32_t)(c.bp.e);
    // 6603:0ab6  sub ebx, 4  [x96777]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 6603:0aba  cmp ecx, 0xa0  [x96777]
    c.sub<32>(c.c.e, 0xa0u, true);
    // 6603:0ac1  jg 0xba0  [x96777]
    if ((!c.zf && c.sf == c.of)) goto L66bd0;
L66af5:
    if (c.tracing) c.traceAt(0x66af5);
    // 6603:0ac5  cmp eax, ecx  [x95648]
    c.sub<32>(c.a.e, c.c.e, true);
    // 6603:0ac8  je 0xba0  [x95648]
    if (c.zf) goto L66bd0;
L66afc:
    if (c.tracing) c.traceAt(0x66afc);
    // 6603:0acc  cmp ax, 0  [x95648]
    c.sub<16>(c.a.x, 0x0u, true);
    // 6603:0acf  jl 0xba0  [x95648]
    if ((c.sf != c.of)) goto L66bd0;
L66b03:
    if (c.tracing) c.traceAt(0x66b03);
    // 6603:0ad3  imul eax, eax, 0x50  [x74702]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 6603:0ad7  cmp eax, 0x3200  [x74702]
    c.sub<32>(c.a.e, 0x3200u, true);
    // 6603:0add  jle 0xae5  [x74702]
    if ((c.zf || c.sf != c.of)) goto L66b15;
L66b0f:
    if (c.tracing) c.traceAt(0x66b0f);
    // 6603:0adf  mov eax, 0x3200  [x278]
    c.a.e = (uint32_t)(0x3200u);
L66b15:
    if (c.tracing) c.traceAt(0x66b15);
    // 6603:0ae5  mov word ptr cs:[0x67d], ax  [x74702]
    c.w16(c.csb + (uint16_t)(0x67du), c.a.x);
    // 6603:0ae9  mov word ptr [0x7a], bx  [x74702]
    c.w16(c.dsb + (uint16_t)(0x7au), c.b.x);
    // 6603:0aed  mov word ptr [0x7c], bx  [x74702]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.b.x);
    // 6603:0af1  cmp byte ptr [0x8c], 1  [x74702]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x8cu)), 0x1u, true);
    // 6603:0af6  jne 0xb84  [x74702]
    if (!c.zf) { t = 0x66bb4u; goto dispatch; }
L66b2a:
    if (c.tracing) c.traceAt(0x66b2a);
    // 6603:0afa  mov ebx, dword ptr [0]  [x74702]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6603:0aff  mov bx, word ptr es:[bx]  [x74702]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6603:0b02  mov edi, dword ptr es:[ebx + 0xc]  [x74702]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0xcu)));
    // 6603:0b08  mov ecx, dword ptr es:[ebx + 8]  [x74702]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 6603:0b0e  mov ebx, dword ptr es:[ebx + 4]  [x74702]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 6603:0b14  imul eax, ebx, 0xb7  [x74702]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66b47))));
    // 6603:0b1b  imul ebp, ecx, 0xfffffe67  [x74702]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66b4e))));
    // 6603:0b22  add eax, ebp  [x74702]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:0b25  imul ebp, edi, 0xf8  [x74702]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66b58))));
    // 6603:0b2c  add eax, ebp  [x74702]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6603:0b2f  neg eax  [x74702]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, false));
    // 6603:0b32  cmp dword ptr [4], 0x80  [x74702]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x4u)), 0x80u, true);
    // 6603:0b3b  je 0xb62  [x74702]
    if (c.zf) goto L66b92;
L66b6d:
    if (c.tracing) c.traceAt(0x66b6d);
    // 6603:0b3d  sar eax, 0xb  [x23791]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xbu) & 31), false));
    // 6603:0b41  cmp eax, 7  [x23791]
    c.sub<32>(c.a.e, 0x7u, true);
    // 6603:0b45  jle 0xb49  [x23791]
    if ((c.zf || c.sf != c.of)) goto L66b79;
L66b77:
    if (c.tracing) c.traceAt(0x66b77);
    // 6603:0b47  mov al, 7  [x233]
    c.a.l = (uint8_t)(0x7u);
L66b79:
    if (c.tracing) c.traceAt(0x66b79);
    // 6603:0b49  cmp eax, 0  [x23791]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6603:0b4d  jge 0xb51  [x23791]
    if ((c.sf == c.of)) goto L66b81;
L66b7f:
    if (c.tracing) c.traceAt(0x66b7f);
    // 6603:0b4f  mov al, 0  [x5337]
    c.a.l = (uint8_t)(0x0u);
L66b81:
    if (c.tracing) c.traceAt(0x66b81);
    // 6603:0b51  mov bx, word ptr [4]  [x23791]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 6603:0b55  shl bl, 3  [x23791]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x3u) & 31), false));
    // 6603:0b58  add al, bl  [x23791]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, true));
    // 6603:0b5a  mov ah, al  [x23791]
    c.a.h = (uint8_t)(c.a.l);
    // 6603:0b5c  mov dword ptr [4], eax  [x23791]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 6603:0b60  jmp 0xb8d  [x23791]
    goto L66bbd;
L66b92:
    if (c.tracing) c.traceAt(0x66b92);
    // 6603:0b62  sar eax, 7  [x50911]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x7u) & 31), false));
    // 6603:0b66  cmp eax, 0x7f  [x50911]
    c.sub<32>(c.a.e, 0x7fu, true);
    // 6603:0b6a  jle 0xb6e  [x50911]
    if ((c.zf || c.sf != c.of)) goto L66b9e;
L66b9c:
    if (c.tracing) c.traceAt(0x66b9c);
    // 6603:0b6c  mov al, 0x7f  [x462]
    c.a.l = (uint8_t)(0x7fu);
L66b9e:
    if (c.tracing) c.traceAt(0x66b9e);
    // 6603:0b6e  cmp eax, 0  [x50911]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6603:0b72  jge 0xb76  [x50911]
    if ((c.sf == c.of)) goto L66ba6;
L66ba4:
    if (c.tracing) c.traceAt(0x66ba4);
    // 6603:0b74  mov al, 0  [x8149]
    c.a.l = (uint8_t)(0x0u);
L66ba6:
    if (c.tracing) c.traceAt(0x66ba6);
    // 6603:0b76  mov bx, word ptr [4]  [x50911]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 6603:0b7a  add al, 0x7f  [x50911]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x7fu, true));
    // 6603:0b7c  mov ah, al  [x50911]
    c.a.h = (uint8_t)(c.a.l);
    // 6603:0b7e  mov dword ptr [4], eax  [x50911]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 6603:0b82  jmp 0xb8d  [x50911]
    goto L66bbd;
L66bbd:
    if (c.tracing) c.traceAt(0x66bbd);
    // 6603:0b8d  mov ax, 0x657b  [x74702]
    c.a.x = (uint16_t)(0x657bu);
    // 6603:0b90  mov fs, ax  [x74702]
    c.loadFs(c.a.x);
    // 6603:0b92  mov cx, 0x55db  [x74702]
    c.c.x = (uint16_t)(0x55dbu);
    // 6603:0b95  mov gs, cx  [x74702]
    c.loadGs(c.c.x);
    // 6603:0b97  mov ax, word ptr [0x91]  [x74702]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x91u)));
    // 6603:0b9a  mov es, ax  [x74702]
    c.loadEs(c.a.x);
    // 6603:0b9c  push cs  [x74702]
    c.push16(c.cs);
    // 6603:0b9d  call 0x3d4  [x74702]
    c.push16(0xba0u); code_12(c, 0x66404u); if (c.ip != 0xba0u) c.badReturn(0x66bcd);
L66bd0:
    if (c.tracing) c.traceAt(0x66bd0);
    // 6603:0ba0  add dword ptr [0], 4  [x208527]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 6603:0ba6  inc dword ptr [8]  [x208527]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 6603:0bab  mov eax, dword ptr [0xc]  [x208527]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 6603:0baf  cmp dword ptr [8], eax  [x208527]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 6603:0bb4  jne 0x903  [x208527]
    if (!c.zf) goto L66933;
L66be8:
    if (c.tracing) c.traceAt(0x66be8);
    // 6603:0bb8  retf   [x801]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66be9:
    if (c.tracing) c.traceAt(0x66be9);
    // 6603:0bb9  mov eax, dword ptr [0xc3]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xc3u)));
    // 6603:0bbd  add dword ptr [0x6a], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x6au), c.add<32>(c.r32(c.dsb + (uint16_t)(0x6au)), c.a.e, false));
    // 6603:0bc2  mov eax, dword ptr [0xc7]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xc7u)));
    // 6603:0bc6  add dword ptr [0x6e], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x6eu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x6eu)), c.a.e, false));
    // 6603:0bcb  mov eax, dword ptr [0xcb]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcbu)));
    // 6603:0bcf  add dword ptr [0x72], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x72u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x72u)), c.a.e, false));
    // 6603:0bd4  mov ax, 0x24f1  [x801]
    c.a.x = (uint16_t)(0x24f1u);
    // 6603:0bd7  mov es, ax  [x801]
    c.loadEs(c.a.x);
    // 6603:0bd9  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:0bde  mov edi, dword ptr [0x6e]  [x801]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 6603:0be3  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:0be6  add edi, edi  [x801]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 6603:0be9  mov ebp, ebx  [x801]
    c.bp.e = (uint32_t)(c.b.e);
    // 6603:0bec  add ebx, edi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 6603:0bef  sub ebp, edi  [x801]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 6603:0bf2  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0bfc  add eax, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:0c06  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0c09  mov dword ptr [0x46], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x46u), c.a.e);
    // 6603:0c0d  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0c17  add eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:0c21  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0c24  mov dword ptr [0x4a], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x4au), c.a.e);
    // 6603:0c28  mov ebx, edi  [x801]
    c.b.e = (uint32_t)(c.di.e);
    // 6603:0c2b  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0c35  mov dword ptr [0x4e], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.a.e);
    // 6603:0c39  mov ebp, dword ptr [0x72]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:0c3e  add ebp, ebp  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0c41  mov eax, ebx  [x801]
    c.a.e = (uint32_t)(c.b.e);
    // 6603:0c44  sub ebx, ebp  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 6603:0c47  add ebp, eax  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6603:0c4a  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0c54  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:0c5e  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0c61  mov dword ptr [0x5a], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x5au), c.a.e);
    // 6603:0c65  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0c6f  add eax, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:0c79  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0c7c  mov dword ptr [0x66], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x66u), c.a.e);
    // 6603:0c80  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:0c85  add ebx, dword ptr [0x6e]  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x6eu)), false));
    // 6603:0c8a  sub ebx, dword ptr [0x72]  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:0c8f  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:0c92  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0c9c  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0ca6  mov edx, ecx  [x801]
    c.dx_.e = (uint32_t)(c.c.e);
    // 6603:0ca9  neg edx  [x801]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 6603:0cac  mov edi, eax  [x801]
    c.di.e = (uint32_t)(c.a.e);
    // 6603:0caf  mov esi, dword ptr [0x72]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:0cb4  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:0cb7  add ebx, esi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6603:0cba  add ebx, esi  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6603:0cbd  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0cc7  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0cd1  sub eax, esi  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0cd4  sub ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6603:0cd7  sub edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 6603:0cda  add edi, esi  [x801]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 6603:0cdd  mov esi, dword ptr [0x6e]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 6603:0ce2  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:0ce5  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0ce8  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0ceb  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0cf5  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0cff  add eax, esi  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 6603:0d02  add ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 6603:0d05  add edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6603:0d08  sub edi, esi  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6603:0d0b  mov esi, dword ptr [0x72]  [x801]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 6603:0d10  add esi, esi  [x801]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6603:0d13  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0d16  sub ebx, esi  [x801]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6603:0d19  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0d23  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0d2d  sub eax, esi  [x801]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6603:0d30  sub ecx, ebp  [x801]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6603:0d33  add edx, ebp  [x801]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6603:0d36  sub edi, esi  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6603:0d39  sar eax, 2  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 6603:0d3d  sar ecx, 2  [x801]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 6603:0d41  sar edx, 2  [x801]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 6603:0d45  sar edi, 2  [x801]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 6603:0d49  mov dword ptr [0x52], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x52u), c.a.e);
    // 6603:0d4d  mov dword ptr [0x56], ecx  [x801]
    c.w32(c.dsb + (uint16_t)(0x56u), c.c.e);
    // 6603:0d52  mov dword ptr [0x5e], edx  [x801]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.dx_.e);
    // 6603:0d57  mov dword ptr [0x62], edi  [x801]
    c.w32(c.dsb + (uint16_t)(0x62u), c.di.e);
    // 6603:0d5c  mov ebx, dword ptr [0x6a]  [x801]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 6603:0d61  mov ebp, ebx  [x801]
    c.bp.e = (uint32_t)(c.b.e);
    // 6603:0d64  add ebx, dword ptr [0x72]  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:0d69  sub ebp, dword ptr [0x72]  [x801]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 6603:0d6e  add ebx, ebx  [x801]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6603:0d71  add ebp, ebp  [x801]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6603:0d74  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0d7e  add eax, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:0d88  sar eax, 1  [x801]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6603:0d8b  add dword ptr [0x52], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0x52u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x52u)), c.a.e, false));
    // 6603:0d90  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0d9a  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:0da4  sar ecx, 1  [x801]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 6603:0da7  sub dword ptr [0x56], ecx  [x801]
    c.w32(c.dsb + (uint16_t)(0x56u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x56u)), c.c.e, false));
    // 6603:0dac  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x801]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6603:0db6  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x801]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6603:0dc0  sar edx, 1  [x801]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 6603:0dc3  sub dword ptr [0x5e], edx  [x801]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), c.dx_.e, false));
    // 6603:0dc8  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x801]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6603:0dd2  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x801]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6603:0ddc  sar edi, 1  [x801]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 6603:0ddf  sub dword ptr [0x62], edi  [x801]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x62u)), c.di.e, true));
    // 6603:0de4  mov eax, dword ptr [0x5e]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 6603:0de8  mov dword ptr cs:[0xb17], eax  [x801]
    c.w32(c.csb + (uint16_t)(0xb17u), c.a.e);
    // 6603:0ded  mov eax, dword ptr [0x62]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 6603:0df1  mov dword ptr cs:[0xb1e], eax  [x801]
    c.w32(c.csb + (uint16_t)(0xb1eu), c.a.e);
    // 6603:0df6  mov eax, dword ptr [0x66]  [x801]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 6603:0dfa  mov dword ptr cs:[0xb28], eax  [x801]
    c.w32(c.csb + (uint16_t)(0xb28u), c.a.e);
    // 6603:0dff  retf   [x801]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66e30:
    if (c.tracing) c.traceAt(0x66e30);
    // 6603:0e00  push ds  [x2]
    c.push16(c.ds);
    // 6603:0e01  mov ds, ax  [x2]
    c.loadDs(c.a.x);
    // 6603:0e03  mov dx, 0x3c7  [x2]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 6603:0e06  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 6603:0e08  out dx, al  [x2]
    c.ip = 0xe09u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0e09  cld   [x2]
    c.df = false;
    // 6603:0e0a  mov dx, 0x3c8  [x2]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 6603:0e0d  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 6603:0e0f  out dx, al  [x2]
    c.ip = 0xe10u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0e10  mov cx, 0xff  [x2]
    c.c.x = (uint16_t)(0xffu);
L66e43:
    if (c.tracing) c.traceAt(0x66e43);
    // 6603:0e13  mov dx, 0x3c9  [x510]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 6603:0e16  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xe17u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6603:0e17  out dx, al  [x510]
    c.ip = 0xe18u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0e18  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xe19u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6603:0e19  out dx, al  [x510]
    c.ip = 0xe1au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0e1a  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xe1bu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6603:0e1b  out dx, al  [x510]
    c.ip = 0xe1cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0e1c  loop 0xe13  [x510]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66e43;
L66e4e:
    if (c.tracing) c.traceAt(0x66e4e);
    // 6603:0e1e  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 6603:0e1f  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66e50:
    if (c.tracing) c.traceAt(0x66e50);
    // 6603:0e20  mov ax, word ptr [0x8a]  [x269]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 6603:0e23  not ax  [x269]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6603:0e25  and ax, 0x600  [x269]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6603:0e28  shl ah, 4  [x269]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 6603:0e2b  mov dx, 0x3d4  [x269]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 6603:0e2e  mov al, 0xc  [x269]
    c.a.l = (uint8_t)(0xcu);
    // 6603:0e30  out dx, ax  [x269]
    c.ip = 0xe31u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:0e31  not word ptr [0x8a]  [x269]
    c.w16(c.dsb + (uint16_t)(0x8au), ~(c.r16(c.dsb + (uint16_t)(0x8au))));
    // 6603:0e35  retf   [x269]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66e66:
    if (c.tracing) c.traceAt(0x66e66);
    // 6603:0e36  mov ax, 0x5346  [x801]
    c.a.x = (uint16_t)(0x5346u);
    // 6603:0e39  mov fs, ax  [x801]
    c.loadFs(c.a.x);
    // 6603:0e3b  mov bx, word ptr fs:[0]  [x801]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 6603:0e40  mov cx, word ptr [0xcf]  [x801]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xcfu)));
    // 6603:0e44  shl cx, 2  [x801]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 6603:0e47  add bx, cx  [x801]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 6603:0e49  mov bx, word ptr fs:[bx]  [x801]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 6603:0e4c  mov cx, word ptr fs:[bx]  [x801]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 6603:0e4f  mov dx, word ptr fs:[bx + 2]  [x801]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 6603:0e53  mov word ptr [0x3a], cx  [x801]
    c.w16(c.dsb + (uint16_t)(0x3au), c.c.x);
    // 6603:0e57  mov word ptr [0x3c], dx  [x801]
    c.w16(c.dsb + (uint16_t)(0x3cu), c.dx_.x);
    // 6603:0e5b  mov ax, word ptr fs:[bx + 4]  [x801]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 6603:0e5f  movzx eax, ax  [x801]
    c.a.e = (uint32_t)(c.a.x);
    // 6603:0e63  mov dword ptr [0], eax  [x801]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 6603:0e67  mov di, word ptr [0xdf]  [x801]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xdfu)));
L66e9b:
    if (c.tracing) c.traceAt(0x66e9b);
    // 6603:0e6b  mov eax, dword ptr fs:[bx + 0x16]  [x810]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 6603:0e70  mov edx, dword ptr fs:[bx + 0x1a]  [x810]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 6603:0e75  mov ecx, dword ptr fs:[bx + 0x1e]  [x810]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 6603:0e7a  sar eax, 8  [x810]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 6603:0e7e  sar edx, 8  [x810]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 6603:0e82  sar ecx, 8  [x810]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 6603:0e86  mov dword ptr [0x6a], eax  [x810]
    c.w32(c.dsb + (uint16_t)(0x6au), c.a.e);
    // 6603:0e8a  mov dword ptr [0x6e], edx  [x810]
    c.w32(c.dsb + (uint16_t)(0x6eu), c.dx_.e);
    // 6603:0e8f  mov dword ptr [0x72], ecx  [x810]
    c.w32(c.dsb + (uint16_t)(0x72u), c.c.e);
    // 6603:0e94  mov eax, dword ptr fs:[bx + 0x16]  [x810]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 6603:0e99  mov edx, dword ptr fs:[bx + 0x1a]  [x810]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 6603:0e9e  mov ecx, dword ptr fs:[bx + 0x1e]  [x810]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 6603:0ea3  add eax, dword ptr fs:[bx + 6]  [x810]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 6603:0ea8  add edx, dword ptr fs:[bx + 0xa]  [x810]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 6603:0ead  add ecx, dword ptr fs:[bx + 0xe]  [x810]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 6603:0eb2  mov ebp, 0x3ffff  [x810]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 6603:0eb8  and eax, ebp  [x810]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 6603:0ebb  and edx, ebp  [x810]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 6603:0ebe  and ecx, ebp  [x810]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 6603:0ec1  mov dword ptr fs:[bx + 0x16], eax  [x810]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 6603:0ec6  mov dword ptr fs:[bx + 0x1a], edx  [x810]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 6603:0ecb  mov dword ptr fs:[bx + 0x1e], ecx  [x810]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 6603:0ed0  dec di  [x810]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 6603:0ed1  jne 0xe6b  [x810]
    if (!c.zf) goto L66e9b;
L66f03:
    if (c.tracing) c.traceAt(0x66f03);
    // 6603:0ed3  push cs  [x801]
    c.push16(c.cs);
    // 6603:0ed4  call 0x2eb  [x801]
    c.push16(0xed7u); code_12(c, 0x6631bu); if (c.ip != 0xed7u) c.badReturn(0x66f04);
L66f07:
    if (c.tracing) c.traceAt(0x66f07);
    // 6603:0ed7  push cs  [x801]
    c.push16(c.cs);
    // 6603:0ed8  call 0xbb9  [x801]
    c.push16(0xedbu); code_12(c, 0x66be9u); if (c.ip != 0xedbu) c.badReturn(0x66f08);
L66f0b:
    if (c.tracing) c.traceAt(0x66f0b);
    // 6603:0edb  push cs  [x801]
    c.push16(c.cs);
    // 6603:0edc  call 0x78c  [x801]
    c.push16(0xedfu); code_12(c, 0x667bcu); if (c.ip != 0xedfu) c.badReturn(0x66f0c);
L66f0f:
    if (c.tracing) c.traceAt(0x66f0f);
    // 6603:0edf  retf   [x801]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66f10:
    if (c.tracing) c.traceAt(0x66f10);
    // 6603:0ee0  xor di, di  [x16]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 6603:0ee2  mov ax, 0  [x16]
    c.a.x = (uint16_t)(0x0u);
    // 6603:0ee5  add al, bh  [x16]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.h, true));
    // 6603:0ee7  mov si, ax  [x16]
    c.si.x = (uint16_t)(c.a.x);
    // 6603:0ee9  mov ah, bl  [x16]
    c.a.h = (uint8_t)(c.b.l);
    // 6603:0eeb  mov al, 2  [x16]
    c.a.l = (uint8_t)(0x2u);
    // 6603:0eed  mov dx, 0x3c4  [x16]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6603:0ef0  out dx, ax  [x16]
    c.ip = 0xef1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6603:0ef1  mov cx, 0x3e80  [x16]
    c.c.x = (uint16_t)(0x3e80u);
L66f24:
    if (c.tracing) c.traceAt(0x66f24);
    // 6603:0ef4  mov al, byte ptr fs:[si]  [x256000]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 6603:0ef7  stosb byte ptr es:[di], al  [x256000]
    c.stos<8, false>(0);
    // 6603:0ef8  add si, 4  [x256000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 6603:0efb  loop 0xef4  [x256000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66f24;
L66f2d:
    if (c.tracing) c.traceAt(0x66f2d);
    // 6603:0efd  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 6603:0eff  shl bl, 1  [x16]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 6603:0f01  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 6603:0f04  jb 0xee0  [x16]
    if (c.cf) goto L66f10;
L66f36:
    if (c.tracing) c.traceAt(0x66f36);
    // 6603:0f06  retf   [x4]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66f37:
    if (c.tracing) c.traceAt(0x66f37);
    // 6603:0f07  mov ax, 0x65db  [x1]
    c.a.x = (uint16_t)(0x65dbu);
    // 6603:0f0a  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6603:0f0c  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6603:0f0f  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 6603:0f11  out dx, al  [x1]
    c.ip = 0xf12u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0f12  mov bl, 2  [x1]
    c.b.l = (uint8_t)(0x2u);
    // 6603:0f14  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f15  call 0  [x1]
    c.push16(0xf18u); code_12(c, 0x66030u); if (c.ip != 0xf18u) c.badReturn(0x66f45);
L66f48:
    if (c.tracing) c.traceAt(0x66f48);
    // 6603:0f18  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f19  call 0x686  [x1]
    c.push16(0xf1cu); code_12(c, 0x666b6u); if (c.ip != 0xf1cu) c.badReturn(0x66f49);
L66f4c:
    if (c.tracing) c.traceAt(0x66f4c);
    // 6603:0f1c  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f1d  call 0xe20  [x1]
    c.push16(0xf20u); code_12(c, 0x66e50u); if (c.ip != 0xf20u) c.badReturn(0x66f4d);
L66f50:
    if (c.tracing) c.traceAt(0x66f50);
    // 6603:0f20  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f21  call 0x686  [x1]
    c.push16(0xf24u); code_12(c, 0x666b6u); if (c.ip != 0xf24u) c.badReturn(0x66f51);
L66f54:
    if (c.tracing) c.traceAt(0x66f54);
    // 6603:0f24  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f25  call 0xe20  [x1]
    c.push16(0xf28u); code_12(c, 0x66e50u); if (c.ip != 0xf28u) c.badReturn(0x66f55);
L66f58:
    if (c.tracing) c.traceAt(0x66f58);
    // 6603:0f28  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6603:0f2b  mov al, 0xff  [x1]
    c.a.l = (uint8_t)(0xffu);
    // 6603:0f2d  out dx, al  [x1]
    c.ip = 0xf2eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:0f2e  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f2f  call 0x6f5  [x1]
    c.push16(0xf32u); code_12(c, 0x66725u); if (c.ip != 0xf32u) c.badReturn(0x66f5f);
L66f62:
    if (c.tracing) c.traceAt(0x66f62);
    // 6603:0f32  mov ax, 0x53e7  [x1]
    c.a.x = (uint16_t)(0x53e7u);
    // 6603:0f35  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6603:0f38  mov si, 0x3e  [x1]
    c.si.x = (uint16_t)(0x3eu);
    // 6603:0f3b  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6603:0f3d  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6603:0f40  mov ax, 0x4694  [x1]
    c.a.x = (uint16_t)(0x4694u);
    // 6603:0f43  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6603:0f46  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f47  call 0xe00  [x1]
    c.push16(0xf4au); code_12(c, 0x66e30u); if (c.ip != 0xf4au) c.badReturn(0x66f77);
L66f7a:
    if (c.tracing) c.traceAt(0x66f7a);
    // 6603:0f4a  mov ax, 0x46c4  [x1]
    c.a.x = (uint16_t)(0x46c4u);
    // 6603:0f4d  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 6603:0f4f  mov ax, 0xac00  [x1]
    c.a.x = (uint16_t)(0xac00u);
    // 6603:0f52  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6603:0f54  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 6603:0f56  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 6603:0f58  push cs  [x1]
    c.push16(c.cs);
    // 6603:0f59  call 0xee0  [x1]
    c.push16(0xf5cu); code_12(c, 0x66f10u); if (c.ip != 0xf5cu) c.badReturn(0x66f89);
L66f8c:
    if (c.tracing) c.traceAt(0x66f8c);
    // 6603:0f5c  mov dword ptr [0xd3], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xd3u), 0x0u);
    // 6603:0f65  mov dword ptr [0xd7], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xd7u), 0x0u);
    // 6603:0f6e  mov dword ptr [0xdb], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xdbu), 0x0u);
    // 6603:0f77  mov dword ptr [0xa3], 0xff8ad000  [x1]
    c.w32(c.dsb + (uint16_t)(0xa3u), 0xff8ad000u);
    // 6603:0f80  mov dword ptr [0x9f], 0xff3cb000  [x1]
    c.w32(c.dsb + (uint16_t)(0x9fu), 0xff3cb000u);
    // 6603:0f89  mov dword ptr [0xa7], 0x1d4c  [x1]
    c.w32(c.dsb + (uint16_t)(0xa7u), 0x1d4cu);
    // 6603:0f92  mov dword ptr [0xbb], 0xffb1e000  [x1]
    c.w32(c.dsb + (uint16_t)(0xbbu), 0xffb1e000u);
    // 6603:0f9b  mov dword ptr [0xb7], 0xfedb0800  [x1]
    c.w32(c.dsb + (uint16_t)(0xb7u), 0xfedb0800u);
    // 6603:0fa4  mov dword ptr [0xbf], 0x1d4c  [x1]
    c.w32(c.dsb + (uint16_t)(0xbfu), 0x1d4cu);
    // 6603:0fad  mov dword ptr [0xaf], 0x5f5e10  [x1]
    c.w32(c.dsb + (uint16_t)(0xafu), 0x5f5e10u);
    // 6603:0fb6  mov dword ptr [0xab], 0x8f0d18  [x1]
    c.w32(c.dsb + (uint16_t)(0xabu), 0x8f0d18u);
    // 6603:0fbf  mov dword ptr [0xb3], 0xfffe7960  [x1]
    c.w32(c.dsb + (uint16_t)(0xb3u), 0xfffe7960u);
    // 6603:0fc8  mov word ptr [0xdf], 4  [x1]
    c.w16(c.dsb + (uint16_t)(0xdfu), 0x4u);
L66ffe:
    if (c.tracing) c.traceAt(0x66ffe);
    // 6603:0fce  push cs  [x267]
    c.push16(c.cs);
    // 6603:0fcf  call 0x686  [x267]
    c.push16(0xfd2u); code_12(c, 0x666b6u); if (c.ip != 0xfd2u) c.badReturn(0x66fff);
L67002:
    if (c.tracing) c.traceAt(0x67002);
    // 6603:0fd2  mov dword ptr [0xc3], 0x1e  [x267]
    c.w32(c.dsb + (uint16_t)(0xc3u), 0x1eu);
    // 6603:0fdb  mov dword ptr [0xc7], 0xffffff56  [x267]
    c.w32(c.dsb + (uint16_t)(0xc7u), 0xffffff56u);
    // 6603:0fe4  mov dword ptr [0xcb], 0x3c  [x267]
    c.w32(c.dsb + (uint16_t)(0xcbu), 0x3cu);
    // 6603:0fed  mov eax, dword ptr [0x9f]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 6603:0ff1  mov dword ptr [0x93], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 6603:0ff5  mov eax, dword ptr [0xa3]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa3u)));
    // 6603:0ff9  mov dword ptr [0x97], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 6603:0ffd  mov eax, dword ptr [0xa7]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa7u)));
    // 6603:1001  mov dword ptr [0x9b], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 6603:1005  mov word ptr [0xcf], 0  [x267]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
    // 6603:100b  push cs  [x267]
    c.push16(c.cs);
    // 6603:100c  call 0xe36  [x267]
    c.push16(0x100fu); code_12(c, 0x66e66u); if (c.ip != 0x100fu) c.badReturn(0x6703c);
L6703f:
    if (c.tracing) c.traceAt(0x6703f);
    // 6603:100f  mov dword ptr [0xc3], 0x1e  [x267]
    c.w32(c.dsb + (uint16_t)(0xc3u), 0x1eu);
    // 6603:1018  mov dword ptr [0xc7], 0xffffff56  [x267]
    c.w32(c.dsb + (uint16_t)(0xc7u), 0xffffff56u);
    // 6603:1021  mov dword ptr [0xcb], 0x3c  [x267]
    c.w32(c.dsb + (uint16_t)(0xcbu), 0x3cu);
    // 6603:102a  mov eax, dword ptr [0xb7]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb7u)));
    // 6603:102e  mov dword ptr [0x93], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 6603:1032  mov eax, dword ptr [0xbb]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbbu)));
    // 6603:1036  mov dword ptr [0x97], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 6603:103a  mov eax, dword ptr [0xbf]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbfu)));
    // 6603:103e  mov dword ptr [0x9b], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 6603:1042  mov word ptr [0xcf], 2  [x267]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x2u);
    // 6603:1048  push cs  [x267]
    c.push16(c.cs);
    // 6603:1049  call 0xe36  [x267]
    c.push16(0x104cu); code_12(c, 0x66e66u); if (c.ip != 0x104cu) c.badReturn(0x67079);
L6707c:
    if (c.tracing) c.traceAt(0x6707c);
    // 6603:104c  mov dword ptr [0xc3], 0x100  [x267]
    c.w32(c.dsb + (uint16_t)(0xc3u), 0x100u);
    // 6603:1055  mov dword ptr [0xc7], 0x100  [x267]
    c.w32(c.dsb + (uint16_t)(0xc7u), 0x100u);
    // 6603:105e  mov dword ptr [0xcb], 0x100  [x267]
    c.w32(c.dsb + (uint16_t)(0xcbu), 0x100u);
    // 6603:1067  mov eax, dword ptr [0xab]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xabu)));
    // 6603:106b  mov dword ptr [0x93], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 6603:106f  mov eax, dword ptr [0xaf]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xafu)));
    // 6603:1073  mov dword ptr [0x97], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 6603:1077  mov eax, dword ptr [0xb3]  [x267]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb3u)));
    // 6603:107b  mov dword ptr [0x9b], eax  [x267]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 6603:107f  mov word ptr [0xcf], 1  [x267]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x1u);
    // 6603:1085  push cs  [x267]
    c.push16(c.cs);
    // 6603:1086  call 0xe36  [x267]
    c.push16(0x1089u); code_12(c, 0x66e66u); if (c.ip != 0x1089u) c.badReturn(0x670b6);
L670b9:
    if (c.tracing) c.traceAt(0x670b9);
    // 6603:1089  push cs  [x267]
    c.push16(c.cs);
    // 6603:108a  call 0xe20  [x267]
    c.push16(0x108du); code_12(c, 0x66e50u); if (c.ip != 0x108du) c.badReturn(0x670ba);
L670bd:
    if (c.tracing) c.traceAt(0x670bd);
    // 6603:108d  mov bx, 0xe  [x267]
    c.b.x = (uint16_t)(0xeu);
    // 6603:1090  int 0xff  [x267]
    c.ip = 0x1092u; c.d32 = false; c.intr(0xff, 0x1092u);
L670c2:
    if (c.tracing) c.traceAt(0x670c2);
    // 6603:1092  mov word ptr [0xdf], ax  [x267]
    c.w16(c.dsb + (uint16_t)(0xdfu), c.a.x);
    // 6603:1095  mov cx, word ptr [0xdf]  [x267]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xdfu)));
L670c9:
    if (c.tracing) c.traceAt(0x670c9);
    // 6603:1099  add dword ptr [0xab], 0xb798  [x267]
    c.w32(c.dsb + (uint16_t)(0xabu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xabu)), 0xb798u, false));
    // 6603:10a2  add dword ptr [0xaf], 0xfffedfea  [x267]
    c.w32(c.dsb + (uint16_t)(0xafu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xafu)), 0xfffedfeau, false));
    // 6603:10ab  add dword ptr [0xb3], 0x5dc  [x267]
    c.w32(c.dsb + (uint16_t)(0xb3u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb3u)), 0x5dcu, false));
    // 6603:10b4  add dword ptr [0xb7], 0x6d60  [x267]
    c.w32(c.dsb + (uint16_t)(0xb7u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb7u)), 0x6d60u, false));
    // 6603:10bd  add dword ptr [0xbb], 0xfffff15a  [x267]
    c.w32(c.dsb + (uint16_t)(0xbbu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xbbu)), 0xfffff15au, false));
    // 6603:10c6  add dword ptr [0xbf], 0x32  [x267]
    c.w32(c.dsb + (uint16_t)(0xbfu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xbfu)), 0x32u, true));
    // 6603:10cc  loop 0x1099  [x267]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L670c9;
L670fe:
    if (c.tracing) c.traceAt(0x670fe);
    // 6603:10ce  cmp dword ptr [0xb3], 0x493e0  [x267]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xb3u)), 0x493e0u, true);
    // 6603:10d7  jle 0xfce  [x267]
    if ((c.zf || c.sf != c.of)) goto L66ffe;
L6710b:
    if (c.tracing) c.traceAt(0x6710b);
    // 6603:10db  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6603:10de  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 6603:10e0  out dx, al  [x1]
    c.ip = 0x10e1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:10e1  mov ax, 0x33ec  [x1]
    c.a.x = (uint16_t)(0x33ecu);
    // 6603:10e4  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6603:10e7  push cs  [x1]
    c.push16(c.cs);
    // 6603:10e8  call 0xe00  [x1]
    c.push16(0x10ebu); code_12(c, 0x66e30u); if (c.ip != 0x10ebu) c.badReturn(0x67118);
L6711b:
    if (c.tracing) c.traceAt(0x6711b);
    // 6603:10eb  mov ax, 0x341c  [x1]
    c.a.x = (uint16_t)(0x341cu);
    // 6603:10ee  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 6603:10f0  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 6603:10f3  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6603:10f5  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 6603:10f7  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 6603:10f9  push cs  [x1]
    c.push16(c.cs);
    // 6603:10fa  call 0xee0  [x1]
    c.push16(0x10fdu); code_12(c, 0x66f10u); if (c.ip != 0x10fdu) c.badReturn(0x6712a);
L6712d:
    if (c.tracing) c.traceAt(0x6712d);
    // 6603:10fd  mov ax, 0x341c  [x1]
    c.a.x = (uint16_t)(0x341cu);
    // 6603:1100  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 6603:1102  mov ax, 0xa600  [x1]
    c.a.x = (uint16_t)(0xa600u);
    // 6603:1105  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6603:1107  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 6603:1109  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 6603:110b  push cs  [x1]
    c.push16(c.cs);
    // 6603:110c  call 0xee0  [x1]
    c.push16(0x110fu); code_12(c, 0x66f10u); if (c.ip != 0x110fu) c.badReturn(0x6713c);
L6713f:
    if (c.tracing) c.traceAt(0x6713f);
    // 6603:110f  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6603:1112  mov al, 0xff  [x1]
    c.a.l = (uint8_t)(0xffu);
    // 6603:1114  out dx, al  [x1]
    c.ip = 0x1115u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6603:1115  mov ax, 0x341c  [x1]
    c.a.x = (uint16_t)(0x341cu);
    // 6603:1118  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 6603:111a  mov ax, 0xac00  [x1]
    c.a.x = (uint16_t)(0xac00u);
    // 6603:111d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6603:111f  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 6603:1121  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 6603:1123  push cs  [x1]
    c.push16(c.cs);
    // 6603:1124  call 0xee0  [x1]
    c.push16(0x1127u); code_12(c, 0x66f10u); if (c.ip != 0x1127u) c.badReturn(0x67154);
L67157:
    if (c.tracing) c.traceAt(0x67157);
    // 6603:1127  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 6603:1129  int 0x21  [x1]
    c.ip = 0x112bu; c.d32 = false; c.intr(0x21, 0x112bu);
    c.notTranslated(0x6715b, "fall-through");
}

static Register reg12(12, {0x66030, 0x6604d, 0x6631b, 0x6631f, 0x66340, 0x663e9, 0x663eb, 0x66404, 0x6641c, 0x6643b, 0x66443, 0x66456, 0x6647b, 0x6649a, 0x664a2, 0x664b5, 0x664da, 0x664e4, 0x6651d, 0x66521, 0x66539, 0x66546, 0x6654c, 0x66550, 0x66554, 0x66556, 0x6655b, 0x6655d, 0x66567, 0x66570, 0x66588, 0x665b0, 0x665cf, 0x665da, 0x665f9, 0x66601, 0x66614, 0x66639, 0x66640, 0x66649, 0x66668, 0x66670, 0x66683, 0x666a8, 0x666b5, 0x666b6, 0x666ec, 0x666ee, 0x66725, 0x66730, 0x66742, 0x6674a, 0x6677e, 0x66780, 0x66783, 0x66786, 0x66798, 0x667bc, 0x667cd, 0x667d2, 0x667e1, 0x66813, 0x6686b, 0x66883, 0x66889, 0x6688f, 0x6689b, 0x668bc, 0x668db, 0x668e4, 0x668f1, 0x668ff, 0x66904, 0x6690a, 0x66933, 0x669c0, 0x669e9, 0x669fd, 0x66a01, 0x66a66, 0x66a97, 0x66ac5, 0x66ad3, 0x66ad9, 0x66ade, 0x66ae1, 0x66ae3, 0x66af5, 0x66afc, 0x66b03, 0x66b0f, 0x66b15, 0x66b2a, 0x66b6d, 0x66b77, 0x66b79, 0x66b7f, 0x66b81, 0x66b92, 0x66b9c, 0x66b9e, 0x66ba4, 0x66ba6, 0x66bbd, 0x66bd0, 0x66be8, 0x66be9, 0x66e30, 0x66e43, 0x66e4e, 0x66e50, 0x66e66, 0x66e9b, 0x66f03, 0x66f07, 0x66f0b, 0x66f0f, 0x66f10, 0x66f24, 0x66f2d, 0x66f36, 0x66f37, 0x66f48, 0x66f4c, 0x66f50, 0x66f54, 0x66f58, 0x66f62, 0x66f7a, 0x66f8c, 0x66ffe, 0x67002, 0x6703f, 0x6707c, 0x670b9, 0x670bd, 0x670c2, 0x670c9, 0x670fe, 0x6710b, 0x6711b, 0x6712d, 0x6713f, 0x67157}, code_12);

}  // namespace angel
