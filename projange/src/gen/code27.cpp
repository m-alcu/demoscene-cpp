// Program 27, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_27(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x24f10: goto L24f10;
    case 0x24f14: goto L24f14;
    case 0x24f16: goto L24f16;
    case 0x24f1b: goto L24f1b;
    case 0x24f1c: goto L24f1c;
    case 0x24f27: goto L24f27;
    case 0x24f53: goto L24f53;
    case 0x24f5e: goto L24f5e;
    case 0x24f63: goto L24f63;
    case 0x24f6d: goto L24f6d;
    case 0x24f76: goto L24f76;
    case 0x24f7a: goto L24f7a;
    case 0x24f7f: goto L24f7f;
    case 0x24f80: goto L24f80;
    case 0x24f8a: goto L24f8a;
    case 0x24fa4: goto L24fa4;
    case 0x24fa5: goto L24fa5;
    case 0x24fa8: goto L24fa8;
    case 0x24fb2: goto L24fb2;
    case 0x24fb5: goto L24fb5;
    case 0x24fe0: goto L24fe0;
    case 0x24fea: goto L24fea;
    case 0x24ff1: goto L24ff1;
    case 0x24ffb: goto L24ffb;
    case 0x25010: goto L25010;
    case 0x25012: goto L25012;
    case 0x2501c: goto L2501c;
    case 0x25026: goto L25026;
    case 0x251d7: goto L251d7;
    case 0x251e2: goto L251e2;
    case 0x251ea: goto L251ea;
    case 0x2521c: goto L2521c;
    case 0x25237: goto L25237;
    case 0x25247: goto L25247;
    case 0x2524a: goto L2524a;
    case 0x2524f: goto L2524f;
    case 0x25253: goto L25253;
    case 0x25297: goto L25297;
    case 0x252cd: goto L252cd;
    case 0x25307: goto L25307;
    case 0x2530c: goto L2530c;
    case 0x25342: goto L25342;
    case 0x2537c: goto L2537c;
    case 0x25381: goto L25381;
    case 0x253b7: goto L253b7;
    case 0x253f1: goto L253f1;
    case 0x253f6: goto L253f6;
    case 0x2542c: goto L2542c;
    case 0x25466: goto L25466;
    case 0x25473: goto L25473;
    case 0x25476: goto L25476;
    case 0x25480: goto L25480;
    case 0x2548f: goto L2548f;
    case 0x25496: goto L25496;
    case 0x2549d: goto L2549d;
    case 0x254ae: goto L254ae;
    case 0x254b6: goto L254b6;
    case 0x254ba: goto L254ba;
    case 0x254c1: goto L254c1;
    case 0x254c4: goto L254c4;
    case 0x254cc: goto L254cc;
    case 0x254d2: goto L254d2;
    case 0x254da: goto L254da;
    case 0x254df: goto L254df;
    case 0x254e6: goto L254e6;
    case 0x254e9: goto L254e9;
    case 0x254ed: goto L254ed;
    case 0x254f2: goto L254f2;
    case 0x254fd: goto L254fd;
    case 0x25507: goto L25507;
    case 0x2550f: goto L2550f;
    case 0x25517: goto L25517;
    case 0x25526: goto L25526;
    case 0x25535: goto L25535;
    case 0x25544: goto L25544;
    case 0x25559: goto L25559;
    case 0x2555d: goto L2555d;
    case 0x25565: goto L25565;
    case 0x25569: goto L25569;
    case 0x25572: goto L25572;
    case 0x2558b: goto L2558b;
    case 0x25597: goto L25597;
    case 0x2559f: goto L2559f;
    case 0x255b3: goto L255b3;
    case 0x255bb: goto L255bb;
    case 0x255c0: goto L255c0;
    case 0x255d7: goto L255d7;
    case 0x255e2: goto L255e2;
    case 0x255e5: goto L255e5;
    case 0x25606: goto L25606;
    case 0x25608: goto L25608;
    case 0x25644: goto L25644;
    case 0x2564c: goto L2564c;
    case 0x2564f: goto L2564f;
    case 0x25656: goto L25656;
    case 0x2565a: goto L2565a;
    case 0x256b0: goto L256b0;
    case 0x256cd: goto L256cd;
    case 0x256da: goto L256da;
    case 0x256df: goto L256df;
    case 0x256e3: goto L256e3;
    case 0x25710: goto L25710;
    case 0x2572f: goto L2572f;
    case 0x25732: goto L25732;
    case 0x25744: goto L25744;
    case 0x25748: goto L25748;
    case 0x25756: goto L25756;
    case 0x257b0: goto L257b0;
    case 0x257ba: goto L257ba;
    case 0x41ce0: goto L41ce0;
    case 0x41cee: goto L41cee;
    case 0x41cf1: goto L41cf1;
    case 0x41d33: goto L41d33;
    case 0x41d3a: goto L41d3a;
    case 0x41d44: goto L41d44;
    case 0x41d4f: goto L41d4f;
    case 0x41d57: goto L41d57;
    case 0x41d5f: goto L41d5f;
    case 0x41d67: goto L41d67;
    case 0x41d78: goto L41d78;
    case 0x41d7c: goto L41d7c;
    case 0x41d8c: goto L41d8c;
    case 0x41d90: goto L41d90;
    case 0x41d91: goto L41d91;
    case 0x41d9a: goto L41d9a;
    case 0x41da4: goto L41da4;
    case 0x41daa: goto L41daa;
    case 0x41db1: goto L41db1;
    case 0x41db2: goto L41db2;
    case 0x41db6: goto L41db6;
    case 0x41df6: goto L41df6;
    case 0x41e00: goto L41e00;
    case 0x41e03: goto L41e03;
    case 0x41e46: goto L41e46;
    case 0x41e6b: goto L41e6b;
    case 0x41e74: goto L41e74;
    case 0x41e7d: goto L41e7d;
    case 0x41e87: goto L41e87;
    case 0x41e91: goto L41e91;
    case 0x41e97: goto L41e97;
    case 0x41ec9: goto L41ec9;
    case 0x41f6a: goto L41f6a;
    case 0x41f73: goto L41f73;
    case 0x41f76: goto L41f76;
    case 0x42033: goto L42033;
    case 0x42037: goto L42037;
    case 0x4203d: goto L4203d;
    case 0x420b2: goto L420b2;
    case 0x420cb: goto L420cb;
    case 0x420e6: goto L420e6;
    case 0x421bc: goto L421bc;
    case 0x42210: goto L42210;
    case 0x42215: goto L42215;
    case 0x42219: goto L42219;
    case 0x42221: goto L42221;
    case 0x42229: goto L42229;
    case 0x4225b: goto L4225b;
    case 0x4225d: goto L4225d;
    case 0x42264: goto L42264;
    case 0x42269: goto L42269;
    case 0x42275: goto L42275;
    case 0x422a7: goto L422a7;
    case 0x422ac: goto L422ac;
    case 0x422b4: goto L422b4;
    case 0x422c3: goto L422c3;
    case 0x422c8: goto L422c8;
    case 0x422dd: goto L422dd;
    case 0x422f1: goto L422f1;
    case 0x422f9: goto L422f9;
    case 0x42301: goto L42301;
    case 0x42311: goto L42311;
    case 0x42321: goto L42321;
    case 0x42328: goto L42328;
    case 0x42329: goto L42329;
    case 0x4232d: goto L4232d;
    case 0x42333: goto L42333;
    case 0x42339: goto L42339;
    case 0x4233d: goto L4233d;
    case 0x42344: goto L42344;
    case 0x4234b: goto L4234b;
    case 0x423a3: goto L423a3;
    case 0x423bb: goto L423bb;
    case 0x423bd: goto L423bd;
    case 0x423bf: goto L423bf;
    case 0x423c3: goto L423c3;
    case 0x423d7: goto L423d7;
    case 0x42689: goto L42689;
    case 0x426a1: goto L426a1;
    case 0x426a6: goto L426a6;
    case 0x426a8: goto L426a8;
    case 0x42886: goto L42886;
    case 0x4289b: goto L4289b;
    case 0x428a6: goto L428a6;
    case 0x428a8: goto L428a8;
    case 0x428b7: goto L428b7;
    case 0x428c8: goto L428c8;
    case 0x428cf: goto L428cf;
    case 0x428f2: goto L428f2;
    case 0x428f7: goto L428f7;
    case 0x42971: goto L42971;
    case 0x42975: goto L42975;
    case 0x42979: goto L42979;
    case 0x4297d: goto L4297d;
    case 0x42982: goto L42982;
    case 0x4298a: goto L4298a;
    case 0x429b8: goto L429b8;
    case 0x429bc: goto L429bc;
    case 0x429c6: goto L429c6;
    case 0x429c7: goto L429c7;
    case 0x429de: goto L429de;
    case 0x429e9: goto L429e9;
    case 0x429f0: goto L429f0;
    case 0x42a00: goto L42a00;
    case 0x42a0b: goto L42a0b;
    case 0x42a1b: goto L42a1b;
    case 0x42a23: goto L42a23;
    case 0x42a27: goto L42a27;
    case 0x42a31: goto L42a31;
    case 0x42a34: goto L42a34;
    case 0x42a38: goto L42a38;
    case 0x42a3c: goto L42a3c;
    case 0x42a5a: goto L42a5a;
    case 0x42a6b: goto L42a6b;
    case 0x42b03: goto L42b03;
    case 0x42b0a: goto L42b0a;
    case 0x42b11: goto L42b11;
    case 0x42b15: goto L42b15;
    case 0x42b23: goto L42b23;
    case 0x42b28: goto L42b28;
    case 0x42b30: goto L42b30;
    case 0x42b37: goto L42b37;
    case 0x42b3b: goto L42b3b;
    case 0x42b58: goto L42b58;
    case 0x42b5c: goto L42b5c;
    case 0x42b60: goto L42b60;
    case 0x42b62: goto L42b62;
    case 0x42b64: goto L42b64;
    case 0x42b6a: goto L42b6a;
    case 0x42b6e: goto L42b6e;
    case 0x42b7f: goto L42b7f;
    case 0x42b83: goto L42b83;
    case 0x42b89: goto L42b89;
    case 0x42b8d: goto L42b8d;
    case 0x42ba7: goto L42ba7;
    case 0x42bd8: goto L42bd8;
    case 0x42bde: goto L42bde;
    case 0x42be4: goto L42be4;
    case 0x42beb: goto L42beb;
    case 0x42bf4: goto L42bf4;
    case 0x42bfc: goto L42bfc;
    case 0x42c00: goto L42c00;
    case 0x42c04: goto L42c04;
    case 0x42c0c: goto L42c0c;
    case 0x42c10: goto L42c10;
    case 0x42c13: goto L42c13;
    case 0x42c14: goto L42c14;
    case 0x42c1b: goto L42c1b;
    case 0x42c25: goto L42c25;
    case 0x42c2a: goto L42c2a;
    case 0x42c33: goto L42c33;
    case 0x42c38: goto L42c38;
    case 0x42c45: goto L42c45;
    case 0x42c49: goto L42c49;
    case 0x42c53: goto L42c53;
    case 0x42c57: goto L42c57;
    case 0x42c61: goto L42c61;
    case 0x42c67: goto L42c67;
    case 0x42c72: goto L42c72;
    case 0x42c76: goto L42c76;
    case 0x42c77: goto L42c77;
    case 0x42c81: goto L42c81;
    case 0x42c82: goto L42c82;
    case 0x42c85: goto L42c85;
    case 0x42c87: goto L42c87;
    case 0x42c94: goto L42c94;
    case 0x42c97: goto L42c97;
    case 0x42c99: goto L42c99;
    case 0x42c9a: goto L42c9a;
    case 0x42c9e: goto L42c9e;
    case 0x42ca1: goto L42ca1;
    case 0x42ca3: goto L42ca3;
    case 0x42ca8: goto L42ca8;
    case 0x42cab: goto L42cab;
    case 0x42cb4: goto L42cb4;
    case 0x42cb9: goto L42cb9;
    case 0x42cbb: goto L42cbb;
    case 0x42db1: goto L42db1;
    case 0x42dc6: goto L42dc6;
    case 0x42dcd: goto L42dcd;
    case 0x42dcf: goto L42dcf;
    case 0x42dd5: goto L42dd5;
    case 0x42de4: goto L42de4;
    case 0x42de6: goto L42de6;
    case 0x42de9: goto L42de9;
    case 0x42df8: goto L42df8;
    case 0x42dfa: goto L42dfa;
    default: c.callLinear(t); return;
    }
L24f10:
    if (c.tracing) c.traceAt(0x24f10);
    // 24f1:0000  mov ah, 1  [x7152]
    c.a.h = (uint8_t)(0x1u);
    // 24f1:0002  int 0x16  [x7152]
    c.ip = 0x4u; c.d32 = false; c.intr(0x16, 0x4u);
L24f14:
    if (c.tracing) c.traceAt(0x24f14);
    // 24f1:0004  je 0xb  [x7152]
    if (c.zf) goto L24f1b;
L24f16:
    if (c.tracing) c.traceAt(0x24f16);
    // 24f1:0006  mov byte ptr [0x266f], 1  [x64]
    c.w8(c.dsb + (uint16_t)(0x266fu), 0x1u);
L24f1b:
    if (c.tracing) c.traceAt(0x24f1b);
    // 24f1:000b  ret   [x7152]
    c.ip = c.pop16(); return;
L24f1c:
    if (c.tracing) c.traceAt(0x24f1c);
    // 24f1:000c  push bp  [x65]
    c.push16(c.bp.x);
    // 24f1:000d  mov bp, sp  [x65]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:000f  mov ax, 4  [x65]
    c.a.x = (uint16_t)(0x4u);
    // 24f1:0012  lcall 0x41ce, 0x530  [x65]
    c.push16(c.cs); c.push16(0x17u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L24f27:
    if (c.tracing) c.traceAt(0x24f27);
    // 24f1:0017  sub sp, 4  [x65]
    c.sp.x = (uint16_t)(c.sub<16>(c.sp.x, 0x4u, true));
    // 24f1:001a  les di, ptr [bp + 4]  [x65]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:001d  mov ax, es  [x65]
    c.a.x = (uint16_t)(c.es);
    // 24f1:001f  mov word ptr [bp - 2], ax  [x65]
    c.w16(c.ssb + (uint16_t)(c.bp.x + 0xfffffffeu), c.a.x);
    // 24f1:0022  les di, ptr [bp + 4]  [x65]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0025  mov ax, di  [x65]
    c.a.x = (uint16_t)(c.di.x);
    // 24f1:0027  mov word ptr [bp - 4], ax  [x65]
    c.w16(c.ssb + (uint16_t)(c.bp.x + 0xfffffffcu), c.a.x);
    // 24f1:002a  push ds  [x65]
    c.push16(c.ds);
    // 24f1:002b  mov dx, 0x3c7  [x65]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 24f1:002e  mov al, 1  [x65]
    c.a.l = (uint8_t)(0x1u);
    // 24f1:0030  out dx, al  [x65]
    c.ip = 0x31u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:0031  cld   [x65]
    c.df = false;
    // 24f1:0032  mov dx, 0x3c8  [x65]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 24f1:0035  mov al, 0  [x65]
    c.a.l = (uint8_t)(0x0u);
    // 24f1:0037  out dx, al  [x65]
    c.ip = 0x38u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:0038  mov ax, word ptr [bp - 2]  [x65]
    c.a.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.bp.x + 0xfffffffeu)));
    // 24f1:003b  mov ds, ax  [x65]
    c.loadDs(c.a.x);
    // 24f1:003d  mov si, word ptr [bp - 4]  [x65]
    c.si.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.bp.x + 0xfffffffcu)));
    // 24f1:0040  mov cx, 0x10  [x65]
    c.c.x = (uint16_t)(0x10u);
L24f53:
    if (c.tracing) c.traceAt(0x24f53);
    // 24f1:0043  mov dx, 0x3c9  [x1040]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 24f1:0046  lodsb al, byte ptr [si]  [x1040]
    c.ip = 0x47u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 24f1:0047  out dx, al  [x1040]
    c.ip = 0x48u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:0048  lodsb al, byte ptr [si]  [x1040]
    c.ip = 0x49u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 24f1:0049  out dx, al  [x1040]
    c.ip = 0x4au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:004a  lodsb al, byte ptr [si]  [x1040]
    c.ip = 0x4bu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 24f1:004b  out dx, al  [x1040]
    c.ip = 0x4cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:004c  loop 0x43  [x1040]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L24f53;
L24f5e:
    if (c.tracing) c.traceAt(0x24f5e);
    // 24f1:004e  pop ds  [x65]
    c.loadDs((uint16_t)c.pop16());
    // 24f1:004f  leave   [x65]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 24f1:0050  ret 4  [x65]
    c.ip = c.pop16(); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L24f63:
    if (c.tracing) c.traceAt(0x24f63);
    // 24f1:0053  push bp  [x1]
    c.push16(c.bp.x);
    // 24f1:0054  mov bp, sp  [x1]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:0056  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0058  lcall 0x41ce, 0x530  [x1]
    c.push16(c.cs); c.push16(0x5du); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L24f6d:
    if (c.tracing) c.traceAt(0x24f6d);
    // 24f1:005d  les dx, ptr [bp + 4]  [x1]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.dx_.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0060  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 24f1:0062  mov ah, 0x10  [x1]
    c.a.h = (uint8_t)(0x10u);
    // 24f1:0064  int 0x10  [x1]
    c.ip = 0x66u; c.d32 = false; c.intr(0x10, 0x66u);
L24f76:
    if (c.tracing) c.traceAt(0x24f76);
    // 24f1:0066  leave   [x1]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 24f1:0067  ret 4  [x1]
    c.ip = c.pop16(); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L24f7a:
    if (c.tracing) c.traceAt(0x24f7a);
    // 24f1:006a  mov bx, 0xe  [x7152]
    c.b.x = (uint16_t)(0xeu);
    // 24f1:006d  int 0xff  [x7152]
    c.ip = 0x6fu; c.d32 = false; c.intr(0xff, 0x6fu);
L24f7f:
    if (c.tracing) c.traceAt(0x24f7f);
    // 24f1:006f  ret   [x7152]
    c.ip = c.pop16(); return;
L24f80:
    if (c.tracing) c.traceAt(0x24f80);
    // 24f1:0070  push bp  [x185220]
    c.push16(c.bp.x);
    // 24f1:0071  mov bp, sp  [x185220]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:0073  xor ax, ax  [x185220]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0075  lcall 0x41ce, 0x530  [x185220]
    c.push16(c.cs); c.push16(0x7au); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L24f8a:
    if (c.tracing) c.traceAt(0x24f8a);
    // 24f1:007a  cli   [x185220]
    c.m.cli();
    // 24f1:007b  mov ah, 1  [x185220]
    c.a.h = (uint8_t)(0x1u);
    // 24f1:007d  mov cl, byte ptr [bp + 4]  [x185220]
    c.c.l = (uint8_t)(c.r8(c.ssb + (uint16_t)(c.bp.x + 0x4u)));
    // 24f1:0080  shl ah, cl  [x185220]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), true));
    // 24f1:0082  mov dx, 0x3c4  [x185220]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 24f1:0085  mov al, 2  [x185220]
    c.a.l = (uint8_t)(0x2u);
    // 24f1:0087  out dx, ax  [x185220]
    c.ip = 0x88u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 24f1:0088  mov dx, 0x3ce  [x185220]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 24f1:008b  mov al, 4  [x185220]
    c.a.l = (uint8_t)(0x4u);
    // 24f1:008d  out dx, al  [x185220]
    c.ip = 0x8eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:008e  inc dx  [x185220]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 24f1:008f  mov al, byte ptr [bp + 4]  [x185220]
    c.a.l = (uint8_t)(c.r8(c.ssb + (uint16_t)(c.bp.x + 0x4u)));
    // 24f1:0092  out dx, al  [x185220]
    c.ip = 0x93u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:0093  sti   [x185220]
    c.ip = 0x94u; c.d32 = false; c.m.sti();
L24fa4:
    if (c.tracing) c.traceAt(0x24fa4);
    // 24f1:0094  leave   [x185220]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
L24fa5:
    if (c.tracing) c.traceAt(0x24fa5);
    // 24f1:0095  ret 2  [x185220]
    c.ip = c.pop16(); c.sp.x = (uint16_t)(c.sp.x + 2); return;
L24fa8:
    if (c.tracing) c.traceAt(0x24fa8);
    // 24f1:0098  push bp  [x7152]
    c.push16(c.bp.x);
    // 24f1:0099  mov bp, sp  [x7152]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:009b  xor ax, ax  [x7152]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:009d  lcall 0x41ce, 0x530  [x7152]
    c.push16(c.cs); c.push16(0xa2u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L24fb2:
    if (c.tracing) c.traceAt(0x24fb2);
    // 24f1:00a2  call 0x6a  [x7152]
    c.push16(0xa5u); code_27(c, 0x24f7au); if (c.ip != 0xa5u) c.badReturn(0x24fb2);
L24fb5:
    if (c.tracing) c.traceAt(0x24fb5);
    // 24f1:00a5  mov si, word ptr [bp + 4]  [x7152]
    c.si.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)));
    // 24f1:00a8  mov dx, 0x3d4  [x7152]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 24f1:00ab  mov al, 0xc  [x7152]
    c.a.l = (uint8_t)(0xcu);
    // 24f1:00ad  out dx, al  [x7152]
    c.ip = 0xaeu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:00ae  mov ax, si  [x7152]
    c.a.x = (uint16_t)(c.si.x);
    // 24f1:00b0  mov cx, 0x50  [x7152]
    c.c.x = (uint16_t)(0x50u);
    // 24f1:00b3  mul cx  [x7152]
    c.mul16(c.c.x);
    // 24f1:00b5  mov al, ah  [x7152]
    c.a.l = (uint8_t)(c.a.h);
    // 24f1:00b7  mov dx, 0x3d5  [x7152]
    c.dx_.x = (uint16_t)(0x3d5u);
    // 24f1:00ba  out dx, ax  [x7152]
    c.ip = 0xbbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 24f1:00bb  mov dx, 0x3d4  [x7152]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 24f1:00be  mov al, 0xd  [x7152]
    c.a.l = (uint8_t)(0xdu);
    // 24f1:00c0  out dx, al  [x7152]
    c.ip = 0xc1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:00c1  mov ax, si  [x7152]
    c.a.x = (uint16_t)(c.si.x);
    // 24f1:00c3  mov cx, 0x50  [x7152]
    c.c.x = (uint16_t)(0x50u);
    // 24f1:00c6  mul cx  [x7152]
    c.mul16(c.c.x);
    // 24f1:00c8  mov dx, 0x3d5  [x7152]
    c.dx_.x = (uint16_t)(0x3d5u);
    // 24f1:00cb  out dx, al  [x7152]
    c.ip = 0xccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 24f1:00cc  leave   [x7152]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 24f1:00cd  ret 2  [x7152]
    c.ip = c.pop16(); c.sp.x = (uint16_t)(c.sp.x + 2); return;
L24fe0:
    if (c.tracing) c.traceAt(0x24fe0);
    // 24f1:00d0  push bp  [x1]
    c.push16(c.bp.x);
    // 24f1:00d1  mov bp, sp  [x1]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:00d3  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:00d5  lcall 0x41ce, 0x530  [x1]
    c.push16(c.cs); c.push16(0xdau); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L24fea:
    if (c.tracing) c.traceAt(0x24fea);
    // 24f1:00da  push 3  [x1]
    c.push16(0x3u);
    // 24f1:00dc  lcall 0x257b, 0  [x1]
    c.push16(c.cs); c.push16(0xe1u); c.loadCs(0x257bu); c.callLinear(c.csb + 0x0u);
L24ff1:
    if (c.tracing) c.traceAt(0x24ff1);
    // 24f1:00e1  mov ah, 2  [x1]
    c.a.h = (uint8_t)(0x2u);
    // 24f1:00e3  mov bh, 0  [x1]
    c.b.h = (uint8_t)(0x0u);
    // 24f1:00e5  mov dh, 0x16  [x1]
    c.dx_.h = (uint8_t)(0x16u);
    // 24f1:00e7  mov dl, 0  [x1]
    c.dx_.l = (uint8_t)(0x0u);
    // 24f1:00e9  int 0x10  [x1]
    c.ip = 0xebu; c.d32 = false; c.intr(0x10, 0xebu);
L24ffb:
    if (c.tracing) c.traceAt(0x24ffb);
    // 24f1:00eb  mov ax, 0xb800  [x1]
    c.a.x = (uint16_t)(0xb800u);
    // 24f1:00ee  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 24f1:00f0  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 24f1:00f3  mov si, 0xdac0  [x1]
    c.si.x = (uint16_t)(0xdac0u);
    // 24f1:00f6  mov ax, 0x257c  [x1]
    c.a.x = (uint16_t)(0x257cu);
    // 24f1:00f9  push ds  [x1]
    c.push16(c.ds);
    // 24f1:00fa  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 24f1:00fc  mov cx, 0xfa0  [x1]
    c.c.x = (uint16_t)(0xfa0u);
    // 24f1:00ff  cld   [x1]
    c.df = false;
L25010:
    if (c.tracing) c.traceAt(0x25010);
    // 24f1:0100  rep movsb byte ptr es:[di], byte ptr [si]  [x4001]
    c.ip = 0x102u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L25012:
    if (c.tracing) c.traceAt(0x25012);
    // 24f1:0102  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 24f1:0103  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0105  lcall 0x41ce, 0x116  [x1]
    c.push16(c.cs); c.push16(0x10au); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x116u);
    c.notTranslated(0x2501a, "fall-through");
L2501c:
    if (c.tracing) c.traceAt(0x2501c);
    // 24f1:010c  push bp  [x1]
    c.push16(c.bp.x);
    // 24f1:010d  mov bp, sp  [x1]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:010f  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0111  lcall 0x41ce, 0x530  [x1]
    c.push16(c.cs); c.push16(0x116u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L25026:
    if (c.tracing) c.traceAt(0x25026);
    // 24f1:0116  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0118  mov word ptr [0x1fe4], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fe4u), c.a.x);
    // 24f1:011b  mov word ptr [0x1fe6], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fe6u), 0x6u);
    // 24f1:0121  mov word ptr [0x1fe8], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fe8u), 0x6u);
    // 24f1:0127  mov word ptr [0x1fea], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1feau), 0x6u);
    // 24f1:012d  mov word ptr [0x1fec], 0xc  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fecu), 0xcu);
    // 24f1:0133  mov word ptr [0x1fee], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1feeu), 0x6u);
    // 24f1:0139  mov word ptr [0x1ff0], 0x12  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ff0u), 0x12u);
    // 24f1:013f  mov word ptr [0x1ff2], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ff2u), 0x6u);
    // 24f1:0145  mov word ptr [0x1ff4], 0x18  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ff4u), 0x18u);
    // 24f1:014b  mov word ptr [0x1ff6], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ff6u), 0x6u);
    // 24f1:0151  mov word ptr [0x1ff8], 0x1e  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ff8u), 0x1eu);
    // 24f1:0157  mov word ptr [0x1ffa], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ffau), 0x6u);
    // 24f1:015d  mov word ptr [0x1ffc], 0x24  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ffcu), 0x24u);
    // 24f1:0163  mov word ptr [0x1ffe], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1ffeu), 0x6u);
    // 24f1:0169  mov word ptr [0x2000], 0x2a  [x1]
    c.w16(c.dsb + (uint16_t)(0x2000u), 0x2au);
    // 24f1:016f  mov word ptr [0x2002], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2002u), 0x6u);
    // 24f1:0175  mov word ptr [0x2004], 0x30  [x1]
    c.w16(c.dsb + (uint16_t)(0x2004u), 0x30u);
    // 24f1:017b  mov word ptr [0x2006], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2006u), 0x6u);
    // 24f1:0181  mov word ptr [0x2008], 0x36  [x1]
    c.w16(c.dsb + (uint16_t)(0x2008u), 0x36u);
    // 24f1:0187  mov word ptr [0x200a], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x200au), 0x6u);
    // 24f1:018d  mov word ptr [0x200c], 0x3c  [x1]
    c.w16(c.dsb + (uint16_t)(0x200cu), 0x3cu);
    // 24f1:0193  mov word ptr [0x200e], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x200eu), 0x6u);
    // 24f1:0199  mov word ptr [0x2010], 0x42  [x1]
    c.w16(c.dsb + (uint16_t)(0x2010u), 0x42u);
    // 24f1:019f  mov word ptr [0x2012], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2012u), 0x6u);
    // 24f1:01a5  mov word ptr [0x2014], 0x48  [x1]
    c.w16(c.dsb + (uint16_t)(0x2014u), 0x48u);
    // 24f1:01ab  mov word ptr [0x2016], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2016u), 0x6u);
    // 24f1:01b1  mov word ptr [0x2018], 0xf50  [x1]
    c.w16(c.dsb + (uint16_t)(0x2018u), 0xf50u);
    // 24f1:01b7  mov word ptr [0x201a], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x201au), 0x6u);
    // 24f1:01bd  mov word ptr [0x201c], 0xf56  [x1]
    c.w16(c.dsb + (uint16_t)(0x201cu), 0xf56u);
    // 24f1:01c3  mov word ptr [0x201e], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x201eu), 0x6u);
    // 24f1:01c9  mov word ptr [0x2020], 0xf5c  [x1]
    c.w16(c.dsb + (uint16_t)(0x2020u), 0xf5cu);
    // 24f1:01cf  mov word ptr [0x2022], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2022u), 0x6u);
    // 24f1:01d5  mov word ptr [0x2024], 0xf62  [x1]
    c.w16(c.dsb + (uint16_t)(0x2024u), 0xf62u);
    // 24f1:01db  mov word ptr [0x2026], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2026u), 0x6u);
    // 24f1:01e1  mov word ptr [0x2028], 0xf68  [x1]
    c.w16(c.dsb + (uint16_t)(0x2028u), 0xf68u);
    // 24f1:01e7  mov word ptr [0x202a], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x202au), 0x6u);
    // 24f1:01ed  mov word ptr [0x202c], 0xf6e  [x1]
    c.w16(c.dsb + (uint16_t)(0x202cu), 0xf6eu);
    // 24f1:01f3  mov word ptr [0x202e], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x202eu), 0x6u);
    // 24f1:01f9  mov word ptr [0x2030], 0xf74  [x1]
    c.w16(c.dsb + (uint16_t)(0x2030u), 0xf74u);
    // 24f1:01ff  mov word ptr [0x2032], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2032u), 0x6u);
    // 24f1:0205  mov word ptr [0x2034], 0xf7a  [x1]
    c.w16(c.dsb + (uint16_t)(0x2034u), 0xf7au);
    // 24f1:020b  mov word ptr [0x2036], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2036u), 0x6u);
    // 24f1:0211  mov word ptr [0x2038], 0xf80  [x1]
    c.w16(c.dsb + (uint16_t)(0x2038u), 0xf80u);
    // 24f1:0217  mov word ptr [0x203a], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x203au), 0x6u);
    // 24f1:021d  mov word ptr [0x203c], 0xf86  [x1]
    c.w16(c.dsb + (uint16_t)(0x203cu), 0xf86u);
    // 24f1:0223  mov word ptr [0x203e], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x203eu), 0x6u);
    // 24f1:0229  mov word ptr [0x2040], 0xf8c  [x1]
    c.w16(c.dsb + (uint16_t)(0x2040u), 0xf8cu);
    // 24f1:022f  mov word ptr [0x2042], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2042u), 0x6u);
    // 24f1:0235  mov word ptr [0x2044], 0xf92  [x1]
    c.w16(c.dsb + (uint16_t)(0x2044u), 0xf92u);
    // 24f1:023b  mov word ptr [0x2046], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x2046u), 0x6u);
    // 24f1:0241  mov word ptr [0x2048], 0xf98  [x1]
    c.w16(c.dsb + (uint16_t)(0x2048u), 0xf98u);
    // 24f1:0247  mov word ptr [0x204a], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x204au), 0x6u);
    // 24f1:024d  mov word ptr [0x1fa4], 0x1eca  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fa4u), 0x1ecau);
    // 24f1:0253  mov word ptr [0x1fa6], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fa6u), 0x6u);
    // 24f1:0259  mov word ptr [0x1fa8], 0x1ed0  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fa8u), 0x1ed0u);
    // 24f1:025f  mov word ptr [0x1faa], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1faau), 0x6u);
    // 24f1:0265  mov word ptr [0x1fac], 0x1ed6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1facu), 0x1ed6u);
    // 24f1:026b  mov word ptr [0x1fae], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1faeu), 0x6u);
    // 24f1:0271  mov word ptr [0x1fb0], 0x1edc  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fb0u), 0x1edcu);
    // 24f1:0277  mov word ptr [0x1fb2], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fb2u), 0x6u);
    // 24f1:027d  mov word ptr [0x1fb4], 0x1ee2  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fb4u), 0x1ee2u);
    // 24f1:0283  mov word ptr [0x1fb6], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fb6u), 0x6u);
    // 24f1:0289  mov word ptr [0x1fb8], 0x1ee8  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fb8u), 0x1ee8u);
    // 24f1:028f  mov word ptr [0x1fba], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fbau), 0x6u);
    // 24f1:0295  mov word ptr [0x1fbc], 0x2df0  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fbcu), 0x2df0u);
    // 24f1:029b  mov word ptr [0x1fbe], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fbeu), 0x6u);
    // 24f1:02a1  mov word ptr [0x1fc0], 0x2df6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fc0u), 0x2df6u);
    // 24f1:02a7  mov word ptr [0x1fc2], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fc2u), 0x6u);
    // 24f1:02ad  mov word ptr [0x1fc4], 0x2dfc  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fc4u), 0x2dfcu);
    // 24f1:02b3  mov word ptr [0x1fc6], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1fc6u), 0x6u);
    // 24f1:02b9  mov word ptr [0x1f60], 0x4ca2  [x1]
    c.w16(c.dsb + (uint16_t)(0x1f60u), 0x4ca2u);
    // 24f1:02bf  mov word ptr [0x1f62], 6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1f62u), 0x6u);
    // 24f1:02c5  leave   [x1]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 24f1:02c6  ret   [x1]
    c.ip = c.pop16(); return;
L251d7:
    if (c.tracing) c.traceAt(0x251d7);
    // 24f1:02c7  push bp  [x146]
    c.push16(c.bp.x);
    // 24f1:02c8  mov bp, sp  [x146]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:02ca  mov ax, 2  [x146]
    c.a.x = (uint16_t)(0x2u);
    // 24f1:02cd  lcall 0x41ce, 0x530  [x146]
    c.push16(c.cs); c.push16(0x2d2u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L251e2:
    if (c.tracing) c.traceAt(0x251e2);
    // 24f1:02d2  sub sp, 2  [x146]
    c.sp.x = (uint16_t)(c.sub<16>(c.sp.x, 0x2u, false));
    // 24f1:02d5  xor ax, ax  [x146]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:02d7  mov word ptr [0x204c], ax  [x146]
    c.w16(c.dsb + (uint16_t)(0x204cu), c.a.x);
L251ea:
    if (c.tracing) c.traceAt(0x251ea);
    // 24f1:02da  xor ax, ax  [x7152]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 24f1:02dc  mov word ptr [0x2262], ax  [x7152]
    c.w16(c.dsb + (uint16_t)(0x2262u), c.a.x);
    // 24f1:02df  mov di, word ptr [0x226a]  [x7152]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x226au)));
    // 24f1:02e3  mov al, byte ptr [di + 0x2572]  [x7152]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2572u)));
    // 24f1:02e7  xor ah, ah  [x7152]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:02e9  add word ptr [0x2262], ax  [x7152]
    c.w16(c.dsb + (uint16_t)(0x2262u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x2262u)), c.a.x, false));
    // 24f1:02ed  mov dx, 0x3c4  [x7152]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 24f1:02f0  mov ah, 0xf  [x7152]
    c.a.h = (uint8_t)(0xfu);
    // 24f1:02f2  mov al, 2  [x7152]
    c.a.l = (uint8_t)(0x2u);
    // 24f1:02f4  out dx, ax  [x7152]
    c.ip = 0x2f5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 24f1:02f5  mov ax, 0xa000  [x7152]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:02f8  push ax  [x7152]
    c.push16(c.a.x);
    // 24f1:02f9  imul ax, word ptr [0x2264], 0x50  [x7152]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x50u));
    // 24f1:02fe  mov di, ax  [x7152]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0300  pop es  [x7152]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:0301  push es  [x7152]
    c.push16(c.es);
    // 24f1:0302  push di  [x7152]
    c.push16(c.di.x);
    // 24f1:0303  push 0x50  [x7152]
    c.push16(0x50u);
    // 24f1:0305  push 0  [x7152]
    c.push16(0x0u);
    // 24f1:0307  lcall 0x41ce, 0x10f5  [x7152]
    c.push16(c.cs); c.push16(0x30cu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10f5u);
L2521c:
    if (c.tracing) c.traceAt(0x2521c);
    // 24f1:030c  mov ax, 0xa000  [x7152]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:030f  push ax  [x7152]
    c.push16(c.a.x);
    // 24f1:0310  mov ax, word ptr [0x2264]  [x7152]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2264u)));
    // 24f1:0313  sub ax, 0x190  [x7152]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x190u, false));
    // 24f1:0316  imul ax, ax, 0x50  [x7152]
    c.a.x = (uint16_t)(c.imul<16>(c.a.x, 0x50u));
    // 24f1:0319  mov di, ax  [x7152]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:031b  pop es  [x7152]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:031c  push es  [x7152]
    c.push16(c.es);
    // 24f1:031d  push di  [x7152]
    c.push16(c.di.x);
    // 24f1:031e  push 0x50  [x7152]
    c.push16(0x50u);
    // 24f1:0320  push 0  [x7152]
    c.push16(0x0u);
    // 24f1:0322  lcall 0x41ce, 0x10f5  [x7152]
    c.push16(c.cs); c.push16(0x327u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10f5u);
L25237:
    if (c.tracing) c.traceAt(0x25237);
    // 24f1:0327  les di, ptr [bp + 4]  [x7152]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:032a  mov al, byte ptr es:[di]  [x7152]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.di.x)));
    // 24f1:032d  mov byte ptr [bp - 1], al  [x7152]
    c.w8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu), c.a.l);
    // 24f1:0330  mov al, 1  [x7152]
    c.a.l = (uint8_t)(0x1u);
    // 24f1:0332  cmp al, byte ptr [bp - 1]  [x7152]
    c.sub<8>(c.a.l, c.r8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu)), true);
    // 24f1:0335  jbe 0x33a  [x7152]
    if ((c.cf || c.zf)) goto L2524a;
L25247:
    if (c.tracing) c.traceAt(0x25247);
    // 24f1:0337  jmp 0x566  [x1745]
    goto L25476;
L2524a:
    if (c.tracing) c.traceAt(0x2524a);
    // 24f1:033a  mov byte ptr [0x2268], al  [x5407]
    c.w8(c.dsb + (uint16_t)(0x2268u), c.a.l);
    // 24f1:033d  jmp 0x343  [x5407]
    goto L25253;
L2524f:
    if (c.tracing) c.traceAt(0x2524f);
    // 24f1:033f  inc byte ptr [0x2268]  [x40898]
    c.w8(c.dsb + (uint16_t)(0x2268u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x2268u)), true));
L25253:
    if (c.tracing) c.traceAt(0x25253);
    // 24f1:0343  mov al, byte ptr [0x2268]  [x46305]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2268u)));
    // 24f1:0346  xor ah, ah  [x46305]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0348  les di, ptr [bp + 4]  [x46305]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:034b  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:034d  mov al, byte ptr es:[di]  [x46305]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.di.x)));
    // 24f1:0350  xor ah, ah  [x46305]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0352  sub ax, 0x41  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x41u, false));
    // 24f1:0355  shl ax, 1  [x46305]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 24f1:0357  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0359  shl di, 1  [x46305]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x1u) & 31), false));
    // 24f1:035b  mov ax, word ptr [di + 0x1fe4]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1fe4u)));
    // 24f1:035f  mov word ptr [0x2266], ax  [x46305]
    c.w16(c.dsb + (uint16_t)(0x2266u), c.a.x);
    // 24f1:0362  mov al, byte ptr [0x2268]  [x46305]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2268u)));
    // 24f1:0365  xor ah, ah  [x46305]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0367  les di, ptr [bp + 4]  [x46305]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:036a  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:036c  mov al, byte ptr es:[di]  [x46305]
    c.a.l = (uint8_t)(c.r8(c.esb + (uint16_t)(c.di.x)));
    // 24f1:036f  xor ah, ah  [x46305]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0371  sub ax, 0x41  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x41u, false));
    // 24f1:0374  shl ax, 1  [x46305]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 24f1:0376  inc ax  [x46305]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 24f1:0377  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0379  shl di, 1  [x46305]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x1u) & 31), true));
    // 24f1:037b  mov ax, word ptr [di + 0x1fe4]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1fe4u)));
    // 24f1:037f  mov word ptr [0x226e], ax  [x46305]
    c.w16(c.dsb + (uint16_t)(0x226eu), c.a.x);
    // 24f1:0382  push 0  [x46305]
    c.push16(0x0u);
    // 24f1:0384  call 0x70  [x46305]
    c.push16(0x387u); code_27(c, 0x24f80u); if (c.ip != 0x387u) c.badReturn(0x25294);
L25297:
    if (c.tracing) c.traceAt(0x25297);
    // 24f1:0387  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:038c  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:038d  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:038f  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:0391  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:0394  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:0396  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:0398  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:039a  les di, ptr [0x2052]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x2052u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x2052u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:039e  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:03a0  push es  [x46305]
    c.push16(c.es);
    // 24f1:03a1  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:03a2  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:03a5  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:03a6  imul ax, word ptr [0x2264], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x50u));
    // 24f1:03ab  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:03af  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:03b1  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:03b2  push es  [x46305]
    c.push16(c.es);
    // 24f1:03b3  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:03b4  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:03b8  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x3bdu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L252cd:
    if (c.tracing) c.traceAt(0x252cd);
    // 24f1:03bd  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:03c2  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:03c3  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:03c5  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:03c7  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:03ca  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:03cc  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:03ce  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:03d0  les di, ptr [0x2052]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x2052u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x2052u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:03d4  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:03d6  push es  [x46305]
    c.push16(c.es);
    // 24f1:03d7  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:03d8  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:03db  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:03dc  mov ax, word ptr [0x2264]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2264u)));
    // 24f1:03df  sub ax, 0x190  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x190u, false));
    // 24f1:03e2  imul ax, ax, 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.a.x, 0x50u));
    // 24f1:03e5  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:03e9  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:03eb  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:03ec  push es  [x46305]
    c.push16(c.es);
    // 24f1:03ed  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:03ee  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:03f2  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x3f7u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L25307:
    if (c.tracing) c.traceAt(0x25307);
    // 24f1:03f7  push 1  [x46305]
    c.push16(0x1u);
    // 24f1:03f9  call 0x70  [x46305]
    c.push16(0x3fcu); code_27(c, 0x24f80u); if (c.ip != 0x3fcu) c.badReturn(0x25309);
L2530c:
    if (c.tracing) c.traceAt(0x2530c);
    // 24f1:03fc  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:0401  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:0402  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:0404  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:0406  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:0409  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:040b  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:040d  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:040f  les di, ptr [0x2056]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x2056u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x2056u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0413  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:0415  push es  [x46305]
    c.push16(c.es);
    // 24f1:0416  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0417  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:041a  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:041b  imul ax, word ptr [0x2264], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x50u));
    // 24f1:0420  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:0424  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0426  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:0427  push es  [x46305]
    c.push16(c.es);
    // 24f1:0428  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0429  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:042d  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x432u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L25342:
    if (c.tracing) c.traceAt(0x25342);
    // 24f1:0432  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:0437  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:0438  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:043a  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:043c  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:043f  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:0441  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:0443  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:0445  les di, ptr [0x2056]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x2056u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x2056u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0449  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:044b  push es  [x46305]
    c.push16(c.es);
    // 24f1:044c  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:044d  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:0450  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:0451  mov ax, word ptr [0x2264]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2264u)));
    // 24f1:0454  sub ax, 0x190  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x190u, false));
    // 24f1:0457  imul ax, ax, 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.a.x, 0x50u));
    // 24f1:045a  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:045e  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0460  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:0461  push es  [x46305]
    c.push16(c.es);
    // 24f1:0462  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0463  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:0467  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x46cu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L2537c:
    if (c.tracing) c.traceAt(0x2537c);
    // 24f1:046c  push 2  [x46305]
    c.push16(0x2u);
    // 24f1:046e  call 0x70  [x46305]
    c.push16(0x471u); code_27(c, 0x24f80u); if (c.ip != 0x471u) c.badReturn(0x2537e);
L25381:
    if (c.tracing) c.traceAt(0x25381);
    // 24f1:0471  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:0476  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:0477  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:0479  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:047b  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:047e  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:0480  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:0482  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:0484  les di, ptr [0x205a]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x205au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x205au) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0488  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:048a  push es  [x46305]
    c.push16(c.es);
    // 24f1:048b  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:048c  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:048f  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:0490  imul ax, word ptr [0x2264], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x50u));
    // 24f1:0495  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:0499  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:049b  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:049c  push es  [x46305]
    c.push16(c.es);
    // 24f1:049d  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:049e  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:04a2  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x4a7u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L253b7:
    if (c.tracing) c.traceAt(0x253b7);
    // 24f1:04a7  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:04ac  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:04ad  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:04af  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:04b1  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:04b4  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:04b6  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:04b8  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:04ba  les di, ptr [0x205a]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x205au)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x205au) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:04be  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:04c0  push es  [x46305]
    c.push16(c.es);
    // 24f1:04c1  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:04c2  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:04c5  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:04c6  mov ax, word ptr [0x2264]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2264u)));
    // 24f1:04c9  sub ax, 0x190  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x190u, false));
    // 24f1:04cc  imul ax, ax, 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.a.x, 0x50u));
    // 24f1:04cf  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:04d3  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:04d5  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:04d6  push es  [x46305]
    c.push16(c.es);
    // 24f1:04d7  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:04d8  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:04dc  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x4e1u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L253f1:
    if (c.tracing) c.traceAt(0x253f1);
    // 24f1:04e1  push 3  [x46305]
    c.push16(0x3u);
    // 24f1:04e3  call 0x70  [x46305]
    c.push16(0x4e6u); code_27(c, 0x24f80u); if (c.ip != 0x4e6u) c.badReturn(0x253f3);
L253f6:
    if (c.tracing) c.traceAt(0x253f6);
    // 24f1:04e6  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:04eb  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:04ec  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:04ee  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:04f0  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:04f3  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:04f5  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:04f7  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:04f9  les di, ptr [0x205e]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x205eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x205eu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:04fd  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:04ff  push es  [x46305]
    c.push16(c.es);
    // 24f1:0500  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0501  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:0504  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:0505  imul ax, word ptr [0x2264], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x50u));
    // 24f1:050a  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:050e  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:0510  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:0511  push es  [x46305]
    c.push16(c.es);
    // 24f1:0512  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0513  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:0517  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x51cu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L2542c:
    if (c.tracing) c.traceAt(0x2542c);
    // 24f1:051c  imul ax, word ptr [0x204c], 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x50u));
    // 24f1:0521  cdq   [x46305]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:0522  mov cx, ax  [x46305]
    c.c.x = (uint16_t)(c.a.x);
    // 24f1:0524  mov bx, dx  [x46305]
    c.b.x = (uint16_t)(c.dx_.x);
    // 24f1:0526  mov ax, word ptr [0x2266]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2266u)));
    // 24f1:0529  xor dx, dx  [x46305]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 24f1:052b  add ax, cx  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 24f1:052d  adc dx, bx  [x46305]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.b.x, false, c.cf));
    // 24f1:052f  les di, ptr [0x205e]  [x46305]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x205eu)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x205eu) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 24f1:0533  add di, ax  [x46305]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:0535  push es  [x46305]
    c.push16(c.es);
    // 24f1:0536  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:0537  mov ax, 0xa000  [x46305]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:053a  push ax  [x46305]
    c.push16(c.a.x);
    // 24f1:053b  mov ax, word ptr [0x2264]  [x46305]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2264u)));
    // 24f1:053e  sub ax, 0x190  [x46305]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x190u, false));
    // 24f1:0541  imul ax, ax, 0x50  [x46305]
    c.a.x = (uint16_t)(c.imul<16>(c.a.x, 0x50u));
    // 24f1:0544  add ax, word ptr [0x2262]  [x46305]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x2262u)), true));
    // 24f1:0548  mov di, ax  [x46305]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:054a  pop es  [x46305]
    c.loadEs((uint16_t)c.pop16());
    // 24f1:054b  push es  [x46305]
    c.push16(c.es);
    // 24f1:054c  push di  [x46305]
    c.push16(c.di.x);
    // 24f1:054d  push word ptr [0x226e]  [x46305]
    c.push16(c.r16(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:0551  lcall 0x41ce, 0x10d1  [x46305]
    c.push16(c.cs); c.push16(0x556u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x10d1u);
L25466:
    if (c.tracing) c.traceAt(0x25466);
    // 24f1:0556  add word ptr [0x2262], 6  [x46305]
    c.w16(c.dsb + (uint16_t)(0x2262u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x2262u)), 0x6u, false));
    // 24f1:055b  mov al, byte ptr [0x2268]  [x46305]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2268u)));
    // 24f1:055e  cmp al, byte ptr [bp - 1]  [x46305]
    c.sub<8>(c.a.l, c.r8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu)), true);
    // 24f1:0561  je 0x566  [x46305]
    if (c.zf) goto L25476;
L25473:
    if (c.tracing) c.traceAt(0x25473);
    // 24f1:0563  jmp 0x33f  [x40898]
    goto L2524f;
L25476:
    if (c.tracing) c.traceAt(0x25476);
    // 24f1:0566  mov ax, word ptr [0x226c]  [x7152]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x226cu)));
    // 24f1:0569  add ax, 0x14  [x7152]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x14u, true));
    // 24f1:056c  push ax  [x7152]
    c.push16(c.a.x);
    // 24f1:056d  call 0x98  [x7152]
    c.push16(0x570u); code_27(c, 0x24fa8u); if (c.ip != 0x570u) c.badReturn(0x2547d);
L25480:
    if (c.tracing) c.traceAt(0x25480);
    // 24f1:0570  inc word ptr [0x226c]  [x7152]
    c.w16(c.dsb + (uint16_t)(0x226cu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x226cu)), false));
    // 24f1:0574  inc word ptr [0x204c]  [x7152]
    c.w16(c.dsb + (uint16_t)(0x204cu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), false));
    // 24f1:0578  inc word ptr [0x2264]  [x7152]
    c.w16(c.dsb + (uint16_t)(0x2264u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), true));
    // 24f1:057c  call 0  [x7152]
    c.push16(0x57fu); code_27(c, 0x24f10u); if (c.ip != 0x57fu) c.badReturn(0x2548c);
L2548f:
    if (c.tracing) c.traceAt(0x2548f);
    // 24f1:057f  cmp byte ptr [0x266f], 1  [x7152]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x266fu)), 0x1u, true);
    // 24f1:0584  jne 0x5aa  [x7152]
    if (!c.zf) goto L254ba;
L25496:
    if (c.tracing) c.traceAt(0x25496);
    // 24f1:0586  cmp byte ptr [0x2670], 0  [x64]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2670u)), 0x0u, true);
    // 24f1:058b  jbe 0x5aa  [x64]
    if ((c.cf || c.zf)) goto L254ba;
L2549d:
    if (c.tracing) c.traceAt(0x2549d);
    // 24f1:058d  mov al, byte ptr [0x2670]  [x64]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2670u)));
    // 24f1:0590  xor ah, ah  [x64]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0592  imul di, ax, 0x30  [x64]
    c.di.x = (uint16_t)(c.imul<16>(c.a.x, 0x30u));
    // 24f1:0595  add di, 0x2642  [x64]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2642u, true));
    // 24f1:0599  push ds  [x64]
    c.push16(c.ds);
    // 24f1:059a  push di  [x64]
    c.push16(c.di.x);
    // 24f1:059b  call 0xc  [x64]
    c.push16(0x59eu); code_27(c, 0x24f1cu); if (c.ip != 0x59eu) c.badReturn(0x254ab);
L254ae:
    if (c.tracing) c.traceAt(0x254ae);
    // 24f1:059e  mov bx, 8  [x64]
    c.b.x = (uint16_t)(0x8u);
    // 24f1:05a1  mov al, byte ptr [0x2670]  [x64]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2670u)));
    // 24f1:05a4  int 0xff  [x64]
    c.ip = 0x5a6u; c.d32 = false; c.intr(0xff, 0x5a6u);
L254b6:
    if (c.tracing) c.traceAt(0x254b6);
    // 24f1:05a6  dec byte ptr [0x2670]  [x64]
    c.w8(c.dsb + (uint16_t)(0x2670u), c.dec<8>(c.r8(c.dsb + (uint16_t)(0x2670u)), true));
L254ba:
    if (c.tracing) c.traceAt(0x254ba);
    // 24f1:05aa  cmp byte ptr [0x2670], 0  [x7152]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2670u)), 0x0u, true);
    // 24f1:05af  ja 0x5b4  [x7152]
    if ((!c.cf && !c.zf)) goto L254c4;
L254c1:
    if (c.tracing) c.traceAt(0x254c1);
    // 24f1:05b1  call 0xd0  [x1]
    c.push16(0x5b4u); code_27(c, 0x24fe0u); if (c.ip != 0x5b4u) c.badReturn(0x254c1);
L254c4:
    if (c.tracing) c.traceAt(0x254c4);
    // 24f1:05b4  cmp word ptr [0x2264], 0x320  [x7151]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2264u)), 0x320u, true);
    // 24f1:05ba  jne 0x5c2  [x7151]
    if (!c.zf) goto L254d2;
L254cc:
    if (c.tracing) c.traceAt(0x254cc);
    // 24f1:05bc  mov word ptr [0x2264], 0x190  [x17]
    c.w16(c.dsb + (uint16_t)(0x2264u), 0x190u);
L254d2:
    if (c.tracing) c.traceAt(0x254d2);
    // 24f1:05c2  cmp word ptr [0x226c], 0x190  [x7151]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x226cu)), 0x190u, true);
    // 24f1:05c8  jne 0x5cf  [x7151]
    if (!c.zf) goto L254df;
L254da:
    if (c.tracing) c.traceAt(0x254da);
    // 24f1:05ca  xor ax, ax  [x17]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:05cc  mov word ptr [0x226c], ax  [x17]
    c.w16(c.dsb + (uint16_t)(0x226cu), c.a.x);
L254df:
    if (c.tracing) c.traceAt(0x254df);
    // 24f1:05cf  cmp word ptr [0x204c], 0x31  [x7151]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x31u, true);
    // 24f1:05d4  je 0x5d9  [x7151]
    if (c.zf) goto L254e9;
L254e6:
    if (c.tracing) c.traceAt(0x254e6);
    // 24f1:05d6  jmp 0x2da  [x7006]
    goto L251ea;
L254e9:
    if (c.tracing) c.traceAt(0x254e9);
    // 24f1:05d9  leave   [x145]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 24f1:05da  ret 4  [x145]
    c.ip = c.pop16(); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L254ed:
    if (c.tracing) c.traceAt(0x254ed);
    // 24f1:05dd  lcall 0x41ce, 0  [x1]
    c.push16(c.cs); c.push16(0x5e2u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x0u);
L254f2:
    if (c.tracing) c.traceAt(0x254f2);
    // 24f1:05e2  push bp  [x1]
    c.push16(c.bp.x);
    // 24f1:05e3  mov bp, sp  [x1]
    c.bp.x = (uint16_t)(c.sp.x);
    // 24f1:05e5  mov ax, 2  [x1]
    c.a.x = (uint16_t)(0x2u);
    // 24f1:05e8  lcall 0x41ce, 0x530  [x1]
    c.push16(c.cs); c.push16(0x5edu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x530u);
L254fd:
    if (c.tracing) c.traceAt(0x254fd);
    // 24f1:05ed  sub sp, 2  [x1]
    c.sp.x = (uint16_t)(c.sub<16>(c.sp.x, 0x2u, true));
    // 24f1:05f0  push 0x10  [x1]
    c.push16(0x10u);
    // 24f1:05f2  lcall 0x257b, 0  [x1]
    c.push16(c.cs); c.push16(0x5f7u); c.loadCs(0x257bu); c.callLinear(c.csb + 0x0u);
L25507:
    if (c.tracing) c.traceAt(0x25507);
    // 24f1:05f7  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 24f1:05fa  mov ax, 8  [x1]
    c.a.x = (uint16_t)(0x8u);
    // 24f1:05fd  int 0xff  [x1]
    c.ip = 0x5ffu; c.d32 = false; c.intr(0xff, 0x5ffu);
L2550f:
    if (c.tracing) c.traceAt(0x2550f);
    // 24f1:05ff  push 0x6d64  [x1]
    c.push16(0x6d64u);
    // 24f1:0602  lcall 0x41ce, 0x28a  [x1]
    c.push16(c.cs); c.push16(0x607u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x28au);
L25517:
    if (c.tracing) c.traceAt(0x25517);
    // 24f1:0607  mov word ptr [0x2052], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x2052u), c.a.x);
    // 24f1:060a  mov word ptr [0x2054], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2054u), c.dx_.x);
    // 24f1:060e  push 0x6d64  [x1]
    c.push16(0x6d64u);
    // 24f1:0611  lcall 0x41ce, 0x28a  [x1]
    c.push16(c.cs); c.push16(0x616u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x28au);
L25526:
    if (c.tracing) c.traceAt(0x25526);
    // 24f1:0616  mov word ptr [0x2056], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x2056u), c.a.x);
    // 24f1:0619  mov word ptr [0x2058], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2058u), c.dx_.x);
    // 24f1:061d  push 0x6d64  [x1]
    c.push16(0x6d64u);
    // 24f1:0620  lcall 0x41ce, 0x28a  [x1]
    c.push16(c.cs); c.push16(0x625u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x28au);
L25535:
    if (c.tracing) c.traceAt(0x25535);
    // 24f1:0625  mov word ptr [0x205a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x205au), c.a.x);
    // 24f1:0628  mov word ptr [0x205c], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x205cu), c.dx_.x);
    // 24f1:062c  push 0x6d64  [x1]
    c.push16(0x6d64u);
    // 24f1:062f  lcall 0x41ce, 0x28a  [x1]
    c.push16(c.cs); c.push16(0x634u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x28au);
L25544:
    if (c.tracing) c.traceAt(0x25544);
    // 24f1:0634  mov word ptr [0x205e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x205eu), c.a.x);
    // 24f1:0637  mov word ptr [0x2060], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2060u), c.dx_.x);
    // 24f1:063b  mov word ptr [0x2050], 0x40  [x1]
    c.w16(c.dsb + (uint16_t)(0x2050u), 0x40u);
    // 24f1:0641  mov word ptr [0x204c], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0x204cu), 0x1u);
    // 24f1:0647  jmp 0x64d  [x1]
    goto L2555d;
L25559:
    if (c.tracing) c.traceAt(0x25559);
    // 24f1:0649  inc word ptr [0x204c]  [x63]
    c.w16(c.dsb + (uint16_t)(0x204cu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), true));
L2555d:
    if (c.tracing) c.traceAt(0x2555d);
    // 24f1:064d  mov word ptr [0x204e], 1  [x64]
    c.w16(c.dsb + (uint16_t)(0x204eu), 0x1u);
    // 24f1:0653  jmp 0x659  [x64]
    goto L25569;
L25565:
    if (c.tracing) c.traceAt(0x25565);
    // 24f1:0655  inc word ptr [0x204e]  [x3008]
    c.w16(c.dsb + (uint16_t)(0x204eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x204eu)), true));
L25569:
    if (c.tracing) c.traceAt(0x25569);
    // 24f1:0659  mov ax, word ptr [0x2050]  [x3072]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2050u)));
    // 24f1:065c  cdq   [x3072]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:065d  lcall 0x41ce, 0xfc8  [x3072]
    c.push16(c.cs); c.push16(0x662u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfc8u);
L25572:
    if (c.tracing) c.traceAt(0x25572);
    // 24f1:0662  push dx  [x3072]
    c.push16(c.dx_.x);
    // 24f1:0663  push bx  [x3072]
    c.push16(c.b.x);
    // 24f1:0664  push ax  [x3072]
    c.push16(c.a.x);
    // 24f1:0665  mov di, word ptr [0x204e]  [x3072]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x204eu)));
    // 24f1:0669  mov al, byte ptr [di + 0x1e1b]  [x3072]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x1e1bu)));
    // 24f1:066d  xor ah, ah  [x3072]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:066f  mov dx, ax  [x3072]
    c.dx_.x = (uint16_t)(c.a.x);
    // 24f1:0671  xor ax, ax  [x3072]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 24f1:0673  sub ax, dx  [x3072]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, true));
    // 24f1:0675  cdq   [x3072]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 24f1:0676  lcall 0x41ce, 0xfc8  [x3072]
    c.push16(c.cs); c.push16(0x67bu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfc8u);
L2558b:
    if (c.tracing) c.traceAt(0x2558b);
    // 24f1:067b  mov cx, 0x87  [x3072]
    c.c.x = (uint16_t)(0x87u);
    // 24f1:067e  xor si, si  [x3072]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 24f1:0680  xor di, di  [x3072]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 24f1:0682  lcall 0x41ce, 0xfba  [x3072]
    c.push16(c.cs); c.push16(0x687u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfbau);
L25597:
    if (c.tracing) c.traceAt(0x25597);
    // 24f1:0687  pop cx  [x3072]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 24f1:0688  pop si  [x3072]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 24f1:0689  pop di  [x3072]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 24f1:068a  lcall 0x41ce, 0xfb4  [x3072]
    c.push16(c.cs); c.push16(0x68fu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfb4u);
L2559f:
    if (c.tracing) c.traceAt(0x2559f);
    // 24f1:068f  push dx  [x3072]
    c.push16(c.dx_.x);
    // 24f1:0690  push bx  [x3072]
    c.push16(c.b.x);
    // 24f1:0691  push ax  [x3072]
    c.push16(c.a.x);
    // 24f1:0692  mov di, word ptr [0x204e]  [x3072]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x204eu)));
    // 24f1:0696  mov al, byte ptr [di + 0x1e1b]  [x3072]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x1e1bu)));
    // 24f1:069a  xor ah, ah  [x3072]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:069c  xor dx, dx  [x3072]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), true));
    // 24f1:069e  lcall 0x41ce, 0xfc8  [x3072]
    c.push16(c.cs); c.push16(0x6a3u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfc8u);
L255b3:
    if (c.tracing) c.traceAt(0x255b3);
    // 24f1:06a3  pop cx  [x3072]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 24f1:06a4  pop si  [x3072]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 24f1:06a5  pop di  [x3072]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 24f1:06a6  lcall 0x41ce, 0xfa2  [x3072]
    c.push16(c.cs); c.push16(0x6abu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfa2u);
L255bb:
    if (c.tracing) c.traceAt(0x255bb);
    // 24f1:06ab  lcall 0x41ce, 0xfd4  [x3072]
    c.push16(c.cs); c.push16(0x6b0u); c.loadCs(0x41ceu); c.callLinear(c.csb + 0xfd4u);
L255c0:
    if (c.tracing) c.traceAt(0x255c0);
    // 24f1:06b0  mov dl, al  [x3072]
    c.dx_.l = (uint8_t)(c.a.l);
    // 24f1:06b2  mov ax, word ptr [0x204e]  [x3072]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x204eu)));
    // 24f1:06b5  imul di, word ptr [0x204c], 0x30  [x3072]
    c.di.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x30u));
    // 24f1:06ba  add di, ax  [x3072]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 24f1:06bc  mov byte ptr [di + 0x2641], dl  [x3072]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x2641u), c.dx_.l);
    // 24f1:06c0  cmp word ptr [0x204e], 0x30  [x3072]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x204eu)), 0x30u, true);
    // 24f1:06c5  jne 0x655  [x3072]
    if (!c.zf) goto L25565;
L255d7:
    if (c.tracing) c.traceAt(0x255d7);
    // 24f1:06c7  dec word ptr [0x2050]  [x64]
    c.w16(c.dsb + (uint16_t)(0x2050u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x2050u)), false));
    // 24f1:06cb  cmp word ptr [0x204c], 0x40  [x64]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x204cu)), 0x40u, true);
    // 24f1:06d0  je 0x6d5  [x64]
    if (c.zf) goto L255e5;
L255e2:
    if (c.tracing) c.traceAt(0x255e2);
    // 24f1:06d2  jmp 0x649  [x63]
    goto L25559;
L255e5:
    if (c.tracing) c.traceAt(0x255e5);
    // 24f1:06d5  mov byte ptr [0x266f], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x266fu), 0x0u);
    // 24f1:06da  mov byte ptr [0x2670], 0x40  [x1]
    c.w8(c.dsb + (uint16_t)(0x2670u), 0x40u);
    // 24f1:06df  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 24f1:06e2  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 24f1:06e4  mov ah, 0xf  [x1]
    c.a.h = (uint8_t)(0xfu);
    // 24f1:06e6  out dx, ax  [x1]
    c.ip = 0x6e7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 24f1:06e7  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 24f1:06ea  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 24f1:06ec  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 24f1:06ef  mov cx, 0x8000  [x1]
    c.c.x = (uint16_t)(0x8000u);
    // 24f1:06f2  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 24f1:06f5  cld   [x1]
    c.df = false;
L25606:
    if (c.tracing) c.traceAt(0x25606);
    // 24f1:06f6  rep stosw word ptr es:[di], ax  [x32769]
    c.stos<16, false>(1);
L25608:
    if (c.tracing) c.traceAt(0x25608);
    // 24f1:06f8  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 24f1:06fb  mov dx, 0x3422  [x1]
    c.dx_.x = (uint16_t)(0x3422u);
    // 24f1:06fe  mov word ptr [0x2052], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x2052u), c.a.x);
    // 24f1:0701  mov word ptr [0x2054], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2054u), c.dx_.x);
    // 24f1:0705  mov ax, 0x6d60  [x1]
    c.a.x = (uint16_t)(0x6d60u);
    // 24f1:0708  mov dx, 0x3422  [x1]
    c.dx_.x = (uint16_t)(0x3422u);
    // 24f1:070b  mov word ptr [0x2056], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x2056u), c.a.x);
    // 24f1:070e  mov word ptr [0x2058], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2058u), c.dx_.x);
    // 24f1:0712  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 24f1:0715  mov dx, 0x257c  [x1]
    c.dx_.x = (uint16_t)(0x257cu);
    // 24f1:0718  mov word ptr [0x205a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x205au), c.a.x);
    // 24f1:071b  mov word ptr [0x205c], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x205cu), c.dx_.x);
    // 24f1:071f  mov ax, 0x6d60  [x1]
    c.a.x = (uint16_t)(0x6d60u);
    // 24f1:0722  mov dx, 0x257c  [x1]
    c.dx_.x = (uint16_t)(0x257cu);
    // 24f1:0725  mov word ptr [0x205e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x205eu), c.a.x);
    // 24f1:0728  mov word ptr [0x2060], dx  [x1]
    c.w16(c.dsb + (uint16_t)(0x2060u), c.dx_.x);
    // 24f1:072c  mov di, 2  [x1]
    c.di.x = (uint16_t)(0x2u);
    // 24f1:072f  push ds  [x1]
    c.push16(c.ds);
    // 24f1:0730  push di  [x1]
    c.push16(c.di.x);
    // 24f1:0731  call 0x53  [x1]
    c.push16(0x734u); code_27(c, 0x24f63u); if (c.ip != 0x734u) c.badReturn(0x25641);
L25644:
    if (c.tracing) c.traceAt(0x25644);
    // 24f1:0734  mov di, 0x1e1c  [x1]
    c.di.x = (uint16_t)(0x1e1cu);
    // 24f1:0737  push ds  [x1]
    c.push16(c.ds);
    // 24f1:0738  push di  [x1]
    c.push16(c.di.x);
    // 24f1:0739  call 0xc  [x1]
    c.push16(0x73cu); code_27(c, 0x24f1cu); if (c.ip != 0x73cu) c.badReturn(0x25649);
L2564c:
    if (c.tracing) c.traceAt(0x2564c);
    // 24f1:073c  call 0x10c  [x1]
    c.push16(0x73fu); code_27(c, 0x2501cu); if (c.ip != 0x73fu) c.badReturn(0x2564c);
L2564f:
    if (c.tracing) c.traceAt(0x2564f);
    // 24f1:073f  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:0741  mov word ptr [0x226a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x226au), c.a.x);
    // 24f1:0744  jmp 0x74a  [x1]
    goto L2565a;
L25656:
    if (c.tracing) c.traceAt(0x25656);
    // 24f1:0746  inc word ptr [0x226a]  [x247]
    c.w16(c.dsb + (uint16_t)(0x226au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x226au)), true));
L2565a:
    if (c.tracing) c.traceAt(0x2565a);
    // 24f1:074a  imul di, word ptr [0x226a], 0x1f  [x248]
    c.di.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x226au)), 0x1fu));
    // 24f1:074f  cmp byte ptr [di + 0x14], 0xd  [x248]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x14u)), 0xdu, true);
    // 24f1:0754  jbe 0x7a0  [x248]
    if ((c.cf || c.zf)) goto L256b0;
    c.notTranslated(0x25666, "fall-through");
L256b0:
    if (c.tracing) c.traceAt(0x256b0);
    // 24f1:07a0  mov byte ptr [0x266a], 0  [x248]
    c.w8(c.dsb + (uint16_t)(0x266au), 0x0u);
    // 24f1:07a5  imul di, word ptr [0x226a], 0x1f  [x248]
    c.di.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x226au)), 0x1fu));
    // 24f1:07aa  add di, 0x14  [x248]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, true));
    // 24f1:07ae  push ds  [x248]
    c.push16(c.ds);
    // 24f1:07af  push di  [x248]
    c.push16(c.di.x);
    // 24f1:07b0  mov di, 0x2162  [x248]
    c.di.x = (uint16_t)(0x2162u);
    // 24f1:07b3  push ds  [x248]
    c.push16(c.ds);
    // 24f1:07b4  push di  [x248]
    c.push16(c.di.x);
    // 24f1:07b5  push 0xff  [x248]
    c.push16(0xffu);
    // 24f1:07b8  lcall 0x41ce, 0x9a9  [x248]
    c.push16(c.cs); c.push16(0x7bdu); c.loadCs(0x41ceu); c.callLinear(c.csb + 0x9a9u);
L256cd:
    if (c.tracing) c.traceAt(0x256cd);
    // 24f1:07bd  mov al, byte ptr [0x2162]  [x248]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2162u)));
    // 24f1:07c0  mov byte ptr [bp - 1], al  [x248]
    c.w8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu), c.a.l);
    // 24f1:07c3  mov al, 1  [x248]
    c.a.l = (uint8_t)(0x1u);
    // 24f1:07c5  cmp al, byte ptr [bp - 1]  [x248]
    c.sub<8>(c.a.l, c.r8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu)), true);
    // 24f1:07c8  ja 0x800  [x248]
    if ((!c.cf && !c.zf)) goto L25710;
L256da:
    if (c.tracing) c.traceAt(0x256da);
    // 24f1:07ca  mov byte ptr [0x2268], al  [x178]
    c.w8(c.dsb + (uint16_t)(0x2268u), c.a.l);
    // 24f1:07cd  jmp 0x7d3  [x178]
    goto L256e3;
L256df:
    if (c.tracing) c.traceAt(0x256df);
    // 24f1:07cf  inc byte ptr [0x2268]  [x1521]
    c.w8(c.dsb + (uint16_t)(0x2268u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x2268u)), true));
L256e3:
    if (c.tracing) c.traceAt(0x256e3);
    // 24f1:07d3  mov al, byte ptr [0x2268]  [x1699]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2268u)));
    // 24f1:07d6  xor ah, ah  [x1699]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:07d8  mov di, ax  [x1699]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:07da  mov al, byte ptr [di + 0x2162]  [x1699]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x2162u)));
    // 24f1:07de  xor ah, ah  [x1699]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:07e0  sub ax, 0x41  [x1699]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x41u, false));
    // 24f1:07e3  shl ax, 1  [x1699]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 24f1:07e5  inc ax  [x1699]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 24f1:07e6  mov di, ax  [x1699]
    c.di.x = (uint16_t)(c.a.x);
    // 24f1:07e8  shl di, 1  [x1699]
    c.di.x = (uint16_t)(c.shl<16>(c.di.x, (int)((0x1u) & 31), false));
    // 24f1:07ea  mov ax, word ptr [di + 0x1fe4]  [x1699]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0x1fe4u)));
    // 24f1:07ee  mov word ptr [0x226e], ax  [x1699]
    c.w16(c.dsb + (uint16_t)(0x226eu), c.a.x);
    // 24f1:07f1  mov al, byte ptr [0x226e]  [x1699]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x226eu)));
    // 24f1:07f4  add byte ptr [0x266a], al  [x1699]
    c.w8(c.dsb + (uint16_t)(0x266au), c.add<8>(c.r8(c.dsb + (uint16_t)(0x266au)), c.a.l, false));
    // 24f1:07f8  mov al, byte ptr [0x2268]  [x1699]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2268u)));
    // 24f1:07fb  cmp al, byte ptr [bp - 1]  [x1699]
    c.sub<8>(c.a.l, c.r8(c.ssb + (uint16_t)(c.bp.x + 0xffffffffu)), true);
    // 24f1:07fe  jne 0x7cf  [x1699]
    if (!c.zf) goto L256df;
L25710:
    if (c.tracing) c.traceAt(0x25710);
    // 24f1:0800  mov al, byte ptr [0x266a]  [x248]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x266au)));
    // 24f1:0803  xor ah, ah  [x248]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 24f1:0805  shr ax, 1  [x248]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), false));
    // 24f1:0807  mov dx, ax  [x248]
    c.dx_.x = (uint16_t)(c.a.x);
    // 24f1:0809  mov ax, 0x28  [x248]
    c.a.x = (uint16_t)(0x28u);
    // 24f1:080c  sub ax, dx  [x248]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.dx_.x, false));
    // 24f1:080e  dec ax  [x248]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, false));
    // 24f1:080f  mov di, word ptr [0x226a]  [x248]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x226au)));
    // 24f1:0813  mov byte ptr [di + 0x2572], al  [x248]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x2572u), c.a.l);
    // 24f1:0817  cmp word ptr [0x226a], 0xf7  [x248]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x226au)), 0xf7u, true);
    // 24f1:081d  je 0x822  [x248]
    if (c.zf) goto L25732;
L2572f:
    if (c.tracing) c.traceAt(0x2572f);
    // 24f1:081f  jmp 0x746  [x247]
    goto L25656;
L25732:
    if (c.tracing) c.traceAt(0x25732);
    // 24f1:0822  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 24f1:0824  mov word ptr [0x226c], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x226cu), c.a.x);
    // 24f1:0827  mov word ptr [0x2264], 0x190  [x1]
    c.w16(c.dsb + (uint16_t)(0x2264u), 0x190u);
    // 24f1:082d  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 24f1:082f  mov word ptr [0x226a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x226au), c.a.x);
    // 24f1:0832  jmp 0x838  [x1]
    goto L25748;
L25744:
    if (c.tracing) c.traceAt(0x25744);
    // 24f1:0834  inc word ptr [0x226a]  [x145]
    c.w16(c.dsb + (uint16_t)(0x226au), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x226au)), true));
L25748:
    if (c.tracing) c.traceAt(0x25748);
    // 24f1:0838  imul di, word ptr [0x226a], 0x1f  [x146]
    c.di.x = (uint16_t)(c.imul<16>(c.r16(c.dsb + (uint16_t)(0x226au)), 0x1fu));
    // 24f1:083d  add di, 0x14  [x146]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x14u, true));
    // 24f1:0841  push ds  [x146]
    c.push16(c.ds);
    // 24f1:0842  push di  [x146]
    c.push16(c.di.x);
    // 24f1:0843  call 0x2c7  [x146]
    c.push16(0x846u); code_27(c, 0x251d7u); if (c.ip != 0x846u) c.badReturn(0x25753);
L25756:
    if (c.tracing) c.traceAt(0x25756);
    // 24f1:0846  cmp word ptr [0x226a], 0xf7  [x145]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x226au)), 0xf7u, true);
    // 24f1:084c  jne 0x834  [x145]
    if (!c.zf) goto L25744;
    c.notTranslated(0x2575e, "fall-through");
L257b0:
    if (c.tracing) c.traceAt(0x257b0);
    // 257b:0000  push bp  [x2]
    c.push16(c.bp.x);
    // 257b:0001  mov bp, sp  [x2]
    c.bp.x = (uint16_t)(c.sp.x);
    // 257b:0003  mov ah, 0  [x2]
    c.a.h = (uint8_t)(0x0u);
    // 257b:0005  mov al, byte ptr [bp + 6]  [x2]
    c.a.l = (uint8_t)(c.r8(c.ssb + (uint16_t)(c.bp.x + 0x6u)));
    // 257b:0008  int 0x10  [x2]
    c.ip = 0xau; c.d32 = false; c.intr(0x10, 0xau);
L257ba:
    if (c.tracing) c.traceAt(0x257ba);
    // 257b:000a  leave   [x2]
    c.sp.x = c.bp.x; c.bp.x = c.pop16();
    // 257b:000b  retf 2  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 2); return;
L41ce0:
    if (c.tracing) c.traceAt(0x41ce0);
    // 41ce:0000  mov dx, 0x42e0  [x1]
    c.dx_.x = (uint16_t)(0x42e0u);
    // 41ce:0003  mov ds, dx  [x1]
    c.loadDs(c.dx_.x);
    // 41ce:0005  mov word ptr [0x1e82], es  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e82u), c.es);
    // 41ce:0009  xor bp, bp  [x1]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), true));
    // 41ce:000b  call 0x1109  [x1]
    c.push16(0xeu); code_27(c, 0x42de9u); if (c.ip != 0xeu) c.badReturn(0x41ceb);
L41cee:
    if (c.tracing) c.traceAt(0x41cee);
    // 41ce:000e  call 0xb1  [x1]
    c.push16(0x11u); code_27(c, 0x41d91u); if (c.ip != 0x11u) c.badReturn(0x41cee);
L41cf1:
    if (c.tracing) c.traceAt(0x41cf1);
    // 41ce:0011  mov ax, sp  [x1]
    c.a.x = (uint16_t)(c.sp.x);
    // 41ce:0013  add ax, 0x13  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x13u, false));
    // 41ce:0016  mov cl, 4  [x1]
    c.c.l = (uint8_t)(0x4u);
    // 41ce:0018  shr ax, cl  [x1]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)(c.c.l & 31), false));
    // 41ce:001a  mov dx, ss  [x1]
    c.dx_.x = (uint16_t)(c.ss);
    // 41ce:001c  add ax, dx  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.dx_.x, false));
    // 41ce:001e  mov word ptr [0x1e54], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e54u), c.a.x);
    // 41ce:0021  mov word ptr [0x1e56], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e56u), c.a.x);
    // 41ce:0024  add ax, word ptr [0x1e4e]  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x1e4eu)), true));
    // 41ce:0028  mov word ptr [0x1e58], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e58u), c.a.x);
    // 41ce:002b  mov word ptr [0x1e62], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e62u), c.a.x);
    // 41ce:002e  mov word ptr [0x1e66], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e66u), c.a.x);
    // 41ce:0031  mov word ptr [0x1e6e], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e6eu), c.a.x);
    // 41ce:0034  mov es, word ptr [0x1e82]  [x1]
    c.loadEs(c.r16(c.dsb + (uint16_t)(0x1e82u)));
    // 41ce:0038  mov ax, word ptr es:[2]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(0x2u)));
    // 41ce:003c  mov word ptr [0x1e6a], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e6au), c.a.x);
    // 41ce:003f  mov word ptr [0x1e74], 0xd6  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e74u), 0xd6u);
    // 41ce:0045  mov word ptr [0x1e76], cs  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e76u), c.cs);
    // 41ce:0049  mov di, 0x3472  [x1]
    c.di.x = (uint16_t)(0x3472u);
    // 41ce:004c  mov si, 0x239  [x1]
    c.si.x = (uint16_t)(0x239u);
    // 41ce:004f  mov cx, 0x13  [x1]
    c.c.x = (uint16_t)(0x13u);
    // 41ce:0052  nop   [x1]
L41d33:
    if (c.tracing) c.traceAt(0x41d33);
    // 41ce:0053  cld   [x19]
    c.df = false;
    // 41ce:0054  lodsb al, byte ptr cs:[si]  [x19]
    c.ip = 0x56u; c.d32 = false; c.lods<8, false>(c.csb, 0);
    // 41ce:0056  mov ah, 0x35  [x19]
    c.a.h = (uint8_t)(0x35u);
    // 41ce:0058  int 0x21  [x19]
    c.ip = 0x5au; c.d32 = false; c.intr(0x21, 0x5au);
L41d3a:
    if (c.tracing) c.traceAt(0x41d3a);
    // 41ce:005a  mov word ptr [di], bx  [x19]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.b.x);
    // 41ce:005c  mov word ptr [di + 2], es  [x19]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2u), c.es);
    // 41ce:005f  add di, 4  [x19]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, true));
    // 41ce:0062  loop 0x53  [x19]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L41d33;
L41d44:
    if (c.tracing) c.traceAt(0x41d44);
    // 41ce:0064  push ds  [x1]
    c.push16(c.ds);
    // 41ce:0065  push cs  [x1]
    c.push16(c.cs);
    // 41ce:0066  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:0067  mov dx, 0x10c  [x1]
    c.dx_.x = (uint16_t)(0x10cu);
    // 41ce:006a  mov ax, 0x2500  [x1]
    c.a.x = (uint16_t)(0x2500u);
    // 41ce:006d  int 0x21  [x1]
    c.ip = 0x6fu; c.d32 = false; c.intr(0x21, 0x6fu);
L41d4f:
    if (c.tracing) c.traceAt(0x41d4f);
    // 41ce:006f  mov dx, 0x113  [x1]
    c.dx_.x = (uint16_t)(0x113u);
    // 41ce:0072  mov ax, 0x2523  [x1]
    c.a.x = (uint16_t)(0x2523u);
    // 41ce:0075  int 0x21  [x1]
    c.ip = 0x77u; c.d32 = false; c.intr(0x21, 0x77u);
L41d57:
    if (c.tracing) c.traceAt(0x41d57);
    // 41ce:0077  mov dx, 0xdb  [x1]
    c.dx_.x = (uint16_t)(0xdbu);
    // 41ce:007a  mov ax, 0x2524  [x1]
    c.a.x = (uint16_t)(0x2524u);
    // 41ce:007d  int 0x21  [x1]
    c.ip = 0x7fu; c.d32 = false; c.intr(0x21, 0x7fu);
L41d5f:
    if (c.tracing) c.traceAt(0x41d5f);
    // 41ce:007f  mov dx, 0x104  [x1]
    c.dx_.x = (uint16_t)(0x104u);
    // 41ce:0082  mov ax, 0x253f  [x1]
    c.a.x = (uint16_t)(0x253fu);
    // 41ce:0085  int 0x21  [x1]
    c.ip = 0x87u; c.d32 = false; c.intr(0x21, 0x87u);
L41d67:
    if (c.tracing) c.traceAt(0x41d67);
    // 41ce:0087  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:0088  mov ax, 0x3272  [x1]
    c.a.x = (uint16_t)(0x3272u);
    // 41ce:008b  push ds  [x1]
    c.push16(c.ds);
    // 41ce:008c  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:008d  push ds  [x1]
    c.push16(c.ds);
    // 41ce:008e  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:008f  mov ax, 0x263  [x1]
    c.a.x = (uint16_t)(0x263u);
    // 41ce:0092  push cs  [x1]
    c.push16(c.cs);
    // 41ce:0093  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:0094  push cs  [x1]
    c.push16(c.cs);
    // 41ce:0095  call 0x549  [x1]
    c.push16(0x98u); code_27(c, 0x42229u); if (c.ip != 0x98u) c.badReturn(0x41d75);
L41d78:
    if (c.tracing) c.traceAt(0x41d78);
    // 41ce:0098  push cs  [x1]
    c.push16(c.cs);
    // 41ce:0099  call 0x5c7  [x1]
    c.push16(0x9cu); code_27(c, 0x422a7u); if (c.ip != 0x9cu) c.badReturn(0x41d79);
L41d7c:
    if (c.tracing) c.traceAt(0x41d7c);
    // 41ce:009c  mov ax, 0x3372  [x1]
    c.a.x = (uint16_t)(0x3372u);
    // 41ce:009f  push ds  [x1]
    c.push16(c.ds);
    // 41ce:00a0  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:00a1  push ds  [x1]
    c.push16(c.ds);
    // 41ce:00a2  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:00a3  mov ax, 0x263  [x1]
    c.a.x = (uint16_t)(0x263u);
    // 41ce:00a6  push cs  [x1]
    c.push16(c.cs);
    // 41ce:00a7  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:00a8  push cs  [x1]
    c.push16(c.cs);
    // 41ce:00a9  call 0x549  [x1]
    c.push16(0xacu); code_27(c, 0x42229u); if (c.ip != 0xacu) c.badReturn(0x41d89);
L41d8c:
    if (c.tracing) c.traceAt(0x41d8c);
    // 41ce:00ac  push cs  [x1]
    c.push16(c.cs);
    // 41ce:00ad  call 0x5cc  [x1]
    c.push16(0xb0u); code_27(c, 0x422acu); if (c.ip != 0xb0u) c.badReturn(0x41d8d);
L41d90:
    if (c.tracing) c.traceAt(0x41d90);
    // 41ce:00b0  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L41d91:
    if (c.tracing) c.traceAt(0x41d91);
    // 41ce:00b1  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:00b3  pushf   [x1]
    c.push16(c.flags());
    // 41ce:00b4  pop bx  [x1]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 41ce:00b5  and bh, 0xf  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) & (0xfu), false));
    // 41ce:00b8  push bx  [x1]
    c.push16(c.b.x);
    // 41ce:00b9  popf   [x1]
    c.ip = 0xbau; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L41d9a:
    if (c.tracing) c.traceAt(0x41d9a);
    // 41ce:00ba  pushf   [x1]
    c.push16(c.flags());
    // 41ce:00bb  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41ce:00bc  and ch, 0xf0  [x1]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (0xf0u), false));
    // 41ce:00bf  cmp ch, 0xf0  [x1]
    c.sub<8>(c.c.h, 0xf0u, true);
    // 41ce:00c2  je 0xd2  [x1]
    if (c.zf) goto L41db2;
L41da4:
    if (c.tracing) c.traceAt(0x41da4);
    // 41ce:00c4  inc ax  [x1]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 41ce:00c5  or bh, 0xf0  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) | (0xf0u), false));
    // 41ce:00c8  push bx  [x1]
    c.push16(c.b.x);
    // 41ce:00c9  popf   [x1]
    c.ip = 0xcau; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L41daa:
    if (c.tracing) c.traceAt(0x41daa);
    // 41ce:00ca  pushf   [x1]
    c.push16(c.flags());
    // 41ce:00cb  pop cx  [x1]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41ce:00cc  and ch, 0xf0  [x1]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) & (0xf0u), true));
    // 41ce:00cf  je 0xd2  [x1]
    if (c.zf) goto L41db2;
L41db1:
    if (c.tracing) c.traceAt(0x41db1);
    // 41ce:00d1  inc ax  [x1]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
L41db2:
    if (c.tracing) c.traceAt(0x41db2);
    // 41ce:00d2  mov byte ptr [0x1e96], al  [x1]
    c.w8(c.dsb + (uint16_t)(0x1e96u), c.a.l);
    // 41ce:00d5  ret   [x1]
    c.ip = c.pop16(); return;
L41db6:
    if (c.tracing) c.traceAt(0x41db6);
    // 41ce:00d6  xor ax, ax  [x4]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:00d8  retf 2  [x4]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 2); return;
L41df6:
    if (c.tracing) c.traceAt(0x41df6);
    // 41ce:0116  xor cx, cx  [x1]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 41ce:0118  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 41ce:011a  mov dx, 0x42e0  [x1]
    c.dx_.x = (uint16_t)(0x42e0u);
    // 41ce:011d  mov ds, dx  [x1]
    c.loadDs(c.dx_.x);
    // 41ce:011f  sti   [x1]
    c.ip = 0x120u; c.d32 = false; c.m.sti();
L41e00:
    if (c.tracing) c.traceAt(0x41e00);
    // 41ce:0120  mov word ptr [0x1e7c], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e7cu), c.a.x);
L41e03:
    if (c.tracing) c.traceAt(0x41e03);
    // 41ce:0123  mov ax, cx  [x1]
    c.a.x = (uint16_t)(c.c.x);
    // 41ce:0125  or ax, bx  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.b.x), true));
    // 41ce:0127  je 0x166  [x1]
    if (c.zf) goto L41e46;
    c.notTranslated(0x41e09, "fall-through");
L41e46:
    if (c.tracing) c.traceAt(0x41e46);
    // 41ce:0166  mov word ptr [0x1e7e], cx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e7eu), c.c.x);
    // 41ce:016a  mov word ptr [0x1e80], bx  [x1]
    c.w16(c.dsb + (uint16_t)(0x1e80u), c.b.x);
    // 41ce:016e  les bx, ptr [0x1e78]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x1e78u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x1e78u) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:0172  mov ax, es  [x1]
    c.a.x = (uint16_t)(c.es);
    // 41ce:0174  or ax, bx  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.b.x), true));
    // 41ce:0176  je 0x18b  [x1]
    if (c.zf) goto L41e6b;
    c.notTranslated(0x41e58, "fall-through");
L41e6b:
    if (c.tracing) c.traceAt(0x41e6b);
    // 41ce:018b  mov ax, 0x3272  [x1]
    c.a.x = (uint16_t)(0x3272u);
    // 41ce:018e  push ds  [x1]
    c.push16(c.ds);
    // 41ce:018f  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:0190  push cs  [x1]
    c.push16(c.cs);
    // 41ce:0191  call 0x621  [x1]
    c.push16(0x194u); code_27(c, 0x42301u); if (c.ip != 0x194u) c.badReturn(0x41e71);
L41e74:
    if (c.tracing) c.traceAt(0x41e74);
    // 41ce:0194  mov ax, 0x3372  [x1]
    c.a.x = (uint16_t)(0x3372u);
    // 41ce:0197  push ds  [x1]
    c.push16(c.ds);
    // 41ce:0198  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:0199  push cs  [x1]
    c.push16(c.cs);
    // 41ce:019a  call 0x621  [x1]
    c.push16(0x19du); code_27(c, 0x42301u); if (c.ip != 0x19du) c.badReturn(0x41e7a);
L41e7d:
    if (c.tracing) c.traceAt(0x41e7d);
    // 41ce:019d  mov di, 0x3472  [x1]
    c.di.x = (uint16_t)(0x3472u);
    // 41ce:01a0  mov si, 0x239  [x1]
    c.si.x = (uint16_t)(0x239u);
    // 41ce:01a3  mov cx, 0x13  [x1]
    c.c.x = (uint16_t)(0x13u);
    // 41ce:01a6  nop   [x1]
L41e87:
    if (c.tracing) c.traceAt(0x41e87);
    // 41ce:01a7  cld   [x19]
    c.df = false;
    // 41ce:01a8  lodsb al, byte ptr cs:[si]  [x19]
    c.ip = 0x1aau; c.d32 = false; c.lods<8, false>(c.csb, 0);
    // 41ce:01aa  mov ah, 0x25  [x19]
    c.a.h = (uint8_t)(0x25u);
    // 41ce:01ac  push ds  [x19]
    c.push16(c.ds);
    // 41ce:01ad  lds dx, ptr [di]  [x19]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(c.di.x)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(c.di.x) + 2); c.dx_.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:01af  int 0x21  [x19]
    c.ip = 0x1b1u; c.d32 = false; c.intr(0x21, 0x1b1u);
L41e91:
    if (c.tracing) c.traceAt(0x41e91);
    // 41ce:01b1  pop ds  [x19]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:01b2  add di, 4  [x19]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, true));
    // 41ce:01b5  loop 0x1a7  [x19]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L41e87;
L41e97:
    if (c.tracing) c.traceAt(0x41e97);
    // 41ce:01b7  mov ax, word ptr [0x1e7e]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e7eu)));
    // 41ce:01ba  or ax, word ptr [0x1e80]  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.r16(c.dsb + (uint16_t)(0x1e80u))), true));
    // 41ce:01be  je 0x1e9  [x1]
    if (c.zf) goto L41ec9;
    c.notTranslated(0x41ea0, "fall-through");
L41ec9:
    if (c.tracing) c.traceAt(0x41ec9);
    // 41ce:01e9  mov ax, word ptr [0x1e7c]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x1e7cu)));
    // 41ce:01ec  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 41ce:01ee  int 0x21  [x1]
    c.ip = 0x1f0u; c.d32 = false; c.intr(0x21, 0x1f0u);
    c.notTranslated(0x41ed0, "fall-through");
L41f6a:
    if (c.tracing) c.traceAt(0x41f6a);
    // 41ce:028a  push bp  [x4]
    c.push16(c.bp.x);
    // 41ce:028b  mov bp, sp  [x4]
    c.bp.x = (uint16_t)(c.sp.x);
    // 41ce:028d  mov ax, word ptr [bp + 6]  [x4]
    c.a.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.bp.x + 0x6u)));
    // 41ce:0290  call 0x353  [x4]
    c.push16(0x293u); code_27(c, 0x42033u); if (c.ip != 0x293u) c.badReturn(0x41f70);
L41f73:
    if (c.tracing) c.traceAt(0x41f73);
    // 41ce:0293  pop bp  [x4]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:0294  jb 0x299  [x4]
    if (c.cf) { t = 0x41f79u; goto dispatch; }
L41f76:
    if (c.tracing) c.traceAt(0x41f76);
    // 41ce:0296  retf 2  [x4]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 2); return;
L42033:
    if (c.tracing) c.traceAt(0x42033);
    // 41ce:0353  or ax, ax  [x4]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 41ce:0355  je 0x3ce  [x4]
    if (c.zf) { t = 0x420aeu; goto dispatch; }
L42037:
    if (c.tracing) c.traceAt(0x42037);
    // 41ce:0357  mov word ptr [0x34be], ax  [x4]
    c.w16(c.dsb + (uint16_t)(0x34beu), c.a.x);
    // 41ce:035a  call 0x4dc  [x4]
    c.push16(0x35du); code_27(c, 0x421bcu); if (c.ip != 0x35du) c.badReturn(0x4203a);
L4203d:
    if (c.tracing) c.traceAt(0x4203d);
    // 41ce:035d  mov di, 0x1e6c  [x4]
    c.di.x = (uint16_t)(0x1e6cu);
    // 41ce:0360  mov cx, ds  [x4]
    c.c.x = (uint16_t)(c.ds);
    // 41ce:0362  mov es, cx  [x4]
    c.loadEs(c.c.x);
    // 41ce:0364  mov cx, di  [x4]
    c.c.x = (uint16_t)(c.di.x);
    // 41ce:0366  mov bx, es  [x4]
    c.b.x = (uint16_t)(c.es);
    // 41ce:0368  les di, ptr es:[di]  [x4]
    { const uint32_t t0 = c.r16(c.esb + (uint16_t)(c.di.x)); const uint16_t t1 = c.r16(c.esb + (uint16_t)(c.di.x) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:036b  mov si, es  [x4]
    c.si.x = (uint16_t)(c.es);
    // 41ce:036d  cmp si, word ptr [0x1e66]  [x4]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x1e66u)), true);
    // 41ce:0371  je 0x3d2  [x4]
    if (c.zf) goto L420b2;
    c.notTranslated(0x42053, "fall-through");
L420b2:
    if (c.tracing) c.traceAt(0x420b2);
    // 41ce:03d2  add ax, di  [x4]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.di.x, false));
    // 41ce:03d4  add dx, si  [x4]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.si.x, false));
    // 41ce:03d6  add al, 0xf0  [x4]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, 0xf0u, true));
    // 41ce:03d8  adc dx, 0  [x4]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, false, c.cf));
    // 41ce:03db  and al, 0xf  [x4]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfu), false));
    // 41ce:03dd  cmp dx, word ptr [0x1e6a]  [x4]
    c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x1e6au)), true);
    // 41ce:03e1  jb 0x3eb  [x4]
    if (c.cf) goto L420cb;
    c.notTranslated(0x420c3, "fall-through");
L420cb:
    if (c.tracing) c.traceAt(0x420cb);
    // 41ce:03eb  push es  [x4]
    c.push16(c.es);
    // 41ce:03ec  push di  [x4]
    c.push16(c.di.x);
    // 41ce:03ed  mov di, cx  [x4]
    c.di.x = (uint16_t)(c.c.x);
    // 41ce:03ef  mov es, bx  [x4]
    c.loadEs(c.b.x);
    // 41ce:03f1  mov word ptr [0x1e64], ax  [x4]
    c.w16(c.dsb + (uint16_t)(0x1e64u), c.a.x);
    // 41ce:03f4  mov word ptr [0x1e66], dx  [x4]
    c.w16(c.dsb + (uint16_t)(0x1e66u), c.dx_.x);
    // 41ce:03f8  mov word ptr es:[di], ax  [x4]
    c.w16(c.esb + (uint16_t)(c.di.x), c.a.x);
    // 41ce:03fb  mov word ptr es:[di + 2], dx  [x4]
    c.w16(c.esb + (uint16_t)(c.di.x + 0x2u), c.dx_.x);
    // 41ce:03ff  xor ax, ax  [x4]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:0401  push ax  [x4]
    c.push16(c.a.x);
    // 41ce:0402  lcall [0x1e74]  [x4]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x1e74u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x1e74u) + 2); c.push16(c.cs); c.push16(0x406u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L420e6:
    if (c.tracing) c.traceAt(0x420e6);
    // 41ce:0406  pop ax  [x4]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 41ce:0407  pop dx  [x4]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 41ce:0408  clc   [x4]
    c.cf = false;
    // 41ce:0409  ret   [x4]
    c.ip = c.pop16(); return;
L421bc:
    if (c.tracing) c.traceAt(0x421bc);
    // 41ce:04dc  add ax, 7  [x4]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x7u, true));
    // 41ce:04df  mov dx, ax  [x4]
    c.dx_.x = (uint16_t)(c.a.x);
    // 41ce:04e1  rcr dx, 1  [x4]
    c.dx_.x = (uint16_t)(c.rcr<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 41ce:04e3  shr dx, 1  [x4]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 41ce:04e5  shr dx, 1  [x4]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 41ce:04e7  shr dx, 1  [x4]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 41ce:04e9  and ax, 8  [x4]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x8u), true));
    // 41ce:04ec  ret   [x4]
    c.ip = c.pop16(); return;
L42210:
    if (c.tracing) c.traceAt(0x42210);
    // 41ce:0530  add ax, 0x200  [x192587]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x200u, true));
    // 41ce:0533  jb 0x542  [x192587]
    if (c.cf) { t = 0x42222u; goto dispatch; }
L42215:
    if (c.tracing) c.traceAt(0x42215);
    // 41ce:0535  sub ax, sp  [x192587]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.sp.x, true));
    // 41ce:0537  jae 0x542  [x192587]
    if (!c.cf) { t = 0x42222u; goto dispatch; }
L42219:
    if (c.tracing) c.traceAt(0x42219);
    // 41ce:0539  neg ax  [x192587]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 41ce:053b  cmp ax, word ptr [0x1e84]  [x192587]
    c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0x1e84u)), true);
    // 41ce:053f  jb 0x542  [x192587]
    if (c.cf) { t = 0x42222u; goto dispatch; }
L42221:
    if (c.tracing) c.traceAt(0x42221);
    // 41ce:0541  retf   [x192587]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42229:
    if (c.tracing) c.traceAt(0x42229);
    // 41ce:0549  xor dx, dx  [x2]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 41ce:054b  mov bx, sp  [x2]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:054d  push ds  [x2]
    c.push16(c.ds);
    // 41ce:054e  les di, ptr ss:[bx + 8]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x8u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x8u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:0552  lds si, ptr ss:[bx + 4]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u) + 2); c.si.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:0556  cld   [x2]
    c.df = false;
    // 41ce:0557  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 41ce:0559  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:055a  mov ax, 0xd7b0  [x2]
    c.a.x = (uint16_t)(0xd7b0u);
    // 41ce:055d  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:055e  mov ax, 0x80  [x2]
    c.a.x = (uint16_t)(0x80u);
    // 41ce:0561  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0562  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 41ce:0564  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0565  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0566  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0567  lea ax, [di + 0x74]  [x2]
    c.a.x = (uint16_t)((uint16_t)(c.di.x + 0x74u));
    // 41ce:056a  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:056b  mov ax, es  [x2]
    c.a.x = (uint16_t)(c.es);
    // 41ce:056d  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:056e  mov ax, 0xba6  [x2]
    c.a.x = (uint16_t)(0xba6u);
    // 41ce:0571  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0572  mov ax, 0x41ce  [x2]
    c.a.x = (uint16_t)(0x41ceu);
    // 41ce:0575  stosw word ptr es:[di], ax  [x2]
    c.stos<16, false>(0);
    // 41ce:0576  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:0578  mov cx, 0xe  [x2]
    c.c.x = (uint16_t)(0xeu);
L4225b:
    if (c.tracing) c.traceAt(0x4225b);
    // 41ce:057b  rep stosw word ptr es:[di], ax  [x30]
    c.stos<16, false>(1);
L4225d:
    if (c.tracing) c.traceAt(0x4225d);
    // 41ce:057d  mov cx, 0x4f  [x2]
    c.c.x = (uint16_t)(0x4fu);
    // 41ce:0580  or dx, dx  [x2]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 41ce:0582  jne 0x58d  [x2]
    if (!c.zf) { t = 0x4226du; goto dispatch; }
L42264:
    if (c.tracing) c.traceAt(0x42264);
    // 41ce:0584  lodsb al, byte ptr [si]  [x2]
    c.ip = 0x585u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 41ce:0585  cmp cl, al  [x2]
    c.sub<8>(c.c.l, c.a.l, true);
    // 41ce:0587  jbe 0x58d  [x2]
    if ((c.cf || c.zf)) { t = 0x4226du; goto dispatch; }
L42269:
    if (c.tracing) c.traceAt(0x42269);
    // 41ce:0589  mov cl, al  [x2]
    c.c.l = (uint8_t)(c.a.l);
    // 41ce:058b  jcxz 0x595  [x2]
    if (!c.c.x) goto L42275;
    c.notTranslated(0x4226d, "fall-through");
L42275:
    if (c.tracing) c.traceAt(0x42275);
    // 41ce:0595  xor al, al  [x2]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 41ce:0597  stosb byte ptr es:[di], al  [x2]
    c.stos<8, false>(0);
    // 41ce:0598  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:0599  retf 8  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 8); return;
L422a7:
    if (c.tracing) c.traceAt(0x422a7);
    // 41ce:05c7  mov dx, 0xd7b1  [x1]
    c.dx_.x = (uint16_t)(0xd7b1u);
    // 41ce:05ca  jmp 0x5d4  [x1]
    goto L422b4;
L422ac:
    if (c.tracing) c.traceAt(0x422ac);
    // 41ce:05cc  mov dx, 0xd7b2  [x1]
    c.dx_.x = (uint16_t)(0xd7b2u);
    // 41ce:05cf  jmp 0x5d4  [x1]
    goto L422b4;
L422b4:
    if (c.tracing) c.traceAt(0x422b4);
    // 41ce:05d4  push bp  [x2]
    c.push16(c.bp.x);
    // 41ce:05d5  mov bp, sp  [x2]
    c.bp.x = (uint16_t)(c.sp.x);
    // 41ce:05d7  les di, ptr [bp + 6]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x6u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x6u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:05da  mov ax, word ptr es:[di + 2]  [x2]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x + 0x2u)));
    // 41ce:05de  cmp ax, 0xd7b1  [x2]
    c.sub<16>(c.a.x, 0xd7b1u, true);
    // 41ce:05e1  je 0x5f5  [x2]
    if (c.zf) { t = 0x422d5u; goto dispatch; }
L422c3:
    if (c.tracing) c.traceAt(0x422c3);
    // 41ce:05e3  cmp ax, 0xd7b2  [x2]
    c.sub<16>(c.a.x, 0xd7b2u, true);
    // 41ce:05e6  je 0x5f5  [x2]
    if (c.zf) { t = 0x422d5u; goto dispatch; }
L422c8:
    if (c.tracing) c.traceAt(0x422c8);
    // 41ce:05e8  cmp ax, 0xd7b0  [x2]
    c.sub<16>(c.a.x, 0xd7b0u, true);
    // 41ce:05eb  je 0x5fd  [x2]
    if (c.zf) goto L422dd;
    c.notTranslated(0x422cd, "fall-through");
L422dd:
    if (c.tracing) c.traceAt(0x422dd);
    // 41ce:05fd  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:05ff  mov word ptr es:[di + 2], dx  [x2]
    c.w16(c.esb + (uint16_t)(c.di.x + 0x2u), c.dx_.x);
    // 41ce:0603  mov word ptr es:[di + 8], ax  [x2]
    c.w16(c.esb + (uint16_t)(c.di.x + 0x8u), c.a.x);
    // 41ce:0607  mov word ptr es:[di + 0xa], ax  [x2]
    c.w16(c.esb + (uint16_t)(c.di.x + 0xau), c.a.x);
    // 41ce:060b  mov bx, 0x10  [x2]
    c.b.x = (uint16_t)(0x10u);
    // 41ce:060e  call 0x65d  [x2]
    c.push16(0x611u); code_27(c, 0x4233du); if (c.ip != 0x611u) c.badReturn(0x422ee);
L422f1:
    if (c.tracing) c.traceAt(0x422f1);
    // 41ce:0611  je 0x619  [x2]
    if (c.zf) goto L422f9;
    c.notTranslated(0x422f3, "fall-through");
L422f9:
    if (c.tracing) c.traceAt(0x422f9);
    // 41ce:0619  pop bp  [x2]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:061a  retf 4  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L42301:
    if (c.tracing) c.traceAt(0x42301);
    // 41ce:0621  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 41ce:0623  push bp  [x2]
    c.push16(c.bp.x);
    // 41ce:0624  mov bp, sp  [x2]
    c.bp.x = (uint16_t)(c.sp.x);
    // 41ce:0626  les di, ptr [bp + 6]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x6u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.bp.x + 0x6u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:0629  cmp word ptr es:[di + 2], 0xd7b1  [x2]
    c.sub<16>(c.r16(c.esb + (uint16_t)(c.di.x + 0x2u)), 0xd7b1u, true);
    // 41ce:062f  je 0x649  [x2]
    if (c.zf) goto L42329;
L42311:
    if (c.tracing) c.traceAt(0x42311);
    // 41ce:0631  cmp word ptr es:[di + 2], 0xd7b2  [x1]
    c.sub<16>(c.r16(c.esb + (uint16_t)(c.di.x + 0x2u)), 0xd7b2u, true);
    // 41ce:0637  je 0x641  [x1]
    if (c.zf) goto L42321;
    c.notTranslated(0x42319, "fall-through");
L42321:
    if (c.tracing) c.traceAt(0x42321);
    // 41ce:0641  push ax  [x1]
    c.push16(c.a.x);
    // 41ce:0642  mov bx, 0x14  [x1]
    c.b.x = (uint16_t)(0x14u);
    // 41ce:0645  call 0x65d  [x1]
    c.push16(0x648u); code_27(c, 0x4233du); if (c.ip != 0x648u) c.badReturn(0x42325);
L42328:
    if (c.tracing) c.traceAt(0x42328);
    // 41ce:0648  pop ax  [x1]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
L42329:
    if (c.tracing) c.traceAt(0x42329);
    // 41ce:0649  or al, al  [x2]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 41ce:064b  je 0x659  [x2]
    if (c.zf) goto L42339;
L4232d:
    if (c.tracing) c.traceAt(0x4232d);
    // 41ce:064d  mov bx, 0x1c  [x2]
    c.b.x = (uint16_t)(0x1cu);
    // 41ce:0650  call 0x65d  [x2]
    c.push16(0x653u); code_27(c, 0x4233du); if (c.ip != 0x653u) c.badReturn(0x42330);
L42333:
    if (c.tracing) c.traceAt(0x42333);
    // 41ce:0653  mov word ptr es:[di + 2], 0xd7b0  [x2]
    c.w16(c.esb + (uint16_t)(c.di.x + 0x2u), 0xd7b0u);
L42339:
    if (c.tracing) c.traceAt(0x42339);
    // 41ce:0659  pop bp  [x2]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:065a  retf 4  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L4233d:
    if (c.tracing) c.traceAt(0x4233d);
    // 41ce:065d  push es  [x5]
    c.push16(c.es);
    // 41ce:065e  push di  [x5]
    c.push16(c.di.x);
    // 41ce:065f  push es  [x5]
    c.push16(c.es);
    // 41ce:0660  push di  [x5]
    c.push16(c.di.x);
    // 41ce:0661  lcall es:[bx + di]  [x5]
    { const uint32_t t0 = c.r16(c.esb + (uint16_t)(c.b.x + c.di.x)); const uint16_t t1 = c.r16(c.esb + (uint16_t)(c.b.x + c.di.x) + 2); c.push16(c.cs); c.push16(0x664u); c.loadCs(t1); c.callLinear(c.csb + t0); }
L42344:
    if (c.tracing) c.traceAt(0x42344);
    // 41ce:0664  or ax, ax  [x5]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) | (c.a.x), true));
    // 41ce:0666  je 0x66b  [x5]
    if (c.zf) goto L4234b;
    c.notTranslated(0x42348, "fall-through");
L4234b:
    if (c.tracing) c.traceAt(0x4234b);
    // 41ce:066b  pop di  [x5]
    { const uint32_t t0 = c.pop16(); c.di.x = (uint16_t)(t0); }
    // 41ce:066c  pop es  [x5]
    c.loadEs((uint16_t)c.pop16());
    // 41ce:066d  ret   [x5]
    c.ip = c.pop16(); return;
L423a3:
    if (c.tracing) c.traceAt(0x423a3);
    // 41ce:06c3  mov bx, sp  [x1]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:06c5  push ds  [x1]
    c.push16(c.ds);
    // 41ce:06c6  les di, ptr ss:[bx + 4]  [x1]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:06ca  lds dx, ptr es:[di + 0xc]  [x1]
    { const uint32_t t0 = c.r16(c.esb + (uint16_t)(c.di.x + 0xcu)); const uint16_t t1 = c.r16(c.esb + (uint16_t)(c.di.x + 0xcu) + 2); c.dx_.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:06ce  xor cx, cx  [x1]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
    // 41ce:06d0  xchg word ptr es:[di + 8], cx  [x1]
    { const uint32_t t0 = c.r16(c.esb + (uint16_t)(c.di.x + 0x8u)); c.w16(c.esb + (uint16_t)(c.di.x + 0x8u), c.c.x); c.c.x = (uint16_t)(t0); }
    // 41ce:06d4  mov bx, word ptr es:[di]  [x1]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x)));
    // 41ce:06d7  mov ah, 0x40  [x1]
    c.a.h = (uint8_t)(0x40u);
    // 41ce:06d9  int 0x21  [x1]
    c.ip = 0x6dbu; c.d32 = false; c.intr(0x21, 0x6dbu);
L423bb:
    if (c.tracing) c.traceAt(0x423bb);
    // 41ce:06db  jb 0x6df  [x1]
    if (c.cf) goto L423bf;
L423bd:
    if (c.tracing) c.traceAt(0x423bd);
    // 41ce:06dd  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L423bf:
    if (c.tracing) c.traceAt(0x423bf);
    // 41ce:06df  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:06e0  retf 4  [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L423c3:
    if (c.tracing) c.traceAt(0x423c3);
    // 41ce:06e3  mov bx, sp  [x2]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:06e5  les di, ptr ss:[bx + 4]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:06e9  mov bx, word ptr es:[di]  [x2]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.di.x)));
    // 41ce:06ec  cmp bx, 4  [x2]
    c.sub<16>(c.b.x, 0x4u, true);
    // 41ce:06ef  jbe 0x6f7  [x2]
    if ((c.cf || c.zf)) goto L423d7;
    c.notTranslated(0x423d1, "fall-through");
L423d7:
    if (c.tracing) c.traceAt(0x423d7);
    // 41ce:06f7  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:06f9  retf 4  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L42689:
    if (c.tracing) c.traceAt(0x42689);
    // 41ce:09a9  cld   [x248]
    c.df = false;
    // 41ce:09aa  mov bx, sp  [x248]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:09ac  mov dx, ds  [x248]
    c.dx_.x = (uint16_t)(c.ds);
    // 41ce:09ae  lds si, ptr ss:[bx + 0xa]  [x248]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0xau)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0xau) + 2); c.si.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:09b2  les di, ptr ss:[bx + 6]  [x248]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x6u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x6u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:09b6  mov cx, word ptr ss:[bx + 4]  [x248]
    c.c.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)));
    // 41ce:09ba  lodsb al, byte ptr [si]  [x248]
    c.ip = 0x9bbu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 41ce:09bb  cmp al, cl  [x248]
    c.sub<8>(c.a.l, c.c.l, true);
    // 41ce:09bd  jbe 0x9c1  [x248]
    if ((c.cf || c.zf)) goto L426a1;
    c.notTranslated(0x4269f, "fall-through");
L426a1:
    if (c.tracing) c.traceAt(0x426a1);
    // 41ce:09c1  stosb byte ptr es:[di], al  [x248]
    c.stos<8, false>(0);
    // 41ce:09c2  mov cl, al  [x248]
    c.c.l = (uint8_t)(c.a.l);
    // 41ce:09c4  xor ch, ch  [x248]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), true));
L426a6:
    if (c.tracing) c.traceAt(0x426a6);
    // 41ce:09c6  rep movsb byte ptr es:[di], byte ptr [si]  [x1947]
    c.ip = 0x9c8u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L426a8:
    if (c.tracing) c.traceAt(0x426a8);
    // 41ce:09c8  mov ds, dx  [x248]
    c.loadDs(c.dx_.x);
    // 41ce:09ca  retf 0xa  [x248]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 10); return;
L42886:
    if (c.tracing) c.traceAt(0x42886);
    // 41ce:0ba6  mov bx, sp  [x2]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:0ba8  push ds  [x2]
    c.push16(c.ds);
    // 41ce:0ba9  lds di, ptr ss:[bx + 4]  [x2]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u) + 2); c.di.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:0bad  xor cx, cx  [x2]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 41ce:0baf  mov word ptr [di], cx  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.c.x);
    // 41ce:0bb1  mov ax, 0x3d00  [x2]
    c.a.x = (uint16_t)(0x3d00u);
    // 41ce:0bb4  cmp word ptr [di + 2], 0xd7b1  [x2]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)), 0xd7b1u, true);
    // 41ce:0bb9  je 0xbc8  [x2]
    if (c.zf) goto L428a8;
L4289b:
    if (c.tracing) c.traceAt(0x4289b);
    // 41ce:0bbb  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 41ce:0bbd  inc word ptr [di]  [x1]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.inc<16>(c.r16(c.dsb + (uint16_t)(c.di.x)), false));
    // 41ce:0bbf  cmp word ptr [di + 2], 0xd7b3  [x1]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)), 0xd7b3u, true);
    // 41ce:0bc4  je 0xbc8  [x1]
    if (c.zf) goto L428a8;
L428a6:
    if (c.tracing) c.traceAt(0x428a6);
    // 41ce:0bc6  mov ah, 0x3c  [x1]
    c.a.h = (uint8_t)(0x3cu);
L428a8:
    if (c.tracing) c.traceAt(0x428a8);
    // 41ce:0bc8  cmp byte ptr [di + 0x30], 0  [x2]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.di.x + 0x30u)), 0x0u, true);
    // 41ce:0bcc  je 0xbd7  [x2]
    if (c.zf) goto L428b7;
    c.notTranslated(0x428ae, "fall-through");
L428b7:
    if (c.tracing) c.traceAt(0x428b7);
    // 41ce:0bd7  mov ax, 0x66e  [x2]
    c.a.x = (uint16_t)(0x66eu);
    // 41ce:0bda  mov dx, 0x41ce  [x2]
    c.dx_.x = (uint16_t)(0x41ceu);
    // 41ce:0bdd  xor cx, cx  [x2]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 41ce:0bdf  xor bx, bx  [x2]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), false));
    // 41ce:0be1  cmp word ptr [di + 2], 0xd7b1  [x2]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.di.x + 0x2u)), 0xd7b1u, true);
    // 41ce:0be6  je 0xc17  [x2]
    if (c.zf) goto L428f7;
L428c8:
    if (c.tracing) c.traceAt(0x428c8);
    // 41ce:0be8  mov bx, word ptr [di]  [x1]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x)));
    // 41ce:0bea  mov ax, 0x4400  [x1]
    c.a.x = (uint16_t)(0x4400u);
    // 41ce:0bed  int 0x21  [x1]
    c.ip = 0xbefu; c.d32 = false; c.intr(0x21, 0xbefu);
L428cf:
    if (c.tracing) c.traceAt(0x428cf);
    // 41ce:0bef  test dl, 0x80  [x1]
    c.logic<8>((c.dx_.l) & (0x80u), true);
    // 41ce:0bf2  mov ax, 0x6c3  [x1]
    c.a.x = (uint16_t)(0x6c3u);
    // 41ce:0bf5  mov dx, 0x41ce  [x1]
    c.dx_.x = (uint16_t)(0x41ceu);
    // 41ce:0bf8  mov cx, ax  [x1]
    c.c.x = (uint16_t)(c.a.x);
    // 41ce:0bfa  mov bx, dx  [x1]
    c.b.x = (uint16_t)(c.dx_.x);
    // 41ce:0bfc  jne 0xc12  [x1]
    if (!c.zf) goto L428f2;
    c.notTranslated(0x428de, "fall-through");
L428f2:
    if (c.tracing) c.traceAt(0x428f2);
    // 41ce:0c12  mov word ptr [di + 2], 0xd7b2  [x1]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x2u), 0xd7b2u);
L428f7:
    if (c.tracing) c.traceAt(0x428f7);
    // 41ce:0c17  mov word ptr [di + 0x14], ax  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x14u), c.a.x);
    // 41ce:0c1a  mov word ptr [di + 0x16], dx  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x16u), c.dx_.x);
    // 41ce:0c1d  mov word ptr [di + 0x18], cx  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x18u), c.c.x);
    // 41ce:0c20  mov word ptr [di + 0x1a], bx  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1au), c.b.x);
    // 41ce:0c23  mov word ptr [di + 0x1c], 0x6e3  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1cu), 0x6e3u);
    // 41ce:0c28  mov word ptr [di + 0x1e], 0x41ce  [x2]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0x1eu), 0x41ceu);
    // 41ce:0c2d  xor ax, ax  [x2]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:0c2f  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 41ce:0c30  retf 4  [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 4); return;
L42971:
    if (c.tracing) c.traceAt(0x42971);
    // 41ce:0c91  or cl, cl  [x3072]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) | (c.c.l), true));
    // 41ce:0c93  je 0xd10  [x3072]
    if (c.zf) goto L429f0;
L42975:
    if (c.tracing) c.traceAt(0x42975);
    // 41ce:0c95  or al, al  [x2880]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 41ce:0c97  je 0xd11  [x2880]
    if (c.zf) { t = 0x429f1u; goto dispatch; }
L42979:
    if (c.tracing) c.traceAt(0x42979);
    // 41ce:0c99  cmp al, cl  [x2880]
    c.sub<8>(c.a.l, c.c.l, true);
    // 41ce:0c9b  jbe 0xca2  [x2880]
    if ((c.cf || c.zf)) goto L42982;
L4297d:
    if (c.tracing) c.traceAt(0x4297d);
    // 41ce:0c9d  xchg cx, ax  [x2181]
    { const uint32_t t0 = c.c.x; c.c.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 41ce:0c9e  xchg si, bx  [x2181]
    { const uint32_t t0 = c.si.x; c.si.x = (uint16_t)(c.b.x); c.b.x = (uint16_t)(t0); }
    // 41ce:0ca0  xchg di, dx  [x2181]
    { const uint32_t t0 = c.di.x; c.di.x = (uint16_t)(c.dx_.x); c.dx_.x = (uint16_t)(t0); }
L42982:
    if (c.tracing) c.traceAt(0x42982);
    // 41ce:0ca2  sub al, cl  [x2880]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.c.l, false));
    // 41ce:0ca4  neg al  [x2880]
    c.a.l = (uint8_t)(c.neg<8>(c.a.l, false));
    // 41ce:0ca6  cmp al, 0x29  [x2880]
    c.sub<8>(c.a.l, 0x29u, true);
    // 41ce:0ca8  jae 0xd11  [x2880]
    if (!c.cf) { t = 0x429f1u; goto dispatch; }
L4298a:
    if (c.tracing) c.traceAt(0x4298a);
    // 41ce:0caa  xchg cl, al  [x2880]
    { const uint32_t t0 = c.c.l; c.c.l = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 41ce:0cac  push bp  [x2880]
    c.push16(c.bp.x);
    // 41ce:0cad  push ax  [x2880]
    c.push16(c.a.x);
    // 41ce:0cae  mov ah, dh  [x2880]
    c.a.h = (uint8_t)(c.dx_.h);
    // 41ce:0cb0  and ah, 0x80  [x2880]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (0x80u), false));
    // 41ce:0cb3  mov bp, ax  [x2880]
    c.bp.x = (uint16_t)(c.a.x);
    // 41ce:0cb5  xor ax, di  [x2880]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.di.x), true));
    // 41ce:0cb7  pop ax  [x2880]
    { const uint32_t t0 = c.pop16(); c.a.x = (uint16_t)(t0); }
    // 41ce:0cb8  pushf   [x2880]
    c.push16(c.flags());
    // 41ce:0cb9  mov al, 0  [x2880]
    c.a.l = (uint8_t)(0x0u);
    // 41ce:0cbb  or dh, 0x80  [x2880]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (0x80u), false));
    // 41ce:0cbe  or di, 0x8000  [x2880]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) | (0x8000u), false));
    // 41ce:0cc2  cmp cl, 8  [x2880]
    c.sub<8>(c.c.l, 0x8u, true);
    // 41ce:0cc5  jb 0xcd8  [x2880]
    if (c.cf) goto L429b8;
    c.notTranslated(0x429a7, "fall-through");
L429b8:
    if (c.tracing) c.traceAt(0x429b8);
    // 41ce:0cd8  or cl, cl  [x2880]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) | (c.c.l), true));
    // 41ce:0cda  je 0xce6  [x2880]
    if (c.zf) goto L429c6;
L429bc:
    if (c.tracing) c.traceAt(0x429bc);
    // 41ce:0cdc  shr dx, 1  [x4188]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 41ce:0cde  rcr bx, 1  [x4188]
    c.b.x = (uint16_t)(c.rcr<16>(c.b.x, (int)((0x1u) & 31)));
    // 41ce:0ce0  rcr ax, 1  [x4188]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 41ce:0ce2  dec cl  [x4188]
    c.c.l = (uint8_t)(c.dec<8>(c.c.l, true));
    // 41ce:0ce4  jne 0xcdc  [x4188]
    if (!c.zf) goto L429bc;
L429c6:
    if (c.tracing) c.traceAt(0x429c6);
    // 41ce:0ce6  popf   [x2880]
    c.ip = 0xce7u; c.d32 = false; c.setFlags((uint16_t)c.pop16());
L429c7:
    if (c.tracing) c.traceAt(0x429c7);
    // 41ce:0ce7  js 0xd20  [x2880]
    if (c.sf) goto L42a00;
    c.notTranslated(0x429c9, "fall-through");
L429de:
    if (c.tracing) c.traceAt(0x429de);
    // 41ce:0cfe  add ax, 0x80  [x2835]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, true));
    // 41ce:0d01  adc bx, 0  [x2835]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x0u, true, c.cf));
    // 41ce:0d04  adc dx, 0  [x2835]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, true, c.cf));
    // 41ce:0d07  jb 0xd18  [x2835]
    if (c.cf) { t = 0x429f8u; goto dispatch; }
L429e9:
    if (c.tracing) c.traceAt(0x429e9);
    // 41ce:0d09  mov al, cl  [x2835]
    c.a.l = (uint8_t)(c.c.l);
    // 41ce:0d0b  and dh, 0x7f  [x2835]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) & (0x7fu), false));
    // 41ce:0d0e  or dh, ch  [x2835]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (c.c.h), true));
L429f0:
    if (c.tracing) c.traceAt(0x429f0);
    // 41ce:0d10  ret   [x3072]
    c.ip = c.pop16(); return;
L42a00:
    if (c.tracing) c.traceAt(0x42a00);
    // 41ce:0d20  sub ax, cx  [x2880]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.c.x, true));
    // 41ce:0d22  sbb bx, si  [x2880]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.si.x, true, c.cf));
    // 41ce:0d24  sbb dx, di  [x2880]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.di.x, true, c.cf));
    // 41ce:0d26  mov cx, bp  [x2880]
    c.c.x = (uint16_t)(c.bp.x);
    // 41ce:0d28  pop bp  [x2880]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:0d29  jae 0xd3b  [x2880]
    if (!c.cf) goto L42a1b;
L42a0b:
    if (c.tracing) c.traceAt(0x42a0b);
    // 41ce:0d2b  not dx  [x2181]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 41ce:0d2d  not bx  [x2181]
    c.b.x = (uint16_t)(~(c.b.x));
    // 41ce:0d2f  neg ax  [x2181]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
    // 41ce:0d31  cmc   [x2181]
    c.cf = !c.cf;
    // 41ce:0d32  adc bx, 0  [x2181]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x0u, true, c.cf));
    // 41ce:0d35  adc dx, 0  [x2181]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, false, c.cf));
    // 41ce:0d38  xor ch, 0x80  [x2181]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (0x80u), true));
L42a1b:
    if (c.tracing) c.traceAt(0x42a1b);
    // 41ce:0d3b  mov di, dx  [x2880]
    c.di.x = (uint16_t)(c.dx_.x);
    // 41ce:0d3d  or di, bx  [x2880]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) | (c.b.x), false));
    // 41ce:0d3f  or di, ax  [x2880]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) | (c.a.x), true));
    // 41ce:0d41  je 0xd10  [x2880]
    if (c.zf) goto L429f0;
L42a23:
    if (c.tracing) c.traceAt(0x42a23);
    // 41ce:0d43  or dh, dh  [x7023]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (c.dx_.h), true));
    // 41ce:0d45  js 0xcfe  [x7023]
    if (c.sf) goto L429de;
L42a27:
    if (c.tracing) c.traceAt(0x42a27);
    // 41ce:0d47  shl ax, 1  [x4188]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 41ce:0d49  rcl bx, 1  [x4188]
    c.b.x = (uint16_t)(c.rcl<16>(c.b.x, (int)((0x1u) & 31)));
    // 41ce:0d4b  rcl dx, 1  [x4188]
    c.dx_.x = (uint16_t)(c.rcl<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 41ce:0d4d  dec cl  [x4188]
    c.c.l = (uint8_t)(c.dec<8>(c.c.l, true));
    // 41ce:0d4f  jne 0xd43  [x4188]
    if (!c.zf) goto L42a23;
L42a31:
    if (c.tracing) c.traceAt(0x42a31);
    // 41ce:0d51  jmp 0xe50  [x192]
    goto L42b30;
L42a34:
    if (c.tracing) c.traceAt(0x42a34);
    // 41ce:0d54  or al, al  [x3072]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 41ce:0d56  je 0xd51  [x3072]
    if (c.zf) goto L42a31;
L42a38:
    if (c.tracing) c.traceAt(0x42a38);
    // 41ce:0d58  or cl, cl  [x2880]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) | (c.c.l), true));
    // 41ce:0d5a  je 0xd51  [x2880]
    if (c.zf) goto L42a31;
L42a3c:
    if (c.tracing) c.traceAt(0x42a3c);
    // 41ce:0d5c  push bp  [x2880]
    c.push16(c.bp.x);
    // 41ce:0d5d  mov bp, dx  [x2880]
    c.bp.x = (uint16_t)(c.dx_.x);
    // 41ce:0d5f  xor dx, di  [x2880]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.di.x), false));
    // 41ce:0d61  and dx, 0x8000  [x2880]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) & (0x8000u), false));
    // 41ce:0d65  xchg al, dl  [x2880]
    { const uint32_t t0 = c.a.l; c.a.l = (uint8_t)(c.dx_.l); c.dx_.l = (uint8_t)(t0); }
    // 41ce:0d67  add dl, cl  [x2880]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.c.l, true));
    // 41ce:0d69  adc dh, al  [x2880]
    c.dx_.h = (uint8_t)(c.add<8>(c.dx_.h, c.a.l, false, c.cf));
    // 41ce:0d6b  mov cl, al  [x2880]
    c.c.l = (uint8_t)(c.a.l);
    // 41ce:0d6d  or bp, 0x8000  [x2880]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) | (0x8000u), false));
    // 41ce:0d71  or di, 0x8000  [x2880]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) | (0x8000u), false));
    // 41ce:0d75  push dx  [x2880]
    c.push16(c.dx_.x);
    // 41ce:0d76  or ah, ah  [x2880]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) | (c.a.h), true));
    // 41ce:0d78  jne 0xd7e  [x2880]
    if (!c.zf) { t = 0x42a5eu; goto dispatch; }
L42a5a:
    if (c.tracing) c.traceAt(0x42a5a);
    // 41ce:0d7a  or bx, bx  [x2880]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) | (c.b.x), true));
    // 41ce:0d7c  je 0xd8b  [x2880]
    if (c.zf) goto L42a6b;
    c.notTranslated(0x42a5e, "fall-through");
L42a6b:
    if (c.tracing) c.traceAt(0x42a6b);
    // 41ce:0d8b  mov ax, cx  [x2880]
    c.a.x = (uint16_t)(c.c.x);
    // 41ce:0d8d  mul bp  [x2880]
    c.mul16(c.bp.x);
    // 41ce:0d8f  mov bx, dx  [x2880]
    c.b.x = (uint16_t)(c.dx_.x);
    // 41ce:0d91  mov ax, si  [x2880]
    c.a.x = (uint16_t)(c.si.x);
    // 41ce:0d93  mul bp  [x2880]
    c.mul16(c.bp.x);
    // 41ce:0d95  add bx, ax  [x2880]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, true));
    // 41ce:0d97  adc dx, 0  [x2880]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, false, c.cf));
    // 41ce:0d9a  mov cx, dx  [x2880]
    c.c.x = (uint16_t)(c.dx_.x);
    // 41ce:0d9c  mov ax, di  [x2880]
    c.a.x = (uint16_t)(c.di.x);
    // 41ce:0d9e  mul bp  [x2880]
    c.mul16(c.bp.x);
    // 41ce:0da0  add ax, cx  [x2880]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.c.x, true));
    // 41ce:0da2  adc dx, 0  [x2880]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, true, c.cf));
    // 41ce:0da5  jmp 0xe23  [x2880]
    goto L42b03;
L42b03:
    if (c.tracing) c.traceAt(0x42b03);
    // 41ce:0e23  xchg bx, ax  [x2880]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 41ce:0e24  pop cx  [x2880]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41ce:0e25  pop bp  [x2880]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:0e26  or dh, dh  [x2880]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (c.dx_.h), true));
    // 41ce:0e28  js 0xe31  [x2880]
    if (c.sf) goto L42b11;
L42b0a:
    if (c.tracing) c.traceAt(0x42b0a);
    // 41ce:0e2a  shl ax, 1  [x1668]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 41ce:0e2c  rcl bx, 1  [x1668]
    c.b.x = (uint16_t)(c.rcl<16>(c.b.x, (int)((0x1u) & 31)));
    // 41ce:0e2e  rcl dx, 1  [x1668]
    c.dx_.x = (uint16_t)(c.rcl<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 41ce:0e30  dec cx  [x1668]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
L42b11:
    if (c.tracing) c.traceAt(0x42b11);
    // 41ce:0e31  sub cx, 0x8081  [x2880]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, 0x8081u, true));
L42b15:
    if (c.tracing) c.traceAt(0x42b15);
    // 41ce:0e35  add ax, 0x80  [x5760]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x80u, true));
    // 41ce:0e38  adc bx, 0  [x5760]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x0u, true, c.cf));
    // 41ce:0e3b  adc dx, 0  [x5760]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, true, c.cf));
    // 41ce:0e3e  jae 0xe43  [x5760]
    if (!c.cf) goto L42b23;
    c.notTranslated(0x42b20, "fall-through");
L42b23:
    if (c.tracing) c.traceAt(0x42b23);
    // 41ce:0e43  test ch, 0x40  [x5760]
    c.logic<8>((c.c.h) & (0x40u), true);
    // 41ce:0e46  jne 0xe50  [x5760]
    if (!c.zf) goto L42b30;
L42b28:
    if (c.tracing) c.traceAt(0x42b28);
    // 41ce:0e48  inc cx  [x5760]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 41ce:0e49  mov al, cl  [x5760]
    c.a.l = (uint8_t)(c.c.l);
    // 41ce:0e4b  xor dh, ch  [x5760]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.c.h), false));
    // 41ce:0e4d  shr ch, 1  [x5760]
    c.c.h = (uint8_t)(c.shr<8>(c.c.h, (int)((0x1u) & 31), true));
    // 41ce:0e4f  ret   [x5760]
    c.ip = c.pop16(); return;
L42b30:
    if (c.tracing) c.traceAt(0x42b30);
    // 41ce:0e50  xor ax, ax  [x384]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:0e52  mov bx, ax  [x384]
    c.b.x = (uint16_t)(c.a.x);
    // 41ce:0e54  mov dx, ax  [x384]
    c.dx_.x = (uint16_t)(c.a.x);
    // 41ce:0e56  ret   [x384]
    c.ip = c.pop16(); return;
L42b37:
    if (c.tracing) c.traceAt(0x42b37);
    // 41ce:0e57  or al, al  [x3072]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.a.l), true));
    // 41ce:0e59  je 0xe50  [x3072]
    if (c.zf) goto L42b30;
L42b3b:
    if (c.tracing) c.traceAt(0x42b3b);
    // 41ce:0e5b  push bp  [x2880]
    c.push16(c.bp.x);
    // 41ce:0e5c  mov bp, dx  [x2880]
    c.bp.x = (uint16_t)(c.dx_.x);
    // 41ce:0e5e  xor dx, di  [x2880]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.di.x), false));
    // 41ce:0e60  or di, 0x8000  [x2880]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) | (0x8000u), false));
    // 41ce:0e64  or bp, 0x8000  [x2880]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) | (0x8000u), false));
    // 41ce:0e68  and dx, 0x8000  [x2880]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) & (0x8000u), false));
    // 41ce:0e6c  xchg dl, al  [x2880]
    { const uint32_t t0 = c.dx_.l; c.dx_.l = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 41ce:0e6e  sub dl, cl  [x2880]
    c.dx_.l = (uint8_t)(c.sub<8>(c.dx_.l, c.c.l, true));
    // 41ce:0e70  sbb dh, al  [x2880]
    c.dx_.h = (uint8_t)(c.sub<8>(c.dx_.h, c.a.l, true, c.cf));
    // 41ce:0e72  push dx  [x2880]
    c.push16(c.dx_.x);
    // 41ce:0e73  mov al, 2  [x2880]
    c.a.l = (uint8_t)(0x2u);
    // 41ce:0e75  mov dx, 1  [x2880]
    c.dx_.x = (uint16_t)(0x1u);
L42b58:
    if (c.tracing) c.traceAt(0x42b58);
    // 41ce:0e78  cmp bp, di  [x120960]
    c.sub<16>(c.bp.x, c.di.x, true);
    // 41ce:0e7a  jne 0xe82  [x120960]
    if (!c.zf) goto L42b62;
L42b5c:
    if (c.tracing) c.traceAt(0x42b5c);
    // 41ce:0e7c  cmp bx, si  [x2880]
    c.sub<16>(c.b.x, c.si.x, true);
    // 41ce:0e7e  jne 0xe82  [x2880]
    if (!c.zf) goto L42b62;
L42b60:
    if (c.tracing) c.traceAt(0x42b60);
    // 41ce:0e80  cmp ah, ch  [x2880]
    c.sub<8>(c.a.h, c.c.h, true);
L42b62:
    if (c.tracing) c.traceAt(0x42b62);
    // 41ce:0e82  jb 0xe8a  [x120960]
    if (c.cf) goto L42b6a;
L42b64:
    if (c.tracing) c.traceAt(0x42b64);
    // 41ce:0e84  sub ah, ch  [x6144]
    c.a.h = (uint8_t)(c.sub<8>(c.a.h, c.c.h, true));
    // 41ce:0e86  sbb bx, si  [x6144]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.si.x, true, c.cf));
    // 41ce:0e88  sbb bp, di  [x6144]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, c.di.x, true, c.cf));
L42b6a:
    if (c.tracing) c.traceAt(0x42b6a);
    // 41ce:0e8a  rcl dx, 1  [x120960]
    c.dx_.x = (uint16_t)(c.rcl<16>(c.dx_.x, (int)((0x1u) & 31)));
    // 41ce:0e8c  jb 0xe9f  [x120960]
    if (c.cf) goto L42b7f;
L42b6e:
    if (c.tracing) c.traceAt(0x42b6e);
    // 41ce:0e8e  shl ah, 1  [x118080]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x1u) & 31), true));
    // 41ce:0e90  rcl bx, 1  [x118080]
    c.b.x = (uint16_t)(c.rcl<16>(c.b.x, (int)((0x1u) & 31)));
    // 41ce:0e92  rcl bp, 1  [x118080]
    c.bp.x = (uint16_t)(c.rcl<16>(c.bp.x, (int)((0x1u) & 31)));
    // 41ce:0e94  jae 0xe78  [x118080]
    if (!c.cf) goto L42b58;
    c.notTranslated(0x42b76, "fall-through");
L42b7f:
    if (c.tracing) c.traceAt(0x42b7f);
    // 41ce:0e9f  dec al  [x8640]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, true));
    // 41ce:0ea1  js 0xead  [x8640]
    if (c.sf) goto L42b8d;
L42b83:
    if (c.tracing) c.traceAt(0x42b83);
    // 41ce:0ea3  push dx  [x5760]
    c.push16(c.dx_.x);
    // 41ce:0ea4  mov dx, 1  [x5760]
    c.dx_.x = (uint16_t)(0x1u);
    // 41ce:0ea7  jne 0xe8e  [x5760]
    if (!c.zf) goto L42b6e;
L42b89:
    if (c.tracing) c.traceAt(0x42b89);
    // 41ce:0ea9  mov dl, 0x40  [x2880]
    c.dx_.l = (uint8_t)(0x40u);
    // 41ce:0eab  jmp 0xe8e  [x2880]
    goto L42b6e;
L42b8d:
    if (c.tracing) c.traceAt(0x42b8d);
    // 41ce:0ead  mov ax, dx  [x2880]
    c.a.x = (uint16_t)(c.dx_.x);
    // 41ce:0eaf  mov cl, 6  [x2880]
    c.c.l = (uint8_t)(0x6u);
    // 41ce:0eb1  shl ax, cl  [x2880]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)(c.c.l & 31), false));
    // 41ce:0eb3  pop bx  [x2880]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 41ce:0eb4  pop dx  [x2880]
    { const uint32_t t0 = c.pop16(); c.dx_.x = (uint16_t)(t0); }
    // 41ce:0eb5  pop cx  [x2880]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 41ce:0eb6  pop bp  [x2880]
    { const uint32_t t0 = c.pop16(); c.bp.x = (uint16_t)(t0); }
    // 41ce:0eb7  not ax  [x2880]
    c.a.x = (uint16_t)(~(c.a.x));
    // 41ce:0eb9  not bx  [x2880]
    c.b.x = (uint16_t)(~(c.b.x));
    // 41ce:0ebb  xor dx, 0xffff  [x2880]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (0xffffu), true));
    // 41ce:0ebe  js 0xec7  [x2880]
    if (c.sf) goto L42ba7;
    c.notTranslated(0x42ba0, "fall-through");
L42ba7:
    if (c.tracing) c.traceAt(0x42ba7);
    // 41ce:0ec7  add cx, 0x8080  [x2880]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x8080u, true));
    // 41ce:0ecb  jmp 0xe35  [x2880]
    goto L42b15;
L42bd8:
    if (c.tracing) c.traceAt(0x42bd8);
    // 41ce:0ef8  mov bx, ax  [x9216]
    c.b.x = (uint16_t)(c.a.x);
    // 41ce:0efa  or bx, dx  [x9216]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) | (c.dx_.x), true));
    // 41ce:0efc  je 0xf33  [x9216]
    if (c.zf) goto L42c13;
L42bde:
    if (c.tracing) c.traceAt(0x42bde);
    // 41ce:0efe  mov ch, dh  [x8832]
    c.c.h = (uint8_t)(c.dx_.h);
    // 41ce:0f00  or dx, dx  [x8832]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 41ce:0f02  jns 0xf0b  [x8832]
    if (!c.sf) goto L42beb;
L42be4:
    if (c.tracing) c.traceAt(0x42be4);
    // 41ce:0f04  neg dx  [x2880]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 41ce:0f06  neg ax  [x2880]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
    // 41ce:0f08  sbb dx, 0  [x2880]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x0u, true, c.cf));
L42beb:
    if (c.tracing) c.traceAt(0x42beb);
    // 41ce:0f0b  mov bx, ax  [x8832]
    c.b.x = (uint16_t)(c.a.x);
    // 41ce:0f0d  mov ax, 0xa0  [x8832]
    c.a.x = (uint16_t)(0xa0u);
    // 41ce:0f10  or dx, dx  [x8832]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 41ce:0f12  jne 0xf20  [x8832]
    if (!c.zf) goto L42c00;
L42bf4:
    if (c.tracing) c.traceAt(0x42bf4);
    // 41ce:0f14  xchg bx, dx  [x8832]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.dx_.x); c.dx_.x = (uint16_t)(t0); }
    // 41ce:0f16  mov al, 0x90  [x8832]
    c.a.l = (uint8_t)(0x90u);
    // 41ce:0f18  or dh, dh  [x8832]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (c.dx_.h), true));
    // 41ce:0f1a  jne 0xf20  [x8832]
    if (!c.zf) goto L42c00;
L42bfc:
    if (c.tracing) c.traceAt(0x42bfc);
    // 41ce:0f1c  xchg dl, dh  [x8832]
    { const uint32_t t0 = c.dx_.l; c.dx_.l = (uint8_t)(c.dx_.h); c.dx_.h = (uint8_t)(t0); }
    // 41ce:0f1e  mov al, 0x88  [x8832]
    c.a.l = (uint8_t)(0x88u);
L42c00:
    if (c.tracing) c.traceAt(0x42c00);
    // 41ce:0f20  or dx, dx  [x8832]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) | (c.dx_.x), true));
    // 41ce:0f22  js 0xf2c  [x8832]
    if (c.sf) goto L42c0c;
L42c04:
    if (c.tracing) c.traceAt(0x42c04);
    // 41ce:0f24  dec al  [x24576]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, false));
    // 41ce:0f26  add bx, bx  [x24576]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, true));
    // 41ce:0f28  adc dx, dx  [x24576]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.dx_.x, true, c.cf));
    // 41ce:0f2a  jns 0xf24  [x24576]
    if (!c.sf) goto L42c04;
L42c0c:
    if (c.tracing) c.traceAt(0x42c0c);
    // 41ce:0f2c  or ch, ch  [x8832]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) | (c.c.h), true));
    // 41ce:0f2e  js 0xf33  [x8832]
    if (c.sf) goto L42c13;
L42c10:
    if (c.tracing) c.traceAt(0x42c10);
    // 41ce:0f30  and dh, 0x7f  [x5952]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) & (0x7fu), true));
L42c13:
    if (c.tracing) c.traceAt(0x42c13);
    // 41ce:0f33  ret   [x9216]
    c.ip = c.pop16(); return;
L42c14:
    if (c.tracing) c.traceAt(0x42c14);
    // 41ce:0f34  xchg bx, ax  [x3072]
    { const uint32_t t0 = c.b.x; c.b.x = (uint16_t)(c.a.x); c.a.x = (uint16_t)(t0); }
    // 41ce:0f35  mov cl, 0xa0  [x3072]
    c.c.l = (uint8_t)(0xa0u);
    // 41ce:0f37  sub cl, bl  [x3072]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, c.b.l, true));
    // 41ce:0f39  jb 0xf96  [x3072]
    if (c.cf) goto L42c76;
L42c1b:
    if (c.tracing) c.traceAt(0x42c1b);
    // 41ce:0f3b  mov bl, dh  [x3072]
    c.b.l = (uint8_t)(c.dx_.h);
    // 41ce:0f3d  or dh, 0x80  [x3072]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) | (0x80u), false));
    // 41ce:0f40  cmp cl, 0x20  [x3072]
    c.sub<8>(c.c.l, 0x20u, true);
    // 41ce:0f43  jae 0xf97  [x3072]
    if (!c.cf) goto L42c77;
L42c25:
    if (c.tracing) c.traceAt(0x42c25);
    // 41ce:0f45  cmp cl, 0x10  [x2700]
    c.sub<8>(c.c.l, 0x10u, true);
    // 41ce:0f48  jb 0xf53  [x2700]
    if (c.cf) goto L42c33;
L42c2a:
    if (c.tracing) c.traceAt(0x42c2a);
    // 41ce:0f4a  mov bh, ah  [x2700]
    c.b.h = (uint8_t)(c.a.h);
    // 41ce:0f4c  mov ax, dx  [x2700]
    c.a.x = (uint16_t)(c.dx_.x);
    // 41ce:0f4e  xor dx, dx  [x2700]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 41ce:0f50  sub cl, 0x10  [x2700]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, 0x10u, false));
L42c33:
    if (c.tracing) c.traceAt(0x42c33);
    // 41ce:0f53  cmp cl, 8  [x2700]
    c.sub<8>(c.c.l, 0x8u, true);
    // 41ce:0f56  jb 0xf65  [x2700]
    if (c.cf) goto L42c45;
L42c38:
    if (c.tracing) c.traceAt(0x42c38);
    // 41ce:0f58  mov bh, al  [x2700]
    c.b.h = (uint8_t)(c.a.l);
    // 41ce:0f5a  mov al, ah  [x2700]
    c.a.l = (uint8_t)(c.a.h);
    // 41ce:0f5c  mov ah, dl  [x2700]
    c.a.h = (uint8_t)(c.dx_.l);
    // 41ce:0f5e  mov dl, dh  [x2700]
    c.dx_.l = (uint8_t)(c.dx_.h);
    // 41ce:0f60  xor dh, dh  [x2700]
    c.dx_.h = (uint8_t)(c.logic<8>((c.dx_.h) ^ (c.dx_.h), false));
    // 41ce:0f62  sub cl, 8  [x2700]
    c.c.l = (uint8_t)(c.sub<8>(c.c.l, 0x8u, false));
L42c45:
    if (c.tracing) c.traceAt(0x42c45);
    // 41ce:0f65  or cl, cl  [x2700]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) | (c.c.l), true));
    // 41ce:0f67  je 0xf73  [x2700]
    if (c.zf) goto L42c53;
L42c49:
    if (c.tracing) c.traceAt(0x42c49);
    // 41ce:0f69  shr dx, 1  [x10791]
    c.dx_.x = (uint16_t)(c.shr<16>(c.dx_.x, (int)((0x1u) & 31), true));
    // 41ce:0f6b  rcr ax, 1  [x10791]
    c.a.x = (uint16_t)(c.rcr<16>(c.a.x, (int)((0x1u) & 31)));
    // 41ce:0f6d  rcr bh, 1  [x10791]
    c.b.h = (uint8_t)(c.rcr<8>(c.b.h, (int)((0x1u) & 31)));
    // 41ce:0f6f  dec cl  [x10791]
    c.c.l = (uint8_t)(c.dec<8>(c.c.l, true));
    // 41ce:0f71  jne 0xf69  [x10791]
    if (!c.zf) goto L42c49;
L42c53:
    if (c.tracing) c.traceAt(0x42c53);
    // 41ce:0f73  or ch, ch  [x2787]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) | (c.c.h), true));
    // 41ce:0f75  je 0xf81  [x2787]
    if (c.zf) goto L42c61;
L42c57:
    if (c.tracing) c.traceAt(0x42c57);
    // 41ce:0f77  add bh, bh  [x2787]
    c.b.h = (uint8_t)(c.add<8>(c.b.h, c.b.h, true));
    // 41ce:0f79  adc ax, 0  [x2787]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x0u, true, c.cf));
    // 41ce:0f7c  adc dx, 0  [x2787]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, 0x0u, true, c.cf));
    // 41ce:0f7f  jb 0xf96  [x2787]
    if (c.cf) goto L42c76;
L42c61:
    if (c.tracing) c.traceAt(0x42c61);
    // 41ce:0f81  mov cx, ax  [x2787]
    c.c.x = (uint16_t)(c.a.x);
    // 41ce:0f83  or cx, dx  [x2787]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) | (c.dx_.x), true));
    // 41ce:0f85  je 0xf96  [x2787]
    if (c.zf) goto L42c76;
L42c67:
    if (c.tracing) c.traceAt(0x42c67);
    // 41ce:0f87  or bl, bl  [x2787]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) | (c.b.l), true));
    // 41ce:0f89  jns 0xf92  [x2787]
    if (!c.sf) goto L42c72;
    c.notTranslated(0x42c6b, "fall-through");
L42c72:
    if (c.tracing) c.traceAt(0x42c72);
    // 41ce:0f92  xor bl, dh  [x2787]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) ^ (c.dx_.h), false));
    // 41ce:0f94  add bl, bl  [x2787]
    c.b.l = (uint8_t)(c.add<8>(c.b.l, c.b.l, true));
L42c76:
    if (c.tracing) c.traceAt(0x42c76);
    // 41ce:0f96  ret   [x2787]
    c.ip = c.pop16(); return;
L42c77:
    if (c.tracing) c.traceAt(0x42c77);
    // 41ce:0f97  mov bh, dh  [x372]
    c.b.h = (uint8_t)(c.dx_.h);
    // 41ce:0f99  mov ax, 0  [x372]
    c.a.x = (uint16_t)(0x0u);
    // 41ce:0f9c  mov dx, 0  [x372]
    c.dx_.x = (uint16_t)(0x0u);
    // 41ce:0f9f  je 0xf73  [x372]
    if (c.zf) goto L42c53;
L42c81:
    if (c.tracing) c.traceAt(0x42c81);
    // 41ce:0fa1  ret   [x285]
    c.ip = c.pop16(); return;
L42c82:
    if (c.tracing) c.traceAt(0x42c82);
    // 41ce:0fa2  call 0xc91  [x3072]
    c.push16(0xfa5u); code_27(c, 0x42971u); if (c.ip != 0xfa5u) c.badReturn(0x42c82);
L42c85:
    if (c.tracing) c.traceAt(0x42c85);
    // 41ce:0fa5  jb 0xfe2  [x3072]
    if (c.cf) { t = 0x42cc2u; goto dispatch; }
L42c87:
    if (c.tracing) c.traceAt(0x42c87);
    // 41ce:0fa7  retf   [x3072]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42c94:
    if (c.tracing) c.traceAt(0x42c94);
    // 41ce:0fb4  call 0xd54  [x3072]
    c.push16(0xfb7u); code_27(c, 0x42a34u); if (c.ip != 0xfb7u) c.badReturn(0x42c94);
L42c97:
    if (c.tracing) c.traceAt(0x42c97);
    // 41ce:0fb7  jb 0xfe2  [x3072]
    if (c.cf) { t = 0x42cc2u; goto dispatch; }
L42c99:
    if (c.tracing) c.traceAt(0x42c99);
    // 41ce:0fb9  retf   [x3072]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42c9a:
    if (c.tracing) c.traceAt(0x42c9a);
    // 41ce:0fba  or cl, cl  [x3072]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) | (c.c.l), true));
    // 41ce:0fbc  je 0xfe8  [x3072]
    if (c.zf) { t = 0x42cc8u; goto dispatch; }
L42c9e:
    if (c.tracing) c.traceAt(0x42c9e);
    // 41ce:0fbe  call 0xe57  [x3072]
    c.push16(0xfc1u); code_27(c, 0x42b37u); if (c.ip != 0xfc1u) c.badReturn(0x42c9e);
L42ca1:
    if (c.tracing) c.traceAt(0x42ca1);
    // 41ce:0fc1  jb 0xfe2  [x3072]
    if (c.cf) { t = 0x42cc2u; goto dispatch; }
L42ca3:
    if (c.tracing) c.traceAt(0x42ca3);
    // 41ce:0fc3  retf   [x3072]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42ca8:
    if (c.tracing) c.traceAt(0x42ca8);
    // 41ce:0fc8  call 0xef8  [x9216]
    c.push16(0xfcbu); code_27(c, 0x42bd8u); if (c.ip != 0xfcbu) c.badReturn(0x42ca8);
L42cab:
    if (c.tracing) c.traceAt(0x42cab);
    // 41ce:0fcb  retf   [x9216]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42cb4:
    if (c.tracing) c.traceAt(0x42cb4);
    // 41ce:0fd4  mov ch, 1  [x3072]
    c.c.h = (uint8_t)(0x1u);
    // 41ce:0fd6  call 0xf34  [x3072]
    c.push16(0xfd9u); code_27(c, 0x42c14u); if (c.ip != 0xfd9u) c.badReturn(0x42cb6);
L42cb9:
    if (c.tracing) c.traceAt(0x42cb9);
    // 41ce:0fd9  jb 0xfdc  [x3072]
    if (c.cf) { t = 0x42cbcu; goto dispatch; }
L42cbb:
    if (c.tracing) c.traceAt(0x42cbb);
    // 41ce:0fdb  retf   [x3072]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L42db1:
    if (c.tracing) c.traceAt(0x42db1);
    // 41ce:10d1  mov bx, sp  [x370440]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:10d3  mov dx, ds  [x370440]
    c.dx_.x = (uint16_t)(c.ds);
    // 41ce:10d5  lds si, ptr ss:[bx + 0xa]  [x370440]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0xau)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0xau) + 2); c.si.x = (uint16_t)(t0); c.loadDs(t1); }
    // 41ce:10d9  les di, ptr ss:[bx + 6]  [x370440]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x6u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x6u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:10dd  mov cx, word ptr ss:[bx + 4]  [x370440]
    c.c.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.b.x + 0x4u)));
    // 41ce:10e1  cld   [x370440]
    c.df = false;
    // 41ce:10e2  cmp si, di  [x370440]
    c.sub<16>(c.si.x, c.di.x, true);
    // 41ce:10e4  jae 0x10ed  [x370440]
    if (!c.cf) goto L42dcd;
L42dc6:
    if (c.tracing) c.traceAt(0x42dc6);
    // 41ce:10e6  add si, cx  [x252688]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.c.x, false));
    // 41ce:10e8  add di, cx  [x252688]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.c.x, true));
    // 41ce:10ea  dec si  [x252688]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, false));
    // 41ce:10eb  dec di  [x252688]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 41ce:10ec  std   [x252688]
    c.df = true;
L42dcd:
    if (c.tracing) c.traceAt(0x42dcd);
    // 41ce:10ed  rep movsb byte ptr es:[di], byte ptr [si]  [x2593080]
    c.ip = 0x10efu; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L42dcf:
    if (c.tracing) c.traceAt(0x42dcf);
    // 41ce:10ef  cld   [x370440]
    c.df = false;
    // 41ce:10f0  mov ds, dx  [x370440]
    c.loadDs(c.dx_.x);
    // 41ce:10f2  retf 0xa  [x370440]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 10); return;
L42dd5:
    if (c.tracing) c.traceAt(0x42dd5);
    // 41ce:10f5  mov bx, sp  [x14304]
    c.b.x = (uint16_t)(c.sp.x);
    // 41ce:10f7  les di, ptr ss:[bx + 8]  [x14304]
    { const uint32_t t0 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x8u)); const uint16_t t1 = c.r16(c.ssb + (uint16_t)(c.b.x + 0x8u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 41ce:10fb  mov cx, word ptr ss:[bx + 6]  [x14304]
    c.c.x = (uint16_t)(c.r16(c.ssb + (uint16_t)(c.b.x + 0x6u)));
    // 41ce:10ff  mov al, byte ptr ss:[bx + 4]  [x14304]
    c.a.l = (uint8_t)(c.r8(c.ssb + (uint16_t)(c.b.x + 0x4u)));
    // 41ce:1103  cld   [x14304]
    c.df = false;
L42de4:
    if (c.tracing) c.traceAt(0x42de4);
    // 41ce:1104  rep stosb byte ptr es:[di], al  [x1158624]
    c.stos<8, false>(1);
L42de6:
    if (c.tracing) c.traceAt(0x42de6);
    // 41ce:1106  retf 8  [x14304]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); c.sp.x = (uint16_t)(c.sp.x + 8); return;
L42de9:
    if (c.tracing) c.traceAt(0x42de9);
    // 41ce:1109  mov di, 0x1e9c  [x1]
    c.di.x = (uint16_t)(0x1e9cu);
    // 41ce:110c  push ds  [x1]
    c.push16(c.ds);
    // 41ce:110d  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 41ce:110e  mov cx, 0x34c0  [x1]
    c.c.x = (uint16_t)(0x34c0u);
    // 41ce:1111  sub cx, di  [x1]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, false));
    // 41ce:1113  shr cx, 1  [x1]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), false));
    // 41ce:1115  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 41ce:1117  cld   [x1]
    c.df = false;
L42df8:
    if (c.tracing) c.traceAt(0x42df8);
    // 41ce:1118  rep stosw word ptr es:[di], ax  [x2835]
    c.stos<16, false>(1);
L42dfa:
    if (c.tracing) c.traceAt(0x42dfa);
    // 41ce:111a  ret   [x1]
    c.ip = c.pop16(); return;
}

static Register reg27(27, {0x24f10, 0x24f14, 0x24f16, 0x24f1b, 0x24f1c, 0x24f27, 0x24f53, 0x24f5e, 0x24f63, 0x24f6d, 0x24f76, 0x24f7a, 0x24f7f, 0x24f80, 0x24f8a, 0x24fa4, 0x24fa5, 0x24fa8, 0x24fb2, 0x24fb5, 0x24fe0, 0x24fea, 0x24ff1, 0x24ffb, 0x25010, 0x25012, 0x2501c, 0x25026, 0x251d7, 0x251e2, 0x251ea, 0x2521c, 0x25237, 0x25247, 0x2524a, 0x2524f, 0x25253, 0x25297, 0x252cd, 0x25307, 0x2530c, 0x25342, 0x2537c, 0x25381, 0x253b7, 0x253f1, 0x253f6, 0x2542c, 0x25466, 0x25473, 0x25476, 0x25480, 0x2548f, 0x25496, 0x2549d, 0x254ae, 0x254b6, 0x254ba, 0x254c1, 0x254c4, 0x254cc, 0x254d2, 0x254da, 0x254df, 0x254e6, 0x254e9, 0x254ed, 0x254f2, 0x254fd, 0x25507, 0x2550f, 0x25517, 0x25526, 0x25535, 0x25544, 0x25559, 0x2555d, 0x25565, 0x25569, 0x25572, 0x2558b, 0x25597, 0x2559f, 0x255b3, 0x255bb, 0x255c0, 0x255d7, 0x255e2, 0x255e5, 0x25606, 0x25608, 0x25644, 0x2564c, 0x2564f, 0x25656, 0x2565a, 0x256b0, 0x256cd, 0x256da, 0x256df, 0x256e3, 0x25710, 0x2572f, 0x25732, 0x25744, 0x25748, 0x25756, 0x257b0, 0x257ba, 0x41ce0, 0x41cee, 0x41cf1, 0x41d33, 0x41d3a, 0x41d44, 0x41d4f, 0x41d57, 0x41d5f, 0x41d67, 0x41d78, 0x41d7c, 0x41d8c, 0x41d90, 0x41d91, 0x41d9a, 0x41da4, 0x41daa, 0x41db1, 0x41db2, 0x41db6, 0x41df6, 0x41e00, 0x41e03, 0x41e46, 0x41e6b, 0x41e74, 0x41e7d, 0x41e87, 0x41e91, 0x41e97, 0x41ec9, 0x41f6a, 0x41f73, 0x41f76, 0x42033, 0x42037, 0x4203d, 0x420b2, 0x420cb, 0x420e6, 0x421bc, 0x42210, 0x42215, 0x42219, 0x42221, 0x42229, 0x4225b, 0x4225d, 0x42264, 0x42269, 0x42275, 0x422a7, 0x422ac, 0x422b4, 0x422c3, 0x422c8, 0x422dd, 0x422f1, 0x422f9, 0x42301, 0x42311, 0x42321, 0x42328, 0x42329, 0x4232d, 0x42333, 0x42339, 0x4233d, 0x42344, 0x4234b, 0x423a3, 0x423bb, 0x423bd, 0x423bf, 0x423c3, 0x423d7, 0x42689, 0x426a1, 0x426a6, 0x426a8, 0x42886, 0x4289b, 0x428a6, 0x428a8, 0x428b7, 0x428c8, 0x428cf, 0x428f2, 0x428f7, 0x42971, 0x42975, 0x42979, 0x4297d, 0x42982, 0x4298a, 0x429b8, 0x429bc, 0x429c6, 0x429c7, 0x429de, 0x429e9, 0x429f0, 0x42a00, 0x42a0b, 0x42a1b, 0x42a23, 0x42a27, 0x42a31, 0x42a34, 0x42a38, 0x42a3c, 0x42a5a, 0x42a6b, 0x42b03, 0x42b0a, 0x42b11, 0x42b15, 0x42b23, 0x42b28, 0x42b30, 0x42b37, 0x42b3b, 0x42b58, 0x42b5c, 0x42b60, 0x42b62, 0x42b64, 0x42b6a, 0x42b6e, 0x42b7f, 0x42b83, 0x42b89, 0x42b8d, 0x42ba7, 0x42bd8, 0x42bde, 0x42be4, 0x42beb, 0x42bf4, 0x42bfc, 0x42c00, 0x42c04, 0x42c0c, 0x42c10, 0x42c13, 0x42c14, 0x42c1b, 0x42c25, 0x42c2a, 0x42c33, 0x42c38, 0x42c45, 0x42c49, 0x42c53, 0x42c57, 0x42c61, 0x42c67, 0x42c72, 0x42c76, 0x42c77, 0x42c81, 0x42c82, 0x42c85, 0x42c87, 0x42c94, 0x42c97, 0x42c99, 0x42c9a, 0x42c9e, 0x42ca1, 0x42ca3, 0x42ca8, 0x42cab, 0x42cb4, 0x42cb9, 0x42cbb, 0x42db1, 0x42dc6, 0x42dcd, 0x42dcf, 0x42dd5, 0x42de4, 0x42de6, 0x42de9, 0x42df8, 0x42dfa}, code_27);

}  // namespace angel
