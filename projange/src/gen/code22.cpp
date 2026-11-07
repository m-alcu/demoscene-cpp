// Program 22, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_22(Cpu& c, uint32_t entry) {
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
    case 0x25085: goto L25085;
    case 0x25097: goto L25097;
    case 0x2509c: goto L2509c;
    case 0x250c2: goto L250c2;
    case 0x250c6: goto L250c6;
    case 0x250ca: goto L250ca;
    case 0x250dd: goto L250dd;
    case 0x250ee: goto L250ee;
    case 0x25103: goto L25103;
    case 0x2510b: goto L2510b;
    case 0x2511d: goto L2511d;
    case 0x25120: goto L25120;
    case 0x25123: goto L25123;
    case 0x25138: goto L25138;
    case 0x25140: goto L25140;
    case 0x25147: goto L25147;
    case 0x25150: goto L25150;
    case 0x25155: goto L25155;
    case 0x2515b: goto L2515b;
    case 0x25168: goto L25168;
    case 0x25179: goto L25179;
    case 0x25184: goto L25184;
    case 0x25189: goto L25189;
    case 0x251a0: goto L251a0;
    case 0x251b2: goto L251b2;
    case 0x251c7: goto L251c7;
    case 0x251d2: goto L251d2;
    case 0x251de: goto L251de;
    case 0x251ec: goto L251ec;
    case 0x2520e: goto L2520e;
    case 0x25219: goto L25219;
    case 0x2521e: goto L2521e;
    case 0x2522d: goto L2522d;
    case 0x25236: goto L25236;
    case 0x25240: goto L25240;
    case 0x2524d: goto L2524d;
    case 0x2524f: goto L2524f;
    case 0x25256: goto L25256;
    case 0x2525e: goto L2525e;
    case 0x25263: goto L25263;
    case 0x2526f: goto L2526f;
    case 0x25271: goto L25271;
    case 0x25278: goto L25278;
    case 0x25288: goto L25288;
    case 0x25297: goto L25297;
    case 0x25299: goto L25299;
    case 0x252a0: goto L252a0;
    case 0x252b0: goto L252b0;
    case 0x252b3: goto L252b3;
    case 0x252ba: goto L252ba;
    case 0x252c3: goto L252c3;
    case 0x252d4: goto L252d4;
    case 0x2536b: goto L2536b;
    case 0x25372: goto L25372;
    case 0x2537a: goto L2537a;
    case 0x25394: goto L25394;
    case 0x25396: goto L25396;
    case 0x253b1: goto L253b1;
    case 0x253bb: goto L253bb;
    case 0x253c5: goto L253c5;
    case 0x253cc: goto L253cc;
    case 0x253d9: goto L253d9;
    case 0x253e7: goto L253e7;
    case 0x2545f: goto L2545f;
    case 0x25464: goto L25464;
    case 0x25470: goto L25470;
    case 0x25499: goto L25499;
    case 0x254a3: goto L254a3;
    case 0x254b2: goto L254b2;
    case 0x254c1: goto L254c1;
    case 0x254c5: goto L254c5;
    case 0x254d6: goto L254d6;
    case 0x25560: goto L25560;
    case 0x25568: goto L25568;
    case 0x25574: goto L25574;
    case 0x2557b: goto L2557b;
    case 0x25581: goto L25581;
    case 0x2558b: goto L2558b;
    case 0x2559b: goto L2559b;
    case 0x255a1: goto L255a1;
    case 0x255fe: goto L255fe;
    case 0x25604: goto L25604;
    case 0x2560a: goto L2560a;
    case 0x25611: goto L25611;
    case 0x2561a: goto L2561a;
    case 0x25623: goto L25623;
    case 0x2562c: goto L2562c;
    case 0x2562e: goto L2562e;
    case 0x25635: goto L25635;
    case 0x2563e: goto L2563e;
    case 0x25644: goto L25644;
    case 0x25653: goto L25653;
    case 0x2565d: goto L2565d;
    case 0x2566b: goto L2566b;
    case 0x25680: goto L25680;
    case 0x25694: goto L25694;
    case 0x256a8: goto L256a8;
    case 0x256aa: goto L256aa;
    case 0x256b0: goto L256b0;
    case 0x256b4: goto L256b4;
    case 0x256b9: goto L256b9;
    case 0x256c3: goto L256c3;
    case 0x256cb: goto L256cb;
    case 0x256d3: goto L256d3;
    case 0x25700: goto L25700;
    case 0x25710: goto L25710;
    case 0x25717: goto L25717;
    case 0x25723: goto L25723;
    case 0x2573a: goto L2573a;
    case 0x2574a: goto L2574a;
    case 0x25751: goto L25751;
    case 0x2575d: goto L2575d;
    case 0x25786: goto L25786;
    case 0x2578c: goto L2578c;
    case 0x25792: goto L25792;
    case 0x2579c: goto L2579c;
    case 0x257a4: goto L257a4;
    case 0x257a9: goto L257a9;
    case 0x257b0: goto L257b0;
    case 0x257bd: goto L257bd;
    case 0x257c0: goto L257c0;
    case 0x257c4: goto L257c4;
    case 0x257c6: goto L257c6;
    case 0x257d2: goto L257d2;
    case 0x257ee: goto L257ee;
    case 0x257f5: goto L257f5;
    case 0x2580e: goto L2580e;
    case 0x2581d: goto L2581d;
    case 0x25831: goto L25831;
    case 0x2583c: goto L2583c;
    case 0x25858: goto L25858;
    case 0x2586b: goto L2586b;
    case 0x25875: goto L25875;
    case 0x25878: goto L25878;
    case 0x25882: goto L25882;
    case 0x2588a: goto L2588a;
    case 0x25891: goto L25891;
    case 0x2589e: goto L2589e;
    case 0x258a1: goto L258a1;
    case 0x258aa: goto L258aa;
    case 0x258ae: goto L258ae;
    case 0x258ba: goto L258ba;
    case 0x258bf: goto L258bf;
    case 0x258c1: goto L258c1;
    case 0x258d0: goto L258d0;
    case 0x258d3: goto L258d3;
    case 0x258db: goto L258db;
    case 0x258e2: goto L258e2;
    case 0x258eb: goto L258eb;
    case 0x258f4: goto L258f4;
    case 0x25900: goto L25900;
    case 0x2590e: goto L2590e;
    case 0x2591c: goto L2591c;
    case 0x25931: goto L25931;
    case 0x259a2: goto L259a2;
    case 0x259a6: goto L259a6;
    case 0x259b5: goto L259b5;
    case 0x259e8: goto L259e8;
    case 0x25a03: goto L25a03;
    case 0x25a0a: goto L25a0a;
    case 0x25a0b: goto L25a0b;
    case 0x25a10: goto L25a10;
    case 0x25a1d: goto L25a1d;
    case 0x25a35: goto L25a35;
    case 0x25a43: goto L25a43;
    case 0x25a45: goto L25a45;
    case 0x25a4a: goto L25a4a;
    case 0x25a4c: goto L25a4c;
    case 0x25a54: goto L25a54;
    case 0x25a56: goto L25a56;
    case 0x25a58: goto L25a58;
    case 0x25a5f: goto L25a5f;
    case 0x25a61: goto L25a61;
    case 0x25a67: goto L25a67;
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
    // 24f1:002c  mov word ptr [0], 0x213  [x1]
    c.w16(c.dsb + (uint16_t)(0u), 0x213u);
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
    // 24f1:004e  mov ax, 0x2513  [x1]
    c.a.x = (uint16_t)(0x2513u);
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
    // 24f1:0077  mov dword ptr [0x222], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x222u), c.a.e);
    // 24f1:007e  mov edi, ebx  [x1]
    c.di.e = (uint32_t)(c.b.e);
    // 24f1:0081  mov dx, 0x1805  [x1]
    c.dx_.x = (uint16_t)(0x1805u);
    // 24f1:0084  pop eax  [x1]
    { const uint32_t t0 = c.pop32(); c.a.e = (uint32_t)(t0); }
    // 24f1:0086  mov dword ptr [0x17b8], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0x17b8u), c.b.e);
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
    // 24f1:0099  add dword ptr [ecx + edi*4], ebx  [x2180]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.di.e * 4)), c.b.e, true));
    // 24f1:009e  dec edi  [x2180]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00a0  jne 0x99  [x2180]
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
    // 24f1:00ae  add dword ptr [edx + edi*4], ebx  [x3284]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00b3  dec edi  [x3284]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00b5  jne 0xae  [x3284]
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
    // 24f1:00c3  add dword ptr [esi + edi*4], ebx  [x1219]
    c.w32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4), c.add<32>(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)), c.b.e, true));
    // 24f1:00c8  dec edi  [x1219]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:00ca  jne 0xc3  [x1219]
    if (!c.zf) goto L24fd3;
L24fdc:
    if (c.tracing) c.traceAt(0x24fdc);
    // 24f1:00cc  mov dword ptr [0x298], esi  [x1]
    c.w32(c.dsb + (uint32_t)(0x298u), c.si.e);
    // 24f1:00d4  mov eax, dword ptr [ebx + 0xc]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)));
    // 24f1:00d9  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00dc  mov dword ptr [0x17c4], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x17c4u), c.a.e);
    // 24f1:00e0  add eax, 0x300  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x300u, false));
    // 24f1:00e6  mov dword ptr [0x17c8], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x17c8u), c.a.e);
    // 24f1:00ea  mov dword ptr [0x17cc], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x17ccu), c.a.e);
    // 24f1:00ee  mov eax, dword ptr [ebx + 0x10]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 24f1:00f3  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:00f6  mov dword ptr [0x3b4], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x3b4u), c.a.e);
    // 24f1:00fd  mov dword ptr [0x585], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x585u), c.a.e);
    // 24f1:0104  mov dword ptr [0x17bc], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x17bcu), c.a.e);
    // 24f1:0108  mov eax, dword ptr [ebx + 0x14]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 24f1:010d  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:0110  mov dword ptr [0x17c0], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x17c0u), c.a.e);
    // 24f1:0114  mov eax, dword ptr [ebx + 0x18]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)));
    // 24f1:0119  add eax, ebx  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 24f1:011c  mov dword ptr [0x1234], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x1234u), c.a.e);
    // 24f1:0120  pushal   [x1]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 24f1:0122  mov dx, 0x1812  [x1]
    c.dx_.x = (uint16_t)(0x1812u);
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
    // 24f1:013e  mov eax, dword ptr [edx + edi*4]  [x3284]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.di.e * 4)));
    // 24f1:0143  mov ebx, dword ptr [eax + 0x28]  [x3284]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
    // 24f1:0148  mov ebx, dword ptr [ecx + ebx*4]  [x3284]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:014d  mov dword ptr [eax + 0x28], ebx  [x3284]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x28u), c.b.e);
    // 24f1:0152  mov ebx, dword ptr [eax + 0x2c]  [x3284]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x2cu)));
    // 24f1:0157  mov ebx, dword ptr [ecx + ebx*4]  [x3284]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:015c  mov dword ptr [eax + 0x2c], ebx  [x3284]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x2cu), c.b.e);
    // 24f1:0161  dec edi  [x3284]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:0163  jne 0x13e  [x3284]
    if (!c.zf) goto L2504e;
L25075:
    if (c.tracing) c.traceAt(0x25075);
    // 24f1:0165  mov edi, dword ptr [esi]  [x1]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
L25079:
    if (c.tracing) c.traceAt(0x25079);
    // 24f1:0169  mov eax, dword ptr [esi + edi*4]  [x1219]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 24f1:016e  cmp byte ptr [eax + 0x18], 0  [x1219]
    c.sub<8>(c.r8(c.dsb + (uint32_t)(c.a.e + 0x18u)), 0x0u, true);
    // 24f1:0173  je 0x187  [x1219]
    if (c.zf) goto L25097;
L25085:
    if (c.tracing) c.traceAt(0x25085);
    // 24f1:0175  mov ebx, dword ptr [eax + 0x14]  [x1219]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x14u)));
    // 24f1:017a  add ebx, dword ptr [0x17b8]  [x1219]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x17b8u)), false));
    // 24f1:017f  shr bx, 4  [x1219]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x4u) & 31), true));
    // 24f1:0182  mov dword ptr [eax + 0x14], ebx  [x1219]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x14u), c.b.e);
L25097:
    if (c.tracing) c.traceAt(0x25097);
    // 24f1:0187  mov ebp, dword ptr [eax + 0x44]  [x1219]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x44u)));
L2509c:
    if (c.tracing) c.traceAt(0x2509c);
    // 24f1:018c  mov ebx, dword ptr [eax + ebp*8 + 0x40]  [x5359]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x40u)));
    // 24f1:0192  mov ebx, dword ptr [ecx + ebx*4]  [x5359]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4)));
    // 24f1:0197  mov dword ptr [eax + ebp*8 + 0x40], ebx  [x5359]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x40u), c.b.e);
    // 24f1:019d  mov ebx, dword ptr [eax + ebp*8 + 0x44]  [x5359]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x44u)));
    // 24f1:01a3  mov ebx, dword ptr [edx + ebx*4]  [x5359]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + c.b.e * 4)));
    // 24f1:01a8  mov dword ptr [eax + ebp*8 + 0x44], ebx  [x5359]
    c.w32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x44u), c.b.e);
    // 24f1:01ae  dec ebp  [x5359]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 24f1:01b0  jne 0x18c  [x5359]
    if (!c.zf) goto L2509c;
L250c2:
    if (c.tracing) c.traceAt(0x250c2);
    // 24f1:01b2  dec edi  [x1219]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 24f1:01b4  jne 0x169  [x1219]
    if (!c.zf) goto L25079;
L250c6:
    if (c.tracing) c.traceAt(0x250c6);
    // 24f1:01b6  mov eax, dword ptr [0x17bc]  [x1]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x17bcu)));
L250ca:
    if (c.tracing) c.traceAt(0x250ca);
    // 24f1:01ba  mov dword ptr [eax], eax  [x8]
    c.w32(c.dsb + (uint32_t)(c.a.e), c.a.e);
    // 24f1:01be  mov dword ptr [eax + 8], eax  [x8]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.a.e);
    // 24f1:01c3  mov ebx, dword ptr [eax + 4]  [x8]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 24f1:01c8  mov ebp, dword ptr [eax + 0xc]  [x8]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
L250dd:
    if (c.tracing) c.traceAt(0x250dd);
    // 24f1:01cd  mov edi, dword ptr [esi + ebx*4]  [x1219]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.b.e * 4)));
    // 24f1:01d2  mov dword ptr [edi + 0x3c], eax  [x1219]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x3cu), c.a.e);
    // 24f1:01d7  inc ebx  [x1219]
    c.b.e = (uint32_t)(c.inc<32>(c.b.e, false));
    // 24f1:01d9  cmp ebx, ebp  [x1219]
    c.sub<32>(c.b.e, c.bp.e, true);
    // 24f1:01dc  jbe 0x1cd  [x1219]
    if ((c.cf || c.zf)) goto L250dd;
L250ee:
    if (c.tracing) c.traceAt(0x250ee);
    // 24f1:01de  mov dword ptr [eax + 4], eax  [x8]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.a.e);
    // 24f1:01e3  mov dword ptr [eax + 0xc], eax  [x8]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.a.e);
    // 24f1:01e8  add eax, 0x10  [x8]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x10u, false));
    // 24f1:01ec  cmp eax, dword ptr [0x17c0]  [x8]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x17c0u)), true);
    // 24f1:01f1  jne 0x1ba  [x8]
    if (!c.zf) goto L250ca;
L25103:
    if (c.tracing) c.traceAt(0x25103);
    // 24f1:01f3  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 24f1:01f6  mov ax, 4  [x1]
    c.a.x = (uint16_t)(0x4u);
    // 24f1:01f9  int 0xff  [x1]
    c.ip = 0x1fbu; c.d32 = false; c.intr(0xff, 0x1fbu);
L2510b:
    if (c.tracing) c.traceAt(0x2510b);
    // 24f1:01fb  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 24f1:01fe  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0200  out dx, al  [x1]
    c.ip = 0x201u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:0201  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 24f1:0202  mov esi, dword ptr [0x17c4]  [x1]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x17c4u)));
    // 24f1:0207  mov ecx, 0x300  [x1]
    c.c.e = (uint32_t)(0x300u);
L2511d:
    if (c.tracing) c.traceAt(0x2511d);
    // 24f1:020d  rep outsb dx, byte ptr [esi]  [x769]
    c.ip = 0x210u; c.d32 = false; c.outs<8, true>(c.dsb, 1);
L25120:
    if (c.tracing) c.traceAt(0x25120);
    // 24f1:0210  jmp 0x1a  [x1]
    goto L24f2a;
L25123:
    if (c.tracing) c.traceAt(0x25123);
    // 24f1:0213  xor eax, eax  [x333]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 24f1:0216  xor edx, edx  [x333]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
    // 24f1:0219  iret   [x333]
    c.iret(); return;
L25138:
    if (c.tracing) c.traceAt(0x25138);
    // 000c:0008  mov eax, cr0  (32)  [x1]
    c.a.e = (uint32_t)(c.cr0);
    // 000c:000b  and al, 0xfe  (32)  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 000c:000d  mov cr0, eax  (32)  [x1]
    c.setCr0(c.a.e);
L25140:
    if (c.tracing) c.traceAt(0x25140);
    // 000c:0010  ljmp 0x2513:0x17  (32)  [x1]
    c.loadCs(0x2513u); t = c.csb + 0x17u; goto dispatch;
L25147:
    if (c.tracing) c.traceAt(0x25147);
    // 2513:0017  lidt cs:[0]  (32)  [x1]
    // 2513:001f  sti   (32)  [x1]
    c.ip = 0x20u; c.d32 = true; c.m.sti();
L25150:
    if (c.tracing) c.traceAt(0x25150);
    // 2513:0020  mov ax, word ptr [0x17de]  (32)  [x1782]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17deu)));
L25155:
    if (c.tracing) c.traceAt(0x25155);
    // 2513:0025  mov bx, 4  (32)  [x1]
    c.b.x = (uint16_t)(0x4u);
    // 2513:0029  int 0xfb  (32)  [x1]
    c.ip = 0x2bu; c.d32 = true; c.intr(0xfb, 0x2bu);
L2515b:
    if (c.tracing) c.traceAt(0x2515b);
    // 2513:002b  xor word ptr [0x17de], 1  (32)  [x1782]
    c.w16(c.dsb + (uint16_t)(0x17deu), c.logic<16>((c.r16(c.dsb + (uint16_t)(0x17deu))) ^ (0x1u), true));
    // 2513:0032  mov bx, 0xe  (32)  [x1782]
    c.b.x = (uint16_t)(0xeu);
    // 2513:0036  int 0xff  (32)  [x1782]
    c.ip = 0x38u; c.d32 = true; c.intr(0xff, 0x38u);
L25168:
    if (c.tracing) c.traceAt(0x25168);
    // 2513:0038  mov word ptr [0x17da], ax  (32)  [x1782]
    c.w16(c.dsb + (uint16_t)(0x17dau), c.a.x);
    // 2513:003d  sub word ptr [0x18], ax  (32)  [x1782]
    c.w16(c.dsb + (uint16_t)(0x18u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0x18u)), c.a.x, true));
    // 2513:0043  jl 0x78f  (32)  [x1782]
    if ((c.sf != c.of)) goto L258bf;
L25179:
    if (c.tracing) c.traceAt(0x25179);
    // 2513:0049  mov ax, word ptr [0x17de]  (32)  [x1781]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17deu)));
    // 2513:004e  mov bx, 2  (32)  [x1781]
    c.b.x = (uint16_t)(0x2u);
    // 2513:0052  int 0xfb  (32)  [x1781]
    c.ip = 0x54u; c.d32 = true; c.intr(0xfb, 0x54u);
L25184:
    if (c.tracing) c.traceAt(0x25184);
    // 2513:0054  mov word ptr [0x17e0], ax  (32)  [x1781]
    c.w16(c.dsb + (uint16_t)(0x17e0u), c.a.x);
L25189:
    if (c.tracing) c.traceAt(0x25189);
    // 2513:0059  mov esi, dword ptr [0x1234]  (32)  [x1781]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1234u)));
    // 2513:005e  mov edi, dword ptr [esi]  (32)  [x1781]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2513:0060  lea eax, [esi + edi*4 + 4]  (32)  [x1781]
    c.a.e = (uint32_t)((uint32_t)(c.si.e + c.di.e * 4 + 0x4u));
    // 2513:0064  mov dword ptr [0x1234], eax  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0x1234u), c.a.e);
    // 2513:0068  or edi, edi  (32)  [x1781]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) | (c.di.e), true));
    // 2513:006a  je 0x193  (32)  [x1781]
    if (c.zf) goto L252c3;
L251a0:
    if (c.tracing) c.traceAt(0x251a0);
    // 2513:0070  push esi  (32)  [x17310]
    c.push32(c.si.e);
    // 2513:0071  push edi  (32)  [x17310]
    c.push32(c.di.e);
    // 2513:0072  mov eax, dword ptr [esi + edi*4]  (32)  [x17310]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e + c.di.e * 4)));
    // 2513:0075  mov eax, dword ptr [eax*4 + 0x210fa8]  (32)  [x17310]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4 + (uint32_t)(int32_t)c.r32(0x251a8))));
    // 2513:007c  xor byte ptr [eax + 0x1a], 1  (32)  [x17310]
    c.w8(c.dsb + (uint32_t)(c.a.e + 0x1au), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.a.e + 0x1au))) ^ (0x1u), true));
    // 2513:0080  je 0xee  (32)  [x17310]
    if (c.zf) goto L2521e;
L251b2:
    if (c.tracing) c.traceAt(0x251b2);
    // 2513:0082  mov ebx, dword ptr [eax + 0x3c]  (32)  [x8662]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x3cu)));
    // 2513:0085  mov ecx, dword ptr [ebx + 4]  (32)  [x8662]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2513:0088  mov dword ptr [ebx + 4], eax  (32)  [x8662]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.a.e);
    // 2513:008b  mov dword ptr [eax + 0xc], ebx  (32)  [x8662]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0xcu), c.b.e);
    // 2513:008e  mov dword ptr [eax + 4], ecx  (32)  [x8662]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2513:0091  mov dword ptr [ecx + 0xc], eax  (32)  [x8662]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.a.e);
    // 2513:0094  mov ebp, dword ptr [eax + 0x44]  (32)  [x8662]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x44u)));
L251c7:
    if (c.tracing) c.traceAt(0x251c7);
    // 2513:0097  push ebx  (32)  [x37036]
    c.push32(c.b.e);
    // 2513:0098  mov ecx, dword ptr [eax + ebp*8 + 0x40]  (32)  [x37036]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x40u)));
    // 2513:009c  cmp dword ptr [ecx + 0x2c], 0  (32)  [x37036]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)), 0x0u, true);
    // 2513:00a0  jne 0xae  (32)  [x37036]
    if (!c.zf) goto L251de;
L251d2:
    if (c.tracing) c.traceAt(0x251d2);
    // 2513:00a2  mov edx, dword ptr [ebx]  (32)  [x17569]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2513:00a4  mov dword ptr [ebx], ecx  (32)  [x17569]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.c.e);
    // 2513:00a6  mov dword ptr [ecx + 8], ebx  (32)  [x17569]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.b.e);
    // 2513:00a9  mov dword ptr [ecx], edx  (32)  [x17569]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.dx_.e);
    // 2513:00ab  mov dword ptr [edx + 8], ecx  (32)  [x17569]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.c.e);
L251de:
    if (c.tracing) c.traceAt(0x251de);
    // 2513:00ae  inc dword ptr [ecx + 0x2c]  (32)  [x37036]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x2cu), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)), false));
    // 2513:00b1  mov ecx, dword ptr [eax + ebp*8 + 0x44]  (32)  [x37036]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x44u)));
    // 2513:00b5  mov edx, dword ptr [ecx + 0x30]  (32)  [x37036]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x30u)));
    // 2513:00b8  or edx, edx  (32)  [x37036]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) | (c.dx_.e), true));
    // 2513:00ba  jne 0xde  (32)  [x37036]
    if (!c.zf) goto L2520e;
L251ec:
    if (c.tracing) c.traceAt(0x251ec);
    // 2513:00bc  mov ebx, dword ptr [ecx + 0x28]  (32)  [x25284]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x28u)));
    // 2513:00bf  mov edi, dword ptr [ecx + 0x2c]  (32)  [x25284]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)));
    // 2513:00c2  inc dword ptr [ebx + 0x30]  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x30u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)), false));
    // 2513:00c5  mov esi, dword ptr [ebx + 0x30]  (32)  [x25284]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2513:00c8  mov dword ptr [ebx + esi*8 + 0x2c], ecx  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu), c.c.e);
    // 2513:00cc  mov dword ptr [ebx + esi*8 + 0x30], edi  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x30u), c.di.e);
    // 2513:00d0  inc dword ptr [edi + 0x30]  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x30u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.di.e + 0x30u)), true));
    // 2513:00d3  mov esi, dword ptr [edi + 0x30]  (32)  [x25284]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x30u)));
    // 2513:00d6  mov dword ptr [edi + esi*8 + 0x2c], ecx  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x2cu), c.c.e);
    // 2513:00da  mov dword ptr [edi + esi*8 + 0x30], ebx  (32)  [x25284]
    c.w32(c.dsb + (uint32_t)(c.di.e + c.si.e * 8 + 0x30u), c.b.e);
L2520e:
    if (c.tracing) c.traceAt(0x2520e);
    // 2513:00de  inc dword ptr [ecx + 0x30]  (32)  [x37036]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x30u), c.inc<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x30u)), false));
    // 2513:00e1  mov dword ptr [ecx + edx*4 + 0x34], eax  (32)  [x37036]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x34u), c.a.e);
    // 2513:00e5  pop ebx  (32)  [x37036]
    { const uint32_t t0 = c.pop32(); c.b.e = (uint32_t)(t0); }
    // 2513:00e6  dec ebp  (32)  [x37036]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2513:00e7  jne 0x97  (32)  [x37036]
    if (!c.zf) goto L251c7;
L25219:
    if (c.tracing) c.traceAt(0x25219);
    // 2513:00e9  jmp 0x18a  (32)  [x8662]
    goto L252ba;
L2521e:
    if (c.tracing) c.traceAt(0x2521e);
    // 2513:00ee  mov ebx, dword ptr [eax + 0xc]  (32)  [x8648]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2513:00f1  mov ecx, dword ptr [eax + 4]  (32)  [x8648]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x4u)));
    // 2513:00f4  mov dword ptr [ebx + 4], ecx  (32)  [x8648]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.c.e);
    // 2513:00f7  mov dword ptr [ecx + 0xc], ebx  (32)  [x8648]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0xcu), c.b.e);
    // 2513:00fa  mov ebp, dword ptr [eax + 0x44]  (32)  [x8648]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x44u)));
L2522d:
    if (c.tracing) c.traceAt(0x2522d);
    // 2513:00fd  mov ecx, dword ptr [eax + ebp*8 + 0x40]  (32)  [x36980]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x40u)));
    // 2513:0101  dec dword ptr [ecx + 0x2c]  (32)  [x36980]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x2cu), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)), true));
    // 2513:0104  jne 0x110  (32)  [x36980]
    if (!c.zf) goto L25240;
L25236:
    if (c.tracing) c.traceAt(0x25236);
    // 2513:0106  mov ebx, dword ptr [ecx + 8]  (32)  [x17523]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2513:0109  mov edx, dword ptr [ecx]  (32)  [x17523]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2513:010b  mov dword ptr [ebx], edx  (32)  [x17523]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2513:010d  mov dword ptr [edx + 8], ebx  (32)  [x17523]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x8u), c.b.e);
L25240:
    if (c.tracing) c.traceAt(0x25240);
    // 2513:0110  mov ecx, dword ptr [eax + ebp*8 + 0x44]  (32)  [x36980]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.bp.e * 8 + 0x44u)));
    // 2513:0114  mov ebx, dword ptr [ecx + 0x30]  (32)  [x36980]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x30u)));
    // 2513:0117  cmp dword ptr [ecx + ebx*4 + 0x30], eax  (32)  [x36980]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x30u)), c.a.e, true);
    // 2513:011b  je 0x12e  (32)  [x36980]
    if (c.zf) goto L2525e;
L2524d:
    if (c.tracing) c.traceAt(0x2524d);
    // 2513:011d  mov edx, ebx  (32)  [x4797]
    c.dx_.e = (uint32_t)(c.b.e);
L2524f:
    if (c.tracing) c.traceAt(0x2524f);
    // 2513:011f  dec ebx  (32)  [x4797]
    c.b.e = (uint32_t)(c.dec<32>(c.b.e, false));
    // 2513:0120  cmp dword ptr [ecx + ebx*4 + 0x30], eax  (32)  [x4797]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x30u)), c.a.e, true);
    // 2513:0124  jne 0x11f  (32)  [x4797]
    if (!c.zf) goto L2524f;
L25256:
    if (c.tracing) c.traceAt(0x25256);
    // 2513:0126  mov edx, dword ptr [ecx + edx*4 + 0x30]  (32)  [x4797]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + c.dx_.e * 4 + 0x30u)));
    // 2513:012a  mov dword ptr [ecx + ebx*4 + 0x30], edx  (32)  [x4797]
    c.w32(c.dsb + (uint32_t)(c.c.e + c.b.e * 4 + 0x30u), c.dx_.e);
L2525e:
    if (c.tracing) c.traceAt(0x2525e);
    // 2513:012e  dec dword ptr [ecx + 0x30]  (32)  [x36980]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x30u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x30u)), true));
    // 2513:0131  jne 0x183  (32)  [x36980]
    if (!c.zf) goto L252b3;
L25263:
    if (c.tracing) c.traceAt(0x25263);
    // 2513:0133  mov ebx, dword ptr [ecx + 0x28]  (32)  [x25233]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x28u)));
    // 2513:0136  mov edx, dword ptr [ebx + 0x30]  (32)  [x25233]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2513:0139  cmp dword ptr [ebx + edx*8 + 0x2c], ecx  (32)  [x25233]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x2cu)), c.c.e, true);
    // 2513:013d  je 0x158  (32)  [x25233]
    if (c.zf) goto L25288;
L2526f:
    if (c.tracing) c.traceAt(0x2526f);
    // 2513:013f  mov esi, edx  (32)  [x11795]
    c.si.e = (uint32_t)(c.dx_.e);
L25271:
    if (c.tracing) c.traceAt(0x25271);
    // 2513:0141  dec esi  (32)  [x13934]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2513:0142  cmp dword ptr [ebx + esi*8 + 0x2c], ecx  (32)  [x13934]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu)), c.c.e, true);
    // 2513:0146  jne 0x141  (32)  [x13934]
    if (!c.zf) goto L25271;
L25278:
    if (c.tracing) c.traceAt(0x25278);
    // 2513:0148  mov edi, dword ptr [ebx + edx*8 + 0x2c]  (32)  [x11795]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x2cu)));
    // 2513:014c  mov dword ptr [ebx + esi*8 + 0x2c], edi  (32)  [x11795]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu), c.di.e);
    // 2513:0150  mov edi, dword ptr [ebx + edx*8 + 0x30]  (32)  [x11795]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x30u)));
    // 2513:0154  mov dword ptr [ebx + esi*8 + 0x30], edi  (32)  [x11795]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x30u), c.di.e);
L25288:
    if (c.tracing) c.traceAt(0x25288);
    // 2513:0158  dec dword ptr [ebx + 0x30]  (32)  [x25233]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x30u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)), false));
    // 2513:015b  mov ebx, dword ptr [ecx + 0x2c]  (32)  [x25233]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)));
    // 2513:015e  mov edx, dword ptr [ebx + 0x30]  (32)  [x25233]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2513:0161  cmp dword ptr [ebx + edx*8 + 0x2c], ecx  (32)  [x25233]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x2cu)), c.c.e, true);
    // 2513:0165  je 0x180  (32)  [x25233]
    if (c.zf) goto L252b0;
L25297:
    if (c.tracing) c.traceAt(0x25297);
    // 2513:0167  mov esi, edx  (32)  [x11539]
    c.si.e = (uint32_t)(c.dx_.e);
L25299:
    if (c.tracing) c.traceAt(0x25299);
    // 2513:0169  dec esi  (32)  [x13877]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, false));
    // 2513:016a  cmp dword ptr [ebx + esi*8 + 0x2c], ecx  (32)  [x13877]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu)), c.c.e, true);
    // 2513:016e  jne 0x169  (32)  [x13877]
    if (!c.zf) goto L25299;
L252a0:
    if (c.tracing) c.traceAt(0x252a0);
    // 2513:0170  mov edi, dword ptr [ebx + edx*8 + 0x2c]  (32)  [x11539]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x2cu)));
    // 2513:0174  mov dword ptr [ebx + esi*8 + 0x2c], edi  (32)  [x11539]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu), c.di.e);
    // 2513:0178  mov edi, dword ptr [ebx + edx*8 + 0x30]  (32)  [x11539]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.dx_.e * 8 + 0x30u)));
    // 2513:017c  mov dword ptr [ebx + esi*8 + 0x30], edi  (32)  [x11539]
    c.w32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x30u), c.di.e);
L252b0:
    if (c.tracing) c.traceAt(0x252b0);
    // 2513:0180  dec dword ptr [ebx + 0x30]  (32)  [x25233]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x30u), c.dec<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)), true));
L252b3:
    if (c.tracing) c.traceAt(0x252b3);
    // 2513:0183  dec ebp  (32)  [x36980]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2513:0184  jne 0xfd  (32)  [x36980]
    if (!c.zf) goto L2522d;
L252ba:
    if (c.tracing) c.traceAt(0x252ba);
    // 2513:018a  pop edi  (32)  [x17310]
    { const uint32_t t0 = c.pop32(); c.di.e = (uint32_t)(t0); }
    // 2513:018b  pop esi  (32)  [x17310]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2513:018c  dec edi  (32)  [x17310]
    c.di.e = (uint32_t)(c.dec<32>(c.di.e, true));
    // 2513:018d  jne 0x70  (32)  [x17310]
    if (!c.zf) goto L251a0;
L252c3:
    if (c.tracing) c.traceAt(0x252c3);
    // 2513:0193  mov edi, 0x20b9c0  (32)  [x1781]
    c.di.e = (uint32_t)((c.r32(0x252c4)));
    // 2513:0198  jmp 0x2b7  (32)  [x1781]
    goto L253e7;
L252d4:
    if (c.tracing) c.traceAt(0x252d4);
    // 2513:01a4  mov eax, dword ptr [edi + 0x14]  (32)  [x396703]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)));
    // 2513:01a7  mov ebx, dword ptr [edi + 0x18]  (32)  [x396703]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x18u)));
    // 2513:01aa  mov ecx, dword ptr [edi + 0x1c]  (32)  [x396703]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)));
    // 2513:01ad  mov edx, 0x1fb35f5  (32)  [x396703]
    c.dx_.e = (uint32_t)((c.r32(0x252de)));
    // 2513:01b2  imul ebp, eax, 0x5e4  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x252e4))));
    // 2513:01b8  add edx, ebp  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2513:01ba  imul ebp, ebx, 0  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x252ec))));
    // 2513:01c0  add edx, ebp  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2513:01c2  imul ebp, ecx, 0xfffffe83  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x252f4))));
    // 2513:01c8  add edx, ebp  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 2513:01ca  mov esi, 0x774549  (32)  [x396703]
    c.si.e = (uint32_t)((c.r32(0x252fb)));
    // 2513:01cf  imul ebp, eax, 0xc  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x25301))));
    // 2513:01d5  add esi, ebp  (32)  [x396703]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2513:01d7  imul ebp, ebx, 0xfffff9ee  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x25309))));
    // 2513:01dd  add esi, ebp  (32)  [x396703]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2513:01df  imul ebp, ecx, 0x2f  (32)  [x396703]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x25311))));
    // 2513:01e5  add esi, ebp  (32)  [x396703]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.bp.e, false));
    // 2513:01e7  mov ebp, 0x10e6f3d  (32)  [x396703]
    c.bp.e = (uint32_t)((c.r32(0x25318)));
    // 2513:01ec  imul eax, eax, 0x7e  (32)  [x396703]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x2531e))));
    // 2513:01f2  add ebp, eax  (32)  [x396703]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 2513:01f4  imul ebx, ebx, 0x10  (32)  [x396703]
    c.b.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x25326))));
    // 2513:01fa  add ebp, ebx  (32)  [x396703]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.b.e, false));
    // 2513:01fc  imul ecx, ecx, 0x1f0  (32)  [x396703]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x2532e))));
    // 2513:0202  add ebp, ecx  (32)  [x396703]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.c.e, false));
    // 2513:0204  mov dword ptr [edi + 0x28], ebp  (32)  [x396703]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x28u), c.bp.e);
    // 2513:0207  xor eax, eax  (32)  [x396703]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2513:0209  sar edx, 9  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2513:020c  idiv ebp  (32)  [x396703]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x20cu); }   // #DE: int 0, then again
    // 2513:020e  sar eax, 0x10  (32)  [x396703]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0211  add ax, 0xa0  (32)  [x396703]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa0u, false));
    // 2513:0215  mov word ptr [edi + 0x10], ax  (32)  [x396703]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.x);
    // 2513:0219  mov edx, esi  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.si.e);
    // 2513:021b  xor eax, eax  (32)  [x396703]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 2513:021d  sar edx, 9  (32)  [x396703]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x9u) & 31), false));
    // 2513:0220  idiv ebp  (32)  [x396703]
    while (!c.idiv32(c.bp.e)) { c.d32 = true; c.intr(0, 0x220u); }   // #DE: int 0, then again
    // 2513:0222  sar eax, 0x10  (32)  [x396703]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0225  add ax, 0x64  (32)  [x396703]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x64u, false));
    // 2513:0229  mov word ptr [edi + 0x12], ax  (32)  [x396703]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x12u), c.a.x);
    // 2513:022d  mov edi, dword ptr [edi]  (32)  [x396703]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2513:022f  cmp edi, dword ptr [0x3c0]  (32)  [x396703]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3c0u)), true);
    // 2513:0235  jne 0x1a4  (32)  [x396703]
    if (!c.zf) goto L252d4;
L2536b:
    if (c.tracing) c.traceAt(0x2536b);
    // 2513:023b  mov ebx, dword ptr [edi + 4]  (32)  [x4686]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2513:023e  cmp ebx, edi  (32)  [x4686]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2513:0240  je 0x2a9  (32)  [x4686]
    if (c.zf) goto L253d9;
L25372:
    if (c.tracing) c.traceAt(0x25372);
    // 2513:0242  mov ebp, dword ptr [ebx + 0x44]  (32)  [x166088]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x44u)));
    // 2513:0245  cmp ebp, 4  (32)  [x166088]
    c.sub<32>(c.bp.e, 0x4u, true);
    // 2513:0248  jne 0x264  (32)  [x166088]
    if (!c.zf) goto L25394;
L2537a:
    if (c.tracing) c.traceAt(0x2537a);
    // 2513:024a  mov eax, dword ptr [ebx + 0x48]  (32)  [x79700]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x48u)));
    // 2513:024d  mov edx, dword ptr [eax + 0x28]  (32)  [x79700]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)));
    // 2513:0250  mov eax, dword ptr [ebx + 0x50]  (32)  [x79700]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x50u)));
    // 2513:0253  add edx, dword ptr [eax + 0x28]  (32)  [x79700]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)), false));
    // 2513:0256  mov eax, dword ptr [ebx + 0x58]  (32)  [x79700]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x58u)));
    // 2513:0259  add edx, dword ptr [eax + 0x28]  (32)  [x79700]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)), false));
    // 2513:025c  mov eax, dword ptr [ebx + 0x60]  (32)  [x79700]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x60u)));
    // 2513:025f  add edx, dword ptr [eax + 0x28]  (32)  [x79700]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.a.e + 0x28u)), true));
    // 2513:0262  jmp 0x29c  (32)  [x79700]
    goto L253cc;
L25394:
    if (c.tracing) c.traceAt(0x25394);
    // 2513:0264  jae 0x281  (32)  [x86388]
    if (!c.cf) goto L253b1;
L25396:
    if (c.tracing) c.traceAt(0x25396);
    // 2513:0266  mov edx, dword ptr [ebx + 0x48]  (32)  [x37962]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x48u)));
    // 2513:0269  mov eax, dword ptr [edx + 0x28]  (32)  [x37962]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x28u)));
    // 2513:026c  mov edx, dword ptr [ebx + 0x50]  (32)  [x37962]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x50u)));
    // 2513:026f  add eax, dword ptr [edx + 0x28]  (32)  [x37962]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x28u)), false));
    // 2513:0272  mov edx, dword ptr [ebx + 0x58]  (32)  [x37962]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x58u)));
    // 2513:0275  add eax, dword ptr [edx + 0x28]  (32)  [x37962]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x28u)), false));
    // 2513:0278  mul dword ptr [0x123c]  (32)  [x37962]
    c.mul32(c.r32(c.dsb + (uint16_t)(0x123cu)));
    // 2513:027d  add edx, edx  (32)  [x37962]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.dx_.e, true));
    // 2513:027f  jmp 0x29c  (32)  [x37962]
    goto L253cc;
L253b1:
    if (c.tracing) c.traceAt(0x253b1);
    // 2513:0281  mov esi, ebp  (32)  [x48426]
    c.si.e = (uint32_t)(c.bp.e);
    // 2513:0283  mov edx, dword ptr [ebx + ebp*8 + 0x40]  (32)  [x48426]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x40u)));
    // 2513:0287  mov eax, dword ptr [edx + 0x28]  (32)  [x48426]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x28u)));
    // 2513:028a  dec ebp  (32)  [x48426]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
L253bb:
    if (c.tracing) c.traceAt(0x253bb);
    // 2513:028b  mov edx, dword ptr [ebx + ebp*8 + 0x40]  (32)  [x247061]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.bp.e * 8 + 0x40u)));
    // 2513:028f  add eax, dword ptr [edx + 0x28]  (32)  [x247061]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x28u)), true));
    // 2513:0292  dec ebp  (32)  [x247061]
    c.bp.e = (uint32_t)(c.dec<32>(c.bp.e, true));
    // 2513:0293  jne 0x28b  (32)  [x247061]
    if (!c.zf) goto L253bb;
L253c5:
    if (c.tracing) c.traceAt(0x253c5);
    // 2513:0295  mul dword ptr [esi*4 + 0x1224]  (32)  [x48426]
    c.mul32(c.r32(c.dsb + (uint32_t)(c.si.e * 4 + 0x1224u)));
L253cc:
    if (c.tracing) c.traceAt(0x253cc);
    // 2513:029c  add edx, dword ptr [ebx + 0x40]  (32)  [x166088]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x40u)), false));
    // 2513:029f  mov dword ptr [ebx + 0x10], edx  (32)  [x166088]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x10u), c.dx_.e);
    // 2513:02a2  mov ebx, dword ptr [ebx + 4]  (32)  [x166088]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2513:02a5  cmp ebx, edi  (32)  [x166088]
    c.sub<32>(c.b.e, c.di.e, true);
    // 2513:02a7  jne 0x242  (32)  [x166088]
    if (!c.zf) goto L25372;
L253d9:
    if (c.tracing) c.traceAt(0x253d9);
    // 2513:02a9  add edi, 0x10  (32)  [x14248]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x10u, false));
    // 2513:02ac  cmp edi, dword ptr [0x17c0]  (32)  [x14248]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x17c0u)), true);
    // 2513:02b1  je 0x334  (32)  [x14248]
    if (c.zf) goto L25464;
L253e7:
    if (c.tracing) c.traceAt(0x253e7);
    // 2513:02b7  mov dword ptr [0x3c0], edi  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3c0u), c.di.e);
    // 2513:02bd  mov esi, dword ptr [0x17c8]  (32)  [x14248]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x17c8u)));
    // 2513:02c2  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2c4u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02c4  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02c5  mov dword ptr [0x3d4], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3d4u), c.a.e);
    // 2513:02ca  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2ccu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02cc  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02cd  mov dword ptr [0x3f1], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3f1u), c.a.e);
    // 2513:02d2  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2d4u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02d4  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02d5  mov dword ptr [0x40e], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x40eu), c.a.e);
    // 2513:02da  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2dcu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02dc  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02dd  mov dword ptr [0x3dc], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3dcu), c.a.e);
    // 2513:02e2  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2e4u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02e4  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02e5  mov dword ptr [0x3f9], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3f9u), c.a.e);
    // 2513:02ea  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2ecu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02ec  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02ed  mov dword ptr [0x416], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x416u), c.a.e);
    // 2513:02f2  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2f4u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02f4  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02f5  mov dword ptr [0x3e4], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3e4u), c.a.e);
    // 2513:02fa  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x2fcu; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:02fc  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:02fd  mov dword ptr [0x401], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x401u), c.a.e);
    // 2513:0302  lodsw ax, word ptr [esi]  (32)  [x14248]
    c.ip = 0x304u; c.d32 = true; c.lods<16, true>(c.dsb, 0);
    // 2513:0304  cwde   (32)  [x14248]
    c.a.e = (uint32_t)(int16_t)c.a.x;
    // 2513:0305  mov dword ptr [0x41e], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x41eu), c.a.e);
    // 2513:030a  lodsd eax, dword ptr [esi]  (32)  [x14248]
    c.ip = 0x30bu; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2513:030b  mov dword ptr [0x3ce], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3ceu), c.a.e);
    // 2513:0310  lodsd eax, dword ptr [esi]  (32)  [x14248]
    c.ip = 0x311u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2513:0311  mov dword ptr [0x3eb], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x3ebu), c.a.e);
    // 2513:0316  lodsd eax, dword ptr [esi]  (32)  [x14248]
    c.ip = 0x317u; c.d32 = true; c.lods<32, true>(c.dsb, 0);
    // 2513:0317  mov dword ptr [0x408], eax  (32)  [x14248]
    c.w32(c.dsb + (uint32_t)(0x408u), c.a.e);
    // 2513:031c  mov dword ptr [0x17c8], esi  (32)  [x14248]
    c.w32(c.dsb + (uint16_t)(0x17c8u), c.si.e);
    // 2513:0321  mov edi, dword ptr [edi]  (32)  [x14248]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2513:0323  cmp edi, dword ptr [0x3c0]  (32)  [x14248]
    c.sub<32>(c.di.e, c.r32(c.dsb + (uint32_t)(0x3c0u)), true);
    // 2513:0329  je 0x2a9  (32)  [x14248]
    if (c.zf) goto L253d9;
L2545f:
    if (c.tracing) c.traceAt(0x2545f);
    // 2513:032f  jmp 0x1a4  (32)  [x4686]
    goto L252d4;
L25464:
    if (c.tracing) c.traceAt(0x25464);
    // 2513:0334  dec word ptr [0x17da]  (32)  [x1781]
    c.w16(c.dsb + (uint16_t)(0x17dau), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x17dau)), true));
    // 2513:033a  jne 0x59  (32)  [x1781]
    if (!c.zf) goto L25189;
L25470:
    if (c.tracing) c.traceAt(0x25470);
    // 2513:0340  mov dword ptr [0xb6c], 0xb70  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0xb6cu), 0xb70u);
    // 2513:0349  mov dword ptr [0xb74], 0xb60  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0xb74u), 0xb60u);
    // 2513:0352  mov dword ptr [0xb88], 0xb90  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0xb88u), 0xb90u);
    // 2513:035b  mov dword ptr [0xb90], 0xb84  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0xb90u), 0xb84u);
    // 2513:0364  mov esi, 0x20b9c0  (32)  [x1781]
    c.si.e = (uint32_t)((c.r32(0x25495)));
L25499:
    if (c.tracing) c.traceAt(0x25499);
    // 2513:0369  mov ebx, dword ptr [esi]  (32)  [x14248]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2513:036b  cmp ebx, esi  (32)  [x14248]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2513:036d  je 0x52d  (32)  [x14248]
    if (c.zf) goto L2565d;
L254a3:
    if (c.tracing) c.traceAt(0x254a3);
    // 2513:0373  mov bp, word ptr [ebx + 0x12]  (32)  [x396703]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
    // 2513:0377  cmp bp, 0xc8  (32)  [x396703]
    c.sub<16>(c.bp.x, 0xc8u, true);
    // 2513:037c  jge 0x523  (32)  [x396703]
    if ((c.sf == c.of)) goto L25653;
L254b2:
    if (c.tracing) c.traceAt(0x254b2);
    // 2513:0382  neg bp  (32)  [x368114]
    c.bp.x = (uint16_t)(c.neg<16>(c.bp.x, true));
    // 2513:0385  mov word ptr [0x17dc], bp  (32)  [x368114]
    c.w16(c.dsb + (uint16_t)(0x17dcu), c.bp.x);
    // 2513:038b  jl 0x451  (32)  [x368114]
    if ((c.sf != c.of)) goto L25581;
L254c1:
    if (c.tracing) c.traceAt(0x254c1);
    // 2513:0391  push esi  (32)  [x27988]
    c.push32(c.si.e);
    // 2513:0392  mov esi, dword ptr [ebx + 0x30]  (32)  [x27988]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
L254c5:
    if (c.tracing) c.traceAt(0x254c5);
    // 2513:0395  mov ecx, dword ptr [ebx + esi*8 + 0x30]  (32)  [x66900]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x30u)));
    // 2513:0399  mov ax, word ptr [ecx + 0x12]  (32)  [x66900]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)));
    // 2513:039d  or ax, ax  (32)  [x66900]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2513:03a0  jle 0x444  (32)  [x66900]
    if ((c.zf || c.sf != c.of)) goto L25574;
L254d6:
    if (c.tracing) c.traceAt(0x254d6);
    // 2513:03a6  mov edi, dword ptr [ebx + esi*8 + 0x2c]  (32)  [x28754]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu)));
    // 2513:03aa  mov word ptr [edi + 0x20], ax  (32)  [x28754]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x20u), c.a.x);
    // 2513:03ae  mov byte ptr [edi + 0x22], 0  (32)  [x28754]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x22u), 0x0u);
    // 2513:03b2  mov dword ptr [edi + 0x24], ecx  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.c.e);
    // 2513:03b5  mov bp, word ptr [0x17dc]  (32)  [x28754]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17dcu)));
    // 2513:03bb  add bp, ax  (32)  [x28754]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 2513:03be  push esi  (32)  [x28754]
    c.push32(c.si.e);
    // 2513:03bf  movzx esi, bp  (32)  [x28754]
    c.si.e = (uint32_t)(c.bp.x);
    // 2513:03c2  mov eax, dword ptr [ecx + 0x20]  (32)  [x28754]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2513:03c5  sub eax, dword ptr [ebx + 0x20]  (32)  [x28754]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)), false));
    // 2513:03c8  cdq   (32)  [x28754]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:03c9  idiv esi  (32)  [x28754]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x3c9u); }   // #DE: int 0, then again
    // 2513:03cb  mov dword ptr [edi + 0x14], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.a.e);
    // 2513:03ce  mov eax, dword ptr [ecx + 0x24]  (32)  [x28754]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)));
    // 2513:03d1  sub eax, dword ptr [ebx + 0x24]  (32)  [x28754]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x24u)), false));
    // 2513:03d4  cdq   (32)  [x28754]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:03d5  idiv esi  (32)  [x28754]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x3d5u); }   // #DE: int 0, then again
    // 2513:03d7  mov dword ptr [edi + 0x1c], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x1cu), c.a.e);
    // 2513:03da  mov ax, word ptr [ecx + 0x10]  (32)  [x28754]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2513:03de  sub ax, word ptr [ebx + 0x10]  (32)  [x28754]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2513:03e2  shl eax, 0x10  (32)  [x28754]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:03e5  cdq   (32)  [x28754]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:03e6  idiv esi  (32)  [x28754]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x3e6u); }   // #DE: int 0, then again
    // 2513:03e8  mov dword ptr [edi + 0xc], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2513:03eb  pop esi  (32)  [x28754]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2513:03ec  mov bp, word ptr [0x17dc]  (32)  [x28754]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17dcu)));
    // 2513:03f2  movzx ecx, bp  (32)  [x28754]
    c.c.e = (uint32_t)(c.bp.x);
    // 2513:03f5  add ecx, ecx  (32)  [x28754]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.c.e, false));
    // 2513:03f7  inc ecx  (32)  [x28754]
    c.c.e = (uint32_t)(c.inc<32>(c.c.e, false));
    // 2513:03f8  imul eax, ecx  (32)  [x28754]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, c.c.e));
    // 2513:03fb  mov dx, word ptr [ebx + 0x10]  (32)  [x28754]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2513:03ff  shl edx, 0x10  (32)  [x28754]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2513:0402  mov dx, 0x8000  (32)  [x28754]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2513:0406  sar eax, 1  (32)  [x28754]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:0408  add eax, edx  (32)  [x28754]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, false));
    // 2513:040a  mov dword ptr [edi + 8], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2513:040d  push eax  (32)  [x28754]
    c.push32(c.a.e);
    // 2513:040e  mov eax, dword ptr [edi + 0x14]  (32)  [x28754]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x14u)));
    // 2513:0411  imul eax, ecx  (32)  [x28754]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, c.c.e));
    // 2513:0414  sar eax, 1  (32)  [x28754]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:0416  add eax, dword ptr [ebx + 0x20]  (32)  [x28754]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)), false));
    // 2513:0419  mov dword ptr [edi + 0x10], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.e);
    // 2513:041c  mov eax, dword ptr [edi + 0x1c]  (32)  [x28754]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x1cu)));
    // 2513:041f  imul eax, ecx  (32)  [x28754]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, c.c.e));
    // 2513:0422  sar eax, 1  (32)  [x28754]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:0424  add eax, dword ptr [ebx + 0x24]  (32)  [x28754]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x24u)), true));
    // 2513:0427  mov dword ptr [edi + 0x18], eax  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x18u), c.a.e);
    // 2513:042a  pop eax  (32)  [x28754]
    { const uint32_t t0 = c.pop32(); c.a.e = (uint32_t)(t0); }
    // 2513:042b  mov ecx, 0xb84  (32)  [x28754]
    c.c.e = (uint32_t)(0xb84u);
L25560:
    if (c.tracing) c.traceAt(0x25560);
    // 2513:0430  mov ecx, dword ptr [ecx + 4]  (32)  [x158855]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2513:0433  cmp eax, dword ptr [ecx + 8]  (32)  [x158855]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)), true);
    // 2513:0436  jg 0x430  (32)  [x158855]
    if ((!c.zf && c.sf == c.of)) goto L25560;
L25568:
    if (c.tracing) c.traceAt(0x25568);
    // 2513:0438  mov edx, dword ptr [ecx]  (32)  [x28754]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2513:043a  mov dword ptr [edx + 4], edi  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.di.e);
    // 2513:043d  mov dword ptr [edi], edx  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e), c.dx_.e);
    // 2513:043f  mov dword ptr [edi + 4], ecx  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2513:0442  mov dword ptr [ecx], edi  (32)  [x28754]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
L25574:
    if (c.tracing) c.traceAt(0x25574);
    // 2513:0444  dec esi  (32)  [x66900]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2513:0445  jne 0x395  (32)  [x66900]
    if (!c.zf) goto L254c5;
L2557b:
    if (c.tracing) c.traceAt(0x2557b);
    // 2513:044b  pop esi  (32)  [x27988]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2513:044c  jmp 0x523  (32)  [x27988]
    goto L25653;
L25581:
    if (c.tracing) c.traceAt(0x25581);
    // 2513:0451  mov byte ptr [0x1804], 1  (32)  [x340126]
    c.w8(c.dsb + (uint16_t)(0x1804u), 0x1u);
    // 2513:0457  push esi  (32)  [x340126]
    c.push32(c.si.e);
    // 2513:0458  mov esi, dword ptr [ebx + 0x30]  (32)  [x340126]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
L2558b:
    if (c.tracing) c.traceAt(0x2558b);
    // 2513:045b  mov ecx, dword ptr [ebx + esi*8 + 0x30]  (32)  [x921514]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x30u)));
    // 2513:045f  mov bp, word ptr [0x17dc]  (32)  [x921514]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17dcu)));
    // 2513:0465  add bp, word ptr [ecx + 0x12]  (32)  [x921514]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true));
    // 2513:0469  jl 0x4d4  (32)  [x921514]
    if ((c.sf != c.of)) goto L25604;
L2559b:
    if (c.tracing) c.traceAt(0x2559b);
    // 2513:046b  mov edi, dword ptr [ebx + esi*8 + 0x2c]  (32)  [x557163]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 8 + 0x2cu)));
    // 2513:046f  je 0x4ce  (32)  [x557163]
    if (c.zf) goto L255fe;
L255a1:
    if (c.tracing) c.traceAt(0x255a1);
    // 2513:0471  mov word ptr [edi + 0x20], bp  (32)  [x362915]
    c.w16(c.dsb + (uint32_t)(c.di.e + 0x20u), c.bp.x);
    // 2513:0475  mov byte ptr [edi + 0x22], 1  (32)  [x362915]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x22u), 0x1u);
    // 2513:0479  mov dword ptr [edi + 0x24], ecx  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x24u), c.c.e);
    // 2513:047c  push esi  (32)  [x362915]
    c.push32(c.si.e);
    // 2513:047d  movzx esi, bp  (32)  [x362915]
    c.si.e = (uint32_t)(c.bp.x);
    // 2513:0480  mov eax, dword ptr [ecx + 0x20]  (32)  [x362915]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2513:0483  sub eax, dword ptr [ebx + 0x20]  (32)  [x362915]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)), false));
    // 2513:0486  cdq   (32)  [x362915]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:0487  idiv esi  (32)  [x362915]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x487u); }   // #DE: int 0, then again
    // 2513:0489  mov dword ptr [edi + 0x14], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x14u), c.a.e);
    // 2513:048c  sar eax, 1  (32)  [x362915]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:048e  add eax, dword ptr [ebx + 0x20]  (32)  [x362915]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x20u)), false));
    // 2513:0491  mov dword ptr [edi + 0x10], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x10u), c.a.e);
    // 2513:0494  mov eax, dword ptr [ecx + 0x24]  (32)  [x362915]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)));
    // 2513:0497  sub eax, dword ptr [ebx + 0x24]  (32)  [x362915]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x24u)), false));
    // 2513:049a  cdq   (32)  [x362915]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:049b  idiv esi  (32)  [x362915]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x49bu); }   // #DE: int 0, then again
    // 2513:049d  mov dword ptr [edi + 0x1c], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x1cu), c.a.e);
    // 2513:04a0  sar eax, 1  (32)  [x362915]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:04a2  add eax, dword ptr [ebx + 0x24]  (32)  [x362915]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0x24u)), false));
    // 2513:04a5  mov dword ptr [edi + 0x18], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x18u), c.a.e);
    // 2513:04a8  mov ax, word ptr [ecx + 0x10]  (32)  [x362915]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2513:04ac  sub ax, word ptr [ebx + 0x10]  (32)  [x362915]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)), false));
    // 2513:04b0  shl eax, 0x10  (32)  [x362915]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:04b3  cdq   (32)  [x362915]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 2513:04b4  idiv esi  (32)  [x362915]
    while (!c.idiv32(c.si.e)) { c.d32 = true; c.intr(0, 0x4b4u); }   // #DE: int 0, then again
    // 2513:04b6  mov dword ptr [edi + 0xc], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 2513:04b9  pop esi  (32)  [x362915]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2513:04ba  mov dx, word ptr [ebx + 0x10]  (32)  [x362915]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2513:04be  shl edx, 0x10  (32)  [x362915]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2513:04c1  mov dx, 0x8000  (32)  [x362915]
    c.dx_.x = (uint16_t)(0x8000u);
    // 2513:04c5  sar eax, 1  (32)  [x362915]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 2513:04c7  add eax, edx  (32)  [x362915]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.dx_.e, true));
    // 2513:04c9  mov dword ptr [edi + 8], eax  (32)  [x362915]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 2513:04cc  jmp 0x4da  (32)  [x362915]
    goto L2560a;
L255fe:
    if (c.tracing) c.traceAt(0x255fe);
    // 2513:04ce  mov byte ptr [edi + 0x22], 2  (32)  [x194248]
    c.w8(c.dsb + (uint32_t)(c.di.e + 0x22u), 0x2u);
    // 2513:04d2  jmp 0x4da  (32)  [x194248]
    goto L2560a;
L25604:
    if (c.tracing) c.traceAt(0x25604);
    // 2513:04d4  mov byte ptr [0x1804], 0  (32)  [x364351]
    c.w8(c.dsb + (uint16_t)(0x1804u), 0x0u);
L2560a:
    if (c.tracing) c.traceAt(0x2560a);
    // 2513:04da  dec esi  (32)  [x921514]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2513:04db  jne 0x45b  (32)  [x921514]
    if (!c.zf) goto L2558b;
L25611:
    if (c.tracing) c.traceAt(0x25611);
    // 2513:04e1  pop esi  (32)  [x340126]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 2513:04e2  cmp byte ptr [0x1804], 0  (32)  [x340126]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1804u)), 0x0u, true);
    // 2513:04e8  je 0x523  (32)  [x340126]
    if (c.zf) goto L25653;
L2561a:
    if (c.tracing) c.traceAt(0x2561a);
    // 2513:04ea  mov ecx, 0xb60  (32)  [x77807]
    c.c.e = (uint32_t)(0xb60u);
    // 2513:04ef  mov dx, word ptr [ebx + 0x12]  (32)  [x77807]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x12u)));
L25623:
    if (c.tracing) c.traceAt(0x25623);
    // 2513:04f3  mov ecx, dword ptr [ecx + 0xc]  (32)  [x1805524]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2513:04f6  cmp dx, word ptr [ecx + 0x12]  (32)  [x1805524]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2513:04fa  jg 0x4f3  (32)  [x1805524]
    if ((!c.zf && c.sf == c.of)) goto L25623;
L2562c:
    if (c.tracing) c.traceAt(0x2562c);
    // 2513:04fc  jl 0x514  (32)  [x77807]
    if ((c.sf != c.of)) goto L25644;
L2562e:
    if (c.tracing) c.traceAt(0x2562e);
    // 2513:04fe  mov di, word ptr [ebx + 0x10]  (32)  [x38445]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2513:0502  mov ecx, dword ptr [ecx + 4]  (32)  [x38445]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
L25635:
    if (c.tracing) c.traceAt(0x25635);
    // 2513:0505  mov ecx, dword ptr [ecx + 0xc]  (32)  [x90498]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0xcu)));
    // 2513:0508  cmp dx, word ptr [ecx + 0x12]  (32)  [x90498]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x12u)), true);
    // 2513:050c  jl 0x514  (32)  [x90498]
    if ((c.sf != c.of)) goto L25644;
L2563e:
    if (c.tracing) c.traceAt(0x2563e);
    // 2513:050e  cmp di, word ptr [ecx + 0x10]  (32)  [x75662]
    c.sub<16>(c.di.x, c.r16(c.dsb + (uint32_t)(c.c.e + 0x10u)), true);
    // 2513:0512  jg 0x505  (32)  [x75662]
    if ((!c.zf && c.sf == c.of)) goto L25635;
L25644:
    if (c.tracing) c.traceAt(0x25644);
    // 2513:0514  mov edx, dword ptr [ecx + 4]  (32)  [x77807]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x4u)));
    // 2513:0517  mov dword ptr [edx + 0xc], ebx  (32)  [x77807]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0xcu), c.b.e);
    // 2513:051a  mov dword ptr [ebx + 4], edx  (32)  [x77807]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.dx_.e);
    // 2513:051d  mov dword ptr [ebx + 0xc], ecx  (32)  [x77807]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0xcu), c.c.e);
    // 2513:0520  mov dword ptr [ecx + 4], ebx  (32)  [x77807]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.b.e);
L25653:
    if (c.tracing) c.traceAt(0x25653);
    // 2513:0523  mov ebx, dword ptr [ebx]  (32)  [x396703]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2513:0525  cmp ebx, esi  (32)  [x396703]
    c.sub<32>(c.b.e, c.si.e, true);
    // 2513:0527  jne 0x373  (32)  [x396703]
    if (!c.zf) goto L254a3;
L2565d:
    if (c.tracing) c.traceAt(0x2565d);
    // 2513:052d  add esi, 0x10  (32)  [x14248]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x10u, false));
    // 2513:0530  cmp esi, dword ptr [0x17c0]  (32)  [x14248]
    c.sub<32>(c.si.e, c.r32(c.dsb + (uint16_t)(0x17c0u)), true);
    // 2513:0535  jne 0x369  (32)  [x14248]
    if (!c.zf) goto L25499;
L2566b:
    if (c.tracing) c.traceAt(0x2566b);
    // 2513:053b  mov word ptr [0x17d8], 0  (32)  [x1781]
    c.w16(c.dsb + (uint16_t)(0x17d8u), 0x0u);
    // 2513:0543  mov eax, dword ptr [0xb6c]  (32)  [x1781]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb6cu)));
    // 2513:0547  mov dword ptr [0x17d4], eax  (32)  [x1781]
    c.w32(c.dsb + (uint16_t)(0x17d4u), c.a.e);
    // 2513:054b  mov ax, word ptr [0x17e0]  (32)  [x1781]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17e0u)));
L25680:
    if (c.tracing) c.traceAt(0x25680);
    // 2513:0550  mov es, ax  (32)  [x356200]
    c.loadEs(c.a.x);
    // 2513:0553  mov ebx, dword ptr [0xb88]  (32)  [x356200]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb88u)));
    // 2513:0558  cmp ebx, 0xb90  (32)  [x356200]
    c.sub<32>(c.b.e, 0xb90u, true);
    // 2513:055e  je 0x6ed  (32)  [x356200]
    if (c.zf) goto L2581d;
L25694:
    if (c.tracing) c.traceAt(0x25694);
    // 2513:0564  mov esi, dword ptr [ebx + 0x30]  (32)  [x9143135]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x30u)));
    // 2513:0567  mov eax, dword ptr [0xba4]  (32)  [x9143135]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xba4u)));
    // 2513:056b  mov dword ptr [0x17d0], eax  (32)  [x9143135]
    c.w32(c.dsb + (uint16_t)(0x17d0u), c.a.e);
    // 2513:056f  mov ax, word ptr [ebx + 0xa]  (32)  [x9143135]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e + 0xau)));
    // 2513:0573  or ax, ax  (32)  [x9143135]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 2513:0576  jns 0x57a  (32)  [x9143135]
    if (!c.sf) goto L256aa;
L256a8:
    if (c.tracing) c.traceAt(0x256a8);
    // 2513:0578  xor eax, eax  (32)  [x569216]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L256aa:
    if (c.tracing) c.traceAt(0x256aa);
    // 2513:057a  cmp ax, 0x140  (32)  [x9143135]
    c.sub<16>(c.a.x, 0x140u, true);
    // 2513:057e  jbe 0x584  (32)  [x9143135]
    if ((c.cf || c.zf)) goto L256b4;
L256b0:
    if (c.tracing) c.traceAt(0x256b0);
    // 2513:0580  mov ax, 0x140  (32)  [x563628]
    c.a.x = (uint16_t)(0x140u);
L256b4:
    if (c.tracing) c.traceAt(0x256b4);
    // 2513:0584  mov word ptr [0x1802], ax  (32)  [x9143135]
    c.w16(c.dsb + (uint16_t)(0x1802u), c.a.x);
L256b9:
    if (c.tracing) c.traceAt(0x256b9);
    // 2513:0589  mov ecx, dword ptr [ebx + esi*4 + 0x30]  (32)  [x12068150]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + c.si.e * 4 + 0x30u)));
    // 2513:058d  xor byte ptr [ecx + 0x1b], 1  (32)  [x12068150]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x1bu), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x1bu))) ^ (0x1u), true));
    // 2513:0591  je 0x5d0  (32)  [x12068150]
    if (c.zf) goto L25700;
L256c3:
    if (c.tracing) c.traceAt(0x256c3);
    // 2513:0593  mov eax, dword ptr [ecx + 0x10]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x10u)));
    // 2513:0596  mov edx, 0xb9c  (32)  [x6034075]
    c.dx_.e = (uint32_t)(0xb9cu);
L256cb:
    if (c.tracing) c.traceAt(0x256cb);
    // 2513:059b  mov edx, dword ptr [edx + 8]  (32)  [x8721163]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)));
    // 2513:059e  cmp eax, dword ptr [edx + 0x10]  (32)  [x8721163]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x10u)), true);
    // 2513:05a1  jg 0x59b  (32)  [x8721163]
    if ((!c.zf && c.sf == c.of)) goto L256cb;
L256d3:
    if (c.tracing) c.traceAt(0x256d3);
    // 2513:05a3  mov eax, dword ptr [edx]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2513:05a5  mov dword ptr [eax + 8], ecx  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.c.e);
    // 2513:05a8  mov dword ptr [ecx], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2513:05aa  mov dword ptr [ecx + 8], edx  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x8u), c.dx_.e);
    // 2513:05ad  mov dword ptr [edx], ecx  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
    // 2513:05af  lea eax, [ecx + 0x34]  (32)  [x6034075]
    c.a.e = (uint32_t)((uint32_t)(c.c.e + 0x34u));
    // 2513:05b2  mov dword ptr [ecx + 0x38], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x38u), c.a.e);
    // 2513:05b5  mov dword ptr [ecx + 0x34], 0  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x34u), 0x0u);
    // 2513:05bc  mov eax, dword ptr [ebx + 8]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 2513:05bf  mov dword ptr [ecx + 0x1c], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x1cu), c.a.e);
    // 2513:05c2  mov eax, dword ptr [ebx + 0x10]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2513:05c5  mov dword ptr [ecx + 0x20], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x20u), c.a.e);
    // 2513:05c8  mov eax, dword ptr [ebx + 0x18]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)));
    // 2513:05cb  mov dword ptr [ecx + 0x24], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x24u), c.a.e);
    // 2513:05ce  jmp 0x61a  (32)  [x6034075]
    goto L2574a;
L25700:
    if (c.tracing) c.traceAt(0x25700);
    // 2513:05d0  mov eax, dword ptr [ecx]  (32)  [x6034075]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e)));
    // 2513:05d2  mov edx, dword ptr [ecx + 8]  (32)  [x6034075]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2513:05d5  mov dword ptr [eax + 8], edx  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x8u), c.dx_.e);
    // 2513:05d8  mov dword ptr [edx], eax  (32)  [x6034075]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2513:05da  cmp dword ptr [ecx + 0x34], 0  (32)  [x6034075]
    c.sub<32>(c.r32(c.dsb + (uint32_t)(c.c.e + 0x34u)), 0x0u, true);
    // 2513:05de  je 0x61a  (32)  [x6034075]
    if (c.zf) goto L2574a;
L25710:
    if (c.tracing) c.traceAt(0x25710);
    // 2513:05e0  cmp ecx, dword ptr [0x17d0]  (32)  [x5297919]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0x17d0u)), true);
    // 2513:05e5  jne 0x5f3  (32)  [x5297919]
    if (!c.zf) goto L25723;
L25717:
    if (c.tracing) c.traceAt(0x25717);
    // 2513:05e7  mov edx, dword ptr [ecx + 0x38]  (32)  [x4274199]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:05ea  mov ax, word ptr [0x1802]  (32)  [x4274199]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1802u)));
    // 2513:05ef  mov word ptr [edx + 6], ax  (32)  [x4274199]
    c.w16(c.dsb + (uint32_t)(c.dx_.e + 0x6u), c.a.x);
L25723:
    if (c.tracing) c.traceAt(0x25723);
    // 2513:05f3  mov eax, dword ptr [ebx + 8]  (32)  [x5297919]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 2513:05f6  mov dword ptr [ecx + 0x28], eax  (32)  [x5297919]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x28u), c.a.e);
    // 2513:05f9  mov eax, dword ptr [ebx + 0x10]  (32)  [x5297919]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)));
    // 2513:05fc  mov dword ptr [ecx + 0x2c], eax  (32)  [x5297919]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x2cu), c.a.e);
    // 2513:05ff  mov eax, dword ptr [ebx + 0x18]  (32)  [x5297919]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)));
    // 2513:0602  mov dword ptr [ecx + 0x30], eax  (32)  [x5297919]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x30u), c.a.e);
    // 2513:0605  call 0x7c4  (32)  [x5297919]
    c.push32(0x60au); code_22(c, 0x258f4u); if (c.ip != 0x60au) c.badReturn(0x25735);
L2573a:
    if (c.tracing) c.traceAt(0x2573a);
    // 2513:060a  mov eax, dword ptr [0xbe8]  (32)  [x5297919]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbe8u)));
    // 2513:060e  mov edx, dword ptr [ecx + 0x38]  (32)  [x5297919]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:0611  mov dword ptr [edx], eax  (32)  [x5297919]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2513:0613  mov eax, dword ptr [ecx + 0x34]  (32)  [x5297919]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x34u)));
    // 2513:0616  mov dword ptr [0xbe8], eax  (32)  [x5297919]
    c.w32(c.dsb + (uint16_t)(0xbe8u), c.a.e);
L2574a:
    if (c.tracing) c.traceAt(0x2574a);
    // 2513:061a  dec esi  (32)  [x12068150]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2513:061b  jne 0x589  (32)  [x12068150]
    if (!c.zf) goto L256b9;
L25751:
    if (c.tracing) c.traceAt(0x25751);
    // 2513:0621  mov ecx, dword ptr [0x17d0]  (32)  [x9143135]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x17d0u)));
    // 2513:0626  cmp ecx, dword ptr [0xba4]  (32)  [x9143135]
    c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xba4u)), true);
    // 2513:062b  je 0x656  (32)  [x9143135]
    if (c.zf) goto L25786;
L2575d:
    if (c.tracing) c.traceAt(0x2575d);
    // 2513:062d  mov dx, word ptr [0x1802]  (32)  [x6303334]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1802u)));
    // 2513:0633  mov eax, dword ptr [ecx + 0x38]  (32)  [x6303334]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:0636  mov word ptr [eax + 6], dx  (32)  [x6303334]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), c.dx_.x);
    // 2513:063a  mov ecx, dword ptr [0xba4]  (32)  [x6303334]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xba4u)));
    // 2513:063f  mov eax, dword ptr [0xbe8]  (32)  [x6303334]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbe8u)));
    // 2513:0643  mov word ptr [eax + 4], dx  (32)  [x6303334]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x4u), c.dx_.x);
    // 2513:0647  mov edx, dword ptr [eax]  (32)  [x6303334]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e)));
    // 2513:0649  mov dword ptr [0xbe8], edx  (32)  [x6303334]
    c.w32(c.dsb + (uint16_t)(0xbe8u), c.dx_.e);
    // 2513:064e  mov edx, dword ptr [ecx + 0x38]  (32)  [x6303334]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:0651  mov dword ptr [ecx + 0x38], eax  (32)  [x6303334]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x38u), c.a.e);
    // 2513:0654  mov dword ptr [edx], eax  (32)  [x6303334]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
L25786:
    if (c.tracing) c.traceAt(0x25786);
    // 2513:0656  dec word ptr [ebx + 0x20]  (32)  [x9143135]
    c.w16(c.dsb + (uint32_t)(c.b.e + 0x20u), c.dec<16>(c.r16(c.dsb + (uint32_t)(c.b.e + 0x20u)), true));
    // 2513:065a  jne 0x694  (32)  [x9143135]
    if (!c.zf) goto L257c4;
L2578c:
    if (c.tracing) c.traceAt(0x2578c);
    // 2513:065c  mov eax, dword ptr [ebx + 0x24]  (32)  [x262982]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x24u)));
    // 2513:065f  mov esi, dword ptr [eax + 0x30]  (32)  [x262982]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x30u)));
L25792:
    if (c.tracing) c.traceAt(0x25792);
    // 2513:0662  mov ecx, dword ptr [eax + esi*8 + 0x2c]  (32)  [x750053]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x2cu)));
    // 2513:0666  xor byte ptr [ecx + 0x22], 1  (32)  [x750053]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x22u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x22u))) ^ (0x1u), true));
    // 2513:066a  je 0x674  (32)  [x750053]
    if (c.zf) goto L257a4;
L2579c:
    if (c.tracing) c.traceAt(0x2579c);
    // 2513:066c  mov word ptr [ecx + 0x20], 0  (32)  [x481959]
    c.w16(c.dsb + (uint32_t)(c.c.e + 0x20u), 0x0u);
    // 2513:0672  jmp 0x68d  (32)  [x481959]
    goto L257bd;
L257a4:
    if (c.tracing) c.traceAt(0x257a4);
    // 2513:0674  mov edx, dword ptr [ecx + 8]  (32)  [x268094]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2513:0677  mov edi, ebx  (32)  [x268094]
    c.di.e = (uint32_t)(c.b.e);
L257a9:
    if (c.tracing) c.traceAt(0x257a9);
    // 2513:0679  mov edi, dword ptr [edi]  (32)  [x375719]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2513:067b  cmp edx, dword ptr [edi + 8]  (32)  [x375719]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2513:067e  jle 0x679  (32)  [x375719]
    if ((c.zf || c.sf != c.of)) goto L257a9;
L257b0:
    if (c.tracing) c.traceAt(0x257b0);
    // 2513:0680  mov edx, dword ptr [edi + 4]  (32)  [x268094]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2513:0683  mov dword ptr [edi + 4], ecx  (32)  [x268094]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2513:0686  mov dword ptr [ecx], edi  (32)  [x268094]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2513:0688  mov dword ptr [ecx + 4], edx  (32)  [x268094]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2513:068b  mov dword ptr [edx], ecx  (32)  [x268094]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L257bd:
    if (c.tracing) c.traceAt(0x257bd);
    // 2513:068d  dec esi  (32)  [x750053]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2513:068e  jne 0x662  (32)  [x750053]
    if (!c.zf) goto L25792;
L257c0:
    if (c.tracing) c.traceAt(0x257c0);
    // 2513:0690  mov al, 0xff  (32)  [x262982]
    c.a.l = (uint8_t)(0xffu);
    // 2513:0692  or al, al  (32)  [x262982]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
L257c4:
    if (c.tracing) c.traceAt(0x257c4);
    // 2513:0694  jns 0x6a2  (32)  [x9143135]
    if (!c.sf) goto L257d2;
L257c6:
    if (c.tracing) c.traceAt(0x257c6);
    // 2513:0696  mov eax, dword ptr [ebx]  (32)  [x365387]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2513:0698  mov ecx, dword ptr [ebx + 4]  (32)  [x365387]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2513:069b  mov dword ptr [eax + 4], ecx  (32)  [x365387]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2513:069e  mov dword ptr [ecx], eax  (32)  [x365387]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2513:06a0  jmp 0x6de  (32)  [x365387]
    goto L2580e;
L257d2:
    if (c.tracing) c.traceAt(0x257d2);
    // 2513:06a2  mov eax, dword ptr [ebx + 0x14]  (32)  [x8777748]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x14u)));
    // 2513:06a5  add dword ptr [ebx + 0x10], eax  (32)  [x8777748]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x10u), c.add<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x10u)), c.a.e, false));
    // 2513:06a8  mov eax, dword ptr [ebx + 0x1c]  (32)  [x8777748]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x1cu)));
    // 2513:06ab  add dword ptr [ebx + 0x18], eax  (32)  [x8777748]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x18u), c.add<32>(c.r32(c.dsb + (uint32_t)(c.b.e + 0x18u)), c.a.e, false));
    // 2513:06ae  mov eax, dword ptr [ebx + 8]  (32)  [x8777748]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x8u)));
    // 2513:06b1  add eax, dword ptr [ebx + 0xc]  (32)  [x8777748]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.b.e + 0xcu)), false));
    // 2513:06b4  mov dword ptr [ebx + 8], eax  (32)  [x8777748]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x8u), c.a.e);
    // 2513:06b7  mov edx, dword ptr [ebx]  (32)  [x8777748]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2513:06b9  cmp eax, dword ptr [edx + 8]  (32)  [x8777748]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2513:06bc  jg 0x6de  (32)  [x8777748]
    if ((!c.zf && c.sf == c.of)) goto L2580e;
L257ee:
    if (c.tracing) c.traceAt(0x257ee);
    // 2513:06be  mov edx, dword ptr [edx]  (32)  [x1511159]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e)));
    // 2513:06c0  cmp eax, dword ptr [edx + 8]  (32)  [x1511159]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x8u)), true);
    // 2513:06c3  jle 0x6be  (32)  [x1511159]
    if ((c.zf || c.sf != c.of)) goto L257ee;
L257f5:
    if (c.tracing) c.traceAt(0x257f5);
    // 2513:06c5  mov esi, dword ptr [edx + 4]  (32)  [x1230080]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 2513:06c8  mov eax, dword ptr [ebx]  (32)  [x1230080]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e)));
    // 2513:06ca  mov ecx, dword ptr [ebx + 4]  (32)  [x1230080]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2513:06cd  mov dword ptr [eax + 4], ecx  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.a.e + 0x4u), c.c.e);
    // 2513:06d0  mov dword ptr [ecx], eax  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.a.e);
    // 2513:06d2  mov dword ptr [edx + 4], ebx  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.dx_.e + 0x4u), c.b.e);
    // 2513:06d5  mov dword ptr [ebx], edx  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.b.e), c.dx_.e);
    // 2513:06d7  mov dword ptr [ebx + 4], esi  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.b.e + 0x4u), c.si.e);
    // 2513:06da  mov dword ptr [esi], ebx  (32)  [x1230080]
    c.w32(c.dsb + (uint32_t)(c.si.e), c.b.e);
    // 2513:06dc  mov ebx, eax  (32)  [x1230080]
    c.b.e = (uint32_t)(c.a.e);
L2580e:
    if (c.tracing) c.traceAt(0x2580e);
    // 2513:06de  mov ebx, dword ptr [ebx + 4]  (32)  [x9143135]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.b.e + 0x4u)));
    // 2513:06e1  cmp ebx, 0xb90  (32)  [x9143135]
    c.sub<32>(c.b.e, 0xb90u, true);
    // 2513:06e7  jne 0x564  (32)  [x9143135]
    if (!c.zf) goto L25694;
L2581d:
    if (c.tracing) c.traceAt(0x2581d);
    // 2513:06ed  mov ecx, 0xbac  (32)  [x356200]
    c.c.e = (uint32_t)(0xbacu);
    // 2513:06f2  mov eax, dword ptr [0xbe4]  (32)  [x356200]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbe4u)));
    // 2513:06f6  mov word ptr [eax + 6], 0x140  (32)  [x356200]
    c.w16(c.dsb + (uint32_t)(c.a.e + 0x6u), 0x140u);
    // 2513:06fc  call 0x7c4  (32)  [x356200]
    c.push32(0x701u); code_22(c, 0x258f4u); if (c.ip != 0x701u) c.badReturn(0x2582c);
L25831:
    if (c.tracing) c.traceAt(0x25831);
    // 2513:0701  cmp dword ptr [0xbe4], 0xbec  (32)  [x356200]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbe4u)), 0xbecu, true);
    // 2513:070a  je 0x728  (32)  [x356200]
    if (c.zf) goto L25858;
L2583c:
    if (c.tracing) c.traceAt(0x2583c);
    // 2513:070c  mov eax, dword ptr [0xbe8]  (32)  [x356200]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbe8u)));
    // 2513:0710  mov edx, dword ptr [0xbe4]  (32)  [x356200]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbe4u)));
    // 2513:0715  mov dword ptr [edx], eax  (32)  [x356200]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.a.e);
    // 2513:0717  mov eax, dword ptr [0xbec]  (32)  [x356200]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbecu)));
    // 2513:071b  mov dword ptr [0xbe8], eax  (32)  [x356200]
    c.w32(c.dsb + (uint16_t)(0xbe8u), c.a.e);
    // 2513:071f  mov dword ptr [0xbe4], 0xbec  (32)  [x356200]
    c.w32(c.dsb + (uint16_t)(0xbe4u), 0xbecu);
L25858:
    if (c.tracing) c.traceAt(0x25858);
    // 2513:0728  inc word ptr [0x17d8]  (32)  [x356200]
    c.w16(c.dsb + (uint16_t)(0x17d8u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x17d8u)), false));
    // 2513:072e  mov bx, word ptr [0x17d8]  (32)  [x356200]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x17d8u)));
    // 2513:0734  cmp bx, 0xc8  (32)  [x356200]
    c.sub<16>(c.b.x, 0xc8u, true);
    // 2513:0739  je 0x78a  (32)  [x356200]
    if (c.zf) goto L258ba;
L2586b:
    if (c.tracing) c.traceAt(0x2586b);
    // 2513:073b  mov eax, dword ptr [0x17d4]  (32)  [x354419]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x17d4u)));
    // 2513:073f  cmp word ptr [eax + 0x12], bx  (32)  [x354419]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2513:0743  jne 0x77e  (32)  [x354419]
    if (!c.zf) goto L258ae;
L25875:
    if (c.tracing) c.traceAt(0x25875);
    // 2513:0745  mov esi, dword ptr [eax + 0x30]  (32)  [x77807]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0x30u)));
L25878:
    if (c.tracing) c.traceAt(0x25878);
    // 2513:0748  mov ecx, dword ptr [eax + esi*8 + 0x2c]  (32)  [x173198]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + c.si.e * 8 + 0x2cu)));
    // 2513:074c  xor byte ptr [ecx + 0x22], 1  (32)  [x173198]
    c.w8(c.dsb + (uint32_t)(c.c.e + 0x22u), c.logic<8>((c.r8(c.dsb + (uint32_t)(c.c.e + 0x22u))) ^ (0x1u), true));
    // 2513:0750  jne 0x76e  (32)  [x173198]
    if (!c.zf) goto L2589e;
L25882:
    if (c.tracing) c.traceAt(0x25882);
    // 2513:0752  mov edx, dword ptr [ecx + 8]  (32)  [x95040]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x8u)));
    // 2513:0755  mov edi, 0xb90  (32)  [x95040]
    c.di.e = (uint32_t)(0xb90u);
L2588a:
    if (c.tracing) c.traceAt(0x2588a);
    // 2513:075a  mov edi, dword ptr [edi]  (32)  [x1977283]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e)));
    // 2513:075c  cmp edx, dword ptr [edi + 8]  (32)  [x1977283]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint32_t)(c.di.e + 0x8u)), true);
    // 2513:075f  jle 0x75a  (32)  [x1977283]
    if ((c.zf || c.sf != c.of)) goto L2588a;
L25891:
    if (c.tracing) c.traceAt(0x25891);
    // 2513:0761  mov edx, dword ptr [edi + 4]  (32)  [x95040]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.di.e + 0x4u)));
    // 2513:0764  mov dword ptr [edi + 4], ecx  (32)  [x95040]
    c.w32(c.dsb + (uint32_t)(c.di.e + 0x4u), c.c.e);
    // 2513:0767  mov dword ptr [ecx], edi  (32)  [x95040]
    c.w32(c.dsb + (uint32_t)(c.c.e), c.di.e);
    // 2513:0769  mov dword ptr [ecx + 4], edx  (32)  [x95040]
    c.w32(c.dsb + (uint32_t)(c.c.e + 0x4u), c.dx_.e);
    // 2513:076c  mov dword ptr [edx], ecx  (32)  [x95040]
    c.w32(c.dsb + (uint32_t)(c.dx_.e), c.c.e);
L2589e:
    if (c.tracing) c.traceAt(0x2589e);
    // 2513:076e  dec esi  (32)  [x173198]
    c.si.e = (uint32_t)(c.dec<32>(c.si.e, true));
    // 2513:076f  jne 0x748  (32)  [x173198]
    if (!c.zf) goto L25878;
L258a1:
    if (c.tracing) c.traceAt(0x258a1);
    // 2513:0771  mov eax, dword ptr [eax + 0xc]  (32)  [x77807]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e + 0xcu)));
    // 2513:0774  cmp word ptr [eax + 0x12], bx  (32)  [x77807]
    c.sub<16>(c.r16(c.dsb + (uint32_t)(c.a.e + 0x12u)), c.b.x, true);
    // 2513:0778  je 0x745  (32)  [x77807]
    if (c.zf) goto L25875;
L258aa:
    if (c.tracing) c.traceAt(0x258aa);
    // 2513:077a  mov dword ptr [0x17d4], eax  (32)  [x39362]
    c.w32(c.dsb + (uint16_t)(0x17d4u), c.a.e);
L258ae:
    if (c.tracing) c.traceAt(0x258ae);
    // 2513:077e  mov ax, es  (32)  [x354419]
    c.a.x = (uint16_t)(c.es);
    // 2513:0781  add ax, 0x14  (32)  [x354419]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
    // 2513:0785  jmp 0x550  (32)  [x354419]
    goto L25680;
L258ba:
    if (c.tracing) c.traceAt(0x258ba);
    // 2513:078a  jmp 0x20  (32)  [x1781]
    goto L25150;
L258bf:
    if (c.tracing) c.traceAt(0x258bf);
    // 2513:078f  mov ah, 0x3c  (32)  [x1]
    c.a.h = (uint8_t)(0x3cu);
L258c1:
    if (c.tracing) c.traceAt(0x258c1);
    // 2513:0791  mov dx, 0x3c8  (32)  [x16]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 2513:0795  xor al, al  (32)  [x16]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 2513:0797  out dx, al  (32)  [x16]
    c.ip = 0x798u; c.d32 = true; c.out8(c.dx_.x, c.a.l);
    // 2513:0798  inc dx  (32)  [x16]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 2513:079a  mov al, ah  (32)  [x16]
    c.a.l = (uint8_t)(c.a.h);
    // 2513:079c  mov cx, 0x300  (32)  [x16]
    c.c.x = (uint16_t)(0x300u);
L258d0:
    if (c.tracing) c.traceAt(0x258d0);
    // 2513:07a0  out dx, al  (32)  [x12288]
    c.ip = 0x7a1u; c.d32 = true; c.out8(c.dx_.x, c.a.l);
    // 2513:07a1  loop 0x7a0  (32)  [x12288]
    c.c.e = (uint32_t)(c.c.e - 1); if (c.c.e) goto L258d0;
L258d3:
    if (c.tracing) c.traceAt(0x258d3);
    // 2513:07a3  push ax  (32)  [x16]
    c.push16(c.a.x);
    // 2513:07a5  mov bx, 0xe  (32)  [x16]
    c.b.x = (uint16_t)(0xeu);
    // 2513:07a9  int 0xff  (32)  [x16]
    c.ip = 0x7abu; c.d32 = true; c.intr(0xff, 0x7abu);
L258db:
    if (c.tracing) c.traceAt(0x258db);
    // 2513:07ab  pop ax  (32)  [x16]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 2513:07ad  sub ah, 4  (32)  [x16]
    c.a.h = (uint8_t)(c.sub<8>(c.a.h, 0x4u, true));
    // 2513:07b0  jns 0x791  (32)  [x16]
    if (!c.sf) goto L258c1;
L258e2:
    if (c.tracing) c.traceAt(0x258e2);
    // 2513:07b2  xor ax, ax  (32)  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 2513:07b5  mov bx, 2  (32)  [x1]
    c.b.x = (uint16_t)(0x2u);
    // 2513:07b9  int 0xfb  (32)  [x1]
    c.ip = 0x7bbu; c.d32 = true; c.intr(0xfb, 0x7bbu);
L258eb:
    if (c.tracing) c.traceAt(0x258eb);
    // 2513:07bb  mov ax, 0x4c00  (32)  [x1]
    c.a.x = (uint16_t)(0x4c00u);
    // 2513:07bf  int 0x21  (32)  [x1]
    c.ip = 0x7c1u; c.d32 = true; c.intr(0x21, 0x7c1u);
    c.notTranslated(0x258f1, "fall-through");
L258f4:
    if (c.tracing) c.traceAt(0x258f4);
    // 2513:07c4  pushal   (32)  [x5654119]
    { const uint32_t t0 = c.sp.e; c.push32(c.a.e); c.push32(c.c.e); c.push32(c.dx_.e); c.push32(c.b.e); c.push32(t0); c.push32(c.bp.e); c.push32(c.si.e); c.push32(c.di.e); }
    // 2513:07c5  mov al, byte ptr [ecx + 0x18]  (32)  [x5654119]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.c.e + 0x18u)));
    // 2513:07c8  or al, al  (32)  [x5654119]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 2513:07ca  je 0x8e0  (32)  [x5654119]
    if (c.zf) goto L25a10;
L25900:
    if (c.tracing) c.traceAt(0x25900);
    // 2513:07d0  mov ebx, dword ptr [ecx + 0x1c]  (32)  [x5297919]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x1cu)));
    // 2513:07d3  mov esi, ebx  (32)  [x5297919]
    c.si.e = (uint32_t)(c.b.e);
    // 2513:07d5  sub ebx, dword ptr [ecx + 0x28]  (32)  [x5297919]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x28u)), true));
    // 2513:07d8  je 0x8db  (32)  [x5297919]
    if (c.zf) goto L25a0b;
L2590e:
    if (c.tracing) c.traceAt(0x2590e);
    // 2513:07de  mov eax, dword ptr [ecx + 0x20]  (32)  [x5245623]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)));
    // 2513:07e1  sub eax, dword ptr [ecx + 0x2c]  (32)  [x5245623]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x2cu)), false));
    // 2513:07e4  mov edx, eax  (32)  [x5245623]
    c.dx_.e = (uint32_t)(c.a.e);
    // 2513:07e6  sar edx, 0x10  (32)  [x5245623]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2513:07e9  shl eax, 0x10  (32)  [x5245623]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
L2591c:
    if (c.tracing) c.traceAt(0x2591c);
    // 2513:07ec  idiv ebx  (32)  [x5246275]
    while (!c.idiv32(c.b.e)) { c.d32 = true; c.intr(0, 0x7ecu); }   // #DE: int 0, then again
    // 2513:07ee  mov dword ptr [0xaa9], eax  (32)  [x5246275]
    c.w32(c.dsb + (uint32_t)(0xaa9u), c.a.e);
    // 2513:07f3  mov eax, dword ptr [ecx + 0x30]  (32)  [x5246275]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x30u)));
    // 2513:07f6  sub eax, dword ptr [ecx + 0x24]  (32)  [x5246275]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), false));
    // 2513:07f9  mov edx, eax  (32)  [x5246275]
    c.dx_.e = (uint32_t)(c.a.e);
    // 2513:07fb  sar edx, 0x10  (32)  [x5246275]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 2513:07fe  shl eax, 0x10  (32)  [x5246275]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
L25931:
    if (c.tracing) c.traceAt(0x25931);
    // 2513:0801  idiv ebx  (32)  [x5246287]
    while (!c.idiv32(c.b.e)) { c.d32 = true; c.intr(0, 0x801u); }   // #DE: int 0, then again
    // 2513:0803  mov edi, eax  (32)  [x5246287]
    c.di.e = (uint32_t)(c.a.e);
    // 2513:0805  mov eax, edi  (32)  [x5246287]
    c.a.e = (uint32_t)(c.di.e);
    // 2513:0807  mov dword ptr [0xac0], eax  (32)  [x5246287]
    c.w32(c.dsb + (uint32_t)(0xac0u), c.a.e);
    // 2513:080c  imul esi  (32)  [x5246287]
    c.imul32(c.si.e);
    // 2513:080e  mov ax, dx  (32)  [x5246287]
    c.a.x = (uint16_t)(c.dx_.x);
    // 2513:0811  ror eax, 0x10  (32)  [x5246287]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0814  add eax, dword ptr [ecx + 0x24]  (32)  [x5246287]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x24u)), false));
    // 2513:0817  mov dword ptr [0xac5], eax  (32)  [x5246287]
    c.w32(c.dsb + (uint32_t)(0xac5u), c.a.e);
    // 2513:081c  mov eax, edi  (32)  [x5246287]
    c.a.e = (uint32_t)(c.di.e);
    // 2513:081e  mov word ptr [0xae4], ax  (32)  [x5246287]
    c.w16(c.dsb + (uint32_t)(0xae4u), c.a.x);
    // 2513:0824  shr eax, 0x10  (32)  [x5246287]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0827  and al, byte ptr [0x17fe]  (32)  [x5246287]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(0x17feu))), false));
    // 2513:082c  mov byte ptr [0xae8], al  (32)  [x5246287]
    c.w8(c.dsb + (uint32_t)(0xae8u), c.a.l);
    // 2513:0831  mov eax, dword ptr [0xaa9]  (32)  [x5246287]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(0xaa9u)));
    // 2513:0836  mov edi, eax  (32)  [x5246287]
    c.di.e = (uint32_t)(c.a.e);
    // 2513:0838  imul esi  (32)  [x5246287]
    c.imul32(c.si.e);
    // 2513:083a  mov ax, dx  (32)  [x5246287]
    c.a.x = (uint16_t)(c.dx_.x);
    // 2513:083d  ror eax, 0x10  (32)  [x5246287]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0840  sub eax, dword ptr [ecx + 0x20]  (32)  [x5246287]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint32_t)(c.c.e + 0x20u)), false));
    // 2513:0843  mov dword ptr [0xaae], eax  (32)  [x5246287]
    c.w32(c.dsb + (uint32_t)(0xaaeu), c.a.e);
    // 2513:0848  mov eax, edi  (32)  [x5246287]
    c.a.e = (uint32_t)(c.di.e);
    // 2513:084a  mov word ptr [0xadb], ax  (32)  [x5246287]
    c.w16(c.dsb + (uint32_t)(0xadbu), c.a.x);
    // 2513:0850  shr eax, 0x10  (32)  [x5246287]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:0853  and al, byte ptr [0x17fe]  (32)  [x5246287]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(0x17feu))), false));
    // 2513:0858  mov byte ptr [0xadf], al  (32)  [x5246287]
    c.w8(c.dsb + (uint32_t)(0xadfu), c.a.l);
    // 2513:085d  mov esi, dword ptr [ecx + 0x34]  (32)  [x5246287]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x34u)));
    // 2513:0860  mov ebp, dword ptr [ecx + 0x38]  (32)  [x5246287]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:0863  mov ebx, dword ptr [ecx + 0x14]  (32)  [x5246287]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x14u)));
    // 2513:0866  push ds  (32)  [x5246287]
    c.push32(c.ds);
    // 2513:0867  add bx, word ptr [0x1800]  (32)  [x5246287]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x1800u)), true));
    // 2513:086d  mov ds, bx  (32)  [x5246287]
    c.loadDs(c.b.x);
    // 2513:0870  jmp 0x872  (32)  [x5246287]
    goto L259a2;
L259a2:
    if (c.tracing) c.traceAt(0x259a2);
    // 2513:0872  xor edi, edi  (32)  [x5245623]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 2513:0874  xor ecx, ecx  (32)  [x5245623]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L259a6:
    if (c.tracing) c.traceAt(0x259a6);
    // 2513:0876  mov di, word ptr fs:[esi + 4]  (32)  [x5605712]
    c.di.x = (uint16_t)(c.r16(c.fsb + (uint32_t)(c.si.e + 0x4u)));
    // 2513:087b  mov cx, word ptr fs:[esi + 6]  (32)  [x5605712]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint32_t)(c.si.e + 0x6u)));
    // 2513:0880  sub cx, di  (32)  [x5605712]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 2513:0883  je 0x8d3  (32)  [x5605712]
    if (c.zf) goto L25a03;
L259b5:
    if (c.tracing) c.traceAt(0x259b5);
    // 2513:0885  mov eax, edi  (32)  [x4875078]
    c.a.e = (uint32_t)(c.di.e);
    // 2513:0887  imul eax, eax, 0x589f  (32)  [x4875078]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x259b9))));
    // 2513:088d  sub eax, 0x1700692  (32)  [x4875078]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, (c.r32(0x259be)), false));
    // 2513:0892  xor edx, edx  (32)  [x4875078]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 2513:0894  mov dx, ax  (32)  [x4875078]
    c.dx_.x = (uint16_t)(c.a.x);
    // 2513:0897  shr eax, 0x10  (32)  [x4875078]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:089a  mov bl, al  (32)  [x4875078]
    c.b.l = (uint8_t)(c.a.l);
    // 2513:089c  mov eax, edi  (32)  [x4875078]
    c.a.e = (uint32_t)(c.di.e);
    // 2513:089e  imul eax, eax, 0xfffffae3  (32)  [x4875078]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x259d0))));
    // 2513:08a4  sub eax, 0x480283  (32)  [x4875078]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, (c.r32(0x259d5)), false));
    // 2513:08a9  ror eax, 0x10  (32)  [x4875078]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 2513:08ac  mov bh, al  (32)  [x4875078]
    c.b.h = (uint8_t)(c.a.l);
    // 2513:08ae  xor ax, ax  (32)  [x4875078]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 2513:08b1  add edx, eax  (32)  [x4875078]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.a.e, false));
    // 2513:08b3  and bx, 0x3f3f  (32)  [x4875078]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x3f3fu), true));
L259e8:
    if (c.tracing) c.traceAt(0x259e8);
    // 2513:08b8  add dx, 0x589f  (32)  [x112332048]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, (c.r16(0x259eb)), true));
    // 2513:08bd  adc bl, 0  (32)  [x112332048]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, (c.r8(0x259ef)), false, c.cf));
    // 2513:08c0  add edx, 0xfae30000  (32)  [x112332048]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, (c.r32(0x259f2)), true));
    // 2513:08c6  adc bh, 0x3f  (32)  [x112332048]
    c.b.h = (uint8_t)(c.add<8>(c.b.h, (c.r8(0x259f8)), false, c.cf));
    // 2513:08c9  and bx, 0x3f3f  (32)  [x112332048]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) & (0x3f3fu), true));
    // 2513:08ce  mov al, byte ptr [ebx]  (32)  [x112332048]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint32_t)(c.b.e)));
    // 2513:08d0  stosb byte ptr es:[edi], al  (32)  [x112332048]
    c.stos<8, true>(0);
    // 2513:08d1  loop 0x8b8  (32)  [x112332048]
    c.c.e = (uint32_t)(c.c.e - 1); if (c.c.e) goto L259e8;
L25a03:
    if (c.tracing) c.traceAt(0x25a03);
    // 2513:08d3  cmp esi, ebp  (32)  [x5605712]
    c.sub<32>(c.si.e, c.bp.e, true);
    // 2513:08d5  mov esi, dword ptr fs:[esi]  (32)  [x5605712]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 2513:08d8  jne 0x876  (32)  [x5605712]
    if (!c.zf) goto L259a6;
L25a0a:
    if (c.tracing) c.traceAt(0x25a0a);
    // 2513:08da  pop ds  (32)  [x5245623]
    c.loadDs((uint16_t)c.pop32());
L25a0b:
    if (c.tracing) c.traceAt(0x25a0b);
    // 2513:08db  popal   (32)  [x5297919]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 2513:08dc  ret   (32)  [x5297919]
    c.ip = c.pop32(); return;
L25a10:
    if (c.tracing) c.traceAt(0x25a10);
    // 2513:08e0  mov esi, dword ptr [ecx + 0x34]  (32)  [x356200]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x34u)));
    // 2513:08e3  mov ebp, dword ptr [ecx + 0x38]  (32)  [x356200]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x38u)));
    // 2513:08e6  mov eax, dword ptr [ecx + 0x14]  (32)  [x356200]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.c.e + 0x14u)));
    // 2513:08e9  xor edi, edi  (32)  [x356200]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 2513:08eb  xor ecx, ecx  (32)  [x356200]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L25a1d:
    if (c.tracing) c.traceAt(0x25a1d);
    // 2513:08ed  mov di, word ptr [esi + 4]  (32)  [x1000654]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x4u)));
    // 2513:08f1  mov cx, di  (32)  [x1000654]
    c.c.x = (uint16_t)(c.di.x);
    // 2513:08f4  shr cx, 2  (32)  [x1000654]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), false));
    // 2513:08f8  mov dx, word ptr [esi + 6]  (32)  [x1000654]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2513:08fc  shr dx, 2  (32)  [x1000654]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x2u) & 31), false));
    // 2513:0900  sub dx, cx  (32)  [x1000654]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.c.x, true));
    // 2513:0903  je 0x928  (32)  [x1000654]
    if (c.zf) goto L25a58;
L25a35:
    if (c.tracing) c.traceAt(0x25a35);
    // 2513:0905  mov cx, di  (32)  [x70965]
    c.c.x = (uint16_t)(c.di.x);
    // 2513:0908  and cx, 3  (32)  [x70965]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), false));
    // 2513:090c  sub cx, 4  (32)  [x70965]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x4u, false));
    // 2513:0910  neg cx  (32)  [x70965]
    c.c.x = (uint16_t)(c.neg<16>(c.c.x, true));
L25a43:
    if (c.tracing) c.traceAt(0x25a43);
    // 2513:0913  rep stosb byte ptr es:[edi], al  (32)  [x240092]
    c.stos<8, true>(1);
L25a45:
    if (c.tracing) c.traceAt(0x25a45);
    // 2513:0915  mov cx, dx  (32)  [x70965]
    c.c.x = (uint16_t)(c.dx_.x);
    // 2513:0918  dec cx  (32)  [x70965]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
L25a4a:
    if (c.tracing) c.traceAt(0x25a4a);
    // 2513:091a  rep stosd dword ptr es:[edi], eax  (32)  [x415071]
    c.stos<32, true>(1);
L25a4c:
    if (c.tracing) c.traceAt(0x25a4c);
    // 2513:091c  mov cx, word ptr [esi + 6]  (32)  [x70965]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2513:0920  and cx, 3  (32)  [x70965]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L25a54:
    if (c.tracing) c.traceAt(0x25a54);
    // 2513:0924  rep stosb byte ptr es:[edi], al  (32)  [x149385]
    c.stos<8, true>(1);
L25a56:
    if (c.tracing) c.traceAt(0x25a56);
    // 2513:0926  jmp 0x931  (32)  [x70965]
    goto L25a61;
L25a58:
    if (c.tracing) c.traceAt(0x25a58);
    // 2513:0928  mov cx, word ptr [esi + 6]  (32)  [x929689]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.si.e + 0x6u)));
    // 2513:092c  sub cx, di  (32)  [x929689]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
L25a5f:
    if (c.tracing) c.traceAt(0x25a5f);
    // 2513:092f  rep stosb byte ptr es:[edi], al  (32)  [x957670]
    c.stos<8, true>(1);
L25a61:
    if (c.tracing) c.traceAt(0x25a61);
    // 2513:0931  cmp esi, ebp  (32)  [x1000654]
    c.sub<32>(c.si.e, c.bp.e, true);
    // 2513:0933  mov esi, dword ptr [esi]  (32)  [x1000654]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.si.e)));
    // 2513:0935  jne 0x8ed  (32)  [x1000654]
    if (!c.zf) goto L25a1d;
L25a67:
    if (c.tracing) c.traceAt(0x25a67);
    // 2513:0937  popal   (32)  [x356200]
    c.di.e = c.pop32(); c.si.e = c.pop32(); c.bp.e = c.pop32(); c.pop32(); c.b.e = c.pop32(); c.dx_.e = c.pop32(); c.c.e = c.pop32(); c.a.e = c.pop32();
    // 2513:0938  ret   (32)  [x356200]
    c.ip = c.pop32(); return;
}

static Register reg22(22, {0x24f2a, 0x24f33, 0x24f38, 0x24f87, 0x24fa9, 0x24fb2, 0x24fbe, 0x24fc7, 0x24fd3, 0x24fdc, 0x2504e, 0x25075, 0x25079, 0x25085, 0x25097, 0x2509c, 0x250c2, 0x250c6, 0x250ca, 0x250dd, 0x250ee, 0x25103, 0x2510b, 0x2511d, 0x25120, 0x25123, 0x25138, 0x25140, 0x25147, 0x25150, 0x25155, 0x2515b, 0x25168, 0x25179, 0x25184, 0x25189, 0x251a0, 0x251b2, 0x251c7, 0x251d2, 0x251de, 0x251ec, 0x2520e, 0x25219, 0x2521e, 0x2522d, 0x25236, 0x25240, 0x2524d, 0x2524f, 0x25256, 0x2525e, 0x25263, 0x2526f, 0x25271, 0x25278, 0x25288, 0x25297, 0x25299, 0x252a0, 0x252b0, 0x252b3, 0x252ba, 0x252c3, 0x252d4, 0x2536b, 0x25372, 0x2537a, 0x25394, 0x25396, 0x253b1, 0x253bb, 0x253c5, 0x253cc, 0x253d9, 0x253e7, 0x2545f, 0x25464, 0x25470, 0x25499, 0x254a3, 0x254b2, 0x254c1, 0x254c5, 0x254d6, 0x25560, 0x25568, 0x25574, 0x2557b, 0x25581, 0x2558b, 0x2559b, 0x255a1, 0x255fe, 0x25604, 0x2560a, 0x25611, 0x2561a, 0x25623, 0x2562c, 0x2562e, 0x25635, 0x2563e, 0x25644, 0x25653, 0x2565d, 0x2566b, 0x25680, 0x25694, 0x256a8, 0x256aa, 0x256b0, 0x256b4, 0x256b9, 0x256c3, 0x256cb, 0x256d3, 0x25700, 0x25710, 0x25717, 0x25723, 0x2573a, 0x2574a, 0x25751, 0x2575d, 0x25786, 0x2578c, 0x25792, 0x2579c, 0x257a4, 0x257a9, 0x257b0, 0x257bd, 0x257c0, 0x257c4, 0x257c6, 0x257d2, 0x257ee, 0x257f5, 0x2580e, 0x2581d, 0x25831, 0x2583c, 0x25858, 0x2586b, 0x25875, 0x25878, 0x25882, 0x2588a, 0x25891, 0x2589e, 0x258a1, 0x258aa, 0x258ae, 0x258ba, 0x258bf, 0x258c1, 0x258d0, 0x258d3, 0x258db, 0x258e2, 0x258eb, 0x258f4, 0x25900, 0x2590e, 0x2591c, 0x25931, 0x259a2, 0x259a6, 0x259b5, 0x259e8, 0x25a03, 0x25a0a, 0x25a0b, 0x25a10, 0x25a1d, 0x25a35, 0x25a43, 0x25a45, 0x25a4a, 0x25a4c, 0x25a54, 0x25a56, 0x25a58, 0x25a5f, 0x25a61, 0x25a67}, code_22);

}  // namespace angel
