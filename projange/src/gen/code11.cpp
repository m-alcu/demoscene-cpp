// Program 11, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_11(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x4758a: goto L4758a;
    case 0x47822: goto L47822;
    case 0x47826: goto L47826;
    case 0x47847: goto L47847;
    case 0x478ff: goto L478ff;
    case 0x47901: goto L47901;
    case 0x47918: goto L47918;
    case 0x4792e: goto L4792e;
    case 0x4794e: goto L4794e;
    case 0x47958: goto L47958;
    case 0x4796b: goto L4796b;
    case 0x47990: goto L47990;
    case 0x479b0: goto L479b0;
    case 0x479ba: goto L479ba;
    case 0x479cd: goto L479cd;
    case 0x479f2: goto L479f2;
    case 0x479fc: goto L479fc;
    case 0x47a35: goto L47a35;
    case 0x47a39: goto L47a39;
    case 0x47a4e: goto L47a4e;
    case 0x47a5b: goto L47a5b;
    case 0x47a61: goto L47a61;
    case 0x47a65: goto L47a65;
    case 0x47a69: goto L47a69;
    case 0x47a6b: goto L47a6b;
    case 0x47a70: goto L47a70;
    case 0x47a72: goto L47a72;
    case 0x47a80: goto L47a80;
    case 0x47a89: goto L47a89;
    case 0x47aa1: goto L47aa1;
    case 0x47aca: goto L47aca;
    case 0x47ae9: goto L47ae9;
    case 0x47af6: goto L47af6;
    case 0x47b16: goto L47b16;
    case 0x47b20: goto L47b20;
    case 0x47b33: goto L47b33;
    case 0x47b58: goto L47b58;
    case 0x47b5f: goto L47b5f;
    case 0x47b6a: goto L47b6a;
    case 0x47b8a: goto L47b8a;
    case 0x47b94: goto L47b94;
    case 0x47ba7: goto L47ba7;
    case 0x47bcc: goto L47bcc;
    case 0x47bd9: goto L47bd9;
    case 0x47bda: goto L47bda;
    case 0x47bfe: goto L47bfe;
    case 0x47c01: goto L47c01;
    case 0x47c6e: goto L47c6e;
    case 0x47c79: goto L47c79;
    case 0x47c8b: goto L47c8b;
    case 0x47c93: goto L47c93;
    case 0x47cc7: goto L47cc7;
    case 0x47cc9: goto L47cc9;
    case 0x47ccc: goto L47ccc;
    case 0x47ccf: goto L47ccf;
    case 0x47ce1: goto L47ce1;
    case 0x47d04: goto L47d04;
    case 0x47e4b: goto L47e4b;
    case 0x47e66: goto L47e66;
    case 0x47ef7: goto L47ef7;
    case 0x47f20: goto L47f20;
    case 0x47f34: goto L47f34;
    case 0x47f38: goto L47f38;
    case 0x47f9d: goto L47f9d;
    case 0x47fce: goto L47fce;
    case 0x47ffe: goto L47ffe;
    case 0x4800c: goto L4800c;
    case 0x48012: goto L48012;
    case 0x48017: goto L48017;
    case 0x4801a: goto L4801a;
    case 0x4801c: goto L4801c;
    case 0x48027: goto L48027;
    case 0x48032: goto L48032;
    case 0x48062: goto L48062;
    case 0x48070: goto L48070;
    case 0x48076: goto L48076;
    case 0x4807b: goto L4807b;
    case 0x4807e: goto L4807e;
    case 0x48080: goto L48080;
    case 0x48092: goto L48092;
    case 0x48099: goto L48099;
    case 0x480a0: goto L480a0;
    case 0x480ac: goto L480ac;
    case 0x480b2: goto L480b2;
    case 0x4814e: goto L4814e;
    case 0x48167: goto L48167;
    case 0x4816d: goto L4816d;
    case 0x481a1: goto L481a1;
    case 0x481b9: goto L481b9;
    case 0x481ba: goto L481ba;
    case 0x483fb: goto L483fb;
    case 0x4840e: goto L4840e;
    case 0x48419: goto L48419;
    case 0x4841b: goto L4841b;
    case 0x4843d: goto L4843d;
    case 0x48472: goto L48472;
    case 0x4851a: goto L4851a;
    case 0x48525: goto L48525;
    case 0x48530: goto L48530;
    case 0x48534: goto L48534;
    case 0x48538: goto L48538;
    case 0x4853c: goto L4853c;
    case 0x4853d: goto L4853d;
    case 0x485d4: goto L485d4;
    case 0x485e1: goto L485e1;
    case 0x485e5: goto L485e5;
    case 0x485fd: goto L485fd;
    case 0x48619: goto L48619;
    case 0x4861d: goto L4861d;
    case 0x48668: goto L48668;
    case 0x4866e: goto L4866e;
    case 0x48672: goto L48672;
    case 0x48678: goto L48678;
    case 0x4867c: goto L4867c;
    case 0x48688: goto L48688;
    case 0x4868c: goto L4868c;
    case 0x48691: goto L48691;
    case 0x486a3: goto L486a3;
    default: c.callLinear(t); return;
    }
L4758a:
    if (c.tracing) c.traceAt(0x4758a);
    // 4750:008a  mov ax, 0x24f1  [x18496]
    c.a.x = (uint16_t)(0x24f1u);
    // 4750:008d  mov es, ax  [x18496]
    c.loadEs(c.a.x);
    // 4750:008f  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:0094  mov edi, dword ptr [0x73]  [x18496]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 4750:0099  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:009c  add edi, edi  [x18496]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 4750:009f  mov ebp, ebx  [x18496]
    c.bp.e = (uint32_t)(c.b.e);
    // 4750:00a2  add ebx, edi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 4750:00a5  sub ebp, edi  [x18496]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 4750:00a8  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:00b2  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:00bc  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:00bf  mov dword ptr [0x4b], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4bu), c.a.e);
    // 4750:00c3  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:00cd  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:00d7  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:00da  mov dword ptr [0x4f], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4fu), c.a.e);
    // 4750:00de  mov ebx, edi  [x18496]
    c.b.e = (uint32_t)(c.di.e);
    // 4750:00e1  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:00eb  mov dword ptr [0x53], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x53u), c.a.e);
    // 4750:00ef  mov ebp, dword ptr [0x77]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:00f4  add ebp, ebp  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:00f7  mov eax, ebx  [x18496]
    c.a.e = (uint32_t)(c.b.e);
    // 4750:00fa  sub ebx, ebp  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 4750:00fd  add ebp, eax  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4750:0100  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:010a  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0114  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0117  mov dword ptr [0x5f], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5fu), c.a.e);
    // 4750:011b  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0125  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:012f  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0132  mov dword ptr [0x6b], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x6bu), c.a.e);
    // 4750:0136  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:013b  add ebx, dword ptr [0x73]  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x73u)), false));
    // 4750:0140  sub ebx, dword ptr [0x77]  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:0145  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:0148  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0152  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:015c  mov edx, ecx  [x18496]
    c.dx_.e = (uint32_t)(c.c.e);
    // 4750:015f  neg edx  [x18496]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 4750:0162  mov edi, eax  [x18496]
    c.di.e = (uint32_t)(c.a.e);
    // 4750:0165  mov esi, dword ptr [0x77]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:016a  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:016d  add ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4750:0170  add ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4750:0173  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:017d  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0187  sub eax, esi  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:018a  sub ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4750:018d  sub edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 4750:0190  add edi, esi  [x18496]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 4750:0193  mov esi, dword ptr [0x73]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 4750:0198  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:019b  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:019e  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:01a1  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:01ab  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:01b5  add eax, esi  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 4750:01b8  add ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 4750:01bb  add edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4750:01be  sub edi, esi  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4750:01c1  mov esi, dword ptr [0x77]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:01c6  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:01c9  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:01cc  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:01cf  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:01d9  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:01e3  sub eax, esi  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:01e6  sub ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4750:01e9  add edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4750:01ec  sub edi, esi  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4750:01ef  sar eax, 2  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 4750:01f3  sar ecx, 2  [x18496]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 4750:01f7  sar edx, 2  [x18496]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 4750:01fb  sar edi, 2  [x18496]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 4750:01ff  mov dword ptr [0x57], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x57u), c.a.e);
    // 4750:0203  mov dword ptr [0x5b], ecx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.c.e);
    // 4750:0208  mov dword ptr [0x63], edx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x63u), c.dx_.e);
    // 4750:020d  mov dword ptr [0x67], edi  [x18496]
    c.w32(c.dsb + (uint16_t)(0x67u), c.di.e);
    // 4750:0212  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:0217  mov ebp, ebx  [x18496]
    c.bp.e = (uint32_t)(c.b.e);
    // 4750:021a  add ebx, dword ptr [0x77]  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:021f  sub ebp, dword ptr [0x77]  [x18496]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:0224  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:0227  add ebp, ebp  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:022a  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0234  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:023e  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0241  add dword ptr [0x57], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x57u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x57u)), c.a.e, false));
    // 4750:0246  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0250  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:025a  sar ecx, 1  [x18496]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 4750:025d  sub dword ptr [0x5b], ecx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5bu)), c.c.e, false));
    // 4750:0262  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:026c  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:0276  sar edx, 1  [x18496]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 4750:0279  sub dword ptr [0x63], edx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x63u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x63u)), c.dx_.e, false));
    // 4750:027e  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0288  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0292  sar edi, 1  [x18496]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 4750:0295  sub dword ptr [0x67], edi  [x18496]
    c.w32(c.dsb + (uint16_t)(0x67u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x67u)), c.di.e, false));
    // 4750:029a  shl dword ptr [0x4b], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4bu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4bu)), (int)((0x4u) & 31), false));
    // 4750:02a0  shl dword ptr [0x4f], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4fu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4fu)), (int)((0x4u) & 31), false));
    // 4750:02a6  shl dword ptr [0x57], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x57u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x57u)), (int)((0x4u) & 31), false));
    // 4750:02ac  shl dword ptr [0x5b], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5bu)), (int)((0x4u) & 31), false));
    // 4750:02b2  shl dword ptr [0x63], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x63u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x63u)), (int)((0x4u) & 31), false));
    // 4750:02b8  shl dword ptr [0x67], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x67u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x67u)), (int)((0x4u) & 31), false));
    // 4750:02be  shl dword ptr [0x53], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x53u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x53u)), (int)((0x4u) & 31), false));
    // 4750:02c4  shl dword ptr [0x5f], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5fu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5fu)), (int)((0x4u) & 31), false));
    // 4750:02ca  shl dword ptr [0x6b], 4  [x18496]
    c.w32(c.dsb + (uint16_t)(0x6bu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x6bu)), (int)((0x4u) & 31), true));
    // 4750:02d0  mov eax, dword ptr [0x4b]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4bu)));
    // 4750:02d4  mov dword ptr cs:[0x396], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x396u), c.a.e);
    // 4750:02d9  mov eax, dword ptr [0x4f]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4fu)));
    // 4750:02dd  mov dword ptr cs:[0x39d], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x39du), c.a.e);
    // 4750:02e2  mov eax, dword ptr [0x53]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x53u)));
    // 4750:02e6  mov dword ptr cs:[0x3a7], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x3a7u), c.a.e);
    // 4750:02eb  mov eax, dword ptr [0x57]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x57u)));
    // 4750:02ef  mov dword ptr cs:[0x3c7], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x3c7u), c.a.e);
    // 4750:02f4  mov eax, dword ptr [0x5b]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5bu)));
    // 4750:02f8  mov dword ptr cs:[0x3ce], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x3ceu), c.a.e);
    // 4750:02fd  mov eax, dword ptr [0x5f]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5fu)));
    // 4750:0301  mov dword ptr cs:[0x3d8], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x3d8u), c.a.e);
    // 4750:0306  mov eax, dword ptr [0x63]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x63u)));
    // 4750:030a  mov dword ptr cs:[0x358], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x358u), c.a.e);
    // 4750:030f  mov eax, dword ptr [0x67]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x67u)));
    // 4750:0313  mov dword ptr cs:[0x35f], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x35fu), c.a.e);
    // 4750:0318  mov eax, dword ptr [0x6b]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6bu)));
    // 4750:031c  mov dword ptr cs:[0x369], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0x369u), c.a.e);
    // 4750:0321  retf   [x18496]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L47822:
    if (c.tracing) c.traceAt(0x47822);
    // 4750:0322  push cs  [x18496]
    c.push16(c.cs);
    // 4750:0323  call 0x8a  [x18496]
    c.push16(0x326u); code_11(c, 0x4758au); if (c.ip != 0x326u) c.badReturn(0x47823);
L47826:
    if (c.tracing) c.traceAt(0x47826);
    // 4750:0326  lfs si, ptr [0x3f]  [x18496]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3fu) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 4750:032b  movzx esi, si  [x18496]
    c.si.e = (uint32_t)(c.si.x);
    // 4750:032f  mov eax, dword ptr fs:[esi]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 4750:0334  shl eax, 4  [x18496]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 4750:0338  mov word ptr [0x3b], ax  [x18496]
    c.w16(c.dsb + (uint16_t)(0x3bu), c.a.x);
    // 4750:033b  add esi, 8  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 4750:033f  add word ptr [0x3b], si  [x18496]
    c.w16(c.dsb + (uint16_t)(0x3bu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x3bu)), c.si.x, true));
    // 4750:0343  les di, ptr [0x43]  [x18496]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x43u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x43u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L47847:
    if (c.tracing) c.traceAt(0x47847);
    // 4750:0347  mov ebx, dword ptr fs:[si]  [x68475]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 4750:034b  mov ecx, dword ptr fs:[si + 4]  [x68475]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 4750:0350  mov edi, dword ptr fs:[si + 8]  [x68475]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 4750:0355  imul eax, ebx, 0  [x68475]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x47858))));
    // 4750:035c  imul ebp, ecx, 0  [x68475]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4785f))));
    // 4750:0363  add eax, ebp  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4750:0366  imul ebp, edi, 0x40000  [x68475]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x47869))));
    // 4750:036d  add eax, ebp  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4750:0370  mov dword ptr es:[si + 8], eax  [x68475]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 4750:0375  mov ebp, 0xa  [x68475]
    c.bp.e = (uint32_t)(0xau);
    // 4750:037b  imul ebp  [x68475]
    c.imul32(c.bp.e);
    // 4750:037e  mov ebp, 0x2710  [x68475]
    c.bp.e = (uint32_t)(0x2710u);
    // 4750:0384  idiv ebp  [x68475]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x384u); }   // #DE: int 0, then again
    // 4750:0387  neg eax  [x68475]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, false));
    // 4750:038a  sub eax, dword ptr [0xbc]  [x68475]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xbcu)), false));
    // 4750:038f  mov dword ptr [0x8f], eax  [x68475]
    c.w32(c.dsb + (uint16_t)(0x8fu), c.a.e);
    // 4750:0393  imul ebp, ebx, 0x1c120  [x68475]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x47896))));
    // 4750:039a  imul eax, ecx, 0xfffc67c0  [x68475]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x4789d))));
    // 4750:03a1  add ebp, eax  [x68475]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4750:03a4  imul eax, edi, 0  [x68475]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x478a7))));
    // 4750:03ab  add eax, ebp  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4750:03ae  add eax, dword ptr [0xb4]  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb4u)), false));
    // 4750:03b3  cdq   [x68475]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:03b5  idiv dword ptr [0x8f]  [x68475]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x8fu)))) { c.d32 = false; c.intr(0, 0x3b5u); }   // #DE: int 0, then again
    // 4750:03ba  add eax, 0x9f  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 4750:03c0  mov dword ptr es:[si], eax  [x68475]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 4750:03c4  imul ebp, ebx, 0xfffc67c0  [x68475]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x478c7))));
    // 4750:03cb  imul eax, ecx, 0xfffe3ee0  [x68475]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x478ce))));
    // 4750:03d2  add ebp, eax  [x68475]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4750:03d5  imul eax, edi, 0  [x68475]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x478d8))));
    // 4750:03dc  add eax, ebp  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 4750:03df  sub eax, dword ptr [0xb8]  [x68475]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb8u)), false));
    // 4750:03e4  cdq   [x68475]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:03e6  idiv dword ptr [0x8f]  [x68475]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x8fu)))) { c.d32 = false; c.intr(0, 0x3e6u); }   // #DE: int 0, then again
    // 4750:03eb  add eax, 0x78  [x68475]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x78u, false));
    // 4750:03ef  mov dword ptr es:[si + 4], eax  [x68475]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 4750:03f4  add si, 0x10  [x68475]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 4750:03f7  cmp si, word ptr [0x3b]  [x68475]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x3bu)), true);
    // 4750:03fb  jb 0x347  [x68475]
    if (c.cf) goto L47847;
L478ff:
    if (c.tracing) c.traceAt(0x478ff);
    // 4750:03ff  jmp 0x401  [x18496]
    goto L47901;
L47901:
    if (c.tracing) c.traceAt(0x47901);
    // 4750:0401  retf   [x18496]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L47918:
    if (c.tracing) c.traceAt(0x47918);
    // 4750:0418  mov edx, dword ptr [0x93]  [x19071]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x93u)));
    // 4750:041d  mov eax, dword ptr fs:[edx + 4]  [x19071]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:0423  imul eax, eax, 0x50  [x19071]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 4750:0427  mov dword ptr [0x24], eax  [x19071]
    c.w32(c.dsb + (uint16_t)(0x24u), c.a.e);
    // 4750:042b  xor edi, edi  [x19071]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L4792e:
    if (c.tracing) c.traceAt(0x4792e);
    // 4750:042e  mov edx, dword ptr [0x97]  [x19346]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x97u)));
    // 4750:0433  mov esi, dword ptr fs:[edx]  [x19346]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:0438  mov edi, dword ptr fs:[edx + 4]  [x19346]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:043e  sub edx, 8  [x19346]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 4750:0442  mov dword ptr [0x97], edx  [x19346]
    c.w32(c.dsb + (uint16_t)(0x97u), c.dx_.e);
    // 4750:0447  cmp edx, dword ptr [0x9b]  [x19346]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9bu)), true);
    // 4750:044c  jge 0x458  [x19346]
    if ((c.sf == c.of)) goto L47958;
L4794e:
    if (c.tracing) c.traceAt(0x4794e);
    // 4750:044e  mov edx, dword ptr [0x9f]  [x4456]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 4750:0453  mov dword ptr [0x97], edx  [x4456]
    c.w32(c.dsb + (uint16_t)(0x97u), c.dx_.e);
L47958:
    if (c.tracing) c.traceAt(0x47958);
    // 4750:0458  mov eax, dword ptr fs:[edx]  [x19346]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:045d  mov ebx, dword ptr fs:[edx + 4]  [x19346]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:0463  mov edx, ebx  [x19346]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4750:0466  sub edx, edi  [x19346]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4750:0469  je 0x42e  [x19346]
    if (c.zf) goto L4792e;
L4796b:
    if (c.tracing) c.traceAt(0x4796b);
    // 4750:046b  mov dword ptr [0x18], edx  [x19071]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 4750:0470  mov ecx, ebx  [x19071]
    c.c.e = (uint32_t)(c.b.e);
    // 4750:0473  sub ecx, edi  [x19071]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4750:0476  sub eax, esi  [x19071]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:0479  shl eax, 0x10  [x19071]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4750:047d  cdq   [x19071]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:047f  idiv ecx  [x19071]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x47fu); }   // #DE: int 0, then again
    // 4750:0482  mov dword ptr cs:[0x5d5], eax  [x19071]
    c.w32(c.csb + (uint16_t)(0x5d5u), c.a.e);
    // 4750:0487  shl esi, 0x10  [x19071]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4750:048b  mov dword ptr [0x10], esi  [x19071]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L47990:
    if (c.tracing) c.traceAt(0x47990);
    // 4750:0490  mov edx, dword ptr [0x93]  [x19440]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x93u)));
    // 4750:0495  mov esi, dword ptr fs:[edx]  [x19440]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:049a  mov edi, dword ptr fs:[edx + 4]  [x19440]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:04a0  add edx, 8  [x19440]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 4750:04a4  mov dword ptr [0x93], edx  [x19440]
    c.w32(c.dsb + (uint16_t)(0x93u), c.dx_.e);
    // 4750:04a9  cmp edx, dword ptr [0x9f]  [x19440]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9fu)), true);
    // 4750:04ae  jle 0x4ba  [x19440]
    if ((c.zf || c.sf != c.of)) goto L479ba;
L479b0:
    if (c.tracing) c.traceAt(0x479b0);
    // 4750:04b0  mov edx, dword ptr [0x9b]  [x5154]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9bu)));
    // 4750:04b5  mov dword ptr [0x93], edx  [x5154]
    c.w32(c.dsb + (uint16_t)(0x93u), c.dx_.e);
L479ba:
    if (c.tracing) c.traceAt(0x479ba);
    // 4750:04ba  mov eax, dword ptr fs:[edx]  [x19440]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:04bf  mov ebx, dword ptr fs:[edx + 4]  [x19440]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:04c5  mov edx, ebx  [x19440]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4750:04c8  sub edx, edi  [x19440]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4750:04cb  je 0x490  [x19440]
    if (c.zf) goto L47990;
L479cd:
    if (c.tracing) c.traceAt(0x479cd);
    // 4750:04cd  mov dword ptr [0x1c], edx  [x19071]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 4750:04d2  mov ecx, ebx  [x19071]
    c.c.e = (uint32_t)(c.b.e);
    // 4750:04d5  sub ecx, edi  [x19071]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4750:04d8  sub eax, esi  [x19071]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:04db  shl eax, 0x10  [x19071]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4750:04df  cdq   [x19071]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:04e1  idiv ecx  [x19071]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4e1u); }   // #DE: int 0, then again
    // 4750:04e4  mov dword ptr cs:[0x5de], eax  [x19071]
    c.w32(c.csb + (uint16_t)(0x5deu), c.a.e);
    // 4750:04e9  shl esi, 0x10  [x19071]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4750:04ed  mov dword ptr [0x14], esi  [x19071]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L479f2:
    if (c.tracing) c.traceAt(0x479f2);
    // 4750:04f2  cmp dword ptr [0x24], 0  [x691842]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x0u, true);
    // 4750:04f8  jl 0x5ca  [x691842]
    if ((c.sf != c.of)) goto L47aca;
L479fc:
    if (c.tracing) c.traceAt(0x479fc);
    // 4750:04fc  mov eax, dword ptr [0x10]  [x637261]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 4750:0500  mov edx, dword ptr [0x14]  [x637261]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 4750:0505  sar edx, 0x10  [x637261]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 4750:0509  sar eax, 0x10  [x637261]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4750:050d  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x637261]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 4750:0516  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x637261]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 4750:051f  mov di, word ptr gs:[eax*8 + 0x3e80]  [x637261]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 4750:0528  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x637261]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 4750:0531  sub cx, di  [x637261]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 4750:0533  je 0x580  [x637261]
    if (c.zf) goto L47a80;
L47a35:
    if (c.tracing) c.traceAt(0x47a35);
    // 4750:0535  js 0x6d9  [x286124]
    if (c.sf) goto L47bd9;
L47a39:
    if (c.tracing) c.traceAt(0x47a39);
    // 4750:0539  add edi, dword ptr [0x24]  [x286106]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x24u)), true));
    // 4750:053e  mov dx, 0x3c4  [x286106]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4750:0541  mov al, 2  [x286106]
    c.a.l = (uint8_t)(0x2u);
    // 4750:0543  mov ah, bh  [x286106]
    c.a.h = (uint8_t)(c.b.h);
    // 4750:0545  out dx, ax  [x286106]
    c.ip = 0x546u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:0546  mov eax, dword ptr [4]  [x286106]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 4750:054a  stosb byte ptr es:[di], al  [x286106]
    c.stos<8, false>(0);
    // 4750:054b  dec cx  [x286106]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 4750:054c  je 0x572  [x286106]
    if (c.zf) goto L47a72;
L47a4e:
    if (c.tracing) c.traceAt(0x47a4e);
    // 4750:054e  mov ax, 0xf02  [x121717]
    c.a.x = (uint16_t)(0xf02u);
    // 4750:0551  out dx, ax  [x121717]
    c.ip = 0x552u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:0552  mov eax, dword ptr [4]  [x121717]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 4750:0556  cmp cx, 2  [x121717]
    c.sub<16>(c.c.x, 0x2u, true);
    // 4750:0559  jb 0x565  [x121717]
    if (c.cf) goto L47a65;
L47a5b:
    if (c.tracing) c.traceAt(0x47a5b);
    // 4750:055b  test di, 1  [x71221]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 4750:055f  jne 0x565  [x71221]
    if (!c.zf) goto L47a65;
L47a61:
    if (c.tracing) c.traceAt(0x47a61);
    // 4750:0561  stosb byte ptr es:[di], al  [x33522]
    c.stos<8, false>(0);
    // 4750:0562  dec cx  [x33522]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 4750:0563  je 0x5ca  [x33522]
    if (c.zf) goto L47aca;
L47a65:
    if (c.tracing) c.traceAt(0x47a65);
    // 4750:0565  mov si, cx  [x121717]
    c.si.x = (uint16_t)(c.c.x);
    // 4750:0567  shr cx, 1  [x121717]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L47a69:
    if (c.tracing) c.traceAt(0x47a69);
    // 4750:0569  rep stosw word ptr es:[di], ax  [x231993]
    c.stos<16, false>(1);
L47a6b:
    if (c.tracing) c.traceAt(0x47a6b);
    // 4750:056b  mov cx, si  [x121717]
    c.c.x = (uint16_t)(c.si.x);
    // 4750:056d  and cx, 1  [x121717]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L47a70:
    if (c.tracing) c.traceAt(0x47a70);
    // 4750:0570  rep stosb byte ptr es:[di], al  [x205404]
    c.stos<8, false>(1);
L47a72:
    if (c.tracing) c.traceAt(0x47a72);
    // 4750:0572  mov ah, bl  [x286106]
    c.a.h = (uint8_t)(c.b.l);
    // 4750:0574  mov al, 2  [x286106]
    c.a.l = (uint8_t)(0x2u);
    // 4750:0576  out dx, ax  [x286106]
    c.ip = 0x577u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:0577  mov eax, dword ptr [4]  [x286106]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 4750:057b  mov byte ptr es:[di], al  [x286106]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 4750:057e  jmp 0x5ca  [x286106]
    goto L47aca;
L47a80:
    if (c.tracing) c.traceAt(0x47a80);
    // 4750:0580  mov si, 0x8000  [x351137]
    c.si.x = (uint16_t)(0x8000u);
    // 4750:0583  mov cx, ax  [x351137]
    c.c.x = (uint16_t)(c.a.x);
    // 4750:0585  and cx, dx  [x351137]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 4750:0587  js 0x5ca  [x351137]
    if (c.sf) goto L47aca;
L47a89:
    if (c.tracing) c.traceAt(0x47a89);
    // 4750:0589  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x329961]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 4750:0592  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x329961]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 4750:059b  mov cx, ax  [x329961]
    c.c.x = (uint16_t)(c.a.x);
    // 4750:059d  and cx, dx  [x329961]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 4750:059f  js 0x5ca  [x329961]
    if (c.sf) goto L47aca;
L47aa1:
    if (c.tracing) c.traceAt(0x47aa1);
    // 4750:05a1  add edi, dword ptr [0x24]  [x313390]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x24u)), false));
    // 4750:05a6  mov bx, 0xf03  [x313390]
    c.b.x = (uint16_t)(0xf03u);
    // 4750:05a9  mov cx, ax  [x313390]
    c.c.x = (uint16_t)(c.a.x);
    // 4750:05ab  and cl, bl  [x313390]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 4750:05ad  mov al, bh  [x313390]
    c.a.l = (uint8_t)(c.b.h);
    // 4750:05af  shl al, cl  [x313390]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 4750:05b1  mov cx, dx  [x313390]
    c.c.x = (uint16_t)(c.dx_.x);
    // 4750:05b3  not cx  [x313390]
    c.c.x = (uint16_t)(~(c.c.x));
    // 4750:05b5  and cl, bl  [x313390]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 4750:05b7  mov ah, bh  [x313390]
    c.a.h = (uint8_t)(c.b.h);
    // 4750:05b9  shr ah, cl  [x313390]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4750:05bb  and ah, al  [x313390]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 4750:05bd  mov dx, 0x3c4  [x313390]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4750:05c0  mov al, 2  [x313390]
    c.a.l = (uint8_t)(0x2u);
    // 4750:05c2  out dx, ax  [x313390]
    c.ip = 0x5c3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:05c3  mov eax, dword ptr [4]  [x313390]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 4750:05c7  mov byte ptr es:[di], al  [x313390]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L47aca:
    if (c.tracing) c.traceAt(0x47aca);
    // 4750:05ca  add dword ptr [0x24], 0x50  [x691824]
    c.w32(c.dsb + (uint16_t)(0x24u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x50u, false));
    // 4750:05d0  add dword ptr [0x10], 0  [x691824]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x47ad5)), false));
    // 4750:05d9  add dword ptr [0x14], 0xd79  [x691824]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x47ade)), true));
    // 4750:05e2  dec dword ptr [0x18]  [x691824]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 4750:05e7  jne 0x658  [x691824]
    if (!c.zf) goto L47b58;
L47ae9:
    if (c.tracing) c.traceAt(0x47ae9);
    // 4750:05e9  mov eax, dword ptr [0x93]  [x30766]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x93u)));
    // 4750:05ed  cmp eax, dword ptr [0x97]  [x30766]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x97u)), true);
    // 4750:05f2  je 0x6d9  [x30766]
    if (c.zf) goto L47bd9;
L47af6:
    if (c.tracing) c.traceAt(0x47af6);
    // 4750:05f6  mov edx, dword ptr [0x97]  [x13664]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x97u)));
    // 4750:05fb  mov esi, dword ptr fs:[edx]  [x13664]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:0600  mov edi, dword ptr fs:[edx + 4]  [x13664]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:0606  sub edx, 8  [x13664]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 4750:060a  mov dword ptr [0x97], edx  [x13664]
    c.w32(c.dsb + (uint16_t)(0x97u), c.dx_.e);
    // 4750:060f  cmp edx, dword ptr [0x9b]  [x13664]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9bu)), true);
    // 4750:0614  jge 0x620  [x13664]
    if ((c.sf == c.of)) goto L47b20;
L47b16:
    if (c.tracing) c.traceAt(0x47b16);
    // 4750:0616  mov edx, dword ptr [0x9f]  [x5824]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9fu)));
    // 4750:061b  mov dword ptr [0x97], edx  [x5824]
    c.w32(c.dsb + (uint16_t)(0x97u), c.dx_.e);
L47b20:
    if (c.tracing) c.traceAt(0x47b20);
    // 4750:0620  mov eax, dword ptr fs:[edx]  [x13664]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:0625  mov ebx, dword ptr fs:[edx + 4]  [x13664]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:062b  mov edx, ebx  [x13664]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4750:062e  sub edx, edi  [x13664]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4750:0631  je 0x5f6  [x13664]
    if (c.zf) goto L47af6;
L47b33:
    if (c.tracing) c.traceAt(0x47b33);
    // 4750:0633  mov dword ptr [0x18], edx  [x12966]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 4750:0638  mov ecx, ebx  [x12966]
    c.c.e = (uint32_t)(c.b.e);
    // 4750:063b  sub ecx, edi  [x12966]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4750:063e  sub eax, esi  [x12966]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:0641  shl eax, 0x10  [x12966]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4750:0645  cdq   [x12966]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:0647  idiv ecx  [x12966]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x647u); }   // #DE: int 0, then again
    // 4750:064a  mov dword ptr cs:[0x5d5], eax  [x12966]
    c.w32(c.csb + (uint16_t)(0x5d5u), c.a.e);
    // 4750:064f  shl esi, 0x10  [x12966]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4750:0653  mov dword ptr [0x10], esi  [x12966]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L47b58:
    if (c.tracing) c.traceAt(0x47b58);
    // 4750:0658  dec dword ptr [0x1c]  [x674024]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 4750:065d  jne 0x6cc  [x674024]
    if (!c.zf) goto L47bcc;
L47b5f:
    if (c.tracing) c.traceAt(0x47b5f);
    // 4750:065f  mov eax, dword ptr [0x93]  [x13293]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x93u)));
    // 4750:0663  cmp eax, dword ptr [0x97]  [x13293]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x97u)), true);
    // 4750:0668  je 0x6d9  [x13293]
    if (c.zf) goto L47bd9;
L47b6a:
    if (c.tracing) c.traceAt(0x47b6a);
    // 4750:066a  mov edx, dword ptr [0x93]  [x13987]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x93u)));
    // 4750:066f  mov esi, dword ptr fs:[edx]  [x13987]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:0674  mov edi, dword ptr fs:[edx + 4]  [x13987]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:067a  add edx, 8  [x13987]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 4750:067e  mov dword ptr [0x93], edx  [x13987]
    c.w32(c.dsb + (uint16_t)(0x93u), c.dx_.e);
    // 4750:0683  cmp edx, dword ptr [0x9f]  [x13987]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9fu)), true);
    // 4750:0688  jle 0x694  [x13987]
    if ((c.zf || c.sf != c.of)) goto L47b94;
L47b8a:
    if (c.tracing) c.traceAt(0x47b8a);
    // 4750:068a  mov edx, dword ptr [0x9b]  [x4111]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9bu)));
    // 4750:068f  mov dword ptr [0x93], edx  [x4111]
    c.w32(c.dsb + (uint16_t)(0x93u), c.dx_.e);
L47b94:
    if (c.tracing) c.traceAt(0x47b94);
    // 4750:0694  mov eax, dword ptr fs:[edx]  [x13987]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 4750:0699  mov ebx, dword ptr fs:[edx + 4]  [x13987]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 4750:069f  mov edx, ebx  [x13987]
    c.dx_.e = (uint32_t)(c.b.e);
    // 4750:06a2  sub edx, edi  [x13987]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 4750:06a5  je 0x66a  [x13987]
    if (c.zf) goto L47b6a;
L47ba7:
    if (c.tracing) c.traceAt(0x47ba7);
    // 4750:06a7  mov dword ptr [0x1c], edx  [x13293]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 4750:06ac  mov ecx, ebx  [x13293]
    c.c.e = (uint32_t)(c.b.e);
    // 4750:06af  sub ecx, edi  [x13293]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4750:06b2  sub eax, esi  [x13293]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:06b5  shl eax, 0x10  [x13293]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 4750:06b9  cdq   [x13293]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 4750:06bb  idiv ecx  [x13293]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x6bbu); }   // #DE: int 0, then again
    // 4750:06be  mov dword ptr cs:[0x5de], eax  [x13293]
    c.w32(c.csb + (uint16_t)(0x5deu), c.a.e);
    // 4750:06c3  shl esi, 0x10  [x13293]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 4750:06c7  mov dword ptr [0x14], esi  [x13293]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L47bcc:
    if (c.tracing) c.traceAt(0x47bcc);
    // 4750:06cc  cmp dword ptr [0x24], 0x2990  [x674024]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), (c.r32(0x47bd1)), true);
    // 4750:06d5  jl 0x4f2  [x674024]
    if ((c.sf != c.of)) goto L479f2;
L47bd9:
    if (c.tracing) c.traceAt(0x47bd9);
    // 4750:06d9  retf   [x19071]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L47bda:
    if (c.tracing) c.traceAt(0x47bda);
    // 4750:06da  mov ax, word ptr [0xab]  [x583]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xabu)));
    // 4750:06dd  not ax  [x583]
    c.a.x = (uint16_t)(~(c.a.x));
    // 4750:06df  and ax, 0x500  [x583]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 4750:06e2  add ax, 0xa000  [x583]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 4750:06e5  mov es, ax  [x583]
    c.loadEs(c.a.x);
    // 4750:06e7  mov ah, 0xf  [x583]
    c.a.h = (uint8_t)(0xfu);
    // 4750:06e9  mov dx, 0x3c4  [x583]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4750:06ec  mov al, 2  [x583]
    c.a.l = (uint8_t)(0x2u);
    // 4750:06ee  out dx, ax  [x583]
    c.ip = 0x6efu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:06ef  mov eax, 0  [x583]
    c.a.e = (uint32_t)(0x0u);
    // 4750:06f5  mov edi, 0  [x583]
    c.di.e = (uint32_t)(0x0u);
    // 4750:06fb  mov cx, 0x12c0  [x583]
    c.c.x = (uint16_t)(0x12c0u);
L47bfe:
    if (c.tracing) c.traceAt(0x47bfe);
    // 4750:06fe  rep stosd dword ptr es:[di], eax  [x2798983]
    c.stos<32, false>(1);
L47c01:
    if (c.tracing) c.traceAt(0x47c01);
    // 4750:0701  retf   [x583]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L47c6e:
    if (c.tracing) c.traceAt(0x47c6e);
    // 4750:076e  mov ax, 0x3518  [x2]
    c.a.x = (uint16_t)(0x3518u);
    // 4750:0771  mov es, ax  [x2]
    c.loadEs(c.a.x);
    // 4750:0773  xor edi, edi  [x2]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 4750:0776  mov cx, 0x7d0  [x2]
    c.c.x = (uint16_t)(0x7d0u);
L47c79:
    if (c.tracing) c.traceAt(0x47c79);
    // 4750:0779  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 4750:077c  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 4750:077d  mov ax, 0xf  [x4000]
    c.a.x = (uint16_t)(0xfu);
    // 4750:0780  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 4750:0781  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 4750:0784  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 4750:0785  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 4750:0788  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 4750:0789  loop 0x779  [x4000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L47c79;
L47c8b:
    if (c.tracing) c.traceAt(0x47c8b);
    // 4750:078b  mov cx, 0x140  [x2]
    c.c.x = (uint16_t)(0x140u);
    // 4750:078e  mov dl, 0xf  [x2]
    c.dx_.l = (uint8_t)(0xfu);
    // 4750:0790  mov bp, 0  [x2]
    c.bp.x = (uint16_t)(0x0u);
L47c93:
    if (c.tracing) c.traceAt(0x47c93);
    // 4750:0793  mov ax, bp  [x640]
    c.a.x = (uint16_t)(c.bp.x);
    // 4750:0795  shr ax, 2  [x640]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 4750:0798  stosw word ptr es:[di], ax  [x640]
    c.stos<16, false>(0);
    // 4750:0799  push cx  [x640]
    c.push16(c.c.x);
    // 4750:079a  mov cx, bp  [x640]
    c.c.x = (uint16_t)(c.bp.x);
    // 4750:079c  and cl, 3  [x640]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 4750:079f  mov ah, 0xf  [x640]
    c.a.h = (uint8_t)(0xfu);
    // 4750:07a1  shl ah, cl  [x640]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4750:07a3  mov bh, ah  [x640]
    c.b.h = (uint8_t)(c.a.h);
    // 4750:07a5  xor ax, ax  [x640]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 4750:07a7  mov al, bh  [x640]
    c.a.l = (uint8_t)(c.b.h);
    // 4750:07a9  pop cx  [x640]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 4750:07aa  stosw word ptr es:[di], ax  [x640]
    c.stos<16, false>(0);
    // 4750:07ab  push cx  [x640]
    c.push16(c.c.x);
    // 4750:07ac  mov cx, bp  [x640]
    c.c.x = (uint16_t)(c.bp.x);
    // 4750:07ae  not cx  [x640]
    c.c.x = (uint16_t)(~(c.c.x));
    // 4750:07b0  and cl, 3  [x640]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 4750:07b3  mov ah, 0xf  [x640]
    c.a.h = (uint8_t)(0xfu);
    // 4750:07b5  shr ah, cl  [x640]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4750:07b7  mov al, ah  [x640]
    c.a.l = (uint8_t)(c.a.h);
    // 4750:07b9  xor ah, ah  [x640]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 4750:07bb  stosw word ptr es:[di], ax  [x640]
    c.stos<16, false>(0);
    // 4750:07bc  mov ax, bp  [x640]
    c.a.x = (uint16_t)(c.bp.x);
    // 4750:07be  stosw word ptr es:[di], ax  [x640]
    c.stos<16, false>(0);
    // 4750:07bf  pop cx  [x640]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 4750:07c0  add dl, dl  [x640]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 4750:07c2  cmp dl, 0x10  [x640]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 4750:07c5  jb 0x7c9  [x640]
    if (c.cf) goto L47cc9;
L47cc7:
    if (c.tracing) c.traceAt(0x47cc7);
    // 4750:07c7  mov dl, 0xf  [x640]
    c.dx_.l = (uint8_t)(0xfu);
L47cc9:
    if (c.tracing) c.traceAt(0x47cc9);
    // 4750:07c9  inc bp  [x640]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 4750:07ca  loop 0x793  [x640]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L47c93;
L47ccc:
    if (c.tracing) c.traceAt(0x47ccc);
    // 4750:07cc  mov cx, 0x690  [x2]
    c.c.x = (uint16_t)(0x690u);
L47ccf:
    if (c.tracing) c.traceAt(0x47ccf);
    // 4750:07cf  mov ax, 0x4f  [x3360]
    c.a.x = (uint16_t)(0x4fu);
    // 4750:07d2  stosw word ptr es:[di], ax  [x3360]
    c.stos<16, false>(0);
    // 4750:07d3  mov ax, 0  [x3360]
    c.a.x = (uint16_t)(0x0u);
    // 4750:07d6  stosw word ptr es:[di], ax  [x3360]
    c.stos<16, false>(0);
    // 4750:07d7  mov ax, 0xf  [x3360]
    c.a.x = (uint16_t)(0xfu);
    // 4750:07da  stosw word ptr es:[di], ax  [x3360]
    c.stos<16, false>(0);
    // 4750:07db  mov ax, 0xffff  [x3360]
    c.a.x = (uint16_t)(0xffffu);
    // 4750:07de  stosw word ptr es:[di], ax  [x3360]
    c.stos<16, false>(0);
    // 4750:07df  loop 0x7cf  [x3360]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L47ccf;
L47ce1:
    if (c.tracing) c.traceAt(0x47ce1);
    // 4750:07e1  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L47d04:
    if (c.tracing) c.traceAt(0x47d04);
    // 4750:0804  les bx, ptr [0x3f]  [x18496]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3fu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4750:0808  mov eax, dword ptr es:[bx + 4]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)));
    // 4750:080d  mov byte ptr [0xad], al  [x18496]
    c.w8(c.dsb + (uint16_t)(0xadu), c.a.l);
    // 4750:0810  mov ebx, dword ptr [0]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4750:0815  cmp dword ptr es:[bx - 4], 0  [x18496]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 4750:081b  je 0x94b  [x18496]
    if (c.zf) goto L47e4b;
    c.notTranslated(0x47d1f, "fall-through");
L47e4b:
    if (c.tracing) c.traceAt(0x47e4b);
    // 4750:094b  mov dword ptr [8], 0  [x18496]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 4750:0954  les bx, ptr [0x3f]  [x18496]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3fu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4750:0958  mov ebx, dword ptr [0]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4750:095d  mov eax, dword ptr es:[bx - 8]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 4750:0962  mov dword ptr [0xc], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L47e66:
    if (c.tracing) c.traceAt(0x47e66);
    // 4750:0966  xor ebx, ebx  [x22944]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 4750:0969  xor ebp, ebp  [x22944]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 4750:096c  xor edx, edx  [x22944]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 4750:096f  les bx, ptr [0x3f]  [x22944]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3fu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3fu) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 4750:0973  lfs bp, ptr [0x43]  [x22944]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x43u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x43u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 4750:0978  mov ax, 0x44b8  [x22944]
    c.a.x = (uint16_t)(0x44b8u);
    // 4750:097b  mov gs, ax  [x22944]
    c.loadGs(c.a.x);
    // 4750:097d  mov ebx, dword ptr [0]  [x22944]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4750:0982  mov ax, word ptr es:[bx + 2]  [x22944]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x + 0x2u)));
    // 4750:0986  mov bx, word ptr es:[bx]  [x22944]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 4750:0989  mov ecx, dword ptr es:[ebx + 0x14]  [x22944]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 4750:098f  mov dword ptr [4], ecx  [x22944]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 4750:0994  mov ecx, dword ptr es:[ebx]  [x22944]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4750:0999  mov dword ptr gs:[edx], ecx  [x22944]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 4750:099e  add ebx, 0x18  [x22944]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 4750:09a2  mov ebp, dword ptr es:[ebx]  [x22944]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4750:09a7  add ebp, ebp  [x22944]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:09aa  mov ecx, ebp  [x22944]
    c.c.e = (uint32_t)(c.bp.e);
    // 4750:09ad  mov ebp, dword ptr es:[ebx + 4]  [x22944]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 4750:09b3  add ebp, ebp  [x22944]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:09b6  mov edi, dword ptr fs:[ebp*8 + 8]  [x22944]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4750:09c0  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x22944]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4750:09ca  mov ebp, dword ptr es:[ebx + 8]  [x22944]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 4750:09d0  add ebp, ebp  [x22944]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:09d3  mov edx, dword ptr fs:[ebp*8 + 8]  [x22944]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4750:09dd  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x22944]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4750:09e7  mov ebx, ecx  [x22944]
    c.b.e = (uint32_t)(c.c.e);
    // 4750:09ea  mov eax, ebp  [x22944]
    c.a.e = (uint32_t)(c.bp.e);
    // 4750:09ed  sub eax, esi  [x22944]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 4750:09f0  mov dword ptr cs:[0xa07], eax  [x22944]
    c.w32(c.csb + (uint16_t)(0xa07u), c.a.e);
    // 4750:09f5  jmp 0x9f7  [x22944]
    goto L47ef7;
L47ef7:
    if (c.tracing) c.traceAt(0x47ef7);
    // 4750:09f7  mov eax, edi  [x22944]
    c.a.e = (uint32_t)(c.di.e);
    // 4750:09fa  sub eax, dword ptr fs:[ebx*8 + 8]  [x22944]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 4750:0a04  imul eax, eax, 6  [x22944]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x47f07))));
    // 4750:0a0b  mov ecx, esi  [x22944]
    c.c.e = (uint32_t)(c.si.e);
    // 4750:0a0e  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x22944]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 4750:0a18  mov dword ptr cs:[0xa29], ecx  [x22944]
    c.w32(c.csb + (uint16_t)(0xa29u), c.c.e);
    // 4750:0a1e  jmp 0xa20  [x22944]
    goto L47f20;
L47f20:
    if (c.tracing) c.traceAt(0x47f20);
    // 4750:0a20  mov ecx, edx  [x22944]
    c.c.e = (uint32_t)(c.dx_.e);
    // 4750:0a23  sub ecx, edi  [x22944]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 4750:0a26  imul ecx, ecx, 0xfffffff0  [x22944]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x47f29))));
    // 4750:0a2d  cmp eax, ecx  [x22944]
    c.sub<32>(c.a.e, c.c.e, true);
    // 4750:0a30  jl 0xca1  [x22944]
    if ((c.sf != c.of)) goto L481a1;
L47f34:
    if (c.tracing) c.traceAt(0x47f34);
    // 4750:0a34  je 0xca1  [x21309]
    if (c.zf) goto L481a1;
L47f38:
    if (c.tracing) c.traceAt(0x47f38);
    // 4750:0a38  mov ebx, dword ptr [0]  [x20444]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 4750:0a3d  mov bx, word ptr es:[bx]  [x20444]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 4750:0a40  mov ecx, dword ptr es:[ebx]  [x20444]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4750:0a45  mov dword ptr gs:[0], ecx  [x20444]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 4750:0a4b  add ebx, 0x18  [x20444]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 4750:0a4f  mov dword ptr gs:[0xc], edi  [x20444]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 4750:0a55  mov dword ptr gs:[0x10], esi  [x20444]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 4750:0a5b  mov dword ptr gs:[0x14], edx  [x20444]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 4750:0a61  mov dword ptr gs:[0x18], ebp  [x20444]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 4750:0a67  mov ebp, dword ptr es:[ebx]  [x20444]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4750:0a6c  add ebp, ebp  [x20444]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:0a6f  mov eax, dword ptr fs:[ebp*8 + 8]  [x20444]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4750:0a79  mov dword ptr gs:[4], eax  [x20444]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 4750:0a7e  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x20444]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4750:0a88  mov dword ptr gs:[8], eax  [x20444]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 4750:0a8d  mov edx, 0x1c  [x20444]
    c.dx_.e = (uint32_t)(0x1cu);
    // 4750:0a93  add ebx, 0xc  [x20444]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 4750:0a97  sub ecx, 3  [x20444]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 4750:0a9b  je 0xace  [x20444]
    if (c.zf) goto L47fce;
L47f9d:
    if (c.tracing) c.traceAt(0x47f9d);
    // 4750:0a9d  mov ebp, dword ptr es:[ebx]  [x8080]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 4750:0aa2  add ebp, ebp  [x8080]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:0aa5  mov eax, dword ptr fs:[ebp*8 + 8]  [x8080]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 4750:0aaf  mov dword ptr gs:[edx], eax  [x8080]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 4750:0ab4  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x8080]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 4750:0abe  mov dword ptr gs:[edx + 4], eax  [x8080]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 4750:0ac4  add edx, 8  [x8080]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 4750:0ac8  add ebx, 4  [x8080]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 4750:0acc  loop 0xa9d  [x8080]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L47f9d;
L47fce:
    if (c.tracing) c.traceAt(0x47fce);
    // 4750:0ace  xor edi, edi  [x20444]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4750:0ad1  mov ecx, dword ptr gs:[edi]  [x20444]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0ad6  lea eax, [edi + 4]  [x20444]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 4750:0adb  mov dword ptr [0x9b], eax  [x20444]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 4750:0adf  lea ebx, [ecx - 1]  [x20444]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 4750:0ae4  lea eax, [eax + ebx*8]  [x20444]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 4750:0ae9  mov dword ptr [0x9f], eax  [x20444]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.a.e);
    // 4750:0aed  dec ecx  [x20444]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 4750:0aef  add edi, 4  [x20444]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x4u, true));
    // 4750:0af3  mov eax, dword ptr gs:[edi]  [x20444]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0af8  mov ebx, edi  [x20444]
    c.b.e = (uint32_t)(c.di.e);
    // 4750:0afb  mov ebp, eax  [x20444]
    c.bp.e = (uint32_t)(c.a.e);
L47ffe:
    if (c.tracing) c.traceAt(0x47ffe);
    // 4750:0afe  add edi, 8  [x48968]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 4750:0b02  mov edx, dword ptr gs:[edi]  [x48968]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0b07  cmp ebp, edx  [x48968]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 4750:0b0a  jle 0xb12  [x48968]
    if ((c.zf || c.sf != c.of)) goto L48012;
L4800c:
    if (c.tracing) c.traceAt(0x4800c);
    // 4750:0b0c  mov ebp, edx  [x19822]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 4750:0b0f  mov ebx, edi  [x19822]
    c.b.e = (uint32_t)(c.di.e);
L48012:
    if (c.tracing) c.traceAt(0x48012);
    // 4750:0b12  cmp eax, edx  [x48968]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 4750:0b15  jge 0xb1a  [x48968]
    if ((c.sf == c.of)) goto L4801a;
L48017:
    if (c.tracing) c.traceAt(0x48017);
    // 4750:0b17  mov eax, edx  [x15567]
    c.a.e = (uint32_t)(c.dx_.e);
L4801a:
    if (c.tracing) c.traceAt(0x4801a);
    // 4750:0b1a  loop 0xafe  [x48968]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L47ffe;
L4801c:
    if (c.tracing) c.traceAt(0x4801c);
    // 4750:0b1c  mov ecx, ebp  [x20444]
    c.c.e = (uint32_t)(c.bp.e);
    // 4750:0b1f  cmp eax, 0  [x20444]
    c.sub<32>(c.a.e, 0x0u, true);
    // 4750:0b23  jle 0xca1  [x20444]
    if ((c.zf || c.sf != c.of)) goto L481a1;
L48027:
    if (c.tracing) c.traceAt(0x48027);
    // 4750:0b27  cmp ecx, 0x13f  [x20088]
    c.sub<32>(c.c.e, 0x13fu, true);
    // 4750:0b2e  jge 0xca1  [x20088]
    if ((c.sf == c.of)) goto L481a1;
L48032:
    if (c.tracing) c.traceAt(0x48032);
    // 4750:0b32  xor edi, edi  [x19833]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4750:0b35  mov ecx, dword ptr gs:[edi]  [x19833]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0b3a  lea eax, [edi + 4]  [x19833]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 4750:0b3f  mov dword ptr [0x9b], eax  [x19833]
    c.w32(c.dsb + (uint16_t)(0x9bu), c.a.e);
    // 4750:0b43  lea ebx, [ecx - 1]  [x19833]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 4750:0b48  lea eax, [eax + ebx*8]  [x19833]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 4750:0b4d  mov dword ptr [0x9f], eax  [x19833]
    c.w32(c.dsb + (uint16_t)(0x9fu), c.a.e);
    // 4750:0b51  dec ecx  [x19833]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 4750:0b53  add edi, 8  [x19833]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 4750:0b57  mov eax, dword ptr gs:[edi]  [x19833]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0b5c  mov ebx, edi  [x19833]
    c.b.e = (uint32_t)(c.di.e);
    // 4750:0b5f  mov ebp, eax  [x19833]
    c.bp.e = (uint32_t)(c.a.e);
L48062:
    if (c.tracing) c.traceAt(0x48062);
    // 4750:0b62  add edi, 8  [x47567]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 4750:0b66  mov edx, dword ptr gs:[edi]  [x47567]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 4750:0b6b  cmp ebp, edx  [x47567]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 4750:0b6e  jle 0xb76  [x47567]
    if ((c.zf || c.sf != c.of)) goto L48076;
L48070:
    if (c.tracing) c.traceAt(0x48070);
    // 4750:0b70  mov ebp, edx  [x17696]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 4750:0b73  mov ebx, edi  [x17696]
    c.b.e = (uint32_t)(c.di.e);
L48076:
    if (c.tracing) c.traceAt(0x48076);
    // 4750:0b76  cmp eax, edx  [x47567]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 4750:0b79  jge 0xb7e  [x47567]
    if ((c.sf == c.of)) goto L4807e;
L4807b:
    if (c.tracing) c.traceAt(0x4807b);
    // 4750:0b7b  mov eax, edx  [x16665]
    c.a.e = (uint32_t)(c.dx_.e);
L4807e:
    if (c.tracing) c.traceAt(0x4807e);
    // 4750:0b7e  loop 0xb62  [x47567]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L48062;
L48080:
    if (c.tracing) c.traceAt(0x48080);
    // 4750:0b80  mov ecx, ebp  [x19833]
    c.c.e = (uint32_t)(c.bp.e);
    // 4750:0b83  sub ebx, 4  [x19833]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 4750:0b87  cmp ecx, 0xef  [x19833]
    c.sub<32>(c.c.e, 0xefu, true);
    // 4750:0b8e  jg 0xca1  [x19833]
    if ((!c.zf && c.sf == c.of)) goto L481a1;
L48092:
    if (c.tracing) c.traceAt(0x48092);
    // 4750:0b92  cmp eax, ecx  [x19521]
    c.sub<32>(c.a.e, c.c.e, true);
    // 4750:0b95  je 0xca1  [x19521]
    if (c.zf) goto L481a1;
L48099:
    if (c.tracing) c.traceAt(0x48099);
    // 4750:0b99  cmp ax, 0  [x19521]
    c.sub<16>(c.a.x, 0x0u, true);
    // 4750:0b9c  jl 0xca1  [x19521]
    if ((c.sf != c.of)) goto L481a1;
L480a0:
    if (c.tracing) c.traceAt(0x480a0);
    // 4750:0ba0  imul eax, eax, 0x50  [x19071]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 4750:0ba4  cmp eax, 0x4ab0  [x19071]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 4750:0baa  jle 0xbb2  [x19071]
    if ((c.zf || c.sf != c.of)) goto L480b2;
L480ac:
    if (c.tracing) c.traceAt(0x480ac);
    // 4750:0bac  mov eax, 0x4ab0  [x606]
    c.a.e = (uint32_t)(0x4ab0u);
L480b2:
    if (c.tracing) c.traceAt(0x480b2);
    // 4750:0bb2  mov word ptr cs:[0x6d1], ax  [x19071]
    c.w16(c.csb + (uint16_t)(0x6d1u), c.a.x);
    // 4750:0bb6  mov dword ptr [0x93], ebx  [x19071]
    c.w32(c.dsb + (uint16_t)(0x93u), c.b.e);
    // 4750:0bbb  mov dword ptr [0x97], ebx  [x19071]
    c.w32(c.dsb + (uint16_t)(0x97u), c.b.e);
    // 4750:0bc0  cmp byte ptr [0xad], 2  [x19071]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xadu)), 0x2u, true);
    // 4750:0bc5  je 0xc4e  [x19071]
    if (c.zf) goto L4814e;
    c.notTranslated(0x480c9, "fall-through");
L4814e:
    if (c.tracing) c.traceAt(0x4814e);
    // 4750:0c4e  mov ebx, dword ptr [0xbc]  [x19071]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbcu)));
    // 4750:0c53  sub ebx, 0x27100  [x19071]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x27100u, false));
    // 4750:0c5a  mov cl, byte ptr [0xc0]  [x19071]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xc0u)));
    // 4750:0c5e  shr ebx, cl  [x19071]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)(c.c.l & 31), false));
    // 4750:0c61  cmp ebx, 0xf  [x19071]
    c.sub<32>(c.b.e, 0xfu, true);
    // 4750:0c65  jle 0xc6d  [x19071]
    if ((c.zf || c.sf != c.of)) goto L4816d;
L48167:
    if (c.tracing) c.traceAt(0x48167);
    // 4750:0c67  mov ebx, 0xf  [x2433]
    c.b.e = (uint32_t)(0xfu);
L4816d:
    if (c.tracing) c.traceAt(0x4816d);
    // 4750:0c6d  neg ebx  [x19071]
    c.b.e = (uint32_t)(c.neg<32>(c.b.e, false));
    // 4750:0c70  add ebx, 0xf  [x19071]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xfu, false));
    // 4750:0c74  mov eax, dword ptr [4]  [x19071]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 4750:0c78  dec eax  [x19071]
    c.a.e = (uint32_t)(c.dec<32>(c.a.e, false));
    // 4750:0c7a  shl eax, 4  [x19071]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 4750:0c7e  add al, bl  [x19071]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 4750:0c80  mov ah, al  [x19071]
    c.a.h = (uint8_t)(c.a.l);
    // 4750:0c82  mov cx, ax  [x19071]
    c.c.x = (uint16_t)(c.a.x);
    // 4750:0c84  shl eax, 0x10  [x19071]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 4750:0c88  mov ax, cx  [x19071]
    c.a.x = (uint16_t)(c.c.x);
    // 4750:0c8a  mov dword ptr [4], eax  [x19071]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 4750:0c8e  mov ax, 0x44b8  [x19071]
    c.a.x = (uint16_t)(0x44b8u);
    // 4750:0c91  mov fs, ax  [x19071]
    c.loadFs(c.a.x);
    // 4750:0c93  mov cx, 0x3518  [x19071]
    c.c.x = (uint16_t)(0x3518u);
    // 4750:0c96  mov gs, cx  [x19071]
    c.loadGs(c.c.x);
    // 4750:0c98  mov ax, word ptr [0xb2]  [x19071]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb2u)));
    // 4750:0c9b  mov es, ax  [x19071]
    c.loadEs(c.a.x);
    // 4750:0c9d  push cs  [x19071]
    c.push16(c.cs);
    // 4750:0c9e  call 0x418  [x19071]
    c.push16(0xca1u); code_11(c, 0x47918u); if (c.ip != 0xca1u) c.badReturn(0x4819e);
L481a1:
    if (c.tracing) c.traceAt(0x481a1);
    // 4750:0ca1  add dword ptr [0], 4  [x22944]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 4750:0ca7  inc dword ptr [8]  [x22944]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 4750:0cac  mov eax, dword ptr [0xc]  [x22944]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 4750:0cb0  cmp dword ptr [8], eax  [x22944]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 4750:0cb5  jne 0x966  [x22944]
    if (!c.zf) goto L47e66;
L481b9:
    if (c.tracing) c.traceAt(0x481b9);
    // 4750:0cb9  retf   [x18496]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L481ba:
    if (c.tracing) c.traceAt(0x481ba);
    // 4750:0cba  add dword ptr [0x6f], 0x58  [x18496]
    c.w32(c.dsb + (uint16_t)(0x6fu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x6fu)), 0x58u, false));
    // 4750:0cc0  add dword ptr [0x73], 0x19c  [x18496]
    c.w32(c.dsb + (uint16_t)(0x73u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x73u)), 0x19cu, false));
    // 4750:0cc9  add dword ptr [0x77], 0  [x18496]
    c.w32(c.dsb + (uint16_t)(0x77u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x77u)), 0x0u, false));
    // 4750:0ccf  mov ax, 0x24f1  [x18496]
    c.a.x = (uint16_t)(0x24f1u);
    // 4750:0cd2  mov es, ax  [x18496]
    c.loadEs(c.a.x);
    // 4750:0cd4  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:0cd9  mov edi, dword ptr [0x73]  [x18496]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 4750:0cde  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:0ce1  add edi, edi  [x18496]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 4750:0ce4  mov ebp, ebx  [x18496]
    c.bp.e = (uint32_t)(c.b.e);
    // 4750:0ce7  add ebx, edi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 4750:0cea  sub ebp, edi  [x18496]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 4750:0ced  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0cf7  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:0d01  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0d04  mov dword ptr [0x4b], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4bu), c.a.e);
    // 4750:0d08  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0d12  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0d1c  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0d1f  mov dword ptr [0x4f], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x4fu), c.a.e);
    // 4750:0d23  mov ebx, edi  [x18496]
    c.b.e = (uint32_t)(c.di.e);
    // 4750:0d26  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0d30  mov dword ptr [0x53], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x53u), c.a.e);
    // 4750:0d34  mov ebp, dword ptr [0x77]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:0d39  add ebp, ebp  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:0d3c  mov eax, ebx  [x18496]
    c.a.e = (uint32_t)(c.b.e);
    // 4750:0d3f  sub ebx, ebp  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 4750:0d42  add ebp, eax  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 4750:0d45  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0d4f  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0d59  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0d5c  mov dword ptr [0x5f], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5fu), c.a.e);
    // 4750:0d60  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0d6a  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:0d74  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0d77  mov dword ptr [0x6b], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x6bu), c.a.e);
    // 4750:0d7b  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:0d80  add ebx, dword ptr [0x73]  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x73u)), false));
    // 4750:0d85  sub ebx, dword ptr [0x77]  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:0d8a  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:0d8d  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0d97  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0da1  mov edx, ecx  [x18496]
    c.dx_.e = (uint32_t)(c.c.e);
    // 4750:0da4  neg edx  [x18496]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 4750:0da7  mov edi, eax  [x18496]
    c.di.e = (uint32_t)(c.a.e);
    // 4750:0daa  mov esi, dword ptr [0x77]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:0daf  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:0db2  add ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4750:0db5  add ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 4750:0db8  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0dc2  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0dcc  sub eax, esi  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:0dcf  sub ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4750:0dd2  sub edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 4750:0dd5  add edi, esi  [x18496]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 4750:0dd8  mov esi, dword ptr [0x73]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 4750:0ddd  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:0de0  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:0de3  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:0de6  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0df0  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0dfa  add eax, esi  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 4750:0dfd  add ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 4750:0e00  add edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4750:0e03  sub edi, esi  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4750:0e06  mov esi, dword ptr [0x77]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:0e0b  add esi, esi  [x18496]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 4750:0e0e  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:0e11  sub ebx, esi  [x18496]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 4750:0e14  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0e1e  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0e28  sub eax, esi  [x18496]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 4750:0e2b  sub ecx, ebp  [x18496]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 4750:0e2e  add edx, ebp  [x18496]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 4750:0e31  sub edi, esi  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 4750:0e34  sar eax, 2  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 4750:0e38  sar ecx, 2  [x18496]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 4750:0e3c  sar edx, 2  [x18496]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 4750:0e40  sar edi, 2  [x18496]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 4750:0e44  mov dword ptr [0x57], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x57u), c.a.e);
    // 4750:0e48  mov dword ptr [0x5b], ecx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.c.e);
    // 4750:0e4d  mov dword ptr [0x63], edx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x63u), c.dx_.e);
    // 4750:0e52  mov dword ptr [0x67], edi  [x18496]
    c.w32(c.dsb + (uint16_t)(0x67u), c.di.e);
    // 4750:0e57  mov ebx, dword ptr [0x6f]  [x18496]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:0e5c  mov ebp, ebx  [x18496]
    c.bp.e = (uint32_t)(c.b.e);
    // 4750:0e5f  add ebx, dword ptr [0x77]  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:0e64  sub ebp, dword ptr [0x77]  [x18496]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x77u)), false));
    // 4750:0e69  add ebx, ebx  [x18496]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 4750:0e6c  add ebp, ebp  [x18496]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 4750:0e6f  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0e79  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0e83  sar eax, 1  [x18496]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 4750:0e86  add dword ptr [0x57], eax  [x18496]
    c.w32(c.dsb + (uint16_t)(0x57u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x57u)), c.a.e, false));
    // 4750:0e8b  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0e95  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:0e9f  sar ecx, 1  [x18496]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 4750:0ea2  sub dword ptr [0x5b], ecx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x5bu), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x5bu)), c.c.e, false));
    // 4750:0ea7  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x18496]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 4750:0eb1  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x18496]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 4750:0ebb  sar edx, 1  [x18496]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 4750:0ebe  sub dword ptr [0x63], edx  [x18496]
    c.w32(c.dsb + (uint16_t)(0x63u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x63u)), c.dx_.e, false));
    // 4750:0ec3  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x18496]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 4750:0ecd  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x18496]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 4750:0ed7  sar edi, 1  [x18496]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 4750:0eda  sub dword ptr [0x67], edi  [x18496]
    c.w32(c.dsb + (uint16_t)(0x67u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x67u)), c.di.e, true));
    // 4750:0edf  mov eax, dword ptr [0x63]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x63u)));
    // 4750:0ee3  mov dword ptr cs:[0xbed], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0xbedu), c.a.e);
    // 4750:0ee8  mov eax, dword ptr [0x67]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x67u)));
    // 4750:0eec  mov dword ptr cs:[0xbf4], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0xbf4u), c.a.e);
    // 4750:0ef1  mov eax, dword ptr [0x6b]  [x18496]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6bu)));
    // 4750:0ef5  mov dword ptr cs:[0xbfe], eax  [x18496]
    c.w32(c.csb + (uint16_t)(0xbfeu), c.a.e);
    // 4750:0efa  retf   [x18496]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L483fb:
    if (c.tracing) c.traceAt(0x483fb);
    // 4750:0efb  push ds  [x2]
    c.push16(c.ds);
    // 4750:0efc  mov ds, ax  [x2]
    c.loadDs(c.a.x);
    // 4750:0efe  mov dx, 0x3c7  [x2]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 4750:0f01  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 4750:0f03  out dx, al  [x2]
    c.ip = 0xf04u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4750:0f04  cld   [x2]
    c.df = false;
    // 4750:0f05  mov dx, 0x3c8  [x2]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 4750:0f08  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 4750:0f0a  out dx, al  [x2]
    c.ip = 0xf0bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4750:0f0b  mov cx, 0xff  [x2]
    c.c.x = (uint16_t)(0xffu);
L4840e:
    if (c.tracing) c.traceAt(0x4840e);
    // 4750:0f0e  mov dx, 0x3c9  [x510]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 4750:0f11  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xf12u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4750:0f12  out dx, al  [x510]
    c.ip = 0xf13u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4750:0f13  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xf14u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4750:0f14  out dx, al  [x510]
    c.ip = 0xf15u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4750:0f15  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xf16u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4750:0f16  out dx, al  [x510]
    c.ip = 0xf17u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4750:0f17  loop 0xf0e  [x510]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4840e;
L48419:
    if (c.tracing) c.traceAt(0x48419);
    // 4750:0f19  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 4750:0f1a  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4841b:
    if (c.tracing) c.traceAt(0x4841b);
    // 4750:0f1b  mov ax, word ptr [0xab]  [x583]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xabu)));
    // 4750:0f1e  not ax  [x583]
    c.a.x = (uint16_t)(~(c.a.x));
    // 4750:0f20  and ax, 0x500  [x583]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 4750:0f23  shl ah, 4  [x583]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), false));
    // 4750:0f26  mov dx, 0x3d4  [x583]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 4750:0f29  mov al, 0xc  [x583]
    c.a.l = (uint8_t)(0xcu);
    // 4750:0f2b  out dx, ax  [x583]
    c.ip = 0xf2cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4750:0f2c  mov ax, word ptr [0xab]  [x583]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xabu)));
    // 4750:0f2f  and ax, 0x500  [x583]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 4750:0f32  add ax, 0xa000  [x583]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 4750:0f35  mov word ptr [0xb2], ax  [x583]
    c.w16(c.dsb + (uint16_t)(0xb2u), c.a.x);
    // 4750:0f38  not word ptr [0xab]  [x583]
    c.w16(c.dsb + (uint16_t)(0xabu), ~(c.r16(c.dsb + (uint16_t)(0xabu))));
    // 4750:0f3c  retf   [x583]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4843d:
    if (c.tracing) c.traceAt(0x4843d);
    // 4750:0f3d  mov ax, 0x2eb5  [x99351]
    c.a.x = (uint16_t)(0x2eb5u);
    // 4750:0f40  mov fs, ax  [x99351]
    c.loadFs(c.a.x);
    // 4750:0f42  mov bx, word ptr fs:[0]  [x99351]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 4750:0f47  mov cx, word ptr [0xc1]  [x99351]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc1u)));
    // 4750:0f4b  shl cx, 2  [x99351]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 4750:0f4e  add bx, cx  [x99351]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 4750:0f50  mov bx, word ptr fs:[bx]  [x99351]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4750:0f53  mov cx, word ptr fs:[bx]  [x99351]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4750:0f56  mov dx, word ptr fs:[bx + 2]  [x99351]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 4750:0f5a  mov word ptr [0x3f], cx  [x99351]
    c.w16(c.dsb + (uint16_t)(0x3fu), c.c.x);
    // 4750:0f5e  mov word ptr [0x41], dx  [x99351]
    c.w16(c.dsb + (uint16_t)(0x41u), c.dx_.x);
    // 4750:0f62  mov ax, word ptr fs:[bx + 4]  [x99351]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 4750:0f66  movzx eax, ax  [x99351]
    c.a.e = (uint32_t)(c.a.x);
    // 4750:0f6a  mov dword ptr [0], eax  [x99351]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 4750:0f6e  mov di, word ptr [0x39]  [x99351]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x39u)));
L48472:
    if (c.tracing) c.traceAt(0x48472);
    // 4750:0f72  mov eax, dword ptr fs:[bx + 0x16]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 4750:0f77  mov edx, dword ptr fs:[bx + 0x1a]  [x100035]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 4750:0f7c  mov ecx, dword ptr fs:[bx + 0x1e]  [x100035]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 4750:0f81  sar eax, 8  [x100035]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 4750:0f85  sar edx, 8  [x100035]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 4750:0f89  sar ecx, 8  [x100035]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 4750:0f8d  mov dword ptr [0x6f], eax  [x100035]
    c.w32(c.dsb + (uint16_t)(0x6fu), c.a.e);
    // 4750:0f91  mov dword ptr [0x73], edx  [x100035]
    c.w32(c.dsb + (uint16_t)(0x73u), c.dx_.e);
    // 4750:0f96  mov dword ptr [0x77], ecx  [x100035]
    c.w32(c.dsb + (uint16_t)(0x77u), c.c.e);
    // 4750:0f9b  mov eax, dword ptr fs:[bx + 0x16]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 4750:0fa0  mov edx, dword ptr fs:[bx + 0x1a]  [x100035]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 4750:0fa5  mov ecx, dword ptr fs:[bx + 0x1e]  [x100035]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 4750:0faa  add eax, 2  [x100035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x2u, false));
    // 4750:0fae  add eax, 0x200  [x100035]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x200u, false));
    // 4750:0fb4  add edx, dword ptr fs:[bx + 0xa]  [x100035]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 4750:0fb9  add ecx, dword ptr fs:[bx + 0xe]  [x100035]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 4750:0fbe  mov ebp, 0x3ffff  [x100035]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 4750:0fc4  and eax, ebp  [x100035]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 4750:0fc7  and edx, ebp  [x100035]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 4750:0fca  and ecx, ebp  [x100035]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), false));
    // 4750:0fcd  mov dword ptr fs:[bx + 0x16], eax  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 4750:0fd2  mov dword ptr fs:[bx + 0x1a], edx  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 4750:0fd7  mov dword ptr fs:[bx + 0x1e], ecx  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 4750:0fdc  mov eax, dword ptr fs:[bx + 0x2e]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)));
    // 4750:0fe1  mov dword ptr [0xbc], eax  [x100035]
    c.w32(c.dsb + (uint16_t)(0xbcu), c.a.e);
    // 4750:0fe5  mov eax, dword ptr fs:[bx + 0x3e]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3eu)));
    // 4750:0fea  add dword ptr fs:[bx + 0x2e], eax  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2eu), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)), c.a.e, false));
    // 4750:0fef  mov eax, dword ptr fs:[bx + 0x2a]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)));
    // 4750:0ff4  mov dword ptr [0xb8], eax  [x100035]
    c.w32(c.dsb + (uint16_t)(0xb8u), c.a.e);
    // 4750:0ff8  mov eax, dword ptr fs:[bx + 0x3a]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3au)));
    // 4750:0ffd  add dword ptr fs:[bx + 0x2a], eax  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2au), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)), c.a.e, false));
    // 4750:1002  mov eax, dword ptr fs:[bx + 0x26]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)));
    // 4750:1007  mov dword ptr [0xb4], eax  [x100035]
    c.w32(c.dsb + (uint16_t)(0xb4u), c.a.e);
    // 4750:100b  mov eax, dword ptr fs:[bx + 0x36]  [x100035]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x36u)));
    // 4750:1010  add dword ptr fs:[bx + 0x26], eax  [x100035]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x26u), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)), c.a.e, true));
    // 4750:1015  dec di  [x100035]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 4750:1016  jne 0xf72  [x100035]
    if (!c.zf) goto L48472;
L4851a:
    if (c.tracing) c.traceAt(0x4851a);
    // 4750:101a  cmp dword ptr [0xbc], 0x27100  [x99351]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbcu)), 0x27100u, true);
    // 4750:1023  jle 0x103c  [x99351]
    if ((c.zf || c.sf != c.of)) goto L4853c;
L48525:
    if (c.tracing) c.traceAt(0x48525);
    // 4750:1025  mov eax, dword ptr [0xd3]  [x78116]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xd3u)));
    // 4750:1029  cmp dword ptr [0xbc], eax  [x78116]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbcu)), c.a.e, true);
    // 4750:102e  jge 0x103c  [x78116]
    if ((c.sf == c.of)) goto L4853c;
L48530:
    if (c.tracing) c.traceAt(0x48530);
    // 4750:1030  push cs  [x18496]
    c.push16(c.cs);
    // 4750:1031  call 0x322  [x18496]
    c.push16(0x1034u); code_11(c, 0x47822u); if (c.ip != 0x1034u) c.badReturn(0x48531);
L48534:
    if (c.tracing) c.traceAt(0x48534);
    // 4750:1034  push cs  [x18496]
    c.push16(c.cs);
    // 4750:1035  call 0xcba  [x18496]
    c.push16(0x1038u); code_11(c, 0x481bau); if (c.ip != 0x1038u) c.badReturn(0x48535);
L48538:
    if (c.tracing) c.traceAt(0x48538);
    // 4750:1038  push cs  [x18496]
    c.push16(c.cs);
    // 4750:1039  call 0x804  [x18496]
    c.push16(0x103cu); code_11(c, 0x47d04u); if (c.ip != 0x103cu) c.badReturn(0x48539);
L4853c:
    if (c.tracing) c.traceAt(0x4853c);
    // 4750:103c  retf   [x99351]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4853d:
    if (c.tracing) c.traceAt(0x4853d);
    // 4750:103d  mov ax, 0x2eb5  [x2]
    c.a.x = (uint16_t)(0x2eb5u);
    // 4750:1040  mov fs, ax  [x2]
    c.loadFs(c.a.x);
    // 4750:1042  mov bx, word ptr fs:[0]  [x2]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 4750:1047  mov cx, word ptr [0xc1]  [x2]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc1u)));
    // 4750:104b  shl cx, 2  [x2]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 4750:104e  add bx, cx  [x2]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 4750:1050  mov bx, word ptr fs:[bx]  [x2]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4750:1053  mov cx, word ptr fs:[bx]  [x2]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 4750:1056  mov dx, word ptr fs:[bx + 2]  [x2]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 4750:105a  mov word ptr [0x3f], cx  [x2]
    c.w16(c.dsb + (uint16_t)(0x3fu), c.c.x);
    // 4750:105e  mov word ptr [0x41], dx  [x2]
    c.w16(c.dsb + (uint16_t)(0x41u), c.dx_.x);
    // 4750:1062  mov ax, word ptr fs:[bx + 4]  [x2]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 4750:1066  movzx eax, ax  [x2]
    c.a.e = (uint32_t)(c.a.x);
    // 4750:106a  mov dword ptr [0], eax  [x2]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 4750:106e  mov eax, dword ptr [0x6f]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6fu)));
    // 4750:1072  mov dword ptr fs:[bx + 6], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x6u), c.a.e);
    // 4750:1077  mov eax, dword ptr [0x73]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x73u)));
    // 4750:107b  mov dword ptr fs:[bx + 0xa], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0xau), c.a.e);
    // 4750:1080  mov eax, dword ptr [0x77]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x77u)));
    // 4750:1084  mov dword ptr fs:[bx + 0xe], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0xeu), c.a.e);
    // 4750:1089  mov eax, dword ptr [0xbc]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbcu)));
    // 4750:108d  mov dword ptr fs:[bx + 0x3e], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x3eu), c.a.e);
    // 4750:1092  mov eax, dword ptr [0xb8]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb8u)));
    // 4750:1096  mov dword ptr fs:[bx + 0x3a], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x3au), c.a.e);
    // 4750:109b  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L485d4:
    if (c.tracing) c.traceAt(0x485d4);
    // 4750:10d4  mov ax, 0x4531  [x2]
    c.a.x = (uint16_t)(0x4531u);
    // 4750:10d7  mov ds, ax  [x2]
    c.loadDs(c.a.x);
    // 4750:10d9  mov bx, 0xa  [x2]
    c.b.x = (uint16_t)(0xau);
    // 4750:10dc  mov ax, 2  [x2]
    c.a.x = (uint16_t)(0x2u);
    // 4750:10df  int 0xff  [x2]
    c.ip = 0x10e1u; c.d32 = false; c.intr(0xff, 0x10e1u);
L485e1:
    if (c.tracing) c.traceAt(0x485e1);
    // 4750:10e1  push cs  [x2]
    c.push16(c.cs);
    // 4750:10e2  call 0x76e  [x2]
    c.push16(0x10e5u); code_11(c, 0x47c6eu); if (c.ip != 0x10e5u) c.badReturn(0x485e2);
L485e5:
    if (c.tracing) c.traceAt(0x485e5);
    // 4750:10e5  mov ax, 0x3324  [x2]
    c.a.x = (uint16_t)(0x3324u);
    // 4750:10e8  mov bx, 0  [x2]
    c.b.x = (uint16_t)(0x0u);
    // 4750:10eb  mov si, 0x43  [x2]
    c.si.x = (uint16_t)(0x43u);
    // 4750:10ee  mov word ptr [si], bx  [x2]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 4750:10f0  mov word ptr [si + 2], ax  [x2]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 4750:10f3  mov ax, 0x2cf2  [x2]
    c.a.x = (uint16_t)(0x2cf2u);
    // 4750:10f6  mov si, 0  [x2]
    c.si.x = (uint16_t)(0x0u);
    // 4750:10f9  push cs  [x2]
    c.push16(c.cs);
    // 4750:10fa  call 0xefb  [x2]
    c.push16(0x10fdu); code_11(c, 0x483fbu); if (c.ip != 0x10fdu) c.badReturn(0x485fa);
L485fd:
    if (c.tracing) c.traceAt(0x485fd);
    // 4750:10fd  mov dword ptr [0xb8], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0xb8u), 0x0u);
    // 4750:1106  mov word ptr [0xb2], 0xa000  [x2]
    c.w16(c.dsb + (uint16_t)(0xb2u), 0xa000u);
    // 4750:110c  mov word ptr [0xab], 0  [x2]
    c.w16(c.dsb + (uint16_t)(0xabu), 0x0u);
    // 4750:1112  mov ax, word ptr [0xab]  [x2]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xabu)));
    // 4750:1115  push cs  [x2]
    c.push16(c.cs);
    // 4750:1116  call 0xf1b  [x2]
    c.push16(0x1119u); code_11(c, 0x4841bu); if (c.ip != 0x1119u) c.badReturn(0x48616);
L48619:
    if (c.tracing) c.traceAt(0x48619);
    // 4750:1119  push cs  [x2]
    c.push16(c.cs);
    // 4750:111a  call 0x6da  [x2]
    c.push16(0x111du); code_11(c, 0x47bdau); if (c.ip != 0x111du) c.badReturn(0x4861a);
L4861d:
    if (c.tracing) c.traceAt(0x4861d);
    // 4750:111d  mov word ptr [0x39], 3  [x2]
    c.w16(c.dsb + (uint16_t)(0x39u), 0x3u);
    // 4750:1123  mov dword ptr [0xd3], 0x4c4b40  [x2]
    c.w32(c.dsb + (uint16_t)(0xd3u), 0x4c4b40u);
    // 4750:112c  mov byte ptr [0xc0], 0x12  [x2]
    c.w8(c.dsb + (uint16_t)(0xc0u), 0x12u);
    // 4750:1131  mov word ptr [0xc1], 0  [x2]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0x0u);
    // 4750:1137  mov dword ptr [0x6f], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x6fu), 0x0u);
    // 4750:1140  mov dword ptr [0x73], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x73u), 0x0u);
    // 4750:1149  mov dword ptr [0x77], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x77u), 0x0u);
    // 4750:1152  mov dword ptr [0xbc], 0x834  [x2]
    c.w32(c.dsb + (uint16_t)(0xbcu), 0x834u);
    // 4750:115b  mov dword ptr [0xb8], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0xb8u), 0x0u);
    // 4750:1164  push cs  [x2]
    c.push16(c.cs);
    // 4750:1165  call 0x103d  [x2]
    c.push16(0x1168u); code_11(c, 0x4853du); if (c.ip != 0x1168u) c.badReturn(0x48665);
L48668:
    if (c.tracing) c.traceAt(0x48668);
    // 4750:1168  mov word ptr [0xd1], 0  [x2]
    c.w16(c.dsb + (uint16_t)(0xd1u), 0x0u);
L4866e:
    if (c.tracing) c.traceAt(0x4866e);
    // 4750:116e  push cs  [x581]
    c.push16(c.cs);
    // 4750:116f  call 0x6da  [x581]
    c.push16(0x1172u); code_11(c, 0x47bdau); if (c.ip != 0x1172u) c.badReturn(0x4866f);
L48672:
    if (c.tracing) c.traceAt(0x48672);
    // 4750:1172  mov word ptr [0xc1], 0  [x581]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0x0u);
L48678:
    if (c.tracing) c.traceAt(0x48678);
    // 4750:1178  push cs  [x99351]
    c.push16(c.cs);
    // 4750:1179  call 0xf3d  [x99351]
    c.push16(0x117cu); code_11(c, 0x4843du); if (c.ip != 0x117cu) c.badReturn(0x48679);
L4867c:
    if (c.tracing) c.traceAt(0x4867c);
    // 4750:117c  inc word ptr [0xc1]  [x99351]
    c.w16(c.dsb + (uint16_t)(0xc1u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xc1u)), false));
    // 4750:1180  cmp word ptr [0xc1], 0xaa  [x99351]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xc1u)), 0xaau, true);
    // 4750:1186  jle 0x1178  [x99351]
    if ((c.zf || c.sf != c.of)) goto L48678;
L48688:
    if (c.tracing) c.traceAt(0x48688);
    // 4750:1188  push cs  [x581]
    c.push16(c.cs);
    // 4750:1189  call 0xf1b  [x581]
    c.push16(0x118cu); code_11(c, 0x4841bu); if (c.ip != 0x118cu) c.badReturn(0x48689);
L4868c:
    if (c.tracing) c.traceAt(0x4868c);
    // 4750:118c  mov bx, 0xe  [x581]
    c.b.x = (uint16_t)(0xeu);
    // 4750:118f  int 0xff  [x581]
    c.ip = 0x1191u; c.d32 = false; c.intr(0xff, 0x1191u);
L48691:
    if (c.tracing) c.traceAt(0x48691);
    // 4750:1191  mov word ptr [0x39], ax  [x580]
    c.w16(c.dsb + (uint16_t)(0x39u), c.a.x);
    // 4750:1194  mov ax, word ptr [0x39]  [x580]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x39u)));
    // 4750:1197  add word ptr [0xd1], ax  [x580]
    c.w16(c.dsb + (uint16_t)(0xd1u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xd1u)), c.a.x, false));
    // 4750:119b  cmp word ptr [0xd1], 0x1a4  [x580]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xd1u)), 0x1a4u, true);
    // 4750:11a1  jl 0x116e  [x580]
    if ((c.sf != c.of)) goto L4866e;
L486a3:
    if (c.tracing) c.traceAt(0x486a3);
    // 4750:11a3  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 4750:11a5  int 0x21  [x1]
    c.ip = 0x11a7u; c.d32 = false; c.intr(0x21, 0x11a7u);
    c.notTranslated(0x486a7, "fall-through");
}

static Register reg11(11, {0x4758a, 0x47822, 0x47826, 0x47847, 0x478ff, 0x47901, 0x47918, 0x4792e, 0x4794e, 0x47958, 0x4796b, 0x47990, 0x479b0, 0x479ba, 0x479cd, 0x479f2, 0x479fc, 0x47a35, 0x47a39, 0x47a4e, 0x47a5b, 0x47a61, 0x47a65, 0x47a69, 0x47a6b, 0x47a70, 0x47a72, 0x47a80, 0x47a89, 0x47aa1, 0x47aca, 0x47ae9, 0x47af6, 0x47b16, 0x47b20, 0x47b33, 0x47b58, 0x47b5f, 0x47b6a, 0x47b8a, 0x47b94, 0x47ba7, 0x47bcc, 0x47bd9, 0x47bda, 0x47bfe, 0x47c01, 0x47c6e, 0x47c79, 0x47c8b, 0x47c93, 0x47cc7, 0x47cc9, 0x47ccc, 0x47ccf, 0x47ce1, 0x47d04, 0x47e4b, 0x47e66, 0x47ef7, 0x47f20, 0x47f34, 0x47f38, 0x47f9d, 0x47fce, 0x47ffe, 0x4800c, 0x48012, 0x48017, 0x4801a, 0x4801c, 0x48027, 0x48032, 0x48062, 0x48070, 0x48076, 0x4807b, 0x4807e, 0x48080, 0x48092, 0x48099, 0x480a0, 0x480ac, 0x480b2, 0x4814e, 0x48167, 0x4816d, 0x481a1, 0x481b9, 0x481ba, 0x483fb, 0x4840e, 0x48419, 0x4841b, 0x4843d, 0x48472, 0x4851a, 0x48525, 0x48530, 0x48534, 0x48538, 0x4853c, 0x4853d, 0x485d4, 0x485e1, 0x485e5, 0x485fd, 0x48619, 0x4861d, 0x48668, 0x4866e, 0x48672, 0x48678, 0x4867c, 0x48688, 0x4868c, 0x48691, 0x486a3}, code_11);

}  // namespace angel
