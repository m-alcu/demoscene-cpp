// Program 13, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_13(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x5121e: goto L5121e;
    case 0x514ec: goto L514ec;
    case 0x514f0: goto L514f0;
    case 0x51511: goto L51511;
    case 0x515ba: goto L515ba;
    case 0x515bc: goto L515bc;
    case 0x515d4: goto L515d4;
    case 0x515ec: goto L515ec;
    case 0x5160b: goto L5160b;
    case 0x51613: goto L51613;
    case 0x51626: goto L51626;
    case 0x5164b: goto L5164b;
    case 0x5166a: goto L5166a;
    case 0x51672: goto L51672;
    case 0x51685: goto L51685;
    case 0x516aa: goto L516aa;
    case 0x516b4: goto L516b4;
    case 0x516ed: goto L516ed;
    case 0x516f1: goto L516f1;
    case 0x51709: goto L51709;
    case 0x51716: goto L51716;
    case 0x5171c: goto L5171c;
    case 0x51720: goto L51720;
    case 0x51724: goto L51724;
    case 0x51726: goto L51726;
    case 0x5172b: goto L5172b;
    case 0x5172d: goto L5172d;
    case 0x51737: goto L51737;
    case 0x51740: goto L51740;
    case 0x51758: goto L51758;
    case 0x51780: goto L51780;
    case 0x5179f: goto L5179f;
    case 0x517aa: goto L517aa;
    case 0x517c9: goto L517c9;
    case 0x517d1: goto L517d1;
    case 0x517e4: goto L517e4;
    case 0x51809: goto L51809;
    case 0x51810: goto L51810;
    case 0x51819: goto L51819;
    case 0x51838: goto L51838;
    case 0x51840: goto L51840;
    case 0x51853: goto L51853;
    case 0x51878: goto L51878;
    case 0x51885: goto L51885;
    case 0x51886: goto L51886;
    case 0x518bc: goto L518bc;
    case 0x518be: goto L518be;
    case 0x518cb: goto L518cb;
    case 0x518d6: goto L518d6;
    case 0x518e8: goto L518e8;
    case 0x518f0: goto L518f0;
    case 0x51924: goto L51924;
    case 0x51926: goto L51926;
    case 0x51929: goto L51929;
    case 0x5192c: goto L5192c;
    case 0x5193e: goto L5193e;
    case 0x51940: goto L51940;
    case 0x51951: goto L51951;
    case 0x51956: goto L51956;
    case 0x51965: goto L51965;
    case 0x51997: goto L51997;
    case 0x519ef: goto L519ef;
    case 0x51a07: goto L51a07;
    case 0x51a0d: goto L51a0d;
    case 0x51a13: goto L51a13;
    case 0x51a1f: goto L51a1f;
    case 0x51a40: goto L51a40;
    case 0x51a5f: goto L51a5f;
    case 0x51a68: goto L51a68;
    case 0x51a75: goto L51a75;
    case 0x51a83: goto L51a83;
    case 0x51a88: goto L51a88;
    case 0x51a8e: goto L51a8e;
    case 0x51ab7: goto L51ab7;
    case 0x51b44: goto L51b44;
    case 0x51b6d: goto L51b6d;
    case 0x51b81: goto L51b81;
    case 0x51b85: goto L51b85;
    case 0x51bea: goto L51bea;
    case 0x51c1b: goto L51c1b;
    case 0x51c49: goto L51c49;
    case 0x51c57: goto L51c57;
    case 0x51c5d: goto L51c5d;
    case 0x51c62: goto L51c62;
    case 0x51c65: goto L51c65;
    case 0x51c67: goto L51c67;
    case 0x51c79: goto L51c79;
    case 0x51c80: goto L51c80;
    case 0x51c87: goto L51c87;
    case 0x51c99: goto L51c99;
    case 0x51cac: goto L51cac;
    case 0x51ce6: goto L51ce6;
    case 0x51cf0: goto L51cf0;
    case 0x51cf2: goto L51cf2;
    case 0x51d0c: goto L51d0c;
    case 0x51d1f: goto L51d1f;
    case 0x51d37: goto L51d37;
    case 0x51d38: goto L51d38;
    case 0x51d54: goto L51d54;
    case 0x51d67: goto L51d67;
    case 0x51d72: goto L51d72;
    case 0x51d74: goto L51d74;
    case 0x51d8a: goto L51d8a;
    case 0x51dbf: goto L51dbf;
    case 0x51e27: goto L51e27;
    case 0x51e2b: goto L51e2b;
    case 0x51e2f: goto L51e2f;
    case 0x51e33: goto L51e33;
    case 0x51e34: goto L51e34;
    case 0x51e48: goto L51e48;
    case 0x51e51: goto L51e51;
    case 0x51e5a: goto L51e5a;
    case 0x51e5b: goto L51e5b;
    case 0x51e64: goto L51e64;
    case 0x51e7c: goto L51e7c;
    case 0x51e8e: goto L51e8e;
    case 0x51ecf: goto L51ecf;
    case 0x51ed3: goto L51ed3;
    case 0x51edd: goto L51edd;
    case 0x51ee1: goto L51ee1;
    case 0x51ee6: goto L51ee6;
    case 0x51eed: goto L51eed;
    case 0x51f0a: goto L51f0a;
    case 0x51f15: goto L51f15;
    default: c.callLinear(t); return;
    }
L5121e:
    if (c.tracing) c.traceAt(0x5121e);
    // 5121:000e  mov ax, 0x24f1  [x209]
    c.a.x = (uint16_t)(0x24f1u);
    // 5121:0011  mov es, ax  [x209]
    c.loadEs(c.a.x);
    // 5121:0013  mov ebx, dword ptr [0x6a]  [x209]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 5121:0018  mov edi, dword ptr [0x6e]  [x209]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 5121:001d  add ebx, ebx  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5121:0020  add edi, edi  [x209]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 5121:0023  mov ebp, ebx  [x209]
    c.bp.e = (uint32_t)(c.b.e);
    // 5121:0026  add ebx, edi  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 5121:0029  sub ebp, edi  [x209]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 5121:002c  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:0036  add eax, dword ptr es:[ebp*2 + 0x3000]  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5121:0040  sar eax, 1  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5121:0043  mov dword ptr [0x46], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x46u), c.a.e);
    // 5121:0047  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:0051  add eax, dword ptr es:[ebp*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5121:005b  sar eax, 1  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5121:005e  mov dword ptr [0x4a], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x4au), c.a.e);
    // 5121:0062  mov ebx, edi  [x209]
    c.b.e = (uint32_t)(c.di.e);
    // 5121:0065  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:006f  mov dword ptr [0x4e], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.a.e);
    // 5121:0073  mov ebp, dword ptr [0x72]  [x209]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 5121:0078  add ebp, ebp  [x209]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:007b  mov eax, ebx  [x209]
    c.a.e = (uint32_t)(c.b.e);
    // 5121:007e  sub ebx, ebp  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 5121:0081  add ebp, eax  [x209]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5121:0084  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:008e  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5121:0098  sar eax, 1  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5121:009b  mov dword ptr [0x5a], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x5au), c.a.e);
    // 5121:009f  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:00a9  add eax, dword ptr es:[ebp*2 + 0x3000]  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5121:00b3  sar eax, 1  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5121:00b6  mov dword ptr [0x66], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x66u), c.a.e);
    // 5121:00ba  mov ebx, dword ptr [0x6a]  [x209]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 5121:00bf  add ebx, dword ptr [0x6e]  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x6eu)), false));
    // 5121:00c4  sub ebx, dword ptr [0x72]  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 5121:00c9  add ebx, ebx  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5121:00cc  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:00d6  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:00e0  mov edx, ecx  [x209]
    c.dx_.e = (uint32_t)(c.c.e);
    // 5121:00e3  neg edx  [x209]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 5121:00e6  mov edi, eax  [x209]
    c.di.e = (uint32_t)(c.a.e);
    // 5121:00e9  mov esi, dword ptr [0x72]  [x209]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 5121:00ee  add esi, esi  [x209]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5121:00f1  add ebx, esi  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5121:00f4  add ebx, esi  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 5121:00f7  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:0101  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:010b  sub eax, esi  [x209]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:010e  sub ecx, ebp  [x209]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5121:0111  sub edx, ebp  [x209]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 5121:0114  add edi, esi  [x209]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 5121:0117  mov esi, dword ptr [0x6e]  [x209]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6eu)));
    // 5121:011c  add esi, esi  [x209]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5121:011f  sub ebx, esi  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5121:0122  sub ebx, esi  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5121:0125  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:012f  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:0139  add eax, esi  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 5121:013c  add ecx, ebp  [x209]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 5121:013f  add edx, ebp  [x209]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5121:0142  sub edi, esi  [x209]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5121:0145  mov esi, dword ptr [0x72]  [x209]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x72u)));
    // 5121:014a  add esi, esi  [x209]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 5121:014d  sub ebx, esi  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5121:0150  sub ebx, esi  [x209]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 5121:0153  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:015d  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:0167  sub eax, esi  [x209]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:016a  sub ecx, ebp  [x209]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 5121:016d  add edx, ebp  [x209]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 5121:0170  sub edi, esi  [x209]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 5121:0173  sar eax, 2  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 5121:0177  sar ecx, 2  [x209]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 5121:017b  sar edx, 2  [x209]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 5121:017f  sar edi, 2  [x209]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 5121:0183  mov dword ptr [0x52], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x52u), c.a.e);
    // 5121:0187  mov dword ptr [0x56], ecx  [x209]
    c.w32(c.dsb + (uint16_t)(0x56u), c.c.e);
    // 5121:018c  mov dword ptr [0x5e], edx  [x209]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.dx_.e);
    // 5121:0191  mov dword ptr [0x62], edi  [x209]
    c.w32(c.dsb + (uint16_t)(0x62u), c.di.e);
    // 5121:0196  mov ebx, dword ptr [0x6a]  [x209]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6au)));
    // 5121:019b  mov ebp, ebx  [x209]
    c.bp.e = (uint32_t)(c.b.e);
    // 5121:019e  add ebx, dword ptr [0x72]  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 5121:01a3  sub ebp, dword ptr [0x72]  [x209]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x72u)), false));
    // 5121:01a8  add ebx, ebx  [x209]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 5121:01ab  add ebp, ebp  [x209]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:01ae  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:01b8  add eax, dword ptr es:[ebp*2 + 0x3400]  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5121:01c2  sar eax, 1  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 5121:01c5  add dword ptr [0x52], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x52u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x52u)), c.a.e, false));
    // 5121:01ca  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:01d4  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x209]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5121:01de  sar ecx, 1  [x209]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 5121:01e1  sub dword ptr [0x56], ecx  [x209]
    c.w32(c.dsb + (uint16_t)(0x56u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x56u)), c.c.e, false));
    // 5121:01e6  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x209]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 5121:01f0  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x209]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 5121:01fa  sar edx, 1  [x209]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 5121:01fd  sub dword ptr [0x5e], edx  [x209]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), c.dx_.e, false));
    // 5121:0202  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x209]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 5121:020c  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x209]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 5121:0216  sar edi, 1  [x209]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 5121:0219  sub dword ptr [0x62], edi  [x209]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x62u)), c.di.e, false));
    // 5121:021e  sar dword ptr [0x5e], 3  [x209]
    c.w32(c.dsb + (uint16_t)(0x5eu), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x5eu)), (int)((0x3u) & 31), false));
    // 5121:0224  sar dword ptr [0x62], 3  [x209]
    c.w32(c.dsb + (uint16_t)(0x62u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x62u)), (int)((0x3u) & 31), false));
    // 5121:022a  sar dword ptr [0x66], 3  [x209]
    c.w32(c.dsb + (uint16_t)(0x66u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x66u)), (int)((0x3u) & 31), false));
    // 5121:0230  shl dword ptr [0x46], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x46u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x46u)), (int)((0x7u) & 31), false));
    // 5121:0236  shl dword ptr [0x4a], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x4au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4au)), (int)((0x7u) & 31), false));
    // 5121:023c  shl dword ptr [0x4e], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x4eu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4eu)), (int)((0x7u) & 31), false));
    // 5121:0242  shl dword ptr [0x52], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x52u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x52u)), (int)((0x7u) & 31), false));
    // 5121:0248  shl dword ptr [0x56], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x56u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x56u)), (int)((0x7u) & 31), false));
    // 5121:024e  shl dword ptr [0x5a], 7  [x209]
    c.w32(c.dsb + (uint16_t)(0x5au), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5au)), (int)((0x7u) & 31), false));
    // 5121:0254  mov eax, dword ptr [0x46]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x46u)));
    // 5121:0258  mov dword ptr cs:[0x341], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x341u), c.a.e);
    // 5121:025d  mov eax, dword ptr [0x4a]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4au)));
    // 5121:0261  mov dword ptr cs:[0x348], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x348u), c.a.e);
    // 5121:0266  mov eax, dword ptr [0x4e]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4eu)));
    // 5121:026a  mov dword ptr cs:[0x352], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x352u), c.a.e);
    // 5121:026f  mov eax, dword ptr [0x52]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x52u)));
    // 5121:0273  imul eax, eax, 0xa0  [x209]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 5121:027a  mov ecx, 0xf0  [x209]
    c.c.e = (uint32_t)(0xf0u);
    // 5121:0280  cdq   [x209]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0282  idiv ecx  [x209]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x282u); }   // #DE: int 0, then again
    // 5121:0285  mov dword ptr cs:[0x372], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x372u), c.a.e);
    // 5121:028a  mov eax, dword ptr [0x56]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x56u)));
    // 5121:028e  imul eax, eax, 0xa0  [x209]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 5121:0295  mov ecx, 0xf0  [x209]
    c.c.e = (uint32_t)(0xf0u);
    // 5121:029b  cdq   [x209]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:029d  idiv ecx  [x209]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x29du); }   // #DE: int 0, then again
    // 5121:02a0  mov dword ptr cs:[0x379], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x379u), c.a.e);
    // 5121:02a5  mov eax, dword ptr [0x5a]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5au)));
    // 5121:02a9  imul eax, eax, 0xa0  [x209]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0xa0u));
    // 5121:02b0  mov ecx, 0xf0  [x209]
    c.c.e = (uint32_t)(0xf0u);
    // 5121:02b6  cdq   [x209]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:02b8  idiv ecx  [x209]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x2b8u); }   // #DE: int 0, then again
    // 5121:02bb  mov dword ptr cs:[0x383], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x383u), c.a.e);
    // 5121:02c0  mov eax, dword ptr [0x5e]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 5121:02c4  mov dword ptr cs:[0x312], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x312u), c.a.e);
    // 5121:02c9  mov eax, dword ptr [0x62]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 5121:02cd  mov dword ptr cs:[0x319], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x319u), c.a.e);
    // 5121:02d2  mov eax, dword ptr [0x66]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 5121:02d6  mov dword ptr cs:[0x323], eax  [x209]
    c.w32(c.csb + (uint16_t)(0x323u), c.a.e);
    // 5121:02db  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L514ec:
    if (c.tracing) c.traceAt(0x514ec);
    // 5121:02dc  push cs  [x209]
    c.push16(c.cs);
    // 5121:02dd  call 0xe  [x209]
    c.push16(0x2e0u); code_13(c, 0x5121eu); if (c.ip != 0x2e0u) c.badReturn(0x514ed);
L514f0:
    if (c.tracing) c.traceAt(0x514f0);
    // 5121:02e0  lfs si, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5121:02e5  movzx esi, si  [x209]
    c.si.e = (uint32_t)(c.si.x);
    // 5121:02e9  mov eax, dword ptr fs:[esi]  [x209]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 5121:02ee  shl eax, 4  [x209]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 5121:02f2  mov word ptr [0x36], ax  [x209]
    c.w16(c.dsb + (uint16_t)(0x36u), c.a.x);
    // 5121:02f5  add esi, 8  [x209]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 5121:02f9  add word ptr [0x36], si  [x209]
    c.w16(c.dsb + (uint16_t)(0x36u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x36u)), c.si.x, true));
    // 5121:02fd  les di, ptr [0x3e]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L51511:
    if (c.tracing) c.traceAt(0x51511);
    // 5121:0301  mov ebx, dword ptr fs:[si]  [x28633]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 5121:0305  mov ecx, dword ptr fs:[si + 4]  [x28633]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 5121:030a  mov edi, dword ptr fs:[si + 8]  [x28633]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 5121:030f  imul eax, ebx, 9  [x28633]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x51522))));
    // 5121:0316  imul ebp, ecx, 0xa  [x28633]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x51529))));
    // 5121:031d  add eax, ebp  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:0320  imul ebp, edi, 0x3e  [x28633]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x51533))));
    // 5121:0327  add eax, ebp  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:032a  add eax, dword ptr [0x9b]  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x9bu)), false));
    // 5121:032f  mov dword ptr es:[si + 8], eax  [x28633]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 5121:0334  add eax, 0x7530  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x7530u, false));
    // 5121:033a  mov dword ptr [0x76], eax  [x28633]
    c.w32(c.dsb + (uint16_t)(0x76u), c.a.e);
    // 5121:033e  imul ebp, ebx, 0xf400  [x28633]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x51551))));
    // 5121:0345  imul eax, ecx, 0x3d00  [x28633]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x51558))));
    // 5121:034c  add ebp, eax  [x28633]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5121:034f  imul eax, edi, 0xffffd100  [x28633]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x51562))));
    // 5121:0356  add eax, ebp  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:0359  add eax, dword ptr [0x93]  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x93u)), false));
    // 5121:035e  cdq   [x28633]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0360  idiv dword ptr [0x76]  [x28633]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x360u); }   // #DE: int 0, then again
    // 5121:0365  add eax, 0x9f  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 5121:036b  mov dword ptr es:[si], eax  [x28633]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 5121:036f  imul ebp, ebx, 0x2caa  [x28633]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x51582))));
    // 5121:0376  imul eax, ecx, 0xffff5c56  [x28633]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x51589))));
    // 5121:037d  add ebp, eax  [x28633]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 5121:0380  imul eax, edi, 0x14aa  [x28633]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x51593))));
    // 5121:0387  add eax, ebp  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:038a  add eax, dword ptr [0x97]  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x97u)), false));
    // 5121:038f  cdq   [x28633]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0391  idiv dword ptr [0x76]  [x28633]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x76u)))) { c.d32 = false; c.intr(0, 0x391u); }   // #DE: int 0, then again
    // 5121:0396  add eax, 0x46  [x28633]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x46u, false));
    // 5121:039a  mov dword ptr es:[si + 4], eax  [x28633]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 5121:039f  add si, 0x10  [x28633]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 5121:03a2  cmp si, word ptr [0x36]  [x28633]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x36u)), true);
    // 5121:03a6  jb 0x301  [x28633]
    if (c.cf) goto L51511;
L515ba:
    if (c.tracing) c.traceAt(0x515ba);
    // 5121:03aa  jmp 0x3ac  [x209]
    goto L515bc;
L515bc:
    if (c.tracing) c.traceAt(0x515bc);
    // 5121:03ac  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L515d4:
    if (c.tracing) c.traceAt(0x515d4);
    // 5121:03c4  xor edx, edx  [x6535]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:03c7  mov dx, word ptr [0x7a]  [x6535]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 5121:03cb  mov eax, dword ptr fs:[edx + 4]  [x6535]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:03d1  imul eax, eax, 0x50  [x6535]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 5121:03d5  mov dword ptr [0x20], eax  [x6535]
    c.w32(c.dsb + (uint16_t)(0x20u), c.a.e);
    // 5121:03d9  xor edi, edi  [x6535]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L515ec:
    if (c.tracing) c.traceAt(0x515ec);
    // 5121:03dc  xor edx, edx  [x7001]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:03df  mov dx, word ptr [0x7c]  [x7001]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 5121:03e3  mov esi, dword ptr fs:[edx]  [x7001]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:03e8  mov edi, dword ptr fs:[edx + 4]  [x7001]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:03ee  sub dx, 8  [x7001]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 5121:03f1  mov word ptr [0x7c], dx  [x7001]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 5121:03f5  cmp dx, word ptr [0x7e]  [x7001]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 5121:03f9  jge 0x403  [x7001]
    if ((c.sf == c.of)) goto L51613;
L5160b:
    if (c.tracing) c.traceAt(0x5160b);
    // 5121:03fb  mov dx, word ptr [0x80]  [x1552]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 5121:03ff  mov word ptr [0x7c], dx  [x1552]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L51613:
    if (c.tracing) c.traceAt(0x51613);
    // 5121:0403  mov eax, dword ptr fs:[edx]  [x7001]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:0408  mov ebx, dword ptr fs:[edx + 4]  [x7001]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:040e  mov edx, ebx  [x7001]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5121:0411  sub edx, edi  [x7001]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5121:0414  je 0x3dc  [x7001]
    if (c.zf) goto L515ec;
L51626:
    if (c.tracing) c.traceAt(0x51626);
    // 5121:0416  mov dword ptr [0x18], edx  [x6535]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 5121:041b  mov ecx, ebx  [x6535]
    c.c.e = (uint32_t)(c.b.e);
    // 5121:041e  sub ecx, edi  [x6535]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5121:0421  sub eax, esi  [x6535]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:0424  shl eax, 0x10  [x6535]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5121:0428  cdq   [x6535]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:042a  idiv ecx  [x6535]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x42au); }   // #DE: int 0, then again
    // 5121:042d  mov dword ptr cs:[0x57b], eax  [x6535]
    c.w32(c.csb + (uint16_t)(0x57bu), c.a.e);
    // 5121:0432  shl esi, 0x10  [x6535]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5121:0436  mov dword ptr [0x10], esi  [x6535]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L5164b:
    if (c.tracing) c.traceAt(0x5164b);
    // 5121:043b  xor edx, edx  [x8089]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:043e  mov dx, word ptr [0x7a]  [x8089]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 5121:0442  mov esi, dword ptr fs:[edx]  [x8089]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:0447  mov edi, dword ptr fs:[edx + 4]  [x8089]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:044d  add dx, 8  [x8089]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 5121:0450  mov word ptr [0x7a], dx  [x8089]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 5121:0454  cmp dx, word ptr [0x80]  [x8089]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 5121:0458  jle 0x462  [x8089]
    if ((c.zf || c.sf != c.of)) goto L51672;
L5166a:
    if (c.tracing) c.traceAt(0x5166a);
    // 5121:045a  mov dx, word ptr [0x7e]  [x1918]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 5121:045e  mov word ptr [0x7a], dx  [x1918]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L51672:
    if (c.tracing) c.traceAt(0x51672);
    // 5121:0462  mov eax, dword ptr fs:[edx]  [x8089]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:0467  mov ebx, dword ptr fs:[edx + 4]  [x8089]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:046d  mov edx, ebx  [x8089]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5121:0470  sub edx, edi  [x8089]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5121:0473  je 0x43b  [x8089]
    if (c.zf) goto L5164b;
L51685:
    if (c.tracing) c.traceAt(0x51685);
    // 5121:0475  mov dword ptr [0x1c], edx  [x6535]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 5121:047a  mov ecx, ebx  [x6535]
    c.c.e = (uint32_t)(c.b.e);
    // 5121:047d  sub ecx, edi  [x6535]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5121:0480  sub eax, esi  [x6535]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:0483  shl eax, 0x10  [x6535]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5121:0487  cdq   [x6535]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0489  idiv ecx  [x6535]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x489u); }   // #DE: int 0, then again
    // 5121:048c  mov dword ptr cs:[0x584], eax  [x6535]
    c.w32(c.csb + (uint16_t)(0x584u), c.a.e);
    // 5121:0491  shl esi, 0x10  [x6535]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5121:0495  mov dword ptr [0x14], esi  [x6535]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L516aa:
    if (c.tracing) c.traceAt(0x516aa);
    // 5121:049a  cmp dword ptr [0x20], 0  [x46663]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x0u, true);
    // 5121:04a0  jl 0x570  [x46663]
    if ((c.sf != c.of)) goto L51780;
L516b4:
    if (c.tracing) c.traceAt(0x516b4);
    // 5121:04a4  mov eax, dword ptr [0x10]  [x45758]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 5121:04a8  mov edx, dword ptr [0x14]  [x45758]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 5121:04ad  sar edx, 0x10  [x45758]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 5121:04b1  sar eax, 0x10  [x45758]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5121:04b5  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x45758]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 5121:04be  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x45758]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 5121:04c7  mov di, word ptr gs:[eax*8 + 0x3e80]  [x45758]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 5121:04d0  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x45758]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 5121:04d9  sub cx, di  [x45758]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 5121:04db  je 0x527  [x45758]
    if (c.zf) goto L51737;
L516ed:
    if (c.tracing) c.traceAt(0x516ed);
    // 5121:04dd  js 0x675  [x19314]
    if (c.sf) goto L51885;
L516f1:
    if (c.tracing) c.traceAt(0x516f1);
    // 5121:04e1  add edi, dword ptr [0x20]  [x19297]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), true));
    // 5121:04e6  mov dx, 0x3c4  [x19297]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5121:04e9  mov al, 2  [x19297]
    c.a.l = (uint8_t)(0x2u);
    // 5121:04eb  mov ah, bh  [x19297]
    c.a.h = (uint8_t)(c.b.h);
    // 5121:04ed  out dx, ax  [x19297]
    c.ip = 0x4eeu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:04ee  mov bh, byte ptr [4]  [x19297]
    c.b.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 5121:04f2  mov byte ptr es:[di], bh  [x19297]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 5121:04f5  inc di  [x19297]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 5121:04f6  dec cx  [x19297]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5121:04f7  je 0x51d  [x19297]
    if (c.zf) goto L5172d;
L51709:
    if (c.tracing) c.traceAt(0x51709);
    // 5121:04f9  mov ax, 0xf02  [x10412]
    c.a.x = (uint16_t)(0xf02u);
    // 5121:04fc  out dx, ax  [x10412]
    c.ip = 0x4fdu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:04fd  mov al, bh  [x10412]
    c.a.l = (uint8_t)(c.b.h);
    // 5121:04ff  mov ah, bh  [x10412]
    c.a.h = (uint8_t)(c.b.h);
    // 5121:0501  cmp cx, 2  [x10412]
    c.sub<16>(c.c.x, 0x2u, true);
    // 5121:0504  jb 0x510  [x10412]
    if (c.cf) goto L51720;
L51716:
    if (c.tracing) c.traceAt(0x51716);
    // 5121:0506  test di, 1  [x5831]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 5121:050a  jne 0x510  [x5831]
    if (!c.zf) goto L51720;
L5171c:
    if (c.tracing) c.traceAt(0x5171c);
    // 5121:050c  stosb byte ptr es:[di], al  [x2908]
    c.stos<8, false>(0);
    // 5121:050d  dec cx  [x2908]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 5121:050e  je 0x570  [x2908]
    if (c.zf) goto L51780;
L51720:
    if (c.tracing) c.traceAt(0x51720);
    // 5121:0510  mov si, cx  [x10412]
    c.si.x = (uint16_t)(c.c.x);
    // 5121:0512  shr cx, 1  [x10412]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L51724:
    if (c.tracing) c.traceAt(0x51724);
    // 5121:0514  rep stosw word ptr es:[di], ax  [x17668]
    c.stos<16, false>(1);
L51726:
    if (c.tracing) c.traceAt(0x51726);
    // 5121:0516  mov cx, si  [x10412]
    c.c.x = (uint16_t)(c.si.x);
    // 5121:0518  and cx, 1  [x10412]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L5172b:
    if (c.tracing) c.traceAt(0x5172b);
    // 5121:051b  rep stosb byte ptr es:[di], al  [x17658]
    c.stos<8, false>(1);
L5172d:
    if (c.tracing) c.traceAt(0x5172d);
    // 5121:051d  mov ah, bl  [x19297]
    c.a.h = (uint8_t)(c.b.l);
    // 5121:051f  mov al, 2  [x19297]
    c.a.l = (uint8_t)(0x2u);
    // 5121:0521  out dx, ax  [x19297]
    c.ip = 0x522u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:0522  mov byte ptr es:[di], bh  [x19297]
    c.w8(c.esb + (uint16_t)(c.di.x), c.b.h);
    // 5121:0525  jmp 0x570  [x19297]
    goto L51780;
L51737:
    if (c.tracing) c.traceAt(0x51737);
    // 5121:0527  mov si, 0x8000  [x26444]
    c.si.x = (uint16_t)(0x8000u);
    // 5121:052a  mov cx, ax  [x26444]
    c.c.x = (uint16_t)(c.a.x);
    // 5121:052c  and cx, dx  [x26444]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 5121:052e  js 0x570  [x26444]
    if (c.sf) goto L51780;
L51740:
    if (c.tracing) c.traceAt(0x51740);
    // 5121:0530  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x24672]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 5121:0539  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x24672]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 5121:0542  mov cx, ax  [x24672]
    c.c.x = (uint16_t)(c.a.x);
    // 5121:0544  and cx, dx  [x24672]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 5121:0546  js 0x570  [x24672]
    if (c.sf) goto L51780;
L51758:
    if (c.tracing) c.traceAt(0x51758);
    // 5121:0548  add edi, dword ptr [0x20]  [x10255]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x20u)), false));
    // 5121:054d  mov bx, 0xf03  [x10255]
    c.b.x = (uint16_t)(0xf03u);
    // 5121:0550  mov cx, ax  [x10255]
    c.c.x = (uint16_t)(c.a.x);
    // 5121:0552  and cl, bl  [x10255]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 5121:0554  mov al, bh  [x10255]
    c.a.l = (uint8_t)(c.b.h);
    // 5121:0556  shl al, cl  [x10255]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 5121:0558  mov cx, dx  [x10255]
    c.c.x = (uint16_t)(c.dx_.x);
    // 5121:055a  not cx  [x10255]
    c.c.x = (uint16_t)(~(c.c.x));
    // 5121:055c  and cl, bl  [x10255]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 5121:055e  mov ah, bh  [x10255]
    c.a.h = (uint8_t)(c.b.h);
    // 5121:0560  shr ah, cl  [x10255]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5121:0562  and ah, al  [x10255]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 5121:0564  mov dx, 0x3c4  [x10255]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5121:0567  mov al, 2  [x10255]
    c.a.l = (uint8_t)(0x2u);
    // 5121:0569  out dx, ax  [x10255]
    c.ip = 0x56au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:056a  mov al, byte ptr [4]  [x10255]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x4u)));
    // 5121:056d  mov byte ptr es:[di], al  [x10255]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L51780:
    if (c.tracing) c.traceAt(0x51780);
    // 5121:0570  add dword ptr [0x20], 0x50  [x46646]
    c.w32(c.dsb + (uint16_t)(0x20u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x20u)), 0x50u, false));
    // 5121:0576  add dword ptr [0x10], 0xfffd0000  [x46646]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x5178b)), false));
    // 5121:057f  add dword ptr [0x14], 0x56000  [x46646]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x51794)), true));
    // 5121:0588  dec dword ptr [0x18]  [x46646]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 5121:058d  jne 0x5f9  [x46646]
    if (!c.zf) goto L51809;
L5179f:
    if (c.tracing) c.traceAt(0x5179f);
    // 5121:058f  mov ax, word ptr [0x7a]  [x10746]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 5121:0592  cmp ax, word ptr [0x7c]  [x10746]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 5121:0596  je 0x675  [x10746]
    if (c.zf) goto L51885;
L517aa:
    if (c.tracing) c.traceAt(0x517aa);
    // 5121:059a  xor edx, edx  [x7563]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:059d  mov dx, word ptr [0x7c]  [x7563]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7cu)));
    // 5121:05a1  mov esi, dword ptr fs:[edx]  [x7563]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:05a6  mov edi, dword ptr fs:[edx + 4]  [x7563]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:05ac  sub dx, 8  [x7563]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x8u, false));
    // 5121:05af  mov word ptr [0x7c], dx  [x7563]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
    // 5121:05b3  cmp dx, word ptr [0x7e]  [x7563]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x7eu)), true);
    // 5121:05b7  jge 0x5c1  [x7563]
    if ((c.sf == c.of)) goto L517d1;
L517c9:
    if (c.tracing) c.traceAt(0x517c9);
    // 5121:05b9  mov dx, word ptr [0x80]  [x2129]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x80u)));
    // 5121:05bd  mov word ptr [0x7c], dx  [x2129]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.dx_.x);
L517d1:
    if (c.tracing) c.traceAt(0x517d1);
    // 5121:05c1  mov eax, dword ptr fs:[edx]  [x7563]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:05c6  mov ebx, dword ptr fs:[edx + 4]  [x7563]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:05cc  mov edx, ebx  [x7563]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5121:05cf  sub edx, edi  [x7563]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5121:05d2  je 0x59a  [x7563]
    if (c.zf) goto L517aa;
L517e4:
    if (c.tracing) c.traceAt(0x517e4);
    // 5121:05d4  mov dword ptr [0x18], edx  [x5836]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 5121:05d9  mov ecx, ebx  [x5836]
    c.c.e = (uint32_t)(c.b.e);
    // 5121:05dc  sub ecx, edi  [x5836]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5121:05df  sub eax, esi  [x5836]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:05e2  shl eax, 0x10  [x5836]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5121:05e6  cdq   [x5836]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:05e8  idiv ecx  [x5836]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x5e8u); }   // #DE: int 0, then again
    // 5121:05eb  mov dword ptr cs:[0x57b], eax  [x5836]
    c.w32(c.csb + (uint16_t)(0x57bu), c.a.e);
    // 5121:05f0  shl esi, 0x10  [x5836]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5121:05f4  mov dword ptr [0x10], esi  [x5836]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L51809:
    if (c.tracing) c.traceAt(0x51809);
    // 5121:05f9  dec dword ptr [0x1c]  [x41736]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 5121:05fe  jne 0x668  [x41736]
    if (!c.zf) goto L51878;
L51810:
    if (c.tracing) c.traceAt(0x51810);
    // 5121:0600  mov ax, word ptr [0x7a]  [x5973]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 5121:0603  cmp ax, word ptr [0x7c]  [x5973]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x7cu)), true);
    // 5121:0607  je 0x675  [x5973]
    if (c.zf) goto L51885;
L51819:
    if (c.tracing) c.traceAt(0x51819);
    // 5121:0609  xor edx, edx  [x7706]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:060c  mov dx, word ptr [0x7a]  [x7706]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7au)));
    // 5121:0610  mov esi, dword ptr fs:[edx]  [x7706]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:0615  mov edi, dword ptr fs:[edx + 4]  [x7706]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:061b  add dx, 8  [x7706]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x8u, false));
    // 5121:061e  mov word ptr [0x7a], dx  [x7706]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
    // 5121:0622  cmp dx, word ptr [0x80]  [x7706]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x80u)), true);
    // 5121:0626  jle 0x630  [x7706]
    if ((c.zf || c.sf != c.of)) goto L51840;
L51838:
    if (c.tracing) c.traceAt(0x51838);
    // 5121:0628  mov dx, word ptr [0x7e]  [x2333]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x7eu)));
    // 5121:062c  mov word ptr [0x7a], dx  [x2333]
    c.w16(c.dsb + (uint16_t)(0x7au), c.dx_.x);
L51840:
    if (c.tracing) c.traceAt(0x51840);
    // 5121:0630  mov eax, dword ptr fs:[edx]  [x7706]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 5121:0635  mov ebx, dword ptr fs:[edx + 4]  [x7706]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 5121:063b  mov edx, ebx  [x7706]
    c.dx_.e = (uint32_t)(c.b.e);
    // 5121:063e  sub edx, edi  [x7706]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 5121:0641  je 0x609  [x7706]
    if (c.zf) goto L51819;
L51853:
    if (c.tracing) c.traceAt(0x51853);
    // 5121:0643  mov dword ptr [0x1c], edx  [x5973]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 5121:0648  mov ecx, ebx  [x5973]
    c.c.e = (uint32_t)(c.b.e);
    // 5121:064b  sub ecx, edi  [x5973]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5121:064e  sub eax, esi  [x5973]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 5121:0651  shl eax, 0x10  [x5973]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 5121:0655  cdq   [x5973]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0657  idiv ecx  [x5973]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x657u); }   // #DE: int 0, then again
    // 5121:065a  mov dword ptr cs:[0x584], eax  [x5973]
    c.w32(c.csb + (uint16_t)(0x584u), c.a.e);
    // 5121:065f  shl esi, 0x10  [x5973]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 5121:0663  mov dword ptr [0x14], esi  [x5973]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L51878:
    if (c.tracing) c.traceAt(0x51878);
    // 5121:0668  cmp dword ptr [0x20], 0x2120  [x41736]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x20u)), (c.r32(0x5187d)), true);
    // 5121:0671  jl 0x49a  [x41736]
    if ((c.sf != c.of)) goto L516aa;
L51885:
    if (c.tracing) c.traceAt(0x51885);
    // 5121:0675  retf   [x6535]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51886:
    if (c.tracing) c.traceAt(0x51886);
    // 5121:0676  mov ax, word ptr [0x8a]  [x209]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 5121:0679  not ax  [x209]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5121:067b  and ax, 0x400  [x209]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x400u), false));
    // 5121:067e  add ax, 0xa000  [x209]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 5121:0681  mov es, ax  [x209]
    c.loadEs(c.a.x);
    // 5121:0683  mov dx, 0x3ce  [x209]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 5121:0686  mov al, 5  [x209]
    c.a.l = (uint8_t)(0x5u);
    // 5121:0688  out dx, al  [x209]
    c.ip = 0x689u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0689  inc dx  [x209]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 5121:068a  in al, dx  [x209]
    c.ip = 0x68bu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 5121:068b  mov byte ptr [0x35], al  [x209]
    c.w8(c.dsb + (uint16_t)(0x35u), c.a.l);
    // 5121:068e  and al, 0xfc  [x209]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 5121:0690  or al, 1  [x209]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 5121:0692  and al, 0xf7  [x209]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xf7u), true));
    // 5121:0694  out dx, al  [x209]
    c.ip = 0x695u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0695  mov ah, 0xf  [x209]
    c.a.h = (uint8_t)(0xfu);
    // 5121:0697  mov dx, 0x3c4  [x209]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5121:069a  mov al, 2  [x209]
    c.a.l = (uint8_t)(0x2u);
    // 5121:069c  out dx, ax  [x209]
    c.ip = 0x69du; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:069d  push ds  [x209]
    c.push16(c.ds);
    // 5121:069e  mov ax, 0xac00  [x209]
    c.a.x = (uint16_t)(0xac00u);
    // 5121:06a1  mov ds, ax  [x209]
    c.loadDs(c.a.x);
    // 5121:06a3  mov di, 0  [x209]
    c.di.x = (uint16_t)(0x0u);
    // 5121:06a6  mov si, di  [x209]
    c.si.x = (uint16_t)(c.di.x);
    // 5121:06a8  cld   [x209]
    c.df = false;
    // 5121:06a9  mov cx, 0x3200  [x209]
    c.c.x = (uint16_t)(0x3200u);
L518bc:
    if (c.tracing) c.traceAt(0x518bc);
    // 5121:06ac  rep movsb byte ptr es:[di], byte ptr [si]  [x2675409]
    c.ip = 0x6aeu; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L518be:
    if (c.tracing) c.traceAt(0x518be);
    // 5121:06ae  pop ds  [x209]
    c.loadDs((uint16_t)c.pop16());
    // 5121:06af  mov dx, 0x3ce  [x209]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 5121:06b2  mov al, 5  [x209]
    c.a.l = (uint8_t)(0x5u);
    // 5121:06b4  out dx, al  [x209]
    c.ip = 0x6b5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:06b5  inc dx  [x209]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 5121:06b6  mov al, byte ptr [0x35]  [x209]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x35u)));
    // 5121:06b9  out dx, al  [x209]
    c.ip = 0x6bau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:06ba  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L518cb:
    if (c.tracing) c.traceAt(0x518cb);
    // 5121:06bb  mov ax, 0x40fc  [x1]
    c.a.x = (uint16_t)(0x40fcu);
    // 5121:06be  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5121:06c0  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 5121:06c3  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L518d6:
    if (c.tracing) c.traceAt(0x518d6);
    // 5121:06c6  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5121:06c9  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5121:06ca  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 5121:06cd  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5121:06ce  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5121:06d1  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5121:06d2  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 5121:06d5  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 5121:06d6  loop 0x6c6  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L518d6;
L518e8:
    if (c.tracing) c.traceAt(0x518e8);
    // 5121:06d8  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 5121:06db  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 5121:06dd  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L518f0:
    if (c.tracing) c.traceAt(0x518f0);
    // 5121:06e0  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5121:06e2  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 5121:06e5  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5121:06e6  push cx  [x320]
    c.push16(c.c.x);
    // 5121:06e7  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5121:06e9  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5121:06ec  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5121:06ee  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5121:06f0  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 5121:06f2  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 5121:06f4  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 5121:06f6  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5121:06f7  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5121:06f8  push cx  [x320]
    c.push16(c.c.x);
    // 5121:06f9  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 5121:06fb  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 5121:06fd  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 5121:0700  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 5121:0702  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 5121:0704  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 5121:0706  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 5121:0708  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5121:0709  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 5121:070b  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 5121:070c  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 5121:070d  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 5121:070f  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 5121:0712  jb 0x716  [x320]
    if (c.cf) goto L51926;
L51924:
    if (c.tracing) c.traceAt(0x51924);
    // 5121:0714  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L51926:
    if (c.tracing) c.traceAt(0x51926);
    // 5121:0716  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 5121:0717  loop 0x6e0  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L518f0;
L51929:
    if (c.tracing) c.traceAt(0x51929);
    // 5121:0719  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L5192c:
    if (c.tracing) c.traceAt(0x5192c);
    // 5121:071c  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 5121:071f  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5121:0720  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 5121:0723  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5121:0724  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 5121:0727  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5121:0728  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 5121:072b  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 5121:072c  loop 0x71c  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L5192c;
L5193e:
    if (c.tracing) c.traceAt(0x5193e);
    // 5121:072e  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51940:
    if (c.tracing) c.traceAt(0x51940);
    // 5121:0730  les bx, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:0734  mov byte ptr [0x8c], 0  [x209]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x0u);
    // 5121:0739  cmp dword ptr es:[bx + 4], 0  [x209]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)), 0x0u, true);
    // 5121:073f  je 0x746  [x209]
    if (c.zf) goto L51956;
L51951:
    if (c.tracing) c.traceAt(0x51951);
    // 5121:0741  mov byte ptr [0x8c], 1  [x209]
    c.w8(c.dsb + (uint16_t)(0x8cu), 0x1u);
L51956:
    if (c.tracing) c.traceAt(0x51956);
    // 5121:0746  mov ebx, dword ptr [0]  [x209]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:074b  cmp dword ptr es:[bx - 4], 0  [x209]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 5121:0751  je 0x87e  [x209]
    if (c.zf) goto L51a8e;
L51965:
    if (c.tracing) c.traceAt(0x51965);
    // 5121:0755  mov dword ptr [8], 0  [x209]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 5121:075e  les bx, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:0762  mov esi, dword ptr [0]  [x209]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:0767  mov dword ptr [0x8d], esi  [x209]
    c.w32(c.dsb + (uint16_t)(0x8du), c.si.e);
    // 5121:076c  mov eax, dword ptr es:[si - 8]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 5121:0771  mov dword ptr [0xc], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
    // 5121:0775  les bx, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:0779  lfs bp, ptr [0x3e]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5121:077e  xor ebx, ebx  [x209]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5121:0781  xor ebp, ebp  [x209]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 5121:0784  xor edx, edx  [x209]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L51997:
    if (c.tracing) c.traceAt(0x51997);
    // 5121:0787  mov ebx, esi  [x21945]
    c.b.e = (uint32_t)(c.si.e);
    // 5121:078a  mov bx, word ptr es:[ebx]  [x21945]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 5121:078e  mov ecx, dword ptr es:[ebx]  [x21945]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:0793  mov edi, ecx  [x21945]
    c.di.e = (uint32_t)(c.c.e);
    // 5121:0796  add ebx, 0x18  [x21945]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5121:079a  xor eax, eax  [x21945]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 5121:079d  mov ebp, dword ptr es:[ebx]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:07a2  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:07a5  add eax, dword ptr fs:[ebp*8 + 0x10]  [x21945]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5121:07af  mov ebp, dword ptr es:[ebx + 4]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 5121:07b5  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:07b8  add eax, dword ptr fs:[ebp*8 + 0x10]  [x21945]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5121:07c2  mov ebp, dword ptr es:[ebx + 8]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 5121:07c8  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:07cb  add eax, dword ptr fs:[ebp*8 + 0x10]  [x21945]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5121:07d5  add ebx, 0xc  [x21945]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 5121:07d9  sub ecx, 3  [x21945]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 5121:07dd  je 0x7f7  [x21945]
    if (c.zf) goto L51a07;
L519ef:
    if (c.tracing) c.traceAt(0x519ef);
    // 5121:07df  mov ebp, dword ptr es:[ebx]  [x18392]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:07e4  add ebp, ebp  [x18392]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:07e7  add eax, dword ptr fs:[ebp*8 + 0x10]  [x18392]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 5121:07f1  add ebx, 4  [x18392]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5121:07f5  loop 0x7df  [x18392]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L519ef;
L51a07:
    if (c.tracing) c.traceAt(0x51a07);
    // 5121:07f7  cmp edi, 4  [x21945]
    c.sub<32>(c.di.e, 0x4u, true);
    // 5121:07fb  jne 0x803  [x21945]
    if (!c.zf) goto L51a13;
L51a0d:
    if (c.tracing) c.traceAt(0x51a0d);
    // 5121:07fd  sar eax, 0xa  [x18392]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xau) & 31), true));
    // 5121:0801  jmp 0x80f  [x18392]
    goto L51a1f;
L51a13:
    if (c.tracing) c.traceAt(0x51a13);
    // 5121:0803  sar eax, 8  [x3553]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 5121:0807  cdq   [x3553]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 5121:0809  mov ecx, edi  [x3553]
    c.c.e = (uint32_t)(c.di.e);
    // 5121:080c  idiv ecx  [x3553]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x80cu); }   // #DE: int 0, then again
L51a1f:
    if (c.tracing) c.traceAt(0x51a1f);
    // 5121:080f  add eax, 0x8000  [x21945]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 5121:0815  mov word ptr es:[esi + 2], ax  [x21945]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 5121:081a  add esi, 4  [x21945]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 5121:081e  inc dword ptr [8]  [x21945]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 5121:0823  mov eax, dword ptr [0xc]  [x21945]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 5121:0827  cmp dword ptr [8], eax  [x21945]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 5121:082c  jb 0x787  [x21945]
    if (c.cf) goto L51997;
L51a40:
    if (c.tracing) c.traceAt(0x51a40);
    // 5121:0830  mov esi, dword ptr [0x8d]  [x209]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x8du)));
    // 5121:0835  mov dword ptr [0], esi  [x209]
    c.w32(c.dsb + (uint16_t)(0u), c.si.e);
    // 5121:083a  mov edi, 4  [x209]
    c.di.e = (uint32_t)(0x4u);
    // 5121:0840  les bx, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:0844  mov ebp, dword ptr [0]  [x209]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:0849  mov edx, dword ptr es:[ebp - 8]  [x209]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
L51a5f:
    if (c.tracing) c.traceAt(0x51a5f);
    // 5121:084f  mov ebx, ebp  [x416]
    c.b.e = (uint32_t)(c.bp.e);
    // 5121:0852  mov ecx, edx  [x416]
    c.c.e = (uint32_t)(c.dx_.e);
    // 5121:0855  xor esi, esi  [x416]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
L51a68:
    if (c.tracing) c.traceAt(0x51a68);
    // 5121:0858  mov eax, dword ptr es:[ebx]  [x43680]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:085d  cmp eax, dword ptr es:[ebx + 4]  [x43680]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 5121:0863  jae 0x873  [x43680]
    if (!c.cf) goto L51a83;
L51a75:
    if (c.tracing) c.traceAt(0x51a75);
    // 5121:0865  xchg dword ptr es:[ebx + 4], eax  [x9167]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 5121:086b  mov dword ptr es:[ebx], eax  [x9167]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 5121:0870  not esi  [x9167]
    c.si.e = (uint32_t)(~(c.si.e));
L51a83:
    if (c.tracing) c.traceAt(0x51a83);
    // 5121:0873  add ebx, edi  [x43680]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, true));
    // 5121:0876  loop 0x858  [x43680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51a68;
L51a88:
    if (c.tracing) c.traceAt(0x51a88);
    // 5121:0878  cmp esi, 0  [x416]
    c.sub<32>(c.si.e, 0x0u, true);
    // 5121:087c  jne 0x84f  [x416]
    if (!c.zf) goto L51a5f;
L51a8e:
    if (c.tracing) c.traceAt(0x51a8e);
    // 5121:087e  mov ax, word ptr [0x8a]  [x209]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 5121:0881  not ax  [x209]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5121:0883  and ax, 0x400  [x209]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x400u), false));
    // 5121:0886  add ax, 0xa000  [x209]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 5121:0889  mov word ptr [0x91], ax  [x209]
    c.w16(c.dsb + (uint16_t)(0x91u), c.a.x);
    // 5121:088c  mov dword ptr [8], 0  [x209]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 5121:0895  les bx, ptr [0x3a]  [x209]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:0899  mov ebx, dword ptr [0]  [x209]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:089e  mov eax, dword ptr es:[bx - 8]  [x209]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 5121:08a3  mov dword ptr [0xc], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L51ab7:
    if (c.tracing) c.traceAt(0x51ab7);
    // 5121:08a7  xor ebx, ebx  [x21945]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 5121:08aa  xor ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 5121:08ad  xor edx, edx  [x21945]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 5121:08b0  les bx, ptr [0x3a]  [x21945]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3au) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 5121:08b4  lfs bp, ptr [0x3e]  [x21945]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3eu) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 5121:08b9  mov ax, 0x509c  [x21945]
    c.a.x = (uint16_t)(0x509cu);
    // 5121:08bc  mov gs, ax  [x21945]
    c.loadGs(c.a.x);
    // 5121:08be  mov ebx, dword ptr [0]  [x21945]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:08c3  mov bx, word ptr es:[bx]  [x21945]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5121:08c6  mov ecx, dword ptr es:[ebx + 0x14]  [x21945]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 5121:08cc  mov dword ptr [4], ecx  [x21945]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 5121:08d1  mov ecx, dword ptr es:[ebx]  [x21945]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:08d6  mov dword ptr gs:[edx], ecx  [x21945]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 5121:08db  add ebx, 0x18  [x21945]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5121:08df  mov ebp, dword ptr es:[ebx]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:08e4  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:08e7  mov ecx, ebp  [x21945]
    c.c.e = (uint32_t)(c.bp.e);
    // 5121:08ea  mov ebp, dword ptr es:[ebx + 4]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 5121:08f0  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:08f3  mov edi, dword ptr fs:[ebp*8 + 8]  [x21945]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5121:08fd  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x21945]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5121:0907  mov ebp, dword ptr es:[ebx + 8]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 5121:090d  add ebp, ebp  [x21945]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:0910  mov edx, dword ptr fs:[ebp*8 + 8]  [x21945]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5121:091a  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x21945]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5121:0924  mov ebx, ecx  [x21945]
    c.b.e = (uint32_t)(c.c.e);
    // 5121:0927  mov eax, ebp  [x21945]
    c.a.e = (uint32_t)(c.bp.e);
    // 5121:092a  sub eax, esi  [x21945]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 5121:092d  mov dword ptr cs:[0x944], eax  [x21945]
    c.w32(c.csb + (uint16_t)(0x944u), c.a.e);
    // 5121:0932  jmp 0x934  [x21945]
    goto L51b44;
L51b44:
    if (c.tracing) c.traceAt(0x51b44);
    // 5121:0934  mov eax, edi  [x21945]
    c.a.e = (uint32_t)(c.di.e);
    // 5121:0937  sub eax, dword ptr fs:[ebx*8 + 8]  [x21945]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 5121:0941  imul eax, eax, 0xfffffff5  [x21945]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x51b54))));
    // 5121:0948  mov ecx, esi  [x21945]
    c.c.e = (uint32_t)(c.si.e);
    // 5121:094b  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x21945]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 5121:0955  mov dword ptr cs:[0x966], ecx  [x21945]
    c.w32(c.csb + (uint16_t)(0x966u), c.c.e);
    // 5121:095b  jmp 0x95d  [x21945]
    goto L51b6d;
L51b6d:
    if (c.tracing) c.traceAt(0x51b6d);
    // 5121:095d  mov ecx, edx  [x21945]
    c.c.e = (uint32_t)(c.dx_.e);
    // 5121:0960  sub ecx, edi  [x21945]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 5121:0963  imul ecx, ecx, 4  [x21945]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x51b76))));
    // 5121:096a  cmp eax, ecx  [x21945]
    c.sub<32>(c.a.e, c.c.e, true);
    // 5121:096d  jl 0xb0f  [x21945]
    if ((c.sf != c.of)) goto L51d1f;
L51b81:
    if (c.tracing) c.traceAt(0x51b81);
    // 5121:0971  je 0xb0f  [x11082]
    if (c.zf) goto L51d1f;
L51b85:
    if (c.tracing) c.traceAt(0x51b85);
    // 5121:0975  mov ebx, dword ptr [0]  [x7421]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:097a  mov bx, word ptr es:[bx]  [x7421]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5121:097d  mov ecx, dword ptr es:[ebx]  [x7421]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:0982  mov dword ptr gs:[0], ecx  [x7421]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 5121:0988  add ebx, 0x18  [x7421]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 5121:098c  mov dword ptr gs:[0xc], edi  [x7421]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 5121:0992  mov dword ptr gs:[0x10], esi  [x7421]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 5121:0998  mov dword ptr gs:[0x14], edx  [x7421]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 5121:099e  mov dword ptr gs:[0x18], ebp  [x7421]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 5121:09a4  mov ebp, dword ptr es:[ebx]  [x7421]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:09a9  add ebp, ebp  [x7421]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:09ac  mov eax, dword ptr fs:[ebp*8 + 8]  [x7421]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5121:09b6  mov dword ptr gs:[4], eax  [x7421]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 5121:09bb  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x7421]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5121:09c5  mov dword ptr gs:[8], eax  [x7421]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 5121:09ca  mov edx, 0x1c  [x7421]
    c.dx_.e = (uint32_t)(0x1cu);
    // 5121:09d0  add ebx, 0xc  [x7421]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 5121:09d4  sub ecx, 3  [x7421]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 5121:09d8  je 0xa0b  [x7421]
    if (c.zf) goto L51c1b;
L51bea:
    if (c.tracing) c.traceAt(0x51bea);
    // 5121:09da  mov ebp, dword ptr es:[ebx]  [x6659]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 5121:09df  add ebp, ebp  [x6659]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 5121:09e2  mov eax, dword ptr fs:[ebp*8 + 8]  [x6659]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 5121:09ec  mov dword ptr gs:[edx], eax  [x6659]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 5121:09f1  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x6659]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 5121:09fb  mov dword ptr gs:[edx + 4], eax  [x6659]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 5121:0a01  add edx, 8  [x6659]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 5121:0a05  add ebx, 4  [x6659]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 5121:0a09  loop 0x9da  [x6659]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51bea;
L51c1b:
    if (c.tracing) c.traceAt(0x51c1b);
    // 5121:0a0b  xor edi, edi  [x7421]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 5121:0a0e  mov ecx, dword ptr gs:[edi]  [x7421]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5121:0a13  lea eax, [edi + 4]  [x7421]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 5121:0a18  mov word ptr [0x7e], ax  [x7421]
    c.w16(c.dsb + (uint16_t)(0x7eu), c.a.x);
    // 5121:0a1b  lea ebx, [ecx - 1]  [x7421]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 5121:0a20  lea eax, [eax + ebx*8]  [x7421]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 5121:0a25  mov word ptr [0x80], ax  [x7421]
    c.w16(c.dsb + (uint16_t)(0x80u), c.a.x);
    // 5121:0a28  dec ecx  [x7421]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 5121:0a2a  add edi, 8  [x7421]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 5121:0a2e  mov eax, dword ptr gs:[edi]  [x7421]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5121:0a33  mov ebx, edi  [x7421]
    c.b.e = (uint32_t)(c.di.e);
    // 5121:0a36  mov ebp, eax  [x7421]
    c.bp.e = (uint32_t)(c.a.e);
L51c49:
    if (c.tracing) c.traceAt(0x51c49);
    // 5121:0a39  add edi, 8  [x21501]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 5121:0a3d  mov edx, dword ptr gs:[edi]  [x21501]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 5121:0a42  cmp ebp, edx  [x21501]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 5121:0a45  jle 0xa4d  [x21501]
    if ((c.zf || c.sf != c.of)) goto L51c5d;
L51c57:
    if (c.tracing) c.traceAt(0x51c57);
    // 5121:0a47  mov ebp, edx  [x7823]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 5121:0a4a  mov ebx, edi  [x7823]
    c.b.e = (uint32_t)(c.di.e);
L51c5d:
    if (c.tracing) c.traceAt(0x51c5d);
    // 5121:0a4d  cmp eax, edx  [x21501]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 5121:0a50  jge 0xa55  [x21501]
    if ((c.sf == c.of)) goto L51c65;
L51c62:
    if (c.tracing) c.traceAt(0x51c62);
    // 5121:0a52  mov eax, edx  [x5823]
    c.a.e = (uint32_t)(c.dx_.e);
L51c65:
    if (c.tracing) c.traceAt(0x51c65);
    // 5121:0a55  loop 0xa39  [x21501]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51c49;
L51c67:
    if (c.tracing) c.traceAt(0x51c67);
    // 5121:0a57  mov ecx, ebp  [x7421]
    c.c.e = (uint32_t)(c.bp.e);
    // 5121:0a5a  sub ebx, 4  [x7421]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 5121:0a5e  cmp ecx, 0xef  [x7421]
    c.sub<32>(c.c.e, 0xefu, true);
    // 5121:0a65  jg 0xb0f  [x7421]
    if ((!c.zf && c.sf == c.of)) goto L51d1f;
L51c79:
    if (c.tracing) c.traceAt(0x51c79);
    // 5121:0a69  cmp eax, ecx  [x7421]
    c.sub<32>(c.a.e, c.c.e, true);
    // 5121:0a6c  je 0xb0f  [x7421]
    if (c.zf) goto L51d1f;
L51c80:
    if (c.tracing) c.traceAt(0x51c80);
    // 5121:0a70  cmp ax, 0  [x7421]
    c.sub<16>(c.a.x, 0x0u, true);
    // 5121:0a73  jl 0xb0f  [x7421]
    if ((c.sf != c.of)) goto L51d1f;
L51c87:
    if (c.tracing) c.traceAt(0x51c87);
    // 5121:0a77  imul eax, eax, 0x50  [x7412]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 5121:0a7b  cmp eax, 0x4ab0  [x7412]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 5121:0a81  jle 0xa89  [x7412]
    if ((c.zf || c.sf != c.of)) goto L51c99;
    c.notTranslated(0x51c93, "fall-through");
L51c99:
    if (c.tracing) c.traceAt(0x51c99);
    // 5121:0a89  mov word ptr cs:[0x66d], ax  [x7412]
    c.w16(c.csb + (uint16_t)(0x66du), c.a.x);
    // 5121:0a8d  mov word ptr [0x7a], bx  [x7412]
    c.w16(c.dsb + (uint16_t)(0x7au), c.b.x);
    // 5121:0a91  mov word ptr [0x7c], bx  [x7412]
    c.w16(c.dsb + (uint16_t)(0x7cu), c.b.x);
    // 5121:0a95  cmp byte ptr [0x8c], 1  [x7412]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x8cu)), 0x1u, true);
    // 5121:0a9a  jne 0xaf3  [x7412]
    if (!c.zf) { t = 0x51d03u; goto dispatch; }
L51cac:
    if (c.tracing) c.traceAt(0x51cac);
    // 5121:0a9c  mov ebx, dword ptr [0]  [x7412]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 5121:0aa1  mov bx, word ptr es:[bx]  [x7412]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 5121:0aa4  mov edi, dword ptr es:[ebx + 0xc]  [x7412]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0xcu)));
    // 5121:0aaa  mov ecx, dword ptr es:[ebx + 8]  [x7412]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 5121:0ab0  mov ebx, dword ptr es:[ebx + 4]  [x7412]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 5121:0ab6  imul eax, ebx, 9  [x7412]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x51cc9))));
    // 5121:0abd  imul ebp, ecx, 0xa  [x7412]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x51cd0))));
    // 5121:0ac4  add eax, ebp  [x7412]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:0ac7  imul ebp, edi, 0x3e  [x7412]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x51cda))));
    // 5121:0ace  add eax, ebp  [x7412]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 5121:0ad1  neg eax  [x7412]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, true));
    // 5121:0ad4  js 0xb0f  [x7412]
    if (c.sf) goto L51d1f;
L51ce6:
    if (c.tracing) c.traceAt(0x51ce6);
    // 5121:0ad6  shr eax, 6  [x6535]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x6u) & 31), false));
    // 5121:0ada  cmp eax, 7  [x6535]
    c.sub<32>(c.a.e, 0x7u, true);
    // 5121:0ade  jle 0xae2  [x6535]
    if ((c.zf || c.sf != c.of)) goto L51cf2;
L51cf0:
    if (c.tracing) c.traceAt(0x51cf0);
    // 5121:0ae0  mov al, 7  [x2508]
    c.a.l = (uint8_t)(0x7u);
L51cf2:
    if (c.tracing) c.traceAt(0x51cf2);
    // 5121:0ae2  mov bx, word ptr [4]  [x6535]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x4u)));
    // 5121:0ae6  shl bl, 3  [x6535]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x3u) & 31), false));
    // 5121:0ae9  add al, bl  [x6535]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, true));
    // 5121:0aeb  mov ah, al  [x6535]
    c.a.h = (uint8_t)(c.a.l);
    // 5121:0aed  mov dword ptr [4], eax  [x6535]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 5121:0af1  jmp 0xafc  [x6535]
    goto L51d0c;
L51d0c:
    if (c.tracing) c.traceAt(0x51d0c);
    // 5121:0afc  mov ax, 0x509c  [x6535]
    c.a.x = (uint16_t)(0x509cu);
    // 5121:0aff  mov fs, ax  [x6535]
    c.loadFs(c.a.x);
    // 5121:0b01  mov cx, 0x40fc  [x6535]
    c.c.x = (uint16_t)(0x40fcu);
    // 5121:0b04  mov gs, cx  [x6535]
    c.loadGs(c.c.x);
    // 5121:0b06  mov ax, word ptr [0x91]  [x6535]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x91u)));
    // 5121:0b09  mov es, ax  [x6535]
    c.loadEs(c.a.x);
    // 5121:0b0b  push cs  [x6535]
    c.push16(c.cs);
    // 5121:0b0c  call 0x3c4  [x6535]
    c.push16(0xb0fu); code_13(c, 0x515d4u); if (c.ip != 0xb0fu) c.badReturn(0x51d1c);
L51d1f:
    if (c.tracing) c.traceAt(0x51d1f);
    // 5121:0b0f  add dword ptr [0], 4  [x21945]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 5121:0b15  inc dword ptr [8]  [x21945]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 5121:0b1a  mov eax, dword ptr [0xc]  [x21945]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 5121:0b1e  cmp dword ptr [8], eax  [x21945]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 5121:0b23  jne 0x8a7  [x21945]
    if (!c.zf) goto L51ab7;
L51d37:
    if (c.tracing) c.traceAt(0x51d37);
    // 5121:0b27  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51d38:
    if (c.tracing) c.traceAt(0x51d38);
    // 5121:0b28  mov eax, dword ptr [0x5e]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5eu)));
    // 5121:0b2c  mov dword ptr cs:[0xab9], eax  [x209]
    c.w32(c.csb + (uint16_t)(0xab9u), c.a.e);
    // 5121:0b31  mov eax, dword ptr [0x62]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x62u)));
    // 5121:0b35  mov dword ptr cs:[0xac0], eax  [x209]
    c.w32(c.csb + (uint16_t)(0xac0u), c.a.e);
    // 5121:0b3a  mov eax, dword ptr [0x66]  [x209]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x66u)));
    // 5121:0b3e  mov dword ptr cs:[0xaca], eax  [x209]
    c.w32(c.csb + (uint16_t)(0xacau), c.a.e);
    // 5121:0b43  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51d54:
    if (c.tracing) c.traceAt(0x51d54);
    // 5121:0b44  push ds  [x1]
    c.push16(c.ds);
    // 5121:0b45  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5121:0b47  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 5121:0b4a  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 5121:0b4c  out dx, al  [x1]
    c.ip = 0xb4du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0b4d  cld   [x1]
    c.df = false;
    // 5121:0b4e  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 5121:0b51  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 5121:0b53  out dx, al  [x1]
    c.ip = 0xb54u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0b54  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L51d67:
    if (c.tracing) c.traceAt(0x51d67);
    // 5121:0b57  mov dx, 0x3c9  [x255]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 5121:0b5a  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb5bu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5121:0b5b  out dx, al  [x255]
    c.ip = 0xb5cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0b5c  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb5du; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5121:0b5d  out dx, al  [x255]
    c.ip = 0xb5eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0b5e  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb5fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 5121:0b5f  out dx, al  [x255]
    c.ip = 0xb60u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 5121:0b60  loop 0xb57  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51d67;
L51d72:
    if (c.tracing) c.traceAt(0x51d72);
    // 5121:0b62  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 5121:0b63  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51d74:
    if (c.tracing) c.traceAt(0x51d74);
    // 5121:0b64  mov ax, word ptr [0x8a]  [x209]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8au)));
    // 5121:0b67  not ax  [x209]
    c.a.x = (uint16_t)(~(c.a.x));
    // 5121:0b69  and ax, 0x400  [x209]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x400u), false));
    // 5121:0b6c  shl ah, 4  [x209]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 5121:0b6f  mov dx, 0x3d4  [x209]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 5121:0b72  mov al, 0xc  [x209]
    c.a.l = (uint8_t)(0xcu);
    // 5121:0b74  out dx, ax  [x209]
    c.ip = 0xb75u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:0b75  not word ptr [0x8a]  [x209]
    c.w16(c.dsb + (uint16_t)(0x8au), ~(c.r16(c.dsb + (uint16_t)(0x8au))));
    // 5121:0b79  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51d8a:
    if (c.tracing) c.traceAt(0x51d8a);
    // 5121:0b7a  mov ax, 0x3e72  [x209]
    c.a.x = (uint16_t)(0x3e72u);
    // 5121:0b7d  mov fs, ax  [x209]
    c.loadFs(c.a.x);
    // 5121:0b7f  mov bx, word ptr fs:[0]  [x209]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 5121:0b84  mov cx, word ptr [0x9f]  [x209]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x9fu)));
    // 5121:0b88  shl cx, 2  [x209]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 5121:0b8b  add bx, cx  [x209]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 5121:0b8d  mov bx, word ptr fs:[bx]  [x209]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 5121:0b90  mov cx, word ptr fs:[bx]  [x209]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 5121:0b93  mov dx, word ptr fs:[bx + 2]  [x209]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 5121:0b97  mov word ptr [0x3a], cx  [x209]
    c.w16(c.dsb + (uint16_t)(0x3au), c.c.x);
    // 5121:0b9b  mov word ptr [0x3c], dx  [x209]
    c.w16(c.dsb + (uint16_t)(0x3cu), c.dx_.x);
    // 5121:0b9f  mov ax, word ptr fs:[bx + 4]  [x209]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 5121:0ba3  movzx eax, ax  [x209]
    c.a.e = (uint32_t)(c.a.x);
    // 5121:0ba7  mov dword ptr [0], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 5121:0bab  mov di, word ptr [0xaf]  [x209]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xafu)));
L51dbf:
    if (c.tracing) c.traceAt(0x51dbf);
    // 5121:0baf  mov eax, dword ptr fs:[bx + 0x16]  [x209]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 5121:0bb4  mov edx, dword ptr fs:[bx + 0x1a]  [x209]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 5121:0bb9  mov ecx, dword ptr fs:[bx + 0x1e]  [x209]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 5121:0bbe  sar eax, 8  [x209]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 5121:0bc2  sar edx, 8  [x209]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 5121:0bc6  sar ecx, 8  [x209]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 5121:0bca  mov dword ptr [0x6a], eax  [x209]
    c.w32(c.dsb + (uint16_t)(0x6au), c.a.e);
    // 5121:0bce  mov dword ptr [0x6e], edx  [x209]
    c.w32(c.dsb + (uint16_t)(0x6eu), c.dx_.e);
    // 5121:0bd3  mov dword ptr [0x72], ecx  [x209]
    c.w32(c.dsb + (uint16_t)(0x72u), c.c.e);
    // 5121:0bd8  mov eax, dword ptr fs:[bx + 0x16]  [x209]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 5121:0bdd  mov edx, dword ptr fs:[bx + 0x1a]  [x209]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 5121:0be2  mov ecx, dword ptr fs:[bx + 0x1e]  [x209]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 5121:0be7  add eax, dword ptr fs:[bx + 6]  [x209]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 5121:0bec  add edx, dword ptr fs:[bx + 0xa]  [x209]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 5121:0bf1  add ecx, dword ptr fs:[bx + 0xe]  [x209]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 5121:0bf6  mov ebp, 0x3ffff  [x209]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 5121:0bfc  and eax, ebp  [x209]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 5121:0bff  and edx, ebp  [x209]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 5121:0c02  and ecx, ebp  [x209]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 5121:0c05  mov dword ptr fs:[bx + 0x16], eax  [x209]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 5121:0c0a  mov dword ptr fs:[bx + 0x1a], edx  [x209]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 5121:0c0f  mov dword ptr fs:[bx + 0x1e], ecx  [x209]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 5121:0c14  dec di  [x209]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 5121:0c15  jne 0xbaf  [x209]
    if (!c.zf) goto L51dbf;
L51e27:
    if (c.tracing) c.traceAt(0x51e27);
    // 5121:0c17  push cs  [x209]
    c.push16(c.cs);
    // 5121:0c18  call 0x2dc  [x209]
    c.push16(0xc1bu); code_13(c, 0x514ecu); if (c.ip != 0xc1bu) c.badReturn(0x51e28);
L51e2b:
    if (c.tracing) c.traceAt(0x51e2b);
    // 5121:0c1b  push cs  [x209]
    c.push16(c.cs);
    // 5121:0c1c  call 0xb28  [x209]
    c.push16(0xc1fu); code_13(c, 0x51d38u); if (c.ip != 0xc1fu) c.badReturn(0x51e2c);
L51e2f:
    if (c.tracing) c.traceAt(0x51e2f);
    // 5121:0c1f  push cs  [x209]
    c.push16(c.cs);
    // 5121:0c20  call 0x730  [x209]
    c.push16(0xc23u); code_13(c, 0x51940u); if (c.ip != 0xc23u) c.badReturn(0x51e30);
L51e33:
    if (c.tracing) c.traceAt(0x51e33);
    // 5121:0c23  retf   [x209]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51e34:
    if (c.tracing) c.traceAt(0x51e34);
    // 5121:0c24  xor di, di  [x4]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 5121:0c26  mov ax, 0  [x4]
    c.a.x = (uint16_t)(0x0u);
    // 5121:0c29  add al, bh  [x4]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.h, true));
    // 5121:0c2b  mov si, ax  [x4]
    c.si.x = (uint16_t)(c.a.x);
    // 5121:0c2d  mov ah, bl  [x4]
    c.a.h = (uint8_t)(c.b.l);
    // 5121:0c2f  mov al, 2  [x4]
    c.a.l = (uint8_t)(0x2u);
    // 5121:0c31  mov dx, 0x3c4  [x4]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 5121:0c34  out dx, ax  [x4]
    c.ip = 0xc35u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 5121:0c35  mov cx, 0x3e80  [x4]
    c.c.x = (uint16_t)(0x3e80u);
L51e48:
    if (c.tracing) c.traceAt(0x51e48);
    // 5121:0c38  mov al, byte ptr fs:[si]  [x64000]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 5121:0c3b  stosb byte ptr es:[di], al  [x64000]
    c.stos<8, false>(0);
    // 5121:0c3c  add si, 4  [x64000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 5121:0c3f  loop 0xc38  [x64000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51e48;
L51e51:
    if (c.tracing) c.traceAt(0x51e51);
    // 5121:0c41  inc bh  [x4]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 5121:0c43  shl bl, 1  [x4]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 5121:0c45  cmp bl, 0x10  [x4]
    c.sub<8>(c.b.l, 0x10u, true);
    // 5121:0c48  jb 0xc24  [x4]
    if (c.cf) goto L51e34;
L51e5a:
    if (c.tracing) c.traceAt(0x51e5a);
    // 5121:0c4a  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L51e5b:
    if (c.tracing) c.traceAt(0x51e5b);
    // 5121:0c4b  mov ax, 0x50fc  [x1]
    c.a.x = (uint16_t)(0x50fcu);
    // 5121:0c4e  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 5121:0c50  push cs  [x1]
    c.push16(c.cs);
    // 5121:0c51  call 0x6bb  [x1]
    c.push16(0xc54u); code_13(c, 0x518cbu); if (c.ip != 0xc54u) c.badReturn(0x51e61);
L51e64:
    if (c.tracing) c.traceAt(0x51e64);
    // 5121:0c54  mov ax, 0x3f08  [x1]
    c.a.x = (uint16_t)(0x3f08u);
    // 5121:0c57  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 5121:0c5a  mov si, 0x3e  [x1]
    c.si.x = (uint16_t)(0x3eu);
    // 5121:0c5d  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 5121:0c5f  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 5121:0c62  mov ax, 0x2ea0  [x1]
    c.a.x = (uint16_t)(0x2ea0u);
    // 5121:0c65  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 5121:0c68  push cs  [x1]
    c.push16(c.cs);
    // 5121:0c69  call 0xb44  [x1]
    c.push16(0xc6cu); code_13(c, 0x51d54u); if (c.ip != 0xc6cu) c.badReturn(0x51e79);
L51e7c:
    if (c.tracing) c.traceAt(0x51e7c);
    // 5121:0c6c  mov ax, 0x2ed0  [x1]
    c.a.x = (uint16_t)(0x2ed0u);
    // 5121:0c6f  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 5121:0c71  mov ax, 0xac00  [x1]
    c.a.x = (uint16_t)(0xac00u);
    // 5121:0c74  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 5121:0c76  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 5121:0c78  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 5121:0c7a  push cs  [x1]
    c.push16(c.cs);
    // 5121:0c7b  call 0xc24  [x1]
    c.push16(0xc7eu); code_13(c, 0x51e34u); if (c.ip != 0xc7eu) c.badReturn(0x51e8b);
L51e8e:
    if (c.tracing) c.traceAt(0x51e8e);
    // 5121:0c7e  mov dword ptr [0xa3], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xa3u), 0x0u);
    // 5121:0c87  mov dword ptr [0xa7], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xa7u), 0x0u);
    // 5121:0c90  mov dword ptr [0xab], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xabu), 0x0u);
    // 5121:0c99  mov dword ptr [0x97], 0xfffb3b4c  [x1]
    c.w32(c.dsb + (uint16_t)(0x97u), 0xfffb3b4cu);
    // 5121:0ca2  mov dword ptr [0x93], 0x11e1a30  [x1]
    c.w32(c.dsb + (uint16_t)(0x93u), 0x11e1a30u);
    // 5121:0cab  mov dword ptr [0x9b], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x9bu), 0x0u);
    // 5121:0cb4  mov word ptr [0xaf], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xafu), 0x1u);
    // 5121:0cba  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 5121:0cbd  int 0xff  [x1]
    c.ip = 0xcbfu; c.d32 = false; c.intr(0xff, 0xcbfu);
L51ecf:
    if (c.tracing) c.traceAt(0x51ecf);
    // 5121:0cbf  push cs  [x209]
    c.push16(c.cs);
    // 5121:0cc0  call 0x676  [x209]
    c.push16(0xcc3u); code_13(c, 0x51886u); if (c.ip != 0xcc3u) c.badReturn(0x51ed0);
L51ed3:
    if (c.tracing) c.traceAt(0x51ed3);
    // 5121:0cc3  mov word ptr [0x9f], 0  [x209]
    c.w16(c.dsb + (uint16_t)(0x9fu), 0x0u);
    // 5121:0cc9  push cs  [x209]
    c.push16(c.cs);
    // 5121:0cca  call 0xb7a  [x209]
    c.push16(0xccdu); code_13(c, 0x51d8au); if (c.ip != 0xccdu) c.badReturn(0x51eda);
L51edd:
    if (c.tracing) c.traceAt(0x51edd);
    // 5121:0ccd  push cs  [x209]
    c.push16(c.cs);
    // 5121:0cce  call 0xb64  [x209]
    c.push16(0xcd1u); code_13(c, 0x51d74u); if (c.ip != 0xcd1u) c.badReturn(0x51ede);
L51ee1:
    if (c.tracing) c.traceAt(0x51ee1);
    // 5121:0cd1  mov bx, 0xe  [x209]
    c.b.x = (uint16_t)(0xeu);
    // 5121:0cd4  int 0xff  [x209]
    c.ip = 0xcd6u; c.d32 = false; c.intr(0xff, 0xcd6u);
L51ee6:
    if (c.tracing) c.traceAt(0x51ee6);
    // 5121:0cd6  mov word ptr [0xaf], ax  [x209]
    c.w16(c.dsb + (uint16_t)(0xafu), c.a.x);
    // 5121:0cd9  mov cx, word ptr [0xaf]  [x209]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xafu)));
L51eed:
    if (c.tracing) c.traceAt(0x51eed);
    // 5121:0cdd  add dword ptr [0x97], 0xfffe91ca  [x209]
    c.w32(c.dsb + (uint16_t)(0x97u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x97u)), 0xfffe91cau, false));
    // 5121:0ce6  add dword ptr [0x9b], 0xbb8  [x209]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x9bu)), 0xbb8u, false));
    // 5121:0cef  add dword ptr [0x93], 0xfff695d8  [x209]
    c.w32(c.dsb + (uint16_t)(0x93u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x93u)), 0xfff695d8u, true));
    // 5121:0cf8  loop 0xcdd  [x209]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L51eed;
L51f0a:
    if (c.tracing) c.traceAt(0x51f0a);
    // 5121:0cfa  cmp dword ptr [0x9b], 0x98968  [x209]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x9bu)), 0x98968u, true);
    // 5121:0d03  jle 0xcbf  [x209]
    if ((c.zf || c.sf != c.of)) goto L51ecf;
L51f15:
    if (c.tracing) c.traceAt(0x51f15);
    // 5121:0d05  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 5121:0d07  int 0x21  [x1]
    c.ip = 0xd09u; c.d32 = false; c.intr(0x21, 0xd09u);
    c.notTranslated(0x51f19, "fall-through");
}

static Register reg13(13, {0x5121e, 0x514ec, 0x514f0, 0x51511, 0x515ba, 0x515bc, 0x515d4, 0x515ec, 0x5160b, 0x51613, 0x51626, 0x5164b, 0x5166a, 0x51672, 0x51685, 0x516aa, 0x516b4, 0x516ed, 0x516f1, 0x51709, 0x51716, 0x5171c, 0x51720, 0x51724, 0x51726, 0x5172b, 0x5172d, 0x51737, 0x51740, 0x51758, 0x51780, 0x5179f, 0x517aa, 0x517c9, 0x517d1, 0x517e4, 0x51809, 0x51810, 0x51819, 0x51838, 0x51840, 0x51853, 0x51878, 0x51885, 0x51886, 0x518bc, 0x518be, 0x518cb, 0x518d6, 0x518e8, 0x518f0, 0x51924, 0x51926, 0x51929, 0x5192c, 0x5193e, 0x51940, 0x51951, 0x51956, 0x51965, 0x51997, 0x519ef, 0x51a07, 0x51a0d, 0x51a13, 0x51a1f, 0x51a40, 0x51a5f, 0x51a68, 0x51a75, 0x51a83, 0x51a88, 0x51a8e, 0x51ab7, 0x51b44, 0x51b6d, 0x51b81, 0x51b85, 0x51bea, 0x51c1b, 0x51c49, 0x51c57, 0x51c5d, 0x51c62, 0x51c65, 0x51c67, 0x51c79, 0x51c80, 0x51c87, 0x51c99, 0x51cac, 0x51ce6, 0x51cf0, 0x51cf2, 0x51d0c, 0x51d1f, 0x51d37, 0x51d38, 0x51d54, 0x51d67, 0x51d72, 0x51d74, 0x51d8a, 0x51dbf, 0x51e27, 0x51e2b, 0x51e2f, 0x51e33, 0x51e34, 0x51e48, 0x51e51, 0x51e5a, 0x51e5b, 0x51e64, 0x51e7c, 0x51e8e, 0x51ecf, 0x51ed3, 0x51edd, 0x51ee1, 0x51ee6, 0x51eed, 0x51f0a, 0x51f15}, code_13);

}  // namespace angel
