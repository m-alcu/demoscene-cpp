// Program 6, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_6(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x2cf20: goto L2cf20;
    case 0x2cf24: goto L2cf24;
    case 0x66930: goto L66930;
    case 0x6693a: goto L6693a;
    case 0x66963: goto L66963;
    case 0x6696f: goto L6696f;
    case 0x66976: goto L66976;
    case 0x66977: goto L66977;
    case 0x6697e: goto L6697e;
    case 0x6698c: goto L6698c;
    case 0x66996: goto L66996;
    case 0x669aa: goto L669aa;
    case 0x669b1: goto L669b1;
    case 0x669b2: goto L669b2;
    case 0x66bf9: goto L66bf9;
    case 0x66c02: goto L66c02;
    case 0x66c4f: goto L66c4f;
    case 0x66c53: goto L66c53;
    case 0x66c77: goto L66c77;
    case 0x66d14: goto L66d14;
    case 0x66d17: goto L66d17;
    case 0x66d98: goto L66d98;
    case 0x66db0: goto L66db0;
    case 0x66dc6: goto L66dc6;
    case 0x66de6: goto L66de6;
    case 0x66df0: goto L66df0;
    case 0x66e03: goto L66e03;
    case 0x66e28: goto L66e28;
    case 0x66e48: goto L66e48;
    case 0x66e52: goto L66e52;
    case 0x66e65: goto L66e65;
    case 0x66e8a: goto L66e8a;
    case 0x66e92: goto L66e92;
    case 0x66ead: goto L66ead;
    case 0x66ebb: goto L66ebb;
    case 0x66ec1: goto L66ec1;
    case 0x66ec3: goto L66ec3;
    case 0x66ec7: goto L66ec7;
    case 0x66ec9: goto L66ec9;
    case 0x66ece: goto L66ece;
    case 0x66ed0: goto L66ed0;
    case 0x66ef2: goto L66ef2;
    case 0x66eff: goto L66eff;
    case 0x66f1f: goto L66f1f;
    case 0x66f29: goto L66f29;
    case 0x66f3c: goto L66f3c;
    case 0x66f61: goto L66f61;
    case 0x66f68: goto L66f68;
    case 0x66f73: goto L66f73;
    case 0x66f93: goto L66f93;
    case 0x66f9d: goto L66f9d;
    case 0x66fb0: goto L66fb0;
    case 0x66fd5: goto L66fd5;
    case 0x66fe2: goto L66fe2;
    case 0x66fe3: goto L66fe3;
    case 0x66ff7: goto L66ff7;
    case 0x66ffa: goto L66ffa;
    case 0x66ffd: goto L66ffd;
    case 0x67009: goto L67009;
    case 0x6701b: goto L6701b;
    case 0x6701e: goto L6701e;
    case 0x67021: goto L67021;
    case 0x67029: goto L67029;
    case 0x6709e: goto L6709e;
    case 0x670b2: goto L670b2;
    case 0x670b7: goto L670b7;
    case 0x671be: goto L671be;
    case 0x671d9: goto L671d9;
    case 0x67218: goto L67218;
    case 0x67249: goto L67249;
    case 0x67287: goto L67287;
    case 0x6728b: goto L6728b;
    case 0x672bf: goto L672bf;
    case 0x672cd: goto L672cd;
    case 0x672d3: goto L672d3;
    case 0x672d8: goto L672d8;
    case 0x672db: goto L672db;
    case 0x672dd: goto L672dd;
    case 0x672ef: goto L672ef;
    case 0x672f6: goto L672f6;
    case 0x672fd: goto L672fd;
    case 0x67312: goto L67312;
    case 0x67327: goto L67327;
    case 0x67368: goto L67368;
    case 0x6736a: goto L6736a;
    case 0x67374: goto L67374;
    case 0x6737a: goto L6737a;
    case 0x6739c: goto L6739c;
    case 0x673af: goto L673af;
    case 0x673c7: goto L673c7;
    case 0x673c8: goto L673c8;
    case 0x673e4: goto L673e4;
    case 0x673f6: goto L673f6;
    case 0x673f8: goto L673f8;
    case 0x6745d: goto L6745d;
    case 0x67461: goto L67461;
    case 0x6746d: goto L6746d;
    case 0x67471: goto L67471;
    case 0x67475: goto L67475;
    case 0x67479: goto L67479;
    case 0x67484: goto L67484;
    case 0x6748b: goto L6748b;
    case 0x6748f: goto L6748f;
    case 0x67498: goto L67498;
    case 0x674a1: goto L674a1;
    case 0x674a2: goto L674a2;
    case 0x674a6: goto L674a6;
    case 0x674a8: goto L674a8;
    case 0x674aa: goto L674aa;
    case 0x674b7: goto L674b7;
    case 0x674d9: goto L674d9;
    case 0x674ed: goto L674ed;
    case 0x67511: goto L67511;
    case 0x6751b: goto L6751b;
    case 0x6757c: goto L6757c;
    case 0x6758f: goto L6758f;
    case 0x675aa: goto L675aa;
    case 0x675ad: goto L675ad;
    case 0x6760b: goto L6760b;
    case 0x6761f: goto L6761f;
    case 0x67632: goto L67632;
    case 0x67635: goto L67635;
    case 0x6763c: goto L6763c;
    case 0x67641: goto L67641;
    case 0x67647: goto L67647;
    case 0x6765e: goto L6765e;
    case 0x67660: goto L67660;
    case 0x6766c: goto L6766c;
    case 0x67672: goto L67672;
    case 0x67676: goto L67676;
    case 0x6767b: goto L6767b;
    case 0x67681: goto L67681;
    default: c.callLinear(t); return;
    }
L2cf20:
    if (c.tracing) c.traceAt(0x2cf20);
    // 2cf2:0000  mov dx, 0x3da  [x443]
    c.dx_.x = (uint16_t)(0x3dau);
    // 2cf2:0003  in al, dx  [x443]
    c.ip = 0x4u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L2cf24:
    if (c.tracing) c.traceAt(0x2cf24);
    // 2cf2:0004  mov dx, 0x3c0  [x531]
    c.dx_.x = (uint16_t)(0x3c0u);
    // 2cf2:0007  mov al, 0x31  [x531]
    c.a.l = (uint8_t)(0x31u);
    // 2cf2:0009  out dx, al  [x531]
    c.ip = 0xau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 2cf2:000a  mov al, bl  [x531]
    c.a.l = (uint8_t)(c.b.l);
    // 2cf2:000c  out dx, al  [x531]
    c.ip = 0xdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 2cf2:000d  retf   [x531]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66930:
    if (c.tracing) c.traceAt(0x66930);
    // 6693:0000  mov si, 0  [x2]
    c.si.x = (uint16_t)(0x0u);
    // 6693:0003  mov bp, 0x300  [x2]
    c.bp.x = (uint16_t)(0x300u);
    // 6693:0006  mov di, word ptr [0x12d0]  [x2]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12d0u)));
L6693a:
    if (c.tracing) c.traceAt(0x6693a);
    // 6693:000a  xor ax, ax  [x1536]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 6693:000c  xor cx, cx  [x1536]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 6693:000e  mov bx, word ptr [0x12ca]  [x1536]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12cau)));
    // 6693:0012  mov al, byte ptr [bx + si]  [x1536]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 6693:0014  mov bx, word ptr [0x12cc]  [x1536]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12ccu)));
    // 6693:0018  mov cl, byte ptr [bx + si]  [x1536]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 6693:001a  sub cx, ax  [x1536]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, false));
    // 6693:001c  mov ax, cx  [x1536]
    c.a.x = (uint16_t)(c.c.x);
    // 6693:001e  shl ax, 7  [x1536]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 6693:0021  cdq   [x1536]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 6693:0022  xor ch, ch  [x1536]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), false));
    // 6693:0024  mov cl, byte ptr [0x12c9]  [x1536]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x12c9u)));
    // 6693:0028  idiv cx  [x1536]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x28u); }   // #DE: int 0, then again
    // 6693:002a  mov word ptr [di], ax  [x1536]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 6693:002c  inc si  [x1536]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 6693:002d  add di, 2  [x1536]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 6693:0030  dec bp  [x1536]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 6693:0031  jne 0xa  [x1536]
    if (!c.zf) goto L6693a;
L66963:
    if (c.tracing) c.traceAt(0x66963);
    // 6693:0033  mov si, word ptr [0x12ca]  [x2]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12cau)));
    // 6693:0037  mov di, word ptr [0x12ce]  [x2]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12ceu)));
    // 6693:003b  mov cx, 0x300  [x2]
    c.c.x = (uint16_t)(0x300u);
    // 6693:003e  cld   [x2]
    c.df = false;
L6696f:
    if (c.tracing) c.traceAt(0x6696f);
    // 6693:003f  lodsb al, byte ptr [si]  [x1536]
    c.ip = 0x40u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 6693:0040  shl ax, 7  [x1536]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), true));
    // 6693:0043  stosw word ptr es:[di], ax  [x1536]
    c.stos<16, false>(0);
    // 6693:0044  loop 0x3f  [x1536]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6696f;
L66976:
    if (c.tracing) c.traceAt(0x66976);
    // 6693:0046  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66977:
    if (c.tracing) c.traceAt(0x66977);
    // 6693:0047  cmp byte ptr [0x12c7], 0  [x623]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x12c7u)), 0x0u, true);
    // 6693:004c  js 0x81  [x623]
    if (c.sf) goto L669b1;
L6697e:
    if (c.tracing) c.traceAt(0x6697e);
    // 6693:004e  mov si, word ptr [0x12d0]  [x211]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12d0u)));
    // 6693:0052  mov di, word ptr [0x12ce]  [x211]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12ceu)));
    // 6693:0056  mov cx, 0x300  [x211]
    c.c.x = (uint16_t)(0x300u);
    // 6693:0059  mov dx, 2  [x211]
    c.dx_.x = (uint16_t)(0x2u);
L6698c:
    if (c.tracing) c.traceAt(0x6698c);
    // 6693:005c  mov bx, word ptr [si]  [x162048]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 6693:005e  add word ptr [di], bx  [x162048]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x)), c.b.x, false));
    // 6693:0060  add di, dx  [x162048]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 6693:0062  add si, dx  [x162048]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, true));
    // 6693:0064  loop 0x5c  [x162048]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6698c;
L66996:
    if (c.tracing) c.traceAt(0x66996);
    // 6693:0066  mov dx, 0x3c7  [x211]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 6693:0069  mov al, 1  [x211]
    c.a.l = (uint8_t)(0x1u);
    // 6693:006b  out dx, al  [x211]
    c.ip = 0x6cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6693:006c  inc dx  [x211]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 6693:006d  xor al, al  [x211]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 6693:006f  out dx, al  [x211]
    c.ip = 0x70u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6693:0070  mov si, word ptr [0x12ce]  [x211]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12ceu)));
    // 6693:0074  mov cx, 0x300  [x211]
    c.c.x = (uint16_t)(0x300u);
    // 6693:0077  mov dx, 0x3c9  [x211]
    c.dx_.x = (uint16_t)(0x3c9u);
L669aa:
    if (c.tracing) c.traceAt(0x669aa);
    // 6693:007a  lodsw ax, word ptr [si]  [x162048]
    c.ip = 0x7bu; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 6693:007b  sar ax, 7  [x162048]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), true));
    // 6693:007e  out dx, al  [x162048]
    c.ip = 0x7fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6693:007f  loop 0x7a  [x162048]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L669aa;
L669b1:
    if (c.tracing) c.traceAt(0x669b1);
    // 6693:0081  retf   [x623]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L669b2:
    if (c.tracing) c.traceAt(0x669b2);
    // 6693:0082  mov ax, 0x24f1  [x443]
    c.a.x = (uint16_t)(0x24f1u);
    // 6693:0085  mov es, ax  [x443]
    c.loadEs(c.a.x);
    // 6693:0087  mov ebx, dword ptr [0x7d]  [x443]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7du)));
    // 6693:008c  mov edi, dword ptr [0x81]  [x443]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x81u)));
    // 6693:0091  add ebx, ebx  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6693:0094  add edi, edi  [x443]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 6693:0097  mov ebp, ebx  [x443]
    c.bp.e = (uint32_t)(c.b.e);
    // 6693:009a  add ebx, edi  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 6693:009d  sub ebp, edi  [x443]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 6693:00a0  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:00aa  add eax, dword ptr es:[ebp*2 + 0x3000]  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6693:00b4  sar eax, 1  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6693:00b7  mov dword ptr [0x59], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x59u), c.a.e);
    // 6693:00bb  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:00c5  add eax, dword ptr es:[ebp*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6693:00cf  sar eax, 1  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6693:00d2  mov dword ptr [0x5d], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x5du), c.a.e);
    // 6693:00d6  mov ebx, edi  [x443]
    c.b.e = (uint32_t)(c.di.e);
    // 6693:00d9  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:00e3  mov dword ptr [0x61], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x61u), c.a.e);
    // 6693:00e7  mov ebp, dword ptr [0x85]  [x443]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x85u)));
    // 6693:00ec  add ebp, ebp  [x443]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6693:00ef  mov eax, ebx  [x443]
    c.a.e = (uint32_t)(c.b.e);
    // 6693:00f2  sub ebx, ebp  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 6693:00f5  add ebp, eax  [x443]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6693:00f8  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:0102  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6693:010c  sar eax, 1  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6693:010f  mov dword ptr [0x6d], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x6du), c.a.e);
    // 6693:0113  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:011d  add eax, dword ptr es:[ebp*2 + 0x3000]  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6693:0127  sar eax, 1  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6693:012a  mov dword ptr [0x79], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x79u), c.a.e);
    // 6693:012e  mov ebx, dword ptr [0x7d]  [x443]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7du)));
    // 6693:0133  add ebx, dword ptr [0x81]  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x81u)), false));
    // 6693:0138  sub ebx, dword ptr [0x85]  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x85u)), false));
    // 6693:013d  add ebx, ebx  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6693:0140  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:014a  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:0154  mov edx, ecx  [x443]
    c.dx_.e = (uint32_t)(c.c.e);
    // 6693:0157  neg edx  [x443]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 6693:015a  mov edi, eax  [x443]
    c.di.e = (uint32_t)(c.a.e);
    // 6693:015d  mov esi, dword ptr [0x85]  [x443]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x85u)));
    // 6693:0162  add esi, esi  [x443]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6693:0165  add ebx, esi  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6693:0168  add ebx, esi  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 6693:016b  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:0175  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:017f  sub eax, esi  [x443]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:0182  sub ecx, ebp  [x443]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6693:0185  sub edx, ebp  [x443]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 6693:0188  add edi, esi  [x443]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 6693:018b  mov esi, dword ptr [0x81]  [x443]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x81u)));
    // 6693:0190  add esi, esi  [x443]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6693:0193  sub ebx, esi  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6693:0196  sub ebx, esi  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6693:0199  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:01a3  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:01ad  add eax, esi  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 6693:01b0  add ecx, ebp  [x443]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 6693:01b3  add edx, ebp  [x443]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6693:01b6  sub edi, esi  [x443]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6693:01b9  mov esi, dword ptr [0x85]  [x443]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x85u)));
    // 6693:01be  add esi, esi  [x443]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 6693:01c1  sub ebx, esi  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6693:01c4  sub ebx, esi  [x443]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 6693:01c7  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:01d1  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:01db  sub eax, esi  [x443]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:01de  sub ecx, ebp  [x443]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 6693:01e1  add edx, ebp  [x443]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 6693:01e4  sub edi, esi  [x443]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 6693:01e7  sar eax, 2  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 6693:01eb  sar ecx, 2  [x443]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 6693:01ef  sar edx, 2  [x443]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 6693:01f3  sar edi, 2  [x443]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 6693:01f7  mov dword ptr [0x65], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x65u), c.a.e);
    // 6693:01fb  mov dword ptr [0x69], ecx  [x443]
    c.w32(c.dsb + (uint16_t)(0x69u), c.c.e);
    // 6693:0200  mov dword ptr [0x71], edx  [x443]
    c.w32(c.dsb + (uint16_t)(0x71u), c.dx_.e);
    // 6693:0205  mov dword ptr [0x75], edi  [x443]
    c.w32(c.dsb + (uint16_t)(0x75u), c.di.e);
    // 6693:020a  mov ebx, dword ptr [0x7d]  [x443]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x7du)));
    // 6693:020f  mov ebp, ebx  [x443]
    c.bp.e = (uint32_t)(c.b.e);
    // 6693:0212  add ebx, dword ptr [0x85]  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x85u)), false));
    // 6693:0217  sub ebp, dword ptr [0x85]  [x443]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x85u)), false));
    // 6693:021c  add ebx, ebx  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 6693:021f  add ebp, ebp  [x443]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6693:0222  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:022c  add eax, dword ptr es:[ebp*2 + 0x3400]  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6693:0236  sar eax, 1  [x443]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 6693:0239  add dword ptr [0x65], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x65u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x65u)), c.a.e, false));
    // 6693:023e  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:0248  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x443]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6693:0252  sar ecx, 1  [x443]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 6693:0255  sub dword ptr [0x69], ecx  [x443]
    c.w32(c.dsb + (uint16_t)(0x69u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x69u)), c.c.e, false));
    // 6693:025a  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x443]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 6693:0264  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x443]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 6693:026e  sar edx, 1  [x443]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 6693:0271  sub dword ptr [0x71], edx  [x443]
    c.w32(c.dsb + (uint16_t)(0x71u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x71u)), c.dx_.e, false));
    // 6693:0276  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x443]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 6693:0280  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x443]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 6693:028a  sar edi, 1  [x443]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 6693:028d  sub dword ptr [0x75], edi  [x443]
    c.w32(c.dsb + (uint16_t)(0x75u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x75u)), c.di.e, false));
    // 6693:0292  sar dword ptr [0x71], 5  [x443]
    c.w32(c.dsb + (uint16_t)(0x71u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x71u)), (int)((0x5u) & 31), false));
    // 6693:0298  sar dword ptr [0x75], 5  [x443]
    c.w32(c.dsb + (uint16_t)(0x75u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x75u)), (int)((0x5u) & 31), false));
    // 6693:029e  sar dword ptr [0x79], 5  [x443]
    c.w32(c.dsb + (uint16_t)(0x79u), c.sar<32>(c.r32(c.dsb + (uint16_t)(0x79u)), (int)((0x5u) & 31), false));
    // 6693:02a4  shl dword ptr [0x59], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x59u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x59u)), (int)((0x3u) & 31), false));
    // 6693:02aa  shl dword ptr [0x5d], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x5du), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5du)), (int)((0x3u) & 31), false));
    // 6693:02b0  shl dword ptr [0x61], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x61u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x61u)), (int)((0x3u) & 31), false));
    // 6693:02b6  shl dword ptr [0x65], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x65u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x65u)), (int)((0x3u) & 31), false));
    // 6693:02bc  shl dword ptr [0x69], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x69u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x69u)), (int)((0x3u) & 31), false));
    // 6693:02c2  shl dword ptr [0x6d], 3  [x443]
    c.w32(c.dsb + (uint16_t)(0x6du), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x6du)), (int)((0x3u) & 31), true));
    // 6693:02c8  retf   [x443]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66bf9:
    if (c.tracing) c.traceAt(0x66bf9);
    // 6693:02c9  lfs si, ptr [0x4d]  [x443]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6693:02ce  mov di, word ptr [0xc3]  [x443]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc3u)));
L66c02:
    if (c.tracing) c.traceAt(0x66c02);
    // 6693:02d2  mov eax, dword ptr fs:[si + 0x14]  [x443]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x14u)));
    // 6693:02d7  mov ebx, dword ptr fs:[si + 0x18]  [x443]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x18u)));
    // 6693:02dc  mov ecx, dword ptr fs:[si + 0x1c]  [x443]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x1cu)));
    // 6693:02e1  mov dword ptr [0x7d], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x7du), c.a.e);
    // 6693:02e5  mov dword ptr [0x81], ebx  [x443]
    c.w32(c.dsb + (uint16_t)(0x81u), c.b.e);
    // 6693:02ea  mov dword ptr [0x85], ecx  [x443]
    c.w32(c.dsb + (uint16_t)(0x85u), c.c.e);
    // 6693:02ef  add eax, dword ptr fs:[si + 4]  [x443]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)), false));
    // 6693:02f4  add ebx, dword ptr fs:[si + 8]  [x443]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)), false));
    // 6693:02f9  add ecx, dword ptr fs:[si + 0xc]  [x443]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.si.x + 0xcu)), false));
    // 6693:02fe  mov edx, 0x3ff  [x443]
    c.dx_.e = (uint32_t)(0x3ffu);
    // 6693:0304  and eax, edx  [x443]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.dx_.e), false));
    // 6693:0307  and ebx, edx  [x443]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) & (c.dx_.e), false));
    // 6693:030a  and ecx, edx  [x443]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.dx_.e), true));
    // 6693:030d  mov dword ptr fs:[si + 0x14], eax  [x443]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x14u), c.a.e);
    // 6693:0312  mov dword ptr fs:[si + 0x18], ebx  [x443]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x18u), c.b.e);
    // 6693:0317  mov dword ptr fs:[si + 0x1c], ecx  [x443]
    c.w32(c.fsb + (uint16_t)(c.si.x + 0x1cu), c.c.e);
    // 6693:031c  dec di  [x443]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 6693:031d  jne 0x2d2  [x443]
    if (!c.zf) goto L66c02;
L66c4f:
    if (c.tracing) c.traceAt(0x66c4f);
    // 6693:031f  push cs  [x443]
    c.push16(c.cs);
    // 6693:0320  call 0x82  [x443]
    c.push16(0x323u); code_6(c, 0x669b2u); if (c.ip != 0x323u) c.badReturn(0x66c50);
L66c53:
    if (c.tracing) c.traceAt(0x66c53);
    // 6693:0323  lfs si, ptr [0x4d]  [x443]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6693:0328  movzx esi, si  [x443]
    c.si.e = (uint32_t)(c.si.x);
    // 6693:032c  mov eax, dword ptr fs:[esi]  [x443]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 6693:0331  shl eax, 4  [x443]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 6693:0335  mov word ptr [0x49], ax  [x443]
    c.w16(c.dsb + (uint16_t)(0x49u), c.a.x);
    // 6693:0338  add esi, 0x48  [x443]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x48u, false));
    // 6693:033c  add word ptr [0x49], si  [x443]
    c.w16(c.dsb + (uint16_t)(0x49u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x49u)), c.si.x, true));
    // 6693:0340  les di, ptr [0x51]  [x443]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x51u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x51u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:0344  jmp 0x3e7  [x443]
    goto L66d17;
L66c77:
    if (c.tracing) c.traceAt(0x66c77);
    // 6693:0347  mov ebx, dword ptr fs:[si]  [x89887]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 6693:034b  mov ecx, dword ptr fs:[si + 4]  [x89887]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 6693:0350  mov edi, dword ptr fs:[si + 8]  [x89887]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 6693:0355  imul eax, ebx, 0  [x89887]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66c88))));
    // 6693:035c  imul ebp, ecx, 0  [x89887]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66c8f))));
    // 6693:0363  add eax, ebp  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:0366  imul ebp, edi, 0x200  [x89887]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66c99))));
    // 6693:036d  add eax, ebp  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:0370  mov dword ptr es:[si + 8], eax  [x89887]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 6693:0375  add eax, 0xa3930  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xa3930u, false));
    // 6693:037b  mov dword ptr [0x9d], eax  [x89887]
    c.w32(c.dsb + (uint16_t)(0x9du), c.a.e);
    // 6693:037f  imul ebp, ebx, 0x20000  [x89887]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66cb2))));
    // 6693:0386  imul eax, ecx, 0  [x89887]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66cb9))));
    // 6693:038d  add ebp, eax  [x89887]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6693:0390  imul eax, edi, 0  [x89887]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66cc3))));
    // 6693:0397  add eax, ebp  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:039a  cdq   [x89887]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:039c  idiv dword ptr [0x9d]  [x89887]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x9du)))) { c.d32 = false; c.intr(0, 0x39cu); }   // #DE: int 0, then again
    // 6693:03a1  add eax, 0x20  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x20u, false));
    // 6693:03a5  mov dword ptr es:[si], eax  [x89887]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 6693:03a9  imul ebp, ebx, 0  [x89887]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x66cdc))));
    // 6693:03b0  imul eax, ecx, 0xfffe6667  [x89887]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x66ce3))));
    // 6693:03b7  add ebp, eax  [x89887]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 6693:03ba  imul eax, edi, 0  [x89887]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x66ced))));
    // 6693:03c1  add eax, ebp  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:03c4  add eax, dword ptr [0xb4]  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb4u)), false));
    // 6693:03c9  cdq   [x89887]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:03cb  idiv dword ptr [0x9d]  [x89887]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x9du)))) { c.d32 = false; c.intr(0, 0x3cbu); }   // #DE: int 0, then again
    // 6693:03d0  add eax, 0x64  [x89887]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x64u, false));
    // 6693:03d4  mov dword ptr es:[si + 4], eax  [x89887]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 6693:03d9  add si, 0x10  [x89887]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 6693:03dc  cmp si, word ptr [0x49]  [x89887]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x49u)), true);
    // 6693:03e0  jb 0x347  [x89887]
    if (c.cf) goto L66c77;
L66d14:
    if (c.tracing) c.traceAt(0x66d14);
    // 6693:03e4  jmp 0x468  [x443]
    goto L66d98;
L66d17:
    if (c.tracing) c.traceAt(0x66d17);
    // 6693:03e7  mov eax, dword ptr [0x59]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x59u)));
    // 6693:03eb  mov dword ptr cs:[0x382], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x382u), c.a.e);
    // 6693:03f0  mov eax, dword ptr [0x5d]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5du)));
    // 6693:03f4  mov dword ptr cs:[0x389], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x389u), c.a.e);
    // 6693:03f9  mov eax, dword ptr [0x61]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x61u)));
    // 6693:03fd  mov dword ptr cs:[0x393], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x393u), c.a.e);
    // 6693:0402  mov eax, dword ptr [0x65]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x65u)));
    // 6693:0406  shl eax, 3  [x443]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 6693:040a  cdq   [x443]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:040c  mov ecx, 0xa  [x443]
    c.c.e = (uint32_t)(0xau);
    // 6693:0412  idiv ecx  [x443]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x412u); }   // #DE: int 0, then again
    // 6693:0415  mov dword ptr cs:[0x3ac], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x3acu), c.a.e);
    // 6693:041a  mov eax, dword ptr [0x69]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x69u)));
    // 6693:041e  shl eax, 3  [x443]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 6693:0422  cdq   [x443]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:0424  mov ecx, 0xa  [x443]
    c.c.e = (uint32_t)(0xau);
    // 6693:042a  idiv ecx  [x443]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x42au); }   // #DE: int 0, then again
    // 6693:042d  mov dword ptr cs:[0x3b3], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x3b3u), c.a.e);
    // 6693:0432  mov eax, dword ptr [0x6d]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 6693:0436  shl eax, 3  [x443]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x3u) & 31), false));
    // 6693:043a  cdq   [x443]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:043c  mov ecx, 0xa  [x443]
    c.c.e = (uint32_t)(0xau);
    // 6693:0442  idiv ecx  [x443]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x442u); }   // #DE: int 0, then again
    // 6693:0445  mov dword ptr cs:[0x3bd], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x3bdu), c.a.e);
    // 6693:044a  mov eax, dword ptr [0x71]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 6693:044e  mov dword ptr cs:[0x358], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x358u), c.a.e);
    // 6693:0453  mov eax, dword ptr [0x75]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 6693:0457  mov dword ptr cs:[0x35f], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x35fu), c.a.e);
    // 6693:045c  mov eax, dword ptr [0x79]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x79u)));
    // 6693:0460  mov dword ptr cs:[0x369], eax  [x443]
    c.w32(c.csb + (uint16_t)(0x369u), c.a.e);
    // 6693:0465  jmp 0x347  [x443]
    goto L66c77;
L66d98:
    if (c.tracing) c.traceAt(0x66d98);
    // 6693:0468  mov bl, 0xf  [x443]
    c.b.l = (uint8_t)(0xfu);
    // 6693:046a  retf   [x443]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66db0:
    if (c.tracing) c.traceAt(0x66db0);
    // 6693:0480  mov edx, dword ptr [0xa1]  [x35325]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 6693:0485  mov eax, dword ptr fs:[edx + 4]  [x35325]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:048b  imul eax, eax, 0x140  [x35325]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x140u));
    // 6693:0492  mov dword ptr [0x28], eax  [x35325]
    c.w32(c.dsb + (uint16_t)(0x28u), c.a.e);
L66dc6:
    if (c.tracing) c.traceAt(0x66dc6);
    // 6693:0496  mov edx, dword ptr [0xa5]  [x36689]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa5u)));
    // 6693:049b  mov esi, dword ptr fs:[edx]  [x36689]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:04a0  mov edi, dword ptr fs:[edx + 4]  [x36689]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:04a6  sub edx, 8  [x36689]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 6693:04aa  mov dword ptr [0xa5], edx  [x36689]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.dx_.e);
    // 6693:04af  cmp edx, dword ptr [0x41]  [x36689]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x41u)), true);
    // 6693:04b4  jge 0x4c0  [x36689]
    if ((c.sf == c.of)) goto L66df0;
L66de6:
    if (c.tracing) c.traceAt(0x66de6);
    // 6693:04b6  mov edx, dword ptr [0x45]  [x12759]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x45u)));
    // 6693:04bb  mov dword ptr [0xa5], edx  [x12759]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.dx_.e);
L66df0:
    if (c.tracing) c.traceAt(0x66df0);
    // 6693:04c0  mov eax, dword ptr fs:[edx]  [x36689]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:04c5  mov ebx, dword ptr fs:[edx + 4]  [x36689]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:04cb  mov edx, ebx  [x36689]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6693:04ce  sub edx, edi  [x36689]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6693:04d1  je 0x496  [x36689]
    if (c.zf) goto L66dc6;
L66e03:
    if (c.tracing) c.traceAt(0x66e03);
    // 6693:04d3  mov dword ptr [0x1c], edx  [x35325]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 6693:04d8  mov ecx, ebx  [x35325]
    c.c.e = (uint32_t)(c.b.e);
    // 6693:04db  sub ecx, edi  [x35325]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6693:04de  sub eax, esi  [x35325]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:04e1  shl eax, 0x10  [x35325]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6693:04e5  cdq   [x35325]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:04e7  idiv ecx  [x35325]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4e7u); }   // #DE: int 0, then again
    // 6693:04ea  mov dword ptr cs:[0x5ae], eax  [x35325]
    c.w32(c.csb + (uint16_t)(0x5aeu), c.a.e);
    // 6693:04ef  shl esi, 0x10  [x35325]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6693:04f3  mov dword ptr [0x14], esi  [x35325]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L66e28:
    if (c.tracing) c.traceAt(0x66e28);
    // 6693:04f8  mov edx, dword ptr [0xa1]  [x39461]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 6693:04fd  mov esi, dword ptr fs:[edx]  [x39461]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:0502  mov edi, dword ptr fs:[edx + 4]  [x39461]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:0508  add edx, 8  [x39461]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6693:050c  mov dword ptr [0xa1], edx  [x39461]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.dx_.e);
    // 6693:0511  cmp edx, dword ptr [0x45]  [x39461]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x45u)), true);
    // 6693:0516  jle 0x522  [x39461]
    if ((c.zf || c.sf != c.of)) goto L66e52;
L66e48:
    if (c.tracing) c.traceAt(0x66e48);
    // 6693:0518  mov edx, dword ptr [0x41]  [x10020]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x41u)));
    // 6693:051d  mov dword ptr [0xa1], edx  [x10020]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.dx_.e);
L66e52:
    if (c.tracing) c.traceAt(0x66e52);
    // 6693:0522  mov eax, dword ptr fs:[edx]  [x39461]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:0527  mov ebx, dword ptr fs:[edx + 4]  [x39461]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:052d  mov edx, ebx  [x39461]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6693:0530  sub edx, edi  [x39461]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6693:0533  je 0x4f8  [x39461]
    if (c.zf) goto L66e28;
L66e65:
    if (c.tracing) c.traceAt(0x66e65);
    // 6693:0535  mov dword ptr [0x20], edx  [x35325]
    c.w32(c.dsb + (uint16_t)(0x20u), c.dx_.e);
    // 6693:053a  mov ecx, ebx  [x35325]
    c.c.e = (uint32_t)(c.b.e);
    // 6693:053d  sub ecx, edi  [x35325]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6693:0540  sub eax, esi  [x35325]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:0543  shl eax, 0x10  [x35325]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6693:0547  cdq   [x35325]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:0549  idiv ecx  [x35325]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x549u); }   // #DE: int 0, then again
    // 6693:054c  mov dword ptr cs:[0x5b7], eax  [x35325]
    c.w32(c.csb + (uint16_t)(0x5b7u), c.a.e);
    // 6693:0551  shl esi, 0x10  [x35325]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6693:0555  mov dword ptr [0x18], esi  [x35325]
    c.w32(c.dsb + (uint16_t)(0x18u), c.si.e);
L66e8a:
    if (c.tracing) c.traceAt(0x66e8a);
    // 6693:055a  cmp dword ptr [0x28], 0  [x237427]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x28u)), 0x0u, true);
    // 6693:0560  jl 0x5a0  [x237427]
    if ((c.sf != c.of)) goto L66ed0;
L66e92:
    if (c.tracing) c.traceAt(0x66e92);
    // 6693:0562  mov eax, dword ptr [0x14]  [x232889]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 6693:0566  mov edx, dword ptr [0x18]  [x232889]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x18u)));
    // 6693:056b  sar edx, 0x10  [x232889]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 6693:056f  sar eax, 0x10  [x232889]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6693:0573  mov di, ax  [x232889]
    c.di.x = (uint16_t)(c.a.x);
    // 6693:0575  mov cx, dx  [x232889]
    c.c.x = (uint16_t)(c.dx_.x);
    // 6693:0577  sub cx, di  [x232889]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 6693:0579  js 0x6b2  [x232889]
    if (c.sf) goto L66fe2;
L66ead:
    if (c.tracing) c.traceAt(0x66ead);
    // 6693:057d  add edi, dword ptr [0x28]  [x232727]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x28u)), false));
    // 6693:0582  mov eax, dword ptr [8]  [x232727]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x8u)));
    // 6693:0586  cmp cx, 2  [x232727]
    c.sub<16>(c.c.x, 0x2u, true);
    // 6693:0589  jle 0x593  [x232727]
    if ((c.zf || c.sf != c.of)) goto L66ec3;
L66ebb:
    if (c.tracing) c.traceAt(0x66ebb);
    // 6693:058b  test di, 1  [x115900]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 6693:058f  je 0x593  [x115900]
    if (c.zf) goto L66ec3;
L66ec1:
    if (c.tracing) c.traceAt(0x66ec1);
    // 6693:0591  stosb byte ptr es:[di], al  [x57687]
    c.stos<8, false>(0);
    // 6693:0592  dec cx  [x57687]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
L66ec3:
    if (c.tracing) c.traceAt(0x66ec3);
    // 6693:0593  mov si, cx  [x232727]
    c.si.x = (uint16_t)(c.c.x);
    // 6693:0595  shr cx, 1  [x232727]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L66ec7:
    if (c.tracing) c.traceAt(0x66ec7);
    // 6693:0597  rep stosw word ptr es:[di], ax  [x540053]
    c.stos<16, false>(1);
L66ec9:
    if (c.tracing) c.traceAt(0x66ec9);
    // 6693:0599  mov cx, si  [x232727]
    c.c.x = (uint16_t)(c.si.x);
    // 6693:059b  and cx, 1  [x232727]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L66ece:
    if (c.tracing) c.traceAt(0x66ece);
    // 6693:059e  rep stosb byte ptr es:[di], al  [x327697]
    c.stos<8, false>(1);
L66ed0:
    if (c.tracing) c.traceAt(0x66ed0);
    // 6693:05a0  add dword ptr [0x28], 0x140  [x237265]
    c.w32(c.dsb + (uint16_t)(0x28u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x28u)), 0x140u, false));
    // 6693:05a9  add dword ptr [0x14], 0xffff0000  [x237265]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x66ede)), false));
    // 6693:05b2  add dword ptr [0x18], 0x60000  [x237265]
    c.w32(c.dsb + (uint16_t)(0x18u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x18u)), (c.r32(0x66ee7)), true));
    // 6693:05bb  dec dword ptr [0x1c]  [x237265]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 6693:05c0  jne 0x631  [x237265]
    if (!c.zf) goto L66f61;
L66ef2:
    if (c.tracing) c.traceAt(0x66ef2);
    // 6693:05c2  mov eax, dword ptr [0xa1]  [x60938]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 6693:05c6  cmp eax, dword ptr [0xa5]  [x60938]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xa5u)), true);
    // 6693:05cb  je 0x6b2  [x60938]
    if (c.zf) goto L66fe2;
L66eff:
    if (c.tracing) c.traceAt(0x66eff);
    // 6693:05cf  mov edx, dword ptr [0xa5]  [x36681]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa5u)));
    // 6693:05d4  mov esi, dword ptr fs:[edx]  [x36681]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:05d9  mov edi, dword ptr fs:[edx + 4]  [x36681]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:05df  sub edx, 8  [x36681]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 6693:05e3  mov dword ptr [0xa5], edx  [x36681]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.dx_.e);
    // 6693:05e8  cmp edx, dword ptr [0x41]  [x36681]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x41u)), true);
    // 6693:05ed  jge 0x5f9  [x36681]
    if ((c.sf == c.of)) goto L66f29;
L66f1f:
    if (c.tracing) c.traceAt(0x66f1f);
    // 6693:05ef  mov edx, dword ptr [0x45]  [x7483]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x45u)));
    // 6693:05f4  mov dword ptr [0xa5], edx  [x7483]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.dx_.e);
L66f29:
    if (c.tracing) c.traceAt(0x66f29);
    // 6693:05f9  mov eax, dword ptr fs:[edx]  [x36681]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:05fe  mov ebx, dword ptr fs:[edx + 4]  [x36681]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:0604  mov edx, ebx  [x36681]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6693:0607  sub edx, edi  [x36681]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6693:060a  je 0x5cf  [x36681]
    if (c.zf) goto L66eff;
L66f3c:
    if (c.tracing) c.traceAt(0x66f3c);
    // 6693:060c  mov dword ptr [0x1c], edx  [x31219]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 6693:0611  mov ecx, ebx  [x31219]
    c.c.e = (uint32_t)(c.b.e);
    // 6693:0614  sub ecx, edi  [x31219]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6693:0617  sub eax, esi  [x31219]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:061a  shl eax, 0x10  [x31219]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6693:061e  cdq   [x31219]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:0620  idiv ecx  [x31219]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x620u); }   // #DE: int 0, then again
    // 6693:0623  mov dword ptr cs:[0x5ae], eax  [x31219]
    c.w32(c.csb + (uint16_t)(0x5aeu), c.a.e);
    // 6693:0628  shl esi, 0x10  [x31219]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6693:062c  mov dword ptr [0x14], esi  [x31219]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L66f61:
    if (c.tracing) c.traceAt(0x66f61);
    // 6693:0631  dec dword ptr [0x20]  [x207546]
    c.w32(c.dsb + (uint16_t)(0x20u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x20u)), true));
    // 6693:0636  jne 0x6a5  [x207546]
    if (!c.zf) goto L66fd5;
L66f68:
    if (c.tracing) c.traceAt(0x66f68);
    // 6693:0638  mov eax, dword ptr [0xa1]  [x31400]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 6693:063c  cmp eax, dword ptr [0xa5]  [x31400]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xa5u)), true);
    // 6693:0641  je 0x6b2  [x31400]
    if (c.zf) goto L66fe2;
L66f73:
    if (c.tracing) c.traceAt(0x66f73);
    // 6693:0643  mov edx, dword ptr [0xa1]  [x36862]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xa1u)));
    // 6693:0648  mov esi, dword ptr fs:[edx]  [x36862]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:064d  mov edi, dword ptr fs:[edx + 4]  [x36862]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:0653  add edx, 8  [x36862]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6693:0657  mov dword ptr [0xa1], edx  [x36862]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.dx_.e);
    // 6693:065c  cmp edx, dword ptr [0x45]  [x36862]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x45u)), true);
    // 6693:0661  jle 0x66d  [x36862]
    if ((c.zf || c.sf != c.of)) goto L66f9d;
L66f93:
    if (c.tracing) c.traceAt(0x66f93);
    // 6693:0663  mov edx, dword ptr [0x41]  [x9502]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x41u)));
    // 6693:0668  mov dword ptr [0xa1], edx  [x9502]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.dx_.e);
L66f9d:
    if (c.tracing) c.traceAt(0x66f9d);
    // 6693:066d  mov eax, dword ptr fs:[edx]  [x36862]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 6693:0672  mov ebx, dword ptr fs:[edx + 4]  [x36862]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 6693:0678  mov edx, ebx  [x36862]
    c.dx_.e = (uint32_t)(c.b.e);
    // 6693:067b  sub edx, edi  [x36862]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 6693:067e  je 0x643  [x36862]
    if (c.zf) goto L66f73;
L66fb0:
    if (c.tracing) c.traceAt(0x66fb0);
    // 6693:0680  mov dword ptr [0x20], edx  [x31400]
    c.w32(c.dsb + (uint16_t)(0x20u), c.dx_.e);
    // 6693:0685  mov ecx, ebx  [x31400]
    c.c.e = (uint32_t)(c.b.e);
    // 6693:0688  sub ecx, edi  [x31400]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 6693:068b  sub eax, esi  [x31400]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 6693:068e  shl eax, 0x10  [x31400]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 6693:0692  cdq   [x31400]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 6693:0694  idiv ecx  [x31400]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x694u); }   // #DE: int 0, then again
    // 6693:0697  mov dword ptr cs:[0x5b7], eax  [x31400]
    c.w32(c.csb + (uint16_t)(0x5b7u), c.a.e);
    // 6693:069c  shl esi, 0x10  [x31400]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 6693:06a0  mov dword ptr [0x18], esi  [x31400]
    c.w32(c.dsb + (uint16_t)(0x18u), c.si.e);
L66fd5:
    if (c.tracing) c.traceAt(0x66fd5);
    // 6693:06a5  mov eax, dword ptr [0x2c]  [x207546]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x2cu)));
    // 6693:06a9  cmp dword ptr [0x28], eax  [x207546]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x28u)), c.a.e, true);
    // 6693:06ae  jl 0x55a  [x207546]
    if ((c.sf != c.of)) goto L66e8a;
L66fe2:
    if (c.tracing) c.traceAt(0x66fe2);
    // 6693:06b2  retf   [x35325]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66fe3:
    if (c.tracing) c.traceAt(0x66fe3);
    // 6693:06b3  push ds  [x443]
    c.push16(c.ds);
    // 6693:06b4  mov ax, 0xa000  [x443]
    c.a.x = (uint16_t)(0xa000u);
    // 6693:06b7  mov es, ax  [x443]
    c.loadEs(c.a.x);
    // 6693:06b9  mov di, 0  [x443]
    c.di.x = (uint16_t)(0x0u);
    // 6693:06bc  mov ax, 0x552c  [x443]
    c.a.x = (uint16_t)(0x552cu);
    // 6693:06bf  mov ds, ax  [x443]
    c.loadDs(c.a.x);
    // 6693:06c1  mov si, 0  [x443]
    c.si.x = (uint16_t)(0x0u);
    // 6693:06c4  mov bl, 0x3a  [x443]
    c.b.l = (uint8_t)(0x3au);
    // 6693:06c6  cld   [x443]
    c.df = false;
L66ff7:
    if (c.tracing) c.traceAt(0x66ff7);
    // 6693:06c7  mov cx, 0x10  [x25694]
    c.c.x = (uint16_t)(0x10u);
L66ffa:
    if (c.tracing) c.traceAt(0x66ffa);
    // 6693:06ca  rep movsd dword ptr es:[di], dword ptr [si]  [x436798]
    c.ip = 0x6cdu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L66ffd:
    if (c.tracing) c.traceAt(0x66ffd);
    // 6693:06cd  add di, 0x100  [x25694]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x100u, false));
    // 6693:06d1  add si, 0x100  [x25694]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x100u, true));
    // 6693:06d5  dec bl  [x25694]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 6693:06d7  jne 0x6c7  [x25694]
    if (!c.zf) goto L66ff7;
L67009:
    if (c.tracing) c.traceAt(0x67009);
    // 6693:06d9  pop ds  [x443]
    c.loadDs((uint16_t)c.pop16());
    // 6693:06da  mov ax, 0x552c  [x443]
    c.a.x = (uint16_t)(0x552cu);
    // 6693:06dd  mov es, ax  [x443]
    c.loadEs(c.a.x);
    // 6693:06df  mov eax, 0  [x443]
    c.a.e = (uint32_t)(0x0u);
    // 6693:06e5  mov di, 0  [x443]
    c.di.x = (uint16_t)(0x0u);
    // 6693:06e8  mov bl, 0x3a  [x443]
    c.b.l = (uint8_t)(0x3au);
    // 6693:06ea  cld   [x443]
    c.df = false;
L6701b:
    if (c.tracing) c.traceAt(0x6701b);
    // 6693:06eb  mov cx, 0x10  [x25694]
    c.c.x = (uint16_t)(0x10u);
L6701e:
    if (c.tracing) c.traceAt(0x6701e);
    // 6693:06ee  rep stosd dword ptr es:[di], eax  [x436798]
    c.stos<32, false>(1);
L67021:
    if (c.tracing) c.traceAt(0x67021);
    // 6693:06f1  add di, 0x100  [x25694]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x100u, true));
    // 6693:06f5  dec bl  [x25694]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 6693:06f7  jne 0x6eb  [x25694]
    if (!c.zf) goto L6701b;
L67029:
    if (c.tracing) c.traceAt(0x67029);
    // 6693:06f9  retf   [x443]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6709e:
    if (c.tracing) c.traceAt(0x6709e);
    // 6693:076e  les bx, ptr [0x4d]  [x443]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:0772  mov eax, dword ptr es:[bx + 0x44]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x44u)));
    // 6693:0777  mov byte ptr [0xaf], 0  [x443]
    c.w8(c.dsb + (uint16_t)(0xafu), 0x0u);
    // 6693:077c  cmp eax, 0  [x443]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6693:0780  je 0x787  [x443]
    if (c.zf) goto L670b7;
L670b2:
    if (c.tracing) c.traceAt(0x670b2);
    // 6693:0782  mov byte ptr [0xaf], 1  [x443]
    c.w8(c.dsb + (uint16_t)(0xafu), 0x1u);
L670b7:
    if (c.tracing) c.traceAt(0x670b7);
    // 6693:0787  mov ebx, dword ptr [0]  [x443]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6693:078c  mov eax, dword ptr es:[bx - 4]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)));
    // 6693:0791  cmp eax, 0  [x443]
    c.sub<32>(c.a.e, 0x0u, true);
    // 6693:0795  je 0x88e  [x443]
    if (c.zf) goto L671be;
    c.notTranslated(0x670c9, "fall-through");
L671be:
    if (c.tracing) c.traceAt(0x671be);
    // 6693:088e  mov dword ptr [0xc], 0  [x443]
    c.w32(c.dsb + (uint16_t)(0xcu), 0x0u);
    // 6693:0897  les bx, ptr [0x4d]  [x443]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:089b  mov ebx, dword ptr [0]  [x443]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6693:08a0  mov eax, dword ptr es:[bx - 8]  [x443]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 6693:08a5  mov dword ptr [0x10], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0x10u), c.a.e);
L671d9:
    if (c.tracing) c.traceAt(0x671d9);
    // 6693:08a9  xor ebx, ebx  [x99402]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 6693:08ac  xor ebp, ebp  [x99402]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 6693:08af  xor edx, edx  [x99402]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 6693:08b2  les bx, ptr [0x4d]  [x99402]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:08b6  lfs bp, ptr [0x51]  [x99402]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x51u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x51u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 6693:08bb  mov ax, 0x64ec  [x99402]
    c.a.x = (uint16_t)(0x64ecu);
    // 6693:08be  mov gs, ax  [x99402]
    c.loadGs(c.a.x);
    // 6693:08c0  mov dx, 0  [x99402]
    c.dx_.x = (uint16_t)(0x0u);
    // 6693:08c3  mov ebx, dword ptr [0]  [x99402]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6693:08c8  mov bx, word ptr es:[bx]  [x99402]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6693:08cb  mov ecx, dword ptr es:[ebx + 0x14]  [x99402]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 6693:08d1  mov dword ptr [8], ecx  [x99402]
    c.w32(c.dsb + (uint16_t)(0x8u), c.c.e);
    // 6693:08d6  mov ecx, dword ptr es:[ebx]  [x99402]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6693:08db  add ebx, 0x18  [x99402]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 6693:08df  mov dword ptr gs:[edx], ecx  [x99402]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 6693:08e4  add edx, 4  [x99402]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x4u, true));
L67218:
    if (c.tracing) c.traceAt(0x67218);
    // 6693:08e8  mov ebp, dword ptr es:[ebx]  [x376806]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 6693:08ed  add ebp, ebp  [x376806]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 6693:08f0  mov eax, dword ptr fs:[ebp*8 + 0x48]  [x376806]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x48u)));
    // 6693:08fa  mov dword ptr gs:[edx], eax  [x376806]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 6693:08ff  mov eax, dword ptr fs:[ebp*8 + 0x4c]  [x376806]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x4cu)));
    // 6693:0909  mov dword ptr gs:[edx + 4], eax  [x376806]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 6693:090f  add edx, 8  [x376806]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 6693:0913  add ebx, 4  [x376806]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 6693:0917  loop 0x8e8  [x376806]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67218;
L67249:
    if (c.tracing) c.traceAt(0x67249);
    // 6693:0919  mov eax, dword ptr gs:[0xc]  [x99402]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0xcu)));
    // 6693:091e  sub eax, dword ptr gs:[4]  [x99402]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.gsb + (uint16_t)(0x4u)), false));
    // 6693:0924  mov ecx, dword ptr gs:[0x18]  [x99402]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x18u)));
    // 6693:092a  sub ecx, dword ptr gs:[0x10]  [x99402]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.gsb + (uint16_t)(0x10u)), false));
    // 6693:0930  imul ecx  [x99402]
    c.imul32(c.c.e);
    // 6693:0933  mov edi, eax  [x99402]
    c.di.e = (uint32_t)(c.a.e);
    // 6693:0936  mov eax, dword ptr gs:[0x14]  [x99402]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x14u)));
    // 6693:093b  sub eax, dword ptr gs:[0xc]  [x99402]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.gsb + (uint16_t)(0xcu)), false));
    // 6693:0941  mov ecx, dword ptr gs:[0x10]  [x99402]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint16_t)(0x10u)));
    // 6693:0947  sub ecx, dword ptr gs:[8]  [x99402]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.gsb + (uint16_t)(0x8u)), false));
    // 6693:094d  imul ecx  [x99402]
    c.imul32(c.c.e);
    // 6693:0950  cmp edi, eax  [x99402]
    c.sub<32>(c.di.e, c.a.e, true);
    // 6693:0953  jl 0xa7f  [x99402]
    if ((c.sf != c.of)) goto L673af;
L67287:
    if (c.tracing) c.traceAt(0x67287);
    // 6693:0957  je 0xa7f  [x46955]
    if (c.zf) goto L673af;
L6728b:
    if (c.tracing) c.traceAt(0x6728b);
    // 6693:095b  mov di, 0  [x43858]
    c.di.x = (uint16_t)(0x0u);
    // 6693:095e  movzx edi, di  [x43858]
    c.di.e = (uint32_t)(c.di.x);
    // 6693:0962  mov ecx, dword ptr gs:[edi]  [x43858]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6693:0967  lea eax, [edi + 4]  [x43858]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 6693:096c  mov dword ptr [0x41], eax  [x43858]
    c.w32(c.dsb + (uint16_t)(0x41u), c.a.e);
    // 6693:0970  lea ebx, [ecx - 1]  [x43858]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 6693:0975  lea eax, [eax + ebx*8]  [x43858]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 6693:097a  mov dword ptr [0x45], eax  [x43858]
    c.w32(c.dsb + (uint16_t)(0x45u), c.a.e);
    // 6693:097e  dec ecx  [x43858]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 6693:0980  add edi, 8  [x43858]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 6693:0984  mov eax, dword ptr gs:[edi]  [x43858]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6693:0989  mov ebx, edi  [x43858]
    c.b.e = (uint32_t)(c.di.e);
    // 6693:098c  mov ebp, eax  [x43858]
    c.bp.e = (uint32_t)(c.a.e);
L672bf:
    if (c.tracing) c.traceAt(0x672bf);
    // 6693:098f  add edi, 8  [x122276]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 6693:0993  mov edx, dword ptr gs:[edi]  [x122276]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 6693:0998  cmp ebp, edx  [x122276]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 6693:099b  jle 0x9a3  [x122276]
    if ((c.zf || c.sf != c.of)) goto L672d3;
L672cd:
    if (c.tracing) c.traceAt(0x672cd);
    // 6693:099d  mov ebp, edx  [x39166]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 6693:09a0  mov ebx, edi  [x39166]
    c.b.e = (uint32_t)(c.di.e);
L672d3:
    if (c.tracing) c.traceAt(0x672d3);
    // 6693:09a3  cmp eax, edx  [x122276]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 6693:09a6  jge 0x9ab  [x122276]
    if ((c.sf == c.of)) goto L672db;
L672d8:
    if (c.tracing) c.traceAt(0x672d8);
    // 6693:09a8  mov eax, edx  [x44029]
    c.a.e = (uint32_t)(c.dx_.e);
L672db:
    if (c.tracing) c.traceAt(0x672db);
    // 6693:09ab  loop 0x98f  [x122276]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L672bf;
L672dd:
    if (c.tracing) c.traceAt(0x672dd);
    // 6693:09ad  mov ecx, ebp  [x43858]
    c.c.e = (uint32_t)(c.bp.e);
    // 6693:09b0  sub ebx, 4  [x43858]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 6693:09b4  cmp ecx, 0xc7  [x43858]
    c.sub<32>(c.c.e, 0xc7u, true);
    // 6693:09bb  jg 0xa7f  [x43858]
    if ((!c.zf && c.sf == c.of)) goto L673af;
L672ef:
    if (c.tracing) c.traceAt(0x672ef);
    // 6693:09bf  cmp eax, ecx  [x43858]
    c.sub<32>(c.a.e, c.c.e, true);
    // 6693:09c2  je 0xa7f  [x43858]
    if (c.zf) goto L673af;
L672f6:
    if (c.tracing) c.traceAt(0x672f6);
    // 6693:09c6  cmp ax, 0  [x43858]
    c.sub<16>(c.a.x, 0x0u, true);
    // 6693:09c9  jl 0xa7f  [x43858]
    if ((c.sf != c.of)) goto L673af;
L672fd:
    if (c.tracing) c.traceAt(0x672fd);
    // 6693:09cd  imul eax, eax, 0x140  [x37216]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x140u));
    // 6693:09d4  cmp eax, 0xf8c0  [x37216]
    c.sub<32>(c.a.e, 0xf8c0u, true);
    // 6693:09da  jle 0x9e2  [x37216]
    if ((c.zf || c.sf != c.of)) goto L67312;
    c.notTranslated(0x6730c, "fall-through");
L67312:
    if (c.tracing) c.traceAt(0x67312);
    // 6693:09e2  mov dword ptr [0x2c], eax  [x37216]
    c.w32(c.dsb + (uint16_t)(0x2cu), c.a.e);
    // 6693:09e6  mov dword ptr [0xa1], ebx  [x37216]
    c.w32(c.dsb + (uint16_t)(0xa1u), c.b.e);
    // 6693:09eb  mov dword ptr [0xa5], ebx  [x37216]
    c.w32(c.dsb + (uint16_t)(0xa5u), c.b.e);
    // 6693:09f0  cmp byte ptr [0xaf], 1  [x37216]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xafu)), 0x1u, true);
    // 6693:09f5  jne 0xa5a  [x37216]
    if (!c.zf) { t = 0x6738au; goto dispatch; }
L67327:
    if (c.tracing) c.traceAt(0x67327);
    // 6693:09f7  mov ebx, dword ptr [0]  [x37216]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 6693:09fc  mov bx, word ptr es:[bx]  [x37216]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 6693:09ff  movzx esi, bx  [x37216]
    c.si.e = (uint32_t)(c.b.x);
    // 6693:0a03  add esi, 4  [x37216]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 6693:0a07  mov ebx, dword ptr es:[esi]  [x37216]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e)));
    // 6693:0a0c  mov ecx, dword ptr es:[esi + 4]  [x37216]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e + 0x4u)));
    // 6693:0a12  mov edi, dword ptr es:[esi + 8]  [x37216]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.si.e + 0x8u)));
    // 6693:0a18  imul eax, ebx, 0xc1  [x37216]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x6734b))));
    // 6693:0a1f  imul ebp, ecx, 0  [x37216]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x67352))));
    // 6693:0a26  add eax, ebp  [x37216]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:0a29  imul ebp, edi, 0x1da  [x37216]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x6735c))));
    // 6693:0a30  add eax, ebp  [x37216]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 6693:0a33  neg eax  [x37216]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, true));
    // 6693:0a36  jns 0xa3a  [x37216]
    if (!c.sf) goto L6736a;
L67368:
    if (c.tracing) c.traceAt(0x67368);
    // 6693:0a38  jmp 0xa7f  [x1891]
    goto L673af;
L6736a:
    if (c.tracing) c.traceAt(0x6736a);
    // 6693:0a3a  sar eax, 7  [x35325]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x7u) & 31), false));
    // 6693:0a3e  cmp eax, 0x7f  [x35325]
    c.sub<32>(c.a.e, 0x7fu, true);
    // 6693:0a42  jle 0xa4a  [x35325]
    if ((c.zf || c.sf != c.of)) goto L6737a;
L67374:
    if (c.tracing) c.traceAt(0x67374);
    // 6693:0a44  mov eax, 0x7f  [x601]
    c.a.e = (uint32_t)(0x7fu);
L6737a:
    if (c.tracing) c.traceAt(0x6737a);
    // 6693:0a4a  mov ah, al  [x35325]
    c.a.h = (uint8_t)(c.a.l);
    // 6693:0a4c  mov cx, ax  [x35325]
    c.c.x = (uint16_t)(c.a.x);
    // 6693:0a4e  shl eax, 0x10  [x35325]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 6693:0a52  mov ax, cx  [x35325]
    c.a.x = (uint16_t)(c.c.x);
    // 6693:0a54  mov dword ptr [8], eax  [x35325]
    c.w32(c.dsb + (uint16_t)(0x8u), c.a.e);
    // 6693:0a58  jmp 0xa6c  [x35325]
    goto L6739c;
L6739c:
    if (c.tracing) c.traceAt(0x6739c);
    // 6693:0a6c  mov ax, 0x64ec  [x35325]
    c.a.x = (uint16_t)(0x64ecu);
    // 6693:0a6f  mov fs, ax  [x35325]
    c.loadFs(c.a.x);
    // 6693:0a71  mov cx, 0x458c  [x35325]
    c.c.x = (uint16_t)(0x458cu);
    // 6693:0a74  mov gs, cx  [x35325]
    c.loadGs(c.c.x);
    // 6693:0a76  mov ax, 0x552c  [x35325]
    c.a.x = (uint16_t)(0x552cu);
    // 6693:0a79  mov es, ax  [x35325]
    c.loadEs(c.a.x);
    // 6693:0a7b  push cs  [x35325]
    c.push16(c.cs);
    // 6693:0a7c  call 0x480  [x35325]
    c.push16(0xa7fu); code_6(c, 0x66db0u); if (c.ip != 0xa7fu) c.badReturn(0x673ac);
L673af:
    if (c.tracing) c.traceAt(0x673af);
    // 6693:0a7f  add dword ptr [0], 4  [x99402]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 6693:0a85  inc dword ptr [0xc]  [x99402]
    c.w32(c.dsb + (uint16_t)(0xcu), c.inc<32>(c.r32(c.dsb + (uint16_t)(0xcu)), false));
    // 6693:0a8a  mov eax, dword ptr [0x10]  [x99402]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 6693:0a8e  cmp dword ptr [0xc], eax  [x99402]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xcu)), c.a.e, true);
    // 6693:0a93  jne 0x8a9  [x99402]
    if (!c.zf) goto L671d9;
L673c7:
    if (c.tracing) c.traceAt(0x673c7);
    // 6693:0a97  retf   [x443]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L673c8:
    if (c.tracing) c.traceAt(0x673c8);
    // 6693:0a98  mov eax, dword ptr [0x71]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 6693:0a9c  mov dword ptr cs:[0xa1b], eax  [x443]
    c.w32(c.csb + (uint16_t)(0xa1bu), c.a.e);
    // 6693:0aa1  mov eax, dword ptr [0x75]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 6693:0aa5  mov dword ptr cs:[0xa22], eax  [x443]
    c.w32(c.csb + (uint16_t)(0xa22u), c.a.e);
    // 6693:0aaa  mov eax, dword ptr [0x79]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x79u)));
    // 6693:0aae  mov dword ptr cs:[0xa2c], eax  [x443]
    c.w32(c.csb + (uint16_t)(0xa2cu), c.a.e);
    // 6693:0ab3  retf   [x443]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L673e4:
    if (c.tracing) c.traceAt(0x673e4);
    // 6693:0ab4  push ds  [x1]
    c.push16(c.ds);
    // 6693:0ab5  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6693:0ab7  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 6693:0aba  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 6693:0abc  out dx, al  [x1]
    c.ip = 0xabdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6693:0abd  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 6693:0abe  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 6693:0ac0  out dx, al  [x1]
    c.ip = 0xac1u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 6693:0ac1  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 6693:0ac2  cld   [x1]
    c.df = false;
    // 6693:0ac3  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L673f6:
    if (c.tracing) c.traceAt(0x673f6);
    // 6693:0ac6  rep outsb dx, byte ptr [si]  [x769]
    c.ip = 0xac8u; c.d32 = false; c.outs<8, false>(c.dsb, 1);
L673f8:
    if (c.tracing) c.traceAt(0x673f8);
    // 6693:0ac8  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 6693:0ac9  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6745d:
    if (c.tracing) c.traceAt(0x6745d);
    // 6693:0b2d  push cs  [x443]
    c.push16(c.cs);
    // 6693:0b2e  call 0x6b3  [x443]
    c.push16(0xb31u); code_6(c, 0x66fe3u); if (c.ip != 0xb31u) c.badReturn(0x6745e);
L67461:
    if (c.tracing) c.traceAt(0x67461);
    // 6693:0b31  mov eax, dword ptr [4]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 6693:0b35  mov dword ptr [0], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 6693:0b39  push cs  [x443]
    c.push16(c.cs);
    // 6693:0b3a  call 0x2c9  [x443]
    c.push16(0xb3du); code_6(c, 0x66bf9u); if (c.ip != 0xb3du) c.badReturn(0x6746a);
L6746d:
    if (c.tracing) c.traceAt(0x6746d);
    // 6693:0b3d  push cs  [x443]
    c.push16(c.cs);
    // 6693:0b3e  call 0xa98  [x443]
    c.push16(0xb41u); code_6(c, 0x673c8u); if (c.ip != 0xb41u) c.badReturn(0x6746e);
L67471:
    if (c.tracing) c.traceAt(0x67471);
    // 6693:0b41  push cs  [x443]
    c.push16(c.cs);
    // 6693:0b42  call 0x76e  [x443]
    c.push16(0xb45u); code_6(c, 0x6709eu); if (c.ip != 0xb45u) c.badReturn(0x67472);
L67475:
    if (c.tracing) c.traceAt(0x67475);
    // 6693:0b45  mov cx, word ptr [0xc3]  [x443]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc3u)));
L67479:
    if (c.tracing) c.traceAt(0x67479);
    // 6693:0b49  mov eax, dword ptr [0xbc]  [x443]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbcu)));
    // 6693:0b4d  add dword ptr [0xb4], eax  [x443]
    c.w32(c.dsb + (uint16_t)(0xb4u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb4u)), c.a.e, true));
    // 6693:0b52  loop 0xb49  [x443]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67479;
L67484:
    if (c.tracing) c.traceAt(0x67484);
    // 6693:0b54  mov bl, 0  [x443]
    c.b.l = (uint8_t)(0x0u);
    // 6693:0b56  lcall 0x2cf2, 0  [x443]
    c.push16(c.cs); c.push16(0xb5bu); c.loadCs(0x2cf2u); c.callLinear(c.csb + 0x0u);
L6748b:
    if (c.tracing) c.traceAt(0x6748b);
    // 6693:0b5b  push cs  [x443]
    c.push16(c.cs);
    // 6693:0b5c  call 0x47  [x443]
    c.push16(0xb5fu); code_6(c, 0x66977u); if (c.ip != 0xb5fu) c.badReturn(0x6748c);
L6748f:
    if (c.tracing) c.traceAt(0x6748f);
    // 6693:0b5f  mov cx, word ptr [0xc3]  [x443]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xc3u)));
    // 6693:0b63  mov bx, 0xe  [x443]
    c.b.x = (uint16_t)(0xeu);
    // 6693:0b66  int 0xff  [x443]
    c.ip = 0xb68u; c.d32 = false; c.intr(0xff, 0xb68u);
L67498:
    if (c.tracing) c.traceAt(0x67498);
    // 6693:0b68  mov word ptr [0xc3], ax  [x443]
    c.w16(c.dsb + (uint16_t)(0xc3u), c.a.x);
    // 6693:0b6b  sub word ptr [0xc1], cx  [x443]
    c.w16(c.dsb + (uint16_t)(0xc1u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xc1u)), c.c.x, true));
    // 6693:0b6f  jns 0xb2d  [x443]
    if (!c.sf) goto L6745d;
L674a1:
    if (c.tracing) c.traceAt(0x674a1);
    // 6693:0b71  retf   [x4]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L674a2:
    if (c.tracing) c.traceAt(0x674a2);
    // 6693:0b72  cld   [x2]
    c.df = false;
    // 6693:0b73  push ds  [x2]
    c.push16(c.ds);
    // 6693:0b74  mov ds, ax  [x2]
    c.loadDs(c.a.x);
L674a6:
    if (c.tracing) c.traceAt(0x674a6);
    // 6693:0b76  rep movsb byte ptr es:[di], byte ptr [si]  [x1154]
    c.ip = 0xb78u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L674a8:
    if (c.tracing) c.traceAt(0x674a8);
    // 6693:0b78  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 6693:0b79  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L674aa:
    if (c.tracing) c.traceAt(0x674aa);
    // 6693:0b7a  mov ax, 0x6565  [x1]
    c.a.x = (uint16_t)(0x6565u);
    // 6693:0b7d  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6693:0b7f  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 6693:0b82  mov ax, 0  [x1]
    c.a.x = (uint16_t)(0x0u);
    // 6693:0b85  int 0xff  [x1]
    c.ip = 0xb87u; c.d32 = false; c.intr(0xff, 0xb87u);
L674b7:
    if (c.tracing) c.traceAt(0x674b7);
    // 6693:0b87  mov ax, 0x4398  [x1]
    c.a.x = (uint16_t)(0x4398u);
    // 6693:0b8a  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6693:0b8d  mov si, 0x51  [x1]
    c.si.x = (uint16_t)(0x51u);
    // 6693:0b90  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6693:0b92  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6693:0b95  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 6693:0b97  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0b99  mov di, 0x3c5  [x1]
    c.di.x = (uint16_t)(0x3c5u);
    // 6693:0b9c  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6693:0b9f  mov ax, 0x3366  [x1]
    c.a.x = (uint16_t)(0x3366u);
    // 6693:0ba2  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 6693:0ba5  push cs  [x1]
    c.push16(c.cs);
    // 6693:0ba6  call 0xb72  [x1]
    c.push16(0xba9u); code_6(c, 0x674a2u); if (c.ip != 0xba9u) c.badReturn(0x674d6);
L674d9:
    if (c.tracing) c.traceAt(0x674d9);
    // 6693:0ba9  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 6693:0bab  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0bad  mov di, 0xc5  [x1]
    c.di.x = (uint16_t)(0xc5u);
    // 6693:0bb0  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 6693:0bb3  mov ax, 0x4338  [x1]
    c.a.x = (uint16_t)(0x4338u);
    // 6693:0bb6  mov cx, 0x180  [x1]
    c.c.x = (uint16_t)(0x180u);
    // 6693:0bb9  push cs  [x1]
    c.push16(c.cs);
    // 6693:0bba  call 0xb72  [x1]
    c.push16(0xbbdu); code_6(c, 0x674a2u); if (c.ip != 0xbbdu) c.badReturn(0x674ea);
L674ed:
    if (c.tracing) c.traceAt(0x674ed);
    // 6693:0bbd  mov word ptr [0x12ca], 0xc5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12cau), 0xc5u);
    // 6693:0bc3  mov word ptr [0x12cc], 0x3c5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12ccu), 0x3c5u);
    // 6693:0bc9  mov word ptr [0x12ce], 0x6c5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12ceu), 0x6c5u);
    // 6693:0bcf  mov word ptr [0x12d0], 0xcc5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12d0u), 0xcc5u);
    // 6693:0bd5  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6693:0bd8  mov byte ptr [0x12c9], 0x1e  [x1]
    c.w8(c.dsb + (uint16_t)(0x12c9u), 0x1eu);
    // 6693:0bdd  push cs  [x1]
    c.push16(c.cs);
    // 6693:0bde  call 0  [x1]
    c.push16(0xbe1u); code_6(c, 0x66930u); if (c.ip != 0xbe1u) c.badReturn(0x6750e);
L67511:
    if (c.tracing) c.traceAt(0x67511);
    // 6693:0be1  mov ax, 0x6565  [x1]
    c.a.x = (uint16_t)(0x6565u);
    // 6693:0be4  mov si, 0xc5  [x1]
    c.si.x = (uint16_t)(0xc5u);
    // 6693:0be7  push cs  [x1]
    c.push16(c.cs);
    // 6693:0be8  call 0xab4  [x1]
    c.push16(0xbebu); code_6(c, 0x673e4u); if (c.ip != 0xbebu) c.badReturn(0x67518);
L6751b:
    if (c.tracing) c.traceAt(0x6751b);
    // 6693:0beb  mov word ptr [0xc3], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xc3u), 0x1u);
    // 6693:0bf1  mov ax, 0x2cf8  [x1]
    c.a.x = (uint16_t)(0x2cf8u);
    // 6693:0bf4  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0bf6  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6693:0bf9  mov si, 0x4d  [x1]
    c.si.x = (uint16_t)(0x4du);
    // 6693:0bfc  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6693:0bfe  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6693:0c01  les di, ptr [0x4d]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:0c05  mov dword ptr es:[di + 4], 0  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x4u), 0x0u);
    // 6693:0c0e  mov dword ptr es:[di + 8], 7  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x8u), 0x7u);
    // 6693:0c17  mov dword ptr es:[di + 0xc], 0  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0xcu), 0x0u);
    // 6693:0c20  mov ax, 0x10f0  [x1]
    c.a.x = (uint16_t)(0x10f0u);
    // 6693:0c23  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 6693:0c27  mov dword ptr [4], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 6693:0c2b  mov dword ptr [0xb4], 0xfaba0000  [x1]
    c.w32(c.dsb + (uint16_t)(0xb4u), 0xfaba0000u);
    // 6693:0c34  mov dword ptr [0xbc], 0x60000  [x1]
    c.w32(c.dsb + (uint16_t)(0xbcu), 0x60000u);
    // 6693:0c3d  mov byte ptr [0xc0], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xc0u), 0x0u);
    // 6693:0c42  mov word ptr [0xc1], 0x6e  [x1]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0x6eu);
    // 6693:0c48  push cs  [x1]
    c.push16(c.cs);
    // 6693:0c49  call 0xb2d  [x1]
    c.push16(0xc4cu); code_6(c, 0x6745du); if (c.ip != 0xc4cu) c.badReturn(0x67579);
L6757c:
    if (c.tracing) c.traceAt(0x6757c);
    // 6693:0c4c  mov word ptr [0xc1], 0x64  [x1]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0x64u);
    // 6693:0c52  mov dword ptr [0xbc], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbcu), 0x0u);
    // 6693:0c5b  push cs  [x1]
    c.push16(c.cs);
    // 6693:0c5c  call 0xb2d  [x1]
    c.push16(0xc5fu); code_6(c, 0x6745du); if (c.ip != 0xc5fu) c.badReturn(0x6758c);
L6758f:
    if (c.tracing) c.traceAt(0x6758f);
    // 6693:0c5f  push ds  [x1]
    c.push16(c.ds);
    // 6693:0c60  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 6693:0c63  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0c65  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 6693:0c67  add di, 0x4600  [x1]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4600u, false));
    // 6693:0c6b  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 6693:0c6d  add si, 0x4600  [x1]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4600u, true));
    // 6693:0c71  mov ax, 0x3396  [x1]
    c.a.x = (uint16_t)(0x3396u);
    // 6693:0c74  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6693:0c76  mov cx, 0x2d00  [x1]
    c.c.x = (uint16_t)(0x2d00u);
    // 6693:0c79  cld   [x1]
    c.df = false;
L675aa:
    if (c.tracing) c.traceAt(0x675aa);
    // 6693:0c7a  rep movsd dword ptr es:[di], dword ptr [si]  [x11521]
    c.ip = 0xc7du; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L675ad:
    if (c.tracing) c.traceAt(0x675ad);
    // 6693:0c7d  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 6693:0c7e  les di, ptr [0x4d]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:0c82  mov ebp, dword ptr es:[di + 0x10]  [x1]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.di.x + 0x10u)));
    // 6693:0c87  mov ecx, dword ptr es:[di + 0x14]  [x1]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.di.x + 0x14u)));
    // 6693:0c8c  mov edx, dword ptr es:[di + 0x18]  [x1]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.di.x + 0x18u)));
    // 6693:0c91  mov ax, 0x3113  [x1]
    c.a.x = (uint16_t)(0x3113u);
    // 6693:0c94  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0c96  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6693:0c99  mov si, 0x4d  [x1]
    c.si.x = (uint16_t)(0x4du);
    // 6693:0c9c  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 6693:0c9e  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 6693:0ca1  les di, ptr [0x4d]  [x1]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x4du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x4du) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
    // 6693:0ca5  mov dword ptr es:[di + 0x10], ebp  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x10u), c.bp.e);
    // 6693:0caa  mov dword ptr es:[di + 0x14], ecx  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x14u), c.c.e);
    // 6693:0caf  mov dword ptr es:[di + 0x18], edx  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x18u), c.dx_.e);
    // 6693:0cb4  mov dword ptr es:[di + 8], 7  [x1]
    c.w32(c.esb + (uint16_t)(c.di.x + 0x8u), 0x7u);
    // 6693:0cbd  mov ax, 0x960  [x1]
    c.a.x = (uint16_t)(0x960u);
    // 6693:0cc0  movzx eax, ax  [x1]
    c.a.e = (uint32_t)(c.a.x);
    // 6693:0cc4  mov dword ptr [4], eax  [x1]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 6693:0cc8  mov dword ptr [0xbc], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbcu), 0x0u);
    // 6693:0cd1  mov word ptr [0xc1], 0xc7  [x1]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0xc7u);
    // 6693:0cd7  push cs  [x1]
    c.push16(c.cs);
    // 6693:0cd8  call 0xb2d  [x1]
    c.push16(0xcdbu); code_6(c, 0x6745du); if (c.ip != 0xcdbu) c.badReturn(0x67608);
L6760b:
    if (c.tracing) c.traceAt(0x6760b);
    // 6693:0cdb  mov byte ptr [0x12c8], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x12c8u), 0x0u);
    // 6693:0ce0  mov byte ptr [0x12c7], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x12c7u), 0x0u);
    // 6693:0ce5  mov word ptr [0xc1], 0x1e  [x1]
    c.w16(c.dsb + (uint16_t)(0xc1u), 0x1eu);
    // 6693:0ceb  push cs  [x1]
    c.push16(c.cs);
    // 6693:0cec  call 0xb2d  [x1]
    c.push16(0xcefu); code_6(c, 0x6745du); if (c.ip != 0xcefu) c.badReturn(0x6761c);
L6761f:
    if (c.tracing) c.traceAt(0x6761f);
    // 6693:0cef  push ds  [x1]
    c.push16(c.ds);
    // 6693:0cf0  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 6693:0cf3  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 6693:0cf5  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 6693:0cf7  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 6693:0cf9  mov ax, 0x3396  [x1]
    c.a.x = (uint16_t)(0x3396u);
    // 6693:0cfc  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 6693:0cfe  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
    // 6693:0d01  cld   [x1]
    c.df = false;
L67632:
    if (c.tracing) c.traceAt(0x67632);
    // 6693:0d02  rep movsd dword ptr es:[di], dword ptr [si]  [x16001]
    c.ip = 0xd05u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L67635:
    if (c.tracing) c.traceAt(0x67635);
    // 6693:0d05  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 6693:0d06  mov word ptr [0x49], 0x78  [x1]
    c.w16(c.dsb + (uint16_t)(0x49u), 0x78u);
L6763c:
    if (c.tracing) c.traceAt(0x6763c);
    // 6693:0d0c  mov bx, 0xe  [x120]
    c.b.x = (uint16_t)(0xeu);
    // 6693:0d0f  int 0xff  [x120]
    c.ip = 0xd11u; c.d32 = false; c.intr(0xff, 0xd11u);
L67641:
    if (c.tracing) c.traceAt(0x67641);
    // 6693:0d11  dec word ptr [0x49]  [x120]
    c.w16(c.dsb + (uint16_t)(0x49u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x49u)), true));
    // 6693:0d15  jne 0xd0c  [x120]
    if (!c.zf) goto L6763c;
L67647:
    if (c.tracing) c.traceAt(0x67647);
    // 6693:0d17  mov word ptr [0x12ca], 0x3c5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12cau), 0x3c5u);
    // 6693:0d1d  mov word ptr [0x12cc], 0xc5  [x1]
    c.w16(c.dsb + (uint16_t)(0x12ccu), 0xc5u);
    // 6693:0d23  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 6693:0d25  push ds  [x1]
    c.push16(c.ds);
    // 6693:0d26  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 6693:0d27  mov di, word ptr [0x12cc]  [x1]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x12ccu)));
    // 6693:0d2b  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L6765e:
    if (c.tracing) c.traceAt(0x6765e);
    // 6693:0d2e  rep stosb byte ptr es:[di], al  [x769]
    c.stos<8, false>(1);
L67660:
    if (c.tracing) c.traceAt(0x67660);
    // 6693:0d30  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 6693:0d33  mov byte ptr [0x12c9], 0xb4  [x1]
    c.w8(c.dsb + (uint16_t)(0x12c9u), 0xb4u);
    // 6693:0d38  push cs  [x1]
    c.push16(c.cs);
    // 6693:0d39  call 0  [x1]
    c.push16(0xd3cu); code_6(c, 0x66930u); if (c.ip != 0xd3cu) c.badReturn(0x67669);
L6766c:
    if (c.tracing) c.traceAt(0x6766c);
    // 6693:0d3c  mov word ptr [0x49], 0xb4  [x1]
    c.w16(c.dsb + (uint16_t)(0x49u), 0xb4u);
L67672:
    if (c.tracing) c.traceAt(0x67672);
    // 6693:0d42  push cs  [x180]
    c.push16(c.cs);
    // 6693:0d43  call 0x47  [x180]
    c.push16(0xd46u); code_6(c, 0x66977u); if (c.ip != 0xd46u) c.badReturn(0x67673);
L67676:
    if (c.tracing) c.traceAt(0x67676);
    // 6693:0d46  mov bx, 0xe  [x180]
    c.b.x = (uint16_t)(0xeu);
    // 6693:0d49  int 0xff  [x180]
    c.ip = 0xd4bu; c.d32 = false; c.intr(0xff, 0xd4bu);
L6767b:
    if (c.tracing) c.traceAt(0x6767b);
    // 6693:0d4b  dec word ptr [0x49]  [x180]
    c.w16(c.dsb + (uint16_t)(0x49u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x49u)), true));
    // 6693:0d4f  jne 0xd42  [x180]
    if (!c.zf) goto L67672;
L67681:
    if (c.tracing) c.traceAt(0x67681);
    // 6693:0d51  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 6693:0d53  int 0x21  [x1]
    c.ip = 0xd55u; c.d32 = false; c.intr(0x21, 0xd55u);
    c.notTranslated(0x67685, "fall-through");
}

static Register reg06(6, {0x2cf20, 0x2cf24, 0x66930, 0x6693a, 0x66963, 0x6696f, 0x66976, 0x66977, 0x6697e, 0x6698c, 0x66996, 0x669aa, 0x669b1, 0x669b2, 0x66bf9, 0x66c02, 0x66c4f, 0x66c53, 0x66c77, 0x66d14, 0x66d17, 0x66d98, 0x66db0, 0x66dc6, 0x66de6, 0x66df0, 0x66e03, 0x66e28, 0x66e48, 0x66e52, 0x66e65, 0x66e8a, 0x66e92, 0x66ead, 0x66ebb, 0x66ec1, 0x66ec3, 0x66ec7, 0x66ec9, 0x66ece, 0x66ed0, 0x66ef2, 0x66eff, 0x66f1f, 0x66f29, 0x66f3c, 0x66f61, 0x66f68, 0x66f73, 0x66f93, 0x66f9d, 0x66fb0, 0x66fd5, 0x66fe2, 0x66fe3, 0x66ff7, 0x66ffa, 0x66ffd, 0x67009, 0x6701b, 0x6701e, 0x67021, 0x67029, 0x6709e, 0x670b2, 0x670b7, 0x671be, 0x671d9, 0x67218, 0x67249, 0x67287, 0x6728b, 0x672bf, 0x672cd, 0x672d3, 0x672d8, 0x672db, 0x672dd, 0x672ef, 0x672f6, 0x672fd, 0x67312, 0x67327, 0x67368, 0x6736a, 0x67374, 0x6737a, 0x6739c, 0x673af, 0x673c7, 0x673c8, 0x673e4, 0x673f6, 0x673f8, 0x6745d, 0x67461, 0x6746d, 0x67471, 0x67475, 0x67479, 0x67484, 0x6748b, 0x6748f, 0x67498, 0x674a1, 0x674a2, 0x674a6, 0x674a8, 0x674aa, 0x674b7, 0x674d9, 0x674ed, 0x67511, 0x6751b, 0x6757c, 0x6758f, 0x675aa, 0x675ad, 0x6760b, 0x6761f, 0x67632, 0x67635, 0x6763c, 0x67641, 0x67647, 0x6765e, 0x67660, 0x6766c, 0x67672, 0x67676, 0x6767b, 0x67681}, code_6);

}  // namespace angel
