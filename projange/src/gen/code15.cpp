// Program 15, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_15(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x41c00: goto L41c00;
    case 0x41c0e: goto L41c0e;
    case 0x41ec1: goto L41ec1;
    case 0x41ec5: goto L41ec5;
    case 0x41ee6: goto L41ee6;
    case 0x41f91: goto L41f91;
    case 0x41f93: goto L41f93;
    case 0x41fac: goto L41fac;
    case 0x41fc4: goto L41fc4;
    case 0x41fe3: goto L41fe3;
    case 0x41feb: goto L41feb;
    case 0x41ffe: goto L41ffe;
    case 0x42023: goto L42023;
    case 0x42042: goto L42042;
    case 0x4204a: goto L4204a;
    case 0x4205d: goto L4205d;
    case 0x42082: goto L42082;
    case 0x4208c: goto L4208c;
    case 0x420c5: goto L420c5;
    case 0x420c9: goto L420c9;
    case 0x420e1: goto L420e1;
    case 0x420ee: goto L420ee;
    case 0x420f4: goto L420f4;
    case 0x420f8: goto L420f8;
    case 0x420fc: goto L420fc;
    case 0x420fe: goto L420fe;
    case 0x42103: goto L42103;
    case 0x42105: goto L42105;
    case 0x4210f: goto L4210f;
    case 0x42118: goto L42118;
    case 0x42130: goto L42130;
    case 0x42158: goto L42158;
    case 0x42177: goto L42177;
    case 0x42182: goto L42182;
    case 0x421a1: goto L421a1;
    case 0x421a9: goto L421a9;
    case 0x421bc: goto L421bc;
    case 0x421e1: goto L421e1;
    case 0x421e8: goto L421e8;
    case 0x421f1: goto L421f1;
    case 0x42210: goto L42210;
    case 0x42218: goto L42218;
    case 0x4222b: goto L4222b;
    case 0x42250: goto L42250;
    case 0x4225d: goto L4225d;
    case 0x4225e: goto L4225e;
    case 0x4228a: goto L4228a;
    case 0x4229a: goto L4229a;
    case 0x4229d: goto L4229d;
    case 0x422a2: goto L422a2;
    case 0x422a3: goto L422a3;
    case 0x422ae: goto L422ae;
    case 0x422c0: goto L422c0;
    case 0x422c8: goto L422c8;
    case 0x422fc: goto L422fc;
    case 0x422fe: goto L422fe;
    case 0x42301: goto L42301;
    case 0x42304: goto L42304;
    case 0x42316: goto L42316;
    case 0x42318: goto L42318;
    case 0x42329: goto L42329;
    case 0x4232e: goto L4232e;
    case 0x4233d: goto L4233d;
    case 0x4236f: goto L4236f;
    case 0x423c7: goto L423c7;
    case 0x423df: goto L423df;
    case 0x423e5: goto L423e5;
    case 0x423eb: goto L423eb;
    case 0x423f7: goto L423f7;
    case 0x42418: goto L42418;
    case 0x42437: goto L42437;
    case 0x42440: goto L42440;
    case 0x4244d: goto L4244d;
    case 0x4245b: goto L4245b;
    case 0x42460: goto L42460;
    case 0x42466: goto L42466;
    case 0x4248f: goto L4248f;
    case 0x4251c: goto L4251c;
    case 0x42545: goto L42545;
    case 0x42559: goto L42559;
    case 0x4255d: goto L4255d;
    case 0x425c2: goto L425c2;
    case 0x425f3: goto L425f3;
    case 0x42621: goto L42621;
    case 0x4262f: goto L4262f;
    case 0x42635: goto L42635;
    case 0x4263a: goto L4263a;
    case 0x4263d: goto L4263d;
    case 0x4263f: goto L4263f;
    case 0x42651: goto L42651;
    case 0x42658: goto L42658;
    case 0x4265f: goto L4265f;
    case 0x4266b: goto L4266b;
    case 0x42671: goto L42671;
    case 0x42684: goto L42684;
    case 0x426be: goto L426be;
    case 0x426ca: goto L426ca;
    case 0x426d2: goto L426d2;
    case 0x426ec: goto L426ec;
    case 0x426ff: goto L426ff;
    case 0x42717: goto L42717;
    case 0x42718: goto L42718;
    case 0x42719: goto L42719;
    case 0x4272c: goto L4272c;
    case 0x42737: goto L42737;
    case 0x42739: goto L42739;
    case 0x4274f: goto L4274f;
    case 0x42784: goto L42784;
    case 0x427ec: goto L427ec;
    case 0x427f0: goto L427f0;
    case 0x427f4: goto L427f4;
    case 0x427f8: goto L427f8;
    case 0x427f9: goto L427f9;
    case 0x4280a: goto L4280a;
    case 0x4280e: goto L4280e;
    case 0x42812: goto L42812;
    case 0x42816: goto L42816;
    case 0x4281a: goto L4281a;
    case 0x42824: goto L42824;
    case 0x4283c: goto L4283c;
    case 0x42898: goto L42898;
    case 0x4289c: goto L4289c;
    case 0x428be: goto L428be;
    case 0x428c2: goto L428c2;
    case 0x428c7: goto L428c7;
    case 0x428ce: goto L428ce;
    case 0x428e5: goto L428e5;
    case 0x428f0: goto L428f0;
    default: c.callLinear(t); return;
    }
L41c00:
    if (c.tracing) c.traceAt(0x41c00);
    // 41c0:0000  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 41c0:0003  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 41c0:0005  out dx, al  [x1]
    c.ip = 0x6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0006  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 41c0:0007  in al, dx  [x1]
    c.ip = 0x8u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 41c0:0008  and al, 0xe0  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xe0u), false));
    // 41c0:000a  or al, bl  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.b.l), true));
    // 41c0:000c  out dx, al  [x1]
    c.ip = 0xdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:000d  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L41c0e:
    if (c.tracing) c.traceAt(0x41c0e);
    // 41c0:000e  mov ax, 0x24f1  [x301]
    c.a.x = (uint16_t)(0x24f1u);
    // 41c0:0011  mov es, ax  [x301]
    c.loadEs(c.a.x);
    // 41c0:0013  mov ebx, dword ptr [0x6c]  [x301]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6cu)));
    // 41c0:0018  mov edi, dword ptr [0x70]  [x301]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x70u)));
    // 41c0:001d  add ebx, ebx  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 41c0:0020  add edi, edi  [x301]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 41c0:0023  mov ebp, ebx  [x301]
    c.bp.e = (uint32_t)(c.b.e);
    // 41c0:0026  add ebx, edi  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 41c0:0029  sub ebp, edi  [x301]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 41c0:002c  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:0036  add eax, dword ptr es:[ebp*2 + 0x3000]  [x301]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 41c0:0040  sar eax, 1  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 41c0:0043  mov dword ptr [0x48], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x48u), c.a.e);
    // 41c0:0047  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:0051  add eax, dword ptr es:[ebp*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 41c0:005b  sar eax, 1  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 41c0:005e  mov dword ptr [0x4c], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x4cu), c.a.e);
    // 41c0:0062  mov ebx, edi  [x301]
    c.b.e = (uint32_t)(c.di.e);
    // 41c0:0065  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:006f  mov dword ptr [0x50], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x50u), c.a.e);
    // 41c0:0073  mov ebp, dword ptr [0x74]  [x301]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x74u)));
    // 41c0:0078  add ebp, ebp  [x301]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:007b  mov eax, ebx  [x301]
    c.a.e = (uint32_t)(c.b.e);
    // 41c0:007e  sub ebx, ebp  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 41c0:0081  add ebp, eax  [x301]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 41c0:0084  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:008e  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 41c0:0098  sar eax, 1  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 41c0:009b  mov dword ptr [0x5c], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x5cu), c.a.e);
    // 41c0:009f  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:00a9  add eax, dword ptr es:[ebp*2 + 0x3000]  [x301]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 41c0:00b3  sar eax, 1  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 41c0:00b6  mov dword ptr [0x68], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x68u), c.a.e);
    // 41c0:00ba  mov ebx, dword ptr [0x6c]  [x301]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6cu)));
    // 41c0:00bf  add ebx, dword ptr [0x70]  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x70u)), false));
    // 41c0:00c4  sub ebx, dword ptr [0x74]  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x74u)), false));
    // 41c0:00c9  add ebx, ebx  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 41c0:00cc  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:00d6  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:00e0  mov edx, ecx  [x301]
    c.dx_.e = (uint32_t)(c.c.e);
    // 41c0:00e3  neg edx  [x301]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 41c0:00e6  mov edi, eax  [x301]
    c.di.e = (uint32_t)(c.a.e);
    // 41c0:00e9  mov esi, dword ptr [0x74]  [x301]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x74u)));
    // 41c0:00ee  add esi, esi  [x301]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 41c0:00f1  add ebx, esi  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 41c0:00f4  add ebx, esi  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 41c0:00f7  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:0101  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:010b  sub eax, esi  [x301]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:010e  sub ecx, ebp  [x301]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 41c0:0111  sub edx, ebp  [x301]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 41c0:0114  add edi, esi  [x301]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 41c0:0117  mov esi, dword ptr [0x70]  [x301]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x70u)));
    // 41c0:011c  add esi, esi  [x301]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 41c0:011f  sub ebx, esi  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 41c0:0122  sub ebx, esi  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 41c0:0125  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:012f  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:0139  add eax, esi  [x301]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 41c0:013c  add ecx, ebp  [x301]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 41c0:013f  add edx, ebp  [x301]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 41c0:0142  sub edi, esi  [x301]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 41c0:0145  mov esi, dword ptr [0x74]  [x301]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x74u)));
    // 41c0:014a  add esi, esi  [x301]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 41c0:014d  sub ebx, esi  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 41c0:0150  sub ebx, esi  [x301]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 41c0:0153  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:015d  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:0167  sub eax, esi  [x301]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:016a  sub ecx, ebp  [x301]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 41c0:016d  add edx, ebp  [x301]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 41c0:0170  sub edi, esi  [x301]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 41c0:0173  sar eax, 2  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 41c0:0177  sar ecx, 2  [x301]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 41c0:017b  sar edx, 2  [x301]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 41c0:017f  sar edi, 2  [x301]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 41c0:0183  mov dword ptr [0x54], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x54u), c.a.e);
    // 41c0:0187  mov dword ptr [0x58], ecx  [x301]
    c.w32(c.dsb + (uint16_t)(0x58u), c.c.e);
    // 41c0:018c  mov dword ptr [0x60], edx  [x301]
    c.w32(c.dsb + (uint16_t)(0x60u), c.dx_.e);
    // 41c0:0191  mov dword ptr [0x64], edi  [x301]
    c.w32(c.dsb + (uint16_t)(0x64u), c.di.e);
    // 41c0:0196  mov ebx, dword ptr [0x6c]  [x301]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6cu)));
    // 41c0:019b  mov ebp, ebx  [x301]
    c.bp.e = (uint32_t)(c.b.e);
    // 41c0:019e  add ebx, dword ptr [0x74]  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x74u)), false));
    // 41c0:01a3  sub ebp, dword ptr [0x74]  [x301]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x74u)), false));
    // 41c0:01a8  add ebx, ebx  [x301]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 41c0:01ab  add ebp, ebp  [x301]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:01ae  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:01b8  add eax, dword ptr es:[ebp*2 + 0x3400]  [x301]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 41c0:01c2  sar eax, 1  [x301]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 41c0:01c5  add dword ptr [0x54], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x54u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x54u)), c.a.e, false));
    // 41c0:01ca  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:01d4  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x301]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 41c0:01de  sar ecx, 1  [x301]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 41c0:01e1  sub dword ptr [0x58], ecx  [x301]
    c.w32(c.dsb + (uint16_t)(0x58u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x58u)), c.c.e, false));
    // 41c0:01e6  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x301]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 41c0:01f0  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x301]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 41c0:01fa  sar edx, 1  [x301]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 41c0:01fd  sub dword ptr [0x60], edx  [x301]
    c.w32(c.dsb + (uint16_t)(0x60u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x60u)), c.dx_.e, false));
    // 41c0:0202  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x301]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 41c0:020c  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x301]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 41c0:0216  sar edi, 1  [x301]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 41c0:0219  sub dword ptr [0x64], edi  [x301]
    c.w32(c.dsb + (uint16_t)(0x64u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x64u)), c.di.e, false));
    // 41c0:021e  mov eax, dword ptr [0x60]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x60u)));
    // 41c0:0222  mov dword ptr cs:[0xaa1], eax  [x301]
    c.w32(c.csb + (uint16_t)(0xaa1u), c.a.e);
    // 41c0:0227  mov eax, dword ptr [0x64]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x64u)));
    // 41c0:022b  mov dword ptr cs:[0xaa8], eax  [x301]
    c.w32(c.csb + (uint16_t)(0xaa8u), c.a.e);
    // 41c0:0230  mov eax, dword ptr [0x68]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x68u)));
    // 41c0:0234  mov dword ptr cs:[0xab2], eax  [x301]
    c.w32(c.csb + (uint16_t)(0xab2u), c.a.e);
    // 41c0:0239  sar dword ptr [0x60], 3  [x301]
    c.w32(c.dsb + (uint16_t)(0x60u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x60u)), (int)((0x3u) & 31), false));
    // 41c0:023f  sar dword ptr [0x64], 3  [x301]
    c.w32(c.dsb + (uint16_t)(0x64u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x64u)), (int)((0x3u) & 31), false));
    // 41c0:0245  sar dword ptr [0x68], 3  [x301]
    c.w32(c.dsb + (uint16_t)(0x68u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x68u)), (int)((0x3u) & 31), false));
    // 41c0:024b  shl dword ptr [0x48], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x48u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x48u)), (int)((0x7u) & 31), false));
    // 41c0:0251  shl dword ptr [0x4c], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x4cu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4cu)), (int)((0x7u) & 31), false));
    // 41c0:0257  shl dword ptr [0x50], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x50u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x50u)), (int)((0x7u) & 31), false));
    // 41c0:025d  shl dword ptr [0x54], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x54u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x54u)), (int)((0x7u) & 31), false));
    // 41c0:0263  shl dword ptr [0x58], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x58u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x58u)), (int)((0x7u) & 31), false));
    // 41c0:0269  shl dword ptr [0x5c], 7  [x301]
    c.w32(c.dsb + (uint16_t)(0x5cu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5cu)), (int)((0x7u) & 31), true));
    // 41c0:026f  mov eax, dword ptr [0x48]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x48u)));
    // 41c0:0273  mov dword ptr cs:[0x326], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x326u), c.a.e);
    // 41c0:0278  mov eax, dword ptr [0x4c]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4cu)));
    // 41c0:027c  mov dword ptr cs:[0x32d], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x32du), c.a.e);
    // 41c0:0281  mov eax, dword ptr [0x50]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x50u)));
    // 41c0:0285  mov dword ptr cs:[0x337], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x337u), c.a.e);
    // 41c0:028a  mov eax, dword ptr [0x54]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x54u)));
    // 41c0:028e  mov dword ptr cs:[0x357], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x357u), c.a.e);
    // 41c0:0293  mov eax, dword ptr [0x58]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x58u)));
    // 41c0:0297  mov dword ptr cs:[0x35e], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x35eu), c.a.e);
    // 41c0:029c  mov eax, dword ptr [0x5c]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5cu)));
    // 41c0:02a0  mov dword ptr cs:[0x368], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x368u), c.a.e);
    // 41c0:02a5  mov eax, dword ptr [0x60]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x60u)));
    // 41c0:02a9  mov dword ptr cs:[0x2f7], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x2f7u), c.a.e);
    // 41c0:02ae  mov eax, dword ptr [0x64]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x64u)));
    // 41c0:02b2  mov dword ptr cs:[0x2fe], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x2feu), c.a.e);
    // 41c0:02b7  mov eax, dword ptr [0x68]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x68u)));
    // 41c0:02bb  mov dword ptr cs:[0x308], eax  [x301]
    c.w32(c.csb + (uint16_t)(0x308u), c.a.e);
    // 41c0:02c0  retf   [x301]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L41ec1:
    if (c.tracing) c.traceAt(0x41ec1);
    // 41c0:02c1  push cs  [x301]
    c.push16(c.cs);
    // 41c0:02c2  call 0xe  [x301]
    c.push16(0x2c5u); code_15(c, 0x41c0eu); if (c.ip != 0x2c5u) c.badReturn(0x41ec2);
L41ec5:
    if (c.tracing) c.traceAt(0x41ec5);
    // 41c0:02c5  lfs si, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 41c0:02ca  movzx esi, si  [x301]
    c.si.e = (uint32_t)(c.si.x);
    // 41c0:02ce  mov eax, dword ptr fs:[esi]  [x301]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 41c0:02d3  shl eax, 4  [x301]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 41c0:02d7  mov word ptr [0x38], ax  [x301]
    c.w16(c.dsb + (uint16_t)(0x38u), c.a.x);
    // 41c0:02da  add esi, 8  [x301]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 41c0:02de  add word ptr [0x38], si  [x301]
    c.w16(c.dsb + (uint16_t)(0x38u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x38u)), c.si.x, true));
    // 41c0:02e2  les di, ptr [0x40]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x40u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x40u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L41ee6:
    if (c.tracing) c.traceAt(0x41ee6);
    // 41c0:02e6  mov ebx, dword ptr fs:[si]  [x41237]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 41c0:02ea  mov ecx, dword ptr fs:[si + 4]  [x41237]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 41c0:02ef  mov edi, dword ptr fs:[si + 8]  [x41237]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 41c0:02f4  imul eax, ebx, 0x32  [x41237]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x41ef7))));
    // 41c0:02fb  imul ebp, ecx, 0xffffffd8  [x41237]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x41efe))));
    // 41c0:0302  add eax, ebp  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:0305  imul ebp, edi, 0  [x41237]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x41f08))));
    // 41c0:030c  add eax, ebp  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:030f  add eax, dword ptr [0x9d]  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x9du)), false));
    // 41c0:0314  mov dword ptr es:[si + 8], eax  [x41237]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 41c0:0319  add eax, 0xea60  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xea60u, false));
    // 41c0:031f  mov dword ptr [0x78], eax  [x41237]
    c.w32(c.dsb + (uint16_t)(0x78u), c.a.e);
    // 41c0:0323  imul ebp, ebx, 0x100  [x41237]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x41f26))));
    // 41c0:032a  imul eax, ecx, 0xffffff00  [x41237]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x41f2d))));
    // 41c0:0331  add ebp, eax  [x41237]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 41c0:0334  imul eax, edi, 0xffff0000  [x41237]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x41f37))));
    // 41c0:033b  add eax, ebp  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:033e  add eax, dword ptr [0x95]  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x95u)), false));
    // 41c0:0343  cdq   [x41237]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:0345  idiv dword ptr [0x78]  [x41237]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x78u)))) { c.d32 = false; c.intr(0, 0x345u); }   // #DE: int 0, then again
    // 41c0:034a  add eax, 0x9f  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 41c0:0350  mov dword ptr es:[si], eax  [x41237]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 41c0:0354  imul ebp, ebx, 0xffff6180  [x41237]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x41f57))));
    // 41c0:035b  imul eax, ecx, 0xffff3700  [x41237]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x41f5e))));
    // 41c0:0362  add ebp, eax  [x41237]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 41c0:0365  imul eax, edi, 0  [x41237]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x41f68))));
    // 41c0:036c  add eax, ebp  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:036f  add eax, dword ptr [0x99]  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x99u)), false));
    // 41c0:0374  cdq   [x41237]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:0376  idiv dword ptr [0x78]  [x41237]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x78u)))) { c.d32 = false; c.intr(0, 0x376u); }   // #DE: int 0, then again
    // 41c0:037b  add eax, 0xa0  [x41237]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xa0u, false));
    // 41c0:0381  mov dword ptr es:[si + 4], eax  [x41237]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 41c0:0386  add si, 0x10  [x41237]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 41c0:0389  cmp si, word ptr [0x38]  [x41237]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x38u)), true);
    // 41c0:038d  jb 0x2e6  [x41237]
    if (c.cf) goto L41ee6;
L41f91:
    if (c.tracing) c.traceAt(0x41f91);
    // 41c0:0391  jmp 0x393  [x301]
    goto L41f93;
L41f93:
    if (c.tracing) c.traceAt(0x41f93);
    // 41c0:0393  retf   [x301]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L41fac:
    if (c.tracing) c.traceAt(0x41fac);
    // 41c0:03ac  xor edx, edx  [x8461]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:03af  mov dx, word ptr [0x7c]  [x8461]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 41c0:03b3  mov eax, dword ptr fs:[edx + 4]  [x8461]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:03b9  imul eax, eax, 0x50  [x8461]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 41c0:03bd  mov dword ptr [0x20], eax  [x8461]
    c.w32(c.dsb + (uint16_t)(0x20u), c.a.e);
    // 41c0:03c1  xor edi, edi  [x8461]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L41fc4:
    if (c.tracing) c.traceAt(0x41fc4);
    // 41c0:03c4  xor edx, edx  [x8534]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:03c7  mov dx, word ptr [0x7e]  [x8534]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 41c0:03cb  mov esi, dword ptr fs:[edx]  [x8534]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:03d0  mov edi, dword ptr fs:[edx + 4]  [x8534]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:03d6  sub dx, 8  [x8534]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 41c0:03d9  mov word ptr [0x7e], dx  [x8534]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.dx_.x);
    // 41c0:03dd  cmp dx, word ptr [0x80]  [x8534]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 41c0:03e1  jge 0x3eb  [x8534]
    if ((c.sf == c.of)) goto L41feb;
L41fe3:
    if (c.tracing) c.traceAt(0x41fe3);
    // 41c0:03e3  mov dx, word ptr [0x82]  [x1035]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x82u)));
    // 41c0:03e7  mov word ptr [0x7e], dx  [x1035]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.dx_.x);
L41feb:
    if (c.tracing) c.traceAt(0x41feb);
    // 41c0:03eb  mov eax, dword ptr fs:[edx]  [x8534]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:03f0  mov ebx, dword ptr fs:[edx + 4]  [x8534]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:03f6  mov edx, ebx  [x8534]
    c.dx_.e = (uint32_t)(c.b.e);
    // 41c0:03f9  sub edx, edi  [x8534]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 41c0:03fc  je 0x3c4  [x8534]
    if (c.zf) goto L41fc4;
L41ffe:
    if (c.tracing) c.traceAt(0x41ffe);
    // 41c0:03fe  mov dword ptr [0x18], edx  [x8461]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 41c0:0403  mov ecx, ebx  [x8461]
    c.c.e = (uint32_t)(c.b.e);
    // 41c0:0406  sub ecx, edi  [x8461]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 41c0:0409  sub eax, esi  [x8461]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:040c  shl eax, 0x10  [x8461]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 41c0:0410  cdq   [x8461]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:0412  idiv ecx  [x8461]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x412u); }   // #DE: int 0, then again
    // 41c0:0415  mov dword ptr cs:[0x563], eax  [x8461]
    c.w32(c.csb + (uint16_t)(0x563u), c.a.e);
    // 41c0:041a  shl esi, 0x10  [x8461]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 41c0:041e  mov dword ptr [0x10], esi  [x8461]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L42023:
    if (c.tracing) c.traceAt(0x42023);
    // 41c0:0423  xor edx, edx  [x9190]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:0426  mov dx, word ptr [0x7c]  [x9190]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 41c0:042a  mov esi, dword ptr fs:[edx]  [x9190]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:042f  mov edi, dword ptr fs:[edx + 4]  [x9190]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:0435  add dx, 8  [x9190]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 41c0:0438  mov word ptr [0x7c], dx  [x9190]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 41c0:043c  cmp dx, word ptr [0x82]  [x9190]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x82u)), true);
    // 41c0:0440  jle 0x44a  [x9190]
    if ((c.zf || c.sf != c.of)) goto L4204a;
L42042:
    if (c.tracing) c.traceAt(0x42042);
    // 41c0:0442  mov dx, word ptr [0x80]  [x1197]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 41c0:0446  mov word ptr [0x7c], dx  [x1197]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L4204a:
    if (c.tracing) c.traceAt(0x4204a);
    // 41c0:044a  mov eax, dword ptr fs:[edx]  [x9190]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:044f  mov ebx, dword ptr fs:[edx + 4]  [x9190]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:0455  mov edx, ebx  [x9190]
    c.dx_.e = (uint32_t)(c.b.e);
    // 41c0:0458  sub edx, edi  [x9190]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 41c0:045b  je 0x423  [x9190]
    if (c.zf) goto L42023;
L4205d:
    if (c.tracing) c.traceAt(0x4205d);
    // 41c0:045d  mov dword ptr [0x1c], edx  [x8461]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 41c0:0462  mov ecx, ebx  [x8461]
    c.c.e = (uint32_t)(c.b.e);
    // 41c0:0465  sub ecx, edi  [x8461]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 41c0:0468  sub eax, esi  [x8461]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:046b  shl eax, 0x10  [x8461]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 41c0:046f  cdq   [x8461]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:0471  idiv ecx  [x8461]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x471u); }   // #DE: int 0, then again
    // 41c0:0474  mov dword ptr cs:[0x56c], eax  [x8461]
    c.w32(c.csb + (uint16_t)(0x56cu), c.a.e);
    // 41c0:0479  shl esi, 0x10  [x8461]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 41c0:047d  mov dword ptr [0x14], esi  [x8461]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L42082:
    if (c.tracing) c.traceAt(0x42082);
    // 41c0:0482  cmp dword ptr [0x20], 0  [x177523]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x0u, true);
    // 41c0:0488  jl 0x558  [x177523]
    if ((c.sf != c.of)) goto L42158;
L4208c:
    if (c.tracing) c.traceAt(0x4208c);
    // 41c0:048c  mov eax, dword ptr [0x10]  [x162782]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 41c0:0490  mov edx, dword ptr [0x14]  [x162782]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 41c0:0495  sar edx, 0x10  [x162782]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 41c0:0499  sar eax, 0x10  [x162782]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 41c0:049d  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x162782]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 41c0:04a6  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x162782]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 41c0:04af  mov di, word ptr gs:[eax*8 + 0x3e80]  [x162782]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 41c0:04b8  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x162782]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 41c0:04c1  sub cx, di  [x162782]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 41c0:04c3  je 0x50f  [x162782]
    if (c.zf) goto L4210f;
L420c5:
    if (c.tracing) c.traceAt(0x420c5);
    // 41c0:04c5  js 0x65d  [x138170]
    if (c.sf) goto L4225d;
L420c9:
    if (c.tracing) c.traceAt(0x420c9);
    // 41c0:04c9  add edi, dword ptr [0x20]  [x138149]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), true));
    // 41c0:04ce  mov dx, 0x3c4  [x138149]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 41c0:04d1  mov al, 2  [x138149]
    c.a.l = (uint8_t)(0x2u);
    // 41c0:04d3  mov ah, bh  [x138149]
    c.a.h = (uint8_t)(c.b.h);
    // 41c0:04d5  out dx, ax  [x138149]
    c.ip = 0x4d6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:04d6  mov bh, byte ptr [4]  [x138149]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 41c0:04da  mov byte ptr es:[di], bh  [x138149]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 41c0:04dd  inc di  [x138149]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 41c0:04de  dec cx  [x138149]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 41c0:04df  je 0x505  [x138149]
    if (c.zf) goto L42105;
L420e1:
    if (c.tracing) c.traceAt(0x420e1);
    // 41c0:04e1  mov ax, 0xf02  [x119758]
    c.a.x = (uint16_t)(0xf02u);
    // 41c0:04e4  out dx, ax  [x119758]
    c.ip = 0x4e5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:04e5  mov al, bh  [x119758]
    c.a.l = (uint8_t)(c.b.h);
    // 41c0:04e7  mov ah, bh  [x119758]
    c.a.h = (uint8_t)(c.b.h);
    // 41c0:04e9  cmp cx, 2  [x119758]
    c.sub<16>(c.c.x, 0x2u, true);
    // 41c0:04ec  jb 0x4f8  [x119758]
    if (c.cf) goto L420f8;
L420ee:
    if (c.tracing) c.traceAt(0x420ee);
    // 41c0:04ee  test di, 1  [x106303]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 41c0:04f2  jne 0x4f8  [x106303]
    if (!c.zf) goto L420f8;
L420f4:
    if (c.tracing) c.traceAt(0x420f4);
    // 41c0:04f4  stosb byte ptr es:[di], al  [x57675]
    c.stos<8, false>(0);
    // 41c0:04f5  dec cx  [x57675]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 41c0:04f6  je 0x558  [x57675]
    if (c.zf) goto L42158;
L420f8:
    if (c.tracing) c.traceAt(0x420f8);
    // 41c0:04f8  mov si, cx  [x119758]
    c.si.x = (uint16_t)(c.c.x);
    // 41c0:04fa  shr cx, 1  [x119758]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L420fc:
    if (c.tracing) c.traceAt(0x420fc);
    // 41c0:04fc  rep stosw word ptr es:[di], ax  [x638188]
    c.stos<16, false>(1);
L420fe:
    if (c.tracing) c.traceAt(0x420fe);
    // 41c0:04fe  mov cx, si  [x119758]
    c.c.x = (uint16_t)(c.si.x);
    // 41c0:0500  and cx, 1  [x119758]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L42103:
    if (c.tracing) c.traceAt(0x42103);
    // 41c0:0503  rep stosb byte ptr es:[di], al  [x168021]
    c.stos<8, false>(1);
L42105:
    if (c.tracing) c.traceAt(0x42105);
    // 41c0:0505  mov ah, bl  [x138149]
    c.a.h = (uint8_t)(c.b.l);
    // 41c0:0507  mov al, 2  [x138149]
    c.a.l = (uint8_t)(0x2u);
    // 41c0:0509  out dx, ax  [x138149]
    c.ip = 0x50au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:050a  mov byte ptr es:[di], bh  [x138149]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 41c0:050d  jmp 0x558  [x138149]
    goto L42158;
L4210f:
    if (c.tracing) c.traceAt(0x4210f);
    // 41c0:050f  mov si, 0x8000  [x24612]
    c.si.x = (uint16_t)(0x8000u);
    // 41c0:0512  mov cx, ax  [x24612]
    c.c.x = (uint16_t)(c.a.x);
    // 41c0:0514  and cx, dx  [x24612]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 41c0:0516  js 0x558  [x24612]
    if (c.sf) goto L42158;
L42118:
    if (c.tracing) c.traceAt(0x42118);
    // 41c0:0518  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x24510]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 41c0:0521  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x24510]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 41c0:052a  mov cx, ax  [x24510]
    c.c.x = (uint16_t)(c.a.x);
    // 41c0:052c  and cx, dx  [x24510]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 41c0:052e  js 0x558  [x24510]
    if (c.sf) goto L42158;
L42130:
    if (c.tracing) c.traceAt(0x42130);
    // 41c0:0530  add edi, dword ptr [0x20]  [x17221]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), false));
    // 41c0:0535  mov bx, 0xf03  [x17221]
    c.b.x = (uint16_t)(0xf03u);
    // 41c0:0538  mov cx, ax  [x17221]
    c.c.x = (uint16_t)(c.a.x);
    // 41c0:053a  and cl, bl  [x17221]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 41c0:053c  mov al, bh  [x17221]
    c.a.l = (uint8_t)(c.b.h);
    // 41c0:053e  shl al, cl  [x17221]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 41c0:0540  mov cx, dx  [x17221]
    c.c.x = (uint16_t)(c.dx_.x);
    // 41c0:0542  not cx  [x17221]
    c.c.x = (uint16_t)(~(c.c.x));
    // 41c0:0544  and cl, bl  [x17221]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 41c0:0546  mov ah, bh  [x17221]
    c.a.h = (uint8_t)(c.b.h);
    // 41c0:0548  shr ah, cl  [x17221]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 41c0:054a  and ah, al  [x17221]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 41c0:054c  mov dx, 0x3c4  [x17221]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 41c0:054f  mov al, 2  [x17221]
    c.a.l = (uint8_t)(0x2u);
    // 41c0:0551  out dx, ax  [x17221]
    c.ip = 0x552u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:0552  mov al, byte ptr [4]  [x17221]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 41c0:0555  mov byte ptr es:[di], al  [x17221]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L42158:
    if (c.tracing) c.traceAt(0x42158);
    // 41c0:0558  add dword ptr [0x20], 0x50  [x177502]
    c.w32(c.dsb + (uint16_t)(0x20u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x50u, false));
    // 41c0:055e  add dword ptr [0x10], 0  [x177502]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x42163)), false));
    // 41c0:0567  add dword ptr [0x14], 0x30000  [x177502]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x4216c)), true));
    // 41c0:0570  dec dword ptr [0x18]  [x177502]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 41c0:0575  jne 0x5e1  [x177502]
    if (!c.zf) goto L421e1;
L42177:
    if (c.tracing) c.traceAt(0x42177);
    // 41c0:0577  mov ax, word ptr [0x7c]  [x14315]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 41c0:057a  cmp ax, word ptr [0x7e]  [x14315]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 41c0:057e  je 0x65d  [x14315]
    if (c.zf) goto L4225d;
L42182:
    if (c.tracing) c.traceAt(0x42182);
    // 41c0:0582  xor edx, edx  [x8737]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:0585  mov dx, word ptr [0x7e]  [x8737]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 41c0:0589  mov esi, dword ptr fs:[edx]  [x8737]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:058e  mov edi, dword ptr fs:[edx + 4]  [x8737]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:0594  sub dx, 8  [x8737]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 41c0:0597  mov word ptr [0x7e], dx  [x8737]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.dx_.x);
    // 41c0:059b  cmp dx, word ptr [0x80]  [x8737]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 41c0:059f  jge 0x5a9  [x8737]
    if ((c.sf == c.of)) goto L421a9;
L421a1:
    if (c.tracing) c.traceAt(0x421a1);
    // 41c0:05a1  mov dx, word ptr [0x82]  [x2587]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x82u)));
    // 41c0:05a5  mov word ptr [0x7e], dx  [x2587]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.dx_.x);
L421a9:
    if (c.tracing) c.traceAt(0x421a9);
    // 41c0:05a9  mov eax, dword ptr fs:[edx]  [x8737]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:05ae  mov ebx, dword ptr fs:[edx + 4]  [x8737]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:05b4  mov edx, ebx  [x8737]
    c.dx_.e = (uint32_t)(c.b.e);
    // 41c0:05b7  sub edx, edi  [x8737]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 41c0:05ba  je 0x582  [x8737]
    if (c.zf) goto L42182;
L421bc:
    if (c.tracing) c.traceAt(0x421bc);
    // 41c0:05bc  mov dword ptr [0x18], edx  [x7676]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 41c0:05c1  mov ecx, ebx  [x7676]
    c.c.e = (uint32_t)(c.b.e);
    // 41c0:05c4  sub ecx, edi  [x7676]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 41c0:05c7  sub eax, esi  [x7676]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:05ca  shl eax, 0x10  [x7676]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 41c0:05ce  cdq   [x7676]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:05d0  idiv ecx  [x7676]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x5d0u); }   // #DE: int 0, then again
    // 41c0:05d3  mov dword ptr cs:[0x563], eax  [x7676]
    c.w32(c.csb + (uint16_t)(0x563u), c.a.e);
    // 41c0:05d8  shl esi, 0x10  [x7676]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 41c0:05dc  mov dword ptr [0x10], esi  [x7676]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L421e1:
    if (c.tracing) c.traceAt(0x421e1);
    // 41c0:05e1  dec dword ptr [0x1c]  [x170863]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 41c0:05e6  jne 0x650  [x170863]
    if (!c.zf) goto L42250;
L421e8:
    if (c.tracing) c.traceAt(0x421e8);
    // 41c0:05e8  mov ax, word ptr [0x7c]  [x7454]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 41c0:05eb  cmp ax, word ptr [0x7e]  [x7454]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 41c0:05ef  je 0x65d  [x7454]
    if (c.zf) goto L4225d;
L421f1:
    if (c.tracing) c.traceAt(0x421f1);
    // 41c0:05f1  xor edx, edx  [x8514]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:05f4  mov dx, word ptr [0x7c]  [x8514]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 41c0:05f8  mov esi, dword ptr fs:[edx]  [x8514]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:05fd  mov edi, dword ptr fs:[edx + 4]  [x8514]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:0603  add dx, 8  [x8514]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 41c0:0606  mov word ptr [0x7c], dx  [x8514]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 41c0:060a  cmp dx, word ptr [0x82]  [x8514]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x82u)), true);
    // 41c0:060e  jle 0x618  [x8514]
    if ((c.zf || c.sf != c.of)) goto L42218;
L42210:
    if (c.tracing) c.traceAt(0x42210);
    // 41c0:0610  mov dx, word ptr [0x80]  [x4205]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 41c0:0614  mov word ptr [0x7c], dx  [x4205]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L42218:
    if (c.tracing) c.traceAt(0x42218);
    // 41c0:0618  mov eax, dword ptr fs:[edx]  [x8514]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 41c0:061d  mov ebx, dword ptr fs:[edx + 4]  [x8514]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 41c0:0623  mov edx, ebx  [x8514]
    c.dx_.e = (uint32_t)(c.b.e);
    // 41c0:0626  sub edx, edi  [x8514]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 41c0:0629  je 0x5f1  [x8514]
    if (c.zf) goto L421f1;
L4222b:
    if (c.tracing) c.traceAt(0x4222b);
    // 41c0:062b  mov dword ptr [0x1c], edx  [x7454]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 41c0:0630  mov ecx, ebx  [x7454]
    c.c.e = (uint32_t)(c.b.e);
    // 41c0:0633  sub ecx, edi  [x7454]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 41c0:0636  sub eax, esi  [x7454]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 41c0:0639  shl eax, 0x10  [x7454]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 41c0:063d  cdq   [x7454]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:063f  idiv ecx  [x7454]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x63fu); }   // #DE: int 0, then again
    // 41c0:0642  mov dword ptr cs:[0x56c], eax  [x7454]
    c.w32(c.csb + (uint16_t)(0x56cu), c.a.e);
    // 41c0:0647  shl esi, 0x10  [x7454]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 41c0:064b  mov dword ptr [0x14], esi  [x7454]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L42250:
    if (c.tracing) c.traceAt(0x42250);
    // 41c0:0650  cmp dword ptr [0x20], 0x4ab0  [x170863]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), (c.r32(0x42255)), true);
    // 41c0:0659  jl 0x482  [x170863]
    if ((c.sf != c.of)) goto L42082;
L4225d:
    if (c.tracing) c.traceAt(0x4225d);
    // 41c0:065d  retf   [x8461]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4225e:
    if (c.tracing) c.traceAt(0x4225e);
    // 41c0:065e  mov ah, 0xf  [x303]
    c.a.h = (uint8_t)(0xfu);
    // 41c0:0660  mov dx, 0x3c4  [x303]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 41c0:0663  mov al, 2  [x303]
    c.a.l = (uint8_t)(0x2u);
    // 41c0:0665  out dx, ax  [x303]
    c.ip = 0x666u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:0666  mov ax, word ptr [0x8c]  [x303]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8cu)));
    // 41c0:0669  not ax  [x303]
    c.a.x = (uint16_t)(~(c.a.x));
    // 41c0:066b  and ax, 0x600  [x303]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 41c0:066e  add ax, 0xa000  [x303]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 41c0:0671  mov es, ax  [x303]
    c.loadEs(c.a.x);
    // 41c0:0673  mov eax, 0  [x303]
    c.a.e = (uint32_t)(0x0u);
    // 41c0:0679  cld   [x303]
    c.df = false;
    // 41c0:067a  mov ax, 0x2ed0  [x303]
    c.a.x = (uint16_t)(0x2ed0u);
    // 41c0:067d  mov fs, ax  [x303]
    c.loadFs(c.a.x);
    // 41c0:067f  mov si, 0  [x303]
    c.si.x = (uint16_t)(0x0u);
    // 41c0:0682  mov bl, 0xf0  [x303]
    c.b.l = (uint8_t)(0xf0u);
    // 41c0:0684  mov edi, 0  [x303]
    c.di.e = (uint32_t)(0x0u);
L4228a:
    if (c.tracing) c.traceAt(0x4228a);
    // 41c0:068a  mov al, byte ptr fs:[si]  [x72720]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 41c0:068d  mov ah, al  [x72720]
    c.a.h = (uint8_t)(c.a.l);
    // 41c0:068f  mov dx, ax  [x72720]
    c.dx_.x = (uint16_t)(c.a.x);
    // 41c0:0691  shl eax, 0x10  [x72720]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 41c0:0695  mov ax, dx  [x72720]
    c.a.x = (uint16_t)(c.dx_.x);
    // 41c0:0697  mov cx, 0x14  [x72720]
    c.c.x = (uint16_t)(0x14u);
L4229a:
    if (c.tracing) c.traceAt(0x4229a);
    // 41c0:069a  rep stosd dword ptr es:[di], eax  [x1527120]
    c.stos<32, false>(1);
L4229d:
    if (c.tracing) c.traceAt(0x4229d);
    // 41c0:069d  inc si  [x72720]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 41c0:069e  dec bl  [x72720]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 41c0:06a0  jne 0x68a  [x72720]
    if (!c.zf) goto L4228a;
L422a2:
    if (c.tracing) c.traceAt(0x422a2);
    // 41c0:06a2  retf   [x303]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L422a3:
    if (c.tracing) c.traceAt(0x422a3);
    // 41c0:06a3  mov ax, 0x319a  [x1]
    c.a.x = (uint16_t)(0x319au);
    // 41c0:06a6  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 41c0:06a8  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 41c0:06ab  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L422ae:
    if (c.tracing) c.traceAt(0x422ae);
    // 41c0:06ae  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 41c0:06b1  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 41c0:06b2  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 41c0:06b5  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 41c0:06b6  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 41c0:06b9  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 41c0:06ba  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 41c0:06bd  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 41c0:06be  loop 0x6ae  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L422ae;
L422c0:
    if (c.tracing) c.traceAt(0x422c0);
    // 41c0:06c0  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 41c0:06c3  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 41c0:06c5  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L422c8:
    if (c.tracing) c.traceAt(0x422c8);
    // 41c0:06c8  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 41c0:06ca  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 41c0:06cd  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 41c0:06ce  push cx  [x320]
    c.push16(c.c.x);
    // 41c0:06cf  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 41c0:06d1  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 41c0:06d4  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 41c0:06d6  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 41c0:06d8  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 41c0:06da  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 41c0:06dc  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 41c0:06de  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41c0:06df  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 41c0:06e0  push cx  [x320]
    c.push16(c.c.x);
    // 41c0:06e1  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 41c0:06e3  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 41c0:06e5  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 41c0:06e8  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 41c0:06ea  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 41c0:06ec  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 41c0:06ee  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 41c0:06f0  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 41c0:06f1  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 41c0:06f3  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 41c0:06f4  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41c0:06f5  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 41c0:06f7  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 41c0:06fa  jb 0x6fe  [x320]
    if (c.cf) goto L422fe;
L422fc:
    if (c.tracing) c.traceAt(0x422fc);
    // 41c0:06fc  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L422fe:
    if (c.tracing) c.traceAt(0x422fe);
    // 41c0:06fe  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 41c0:06ff  loop 0x6c8  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L422c8;
L42301:
    if (c.tracing) c.traceAt(0x42301);
    // 41c0:0701  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L42304:
    if (c.tracing) c.traceAt(0x42304);
    // 41c0:0704  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 41c0:0707  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 41c0:0708  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 41c0:070b  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 41c0:070c  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 41c0:070f  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 41c0:0710  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 41c0:0713  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 41c0:0714  loop 0x704  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L42304;
L42316:
    if (c.tracing) c.traceAt(0x42316);
    // 41c0:0716  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42318:
    if (c.tracing) c.traceAt(0x42318);
    // 41c0:0718  les bx, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:071c  mov byte ptr [0x8e], 0  [x301]
    c.w8(c.dsb + (uint16_t)(0x8eu), 0x0u);
    // 41c0:0721  cmp dword ptr es:[bx + 4], 0  [x301]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)), 0x0u, true);
    // 41c0:0727  je 0x72e  [x301]
    if (c.zf) goto L4232e;
L42329:
    if (c.tracing) c.traceAt(0x42329);
    // 41c0:0729  mov byte ptr [0x8e], 1  [x301]
    c.w8(c.dsb + (uint16_t)(0x8eu), 0x1u);
L4232e:
    if (c.tracing) c.traceAt(0x4232e);
    // 41c0:072e  mov ebx, dword ptr [0]  [x301]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:0733  cmp dword ptr es:[bx - 4], 0  [x301]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 41c0:0739  je 0x866  [x301]
    if (c.zf) goto L42466;
L4233d:
    if (c.tracing) c.traceAt(0x4233d);
    // 41c0:073d  mov dword ptr [8], 0  [x301]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 41c0:0746  les bx, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:074a  mov esi, dword ptr [0]  [x301]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:074f  mov dword ptr [0x8f], esi  [x301]
    c.w32(c.dsb + (uint16_t)(0x8fu), c.si.e);
    // 41c0:0754  mov eax, dword ptr es:[si - 8]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 41c0:0759  mov dword ptr [0xc], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
    // 41c0:075d  les bx, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:0761  lfs bp, ptr [0x40]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x40u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x40u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 41c0:0766  xor ebx, ebx  [x301]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 41c0:0769  xor ebp, ebp  [x301]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 41c0:076c  xor edx, edx  [x301]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L4236f:
    if (c.tracing) c.traceAt(0x4236f);
    // 41c0:076f  mov ebx, esi  [x31605]
    c.b.e = (uint32_t)(c.si.e);
    // 41c0:0772  mov bx, word ptr es:[ebx]  [x31605]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 41c0:0776  mov ecx, dword ptr es:[ebx]  [x31605]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:077b  mov edi, ecx  [x31605]
    c.di.e = (uint32_t)(c.c.e);
    // 41c0:077e  add ebx, 0x18  [x31605]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 41c0:0782  xor eax, eax  [x31605]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 41c0:0785  mov ebp, dword ptr es:[ebx]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:078a  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:078d  add eax, dword ptr fs:[ebp*8 + 0x10]  [x31605]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 41c0:0797  mov ebp, dword ptr es:[ebx + 4]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 41c0:079d  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:07a0  add eax, dword ptr fs:[ebp*8 + 0x10]  [x31605]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 41c0:07aa  mov ebp, dword ptr es:[ebx + 8]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 41c0:07b0  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:07b3  add eax, dword ptr fs:[ebp*8 + 0x10]  [x31605]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 41c0:07bd  add ebx, 0xc  [x31605]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 41c0:07c1  sub ecx, 3  [x31605]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 41c0:07c5  je 0x7df  [x31605]
    if (c.zf) goto L423df;
L423c7:
    if (c.tracing) c.traceAt(0x423c7);
    // 41c0:07c7  mov ebp, dword ptr es:[ebx]  [x26488]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:07cc  add ebp, ebp  [x26488]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:07cf  add eax, dword ptr fs:[ebp*8 + 0x10]  [x26488]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 41c0:07d9  add ebx, 4  [x26488]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 41c0:07dd  loop 0x7c7  [x26488]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L423c7;
L423df:
    if (c.tracing) c.traceAt(0x423df);
    // 41c0:07df  cmp edi, 4  [x31605]
    c.sub<32>(c.di.e, 0x4u, true);
    // 41c0:07e3  jne 0x7eb  [x31605]
    if (!c.zf) goto L423eb;
L423e5:
    if (c.tracing) c.traceAt(0x423e5);
    // 41c0:07e5  sar eax, 0xa  [x26488]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xau) & 31), true));
    // 41c0:07e9  jmp 0x7f7  [x26488]
    goto L423f7;
L423eb:
    if (c.tracing) c.traceAt(0x423eb);
    // 41c0:07eb  sar eax, 8  [x5117]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 41c0:07ef  cdq   [x5117]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 41c0:07f1  mov ecx, edi  [x5117]
    c.c.e = (uint32_t)(c.di.e);
    // 41c0:07f4  idiv ecx  [x5117]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x7f4u); }   // #DE: int 0, then again
L423f7:
    if (c.tracing) c.traceAt(0x423f7);
    // 41c0:07f7  add eax, 0x8000  [x31605]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 41c0:07fd  mov word ptr es:[esi + 2], ax  [x31605]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 41c0:0802  add esi, 4  [x31605]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 41c0:0806  inc dword ptr [8]  [x31605]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 41c0:080b  mov eax, dword ptr [0xc]  [x31605]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 41c0:080f  cmp dword ptr [8], eax  [x31605]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 41c0:0814  jb 0x76f  [x31605]
    if (c.cf) goto L4236f;
L42418:
    if (c.tracing) c.traceAt(0x42418);
    // 41c0:0818  mov esi, dword ptr [0x8f]  [x301]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x8fu)));
    // 41c0:081d  mov dword ptr [0], esi  [x301]
    c.w32(c.dsb + (uint16_t)(0u), c.si.e);
    // 41c0:0822  mov edi, 4  [x301]
    c.di.e = (uint32_t)(0x4u);
    // 41c0:0828  les bx, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:082c  mov ebp, dword ptr [0]  [x301]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:0831  mov edx, dword ptr es:[ebp - 8]  [x301]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
L42437:
    if (c.tracing) c.traceAt(0x42437);
    // 41c0:0837  mov ebx, ebp  [x549]
    c.b.e = (uint32_t)(c.bp.e);
    // 41c0:083a  mov ecx, edx  [x549]
    c.c.e = (uint32_t)(c.dx_.e);
    // 41c0:083d  xor esi, esi  [x549]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
L42440:
    if (c.tracing) c.traceAt(0x42440);
    // 41c0:0840  mov eax, dword ptr es:[ebx]  [x57645]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:0845  cmp eax, dword ptr es:[ebx + 4]  [x57645]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 41c0:084b  jae 0x85b  [x57645]
    if (!c.cf) goto L4245b;
L4244d:
    if (c.tracing) c.traceAt(0x4244d);
    // 41c0:084d  xchg dword ptr es:[ebx + 4], eax  [x7156]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 41c0:0853  mov dword ptr es:[ebx], eax  [x7156]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 41c0:0858  not esi  [x7156]
    c.si.e = (uint32_t)(~(c.si.e));
L4245b:
    if (c.tracing) c.traceAt(0x4245b);
    // 41c0:085b  add ebx, edi  [x57645]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, true));
    // 41c0:085e  loop 0x840  [x57645]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L42440;
L42460:
    if (c.tracing) c.traceAt(0x42460);
    // 41c0:0860  cmp esi, 0  [x549]
    c.sub<32>(c.si.e, 0x0u, true);
    // 41c0:0864  jne 0x837  [x549]
    if (!c.zf) goto L42437;
L42466:
    if (c.tracing) c.traceAt(0x42466);
    // 41c0:0866  mov ax, word ptr [0x8c]  [x301]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8cu)));
    // 41c0:0869  not ax  [x301]
    c.a.x = (uint16_t)(~(c.a.x));
    // 41c0:086b  and ax, 0x600  [x301]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 41c0:086e  add ax, 0xa000  [x301]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 41c0:0871  mov word ptr [0x93], ax  [x301]
    c.w16(c.dsb + (uint16_t)(0x93u), c.a.x);
    // 41c0:0874  mov dword ptr [8], 0  [x301]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 41c0:087d  les bx, ptr [0x3c]  [x301]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:0881  mov ebx, dword ptr [0]  [x301]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:0886  mov eax, dword ptr es:[bx - 8]  [x301]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 41c0:088b  mov dword ptr [0xc], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L4248f:
    if (c.tracing) c.traceAt(0x4248f);
    // 41c0:088f  xor ebx, ebx  [x31605]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 41c0:0892  xor ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 41c0:0895  xor edx, edx  [x31605]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 41c0:0898  les bx, ptr [0x3c]  [x31605]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3cu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3cu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41c0:089c  lfs bp, ptr [0x40]  [x31605]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x40u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x40u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 41c0:08a1  mov ax, 0x413a  [x31605]
    c.a.x = (uint16_t)(0x413au);
    // 41c0:08a4  mov gs, ax  [x31605]
    c.loadGs(c.a.x);
    // 41c0:08a6  mov ebx, dword ptr [0]  [x31605]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:08ab  mov bx, word ptr es:[bx]  [x31605]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 41c0:08ae  mov ecx, dword ptr es:[ebx + 0x14]  [x31605]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 41c0:08b4  mov dword ptr [4], ecx  [x31605]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 41c0:08b9  mov ecx, dword ptr es:[ebx]  [x31605]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:08be  mov dword ptr gs:[edx], ecx  [x31605]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 41c0:08c3  add ebx, 0x18  [x31605]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 41c0:08c7  mov ebp, dword ptr es:[ebx]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:08cc  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:08cf  mov ecx, ebp  [x31605]
    c.c.e = (uint32_t)(c.bp.e);
    // 41c0:08d2  mov ebp, dword ptr es:[ebx + 4]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 41c0:08d8  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:08db  mov edi, dword ptr fs:[ebp*8 + 8]  [x31605]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 41c0:08e5  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x31605]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 41c0:08ef  mov ebp, dword ptr es:[ebx + 8]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 41c0:08f5  add ebp, ebp  [x31605]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:08f8  mov edx, dword ptr fs:[ebp*8 + 8]  [x31605]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 41c0:0902  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x31605]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 41c0:090c  mov ebx, ecx  [x31605]
    c.b.e = (uint32_t)(c.c.e);
    // 41c0:090f  mov eax, ebp  [x31605]
    c.a.e = (uint32_t)(c.bp.e);
    // 41c0:0912  sub eax, esi  [x31605]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 41c0:0915  mov dword ptr cs:[0x92c], eax  [x31605]
    c.w32(c.csb + (uint16_t)(0x92cu), c.a.e);
    // 41c0:091a  jmp 0x91c  [x31605]
    goto L4251c;
L4251c:
    if (c.tracing) c.traceAt(0x4251c);
    // 41c0:091c  mov eax, edi  [x31605]
    c.a.e = (uint32_t)(c.di.e);
    // 41c0:091f  sub eax, dword ptr fs:[ebx*8 + 8]  [x31605]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 41c0:0929  imul eax, eax, 0xfffffff9  [x31605]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x4252c))));
    // 41c0:0930  mov ecx, esi  [x31605]
    c.c.e = (uint32_t)(c.si.e);
    // 41c0:0933  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x31605]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 41c0:093d  mov dword ptr cs:[0x94e], ecx  [x31605]
    c.w32(c.csb + (uint16_t)(0x94eu), c.c.e);
    // 41c0:0943  jmp 0x945  [x31605]
    goto L42545;
L42545:
    if (c.tracing) c.traceAt(0x42545);
    // 41c0:0945  mov ecx, edx  [x31605]
    c.c.e = (uint32_t)(c.dx_.e);
    // 41c0:0948  sub ecx, edi  [x31605]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 41c0:094b  imul ecx, ecx, 6  [x31605]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4254e))));
    // 41c0:0952  cmp eax, ecx  [x31605]
    c.sub<32>(c.a.e, c.c.e, true);
    // 41c0:0955  jl 0xaff  [x31605]
    if ((c.sf != c.of)) goto L426ff;
L42559:
    if (c.tracing) c.traceAt(0x42559);
    // 41c0:0959  je 0xaff  [x15736]
    if (c.zf) goto L426ff;
L4255d:
    if (c.tracing) c.traceAt(0x4255d);
    // 41c0:095d  mov ebx, dword ptr [0]  [x15496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:0962  mov bx, word ptr es:[bx]  [x15496]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 41c0:0965  mov ecx, dword ptr es:[ebx]  [x15496]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:096a  mov dword ptr gs:[0], ecx  [x15496]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 41c0:0970  add ebx, 0x18  [x15496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 41c0:0974  mov dword ptr gs:[0xc], edi  [x15496]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 41c0:097a  mov dword ptr gs:[0x10], esi  [x15496]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 41c0:0980  mov dword ptr gs:[0x14], edx  [x15496]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 41c0:0986  mov dword ptr gs:[0x18], ebp  [x15496]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 41c0:098c  mov ebp, dword ptr es:[ebx]  [x15496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:0991  add ebp, ebp  [x15496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:0994  mov eax, dword ptr fs:[ebp*8 + 8]  [x15496]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 41c0:099e  mov dword ptr gs:[4], eax  [x15496]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 41c0:09a3  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x15496]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 41c0:09ad  mov dword ptr gs:[8], eax  [x15496]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 41c0:09b2  mov edx, 0x1c  [x15496]
    c.dx_.e = (uint32_t)(0x1cu);
    // 41c0:09b8  add ebx, 0xc  [x15496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 41c0:09bc  sub ecx, 3  [x15496]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 41c0:09c0  je 0x9f3  [x15496]
    if (c.zf) goto L425f3;
L425c2:
    if (c.tracing) c.traceAt(0x425c2);
    // 41c0:09c2  mov ebp, dword ptr es:[ebx]  [x13048]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 41c0:09c7  add ebp, ebp  [x13048]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 41c0:09ca  mov eax, dword ptr fs:[ebp*8 + 8]  [x13048]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 41c0:09d4  mov dword ptr gs:[edx], eax  [x13048]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 41c0:09d9  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x13048]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 41c0:09e3  mov dword ptr gs:[edx + 4], eax  [x13048]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 41c0:09e9  add edx, 8  [x13048]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 41c0:09ed  add ebx, 4  [x13048]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 41c0:09f1  loop 0x9c2  [x13048]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L425c2;
L425f3:
    if (c.tracing) c.traceAt(0x425f3);
    // 41c0:09f3  xor edi, edi  [x15496]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 41c0:09f6  mov ecx, dword ptr gs:[edi]  [x15496]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 41c0:09fb  lea eax, [edi + 4]  [x15496]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 41c0:0a00  mov word ptr [0x80], ax  [x15496]
    c.w16(c.dsb + (uint16_t)(0x80u), c.a.x);
    // 41c0:0a03  lea ebx, [ecx - 1]  [x15496]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 41c0:0a08  lea eax, [eax + ebx*8]  [x15496]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 41c0:0a0d  mov word ptr [0x82], ax  [x15496]
    c.w16(c.dsb + (uint16_t)(0x82u), c.a.x);
    // 41c0:0a10  dec ecx  [x15496]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 41c0:0a12  add edi, 8  [x15496]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 41c0:0a16  mov eax, dword ptr gs:[edi]  [x15496]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 41c0:0a1b  mov ebx, edi  [x15496]
    c.b.e = (uint32_t)(c.di.e);
    // 41c0:0a1e  mov ebp, eax  [x15496]
    c.bp.e = (uint32_t)(c.a.e);
L42621:
    if (c.tracing) c.traceAt(0x42621);
    // 41c0:0a21  add edi, 8  [x44040]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 41c0:0a25  mov edx, dword ptr gs:[edi]  [x44040]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 41c0:0a2a  cmp ebp, edx  [x44040]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 41c0:0a2d  jle 0xa35  [x44040]
    if ((c.zf || c.sf != c.of)) goto L42635;
L4262f:
    if (c.tracing) c.traceAt(0x4262f);
    // 41c0:0a2f  mov ebp, edx  [x20873]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 41c0:0a32  mov ebx, edi  [x20873]
    c.b.e = (uint32_t)(c.di.e);
L42635:
    if (c.tracing) c.traceAt(0x42635);
    // 41c0:0a35  cmp eax, edx  [x44040]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 41c0:0a38  jge 0xa3d  [x44040]
    if ((c.sf == c.of)) goto L4263d;
L4263a:
    if (c.tracing) c.traceAt(0x4263a);
    // 41c0:0a3a  mov eax, edx  [x10529]
    c.a.e = (uint32_t)(c.dx_.e);
L4263d:
    if (c.tracing) c.traceAt(0x4263d);
    // 41c0:0a3d  loop 0xa21  [x44040]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L42621;
L4263f:
    if (c.tracing) c.traceAt(0x4263f);
    // 41c0:0a3f  mov ecx, ebp  [x15496]
    c.c.e = (uint32_t)(c.bp.e);
    // 41c0:0a42  sub ebx, 4  [x15496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 41c0:0a46  cmp ecx, 0xef  [x15496]
    c.sub<32>(c.c.e, 0xefu, true);
    // 41c0:0a4d  jg 0xaff  [x15496]
    if ((!c.zf && c.sf == c.of)) goto L426ff;
L42651:
    if (c.tracing) c.traceAt(0x42651);
    // 41c0:0a51  cmp eax, ecx  [x12789]
    c.sub<32>(c.a.e, c.c.e, true);
    // 41c0:0a54  je 0xaff  [x12789]
    if (c.zf) goto L426ff;
L42658:
    if (c.tracing) c.traceAt(0x42658);
    // 41c0:0a58  cmp ax, 0  [x12789]
    c.sub<16>(c.a.x, 0x0u, true);
    // 41c0:0a5b  jl 0xaff  [x12789]
    if ((c.sf != c.of)) goto L426ff;
L4265f:
    if (c.tracing) c.traceAt(0x4265f);
    // 41c0:0a5f  imul eax, eax, 0x50  [x8594]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 41c0:0a63  cmp eax, 0x4ab0  [x8594]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 41c0:0a69  jle 0xa71  [x8594]
    if ((c.zf || c.sf != c.of)) goto L42671;
L4266b:
    if (c.tracing) c.traceAt(0x4266b);
    // 41c0:0a6b  mov eax, 0x4ab0  [x747]
    c.a.e = (uint32_t)(0x4ab0u);
L42671:
    if (c.tracing) c.traceAt(0x42671);
    // 41c0:0a71  mov word ptr cs:[0x655], ax  [x8594]
    c.w16(c.csb + (uint16_t)(0x655u), c.a.x);
    // 41c0:0a75  mov word ptr [0x7c], bx  [x8594]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.b.x);
    // 41c0:0a79  mov word ptr [0x7e], bx  [x8594]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.b.x);
    // 41c0:0a7d  cmp byte ptr [0x8e], 1  [x8594]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x8eu)), 0x1u, true);
    // 41c0:0a82  jne 0xae3  [x8594]
    if (!c.zf) { t = 0x426e3u; goto dispatch; }
L42684:
    if (c.tracing) c.traceAt(0x42684);
    // 41c0:0a84  mov ebx, dword ptr [0]  [x8594]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 41c0:0a89  mov bx, word ptr es:[bx]  [x8594]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 41c0:0a8c  mov edi, dword ptr es:[ebx + 0xc]  [x8594]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0xcu)));
    // 41c0:0a92  mov ecx, dword ptr es:[ebx + 8]  [x8594]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 41c0:0a98  mov ebx, dword ptr es:[ebx + 4]  [x8594]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 41c0:0a9e  imul eax, ebx, 0x19e  [x8594]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x426a1))));
    // 41c0:0aa5  imul ebp, ecx, 0xfffffed4  [x8594]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x426a8))));
    // 41c0:0aac  add eax, ebp  [x8594]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:0aaf  imul ebp, edi, 0xd  [x8594]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x426b2))));
    // 41c0:0ab6  add eax, ebp  [x8594]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 41c0:0ab9  neg eax  [x8594]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, true));
    // 41c0:0abc  js 0xaff  [x8594]
    if (c.sf) goto L426ff;
L426be:
    if (c.tracing) c.traceAt(0x426be);
    // 41c0:0abe  shr eax, 0xb  [x8461]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0xbu) & 31), false));
    // 41c0:0ac2  cmp eax, 7  [x8461]
    c.sub<32>(c.a.e, 0x7u, true);
    // 41c0:0ac6  jle 0xaca  [x8461]
    if ((c.zf || c.sf != c.of)) goto L426ca;
    c.notTranslated(0x426c8, "fall-through");
L426ca:
    if (c.tracing) c.traceAt(0x426ca);
    // 41c0:0aca  cmp eax, 0  [x8461]
    c.sub<32>(c.a.e, 0x0u, true);
    // 41c0:0ace  jge 0xad2  [x8461]
    if ((c.sf == c.of)) goto L426d2;
    c.notTranslated(0x426d0, "fall-through");
L426d2:
    if (c.tracing) c.traceAt(0x426d2);
    // 41c0:0ad2  mov bx, word ptr [4]  [x8461]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 41c0:0ad6  shl bl, 3  [x8461]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x3u) & 31), false));
    // 41c0:0ad9  add al, bl  [x8461]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, true));
    // 41c0:0adb  mov ah, al  [x8461]
    c.a.h = (uint8_t)(c.a.l);
    // 41c0:0add  mov dword ptr [4], eax  [x8461]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 41c0:0ae1  jmp 0xaec  [x8461]
    goto L426ec;
L426ec:
    if (c.tracing) c.traceAt(0x426ec);
    // 41c0:0aec  mov ax, 0x413a  [x8461]
    c.a.x = (uint16_t)(0x413au);
    // 41c0:0aef  mov fs, ax  [x8461]
    c.loadFs(c.a.x);
    // 41c0:0af1  mov cx, 0x319a  [x8461]
    c.c.x = (uint16_t)(0x319au);
    // 41c0:0af4  mov gs, cx  [x8461]
    c.loadGs(c.c.x);
    // 41c0:0af6  mov ax, word ptr [0x93]  [x8461]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x93u)));
    // 41c0:0af9  mov es, ax  [x8461]
    c.loadEs(c.a.x);
    // 41c0:0afb  push cs  [x8461]
    c.push16(c.cs);
    // 41c0:0afc  call 0x3ac  [x8461]
    c.push16(0xaffu); code_15(c, 0x41facu); if (c.ip != 0xaffu) c.badReturn(0x426fc);
L426ff:
    if (c.tracing) c.traceAt(0x426ff);
    // 41c0:0aff  add dword ptr [0], 4  [x31605]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 41c0:0b05  inc dword ptr [8]  [x31605]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 41c0:0b0a  mov eax, dword ptr [0xc]  [x31605]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 41c0:0b0e  cmp dword ptr [8], eax  [x31605]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 41c0:0b13  jne 0x88f  [x31605]
    if (!c.zf) goto L4248f;
L42717:
    if (c.tracing) c.traceAt(0x42717);
    // 41c0:0b17  retf   [x301]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42718:
    if (c.tracing) c.traceAt(0x42718);
    // 41c0:0b18  retf   [x301]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42719:
    if (c.tracing) c.traceAt(0x42719);
    // 41c0:0b19  push ds  [x1]
    c.push16(c.ds);
    // 41c0:0b1a  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 41c0:0b1c  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 41c0:0b1f  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 41c0:0b21  out dx, al  [x1]
    c.ip = 0xb22u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0b22  cld   [x1]
    c.df = false;
    // 41c0:0b23  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 41c0:0b26  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 41c0:0b28  out dx, al  [x1]
    c.ip = 0xb29u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0b29  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L4272c:
    if (c.tracing) c.traceAt(0x4272c);
    // 41c0:0b2c  mov dx, 0x3c9  [x255]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 41c0:0b2f  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb30u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 41c0:0b30  out dx, al  [x255]
    c.ip = 0xb31u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0b31  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb32u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 41c0:0b32  out dx, al  [x255]
    c.ip = 0xb33u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0b33  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb34u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 41c0:0b34  out dx, al  [x255]
    c.ip = 0xb35u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0b35  loop 0xb2c  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4272c;
L42737:
    if (c.tracing) c.traceAt(0x42737);
    // 41c0:0b37  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 41c0:0b38  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42739:
    if (c.tracing) c.traceAt(0x42739);
    // 41c0:0b39  mov ax, word ptr [0x8c]  [x303]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8cu)));
    // 41c0:0b3c  not ax  [x303]
    c.a.x = (uint16_t)(~(c.a.x));
    // 41c0:0b3e  and ax, 0x600  [x303]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 41c0:0b41  shl ah, 4  [x303]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 41c0:0b44  mov dx, 0x3d4  [x303]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 41c0:0b47  mov al, 0xc  [x303]
    c.a.l = (uint8_t)(0xcu);
    // 41c0:0b49  out dx, ax  [x303]
    c.ip = 0xb4au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 41c0:0b4a  not word ptr [0x8c]  [x303]
    c.w16(c.dsb + (uint16_t)(0x8cu), ~(c.r16(c.dsb + (uint16_t)(0x8cu))));
    // 41c0:0b4e  retf   [x303]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4274f:
    if (c.tracing) c.traceAt(0x4274f);
    // 41c0:0b4f  mov ax, 0x2f10  [x301]
    c.a.x = (uint16_t)(0x2f10u);
    // 41c0:0b52  mov fs, ax  [x301]
    c.loadFs(c.a.x);
    // 41c0:0b54  mov bx, word ptr fs:[0]  [x301]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 41c0:0b59  mov cx, word ptr [0xb9]  [x301]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb9u)));
    // 41c0:0b5d  shl cx, 2  [x301]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 41c0:0b60  add bx, cx  [x301]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 41c0:0b62  mov bx, word ptr fs:[bx]  [x301]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 41c0:0b65  mov cx, word ptr fs:[bx]  [x301]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 41c0:0b68  mov dx, word ptr fs:[bx + 2]  [x301]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 41c0:0b6c  mov word ptr [0x3c], cx  [x301]
    c.w16(c.dsb + (uint16_t)(0x3cu), c.c.x);
    // 41c0:0b70  mov word ptr [0x3e], dx  [x301]
    c.w16(c.dsb + (uint16_t)(0x3eu), c.dx_.x);
    // 41c0:0b74  mov ax, word ptr fs:[bx + 4]  [x301]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 41c0:0b78  movzx eax, ax  [x301]
    c.a.e = (uint32_t)(c.a.x);
    // 41c0:0b7c  mov dword ptr [0], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 41c0:0b80  mov di, word ptr [0x36]  [x301]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x36u)));
L42784:
    if (c.tracing) c.traceAt(0x42784);
    // 41c0:0b84  mov eax, dword ptr fs:[bx + 0x16]  [x302]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 41c0:0b89  mov edx, dword ptr fs:[bx + 0x1a]  [x302]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 41c0:0b8e  mov ecx, dword ptr fs:[bx + 0x1e]  [x302]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 41c0:0b93  sar eax, 8  [x302]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 41c0:0b97  sar edx, 8  [x302]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 41c0:0b9b  sar ecx, 8  [x302]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 41c0:0b9f  mov dword ptr [0x6c], eax  [x302]
    c.w32(c.dsb + (uint16_t)(0x6cu), c.a.e);
    // 41c0:0ba3  mov dword ptr [0x70], edx  [x302]
    c.w32(c.dsb + (uint16_t)(0x70u), c.dx_.e);
    // 41c0:0ba8  mov dword ptr [0x74], ecx  [x302]
    c.w32(c.dsb + (uint16_t)(0x74u), c.c.e);
    // 41c0:0bad  mov eax, dword ptr fs:[bx + 0x16]  [x302]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 41c0:0bb2  mov edx, dword ptr fs:[bx + 0x1a]  [x302]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 41c0:0bb7  mov ecx, dword ptr fs:[bx + 0x1e]  [x302]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 41c0:0bbc  add eax, dword ptr fs:[bx + 6]  [x302]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 41c0:0bc1  add edx, dword ptr fs:[bx + 0xa]  [x302]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 41c0:0bc6  add ecx, dword ptr fs:[bx + 0xe]  [x302]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 41c0:0bcb  mov ebp, 0x3ffff  [x302]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 41c0:0bd1  and eax, ebp  [x302]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 41c0:0bd4  and edx, ebp  [x302]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 41c0:0bd7  and ecx, ebp  [x302]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 41c0:0bda  mov dword ptr fs:[bx + 0x16], eax  [x302]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 41c0:0bdf  mov dword ptr fs:[bx + 0x1a], edx  [x302]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 41c0:0be4  mov dword ptr fs:[bx + 0x1e], ecx  [x302]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 41c0:0be9  dec di  [x302]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 41c0:0bea  jne 0xb84  [x302]
    if (!c.zf) goto L42784;
L427ec:
    if (c.tracing) c.traceAt(0x427ec);
    // 41c0:0bec  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0bed  call 0x2c1  [x301]
    c.push16(0xbf0u); code_15(c, 0x41ec1u); if (c.ip != 0xbf0u) c.badReturn(0x427ed);
L427f0:
    if (c.tracing) c.traceAt(0x427f0);
    // 41c0:0bf0  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0bf1  call 0xb18  [x301]
    c.push16(0xbf4u); code_15(c, 0x42718u); if (c.ip != 0xbf4u) c.badReturn(0x427f1);
L427f4:
    if (c.tracing) c.traceAt(0x427f4);
    // 41c0:0bf4  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0bf5  call 0x718  [x301]
    c.push16(0xbf8u); code_15(c, 0x42318u); if (c.ip != 0xbf8u) c.badReturn(0x427f5);
L427f8:
    if (c.tracing) c.traceAt(0x427f8);
    // 41c0:0bf8  retf   [x301]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L427f9:
    if (c.tracing) c.traceAt(0x427f9);
    // 41c0:0bf9  mov ax, 0x419a  [x1]
    c.a.x = (uint16_t)(0x419au);
    // 41c0:0bfc  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 41c0:0bfe  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 41c0:0c01  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 41c0:0c03  out dx, al  [x1]
    c.ip = 0xc04u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0c04  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 41c0:0c06  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c07  call 0  [x1]
    c.push16(0xc0au); code_15(c, 0x41c00u); if (c.ip != 0xc0au) c.badReturn(0x42807);
L4280a:
    if (c.tracing) c.traceAt(0x4280a);
    // 41c0:0c0a  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c0b  call 0x65e  [x1]
    c.push16(0xc0eu); code_15(c, 0x4225eu); if (c.ip != 0xc0eu) c.badReturn(0x4280b);
L4280e:
    if (c.tracing) c.traceAt(0x4280e);
    // 41c0:0c0e  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c0f  call 0xb39  [x1]
    c.push16(0xc12u); code_15(c, 0x42739u); if (c.ip != 0xc12u) c.badReturn(0x4280f);
L42812:
    if (c.tracing) c.traceAt(0x42812);
    // 41c0:0c12  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c13  call 0x65e  [x1]
    c.push16(0xc16u); code_15(c, 0x4225eu); if (c.ip != 0xc16u) c.badReturn(0x42813);
L42816:
    if (c.tracing) c.traceAt(0x42816);
    // 41c0:0c16  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c17  call 0xb39  [x1]
    c.push16(0xc1au); code_15(c, 0x42739u); if (c.ip != 0xc1au) c.badReturn(0x42817);
L4281a:
    if (c.tracing) c.traceAt(0x4281a);
    // 41c0:0c1a  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 41c0:0c1d  mov al, 0xff  [x1]
    c.a.l = (uint8_t)(0xffu);
    // 41c0:0c1f  out dx, al  [x1]
    c.ip = 0xc20u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 41c0:0c20  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c21  call 0x6a3  [x1]
    c.push16(0xc24u); code_15(c, 0x422a3u); if (c.ip != 0xc24u) c.badReturn(0x42821);
L42824:
    if (c.tracing) c.traceAt(0x42824);
    // 41c0:0c24  mov ax, 0x2fa6  [x1]
    c.a.x = (uint16_t)(0x2fa6u);
    // 41c0:0c27  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 41c0:0c2a  mov si, 0x40  [x1]
    c.si.x = (uint16_t)(0x40u);
    // 41c0:0c2d  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 41c0:0c2f  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 41c0:0c32  mov ax, 0x2ee0  [x1]
    c.a.x = (uint16_t)(0x2ee0u);
    // 41c0:0c35  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 41c0:0c38  push cs  [x1]
    c.push16(c.cs);
    // 41c0:0c39  call 0xb19  [x1]
    c.push16(0xc3cu); code_15(c, 0x42719u); if (c.ip != 0xc3cu) c.badReturn(0x42839);
L4283c:
    if (c.tracing) c.traceAt(0x4283c);
    // 41c0:0c3c  mov dword ptr [0xbd], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbdu), 0x0u);
    // 41c0:0c45  mov dword ptr [0xc1], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xc1u), 0x0u);
    // 41c0:0c4e  mov dword ptr [0xc5], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xc5u), 0x0u);
    // 41c0:0c57  mov dword ptr [0x99], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x99u), 0x0u);
    // 41c0:0c60  mov dword ptr [0x95], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x95u), 0x0u);
    // 41c0:0c69  mov dword ptr [0x9d], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x9du), 0x0u);
    // 41c0:0c72  mov dword ptr [0xa5], 0x989680  [x1]
    c.w32(c.dsb + (uint16_t)(0xa5u), 0x989680u);
    // 41c0:0c7b  mov dword ptr [0xa1], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xa1u), 0x0u);
    // 41c0:0c84  mov dword ptr [0xa9], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xa9u), 0x0u);
    // 41c0:0c8d  mov word ptr [0x36], 2  [x1]
    c.w16(c.dsb + (uint16_t)(0x36u), 0x2u);
    // 41c0:0c93  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 41c0:0c96  int 0xff  [x1]
    c.ip = 0xc98u; c.d32 = false; c.intr(0xff, 0xc98u);
L42898:
    if (c.tracing) c.traceAt(0x42898);
    // 41c0:0c98  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0c99  call 0x65e  [x301]
    c.push16(0xc9cu); code_15(c, 0x4225eu); if (c.ip != 0xc9cu) c.badReturn(0x42899);
L4289c:
    if (c.tracing) c.traceAt(0x4289c);
    // 41c0:0c9c  mov eax, dword ptr [0xa1]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 41c0:0ca0  mov dword ptr [0x95], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x95u), c.a.e);
    // 41c0:0ca4  mov eax, dword ptr [0xa5]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa5u)));
    // 41c0:0ca8  mov dword ptr [0x99], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x99u), c.a.e);
    // 41c0:0cac  mov eax, dword ptr [0xa9]  [x301]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa9u)));
    // 41c0:0cb0  mov dword ptr [0x9d], eax  [x301]
    c.w32(c.dsb + (uint16_t)(0x9du), c.a.e);
    // 41c0:0cb4  mov word ptr [0xb9], 0  [x301]
    c.w16(c.dsb + (uint16_t)(0xb9u), 0x0u);
    // 41c0:0cba  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0cbb  call 0xb4f  [x301]
    c.push16(0xcbeu); code_15(c, 0x4274fu); if (c.ip != 0xcbeu) c.badReturn(0x428bb);
L428be:
    if (c.tracing) c.traceAt(0x428be);
    // 41c0:0cbe  push cs  [x301]
    c.push16(c.cs);
    // 41c0:0cbf  call 0xb39  [x301]
    c.push16(0xcc2u); code_15(c, 0x42739u); if (c.ip != 0xcc2u) c.badReturn(0x428bf);
L428c2:
    if (c.tracing) c.traceAt(0x428c2);
    // 41c0:0cc2  mov bx, 0xe  [x301]
    c.b.x = (uint16_t)(0xeu);
    // 41c0:0cc5  int 0xff  [x301]
    c.ip = 0xcc7u; c.d32 = false; c.intr(0xff, 0xcc7u);
L428c7:
    if (c.tracing) c.traceAt(0x428c7);
    // 41c0:0cc7  mov word ptr [0x36], ax  [x301]
    c.w16(c.dsb + (uint16_t)(0x36u), c.a.x);
    // 41c0:0cca  mov cx, word ptr [0x36]  [x301]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x36u)));
L428ce:
    if (c.tracing) c.traceAt(0x428ce);
    // 41c0:0cce  add dword ptr [0xa1], 0  [x301]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa1u)), 0x0u, false));
    // 41c0:0cd4  add dword ptr [0xa5], 0xfffe7960  [x301]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa5u)), 0xfffe7960u, false));
    // 41c0:0cdd  add dword ptr [0xa9], 0  [x301]
    c.w32(c.dsb + (uint16_t)(0xa9u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xa9u)), 0x0u, true));
    // 41c0:0ce3  loop 0xcce  [x301]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L428ce;
L428e5:
    if (c.tracing) c.traceAt(0x428e5);
    // 41c0:0ce5  cmp dword ptr [0xa5], 0xfeced300  [x301]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xa5u)), 0xfeced300u, true);
    // 41c0:0cee  jge 0xc98  [x301]
    if ((c.sf == c.of)) goto L42898;
L428f0:
    if (c.tracing) c.traceAt(0x428f0);
    // 41c0:0cf0  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 41c0:0cf2  int 0x21  [x1]
    c.ip = 0xcf4u; c.d32 = false; c.intr(0x21, 0xcf4u);
    c.notTranslated(0x428f4, "fall-through");
}

static Register reg15(15, {0x41c00, 0x41c0e, 0x41ec1, 0x41ec5, 0x41ee6, 0x41f91, 0x41f93, 0x41fac, 0x41fc4, 0x41fe3, 0x41feb, 0x41ffe, 0x42023, 0x42042, 0x4204a, 0x4205d, 0x42082, 0x4208c, 0x420c5, 0x420c9, 0x420e1, 0x420ee, 0x420f4, 0x420f8, 0x420fc, 0x420fe, 0x42103, 0x42105, 0x4210f, 0x42118, 0x42130, 0x42158, 0x42177, 0x42182, 0x421a1, 0x421a9, 0x421bc, 0x421e1, 0x421e8, 0x421f1, 0x42210, 0x42218, 0x4222b, 0x42250, 0x4225d, 0x4225e, 0x4228a, 0x4229a, 0x4229d, 0x422a2, 0x422a3, 0x422ae, 0x422c0, 0x422c8, 0x422fc, 0x422fe, 0x42301, 0x42304, 0x42316, 0x42318, 0x42329, 0x4232e, 0x4233d, 0x4236f, 0x423c7, 0x423df, 0x423e5, 0x423eb, 0x423f7, 0x42418, 0x42437, 0x42440, 0x4244d, 0x4245b, 0x42460, 0x42466, 0x4248f, 0x4251c, 0x42545, 0x42559, 0x4255d, 0x425c2, 0x425f3, 0x42621, 0x4262f, 0x42635, 0x4263a, 0x4263d, 0x4263f, 0x42651, 0x42658, 0x4265f, 0x4266b, 0x42671, 0x42684, 0x426be, 0x426ca, 0x426d2, 0x426ec, 0x426ff, 0x42717, 0x42718, 0x42719, 0x4272c, 0x42737, 0x42739, 0x4274f, 0x42784, 0x427ec, 0x427f0, 0x427f4, 0x427f8, 0x427f9, 0x4280a, 0x4280e, 0x42812, 0x42816, 0x4281a, 0x42824, 0x4283c, 0x42898, 0x4289c, 0x428be, 0x428c2, 0x428c7, 0x428ce, 0x428e5, 0x428f0}, code_15);

}  // namespace angel
