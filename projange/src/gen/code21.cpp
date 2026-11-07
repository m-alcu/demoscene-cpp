// Program 21, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_21(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x6c210: goto L6c210;
    case 0x6c214: goto L6c214;
    case 0x6c216: goto L6c216;
    case 0x6c218: goto L6c218;
    case 0x6c222: goto L6c222;
    case 0x6c24b: goto L6c24b;
    case 0x6c257: goto L6c257;
    case 0x6c25e: goto L6c25e;
    case 0x6c25f: goto L6c25f;
    case 0x6c266: goto L6c266;
    case 0x6c269: goto L6c269;
    case 0x6c277: goto L6c277;
    case 0x6c281: goto L6c281;
    case 0x6c284: goto L6c284;
    case 0x6c298: goto L6c298;
    case 0x6c29f: goto L6c29f;
    case 0x6c2a0: goto L6c2a0;
    case 0x6c2c9: goto L6c2c9;
    case 0x6c308: goto L6c308;
    case 0x6c319: goto L6c319;
    case 0x6c31b: goto L6c31b;
    case 0x6c5c3: goto L6c5c3;
    case 0x6c5c7: goto L6c5c7;
    case 0x6c5e8: goto L6c5e8;
    case 0x6c6b6: goto L6c6b6;
    case 0x6c6b8: goto L6c6b8;
    case 0x6c6ce: goto L6c6ce;
    case 0x6c6db: goto L6c6db;
    case 0x6c734: goto L6c734;
    case 0x6c73a: goto L6c73a;
    case 0x6c73c: goto L6c73c;
    case 0x6c740: goto L6c740;
    case 0x6c756: goto L6c756;
    case 0x6c776: goto L6c776;
    case 0x6c780: goto L6c780;
    case 0x6c793: goto L6c793;
    case 0x6c7bc: goto L6c7bc;
    case 0x6c7dc: goto L6c7dc;
    case 0x6c7e6: goto L6c7e6;
    case 0x6c7f9: goto L6c7f9;
    case 0x6c822: goto L6c822;
    case 0x6c82c: goto L6c82c;
    case 0x6c865: goto L6c865;
    case 0x6c869: goto L6c869;
    case 0x6c87e: goto L6c87e;
    case 0x6c88b: goto L6c88b;
    case 0x6c891: goto L6c891;
    case 0x6c895: goto L6c895;
    case 0x6c899: goto L6c899;
    case 0x6c89b: goto L6c89b;
    case 0x6c8a0: goto L6c8a0;
    case 0x6c8a2: goto L6c8a2;
    case 0x6c8b0: goto L6c8b0;
    case 0x6c8b9: goto L6c8b9;
    case 0x6c8d1: goto L6c8d1;
    case 0x6c8fa: goto L6c8fa;
    case 0x6c919: goto L6c919;
    case 0x6c926: goto L6c926;
    case 0x6c946: goto L6c946;
    case 0x6c950: goto L6c950;
    case 0x6c963: goto L6c963;
    case 0x6c98c: goto L6c98c;
    case 0x6c993: goto L6c993;
    case 0x6c99e: goto L6c99e;
    case 0x6c9be: goto L6c9be;
    case 0x6c9c8: goto L6c9c8;
    case 0x6c9db: goto L6c9db;
    case 0x6ca04: goto L6ca04;
    case 0x6ca11: goto L6ca11;
    case 0x6ca12: goto L6ca12;
    case 0x6ca2c: goto L6ca2c;
    case 0x6ca58: goto L6ca58;
    case 0x6ca6c: goto L6ca6c;
    case 0x6ca77: goto L6ca77;
    case 0x6ca7d: goto L6ca7d;
    case 0x6ca8c: goto L6ca8c;
    case 0x6ca8f: goto L6ca8f;
    case 0x6ca90: goto L6ca90;
    case 0x6cad2: goto L6cad2;
    case 0x6cae6: goto L6cae6;
    case 0x6caf1: goto L6caf1;
    case 0x6caf7: goto L6caf7;
    case 0x6cb06: goto L6cb06;
    case 0x6cb09: goto L6cb09;
    case 0x6cb0a: goto L6cb0a;
    case 0x6cb15: goto L6cb15;
    case 0x6cb27: goto L6cb27;
    case 0x6cb2f: goto L6cb2f;
    case 0x6cb63: goto L6cb63;
    case 0x6cb65: goto L6cb65;
    case 0x6cb68: goto L6cb68;
    case 0x6cb6b: goto L6cb6b;
    case 0x6cb7d: goto L6cb7d;
    case 0x6cb80: goto L6cb80;
    case 0x6cb9b: goto L6cb9b;
    case 0x6cbcd: goto L6cbcd;
    case 0x6cc25: goto L6cc25;
    case 0x6cc3d: goto L6cc3d;
    case 0x6cc43: goto L6cc43;
    case 0x6cc49: goto L6cc49;
    case 0x6cc55: goto L6cc55;
    case 0x6cc76: goto L6cc76;
    case 0x6cc9b: goto L6cc9b;
    case 0x6cca1: goto L6cca1;
    case 0x6ccae: goto L6ccae;
    case 0x6ccbc: goto L6ccbc;
    case 0x6ccc0: goto L6ccc0;
    case 0x6ccc5: goto L6ccc5;
    case 0x6ccee: goto L6ccee;
    case 0x6cd3e: goto L6cd3e;
    case 0x6cd58: goto L6cd58;
    case 0x6cd62: goto L6cd62;
    case 0x6cdc3: goto L6cdc3;
    case 0x6cdec: goto L6cdec;
    case 0x6ce00: goto L6ce00;
    case 0x6ce04: goto L6ce04;
    case 0x6ce69: goto L6ce69;
    case 0x6ce9a: goto L6ce9a;
    case 0x6ceca: goto L6ceca;
    case 0x6ced8: goto L6ced8;
    case 0x6cede: goto L6cede;
    case 0x6cee3: goto L6cee3;
    case 0x6cee6: goto L6cee6;
    case 0x6cee8: goto L6cee8;
    case 0x6cef3: goto L6cef3;
    case 0x6cefe: goto L6cefe;
    case 0x6cf2e: goto L6cf2e;
    case 0x6cf3c: goto L6cf3c;
    case 0x6cf42: goto L6cf42;
    case 0x6cf47: goto L6cf47;
    case 0x6cf4a: goto L6cf4a;
    case 0x6cf4c: goto L6cf4c;
    case 0x6cf5e: goto L6cf5e;
    case 0x6cf65: goto L6cf65;
    case 0x6cf6d: goto L6cf6d;
    case 0x6cf79: goto L6cf79;
    case 0x6cf7f: goto L6cf7f;
    case 0x6d01b: goto L6d01b;
    case 0x6d02b: goto L6d02b;
    case 0x6d02e: goto L6d02e;
    case 0x6d036: goto L6d036;
    case 0x6d061: goto L6d061;
    case 0x6d079: goto L6d079;
    case 0x6d07a: goto L6d07a;
    case 0x6d096: goto L6d096;
    case 0x6d0a9: goto L6d0a9;
    case 0x6d0b4: goto L6d0b4;
    case 0x6d0b6: goto L6d0b6;
    case 0x6d0cc: goto L6d0cc;
    case 0x6d13d: goto L6d13d;
    case 0x6d141: goto L6d141;
    case 0x6d145: goto L6d145;
    case 0x6d146: goto L6d146;
    case 0x6d155: goto L6d155;
    case 0x6d16d: goto L6d16d;
    case 0x6d181: goto L6d181;
    case 0x6d195: goto L6d195;
    case 0x6d19d: goto L6d19d;
    case 0x6d19f: goto L6d19f;
    case 0x6d1c3: goto L6d1c3;
    case 0x6d1cd: goto L6d1cd;
    case 0x6d208: goto L6d208;
    case 0x6d20c: goto L6d20c;
    case 0x6d210: goto L6d210;
    case 0x6d21a: goto L6d21a;
    case 0x6d224: goto L6d224;
    case 0x6d228: goto L6d228;
    case 0x6d22d: goto L6d22d;
    case 0x6d23f: goto L6d23f;
    case 0x6d276: goto L6d276;
    case 0x6d27a: goto L6d27a;
    case 0x6d284: goto L6d284;
    case 0x6d28e: goto L6d28e;
    case 0x6d298: goto L6d298;
    case 0x6d2a2: goto L6d2a2;
    case 0x6d2ac: goto L6d2ac;
    case 0x6d2b6: goto L6d2b6;
    case 0x6d2ba: goto L6d2ba;
    case 0x6d2bf: goto L6d2bf;
    case 0x6d2cd: goto L6d2cd;
    case 0x6d2d8: goto L6d2d8;
    case 0x6d2e0: goto L6d2e0;
    case 0x6d2ea: goto L6d2ea;
    case 0x6d2ee: goto L6d2ee;
    case 0x6d2f8: goto L6d2f8;
    case 0x6d302: goto L6d302;
    case 0x6d30c: goto L6d30c;
    case 0x6d316: goto L6d316;
    case 0x6d31a: goto L6d31a;
    case 0x6d31f: goto L6d31f;
    case 0x6d326: goto L6d326;
    case 0x6d331: goto L6d331;
    case 0x6d33c: goto L6d33c;
    case 0x6d344: goto L6d344;
    case 0x6d367: goto L6d367;
    case 0x6d36a: goto L6d36a;
    default: c.callLinear(t); return;
    }
L6c210:
    if (c.tracing) c.traceAt(0x6c210);
    // 6c21:0000  cld   [x2]
    c.df = false;
    // 6c21:0001  push ds  [x2]
    c.push16(c.ds);
    // 6c21:0002  mov ds, ax  [x2]
    c.loadDs(c.a.x);
L6c214:
    if (c.tracing) c.traceAt(0x6c214);
    // 6c21:0004  rep movsb byte ptr es:[di], byte ptr [si]  [x1535]
    c.ip = 0x6u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L6c216:
    if (c.tracing) c.traceAt(0x6c216);
    // 6c21:0006  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 6c21:0007  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c218:
    if (c.tracing) c.traceAt(0x6c218);
    // 6c21:0008  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6c21:000b  mov bp, 0x300  [x1]
    c.bp.x = (uint16_t)(0x300u);
    // 6c21:000e  mov di, word ptr [0x2358]  [x1]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2358u)));
L6c222:
    if (c.tracing) c.traceAt(0x6c222);
    // 6c21:0012  xor ax, ax  [x768]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 6c21:0014  xor cx, cx  [x768]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 6c21:0016  mov bx, word ptr [0x2352]  [x768]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2352u)));
    // 6c21:001a  mov al, byte ptr [bx + si]  [x768]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 6c21:001c  mov bx, word ptr [0x2354]  [x768]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2354u)));
    // 6c21:0020  mov cl, byte ptr [bx + si]  [x768]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 6c21:0022  sub cx, ax  [x768]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, false));
    // 6c21:0024  mov ax, cx  [x768]
    c.a.x = (uint16_t)(c.c.x);
    // 6c21:0026  shl ax, 7  [x768]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 6c21:0029  cdq   [x768]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 6c21:002a  xor ch, ch  [x768]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), false));
    // 6c21:002c  mov cl, byte ptr [0x2351]  [x768]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2351u)));
    // 6c21:0030  idiv cx  [x768]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x30u); }   // #DE: int 0, then again
    // 6c21:0032  mov word ptr [di], ax  [x768]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 6c21:0034  inc si  [x768]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 6c21:0035  add di, 2  [x768]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 6c21:0038  dec bp  [x768]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 6c21:0039  jne 0x12  [x768]
    if (!c.zf) goto L6c222;
L6c24b:
    if (c.tracing) c.traceAt(0x6c24b);
    // 6c21:003b  mov si, word ptr [0x2352]  [x1]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2352u)));
    // 6c21:003f  mov di, word ptr [0x2356]  [x1]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2356u)));
    // 6c21:0043  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 6c21:0046  cld   [x1]
    c.df = false;
L6c257:
    if (c.tracing) c.traceAt(0x6c257);
    // 6c21:0047  lodsb al, byte ptr [si]  [x768]
    c.ip = 0x48u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6c21:0048  shl ax, 7  [x768]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), true));
    // 6c21:004b  stosw word ptr es:[di], ax  [x768]
    c.stos<16, false>(0);
    // 6c21:004c  loop 0x47  [x768]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6c257;
L6c25e:
    if (c.tracing) c.traceAt(0x6c25e);
    // 6c21:004e  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c25f:
    if (c.tracing) c.traceAt(0x6c25f);
    // 6c21:004f  cmp byte ptr [0x234f], 0  [x210]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x234fu)), 0x0u, true);
    // 6c21:0054  js 0x8f  [x210]
    if (c.sf) goto L6c29f;
L6c266:
    if (c.tracing) c.traceAt(0x6c266);
    // 6c21:0056  mov ax, word ptr [0x21f]  [x210]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
L6c269:
    if (c.tracing) c.traceAt(0x6c269);
    // 6c21:0059  mov si, word ptr [0x2358]  [x210]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2358u)));
    // 6c21:005d  mov di, word ptr [0x2356]  [x210]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2356u)));
    // 6c21:0061  mov cx, 0x300  [x210]
    c.c.x = (uint16_t)(0x300u);
    // 6c21:0064  mov dx, 2  [x210]
    c.dx_.x = (uint16_t)(0x2u);
L6c277:
    if (c.tracing) c.traceAt(0x6c277);
    // 6c21:0067  mov bx, word ptr [si]  [x161280]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 6c21:0069  add word ptr [di], bx  [x161280]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x)), c.b.x, false));
    // 6c21:006b  add di, dx  [x161280]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 6c21:006d  add si, dx  [x161280]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, true));
    // 6c21:006f  loop 0x67  [x161280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6c277;
L6c281:
    if (c.tracing) c.traceAt(0x6c281);
    // 6c21:0071  dec ax  [x210]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
    // 6c21:0072  jne 0x59  [x210]
    if (!c.zf) goto L6c269;
L6c284:
    if (c.tracing) c.traceAt(0x6c284);
    // 6c21:0074  mov dx, 0x3c7  [x210]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 6c21:0077  mov al, 1  [x210]
    c.a.l = (uint8_t)(0x1u);
    // 6c21:0079  out dx, al  [x210]
    c.ip = 0x7au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:007a  inc dx  [x210]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 6c21:007b  xor al, al  [x210]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 6c21:007d  out dx, al  [x210]
    c.ip = 0x7eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:007e  mov si, word ptr [0x2356]  [x210]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2356u)));
    // 6c21:0082  mov cx, 0x300  [x210]
    c.c.x = (uint16_t)(0x300u);
    // 6c21:0085  mov dx, 0x3c9  [x210]
    c.dx_.x = (uint16_t)(0x3c9u);
L6c298:
    if (c.tracing) c.traceAt(0x6c298);
    // 6c21:0088  lodsw ax, word ptr [si]  [x161280]
    c.ip = 0x89u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 6c21:0089  sar ax, 7  [x161280]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), true));
    // 6c21:008c  out dx, al  [x161280]
    c.ip = 0x8du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:008d  loop 0x88  [x161280]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6c298;
L6c29f:
    if (c.tracing) c.traceAt(0x6c29f);
    // 6c21:008f  retf   [x210]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c2a0:
    if (c.tracing) c.traceAt(0x6c2a0);
    // 6c21:0090  push es  [x2040]
    c.push16(c.es);
    // 6c21:0091  mov ax, 0x69eb  [x2040]
    c.a.x = (uint16_t)(0x69ebu);
    // 6c21:0094  mov es, ax  [x2040]
    c.loadEs(c.a.x);
    // 6c21:0096  mov cl, byte ptr [0x1f4]  [x2040]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 6c21:009a  mov ch, byte ptr [0x1f5]  [x2040]
    c.c.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 6c21:009e  mov dl, byte ptr [0x1f2]  [x2040]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f2u)));
    // 6c21:00a2  mov dh, byte ptr [0x1f3]  [x2040]
    c.dx_.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f3u)));
    // 6c21:00a6  mov al, byte ptr [0x1f4]  [x2040]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 6c21:00a9  sub al, byte ptr [0x1f2]  [x2040]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0x1f2u)), false));
    // 6c21:00ad  mov cl, byte ptr [0x1f5]  [x2040]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 6c21:00b1  sub cl, byte ptr [0x1f3]  [x2040]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.r8(c.dsb + (uint16_t)(0x1f3u)), false));
    // 6c21:00b5  cmp al, cl  [x2040]
    c.sub<8>(c.a.l, c.c.l, true);
    // 6c21:00b7  jae 0xb9  [x2040]
    if (!c.cf) goto L6c2c9;
L6c2c9:
    if (c.tracing) c.traceAt(0x6c2c9);
    // 6c21:00b9  xor ax, ax  [x2040]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 6c21:00bb  xor bx, bx  [x2040]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 6c21:00bd  mov al, byte ptr [0x1f5]  [x2040]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f5u)));
    // 6c21:00c0  mov bl, byte ptr [0x1f3]  [x2040]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f3u)));
    // 6c21:00c4  sub ax, bx  [x2040]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 6c21:00c6  shl eax, 0x10  [x2040]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:00ca  cdq   [x2040]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:00cc  xor ecx, ecx  [x2040]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), false));
    // 6c21:00cf  mov cl, byte ptr [0x1f4]  [x2040]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 6c21:00d3  sub cl, byte ptr [0x1f2]  [x2040]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.r8(c.dsb + (uint16_t)(0x1f2u)), false));
    // 6c21:00d7  idiv ecx  [x2040]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0xd7u); }   // #DE: int 0, then again
    // 6c21:00da  mov ecx, eax  [x2040]
    c.c.e = (uint32_t)(c.a.e);
    // 6c21:00dd  xor edx, edx  [x2040]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6c21:00e0  mov dl, byte ptr [0x1f4]  [x2040]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f4u)));
    // 6c21:00e4  sub dl, byte ptr [0x1f2]  [x2040]
    c.dx_.l = (uint8_t)(c.sub<8>(c.dx_.l, c.r8(c.dsb + (uint16_t)(0x1f2u)), false));
    // 6c21:00e8  mov esi, edx  [x2040]
    c.si.e = (uint32_t)(c.dx_.e);
    // 6c21:00eb  mov dl, byte ptr [0x1f3]  [x2040]
    c.dx_.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x1f3u)));
    // 6c21:00ef  shl edx, 0x10  [x2040]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 6c21:00f3  xor bx, bx  [x2040]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 6c21:00f5  mov di, 0  [x2040]
    c.di.x = (uint16_t)(0x0u);
L6c308:
    if (c.tracing) c.traceAt(0x6c308);
    // 6c21:00f8  mov eax, edx  [x163200]
    c.a.e = (uint32_t)(c.dx_.e);
    // 6c21:00fb  sar eax, 0x10  [x163200]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:00ff  mov byte ptr es:[di], al  [x163200]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 6c21:0102  inc di  [x163200]
    c.di.x = (uint16_t)(c.inc<16>(c.di.x, false));
    // 6c21:0103  add edx, ecx  [x163200]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.c.e, true));
    // 6c21:0106  dec si  [x163200]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 6c21:0107  jne 0xf8  [x163200]
    if (!c.zf) goto L6c308;
L6c319:
    if (c.tracing) c.traceAt(0x6c319);
    // 6c21:0109  pop es  [x2040]
    c.loadEs((uint16_t)c.pop16());
    // 6c21:010a  retf   [x2040]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c31b:
    if (c.tracing) c.traceAt(0x6c31b);
    // 6c21:010b  mov ax, 0x24f1  [x5224]
    c.a.x = (uint16_t)(0x24f1u);
    // 6c21:010e  mov es, ax  [x5224]
    c.loadEs(c.a.x);
    // 6c21:0110  mov ebx, dword ptr [0x1ad]  [x5224]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1adu)));
    // 6c21:0115  mov edi, dword ptr [0x1b1]  [x5224]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b1u)));
    // 6c21:011a  add ebx, ebx  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6c21:011d  add edi, edi  [x5224]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 6c21:0120  mov ebp, ebx  [x5224]
    c.bp.e = (uint32_t)(c.b.e);
    // 6c21:0123  add ebx, edi  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 6c21:0126  sub ebp, edi  [x5224]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 6c21:0129  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:0133  add eax, dword ptr es:[ebp*2 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6c21:013d  sar eax, 1  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6c21:0140  mov dword ptr [0x189], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x189u), c.a.e);
    // 6c21:0144  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:014e  add eax, dword ptr es:[ebp*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6c21:0158  sar eax, 1  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6c21:015b  mov dword ptr [0x18d], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x18du), c.a.e);
    // 6c21:015f  mov ebx, edi  [x5224]
    c.b.e = (uint32_t)(c.di.e);
    // 6c21:0162  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:016c  mov dword ptr [0x191], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x191u), c.a.e);
    // 6c21:0170  mov ebp, dword ptr [0x1b5]  [x5224]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b5u)));
    // 6c21:0175  add ebp, ebp  [x5224]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0178  mov eax, ebx  [x5224]
    c.a.e = (uint32_t)(c.b.e);
    // 6c21:017b  sub ebx, ebp  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 6c21:017e  add ebp, eax  [x5224]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6c21:0181  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:018b  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6c21:0195  sar eax, 1  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6c21:0198  mov dword ptr [0x19d], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x19du), c.a.e);
    // 6c21:019c  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:01a6  add eax, dword ptr es:[ebp*2 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6c21:01b0  sar eax, 1  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6c21:01b3  mov dword ptr [0x1a9], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1a9u), c.a.e);
    // 6c21:01b7  mov ebx, dword ptr [0x1ad]  [x5224]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1adu)));
    // 6c21:01bc  add ebx, dword ptr [0x1b1]  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b1u)), false));
    // 6c21:01c1  sub ebx, dword ptr [0x1b5]  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b5u)), false));
    // 6c21:01c6  add ebx, ebx  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6c21:01c9  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:01d3  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:01dd  mov edx, ecx  [x5224]
    c.dx_.e = (uint32_t)(c.c.e);
    // 6c21:01e0  neg edx  [x5224]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 6c21:01e3  mov edi, eax  [x5224]
    c.di.e = (uint32_t)(c.a.e);
    // 6c21:01e6  mov esi, dword ptr [0x1b5]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b5u)));
    // 6c21:01eb  add esi, esi  [x5224]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6c21:01ee  add ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6c21:01f1  add ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6c21:01f4  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:01fe  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:0208  sub eax, esi  [x5224]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:020b  sub ecx, ebp  [x5224]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6c21:020e  sub edx, ebp  [x5224]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 6c21:0211  add edi, esi  [x5224]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 6c21:0214  mov esi, dword ptr [0x1b1]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b1u)));
    // 6c21:0219  add esi, esi  [x5224]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6c21:021c  sub ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6c21:021f  sub ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6c21:0222  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:022c  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:0236  add eax, esi  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 6c21:0239  add ecx, ebp  [x5224]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 6c21:023c  add edx, ebp  [x5224]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6c21:023f  sub edi, esi  [x5224]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6c21:0242  mov esi, dword ptr [0x1b5]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b5u)));
    // 6c21:0247  add esi, esi  [x5224]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6c21:024a  sub ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6c21:024d  sub ebx, esi  [x5224]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6c21:0250  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:025a  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:0264  sub eax, esi  [x5224]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:0267  sub ecx, ebp  [x5224]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6c21:026a  add edx, ebp  [x5224]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6c21:026d  sub edi, esi  [x5224]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6c21:0270  sar eax, 2  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 6c21:0274  sar ecx, 2  [x5224]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 6c21:0278  sar edx, 2  [x5224]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 6c21:027c  sar edi, 2  [x5224]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 6c21:0280  mov dword ptr [0x195], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x195u), c.a.e);
    // 6c21:0284  mov dword ptr [0x199], ecx  [x5224]
    c.w32(c.dsb + (uint16_t)(0x199u), c.c.e);
    // 6c21:0289  mov dword ptr [0x1a1], edx  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1a1u), c.dx_.e);
    // 6c21:028e  mov dword ptr [0x1a5], edi  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1a5u), c.di.e);
    // 6c21:0293  mov ebx, dword ptr [0x1ad]  [x5224]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1adu)));
    // 6c21:0298  mov ebp, ebx  [x5224]
    c.bp.e = (uint32_t)(c.b.e);
    // 6c21:029b  add ebx, dword ptr [0x1b5]  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1b5u)), false));
    // 6c21:02a0  sub ebp, dword ptr [0x1b5]  [x5224]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x1b5u)), false));
    // 6c21:02a5  add ebx, ebx  [x5224]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6c21:02a8  add ebp, ebp  [x5224]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:02ab  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:02b5  add eax, dword ptr es:[ebp*2 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6c21:02bf  sar eax, 1  [x5224]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6c21:02c2  add dword ptr [0x195], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x195u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x195u)), c.a.e, false));
    // 6c21:02c7  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:02d1  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x5224]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6c21:02db  sar ecx, 1  [x5224]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 6c21:02de  sub dword ptr [0x199], ecx  [x5224]
    c.w32(c.dsb + (uint16_t)(0x199u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x199u)), c.c.e, false));
    // 6c21:02e3  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x5224]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6c21:02ed  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x5224]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6c21:02f7  sar edx, 1  [x5224]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 6c21:02fa  sub dword ptr [0x1a1], edx  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1a1u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1a1u)), c.dx_.e, false));
    // 6c21:02ff  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x5224]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6c21:0309  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x5224]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6c21:0313  sar edi, 1  [x5224]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 6c21:0316  sub dword ptr [0x1a5], edi  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1a5u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1a5u)), c.di.e, false));
    // 6c21:031b  mov eax, dword ptr [0x189]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x189u)));
    // 6c21:031f  mov dword ptr cs:[0x433], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x433u), c.a.e);
    // 6c21:0324  mov eax, dword ptr [0x18d]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x18du)));
    // 6c21:0328  mov dword ptr cs:[0x43a], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x43au), c.a.e);
    // 6c21:032d  mov eax, dword ptr [0x191]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x191u)));
    // 6c21:0331  mov dword ptr cs:[0x444], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x444u), c.a.e);
    // 6c21:0336  mov eax, dword ptr [0x195]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x195u)));
    // 6c21:033a  mov dword ptr cs:[0x463], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x463u), c.a.e);
    // 6c21:033f  mov eax, dword ptr [0x199]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x199u)));
    // 6c21:0343  mov dword ptr cs:[0x46a], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x46au), c.a.e);
    // 6c21:0348  mov eax, dword ptr [0x19d]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x19du)));
    // 6c21:034c  mov dword ptr cs:[0x474], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x474u), c.a.e);
    // 6c21:0351  mov eax, dword ptr [0x1a1]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a1u)));
    // 6c21:0355  mov dword ptr cs:[0x3f3], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x3f3u), c.a.e);
    // 6c21:035a  mov eax, dword ptr [0x1a5]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a5u)));
    // 6c21:035e  mov dword ptr cs:[0x3fa], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x3fau), c.a.e);
    // 6c21:0363  mov eax, dword ptr [0x1a9]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a9u)));
    // 6c21:0367  mov dword ptr cs:[0x404], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0x404u), c.a.e);
    // 6c21:036c  mov eax, dword ptr [0x1b1]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b1u)));
    // 6c21:0370  and eax, 0x3ff  [x5224]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 6c21:0376  mov eax, dword ptr es:[eax*4 + 0x3000]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.a.e * 4 + 0x3000u)));
    // 6c21:0380  cdq   [x5224]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:0382  mov ebp, 0x20  [x5224]
    c.bp.e = (uint32_t)(0x20u);
    // 6c21:0388  idiv ebp  [x5224]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x388u); }   // #DE: int 0, then again
    // 6c21:038b  mov dword ptr [0x206], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x206u), c.a.e);
    // 6c21:038f  mov eax, dword ptr [0x1b1]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1b1u)));
    // 6c21:0393  and eax, 0x3ff  [x5224]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 6c21:0399  mov eax, dword ptr es:[eax*4 + 0x3400]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.a.e * 4 + 0x3400u)));
    // 6c21:03a3  cdq   [x5224]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:03a5  mov ebp, 0x20  [x5224]
    c.bp.e = (uint32_t)(0x20u);
    // 6c21:03ab  idiv ebp  [x5224]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x3abu); }   // #DE: int 0, then again
    // 6c21:03ae  mov dword ptr [0x202], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x202u), c.a.e);
    // 6c21:03b2  retf   [x5224]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c5c3:
    if (c.tracing) c.traceAt(0x6c5c3);
    // 6c21:03b3  push cs  [x5224]
    c.push16(c.cs);
    // 6c21:03b4  call 0x10b  [x5224]
    c.push16(0x3b7u); code_21(c, 0x6c31bu); if (c.ip != 0x3b7u) c.badReturn(0x6c5c4);
L6c5c7:
    if (c.tracing) c.traceAt(0x6c5c7);
    // 6c21:03b7  lfs si, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6c21:03bc  movzx esi, si  [x5224]
    c.si.e = (uint32_t)(c.si.x);
    // 6c21:03c0  mov eax, dword ptr fs:[esi]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 6c21:03c5  shl eax, 4  [x5224]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 6c21:03c9  mov word ptr [0x179], ax  [x5224]
    c.w16(c.dsb + (uint16_t)(0x179u), c.a.x);
    // 6c21:03cc  add esi, 8  [x5224]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 6c21:03d0  add word ptr [0x179], si  [x5224]
    c.w16(c.dsb + (uint16_t)(0x179u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x179u)), c.si.x, true));
    // 6c21:03d4  les di, ptr [0x181]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x181u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x181u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L6c5e8:
    if (c.tracing) c.traceAt(0x6c5e8);
    // 6c21:03d8  mov ebx, dword ptr fs:[si]  [x1380692]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 6c21:03dc  mov ecx, dword ptr fs:[si + 4]  [x1380692]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 6c21:03e1  mov edi, dword ptr fs:[si + 8]  [x1380692]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 6c21:03e6  sub edi, dword ptr [0x1fe]  [x1380692]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x1feu)), false));
    // 6c21:03eb  add ebx, dword ptr [0x1f6]  [x1380692]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x1f6u)), false));
    // 6c21:03f0  imul eax, ebx, 0x2c  [x1380692]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x6c603))));
    // 6c21:03f7  imul ebp, ecx, 0xfffffffd  [x1380692]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x6c60a))));
    // 6c21:03fe  add eax, ebp  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6c21:0401  imul ebp, edi, 0xfffffe02  [x1380692]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x6c614))));
    // 6c21:0408  add eax, ebp  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6c21:040b  mov dword ptr es:[si + 8], eax  [x1380692]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 6c21:0410  mov ebp, 0x32  [x1380692]
    c.bp.e = (uint32_t)(0x32u);
    // 6c21:0416  imul ebp  [x1380692]
    c.imul32(c.bp.e);
    // 6c21:0419  mov ebp, 0xfa  [x1380692]
    c.bp.e = (uint32_t)(0xfau);
    // 6c21:041f  idiv ebp  [x1380692]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x41fu); }   // #DE: int 0, then again
    // 6c21:0422  add eax, 0xfa0  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xfa0u, false));
    // 6c21:0428  or eax, 1  [x1380692]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) | (0x1u), false));
    // 6c21:042c  mov dword ptr [0x1cd], eax  [x1380692]
    c.w32(c.dsb + (uint16_t)(0x1cdu), c.a.e);
    // 6c21:0430  imul ebp, ebx, 0xfffffe02  [x1380692]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x6c643))));
    // 6c21:0437  imul eax, ecx, 0x1c  [x1380692]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x6c64a))));
    // 6c21:043e  add ebp, eax  [x1380692]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6c21:0441  imul eax, edi, 0xffffffd4  [x1380692]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x6c654))));
    // 6c21:0448  add eax, ebp  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6c21:044b  shl eax, 5  [x1380692]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x5u) & 31), false));
    // 6c21:044f  cdq   [x1380692]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:0451  idiv dword ptr [0x1cd]  [x1380692]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x1cdu)))) { c.d32 = false; c.intr(0, 0x451u); }   // #DE: int 0, then again
    // 6c21:0456  add eax, 0x9f  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 6c21:045c  mov dword ptr es:[si], eax  [x1380692]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 6c21:0460  imul ebp, ebx, 0xffffffe4  [x1380692]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x6c673))));
    // 6c21:0467  imul eax, ecx, 0xfffffe01  [x1380692]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x6c67a))));
    // 6c21:046e  add ebp, eax  [x1380692]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6c21:0471  imul eax, edi, 0  [x1380692]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x6c684))));
    // 6c21:0478  add eax, ebp  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6c21:047b  mov ebp, dword ptr [0x1fa]  [x1380692]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1fau)));
    // 6c21:0480  shl ebp, 5  [x1380692]
    c.bp.e = (uint32_t)(c.shl<32>(c.bp.e, (int)((0x5u) & 31), false));
    // 6c21:0484  add eax, ebp  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6c21:0487  shl eax, 5  [x1380692]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x5u) & 31), false));
    // 6c21:048b  cdq   [x1380692]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:048d  idiv dword ptr [0x1cd]  [x1380692]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x1cdu)))) { c.d32 = false; c.intr(0, 0x48du); }   // #DE: int 0, then again
    // 6c21:0492  add eax, 0x78  [x1380692]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x78u, false));
    // 6c21:0496  mov dword ptr es:[si + 4], eax  [x1380692]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 6c21:049b  add si, 0x10  [x1380692]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 6c21:049e  cmp si, word ptr [0x179]  [x1380692]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x179u)), true);
    // 6c21:04a2  jb 0x3d8  [x1380692]
    if (c.cf) goto L6c5e8;
L6c6b6:
    if (c.tracing) c.traceAt(0x6c6b6);
    // 6c21:04a6  jmp 0x4a8  [x5224]
    goto L6c6b8;
L6c6b8:
    if (c.tracing) c.traceAt(0x6c6b8);
    // 6c21:04a8  retf   [x5224]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c6ce:
    if (c.tracing) c.traceAt(0x6c6ce);
    // 6c21:04be  mov ax, 0x3387  [x1964]
    c.a.x = (uint16_t)(0x3387u);
    // 6c21:04c1  mov es, ax  [x1964]
    c.loadEs(c.a.x);
    // 6c21:04c3  mov di, word ptr [0x21c]  [x1964]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21cu)));
    // 6c21:04c7  mov cx, word ptr [0x21f]  [x1964]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
L6c6db:
    if (c.tracing) c.traceAt(0x6c6db);
    // 6c21:04cb  movsx eax, word ptr es:[di]  [x1964]
    c.a.e = (uint32_t)((uint32_t)(int32_t)(int16_t)(c.r16(c.esb + (uint16_t)(c.di.x))));
    // 6c21:04d0  mov dword ptr [0x1f6], eax  [x1964]
    c.w32(c.dsb + (uint16_t)(0x1f6u), c.a.e);
    // 6c21:04d4  movsx eax, word ptr es:[di + 2]  [x1964]
    c.a.e = (uint32_t)((uint32_t)(int32_t)(int16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x2u))));
    // 6c21:04da  mov dword ptr [0x1fe], eax  [x1964]
    c.w32(c.dsb + (uint16_t)(0x1feu), c.a.e);
    // 6c21:04de  movsx eax, word ptr es:[di + 4]  [x1964]
    c.a.e = (uint32_t)((uint32_t)(int32_t)(int16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x4u))));
    // 6c21:04e4  and eax, 0x3ff  [x1964]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 6c21:04ea  mov dword ptr [0x1ad], eax  [x1964]
    c.w32(c.dsb + (uint16_t)(0x1adu), c.a.e);
    // 6c21:04ee  movsx eax, word ptr es:[di + 6]  [x1964]
    c.a.e = (uint32_t)((uint32_t)(int32_t)(int16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x6u))));
    // 6c21:04f4  and eax, 0x3ff  [x1964]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 6c21:04fa  mov dword ptr [0x1b1], eax  [x1964]
    c.w32(c.dsb + (uint16_t)(0x1b1u), c.a.e);
    // 6c21:04fe  mov ax, word ptr es:[di + 8]  [x1964]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x8u)));
    // 6c21:0502  mov byte ptr [0x24b], al  [x1964]
    c.w8(c.dsb + (uint16_t)(0x24bu), c.a.l);
    // 6c21:0505  mov ax, word ptr es:[di + 0xa]  [x1964]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0xau)));
    // 6c21:0509  mov byte ptr [0x24c], al  [x1964]
    c.w8(c.dsb + (uint16_t)(0x24cu), c.a.l);
    // 6c21:050c  xor eax, eax  [x1964]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 6c21:050f  mov ax, word ptr es:[di + 0xc]  [x1964]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0xcu)));
    // 6c21:0513  mov dword ptr [0x1fa], eax  [x1964]
    c.w32(c.dsb + (uint16_t)(0x1fau), c.a.e);
    // 6c21:0517  add word ptr [0x21c], 0xe  [x1964]
    c.w16(c.dsb + (uint16_t)(0x21cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0x21cu)), 0xeu, false));
    // 6c21:051c  cmp word ptr [0x21c], 0x6b68  [x1964]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x21cu)), 0x6b68u, true);
    // 6c21:0522  jb 0x52a  [x1964]
    if (c.cf) goto L6c73a;
L6c734:
    if (c.tracing) c.traceAt(0x6c734);
    // 6c21:0524  mov word ptr [0x21c], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x21cu), 0x0u);
L6c73a:
    if (c.tracing) c.traceAt(0x6c73a);
    // 6c21:052a  loop 0x4cb  [x1964]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6c6db;
L6c73c:
    if (c.tracing) c.traceAt(0x6c73c);
    // 6c21:052c  retf   [x1964]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6c740:
    if (c.tracing) c.traceAt(0x6c740);
    // 6c21:0530  mov edx, dword ptr [0x1d1]  [x111156]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d1u)));
    // 6c21:0535  mov eax, dword ptr fs:[edx + 4]  [x111156]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:053b  imul eax, eax, 0x50  [x111156]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 6c21:053f  mov dword ptr [0x164], eax  [x111156]
    c.w32(c.dsb + (uint16_t)(0x164u), c.a.e);
    // 6c21:0543  xor edi, edi  [x111156]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L6c756:
    if (c.tracing) c.traceAt(0x6c756);
    // 6c21:0546  mov edx, dword ptr [0x1d5]  [x117962]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d5u)));
    // 6c21:054b  mov esi, dword ptr fs:[edx]  [x117962]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:0550  mov edi, dword ptr fs:[edx + 4]  [x117962]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:0556  sub edx, 8  [x117962]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 6c21:055a  mov dword ptr [0x1d5], edx  [x117962]
    c.w32(c.dsb + (uint16_t)(0x1d5u), c.dx_.e);
    // 6c21:055f  cmp edx, dword ptr [0x1d9]  [x117962]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1d9u)), true);
    // 6c21:0564  jge 0x570  [x117962]
    if ((c.sf == c.of)) goto L6c780;
L6c776:
    if (c.tracing) c.traceAt(0x6c776);
    // 6c21:0566  mov edx, dword ptr [0x1dd]  [x33073]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1ddu)));
    // 6c21:056b  mov dword ptr [0x1d5], edx  [x33073]
    c.w32(c.dsb + (uint16_t)(0x1d5u), c.dx_.e);
L6c780:
    if (c.tracing) c.traceAt(0x6c780);
    // 6c21:0570  mov eax, dword ptr fs:[edx]  [x117962]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:0575  mov ebx, dword ptr fs:[edx + 4]  [x117962]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:057b  mov edx, ebx  [x117962]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6c21:057e  sub edx, edi  [x117962]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6c21:0581  je 0x546  [x117962]
    if (c.zf) goto L6c756;
L6c793:
    if (c.tracing) c.traceAt(0x6c793);
    // 6c21:0583  mov dword ptr [0x158], edx  [x111156]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dx_.e);
    // 6c21:0588  mov ecx, ebx  [x111156]
    c.c.e = (uint32_t)(c.b.e);
    // 6c21:058b  sub ecx, edi  [x111156]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6c21:058e  sub eax, esi  [x111156]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:0591  shl eax, 0x10  [x111156]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:0595  cdq   [x111156]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:0597  or ecx, 1  [x111156]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 6c21:059b  idiv ecx  [x111156]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x59bu); }   // #DE: int 0, then again
    // 6c21:059e  mov dword ptr cs:[0x6f5], eax  [x111156]
    c.w32(c.csb + (uint16_t)(0x6f5u), c.a.e);
    // 6c21:05a3  shl esi, 0x10  [x111156]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6c21:05a7  mov dword ptr [0x150], esi  [x111156]
    c.w32(c.dsb + (uint16_t)(0x150u), c.si.e);
L6c7bc:
    if (c.tracing) c.traceAt(0x6c7bc);
    // 6c21:05ac  mov edx, dword ptr [0x1d1]  [x139764]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d1u)));
    // 6c21:05b1  mov esi, dword ptr fs:[edx]  [x139764]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:05b6  mov edi, dword ptr fs:[edx + 4]  [x139764]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:05bc  add edx, 8  [x139764]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6c21:05c0  mov dword ptr [0x1d1], edx  [x139764]
    c.w32(c.dsb + (uint16_t)(0x1d1u), c.dx_.e);
    // 6c21:05c5  cmp edx, dword ptr [0x1dd]  [x139764]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1ddu)), true);
    // 6c21:05ca  jle 0x5d6  [x139764]
    if ((c.zf || c.sf != c.of)) goto L6c7e6;
L6c7dc:
    if (c.tracing) c.traceAt(0x6c7dc);
    // 6c21:05cc  mov edx, dword ptr [0x1d9]  [x32886]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d9u)));
    // 6c21:05d1  mov dword ptr [0x1d1], edx  [x32886]
    c.w32(c.dsb + (uint16_t)(0x1d1u), c.dx_.e);
L6c7e6:
    if (c.tracing) c.traceAt(0x6c7e6);
    // 6c21:05d6  mov eax, dword ptr fs:[edx]  [x139764]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:05db  mov ebx, dword ptr fs:[edx + 4]  [x139764]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:05e1  mov edx, ebx  [x139764]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6c21:05e4  sub edx, edi  [x139764]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6c21:05e7  je 0x5ac  [x139764]
    if (c.zf) goto L6c7bc;
L6c7f9:
    if (c.tracing) c.traceAt(0x6c7f9);
    // 6c21:05e9  mov dword ptr [0x15c], edx  [x111156]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dx_.e);
    // 6c21:05ee  mov ecx, ebx  [x111156]
    c.c.e = (uint32_t)(c.b.e);
    // 6c21:05f1  sub ecx, edi  [x111156]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6c21:05f4  sub eax, esi  [x111156]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:05f7  shl eax, 0x10  [x111156]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:05fb  cdq   [x111156]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:05fd  or ecx, 1  [x111156]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 6c21:0601  idiv ecx  [x111156]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x601u); }   // #DE: int 0, then again
    // 6c21:0604  mov dword ptr cs:[0x6fe], eax  [x111156]
    c.w32(c.csb + (uint16_t)(0x6feu), c.a.e);
    // 6c21:0609  shl esi, 0x10  [x111156]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6c21:060d  mov dword ptr [0x154], esi  [x111156]
    c.w32(c.dsb + (uint16_t)(0x154u), c.si.e);
L6c822:
    if (c.tracing) c.traceAt(0x6c822);
    // 6c21:0612  cmp dword ptr [0x164], 0  [x3348736]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x164u)), 0x0u, true);
    // 6c21:0618  jl 0x6ea  [x3348736]
    if ((c.sf != c.of)) goto L6c8fa;
L6c82c:
    if (c.tracing) c.traceAt(0x6c82c);
    // 6c21:061c  mov eax, dword ptr [0x150]  [x3085153]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x150u)));
    // 6c21:0620  mov edx, dword ptr [0x154]  [x3085153]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x154u)));
    // 6c21:0625  sar eax, 0x10  [x3085153]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:0629  sar edx, 0x10  [x3085153]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 6c21:062d  mov bh, byte ptr gs:[eax*8 + 0x7d02]  [x3085153]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d02u)));
    // 6c21:0636  mov bl, byte ptr gs:[edx*8 + 0x7d04]  [x3085153]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d04u)));
    // 6c21:063f  mov di, word ptr gs:[eax*8 + 0x7d00]  [x3085153]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d00u)));
    // 6c21:0648  mov cx, word ptr gs:[edx*8 + 0x7d00]  [x3085153]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d00u)));
    // 6c21:0651  sub cx, di  [x3085153]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 6c21:0653  je 0x6a0  [x3085153]
    if (c.zf) goto L6c8b0;
L6c865:
    if (c.tracing) c.traceAt(0x6c865);
    // 6c21:0655  js 0x801  [x2590946]
    if (c.sf) goto L6ca11;
L6c869:
    if (c.tracing) c.traceAt(0x6c869);
    // 6c21:0659  add edi, dword ptr [0x164]  [x2590838]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x164u)), true));
    // 6c21:065e  mov dx, 0x3c4  [x2590838]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6c21:0661  mov al, 2  [x2590838]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:0663  mov ah, bh  [x2590838]
    c.a.h = (uint8_t)(c.b.h);
    // 6c21:0665  out dx, ax  [x2590838]
    c.ip = 0x666u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:0666  mov eax, dword ptr [0x144]  [x2590838]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 6c21:066a  stosb byte ptr es:[di], al  [x2590838]
    c.stos<8, false>(0);
    // 6c21:066b  dec cx  [x2590838]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 6c21:066c  je 0x692  [x2590838]
    if (c.zf) goto L6c8a2;
L6c87e:
    if (c.tracing) c.traceAt(0x6c87e);
    // 6c21:066e  mov ax, 0xf02  [x2161406]
    c.a.x = (uint16_t)(0xf02u);
    // 6c21:0671  out dx, ax  [x2161406]
    c.ip = 0x672u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:0672  mov eax, dword ptr [0x144]  [x2161406]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 6c21:0676  cmp cx, 2  [x2161406]
    c.sub<16>(c.c.x, 0x2u, true);
    // 6c21:0679  jb 0x685  [x2161406]
    if (c.cf) goto L6c895;
L6c88b:
    if (c.tracing) c.traceAt(0x6c88b);
    // 6c21:067b  test di, 1  [x1777978]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 6c21:067f  jne 0x685  [x1777978]
    if (!c.zf) goto L6c895;
L6c891:
    if (c.tracing) c.traceAt(0x6c891);
    // 6c21:0681  stosb byte ptr es:[di], al  [x771228]
    c.stos<8, false>(0);
    // 6c21:0682  dec cx  [x771228]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 6c21:0683  je 0x6ea  [x771228]
    if (c.zf) goto L6c8fa;
L6c895:
    if (c.tracing) c.traceAt(0x6c895);
    // 6c21:0685  mov si, cx  [x2161406]
    c.si.x = (uint16_t)(c.c.x);
    // 6c21:0687  shr cx, 1  [x2161406]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L6c899:
    if (c.tracing) c.traceAt(0x6c899);
    // 6c21:0689  rep stosw word ptr es:[di], ax  [x8077895]
    c.stos<16, false>(1);
L6c89b:
    if (c.tracing) c.traceAt(0x6c89b);
    // 6c21:068b  mov cx, si  [x2161406]
    c.c.x = (uint16_t)(c.si.x);
    // 6c21:068d  and cx, 1  [x2161406]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L6c8a0:
    if (c.tracing) c.traceAt(0x6c8a0);
    // 6c21:0690  rep stosb byte ptr es:[di], al  [x3318159]
    c.stos<8, false>(1);
L6c8a2:
    if (c.tracing) c.traceAt(0x6c8a2);
    // 6c21:0692  mov ah, bl  [x2590838]
    c.a.h = (uint8_t)(c.b.l);
    // 6c21:0694  mov al, 2  [x2590838]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:0696  out dx, ax  [x2590838]
    c.ip = 0x697u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:0697  mov eax, dword ptr [0x144]  [x2590838]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 6c21:069b  mov byte ptr es:[di], al  [x2590838]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 6c21:069e  jmp 0x6ea  [x2590838]
    goto L6c8fa;
L6c8b0:
    if (c.tracing) c.traceAt(0x6c8b0);
    // 6c21:06a0  mov si, 0x8000  [x494207]
    c.si.x = (uint16_t)(0x8000u);
    // 6c21:06a3  mov cx, ax  [x494207]
    c.c.x = (uint16_t)(c.a.x);
    // 6c21:06a5  and cx, dx  [x494207]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 6c21:06a7  js 0x6ea  [x494207]
    if (c.sf) goto L6c8fa;
L6c8b9:
    if (c.tracing) c.traceAt(0x6c8b9);
    // 6c21:06a9  mov ax, word ptr gs:[eax*8 + 0x7d06]  [x390797]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x7d06u)));
    // 6c21:06b2  mov dx, word ptr gs:[edx*8 + 0x7d06]  [x390797]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x7d06u)));
    // 6c21:06bb  mov cx, ax  [x390797]
    c.c.x = (uint16_t)(c.a.x);
    // 6c21:06bd  and cx, dx  [x390797]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 6c21:06bf  js 0x6ea  [x390797]
    if (c.sf) goto L6c8fa;
L6c8d1:
    if (c.tracing) c.traceAt(0x6c8d1);
    // 6c21:06c1  add edi, dword ptr [0x164]  [x292690]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x164u)), false));
    // 6c21:06c6  mov bx, 0xf03  [x292690]
    c.b.x = (uint16_t)(0xf03u);
    // 6c21:06c9  mov cx, ax  [x292690]
    c.c.x = (uint16_t)(c.a.x);
    // 6c21:06cb  and cl, bl  [x292690]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 6c21:06cd  mov al, bh  [x292690]
    c.a.l = (uint8_t)(c.b.h);
    // 6c21:06cf  shl al, cl  [x292690]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 6c21:06d1  mov cx, dx  [x292690]
    c.c.x = (uint16_t)(c.dx_.x);
    // 6c21:06d3  not cx  [x292690]
    c.c.x = (uint16_t)(~(c.c.x));
    // 6c21:06d5  and cl, bl  [x292690]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 6c21:06d7  mov ah, bh  [x292690]
    c.a.h = (uint8_t)(c.b.h);
    // 6c21:06d9  shr ah, cl  [x292690]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6c21:06db  and ah, al  [x292690]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 6c21:06dd  mov dx, 0x3c4  [x292690]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6c21:06e0  mov al, 2  [x292690]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:06e2  out dx, ax  [x292690]
    c.ip = 0x6e3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:06e3  mov eax, dword ptr [0x144]  [x292690]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 6c21:06e7  mov byte ptr es:[di], al  [x292690]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L6c8fa:
    if (c.tracing) c.traceAt(0x6c8fa);
    // 6c21:06ea  add dword ptr [0x164], 0x50  [x3348628]
    c.w32(c.dsb + (uint16_t)(0x164u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x164u)), 0x50u, false));
    // 6c21:06f0  add dword ptr [0x150], 0xffffeeae  [x3348628]
    c.w32(c.dsb + (uint16_t)(0x150u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x150u)), (c.r32(0x6c905)), false));
    // 6c21:06f9  add dword ptr [0x154], 0x39249  [x3348628]
    c.w32(c.dsb + (uint16_t)(0x154u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x154u)), (c.r32(0x6c90e)), true));
    // 6c21:0702  dec dword ptr [0x158]  [x3348628]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x158u)), true));
    // 6c21:0707  jne 0x77c  [x3348628]
    if (!c.zf) goto L6c98c;
L6c919:
    if (c.tracing) c.traceAt(0x6c919);
    // 6c21:0709  mov eax, dword ptr [0x1d1]  [x164703]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d1u)));
    // 6c21:070d  cmp eax, dword ptr [0x1d5]  [x164703]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1d5u)), true);
    // 6c21:0712  je 0x801  [x164703]
    if (c.zf) goto L6ca11;
L6c926:
    if (c.tracing) c.traceAt(0x6c926);
    // 6c21:0716  mov edx, dword ptr [0x1d5]  [x113598]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d5u)));
    // 6c21:071b  mov esi, dword ptr fs:[edx]  [x113598]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:0720  mov edi, dword ptr fs:[edx + 4]  [x113598]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:0726  sub edx, 8  [x113598]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 6c21:072a  mov dword ptr [0x1d5], edx  [x113598]
    c.w32(c.dsb + (uint16_t)(0x1d5u), c.dx_.e);
    // 6c21:072f  cmp edx, dword ptr [0x1d9]  [x113598]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1d9u)), true);
    // 6c21:0734  jge 0x740  [x113598]
    if ((c.sf == c.of)) goto L6c950;
L6c946:
    if (c.tracing) c.traceAt(0x6c946);
    // 6c21:0736  mov edx, dword ptr [0x1dd]  [x33788]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1ddu)));
    // 6c21:073b  mov dword ptr [0x1d5], edx  [x33788]
    c.w32(c.dsb + (uint16_t)(0x1d5u), c.dx_.e);
L6c950:
    if (c.tracing) c.traceAt(0x6c950);
    // 6c21:0740  mov eax, dword ptr fs:[edx]  [x113598]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:0745  mov ebx, dword ptr fs:[edx + 4]  [x113598]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:074b  mov edx, ebx  [x113598]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6c21:074e  sub edx, edi  [x113598]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6c21:0751  je 0x716  [x113598]
    if (c.zf) goto L6c926;
L6c963:
    if (c.tracing) c.traceAt(0x6c963);
    // 6c21:0753  mov dword ptr [0x158], edx  [x85040]
    c.w32(c.dsb + (uint16_t)(0x158u), c.dx_.e);
    // 6c21:0758  mov ecx, ebx  [x85040]
    c.c.e = (uint32_t)(c.b.e);
    // 6c21:075b  sub ecx, edi  [x85040]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6c21:075e  sub eax, esi  [x85040]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:0761  shl eax, 0x10  [x85040]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:0765  cdq   [x85040]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:0767  or ecx, 1  [x85040]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 6c21:076b  idiv ecx  [x85040]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x76bu); }   // #DE: int 0, then again
    // 6c21:076e  mov dword ptr cs:[0x6f5], eax  [x85040]
    c.w32(c.csb + (uint16_t)(0x6f5u), c.a.e);
    // 6c21:0773  shl esi, 0x10  [x85040]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6c21:0777  mov dword ptr [0x150], esi  [x85040]
    c.w32(c.dsb + (uint16_t)(0x150u), c.si.e);
L6c98c:
    if (c.tracing) c.traceAt(0x6c98c);
    // 6c21:077c  dec dword ptr [0x15c]  [x3268965]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x15cu)), true));
    // 6c21:0781  jne 0x7f4  [x3268965]
    if (!c.zf) goto L6ca04;
L6c993:
    if (c.tracing) c.traceAt(0x6c993);
    // 6c21:0783  mov eax, dword ptr [0x1d1]  [x85931]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d1u)));
    // 6c21:0787  cmp eax, dword ptr [0x1d5]  [x85931]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x1d5u)), true);
    // 6c21:078c  je 0x801  [x85931]
    if (c.zf) goto L6ca11;
L6c99e:
    if (c.tracing) c.traceAt(0x6c99e);
    // 6c21:078e  mov edx, dword ptr [0x1d1]  [x114490]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d1u)));
    // 6c21:0793  mov esi, dword ptr fs:[edx]  [x114490]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:0798  mov edi, dword ptr fs:[edx + 4]  [x114490]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:079e  add edx, 8  [x114490]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6c21:07a2  mov dword ptr [0x1d1], edx  [x114490]
    c.w32(c.dsb + (uint16_t)(0x1d1u), c.dx_.e);
    // 6c21:07a7  cmp edx, dword ptr [0x1dd]  [x114490]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x1ddu)), true);
    // 6c21:07ac  jle 0x7b8  [x114490]
    if ((c.zf || c.sf != c.of)) goto L6c9c8;
L6c9be:
    if (c.tracing) c.traceAt(0x6c9be);
    // 6c21:07ae  mov edx, dword ptr [0x1d9]  [x36806]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1d9u)));
    // 6c21:07b3  mov dword ptr [0x1d1], edx  [x36806]
    c.w32(c.dsb + (uint16_t)(0x1d1u), c.dx_.e);
L6c9c8:
    if (c.tracing) c.traceAt(0x6c9c8);
    // 6c21:07b8  mov eax, dword ptr fs:[edx]  [x114490]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6c21:07bd  mov ebx, dword ptr fs:[edx + 4]  [x114490]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6c21:07c3  mov edx, ebx  [x114490]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6c21:07c6  sub edx, edi  [x114490]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6c21:07c9  je 0x78e  [x114490]
    if (c.zf) goto L6c99e;
L6c9db:
    if (c.tracing) c.traceAt(0x6c9db);
    // 6c21:07cb  mov dword ptr [0x15c], edx  [x85931]
    c.w32(c.dsb + (uint16_t)(0x15cu), c.dx_.e);
    // 6c21:07d0  mov ecx, ebx  [x85931]
    c.c.e = (uint32_t)(c.b.e);
    // 6c21:07d3  sub ecx, edi  [x85931]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6c21:07d6  sub eax, esi  [x85931]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6c21:07d9  shl eax, 0x10  [x85931]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6c21:07dd  cdq   [x85931]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:07df  or ecx, 1  [x85931]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) | (0x1u), false));
    // 6c21:07e3  idiv ecx  [x85931]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x7e3u); }   // #DE: int 0, then again
    // 6c21:07e6  mov dword ptr cs:[0x6fe], eax  [x85931]
    c.w32(c.csb + (uint16_t)(0x6feu), c.a.e);
    // 6c21:07eb  shl esi, 0x10  [x85931]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6c21:07ef  mov dword ptr [0x154], esi  [x85931]
    c.w32(c.dsb + (uint16_t)(0x154u), c.si.e);
L6ca04:
    if (c.tracing) c.traceAt(0x6ca04);
    // 6c21:07f4  cmp dword ptr [0x164], 0x4ab0  [x3268965]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x164u)), (c.r32(0x6ca09)), true);
    // 6c21:07fd  jl 0x612  [x3268965]
    if ((c.sf != c.of)) goto L6c822;
L6ca11:
    if (c.tracing) c.traceAt(0x6ca11);
    // 6c21:0801  retf   [x111156]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6ca12:
    if (c.tracing) c.traceAt(0x6ca12);
    // 6c21:0802  mov byte ptr [0x1f2], 0  [x2040]
    c.w8(c.dsb + (uint16_t)(0x1f2u), 0x0u);
    // 6c21:0807  mov byte ptr [0x1f4], 0x50  [x2040]
    c.w8(c.dsb + (uint16_t)(0x1f4u), 0x50u);
    // 6c21:080c  mov al, byte ptr [0x24b]  [x2040]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x24bu)));
    // 6c21:080f  mov byte ptr [0x1f3], al  [x2040]
    c.w8(c.dsb + (uint16_t)(0x1f3u), c.a.l);
    // 6c21:0812  mov al, byte ptr [0x24c]  [x2040]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x24cu)));
    // 6c21:0815  mov byte ptr [0x1f5], al  [x2040]
    c.w8(c.dsb + (uint16_t)(0x1f5u), c.a.l);
    // 6c21:0818  push cs  [x2040]
    c.push16(c.cs);
    // 6c21:0819  call 0x90  [x2040]
    c.push16(0x81cu); code_21(c, 0x6c2a0u); if (c.ip != 0x81cu) c.badReturn(0x6ca29);
L6ca2c:
    if (c.tracing) c.traceAt(0x6ca2c);
    // 6c21:081c  mov ax, word ptr [0x1e9]  [x2040]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e9u)));
    // 6c21:081f  not ax  [x2040]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6c21:0821  and ax, 0x600  [x2040]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6c21:0824  add ax, 0xa000  [x2040]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 6c21:0827  mov es, ax  [x2040]
    c.loadEs(c.a.x);
    // 6c21:0829  mov ah, 0xf  [x2040]
    c.a.h = (uint8_t)(0xfu);
    // 6c21:082b  mov dx, 0x3c4  [x2040]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6c21:082e  mov al, 2  [x2040]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:0830  out dx, ax  [x2040]
    c.ip = 0x831u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:0831  mov eax, 0  [x2040]
    c.a.e = (uint32_t)(0x0u);
    // 6c21:0837  cld   [x2040]
    c.df = false;
    // 6c21:0838  mov ax, 0x3a83  [x2040]
    c.a.x = (uint16_t)(0x3a83u);
    // 6c21:083b  mov fs, ax  [x2040]
    c.loadFs(c.a.x);
    // 6c21:083d  mov eax, 0  [x2040]
    c.a.e = (uint32_t)(0x0u);
    // 6c21:0843  xor bx, bx  [x2040]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 6c21:0845  xor edx, edx  [x2040]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L6ca58:
    if (c.tracing) c.traceAt(0x6ca58);
    // 6c21:0848  mov al, byte ptr [bx]  [x163200]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 6c21:084c  mov si, ax  [x163200]
    c.si.x = (uint16_t)(c.a.x);
    // 6c21:084e  mov edi, 0  [x163200]
    c.di.e = (uint32_t)(0x0u);
    // 6c21:0854  add di, bx  [x163200]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, true));
    // 6c21:0856  mov cx, 0x78  [x163200]
    c.c.x = (uint16_t)(0x78u);
    // 6c21:0859  mov dx, 0x50  [x163200]
    c.dx_.x = (uint16_t)(0x50u);
L6ca6c:
    if (c.tracing) c.traceAt(0x6ca6c);
    // 6c21:085c  mov al, byte ptr fs:[si]  [x19584000]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 6c21:085f  inc si  [x19584000]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 6c21:0860  mov byte ptr es:[di], al  [x19584000]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 6c21:0863  add di, dx  [x19584000]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, true));
    // 6c21:0865  loop 0x85c  [x19584000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6ca6c;
L6ca77:
    if (c.tracing) c.traceAt(0x6ca77);
    // 6c21:0867  inc bx  [x163200]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 6c21:0868  cmp bx, 0x50  [x163200]
    c.sub<16>(c.b.x, 0x50u, true);
    // 6c21:086b  jb 0x848  [x163200]
    if (c.cf) goto L6ca58;
L6ca7d:
    if (c.tracing) c.traceAt(0x6ca7d);
    // 6c21:086d  mov edi, 0x25d0  [x2040]
    c.di.e = (uint32_t)(0x25d0u);
    // 6c21:0873  mov eax, 0x1010101  [x2040]
    c.a.e = (uint32_t)(0x1010101u);
    // 6c21:0879  mov cx, 0x960  [x2040]
    c.c.x = (uint16_t)(0x960u);
L6ca8c:
    if (c.tracing) c.traceAt(0x6ca8c);
    // 6c21:087c  rep stosd dword ptr es:[di], eax  [x4898040]
    c.stos<32, false>(1);
L6ca8f:
    if (c.tracing) c.traceAt(0x6ca8f);
    // 6c21:087f  retf   [x2040]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6ca90:
    if (c.tracing) c.traceAt(0x6ca90);
    // 6c21:0880  mov byte ptr [0x1f2], 0  [x210]
    c.w8(c.dsb + (uint16_t)(0x1f2u), 0x0u);
    // 6c21:0885  mov byte ptr [0x1f4], 0x50  [x210]
    c.w8(c.dsb + (uint16_t)(0x1f4u), 0x50u);
    // 6c21:088a  mov al, byte ptr [0x24b]  [x210]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x24bu)));
    // 6c21:088d  mov byte ptr [0x1f3], al  [x210]
    c.w8(c.dsb + (uint16_t)(0x1f3u), c.a.l);
    // 6c21:0890  mov al, byte ptr [0x24c]  [x210]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x24cu)));
    // 6c21:0893  mov byte ptr [0x1f5], al  [x210]
    c.w8(c.dsb + (uint16_t)(0x1f5u), c.a.l);
    // 6c21:0896  mov ax, word ptr [0x1e9]  [x210]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e9u)));
    // 6c21:0899  not ax  [x210]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6c21:089b  and ax, 0x600  [x210]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6c21:089e  add ax, 0xa000  [x210]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 6c21:08a1  mov es, ax  [x210]
    c.loadEs(c.a.x);
    // 6c21:08a3  mov ah, 0xf  [x210]
    c.a.h = (uint8_t)(0xfu);
    // 6c21:08a5  mov dx, 0x3c4  [x210]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6c21:08a8  mov al, 2  [x210]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:08aa  out dx, ax  [x210]
    c.ip = 0x8abu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:08ab  mov eax, 0  [x210]
    c.a.e = (uint32_t)(0x0u);
    // 6c21:08b1  cld   [x210]
    c.df = false;
    // 6c21:08b2  mov ax, 0x3a83  [x210]
    c.a.x = (uint16_t)(0x3a83u);
    // 6c21:08b5  mov fs, ax  [x210]
    c.loadFs(c.a.x);
    // 6c21:08b7  mov eax, 0  [x210]
    c.a.e = (uint32_t)(0x0u);
    // 6c21:08bd  xor bx, bx  [x210]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 6c21:08bf  xor edx, edx  [x210]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L6cad2:
    if (c.tracing) c.traceAt(0x6cad2);
    // 6c21:08c2  mov al, byte ptr [bx]  [x16800]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x)));
    // 6c21:08c6  mov si, ax  [x16800]
    c.si.x = (uint16_t)(c.a.x);
    // 6c21:08c8  mov edi, 0  [x16800]
    c.di.e = (uint32_t)(0x0u);
    // 6c21:08ce  add di, bx  [x16800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, true));
    // 6c21:08d0  mov cx, 0x78  [x16800]
    c.c.x = (uint16_t)(0x78u);
    // 6c21:08d3  mov dx, 0x50  [x16800]
    c.dx_.x = (uint16_t)(0x50u);
L6cae6:
    if (c.tracing) c.traceAt(0x6cae6);
    // 6c21:08d6  mov al, byte ptr fs:[si]  [x2016000]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 6c21:08d9  inc si  [x2016000]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 6c21:08da  mov byte ptr es:[di], al  [x2016000]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 6c21:08dd  add di, dx  [x2016000]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, true));
    // 6c21:08df  loop 0x8d6  [x2016000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cae6;
L6caf1:
    if (c.tracing) c.traceAt(0x6caf1);
    // 6c21:08e1  inc bx  [x16800]
    c.b.x = (uint16_t)(c.inc<16>(c.b.x, false));
    // 6c21:08e2  cmp bx, 0x50  [x16800]
    c.sub<16>(c.b.x, 0x50u, true);
    // 6c21:08e5  jb 0x8c2  [x16800]
    if (c.cf) goto L6cad2;
L6caf7:
    if (c.tracing) c.traceAt(0x6caf7);
    // 6c21:08e7  mov edi, 0x25d0  [x210]
    c.di.e = (uint32_t)(0x25d0u);
    // 6c21:08ed  mov eax, 0x1010101  [x210]
    c.a.e = (uint32_t)(0x1010101u);
    // 6c21:08f3  mov cx, 0x960  [x210]
    c.c.x = (uint16_t)(0x960u);
L6cb06:
    if (c.tracing) c.traceAt(0x6cb06);
    // 6c21:08f6  rep stosd dword ptr es:[di], eax  [x504210]
    c.stos<32, false>(1);
L6cb09:
    if (c.tracing) c.traceAt(0x6cb09);
    // 6c21:08f9  retf   [x210]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6cb0a:
    if (c.tracing) c.traceAt(0x6cb0a);
    // 6c21:08fa  mov ax, 0x5027  [x1]
    c.a.x = (uint16_t)(0x5027u);
    // 6c21:08fd  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6c21:08ff  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 6c21:0902  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
L6cb15:
    if (c.tracing) c.traceAt(0x6cb15);
    // 6c21:0905  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 6c21:0908  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 6c21:0909  mov ax, 0xf  [x4000]
    c.a.x = (uint16_t)(0xfu);
    // 6c21:090c  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 6c21:090d  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 6c21:0910  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 6c21:0911  mov ax, 0  [x4000]
    c.a.x = (uint16_t)(0x0u);
    // 6c21:0914  stosw word ptr es:[di], ax  [x4000]
    c.stos<16, false>(0);
    // 6c21:0915  loop 0x905  [x4000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cb15;
L6cb27:
    if (c.tracing) c.traceAt(0x6cb27);
    // 6c21:0917  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 6c21:091a  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 6c21:091c  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L6cb2f:
    if (c.tracing) c.traceAt(0x6cb2f);
    // 6c21:091f  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 6c21:0921  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 6c21:0924  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6c21:0925  push cx  [x320]
    c.push16(c.c.x);
    // 6c21:0926  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 6c21:0928  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 6c21:092b  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 6c21:092d  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6c21:092f  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 6c21:0931  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 6c21:0933  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 6c21:0935  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 6c21:0936  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6c21:0937  push cx  [x320]
    c.push16(c.c.x);
    // 6c21:0938  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 6c21:093a  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 6c21:093c  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 6c21:093f  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 6c21:0941  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 6c21:0943  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 6c21:0945  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 6c21:0947  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6c21:0948  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 6c21:094a  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 6c21:094b  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 6c21:094c  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 6c21:094e  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 6c21:0951  jb 0x955  [x320]
    if (c.cf) goto L6cb65;
L6cb63:
    if (c.tracing) c.traceAt(0x6cb63);
    // 6c21:0953  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L6cb65:
    if (c.tracing) c.traceAt(0x6cb65);
    // 6c21:0955  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 6c21:0956  loop 0x91f  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cb2f;
L6cb68:
    if (c.tracing) c.traceAt(0x6cb68);
    // 6c21:0958  mov cx, 0xe60  [x1]
    c.c.x = (uint16_t)(0xe60u);
L6cb6b:
    if (c.tracing) c.traceAt(0x6cb6b);
    // 6c21:095b  mov ax, 0x4f  [x3680]
    c.a.x = (uint16_t)(0x4fu);
    // 6c21:095e  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 6c21:095f  mov ax, 0  [x3680]
    c.a.x = (uint16_t)(0x0u);
    // 6c21:0962  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 6c21:0963  mov ax, 0xf  [x3680]
    c.a.x = (uint16_t)(0xfu);
    // 6c21:0966  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 6c21:0967  mov ax, 0xffff  [x3680]
    c.a.x = (uint16_t)(0xffffu);
    // 6c21:096a  stosw word ptr es:[di], ax  [x3680]
    c.stos<16, false>(0);
    // 6c21:096b  loop 0x95b  [x3680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cb6b;
L6cb7d:
    if (c.tracing) c.traceAt(0x6cb7d);
    // 6c21:096d  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6cb80:
    if (c.tracing) c.traceAt(0x6cb80);
    // 6c21:0970  les bx, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:0974  mov eax, dword ptr es:[bx + 4]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)));
    // 6c21:0979  mov byte ptr [0x1eb], al  [x5224]
    c.w8(c.dsb + (uint16_t)(0x1ebu), c.a.l);
    // 6c21:097c  mov ebx, dword ptr [0x140]  [x5224]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0981  cmp dword ptr es:[bx - 4], 0  [x5224]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 6c21:0987  je 0xab5  [x5224]
    if (c.zf) goto L6ccc5;
L6cb9b:
    if (c.tracing) c.traceAt(0x6cb9b);
    // 6c21:098b  mov dword ptr [0x148], 0  [x5224]
    c.w32(c.dsb + (uint16_t)(0x148u), 0x0u);
    // 6c21:0994  les bx, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:0998  mov esi, dword ptr [0x140]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:099d  mov dword ptr [0x1ec], esi  [x5224]
    c.w32(c.dsb + (uint16_t)(0x1ecu), c.si.e);
    // 6c21:09a2  mov eax, dword ptr es:[si - 8]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 6c21:09a7  mov dword ptr [0x14c], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x14cu), c.a.e);
    // 6c21:09ab  les bx, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:09af  lfs bp, ptr [0x181]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x181u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x181u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6c21:09b4  xor ebx, ebx  [x5224]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6c21:09b7  xor ebp, ebp  [x5224]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 6c21:09ba  xor edx, edx  [x5224]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L6cbcd:
    if (c.tracing) c.traceAt(0x6cbcd);
    // 6c21:09bd  mov ebx, esi  [x590512]
    c.b.e = (uint32_t)(c.si.e);
    // 6c21:09c0  mov bx, word ptr es:[ebx]  [x590512]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 6c21:09c4  mov ecx, dword ptr es:[ebx]  [x590512]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:09c9  mov edi, ecx  [x590512]
    c.di.e = (uint32_t)(c.c.e);
    // 6c21:09cc  add ebx, 0x18  [x590512]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6c21:09d0  xor eax, eax  [x590512]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 6c21:09d3  mov ebp, dword ptr es:[ebx]  [x590512]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:09d8  add ebp, ebp  [x590512]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:09db  add eax, dword ptr fs:[ebp*8 + 0x10]  [x590512]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6c21:09e5  mov ebp, dword ptr es:[ebx + 4]  [x590512]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 6c21:09eb  add ebp, ebp  [x590512]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:09ee  add eax, dword ptr fs:[ebp*8 + 0x10]  [x590512]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6c21:09f8  mov ebp, dword ptr es:[ebx + 8]  [x590512]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 6c21:09fe  add ebp, ebp  [x590512]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0a01  add eax, dword ptr fs:[ebp*8 + 0x10]  [x590512]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6c21:0a0b  add ebx, 0xc  [x590512]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 6c21:0a0f  sub ecx, 3  [x590512]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 6c21:0a13  je 0xa2d  [x590512]
    if (c.zf) goto L6cc3d;
L6cc25:
    if (c.tracing) c.traceAt(0x6cc25);
    // 6c21:0a15  mov ebp, dword ptr es:[ebx]  [x412688]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0a1a  add ebp, ebp  [x412688]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0a1d  add eax, dword ptr fs:[ebp*8 + 0x10]  [x412688]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 6c21:0a27  add ebx, 4  [x412688]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6c21:0a2b  loop 0xa15  [x412688]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cc25;
L6cc3d:
    if (c.tracing) c.traceAt(0x6cc3d);
    // 6c21:0a2d  cmp edi, 4  [x590512]
    c.sub<32>(c.di.e, 0x4u, true);
    // 6c21:0a31  jne 0xa39  [x590512]
    if (!c.zf) goto L6cc49;
L6cc43:
    if (c.tracing) c.traceAt(0x6cc43);
    // 6c21:0a33  sar eax, 0xb  [x412688]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xbu) & 31), true));
    // 6c21:0a37  jmp 0xa45  [x412688]
    goto L6cc55;
L6cc49:
    if (c.tracing) c.traceAt(0x6cc49);
    // 6c21:0a39  sar eax, 9  [x177824]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x9u) & 31), false));
    // 6c21:0a3d  cdq   [x177824]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6c21:0a3f  mov ecx, edi  [x177824]
    c.c.e = (uint32_t)(c.di.e);
    // 6c21:0a42  idiv ecx  [x177824]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0xa42u); }   // #DE: int 0, then again
L6cc55:
    if (c.tracing) c.traceAt(0x6cc55);
    // 6c21:0a45  add eax, 0x8000  [x590512]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 6c21:0a4b  mov word ptr es:[esi + 2], ax  [x590512]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 6c21:0a50  add esi, 4  [x590512]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 6c21:0a54  inc dword ptr [0x148]  [x590512]
    c.w32(c.dsb + (uint16_t)(0x148u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x148u)), false));
    // 6c21:0a59  mov eax, dword ptr [0x14c]  [x590512]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14cu)));
    // 6c21:0a5d  cmp dword ptr [0x148], eax  [x590512]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x148u)), c.a.e, true);
    // 6c21:0a62  jb 0x9bd  [x590512]
    if (c.cf) goto L6cbcd;
L6cc76:
    if (c.tracing) c.traceAt(0x6cc76);
    // 6c21:0a66  mov esi, dword ptr [0x1ec]  [x5224]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1ecu)));
    // 6c21:0a6b  mov dword ptr [0x140], esi  [x5224]
    c.w32(c.dsb + (uint16_t)(0x140u), c.si.e);
    // 6c21:0a70  mov edi, 4  [x5224]
    c.di.e = (uint32_t)(0x4u);
    // 6c21:0a76  les bx, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:0a7a  mov ebp, dword ptr [0x140]  [x5224]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0a7f  mov edx, dword ptr es:[ebp - 8]  [x5224]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
    // 6c21:0a85  xor ebx, ebx  [x5224]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6c21:0a88  xor ecx, ecx  [x5224]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
L6cc9b:
    if (c.tracing) c.traceAt(0x6cc9b);
    // 6c21:0a8b  mov bx, bp  [x17012]
    c.b.x = (uint16_t)(c.bp.x);
    // 6c21:0a8d  mov cx, dx  [x17012]
    c.c.x = (uint16_t)(c.dx_.x);
    // 6c21:0a8f  xor si, si  [x17012]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L6cca1:
    if (c.tracing) c.traceAt(0x6cca1);
    // 6c21:0a91  mov eax, dword ptr es:[ebx]  [x2765960]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0a96  cmp eax, dword ptr es:[ebx + 4]  [x2765960]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 6c21:0a9c  jae 0xaac  [x2765960]
    if (!c.cf) goto L6ccbc;
L6ccae:
    if (c.tracing) c.traceAt(0x6ccae);
    // 6c21:0a9e  xchg dword ptr es:[ebx + 4], eax  [x208089]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 6c21:0aa4  mov dword ptr es:[ebx], eax  [x208089]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 6c21:0aa9  mov si, 1  [x208089]
    c.si.x = (uint16_t)(0x1u);
L6ccbc:
    if (c.tracing) c.traceAt(0x6ccbc);
    // 6c21:0aac  add bx, di  [x2765960]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.di.x, true));
    // 6c21:0aae  loop 0xa91  [x2765960]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cca1;
L6ccc0:
    if (c.tracing) c.traceAt(0x6ccc0);
    // 6c21:0ab0  cmp si, 0  [x17012]
    c.sub<16>(c.si.x, 0x0u, true);
    // 6c21:0ab3  jne 0xa8b  [x17012]
    if (!c.zf) goto L6cc9b;
L6ccc5:
    if (c.tracing) c.traceAt(0x6ccc5);
    // 6c21:0ab5  mov ax, word ptr [0x1e9]  [x5224]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e9u)));
    // 6c21:0ab8  not ax  [x5224]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6c21:0aba  and ax, 0x600  [x5224]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6c21:0abd  add ax, 0xa000  [x5224]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 6c21:0ac0  mov word ptr [0x1f0], ax  [x5224]
    c.w16(c.dsb + (uint16_t)(0x1f0u), c.a.x);
    // 6c21:0ac3  mov dword ptr [0x148], 0  [x5224]
    c.w32(c.dsb + (uint16_t)(0x148u), 0x0u);
    // 6c21:0acc  les bx, ptr [0x17d]  [x5224]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:0ad0  mov ebx, dword ptr [0x140]  [x5224]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0ad5  mov eax, dword ptr es:[bx - 8]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 6c21:0ada  mov dword ptr [0x14c], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x14cu), c.a.e);
L6ccee:
    if (c.tracing) c.traceAt(0x6ccee);
    // 6c21:0ade  xor ebx, ebx  [x590512]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6c21:0ae1  xor ebp, ebp  [x590512]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 6c21:0ae4  xor edx, edx  [x590512]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6c21:0ae7  les bx, ptr [0x17d]  [x590512]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x17du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x17du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6c21:0aeb  lfs bp, ptr [0x181]  [x590512]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x181u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x181u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6c21:0af0  mov ax, 0x5fc7  [x590512]
    c.a.x = (uint16_t)(0x5fc7u);
    // 6c21:0af3  mov gs, ax  [x590512]
    c.loadGs(c.a.x);
    // 6c21:0af5  mov ebx, dword ptr [0x140]  [x590512]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0afa  mov ax, word ptr es:[bx + 2]  [x590512]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x + 0x2u)));
    // 6c21:0afe  mov word ptr [0x20a], ax  [x590512]
    c.w16(c.dsb + (uint16_t)(0x20au), c.a.x);
    // 6c21:0b01  mov bx, word ptr es:[bx]  [x590512]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6c21:0b04  mov ecx, dword ptr es:[ebx + 0x14]  [x590512]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 6c21:0b0a  mov dword ptr [0x144], ecx  [x590512]
    c.w32(c.dsb + (uint16_t)(0x144u), c.c.e);
    // 6c21:0b0f  mov ecx, dword ptr es:[ebx]  [x590512]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0b14  mov dword ptr gs:[edx], ecx  [x590512]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 6c21:0b19  add ebx, 0x18  [x590512]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6c21:0b1d  mov ebx, dword ptr [0x140]  [x590512]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0b22  mov bx, word ptr es:[bx]  [x590512]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6c21:0b25  mov ecx, dword ptr es:[ebx]  [x590512]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0b2a  add ebx, 0x18  [x590512]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, true));
L6cd3e:
    if (c.tracing) c.traceAt(0x6cd3e);
    // 6c21:0b2e  mov ebp, dword ptr es:[ebx]  [x1434361]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0b33  add ebp, ebp  [x1434361]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0b36  mov eax, dword ptr fs:[ebp*8 + 0x10]  [x1434361]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)));
    // 6c21:0b40  cmp eax, 0  [x1434361]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6c21:0b44  jle 0xe51  [x1434361]
    if ((c.zf || c.sf != c.of)) goto L6d061;
L6cd58:
    if (c.tracing) c.traceAt(0x6cd58);
    // 6c21:0b48  add edx, 8  [x1149946]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6c21:0b4c  add ebx, 4  [x1149946]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6c21:0b50  loop 0xb2e  [x1149946]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cd3e;
L6cd62:
    if (c.tracing) c.traceAt(0x6cd62);
    // 6c21:0b52  mov ebx, dword ptr [0x140]  [x306097]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0b57  mov bx, word ptr es:[bx]  [x306097]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6c21:0b5a  add ebx, 0x18  [x306097]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6c21:0b5e  mov ebp, dword ptr es:[ebx]  [x306097]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0b63  add ebp, ebp  [x306097]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0b66  mov ecx, ebp  [x306097]
    c.c.e = (uint32_t)(c.bp.e);
    // 6c21:0b69  mov ebp, dword ptr es:[ebx + 4]  [x306097]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 6c21:0b6f  add ebp, ebp  [x306097]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0b72  mov edi, dword ptr fs:[ebp*8 + 8]  [x306097]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6c21:0b7c  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x306097]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6c21:0b86  mov ebp, dword ptr es:[ebx + 8]  [x306097]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 6c21:0b8c  add ebp, ebp  [x306097]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0b8f  mov edx, dword ptr fs:[ebp*8 + 8]  [x306097]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6c21:0b99  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x306097]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6c21:0ba3  mov ebx, ecx  [x306097]
    c.b.e = (uint32_t)(c.c.e);
    // 6c21:0ba6  mov eax, ebp  [x306097]
    c.a.e = (uint32_t)(c.bp.e);
    // 6c21:0ba9  sub eax, esi  [x306097]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 6c21:0bac  mov dword ptr cs:[0xbc3], eax  [x306097]
    c.w32(c.csb + (uint16_t)(0xbc3u), c.a.e);
    // 6c21:0bb1  jmp 0xbb3  [x306097]
    goto L6cdc3;
L6cdc3:
    if (c.tracing) c.traceAt(0x6cdc3);
    // 6c21:0bb3  mov eax, edi  [x306097]
    c.a.e = (uint32_t)(c.di.e);
    // 6c21:0bb6  sub eax, dword ptr fs:[ebx*8 + 8]  [x306097]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 6c21:0bc0  imul eax, eax, 0xe9  [x306097]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x6cdd3))));
    // 6c21:0bc7  mov ecx, esi  [x306097]
    c.c.e = (uint32_t)(c.si.e);
    // 6c21:0bca  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x306097]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 6c21:0bd4  mov dword ptr cs:[0xbe5], ecx  [x306097]
    c.w32(c.csb + (uint16_t)(0xbe5u), c.c.e);
    // 6c21:0bda  jmp 0xbdc  [x306097]
    goto L6cdec;
L6cdec:
    if (c.tracing) c.traceAt(0x6cdec);
    // 6c21:0bdc  mov ecx, edx  [x306097]
    c.c.e = (uint32_t)(c.dx_.e);
    // 6c21:0bdf  sub ecx, edi  [x306097]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6c21:0be2  imul ecx, ecx, 0xf  [x306097]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x6cdf5))));
    // 6c21:0be9  cmp eax, ecx  [x306097]
    c.sub<32>(c.a.e, c.c.e, true);
    // 6c21:0bec  jl 0xe51  [x306097]
    if ((c.sf != c.of)) goto L6d061;
L6ce00:
    if (c.tracing) c.traceAt(0x6ce00);
    // 6c21:0bf0  je 0xe51  [x259540]
    if (c.zf) goto L6d061;
L6ce04:
    if (c.tracing) c.traceAt(0x6ce04);
    // 6c21:0bf4  mov ebx, dword ptr [0x140]  [x250269]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x140u)));
    // 6c21:0bf9  mov bx, word ptr es:[bx]  [x250269]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6c21:0bfc  mov ecx, dword ptr es:[ebx]  [x250269]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0c01  mov dword ptr gs:[0], ecx  [x250269]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 6c21:0c07  add ebx, 0x18  [x250269]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6c21:0c0b  mov dword ptr gs:[0xc], edi  [x250269]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 6c21:0c11  mov dword ptr gs:[0x10], esi  [x250269]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 6c21:0c17  mov dword ptr gs:[0x14], edx  [x250269]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 6c21:0c1d  mov dword ptr gs:[0x18], ebp  [x250269]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 6c21:0c23  mov ebp, dword ptr es:[ebx]  [x250269]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0c28  add ebp, ebp  [x250269]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0c2b  mov eax, dword ptr fs:[ebp*8 + 8]  [x250269]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6c21:0c35  mov dword ptr gs:[4], eax  [x250269]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 6c21:0c3a  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x250269]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6c21:0c44  mov dword ptr gs:[8], eax  [x250269]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 6c21:0c49  mov edx, 0x1c  [x250269]
    c.dx_.e = (uint32_t)(0x1cu);
    // 6c21:0c4f  add ebx, 0xc  [x250269]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 6c21:0c53  sub ecx, 3  [x250269]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 6c21:0c57  je 0xc8a  [x250269]
    if (c.zf) goto L6ce9a;
L6ce69:
    if (c.tracing) c.traceAt(0x6ce69);
    // 6c21:0c59  mov ebp, dword ptr es:[ebx]  [x166557]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6c21:0c5e  add ebp, ebp  [x166557]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6c21:0c61  mov eax, dword ptr fs:[ebp*8 + 8]  [x166557]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 6c21:0c6b  mov dword ptr gs:[edx], eax  [x166557]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 6c21:0c70  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x166557]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 6c21:0c7a  mov dword ptr gs:[edx + 4], eax  [x166557]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 6c21:0c80  add edx, 8  [x166557]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6c21:0c84  add ebx, 4  [x166557]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6c21:0c88  loop 0xc59  [x166557]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6ce69;
L6ce9a:
    if (c.tracing) c.traceAt(0x6ce9a);
    // 6c21:0c8a  xor edi, edi  [x250269]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 6c21:0c8d  mov ecx, dword ptr gs:[edi]  [x250269]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0c92  lea eax, [edi + 4]  [x250269]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 6c21:0c97  mov dword ptr [0x1d9], eax  [x250269]
    c.w32(c.dsb + (uint16_t)(0x1d9u), c.a.e);
    // 6c21:0c9b  lea ebx, [ecx - 1]  [x250269]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 6c21:0ca0  lea eax, [eax + ebx*8]  [x250269]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 6c21:0ca5  mov dword ptr [0x1dd], eax  [x250269]
    c.w32(c.dsb + (uint16_t)(0x1ddu), c.a.e);
    // 6c21:0ca9  dec ecx  [x250269]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 6c21:0cab  add edi, 4  [x250269]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x4u, true));
    // 6c21:0caf  mov eax, dword ptr gs:[edi]  [x250269]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0cb4  mov ebx, edi  [x250269]
    c.b.e = (uint32_t)(c.di.e);
    // 6c21:0cb7  mov ebp, eax  [x250269]
    c.bp.e = (uint32_t)(c.a.e);
L6ceca:
    if (c.tracing) c.traceAt(0x6ceca);
    // 6c21:0cba  add edi, 8  [x667095]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 6c21:0cbe  mov edx, dword ptr gs:[edi]  [x667095]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0cc3  cmp ebp, edx  [x667095]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 6c21:0cc6  jle 0xcce  [x667095]
    if ((c.zf || c.sf != c.of)) goto L6cede;
L6ced8:
    if (c.tracing) c.traceAt(0x6ced8);
    // 6c21:0cc8  mov ebp, edx  [x213744]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 6c21:0ccb  mov ebx, edi  [x213744]
    c.b.e = (uint32_t)(c.di.e);
L6cede:
    if (c.tracing) c.traceAt(0x6cede);
    // 6c21:0cce  cmp eax, edx  [x667095]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 6c21:0cd1  jge 0xcd6  [x667095]
    if ((c.sf == c.of)) goto L6cee6;
L6cee3:
    if (c.tracing) c.traceAt(0x6cee3);
    // 6c21:0cd3  mov eax, edx  [x269718]
    c.a.e = (uint32_t)(c.dx_.e);
L6cee6:
    if (c.tracing) c.traceAt(0x6cee6);
    // 6c21:0cd6  loop 0xcba  [x667095]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6ceca;
L6cee8:
    if (c.tracing) c.traceAt(0x6cee8);
    // 6c21:0cd8  mov ecx, ebp  [x250269]
    c.c.e = (uint32_t)(c.bp.e);
    // 6c21:0cdb  cmp eax, 0  [x250269]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6c21:0cdf  jle 0xe51  [x250269]
    if ((c.zf || c.sf != c.of)) goto L6d061;
L6cef3:
    if (c.tracing) c.traceAt(0x6cef3);
    // 6c21:0ce3  cmp ecx, 0x13f  [x195160]
    c.sub<32>(c.c.e, 0x13fu, true);
    // 6c21:0cea  jge 0xe51  [x195160]
    if ((c.sf == c.of)) goto L6d061;
L6cefe:
    if (c.tracing) c.traceAt(0x6cefe);
    // 6c21:0cee  xor edi, edi  [x134542]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 6c21:0cf1  mov ecx, dword ptr gs:[edi]  [x134542]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0cf6  lea eax, [edi + 4]  [x134542]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 6c21:0cfb  mov dword ptr [0x1d9], eax  [x134542]
    c.w32(c.dsb + (uint16_t)(0x1d9u), c.a.e);
    // 6c21:0cff  lea ebx, [ecx - 1]  [x134542]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 6c21:0d04  lea eax, [eax + ebx*8]  [x134542]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 6c21:0d09  mov dword ptr [0x1dd], eax  [x134542]
    c.w32(c.dsb + (uint16_t)(0x1ddu), c.a.e);
    // 6c21:0d0d  dec ecx  [x134542]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 6c21:0d0f  add edi, 8  [x134542]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 6c21:0d13  mov eax, dword ptr gs:[edi]  [x134542]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0d18  mov ebx, edi  [x134542]
    c.b.e = (uint32_t)(c.di.e);
    // 6c21:0d1b  mov ebp, eax  [x134542]
    c.bp.e = (uint32_t)(c.a.e);
L6cf2e:
    if (c.tracing) c.traceAt(0x6cf2e);
    // 6c21:0d1e  add edi, 8  [x356715]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 6c21:0d22  mov edx, dword ptr gs:[edi]  [x356715]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6c21:0d27  cmp ebp, edx  [x356715]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 6c21:0d2a  jle 0xd32  [x356715]
    if ((c.zf || c.sf != c.of)) goto L6cf42;
L6cf3c:
    if (c.tracing) c.traceAt(0x6cf3c);
    // 6c21:0d2c  mov ebp, edx  [x127435]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 6c21:0d2f  mov ebx, edi  [x127435]
    c.b.e = (uint32_t)(c.di.e);
L6cf42:
    if (c.tracing) c.traceAt(0x6cf42);
    // 6c21:0d32  cmp eax, edx  [x356715]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 6c21:0d35  jge 0xd3a  [x356715]
    if ((c.sf == c.of)) goto L6cf4a;
L6cf47:
    if (c.tracing) c.traceAt(0x6cf47);
    // 6c21:0d37  mov eax, edx  [x97482]
    c.a.e = (uint32_t)(c.dx_.e);
L6cf4a:
    if (c.tracing) c.traceAt(0x6cf4a);
    // 6c21:0d3a  loop 0xd1e  [x356715]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6cf2e;
L6cf4c:
    if (c.tracing) c.traceAt(0x6cf4c);
    // 6c21:0d3c  mov ecx, ebp  [x134542]
    c.c.e = (uint32_t)(c.bp.e);
    // 6c21:0d3f  sub ebx, 4  [x134542]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 6c21:0d43  cmp ecx, 0xef  [x134542]
    c.sub<32>(c.c.e, 0xefu, true);
    // 6c21:0d4a  jg 0xe51  [x134542]
    if ((!c.zf && c.sf == c.of)) goto L6d061;
L6cf5e:
    if (c.tracing) c.traceAt(0x6cf5e);
    // 6c21:0d4e  cmp eax, ecx  [x117135]
    c.sub<32>(c.a.e, c.c.e, true);
    // 6c21:0d51  je 0xe51  [x117135]
    if (c.zf) goto L6d061;
L6cf65:
    if (c.tracing) c.traceAt(0x6cf65);
    // 6c21:0d55  cmp eax, 0  [x117135]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6c21:0d59  jl 0xe51  [x117135]
    if ((c.sf != c.of)) goto L6d061;
L6cf6d:
    if (c.tracing) c.traceAt(0x6cf6d);
    // 6c21:0d5d  imul eax, eax, 0x50  [x111156]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 6c21:0d61  cmp eax, 0x4ab0  [x111156]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 6c21:0d67  jle 0xd6f  [x111156]
    if ((c.zf || c.sf != c.of)) goto L6cf7f;
L6cf79:
    if (c.tracing) c.traceAt(0x6cf79);
    // 6c21:0d69  mov eax, 0x4ab0  [x3688]
    c.a.e = (uint32_t)(0x4ab0u);
L6cf7f:
    if (c.tracing) c.traceAt(0x6cf7f);
    // 6c21:0d6f  mov word ptr cs:[0x7f9], ax  [x111156]
    c.w16(c.csb + (uint16_t)(0x7f9u), c.a.x);
    // 6c21:0d73  mov dword ptr [0x1d1], ebx  [x111156]
    c.w32(c.dsb + (uint16_t)(0x1d1u), c.b.e);
    // 6c21:0d78  mov dword ptr [0x1d5], ebx  [x111156]
    c.w32(c.dsb + (uint16_t)(0x1d5u), c.b.e);
    // 6c21:0d7d  cmp byte ptr [0x1eb], 2  [x111156]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x1ebu)), 0x2u, true);
    // 6c21:0d82  je 0xe0b  [x111156]
    if (c.zf) goto L6d01b;
    c.notTranslated(0x6cf96, "fall-through");
L6d01b:
    if (c.tracing) c.traceAt(0x6d01b);
    // 6c21:0e0b  mov bx, word ptr [0x20a]  [x111156]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x20au)));
    // 6c21:0e0f  sub bx, 0x8000  [x111156]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8000u, false));
    // 6c21:0e13  sar bx, 0xa  [x111156]
    c.b.x = (uint16_t)(c.sar<16>(c.b.x, (int)((0xau) & 31), false));
    // 6c21:0e16  cmp bx, 7  [x111156]
    c.sub<16>(c.b.x, 0x7u, true);
    // 6c21:0e19  jle 0xe1e  [x111156]
    if ((c.zf || c.sf != c.of)) goto L6d02e;
L6d02b:
    if (c.tracing) c.traceAt(0x6d02b);
    // 6c21:0e1b  mov bx, 7  [x148]
    c.b.x = (uint16_t)(0x7u);
L6d02e:
    if (c.tracing) c.traceAt(0x6d02e);
    // 6c21:0e1e  cmp bx, 0  [x111156]
    c.sub<16>(c.b.x, 0x0u, true);
    // 6c21:0e21  jge 0xe26  [x111156]
    if ((c.sf == c.of)) goto L6d036;
    c.notTranslated(0x6d033, "fall-through");
L6d036:
    if (c.tracing) c.traceAt(0x6d036);
    // 6c21:0e26  mov eax, dword ptr [0x144]  [x111156]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x144u)));
    // 6c21:0e2a  shl eax, 3  [x111156]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 6c21:0e2e  add al, bl  [x111156]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 6c21:0e30  mov ah, al  [x111156]
    c.a.h = (uint8_t)(c.a.l);
    // 6c21:0e32  mov cx, ax  [x111156]
    c.c.x = (uint16_t)(c.a.x);
    // 6c21:0e34  shl eax, 0x10  [x111156]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 6c21:0e38  mov ax, cx  [x111156]
    c.a.x = (uint16_t)(c.c.x);
    // 6c21:0e3a  mov dword ptr [0x144], eax  [x111156]
    c.w32(c.dsb + (uint16_t)(0x144u), c.a.e);
    // 6c21:0e3e  mov ax, 0x5fc7  [x111156]
    c.a.x = (uint16_t)(0x5fc7u);
    // 6c21:0e41  mov fs, ax  [x111156]
    c.loadFs(c.a.x);
    // 6c21:0e43  mov cx, 0x5027  [x111156]
    c.c.x = (uint16_t)(0x5027u);
    // 6c21:0e46  mov gs, cx  [x111156]
    c.loadGs(c.c.x);
    // 6c21:0e48  mov ax, word ptr [0x1f0]  [x111156]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1f0u)));
    // 6c21:0e4b  mov es, ax  [x111156]
    c.loadEs(c.a.x);
    // 6c21:0e4d  push cs  [x111156]
    c.push16(c.cs);
    // 6c21:0e4e  call 0x530  [x111156]
    c.push16(0xe51u); code_21(c, 0x6c740u); if (c.ip != 0xe51u) c.badReturn(0x6d05e);
L6d061:
    if (c.tracing) c.traceAt(0x6d061);
    // 6c21:0e51  add dword ptr [0x140], 4  [x590512]
    c.w32(c.dsb + (uint16_t)(0x140u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x140u)), 0x4u, false));
    // 6c21:0e57  inc dword ptr [0x148]  [x590512]
    c.w32(c.dsb + (uint16_t)(0x148u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x148u)), false));
    // 6c21:0e5c  mov eax, dword ptr [0x14c]  [x590512]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14cu)));
    // 6c21:0e60  cmp dword ptr [0x148], eax  [x590512]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x148u)), c.a.e, true);
    // 6c21:0e65  jne 0xade  [x590512]
    if (!c.zf) goto L6ccee;
L6d079:
    if (c.tracing) c.traceAt(0x6d079);
    // 6c21:0e69  retf   [x5224]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6d07a:
    if (c.tracing) c.traceAt(0x6d07a);
    // 6c21:0e6a  mov eax, dword ptr [0x1a1]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a1u)));
    // 6c21:0e6e  mov dword ptr cs:[0xdaa], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0xdaau), c.a.e);
    // 6c21:0e73  mov eax, dword ptr [0x1a5]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a5u)));
    // 6c21:0e77  mov dword ptr cs:[0xdb1], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0xdb1u), c.a.e);
    // 6c21:0e7c  mov eax, dword ptr [0x1a9]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x1a9u)));
    // 6c21:0e80  mov dword ptr cs:[0xdbb], eax  [x5224]
    c.w32(c.csb + (uint16_t)(0xdbbu), c.a.e);
    // 6c21:0e85  retf   [x5224]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6d096:
    if (c.tracing) c.traceAt(0x6d096);
    // 6c21:0e86  push ds  [x2]
    c.push16(c.ds);
    // 6c21:0e87  mov ds, ax  [x2]
    c.loadDs(c.a.x);
    // 6c21:0e89  mov dx, 0x3c7  [x2]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 6c21:0e8c  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 6c21:0e8e  out dx, al  [x2]
    c.ip = 0xe8fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:0e8f  cld   [x2]
    c.df = false;
    // 6c21:0e90  mov dx, 0x3c8  [x2]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 6c21:0e93  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 6c21:0e95  out dx, al  [x2]
    c.ip = 0xe96u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:0e96  mov cx, 0xff  [x2]
    c.c.x = (uint16_t)(0xffu);
L6d0a9:
    if (c.tracing) c.traceAt(0x6d0a9);
    // 6c21:0e99  mov dx, 0x3c9  [x510]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 6c21:0e9c  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xe9du; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6c21:0e9d  out dx, al  [x510]
    c.ip = 0xe9eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:0e9e  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xe9fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6c21:0e9f  out dx, al  [x510]
    c.ip = 0xea0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:0ea0  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xea1u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6c21:0ea1  out dx, al  [x510]
    c.ip = 0xea2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:0ea2  loop 0xe99  [x510]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6d0a9;
L6d0b4:
    if (c.tracing) c.traceAt(0x6d0b4);
    // 6c21:0ea4  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 6c21:0ea5  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6d0b6:
    if (c.tracing) c.traceAt(0x6d0b6);
    // 6c21:0ea6  mov ax, word ptr [0x1e9]  [x2250]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e9u)));
    // 6c21:0ea9  not ax  [x2250]
    c.a.x = (uint16_t)(~(c.a.x));
    // 6c21:0eab  and ax, 0x600  [x2250]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x600u), false));
    // 6c21:0eae  shl ah, 4  [x2250]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 6c21:0eb1  mov dx, 0x3d4  [x2250]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 6c21:0eb4  mov al, 0xc  [x2250]
    c.a.l = (uint8_t)(0xcu);
    // 6c21:0eb6  out dx, ax  [x2250]
    c.ip = 0xeb7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:0eb7  not word ptr [0x1e9]  [x2250]
    c.w16(c.dsb + (uint16_t)(0x1e9u), ~(c.r16(c.dsb + (uint16_t)(0x1e9u))));
    // 6c21:0ebb  retf   [x2250]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6d0cc:
    if (c.tracing) c.traceAt(0x6d0cc);
    // 6c21:0ebc  mov ax, 0x4d77  [x5224]
    c.a.x = (uint16_t)(0x4d77u);
    // 6c21:0ebf  mov fs, ax  [x5224]
    c.loadFs(c.a.x);
    // 6c21:0ec1  mov bx, word ptr fs:[0]  [x5224]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 6c21:0ec6  mov cx, word ptr [0x20c]  [x5224]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x20cu)));
    // 6c21:0eca  shl cx, 2  [x5224]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 6c21:0ecd  add bx, cx  [x5224]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 6c21:0ecf  mov bx, word ptr fs:[bx]  [x5224]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 6c21:0ed2  mov cx, word ptr fs:[bx]  [x5224]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 6c21:0ed5  mov dx, word ptr fs:[bx + 2]  [x5224]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 6c21:0ed9  mov word ptr [0x17d], cx  [x5224]
    c.w16(c.dsb + (uint16_t)(0x17du), c.c.x);
    // 6c21:0edd  mov word ptr [0x17f], dx  [x5224]
    c.w16(c.dsb + (uint16_t)(0x17fu), c.dx_.x);
    // 6c21:0ee1  mov ax, word ptr fs:[bx + 4]  [x5224]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 6c21:0ee5  movzx eax, ax  [x5224]
    c.a.e = (uint32_t)(c.a.x);
    // 6c21:0ee9  mov dword ptr [0x140], eax  [x5224]
    c.w32(c.dsb + (uint16_t)(0x140u), c.a.e);
    // 6c21:0eed  mov eax, dword ptr fs:[bx + 0x16]  [x5224]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 6c21:0ef2  mov edx, dword ptr fs:[bx + 0x1a]  [x5224]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 6c21:0ef7  mov ecx, dword ptr fs:[bx + 0x1e]  [x5224]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 6c21:0efc  add eax, dword ptr fs:[bx + 6]  [x5224]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 6c21:0f01  add edx, dword ptr fs:[bx + 0xa]  [x5224]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 6c21:0f06  add ecx, dword ptr fs:[bx + 0xe]  [x5224]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 6c21:0f0b  mov ebp, 0x3ff  [x5224]
    c.bp.e = (uint32_t)(0x3ffu);
    // 6c21:0f11  and eax, ebp  [x5224]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 6c21:0f14  and edx, ebp  [x5224]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 6c21:0f17  and ecx, ebp  [x5224]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), true));
    // 6c21:0f1a  mov dword ptr fs:[bx + 0x16], eax  [x5224]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 6c21:0f1f  mov dword ptr fs:[bx + 0x1a], edx  [x5224]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 6c21:0f24  mov dword ptr fs:[bx + 0x1e], ecx  [x5224]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 6c21:0f29  push cs  [x5224]
    c.push16(c.cs);
    // 6c21:0f2a  call 0x3b3  [x5224]
    c.push16(0xf2du); code_21(c, 0x6c5c3u); if (c.ip != 0xf2du) c.badReturn(0x6d13a);
L6d13d:
    if (c.tracing) c.traceAt(0x6d13d);
    // 6c21:0f2d  push cs  [x5224]
    c.push16(c.cs);
    // 6c21:0f2e  call 0xe6a  [x5224]
    c.push16(0xf31u); code_21(c, 0x6d07au); if (c.ip != 0xf31u) c.badReturn(0x6d13e);
L6d141:
    if (c.tracing) c.traceAt(0x6d141);
    // 6c21:0f31  push cs  [x5224]
    c.push16(c.cs);
    // 6c21:0f32  call 0x970  [x5224]
    c.push16(0xf35u); code_21(c, 0x6cb80u); if (c.ip != 0xf35u) c.badReturn(0x6d142);
L6d145:
    if (c.tracing) c.traceAt(0x6d145);
    // 6c21:0f35  retf   [x5224]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6d146:
    if (c.tracing) c.traceAt(0x6d146);
    // 6c21:0f36  mov ax, 0x69eb  [x1]
    c.a.x = (uint16_t)(0x69ebu);
    // 6c21:0f39  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6c21:0f3b  mov word ptr [0x21f], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0x21fu), 0x1u);
    // 6c21:0f41  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0f42  call 0x8fa  [x1]
    c.push16(0xf45u); code_21(c, 0x6cb0au); if (c.ip != 0xf45u) c.badReturn(0x6d152);
L6d155:
    if (c.tracing) c.traceAt(0x6d155);
    // 6c21:0f45  mov ax, 0x4e33  [x1]
    c.a.x = (uint16_t)(0x4e33u);
    // 6c21:0f48  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6c21:0f4b  mov si, 0x181  [x1]
    c.si.x = (uint16_t)(0x181u);
    // 6c21:0f4e  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6c21:0f50  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6c21:0f53  mov ax, 0x2cf9  [x1]
    c.a.x = (uint16_t)(0x2cf9u);
    // 6c21:0f56  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6c21:0f59  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0f5a  call 0xe86  [x1]
    c.push16(0xf5du); code_21(c, 0x6d096u); if (c.ip != 0xf5du) c.badReturn(0x6d16a);
L6d16d:
    if (c.tracing) c.traceAt(0x6d16d);
    // 6c21:0f5d  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 6c21:0f5f  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6c21:0f61  mov di, 0x24d  [x1]
    c.di.x = (uint16_t)(0x24du);
    // 6c21:0f64  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6c21:0f67  mov ax, 0x2cf9  [x1]
    c.a.x = (uint16_t)(0x2cf9u);
    // 6c21:0f6a  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 6c21:0f6d  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0f6e  call 0  [x1]
    c.push16(0xf71u); code_21(c, 0x6c210u); if (c.ip != 0xf71u) c.badReturn(0x6d17e);
L6d181:
    if (c.tracing) c.traceAt(0x6d181);
    // 6c21:0f71  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 6c21:0f73  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6c21:0f75  mov di, 0x54d  [x1]
    c.di.x = (uint16_t)(0x54du);
    // 6c21:0f78  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6c21:0f7b  mov ax, 0x2cf9  [x1]
    c.a.x = (uint16_t)(0x2cf9u);
    // 6c21:0f7e  mov cx, 0x2fd  [x1]
    c.c.x = (uint16_t)(0x2fdu);
    // 6c21:0f81  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0f82  call 0  [x1]
    c.push16(0xf85u); code_21(c, 0x6c210u); if (c.ip != 0xf85u) c.badReturn(0x6d192);
L6d195:
    if (c.tracing) c.traceAt(0x6d195);
    // 6c21:0f85  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 6c21:0f87  mov di, 0x54d  [x1]
    c.di.x = (uint16_t)(0x54du);
    // 6c21:0f8a  mov cx, 0x2fd  [x1]
    c.c.x = (uint16_t)(0x2fdu);
L6d19d:
    if (c.tracing) c.traceAt(0x6d19d);
    // 6c21:0f8d  rep stosb byte ptr es:[di], al  [x766]
    c.stos<8, false>(1);
L6d19f:
    if (c.tracing) c.traceAt(0x6d19f);
    // 6c21:0f8f  mov word ptr [0x2352], 0x24d  [x1]
    c.w16(c.dsb + (uint16_t)(0x2352u), 0x24du);
    // 6c21:0f95  mov word ptr [0x2354], 0x54d  [x1]
    c.w16(c.dsb + (uint16_t)(0x2354u), 0x54du);
    // 6c21:0f9b  mov word ptr [0x2356], 0x84d  [x1]
    c.w16(c.dsb + (uint16_t)(0x2356u), 0x84du);
    // 6c21:0fa1  mov word ptr [0x2358], 0xe4d  [x1]
    c.w16(c.dsb + (uint16_t)(0x2358u), 0xe4du);
    // 6c21:0fa7  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6c21:0faa  mov byte ptr [0x2351], 0xf0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2351u), 0xf0u);
    // 6c21:0faf  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0fb0  call 8  [x1]
    c.push16(0xfb3u); code_21(c, 0x6c218u); if (c.ip != 0xfb3u) c.badReturn(0x6d1c0);
L6d1c3:
    if (c.tracing) c.traceAt(0x6d1c3);
    // 6c21:0fb3  mov ax, 0x69eb  [x1]
    c.a.x = (uint16_t)(0x69ebu);
    // 6c21:0fb6  mov si, 0x24d  [x1]
    c.si.x = (uint16_t)(0x24du);
    // 6c21:0fb9  push cs  [x1]
    c.push16(c.cs);
    // 6c21:0fba  call 0xe86  [x1]
    c.push16(0xfbdu); code_21(c, 0x6d096u); if (c.ip != 0xfbdu) c.badReturn(0x6d1ca);
L6d1cd:
    if (c.tracing) c.traceAt(0x6d1cd);
    // 6c21:0fbd  mov ax, 0x4e33  [x1]
    c.a.x = (uint16_t)(0x4e33u);
    // 6c21:0fc0  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6c21:0fc3  mov si, 0x181  [x1]
    c.si.x = (uint16_t)(0x181u);
    // 6c21:0fc6  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6c21:0fc8  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6c21:0fcb  mov dword ptr [0x1fe], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1feu), 0x0u);
    // 6c21:0fd4  mov dword ptr [0x1fa], 0x32c8  [x1]
    c.w32(c.dsb + (uint16_t)(0x1fau), 0x32c8u);
    // 6c21:0fdd  mov dword ptr [0x1ad], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1adu), 0x0u);
    // 6c21:0fe6  mov dword ptr [0x1b1], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1b1u), 0x0u);
    // 6c21:0fef  mov dword ptr [0x1b5], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x1b5u), 0x0u);
L6d208:
    if (c.tracing) c.traceAt(0x6d208);
    // 6c21:0ff8  push cs  [x1964]
    c.push16(c.cs);
    // 6c21:0ff9  call 0x4be  [x1964]
    c.push16(0xffcu); code_21(c, 0x6c6ceu); if (c.ip != 0xffcu) c.badReturn(0x6d209);
L6d20c:
    if (c.tracing) c.traceAt(0x6d20c);
    // 6c21:0ffc  push cs  [x1964]
    c.push16(c.cs);
    // 6c21:0ffd  call 0x802  [x1964]
    c.push16(0x1000u); code_21(c, 0x6ca12u); if (c.ip != 0x1000u) c.badReturn(0x6d20d);
L6d210:
    if (c.tracing) c.traceAt(0x6d210);
    // 6c21:1000  mov word ptr [0x20c], 1  [x1964]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x1u);
    // 6c21:1006  push cs  [x1964]
    c.push16(c.cs);
    // 6c21:1007  call 0xebc  [x1964]
    c.push16(0x100au); code_21(c, 0x6d0ccu); if (c.ip != 0x100au) c.badReturn(0x6d217);
L6d21a:
    if (c.tracing) c.traceAt(0x6d21a);
    // 6c21:100a  mov word ptr [0x20c], 0  [x1964]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x0u);
    // 6c21:1010  push cs  [x1964]
    c.push16(c.cs);
    // 6c21:1011  call 0xebc  [x1964]
    c.push16(0x1014u); code_21(c, 0x6d0ccu); if (c.ip != 0x1014u) c.badReturn(0x6d221);
L6d224:
    if (c.tracing) c.traceAt(0x6d224);
    // 6c21:1014  push cs  [x1964]
    c.push16(c.cs);
    // 6c21:1015  call 0xea6  [x1964]
    c.push16(0x1018u); code_21(c, 0x6d0b6u); if (c.ip != 0x1018u) c.badReturn(0x6d225);
L6d228:
    if (c.tracing) c.traceAt(0x6d228);
    // 6c21:1018  mov bx, 0xe  [x1964]
    c.b.x = (uint16_t)(0xeu);
    // 6c21:101b  int 0xff  [x1964]
    c.ip = 0x101du; c.d32 = false; c.intr(0xff, 0x101du);
L6d22d:
    if (c.tracing) c.traceAt(0x6d22d);
    // 6c21:101d  mov word ptr [0x21f], ax  [x1964]
    c.w16(c.dsb + (uint16_t)(0x21fu), c.a.x);
    // 6c21:1020  mov ax, word ptr [0x21f]  [x1964]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
    // 6c21:1023  add word ptr [0x235a], ax  [x1964]
    c.w16(c.dsb + (uint16_t)(0x235au), c.add<16>(c.r16(c.dsb + (uint16_t)(0x235au)), c.a.x, false));
    // 6c21:1027  cmp word ptr [0x235a], 0x7ab  [x1964]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x235au)), 0x7abu, true);
    // 6c21:102d  jbe 0xff8  [x1964]
    if ((c.cf || c.zf)) goto L6d208;
L6d23f:
    if (c.tracing) c.traceAt(0x6d23f);
    // 6c21:102f  mov dword ptr [0x1f6], 1  [x1]
    c.w32(c.dsb + (uint16_t)(0x1f6u), 0x1u);
    // 6c21:1038  mov dword ptr [0x1fe], 0x636  [x1]
    c.w32(c.dsb + (uint16_t)(0x1feu), 0x636u);
    // 6c21:1041  mov dword ptr [0x1ad], 0x400  [x1]
    c.w32(c.dsb + (uint16_t)(0x1adu), 0x400u);
    // 6c21:104a  mov dword ptr [0x1b1], 0x200  [x1]
    c.w32(c.dsb + (uint16_t)(0x1b1u), 0x200u);
    // 6c21:1053  mov byte ptr [0x24b], 0x40  [x1]
    c.w8(c.dsb + (uint16_t)(0x24bu), 0x40u);
    // 6c21:1058  mov byte ptr [0x24c], 0x40  [x1]
    c.w8(c.dsb + (uint16_t)(0x24cu), 0x40u);
    // 6c21:105d  mov dword ptr [0x1fa], 0x1964  [x1]
    c.w32(c.dsb + (uint16_t)(0x1fau), 0x1964u);
L6d276:
    if (c.tracing) c.traceAt(0x6d276);
    // 6c21:1066  push cs  [x76]
    c.push16(c.cs);
    // 6c21:1067  call 0x802  [x76]
    c.push16(0x106au); code_21(c, 0x6ca12u); if (c.ip != 0x106au) c.badReturn(0x6d277);
L6d27a:
    if (c.tracing) c.traceAt(0x6d27a);
    // 6c21:106a  mov word ptr [0x20c], 3  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x3u);
    // 6c21:1070  push cs  [x76]
    c.push16(c.cs);
    // 6c21:1071  call 0xebc  [x76]
    c.push16(0x1074u); code_21(c, 0x6d0ccu); if (c.ip != 0x1074u) c.badReturn(0x6d281);
L6d284:
    if (c.tracing) c.traceAt(0x6d284);
    // 6c21:1074  mov word ptr [0x20c], 2  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x2u);
    // 6c21:107a  push cs  [x76]
    c.push16(c.cs);
    // 6c21:107b  call 0xebc  [x76]
    c.push16(0x107eu); code_21(c, 0x6d0ccu); if (c.ip != 0x107eu) c.badReturn(0x6d28b);
L6d28e:
    if (c.tracing) c.traceAt(0x6d28e);
    // 6c21:107e  mov word ptr [0x20c], 4  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x4u);
    // 6c21:1084  push cs  [x76]
    c.push16(c.cs);
    // 6c21:1085  call 0xebc  [x76]
    c.push16(0x1088u); code_21(c, 0x6d0ccu); if (c.ip != 0x1088u) c.badReturn(0x6d295);
L6d298:
    if (c.tracing) c.traceAt(0x6d298);
    // 6c21:1088  mov word ptr [0x20c], 5  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x5u);
    // 6c21:108e  push cs  [x76]
    c.push16(c.cs);
    // 6c21:108f  call 0xebc  [x76]
    c.push16(0x1092u); code_21(c, 0x6d0ccu); if (c.ip != 0x1092u) c.badReturn(0x6d29f);
L6d2a2:
    if (c.tracing) c.traceAt(0x6d2a2);
    // 6c21:1092  mov word ptr [0x20c], 6  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x6u);
    // 6c21:1098  push cs  [x76]
    c.push16(c.cs);
    // 6c21:1099  call 0xebc  [x76]
    c.push16(0x109cu); code_21(c, 0x6d0ccu); if (c.ip != 0x109cu) c.badReturn(0x6d2a9);
L6d2ac:
    if (c.tracing) c.traceAt(0x6d2ac);
    // 6c21:109c  mov word ptr [0x20c], 7  [x76]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x7u);
    // 6c21:10a2  push cs  [x76]
    c.push16(c.cs);
    // 6c21:10a3  call 0xebc  [x76]
    c.push16(0x10a6u); code_21(c, 0x6d0ccu); if (c.ip != 0x10a6u) c.badReturn(0x6d2b3);
L6d2b6:
    if (c.tracing) c.traceAt(0x6d2b6);
    // 6c21:10a6  push cs  [x76]
    c.push16(c.cs);
    // 6c21:10a7  call 0xea6  [x76]
    c.push16(0x10aau); code_21(c, 0x6d0b6u); if (c.ip != 0x10aau) c.badReturn(0x6d2b7);
L6d2ba:
    if (c.tracing) c.traceAt(0x6d2ba);
    // 6c21:10aa  mov bx, 0xe  [x76]
    c.b.x = (uint16_t)(0xeu);
    // 6c21:10ad  int 0xff  [x76]
    c.ip = 0x10afu; c.d32 = false; c.intr(0xff, 0x10afu);
L6d2bf:
    if (c.tracing) c.traceAt(0x6d2bf);
    // 6c21:10af  mov word ptr [0x21f], ax  [x76]
    c.w16(c.dsb + (uint16_t)(0x21fu), c.a.x);
    // 6c21:10b2  mov ax, word ptr [0x21f]  [x76]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
    // 6c21:10b5  add word ptr [0x235a], ax  [x76]
    c.w16(c.dsb + (uint16_t)(0x235au), c.add<16>(c.r16(c.dsb + (uint16_t)(0x235au)), c.a.x, false));
    // 6c21:10b9  mov cx, word ptr [0x21f]  [x76]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
L6d2cd:
    if (c.tracing) c.traceAt(0x6d2cd);
    // 6c21:10bd  sub dword ptr [0x1fa], 0x9c  [x76]
    c.w32(c.dsb + (uint16_t)(0x1fau), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1fau)), 0x9cu, true));
    // 6c21:10c6  loop 0x10bd  [x76]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6d2cd;
L6d2d8:
    if (c.tracing) c.traceAt(0x6d2d8);
    // 6c21:10c8  cmp word ptr [0x235a], 0x7f7  [x76]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x235au)), 0x7f7u, true);
    // 6c21:10ce  jbe 0x1066  [x76]
    if ((c.cf || c.zf)) goto L6d276;
L6d2e0:
    if (c.tracing) c.traceAt(0x6d2e0);
    // 6c21:10d0  mov byte ptr [0x2350], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2350u), 0x0u);
    // 6c21:10d5  mov byte ptr [0x234f], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x234fu), 0x0u);
L6d2ea:
    if (c.tracing) c.traceAt(0x6d2ea);
    // 6c21:10da  push cs  [x210]
    c.push16(c.cs);
    // 6c21:10db  call 0x880  [x210]
    c.push16(0x10deu); code_21(c, 0x6ca90u); if (c.ip != 0x10deu) c.badReturn(0x6d2eb);
L6d2ee:
    if (c.tracing) c.traceAt(0x6d2ee);
    // 6c21:10de  mov word ptr [0x20c], 4  [x210]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x4u);
    // 6c21:10e4  push cs  [x210]
    c.push16(c.cs);
    // 6c21:10e5  call 0xebc  [x210]
    c.push16(0x10e8u); code_21(c, 0x6d0ccu); if (c.ip != 0x10e8u) c.badReturn(0x6d2f5);
L6d2f8:
    if (c.tracing) c.traceAt(0x6d2f8);
    // 6c21:10e8  mov word ptr [0x20c], 5  [x210]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x5u);
    // 6c21:10ee  push cs  [x210]
    c.push16(c.cs);
    // 6c21:10ef  call 0xebc  [x210]
    c.push16(0x10f2u); code_21(c, 0x6d0ccu); if (c.ip != 0x10f2u) c.badReturn(0x6d2ff);
L6d302:
    if (c.tracing) c.traceAt(0x6d302);
    // 6c21:10f2  mov word ptr [0x20c], 6  [x210]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x6u);
    // 6c21:10f8  push cs  [x210]
    c.push16(c.cs);
    // 6c21:10f9  call 0xebc  [x210]
    c.push16(0x10fcu); code_21(c, 0x6d0ccu); if (c.ip != 0x10fcu) c.badReturn(0x6d309);
L6d30c:
    if (c.tracing) c.traceAt(0x6d30c);
    // 6c21:10fc  mov word ptr [0x20c], 7  [x210]
    c.w16(c.dsb + (uint16_t)(0x20cu), 0x7u);
    // 6c21:1102  push cs  [x210]
    c.push16(c.cs);
    // 6c21:1103  call 0xebc  [x210]
    c.push16(0x1106u); code_21(c, 0x6d0ccu); if (c.ip != 0x1106u) c.badReturn(0x6d313);
L6d316:
    if (c.tracing) c.traceAt(0x6d316);
    // 6c21:1106  push cs  [x210]
    c.push16(c.cs);
    // 6c21:1107  call 0xea6  [x210]
    c.push16(0x110au); code_21(c, 0x6d0b6u); if (c.ip != 0x110au) c.badReturn(0x6d317);
L6d31a:
    if (c.tracing) c.traceAt(0x6d31a);
    // 6c21:110a  mov bx, 0xe  [x210]
    c.b.x = (uint16_t)(0xeu);
    // 6c21:110d  int 0xff  [x210]
    c.ip = 0x110fu; c.d32 = false; c.intr(0xff, 0x110fu);
L6d31f:
    if (c.tracing) c.traceAt(0x6d31f);
    // 6c21:110f  mov word ptr [0x21f], ax  [x210]
    c.w16(c.dsb + (uint16_t)(0x21fu), c.a.x);
    // 6c21:1112  push cs  [x210]
    c.push16(c.cs);
    // 6c21:1113  call 0x4f  [x210]
    c.push16(0x1116u); code_21(c, 0x6c25fu); if (c.ip != 0x1116u) c.badReturn(0x6d323);
L6d326:
    if (c.tracing) c.traceAt(0x6d326);
    // 6c21:1116  mov ax, word ptr [0x21f]  [x210]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
    // 6c21:1119  add word ptr [0x235a], ax  [x210]
    c.w16(c.dsb + (uint16_t)(0x235au), c.add<16>(c.r16(c.dsb + (uint16_t)(0x235au)), c.a.x, false));
    // 6c21:111d  mov cx, word ptr [0x21f]  [x210]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21fu)));
L6d331:
    if (c.tracing) c.traceAt(0x6d331);
    // 6c21:1121  sub dword ptr [0x1fa], 0x9c  [x210]
    c.w32(c.dsb + (uint16_t)(0x1fau), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x1fau)), 0x9cu, true));
    // 6c21:112a  loop 0x1121  [x210]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6d331;
L6d33c:
    if (c.tracing) c.traceAt(0x6d33c);
    // 6c21:112c  cmp word ptr [0x235a], 0x8c9  [x210]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x235au)), 0x8c9u, true);
    // 6c21:1132  jbe 0x10da  [x210]
    if ((c.cf || c.zf)) goto L6d2ea;
L6d344:
    if (c.tracing) c.traceAt(0x6d344);
    // 6c21:1134  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6c21:1137  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 6c21:1139  out dx, al  [x1]
    c.ip = 0x113au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:113a  mov ah, 0xf  [x1]
    c.a.h = (uint8_t)(0xfu);
    // 6c21:113c  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 6c21:113f  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 6c21:1141  out dx, ax  [x1]
    c.ip = 0x1142u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 6c21:1142  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 6c21:1145  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6c21:1147  mov edi, 0  [x1]
    c.di.e = (uint32_t)(0x0u);
    // 6c21:114d  mov eax, 0  [x1]
    c.a.e = (uint32_t)(0x0u);
    // 6c21:1153  mov cx, 0x4000  [x1]
    c.c.x = (uint16_t)(0x4000u);
    // 6c21:1156  cld   [x1]
    c.df = false;
L6d367:
    if (c.tracing) c.traceAt(0x6d367);
    // 6c21:1157  rep stosd dword ptr es:[di], eax  [x16385]
    c.stos<32, false>(1);
L6d36a:
    if (c.tracing) c.traceAt(0x6d36a);
    // 6c21:115a  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 6c21:115d  mov al, 0xff  [x1]
    c.a.l = (uint8_t)(0xffu);
    // 6c21:115f  out dx, al  [x1]
    c.ip = 0x1160u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6c21:1160  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 6c21:1162  int 0x21  [x1]
    c.ip = 0x1164u; c.d32 = false; c.intr(0x21, 0x1164u);
    c.notTranslated(0x6d374, "fall-through");
}

static Register reg21(21, {0x6c210, 0x6c214, 0x6c216, 0x6c218, 0x6c222, 0x6c24b, 0x6c257, 0x6c25e, 0x6c25f, 0x6c266, 0x6c269, 0x6c277, 0x6c281, 0x6c284, 0x6c298, 0x6c29f, 0x6c2a0, 0x6c2c9, 0x6c308, 0x6c319, 0x6c31b, 0x6c5c3, 0x6c5c7, 0x6c5e8, 0x6c6b6, 0x6c6b8, 0x6c6ce, 0x6c6db, 0x6c734, 0x6c73a, 0x6c73c, 0x6c740, 0x6c756, 0x6c776, 0x6c780, 0x6c793, 0x6c7bc, 0x6c7dc, 0x6c7e6, 0x6c7f9, 0x6c822, 0x6c82c, 0x6c865, 0x6c869, 0x6c87e, 0x6c88b, 0x6c891, 0x6c895, 0x6c899, 0x6c89b, 0x6c8a0, 0x6c8a2, 0x6c8b0, 0x6c8b9, 0x6c8d1, 0x6c8fa, 0x6c919, 0x6c926, 0x6c946, 0x6c950, 0x6c963, 0x6c98c, 0x6c993, 0x6c99e, 0x6c9be, 0x6c9c8, 0x6c9db, 0x6ca04, 0x6ca11, 0x6ca12, 0x6ca2c, 0x6ca58, 0x6ca6c, 0x6ca77, 0x6ca7d, 0x6ca8c, 0x6ca8f, 0x6ca90, 0x6cad2, 0x6cae6, 0x6caf1, 0x6caf7, 0x6cb06, 0x6cb09, 0x6cb0a, 0x6cb15, 0x6cb27, 0x6cb2f, 0x6cb63, 0x6cb65, 0x6cb68, 0x6cb6b, 0x6cb7d, 0x6cb80, 0x6cb9b, 0x6cbcd, 0x6cc25, 0x6cc3d, 0x6cc43, 0x6cc49, 0x6cc55, 0x6cc76, 0x6cc9b, 0x6cca1, 0x6ccae, 0x6ccbc, 0x6ccc0, 0x6ccc5, 0x6ccee, 0x6cd3e, 0x6cd58, 0x6cd62, 0x6cdc3, 0x6cdec, 0x6ce00, 0x6ce04, 0x6ce69, 0x6ce9a, 0x6ceca, 0x6ced8, 0x6cede, 0x6cee3, 0x6cee6, 0x6cee8, 0x6cef3, 0x6cefe, 0x6cf2e, 0x6cf3c, 0x6cf42, 0x6cf47, 0x6cf4a, 0x6cf4c, 0x6cf5e, 0x6cf65, 0x6cf6d, 0x6cf79, 0x6cf7f, 0x6d01b, 0x6d02b, 0x6d02e, 0x6d036, 0x6d061, 0x6d079, 0x6d07a, 0x6d096, 0x6d0a9, 0x6d0b4, 0x6d0b6, 0x6d0cc, 0x6d13d, 0x6d141, 0x6d145, 0x6d146, 0x6d155, 0x6d16d, 0x6d181, 0x6d195, 0x6d19d, 0x6d19f, 0x6d1c3, 0x6d1cd, 0x6d208, 0x6d20c, 0x6d210, 0x6d21a, 0x6d224, 0x6d228, 0x6d22d, 0x6d23f, 0x6d276, 0x6d27a, 0x6d284, 0x6d28e, 0x6d298, 0x6d2a2, 0x6d2ac, 0x6d2b6, 0x6d2ba, 0x6d2bf, 0x6d2cd, 0x6d2d8, 0x6d2e0, 0x6d2ea, 0x6d2ee, 0x6d2f8, 0x6d302, 0x6d30c, 0x6d316, 0x6d31a, 0x6d31f, 0x6d326, 0x6d331, 0x6d33c, 0x6d344, 0x6d367, 0x6d36a}, code_21);

}  // namespace angel
