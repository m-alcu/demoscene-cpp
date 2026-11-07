// Program 16, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_16(Cpu& c, uint32_t entry) {
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
    case 0x250f2: goto L250f2;
    case 0x25104: goto L25104;
    case 0x25107: goto L25107;
    case 0x25128: goto L25128;
    case 0x25130: goto L25130;
    case 0x25137: goto L25137;
    case 0x25140: goto L25140;
    case 0x25145: goto L25145;
    case 0x2514b: goto L2514b;
    case 0x25158: goto L25158;
    case 0x25169: goto L25169;
    case 0x25174: goto L25174;
    case 0x25179: goto L25179;
    case 0x25190: goto L25190;
    case 0x251a2: goto L251a2;
    case 0x251b7: goto L251b7;
    case 0x251c2: goto L251c2;
    case 0x251ce: goto L251ce;
    case 0x251dc: goto L251dc;
    case 0x251fe: goto L251fe;
    case 0x25209: goto L25209;
    case 0x2520e: goto L2520e;
    case 0x2521d: goto L2521d;
    case 0x25226: goto L25226;
    case 0x25230: goto L25230;
    case 0x2523d: goto L2523d;
    case 0x2523f: goto L2523f;
    case 0x25246: goto L25246;
    case 0x2524e: goto L2524e;
    case 0x25253: goto L25253;
    case 0x2525f: goto L2525f;
    case 0x25261: goto L25261;
    case 0x25268: goto L25268;
    case 0x25278: goto L25278;
    case 0x25287: goto L25287;
    case 0x25289: goto L25289;
    case 0x25290: goto L25290;
    case 0x252a0: goto L252a0;
    case 0x252a3: goto L252a3;
    case 0x252aa: goto L252aa;
    case 0x252b3: goto L252b3;
    case 0x252d0: goto L252d0;
    case 0x25367: goto L25367;
    case 0x25372: goto L25372;
    case 0x25395: goto L25395;
    case 0x25397: goto L25397;
    case 0x253af: goto L253af;
    case 0x253c9: goto L253c9;
    case 0x253cb: goto L253cb;
    case 0x253e6: goto L253e6;
    case 0x253f0: goto L253f0;
    case 0x253fa: goto L253fa;
    case 0x25401: goto L25401;
    case 0x25412: goto L25412;
    case 0x25420: goto L25420;
    case 0x254ee: goto L254ee;
    case 0x254fc: goto L254fc;
    case 0x25501: goto L25501;
    case 0x2550d: goto L2550d;
    case 0x25536: goto L25536;
    case 0x25540: goto L25540;
    case 0x2554f: goto L2554f;
    case 0x2555e: goto L2555e;
    case 0x25562: goto L25562;
    case 0x2556f: goto L2556f;
    case 0x255c3: goto L255c3;
    case 0x255cb: goto L255cb;
    case 0x255d7: goto L255d7;
    case 0x255da: goto L255da;
    case 0x255e0: goto L255e0;
    case 0x255ea: goto L255ea;
    case 0x255fa: goto L255fa;
    case 0x25600: goto L25600;
    case 0x25635: goto L25635;
    case 0x2563b: goto L2563b;
    case 0x25641: goto L25641;
    case 0x25644: goto L25644;
    case 0x2564d: goto L2564d;
    case 0x25656: goto L25656;
    case 0x2565f: goto L2565f;
    case 0x25661: goto L25661;
    case 0x25668: goto L25668;
    case 0x25671: goto L25671;
    case 0x25677: goto L25677;
    case 0x25686: goto L25686;
    case 0x25690: goto L25690;
    case 0x2569e: goto L2569e;
    case 0x256b3: goto L256b3;
    case 0x256c7: goto L256c7;
    case 0x256db: goto L256db;
    case 0x256dd: goto L256dd;
    case 0x256e3: goto L256e3;
    case 0x256e7: goto L256e7;
    case 0x256ec: goto L256ec;
    case 0x256f6: goto L256f6;
    case 0x256fe: goto L256fe;
    case 0x25706: goto L25706;
    case 0x25724: goto L25724;
    case 0x25734: goto L25734;
    case 0x2573b: goto L2573b;
    case 0x25747: goto L25747;
    case 0x2574c: goto L2574c;
    case 0x2575c: goto L2575c;
    case 0x2575f: goto L2575f;
    case 0x2576b: goto L2576b;
    case 0x25794: goto L25794;
    case 0x2579a: goto L2579a;
    case 0x257a0: goto L257a0;
    case 0x257aa: goto L257aa;
    case 0x257b2: goto L257b2;
    case 0x257b7: goto L257b7;
    case 0x257be: goto L257be;
    case 0x257cb: goto L257cb;
    case 0x257ce: goto L257ce;
    case 0x257d2: goto L257d2;
    case 0x257d4: goto L257d4;
    case 0x257e0: goto L257e0;
    case 0x257f0: goto L257f0;
    case 0x257f7: goto L257f7;
    case 0x25810: goto L25810;
    case 0x2581f: goto L2581f;
    case 0x25833: goto L25833;
    case 0x2583e: goto L2583e;
    case 0x2585a: goto L2585a;
    case 0x2586d: goto L2586d;
    case 0x25877: goto L25877;
    case 0x2587a: goto L2587a;
    case 0x25884: goto L25884;
    case 0x2588c: goto L2588c;
    case 0x25893: goto L25893;
    case 0x258a0: goto L258a0;
    case 0x258a3: goto L258a3;
    case 0x258ac: goto L258ac;
    case 0x258b0: goto L258b0;
    case 0x258bc: goto L258bc;
    case 0x258c1: goto L258c1;
    case 0x258ca: goto L258ca;
    case 0x258d0: goto L258d0;
    case 0x258e2: goto L258e2;
    case 0x258fb: goto L258fb;
    case 0x258ff: goto L258ff;
    case 0x25917: goto L25917;
    case 0x25925: goto L25925;
    case 0x25927: goto L25927;
    case 0x2592c: goto L2592c;
    case 0x2592e: goto L2592e;
    case 0x25936: goto L25936;
    case 0x25938: goto L25938;
    case 0x2593a: goto L2593a;
    case 0x25941: goto L25941;
    case 0x25943: goto L25943;
    case 0x25949: goto L25949;
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
    // 24f1:002c  mov word ptr [0], 0x1fa  [x1]
    c.w16(c.dsb + (uint16_t)(0u), 0x1fau);
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
    // 24f1:004e  mov ax, 0x2512  [x1]
    c.a.x = (uint16_t)(0x2512u);
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
    // 24f1:0077  mov dword ptr [0x212], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x212u), c.a.e);
    // 24f1:007e  mov edi, ebx  [x1]
    c.di.e = (uint32_t)(c.b.e);
    // 24f1:0081  mov dx, 0x1aa5  [x1]
    c.dx_.x = (uint16_t)(0x1aa5u);
    // 24f1:0084  pop eax  [x1]
    { const uint32_t t0 = c.pop32(); c.a.e = (uint32_t)(t0); }
    // 24f1:0086  mov dword ptr [0x1684], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0x1684u), c.b.e);
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
    // 24f1:0099  add dword ptr [ecx + edi*4], ebx  [x913]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4)), c.b.e, true));
    // 24f1:009e  dec edi  [x913]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00a0  jne 0x99  [x913]
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
    // 24f1:00ae  add dword ptr [edx + edi*4], ebx  [x1546]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00b3  dec edi  [x1546]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00b5  jne 0xae  [x1546]
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
    // 24f1:00c3  add dword ptr [esi + edi*4], ebx  [x709]
    c.w32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00c8  dec edi  [x709]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00ca  jne 0xc3  [x709]
    if (!c.zf) goto L24fd3;
L24fdc:
    if (c.tracing) c.traceAt(0x24fdc);
    // 24f1:00cc  mov dword ptr [0x288], esi  [x1]
    c.w32(c.dsb + (uint32_t)(0x288u), c.si.e);
    // 24f1:00d4  mov eax, dword ptr [ebx + 0xc]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)));
    // 24f1:00d9  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00dc  mov dword ptr [0x1690], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1690u), c.a.e);
    // 24f1:00e0  add eax, 0x300  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x300u, false));
    // 24f1:00e6  mov dword ptr [0x1694], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1694u), c.a.e);
    // 24f1:00ea  mov dword ptr [0x1698], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1698u), c.a.e);
    // 24f1:00ee  mov eax, dword ptr [ebx + 0x10]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 24f1:00f3  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00f6  mov dword ptr [0x3b3], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x3b3u), c.a.e);
    // 24f1:00fd  mov dword ptr [0x622], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x622u), c.a.e);
    // 24f1:0104  mov dword ptr [0x1688], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1688u), c.a.e);
    // 24f1:0108  mov eax, dword ptr [ebx + 0x14]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 24f1:010d  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:0110  mov dword ptr [0x168c], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x168cu), c.a.e);
    // 24f1:0114  mov eax, dword ptr [ebx + 0x18]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)));
    // 24f1:0119  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:011c  mov dword ptr [0x10fc], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x10fcu), c.a.e);
    // 24f1:0120  pushal   [x1]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 24f1:0122  mov dx, 0x1ab1  [x1]
    c.dx_.x = (uint16_t)(0x1ab1u);
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
    // 24f1:013e  mov eax, dword ptr [edx + edi*4]  [x1546]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)));
    // 24f1:0143  mov ebx, dword ptr [eax + 0x18]  [x1546]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x18u)));
    // 24f1:0148  mov ebx, dword ptr [ecx + ebx*4]  [x1546]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:014d  mov dword ptr [eax + 0x18], ebx  [x1546]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x18u), c.b.e);
    // 24f1:0152  mov ebx, dword ptr [eax + 0x1c]  [x1546]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x1cu)));
    // 24f1:0157  mov ebx, dword ptr [ecx + ebx*4]  [x1546]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:015c  mov dword ptr [eax + 0x1c], ebx  [x1546]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x1cu), c.b.e);
    // 24f1:0161  dec edi  [x1546]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:0163  jne 0x13e  [x1546]
    if (!c.zf) goto L2504e;
L25075:
    if (c.tracing) c.traceAt(0x25075);
    // 24f1:0165  mov edi, dword ptr [esi]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
L25079:
    if (c.tracing) c.traceAt(0x25079);
    // 24f1:0169  mov eax, dword ptr [esi + edi*4]  [x709]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 24f1:016e  mov ebp, dword ptr [eax + 0x38]  [x709]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L25083:
    if (c.tracing) c.traceAt(0x25083);
    // 24f1:0173  mov ebx, dword ptr [eax + ebp*8 + 0x34]  [x2761]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 24f1:0179  mov ebx, dword ptr [ecx + ebx*4]  [x2761]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:017e  mov dword ptr [eax + ebp*8 + 0x34], ebx  [x2761]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u), c.b.e);
    // 24f1:0184  mov ebx, dword ptr [eax + ebp*8 + 0x38]  [x2761]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 24f1:018a  mov ebx, dword ptr [edx + ebx*4]  [x2761]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.b.e * 4)));
    // 24f1:018f  mov dword ptr [eax + ebp*8 + 0x38], ebx  [x2761]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u), c.b.e);
    // 24f1:0195  dec ebp  [x2761]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 24f1:0197  jne 0x173  [x2761]
    if (!c.zf) goto L25083;
L250a9:
    if (c.tracing) c.traceAt(0x250a9);
    // 24f1:0199  dec edi  [x709]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:019b  jne 0x169  [x709]
    if (!c.zf) goto L25079;
L250ad:
    if (c.tracing) c.traceAt(0x250ad);
    // 24f1:019d  mov eax, dword ptr [0x1688]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1688u)));
L250b1:
    if (c.tracing) c.traceAt(0x250b1);
    // 24f1:01a1  mov dword ptr [eax], eax  [x37]
    c.w32(c.dsb + (uint32_t)(c.a.e), c.a.e);
    // 24f1:01a5  mov dword ptr [eax + 8], eax  [x37]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.a.e);
    // 24f1:01aa  mov ebx, dword ptr [eax + 4]  [x37]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 24f1:01af  mov ebp, dword ptr [eax + 0xc]  [x37]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
L250c4:
    if (c.tracing) c.traceAt(0x250c4);
    // 24f1:01b4  mov edi, dword ptr [esi + ebx*4]  [x709]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.b.e * 4)));
    // 24f1:01b9  mov dword ptr [edi + 0x24], eax  [x709]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.a.e);
    // 24f1:01be  inc ebx  [x709]
    c.b.e = (uint32_t)(c.inc<32>(c.b.e, false));
    // 24f1:01c0  cmp ebx, ebp  [x709]
    c.sub<32>(c.b.e, c.bp.e, true);
    // 24f1:01c3  jbe 0x1b4  [x709]
    if ((c.cf || c.zf)) goto L250c4;
L250d5:
    if (c.tracing) c.traceAt(0x250d5);
    // 24f1:01c5  mov dword ptr [eax + 4], eax  [x37]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.a.e);
    // 24f1:01ca  mov dword ptr [eax + 0xc], eax  [x37]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.a.e);
    // 24f1:01cf  add eax, 0x40  [x37]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x40u, false));
    // 24f1:01d3  cmp eax, dword ptr [0x168c]  [x37]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x168cu)), true);
    // 24f1:01d8  jne 0x1a1  [x37]
    if (!c.zf) goto L250b1;
L250ea:
    if (c.tracing) c.traceAt(0x250ea);
    // 24f1:01da  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 24f1:01dd  mov ax, 4  [x1]
    c.a.x = (uint16_t)(0x4u);
    // 24f1:01e0  int 0xff  [x1]
    c.ip = 0x1e2u; c.d32 = false; c.intr(0xff, 0x1e2u);
L250f2:
    if (c.tracing) c.traceAt(0x250f2);
    // 24f1:01e2  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 24f1:01e5  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:01e7  out dx, al  [x1]
    c.ip = 0x1e8u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:01e8  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 24f1:01e9  mov esi, dword ptr [0x1690]  [x1]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1690u)));
    // 24f1:01ee  mov ecx, 0x300  [x1]
    c.c.e = (uint32_t)(0x300u);
L25104:
    if (c.tracing) c.traceAt(0x25104);
    // 24f1:01f4  rep outsb dx, byte ptr [esi]  [x769]
    c.ip = 0x1f7u; c.d32 = false; c.outs<8, true>(c.dsb, 1);
L25107:
    if (c.tracing) c.traceAt(0x25107);
    // 24f1:01f7  jmp 0x1a  [x1]
    goto L24f2a;
L25128:
    if (c.tracing) c.traceAt(0x25128);
    // 000c:0008  mov eax, cr0  (32)  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 000c:000b  and al, 0xfe  (32)  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 000c:000d  mov cr0, eax  (32)  [x1]
    c.setCr0(c.a.e);
L25130:
    if (c.tracing) c.traceAt(0x25130);
    // 000c:0010  ljmp 0x2512:0x17  (32)  [x1]
    c.loadCs(0x2512u); t = c.csb + 0x17u; goto dispatch;
L25137:
    if (c.tracing) c.traceAt(0x25137);
    // 2512:0017  lidt cs:[0]  (32)  [x1]
    // 2512:001f  sti   (32)  [x1]
    c.ip = 0x20u; c.d32 = true; c.m.sti();
L25140:
    if (c.tracing) c.traceAt(0x25140);
    // 2512:0020  mov ax, word ptr [0x16aa]  (32)  [x201]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16aau)));
L25145:
    if (c.tracing) c.traceAt(0x25145);
    // 2512:0025  mov bx, 4  (32)  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 2512:0029  int 0xfb  (32)  [x1]
    c.ip = 0x2bu; c.d32 = true; c.intr(0xfb, 0x2bu);
L2514b:
    if (c.tracing) c.traceAt(0x2514b);
    // 2512:002b  xor word ptr [0x16aa], 1  (32)  [x201]
    c.w16(c.dsb + (uint16_t)(0x16aau), c.logic<16>((c.r16(c.dsb + (uint16_t)(0x16aau))) ^ (0x1u), true));
    // 2512:0032  mov bx, 0xe  (32)  [x201]
    c.b.x = (uint16_t)(0xeu);
    // 2512:0036  int 0xff  (32)  [x201]
    c.ip = 0x38u; c.d32 = true; c.intr(0xff, 0x38u);
L25158:
    if (c.tracing) c.traceAt(0x25158);
    // 2512:0038  mov word ptr [0x16a6], ax  (32)  [x201]
    c.w16(c.dsb + (uint16_t)(0x16a6u), c.a.x);
    // 2512:003d  sub word ptr [0x18], ax  (32)  [x201]
    c.w16(c.dsb + (uint16_t)(0x18u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x18u)), c.a.x, true));
    // 2512:0043  jl 0x7a1  (32)  [x201]
    if ((c.sf != c.of)) goto L258c1;
L25169:
    if (c.tracing) c.traceAt(0x25169);
    // 2512:0049  mov ax, word ptr [0x16aa]  (32)  [x200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16aau)));
    // 2512:004e  mov bx, 2  (32)  [x200]
    c.b.x = (uint16_t)(0x2u);
    // 2512:0052  int 0xfb  (32)  [x200]
    c.ip = 0x54u; c.d32 = true; c.intr(0xfb, 0x54u);
L25174:
    if (c.tracing) c.traceAt(0x25174);
    // 2512:0054  mov word ptr [0x16ac], ax  (32)  [x200]
    c.w16(c.dsb + (uint16_t)(0x16acu), c.a.x);
L25179:
    if (c.tracing) c.traceAt(0x25179);
    // 2512:0059  mov esi, dword ptr [0x10fc]  (32)  [x200]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10fcu)));
    // 2512:005e  mov edi, dword ptr [esi]  (32)  [x200]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2512:0060  lea eax, [esi + edi*4 + 4]  (32)  [x200]
    c.a.e = (uint32_t)((uint32_t)(c.si.e + c.di.e * 4 + 0x4u));
    // 2512:0064  mov dword ptr [0x10fc], eax  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0x10fcu), c.a.e);
    // 2512:0068  or edi, edi  (32)  [x200]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) | (c.di.e), true));
    // 2512:006a  je 0x193  (32)  [x200]
    if (c.zf) goto L252b3;
L25190:
    if (c.tracing) c.traceAt(0x25190);
    // 2512:0070  push esi  (32)  [x2637]
    c.push32(c.si.e);
    // 2512:0071  push edi  (32)  [x2637]
    c.push32(c.di.e);
    // 2512:0072  mov eax, dword ptr [esi + edi*4]  (32)  [x2637]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 2512:0075  mov eax, dword ptr [eax*4 + 0x124a14]  (32)  [x2637]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + (uint32_t)(int32_t)c.r32(0x25198))));
    // 2512:007c  xor byte ptr [eax + 0x1a], 1  (32)  [x2637]
    c.w8(c.dsb + (uint32_t)(c.a.e + 0x1au), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.a.e + 0x1au))) ^ (0x1u), true));
    // 2512:0080  je 0xee  (32)  [x2637]
    if (c.zf) goto L2520e;
L251a2:
    if (c.tracing) c.traceAt(0x251a2);
    // 2512:0082  mov ebx, dword ptr [eax + 0x24]  (32)  [x1456]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x24u)));
    // 2512:0085  mov ecx, dword ptr [ebx + 4]  (32)  [x1456]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2512:0088  mov dword ptr [ebx + 4], eax  (32)  [x1456]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.a.e);
    // 2512:008b  mov dword ptr [eax + 0xc], ebx  (32)  [x1456]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.b.e);
    // 2512:008e  mov dword ptr [eax + 4], ecx  (32)  [x1456]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2512:0091  mov dword ptr [ecx + 0xc], eax  (32)  [x1456]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.a.e);
    // 2512:0094  mov ebp, dword ptr [eax + 0x38]  (32)  [x1456]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L251b7:
    if (c.tracing) c.traceAt(0x251b7);
    // 2512:0097  push ebx  (32)  [x5580]
    c.push32(c.b.e);
    // 2512:0098  mov ecx, dword ptr [eax + ebp*8 + 0x34]  (32)  [x5580]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 2512:009c  cmp dword ptr [ecx + 0x24], 0  (32)  [x5580]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), 0x0u, true);
    // 2512:00a0  jne 0xae  (32)  [x5580]
    if (!c.zf) goto L251ce;
L251c2:
    if (c.tracing) c.traceAt(0x251c2);
    // 2512:00a2  mov edx, dword ptr [ebx]  (32)  [x1883]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2512:00a4  mov dword ptr [ebx], ecx  (32)  [x1883]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.c.e);
    // 2512:00a6  mov dword ptr [ecx + 8], ebx  (32)  [x1883]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.b.e);
    // 2512:00a9  mov dword ptr [ecx], edx  (32)  [x1883]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.dx_.e);
    // 2512:00ab  mov dword ptr [edx + 8], ecx  (32)  [x1883]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.c.e);
L251ce:
    if (c.tracing) c.traceAt(0x251ce);
    // 2512:00ae  inc dword ptr [ecx + 0x24]  (32)  [x5580]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x24u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), false));
    // 2512:00b1  mov ecx, dword ptr [eax + ebp*8 + 0x38]  (32)  [x5580]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 2512:00b5  mov edx, dword ptr [ecx + 0x20]  (32)  [x5580]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:00b8  or edx, edx  (32)  [x5580]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) | (c.dx_.e), true));
    // 2512:00ba  jne 0xde  (32)  [x5580]
    if (!c.zf) goto L251fe;
L251dc:
    if (c.tracing) c.traceAt(0x251dc);
    // 2512:00bc  mov ebx, dword ptr [ecx + 0x18]  (32)  [x3336]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x18u)));
    // 2512:00bf  mov edi, dword ptr [ecx + 0x1c]  (32)  [x3336]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2512:00c2  inc dword ptr [ebx + 0x28]  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2512:00c5  mov esi, dword ptr [ebx + 0x28]  (32)  [x3336]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2512:00c8  mov dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.c.e);
    // 2512:00cc  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
    // 2512:00d0  inc dword ptr [edi + 0x28]  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x28u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)), true));
    // 2512:00d3  mov esi, dword ptr [edi + 0x28]  (32)  [x3336]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)));
    // 2512:00d6  mov dword ptr [edi + esi*8 + 0x24], ecx  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x24u), c.c.e);
    // 2512:00da  mov dword ptr [edi + esi*8 + 0x28], ebx  (32)  [x3336]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x28u), c.b.e);
L251fe:
    if (c.tracing) c.traceAt(0x251fe);
    // 2512:00de  inc dword ptr [ecx + 0x20]  (32)  [x5580]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)), false));
    // 2512:00e1  mov dword ptr [ecx + edx*4 + 0x24], eax  (32)  [x5580]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x24u), c.a.e);
    // 2512:00e5  pop ebx  (32)  [x5580]
    { const uint32_t t0 = c.pop32(); c.b.e = (uint32_t)(t0); }
    // 2512:00e6  dec ebp  (32)  [x5580]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2512:00e7  jne 0x97  (32)  [x5580]
    if (!c.zf) goto L251b7;
L25209:
    if (c.tracing) c.traceAt(0x25209);
    // 2512:00e9  jmp 0x18a  (32)  [x1456]
    goto L252aa;
L2520e:
    if (c.tracing) c.traceAt(0x2520e);
    // 2512:00ee  mov ebx, dword ptr [eax + 0xc]  (32)  [x1181]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2512:00f1  mov ecx, dword ptr [eax + 4]  (32)  [x1181]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 2512:00f4  mov dword ptr [ebx + 4], ecx  (32)  [x1181]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.c.e);
    // 2512:00f7  mov dword ptr [ecx + 0xc], ebx  (32)  [x1181]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.b.e);
    // 2512:00fa  mov ebp, dword ptr [eax + 0x38]  (32)  [x1181]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x38u)));
L2521d:
    if (c.tracing) c.traceAt(0x2521d);
    // 2512:00fd  mov ecx, dword ptr [eax + ebp*8 + 0x34]  (32)  [x4504]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x34u)));
    // 2512:0101  dec dword ptr [ecx + 0x24]  (32)  [x4504]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x24u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), true));
    // 2512:0104  jne 0x110  (32)  [x4504]
    if (!c.zf) goto L25230;
L25226:
    if (c.tracing) c.traceAt(0x25226);
    // 2512:0106  mov ebx, dword ptr [ecx + 8]  (32)  [x1359]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2512:0109  mov edx, dword ptr [ecx]  (32)  [x1359]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2512:010b  mov dword ptr [ebx], edx  (32)  [x1359]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2512:010d  mov dword ptr [edx + 8], ebx  (32)  [x1359]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.b.e);
L25230:
    if (c.tracing) c.traceAt(0x25230);
    // 2512:0110  mov ecx, dword ptr [eax + ebp*8 + 0x38]  (32)  [x4504]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x38u)));
    // 2512:0114  mov ebx, dword ptr [ecx + 0x20]  (32)  [x4504]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:0117  cmp dword ptr [ecx + ebx*4 + 0x20], eax  (32)  [x4504]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u)), c.a.e, true);
    // 2512:011b  je 0x12e  (32)  [x4504]
    if (c.zf) goto L2524e;
L2523d:
    if (c.tracing) c.traceAt(0x2523d);
    // 2512:011d  mov edx, ebx  (32)  [x388]
    c.dx_.e = (uint32_t)(c.b.e);
L2523f:
    if (c.tracing) c.traceAt(0x2523f);
    // 2512:011f  dec ebx  (32)  [x388]
    c.b.e = (uint32_t)(c.dec<32>(c.b.e, false));
    // 2512:0120  cmp dword ptr [ecx + ebx*4 + 0x20], eax  (32)  [x388]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u)), c.a.e, true);
    // 2512:0124  jne 0x11f  (32)  [x388]
    if (!c.zf) goto L2523f;
L25246:
    if (c.tracing) c.traceAt(0x25246);
    // 2512:0126  mov edx, dword ptr [ecx + edx*4 + 0x20]  (32)  [x388]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x20u)));
    // 2512:012a  mov dword ptr [ecx + ebx*4 + 0x20], edx  (32)  [x388]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x20u), c.dx_.e);
L2524e:
    if (c.tracing) c.traceAt(0x2524e);
    // 2512:012e  dec dword ptr [ecx + 0x20]  (32)  [x4504]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)), true));
    // 2512:0131  jne 0x183  (32)  [x4504]
    if (!c.zf) goto L252a3;
L25253:
    if (c.tracing) c.traceAt(0x25253);
    // 2512:0133  mov ebx, dword ptr [ecx + 0x18]  (32)  [x2582]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x18u)));
    // 2512:0136  mov edx, dword ptr [ebx + 0x28]  (32)  [x2582]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2512:0139  cmp dword ptr [ebx + edx*8 + 0x24], ecx  (32)  [x2582]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)), c.c.e, true);
    // 2512:013d  je 0x158  (32)  [x2582]
    if (c.zf) goto L25278;
L2525f:
    if (c.tracing) c.traceAt(0x2525f);
    // 2512:013f  mov esi, edx  (32)  [x745]
    c.si.e = (uint32_t)(c.dx_.e);
L25261:
    if (c.tracing) c.traceAt(0x25261);
    // 2512:0141  dec esi  (32)  [x888]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2512:0142  cmp dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x888]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)), c.c.e, true);
    // 2512:0146  jne 0x141  (32)  [x888]
    if (!c.zf) goto L25261;
L25268:
    if (c.tracing) c.traceAt(0x25268);
    // 2512:0148  mov edi, dword ptr [ebx + edx*8 + 0x24]  (32)  [x745]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)));
    // 2512:014c  mov dword ptr [ebx + esi*8 + 0x24], edi  (32)  [x745]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.di.e);
    // 2512:0150  mov edi, dword ptr [ebx + edx*8 + 0x28]  (32)  [x745]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x28u)));
    // 2512:0154  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x745]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
L25278:
    if (c.tracing) c.traceAt(0x25278);
    // 2512:0158  dec dword ptr [ebx + 0x28]  (32)  [x2582]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2512:015b  mov ebx, dword ptr [ecx + 0x1c]  (32)  [x2582]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2512:015e  mov edx, dword ptr [ebx + 0x28]  (32)  [x2582]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
    // 2512:0161  cmp dword ptr [ebx + edx*8 + 0x24], ecx  (32)  [x2582]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)), c.c.e, true);
    // 2512:0165  je 0x180  (32)  [x2582]
    if (c.zf) goto L252a0;
L25287:
    if (c.tracing) c.traceAt(0x25287);
    // 2512:0167  mov esi, edx  (32)  [x1125]
    c.si.e = (uint32_t)(c.dx_.e);
L25289:
    if (c.tracing) c.traceAt(0x25289);
    // 2512:0169  dec esi  (32)  [x1341]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2512:016a  cmp dword ptr [ebx + esi*8 + 0x24], ecx  (32)  [x1341]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)), c.c.e, true);
    // 2512:016e  jne 0x169  (32)  [x1341]
    if (!c.zf) goto L25289;
L25290:
    if (c.tracing) c.traceAt(0x25290);
    // 2512:0170  mov edi, dword ptr [ebx + edx*8 + 0x24]  (32)  [x1125]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x24u)));
    // 2512:0174  mov dword ptr [ebx + esi*8 + 0x24], edi  (32)  [x1125]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u), c.di.e);
    // 2512:0178  mov edi, dword ptr [ebx + edx*8 + 0x28]  (32)  [x1125]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x28u)));
    // 2512:017c  mov dword ptr [ebx + esi*8 + 0x28], edi  (32)  [x1125]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u), c.di.e);
L252a0:
    if (c.tracing) c.traceAt(0x252a0);
    // 2512:0180  dec dword ptr [ebx + 0x28]  (32)  [x2582]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x28u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), true));
L252a3:
    if (c.tracing) c.traceAt(0x252a3);
    // 2512:0183  dec ebp  (32)  [x4504]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2512:0184  jne 0xfd  (32)  [x4504]
    if (!c.zf) goto L2521d;
L252aa:
    if (c.tracing) c.traceAt(0x252aa);
    // 2512:018a  pop edi  (32)  [x2637]
    { const uint32_t t0 = c.pop32(); c.di.e = (uint32_t)(t0); }
    // 2512:018b  pop esi  (32)  [x2637]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2512:018c  dec edi  (32)  [x2637]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 2512:018d  jne 0x70  (32)  [x2637]
    if (!c.zf) goto L25190;
L252b3:
    if (c.tracing) c.traceAt(0x252b3);
    // 2512:0193  mov esi, dword ptr [0x1694]  (32)  [x200]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1694u)));
    // 2512:0198  lodsd eax, dword ptr [esi]  (32)  [x200]
    c.ip = 0x199u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2512:0199  mov dword ptr [0x1680], eax  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0x1680u), c.a.e);
    // 2512:019d  mov dword ptr [0x1694], esi  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0x1694u), c.si.e);
    // 2512:01a2  mov edi, 0x121a60  (32)  [x200]
    c.di.e = (uint32_t)((c.r32(0x252c3)));
    // 2512:01a7  jmp 0x300  (32)  [x200]
    goto L25420;
L252d0:
    if (c.tracing) c.traceAt(0x252d0);
    // 2512:01b0  mov eax, dword ptr [edi + 0x14]  (32)  [x67189]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)));
    // 2512:01b3  mov ebx, dword ptr [edi + 0x18]  (32)  [x67189]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x18u)));
    // 2512:01b6  mov ecx, dword ptr [edi + 0x1c]  (32)  [x67189]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)));
    // 2512:01b9  mov edx, 0xd5eaa1  (32)  [x67189]
    c.dx_.e = (uint32_t)((c.r32(0x252da)));
    // 2512:01be  imul ebp, eax, 0xfffffff8  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x252e0))));
    // 2512:01c4  add edx, ebp  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2512:01c6  imul ebp, ebx, 0  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x252e8))));
    // 2512:01cc  add edx, ebp  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2512:01ce  imul ebp, ecx, 0x315  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x252f0))));
    // 2512:01d4  add edx, ebp  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2512:01d6  mov esi, 0x61086c  (32)  [x67189]
    c.si.e = (uint32_t)((c.r32(0x252f7)));
    // 2512:01db  imul ebp, eax, 0x83  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x252fd))));
    // 2512:01e1  add esi, ebp  (32)  [x67189]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2512:01e3  imul ebp, ebx, 0xfffffcf6  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x25305))));
    // 2512:01e9  add esi, ebp  (32)  [x67189]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2512:01eb  imul ebp, ecx, 1  (32)  [x67189]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x2530d))));
    // 2512:01f1  add esi, ebp  (32)  [x67189]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2512:01f3  mov ebp, 0xfe8afa15  (32)  [x67189]
    c.bp.e = (uint32_t)((c.r32(0x25314)));
    // 2512:01f8  imul eax, eax, 0xfffffe07  (32)  [x67189]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x2531a))));
    // 2512:01fe  add ebp, eax  (32)  [x67189]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 2512:0200  imul ebx, ebx, 0xffffffab  (32)  [x67189]
    c.b.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x25322))));
    // 2512:0206  add ebp, ebx  (32)  [x67189]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.b.e, false));
    // 2512:0208  imul ecx, ecx, 0xfffffffb  (32)  [x67189]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x2532a))));
    // 2512:020e  add ebp, ecx  (32)  [x67189]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.c.e, false));
    // 2512:0210  mov dword ptr [edi + 0x20], ebp  (32)  [x67189]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x20u), c.bp.e);
    // 2512:0213  xor eax, eax  (32)  [x67189]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2512:0215  sar edx, 9  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2512:0218  idiv ebp  (32)  [x67189]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x218u); }   // #DE: int 0, then again
    // 2512:021a  sar eax, 0x10  (32)  [x67189]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2512:021d  add ax, 0xa0  (32)  [x67189]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 2512:0221  mov word ptr [edi + 0x10], ax  (32)  [x67189]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.x);
    // 2512:0225  mov edx, esi  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.si.e);
    // 2512:0227  xor eax, eax  (32)  [x67189]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2512:0229  sar edx, 9  (32)  [x67189]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2512:022c  idiv ebp  (32)  [x67189]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x22cu); }   // #DE: int 0, then again
    // 2512:022e  sar eax, 0x10  (32)  [x67189]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2512:0231  add ax, 0x64  (32)  [x67189]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 2512:0235  mov word ptr [edi + 0x12], ax  (32)  [x67189]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x12u), c.a.x);
    // 2512:0239  mov edi, dword ptr [edi]  (32)  [x67189]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2512:023b  cmp edi, dword ptr [0x3bc]  (32)  [x67189]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3bcu)), true);
    // 2512:0241  jne 0x1b0  (32)  [x67189]
    if (!c.zf) goto L252d0;
L25367:
    if (c.tracing) c.traceAt(0x25367);
    // 2512:0247  mov ebx, dword ptr [edi + 4]  (32)  [x4135]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2512:024a  cmp ebx, edi  (32)  [x4135]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2512:024c  je 0x2f2  (32)  [x4135]
    if (c.zf) goto L25412;
L25372:
    if (c.tracing) c.traceAt(0x25372);
    // 2512:0252  mov eax, dword ptr [ebx + 0x2c]  (32)  [x34991]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x2cu)));
    // 2512:0255  imul eax, eax, 0xfffffe07  (32)  [x34991]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x25377))));
    // 2512:025b  mov edx, eax  (32)  [x34991]
    c.dx_.e = (uint32_t)(c.a.e);
    // 2512:025d  mov eax, dword ptr [ebx + 0x30]  (32)  [x34991]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2512:0260  imul eax, eax, 0xffffffab  (32)  [x34991]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x25382))));
    // 2512:0266  add edx, eax  (32)  [x34991]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.a.e, false));
    // 2512:0268  mov eax, dword ptr [ebx + 0x34]  (32)  [x34991]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x34u)));
    // 2512:026b  imul eax, eax, 0xfffffffb  (32)  [x34991]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x2538d))));
    // 2512:0271  add eax, edx  (32)  [x34991]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2512:0273  jns 0x277  (32)  [x34991]
    if (!c.sf) goto L25397;
L25395:
    if (c.tracing) c.traceAt(0x25395);
    // 2512:0275  xor eax, eax  (32)  [x4764]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L25397:
    if (c.tracing) c.traceAt(0x25397);
    // 2512:0277  shr eax, 0x10  (32)  [x34991]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2512:027a  add al, byte ptr [ebx + 0x18]  (32)  [x34991]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint32_t)(c.b.e + 0x18u)), false));
    // 2512:027d  mov eax, dword ptr [eax*4 + 0x1280]  (32)  [x34991]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + 0x1280u)));
    // 2512:0284  mov dword ptr [ebx + 0x14], eax  (32)  [x34991]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x14u), c.a.e);
    // 2512:0287  mov ebp, dword ptr [ebx + 0x38]  (32)  [x34991]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x38u)));
    // 2512:028a  cmp ebp, 4  (32)  [x34991]
    c.sub<32>(c.bp.e, 0x4u, true);
    // 2512:028d  jne 0x2a9  (32)  [x34991]
    if (!c.zf) goto L253c9;
L253af:
    if (c.tracing) c.traceAt(0x253af);
    // 2512:028f  mov eax, dword ptr [ebx + 0x3c]  (32)  [x27557]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x3cu)));
    // 2512:0292  mov edx, dword ptr [eax + 0x20]  (32)  [x27557]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)));
    // 2512:0295  mov eax, dword ptr [ebx + 0x44]  (32)  [x27557]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x44u)));
    // 2512:0298  add edx, dword ptr [eax + 0x20]  (32)  [x27557]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), false));
    // 2512:029b  mov eax, dword ptr [ebx + 0x4c]  (32)  [x27557]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4cu)));
    // 2512:029e  add edx, dword ptr [eax + 0x20]  (32)  [x27557]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), false));
    // 2512:02a1  mov eax, dword ptr [ebx + 0x54]  (32)  [x27557]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x54u)));
    // 2512:02a4  add edx, dword ptr [eax + 0x20]  (32)  [x27557]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x20u)), true));
    // 2512:02a7  jmp 0x2e1  (32)  [x27557]
    goto L25401;
L253c9:
    if (c.tracing) c.traceAt(0x253c9);
    // 2512:02a9  jae 0x2c6  (32)  [x7434]
    if (!c.cf) goto L253e6;
L253cb:
    if (c.tracing) c.traceAt(0x253cb);
    // 2512:02ab  mov edx, dword ptr [ebx + 0x3c]  (32)  [x5781]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x3cu)));
    // 2512:02ae  mov eax, dword ptr [edx + 0x20]  (32)  [x5781]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)));
    // 2512:02b1  mov edx, dword ptr [ebx + 0x44]  (32)  [x5781]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x44u)));
    // 2512:02b4  add eax, dword ptr [edx + 0x20]  (32)  [x5781]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), false));
    // 2512:02b7  mov edx, dword ptr [ebx + 0x4c]  (32)  [x5781]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4cu)));
    // 2512:02ba  add eax, dword ptr [edx + 0x20]  (32)  [x5781]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), false));
    // 2512:02bd  mul dword ptr [0x1104]  (32)  [x5781]
    c.mul32(c.r32(c.dsb + (uint16_t)(0x1104u)));
    // 2512:02c2  add edx, edx  (32)  [x5781]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.dx_.e, true));
    // 2512:02c4  jmp 0x2e1  (32)  [x5781]
    goto L25401;
L253e6:
    if (c.tracing) c.traceAt(0x253e6);
    // 2512:02c6  mov esi, ebp  (32)  [x1653]
    c.si.e = (uint32_t)(c.bp.e);
    // 2512:02c8  mov edx, dword ptr [ebx + ebp*8 + 0x34]  (32)  [x1653]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x34u)));
    // 2512:02cc  mov eax, dword ptr [edx + 0x20]  (32)  [x1653]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)));
    // 2512:02cf  dec ebp  (32)  [x1653]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
L253f0:
    if (c.tracing) c.traceAt(0x253f0);
    // 2512:02d0  mov edx, dword ptr [ebx + ebp*8 + 0x34]  (32)  [x7889]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x34u)));
    // 2512:02d4  add eax, dword ptr [edx + 0x20]  (32)  [x7889]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x20u)), true));
    // 2512:02d7  dec ebp  (32)  [x7889]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2512:02d8  jne 0x2d0  (32)  [x7889]
    if (!c.zf) goto L253f0;
L253fa:
    if (c.tracing) c.traceAt(0x253fa);
    // 2512:02da  mul dword ptr [esi*4 + 0x10ec]  (32)  [x1653]
    c.mul32(c.r32(c.dsb + (uint32_t)(c.si.e * 4 + 0x10ecu)));
L25401:
    if (c.tracing) c.traceAt(0x25401);
    // 2512:02e1  add edx, dword ptr [ebx + 0x28]  (32)  [x34991]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)), false));
    // 2512:02e4  mov dword ptr [ebx + 0x10], edx  (32)  [x34991]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x10u), c.dx_.e);
    // 2512:02e7  mov ebx, dword ptr [ebx + 4]  (32)  [x34991]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2512:02ea  cmp ebx, edi  (32)  [x34991]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2512:02ec  jne 0x252  (32)  [x34991]
    if (!c.zf) goto L25372;
L25412:
    if (c.tracing) c.traceAt(0x25412);
    // 2512:02f2  add edi, 0x40  (32)  [x7400]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x40u, false));
    // 2512:02f5  cmp edi, dword ptr [0x168c]  (32)  [x7400]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x168cu)), true);
    // 2512:02fa  je 0x3e1  (32)  [x7400]
    if (c.zf) goto L25501;
L25420:
    if (c.tracing) c.traceAt(0x25420);
    // 2512:0300  mov dword ptr [0x3bc], edi  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3bcu), c.di.e);
    // 2512:0306  mov esi, dword ptr [0x1694]  (32)  [x7400]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1694u)));
    // 2512:030b  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x30du; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:030d  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:030e  add eax, dword ptr [edi + 0x10]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x10u)), false));
    // 2512:0311  mov dword ptr [edi + 0x10], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.e);
    // 2512:0314  mov dword ptr [0x3d0], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3d0u), c.a.e);
    // 2512:0319  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x31bu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:031b  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:031c  add eax, dword ptr [edi + 0x14]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)), false));
    // 2512:031f  mov dword ptr [edi + 0x14], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.a.e);
    // 2512:0322  mov dword ptr [0x3ed], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3edu), c.a.e);
    // 2512:0327  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x329u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:0329  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:032a  add eax, dword ptr [edi + 0x18]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x18u)), false));
    // 2512:032d  mov dword ptr [edi + 0x18], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x18u), c.a.e);
    // 2512:0330  mov dword ptr [0x40a], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x40au), c.a.e);
    // 2512:0335  mov dword ptr [0x467], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x467u), c.a.e);
    // 2512:033a  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x33cu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:033c  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:033d  add eax, dword ptr [edi + 0x1c]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)), false));
    // 2512:0340  mov dword ptr [edi + 0x1c], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x1cu), c.a.e);
    // 2512:0343  mov dword ptr [0x3d8], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3d8u), c.a.e);
    // 2512:0348  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x34au; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:034a  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:034b  add eax, dword ptr [edi + 0x20]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x20u)), false));
    // 2512:034e  mov dword ptr [edi + 0x20], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x20u), c.a.e);
    // 2512:0351  mov dword ptr [0x3f5], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3f5u), c.a.e);
    // 2512:0356  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x358u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:0358  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:0359  add eax, dword ptr [edi + 0x24]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x24u)), false));
    // 2512:035c  mov dword ptr [edi + 0x24], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.a.e);
    // 2512:035f  mov dword ptr [0x412], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x412u), c.a.e);
    // 2512:0364  mov dword ptr [0x472], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x472u), c.a.e);
    // 2512:0369  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x36bu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:036b  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:036c  add eax, dword ptr [edi + 0x28]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x28u)), false));
    // 2512:036f  mov dword ptr [edi + 0x28], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x28u), c.a.e);
    // 2512:0372  mov dword ptr [0x3e0], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3e0u), c.a.e);
    // 2512:0377  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x379u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:0379  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:037a  add eax, dword ptr [edi + 0x2c]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x2cu)), false));
    // 2512:037d  mov dword ptr [edi + 0x2c], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x2cu), c.a.e);
    // 2512:0380  mov dword ptr [0x3fd], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3fdu), c.a.e);
    // 2512:0385  lodsw ax, word ptr [esi]  (32)  [x7400]
    c.ip = 0x387u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2512:0387  cwde   (32)  [x7400]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2512:0388  add eax, dword ptr [edi + 0x30]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x30u)), false));
    // 2512:038b  mov dword ptr [edi + 0x30], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x30u), c.a.e);
    // 2512:038e  mov dword ptr [0x41a], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x41au), c.a.e);
    // 2512:0393  mov dword ptr [0x47d], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x47du), c.a.e);
    // 2512:0398  lodsd eax, dword ptr [esi]  (32)  [x7400]
    c.ip = 0x399u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2512:0399  add eax, dword ptr [edi + 0x34]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x34u)), false));
    // 2512:039c  mov dword ptr [edi + 0x34], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x34u), c.a.e);
    // 2512:039f  mov dword ptr [0x3ca], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3cau), c.a.e);
    // 2512:03a4  lodsd eax, dword ptr [esi]  (32)  [x7400]
    c.ip = 0x3a5u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2512:03a5  add eax, dword ptr [edi + 0x38]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x38u)), false));
    // 2512:03a8  mov dword ptr [edi + 0x38], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x38u), c.a.e);
    // 2512:03ab  mov dword ptr [0x3e7], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x3e7u), c.a.e);
    // 2512:03b0  lodsd eax, dword ptr [esi]  (32)  [x7400]
    c.ip = 0x3b1u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2512:03b1  add eax, dword ptr [edi + 0x3c]  (32)  [x7400]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x3cu)), false));
    // 2512:03b4  mov dword ptr [edi + 0x3c], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x3cu), c.a.e);
    // 2512:03b7  mov dword ptr [0x404], eax  (32)  [x7400]
    c.w32(c.dsb + (uint32_t)(0x404u), c.a.e);
    // 2512:03bc  mov dword ptr [0x1694], esi  (32)  [x7400]
    c.w32(c.dsb + (uint16_t)(0x1694u), c.si.e);
    // 2512:03c1  cmp word ptr [0x16a6], 1  (32)  [x7400]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x16a6u)), 0x1u, true);
    // 2512:03c8  ja 0x2f2  (32)  [x7400]
    if ((!c.cf && !c.zf)) goto L25412;
L254ee:
    if (c.tracing) c.traceAt(0x254ee);
    // 2512:03ce  mov edi, dword ptr [edi]  (32)  [x7400]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2512:03d0  cmp edi, dword ptr [0x3bc]  (32)  [x7400]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3bcu)), true);
    // 2512:03d6  je 0x2f2  (32)  [x7400]
    if (c.zf) goto L25412;
L254fc:
    if (c.tracing) c.traceAt(0x254fc);
    // 2512:03dc  jmp 0x1b0  (32)  [x4135]
    goto L252d0;
L25501:
    if (c.tracing) c.traceAt(0x25501);
    // 2512:03e1  dec word ptr [0x16a6]  (32)  [x200]
    c.w16(c.dsb + (uint16_t)(0x16a6u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x16a6u)), true));
    // 2512:03e7  jne 0x59  (32)  [x200]
    if (!c.zf) goto L25179;
L2550d:
    if (c.tracing) c.traceAt(0x2550d);
    // 2512:03ed  mov dword ptr [0xa4c], 0xa50  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0xa4cu), 0xa50u);
    // 2512:03f6  mov dword ptr [0xa54], 0xa40  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0xa54u), 0xa40u);
    // 2512:03ff  mov dword ptr [0xa68], 0xa70  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0xa68u), 0xa70u);
    // 2512:0408  mov dword ptr [0xa70], 0xa64  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0xa70u), 0xa64u);
    // 2512:0411  mov esi, 0x121a60  (32)  [x200]
    c.si.e = (uint32_t)((c.r32(0x25532)));
L25536:
    if (c.tracing) c.traceAt(0x25536);
    // 2512:0416  mov ebx, dword ptr [esi]  (32)  [x7400]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2512:0418  cmp ebx, esi  (32)  [x7400]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2512:041a  je 0x570  (32)  [x7400]
    if (c.zf) goto L25690;
L25540:
    if (c.tracing) c.traceAt(0x25540);
    // 2512:0420  mov bp, word ptr [ebx + 0x12]  (32)  [x67189]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
    // 2512:0424  cmp bp, 0xc8  (32)  [x67189]
    c.sub<16>(c.bp.x, 0xc8u, true);
    // 2512:0429  jge 0x566  (32)  [x67189]
    if ((c.sf == c.of)) goto L25686;
L2554f:
    if (c.tracing) c.traceAt(0x2554f);
    // 2512:042f  neg bp  (32)  [x65400]
    c.bp.x = (uint16_t)(c.neg<16>(c.bp.x, true));
    // 2512:0432  mov word ptr [0x16a8], bp  (32)  [x65400]
    c.w16(c.dsb + (uint16_t)(0x16a8u), c.bp.x);
    // 2512:0438  jl 0x4c0  (32)  [x65400]
    if ((c.sf != c.of)) goto L255e0;
L2555e:
    if (c.tracing) c.traceAt(0x2555e);
    // 2512:043e  push esi  (32)  [x297]
    c.push32(c.si.e);
    // 2512:043f  mov esi, dword ptr [ebx + 0x28]  (32)  [x297]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
L25562:
    if (c.tracing) c.traceAt(0x25562);
    // 2512:0442  mov ecx, dword ptr [ebx + esi*8 + 0x28]  (32)  [x821]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u)));
    // 2512:0446  mov ax, word ptr [ecx + 0x12]  (32)  [x821]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)));
    // 2512:044a  or ax, ax  (32)  [x821]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2512:044d  jle 0x4b7  (32)  [x821]
    if ((c.zf || c.sf != c.of)) goto L255d7;
L2556f:
    if (c.tracing) c.traceAt(0x2556f);
    // 2512:044f  mov edi, dword ptr [ebx + esi*8 + 0x24]  (32)  [x377]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)));
    // 2512:0453  mov word ptr [edi + 0x10], ax  (32)  [x377]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.x);
    // 2512:0457  mov byte ptr [edi + 0x12], 0  (32)  [x377]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x0u);
    // 2512:045b  mov dword ptr [edi + 0x14], ecx  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.c.e);
    // 2512:045e  mov bp, word ptr [0x16a8]  (32)  [x377]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16a8u)));
    // 2512:0464  add bp, ax  (32)  [x377]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 2512:0467  push esi  (32)  [x377]
    c.push32(c.si.e);
    // 2512:0468  movzx esi, bp  (32)  [x377]
    c.si.e = (uint32_t)(c.bp.x);
    // 2512:046b  mov ax, word ptr [ecx + 0x10]  (32)  [x377]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2512:046f  sub ax, word ptr [ebx + 0x10]  (32)  [x377]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2512:0473  shl eax, 0x10  (32)  [x377]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2512:0476  cdq   (32)  [x377]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2512:0477  idiv esi  (32)  [x377]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x477u); }   // #DE: int 0, then again
    // 2512:0479  mov dword ptr [edi + 0xc], eax  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2512:047c  pop esi  (32)  [x377]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2512:047d  mov bp, word ptr [0x16a8]  (32)  [x377]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16a8u)));
    // 2512:0483  movzx ecx, bp  (32)  [x377]
    c.c.e = (uint32_t)(c.bp.x);
    // 2512:0486  add ecx, ecx  (32)  [x377]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.c.e, false));
    // 2512:0488  inc ecx  (32)  [x377]
    c.c.e = (uint32_t)(c.inc<32>(c.c.e, false));
    // 2512:0489  imul eax, ecx  (32)  [x377]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, c.c.e));
    // 2512:048c  mov dx, word ptr [ebx + 0x10]  (32)  [x377]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2512:0490  shl edx, 0x10  (32)  [x377]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2512:0493  mov dx, 0x8000  (32)  [x377]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2512:0497  sar eax, 1  (32)  [x377]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2512:0499  add eax, edx  (32)  [x377]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2512:049b  mov dword ptr [edi + 8], eax  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2512:049e  mov ecx, 0xa64  (32)  [x377]
    c.c.e = (uint32_t)(0xa64u);
L255c3:
    if (c.tracing) c.traceAt(0x255c3);
    // 2512:04a3  mov ecx, dword ptr [ecx + 4]  (32)  [x1894]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2512:04a6  cmp eax, dword ptr [ecx + 8]  (32)  [x1894]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)), true);
    // 2512:04a9  jg 0x4a3  (32)  [x1894]
    if ((!c.zf && c.sf == c.of)) goto L255c3;
L255cb:
    if (c.tracing) c.traceAt(0x255cb);
    // 2512:04ab  mov edx, dword ptr [ecx]  (32)  [x377]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2512:04ad  mov dword ptr [edx + 4], edi  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.di.e);
    // 2512:04b0  mov dword ptr [edi], edx  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.di.e), c.dx_.e);
    // 2512:04b2  mov dword ptr [edi + 4], ecx  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2512:04b5  mov dword ptr [ecx], edi  (32)  [x377]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
L255d7:
    if (c.tracing) c.traceAt(0x255d7);
    // 2512:04b7  dec esi  (32)  [x821]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2512:04b8  jne 0x442  (32)  [x821]
    if (!c.zf) goto L25562;
L255da:
    if (c.tracing) c.traceAt(0x255da);
    // 2512:04ba  pop esi  (32)  [x297]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2512:04bb  jmp 0x566  (32)  [x297]
    goto L25686;
L255e0:
    if (c.tracing) c.traceAt(0x255e0);
    // 2512:04c0  mov byte ptr [0x16d0], 1  (32)  [x65103]
    c.w8(c.dsb + (uint16_t)(0x16d0u), 0x1u);
    // 2512:04c6  push esi  (32)  [x65103]
    c.push32(c.si.e);
    // 2512:04c7  mov esi, dword ptr [ebx + 0x28]  (32)  [x65103]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x28u)));
L255ea:
    if (c.tracing) c.traceAt(0x255ea);
    // 2512:04ca  mov ecx, dword ptr [ebx + esi*8 + 0x28]  (32)  [x187373]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x28u)));
    // 2512:04ce  mov bp, word ptr [0x16a8]  (32)  [x187373]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16a8u)));
    // 2512:04d4  add bp, word ptr [ecx + 0x12]  (32)  [x187373]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true));
    // 2512:04d8  jl 0x51b  (32)  [x187373]
    if ((c.sf != c.of)) goto L2563b;
L255fa:
    if (c.tracing) c.traceAt(0x255fa);
    // 2512:04da  mov edi, dword ptr [ebx + esi*8 + 0x24]  (32)  [x108106]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x24u)));
    // 2512:04de  je 0x515  (32)  [x108106]
    if (c.zf) goto L25635;
L25600:
    if (c.tracing) c.traceAt(0x25600);
    // 2512:04e0  mov word ptr [edi + 0x10], bp  (32)  [x80848]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.bp.x);
    // 2512:04e4  mov byte ptr [edi + 0x12], 1  (32)  [x80848]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x1u);
    // 2512:04e8  mov dword ptr [edi + 0x14], ecx  (32)  [x80848]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.c.e);
    // 2512:04eb  push esi  (32)  [x80848]
    c.push32(c.si.e);
    // 2512:04ec  movzx esi, bp  (32)  [x80848]
    c.si.e = (uint32_t)(c.bp.x);
    // 2512:04ef  mov ax, word ptr [ecx + 0x10]  (32)  [x80848]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2512:04f3  sub ax, word ptr [ebx + 0x10]  (32)  [x80848]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2512:04f7  shl eax, 0x10  (32)  [x80848]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2512:04fa  cdq   (32)  [x80848]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2512:04fb  idiv esi  (32)  [x80848]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x4fbu); }   // #DE: int 0, then again
    // 2512:04fd  mov dword ptr [edi + 0xc], eax  (32)  [x80848]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2512:0500  pop esi  (32)  [x80848]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2512:0501  mov dx, word ptr [ebx + 0x10]  (32)  [x80848]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2512:0505  shl edx, 0x10  (32)  [x80848]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2512:0508  mov dx, 0x8000  (32)  [x80848]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2512:050c  sar eax, 1  (32)  [x80848]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2512:050e  add eax, edx  (32)  [x80848]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2512:0510  mov dword ptr [edi + 8], eax  (32)  [x80848]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2512:0513  jmp 0x521  (32)  [x80848]
    goto L25641;
L25635:
    if (c.tracing) c.traceAt(0x25635);
    // 2512:0515  mov byte ptr [edi + 0x12], 2  (32)  [x27258]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x12u), 0x2u);
    // 2512:0519  jmp 0x521  (32)  [x27258]
    goto L25641;
L2563b:
    if (c.tracing) c.traceAt(0x2563b);
    // 2512:051b  mov byte ptr [0x16d0], 0  (32)  [x79267]
    c.w8(c.dsb + (uint16_t)(0x16d0u), 0x0u);
L25641:
    if (c.tracing) c.traceAt(0x25641);
    // 2512:0521  dec esi  (32)  [x187373]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2512:0522  jne 0x4ca  (32)  [x187373]
    if (!c.zf) goto L255ea;
L25644:
    if (c.tracing) c.traceAt(0x25644);
    // 2512:0524  pop esi  (32)  [x65103]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2512:0525  cmp byte ptr [0x16d0], 0  (32)  [x65103]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x16d0u)), 0x0u, true);
    // 2512:052b  je 0x566  (32)  [x65103]
    if (c.zf) goto L25686;
L2564d:
    if (c.tracing) c.traceAt(0x2564d);
    // 2512:052d  mov ecx, 0xa40  (32)  [x12648]
    c.c.e = (uint32_t)(0xa40u);
    // 2512:0532  mov dx, word ptr [ebx + 0x12]  (32)  [x12648]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
L25656:
    if (c.tracing) c.traceAt(0x25656);
    // 2512:0536  mov ecx, dword ptr [ecx + 0xc]  (32)  [x167762]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2512:0539  cmp dx, word ptr [ecx + 0x12]  (32)  [x167762]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2512:053d  jg 0x536  (32)  [x167762]
    if ((!c.zf && c.sf == c.of)) goto L25656;
L2565f:
    if (c.tracing) c.traceAt(0x2565f);
    // 2512:053f  jl 0x557  (32)  [x12648]
    if ((c.sf != c.of)) goto L25677;
L25661:
    if (c.tracing) c.traceAt(0x25661);
    // 2512:0541  mov di, word ptr [ebx + 0x10]  (32)  [x5185]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2512:0545  mov ecx, dword ptr [ecx + 4]  (32)  [x5185]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
L25668:
    if (c.tracing) c.traceAt(0x25668);
    // 2512:0548  mov ecx, dword ptr [ecx + 0xc]  (32)  [x10385]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2512:054b  cmp dx, word ptr [ecx + 0x12]  (32)  [x10385]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2512:054f  jl 0x557  (32)  [x10385]
    if ((c.sf != c.of)) goto L25677;
L25671:
    if (c.tracing) c.traceAt(0x25671);
    // 2512:0551  cmp di, word ptr [ecx + 0x10]  (32)  [x8222]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)), true);
    // 2512:0555  jg 0x548  (32)  [x8222]
    if ((!c.zf && c.sf == c.of)) goto L25668;
L25677:
    if (c.tracing) c.traceAt(0x25677);
    // 2512:0557  mov edx, dword ptr [ecx + 4]  (32)  [x12648]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2512:055a  mov dword ptr [edx + 0xc], ebx  (32)  [x12648]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0xcu), c.b.e);
    // 2512:055d  mov dword ptr [ebx + 4], edx  (32)  [x12648]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.dx_.e);
    // 2512:0560  mov dword ptr [ebx + 0xc], ecx  (32)  [x12648]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0xcu), c.c.e);
    // 2512:0563  mov dword ptr [ecx + 4], ebx  (32)  [x12648]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.b.e);
L25686:
    if (c.tracing) c.traceAt(0x25686);
    // 2512:0566  mov ebx, dword ptr [ebx]  (32)  [x67189]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2512:0568  cmp ebx, esi  (32)  [x67189]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2512:056a  jne 0x420  (32)  [x67189]
    if (!c.zf) goto L25540;
L25690:
    if (c.tracing) c.traceAt(0x25690);
    // 2512:0570  add esi, 0x40  (32)  [x7400]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x40u, false));
    // 2512:0573  cmp esi, dword ptr [0x168c]  (32)  [x7400]
    c.sub<32>(c.si.e, c.r32(c.dsb + (uint16_t)(0x168cu)), true);
    // 2512:0578  jne 0x416  (32)  [x7400]
    if (!c.zf) goto L25536;
L2569e:
    if (c.tracing) c.traceAt(0x2569e);
    // 2512:057e  mov word ptr [0x16a4], 0  (32)  [x200]
    c.w16(c.dsb + (uint16_t)(0x16a4u), 0x0u);
    // 2512:0586  mov eax, dword ptr [0xa4c]  (32)  [x200]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa4cu)));
    // 2512:058a  mov dword ptr [0x16a0], eax  (32)  [x200]
    c.w32(c.dsb + (uint16_t)(0x16a0u), c.a.e);
    // 2512:058e  mov ax, word ptr [0x16ac]  (32)  [x200]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16acu)));
L256b3:
    if (c.tracing) c.traceAt(0x256b3);
    // 2512:0593  mov es, ax  (32)  [x40000]
    c.loadEs(c.a.x);
    // 2512:0596  mov ebx, dword ptr [0xa68]  (32)  [x40000]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa68u)));
    // 2512:059b  cmp ebx, 0xa70  (32)  [x40000]
    c.sub<32>(c.b.e, 0xa70u, true);
    // 2512:05a1  je 0x6ff  (32)  [x40000]
    if (c.zf) goto L2581f;
L256c7:
    if (c.tracing) c.traceAt(0x256c7);
    // 2512:05a7  mov esi, dword ptr [ebx + 0x20]  (32)  [x627564]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)));
    // 2512:05aa  mov eax, dword ptr [0xa84]  (32)  [x627564]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa84u)));
    // 2512:05ae  mov dword ptr [0x169c], eax  (32)  [x627564]
    c.w32(c.dsb + (uint16_t)(0x169cu), c.a.e);
    // 2512:05b2  mov ax, word ptr [ebx + 0xa]  (32)  [x627564]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0xau)));
    // 2512:05b6  or ax, ax  (32)  [x627564]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2512:05b9  jns 0x5bd  (32)  [x627564]
    if (!c.sf) goto L256dd;
L256db:
    if (c.tracing) c.traceAt(0x256db);
    // 2512:05bb  xor eax, eax  (32)  [x19763]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L256dd:
    if (c.tracing) c.traceAt(0x256dd);
    // 2512:05bd  cmp ax, 0x140  (32)  [x627564]
    c.sub<16>(c.a.x, 0x140u, true);
    // 2512:05c1  jbe 0x5c7  (32)  [x627564]
    if ((c.cf || c.zf)) goto L256e7;
L256e3:
    if (c.tracing) c.traceAt(0x256e3);
    // 2512:05c3  mov ax, 0x140  (32)  [x23079]
    c.a.x = (uint16_t)(0x140u);
L256e7:
    if (c.tracing) c.traceAt(0x256e7);
    // 2512:05c7  mov word ptr [0x16ce], ax  (32)  [x627564]
    c.w16(c.dsb + (uint16_t)(0x16ceu), c.a.x);
L256ec:
    if (c.tracing) c.traceAt(0x256ec);
    // 2512:05cc  mov ecx, dword ptr [ebx + esi*4 + 0x20]  (32)  [x881390]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 4 + 0x20u)));
    // 2512:05d0  xor byte ptr [ecx + 0x1b], 1  (32)  [x881390]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x1bu), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x1bu))) ^ (0x1u), true));
    // 2512:05d4  je 0x604  (32)  [x881390]
    if (c.zf) goto L25724;
L256f6:
    if (c.tracing) c.traceAt(0x256f6);
    // 2512:05d6  mov eax, dword ptr [ecx + 0x10]  (32)  [x440695]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2512:05d9  mov edx, 0xa7c  (32)  [x440695]
    c.dx_.e = (uint32_t)(0xa7cu);
L256fe:
    if (c.tracing) c.traceAt(0x256fe);
    // 2512:05de  mov edx, dword ptr [edx + 8]  (32)  [x586074]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)));
    // 2512:05e1  cmp eax, dword ptr [edx + 0x10]  (32)  [x586074]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x10u)), true);
    // 2512:05e4  jg 0x5de  (32)  [x586074]
    if ((!c.zf && c.sf == c.of)) goto L256fe;
L25706:
    if (c.tracing) c.traceAt(0x25706);
    // 2512:05e6  mov eax, dword ptr [edx]  (32)  [x440695]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2512:05e8  mov dword ptr [eax + 8], ecx  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.c.e);
    // 2512:05eb  mov dword ptr [ecx], eax  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2512:05ed  mov dword ptr [ecx + 8], edx  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.dx_.e);
    // 2512:05f0  mov dword ptr [edx], ecx  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
    // 2512:05f2  lea eax, [ecx + 0x1c]  (32)  [x440695]
    c.a.e = (uint32_t)((uint32_t)(c.c.e + 0x1cu));
    // 2512:05f5  mov dword ptr [ecx + 0x20], eax  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.a.e);
    // 2512:05f8  mov dword ptr [ecx + 0x1c], 0  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x1cu), 0x0u);
    // 2512:05ff  jmp 0x63c  (32)  [x440695]
    goto L2575c;
L25724:
    if (c.tracing) c.traceAt(0x25724);
    // 2512:0604  mov eax, dword ptr [ecx]  (32)  [x440695]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2512:0606  mov edx, dword ptr [ecx + 8]  (32)  [x440695]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2512:0609  mov dword ptr [eax + 8], edx  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.dx_.e);
    // 2512:060c  mov dword ptr [edx], eax  (32)  [x440695]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2512:060e  cmp dword ptr [ecx + 0x1c], 0  (32)  [x440695]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)), 0x0u, true);
    // 2512:0612  je 0x63c  (32)  [x440695]
    if (c.zf) goto L2575c;
L25734:
    if (c.tracing) c.traceAt(0x25734);
    // 2512:0614  cmp ecx, dword ptr [0x169c]  (32)  [x391274]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0x169cu)), true);
    // 2512:0619  jne 0x627  (32)  [x391274]
    if (!c.zf) goto L25747;
L2573b:
    if (c.tracing) c.traceAt(0x2573b);
    // 2512:061b  mov edx, dword ptr [ecx + 0x20]  (32)  [x328232]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:061e  mov ax, word ptr [0x16ce]  (32)  [x328232]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16ceu)));
    // 2512:0623  mov word ptr [edx + 6], ax  (32)  [x328232]
    c.w16(c.dsb + (uint32_t)(c.dx_.e + 0x6u), c.a.x);
L25747:
    if (c.tracing) c.traceAt(0x25747);
    // 2512:0627  call 0x7b0  (32)  [x391274]
    c.push32(0x62cu); code_16(c, 0x258d0u); if (c.ip != 0x62cu) c.badReturn(0x25747);
L2574c:
    if (c.tracing) c.traceAt(0x2574c);
    // 2512:062c  mov eax, dword ptr [0xab0]  (32)  [x391274]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xab0u)));
    // 2512:0630  mov edx, dword ptr [ecx + 0x20]  (32)  [x391274]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:0633  mov dword ptr [edx], eax  (32)  [x391274]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2512:0635  mov eax, dword ptr [ecx + 0x1c]  (32)  [x391274]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2512:0638  mov dword ptr [0xab0], eax  (32)  [x391274]
    c.w32(c.dsb + (uint16_t)(0xab0u), c.a.e);
L2575c:
    if (c.tracing) c.traceAt(0x2575c);
    // 2512:063c  dec esi  (32)  [x881390]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2512:063d  jne 0x5cc  (32)  [x881390]
    if (!c.zf) goto L256ec;
L2575f:
    if (c.tracing) c.traceAt(0x2575f);
    // 2512:063f  mov ecx, dword ptr [0x169c]  (32)  [x627564]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x169cu)));
    // 2512:0644  cmp ecx, dword ptr [0xa84]  (32)  [x627564]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xa84u)), true);
    // 2512:0649  je 0x674  (32)  [x627564]
    if (c.zf) goto L25794;
L2576b:
    if (c.tracing) c.traceAt(0x2576b);
    // 2512:064b  mov dx, word ptr [0x16ce]  (32)  [x493985]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16ceu)));
    // 2512:0651  mov eax, dword ptr [ecx + 0x20]  (32)  [x493985]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:0654  mov word ptr [eax + 6], dx  (32)  [x493985]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), c.dx_.x);
    // 2512:0658  mov ecx, dword ptr [0xa84]  (32)  [x493985]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa84u)));
    // 2512:065d  mov eax, dword ptr [0xab0]  (32)  [x493985]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xab0u)));
    // 2512:0661  mov word ptr [eax + 4], dx  (32)  [x493985]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x4u), c.dx_.x);
    // 2512:0665  mov edx, dword ptr [eax]  (32)  [x493985]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e)));
    // 2512:0667  mov dword ptr [0xab0], edx  (32)  [x493985]
    c.w32(c.dsb + (uint16_t)(0xab0u), c.dx_.e);
    // 2512:066c  mov edx, dword ptr [ecx + 0x20]  (32)  [x493985]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:066f  mov dword ptr [ecx + 0x20], eax  (32)  [x493985]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.a.e);
    // 2512:0672  mov dword ptr [edx], eax  (32)  [x493985]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
L25794:
    if (c.tracing) c.traceAt(0x25794);
    // 2512:0674  dec word ptr [ebx + 0x10]  (32)  [x627564]
    c.w16(c.dsb + (uint32_t)(c.b.e + 0x10u), c.dec<16>(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), true));
    // 2512:0678  jne 0x6b2  (32)  [x627564]
    if (!c.zf) goto L257d2;
L2579a:
    if (c.tracing) c.traceAt(0x2579a);
    // 2512:067a  mov eax, dword ptr [ebx + 0x14]  (32)  [x52550]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 2512:067d  mov esi, dword ptr [eax + 0x28]  (32)  [x52550]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
L257a0:
    if (c.tracing) c.traceAt(0x257a0);
    // 2512:0680  mov ecx, dword ptr [eax + esi*8 + 0x24]  (32)  [x158331]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x24u)));
    // 2512:0684  xor byte ptr [ecx + 0x12], 1  (32)  [x158331]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x12u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x12u))) ^ (0x1u), true));
    // 2512:0688  je 0x692  (32)  [x158331]
    if (c.zf) goto L257b2;
L257aa:
    if (c.tracing) c.traceAt(0x257aa);
    // 2512:068a  mov word ptr [ecx + 0x10], 0  (32)  [x98444]
    c.w16(c.dsb + (uint32_t)(c.c.e + 0x10u), 0x0u);
    // 2512:0690  jmp 0x6ab  (32)  [x98444]
    goto L257cb;
L257b2:
    if (c.tracing) c.traceAt(0x257b2);
    // 2512:0692  mov edx, dword ptr [ecx + 8]  (32)  [x59887]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2512:0695  mov edi, ebx  (32)  [x59887]
    c.di.e = (uint32_t)(c.b.e);
L257b7:
    if (c.tracing) c.traceAt(0x257b7);
    // 2512:0697  mov edi, dword ptr [edi]  (32)  [x80338]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2512:0699  cmp edx, dword ptr [edi + 8]  (32)  [x80338]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2512:069c  jle 0x697  (32)  [x80338]
    if ((c.zf || c.sf != c.of)) goto L257b7;
L257be:
    if (c.tracing) c.traceAt(0x257be);
    // 2512:069e  mov edx, dword ptr [edi + 4]  (32)  [x59887]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2512:06a1  mov dword ptr [edi + 4], ecx  (32)  [x59887]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2512:06a4  mov dword ptr [ecx], edi  (32)  [x59887]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2512:06a6  mov dword ptr [ecx + 4], edx  (32)  [x59887]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2512:06a9  mov dword ptr [edx], ecx  (32)  [x59887]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L257cb:
    if (c.tracing) c.traceAt(0x257cb);
    // 2512:06ab  dec esi  (32)  [x158331]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2512:06ac  jne 0x680  (32)  [x158331]
    if (!c.zf) goto L257a0;
L257ce:
    if (c.tracing) c.traceAt(0x257ce);
    // 2512:06ae  mov al, 0xff  (32)  [x52550]
    c.a.l = (uint8_t)(0xffu);
    // 2512:06b0  or al, al  (32)  [x52550]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
L257d2:
    if (c.tracing) c.traceAt(0x257d2);
    // 2512:06b2  jns 0x6c0  (32)  [x627564]
    if (!c.sf) goto L257e0;
L257d4:
    if (c.tracing) c.traceAt(0x257d4);
    // 2512:06b4  mov eax, dword ptr [ebx]  (32)  [x79424]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2512:06b6  mov ecx, dword ptr [ebx + 4]  (32)  [x79424]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2512:06b9  mov dword ptr [eax + 4], ecx  (32)  [x79424]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2512:06bc  mov dword ptr [ecx], eax  (32)  [x79424]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2512:06be  jmp 0x6f0  (32)  [x79424]
    goto L25810;
L257e0:
    if (c.tracing) c.traceAt(0x257e0);
    // 2512:06c0  mov eax, dword ptr [ebx + 8]  (32)  [x548140]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 2512:06c3  add eax, dword ptr [ebx + 0xc]  (32)  [x548140]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)), false));
    // 2512:06c6  mov dword ptr [ebx + 8], eax  (32)  [x548140]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x8u), c.a.e);
    // 2512:06c9  mov edx, dword ptr [ebx]  (32)  [x548140]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2512:06cb  cmp eax, dword ptr [edx + 8]  (32)  [x548140]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2512:06ce  jg 0x6f0  (32)  [x548140]
    if ((!c.zf && c.sf == c.of)) goto L25810;
L257f0:
    if (c.tracing) c.traceAt(0x257f0);
    // 2512:06d0  mov edx, dword ptr [edx]  (32)  [x42447]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2512:06d2  cmp eax, dword ptr [edx + 8]  (32)  [x42447]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2512:06d5  jle 0x6d0  (32)  [x42447]
    if ((c.zf || c.sf != c.of)) goto L257f0;
L257f7:
    if (c.tracing) c.traceAt(0x257f7);
    // 2512:06d7  mov esi, dword ptr [edx + 4]  (32)  [x33691]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 2512:06da  mov eax, dword ptr [ebx]  (32)  [x33691]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2512:06dc  mov ecx, dword ptr [ebx + 4]  (32)  [x33691]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2512:06df  mov dword ptr [eax + 4], ecx  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2512:06e2  mov dword ptr [ecx], eax  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2512:06e4  mov dword ptr [edx + 4], ebx  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.b.e);
    // 2512:06e7  mov dword ptr [ebx], edx  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2512:06e9  mov dword ptr [ebx + 4], esi  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.si.e);
    // 2512:06ec  mov dword ptr [esi], ebx  (32)  [x33691]
    c.w32(c.dsb + (uint32_t)(c.si.e), c.b.e);
    // 2512:06ee  mov ebx, eax  (32)  [x33691]
    c.b.e = (uint32_t)(c.a.e);
L25810:
    if (c.tracing) c.traceAt(0x25810);
    // 2512:06f0  mov ebx, dword ptr [ebx + 4]  (32)  [x627564]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2512:06f3  cmp ebx, 0xa70  (32)  [x627564]
    c.sub<32>(c.b.e, 0xa70u, true);
    // 2512:06f9  jne 0x5a7  (32)  [x627564]
    if (!c.zf) goto L256c7;
L2581f:
    if (c.tracing) c.traceAt(0x2581f);
    // 2512:06ff  mov ecx, 0xa8c  (32)  [x40000]
    c.c.e = (uint32_t)(0xa8cu);
    // 2512:0704  mov eax, dword ptr [0xaac]  (32)  [x40000]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaacu)));
    // 2512:0708  mov word ptr [eax + 6], 0x140  (32)  [x40000]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), 0x140u);
    // 2512:070e  call 0x7b0  (32)  [x40000]
    c.push32(0x713u); code_16(c, 0x258d0u); if (c.ip != 0x713u) c.badReturn(0x2582e);
L25833:
    if (c.tracing) c.traceAt(0x25833);
    // 2512:0713  cmp dword ptr [0xaac], 0xab4  (32)  [x40000]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xaacu)), 0xab4u, true);
    // 2512:071c  je 0x73a  (32)  [x40000]
    if (c.zf) goto L2585a;
L2583e:
    if (c.tracing) c.traceAt(0x2583e);
    // 2512:071e  mov eax, dword ptr [0xab0]  (32)  [x26893]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xab0u)));
    // 2512:0722  mov edx, dword ptr [0xaac]  (32)  [x26893]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xaacu)));
    // 2512:0727  mov dword ptr [edx], eax  (32)  [x26893]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2512:0729  mov eax, dword ptr [0xab4]  (32)  [x26893]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xab4u)));
    // 2512:072d  mov dword ptr [0xab0], eax  (32)  [x26893]
    c.w32(c.dsb + (uint16_t)(0xab0u), c.a.e);
    // 2512:0731  mov dword ptr [0xaac], 0xab4  (32)  [x26893]
    c.w32(c.dsb + (uint16_t)(0xaacu), 0xab4u);
L2585a:
    if (c.tracing) c.traceAt(0x2585a);
    // 2512:073a  inc word ptr [0x16a4]  (32)  [x40000]
    c.w16(c.dsb + (uint16_t)(0x16a4u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x16a4u)), false));
    // 2512:0740  mov bx, word ptr [0x16a4]  (32)  [x40000]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x16a4u)));
    // 2512:0746  cmp bx, 0xc8  (32)  [x40000]
    c.sub<16>(c.b.x, 0xc8u, true);
    // 2512:074b  je 0x79c  (32)  [x40000]
    if (c.zf) goto L258bc;
L2586d:
    if (c.tracing) c.traceAt(0x2586d);
    // 2512:074d  mov eax, dword ptr [0x16a0]  (32)  [x39800]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x16a0u)));
    // 2512:0751  cmp word ptr [eax + 0x12], bx  (32)  [x39800]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2512:0755  jne 0x790  (32)  [x39800]
    if (!c.zf) goto L258b0;
L25877:
    if (c.tracing) c.traceAt(0x25877);
    // 2512:0757  mov esi, dword ptr [eax + 0x28]  (32)  [x12648]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
L2587a:
    if (c.tracing) c.traceAt(0x2587a);
    // 2512:075a  mov ecx, dword ptr [eax + esi*8 + 0x24]  (32)  [x29297]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x24u)));
    // 2512:075e  xor byte ptr [ecx + 0x12], 1  (32)  [x29297]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x12u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x12u))) ^ (0x1u), true));
    // 2512:0762  jne 0x780  (32)  [x29297]
    if (!c.zf) goto L258a0;
L25884:
    if (c.tracing) c.traceAt(0x25884);
    // 2512:0764  mov edx, dword ptr [ecx + 8]  (32)  [x20975]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2512:0767  mov edi, 0xa70  (32)  [x20975]
    c.di.e = (uint32_t)(0xa70u);
L2588c:
    if (c.tracing) c.traceAt(0x2588c);
    // 2512:076c  mov edi, dword ptr [edi]  (32)  [x275775]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2512:076e  cmp edx, dword ptr [edi + 8]  (32)  [x275775]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2512:0771  jle 0x76c  (32)  [x275775]
    if ((c.zf || c.sf != c.of)) goto L2588c;
L25893:
    if (c.tracing) c.traceAt(0x25893);
    // 2512:0773  mov edx, dword ptr [edi + 4]  (32)  [x20975]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2512:0776  mov dword ptr [edi + 4], ecx  (32)  [x20975]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2512:0779  mov dword ptr [ecx], edi  (32)  [x20975]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2512:077b  mov dword ptr [ecx + 4], edx  (32)  [x20975]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2512:077e  mov dword ptr [edx], ecx  (32)  [x20975]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L258a0:
    if (c.tracing) c.traceAt(0x258a0);
    // 2512:0780  dec esi  (32)  [x29297]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2512:0781  jne 0x75a  (32)  [x29297]
    if (!c.zf) goto L2587a;
L258a3:
    if (c.tracing) c.traceAt(0x258a3);
    // 2512:0783  mov eax, dword ptr [eax + 0xc]  (32)  [x12648]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2512:0786  cmp word ptr [eax + 0x12], bx  (32)  [x12648]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2512:078a  je 0x757  (32)  [x12648]
    if (c.zf) goto L25877;
L258ac:
    if (c.tracing) c.traceAt(0x258ac);
    // 2512:078c  mov dword ptr [0x16a0], eax  (32)  [x7463]
    c.w32(c.dsb + (uint16_t)(0x16a0u), c.a.e);
L258b0:
    if (c.tracing) c.traceAt(0x258b0);
    // 2512:0790  mov ax, es  (32)  [x39800]
    c.a.x = (uint16_t)(c.es);
    // 2512:0793  add ax, 0x14  (32)  [x39800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
    // 2512:0797  jmp 0x593  (32)  [x39800]
    goto L256b3;
L258bc:
    if (c.tracing) c.traceAt(0x258bc);
    // 2512:079c  jmp 0x20  (32)  [x200]
    goto L25140;
L258c1:
    if (c.tracing) c.traceAt(0x258c1);
    // 2512:07a1  xor ax, ax  (32)  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 2512:07a4  mov bx, 2  (32)  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 2512:07a8  int 0xfb  (32)  [x1]
    c.ip = 0x7aau; c.d32 = true; c.intr(0xfb, 0x7aau);
L258ca:
    if (c.tracing) c.traceAt(0x258ca);
    // 2512:07aa  mov ax, 0x4c00  (32)  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 2512:07ae  int 0x21  (32)  [x1]
    c.ip = 0x7b0u; c.d32 = true; c.intr(0x21, 0x7b0u);
L258d0:
    if (c.tracing) c.traceAt(0x258d0);
    // 2512:07b0  pushal   (32)  [x431274]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 2512:07b1  mov esi, dword ptr [ecx + 0x1c]  (32)  [x431274]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2512:07b4  mov ebp, dword ptr [ecx + 0x20]  (32)  [x431274]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2512:07b7  mov eax, dword ptr [ecx + 0x14]  (32)  [x431274]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x14u)));
    // 2512:07ba  cmp ecx, 0xa8c  (32)  [x431274]
    c.sub<32>(c.c.e, 0xa8cu, true);
    // 2512:07c0  jne 0x7db  (32)  [x431274]
    if (!c.zf) goto L258fb;
L258e2:
    if (c.tracing) c.traceAt(0x258e2);
    // 2512:07c2  movzx eax, word ptr [0x16a4]  (32)  [x40000]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0x16a4u)));
    // 2512:07c8  add eax, dword ptr [0x1680]  (32)  [x40000]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1680u)), true));
    // 2512:07cd  movzx eax, byte ptr [eax + 0x18c5]  (32)  [x40000]
    c.a.e = (uint32_t)(c.r8(c.dsb + (uint32_t)(c.a.e + 0x18c5u)));
    // 2512:07d4  mov eax, dword ptr [eax*4 + 0x1280]  (32)  [x40000]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + 0x1280u)));
L258fb:
    if (c.tracing) c.traceAt(0x258fb);
    // 2512:07db  xor edi, edi  (32)  [x431274]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 2512:07dd  xor ecx, ecx  (32)  [x431274]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L258ff:
    if (c.tracing) c.traceAt(0x258ff);
    // 2512:07df  mov di, word ptr [esi + 4]  (32)  [x533985]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x4u)));
    // 2512:07e3  mov cx, di  (32)  [x533985]
    c.c.x = (uint16_t)(c.di.x);
    // 2512:07e6  shr cx, 2  (32)  [x533985]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), false));
    // 2512:07ea  mov dx, word ptr [esi + 6]  (32)  [x533985]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2512:07ee  shr dx, 2  (32)  [x533985]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 2512:07f2  sub dx, cx  (32)  [x533985]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.c.x, true));
    // 2512:07f5  je 0x81a  (32)  [x533985]
    if (c.zf) goto L2593a;
L25917:
    if (c.tracing) c.traceAt(0x25917);
    // 2512:07f7  mov cx, di  (32)  [x376155]
    c.c.x = (uint16_t)(c.di.x);
    // 2512:07fa  and cx, 3  (32)  [x376155]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), false));
    // 2512:07fe  sub cx, 4  (32)  [x376155]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x4u, false));
    // 2512:0802  neg cx  (32)  [x376155]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, true));
L25925:
    if (c.tracing) c.traceAt(0x25925);
    // 2512:0805  rep stosb byte ptr es:[edi], al  (32)  [x1308563]
    c.stos<8, true>(1);
L25927:
    if (c.tracing) c.traceAt(0x25927);
    // 2512:0807  mov cx, dx  (32)  [x376155]
    c.c.x = (uint16_t)(c.dx_.x);
    // 2512:080a  dec cx  (32)  [x376155]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
L2592c:
    if (c.tracing) c.traceAt(0x2592c);
    // 2512:080c  rep stosd dword ptr es:[edi], eax  (32)  [x3200000]
    c.stos<32, true>(1);
L2592e:
    if (c.tracing) c.traceAt(0x2592e);
    // 2512:080e  mov cx, word ptr [esi + 6]  (32)  [x376155]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2512:0812  and cx, 3  (32)  [x376155]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L25936:
    if (c.tracing) c.traceAt(0x25936);
    // 2512:0816  rep stosb byte ptr es:[edi], al  (32)  [x815804]
    c.stos<8, true>(1);
L25938:
    if (c.tracing) c.traceAt(0x25938);
    // 2512:0818  jmp 0x823  (32)  [x376155]
    goto L25943;
L2593a:
    if (c.tracing) c.traceAt(0x2593a);
    // 2512:081a  mov cx, word ptr [esi + 6]  (32)  [x157830]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2512:081e  sub cx, di  (32)  [x157830]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
L25941:
    if (c.tracing) c.traceAt(0x25941);
    // 2512:0821  rep stosb byte ptr es:[edi], al  (32)  [x290393]
    c.stos<8, true>(1);
L25943:
    if (c.tracing) c.traceAt(0x25943);
    // 2512:0823  cmp esi, ebp  (32)  [x533985]
    c.sub<32>(c.si.e, c.bp.e, true);
    // 2512:0825  mov esi, dword ptr [esi]  (32)  [x533985]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2512:0827  jne 0x7df  (32)  [x533985]
    if (!c.zf) goto L258ff;
L25949:
    if (c.tracing) c.traceAt(0x25949);
    // 2512:0829  popal   (32)  [x431274]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 2512:082a  ret   (32)  [x431274]
    c.ip = c.pop32(); return;
}

static Register reg16(16, {0x24f2a, 0x24f33, 0x24f38, 0x24f87, 0x24fa9, 0x24fb2, 0x24fbe, 0x24fc7, 0x24fd3, 0x24fdc, 0x2504e, 0x25075, 0x25079, 0x25083, 0x250a9, 0x250ad, 0x250b1, 0x250c4, 0x250d5, 0x250ea, 0x250f2, 0x25104, 0x25107, 0x25128, 0x25130, 0x25137, 0x25140, 0x25145, 0x2514b, 0x25158, 0x25169, 0x25174, 0x25179, 0x25190, 0x251a2, 0x251b7, 0x251c2, 0x251ce, 0x251dc, 0x251fe, 0x25209, 0x2520e, 0x2521d, 0x25226, 0x25230, 0x2523d, 0x2523f, 0x25246, 0x2524e, 0x25253, 0x2525f, 0x25261, 0x25268, 0x25278, 0x25287, 0x25289, 0x25290, 0x252a0, 0x252a3, 0x252aa, 0x252b3, 0x252d0, 0x25367, 0x25372, 0x25395, 0x25397, 0x253af, 0x253c9, 0x253cb, 0x253e6, 0x253f0, 0x253fa, 0x25401, 0x25412, 0x25420, 0x254ee, 0x254fc, 0x25501, 0x2550d, 0x25536, 0x25540, 0x2554f, 0x2555e, 0x25562, 0x2556f, 0x255c3, 0x255cb, 0x255d7, 0x255da, 0x255e0, 0x255ea, 0x255fa, 0x25600, 0x25635, 0x2563b, 0x25641, 0x25644, 0x2564d, 0x25656, 0x2565f, 0x25661, 0x25668, 0x25671, 0x25677, 0x25686, 0x25690, 0x2569e, 0x256b3, 0x256c7, 0x256db, 0x256dd, 0x256e3, 0x256e7, 0x256ec, 0x256f6, 0x256fe, 0x25706, 0x25724, 0x25734, 0x2573b, 0x25747, 0x2574c, 0x2575c, 0x2575f, 0x2576b, 0x25794, 0x2579a, 0x257a0, 0x257aa, 0x257b2, 0x257b7, 0x257be, 0x257cb, 0x257ce, 0x257d2, 0x257d4, 0x257e0, 0x257f0, 0x257f7, 0x25810, 0x2581f, 0x25833, 0x2583e, 0x2585a, 0x2586d, 0x25877, 0x2587a, 0x25884, 0x2588c, 0x25893, 0x258a0, 0x258a3, 0x258ac, 0x258b0, 0x258bc, 0x258c1, 0x258ca, 0x258d0, 0x258e2, 0x258fb, 0x258ff, 0x25917, 0x25925, 0x25927, 0x2592c, 0x2592e, 0x25936, 0x25938, 0x2593a, 0x25941, 0x25943, 0x25949}, code_16);

}  // namespace angel
