// Program 18, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_18(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f2a: goto L24f2a;
    case 0x24f33: goto L24f33;
    case 0x24f38: goto L24f38;
    case 0x24f87: goto L24f87;
    case 0x24fa9: goto L24fa9;
    case 0x24fb2: goto L24fb2;
    case 0x24fbe: goto L24fbe;
    case 0x24fc7: goto L24fc7;
    case 0x24fd3: goto L24fd3;
    case 0x24fdc: goto L24fdc;
    case 0x2504e: goto L2504e;
    case 0x25075: goto L25075;
    case 0x25079: goto L25079;
    case 0x25083: goto L25083;
    case 0x250a9: goto L250a9;
    case 0x250ad: goto L250ad;
    case 0x250b1: goto L250b1;
    case 0x250c4: goto L250c4;
    case 0x250d5: goto L250d5;
    case 0x250ea: goto L250ea;
    case 0x250ef: goto L250ef;
    case 0x25101: goto L25101;
    case 0x25104: goto L25104;
    case 0x25118: goto L25118;
    case 0x25120: goto L25120;
    case 0x25127: goto L25127;
    case 0x25130: goto L25130;
    case 0x25135: goto L25135;
    case 0x2513b: goto L2513b;
    case 0x25148: goto L25148;
    case 0x25159: goto L25159;
    case 0x25164: goto L25164;
    case 0x25169: goto L25169;
    case 0x25180: goto L25180;
    case 0x25192: goto L25192;
    case 0x251a7: goto L251a7;
    case 0x251b2: goto L251b2;
    case 0x251be: goto L251be;
    case 0x251cc: goto L251cc;
    case 0x251ee: goto L251ee;
    case 0x251f9: goto L251f9;
    case 0x251fe: goto L251fe;
    case 0x2520d: goto L2520d;
    case 0x25216: goto L25216;
    case 0x25220: goto L25220;
    case 0x2522d: goto L2522d;
    case 0x2522f: goto L2522f;
    case 0x25236: goto L25236;
    case 0x2523e: goto L2523e;
    case 0x25243: goto L25243;
    case 0x2524f: goto L2524f;
    case 0x25251: goto L25251;
    case 0x25258: goto L25258;
    case 0x25268: goto L25268;
    case 0x25277: goto L25277;
    case 0x25279: goto L25279;
    case 0x25280: goto L25280;
    case 0x25290: goto L25290;
    case 0x25293: goto L25293;
    case 0x2529a: goto L2529a;
    case 0x252a3: goto L252a3;
    case 0x252c0: goto L252c0;
    case 0x25357: goto L25357;
    case 0x25362: goto L25362;
    case 0x25385: goto L25385;
    case 0x25387: goto L25387;
    case 0x2539f: goto L2539f;
    case 0x253b9: goto L253b9;
    case 0x253bb: goto L253bb;
    case 0x253d6: goto L253d6;
    case 0x253e0: goto L253e0;
    case 0x253ea: goto L253ea;
    case 0x253f1: goto L253f1;
    case 0x25402: goto L25402;
    case 0x25410: goto L25410;
    case 0x254de: goto L254de;
    case 0x254ec: goto L254ec;
    case 0x254f1: goto L254f1;
    case 0x254fd: goto L254fd;
    case 0x25526: goto L25526;
    case 0x25530: goto L25530;
    case 0x2553f: goto L2553f;
    case 0x2554e: goto L2554e;
    case 0x25552: goto L25552;
    case 0x2555f: goto L2555f;
    case 0x255b3: goto L255b3;
    case 0x255bb: goto L255bb;
    case 0x255c7: goto L255c7;
    case 0x255ca: goto L255ca;
    case 0x255d0: goto L255d0;
    case 0x255da: goto L255da;
    case 0x255ea: goto L255ea;
    case 0x255f0: goto L255f0;
    case 0x25625: goto L25625;
    case 0x2562b: goto L2562b;
    case 0x25631: goto L25631;
    case 0x25634: goto L25634;
    case 0x2563d: goto L2563d;
    case 0x25646: goto L25646;
    case 0x2564f: goto L2564f;
    case 0x25651: goto L25651;
    case 0x25658: goto L25658;
    case 0x25661: goto L25661;
    case 0x25667: goto L25667;
    case 0x25676: goto L25676;
    case 0x25680: goto L25680;
    case 0x2568e: goto L2568e;
    case 0x256a3: goto L256a3;
    case 0x256b7: goto L256b7;
    case 0x256cb: goto L256cb;
    case 0x256cd: goto L256cd;
    case 0x256d3: goto L256d3;
    case 0x256d7: goto L256d7;
    case 0x256dc: goto L256dc;
    case 0x256e6: goto L256e6;
    case 0x256ee: goto L256ee;
    case 0x256f6: goto L256f6;
    case 0x25714: goto L25714;
    case 0x25724: goto L25724;
    case 0x2572b: goto L2572b;
    case 0x25737: goto L25737;
    case 0x2573c: goto L2573c;
    case 0x2574c: goto L2574c;
    case 0x2574f: goto L2574f;
    case 0x2575b: goto L2575b;
    case 0x25784: goto L25784;
    case 0x2578a: goto L2578a;
    case 0x25790: goto L25790;
    case 0x2579a: goto L2579a;
    case 0x257a2: goto L257a2;
    case 0x257a7: goto L257a7;
    case 0x257ae: goto L257ae;
    case 0x257bb: goto L257bb;
    case 0x257be: goto L257be;
    case 0x257c2: goto L257c2;
    case 0x257c4: goto L257c4;
    case 0x257d0: goto L257d0;
    case 0x257e0: goto L257e0;
    case 0x257e7: goto L257e7;
    case 0x25800: goto L25800;
    case 0x2580f: goto L2580f;
    case 0x25823: goto L25823;
    case 0x2582e: goto L2582e;
    case 0x2584a: goto L2584a;
    case 0x2585d: goto L2585d;
    case 0x25867: goto L25867;
    case 0x2586a: goto L2586a;
    case 0x25874: goto L25874;
    case 0x2587c: goto L2587c;
    case 0x25883: goto L25883;
    case 0x25890: goto L25890;
    case 0x25893: goto L25893;
    case 0x2589c: goto L2589c;
    case 0x258a0: goto L258a0;
    case 0x258ac: goto L258ac;
    case 0x258b1: goto L258b1;
    case 0x258ba: goto L258ba;
    case 0x258c0: goto L258c0;
    case 0x258d2: goto L258d2;
    case 0x258eb: goto L258eb;
    case 0x258ef: goto L258ef;
    case 0x25907: goto L25907;
    case 0x25915: goto L25915;
    case 0x25917: goto L25917;
    case 0x2591c: goto L2591c;
    case 0x2591e: goto L2591e;
    case 0x25926: goto L25926;
    case 0x25928: goto L25928;
    case 0x2592a: goto L2592a;
    case 0x25931: goto L25931;
    case 0x25933: goto L25933;
    case 0x25939: goto L25939;
    default: c.callLinear(t); return;
    }
L24f2a:
    if (c.tracing) c.traceAt(0x24f2a);
    // 24f1:001a  cli   [x1]
    c.m.cli();
    // 24f1:001b  mov eax, cr0  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 24f1:001e  or al, 1  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 24f1:0020  mov cr0, eax  [x1]
    c.setCr0(c.a.e);
L24f33:
    if (c.tracing) c.traceAt(0x24f33);
    // 24f1:0023  ljmp 0xc:8  [x1]
    c.loadCs(0xcu); t = c.csb + 0x8u; goto dispatch;
L24f38:
    if (c.tracing) c.traceAt(0x24f38);
    // 24f1:0028  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 24f1:002a  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 24f1:002c  mov word ptr [0], 0x1f7  [x1]
    c.w16(c.dsb + (uint16_t)(0u), 0x1f7u);
    // 24f1:0032  mov word ptr [2], cs  [x1]
    c.w16(c.dsb + (uint16_t)(0x2u), c.cs);
    // 24f1:0036  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 24f1:0038  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 24f1:003a  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 24f1:003c  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 24f1:0040  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 24f1:0044  mov word ptr [0xa], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xau), c.a.x);
    // 24f1:0047  ror eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 24f1:004b  mov byte ptr [0xc], al  [x1]
    c.w8(c.dsb + (uint16_t)(0xcu), c.a.l);
    // 24f1:004e  mov ax, 0x2511  [x1]
    c.a.x = (uint16_t)(0x2511u);
    // 24f1:0051  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 24f1:0055  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 24f1:0059  mov word ptr [0x12], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x12u), c.a.x);
    // 24f1:005c  ror eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 24f1:0060  mov byte ptr [0x14], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x14u), c.a.l);
    // 24f1:0063  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 24f1:0065  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 24f1:0069  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 24f1:006d  push eax  [x1]
    c.push32(c.a.e);
    // 24f1:006f  add eax, 8  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8u, true));
    // 24f1:0075  int 0xfc  [x1]
    c.ip = 0x77u; c.d32 = false; c.intr(0xfc, 0x77u);
L24f87:
    if (c.tracing) c.traceAt(0x24f87);
    // 24f1:0077  mov dword ptr [0x202], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x202u), c.a.e);
    // 24f1:007e  mov edi, ebx  [x1]
    c.di.e = (uint32_t)(c.b.e);
    // 24f1:0081  mov dx, 0x1a95  [x1]
    c.dx_.x = (uint16_t)(0x1a95u);
    // 24f1:0084  pop eax  [x1]
    { const uint32_t t0 = c.pop32(); c.a.e = (uint32_t)(t0); }
    // 24f1:0086  mov dword ptr [0x1674], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0x1674u), c.b.e);
    // 24f1:008b  sub ebx, eax  [x1]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.a.e, false));
    // 24f1:008e  mov ecx, dword ptr [ebx]  [x1]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 24f1:0092  add ecx, ebx  [x1]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.b.e, true));
    // 24f1:0095  mov edi, dword ptr [ecx]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
L24fa9:
    if (c.tracing) c.traceAt(0x24fa9);
    // 24f1:0099  add dword ptr [ecx + edi*4], ebx  [x1045]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4)), c.b.e, true));
    // 24f1:009e  dec edi  [x1045]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00a0  jne 0x99  [x1045]
    if (!c.zf) goto L24fa9;
L24fb2:
    if (c.tracing) c.traceAt(0x24fb2);
    // 24f1:00a2  mov edx, dword ptr [ebx + 4]  [x1]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 24f1:00a7  add edx, ebx  [x1]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.b.e, true));
    // 24f1:00aa  mov edi, dword ptr [edx]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
L24fbe:
    if (c.tracing) c.traceAt(0x24fbe);
    // 24f1:00ae  add dword ptr [edx + edi*4], ebx  [x1678]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00b3  dec edi  [x1678]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00b5  jne 0xae  [x1678]
    if (!c.zf) goto L24fbe;
L24fc7:
    if (c.tracing) c.traceAt(0x24fc7);
    // 24f1:00b7  mov esi, dword ptr [ebx + 8]  [x1]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 24f1:00bc  add esi, ebx  [x1]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.b.e, true));
    // 24f1:00bf  mov edi, dword ptr [esi]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
L24fd3:
    if (c.tracing) c.traceAt(0x24fd3);
    // 24f1:00c3  add dword ptr [esi + edi*4], ebx  [x711]
    c.w32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00c8  dec edi  [x711]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00ca  jne 0xc3  [x711]
    if (!c.zf) goto L24fd3;
L24fdc:
    if (c.tracing) c.traceAt(0x24fdc);
    // 24f1:00cc  mov dword ptr [0x278], esi  [x1]
    c.w32(c.dsb + (uint32_t)(0x278u), c.si.e);
    // 24f1:00d4  mov eax, dword ptr [ebx + 0xc]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)));
    // 24f1:00d9  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00dc  mov dword ptr [0x1680], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1680u), c.a.e);
    // 24f1:00e0  add eax, 0x300  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x300u, false));
    // 24f1:00e6  mov dword ptr [0x1684], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1684u), c.a.e);
    // 24f1:00ea  mov dword ptr [0x1688], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1688u), c.a.e);
    // 24f1:00ee  mov eax, dword ptr [ebx + 0x10]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 24f1:00f3  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00f6  mov dword ptr [0x3a3], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x3a3u), c.a.e);
    // 24f1:00fd  mov dword ptr [0x612], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x612u), c.a.e);
    // 24f1:0104  mov dword ptr [0x1678], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1678u), c.a.e);
    // 24f1:0108  mov eax, dword ptr [ebx + 0x14]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 24f1:010d  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:0110  mov dword ptr [0x167c], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x167cu), c.a.e);
    // 24f1:0114  mov eax, dword ptr [ebx + 0x18]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)));
    // 24f1:0119  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:011c  mov dword ptr [0x10ec], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x10ecu), c.a.e);
    // 24f1:0120  pushal   [x1]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 24f1:0122  mov dx, 0x1aa1  [x1]
    c.dx_.x = (uint16_t)(0x1aa1u);
    // 24f1:0125  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 24f1:0128  mov di, ds  [x1]
    c.di.x = (uint16_t)(c.ds);
    // 24f1:012a  shl edi, 4  [x1]
    c.di.e = (uint32_t)(c.shl<32>(c.di.e, (int)((0x4u) & 31), false));
    // 24f1:012e  add edi, eax  [x1]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.a.e, true));
    // 24f1:0131  popal   [x1]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 24f1:0133  mov ax, word ptr [ebx + 0x1c]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x1cu)));
    // 24f1:0137  mov word ptr [0x18], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x18u), c.a.x);
    // 24f1:013a  mov edi, dword ptr [edx]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
L2504e:
    if (c.tracing) c.traceAt(0x2504e);
    // 24f1:013e  mov eax, dword ptr [edx + edi*4]  [x1678]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)));
    // 24f1:0143  mov ebx, dword ptr [eax + 0x18]  [x1678]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x18u)));
    // 24f1:0148  mov ebx, dword ptr [ecx + ebx*4]  [x1678]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:014d  mov dword ptr [eax + 0x18], ebx  [x1678]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x18u), c.b.e);
    // 24f1:0152  mov ebx, dword ptr [eax + 0x1c]  [x1678]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x1cu)));
    // 24f1:0157  mov ebx, dword ptr [ecx + ebx*4]  [x1678]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:015c  mov dword ptr [eax + 0x1c], ebx  [x1678]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x1cu), c.b.e);
    // 24f1:0161  dec edi  [x1678]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:0163  jne 0x13e  [x1678]
    if (!c.zf) goto L2504e;
L25075:
    if (c.tracing) c.traceAt(0x25075);
    // 24f1:0165  mov edi, dword ptr [esi]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
L25079:
    if (c.tracing) c.traceAt(0x25079);
    // 24f1:0169  mov eax, dword ptr [esi + edi*4]  [x711]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 24f1:016e  mov ebp, dword ptr [eax + 0x38]  [x711]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L25083:
    if (c.tracing) c.traceAt(0x25083);
    // 24f1:0173  mov ebx, dword ptr [eax + ebp*8 + 0x34]  [x2893]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 24f1:0179  mov ebx, dword ptr [ecx + ebx*4]  [x2893]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:017e  mov dword ptr [eax + ebp*8 + 0x34], ebx  [x2893]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u), c.b.e);
    // 24f1:0184  mov ebx, dword ptr [eax + ebp*8 + 0x38]  [x2893]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 24f1:018a  mov ebx, dword ptr [edx + ebx*4]  [x2893]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.b.e * 4)));
    // 24f1:018f  mov dword ptr [eax + ebp*8 + 0x38], ebx  [x2893]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u), c.b.e);
    // 24f1:0195  dec ebp  [x2893]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 24f1:0197  jne 0x173  [x2893]
    if (!c.zf) goto L25083;
L250a9:
    if (c.tracing) c.traceAt(0x250a9);
    // 24f1:0199  dec edi  [x711]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:019b  jne 0x169  [x711]
    if (!c.zf) goto L25079;
L250ad:
    if (c.tracing) c.traceAt(0x250ad);
    // 24f1:019d  mov eax, dword ptr [0x1678]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1678u)));
L250b1:
    if (c.tracing) c.traceAt(0x250b1);
    // 24f1:01a1  mov dword ptr [eax], eax  [x41]
    c.w32(c.dsb + (uint32_t)(c.a.e), c.a.e);
    // 24f1:01a5  mov dword ptr [eax + 8], eax  [x41]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.a.e);
    // 24f1:01aa  mov ebx, dword ptr [eax + 4]  [x41]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 24f1:01af  mov ebp, dword ptr [eax + 0xc]  [x41]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
L250c4:
    if (c.tracing) c.traceAt(0x250c4);
    // 24f1:01b4  mov edi, dword ptr [esi + ebx*4]  [x711]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.b.e * 4)));
    // 24f1:01b9  mov dword ptr [edi + 0x24], eax  [x711]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.a.e);
    // 24f1:01be  inc ebx  [x711]
    c.b.e = (uint32_t)(c.inc<32>(c.b.e, false));
    // 24f1:01c0  cmp ebx, ebp  [x711]
    c.sub<32>(c.b.e, c.bp.e, true);
    // 24f1:01c3  jbe 0x1b4  [x711]
    if ((c.cf || c.zf)) goto L250c4;
L250d5:
    if (c.tracing) c.traceAt(0x250d5);
    // 24f1:01c5  mov dword ptr [eax + 4], eax  [x41]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.a.e);
    // 24f1:01ca  mov dword ptr [eax + 0xc], eax  [x41]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.a.e);
    // 24f1:01cf  add eax, 0x40  [x41]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x40u, false));
    // 24f1:01d3  cmp eax, dword ptr [0x167c]  [x41]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x167cu)), true);
    // 24f1:01d8  jne 0x1a1  [x41]
    if (!c.zf) goto L250b1;
L250ea:
    if (c.tracing) c.traceAt(0x250ea);
    // 24f1:01da  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 24f1:01dd  int 0xff  [x1]
    c.ip = 0x1dfu; c.d32 = false; c.intr(0xff, 0x1dfu);
L250ef:
    if (c.tracing) c.traceAt(0x250ef);
    // 24f1:01df  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 24f1:01e2  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:01e4  out dx, al  [x1]
    c.ip = 0x1e5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:01e5  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 24f1:01e6  mov esi, dword ptr [0x1680]  [x1]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1680u)));
    // 24f1:01eb  mov ecx, 0x300  [x1]
    c.c.e = (uint32_t)(0x300u);
L25101:
    if (c.tracing) c.traceAt(0x25101);
    // 24f1:01f1  rep outsb dx, byte ptr [esi]  [x769]
    c.ip = 0x1f4u; c.d32 = false; c.outs<8, true>(c.dsb, 1);
L25104:
    if (c.tracing) c.traceAt(0x25104);
    // 24f1:01f4  jmp 0x1a  [x1]
    goto L24f2a;
L25118:
    if (c.tracing) c.traceAt(0x25118);
    // 000c:0008  mov eax, cr0  (32)  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 000c:000b  and al, 0xfe  (32)  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 000c:000d  mov cr0, eax  (32)  [x1]
    c.setCr0(c.a.e);
L25120:
    if (c.tracing) c.traceAt(0x25120);
    // 000c:0010  ljmp 0x2511:0x17  (32)  [x1]
    c.loadCs(0x2511u); t = c.csb + 0x17u; goto dispatch;
L25127:
    if (c.tracing) c.traceAt(0x25127);
    // 2511:0017  lidt cs:[0]  (32)  [x1]
    // 2511:001f  sti   (32)  [x1]
    c.ip = 0x20u; c.d32 = true; c.m.sti();
L25130:
    if (c.tracing) c.traceAt(0x25130);
    // 2511:0020  mov ax, word ptr [0x169a]  (32)  [x1470]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x169au)));
L25135:
    if (c.tracing) c.traceAt(0x25135);
    // 2511:0025  mov bx, 4  (32)  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 2511:0029  int 0xfb  (32)  [x1]
    c.ip = 0x2bu; c.d32 = true; c.intr(0xfb, 0x2bu);
L2513b:
    if (c.tracing) c.traceAt(0x2513b);
    // 2511:002b  xor word ptr [0x169a], 1  (32)  [x1470]
    c.w16(c.dsb + (uint16_t)(0x169au), c.logic<16>((c.r16(c.dsb + (uint16_t)(0x169au))) ^ (0x1u), true));
    // 2511:0032  mov bx, 0xe  (32)  [x1470]
    c.b.x = (uint16_t)(0xeu);
    // 2511:0036  int 0xff  (32)  [x1470]
    c.ip = 0x38u; c.d32 = true; c.intr(0xff, 0x38u);
L25148:
    if (c.tracing) c.traceAt(0x25148);
    // 2511:0038  mov word ptr [0x1696], ax  (32)  [x1470]
    c.w16(c.dsb + (uint16_t)(0x1696u), c.a.x);
    // 2511:003d  sub word ptr [0x18], ax  (32)  [x1470]
    c.w16(c.dsb + (uint16_t)(0x18u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x18u)), c.a.x, true));
    // 2511:0043  jl 0x7a1  (32)  [x1470]
    if ((c.sf != c.of)) goto L258b1;
L25159:
    if (c.tracing) c.traceAt(0x25159);
    // 2511:0049  mov ax, word ptr [0x169a]  (32)  [x1469]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x169au)));
    // 2511:004e  mov bx, 2  (32)  [x1469]
    c.b.x = (uint16_t)(0x2u);
    // 2511:0052  int 0xfb  (32)  [x1469]
    c.ip = 0x54u; c.d32 = true; c.intr(0xfb, 0x54u);
L25164:
    if (c.tracing) c.traceAt(0x25164);
    // 2511:0054  mov word ptr [0x169c], ax  (32)  [x1469]
    c.w16(c.dsb + (uint16_t)(0x169cu), c.a.x);
L25169:
    if (c.tracing) c.traceAt(0x25169);
    // 2511:0059  mov esi, dword ptr [0x10ec]  (32)  [x1469]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10ecu)));
    // 2511:005e  mov edi, dword ptr [esi]  (32)  [x1469]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2511:0060  lea eax, [esi + edi*4 + 4]  (32)  [x1469]
    c.a.e = (uint32_t)((uint32_t)(c.si.e + c.di.e * 4 + 0x4u));
    // 2511:0064  mov dword ptr [0x10ec], eax  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0x10ecu), c.a.e);
    // 2511:0068  or edi, edi  (32)  [x1469]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) | (c.di.e), true));
    // 2511:006a  je 0x193  (32)  [x1469]
    if (c.zf) goto L252a3;
L25180:
    if (c.tracing) c.traceAt(0x25180);
    // 2511:0070  push esi  (32)  [x39900]
    c.push32(c.si.e);
    // 2511:0071  push edi  (32)  [x39900]
    c.push32(c.di.e);
    // 2511:0072  mov eax, dword ptr [esi + edi*4]  (32)  [x39900]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 2511:0075  mov eax, dword ptr [eax*4 + 0x2a91ee]  (32)  [x39900]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + (uint32_t)(int32_t)c.r32(0x25188))));
    // 2511:007c  xor byte ptr [eax + 0x1a], 1  (32)  [x39900]
    c.w8(c.dsb + (uint32_t)(c.a.e + 0x1au), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.a.e + 0x1au))) ^ (0x1u), true));
    // 2511:0080  je 0xee  (32)  [x39900]
    if (c.zf) goto L251fe;
L25192:
    if (c.tracing) c.traceAt(0x25192);
    // 2511:0082  mov ebx, dword ptr [eax + 0x24]  (32)  [x20012]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x24u)));
    // 2511:0085  mov ecx, dword ptr [ebx + 4]  (32)  [x20012]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2511:0088  mov dword ptr [ebx + 4], eax  (32)  [x20012]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.a.e);
    // 2511:008b  mov dword ptr [eax + 0xc], ebx  (32)  [x20012]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.b.e);
    // 2511:008e  mov dword ptr [eax + 4], ecx  (32)  [x20012]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2511:0091  mov dword ptr [ecx + 0xc], eax  (32)  [x20012]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.a.e);
    // 2511:0094  mov ebp, dword ptr [eax + 0x38]  (32)  [x20012]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L251a7:
    if (c.tracing) c.traceAt(0x251a7);
    // 2511:0097  push ebx  (32)  [x78449]
    c.push32(c.b.e);
    // 2511:0098  mov ecx, dword ptr [eax + ebp*8 + 0x34]  (32)  [x78449]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 2511:009c  cmp dword ptr [ecx + 0x24], 0  (32)  [x78449]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), 0x0u, true);
    // 2511:00a0  jne 0xae  (32)  [x78449]
    if (!c.zf) goto L251be;
L251b2:
    if (c.tracing) c.traceAt(0x251b2);
    // 2511:00a2  mov edx, dword ptr [ebx]  (32)  [x25847]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2511:00a4  mov dword ptr [ebx], ecx  (32)  [x25847]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.c.e);
    // 2511:00a6  mov dword ptr [ecx + 8], ebx  (32)  [x25847]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.b.e);
    // 2511:00a9  mov dword ptr [ecx], edx  (32)  [x25847]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.dx_.e);
    // 2511:00ab  mov dword ptr [edx + 8], ecx  (32)  [x25847]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.c.e);
L251be:
    if (c.tracing) c.traceAt(0x251be);
    // 2511:00ae  inc dword ptr [ecx + 0x24]  (32)  [x78449]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x24u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), false));
    // 2511:00b1  mov ecx, dword ptr [eax + ebp*8 + 0x38]  (32)  [x78449]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 2511:00b5  mov edx, dword ptr [ecx + 0x20]  (32)  [x78449]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:00b8  or edx, edx  (32)  [x78449]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) | (c.dx_.e), true));
    // 2511:00ba  jne 0xde  (32)  [x78449]
    if (!c.zf) goto L251ee;
L251cc:
    if (c.tracing) c.traceAt(0x251cc);
    // 2511:00bc  mov ebx, dword ptr [ecx + 0x18]  (32)  [x46008]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x18u)));
    // 2511:00bf  mov edi, dword ptr [ecx + 0x1c]  (32)  [x46008]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2511:00c2  inc dword ptr [ebx + 0x28]  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2511:00c5  mov esi, dword ptr [ebx + 0x28]  (32)  [x46008]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2511:00c8  mov dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.c.e);
    // 2511:00cc  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
    // 2511:00d0  inc dword ptr [edi + 0x28]  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x28u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)), true));
    // 2511:00d3  mov esi, dword ptr [edi + 0x28]  (32)  [x46008]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)));
    // 2511:00d6  mov dword ptr [edi + esi*8 + 0x24], ecx  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x24u), c.c.e);
    // 2511:00da  mov dword ptr [edi + esi*8 + 0x28], ebx  (32)  [x46008]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x28u), c.b.e);
L251ee:
    if (c.tracing) c.traceAt(0x251ee);
    // 2511:00de  inc dword ptr [ecx + 0x20]  (32)  [x78449]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)), false));
    // 2511:00e1  mov dword ptr [ecx + edx*4 + 0x24], eax  (32)  [x78449]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x24u), c.a.e);
    // 2511:00e5  pop ebx  (32)  [x78449]
    { const uint32_t t0 = c.pop32(); c.b.e = (uint32_t)(t0); }
    // 2511:00e6  dec ebp  (32)  [x78449]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2511:00e7  jne 0x97  (32)  [x78449]
    if (!c.zf) goto L251a7;
L251f9:
    if (c.tracing) c.traceAt(0x251f9);
    // 2511:00e9  jmp 0x18a  (32)  [x20012]
    goto L2529a;
L251fe:
    if (c.tracing) c.traceAt(0x251fe);
    // 2511:00ee  mov ebx, dword ptr [eax + 0xc]  (32)  [x19888]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2511:00f1  mov ecx, dword ptr [eax + 4]  (32)  [x19888]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 2511:00f4  mov dword ptr [ebx + 4], ecx  (32)  [x19888]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.c.e);
    // 2511:00f7  mov dword ptr [ecx + 0xc], ebx  (32)  [x19888]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.b.e);
    // 2511:00fa  mov ebp, dword ptr [eax + 0x38]  (32)  [x19888]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L2520d:
    if (c.tracing) c.traceAt(0x2520d);
    // 2511:00fd  mov ecx, dword ptr [eax + ebp*8 + 0x34]  (32)  [x77956]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 2511:0101  dec dword ptr [ecx + 0x24]  (32)  [x77956]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x24u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), true));
    // 2511:0104  jne 0x110  (32)  [x77956]
    if (!c.zf) goto L25220;
L25216:
    if (c.tracing) c.traceAt(0x25216);
    // 2511:0106  mov ebx, dword ptr [ecx + 8]  (32)  [x25620]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2511:0109  mov edx, dword ptr [ecx]  (32)  [x25620]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2511:010b  mov dword ptr [ebx], edx  (32)  [x25620]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2511:010d  mov dword ptr [edx + 8], ebx  (32)  [x25620]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.b.e);
L25220:
    if (c.tracing) c.traceAt(0x25220);
    // 2511:0110  mov ecx, dword ptr [eax + ebp*8 + 0x38]  (32)  [x77956]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 2511:0114  mov ebx, dword ptr [ecx + 0x20]  (32)  [x77956]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:0117  cmp dword ptr [ecx + ebx*4 + 0x20], eax  (32)  [x77956]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u)), c.a.e, true);
    // 2511:011b  je 0x12e  (32)  [x77956]
    if (c.zf) goto L2523e;
L2522d:
    if (c.tracing) c.traceAt(0x2522d);
    // 2511:011d  mov edx, ebx  (32)  [x7529]
    c.dx_.e = (uint32_t)(c.b.e);
L2522f:
    if (c.tracing) c.traceAt(0x2522f);
    // 2511:011f  dec ebx  (32)  [x7533]
    c.b.e = (uint32_t)(c.dec<32>(c.b.e, false));
    // 2511:0120  cmp dword ptr [ecx + ebx*4 + 0x20], eax  (32)  [x7533]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u)), c.a.e, true);
    // 2511:0124  jne 0x11f  (32)  [x7533]
    if (!c.zf) goto L2522f;
L25236:
    if (c.tracing) c.traceAt(0x25236);
    // 2511:0126  mov edx, dword ptr [ecx + edx*4 + 0x20]  (32)  [x7529]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x20u)));
    // 2511:012a  mov dword ptr [ecx + ebx*4 + 0x20], edx  (32)  [x7529]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u), c.dx_.e);
L2523e:
    if (c.tracing) c.traceAt(0x2523e);
    // 2511:012e  dec dword ptr [ecx + 0x20]  (32)  [x77956]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)), true));
    // 2511:0131  jne 0x183  (32)  [x77956]
    if (!c.zf) goto L25293;
L25243:
    if (c.tracing) c.traceAt(0x25243);
    // 2511:0133  mov ebx, dword ptr [ecx + 0x18]  (32)  [x45674]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x18u)));
    // 2511:0136  mov edx, dword ptr [ebx + 0x28]  (32)  [x45674]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2511:0139  cmp dword ptr [ebx + edx*8 + 0x24], ecx  (32)  [x45674]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)), c.c.e, true);
    // 2511:013d  je 0x158  (32)  [x45674]
    if (c.zf) goto L25268;
L2524f:
    if (c.tracing) c.traceAt(0x2524f);
    // 2511:013f  mov esi, edx  (32)  [x13896]
    c.si.e = (uint32_t)(c.dx_.e);
L25251:
    if (c.tracing) c.traceAt(0x25251);
    // 2511:0141  dec esi  (32)  [x17531]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2511:0142  cmp dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x17531]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)), c.c.e, true);
    // 2511:0146  jne 0x141  (32)  [x17531]
    if (!c.zf) goto L25251;
L25258:
    if (c.tracing) c.traceAt(0x25258);
    // 2511:0148  mov edi, dword ptr [ebx + edx*8 + 0x24]  (32)  [x13896]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)));
    // 2511:014c  mov dword ptr [ebx + esi*8 + 0x24], edi  (32)  [x13896]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.di.e);
    // 2511:0150  mov edi, dword ptr [ebx + edx*8 + 0x28]  (32)  [x13896]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x28u)));
    // 2511:0154  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x13896]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
L25268:
    if (c.tracing) c.traceAt(0x25268);
    // 2511:0158  dec dword ptr [ebx + 0x28]  (32)  [x45674]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2511:015b  mov ebx, dword ptr [ecx + 0x1c]  (32)  [x45674]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2511:015e  mov edx, dword ptr [ebx + 0x28]  (32)  [x45674]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2511:0161  cmp dword ptr [ebx + edx*8 + 0x24], ecx  (32)  [x45674]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)), c.c.e, true);
    // 2511:0165  je 0x180  (32)  [x45674]
    if (c.zf) goto L25290;
L25277:
    if (c.tracing) c.traceAt(0x25277);
    // 2511:0167  mov esi, edx  (32)  [x21191]
    c.si.e = (uint32_t)(c.dx_.e);
L25279:
    if (c.tracing) c.traceAt(0x25279);
    // 2511:0169  dec esi  (32)  [x24798]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2511:016a  cmp dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x24798]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)), c.c.e, true);
    // 2511:016e  jne 0x169  (32)  [x24798]
    if (!c.zf) goto L25279;
L25280:
    if (c.tracing) c.traceAt(0x25280);
    // 2511:0170  mov edi, dword ptr [ebx + edx*8 + 0x24]  (32)  [x21191]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)));
    // 2511:0174  mov dword ptr [ebx + esi*8 + 0x24], edi  (32)  [x21191]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.di.e);
    // 2511:0178  mov edi, dword ptr [ebx + edx*8 + 0x28]  (32)  [x21191]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x28u)));
    // 2511:017c  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x21191]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
L25290:
    if (c.tracing) c.traceAt(0x25290);
    // 2511:0180  dec dword ptr [ebx + 0x28]  (32)  [x45674]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), true));
L25293:
    if (c.tracing) c.traceAt(0x25293);
    // 2511:0183  dec ebp  (32)  [x77956]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2511:0184  jne 0xfd  (32)  [x77956]
    if (!c.zf) goto L2520d;
L2529a:
    if (c.tracing) c.traceAt(0x2529a);
    // 2511:018a  pop edi  (32)  [x39900]
    { const uint32_t t0 = c.pop32(); c.di.e = (uint32_t)(t0); }
    // 2511:018b  pop esi  (32)  [x39900]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2511:018c  dec edi  (32)  [x39900]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 2511:018d  jne 0x70  (32)  [x39900]
    if (!c.zf) goto L25180;
L252a3:
    if (c.tracing) c.traceAt(0x252a3);
    // 2511:0193  mov esi, dword ptr [0x1684]  (32)  [x1469]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1684u)));
    // 2511:0198  lodsd eax, dword ptr [esi]  (32)  [x1469]
    c.ip = 0x199u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2511:0199  mov dword ptr [0x1670], eax  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0x1670u), c.a.e);
    // 2511:019d  mov dword ptr [0x1684], esi  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0x1684u), c.si.e);
    // 2511:01a2  mov edi, 0x2a5d1a  (32)  [x1469]
    c.di.e = (uint32_t)((c.r32(0x252b3)));
    // 2511:01a7  jmp 0x300  (32)  [x1469]
    goto L25410;
L252c0:
    if (c.tracing) c.traceAt(0x252c0);
    // 2511:01b0  mov eax, dword ptr [edi + 0x14]  (32)  [x867344]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)));
    // 2511:01b3  mov ebx, dword ptr [edi + 0x18]  (32)  [x867344]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x18u)));
    // 2511:01b6  mov ecx, dword ptr [edi + 0x1c]  (32)  [x867344]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)));
    // 2511:01b9  mov edx, 0x13f1fc2  (32)  [x867344]
    c.dx_.e = (uint32_t)((c.r32(0x252ca)));
    // 2511:01be  imul ebp, eax, 0x2bf  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x252d0))));
    // 2511:01c4  add edx, ebp  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2511:01c6  imul ebp, ebx, 0  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x252d8))));
    // 2511:01cc  add edx, ebp  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2511:01ce  imul ebp, ecx, 0x64e  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x252e0))));
    // 2511:01d4  add edx, ebp  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2511:01d6  mov esi, 0xff48c6f3  (32)  [x867344]
    c.si.e = (uint32_t)((c.r32(0x252e7)));
    // 2511:01db  imul ebp, eax, 0x7b  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x252ed))));
    // 2511:01e1  add esi, ebp  (32)  [x867344]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2511:01e3  imul ebp, ebx, 0xfffff925  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x252f5))));
    // 2511:01e9  add esi, ebp  (32)  [x867344]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2511:01eb  imul ebp, ecx, 0xffffffca  (32)  [x867344]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x252fd))));
    // 2511:01f1  add esi, ebp  (32)  [x867344]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2511:01f3  mov ebp, 0x2b873ff  (32)  [x867344]
    c.bp.e = (uint32_t)((c.r32(0x25304)));
    // 2511:01f8  imul eax, eax, 0xfffffe2c  (32)  [x867344]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x2530a))));
    // 2511:01fe  add ebp, eax  (32)  [x867344]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 2511:0200  imul ebx, ebx, 0xffffffd9  (32)  [x867344]
    c.b.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x25312))));
    // 2511:0206  add ebp, ebx  (32)  [x867344]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.b.e, false));
    // 2511:0208  imul ecx, ecx, 0xcc  (32)  [x867344]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x2531a))));
    // 2511:020e  add ebp, ecx  (32)  [x867344]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.c.e, false));
    // 2511:0210  mov dword ptr [edi + 0x20], ebp  (32)  [x867344]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x20u), c.bp.e);
    // 2511:0213  xor eax, eax  (32)  [x867344]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2511:0215  sar edx, 9  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2511:0218  idiv ebp  (32)  [x867344]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x218u); }   // #DE: int 0, then again
    // 2511:021a  sar eax, 0x10  (32)  [x867344]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2511:021d  add ax, 0xa0  (32)  [x867344]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 2511:0221  mov word ptr [edi + 0x10], ax  (32)  [x867344]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.x);
    // 2511:0225  mov edx, esi  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.si.e);
    // 2511:0227  xor eax, eax  (32)  [x867344]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2511:0229  sar edx, 9  (32)  [x867344]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2511:022c  idiv ebp  (32)  [x867344]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x22cu); }   // #DE: int 0, then again
    // 2511:022e  sar eax, 0x10  (32)  [x867344]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2511:0231  add ax, 0x64  (32)  [x867344]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 2511:0235  mov word ptr [edi + 0x12], ax  (32)  [x867344]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x12u), c.a.x);
    // 2511:0239  mov edi, dword ptr [edi]  (32)  [x867344]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2511:023b  cmp edi, dword ptr [0x3ac]  (32)  [x867344]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3acu)), true);
    // 2511:0241  jne 0x1b0  (32)  [x867344]
    if (!c.zf) goto L252c0;
L25357:
    if (c.tracing) c.traceAt(0x25357);
    // 2511:0247  mov ebx, dword ptr [edi + 4]  (32)  [x52091]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2511:024a  cmp ebx, edi  (32)  [x52091]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2511:024c  je 0x2f2  (32)  [x52091]
    if (c.zf) goto L25402;
L25362:
    if (c.tracing) c.traceAt(0x25362);
    // 2511:0252  mov eax, dword ptr [ebx + 0x2c]  (32)  [x425094]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x2cu)));
    // 2511:0255  imul eax, eax, 0xfffffe2c  (32)  [x425094]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x25367))));
    // 2511:025b  mov edx, eax  (32)  [x425094]
    c.dx_.e = (uint32_t)(c.a.e);
    // 2511:025d  mov eax, dword ptr [ebx + 0x30]  (32)  [x425094]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2511:0260  imul eax, eax, 0xffffffd9  (32)  [x425094]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x25372))));
    // 2511:0266  add edx, eax  (32)  [x425094]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.a.e, false));
    // 2511:0268  mov eax, dword ptr [ebx + 0x34]  (32)  [x425094]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x34u)));
    // 2511:026b  imul eax, eax, 0xcc  (32)  [x425094]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x2537d))));
    // 2511:0271  add eax, edx  (32)  [x425094]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2511:0273  jns 0x277  (32)  [x425094]
    if (!c.sf) goto L25387;
L25385:
    if (c.tracing) c.traceAt(0x25385);
    // 2511:0275  xor eax, eax  (32)  [x30329]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L25387:
    if (c.tracing) c.traceAt(0x25387);
    // 2511:0277  shr eax, 0x10  (32)  [x425094]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2511:027a  add al, byte ptr [ebx + 0x18]  (32)  [x425094]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint32_t)(c.b.e + 0x18u)), false));
    // 2511:027d  mov eax, dword ptr [eax*4 + 0x1270]  (32)  [x425094]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + 0x1270u)));
    // 2511:0284  mov dword ptr [ebx + 0x14], eax  (32)  [x425094]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x14u), c.a.e);
    // 2511:0287  mov ebp, dword ptr [ebx + 0x38]  (32)  [x425094]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x38u)));
    // 2511:028a  cmp ebp, 4  (32)  [x425094]
    c.sub<32>(c.bp.e, 0x4u, true);
    // 2511:028d  jne 0x2a9  (32)  [x425094]
    if (!c.zf) goto L253b9;
L2539f:
    if (c.tracing) c.traceAt(0x2539f);
    // 2511:028f  mov eax, dword ptr [ebx + 0x3c]  (32)  [x336044]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x3cu)));
    // 2511:0292  mov edx, dword ptr [eax + 0x20]  (32)  [x336044]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)));
    // 2511:0295  mov eax, dword ptr [ebx + 0x44]  (32)  [x336044]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x44u)));
    // 2511:0298  add edx, dword ptr [eax + 0x20]  (32)  [x336044]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), false));
    // 2511:029b  mov eax, dword ptr [ebx + 0x4c]  (32)  [x336044]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4cu)));
    // 2511:029e  add edx, dword ptr [eax + 0x20]  (32)  [x336044]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), false));
    // 2511:02a1  mov eax, dword ptr [ebx + 0x54]  (32)  [x336044]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x54u)));
    // 2511:02a4  add edx, dword ptr [eax + 0x20]  (32)  [x336044]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), true));
    // 2511:02a7  jmp 0x2e1  (32)  [x336044]
    goto L253f1;
L253b9:
    if (c.tracing) c.traceAt(0x253b9);
    // 2511:02a9  jae 0x2c6  (32)  [x89050]
    if (!c.cf) goto L253d6;
L253bb:
    if (c.tracing) c.traceAt(0x253bb);
    // 2511:02ab  mov edx, dword ptr [ebx + 0x3c]  (32)  [x67700]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x3cu)));
    // 2511:02ae  mov eax, dword ptr [edx + 0x20]  (32)  [x67700]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)));
    // 2511:02b1  mov edx, dword ptr [ebx + 0x44]  (32)  [x67700]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x44u)));
    // 2511:02b4  add eax, dword ptr [edx + 0x20]  (32)  [x67700]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), false));
    // 2511:02b7  mov edx, dword ptr [ebx + 0x4c]  (32)  [x67700]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4cu)));
    // 2511:02ba  add eax, dword ptr [edx + 0x20]  (32)  [x67700]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), false));
    // 2511:02bd  mul dword ptr [0x10f4]  (32)  [x67700]
    c.mul32(c.r32(c.dsb + (uint16_t)(0x10f4u)));
    // 2511:02c2  add edx, edx  (32)  [x67700]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.dx_.e, true));
    // 2511:02c4  jmp 0x2e1  (32)  [x67700]
    goto L253f1;
L253d6:
    if (c.tracing) c.traceAt(0x253d6);
    // 2511:02c6  mov esi, ebp  (32)  [x21350]
    c.si.e = (uint32_t)(c.bp.e);
    // 2511:02c8  mov edx, dword ptr [ebx + ebp*8 + 0x34]  (32)  [x21350]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x34u)));
    // 2511:02cc  mov eax, dword ptr [edx + 0x20]  (32)  [x21350]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)));
    // 2511:02cf  dec ebp  (32)  [x21350]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
L253e0:
    if (c.tracing) c.traceAt(0x253e0);
    // 2511:02d0  mov edx, dword ptr [ebx + ebp*8 + 0x34]  (32)  [x142929]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x34u)));
    // 2511:02d4  add eax, dword ptr [edx + 0x20]  (32)  [x142929]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), true));
    // 2511:02d7  dec ebp  (32)  [x142929]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2511:02d8  jne 0x2d0  (32)  [x142929]
    if (!c.zf) goto L253e0;
L253ea:
    if (c.tracing) c.traceAt(0x253ea);
    // 2511:02da  mul dword ptr [esi*4 + 0x10dc]  (32)  [x21350]
    c.mul32(c.r32(c.dsb + (uint32_t)(c.si.e * 4 + 0x10dcu)));
L253f1:
    if (c.tracing) c.traceAt(0x253f1);
    // 2511:02e1  add edx, dword ptr [ebx + 0x28]  (32)  [x425094]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2511:02e4  mov dword ptr [ebx + 0x10], edx  (32)  [x425094]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x10u), c.dx_.e);
    // 2511:02e7  mov ebx, dword ptr [ebx + 4]  (32)  [x425094]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2511:02ea  cmp ebx, edi  (32)  [x425094]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2511:02ec  jne 0x252  (32)  [x425094]
    if (!c.zf) goto L25362;
L25402:
    if (c.tracing) c.traceAt(0x25402);
    // 2511:02f2  add edi, 0x40  (32)  [x60229]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x40u, false));
    // 2511:02f5  cmp edi, dword ptr [0x167c]  (32)  [x60229]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x167cu)), true);
    // 2511:02fa  je 0x3e1  (32)  [x60229]
    if (c.zf) goto L254f1;
L25410:
    if (c.tracing) c.traceAt(0x25410);
    // 2511:0300  mov dword ptr [0x3ac], edi  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3acu), c.di.e);
    // 2511:0306  mov esi, dword ptr [0x1684]  (32)  [x60229]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1684u)));
    // 2511:030b  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x30du; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:030d  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:030e  add eax, dword ptr [edi + 0x10]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x10u)), false));
    // 2511:0311  mov dword ptr [edi + 0x10], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.e);
    // 2511:0314  mov dword ptr [0x3c0], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3c0u), c.a.e);
    // 2511:0319  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x31bu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:031b  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:031c  add eax, dword ptr [edi + 0x14]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)), false));
    // 2511:031f  mov dword ptr [edi + 0x14], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.a.e);
    // 2511:0322  mov dword ptr [0x3dd], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3ddu), c.a.e);
    // 2511:0327  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x329u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:0329  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:032a  add eax, dword ptr [edi + 0x18]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x18u)), false));
    // 2511:032d  mov dword ptr [edi + 0x18], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x18u), c.a.e);
    // 2511:0330  mov dword ptr [0x3fa], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3fau), c.a.e);
    // 2511:0335  mov dword ptr [0x457], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x457u), c.a.e);
    // 2511:033a  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x33cu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:033c  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:033d  add eax, dword ptr [edi + 0x1c]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)), false));
    // 2511:0340  mov dword ptr [edi + 0x1c], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x1cu), c.a.e);
    // 2511:0343  mov dword ptr [0x3c8], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3c8u), c.a.e);
    // 2511:0348  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x34au; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:034a  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:034b  add eax, dword ptr [edi + 0x20]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x20u)), false));
    // 2511:034e  mov dword ptr [edi + 0x20], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x20u), c.a.e);
    // 2511:0351  mov dword ptr [0x3e5], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3e5u), c.a.e);
    // 2511:0356  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x358u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:0358  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:0359  add eax, dword ptr [edi + 0x24]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x24u)), false));
    // 2511:035c  mov dword ptr [edi + 0x24], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.a.e);
    // 2511:035f  mov dword ptr [0x402], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x402u), c.a.e);
    // 2511:0364  mov dword ptr [0x462], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x462u), c.a.e);
    // 2511:0369  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x36bu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:036b  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:036c  add eax, dword ptr [edi + 0x28]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)), false));
    // 2511:036f  mov dword ptr [edi + 0x28], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x28u), c.a.e);
    // 2511:0372  mov dword ptr [0x3d0], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3d0u), c.a.e);
    // 2511:0377  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x379u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:0379  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:037a  add eax, dword ptr [edi + 0x2c]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x2cu)), false));
    // 2511:037d  mov dword ptr [edi + 0x2c], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x2cu), c.a.e);
    // 2511:0380  mov dword ptr [0x3ed], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3edu), c.a.e);
    // 2511:0385  lodsw ax, word ptr [esi]  (32)  [x60229]
    c.ip = 0x387u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2511:0387  cwde   (32)  [x60229]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2511:0388  add eax, dword ptr [edi + 0x30]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x30u)), false));
    // 2511:038b  mov dword ptr [edi + 0x30], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x30u), c.a.e);
    // 2511:038e  mov dword ptr [0x40a], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x40au), c.a.e);
    // 2511:0393  mov dword ptr [0x46d], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x46du), c.a.e);
    // 2511:0398  lodsd eax, dword ptr [esi]  (32)  [x60229]
    c.ip = 0x399u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2511:0399  add eax, dword ptr [edi + 0x34]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x34u)), false));
    // 2511:039c  mov dword ptr [edi + 0x34], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x34u), c.a.e);
    // 2511:039f  mov dword ptr [0x3ba], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3bau), c.a.e);
    // 2511:03a4  lodsd eax, dword ptr [esi]  (32)  [x60229]
    c.ip = 0x3a5u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2511:03a5  add eax, dword ptr [edi + 0x38]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x38u)), false));
    // 2511:03a8  mov dword ptr [edi + 0x38], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x38u), c.a.e);
    // 2511:03ab  mov dword ptr [0x3d7], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3d7u), c.a.e);
    // 2511:03b0  lodsd eax, dword ptr [esi]  (32)  [x60229]
    c.ip = 0x3b1u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2511:03b1  add eax, dword ptr [edi + 0x3c]  (32)  [x60229]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x3cu)), false));
    // 2511:03b4  mov dword ptr [edi + 0x3c], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x3cu), c.a.e);
    // 2511:03b7  mov dword ptr [0x3f4], eax  (32)  [x60229]
    c.w32(c.dsb + (uint32_t)(0x3f4u), c.a.e);
    // 2511:03bc  mov dword ptr [0x1684], esi  (32)  [x60229]
    c.w32(c.dsb + (uint16_t)(0x1684u), c.si.e);
    // 2511:03c1  cmp word ptr [0x1696], 1  (32)  [x60229]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x1696u)), 0x1u, true);
    // 2511:03c8  ja 0x2f2  (32)  [x60229]
    if ((!c.cf && !c.zf)) goto L25402;
L254de:
    if (c.tracing) c.traceAt(0x254de);
    // 2511:03ce  mov edi, dword ptr [edi]  (32)  [x60229]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2511:03d0  cmp edi, dword ptr [0x3ac]  (32)  [x60229]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3acu)), true);
    // 2511:03d6  je 0x2f2  (32)  [x60229]
    if (c.zf) goto L25402;
L254ec:
    if (c.tracing) c.traceAt(0x254ec);
    // 2511:03dc  jmp 0x1b0  (32)  [x52091]
    goto L252c0;
L254f1:
    if (c.tracing) c.traceAt(0x254f1);
    // 2511:03e1  dec word ptr [0x1696]  (32)  [x1469]
    c.w16(c.dsb + (uint16_t)(0x1696u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x1696u)), true));
    // 2511:03e7  jne 0x59  (32)  [x1469]
    if (!c.zf) goto L25169;
L254fd:
    if (c.tracing) c.traceAt(0x254fd);
    // 2511:03ed  mov dword ptr [0xa3c], 0xa40  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0xa3cu), 0xa40u);
    // 2511:03f6  mov dword ptr [0xa44], 0xa30  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0xa44u), 0xa30u);
    // 2511:03ff  mov dword ptr [0xa58], 0xa60  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0xa58u), 0xa60u);
    // 2511:0408  mov dword ptr [0xa60], 0xa54  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0xa60u), 0xa54u);
    // 2511:0411  mov esi, 0x2a5d1a  (32)  [x1469]
    c.si.e = (uint32_t)((c.r32(0x25522)));
L25526:
    if (c.tracing) c.traceAt(0x25526);
    // 2511:0416  mov ebx, dword ptr [esi]  (32)  [x60229]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2511:0418  cmp ebx, esi  (32)  [x60229]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2511:041a  je 0x570  (32)  [x60229]
    if (c.zf) goto L25680;
L25530:
    if (c.tracing) c.traceAt(0x25530);
    // 2511:0420  mov bp, word ptr [ebx + 0x12]  (32)  [x867344]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
    // 2511:0424  cmp bp, 0xc8  (32)  [x867344]
    c.sub<16>(c.bp.x, 0xc8u, true);
    // 2511:0429  jge 0x566  (32)  [x867344]
    if ((c.sf == c.of)) goto L25676;
L2553f:
    if (c.tracing) c.traceAt(0x2553f);
    // 2511:042f  neg bp  (32)  [x852326]
    c.bp.x = (uint16_t)(c.neg<16>(c.bp.x, true));
    // 2511:0432  mov word ptr [0x1698], bp  (32)  [x852326]
    c.w16(c.dsb + (uint16_t)(0x1698u), c.bp.x);
    // 2511:0438  jl 0x4c0  (32)  [x852326]
    if ((c.sf != c.of)) goto L255d0;
L2554e:
    if (c.tracing) c.traceAt(0x2554e);
    // 2511:043e  push esi  (32)  [x110]
    c.push32(c.si.e);
    // 2511:043f  mov esi, dword ptr [ebx + 0x28]  (32)  [x110]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
L25552:
    if (c.tracing) c.traceAt(0x25552);
    // 2511:0442  mov ecx, dword ptr [ebx + esi*8 + 0x28]  (32)  [x285]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u)));
    // 2511:0446  mov ax, word ptr [ecx + 0x12]  (32)  [x285]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)));
    // 2511:044a  or ax, ax  (32)  [x285]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2511:044d  jle 0x4b7  (32)  [x285]
    if ((c.zf || c.sf != c.of)) goto L255c7;
L2555f:
    if (c.tracing) c.traceAt(0x2555f);
    // 2511:044f  mov edi, dword ptr [ebx + esi*8 + 0x24]  (32)  [x181]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)));
    // 2511:0453  mov word ptr [edi + 0x10], ax  (32)  [x181]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.x);
    // 2511:0457  mov byte ptr [edi + 0x12], 0  (32)  [x181]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x0u);
    // 2511:045b  mov dword ptr [edi + 0x14], ecx  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.c.e);
    // 2511:045e  mov bp, word ptr [0x1698]  (32)  [x181]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1698u)));
    // 2511:0464  add bp, ax  (32)  [x181]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 2511:0467  push esi  (32)  [x181]
    c.push32(c.si.e);
    // 2511:0468  movzx esi, bp  (32)  [x181]
    c.si.e = (uint32_t)(c.bp.x);
    // 2511:046b  mov ax, word ptr [ecx + 0x10]  (32)  [x181]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2511:046f  sub ax, word ptr [ebx + 0x10]  (32)  [x181]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2511:0473  shl eax, 0x10  (32)  [x181]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2511:0476  cdq   (32)  [x181]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2511:0477  idiv esi  (32)  [x181]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x477u); }   // #DE: int 0, then again
    // 2511:0479  mov dword ptr [edi + 0xc], eax  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2511:047c  pop esi  (32)  [x181]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2511:047d  mov bp, word ptr [0x1698]  (32)  [x181]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1698u)));
    // 2511:0483  movzx ecx, bp  (32)  [x181]
    c.c.e = (uint32_t)(c.bp.x);
    // 2511:0486  add ecx, ecx  (32)  [x181]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.c.e, false));
    // 2511:0488  inc ecx  (32)  [x181]
    c.c.e = (uint32_t)(c.inc<32>(c.c.e, false));
    // 2511:0489  imul eax, ecx  (32)  [x181]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, c.c.e));
    // 2511:048c  mov dx, word ptr [ebx + 0x10]  (32)  [x181]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2511:0490  shl edx, 0x10  (32)  [x181]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2511:0493  mov dx, 0x8000  (32)  [x181]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2511:0497  sar eax, 1  (32)  [x181]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2511:0499  add eax, edx  (32)  [x181]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2511:049b  mov dword ptr [edi + 8], eax  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2511:049e  mov ecx, 0xa54  (32)  [x181]
    c.c.e = (uint32_t)(0xa54u);
L255b3:
    if (c.tracing) c.traceAt(0x255b3);
    // 2511:04a3  mov ecx, dword ptr [ecx + 4]  (32)  [x324]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2511:04a6  cmp eax, dword ptr [ecx + 8]  (32)  [x324]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)), true);
    // 2511:04a9  jg 0x4a3  (32)  [x324]
    if ((!c.zf && c.sf == c.of)) goto L255b3;
L255bb:
    if (c.tracing) c.traceAt(0x255bb);
    // 2511:04ab  mov edx, dword ptr [ecx]  (32)  [x181]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2511:04ad  mov dword ptr [edx + 4], edi  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.di.e);
    // 2511:04b0  mov dword ptr [edi], edx  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.di.e), c.dx_.e);
    // 2511:04b2  mov dword ptr [edi + 4], ecx  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2511:04b5  mov dword ptr [ecx], edi  (32)  [x181]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
L255c7:
    if (c.tracing) c.traceAt(0x255c7);
    // 2511:04b7  dec esi  (32)  [x285]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2511:04b8  jne 0x442  (32)  [x285]
    if (!c.zf) goto L25552;
L255ca:
    if (c.tracing) c.traceAt(0x255ca);
    // 2511:04ba  pop esi  (32)  [x110]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2511:04bb  jmp 0x566  (32)  [x110]
    goto L25676;
L255d0:
    if (c.tracing) c.traceAt(0x255d0);
    // 2511:04c0  mov byte ptr [0x16c0], 1  (32)  [x852216]
    c.w8(c.dsb + (uint16_t)(0x16c0u), 0x1u);
    // 2511:04c6  push esi  (32)  [x852216]
    c.push32(c.si.e);
    // 2511:04c7  mov esi, dword ptr [ebx + 0x28]  (32)  [x852216]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
L255da:
    if (c.tracing) c.traceAt(0x255da);
    // 2511:04ca  mov ecx, dword ptr [ebx + esi*8 + 0x28]  (32)  [x2409496]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u)));
    // 2511:04ce  mov bp, word ptr [0x1698]  (32)  [x2409496]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1698u)));
    // 2511:04d4  add bp, word ptr [ecx + 0x12]  (32)  [x2409496]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true));
    // 2511:04d8  jl 0x51b  (32)  [x2409496]
    if ((c.sf != c.of)) goto L2562b;
L255ea:
    if (c.tracing) c.traceAt(0x255ea);
    // 2511:04da  mov edi, dword ptr [ebx + esi*8 + 0x24]  (32)  [x1390139]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)));
    // 2511:04de  je 0x515  (32)  [x1390139]
    if (c.zf) goto L25625;
L255f0:
    if (c.tracing) c.traceAt(0x255f0);
    // 2511:04e0  mov word ptr [edi + 0x10], bp  (32)  [x1034935]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.bp.x);
    // 2511:04e4  mov byte ptr [edi + 0x12], 1  (32)  [x1034935]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x1u);
    // 2511:04e8  mov dword ptr [edi + 0x14], ecx  (32)  [x1034935]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.c.e);
    // 2511:04eb  push esi  (32)  [x1034935]
    c.push32(c.si.e);
    // 2511:04ec  movzx esi, bp  (32)  [x1034935]
    c.si.e = (uint32_t)(c.bp.x);
    // 2511:04ef  mov ax, word ptr [ecx + 0x10]  (32)  [x1034935]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2511:04f3  sub ax, word ptr [ebx + 0x10]  (32)  [x1034935]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2511:04f7  shl eax, 0x10  (32)  [x1034935]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2511:04fa  cdq   (32)  [x1034935]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2511:04fb  idiv esi  (32)  [x1034935]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x4fbu); }   // #DE: int 0, then again
    // 2511:04fd  mov dword ptr [edi + 0xc], eax  (32)  [x1034935]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2511:0500  pop esi  (32)  [x1034935]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2511:0501  mov dx, word ptr [ebx + 0x10]  (32)  [x1034935]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2511:0505  shl edx, 0x10  (32)  [x1034935]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2511:0508  mov dx, 0x8000  (32)  [x1034935]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2511:050c  sar eax, 1  (32)  [x1034935]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2511:050e  add eax, edx  (32)  [x1034935]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2511:0510  mov dword ptr [edi + 8], eax  (32)  [x1034935]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2511:0513  jmp 0x521  (32)  [x1034935]
    goto L25631;
L25625:
    if (c.tracing) c.traceAt(0x25625);
    // 2511:0515  mov byte ptr [edi + 0x12], 2  (32)  [x355204]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x2u);
    // 2511:0519  jmp 0x521  (32)  [x355204]
    goto L25631;
L2562b:
    if (c.tracing) c.traceAt(0x2562b);
    // 2511:051b  mov byte ptr [0x16c0], 0  (32)  [x1019357]
    c.w8(c.dsb + (uint16_t)(0x16c0u), 0x0u);
L25631:
    if (c.tracing) c.traceAt(0x25631);
    // 2511:0521  dec esi  (32)  [x2409496]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2511:0522  jne 0x4ca  (32)  [x2409496]
    if (!c.zf) goto L255da;
L25634:
    if (c.tracing) c.traceAt(0x25634);
    // 2511:0524  pop esi  (32)  [x852216]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2511:0525  cmp byte ptr [0x16c0], 0  (32)  [x852216]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x16c0u)), 0x0u, true);
    // 2511:052b  je 0x566  (32)  [x852216]
    if (c.zf) goto L25676;
L2563d:
    if (c.tracing) c.traceAt(0x2563d);
    // 2511:052d  mov ecx, 0xa30  (32)  [x163364]
    c.c.e = (uint32_t)(0xa30u);
    // 2511:0532  mov dx, word ptr [ebx + 0x12]  (32)  [x163364]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
L25646:
    if (c.tracing) c.traceAt(0x25646);
    // 2511:0536  mov ecx, dword ptr [ecx + 0xc]  (32)  [x4658069]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2511:0539  cmp dx, word ptr [ecx + 0x12]  (32)  [x4658069]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2511:053d  jg 0x536  (32)  [x4658069]
    if ((!c.zf && c.sf == c.of)) goto L25646;
L2564f:
    if (c.tracing) c.traceAt(0x2564f);
    // 2511:053f  jl 0x557  (32)  [x163364]
    if ((c.sf != c.of)) goto L25667;
L25651:
    if (c.tracing) c.traceAt(0x25651);
    // 2511:0541  mov di, word ptr [ebx + 0x10]  (32)  [x76876]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2511:0545  mov ecx, dword ptr [ecx + 4]  (32)  [x76876]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
L25658:
    if (c.tracing) c.traceAt(0x25658);
    // 2511:0548  mov ecx, dword ptr [ecx + 0xc]  (32)  [x154434]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2511:054b  cmp dx, word ptr [ecx + 0x12]  (32)  [x154434]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2511:054f  jl 0x557  (32)  [x154434]
    if ((c.sf != c.of)) goto L25667;
L25661:
    if (c.tracing) c.traceAt(0x25661);
    // 2511:0551  cmp di, word ptr [ecx + 0x10]  (32)  [x126881]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)), true);
    // 2511:0555  jg 0x548  (32)  [x126881]
    if ((!c.zf && c.sf == c.of)) goto L25658;
L25667:
    if (c.tracing) c.traceAt(0x25667);
    // 2511:0557  mov edx, dword ptr [ecx + 4]  (32)  [x163364]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2511:055a  mov dword ptr [edx + 0xc], ebx  (32)  [x163364]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0xcu), c.b.e);
    // 2511:055d  mov dword ptr [ebx + 4], edx  (32)  [x163364]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.dx_.e);
    // 2511:0560  mov dword ptr [ebx + 0xc], ecx  (32)  [x163364]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0xcu), c.c.e);
    // 2511:0563  mov dword ptr [ecx + 4], ebx  (32)  [x163364]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.b.e);
L25676:
    if (c.tracing) c.traceAt(0x25676);
    // 2511:0566  mov ebx, dword ptr [ebx]  (32)  [x867344]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2511:0568  cmp ebx, esi  (32)  [x867344]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2511:056a  jne 0x420  (32)  [x867344]
    if (!c.zf) goto L25530;
L25680:
    if (c.tracing) c.traceAt(0x25680);
    // 2511:0570  add esi, 0x40  (32)  [x60229]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x40u, false));
    // 2511:0573  cmp esi, dword ptr [0x167c]  (32)  [x60229]
    c.sub<32>(c.si.e, c.r32(c.dsb + (uint16_t)(0x167cu)), true);
    // 2511:0578  jne 0x416  (32)  [x60229]
    if (!c.zf) goto L25526;
L2568e:
    if (c.tracing) c.traceAt(0x2568e);
    // 2511:057e  mov word ptr [0x1694], 0  (32)  [x1469]
    c.w16(c.dsb + (uint16_t)(0x1694u), 0x0u);
    // 2511:0586  mov eax, dword ptr [0xa3c]  (32)  [x1469]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa3cu)));
    // 2511:058a  mov dword ptr [0x1690], eax  (32)  [x1469]
    c.w32(c.dsb + (uint16_t)(0x1690u), c.a.e);
    // 2511:058e  mov ax, word ptr [0x169c]  (32)  [x1469]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x169cu)));
L256a3:
    if (c.tracing) c.traceAt(0x256a3);
    // 2511:0593  mov es, ax  (32)  [x293800]
    c.loadEs(c.a.x);
    // 2511:0596  mov ebx, dword ptr [0xa58]  (32)  [x293800]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa58u)));
    // 2511:059b  cmp ebx, 0xa60  (32)  [x293800]
    c.sub<32>(c.b.e, 0xa60u, true);
    // 2511:05a1  je 0x6ff  (32)  [x293800]
    if (c.zf) goto L2580f;
L256b7:
    if (c.tracing) c.traceAt(0x256b7);
    // 2511:05a7  mov esi, dword ptr [ebx + 0x20]  (32)  [x5711951]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)));
    // 2511:05aa  mov eax, dword ptr [0xa74]  (32)  [x5711951]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa74u)));
    // 2511:05ae  mov dword ptr [0x168c], eax  (32)  [x5711951]
    c.w32(c.dsb + (uint16_t)(0x168cu), c.a.e);
    // 2511:05b2  mov ax, word ptr [ebx + 0xa]  (32)  [x5711951]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0xau)));
    // 2511:05b6  or ax, ax  (32)  [x5711951]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2511:05b9  jns 0x5bd  (32)  [x5711951]
    if (!c.sf) goto L256cd;
L256cb:
    if (c.tracing) c.traceAt(0x256cb);
    // 2511:05bb  xor eax, eax  (32)  [x185148]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L256cd:
    if (c.tracing) c.traceAt(0x256cd);
    // 2511:05bd  cmp ax, 0x140  (32)  [x5711951]
    c.sub<16>(c.a.x, 0x140u, true);
    // 2511:05c1  jbe 0x5c7  (32)  [x5711951]
    if ((c.cf || c.zf)) goto L256d7;
L256d3:
    if (c.tracing) c.traceAt(0x256d3);
    // 2511:05c3  mov ax, 0x140  (32)  [x162513]
    c.a.x = (uint16_t)(0x140u);
L256d7:
    if (c.tracing) c.traceAt(0x256d7);
    // 2511:05c7  mov word ptr [0x16be], ax  (32)  [x5711951]
    c.w16(c.dsb + (uint16_t)(0x16beu), c.a.x);
L256dc:
    if (c.tracing) c.traceAt(0x256dc);
    // 2511:05cc  mov ecx, dword ptr [ebx + esi*4 + 0x20]  (32)  [x7939940]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 4 + 0x20u)));
    // 2511:05d0  xor byte ptr [ecx + 0x1b], 1  (32)  [x7939940]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x1bu), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x1bu))) ^ (0x1u), true));
    // 2511:05d4  je 0x604  (32)  [x7939940]
    if (c.zf) goto L25714;
L256e6:
    if (c.tracing) c.traceAt(0x256e6);
    // 2511:05d6  mov eax, dword ptr [ecx + 0x10]  (32)  [x3969970]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2511:05d9  mov edx, 0xa6c  (32)  [x3969970]
    c.dx_.e = (uint32_t)(0xa6cu);
L256ee:
    if (c.tracing) c.traceAt(0x256ee);
    // 2511:05de  mov edx, dword ptr [edx + 8]  (32)  [x5567217]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)));
    // 2511:05e1  cmp eax, dword ptr [edx + 0x10]  (32)  [x5567217]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x10u)), true);
    // 2511:05e4  jg 0x5de  (32)  [x5567217]
    if ((!c.zf && c.sf == c.of)) goto L256ee;
L256f6:
    if (c.tracing) c.traceAt(0x256f6);
    // 2511:05e6  mov eax, dword ptr [edx]  (32)  [x3969970]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2511:05e8  mov dword ptr [eax + 8], ecx  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.c.e);
    // 2511:05eb  mov dword ptr [ecx], eax  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2511:05ed  mov dword ptr [ecx + 8], edx  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.dx_.e);
    // 2511:05f0  mov dword ptr [edx], ecx  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
    // 2511:05f2  lea eax, [ecx + 0x1c]  (32)  [x3969970]
    c.a.e = (uint32_t)((uint32_t)(c.c.e + 0x1cu));
    // 2511:05f5  mov dword ptr [ecx + 0x20], eax  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.a.e);
    // 2511:05f8  mov dword ptr [ecx + 0x1c], 0  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x1cu), 0x0u);
    // 2511:05ff  jmp 0x63c  (32)  [x3969970]
    goto L2574c;
L25714:
    if (c.tracing) c.traceAt(0x25714);
    // 2511:0604  mov eax, dword ptr [ecx]  (32)  [x3969970]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2511:0606  mov edx, dword ptr [ecx + 8]  (32)  [x3969970]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2511:0609  mov dword ptr [eax + 8], edx  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.dx_.e);
    // 2511:060c  mov dword ptr [edx], eax  (32)  [x3969970]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2511:060e  cmp dword ptr [ecx + 0x1c], 0  (32)  [x3969970]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)), 0x0u, true);
    // 2511:0612  je 0x63c  (32)  [x3969970]
    if (c.zf) goto L2574c;
L25724:
    if (c.tracing) c.traceAt(0x25724);
    // 2511:0614  cmp ecx, dword ptr [0x168c]  (32)  [x3433729]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0x168cu)), true);
    // 2511:0619  jne 0x627  (32)  [x3433729]
    if (!c.zf) goto L25737;
L2572b:
    if (c.tracing) c.traceAt(0x2572b);
    // 2511:061b  mov edx, dword ptr [ecx + 0x20]  (32)  [x3064693]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:061e  mov ax, word ptr [0x16be]  (32)  [x3064693]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16beu)));
    // 2511:0623  mov word ptr [edx + 6], ax  (32)  [x3064693]
    c.w16(c.dsb + (uint32_t)(c.dx_.e + 0x6u), c.a.x);
L25737:
    if (c.tracing) c.traceAt(0x25737);
    // 2511:0627  call 0x7b0  (32)  [x3433729]
    c.push32(0x62cu); code_18(c, 0x258c0u); if (c.ip != 0x62cu) c.badReturn(0x25737);
L2573c:
    if (c.tracing) c.traceAt(0x2573c);
    // 2511:062c  mov eax, dword ptr [0xaa0]  (32)  [x3433729]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaa0u)));
    // 2511:0630  mov edx, dword ptr [ecx + 0x20]  (32)  [x3433729]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:0633  mov dword ptr [edx], eax  (32)  [x3433729]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2511:0635  mov eax, dword ptr [ecx + 0x1c]  (32)  [x3433729]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2511:0638  mov dword ptr [0xaa0], eax  (32)  [x3433729]
    c.w32(c.dsb + (uint16_t)(0xaa0u), c.a.e);
L2574c:
    if (c.tracing) c.traceAt(0x2574c);
    // 2511:063c  dec esi  (32)  [x7939940]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2511:063d  jne 0x5cc  (32)  [x7939940]
    if (!c.zf) goto L256dc;
L2574f:
    if (c.tracing) c.traceAt(0x2574f);
    // 2511:063f  mov ecx, dword ptr [0x168c]  (32)  [x5711951]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x168cu)));
    // 2511:0644  cmp ecx, dword ptr [0xa74]  (32)  [x5711951]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xa74u)), true);
    // 2511:0649  je 0x674  (32)  [x5711951]
    if (c.zf) goto L25784;
L2575b:
    if (c.tracing) c.traceAt(0x2575b);
    // 2511:064b  mov dx, word ptr [0x16be]  (32)  [x4496228]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16beu)));
    // 2511:0651  mov eax, dword ptr [ecx + 0x20]  (32)  [x4496228]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:0654  mov word ptr [eax + 6], dx  (32)  [x4496228]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), c.dx_.x);
    // 2511:0658  mov ecx, dword ptr [0xa74]  (32)  [x4496228]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa74u)));
    // 2511:065d  mov eax, dword ptr [0xaa0]  (32)  [x4496228]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaa0u)));
    // 2511:0661  mov word ptr [eax + 4], dx  (32)  [x4496228]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x4u), c.dx_.x);
    // 2511:0665  mov edx, dword ptr [eax]  (32)  [x4496228]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e)));
    // 2511:0667  mov dword ptr [0xaa0], edx  (32)  [x4496228]
    c.w32(c.dsb + (uint16_t)(0xaa0u), c.dx_.e);
    // 2511:066c  mov edx, dword ptr [ecx + 0x20]  (32)  [x4496228]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:066f  mov dword ptr [ecx + 0x20], eax  (32)  [x4496228]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.a.e);
    // 2511:0672  mov dword ptr [edx], eax  (32)  [x4496228]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
L25784:
    if (c.tracing) c.traceAt(0x25784);
    // 2511:0674  dec word ptr [ebx + 0x10]  (32)  [x5711951]
    c.w16(c.dsb + (uint32_t)(c.b.e + 0x10u), c.dec<16>(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), true));
    // 2511:0678  jne 0x6b2  (32)  [x5711951]
    if (!c.zf) goto L257c2;
L2578a:
    if (c.tracing) c.traceAt(0x2578a);
    // 2511:067a  mov eax, dword ptr [ebx + 0x14]  (32)  [x689640]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 2511:067d  mov esi, dword ptr [eax + 0x28]  (32)  [x689640]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
L25790:
    if (c.tracing) c.traceAt(0x25790);
    // 2511:0680  mov ecx, dword ptr [eax + esi*8 + 0x24]  (32)  [x2030411]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x24u)));
    // 2511:0684  xor byte ptr [ecx + 0x12], 1  (32)  [x2030411]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x12u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x12u))) ^ (0x1u), true));
    // 2511:0688  je 0x692  (32)  [x2030411]
    if (c.zf) goto L257a2;
L2579a:
    if (c.tracing) c.traceAt(0x2579a);
    // 2511:068a  mov word ptr [ecx + 0x10], 0  (32)  [x1258356]
    c.w16(c.dsb + (uint32_t)(c.c.e + 0x10u), 0x0u);
    // 2511:0690  jmp 0x6ab  (32)  [x1258356]
    goto L257bb;
L257a2:
    if (c.tracing) c.traceAt(0x257a2);
    // 2511:0692  mov edx, dword ptr [ecx + 8]  (32)  [x772055]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2511:0695  mov edi, ebx  (32)  [x772055]
    c.di.e = (uint32_t)(c.b.e);
L257a7:
    if (c.tracing) c.traceAt(0x257a7);
    // 2511:0697  mov edi, dword ptr [edi]  (32)  [x1052078]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2511:0699  cmp edx, dword ptr [edi + 8]  (32)  [x1052078]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2511:069c  jle 0x697  (32)  [x1052078]
    if ((c.zf || c.sf != c.of)) goto L257a7;
L257ae:
    if (c.tracing) c.traceAt(0x257ae);
    // 2511:069e  mov edx, dword ptr [edi + 4]  (32)  [x772055]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2511:06a1  mov dword ptr [edi + 4], ecx  (32)  [x772055]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2511:06a4  mov dword ptr [ecx], edi  (32)  [x772055]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2511:06a6  mov dword ptr [ecx + 4], edx  (32)  [x772055]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2511:06a9  mov dword ptr [edx], ecx  (32)  [x772055]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L257bb:
    if (c.tracing) c.traceAt(0x257bb);
    // 2511:06ab  dec esi  (32)  [x2030411]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2511:06ac  jne 0x680  (32)  [x2030411]
    if (!c.zf) goto L25790;
L257be:
    if (c.tracing) c.traceAt(0x257be);
    // 2511:06ae  mov al, 0xff  (32)  [x689640]
    c.a.l = (uint8_t)(0xffu);
    // 2511:06b0  or al, al  (32)  [x689640]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
L257c2:
    if (c.tracing) c.traceAt(0x257c2);
    // 2511:06b2  jns 0x6c0  (32)  [x5711951]
    if (!c.sf) goto L257d0;
L257c4:
    if (c.tracing) c.traceAt(0x257c4);
    // 2511:06b4  mov eax, dword ptr [ebx]  (32)  [x1020632]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2511:06b6  mov ecx, dword ptr [ebx + 4]  (32)  [x1020632]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2511:06b9  mov dword ptr [eax + 4], ecx  (32)  [x1020632]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2511:06bc  mov dword ptr [ecx], eax  (32)  [x1020632]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2511:06be  jmp 0x6f0  (32)  [x1020632]
    goto L25800;
L257d0:
    if (c.tracing) c.traceAt(0x257d0);
    // 2511:06c0  mov eax, dword ptr [ebx + 8]  (32)  [x4691319]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 2511:06c3  add eax, dword ptr [ebx + 0xc]  (32)  [x4691319]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)), false));
    // 2511:06c6  mov dword ptr [ebx + 8], eax  (32)  [x4691319]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x8u), c.a.e);
    // 2511:06c9  mov edx, dword ptr [ebx]  (32)  [x4691319]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2511:06cb  cmp eax, dword ptr [edx + 8]  (32)  [x4691319]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2511:06ce  jg 0x6f0  (32)  [x4691319]
    if ((!c.zf && c.sf == c.of)) goto L25800;
L257e0:
    if (c.tracing) c.traceAt(0x257e0);
    // 2511:06d0  mov edx, dword ptr [edx]  (32)  [x563611]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2511:06d2  cmp eax, dword ptr [edx + 8]  (32)  [x563611]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2511:06d5  jle 0x6d0  (32)  [x563611]
    if ((c.zf || c.sf != c.of)) goto L257e0;
L257e7:
    if (c.tracing) c.traceAt(0x257e7);
    // 2511:06d7  mov esi, dword ptr [edx + 4]  (32)  [x434903]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 2511:06da  mov eax, dword ptr [ebx]  (32)  [x434903]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2511:06dc  mov ecx, dword ptr [ebx + 4]  (32)  [x434903]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2511:06df  mov dword ptr [eax + 4], ecx  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2511:06e2  mov dword ptr [ecx], eax  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2511:06e4  mov dword ptr [edx + 4], ebx  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.b.e);
    // 2511:06e7  mov dword ptr [ebx], edx  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2511:06e9  mov dword ptr [ebx + 4], esi  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.si.e);
    // 2511:06ec  mov dword ptr [esi], ebx  (32)  [x434903]
    c.w32(c.dsb + (uint32_t)(c.si.e), c.b.e);
    // 2511:06ee  mov ebx, eax  (32)  [x434903]
    c.b.e = (uint32_t)(c.a.e);
L25800:
    if (c.tracing) c.traceAt(0x25800);
    // 2511:06f0  mov ebx, dword ptr [ebx + 4]  (32)  [x5711951]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2511:06f3  cmp ebx, 0xa60  (32)  [x5711951]
    c.sub<32>(c.b.e, 0xa60u, true);
    // 2511:06f9  jne 0x5a7  (32)  [x5711951]
    if (!c.zf) goto L256b7;
L2580f:
    if (c.tracing) c.traceAt(0x2580f);
    // 2511:06ff  mov ecx, 0xa7c  (32)  [x293800]
    c.c.e = (uint32_t)(0xa7cu);
    // 2511:0704  mov eax, dword ptr [0xa9c]  (32)  [x293800]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa9cu)));
    // 2511:0708  mov word ptr [eax + 6], 0x140  (32)  [x293800]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), 0x140u);
    // 2511:070e  call 0x7b0  (32)  [x293800]
    c.push32(0x713u); code_18(c, 0x258c0u); if (c.ip != 0x713u) c.badReturn(0x2581e);
L25823:
    if (c.tracing) c.traceAt(0x25823);
    // 2511:0713  cmp dword ptr [0xa9c], 0xaa4  (32)  [x293800]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xa9cu)), 0xaa4u, true);
    // 2511:071c  je 0x73a  (32)  [x293800]
    if (c.zf) goto L2584a;
L2582e:
    if (c.tracing) c.traceAt(0x2582e);
    // 2511:071e  mov eax, dword ptr [0xaa0]  (32)  [x264678]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaa0u)));
    // 2511:0722  mov edx, dword ptr [0xa9c]  (32)  [x264678]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa9cu)));
    // 2511:0727  mov dword ptr [edx], eax  (32)  [x264678]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2511:0729  mov eax, dword ptr [0xaa4]  (32)  [x264678]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaa4u)));
    // 2511:072d  mov dword ptr [0xaa0], eax  (32)  [x264678]
    c.w32(c.dsb + (uint16_t)(0xaa0u), c.a.e);
    // 2511:0731  mov dword ptr [0xa9c], 0xaa4  (32)  [x264678]
    c.w32(c.dsb + (uint16_t)(0xa9cu), 0xaa4u);
L2584a:
    if (c.tracing) c.traceAt(0x2584a);
    // 2511:073a  inc word ptr [0x1694]  (32)  [x293800]
    c.w16(c.dsb + (uint16_t)(0x1694u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x1694u)), false));
    // 2511:0740  mov bx, word ptr [0x1694]  (32)  [x293800]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1694u)));
    // 2511:0746  cmp bx, 0xc8  (32)  [x293800]
    c.sub<16>(c.b.x, 0xc8u, true);
    // 2511:074b  je 0x79c  (32)  [x293800]
    if (c.zf) goto L258ac;
L2585d:
    if (c.tracing) c.traceAt(0x2585d);
    // 2511:074d  mov eax, dword ptr [0x1690]  (32)  [x292331]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1690u)));
    // 2511:0751  cmp word ptr [eax + 0x12], bx  (32)  [x292331]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2511:0755  jne 0x790  (32)  [x292331]
    if (!c.zf) goto L258a0;
L25867:
    if (c.tracing) c.traceAt(0x25867);
    // 2511:0757  mov esi, dword ptr [eax + 0x28]  (32)  [x163364]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
L2586a:
    if (c.tracing) c.traceAt(0x2586a);
    // 2511:075a  mov ecx, dword ptr [eax + esi*8 + 0x24]  (32)  [x381126]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x24u)));
    // 2511:075e  xor byte ptr [ecx + 0x12], 1  (32)  [x381126]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x12u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x12u))) ^ (0x1u), true));
    // 2511:0762  jne 0x780  (32)  [x381126]
    if (!c.zf) goto L25890;
L25874:
    if (c.tracing) c.traceAt(0x25874);
    // 2511:0764  mov edx, dword ptr [ecx + 8]  (32)  [x263149]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2511:0767  mov edi, 0xa60  (32)  [x263149]
    c.di.e = (uint32_t)(0xa60u);
L2587c:
    if (c.tracing) c.traceAt(0x2587c);
    // 2511:076c  mov edi, dword ptr [edi]  (32)  [x3833864]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2511:076e  cmp edx, dword ptr [edi + 8]  (32)  [x3833864]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2511:0771  jle 0x76c  (32)  [x3833864]
    if ((c.zf || c.sf != c.of)) goto L2587c;
L25883:
    if (c.tracing) c.traceAt(0x25883);
    // 2511:0773  mov edx, dword ptr [edi + 4]  (32)  [x263149]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2511:0776  mov dword ptr [edi + 4], ecx  (32)  [x263149]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2511:0779  mov dword ptr [ecx], edi  (32)  [x263149]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2511:077b  mov dword ptr [ecx + 4], edx  (32)  [x263149]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2511:077e  mov dword ptr [edx], ecx  (32)  [x263149]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L25890:
    if (c.tracing) c.traceAt(0x25890);
    // 2511:0780  dec esi  (32)  [x381126]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2511:0781  jne 0x75a  (32)  [x381126]
    if (!c.zf) goto L2586a;
L25893:
    if (c.tracing) c.traceAt(0x25893);
    // 2511:0783  mov eax, dword ptr [eax + 0xc]  (32)  [x163364]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2511:0786  cmp word ptr [eax + 0x12], bx  (32)  [x163364]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2511:078a  je 0x757  (32)  [x163364]
    if (c.zf) goto L25867;
L2589c:
    if (c.tracing) c.traceAt(0x2589c);
    // 2511:078c  mov dword ptr [0x1690], eax  (32)  [x86488]
    c.w32(c.dsb + (uint16_t)(0x1690u), c.a.e);
L258a0:
    if (c.tracing) c.traceAt(0x258a0);
    // 2511:0790  mov ax, es  (32)  [x292331]
    c.a.x = (uint16_t)(c.es);
    // 2511:0793  add ax, 0x14  (32)  [x292331]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
    // 2511:0797  jmp 0x593  (32)  [x292331]
    goto L256a3;
L258ac:
    if (c.tracing) c.traceAt(0x258ac);
    // 2511:079c  jmp 0x20  (32)  [x1469]
    goto L25130;
L258b1:
    if (c.tracing) c.traceAt(0x258b1);
    // 2511:07a1  xor ax, ax  (32)  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 2511:07a4  mov bx, 2  (32)  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 2511:07a8  int 0xfb  (32)  [x1]
    c.ip = 0x7aau; c.d32 = true; c.intr(0xfb, 0x7aau);
L258ba:
    if (c.tracing) c.traceAt(0x258ba);
    // 2511:07aa  mov ax, 0x4c00  (32)  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 2511:07ae  int 0x21  (32)  [x1]
    c.ip = 0x7b0u; c.d32 = true; c.intr(0x21, 0x7b0u);
L258c0:
    if (c.tracing) c.traceAt(0x258c0);
    // 2511:07b0  pushal   (32)  [x3727529]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 2511:07b1  mov esi, dword ptr [ecx + 0x1c]  (32)  [x3727529]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2511:07b4  mov ebp, dword ptr [ecx + 0x20]  (32)  [x3727529]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2511:07b7  mov eax, dword ptr [ecx + 0x14]  (32)  [x3727529]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x14u)));
    // 2511:07ba  cmp ecx, 0xa7c  (32)  [x3727529]
    c.sub<32>(c.c.e, 0xa7cu, true);
    // 2511:07c0  jne 0x7db  (32)  [x3727529]
    if (!c.zf) goto L258eb;
L258d2:
    if (c.tracing) c.traceAt(0x258d2);
    // 2511:07c2  movzx eax, word ptr [0x1694]  (32)  [x293800]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0x1694u)));
    // 2511:07c8  add eax, dword ptr [0x1670]  (32)  [x293800]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1670u)), true));
    // 2511:07cd  movzx eax, byte ptr [eax + 0x18b5]  (32)  [x293800]
    c.a.e = (uint32_t)(c.r8(c.dsb + (uint32_t)(c.a.e + 0x18b5u)));
    // 2511:07d4  mov eax, dword ptr [eax*4 + 0x1270]  (32)  [x293800]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + 0x1270u)));
L258eb:
    if (c.tracing) c.traceAt(0x258eb);
    // 2511:07db  xor edi, edi  (32)  [x3727529]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 2511:07dd  xor ecx, ecx  (32)  [x3727529]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L258ef:
    if (c.tracing) c.traceAt(0x258ef);
    // 2511:07df  mov di, word ptr [esi + 4]  (32)  [x4790028]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x4u)));
    // 2511:07e3  mov cx, di  (32)  [x4790028]
    c.c.x = (uint16_t)(c.di.x);
    // 2511:07e6  shr cx, 2  (32)  [x4790028]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), false));
    // 2511:07ea  mov dx, word ptr [esi + 6]  (32)  [x4790028]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2511:07ee  shr dx, 2  (32)  [x4790028]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 2511:07f2  sub dx, cx  (32)  [x4790028]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.c.x, true));
    // 2511:07f5  je 0x81a  (32)  [x4790028]
    if (c.zf) goto L2592a;
L25907:
    if (c.tracing) c.traceAt(0x25907);
    // 2511:07f7  mov cx, di  (32)  [x3271413]
    c.c.x = (uint16_t)(c.di.x);
    // 2511:07fa  and cx, 3  (32)  [x3271413]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), false));
    // 2511:07fe  sub cx, 4  (32)  [x3271413]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x4u, false));
    // 2511:0802  neg cx  (32)  [x3271413]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, true));
L25915:
    if (c.tracing) c.traceAt(0x25915);
    // 2511:0805  rep stosb byte ptr es:[edi], al  (32)  [x11214508]
    c.stos<8, true>(1);
L25917:
    if (c.tracing) c.traceAt(0x25917);
    // 2511:0807  mov cx, dx  (32)  [x3271413]
    c.c.x = (uint16_t)(c.dx_.x);
    // 2511:080a  dec cx  (32)  [x3271413]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
L2591c:
    if (c.tracing) c.traceAt(0x2591c);
    // 2511:080c  rep stosd dword ptr es:[edi], eax  (32)  [x23504000]
    c.stos<32, true>(1);
L2591e:
    if (c.tracing) c.traceAt(0x2591e);
    // 2511:080e  mov cx, word ptr [esi + 6]  (32)  [x3271413]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2511:0812  and cx, 3  (32)  [x3271413]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L25926:
    if (c.tracing) c.traceAt(0x25926);
    // 2511:0816  rep stosb byte ptr es:[edi], al  (32)  [x7098220]
    c.stos<8, true>(1);
L25928:
    if (c.tracing) c.traceAt(0x25928);
    // 2511:0818  jmp 0x823  (32)  [x3271413]
    goto L25933;
L2592a:
    if (c.tracing) c.traceAt(0x2592a);
    // 2511:081a  mov cx, word ptr [esi + 6]  (32)  [x1518615]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2511:081e  sub cx, di  (32)  [x1518615]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
L25931:
    if (c.tracing) c.traceAt(0x25931);
    // 2511:0821  rep stosb byte ptr es:[edi], al  (32)  [x2834365]
    c.stos<8, true>(1);
L25933:
    if (c.tracing) c.traceAt(0x25933);
    // 2511:0823  cmp esi, ebp  (32)  [x4790028]
    c.sub<32>(c.si.e, c.bp.e, true);
    // 2511:0825  mov esi, dword ptr [esi]  (32)  [x4790028]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2511:0827  jne 0x7df  (32)  [x4790028]
    if (!c.zf) goto L258ef;
L25939:
    if (c.tracing) c.traceAt(0x25939);
    // 2511:0829  popal   (32)  [x3727529]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 2511:082a  ret   (32)  [x3727529]
    c.ip = c.pop32(); return;
}

static Register reg18(18, {0x24f2a, 0x24f33, 0x24f38, 0x24f87, 0x24fa9, 0x24fb2, 0x24fbe, 0x24fc7, 0x24fd3, 0x24fdc, 0x2504e, 0x25075, 0x25079, 0x25083, 0x250a9, 0x250ad, 0x250b1, 0x250c4, 0x250d5, 0x250ea, 0x250ef, 0x25101, 0x25104, 0x25118, 0x25120, 0x25127, 0x25130, 0x25135, 0x2513b, 0x25148, 0x25159, 0x25164, 0x25169, 0x25180, 0x25192, 0x251a7, 0x251b2, 0x251be, 0x251cc, 0x251ee, 0x251f9, 0x251fe, 0x2520d, 0x25216, 0x25220, 0x2522d, 0x2522f, 0x25236, 0x2523e, 0x25243, 0x2524f, 0x25251, 0x25258, 0x25268, 0x25277, 0x25279, 0x25280, 0x25290, 0x25293, 0x2529a, 0x252a3, 0x252c0, 0x25357, 0x25362, 0x25385, 0x25387, 0x2539f, 0x253b9, 0x253bb, 0x253d6, 0x253e0, 0x253ea, 0x253f1, 0x25402, 0x25410, 0x254de, 0x254ec, 0x254f1, 0x254fd, 0x25526, 0x25530, 0x2553f, 0x2554e, 0x25552, 0x2555f, 0x255b3, 0x255bb, 0x255c7, 0x255ca, 0x255d0, 0x255da, 0x255ea, 0x255f0, 0x25625, 0x2562b, 0x25631, 0x25634, 0x2563d, 0x25646, 0x2564f, 0x25651, 0x25658, 0x25661, 0x25667, 0x25676, 0x25680, 0x2568e, 0x256a3, 0x256b7, 0x256cb, 0x256cd, 0x256d3, 0x256d7, 0x256dc, 0x256e6, 0x256ee, 0x256f6, 0x25714, 0x25724, 0x2572b, 0x25737, 0x2573c, 0x2574c, 0x2574f, 0x2575b, 0x25784, 0x2578a, 0x25790, 0x2579a, 0x257a2, 0x257a7, 0x257ae, 0x257bb, 0x257be, 0x257c2, 0x257c4, 0x257d0, 0x257e0, 0x257e7, 0x25800, 0x2580f, 0x25823, 0x2582e, 0x2584a, 0x2585d, 0x25867, 0x2586a, 0x25874, 0x2587c, 0x25883, 0x25890, 0x25893, 0x2589c, 0x258a0, 0x258ac, 0x258b1, 0x258ba, 0x258c0, 0x258d2, 0x258eb, 0x258ef, 0x25907, 0x25915, 0x25917, 0x2591c, 0x2591e, 0x25926, 0x25928, 0x2592a, 0x25931, 0x25933, 0x25939}, code_18);

}  // namespace angel
