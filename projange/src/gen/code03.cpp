// Program 3, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_3(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x22f18: goto L22f18;
    case 0x22f2e: goto L22f2e;
    case 0x22f3e: goto L22f3e;
    case 0x22f5b: goto L22f5b;
    case 0x22f60: goto L22f60;
    case 0x22f68: goto L22f68;
    case 0x22f6d: goto L22f6d;
    case 0x22f74: goto L22f74;
    case 0x22f76: goto L22f76;
    case 0x22f7b: goto L22f7b;
    case 0x22f89: goto L22f89;
    case 0x22fa5: goto L22fa5;
    case 0x22fbd: goto L22fbd;
    case 0x22fc4: goto L22fc4;
    case 0x22fc7: goto L22fc7;
    case 0x22fce: goto L22fce;
    case 0x22fd1: goto L22fd1;
    case 0x22fd5: goto L22fd5;
    case 0x22fd7: goto L22fd7;
    case 0x22fd9: goto L22fd9;
    case 0x22fde: goto L22fde;
    case 0x22fe5: goto L22fe5;
    case 0x22fe6: goto L22fe6;
    case 0x22fe7: goto L22fe7;
    case 0x22fe9: goto L22fe9;
    case 0x22ffa: goto L22ffa;
    case 0x23001: goto L23001;
    case 0x23006: goto L23006;
    case 0x2300b: goto L2300b;
    case 0x2300f: goto L2300f;
    case 0x23014: goto L23014;
    case 0x23015: goto L23015;
    case 0x2301a: goto L2301a;
    case 0x23025: goto L23025;
    case 0x23027: goto L23027;
    case 0x2302a: goto L2302a;
    case 0x2302b: goto L2302b;
    case 0x2302c: goto L2302c;
    case 0x23031: goto L23031;
    case 0x23038: goto L23038;
    case 0x2303f: goto L2303f;
    case 0x23045: goto L23045;
    case 0x2304b: goto L2304b;
    case 0x2304c: goto L2304c;
    case 0x23056: goto L23056;
    case 0x23057: goto L23057;
    case 0x23059: goto L23059;
    case 0x2305b: goto L2305b;
    case 0x2305d: goto L2305d;
    case 0x2305f: goto L2305f;
    case 0x23061: goto L23061;
    case 0x23063: goto L23063;
    case 0x23067: goto L23067;
    case 0x2306d: goto L2306d;
    case 0x2306f: goto L2306f;
    case 0x23070: goto L23070;
    case 0x23075: goto L23075;
    case 0x23081: goto L23081;
    case 0x23085: goto L23085;
    case 0x23088: goto L23088;
    case 0x23089: goto L23089;
    case 0x2308c: goto L2308c;
    case 0x2308e: goto L2308e;
    case 0x23091: goto L23091;
    case 0x23097: goto L23097;
    case 0x23099: goto L23099;
    case 0x2309e: goto L2309e;
    case 0x230b5: goto L230b5;
    case 0x230b8: goto L230b8;
    case 0x230bc: goto L230bc;
    case 0x230c1: goto L230c1;
    case 0x230c7: goto L230c7;
    case 0x230c9: goto L230c9;
    case 0x230d9: goto L230d9;
    case 0x230db: goto L230db;
    case 0x230ec: goto L230ec;
    case 0x230f0: goto L230f0;
    case 0x230f3: goto L230f3;
    case 0x230f8: goto L230f8;
    case 0x230fb: goto L230fb;
    case 0x23102: goto L23102;
    case 0x23104: goto L23104;
    case 0x23105: goto L23105;
    case 0x23108: goto L23108;
    case 0x2310a: goto L2310a;
    case 0x2310b: goto L2310b;
    case 0x23111: goto L23111;
    case 0x23147: goto L23147;
    case 0x2314c: goto L2314c;
    case 0x23152: goto L23152;
    case 0x23158: goto L23158;
    case 0x2315d: goto L2315d;
    case 0x23168: goto L23168;
    case 0x23175: goto L23175;
    case 0x23177: goto L23177;
    case 0x2317d: goto L2317d;
    case 0x23189: goto L23189;
    case 0x2318e: goto L2318e;
    case 0x23199: goto L23199;
    case 0x231a7: goto L231a7;
    case 0x231b4: goto L231b4;
    case 0x231c8: goto L231c8;
    case 0x231ce: goto L231ce;
    case 0x231d2: goto L231d2;
    case 0x231d4: goto L231d4;
    case 0x231d6: goto L231d6;
    case 0x231db: goto L231db;
    case 0x231e2: goto L231e2;
    case 0x231e6: goto L231e6;
    case 0x231eb: goto L231eb;
    case 0x231ef: goto L231ef;
    case 0x231f4: goto L231f4;
    case 0x231f7: goto L231f7;
    case 0x231f9: goto L231f9;
    case 0x23200: goto L23200;
    case 0x23202: goto L23202;
    case 0x23207: goto L23207;
    case 0x23217: goto L23217;
    case 0x23219: goto L23219;
    case 0x23228: goto L23228;
    case 0x23237: goto L23237;
    case 0x2323b: goto L2323b;
    case 0x2323c: goto L2323c;
    case 0x23240: goto L23240;
    case 0x23251: goto L23251;
    case 0x23253: goto L23253;
    case 0x2325c: goto L2325c;
    case 0x23265: goto L23265;
    case 0x23271: goto L23271;
    case 0x2327d: goto L2327d;
    case 0x23286: goto L23286;
    case 0x2328d: goto L2328d;
    case 0x2329b: goto L2329b;
    case 0x2329e: goto L2329e;
    case 0x232a7: goto L232a7;
    case 0x232ad: goto L232ad;
    case 0x232af: goto L232af;
    case 0x232b3: goto L232b3;
    case 0x232b9: goto L232b9;
    case 0x232c2: goto L232c2;
    case 0x232c4: goto L232c4;
    case 0x232cb: goto L232cb;
    case 0x232d5: goto L232d5;
    case 0x232d7: goto L232d7;
    case 0x232e9: goto L232e9;
    case 0x232ee: goto L232ee;
    case 0x232f2: goto L232f2;
    case 0x232f7: goto L232f7;
    case 0x23302: goto L23302;
    case 0x23306: goto L23306;
    case 0x2330b: goto L2330b;
    case 0x2330c: goto L2330c;
    case 0x23311: goto L23311;
    case 0x23314: goto L23314;
    case 0x23328: goto L23328;
    case 0x2332d: goto L2332d;
    case 0x23349: goto L23349;
    case 0x23355: goto L23355;
    case 0x23357: goto L23357;
    case 0x2335d: goto L2335d;
    case 0x23362: goto L23362;
    case 0x233ad: goto L233ad;
    case 0x233c6: goto L233c6;
    case 0x233cd: goto L233cd;
    case 0x233d2: goto L233d2;
    case 0x233d5: goto L233d5;
    case 0x233d7: goto L233d7;
    case 0x233dd: goto L233dd;
    case 0x233f8: goto L233f8;
    case 0x23400: goto L23400;
    case 0x23407: goto L23407;
    case 0x23410: goto L23410;
    case 0x23412: goto L23412;
    case 0x23414: goto L23414;
    case 0x23421: goto L23421;
    case 0x23429: goto L23429;
    case 0x2342e: goto L2342e;
    case 0x23443: goto L23443;
    case 0x23455: goto L23455;
    case 0x234fc: goto L234fc;
    case 0x23574: goto L23574;
    case 0x2357a: goto L2357a;
    case 0x2357c: goto L2357c;
    case 0x2358f: goto L2358f;
    case 0x23599: goto L23599;
    case 0x235a2: goto L235a2;
    default: c.callLinear(t); return;
    }
L22f18:
    if (c.tracing) c.traceAt(0x22f18);
    // 22f0:0018  push ds  [x10]
    c.push16(c.ds);
    // 22f0:0019  push es  [x10]
    c.push16(c.es);
    // 22f0:001a  push fs  [x10]
    c.push16(c.fs);
    // 22f0:001c  mov ax, cs  [x10]
    c.a.x = (uint16_t)(c.cs);
    // 22f0:001e  mov ds, ax  [x10]
    c.loadDs(c.a.x);
    // 22f0:0020  mov word ptr [0xab4], bx  [x10]
    c.w16(c.dsb + (uint16_t)(0xab4u), c.b.x);
    // 22f0:0024  mov ah, 0x3f  [x10]
    c.a.h = (uint8_t)(0x3fu);
    // 22f0:0026  mov cx, 0xc  [x10]
    c.c.x = (uint16_t)(0xcu);
    // 22f0:0029  mov dx, 0xab6  [x10]
    c.dx_.x = (uint16_t)(0xab6u);
    // 22f0:002c  int 0x21  [x10]
    c.ip = 0x2eu; c.d32 = false; c.intr(0x21, 0x2eu);
L22f2e:
    if (c.tracing) c.traceAt(0x22f2e);
    // 22f0:002e  mov dword ptr [0xac2], 0xffffffff  [x10]
    c.w32(c.dsb + (uint16_t)(0xac2u), 0xffffffffu);
    // 22f0:0037  mov ah, 0x48  [x10]
    c.a.h = (uint8_t)(0x48u);
    // 22f0:0039  mov bx, 0x800  [x10]
    c.b.x = (uint16_t)(0x800u);
    // 22f0:003c  int 0x21  [x10]
    c.ip = 0x3eu; c.d32 = false; c.intr(0x21, 0x3eu);
L22f3e:
    if (c.tracing) c.traceAt(0x22f3e);
    // 22f0:003e  mov word ptr [0xac6], ax  [x10]
    c.w16(c.dsb + (uint16_t)(0xac6u), c.a.x);
    // 22f0:0041  mov fs, ax  [x10]
    c.loadFs(c.a.x);
    // 22f0:0043  mov edi, dword ptr [0xab0]  [x10]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xab0u)));
    // 22f0:0048  add edi, dword ptr [0xaba]  [x10]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0xabau)), false));
    // 22f0:004d  mov ax, 0x235b  [x10]
    c.a.x = (uint16_t)(0x235bu);
    // 22f0:0050  mov ds, ax  [x10]
    c.loadDs(c.a.x);
    // 22f0:0052  cli   [x10]
    c.m.cli();
    // 22f0:0053  mov eax, cr0  [x10]
    c.a.e = (uint32_t)(c.cr0);
    // 22f0:0056  or al, 1  [x10]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 22f0:0058  mov cr0, eax  [x10]
    c.setCr0(c.a.e);
L22f5b:
    if (c.tracing) c.traceAt(0x22f5b);
    // 22f0:005b  ljmp 0xc:8  [x10]
    c.loadCs(0xcu); t = c.csb + 0x8u; goto dispatch;
L22f60:
    if (c.tracing) c.traceAt(0x22f60);
    // 0004:0060  mov eax, cr0  [x10]
    c.a.e = (uint32_t)(c.cr0);
    // 0004:0063  and al, 0xfe  [x10]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 0004:0065  mov cr0, eax  [x10]
    c.setCr0(c.a.e);
L22f68:
    if (c.tracing) c.traceAt(0x22f68);
    // 0004:0068  ljmp 0x22f0:0x6d  [x10]
    c.loadCs(0x22f0u); t = c.csb + 0x6du; goto dispatch;
L22f6d:
    if (c.tracing) c.traceAt(0x22f6d);
    // 22f0:006d  lidt cs:[0]  [x10]
    // 22f0:0073  sti   [x10]
    c.ip = 0x74u; c.d32 = false; c.m.sti();
L22f74:
    if (c.tracing) c.traceAt(0x22f74);
    // 22f0:0074  push fs  [x10]
    c.push16(c.fs);
L22f76:
    if (c.tracing) c.traceAt(0x22f76);
    // 22f0:0076  pop es  [x10]
    c.loadEs((uint16_t)c.pop16());
    // 22f0:0077  mov ah, 0x49  [x10]
    c.a.h = (uint8_t)(0x49u);
    // 22f0:0079  int 0x21  [x10]
    c.ip = 0x7bu; c.d32 = false; c.intr(0x21, 0x7bu);
L22f7b:
    if (c.tracing) c.traceAt(0x22f7b);
    // 22f0:007b  mov ax, 0x235b  [x10]
    c.a.x = (uint16_t)(0x235bu);
    // 22f0:007e  mov ds, ax  [x10]
    c.loadDs(c.a.x);
    // 22f0:0080  xor ax, ax  [x10]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 22f0:0082  mov es, ax  [x10]
    c.loadEs(c.a.x);
    // 22f0:0084  mov fs, ax  [x10]
    c.loadFs(c.a.x);
    // 22f0:0086  call 0xa5  [x10]
    c.push16(0x89u); code_3(c, 0x22fa5u); if (c.ip != 0x89u) c.badReturn(0x22f86);
L22f89:
    if (c.tracing) c.traceAt(0x22f89);
    // 22f0:0089  pop fs  [x10]
    c.loadFs((uint16_t)c.pop16());
    // 22f0:008b  pop es  [x10]
    c.loadEs((uint16_t)c.pop16());
    // 22f0:008c  pop ds  [x10]
    c.loadDs((uint16_t)c.pop16());
    // 22f0:008d  iret   [x10]
    c.iret(); return;
L22fa5:
    if (c.tracing) c.traceAt(0x22fa5);
    // 22f0:00a5  mov byte ptr [0x1253], 0  [x10]
    c.w8(c.dsb + (uint16_t)(0x1253u), 0x0u);
    // 22f0:00aa  mov edi, dword ptr [0x400]  [x10]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x400u)));
    // 22f0:00af  mov esi, edi  [x10]
    c.si.e = (uint32_t)(c.di.e);
    // 22f0:00b2  add esi, dword ptr [0x40a]  [x10]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.r32(c.dsb + (uint16_t)(0x40au)), true));
    // 22f0:00b7  mov ch, 8  [x10]
    c.c.h = (uint8_t)(0x8u);
    // 22f0:00b9  lodsw ax, word ptr fs:[esi]  [x10]
    c.ip = 0xbcu; c.d32 = false; c.lods<16, true>(c.fsb, 0);
    // 22f0:00bc  xchg dx, ax  [x10]
    { const uint32_t t0 = c.dx_.x; c.dx_.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
L22fbd:
    if (c.tracing) c.traceAt(0x22fbd);
    // 22f0:00bd  cmp byte ptr [0x1253], 0  [x291]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1253u)), 0x0u, true);
    // 22f0:00c2  jne 0x114  [x291]
    if (!c.zf) goto L23014;
L22fc4:
    if (c.tracing) c.traceAt(0x22fc4);
    // 22f0:00c4  call 0x145  [x281]
    c.push16(0xc7u); code_3(c, 0x23045u); if (c.ip != 0xc7u) c.badReturn(0x22fc4);
L22fc7:
    if (c.tracing) c.traceAt(0x22fc7);
    // 22f0:00c7  rcl byte ptr [0x1253]  [x281]
    c.w8(c.dsb + (uint16_t)(0x1253u), c.rcl<8>(c.r8(c.dsb + (uint16_t)(0x1253u)), (int)((0x1u) & 31)));
    // 22f0:00cb  call 0x247  [x281]
    c.push16(0xceu); code_3(c, 0x23147u); if (c.ip != 0xceu) c.badReturn(0x22fcb);
L22fce:
    if (c.tracing) c.traceAt(0x22fce);
    // 22f0:00ce  call 0x170  [x2453799]
    c.push16(0xd1u); code_3(c, 0x23070u); if (c.ip != 0xd1u) c.badReturn(0x22fce);
L22fd1:
    if (c.tracing) c.traceAt(0x22fd1);
    // 22f0:00d1  test ah, ah  [x2453799]
    c.logic<8>((c.a.h) & (c.a.h), true);
    // 22f0:00d3  jne 0xd9  [x2453799]
    if (!c.zf) goto L22fd9;
L22fd5:
    if (c.tracing) c.traceAt(0x22fd5);
    // 22f0:00d5  stosb byte ptr es:[edi], al  [x1617746]
    c.stos<8, true>(0);
L22fd7:
    if (c.tracing) c.traceAt(0x22fd7);
    // 22f0:00d7  jmp 0xce  [x2453522]
    goto L22fce;
L22fd9:
    if (c.tracing) c.traceAt(0x22fd9);
    // 22f0:00d9  cmp ax, 0x100  [x836056]
    c.sub<16>(c.a.x, 0x100u, true);
    // 22f0:00dc  je 0xbd  [x836056]
    if (c.zf) goto L22fbd;
L22fde:
    if (c.tracing) c.traceAt(0x22fde);
    // 22f0:00de  sub ax, 0xfe  [x835775]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0xfeu, true));
    // 22f0:00e1  push ax  [x835775]
    c.push16(c.a.x);
    // 22f0:00e2  call 0x1db  [x835775]
    c.push16(0xe5u); code_3(c, 0x230dbu); if (c.ip != 0xe5u) c.badReturn(0x22fe2);
L22fe5:
    if (c.tracing) c.traceAt(0x22fe5);
    // 22f0:00e5  xchg cx, ax  [x835775]
    { const uint32_t t0 = c.c.x; c.c.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
L22fe6:
    if (c.tracing) c.traceAt(0x22fe6);
    // 22f0:00e6  pop cx  [x835776]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
L22fe7:
    if (c.tracing) c.traceAt(0x22fe7);
    // 22f0:00e7  push esi  [x835777]
    c.push32(c.si.e);
L22fe9:
    if (c.tracing) c.traceAt(0x22fe9);
    // 22f0:00e9  lea esi, [edi - 1]  [x835778]
    c.si.e = (uint32_t)((uint32_t)(c.di.e + 0xffffffffu));
    // 22f0:00ee  movzx ebx, bx  [x835778]
    c.b.e = (uint32_t)(c.b.x);
    // 22f0:00f2  sub esi, ebx  [x835778]
    c.si.e = (uint32_t)(c.sub<32>(c.si.e, c.b.e, false));
    // 22f0:00f5  cmp bx, 3  [x835778]
    c.sub<16>(c.b.x, 0x3u, true);
    // 22f0:00f8  jb 0x10b  [x835778]
    if (c.cf) goto L2300b;
L22ffa:
    if (c.tracing) c.traceAt(0x22ffa);
    // 22f0:00fa  nop   [x832655]
    // 22f0:00fb  nop   [x832655]
    // 22f0:00fc  mov bp, cx  [x832655]
    c.bp.x = (uint16_t)(c.c.x);
    // 22f0:00fe  shr cx, 2  [x832655]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), true));
L23001:
    if (c.tracing) c.traceAt(0x23001);
    // 22f0:0101  rep movsd dword ptr es:[edi], dword ptr es:[esi]  [x2188426]
    c.ip = 0x106u; c.d32 = false; c.movs<32, true>(c.esb, 1);
L23006:
    if (c.tracing) c.traceAt(0x23006);
    // 22f0:0106  mov cx, bp  [x832656]
    c.c.x = (uint16_t)(c.bp.x);
    // 22f0:0108  and cx, 3  [x832656]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L2300b:
    if (c.tracing) c.traceAt(0x2300b);
    // 22f0:010b  rep movsb byte ptr es:[edi], byte ptr es:[esi]  [x2477945]
    c.ip = 0x10fu; c.d32 = false; c.movs<8, true>(c.esb, 1);
L2300f:
    if (c.tracing) c.traceAt(0x2300f);
    // 22f0:010f  pop esi  [x835775]
    { const uint32_t t0 = c.pop32(); c.si.e = (uint32_t)(t0); }
    // 22f0:0111  xchg cx, ax  [x835775]
    { const uint32_t t0 = c.c.x; c.c.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 22f0:0112  jmp 0xd7  [x835775]
    goto L22fd7;
L23014:
    if (c.tracing) c.traceAt(0x23014);
    // 22f0:0114  ret   [x10]
    c.ip = c.pop16(); return;
L23015:
    if (c.tracing) c.traceAt(0x23015);
    // 22f0:0115  cmp cl, 8  [x948246]
    c.sub<8>(c.c.l, 0x8u, true);
    // 22f0:0118  ja 0x12c  [x948246]
    if ((!c.cf && !c.zf)) goto L2302c;
L2301a:
    if (c.tracing) c.traceAt(0x2301a);
    // 22f0:011a  push bx  [x1445714]
    c.push16(c.b.x);
    // 22f0:011b  xor ax, ax  [x1445714]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 22f0:011d  xor bx, bx  [x1445714]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 22f0:011f  mov bl, cl  [x1445714]
    c.b.l = (uint8_t)(c.c.l);
    // 22f0:0121  mov al, byte ptr [bx + 0x42a]  [x1445714]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x42au)));
L23025:
    if (c.tracing) c.traceAt(0x23025);
    // 22f0:0125  and al, dl  [x1445715]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.dx_.l), true));
L23027:
    if (c.tracing) c.traceAt(0x23027);
    // 22f0:0127  call 0x157  [x1445716]
    c.push16(0x12au); code_3(c, 0x23057u); if (c.ip != 0x12au) c.badReturn(0x23027);
L2302a:
    if (c.tracing) c.traceAt(0x2302a);
    // 22f0:012a  pop bx  [x1445713]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
L2302b:
    if (c.tracing) c.traceAt(0x2302b);
    // 22f0:012b  ret   [x1445714]
    c.ip = c.pop16(); return;
L2302c:
    if (c.tracing) c.traceAt(0x2302c);
    // 22f0:012c  push bx  [x497468]
    c.push16(c.b.x);
    // 22f0:012d  xor bx, bx  [x497468]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 22f0:012f  mov bl, cl  [x497468]
    c.b.l = (uint8_t)(c.c.l);
L23031:
    if (c.tracing) c.traceAt(0x23031);
    // 22f0:0131  mov cl, 8  [x497469]
    c.c.l = (uint8_t)(0x8u);
    // 22f0:0133  sub bl, cl  [x497469]
    c.b.l = (uint8_t)(c.sub<8>(c.b.l, c.c.l, true));
    // 22f0:0135  call 0x11a  [x497469]
    c.push16(0x138u); code_3(c, 0x2301au); if (c.ip != 0x138u) c.badReturn(0x23035);
L23038:
    if (c.tracing) c.traceAt(0x23038);
    // 22f0:0138  mov cl, bl  [x497467]
    c.c.l = (uint8_t)(c.b.l);
    // 22f0:013a  mov bl, al  [x497467]
    c.b.l = (uint8_t)(c.a.l);
    // 22f0:013c  call 0x11a  [x497467]
    c.push16(0x13fu); code_3(c, 0x2301au); if (c.ip != 0x13fu) c.badReturn(0x2303c);
L2303f:
    if (c.tracing) c.traceAt(0x2303f);
    // 22f0:013f  or bh, al  [x497467]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) | (c.a.l), true));
    // 22f0:0141  mov ax, bx  [x497467]
    c.a.x = (uint16_t)(c.b.x);
    // 22f0:0143  pop bx  [x497467]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 22f0:0144  ret   [x497467]
    c.ip = c.pop16(); return;
L23045:
    if (c.tracing) c.traceAt(0x23045);
    // 22f0:0145  shr dx, 1  [x281]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 22f0:0147  dec ch  [x281]
    c.c.h = (uint8_t)(c.dec<8>(c.c.h, true));
    // 22f0:0149  je 0x14c  [x281]
    if (c.zf) goto L2304c;
L2304b:
    if (c.tracing) c.traceAt(0x2304b);
    // 22f0:014b  ret   [x251]
    c.ip = c.pop16(); return;
L2304c:
    if (c.tracing) c.traceAt(0x2304c);
    // 22f0:014c  pushf   [x30]
    c.push16(c.flags());
    // 22f0:014d  mov dh, byte ptr fs:[esi]  [x30]
    c.dx_.h = (uint8_t)(c.r8(c.fsb + (uint32_t)(c.si.e)));
    // 22f0:0151  inc esi  [x30]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 22f0:0153  mov ch, 8  [x30]
    c.c.h = (uint8_t)(0x8u);
    // 22f0:0155  popf   [x30]
    c.ip = 0x156u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L23056:
    if (c.tracing) c.traceAt(0x23056);
    // 22f0:0156  ret   [x30]
    c.ip = c.pop16(); return;
L23057:
    if (c.tracing) c.traceAt(0x23057);
    // 22f0:0157  sub ch, cl  [x5420599]
    c.c.h = (uint8_t)(c.sub<8>(c.c.h, c.c.l, true));
L23059:
    if (c.tracing) c.traceAt(0x23059);
    // 22f0:0159  ja 0x16d  [x5420601]
    if ((!c.cf && !c.zf)) goto L2306d;
L2305b:
    if (c.tracing) c.traceAt(0x2305b);
    // 22f0:015b  neg ch  [x3352892]
    c.c.h = (uint8_t)(c.neg<8>(c.c.h, true));
L2305d:
    if (c.tracing) c.traceAt(0x2305d);
    // 22f0:015d  sub cl, ch  [x3352895]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.c.h, true));
L2305f:
    if (c.tracing) c.traceAt(0x2305f);
    // 22f0:015f  shr dx, cl  [x3352897]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)(c.c.l & 31), true));
L23061:
    if (c.tracing) c.traceAt(0x23061);
    // 22f0:0161  mov cl, ch  [x3352898]
    c.c.l = (uint8_t)(c.c.h);
L23063:
    if (c.tracing) c.traceAt(0x23063);
    // 22f0:0163  mov dh, byte ptr fs:[esi]  [x3352899]
    c.dx_.h = (uint8_t)(c.r8(c.fsb + (uint32_t)(c.si.e)));
L23067:
    if (c.tracing) c.traceAt(0x23067);
    // 22f0:0167  inc esi  [x3352902]
    c.si.e = (uint32_t)(c.inc<32>(c.si.e, false));
    // 22f0:0169  mov ch, 8  [x3352902]
    c.c.h = (uint8_t)(0x8u);
    // 22f0:016b  sub ch, cl  [x3352902]
    c.c.h = (uint8_t)(c.sub<8>(c.c.h, c.c.l, true));
L2306d:
    if (c.tracing) c.traceAt(0x2306d);
    // 22f0:016d  shr dx, cl  [x5420611]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)(c.c.l & 31), true));
L2306f:
    if (c.tracing) c.traceAt(0x2306f);
    // 22f0:016f  ret   [x5420613]
    c.ip = c.pop16(); return;
L23070:
    if (c.tracing) c.traceAt(0x23070);
    // 22f0:0170  xor ebx, ebx  [x2453800]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), true));
    // 22f0:0173  mov bl, dl  [x2453800]
    c.b.l = (uint8_t)(c.dx_.l);
L23075:
    if (c.tracing) c.traceAt(0x23075);
    // 22f0:0175  mov bx, word ptr [ebx*2 + 0x7d7]  [x2453801]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e * 2 + 0x7d7u)));
    // 22f0:017d  test bx, bx  [x2453801]
    c.logic<16>((c.b.x) & (c.b.x), true);
    // 22f0:017f  js 0x191  [x2453801]
    if (c.sf) goto L23091;
L23081:
    if (c.tracing) c.traceAt(0x23081);
    // 22f0:0181  mov cl, byte ptr [bx + 0x677]  [x1836055]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x677u)));
L23085:
    if (c.tracing) c.traceAt(0x23085);
    // 22f0:0185  call 0x157  [x2453801]
    c.push16(0x188u); code_3(c, 0x23057u); if (c.ip != 0x188u) c.badReturn(0x23085);
L23088:
    if (c.tracing) c.traceAt(0x23088);
    // 22f0:0188  xchg bx, ax  [x2453799]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
L23089:
    if (c.tracing) c.traceAt(0x23089);
    // 22f0:0189  cmp ax, 0x109  [x2453801]
    c.sub<16>(c.a.x, 0x109u, true);
L2308c:
    if (c.tracing) c.traceAt(0x2308c);
    // 22f0:018c  jae 0x199  [x2453802]
    if (!c.cf) goto L23099;
L2308e:
    if (c.tracing) c.traceAt(0x2308e);
    // 22f0:018e  nop   [x2330407]
    // 22f0:018f  nop   [x2330407]
    // 22f0:0190  ret   [x2330407]
    c.ip = c.pop16(); return;
L23091:
    if (c.tracing) c.traceAt(0x23091);
    // 22f0:0191  mov ax, 0xbd7  [x617745]
    c.a.x = (uint16_t)(0xbd7u);
    // 22f0:0194  call 0x1bc  [x617745]
    c.push16(0x197u); code_3(c, 0x230bcu); if (c.ip != 0x197u) c.badReturn(0x23094);
L23097:
    if (c.tracing) c.traceAt(0x23097);
    // 22f0:0197  jmp 0x185  [x617745]
    goto L23085;
L23099:
    if (c.tracing) c.traceAt(0x23099);
    // 22f0:0199  cmp ax, 0x11d  [x123392]
    c.sub<16>(c.a.x, 0x11du, true);
    // 22f0:019c  je 0x1b8  [x123392]
    if (c.zf) goto L230b8;
L2309e:
    if (c.tracing) c.traceAt(0x2309e);
    // 22f0:019e  sub ax, 0x101  [x122780]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x101u, false));
    // 22f0:01a1  mov cl, al  [x122780]
    c.c.l = (uint8_t)(c.a.l);
    // 22f0:01a3  shr cl, 2  [x122780]
    c.c.l = (uint8_t)(c.shr<8>(c.c.l, (int)((0x2u) & 31), false));
    // 22f0:01a6  dec cx  [x122780]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 22f0:01a7  and ax, 3  [x122780]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3u), false));
    // 22f0:01aa  add al, 4  [x122780]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x4u, false));
    // 22f0:01ac  shl ax, cl  [x122780]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)(c.c.l & 31), false));
    // 22f0:01ae  add ax, 0x101  [x122780]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x101u, true));
    // 22f0:01b1  xchg bx, ax  [x122780]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 22f0:01b2  call 0x115  [x122780]
    c.push16(0x1b5u); code_3(c, 0x23015u); if (c.ip != 0x1b5u) c.badReturn(0x230b2);
L230b5:
    if (c.tracing) c.traceAt(0x230b5);
    // 22f0:01b5  add ax, bx  [x122780]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, true));
    // 22f0:01b7  ret   [x122780]
    c.ip = c.pop16(); return;
L230b8:
    if (c.tracing) c.traceAt(0x230b8);
    // 22f0:01b8  mov ax, 0x200  [x612]
    c.a.x = (uint16_t)(0x200u);
    // 22f0:01bb  ret   [x612]
    c.ip = c.pop16(); return;
L230bc:
    if (c.tracing) c.traceAt(0x230bc);
    // 22f0:01bc  mov cl, 8  [x623327]
    c.c.l = (uint8_t)(0x8u);
    // 22f0:01be  call 0x157  [x623327]
    c.push16(0x1c1u); code_3(c, 0x23057u); if (c.ip != 0x1c1u) c.badReturn(0x230be);
L230c1:
    if (c.tracing) c.traceAt(0x230c1);
    // 22f0:01c1  push si  [x623327]
    c.push16(c.si.x);
    // 22f0:01c2  xchg si, ax  [x623327]
    { const uint32_t t0 = c.si.x; c.si.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 22f0:01c3  mov al, dl  [x623327]
    c.a.l = (uint8_t)(c.dx_.l);
    // 22f0:01c5  xor cl, cl  [x623327]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) ^ (c.c.l), true));
L230c7:
    if (c.tracing) c.traceAt(0x230c7);
    // 22f0:01c7  not bx  [x828243]
    c.b.x = (uint16_t)(~(c.b.x));
L230c9:
    if (c.tracing) c.traceAt(0x230c9);
    // 22f0:01c9  inc cl  [x828245]
    c.c.l = (uint8_t)(c.inc<8>(c.c.l, false));
    // 22f0:01cb  shr bx, 1  [x828245]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), false));
    // 22f0:01cd  shr ax, 1  [x828245]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), true));
    // 22f0:01cf  rcl bx, 1  [x828245]
    c.b.x = (uint16_t)(c.rcl<16>(c.b.x, (int)((0x1u) & 31)));
    // 22f0:01d1  add bx, bx  [x828245]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 22f0:01d3  mov bx, word ptr [bx + si]  [x828245]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 22f0:01d5  test bx, bx  [x828245]
    c.logic<16>((c.b.x) & (c.b.x), true);
    // 22f0:01d7  js 0x1c7  [x828245]
    if (c.sf) goto L230c7;
L230d9:
    if (c.tracing) c.traceAt(0x230d9);
    // 22f0:01d9  pop si  [x623327]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:01da  ret   [x623327]
    c.ip = c.pop16(); return;
L230db:
    if (c.tracing) c.traceAt(0x230db);
    // 22f0:01db  xor ebx, ebx  [x835775]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 22f0:01de  mov bl, dl  [x835775]
    c.b.l = (uint8_t)(c.dx_.l);
    // 22f0:01e0  mov bx, word ptr [ebx*2 + 0x9d7]  [x835775]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e * 2 + 0x9d7u)));
    // 22f0:01e8  test bx, bx  [x835775]
    c.logic<16>((c.b.x) & (c.b.x), true);
    // 22f0:01ea  js 0x20b  [x835775]
    if (c.sf) goto L2310b;
L230ec:
    if (c.tracing) c.traceAt(0x230ec);
    // 22f0:01ec  mov cl, byte ptr [bx + 0x7b7]  [x830193]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x7b7u)));
L230f0:
    if (c.tracing) c.traceAt(0x230f0);
    // 22f0:01f0  call 0x157  [x835776]
    c.push16(0x1f3u); code_3(c, 0x23057u); if (c.ip != 0x1f3u) c.badReturn(0x230f0);
L230f3:
    if (c.tracing) c.traceAt(0x230f3);
    // 22f0:01f3  cmp bl, 4  [x835776]
    c.sub<8>(c.b.l, 0x4u, true);
    // 22f0:01f6  jb 0x20a  [x835776]
    if (c.cf) goto L2310a;
L230f8:
    if (c.tracing) c.traceAt(0x230f8);
    // 22f0:01f8  xchg bx, ax  [x814821]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 22f0:01f9  mov cl, al  [x814821]
    c.c.l = (uint8_t)(c.a.l);
L230fb:
    if (c.tracing) c.traceAt(0x230fb);
    // 22f0:01fb  shr cl, 1  [x814822]
    c.c.l = (uint8_t)(c.shr<8>(c.c.l, (int)((0x1u) & 31), false));
    // 22f0:01fd  dec cx  [x814822]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, false));
    // 22f0:01fe  and al, 1  [x814822]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x1u), false));
    // 22f0:0200  add al, 2  [x814822]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x2u, true));
L23102:
    if (c.tracing) c.traceAt(0x23102);
    // 22f0:0202  shl ax, cl  [x814824]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)(c.c.l & 31), true));
L23104:
    if (c.tracing) c.traceAt(0x23104);
    // 22f0:0204  xchg bx, ax  [x814825]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
L23105:
    if (c.tracing) c.traceAt(0x23105);
    // 22f0:0205  call 0x115  [x814827]
    c.push16(0x208u); code_3(c, 0x23015u); if (c.ip != 0x208u) c.badReturn(0x23105);
L23108:
    if (c.tracing) c.traceAt(0x23108);
    // 22f0:0208  add bx, ax  [x814822]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, true));
L2310a:
    if (c.tracing) c.traceAt(0x2310a);
    // 22f0:020a  ret   [x835776]
    c.ip = c.pop16(); return;
L2310b:
    if (c.tracing) c.traceAt(0x2310b);
    // 22f0:020b  mov ax, 0x1057  [x5582]
    c.a.x = (uint16_t)(0x1057u);
    // 22f0:020e  call 0x1bc  [x5582]
    c.push16(0x211u); code_3(c, 0x230bcu); if (c.ip != 0x211u) c.badReturn(0x2310e);
L23111:
    if (c.tracing) c.traceAt(0x23111);
    // 22f0:0211  jmp 0x1f0  [x5582]
    goto L230f0;
L23147:
    if (c.tracing) c.traceAt(0x23147);
    // 22f0:0247  mov cl, 2  [x281]
    c.c.l = (uint8_t)(0x2u);
    // 22f0:0249  call 0x115  [x281]
    c.push16(0x24cu); code_3(c, 0x23015u); if (c.ip != 0x24cu) c.badReturn(0x23149);
L2314c:
    if (c.tracing) c.traceAt(0x2314c);
    // 22f0:024c  dec ax  [x281]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
    // 22f0:024d  jns 0x252  [x281]
    if (!c.sf) goto L23152;
    c.notTranslated(0x2314f, "fall-through");
L23152:
    if (c.tracing) c.traceAt(0x23152);
    // 22f0:0252  push es  [x281]
    c.push16(c.es);
    // 22f0:0253  push ds  [x281]
    c.push16(c.ds);
    // 22f0:0254  pop es  [x281]
    c.loadEs((uint16_t)c.pop16());
    // 22f0:0255  push di  [x281]
    c.push16(c.di.x);
    // 22f0:0256  je 0x213  [x281]
    if (c.zf) { t = 0x23113u; goto dispatch; }
L23158:
    if (c.tracing) c.traceAt(0x23158);
    // 22f0:0258  mov cl, 5  [x281]
    c.c.l = (uint8_t)(0x5u);
    // 22f0:025a  call 0x115  [x281]
    c.push16(0x25du); code_3(c, 0x23015u); if (c.ip != 0x25du) c.badReturn(0x2315a);
L2315d:
    if (c.tracing) c.traceAt(0x2315d);
    // 22f0:025d  add ax, 0x101  [x281]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x101u, true));
    // 22f0:0260  mov word ptr [0x1249], ax  [x281]
    c.w16(c.dsb + (uint16_t)(0x1249u), c.a.x);
    // 22f0:0263  mov cl, 5  [x281]
    c.c.l = (uint8_t)(0x5u);
    // 22f0:0265  call 0x115  [x281]
    c.push16(0x268u); code_3(c, 0x23015u); if (c.ip != 0x268u) c.badReturn(0x23165);
L23168:
    if (c.tracing) c.traceAt(0x23168);
    // 22f0:0268  inc ax  [x281]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 22f0:0269  mov word ptr [0x116f], ax  [x281]
    c.w16(c.dsb + (uint16_t)(0x116fu), c.a.x);
    // 22f0:026c  push cx  [x281]
    c.push16(c.c.x);
    // 22f0:026d  mov di, 0x1231  [x281]
    c.di.x = (uint16_t)(0x1231u);
    // 22f0:0270  mov cx, 0x13  [x281]
    c.c.x = (uint16_t)(0x13u);
    // 22f0:0273  xor al, al  [x281]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L23175:
    if (c.tracing) c.traceAt(0x23175);
    // 22f0:0275  rep stosb byte ptr es:[di], al  [x5620]
    c.stos<8, false>(1);
L23177:
    if (c.tracing) c.traceAt(0x23177);
    // 22f0:0277  pop cx  [x281]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 22f0:0278  mov cl, 4  [x281]
    c.c.l = (uint8_t)(0x4u);
    // 22f0:027a  call 0x115  [x281]
    c.push16(0x27du); code_3(c, 0x23015u); if (c.ip != 0x27du) c.badReturn(0x2317a);
L2317d:
    if (c.tracing) c.traceAt(0x2317d);
    // 22f0:027d  add ax, 4  [x281]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x4u, false));
    // 22f0:0280  mov di, 0x418  [x281]
    c.di.x = (uint16_t)(0x418u);
    // 22f0:0283  mov bp, di  [x281]
    c.bp.x = (uint16_t)(c.di.x);
    // 22f0:0285  add bp, ax  [x281]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 22f0:0287  xor bx, bx  [x281]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L23189:
    if (c.tracing) c.traceAt(0x23189);
    // 22f0:0289  mov cl, 3  [x4400]
    c.c.l = (uint8_t)(0x3u);
    // 22f0:028b  call 0x115  [x4400]
    c.push16(0x28eu); code_3(c, 0x23015u); if (c.ip != 0x28eu) c.badReturn(0x2318b);
L2318e:
    if (c.tracing) c.traceAt(0x2318e);
    // 22f0:028e  mov bl, byte ptr [di]  [x4400]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x)));
    // 22f0:0290  mov byte ptr [bx + 0x1231], al  [x4400]
    c.w8(c.dsb + (uint16_t)(c.b.x + 0x1231u), c.a.l);
    // 22f0:0294  inc di  [x4400]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 22f0:0295  cmp di, bp  [x4400]
    c.sub<16>(c.di.x, c.bp.x, true);
    // 22f0:0297  jb 0x289  [x4400]
    if (c.cf) goto L23189;
L23199:
    if (c.tracing) c.traceAt(0x23199);
    // 22f0:0299  push si  [x281]
    c.push16(c.si.x);
    // 22f0:029a  push cx  [x281]
    c.push16(c.c.x);
    // 22f0:029b  mov di, 0x1295  [x281]
    c.di.x = (uint16_t)(0x1295u);
    // 22f0:029e  mov si, 0x1231  [x281]
    c.si.x = (uint16_t)(0x1231u);
    // 22f0:02a1  mov ax, 0x13  [x281]
    c.a.x = (uint16_t)(0x13u);
    // 22f0:02a4  call 0x33c  [x281]
    c.push16(0x2a7u); code_3(c, 0x2323cu); if (c.ip != 0x2a7u) c.badReturn(0x231a4);
L231a7:
    if (c.tracing) c.traceAt(0x231a7);
    // 22f0:02a7  pop cx  [x281]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 22f0:02a8  pop si  [x281]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:02a9  mov bp, word ptr [0x1249]  [x281]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1249u)));
    // 22f0:02ad  add bp, word ptr [0x116f]  [x281]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0x116fu)), true));
    // 22f0:02b1  mov di, 0x677  [x281]
    c.di.x = (uint16_t)(0x677u);
L231b4:
    if (c.tracing) c.traceAt(0x231b4);
    // 22f0:02b4  xor ebx, ebx  [x61983]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), true));
    // 22f0:02b7  mov bl, dl  [x61983]
    c.b.l = (uint8_t)(c.dx_.l);
    // 22f0:02b9  mov bx, word ptr [ebx*2 + 0x1295]  [x61983]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.b.e * 2 + 0x1295u)));
    // 22f0:02c1  mov cl, byte ptr [bx + 0x1231]  [x61983]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + 0x1231u)));
    // 22f0:02c5  call 0x157  [x61983]
    c.push16(0x2c8u); code_3(c, 0x23057u); if (c.ip != 0x2c8u) c.badReturn(0x231c5);
L231c8:
    if (c.tracing) c.traceAt(0x231c8);
    // 22f0:02c8  mov al, bl  [x61983]
    c.a.l = (uint8_t)(c.b.l);
    // 22f0:02ca  cmp al, 0x10  [x61983]
    c.sub<8>(c.a.l, 0x10u, true);
    // 22f0:02cc  jae 0x2d4  [x61983]
    if (!c.cf) goto L231d4;
L231ce:
    if (c.tracing) c.traceAt(0x231ce);
    // 22f0:02ce  stosb byte ptr es:[di], al  [x56862]
    c.stos<8, false>(0);
    // 22f0:02cf  dec bp  [x56862]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 22f0:02d0  jne 0x2b4  [x56862]
    if (!c.zf) goto L231b4;
L231d2:
    if (c.tracing) c.traceAt(0x231d2);
    // 22f0:02d2  jmp 0x307  [x273]
    goto L23207;
L231d4:
    if (c.tracing) c.traceAt(0x231d4);
    // 22f0:02d4  ja 0x2e2  [x5121]
    if ((!c.cf && !c.zf)) goto L231e2;
L231d6:
    if (c.tracing) c.traceAt(0x231d6);
    // 22f0:02d6  mov cl, 2  [x4687]
    c.c.l = (uint8_t)(0x2u);
    // 22f0:02d8  call 0x115  [x4687]
    c.push16(0x2dbu); code_3(c, 0x23015u); if (c.ip != 0x2dbu) c.badReturn(0x231d8);
L231db:
    if (c.tracing) c.traceAt(0x231db);
    // 22f0:02db  add al, 3  [x4687]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x3u, true));
    // 22f0:02dd  mov cl, byte ptr [di - 1]  [x4687]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0xffffffffu)));
    // 22f0:02e0  jmp 0x2f9  [x4687]
    goto L231f9;
L231e2:
    if (c.tracing) c.traceAt(0x231e2);
    // 22f0:02e2  cmp al, 0x11  [x434]
    c.sub<8>(c.a.l, 0x11u, true);
    // 22f0:02e4  ja 0x2ef  [x434]
    if ((!c.cf && !c.zf)) goto L231ef;
L231e6:
    if (c.tracing) c.traceAt(0x231e6);
    // 22f0:02e6  mov cl, 3  [x340]
    c.c.l = (uint8_t)(0x3u);
    // 22f0:02e8  call 0x115  [x340]
    c.push16(0x2ebu); code_3(c, 0x23015u); if (c.ip != 0x2ebu) c.badReturn(0x231e8);
L231eb:
    if (c.tracing) c.traceAt(0x231eb);
    // 22f0:02eb  add al, 3  [x340]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0x3u, true));
    // 22f0:02ed  jmp 0x2f7  [x340]
    goto L231f7;
L231ef:
    if (c.tracing) c.traceAt(0x231ef);
    // 22f0:02ef  mov cl, 7  [x94]
    c.c.l = (uint8_t)(0x7u);
    // 22f0:02f1  call 0x115  [x94]
    c.push16(0x2f4u); code_3(c, 0x23015u); if (c.ip != 0x2f4u) c.badReturn(0x231f1);
L231f4:
    if (c.tracing) c.traceAt(0x231f4);
    // 22f0:02f4  add ax, 0xb  [x94]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xbu, true));
L231f7:
    if (c.tracing) c.traceAt(0x231f7);
    // 22f0:02f7  xor cl, cl  [x434]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) ^ (c.c.l), true));
L231f9:
    if (c.tracing) c.traceAt(0x231f9);
    // 22f0:02f9  push cx  [x5121]
    c.push16(c.c.x);
    // 22f0:02fa  xchg cl, al  [x5121]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 22f0:02fc  xor ch, ch  [x5121]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), false));
    // 22f0:02fe  sub bp, cx  [x5121]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.c.x, true));
L23200:
    if (c.tracing) c.traceAt(0x23200);
    // 22f0:0300  rep stosb byte ptr es:[di], al  [x33694]
    c.stos<8, false>(1);
L23202:
    if (c.tracing) c.traceAt(0x23202);
    // 22f0:0302  pop cx  [x5121]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 22f0:0303  test bp, bp  [x5121]
    c.logic<16>((c.bp.x) & (c.bp.x), true);
    // 22f0:0305  jne 0x2b4  [x5121]
    if (!c.zf) goto L231b4;
L23207:
    if (c.tracing) c.traceAt(0x23207);
    // 22f0:0307  push si  [x281]
    c.push16(c.si.x);
    // 22f0:0308  push cx  [x281]
    c.push16(c.c.x);
    // 22f0:0309  mov si, 0x677  [x281]
    c.si.x = (uint16_t)(0x677u);
    // 22f0:030c  mov di, 0x7b7  [x281]
    c.di.x = (uint16_t)(0x7b7u);
    // 22f0:030f  add si, word ptr [0x1249]  [x281]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x1249u)), true));
    // 22f0:0313  mov cx, word ptr [0x116f]  [x281]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x116fu)));
L23217:
    if (c.tracing) c.traceAt(0x23217);
    // 22f0:0317  rep movsb byte ptr es:[di], byte ptr [si]  [x8691]
    c.ip = 0x319u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L23219:
    if (c.tracing) c.traceAt(0x23219);
    // 22f0:0319  mov ax, word ptr [0x1249]  [x281]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1249u)));
    // 22f0:031c  mov si, 0x677  [x281]
    c.si.x = (uint16_t)(0x677u);
    // 22f0:031f  mov di, 0x7d7  [x281]
    c.di.x = (uint16_t)(0x7d7u);
    // 22f0:0322  mov bp, 0xbd7  [x281]
    c.bp.x = (uint16_t)(0xbd7u);
    // 22f0:0325  call 0x33c  [x281]
    c.push16(0x328u); code_3(c, 0x2323cu); if (c.ip != 0x328u) c.badReturn(0x23225);
L23228:
    if (c.tracing) c.traceAt(0x23228);
    // 22f0:0328  mov ax, word ptr [0x116f]  [x281]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x116fu)));
    // 22f0:032b  mov si, 0x7b7  [x281]
    c.si.x = (uint16_t)(0x7b7u);
    // 22f0:032e  mov di, 0x9d7  [x281]
    c.di.x = (uint16_t)(0x9d7u);
    // 22f0:0331  mov bp, 0x1057  [x281]
    c.bp.x = (uint16_t)(0x1057u);
    // 22f0:0334  call 0x33c  [x281]
    c.push16(0x337u); code_3(c, 0x2323cu); if (c.ip != 0x337u) c.badReturn(0x23234);
L23237:
    if (c.tracing) c.traceAt(0x23237);
    // 22f0:0337  pop cx  [x281]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 22f0:0338  pop si  [x281]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:0339  pop di  [x281]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 22f0:033a  pop es  [x281]
    c.loadEs((uint16_t)c.pop16());
L2323b:
    if (c.tracing) c.traceAt(0x2323b);
    // 22f0:033b  ret   [x281]
    c.ip = c.pop16(); return;
L2323c:
    if (c.tracing) c.traceAt(0x2323c);
    // 22f0:033c  test ax, ax  [x843]
    c.logic<16>((c.a.x) & (c.a.x), true);
    // 22f0:033e  je 0x33b  [x843]
    if (c.zf) goto L2323b;
L23240:
    if (c.tracing) c.traceAt(0x23240);
    // 22f0:0340  push dx  [x843]
    c.push16(c.dx_.x);
    // 22f0:0341  mov word ptr [0x114b], ax  [x843]
    c.w16(c.dsb + (uint16_t)(0x114bu), c.a.x);
    // 22f0:0344  mov word ptr [0x124d], di  [x843]
    c.w16(c.dsb + (uint16_t)(0x124du), c.di.x);
    // 22f0:0348  mov di, 0x114d  [x843]
    c.di.x = (uint16_t)(0x114du);
    // 22f0:034b  push di  [x843]
    c.push16(c.di.x);
    // 22f0:034c  mov cx, 0x10  [x843]
    c.c.x = (uint16_t)(0x10u);
    // 22f0:034f  xor ax, ax  [x843]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L23251:
    if (c.tracing) c.traceAt(0x23251);
    // 22f0:0351  rep stosw word ptr es:[di], ax  [x14331]
    c.stos<16, false>(1);
L23253:
    if (c.tracing) c.traceAt(0x23253);
    // 22f0:0353  pop di  [x843]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 22f0:0354  push si  [x843]
    c.push16(c.si.x);
    // 22f0:0355  mov cx, word ptr [0x114b]  [x843]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x114bu)));
    // 22f0:0359  xor ebx, ebx  [x843]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), true));
L2325c:
    if (c.tracing) c.traceAt(0x2325c);
    // 22f0:035c  lodsb al, byte ptr [si]  [x90774]
    c.ip = 0x35du; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 22f0:035d  mov bl, al  [x90774]
    c.b.l = (uint8_t)(c.a.l);
    // 22f0:035f  add bx, bx  [x90774]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, true));
    // 22f0:0361  inc word ptr [bx + di]  [x90774]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x), c.inc<16>(c.r16(c.dsb + (uint16_t)(c.b.x + c.di.x)), true));
    // 22f0:0363  loop 0x35c  [x90774]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L2325c;
L23265:
    if (c.tracing) c.traceAt(0x23265);
    // 22f0:0365  mov si, 0x1127  [x843]
    c.si.x = (uint16_t)(0x1127u);
    // 22f0:0368  mov bx, 2  [x843]
    c.b.x = (uint16_t)(0x2u);
    // 22f0:036b  xor ax, ax  [x843]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 22f0:036d  mov word ptr [bx + si], ax  [x843]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.si.x), c.a.x);
    // 22f0:036f  mov cl, 0xf  [x843]
    c.c.l = (uint8_t)(0xfu);
L23271:
    if (c.tracing) c.traceAt(0x23271);
    // 22f0:0371  add ax, word ptr [bx + 0x114d]  [x12645]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0x114du)), false));
    // 22f0:0375  add ax, ax  [x12645]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.a.x, true));
    // 22f0:0377  inc bx  [x12645]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 22f0:0378  inc bx  [x12645]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
    // 22f0:0379  mov word ptr [bx + si], ax  [x12645]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.si.x), c.a.x);
    // 22f0:037b  loop 0x371  [x12645]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L23271;
L2327d:
    if (c.tracing) c.traceAt(0x2327d);
    // 22f0:037d  pop si  [x843]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:037e  push si  [x843]
    c.push16(c.si.x);
    // 22f0:037f  mov cx, word ptr [0x114b]  [x843]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x114bu)));
    // 22f0:0383  mov di, 0x437  [x843]
    c.di.x = (uint16_t)(0x437u);
L23286:
    if (c.tracing) c.traceAt(0x23286);
    // 22f0:0386  lodsb al, byte ptr [si]  [x90774]
    c.ip = 0x387u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 22f0:0387  xor ah, ah  [x90774]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 22f0:0389  test ax, ax  [x90774]
    c.logic<16>((c.a.x) & (c.a.x), true);
    // 22f0:038b  je 0x39b  [x90774]
    if (c.zf) goto L2329b;
L2328d:
    if (c.tracing) c.traceAt(0x2328d);
    // 22f0:038d  mov bx, ax  [x79991]
    c.b.x = (uint16_t)(c.a.x);
    // 22f0:038f  add bx, bx  [x79991]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, true));
    // 22f0:0391  mov ax, word ptr [bx + 0x1127]  [x79991]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0x1127u)));
    // 22f0:0395  inc ax  [x79991]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 22f0:0396  mov word ptr [bx + 0x1127], ax  [x79991]
    c.w16(c.dsb + (uint16_t)(c.b.x + 0x1127u), c.a.x);
    // 22f0:039a  dec ax  [x79991]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
L2329b:
    if (c.tracing) c.traceAt(0x2329b);
    // 22f0:039b  stosw word ptr es:[di], ax  [x90774]
    c.stos<16, false>(0);
    // 22f0:039c  loop 0x386  [x90774]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L23286;
L2329e:
    if (c.tracing) c.traceAt(0x2329e);
    // 22f0:039e  pop si  [x843]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:039f  push si  [x843]
    c.push16(c.si.x);
    // 22f0:03a0  mov di, 0x437  [x843]
    c.di.x = (uint16_t)(0x437u);
    // 22f0:03a3  mov dx, word ptr [0x114b]  [x843]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x114bu)));
L232a7:
    if (c.tracing) c.traceAt(0x232a7);
    // 22f0:03a7  lodsb al, byte ptr [si]  [x90774]
    c.ip = 0x3a8u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 22f0:03a8  mov cl, al  [x90774]
    c.c.l = (uint8_t)(c.a.l);
    // 22f0:03aa  dec cx  [x90774]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 22f0:03ab  js 0x3c4  [x90774]
    if (c.sf) goto L232c4;
L232ad:
    if (c.tracing) c.traceAt(0x232ad);
    // 22f0:03ad  je 0x3c4  [x79991]
    if (c.zf) goto L232c4;
L232af:
    if (c.tracing) c.traceAt(0x232af);
    // 22f0:03af  mov bx, word ptr [di]  [x79932]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 22f0:03b1  xor ax, ax  [x79932]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L232b3:
    if (c.tracing) c.traceAt(0x232b3);
    // 22f0:03b3  shr bx, 1  [x606521]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), true));
    // 22f0:03b5  rcl ax, 1  [x606521]
    c.a.x = (uint16_t)(c.rcl<16>(c.a.x, (int)((0x1u) & 31)));
    // 22f0:03b7  loopne 0x3b3  [x606521]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x && !c.zf) goto L232b3;
L232b9:
    if (c.tracing) c.traceAt(0x232b9);
    // 22f0:03b9  inc cx  [x79932]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 22f0:03ba  shr bx, 1  [x79932]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x1u) & 31), true));
    // 22f0:03bc  rcl ax, cl  [x79932]
    c.a.x = (uint16_t)(c.rcl<16>(c.a.x, (int)(c.c.l & 31)));
    // 22f0:03be  stosw word ptr es:[di], ax  [x79932]
    c.stos<16, false>(0);
    // 22f0:03bf  dec dx  [x79932]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 22f0:03c0  jne 0x3a7  [x79932]
    if (!c.zf) goto L232a7;
L232c2:
    if (c.tracing) c.traceAt(0x232c2);
    // 22f0:03c2  jmp 0x3cb  [x632]
    goto L232cb;
L232c4:
    if (c.tracing) c.traceAt(0x232c4);
    // 22f0:03c4  inc di  [x10842]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 22f0:03c5  inc di  [x10842]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 22f0:03c6  xor cx, cx  [x10842]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
    // 22f0:03c8  dec dx  [x10842]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 22f0:03c9  jne 0x3a7  [x10842]
    if (!c.zf) goto L232a7;
L232cb:
    if (c.tracing) c.traceAt(0x232cb);
    // 22f0:03cb  pop si  [x843]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 22f0:03cc  mov di, word ptr [0x124d]  [x843]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x124du)));
    // 22f0:03d0  mov cx, 0x100  [x843]
    c.c.x = (uint16_t)(0x100u);
    // 22f0:03d3  xor ax, ax  [x843]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L232d5:
    if (c.tracing) c.traceAt(0x232d5);
    // 22f0:03d5  rep stosw word ptr es:[di], ax  [x216651]
    c.stos<16, false>(1);
L232d7:
    if (c.tracing) c.traceAt(0x232d7);
    // 22f0:03d7  mov di, 0x437  [x843]
    c.di.x = (uint16_t)(0x437u);
    // 22f0:03da  mov dx, word ptr [0x114b]  [x843]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x114bu)));
    // 22f0:03de  mov word ptr [0x114b], ax  [x843]
    c.w16(c.dsb + (uint16_t)(0x114bu), c.a.x);
    // 22f0:03e1  dec dx  [x843]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, false));
    // 22f0:03e2  add si, dx  [x843]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, false));
    // 22f0:03e4  add di, dx  [x843]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 22f0:03e6  add di, dx  [x843]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, true));
    // 22f0:03e8  std   [x843]
    c.df = true;
L232e9:
    if (c.tracing) c.traceAt(0x232e9);
    // 22f0:03e9  lodsb al, byte ptr [si]  [x90774]
    c.ip = 0x3eau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 22f0:03ea  test al, al  [x90774]
    c.logic<8>((c.a.l) & (c.a.l), true);
    // 22f0:03ec  je 0x40c  [x90774]
    if (c.zf) goto L2330c;
L232ee:
    if (c.tracing) c.traceAt(0x232ee);
    // 22f0:03ee  cmp al, 8  [x79991]
    c.sub<8>(c.a.l, 0x8u, true);
    // 22f0:03f0  ja 0x414  [x79991]
    if ((!c.cf && !c.zf)) goto L23314;
L232f2:
    if (c.tracing) c.traceAt(0x232f2);
    // 22f0:03f2  xchg cx, ax  [x28589]
    { const uint32_t t0 = c.c.x; c.c.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 22f0:03f3  mov ax, 1  [x28589]
    c.a.x = (uint16_t)(0x1u);
    // 22f0:03f6  inc cx  [x28589]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, true));
L232f7:
    if (c.tracing) c.traceAt(0x232f7);
    // 22f0:03f7  shl ax, cl  [x28590]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)(c.c.l & 31), false));
    // 22f0:03f9  mov bx, word ptr [di]  [x28590]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 22f0:03fb  add bx, bx  [x28590]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, true));
    // 22f0:03fd  push si  [x28590]
    c.push16(c.si.x);
    // 22f0:03fe  mov si, word ptr [0x124d]  [x28590]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x124du)));
L23302:
    if (c.tracing) c.traceAt(0x23302);
    // 22f0:0402  mov word ptr [bx + si], dx  [x197942]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.si.x), c.dx_.x);
    // 22f0:0404  add bx, ax  [x197942]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, true));
L23306:
    if (c.tracing) c.traceAt(0x23306);
    // 22f0:0406  cmp bh, 2  [x197943]
    c.sub<8>(c.b.h, 0x2u, true);
    // 22f0:0409  jb 0x402  [x197943]
    if (c.cf) goto L23302;
L2330b:
    if (c.tracing) c.traceAt(0x2330b);
    // 22f0:040b  pop si  [x79991]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
L2330c:
    if (c.tracing) c.traceAt(0x2330c);
    // 22f0:040c  dec di  [x90774]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 22f0:040d  dec di  [x90774]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, false));
    // 22f0:040e  dec dx  [x90774]
    c.dx_.x = (uint16_t)(c.dec<16>(c.dx_.x, true));
    // 22f0:040f  jns 0x3e9  [x90774]
    if (!c.sf) goto L232e9;
L23311:
    if (c.tracing) c.traceAt(0x23311);
    // 22f0:0411  cld   [x843]
    c.df = false;
    // 22f0:0412  pop dx  [x843]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 22f0:0413  ret   [x843]
    c.ip = c.pop16(); return;
L23314:
    if (c.tracing) c.traceAt(0x23314);
    // 22f0:0414  sub al, 8  [x51402]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x8u, false));
    // 22f0:0416  mov cl, al  [x51402]
    c.c.l = (uint8_t)(c.a.l);
    // 22f0:0418  mov ax, word ptr [di]  [x51402]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 22f0:041a  mov bl, al  [x51402]
    c.b.l = (uint8_t)(c.a.l);
    // 22f0:041c  xor bh, bh  [x51402]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 22f0:041e  add bx, bx  [x51402]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 22f0:0420  add bx, word ptr [0x124d]  [x51402]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0x124du)), true));
    // 22f0:0424  mov ch, 1  [x51402]
    c.c.h = (uint8_t)(0x1u);
    // 22f0:0426  push si  [x51402]
    c.push16(c.si.x);
    // 22f0:0427  push dx  [x51402]
    c.push16(c.dx_.x);
L23328:
    if (c.tracing) c.traceAt(0x23328);
    // 22f0:0428  cmp word ptr [bx], 0  [x93646]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.b.x)), 0x0u, true);
    // 22f0:042b  jne 0x449  [x93646]
    if (!c.zf) goto L23349;
L2332d:
    if (c.tracing) c.traceAt(0x2332d);
    // 22f0:042d  nop   [x33535]
    // 22f0:042e  nop   [x33535]
    // 22f0:042f  mov dx, word ptr [0x114b]  [x33535]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x114bu)));
    // 22f0:0433  mov si, dx  [x33535]
    c.si.x = (uint16_t)(c.dx_.x);
    // 22f0:0435  shr dx, 1  [x33535]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 22f0:0437  not dx  [x33535]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 22f0:0439  mov word ptr [bx], dx  [x33535]
    c.w16(c.dsb + (uint16_t)(c.b.x), c.dx_.x);
    // 22f0:043b  add word ptr [0x114b], 4  [x33535]
    c.w16(c.dsb + (uint16_t)(0x114bu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x114bu)), 0x4u, false));
    // 22f0:0440  xor dx, dx  [x33535]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 22f0:0442  mov word ptr ds:[bp + si], dx  [x33535]
    c.w16(c.dsb + (uint16_t)(c.bp.x + c.si.x), c.dx_.x);
    // 22f0:0445  mov word ptr ds:[bp + si + 2], dx  [x33535]
    c.w16(c.dsb + (uint16_t)(c.bp.x + c.si.x + 0x2u), c.dx_.x);
L23349:
    if (c.tracing) c.traceAt(0x23349);
    // 22f0:0449  mov bx, word ptr [bx]  [x93646]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 22f0:044b  not bx  [x93646]
    c.b.x = (uint16_t)(~(c.b.x));
    // 22f0:044d  add bx, bx  [x93646]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 22f0:044f  add bx, bp  [x93646]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.bp.x, false));
    // 22f0:0451  test ch, ah  [x93646]
    c.logic<8>((c.c.h) & (c.a.h), true);
    // 22f0:0453  je 0x457  [x93646]
    if (c.zf) goto L23357;
L23355:
    if (c.tracing) c.traceAt(0x23355);
    // 22f0:0455  inc bx  [x48731]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 22f0:0456  inc bx  [x48731]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, true));
L23357:
    if (c.tracing) c.traceAt(0x23357);
    // 22f0:0457  add ch, ch  [x93646]
    c.c.h = (uint8_t)(c.add<8>(c.c.h, c.c.h, true));
    // 22f0:0459  dec cl  [x93646]
    c.c.l = (uint8_t)(c.dec<8>(c.c.l, true));
    // 22f0:045b  jne 0x428  [x93646]
    if (!c.zf) goto L23328;
L2335d:
    if (c.tracing) c.traceAt(0x2335d);
    // 22f0:045d  pop dx  [x51402]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 22f0:045e  mov word ptr [bx], dx  [x51402]
    c.w16(c.dsb + (uint16_t)(c.b.x), c.dx_.x);
    // 22f0:0460  jmp 0x40b  [x51402]
    goto L2330b;
L23362:
    if (c.tracing) c.traceAt(0x23362);
    // 22f0:0462  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 22f0:0464  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 22f0:0466  mov word ptr [0x3e8], 0x18  [x1]
    c.w16(c.dsb + (uint16_t)(0x3e8u), 0x18u);
    // 22f0:046c  mov word ptr [0x3ea], cs  [x1]
    c.w16(c.dsb + (uint16_t)(0x3eau), c.cs);
    // 22f0:0470  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 22f0:0472  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 22f0:0474  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22f0:0478  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22f0:047c  mov word ptr [0xa], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xau), c.a.x);
    // 22f0:047f  ror eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 22f0:0483  mov byte ptr [0xc], al  [x1]
    c.w8(c.dsb + (uint16_t)(0xcu), c.a.l);
    // 22f0:0486  mov ax, 0x233f  [x1]
    c.a.x = (uint16_t)(0x233fu);
    // 22f0:0489  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22f0:048d  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22f0:0491  mov word ptr [0x12], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x12u), c.a.x);
    // 22f0:0494  ror eax, 0x10  [x1]
    c.a.e = (uint32_t)(c.ror<32>(c.a.e, (int)((0x10u) & 31), false));
    // 22f0:0498  mov byte ptr [0x14], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x14u), c.a.l);
    // 22f0:049b  mov ax, cs  [x1]
    c.a.x = (uint16_t)(c.cs);
    // 22f0:049d  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 22f0:04a1  shl eax, 4  [x1]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 22f0:04a5  add eax, 8  [x1]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8u, true));
    // 22f0:04ab  int 0xfc  [x1]
    c.ip = 0x4adu; c.d32 = false; c.intr(0xfc, 0x4adu);
L233ad:
    if (c.tracing) c.traceAt(0x233ad);
    // 22f0:04ad  mov dword ptr [0x4f2], eax  [x1]
    c.w32(c.dsb + (uint32_t)(0x4f2u), c.a.e);
    // 22f0:04b4  mov dword ptr [0xab0], ebx  [x1]
    c.w32(c.dsb + (uint16_t)(0xab0u), c.b.e);
    // 22f0:04b9  mov di, 0x6b0  [x1]
    c.di.x = (uint16_t)(0x6b0u);
    // 22f0:04bc  push ds  [x1]
    c.push16(c.ds);
    // 22f0:04bd  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 22f0:04be  mov edx, 0xedb88320  [x1]
    c.dx_.e = (uint32_t)(0xedb88320u);
    // 22f0:04c4  xor bl, bl  [x1]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) ^ (c.b.l), true));
L233c6:
    if (c.tracing) c.traceAt(0x233c6);
    // 22f0:04c6  movzx eax, bl  [x256]
    c.a.e = (uint32_t)(c.b.l);
    // 22f0:04ca  mov cx, 8  [x256]
    c.c.x = (uint16_t)(0x8u);
L233cd:
    if (c.tracing) c.traceAt(0x233cd);
    // 22f0:04cd  shr eax, 1  [x2048]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x1u) & 31), true));
    // 22f0:04d0  jae 0x4d5  [x2048]
    if (!c.cf) goto L233d5;
L233d2:
    if (c.tracing) c.traceAt(0x233d2);
    // 22f0:04d2  xor eax, edx  [x1024]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.dx_.e), true));
L233d5:
    if (c.tracing) c.traceAt(0x233d5);
    // 22f0:04d5  loop 0x4cd  [x2048]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L233cd;
L233d7:
    if (c.tracing) c.traceAt(0x233d7);
    // 22f0:04d7  stosd dword ptr es:[di], eax  [x256]
    c.stos<32, false>(0);
    // 22f0:04d9  inc bl  [x256]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, true));
    // 22f0:04db  jne 0x4c6  [x256]
    if (!c.zf) goto L233c6;
L233dd:
    if (c.tracing) c.traceAt(0x233dd);
    // 22f0:04dd  mov ax, 0x3100  [x1]
    c.a.x = (uint16_t)(0x3100u);
    // 22f0:04e0  mov dx, 0x200  [x1]
    c.dx_.x = (uint16_t)(0x200u);
    // 22f0:04e3  int 0x21  [x1]
    c.ip = 0x4e5u; c.d32 = false; c.intr(0x21, 0x4e5u);
    c.notTranslated(0x233e5, "fall-through");
L233f8:
    if (c.tracing) c.traceAt(0x233f8);
    // 000c:0008  mov eax, cr0  (32)  [x10]
    c.a.e = (uint32_t)(c.cr0);
    // 000c:000b  and al, 0xfe  (32)  [x10]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfeu), true));
    // 000c:000d  mov cr0, eax  (32)  [x10]
    c.setCr0(c.a.e);
L23400:
    if (c.tracing) c.traceAt(0x23400);
    // 000c:0010  ljmp 0x233f:0x17  (32)  [x10]
    c.loadCs(0x233fu); t = c.csb + 0x17u; goto dispatch;
L23407:
    if (c.tracing) c.traceAt(0x23407);
    // 233f:0017  lidt cs:[0]  (32)  [x10]
    // 233f:001f  sti   (32)  [x10]
    c.ip = 0x20u; c.d32 = true; c.m.sti();
L23410:
    if (c.tracing) c.traceAt(0x23410);
    // 233f:0020  xor eax, eax  (32)  [x10]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L23412:
    if (c.tracing) c.traceAt(0x23412);
    // 233f:0022  mov es, eax  (32)  [x10]
    c.loadEs(c.a.e);
L23414:
    if (c.tracing) c.traceAt(0x23414);
    // 233f:0024  mov ecx, dword ptr [0x406]  (32)  [x118]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x406u)));
    // 233f:0029  or ecx, ecx  (32)  [x118]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (c.c.e), true));
    // 233f:002b  je 0x1a9  (32)  [x118]
    if (c.zf) goto L23599;
L23421:
    if (c.tracing) c.traceAt(0x23421);
    // 233f:0031  cmp ecx, 0x8000  (32)  [x108]
    c.sub<32>(c.c.e, 0x8000u, true);
    // 233f:0037  jb 0x3e  (32)  [x108]
    if (c.cf) goto L2342e;
L23429:
    if (c.tracing) c.traceAt(0x23429);
    // 233f:0039  mov ecx, 0x8000  (32)  [x98]
    c.c.e = (uint32_t)(0x8000u);
L2342e:
    if (c.tracing) c.traceAt(0x2342e);
    // 233f:003e  sub dword ptr [0x406], ecx  (32)  [x108]
    c.w32(c.dsb + (uint16_t)(0x406u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x406u)), c.c.e, false));
    // 233f:0043  mov ah, 0x3f  (32)  [x108]
    c.a.h = (uint8_t)(0x3fu);
    // 233f:0045  mov bx, word ptr [0x404]  (32)  [x108]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x404u)));
    // 233f:004b  push ds  (32)  [x108]
    c.push32(c.ds);
    // 233f:004c  push fs  (32)  [x108]
    c.push32(c.fs);
    // 233f:004e  pop ds  (32)  [x108]
    c.loadDs((uint16_t)c.pop32());
    // 233f:004f  xor edx, edx  (32)  [x108]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
    // 233f:0051  int 0x21  (32)  [x108]
    c.ip = 0x53u; c.d32 = true; c.intr(0x21, 0x53u);
L23443:
    if (c.tracing) c.traceAt(0x23443);
    // 233f:0053  pop ds  (32)  [x108]
    c.loadDs((uint16_t)c.pop32());
    // 233f:0054  mov ebx, dword ptr [0x412]  (32)  [x108]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x412u)));
    // 233f:0059  push ecx  (32)  [x108]
    c.push32(c.c.e);
    // 233f:005a  xor esi, esi  (32)  [x108]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), false));
    // 233f:005c  shr ecx, 4  (32)  [x108]
    c.c.e = (uint32_t)(c.shr<32>(c.c.e, (int)((0x4u) & 31), true));
    // 233f:005f  je 0x184  (32)  [x108]
    if (c.zf) goto L23574;
L23455:
    if (c.tracing) c.traceAt(0x23455);
    // 233f:0065  mov eax, dword ptr fs:[esi]  (32)  [x209552]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 233f:0068  xor eax, ebx  (32)  [x209552]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.b.e), false));
    // 233f:006a  mov dword ptr es:[edi], eax  (32)  [x209552]
    c.w32(c.esb + (uint32_t)(c.di.e), c.a.e);
    // 233f:006d  mov dl, al  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:006f  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:0071  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0074  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:007b  mov dl, ah  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:007d  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:007f  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0082  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0089  shr eax, 0x10  (32)  [x209552]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 233f:008c  mov dl, al  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:008e  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:0090  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0093  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:009a  mov dl, ah  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:009c  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:009e  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00a1  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:00a8  mov eax, dword ptr fs:[esi + 4]  (32)  [x209552]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e + 0x4u)));
    // 233f:00ac  xor eax, ebx  (32)  [x209552]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.b.e), false));
    // 233f:00ae  mov dword ptr es:[edi + 4], eax  (32)  [x209552]
    c.w32(c.esb + (uint32_t)(c.di.e + 0x4u), c.a.e);
    // 233f:00b2  mov dl, al  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:00b4  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:00b6  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00b9  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:00c0  mov dl, ah  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:00c2  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:00c4  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00c7  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:00ce  shr eax, 0x10  (32)  [x209552]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 233f:00d1  mov dl, al  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:00d3  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:00d5  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00d8  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:00df  mov dl, ah  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:00e1  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:00e3  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00e6  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:00ed  mov eax, dword ptr fs:[esi + 8]  (32)  [x209552]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e + 0x8u)));
    // 233f:00f1  xor eax, ebx  (32)  [x209552]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.b.e), false));
    // 233f:00f3  mov dword ptr es:[edi + 8], eax  (32)  [x209552]
    c.w32(c.esb + (uint32_t)(c.di.e + 0x8u), c.a.e);
    // 233f:00f7  mov dl, al  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:00f9  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:00fb  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:00fe  xor ebx, dword ptr [edx*4]  (32)  [x209552]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0105  mov dl, ah  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:0107  xor dl, bl  (32)  [x209552]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:0109  shr ebx, 8  (32)  [x209552]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), true));
L234fc:
    if (c.tracing) c.traceAt(0x234fc);
    // 233f:010c  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0113  shr eax, 0x10  (32)  [x209554]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 233f:0116  mov dl, al  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:0118  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:011a  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:011d  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0124  mov dl, ah  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:0126  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:0128  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:012b  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0132  mov eax, dword ptr fs:[esi + 0xc]  (32)  [x209554]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e + 0xcu)));
    // 233f:0136  xor eax, ebx  (32)  [x209554]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.b.e), false));
    // 233f:0138  mov dword ptr es:[edi + 0xc], eax  (32)  [x209554]
    c.w32(c.esb + (uint32_t)(c.di.e + 0xcu), c.a.e);
    // 233f:013c  mov dl, al  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:013e  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:0140  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0143  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:014a  mov dl, ah  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:014c  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:014e  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0151  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0158  shr eax, 0x10  (32)  [x209554]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x10u) & 31), false));
    // 233f:015b  mov dl, al  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.l);
    // 233f:015d  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:015f  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0162  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0169  mov dl, ah  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.a.h);
    // 233f:016b  xor dl, bl  (32)  [x209554]
    c.dx_.l = (uint8_t)(c.logic<8>((c.dx_.l) ^ (c.b.l), false));
    // 233f:016d  shr ebx, 8  (32)  [x209554]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0170  xor ebx, dword ptr [edx*4]  (32)  [x209554]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.dx_.e * 4))), false));
    // 233f:0177  add esi, 0x10  (32)  [x209554]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x10u, false));
    // 233f:017a  add edi, 0x10  (32)  [x209554]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x10u, true));
    // 233f:017d  dec ecx  (32)  [x209554]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, true));
    // 233f:017e  jne 0x65  (32)  [x209554]
    if (!c.zf) goto L23455;
L23574:
    if (c.tracing) c.traceAt(0x23574);
    // 233f:0184  pop ecx  (32)  [x108]
    { const uint32_t t0 = c.pop32(); c.c.e = (uint32_t)(t0); }
    // 233f:0185  and ecx, 0xf  (32)  [x108]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (0xfu), true));
    // 233f:0188  je 0x19f  (32)  [x108]
    if (c.zf) goto L2358f;
L2357a:
    if (c.tracing) c.traceAt(0x2357a);
    // 233f:018a  xor eax, eax  (32)  [x9]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), true));
L2357c:
    if (c.tracing) c.traceAt(0x2357c);
    // 233f:018c  lodsb al, byte ptr fs:[esi]  (32)  [x95]
    c.ip = 0x18eu; c.d32 = true; c.lods<8, true>(c.fsb, 0);
    // 233f:018e  xor al, bl  (32)  [x95]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.b.l), false));
    // 233f:0190  stosb byte ptr es:[edi], al  (32)  [x95]
    c.stos<8, true>(0);
    // 233f:0191  xor al, bl  (32)  [x95]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.b.l), false));
    // 233f:0193  shr ebx, 8  (32)  [x95]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x8u) & 31), false));
    // 233f:0196  xor ebx, dword ptr [eax*4]  (32)  [x95]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.r32(c.dsb + (uint32_t)(c.a.e * 4))), true));
    // 233f:019d  loop 0x18c  (32)  [x95]
    c.c.e = (uint32_t)(c.c.e - 1); if (c.c.e) goto L2357c;
L2358f:
    if (c.tracing) c.traceAt(0x2358f);
    // 233f:019f  mov dword ptr [0x412], ebx  (32)  [x108]
    c.w32(c.dsb + (uint16_t)(0x412u), c.b.e);
    // 233f:01a4  jmp 0x24  (32)  [x108]
    goto L23414;
L23599:
    if (c.tracing) c.traceAt(0x23599);
    // 233f:01a9  cli   (32)  [x10]
    c.m.cli();
    // 233f:01aa  mov eax, cr0  (32)  [x10]
    c.a.e = (uint32_t)(c.cr0);
    // 233f:01ad  or al, 1  (32)  [x10]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), true));
    // 233f:01af  mov cr0, eax  (32)  [x10]
    c.setCr0(c.a.e);
L235a2:
    if (c.tracing) c.traceAt(0x235a2);
    // 233f:01b2  ljmp 4:0x60  (32)  [x10]
    c.loadCs(0x4u); t = c.csb + 0x60u; goto dispatch;
}

static Register reg03(3, {0x22f18, 0x22f2e, 0x22f3e, 0x22f5b, 0x22f60, 0x22f68, 0x22f6d, 0x22f74, 0x22f76, 0x22f7b, 0x22f89, 0x22fa5, 0x22fbd, 0x22fc4, 0x22fc7, 0x22fce, 0x22fd1, 0x22fd5, 0x22fd7, 0x22fd9, 0x22fde, 0x22fe5, 0x22fe6, 0x22fe7, 0x22fe9, 0x22ffa, 0x23001, 0x23006, 0x2300b, 0x2300f, 0x23014, 0x23015, 0x2301a, 0x23025, 0x23027, 0x2302a, 0x2302b, 0x2302c, 0x23031, 0x23038, 0x2303f, 0x23045, 0x2304b, 0x2304c, 0x23056, 0x23057, 0x23059, 0x2305b, 0x2305d, 0x2305f, 0x23061, 0x23063, 0x23067, 0x2306d, 0x2306f, 0x23070, 0x23075, 0x23081, 0x23085, 0x23088, 0x23089, 0x2308c, 0x2308e, 0x23091, 0x23097, 0x23099, 0x2309e, 0x230b5, 0x230b8, 0x230bc, 0x230c1, 0x230c7, 0x230c9, 0x230d9, 0x230db, 0x230ec, 0x230f0, 0x230f3, 0x230f8, 0x230fb, 0x23102, 0x23104, 0x23105, 0x23108, 0x2310a, 0x2310b, 0x23111, 0x23147, 0x2314c, 0x23152, 0x23158, 0x2315d, 0x23168, 0x23175, 0x23177, 0x2317d, 0x23189, 0x2318e, 0x23199, 0x231a7, 0x231b4, 0x231c8, 0x231ce, 0x231d2, 0x231d4, 0x231d6, 0x231db, 0x231e2, 0x231e6, 0x231eb, 0x231ef, 0x231f4, 0x231f7, 0x231f9, 0x23200, 0x23202, 0x23207, 0x23217, 0x23219, 0x23228, 0x23237, 0x2323b, 0x2323c, 0x23240, 0x23251, 0x23253, 0x2325c, 0x23265, 0x23271, 0x2327d, 0x23286, 0x2328d, 0x2329b, 0x2329e, 0x232a7, 0x232ad, 0x232af, 0x232b3, 0x232b9, 0x232c2, 0x232c4, 0x232cb, 0x232d5, 0x232d7, 0x232e9, 0x232ee, 0x232f2, 0x232f7, 0x23302, 0x23306, 0x2330b, 0x2330c, 0x23311, 0x23314, 0x23328, 0x2332d, 0x23349, 0x23355, 0x23357, 0x2335d, 0x23362, 0x233ad, 0x233c6, 0x233cd, 0x233d2, 0x233d5, 0x233d7, 0x233dd, 0x233f8, 0x23400, 0x23407, 0x23410, 0x23412, 0x23414, 0x23421, 0x23429, 0x2342e, 0x23443, 0x23455, 0x234fc, 0x23574, 0x2357a, 0x2357c, 0x2358f, 0x23599, 0x235a2}, code_3);

}  // namespace angel
