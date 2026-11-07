// Program 20, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_20(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x4bd1c: goto L4bd1c;
    case 0x4bfcf: goto L4bfcf;
    case 0x4bfd3: goto L4bfd3;
    case 0x4bff4: goto L4bff4;
    case 0x4c09f: goto L4c09f;
    case 0x4c0a1: goto L4c0a1;
    case 0x4c0b8: goto L4c0b8;
    case 0x4c0d0: goto L4c0d0;
    case 0x4c0ef: goto L4c0ef;
    case 0x4c0f7: goto L4c0f7;
    case 0x4c10a: goto L4c10a;
    case 0x4c12f: goto L4c12f;
    case 0x4c14e: goto L4c14e;
    case 0x4c156: goto L4c156;
    case 0x4c169: goto L4c169;
    case 0x4c18e: goto L4c18e;
    case 0x4c198: goto L4c198;
    case 0x4c1d1: goto L4c1d1;
    case 0x4c1d5: goto L4c1d5;
    case 0x4c1ed: goto L4c1ed;
    case 0x4c1fa: goto L4c1fa;
    case 0x4c200: goto L4c200;
    case 0x4c204: goto L4c204;
    case 0x4c208: goto L4c208;
    case 0x4c20a: goto L4c20a;
    case 0x4c20f: goto L4c20f;
    case 0x4c211: goto L4c211;
    case 0x4c21b: goto L4c21b;
    case 0x4c224: goto L4c224;
    case 0x4c23c: goto L4c23c;
    case 0x4c264: goto L4c264;
    case 0x4c283: goto L4c283;
    case 0x4c28e: goto L4c28e;
    case 0x4c2ad: goto L4c2ad;
    case 0x4c2b5: goto L4c2b5;
    case 0x4c2c8: goto L4c2c8;
    case 0x4c2ed: goto L4c2ed;
    case 0x4c2f4: goto L4c2f4;
    case 0x4c2fd: goto L4c2fd;
    case 0x4c31c: goto L4c31c;
    case 0x4c324: goto L4c324;
    case 0x4c337: goto L4c337;
    case 0x4c35c: goto L4c35c;
    case 0x4c369: goto L4c369;
    case 0x4c36a: goto L4c36a;
    case 0x4c396: goto L4c396;
    case 0x4c3a6: goto L4c3a6;
    case 0x4c3a9: goto L4c3a9;
    case 0x4c3ae: goto L4c3ae;
    case 0x4c3af: goto L4c3af;
    case 0x4c3ba: goto L4c3ba;
    case 0x4c3cc: goto L4c3cc;
    case 0x4c3d4: goto L4c3d4;
    case 0x4c408: goto L4c408;
    case 0x4c40a: goto L4c40a;
    case 0x4c40d: goto L4c40d;
    case 0x4c410: goto L4c410;
    case 0x4c422: goto L4c422;
    case 0x4c424: goto L4c424;
    case 0x4c435: goto L4c435;
    case 0x4c43a: goto L4c43a;
    case 0x4c449: goto L4c449;
    case 0x4c47b: goto L4c47b;
    case 0x4c4d3: goto L4c4d3;
    case 0x4c4eb: goto L4c4eb;
    case 0x4c4f1: goto L4c4f1;
    case 0x4c4f7: goto L4c4f7;
    case 0x4c503: goto L4c503;
    case 0x4c524: goto L4c524;
    case 0x4c543: goto L4c543;
    case 0x4c54c: goto L4c54c;
    case 0x4c559: goto L4c559;
    case 0x4c567: goto L4c567;
    case 0x4c56c: goto L4c56c;
    case 0x4c572: goto L4c572;
    case 0x4c59b: goto L4c59b;
    case 0x4c628: goto L4c628;
    case 0x4c651: goto L4c651;
    case 0x4c665: goto L4c665;
    case 0x4c669: goto L4c669;
    case 0x4c6ce: goto L4c6ce;
    case 0x4c6ff: goto L4c6ff;
    case 0x4c72d: goto L4c72d;
    case 0x4c73b: goto L4c73b;
    case 0x4c741: goto L4c741;
    case 0x4c746: goto L4c746;
    case 0x4c749: goto L4c749;
    case 0x4c74b: goto L4c74b;
    case 0x4c75d: goto L4c75d;
    case 0x4c764: goto L4c764;
    case 0x4c76b: goto L4c76b;
    case 0x4c777: goto L4c777;
    case 0x4c77d: goto L4c77d;
    case 0x4c790: goto L4c790;
    case 0x4c7ca: goto L4c7ca;
    case 0x4c7d4: goto L4c7d4;
    case 0x4c7d6: goto L4c7d6;
    case 0x4c7de: goto L4c7de;
    case 0x4c7f8: goto L4c7f8;
    case 0x4c80b: goto L4c80b;
    case 0x4c823: goto L4c823;
    case 0x4c824: goto L4c824;
    case 0x4c825: goto L4c825;
    case 0x4c838: goto L4c838;
    case 0x4c843: goto L4c843;
    case 0x4c845: goto L4c845;
    case 0x4c85b: goto L4c85b;
    case 0x4c890: goto L4c890;
    case 0x4c8f8: goto L4c8f8;
    case 0x4c8fc: goto L4c8fc;
    case 0x4c900: goto L4c900;
    case 0x4c904: goto L4c904;
    case 0x4c905: goto L4c905;
    case 0x4c912: goto L4c912;
    case 0x4c916: goto L4c916;
    case 0x4c92e: goto L4c92e;
    case 0x4c9a0: goto L4c9a0;
    case 0x4c9a4: goto L4c9a4;
    case 0x4c9c6: goto L4c9c6;
    case 0x4c9e8: goto L4c9e8;
    case 0x4c9ec: goto L4c9ec;
    case 0x4c9f1: goto L4c9f1;
    case 0x4c9f8: goto L4c9f8;
    case 0x4ca24: goto L4ca24;
    case 0x4ca31: goto L4ca31;
    case 0x4ca35: goto L4ca35;
    case 0x4ca57: goto L4ca57;
    case 0x4ca5b: goto L4ca5b;
    case 0x4ca60: goto L4ca60;
    case 0x4ca67: goto L4ca67;
    case 0x4ca93: goto L4ca93;
    case 0x4ca9e: goto L4ca9e;
    default: c.callLinear(t); return;
    }
L4bd1c:
    if (c.tracing) c.traceAt(0x4bd1c);
    // 4bd1:000c  mov ax, 0x24f1  [x1088]
    c.a.x = (uint16_t)(0x24f1u);
    // 4bd1:000f  mov es, ax  [x1088]
    c.loadEs(c.a.x);
    // 4bd1:0011  mov ebx, dword ptr [0x6a]  [x1088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 4bd1:0016  mov edi, dword ptr [0x6e]  [x1088]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 4bd1:001b  add ebx, ebx  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4bd1:001e  add edi, edi  [x1088]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 4bd1:0021  mov ebp, ebx  [x1088]
    c.bp.e = (uint32_t)(c.b.e);
    // 4bd1:0024  add ebx, edi  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 4bd1:0027  sub ebp, edi  [x1088]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 4bd1:002a  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:0034  add eax, dword ptr es:[ebp*2 + 0x3000]  [x1088]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4bd1:003e  sar eax, 1  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4bd1:0041  mov dword ptr [0x46], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x46u), c.a.e);
    // 4bd1:0045  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:004f  add eax, dword ptr es:[ebp*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4bd1:0059  sar eax, 1  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4bd1:005c  mov dword ptr [0x4a], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x4au), c.a.e);
    // 4bd1:0060  mov ebx, edi  [x1088]
    c.b.e = (uint32_t)(c.di.e);
    // 4bd1:0063  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:006d  mov dword ptr [0x4e], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.a.e);
    // 4bd1:0071  mov ebp, dword ptr [0x72]  [x1088]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 4bd1:0076  add ebp, ebp  [x1088]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:0079  mov eax, ebx  [x1088]
    c.a.e = (uint32_t)(c.b.e);
    // 4bd1:007c  sub ebx, ebp  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 4bd1:007f  add ebp, eax  [x1088]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4bd1:0082  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:008c  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4bd1:0096  sar eax, 1  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4bd1:0099  mov dword ptr [0x5a], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x5au), c.a.e);
    // 4bd1:009d  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:00a7  add eax, dword ptr es:[ebp*2 + 0x3000]  [x1088]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4bd1:00b1  sar eax, 1  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4bd1:00b4  mov dword ptr [0x66], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x66u), c.a.e);
    // 4bd1:00b8  mov ebx, dword ptr [0x6a]  [x1088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 4bd1:00bd  add ebx, dword ptr [0x6e]  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x6eu)), false));
    // 4bd1:00c2  sub ebx, dword ptr [0x72]  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 4bd1:00c7  add ebx, ebx  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4bd1:00ca  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:00d4  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:00de  mov edx, ecx  [x1088]
    c.dx_.e = (uint32_t)(c.c.e);
    // 4bd1:00e1  neg edx  [x1088]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 4bd1:00e4  mov edi, eax  [x1088]
    c.di.e = (uint32_t)(c.a.e);
    // 4bd1:00e7  mov esi, dword ptr [0x72]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 4bd1:00ec  add esi, esi  [x1088]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4bd1:00ef  add ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4bd1:00f2  add ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4bd1:00f5  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:00ff  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:0109  sub eax, esi  [x1088]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:010c  sub ecx, ebp  [x1088]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4bd1:010f  sub edx, ebp  [x1088]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 4bd1:0112  add edi, esi  [x1088]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 4bd1:0115  mov esi, dword ptr [0x6e]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 4bd1:011a  add esi, esi  [x1088]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4bd1:011d  sub ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4bd1:0120  sub ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4bd1:0123  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:012d  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:0137  add eax, esi  [x1088]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 4bd1:013a  add ecx, ebp  [x1088]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 4bd1:013d  add edx, ebp  [x1088]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4bd1:0140  sub edi, esi  [x1088]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4bd1:0143  mov esi, dword ptr [0x72]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 4bd1:0148  add esi, esi  [x1088]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4bd1:014b  sub ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4bd1:014e  sub ebx, esi  [x1088]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4bd1:0151  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:015b  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:0165  sub eax, esi  [x1088]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:0168  sub ecx, ebp  [x1088]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4bd1:016b  add edx, ebp  [x1088]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4bd1:016e  sub edi, esi  [x1088]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4bd1:0171  sar eax, 2  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 4bd1:0175  sar ecx, 2  [x1088]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 4bd1:0179  sar edx, 2  [x1088]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 4bd1:017d  sar edi, 2  [x1088]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 4bd1:0181  mov dword ptr [0x52], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x52u), c.a.e);
    // 4bd1:0185  mov dword ptr [0x56], ecx  [x1088]
    c.w32(c.dsb + (uint16_t)(0x56u), c.c.e);
    // 4bd1:018a  mov dword ptr [0x5e], edx  [x1088]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.dx_.e);
    // 4bd1:018f  mov dword ptr [0x62], edi  [x1088]
    c.w32(c.dsb + (uint16_t)(0x62u), c.di.e);
    // 4bd1:0194  mov ebx, dword ptr [0x6a]  [x1088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 4bd1:0199  mov ebp, ebx  [x1088]
    c.bp.e = (uint32_t)(c.b.e);
    // 4bd1:019c  add ebx, dword ptr [0x72]  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 4bd1:01a1  sub ebp, dword ptr [0x72]  [x1088]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 4bd1:01a6  add ebx, ebx  [x1088]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4bd1:01a9  add ebp, ebp  [x1088]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:01ac  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:01b6  add eax, dword ptr es:[ebp*2 + 0x3400]  [x1088]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4bd1:01c0  sar eax, 1  [x1088]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4bd1:01c3  add dword ptr [0x52], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0x52u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x52u)), c.a.e, false));
    // 4bd1:01c8  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:01d2  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x1088]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4bd1:01dc  sar ecx, 1  [x1088]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 4bd1:01df  sub dword ptr [0x56], ecx  [x1088]
    c.w32(c.dsb + (uint16_t)(0x56u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x56u)), c.c.e, false));
    // 4bd1:01e4  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x1088]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4bd1:01ee  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x1088]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4bd1:01f8  sar edx, 1  [x1088]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 4bd1:01fb  sub dword ptr [0x5e], edx  [x1088]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), c.dx_.e, false));
    // 4bd1:0200  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x1088]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4bd1:020a  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x1088]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4bd1:0214  sar edi, 1  [x1088]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 4bd1:0217  sub dword ptr [0x62], edi  [x1088]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x62u)), c.di.e, false));
    // 4bd1:021c  mov eax, dword ptr [0x5e]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 4bd1:0220  mov dword ptr cs:[0xa9d], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0xa9du), c.a.e);
    // 4bd1:0225  mov eax, dword ptr [0x62]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 4bd1:0229  mov dword ptr cs:[0xaa4], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0xaa4u), c.a.e);
    // 4bd1:022e  mov eax, dword ptr [0x66]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 4bd1:0232  mov dword ptr cs:[0xaae], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0xaaeu), c.a.e);
    // 4bd1:0237  sar dword ptr [0x5e], 3  [x1088]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), (int)((0x3u) & 31), false));
    // 4bd1:023d  sar dword ptr [0x62], 3  [x1088]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x62u)), (int)((0x3u) & 31), false));
    // 4bd1:0243  sar dword ptr [0x66], 3  [x1088]
    c.w32(c.dsb + (uint16_t)(0x66u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x66u)), (int)((0x3u) & 31), false));
    // 4bd1:0249  shl dword ptr [0x46], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x46u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x46u)), (int)((0x7u) & 31), false));
    // 4bd1:024f  shl dword ptr [0x4a], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x4au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4au)), (int)((0x7u) & 31), false));
    // 4bd1:0255  shl dword ptr [0x4e], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4eu)), (int)((0x7u) & 31), false));
    // 4bd1:025b  shl dword ptr [0x52], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x52u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x52u)), (int)((0x7u) & 31), false));
    // 4bd1:0261  shl dword ptr [0x56], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x56u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x56u)), (int)((0x7u) & 31), false));
    // 4bd1:0267  shl dword ptr [0x5a], 7  [x1088]
    c.w32(c.dsb + (uint16_t)(0x5au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5au)), (int)((0x7u) & 31), true));
    // 4bd1:026d  mov eax, dword ptr [0x46]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x46u)));
    // 4bd1:0271  mov dword ptr cs:[0x324], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x324u), c.a.e);
    // 4bd1:0276  mov eax, dword ptr [0x4a]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4au)));
    // 4bd1:027a  mov dword ptr cs:[0x32b], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x32bu), c.a.e);
    // 4bd1:027f  mov eax, dword ptr [0x4e]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4eu)));
    // 4bd1:0283  mov dword ptr cs:[0x335], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x335u), c.a.e);
    // 4bd1:0288  mov eax, dword ptr [0x52]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x52u)));
    // 4bd1:028c  mov dword ptr cs:[0x355], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x355u), c.a.e);
    // 4bd1:0291  mov eax, dword ptr [0x56]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x56u)));
    // 4bd1:0295  mov dword ptr cs:[0x35c], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x35cu), c.a.e);
    // 4bd1:029a  mov eax, dword ptr [0x5a]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5au)));
    // 4bd1:029e  mov dword ptr cs:[0x366], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x366u), c.a.e);
    // 4bd1:02a3  mov eax, dword ptr [0x5e]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 4bd1:02a7  mov dword ptr cs:[0x2f5], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x2f5u), c.a.e);
    // 4bd1:02ac  mov eax, dword ptr [0x62]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 4bd1:02b0  mov dword ptr cs:[0x2fc], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x2fcu), c.a.e);
    // 4bd1:02b5  mov eax, dword ptr [0x66]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 4bd1:02b9  mov dword ptr cs:[0x306], eax  [x1088]
    c.w32(c.csb + (uint16_t)(0x306u), c.a.e);
    // 4bd1:02be  retf   [x1088]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4bfcf:
    if (c.tracing) c.traceAt(0x4bfcf);
    // 4bd1:02bf  push cs  [x1088]
    c.push16(c.cs);
    // 4bd1:02c0  call 0xc  [x1088]
    c.push16(0x2c3u); code_20(c, 0x4bd1cu); if (c.ip != 0x2c3u) c.badReturn(0x4bfd0);
L4bfd3:
    if (c.tracing) c.traceAt(0x4bfd3);
    // 4bd1:02c3  lfs si, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 4bd1:02c8  movzx esi, si  [x1088]
    c.si.e = (uint32_t)(c.si.x);
    // 4bd1:02cc  mov eax, dword ptr fs:[esi]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 4bd1:02d1  shl eax, 4  [x1088]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 4bd1:02d5  mov word ptr [0x36], ax  [x1088]
    c.w16(c.dsb + (uint16_t)(0x36u), c.a.x);
    // 4bd1:02d8  add esi, 8  [x1088]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 4bd1:02dc  add word ptr [0x36], si  [x1088]
    c.w16(c.dsb + (uint16_t)(0x36u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x36u)), c.si.x, true));
    // 4bd1:02e0  les di, ptr [0x3e]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L4bff4:
    if (c.tracing) c.traceAt(0x4bff4);
    // 4bd1:02e4  mov ebx, dword ptr fs:[si]  [x264578]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 4bd1:02e8  mov ecx, dword ptr fs:[si + 4]  [x264578]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 4bd1:02ed  mov edi, dword ptr fs:[si + 8]  [x264578]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 4bd1:02f2  imul eax, ebx, 0  [x264578]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x4c005))));
    // 4bd1:02f9  imul ebp, ecx, 0  [x264578]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4c00c))));
    // 4bd1:0300  add eax, ebp  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:0303  imul ebp, edi, 0xffffffc0  [x264578]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x4c016))));
    // 4bd1:030a  add eax, ebp  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:030d  add eax, dword ptr [0x9b]  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x9bu)), false));
    // 4bd1:0312  mov dword ptr es:[si + 8], eax  [x264578]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 4bd1:0317  add eax, 0xea60  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xea60u, false));
    // 4bd1:031d  mov dword ptr [0x76], eax  [x264578]
    c.w32(c.dsb + (uint16_t)(0x76u), c.a.e);
    // 4bd1:0321  imul ebp, ebx, 0xffff0000  [x264578]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x4c034))));
    // 4bd1:0328  imul eax, ecx, 0  [x264578]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4c03b))));
    // 4bd1:032f  add ebp, eax  [x264578]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4bd1:0332  imul eax, edi, 0  [x264578]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x4c045))));
    // 4bd1:0339  add eax, ebp  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:033c  add eax, dword ptr [0x93]  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x93u)), false));
    // 4bd1:0341  cdq   [x264578]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:0343  idiv dword ptr [0x76]  [x264578]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x343u); }   // #DE: int 0, then again
    // 4bd1:0348  add eax, 0x9f  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 4bd1:034e  mov dword ptr es:[si], eax  [x264578]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 4bd1:0352  imul ebp, ebx, 0  [x264578]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x4c065))));
    // 4bd1:0359  imul eax, ecx, 0xffff0000  [x264578]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4c06c))));
    // 4bd1:0360  add ebp, eax  [x264578]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4bd1:0363  imul eax, edi, 0  [x264578]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x4c076))));
    // 4bd1:036a  add eax, ebp  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:036d  add eax, dword ptr [0x97]  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x97u)), false));
    // 4bd1:0372  cdq   [x264578]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:0374  idiv dword ptr [0x76]  [x264578]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x374u); }   // #DE: int 0, then again
    // 4bd1:0379  add eax, 0xa0  [x264578]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xa0u, false));
    // 4bd1:037f  mov dword ptr es:[si + 4], eax  [x264578]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 4bd1:0384  add si, 0x10  [x264578]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 4bd1:0387  cmp si, word ptr [0x36]  [x264578]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x36u)), true);
    // 4bd1:038b  jb 0x2e4  [x264578]
    if (c.cf) goto L4bff4;
L4c09f:
    if (c.tracing) c.traceAt(0x4c09f);
    // 4bd1:038f  jmp 0x391  [x1088]
    goto L4c0a1;
L4c0a1:
    if (c.tracing) c.traceAt(0x4c0a1);
    // 4bd1:0391  retf   [x1088]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c0b8:
    if (c.tracing) c.traceAt(0x4c0b8);
    // 4bd1:03a8  xor edx, edx  [x66625]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:03ab  mov dx, word ptr [0x7a]  [x66625]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 4bd1:03af  mov eax, dword ptr fs:[edx + 4]  [x66625]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:03b5  imul eax, eax, 0x50  [x66625]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 4bd1:03b9  mov dword ptr [0x20], eax  [x66625]
    c.w32(c.dsb + (uint16_t)(0x20u), c.a.e);
    // 4bd1:03bd  xor edi, edi  [x66625]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L4c0d0:
    if (c.tracing) c.traceAt(0x4c0d0);
    // 4bd1:03c0  xor edx, edx  [x76163]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:03c3  mov dx, word ptr [0x7c]  [x76163]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 4bd1:03c7  mov esi, dword ptr fs:[edx]  [x76163]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:03cc  mov edi, dword ptr fs:[edx + 4]  [x76163]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:03d2  sub dx, 8  [x76163]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 4bd1:03d5  mov word ptr [0x7c], dx  [x76163]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 4bd1:03d9  cmp dx, word ptr [0x7e]  [x76163]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 4bd1:03dd  jge 0x3e7  [x76163]
    if ((c.sf == c.of)) goto L4c0f7;
L4c0ef:
    if (c.tracing) c.traceAt(0x4c0ef);
    // 4bd1:03df  mov dx, word ptr [0x80]  [x32076]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 4bd1:03e3  mov word ptr [0x7c], dx  [x32076]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L4c0f7:
    if (c.tracing) c.traceAt(0x4c0f7);
    // 4bd1:03e7  mov eax, dword ptr fs:[edx]  [x76163]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:03ec  mov ebx, dword ptr fs:[edx + 4]  [x76163]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:03f2  mov edx, ebx  [x76163]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4bd1:03f5  sub edx, edi  [x76163]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4bd1:03f8  je 0x3c0  [x76163]
    if (c.zf) goto L4c0d0;
L4c10a:
    if (c.tracing) c.traceAt(0x4c10a);
    // 4bd1:03fa  mov dword ptr [0x18], edx  [x66625]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 4bd1:03ff  mov ecx, ebx  [x66625]
    c.c.e = (uint32_t)(c.b.e);
    // 4bd1:0402  sub ecx, edi  [x66625]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4bd1:0405  sub eax, esi  [x66625]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:0408  shl eax, 0x10  [x66625]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4bd1:040c  cdq   [x66625]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:040e  idiv ecx  [x66625]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x40eu); }   // #DE: int 0, then again
    // 4bd1:0411  mov dword ptr cs:[0x55f], eax  [x66625]
    c.w32(c.csb + (uint16_t)(0x55fu), c.a.e);
    // 4bd1:0416  shl esi, 0x10  [x66625]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4bd1:041a  mov dword ptr [0x10], esi  [x66625]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L4c12f:
    if (c.tracing) c.traceAt(0x4c12f);
    // 4bd1:041f  xor edx, edx  [x79087]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:0422  mov dx, word ptr [0x7a]  [x79087]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 4bd1:0426  mov esi, dword ptr fs:[edx]  [x79087]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:042b  mov edi, dword ptr fs:[edx + 4]  [x79087]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:0431  add dx, 8  [x79087]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 4bd1:0434  mov word ptr [0x7a], dx  [x79087]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 4bd1:0438  cmp dx, word ptr [0x80]  [x79087]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 4bd1:043c  jle 0x446  [x79087]
    if ((c.zf || c.sf != c.of)) goto L4c156;
L4c14e:
    if (c.tracing) c.traceAt(0x4c14e);
    // 4bd1:043e  mov dx, word ptr [0x7e]  [x20966]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 4bd1:0442  mov word ptr [0x7a], dx  [x20966]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L4c156:
    if (c.tracing) c.traceAt(0x4c156);
    // 4bd1:0446  mov eax, dword ptr fs:[edx]  [x79087]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:044b  mov ebx, dword ptr fs:[edx + 4]  [x79087]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:0451  mov edx, ebx  [x79087]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4bd1:0454  sub edx, edi  [x79087]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4bd1:0457  je 0x41f  [x79087]
    if (c.zf) goto L4c12f;
L4c169:
    if (c.tracing) c.traceAt(0x4c169);
    // 4bd1:0459  mov dword ptr [0x1c], edx  [x66625]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 4bd1:045e  mov ecx, ebx  [x66625]
    c.c.e = (uint32_t)(c.b.e);
    // 4bd1:0461  sub ecx, edi  [x66625]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4bd1:0464  sub eax, esi  [x66625]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:0467  shl eax, 0x10  [x66625]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4bd1:046b  cdq   [x66625]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:046d  idiv ecx  [x66625]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x46du); }   // #DE: int 0, then again
    // 4bd1:0470  mov dword ptr cs:[0x568], eax  [x66625]
    c.w32(c.csb + (uint16_t)(0x568u), c.a.e);
    // 4bd1:0475  shl esi, 0x10  [x66625]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4bd1:0479  mov dword ptr [0x14], esi  [x66625]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L4c18e:
    if (c.tracing) c.traceAt(0x4c18e);
    // 4bd1:047e  cmp dword ptr [0x20], 0  [x844065]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x0u, true);
    // 4bd1:0484  jl 0x554  [x844065]
    if ((c.sf != c.of)) goto L4c264;
L4c198:
    if (c.tracing) c.traceAt(0x4c198);
    // 4bd1:0488  mov eax, dword ptr [0x10]  [x786250]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 4bd1:048c  mov edx, dword ptr [0x14]  [x786250]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 4bd1:0491  sar edx, 0x10  [x786250]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 4bd1:0495  sar eax, 0x10  [x786250]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4bd1:0499  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x786250]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 4bd1:04a2  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x786250]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 4bd1:04ab  mov di, word ptr gs:[eax*8 + 0x3e80]  [x786250]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 4bd1:04b4  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x786250]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 4bd1:04bd  sub cx, di  [x786250]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 4bd1:04bf  je 0x50b  [x786250]
    if (c.zf) goto L4c21b;
L4c1d1:
    if (c.tracing) c.traceAt(0x4c1d1);
    // 4bd1:04c1  js 0x659  [x488235]
    if (c.sf) goto L4c369;
L4c1d5:
    if (c.tracing) c.traceAt(0x4c1d5);
    // 4bd1:04c5  add edi, dword ptr [0x20]  [x488194]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), true));
    // 4bd1:04ca  mov dx, 0x3c4  [x488194]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4bd1:04cd  mov al, 2  [x488194]
    c.a.l = (uint8_t)(0x2u);
    // 4bd1:04cf  mov ah, bh  [x488194]
    c.a.h = (uint8_t)(c.b.h);
    // 4bd1:04d1  out dx, ax  [x488194]
    c.ip = 0x4d2u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:04d2  mov bh, byte ptr [4]  [x488194]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 4bd1:04d6  mov byte ptr es:[di], bh  [x488194]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 4bd1:04d9  inc di  [x488194]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 4bd1:04da  dec cx  [x488194]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 4bd1:04db  je 0x501  [x488194]
    if (c.zf) goto L4c211;
L4c1ed:
    if (c.tracing) c.traceAt(0x4c1ed);
    // 4bd1:04dd  mov ax, 0xf02  [x250702]
    c.a.x = (uint16_t)(0xf02u);
    // 4bd1:04e0  out dx, ax  [x250702]
    c.ip = 0x4e1u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:04e1  mov al, bh  [x250702]
    c.a.l = (uint8_t)(c.b.h);
    // 4bd1:04e3  mov ah, bh  [x250702]
    c.a.h = (uint8_t)(c.b.h);
    // 4bd1:04e5  cmp cx, 2  [x250702]
    c.sub<16>(c.c.x, 0x2u, true);
    // 4bd1:04e8  jb 0x4f4  [x250702]
    if (c.cf) goto L4c204;
L4c1fa:
    if (c.tracing) c.traceAt(0x4c1fa);
    // 4bd1:04ea  test di, 1  [x188229]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 4bd1:04ee  jne 0x4f4  [x188229]
    if (!c.zf) goto L4c204;
L4c200:
    if (c.tracing) c.traceAt(0x4c200);
    // 4bd1:04f0  stosb byte ptr es:[di], al  [x95355]
    c.stos<8, false>(0);
    // 4bd1:04f1  dec cx  [x95355]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 4bd1:04f2  je 0x554  [x95355]
    if (c.zf) goto L4c264;
L4c204:
    if (c.tracing) c.traceAt(0x4c204);
    // 4bd1:04f4  mov si, cx  [x250702]
    c.si.x = (uint16_t)(c.c.x);
    // 4bd1:04f6  shr cx, 1  [x250702]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L4c208:
    if (c.tracing) c.traceAt(0x4c208);
    // 4bd1:04f8  rep stosw word ptr es:[di], ax  [x618589]
    c.stos<16, false>(1);
L4c20a:
    if (c.tracing) c.traceAt(0x4c20a);
    // 4bd1:04fa  mov cx, si  [x250702]
    c.c.x = (uint16_t)(c.si.x);
    // 4bd1:04fc  and cx, 1  [x250702]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L4c20f:
    if (c.tracing) c.traceAt(0x4c20f);
    // 4bd1:04ff  rep stosb byte ptr es:[di], al  [x407262]
    c.stos<8, false>(1);
L4c211:
    if (c.tracing) c.traceAt(0x4c211);
    // 4bd1:0501  mov ah, bl  [x488194]
    c.a.h = (uint8_t)(c.b.l);
    // 4bd1:0503  mov al, 2  [x488194]
    c.a.l = (uint8_t)(0x2u);
    // 4bd1:0505  out dx, ax  [x488194]
    c.ip = 0x506u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:0506  mov byte ptr es:[di], bh  [x488194]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 4bd1:0509  jmp 0x554  [x488194]
    goto L4c264;
L4c21b:
    if (c.tracing) c.traceAt(0x4c21b);
    // 4bd1:050b  mov si, 0x8000  [x298015]
    c.si.x = (uint16_t)(0x8000u);
    // 4bd1:050e  mov cx, ax  [x298015]
    c.c.x = (uint16_t)(c.a.x);
    // 4bd1:0510  and cx, dx  [x298015]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 4bd1:0512  js 0x554  [x298015]
    if (c.sf) goto L4c264;
L4c224:
    if (c.tracing) c.traceAt(0x4c224);
    // 4bd1:0514  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x298015]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 4bd1:051d  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x298015]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 4bd1:0526  mov cx, ax  [x298015]
    c.c.x = (uint16_t)(c.a.x);
    // 4bd1:0528  and cx, dx  [x298015]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 4bd1:052a  js 0x554  [x298015]
    if (c.sf) goto L4c264;
L4c23c:
    if (c.tracing) c.traceAt(0x4c23c);
    // 4bd1:052c  add edi, dword ptr [0x20]  [x298015]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), false));
    // 4bd1:0531  mov bx, 0xf03  [x298015]
    c.b.x = (uint16_t)(0xf03u);
    // 4bd1:0534  mov cx, ax  [x298015]
    c.c.x = (uint16_t)(c.a.x);
    // 4bd1:0536  and cl, bl  [x298015]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 4bd1:0538  mov al, bh  [x298015]
    c.a.l = (uint8_t)(c.b.h);
    // 4bd1:053a  shl al, cl  [x298015]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 4bd1:053c  mov cx, dx  [x298015]
    c.c.x = (uint16_t)(c.dx_.x);
    // 4bd1:053e  not cx  [x298015]
    c.c.x = (uint16_t)(~(c.c.x));
    // 4bd1:0540  and cl, bl  [x298015]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 4bd1:0542  mov ah, bh  [x298015]
    c.a.h = (uint8_t)(c.b.h);
    // 4bd1:0544  shr ah, cl  [x298015]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4bd1:0546  and ah, al  [x298015]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 4bd1:0548  mov dx, 0x3c4  [x298015]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4bd1:054b  mov al, 2  [x298015]
    c.a.l = (uint8_t)(0x2u);
    // 4bd1:054d  out dx, ax  [x298015]
    c.ip = 0x54eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:054e  mov al, byte ptr [4]  [x298015]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 4bd1:0551  mov byte ptr es:[di], al  [x298015]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L4c264:
    if (c.tracing) c.traceAt(0x4c264);
    // 4bd1:0554  add dword ptr [0x20], 0x50  [x844024]
    c.w32(c.dsb + (uint16_t)(0x20u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x50u, false));
    // 4bd1:055a  add dword ptr [0x10], 0x10000  [x844024]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x4c26f)), false));
    // 4bd1:0563  add dword ptr [0x14], 0xfffe8000  [x844024]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x4c278)), true));
    // 4bd1:056c  dec dword ptr [0x18]  [x844024]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 4bd1:0571  jne 0x5dd  [x844024]
    if (!c.zf) goto L4c2ed;
L4c283:
    if (c.tracing) c.traceAt(0x4c283);
    // 4bd1:0573  mov ax, word ptr [0x7a]  [x81859]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 4bd1:0576  cmp ax, word ptr [0x7c]  [x81859]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 4bd1:057a  je 0x659  [x81859]
    if (c.zf) goto L4c369;
L4c28e:
    if (c.tracing) c.traceAt(0x4c28e);
    // 4bd1:057e  xor edx, edx  [x61914]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:0581  mov dx, word ptr [0x7c]  [x61914]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 4bd1:0585  mov esi, dword ptr fs:[edx]  [x61914]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:058a  mov edi, dword ptr fs:[edx + 4]  [x61914]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:0590  sub dx, 8  [x61914]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 4bd1:0593  mov word ptr [0x7c], dx  [x61914]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 4bd1:0597  cmp dx, word ptr [0x7e]  [x61914]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 4bd1:059b  jge 0x5a5  [x61914]
    if ((c.sf == c.of)) goto L4c2b5;
L4c2ad:
    if (c.tracing) c.traceAt(0x4c2ad);
    // 4bd1:059d  mov dx, word ptr [0x80]  [x15298]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 4bd1:05a1  mov word ptr [0x7c], dx  [x15298]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L4c2b5:
    if (c.tracing) c.traceAt(0x4c2b5);
    // 4bd1:05a5  mov eax, dword ptr fs:[edx]  [x61914]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:05aa  mov ebx, dword ptr fs:[edx + 4]  [x61914]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:05b0  mov edx, ebx  [x61914]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4bd1:05b3  sub edx, edi  [x61914]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4bd1:05b6  je 0x57e  [x61914]
    if (c.zf) goto L4c28e;
L4c2c8:
    if (c.tracing) c.traceAt(0x4c2c8);
    // 4bd1:05b8  mov dword ptr [0x18], edx  [x40106]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 4bd1:05bd  mov ecx, ebx  [x40106]
    c.c.e = (uint32_t)(c.b.e);
    // 4bd1:05c0  sub ecx, edi  [x40106]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4bd1:05c3  sub eax, esi  [x40106]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:05c6  shl eax, 0x10  [x40106]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4bd1:05ca  cdq   [x40106]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:05cc  idiv ecx  [x40106]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x5ccu); }   // #DE: int 0, then again
    // 4bd1:05cf  mov dword ptr cs:[0x55f], eax  [x40106]
    c.w32(c.csb + (uint16_t)(0x55fu), c.a.e);
    // 4bd1:05d4  shl esi, 0x10  [x40106]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4bd1:05d8  mov dword ptr [0x10], esi  [x40106]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L4c2ed:
    if (c.tracing) c.traceAt(0x4c2ed);
    // 4bd1:05dd  dec dword ptr [0x1c]  [x802271]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 4bd1:05e2  jne 0x64c  [x802271]
    if (!c.zf) goto L4c35c;
L4c2f4:
    if (c.tracing) c.traceAt(0x4c2f4);
    // 4bd1:05e4  mov ax, word ptr [0x7a]  [x37838]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 4bd1:05e7  cmp ax, word ptr [0x7c]  [x37838]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 4bd1:05eb  je 0x659  [x37838]
    if (c.zf) goto L4c369;
L4c2fd:
    if (c.tracing) c.traceAt(0x4c2fd);
    // 4bd1:05ed  xor edx, edx  [x59646]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:05f0  mov dx, word ptr [0x7a]  [x59646]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 4bd1:05f4  mov esi, dword ptr fs:[edx]  [x59646]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:05f9  mov edi, dword ptr fs:[edx + 4]  [x59646]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:05ff  add dx, 8  [x59646]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 4bd1:0602  mov word ptr [0x7a], dx  [x59646]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 4bd1:0606  cmp dx, word ptr [0x80]  [x59646]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 4bd1:060a  jle 0x614  [x59646]
    if ((c.zf || c.sf != c.of)) goto L4c324;
L4c31c:
    if (c.tracing) c.traceAt(0x4c31c);
    // 4bd1:060c  mov dx, word ptr [0x7e]  [x17935]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 4bd1:0610  mov word ptr [0x7a], dx  [x17935]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L4c324:
    if (c.tracing) c.traceAt(0x4c324);
    // 4bd1:0614  mov eax, dword ptr fs:[edx]  [x59646]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4bd1:0619  mov ebx, dword ptr fs:[edx + 4]  [x59646]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4bd1:061f  mov edx, ebx  [x59646]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4bd1:0622  sub edx, edi  [x59646]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4bd1:0625  je 0x5ed  [x59646]
    if (c.zf) goto L4c2fd;
L4c337:
    if (c.tracing) c.traceAt(0x4c337);
    // 4bd1:0627  mov dword ptr [0x1c], edx  [x37838]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 4bd1:062c  mov ecx, ebx  [x37838]
    c.c.e = (uint32_t)(c.b.e);
    // 4bd1:062f  sub ecx, edi  [x37838]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4bd1:0632  sub eax, esi  [x37838]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4bd1:0635  shl eax, 0x10  [x37838]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4bd1:0639  cdq   [x37838]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:063b  idiv ecx  [x37838]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x63bu); }   // #DE: int 0, then again
    // 4bd1:063e  mov dword ptr cs:[0x568], eax  [x37838]
    c.w32(c.csb + (uint16_t)(0x568u), c.a.e);
    // 4bd1:0643  shl esi, 0x10  [x37838]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4bd1:0647  mov dword ptr [0x14], esi  [x37838]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L4c35c:
    if (c.tracing) c.traceAt(0x4c35c);
    // 4bd1:064c  cmp dword ptr [0x20], 0  [x802271]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), (c.r32(0x4c361)), true);
    // 4bd1:0655  jl 0x47e  [x802271]
    if ((c.sf != c.of)) goto L4c18e;
L4c369:
    if (c.tracing) c.traceAt(0x4c369);
    // 4bd1:0659  retf   [x66625]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c36a:
    if (c.tracing) c.traceAt(0x4c36a);
    // 4bd1:065a  mov ah, 0xf  [x649]
    c.a.h = (uint8_t)(0xfu);
    // 4bd1:065c  mov dx, 0x3c4  [x649]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4bd1:065f  mov al, 2  [x649]
    c.a.l = (uint8_t)(0x2u);
    // 4bd1:0661  out dx, ax  [x649]
    c.ip = 0x662u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:0662  mov ax, word ptr [0x8a]  [x649]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 4bd1:0665  not ax  [x649]
    c.a.x = (uint16_t)(~(c.a.x));
    // 4bd1:0667  and ax, 0x600  [x649]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 4bd1:066a  add ax, 0xa000  [x649]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 4bd1:066d  mov es, ax  [x649]
    c.loadEs(c.a.x);
    // 4bd1:066f  mov eax, 0  [x649]
    c.a.e = (uint32_t)(0x0u);
    // 4bd1:0675  cld   [x649]
    c.df = false;
    // 4bd1:0676  mov ax, 0x38d6  [x649]
    c.a.x = (uint16_t)(0x38d6u);
    // 4bd1:0679  mov fs, ax  [x649]
    c.loadFs(c.a.x);
    // 4bd1:067b  mov si, 0  [x649]
    c.si.x = (uint16_t)(0x0u);
    // 4bd1:067e  mov bl, 0xf0  [x649]
    c.b.l = (uint8_t)(0xf0u);
    // 4bd1:0680  mov edi, 0  [x649]
    c.di.e = (uint32_t)(0x0u);
L4c396:
    if (c.tracing) c.traceAt(0x4c396);
    // 4bd1:0686  mov al, byte ptr fs:[si]  [x155760]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 4bd1:0689  mov ah, al  [x155760]
    c.a.h = (uint8_t)(c.a.l);
    // 4bd1:068b  mov dx, ax  [x155760]
    c.dx_.x = (uint16_t)(c.a.x);
    // 4bd1:068d  shl eax, 0x10  [x155760]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 4bd1:0691  mov ax, dx  [x155760]
    c.a.x = (uint16_t)(c.dx_.x);
    // 4bd1:0693  mov cx, 0x14  [x155760]
    c.c.x = (uint16_t)(0x14u);
L4c3a6:
    if (c.tracing) c.traceAt(0x4c3a6);
    // 4bd1:0696  rep stosd dword ptr es:[di], eax  [x3270960]
    c.stos<32, false>(1);
L4c3a9:
    if (c.tracing) c.traceAt(0x4c3a9);
    // 4bd1:0699  inc si  [x155760]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 4bd1:069a  dec bl  [x155760]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 4bd1:069c  jne 0x686  [x155760]
    if (!c.zf) goto L4c396;
L4c3ae:
    if (c.tracing) c.traceAt(0x4c3ae);
    // 4bd1:069e  retf   [x649]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c3af:
    if (c.tracing) c.traceAt(0x4c3af);
    // 4bd1:069f  mov ax, 0x3bab  [x1]
    c.a.x = (uint16_t)(0x3babu);
    // 4bd1:06a2  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4bd1:06a4  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 4bd1:06a7  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L4c3ba:
    if (c.tracing) c.traceAt(0x4c3ba);
    // 4bd1:06aa  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 4bd1:06ad  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 4bd1:06ae  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 4bd1:06b1  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 4bd1:06b2  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 4bd1:06b5  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 4bd1:06b6  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 4bd1:06b9  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 4bd1:06ba  loop 0x6aa  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c3ba;
L4c3cc:
    if (c.tracing) c.traceAt(0x4c3cc);
    // 4bd1:06bc  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 4bd1:06bf  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 4bd1:06c1  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L4c3d4:
    if (c.tracing) c.traceAt(0x4c3d4);
    // 4bd1:06c4  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 4bd1:06c6  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 4bd1:06c9  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 4bd1:06ca  push cx  [x320]
    c.push16(c.c.x);
    // 4bd1:06cb  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 4bd1:06cd  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 4bd1:06d0  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 4bd1:06d2  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4bd1:06d4  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 4bd1:06d6  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 4bd1:06d8  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 4bd1:06da  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 4bd1:06db  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 4bd1:06dc  push cx  [x320]
    c.push16(c.c.x);
    // 4bd1:06dd  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 4bd1:06df  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 4bd1:06e1  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 4bd1:06e4  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 4bd1:06e6  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4bd1:06e8  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 4bd1:06ea  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 4bd1:06ec  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 4bd1:06ed  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 4bd1:06ef  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 4bd1:06f0  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 4bd1:06f1  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 4bd1:06f3  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 4bd1:06f6  jb 0x6fa  [x320]
    if (c.cf) goto L4c40a;
L4c408:
    if (c.tracing) c.traceAt(0x4c408);
    // 4bd1:06f8  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L4c40a:
    if (c.tracing) c.traceAt(0x4c40a);
    // 4bd1:06fa  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 4bd1:06fb  loop 0x6c4  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c3d4;
L4c40d:
    if (c.tracing) c.traceAt(0x4c40d);
    // 4bd1:06fd  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L4c410:
    if (c.tracing) c.traceAt(0x4c410);
    // 4bd1:0700  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 4bd1:0703  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 4bd1:0704  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 4bd1:0707  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 4bd1:0708  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 4bd1:070b  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 4bd1:070c  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 4bd1:070f  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 4bd1:0710  loop 0x700  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c410;
L4c422:
    if (c.tracing) c.traceAt(0x4c422);
    // 4bd1:0712  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c424:
    if (c.tracing) c.traceAt(0x4c424);
    // 4bd1:0714  les bx, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:0718  mov byte ptr [0x8c], 0  [x1088]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x0u);
    // 4bd1:071d  cmp dword ptr es:[bx + 4], 0  [x1088]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)), 0x0u, true);
    // 4bd1:0723  je 0x72a  [x1088]
    if (c.zf) goto L4c43a;
L4c435:
    if (c.tracing) c.traceAt(0x4c435);
    // 4bd1:0725  mov byte ptr [0x8c], 1  [x1088]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x1u);
L4c43a:
    if (c.tracing) c.traceAt(0x4c43a);
    // 4bd1:072a  mov ebx, dword ptr [0]  [x1088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:072f  cmp dword ptr es:[bx - 4], 0  [x1088]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 4bd1:0735  je 0x862  [x1088]
    if (c.zf) goto L4c572;
L4c449:
    if (c.tracing) c.traceAt(0x4c449);
    // 4bd1:0739  mov dword ptr [8], 0  [x1088]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 4bd1:0742  les bx, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:0746  mov esi, dword ptr [0]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:074b  mov dword ptr [0x8d], esi  [x1088]
    c.w32(c.dsb + (uint16_t)(0x8du), c.si.e);
    // 4bd1:0750  mov eax, dword ptr es:[si - 8]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 4bd1:0755  mov dword ptr [0xc], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
    // 4bd1:0759  les bx, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:075d  lfs bp, ptr [0x3e]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 4bd1:0762  xor ebx, ebx  [x1088]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 4bd1:0765  xor ebp, ebp  [x1088]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 4bd1:0768  xor edx, edx  [x1088]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L4c47b:
    if (c.tracing) c.traceAt(0x4c47b);
    // 4bd1:076b  mov ebx, esi  [x329708]
    c.b.e = (uint32_t)(c.si.e);
    // 4bd1:076e  mov bx, word ptr es:[ebx]  [x329708]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:0772  mov ecx, dword ptr es:[ebx]  [x329708]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:0777  mov edi, ecx  [x329708]
    c.di.e = (uint32_t)(c.c.e);
    // 4bd1:077a  add ebx, 0x18  [x329708]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 4bd1:077e  xor eax, eax  [x329708]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 4bd1:0781  mov ebp, dword ptr es:[ebx]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:0786  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:0789  add eax, dword ptr fs:[ebp*8 + 0x10]  [x329708]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 4bd1:0793  mov ebp, dword ptr es:[ebx + 4]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 4bd1:0799  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:079c  add eax, dword ptr fs:[ebp*8 + 0x10]  [x329708]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 4bd1:07a6  mov ebp, dword ptr es:[ebx + 8]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 4bd1:07ac  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:07af  add eax, dword ptr fs:[ebp*8 + 0x10]  [x329708]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 4bd1:07b9  add ebx, 0xc  [x329708]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 4bd1:07bd  sub ecx, 3  [x329708]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 4bd1:07c1  je 0x7db  [x329708]
    if (c.zf) goto L4c4eb;
L4c4d3:
    if (c.tracing) c.traceAt(0x4c4d3);
    // 4bd1:07c3  mov ebp, dword ptr es:[ebx]  [x61996]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:07c8  add ebp, ebp  [x61996]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:07cb  add eax, dword ptr fs:[ebp*8 + 0x10]  [x61996]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 4bd1:07d5  add ebx, 4  [x61996]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 4bd1:07d9  loop 0x7c3  [x61996]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c4d3;
L4c4eb:
    if (c.tracing) c.traceAt(0x4c4eb);
    // 4bd1:07db  cmp edi, 4  [x329708]
    c.sub<32>(c.di.e, 0x4u, true);
    // 4bd1:07df  jne 0x7e7  [x329708]
    if (!c.zf) goto L4c4f7;
L4c4f1:
    if (c.tracing) c.traceAt(0x4c4f1);
    // 4bd1:07e1  sar eax, 0xa  [x61996]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xau) & 31), true));
    // 4bd1:07e5  jmp 0x7f3  [x61996]
    goto L4c503;
L4c4f7:
    if (c.tracing) c.traceAt(0x4c4f7);
    // 4bd1:07e7  sar eax, 8  [x267712]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 4bd1:07eb  cdq   [x267712]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4bd1:07ed  mov ecx, edi  [x267712]
    c.c.e = (uint32_t)(c.di.e);
    // 4bd1:07f0  idiv ecx  [x267712]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x7f0u); }   // #DE: int 0, then again
L4c503:
    if (c.tracing) c.traceAt(0x4c503);
    // 4bd1:07f3  add eax, 0x8000  [x329708]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 4bd1:07f9  mov word ptr es:[esi + 2], ax  [x329708]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 4bd1:07fe  add esi, 4  [x329708]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 4bd1:0802  inc dword ptr [8]  [x329708]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 4bd1:0807  mov eax, dword ptr [0xc]  [x329708]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 4bd1:080b  cmp dword ptr [8], eax  [x329708]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 4bd1:0810  jb 0x76b  [x329708]
    if (c.cf) goto L4c47b;
L4c524:
    if (c.tracing) c.traceAt(0x4c524);
    // 4bd1:0814  mov esi, dword ptr [0x8d]  [x1088]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x8du)));
    // 4bd1:0819  mov dword ptr [0], esi  [x1088]
    c.w32(c.dsb + (uint16_t)(0u), c.si.e);
    // 4bd1:081e  mov edi, 4  [x1088]
    c.di.e = (uint32_t)(0x4u);
    // 4bd1:0824  les bx, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:0828  mov ebp, dword ptr [0]  [x1088]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:082d  mov edx, dword ptr es:[ebp - 8]  [x1088]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
L4c543:
    if (c.tracing) c.traceAt(0x4c543);
    // 4bd1:0833  mov ebx, ebp  [x2079]
    c.b.e = (uint32_t)(c.bp.e);
    // 4bd1:0836  mov ecx, edx  [x2079]
    c.c.e = (uint32_t)(c.dx_.e);
    // 4bd1:0839  xor esi, esi  [x2079]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
L4c54c:
    if (c.tracing) c.traceAt(0x4c54c);
    // 4bd1:083c  mov eax, dword ptr es:[ebx]  [x658859]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:0841  cmp eax, dword ptr es:[ebx + 4]  [x658859]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 4bd1:0847  jae 0x857  [x658859]
    if (!c.cf) goto L4c567;
L4c559:
    if (c.tracing) c.traceAt(0x4c559);
    // 4bd1:0849  xchg dword ptr es:[ebx + 4], eax  [x132121]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 4bd1:084f  mov dword ptr es:[ebx], eax  [x132121]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 4bd1:0854  not esi  [x132121]
    c.si.e = (uint32_t)(~(c.si.e));
L4c567:
    if (c.tracing) c.traceAt(0x4c567);
    // 4bd1:0857  add ebx, edi  [x658859]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, true));
    // 4bd1:085a  loop 0x83c  [x658859]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c54c;
L4c56c:
    if (c.tracing) c.traceAt(0x4c56c);
    // 4bd1:085c  cmp esi, 0  [x2079]
    c.sub<32>(c.si.e, 0x0u, true);
    // 4bd1:0860  jne 0x833  [x2079]
    if (!c.zf) goto L4c543;
L4c572:
    if (c.tracing) c.traceAt(0x4c572);
    // 4bd1:0862  mov ax, word ptr [0x8a]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 4bd1:0865  not ax  [x1088]
    c.a.x = (uint16_t)(~(c.a.x));
    // 4bd1:0867  and ax, 0x600  [x1088]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 4bd1:086a  add ax, 0xa000  [x1088]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 4bd1:086d  mov word ptr [0x91], ax  [x1088]
    c.w16(c.dsb + (uint16_t)(0x91u), c.a.x);
    // 4bd1:0870  mov dword ptr [8], 0  [x1088]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 4bd1:0879  les bx, ptr [0x3a]  [x1088]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:087d  mov ebx, dword ptr [0]  [x1088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:0882  mov eax, dword ptr es:[bx - 8]  [x1088]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 4bd1:0887  mov dword ptr [0xc], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L4c59b:
    if (c.tracing) c.traceAt(0x4c59b);
    // 4bd1:088b  xor ebx, ebx  [x329708]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 4bd1:088e  xor ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 4bd1:0891  xor edx, edx  [x329708]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4bd1:0894  les bx, ptr [0x3a]  [x329708]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4bd1:0898  lfs bp, ptr [0x3e]  [x329708]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 4bd1:089d  mov ax, 0x4b4b  [x329708]
    c.a.x = (uint16_t)(0x4b4bu);
    // 4bd1:08a0  mov gs, ax  [x329708]
    c.loadGs(c.a.x);
    // 4bd1:08a2  mov ebx, dword ptr [0]  [x329708]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:08a7  mov bx, word ptr es:[bx]  [x329708]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 4bd1:08aa  mov ecx, dword ptr es:[ebx + 0x14]  [x329708]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 4bd1:08b0  mov dword ptr [4], ecx  [x329708]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 4bd1:08b5  mov ecx, dword ptr es:[ebx]  [x329708]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:08ba  mov dword ptr gs:[edx], ecx  [x329708]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 4bd1:08bf  add ebx, 0x18  [x329708]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 4bd1:08c3  mov ebp, dword ptr es:[ebx]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:08c8  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:08cb  mov ecx, ebp  [x329708]
    c.c.e = (uint32_t)(c.bp.e);
    // 4bd1:08ce  mov ebp, dword ptr es:[ebx + 4]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 4bd1:08d4  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:08d7  mov edi, dword ptr fs:[ebp*8 + 8]  [x329708]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4bd1:08e1  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x329708]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4bd1:08eb  mov ebp, dword ptr es:[ebx + 8]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 4bd1:08f1  add ebp, ebp  [x329708]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:08f4  mov edx, dword ptr fs:[ebp*8 + 8]  [x329708]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4bd1:08fe  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x329708]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4bd1:0908  mov ebx, ecx  [x329708]
    c.b.e = (uint32_t)(c.c.e);
    // 4bd1:090b  mov eax, ebp  [x329708]
    c.a.e = (uint32_t)(c.bp.e);
    // 4bd1:090e  sub eax, esi  [x329708]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 4bd1:0911  mov dword ptr cs:[0x928], eax  [x329708]
    c.w32(c.csb + (uint16_t)(0x928u), c.a.e);
    // 4bd1:0916  jmp 0x918  [x329708]
    goto L4c628;
L4c628:
    if (c.tracing) c.traceAt(0x4c628);
    // 4bd1:0918  mov eax, edi  [x329708]
    c.a.e = (uint32_t)(c.di.e);
    // 4bd1:091b  sub eax, dword ptr fs:[ebx*8 + 8]  [x329708]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 4bd1:0925  imul eax, eax, 0xffffff86  [x329708]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x4c638))));
    // 4bd1:092c  mov ecx, esi  [x329708]
    c.c.e = (uint32_t)(c.si.e);
    // 4bd1:092f  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x329708]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 4bd1:0939  mov dword ptr cs:[0x94a], ecx  [x329708]
    c.w32(c.csb + (uint16_t)(0x94au), c.c.e);
    // 4bd1:093f  jmp 0x941  [x329708]
    goto L4c651;
L4c651:
    if (c.tracing) c.traceAt(0x4c651);
    // 4bd1:0941  mov ecx, edx  [x329708]
    c.c.e = (uint32_t)(c.dx_.e);
    // 4bd1:0944  sub ecx, edi  [x329708]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4bd1:0947  imul ecx, ecx, 0xffffffe7  [x329708]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4c65a))));
    // 4bd1:094e  cmp eax, ecx  [x329708]
    c.sub<32>(c.a.e, c.c.e, true);
    // 4bd1:0951  jl 0xafb  [x329708]
    if ((c.sf != c.of)) goto L4c80b;
L4c665:
    if (c.tracing) c.traceAt(0x4c665);
    // 4bd1:0955  je 0xafb  [x179608]
    if (c.zf) goto L4c80b;
L4c669:
    if (c.tracing) c.traceAt(0x4c669);
    // 4bd1:0959  mov ebx, dword ptr [0]  [x153645]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:095e  mov bx, word ptr es:[bx]  [x153645]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 4bd1:0961  mov ecx, dword ptr es:[ebx]  [x153645]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:0966  mov dword ptr gs:[0], ecx  [x153645]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 4bd1:096c  add ebx, 0x18  [x153645]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 4bd1:0970  mov dword ptr gs:[0xc], edi  [x153645]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 4bd1:0976  mov dword ptr gs:[0x10], esi  [x153645]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 4bd1:097c  mov dword ptr gs:[0x14], edx  [x153645]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 4bd1:0982  mov dword ptr gs:[0x18], ebp  [x153645]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 4bd1:0988  mov ebp, dword ptr es:[ebx]  [x153645]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:098d  add ebp, ebp  [x153645]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:0990  mov eax, dword ptr fs:[ebp*8 + 8]  [x153645]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4bd1:099a  mov dword ptr gs:[4], eax  [x153645]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 4bd1:099f  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x153645]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4bd1:09a9  mov dword ptr gs:[8], eax  [x153645]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 4bd1:09ae  mov edx, 0x1c  [x153645]
    c.dx_.e = (uint32_t)(0x1cu);
    // 4bd1:09b4  add ebx, 0xc  [x153645]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 4bd1:09b8  sub ecx, 3  [x153645]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 4bd1:09bc  je 0x9ef  [x153645]
    if (c.zf) goto L4c6ff;
L4c6ce:
    if (c.tracing) c.traceAt(0x4c6ce);
    // 4bd1:09be  mov ebp, dword ptr es:[ebx]  [x22817]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4bd1:09c3  add ebp, ebp  [x22817]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4bd1:09c6  mov eax, dword ptr fs:[ebp*8 + 8]  [x22817]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4bd1:09d0  mov dword ptr gs:[edx], eax  [x22817]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 4bd1:09d5  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x22817]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4bd1:09df  mov dword ptr gs:[edx + 4], eax  [x22817]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 4bd1:09e5  add edx, 8  [x22817]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 4bd1:09e9  add ebx, 4  [x22817]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 4bd1:09ed  loop 0x9be  [x22817]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c6ce;
L4c6ff:
    if (c.tracing) c.traceAt(0x4c6ff);
    // 4bd1:09ef  xor edi, edi  [x153645]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4bd1:09f2  mov ecx, dword ptr gs:[edi]  [x153645]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4bd1:09f7  lea eax, [edi + 4]  [x153645]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 4bd1:09fc  mov word ptr [0x7e], ax  [x153645]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.a.x);
    // 4bd1:09ff  lea ebx, [ecx - 1]  [x153645]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 4bd1:0a04  lea eax, [eax + ebx*8]  [x153645]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 4bd1:0a09  mov word ptr [0x80], ax  [x153645]
    c.w16(c.dsb + (uint16_t)(0x80u), c.a.x);
    // 4bd1:0a0c  dec ecx  [x153645]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 4bd1:0a0e  add edi, 8  [x153645]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 4bd1:0a12  mov eax, dword ptr gs:[edi]  [x153645]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4bd1:0a17  mov ebx, edi  [x153645]
    c.b.e = (uint32_t)(c.di.e);
    // 4bd1:0a1a  mov ebp, eax  [x153645]
    c.bp.e = (uint32_t)(c.a.e);
L4c72d:
    if (c.tracing) c.traceAt(0x4c72d);
    // 4bd1:0a1d  add edi, 8  [x330107]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 4bd1:0a21  mov edx, dword ptr gs:[edi]  [x330107]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4bd1:0a26  cmp ebp, edx  [x330107]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 4bd1:0a29  jle 0xa31  [x330107]
    if ((c.zf || c.sf != c.of)) goto L4c741;
L4c73b:
    if (c.tracing) c.traceAt(0x4c73b);
    // 4bd1:0a2b  mov ebp, edx  [x104950]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 4bd1:0a2e  mov ebx, edi  [x104950]
    c.b.e = (uint32_t)(c.di.e);
L4c741:
    if (c.tracing) c.traceAt(0x4c741);
    // 4bd1:0a31  cmp eax, edx  [x330107]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 4bd1:0a34  jge 0xa39  [x330107]
    if ((c.sf == c.of)) goto L4c749;
L4c746:
    if (c.tracing) c.traceAt(0x4c746);
    // 4bd1:0a36  mov eax, edx  [x109767]
    c.a.e = (uint32_t)(c.dx_.e);
L4c749:
    if (c.tracing) c.traceAt(0x4c749);
    // 4bd1:0a39  loop 0xa1d  [x330107]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c72d;
L4c74b:
    if (c.tracing) c.traceAt(0x4c74b);
    // 4bd1:0a3b  mov ecx, ebp  [x153645]
    c.c.e = (uint32_t)(c.bp.e);
    // 4bd1:0a3e  sub ebx, 4  [x153645]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 4bd1:0a42  cmp ecx, 0xef  [x153645]
    c.sub<32>(c.c.e, 0xefu, true);
    // 4bd1:0a49  jg 0xafb  [x153645]
    if ((!c.zf && c.sf == c.of)) goto L4c80b;
L4c75d:
    if (c.tracing) c.traceAt(0x4c75d);
    // 4bd1:0a4d  cmp eax, ecx  [x115715]
    c.sub<32>(c.a.e, c.c.e, true);
    // 4bd1:0a50  je 0xafb  [x115715]
    if (c.zf) goto L4c80b;
L4c764:
    if (c.tracing) c.traceAt(0x4c764);
    // 4bd1:0a54  cmp ax, 0  [x115715]
    c.sub<16>(c.a.x, 0x0u, true);
    // 4bd1:0a57  jl 0xafb  [x115715]
    if ((c.sf != c.of)) goto L4c80b;
L4c76b:
    if (c.tracing) c.traceAt(0x4c76b);
    // 4bd1:0a5b  imul eax, eax, 0x50  [x67546]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 4bd1:0a5f  cmp eax, 0x4ab0  [x67546]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 4bd1:0a65  jle 0xa6d  [x67546]
    if ((c.zf || c.sf != c.of)) goto L4c77d;
L4c777:
    if (c.tracing) c.traceAt(0x4c777);
    // 4bd1:0a67  mov eax, 0x4ab0  [x3205]
    c.a.e = (uint32_t)(0x4ab0u);
L4c77d:
    if (c.tracing) c.traceAt(0x4c77d);
    // 4bd1:0a6d  mov word ptr cs:[0x651], ax  [x67546]
    c.w16(c.csb + (uint16_t)(0x651u), c.a.x);
    // 4bd1:0a71  mov word ptr [0x7a], bx  [x67546]
    c.w16(c.dsb + (uint16_t)(0x7au), c.b.x);
    // 4bd1:0a75  mov word ptr [0x7c], bx  [x67546]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.b.x);
    // 4bd1:0a79  cmp byte ptr [0x8c], 1  [x67546]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x8cu)), 0x1u, true);
    // 4bd1:0a7e  jne 0xadf  [x67546]
    if (!c.zf) { t = 0x4c7efu; goto dispatch; }
L4c790:
    if (c.tracing) c.traceAt(0x4c790);
    // 4bd1:0a80  mov ebx, dword ptr [0]  [x67546]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4bd1:0a85  mov bx, word ptr es:[bx]  [x67546]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 4bd1:0a88  mov edi, dword ptr es:[ebx + 0xc]  [x67546]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0xcu)));
    // 4bd1:0a8e  mov ecx, dword ptr es:[ebx + 8]  [x67546]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 4bd1:0a94  mov ebx, dword ptr es:[ebx + 4]  [x67546]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 4bd1:0a9a  imul eax, ebx, 0  [x67546]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x4c7ad))));
    // 4bd1:0aa1  imul ebp, ecx, 0  [x67546]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4c7b4))));
    // 4bd1:0aa8  add eax, ebp  [x67546]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:0aab  imul ebp, edi, 0xfffffe00  [x67546]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x4c7be))));
    // 4bd1:0ab2  add eax, ebp  [x67546]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4bd1:0ab5  neg eax  [x67546]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, true));
    // 4bd1:0ab8  js 0xafb  [x67546]
    if (c.sf) goto L4c80b;
L4c7ca:
    if (c.tracing) c.traceAt(0x4c7ca);
    // 4bd1:0aba  shr eax, 0xb  [x66625]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0xbu) & 31), false));
    // 4bd1:0abe  cmp eax, 7  [x66625]
    c.sub<32>(c.a.e, 0x7u, true);
    // 4bd1:0ac2  jle 0xac6  [x66625]
    if ((c.zf || c.sf != c.of)) goto L4c7d6;
L4c7d4:
    if (c.tracing) c.traceAt(0x4c7d4);
    // 4bd1:0ac4  mov al, 7  [x2095]
    c.a.l = (uint8_t)(0x7u);
L4c7d6:
    if (c.tracing) c.traceAt(0x4c7d6);
    // 4bd1:0ac6  cmp eax, 0  [x66625]
    c.sub<32>(c.a.e, 0x0u, true);
    // 4bd1:0aca  jge 0xace  [x66625]
    if ((c.sf == c.of)) goto L4c7de;
    c.notTranslated(0x4c7dc, "fall-through");
L4c7de:
    if (c.tracing) c.traceAt(0x4c7de);
    // 4bd1:0ace  mov bx, word ptr [4]  [x66625]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 4bd1:0ad2  shl bl, 3  [x66625]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x3u) & 31), false));
    // 4bd1:0ad5  add al, bl  [x66625]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, true));
    // 4bd1:0ad7  mov ah, al  [x66625]
    c.a.h = (uint8_t)(c.a.l);
    // 4bd1:0ad9  mov dword ptr [4], eax  [x66625]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 4bd1:0add  jmp 0xae8  [x66625]
    goto L4c7f8;
L4c7f8:
    if (c.tracing) c.traceAt(0x4c7f8);
    // 4bd1:0ae8  mov ax, 0x4b4b  [x66625]
    c.a.x = (uint16_t)(0x4b4bu);
    // 4bd1:0aeb  mov fs, ax  [x66625]
    c.loadFs(c.a.x);
    // 4bd1:0aed  mov cx, 0x3bab  [x66625]
    c.c.x = (uint16_t)(0x3babu);
    // 4bd1:0af0  mov gs, cx  [x66625]
    c.loadGs(c.c.x);
    // 4bd1:0af2  mov ax, word ptr [0x91]  [x66625]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x91u)));
    // 4bd1:0af5  mov es, ax  [x66625]
    c.loadEs(c.a.x);
    // 4bd1:0af7  push cs  [x66625]
    c.push16(c.cs);
    // 4bd1:0af8  call 0x3a8  [x66625]
    c.push16(0xafbu); code_20(c, 0x4c0b8u); if (c.ip != 0xafbu) c.badReturn(0x4c808);
L4c80b:
    if (c.tracing) c.traceAt(0x4c80b);
    // 4bd1:0afb  add dword ptr [0], 4  [x329708]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 4bd1:0b01  inc dword ptr [8]  [x329708]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 4bd1:0b06  mov eax, dword ptr [0xc]  [x329708]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 4bd1:0b0a  cmp dword ptr [8], eax  [x329708]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 4bd1:0b0f  jne 0x88b  [x329708]
    if (!c.zf) goto L4c59b;
L4c823:
    if (c.tracing) c.traceAt(0x4c823);
    // 4bd1:0b13  retf   [x1088]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c824:
    if (c.tracing) c.traceAt(0x4c824);
    // 4bd1:0b14  retf   [x1088]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c825:
    if (c.tracing) c.traceAt(0x4c825);
    // 4bd1:0b15  push ds  [x1]
    c.push16(c.ds);
    // 4bd1:0b16  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4bd1:0b18  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 4bd1:0b1b  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 4bd1:0b1d  out dx, al  [x1]
    c.ip = 0xb1eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4bd1:0b1e  cld   [x1]
    c.df = false;
    // 4bd1:0b1f  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 4bd1:0b22  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 4bd1:0b24  out dx, al  [x1]
    c.ip = 0xb25u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4bd1:0b25  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L4c838:
    if (c.tracing) c.traceAt(0x4c838);
    // 4bd1:0b28  mov dx, 0x3c9  [x255]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 4bd1:0b2b  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb2cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4bd1:0b2c  out dx, al  [x255]
    c.ip = 0xb2du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4bd1:0b2d  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb2eu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4bd1:0b2e  out dx, al  [x255]
    c.ip = 0xb2fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4bd1:0b2f  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb30u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4bd1:0b30  out dx, al  [x255]
    c.ip = 0xb31u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4bd1:0b31  loop 0xb28  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c838;
L4c843:
    if (c.tracing) c.traceAt(0x4c843);
    // 4bd1:0b33  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4bd1:0b34  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c845:
    if (c.tracing) c.traceAt(0x4c845);
    // 4bd1:0b35  mov ax, word ptr [0x8a]  [x649]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 4bd1:0b38  not ax  [x649]
    c.a.x = (uint16_t)(~(c.a.x));
    // 4bd1:0b3a  and ax, 0x600  [x649]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 4bd1:0b3d  shl ah, 4  [x649]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 4bd1:0b40  mov dx, 0x3d4  [x649]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 4bd1:0b43  mov al, 0xc  [x649]
    c.a.l = (uint8_t)(0xcu);
    // 4bd1:0b45  out dx, ax  [x649]
    c.ip = 0xb46u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4bd1:0b46  not word ptr [0x8a]  [x649]
    c.w16(c.dsb + (uint16_t)(0x8au), ~(c.r16(c.dsb + (uint16_t)(0x8au))));
    // 4bd1:0b4a  retf   [x649]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c85b:
    if (c.tracing) c.traceAt(0x4c85b);
    // 4bd1:0b4b  mov ax, 0x3916  [x1088]
    c.a.x = (uint16_t)(0x3916u);
    // 4bd1:0b4e  mov fs, ax  [x1088]
    c.loadFs(c.a.x);
    // 4bd1:0b50  mov bx, word ptr fs:[0]  [x1088]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 4bd1:0b55  mov cx, word ptr [0xb7]  [x1088]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb7u)));
    // 4bd1:0b59  shl cx, 2  [x1088]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 4bd1:0b5c  add bx, cx  [x1088]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 4bd1:0b5e  mov bx, word ptr fs:[bx]  [x1088]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4bd1:0b61  mov cx, word ptr fs:[bx]  [x1088]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4bd1:0b64  mov dx, word ptr fs:[bx + 2]  [x1088]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 4bd1:0b68  mov word ptr [0x3a], cx  [x1088]
    c.w16(c.dsb + (uint16_t)(0x3au), c.c.x);
    // 4bd1:0b6c  mov word ptr [0x3c], dx  [x1088]
    c.w16(c.dsb + (uint16_t)(0x3cu), c.dx_.x);
    // 4bd1:0b70  mov ax, word ptr fs:[bx + 4]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 4bd1:0b74  movzx eax, ax  [x1088]
    c.a.e = (uint32_t)(c.a.x);
    // 4bd1:0b78  mov dword ptr [0], eax  [x1088]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 4bd1:0b7c  mov di, word ptr [0xc7]  [x1088]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc7u)));
L4c890:
    if (c.tracing) c.traceAt(0x4c890);
    // 4bd1:0b80  mov eax, dword ptr fs:[bx + 0x16]  [x1090]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 4bd1:0b85  mov edx, dword ptr fs:[bx + 0x1a]  [x1090]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 4bd1:0b8a  mov ecx, dword ptr fs:[bx + 0x1e]  [x1090]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 4bd1:0b8f  sar eax, 8  [x1090]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 4bd1:0b93  sar edx, 8  [x1090]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 4bd1:0b97  sar ecx, 8  [x1090]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 4bd1:0b9b  mov dword ptr [0x6a], eax  [x1090]
    c.w32(c.dsb + (uint16_t)(0x6au), c.a.e);
    // 4bd1:0b9f  mov dword ptr [0x6e], edx  [x1090]
    c.w32(c.dsb + (uint16_t)(0x6eu), c.dx_.e);
    // 4bd1:0ba4  mov dword ptr [0x72], ecx  [x1090]
    c.w32(c.dsb + (uint16_t)(0x72u), c.c.e);
    // 4bd1:0ba9  mov eax, dword ptr fs:[bx + 0x16]  [x1090]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 4bd1:0bae  mov edx, dword ptr fs:[bx + 0x1a]  [x1090]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 4bd1:0bb3  mov ecx, dword ptr fs:[bx + 0x1e]  [x1090]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 4bd1:0bb8  add eax, dword ptr fs:[bx + 6]  [x1090]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 4bd1:0bbd  add edx, dword ptr fs:[bx + 0xa]  [x1090]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 4bd1:0bc2  add ecx, dword ptr fs:[bx + 0xe]  [x1090]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 4bd1:0bc7  mov ebp, 0x3ffff  [x1090]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 4bd1:0bcd  and eax, ebp  [x1090]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 4bd1:0bd0  and edx, ebp  [x1090]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 4bd1:0bd3  and ecx, ebp  [x1090]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 4bd1:0bd6  mov dword ptr fs:[bx + 0x16], eax  [x1090]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 4bd1:0bdb  mov dword ptr fs:[bx + 0x1a], edx  [x1090]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 4bd1:0be0  mov dword ptr fs:[bx + 0x1e], ecx  [x1090]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 4bd1:0be5  dec di  [x1090]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 4bd1:0be6  jne 0xb80  [x1090]
    if (!c.zf) goto L4c890;
L4c8f8:
    if (c.tracing) c.traceAt(0x4c8f8);
    // 4bd1:0be8  push cs  [x1088]
    c.push16(c.cs);
    // 4bd1:0be9  call 0x2bf  [x1088]
    c.push16(0xbecu); code_20(c, 0x4bfcfu); if (c.ip != 0xbecu) c.badReturn(0x4c8f9);
L4c8fc:
    if (c.tracing) c.traceAt(0x4c8fc);
    // 4bd1:0bec  push cs  [x1088]
    c.push16(c.cs);
    // 4bd1:0bed  call 0xb14  [x1088]
    c.push16(0xbf0u); code_20(c, 0x4c824u); if (c.ip != 0xbf0u) c.badReturn(0x4c8fd);
L4c900:
    if (c.tracing) c.traceAt(0x4c900);
    // 4bd1:0bf0  push cs  [x1088]
    c.push16(c.cs);
    // 4bd1:0bf1  call 0x714  [x1088]
    c.push16(0xbf4u); code_20(c, 0x4c424u); if (c.ip != 0xbf4u) c.badReturn(0x4c901);
L4c904:
    if (c.tracing) c.traceAt(0x4c904);
    // 4bd1:0bf4  retf   [x1088]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4c905:
    if (c.tracing) c.traceAt(0x4c905);
    // 4bd1:0bf5  mov ax, 0x4bab  [x1]
    c.a.x = (uint16_t)(0x4babu);
    // 4bd1:0bf8  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4bd1:0bfa  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 4bd1:0bfd  mov ax, 2  [x1]
    c.a.x = (uint16_t)(0x2u);
    // 4bd1:0c00  int 0xff  [x1]
    c.ip = 0xc02u; c.d32 = false; c.intr(0xff, 0xc02u);
L4c912:
    if (c.tracing) c.traceAt(0x4c912);
    // 4bd1:0c02  push cs  [x1]
    c.push16(c.cs);
    // 4bd1:0c03  call 0x69f  [x1]
    c.push16(0xc06u); code_20(c, 0x4c3afu); if (c.ip != 0xc06u) c.badReturn(0x4c913);
L4c916:
    if (c.tracing) c.traceAt(0x4c916);
    // 4bd1:0c06  mov ax, 0x39b7  [x1]
    c.a.x = (uint16_t)(0x39b7u);
    // 4bd1:0c09  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 4bd1:0c0c  mov si, 0x3e  [x1]
    c.si.x = (uint16_t)(0x3eu);
    // 4bd1:0c0f  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 4bd1:0c11  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 4bd1:0c14  mov ax, 0x38e6  [x1]
    c.a.x = (uint16_t)(0x38e6u);
    // 4bd1:0c17  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 4bd1:0c1a  push cs  [x1]
    c.push16(c.cs);
    // 4bd1:0c1b  call 0xb15  [x1]
    c.push16(0xc1eu); code_20(c, 0x4c825u); if (c.ip != 0xc1eu) c.badReturn(0x4c92b);
L4c92e:
    if (c.tracing) c.traceAt(0x4c92e);
    // 4bd1:0c1e  mov dword ptr [0xbb], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbbu), 0x0u);
    // 4bd1:0c27  mov dword ptr [0xbf], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 4bd1:0c30  mov dword ptr [0xc3], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xc3u), 0x0u);
    // 4bd1:0c39  mov dword ptr [0x97], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x97u), 0x0u);
    // 4bd1:0c42  mov dword ptr [0x93], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x93u), 0x0u);
    // 4bd1:0c4b  mov dword ptr [0x9b], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x9bu), 0x0u);
    // 4bd1:0c54  mov dword ptr [0xa3], 0xfeced300  [x1]
    c.w32(c.dsb + (uint16_t)(0xa3u), 0xfeced300u);
    // 4bd1:0c5d  mov dword ptr [0x9f], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x9fu), 0x0u);
    // 4bd1:0c66  mov dword ptr [0xa7], 0xffff3cb0  [x1]
    c.w32(c.dsb + (uint16_t)(0xa7u), 0xffff3cb0u);
    // 4bd1:0c6f  mov dword ptr [0xaf], 0xfeced300  [x1]
    c.w32(c.dsb + (uint16_t)(0xafu), 0xfeced300u);
    // 4bd1:0c78  mov dword ptr [0xab], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xabu), 0x0u);
    // 4bd1:0c81  mov dword ptr [0xb3], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb3u), 0x0u);
    // 4bd1:0c8a  mov word ptr [0xc7], 2  [x1]
    c.w16(c.dsb + (uint16_t)(0xc7u), 0x2u);
L4c9a0:
    if (c.tracing) c.traceAt(0x4c9a0);
    // 4bd1:0c90  push cs  [x439]
    c.push16(c.cs);
    // 4bd1:0c91  call 0x65a  [x439]
    c.push16(0xc94u); code_20(c, 0x4c36au); if (c.ip != 0xc94u) c.badReturn(0x4c9a1);
L4c9a4:
    if (c.tracing) c.traceAt(0x4c9a4);
    // 4bd1:0c94  mov eax, dword ptr [0x9f]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 4bd1:0c98  mov dword ptr [0x93], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 4bd1:0c9c  mov eax, dword ptr [0xa3]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa3u)));
    // 4bd1:0ca0  mov dword ptr [0x97], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 4bd1:0ca4  mov eax, dword ptr [0xa7]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa7u)));
    // 4bd1:0ca8  mov dword ptr [0x9b], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 4bd1:0cac  mov word ptr [0xb7], 0  [x439]
    c.w16(c.dsb + (uint16_t)(0xb7u), 0x0u);
    // 4bd1:0cb2  push cs  [x439]
    c.push16(c.cs);
    // 4bd1:0cb3  call 0xb4b  [x439]
    c.push16(0xcb6u); code_20(c, 0x4c85bu); if (c.ip != 0xcb6u) c.badReturn(0x4c9c3);
L4c9c6:
    if (c.tracing) c.traceAt(0x4c9c6);
    // 4bd1:0cb6  mov eax, dword ptr [0xab]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xabu)));
    // 4bd1:0cba  mov dword ptr [0x93], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 4bd1:0cbe  mov eax, dword ptr [0xaf]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xafu)));
    // 4bd1:0cc2  mov dword ptr [0x97], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 4bd1:0cc6  mov eax, dword ptr [0xb3]  [x439]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb3u)));
    // 4bd1:0cca  mov dword ptr [0x9b], eax  [x439]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 4bd1:0cce  mov word ptr [0xb7], 2  [x439]
    c.w16(c.dsb + (uint16_t)(0xb7u), 0x2u);
    // 4bd1:0cd4  push cs  [x439]
    c.push16(c.cs);
    // 4bd1:0cd5  call 0xb4b  [x439]
    c.push16(0xcd8u); code_20(c, 0x4c85bu); if (c.ip != 0xcd8u) c.badReturn(0x4c9e5);
L4c9e8:
    if (c.tracing) c.traceAt(0x4c9e8);
    // 4bd1:0cd8  push cs  [x439]
    c.push16(c.cs);
    // 4bd1:0cd9  call 0xb35  [x439]
    c.push16(0xcdcu); code_20(c, 0x4c845u); if (c.ip != 0xcdcu) c.badReturn(0x4c9e9);
L4c9ec:
    if (c.tracing) c.traceAt(0x4c9ec);
    // 4bd1:0cdc  mov bx, 0xe  [x439]
    c.b.x = (uint16_t)(0xeu);
    // 4bd1:0cdf  int 0xff  [x439]
    c.ip = 0xce1u; c.d32 = false; c.intr(0xff, 0xce1u);
L4c9f1:
    if (c.tracing) c.traceAt(0x4c9f1);
    // 4bd1:0ce1  mov word ptr [0xc7], ax  [x439]
    c.w16(c.dsb + (uint16_t)(0xc7u), c.a.x);
    // 4bd1:0ce4  mov cx, word ptr [0xc7]  [x439]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc7u)));
L4c9f8:
    if (c.tracing) c.traceAt(0x4c9f8);
    // 4bd1:0ce8  add dword ptr [0x9f], 0  [x439]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x9fu)), 0x0u, false));
    // 4bd1:0cee  add dword ptr [0xa3], 0  [x439]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa3u)), 0x0u, false));
    // 4bd1:0cf4  add dword ptr [0xa7], 0x3e8  [x439]
    c.w32(c.dsb + (uint16_t)(0xa7u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa7u)), 0x3e8u, false));
    // 4bd1:0cfd  add dword ptr [0xaf], 0xea60  [x439]
    c.w32(c.dsb + (uint16_t)(0xafu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xafu)), 0xea60u, false));
    // 4bd1:0d06  add dword ptr [0xb3], 0  [x439]
    c.w32(c.dsb + (uint16_t)(0xb3u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb3u)), 0x0u, false));
    // 4bd1:0d0c  add dword ptr [0xab], 0  [x439]
    c.w32(c.dsb + (uint16_t)(0xabu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xabu)), 0x0u, true));
    // 4bd1:0d12  loop 0xce8  [x439]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4c9f8;
L4ca24:
    if (c.tracing) c.traceAt(0x4ca24);
    // 4bd1:0d14  cmp dword ptr [0xaf], 0x602160  [x439]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xafu)), 0x602160u, true);
    // 4bd1:0d1d  jle 0xc90  [x439]
    if ((c.zf || c.sf != c.of)) goto L4c9a0;
L4ca31:
    if (c.tracing) c.traceAt(0x4ca31);
    // 4bd1:0d21  push cs  [x210]
    c.push16(c.cs);
    // 4bd1:0d22  call 0x65a  [x210]
    c.push16(0xd25u); code_20(c, 0x4c36au); if (c.ip != 0xd25u) c.badReturn(0x4ca32);
L4ca35:
    if (c.tracing) c.traceAt(0x4ca35);
    // 4bd1:0d25  mov eax, dword ptr [0xab]  [x210]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xabu)));
    // 4bd1:0d29  mov dword ptr [0x93], eax  [x210]
    c.w32(c.dsb + (uint16_t)(0x93u), c.a.e);
    // 4bd1:0d2d  mov eax, dword ptr [0xaf]  [x210]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xafu)));
    // 4bd1:0d31  mov dword ptr [0x97], eax  [x210]
    c.w32(c.dsb + (uint16_t)(0x97u), c.a.e);
    // 4bd1:0d35  mov eax, dword ptr [0xb3]  [x210]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb3u)));
    // 4bd1:0d39  mov dword ptr [0x9b], eax  [x210]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 4bd1:0d3d  mov word ptr [0xb7], 2  [x210]
    c.w16(c.dsb + (uint16_t)(0xb7u), 0x2u);
    // 4bd1:0d43  push cs  [x210]
    c.push16(c.cs);
    // 4bd1:0d44  call 0xb4b  [x210]
    c.push16(0xd47u); code_20(c, 0x4c85bu); if (c.ip != 0xd47u) c.badReturn(0x4ca54);
L4ca57:
    if (c.tracing) c.traceAt(0x4ca57);
    // 4bd1:0d47  push cs  [x210]
    c.push16(c.cs);
    // 4bd1:0d48  call 0xb35  [x210]
    c.push16(0xd4bu); code_20(c, 0x4c845u); if (c.ip != 0xd4bu) c.badReturn(0x4ca58);
L4ca5b:
    if (c.tracing) c.traceAt(0x4ca5b);
    // 4bd1:0d4b  mov bx, 0xe  [x210]
    c.b.x = (uint16_t)(0xeu);
    // 4bd1:0d4e  int 0xff  [x210]
    c.ip = 0xd50u; c.d32 = false; c.intr(0xff, 0xd50u);
L4ca60:
    if (c.tracing) c.traceAt(0x4ca60);
    // 4bd1:0d50  mov word ptr [0xc7], ax  [x210]
    c.w16(c.dsb + (uint16_t)(0xc7u), c.a.x);
    // 4bd1:0d53  mov cx, word ptr [0xc7]  [x210]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc7u)));
L4ca67:
    if (c.tracing) c.traceAt(0x4ca67);
    // 4bd1:0d57  add dword ptr [0x9f], 0  [x210]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x9fu)), 0x0u, false));
    // 4bd1:0d5d  add dword ptr [0xa3], 0  [x210]
    c.w32(c.dsb + (uint16_t)(0xa3u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa3u)), 0x0u, false));
    // 4bd1:0d63  add dword ptr [0xa7], 0x3e8  [x210]
    c.w32(c.dsb + (uint16_t)(0xa7u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa7u)), 0x3e8u, false));
    // 4bd1:0d6c  add dword ptr [0xaf], 0xea60  [x210]
    c.w32(c.dsb + (uint16_t)(0xafu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xafu)), 0xea60u, false));
    // 4bd1:0d75  add dword ptr [0xb3], 0  [x210]
    c.w32(c.dsb + (uint16_t)(0xb3u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb3u)), 0x0u, false));
    // 4bd1:0d7b  add dword ptr [0xab], 0  [x210]
    c.w32(c.dsb + (uint16_t)(0xabu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xabu)), 0x0u, true));
    // 4bd1:0d81  loop 0xd57  [x210]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4ca67;
L4ca93:
    if (c.tracing) c.traceAt(0x4ca93);
    // 4bd1:0d83  cmp dword ptr [0xaf], 0x1206420  [x210]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xafu)), 0x1206420u, true);
    // 4bd1:0d8c  jle 0xd21  [x210]
    if ((c.zf || c.sf != c.of)) goto L4ca31;
L4ca9e:
    if (c.tracing) c.traceAt(0x4ca9e);
    // 4bd1:0d8e  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 4bd1:0d90  int 0x21  [x1]
    c.ip = 0xd92u; c.d32 = false; c.intr(0x21, 0xd92u);
    c.notTranslated(0x4caa2, "fall-through");
}

static Register reg20(20, {0x4bd1c, 0x4bfcf, 0x4bfd3, 0x4bff4, 0x4c09f, 0x4c0a1, 0x4c0b8, 0x4c0d0, 0x4c0ef, 0x4c0f7, 0x4c10a, 0x4c12f, 0x4c14e, 0x4c156, 0x4c169, 0x4c18e, 0x4c198, 0x4c1d1, 0x4c1d5, 0x4c1ed, 0x4c1fa, 0x4c200, 0x4c204, 0x4c208, 0x4c20a, 0x4c20f, 0x4c211, 0x4c21b, 0x4c224, 0x4c23c, 0x4c264, 0x4c283, 0x4c28e, 0x4c2ad, 0x4c2b5, 0x4c2c8, 0x4c2ed, 0x4c2f4, 0x4c2fd, 0x4c31c, 0x4c324, 0x4c337, 0x4c35c, 0x4c369, 0x4c36a, 0x4c396, 0x4c3a6, 0x4c3a9, 0x4c3ae, 0x4c3af, 0x4c3ba, 0x4c3cc, 0x4c3d4, 0x4c408, 0x4c40a, 0x4c40d, 0x4c410, 0x4c422, 0x4c424, 0x4c435, 0x4c43a, 0x4c449, 0x4c47b, 0x4c4d3, 0x4c4eb, 0x4c4f1, 0x4c4f7, 0x4c503, 0x4c524, 0x4c543, 0x4c54c, 0x4c559, 0x4c567, 0x4c56c, 0x4c572, 0x4c59b, 0x4c628, 0x4c651, 0x4c665, 0x4c669, 0x4c6ce, 0x4c6ff, 0x4c72d, 0x4c73b, 0x4c741, 0x4c746, 0x4c749, 0x4c74b, 0x4c75d, 0x4c764, 0x4c76b, 0x4c777, 0x4c77d, 0x4c790, 0x4c7ca, 0x4c7d4, 0x4c7d6, 0x4c7de, 0x4c7f8, 0x4c80b, 0x4c823, 0x4c824, 0x4c825, 0x4c838, 0x4c843, 0x4c845, 0x4c85b, 0x4c890, 0x4c8f8, 0x4c8fc, 0x4c900, 0x4c904, 0x4c905, 0x4c912, 0x4c916, 0x4c92e, 0x4c9a0, 0x4c9a4, 0x4c9c6, 0x4c9e8, 0x4c9ec, 0x4c9f1, 0x4c9f8, 0x4ca24, 0x4ca31, 0x4ca35, 0x4ca57, 0x4ca5b, 0x4ca60, 0x4ca67, 0x4ca93, 0x4ca9e}, code_20);

}  // namespace angel
