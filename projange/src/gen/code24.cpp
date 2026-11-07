// Program 24, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_24(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x4d3be: goto L4d3be;
    case 0x4d3c2: goto L4d3c2;
    case 0x4d3c4: goto L4d3c4;
    case 0x4d3c6: goto L4d3c6;
    case 0x4d3d0: goto L4d3d0;
    case 0x4d3f9: goto L4d3f9;
    case 0x4d405: goto L4d405;
    case 0x4d40c: goto L4d40c;
    case 0x4d40d: goto L4d40d;
    case 0x4d414: goto L4d414;
    case 0x4d424: goto L4d424;
    case 0x4d42e: goto L4d42e;
    case 0x4d442: goto L4d442;
    case 0x4d449: goto L4d449;
    case 0x4d44a: goto L4d44a;
    case 0x4d45d: goto L4d45d;
    case 0x4d468: goto L4d468;
    case 0x4d46a: goto L4d46a;
    case 0x4d477: goto L4d477;
    case 0x4d485: goto L4d485;
    case 0x4d492: goto L4d492;
    case 0x4d494: goto L4d494;
    case 0x4d49e: goto L4d49e;
    case 0x4d4c9: goto L4d4c9;
    case 0x4d4cc: goto L4d4cc;
    case 0x4d4f8: goto L4d4f8;
    case 0x4d4fb: goto L4d4fb;
    case 0x4d527: goto L4d527;
    case 0x4d52a: goto L4d52a;
    case 0x4d556: goto L4d556;
    case 0x4d559: goto L4d559;
    case 0x4d56e: goto L4d56e;
    case 0x4d592: goto L4d592;
    case 0x4d598: goto L4d598;
    case 0x4d59d: goto L4d59d;
    case 0x4d5a2: goto L4d5a2;
    case 0x4d5a7: goto L4d5a7;
    case 0x4d5b7: goto L4d5b7;
    case 0x4d5bc: goto L4d5bc;
    case 0x4d5c0: goto L4d5c0;
    case 0x4d5cb: goto L4d5cb;
    case 0x4d5ef: goto L4d5ef;
    case 0x4d5fb: goto L4d5fb;
    case 0x4d600: goto L4d600;
    case 0x4d606: goto L4d606;
    case 0x4d616: goto L4d616;
    case 0x4d61b: goto L4d61b;
    case 0x4d61f: goto L4d61f;
    case 0x4d62a: goto L4d62a;
    case 0x4d634: goto L4d634;
    default: c.callLinear(t); return;
    }
L4d3be:
    if (c.tracing) c.traceAt(0x4d3be);
    // 4d3b:000e  cld   [x1]
    c.df = false;
    // 4d3b:000f  push ds  [x1]
    c.push16(c.ds);
    // 4d3b:0010  mov ds, ax  [x1]
    c.loadDs(c.a.x);
L4d3c2:
    if (c.tracing) c.traceAt(0x4d3c2);
    // 4d3b:0012  rep movsb byte ptr es:[di], byte ptr [si]  [x769]
    c.ip = 0x14u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L4d3c4:
    if (c.tracing) c.traceAt(0x4d3c4);
    // 4d3b:0014  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:0015  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4d3c6:
    if (c.tracing) c.traceAt(0x4d3c6);
    // 4d3b:0016  mov si, 0  [x2]
    c.si.x = (uint16_t)(0x0u);
    // 4d3b:0019  mov bp, 0x300  [x2]
    c.bp.x = (uint16_t)(0x300u);
    // 4d3b:001c  mov di, word ptr [0x211e]  [x2]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211eu)));
L4d3d0:
    if (c.tracing) c.traceAt(0x4d3d0);
    // 4d3b:0020  xor ax, ax  [x1536]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 4d3b:0022  xor cx, cx  [x1536]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 4d3b:0024  mov bx, word ptr [0x2118]  [x1536]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2118u)));
    // 4d3b:0028  mov al, byte ptr [bx + si]  [x1536]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 4d3b:002a  mov bx, word ptr [0x211a]  [x1536]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211au)));
    // 4d3b:002e  mov cl, byte ptr [bx + si]  [x1536]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 4d3b:0030  sub cx, ax  [x1536]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, false));
    // 4d3b:0032  mov ax, cx  [x1536]
    c.a.x = (uint16_t)(c.c.x);
    // 4d3b:0034  shl ax, 7  [x1536]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 4d3b:0037  cdq   [x1536]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 4d3b:0038  xor ch, ch  [x1536]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), false));
    // 4d3b:003a  mov cl, byte ptr [0x2117]  [x1536]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x2117u)));
    // 4d3b:003e  idiv cx  [x1536]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x3eu); }   // #DE: int 0, then again
    // 4d3b:0040  mov word ptr [di], ax  [x1536]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 4d3b:0042  inc si  [x1536]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 4d3b:0043  add di, 2  [x1536]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 4d3b:0046  dec bp  [x1536]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 4d3b:0047  jne 0x20  [x1536]
    if (!c.zf) goto L4d3d0;
L4d3f9:
    if (c.tracing) c.traceAt(0x4d3f9);
    // 4d3b:0049  mov si, word ptr [0x2118]  [x2]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x2118u)));
    // 4d3b:004d  mov di, word ptr [0x211c]  [x2]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211cu)));
    // 4d3b:0051  mov cx, 0x300  [x2]
    c.c.x = (uint16_t)(0x300u);
    // 4d3b:0054  cld   [x2]
    c.df = false;
L4d405:
    if (c.tracing) c.traceAt(0x4d405);
    // 4d3b:0055  lodsb al, byte ptr [si]  [x1536]
    c.ip = 0x56u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4d3b:0056  shl ax, 7  [x1536]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), true));
    // 4d3b:0059  stosw word ptr es:[di], ax  [x1536]
    c.stos<16, false>(0);
    // 4d3b:005a  loop 0x55  [x1536]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4d405;
L4d40c:
    if (c.tracing) c.traceAt(0x4d40c);
    // 4d3b:005c  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4d40d:
    if (c.tracing) c.traceAt(0x4d40d);
    // 4d3b:005d  cmp byte ptr [0x2115], 0  [x122]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x2115u)), 0x0u, true);
    // 4d3b:0062  js 0x99  [x122]
    if (c.sf) goto L4d449;
L4d414:
    if (c.tracing) c.traceAt(0x4d414);
    // 4d3b:0064  nop   [x122]
    // 4d3b:0065  nop   [x122]
    // 4d3b:0066  mov si, word ptr [0x211e]  [x122]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211eu)));
    // 4d3b:006a  mov di, word ptr [0x211c]  [x122]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211cu)));
    // 4d3b:006e  mov cx, 0x300  [x122]
    c.c.x = (uint16_t)(0x300u);
    // 4d3b:0071  mov dx, 2  [x122]
    c.dx_.x = (uint16_t)(0x2u);
L4d424:
    if (c.tracing) c.traceAt(0x4d424);
    // 4d3b:0074  mov bx, word ptr [si]  [x93696]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 4d3b:0076  add word ptr [di], bx  [x93696]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x)), c.b.x, false));
    // 4d3b:0078  add di, dx  [x93696]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 4d3b:007a  add si, dx  [x93696]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, true));
    // 4d3b:007c  loop 0x74  [x93696]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4d424;
L4d42e:
    if (c.tracing) c.traceAt(0x4d42e);
    // 4d3b:007e  mov dx, 0x3c7  [x122]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 4d3b:0081  mov al, 1  [x122]
    c.a.l = (uint8_t)(0x1u);
    // 4d3b:0083  out dx, al  [x122]
    c.ip = 0x84u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0084  inc dx  [x122]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 4d3b:0085  xor al, al  [x122]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 4d3b:0087  out dx, al  [x122]
    c.ip = 0x88u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0088  mov si, word ptr [0x211c]  [x122]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x211cu)));
    // 4d3b:008c  mov cx, 0x300  [x122]
    c.c.x = (uint16_t)(0x300u);
    // 4d3b:008f  mov dx, 0x3c9  [x122]
    c.dx_.x = (uint16_t)(0x3c9u);
L4d442:
    if (c.tracing) c.traceAt(0x4d442);
    // 4d3b:0092  lodsw ax, word ptr [si]  [x93696]
    c.ip = 0x93u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 4d3b:0093  sar ax, 7  [x93696]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), true));
    // 4d3b:0096  out dx, al  [x93696]
    c.ip = 0x97u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0097  loop 0x92  [x93696]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4d442;
L4d449:
    if (c.tracing) c.traceAt(0x4d449);
    // 4d3b:0099  retf   [x122]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4d44a:
    if (c.tracing) c.traceAt(0x4d44a);
    // 4d3b:009a  push ds  [x2]
    c.push16(c.ds);
    // 4d3b:009b  mov ds, ax  [x2]
    c.loadDs(c.a.x);
    // 4d3b:009d  mov dx, 0x3c7  [x2]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 4d3b:00a0  mov al, 1  [x2]
    c.a.l = (uint8_t)(0x1u);
    // 4d3b:00a2  out dx, al  [x2]
    c.ip = 0xa3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:00a3  cld   [x2]
    c.df = false;
    // 4d3b:00a4  mov dx, 0x3c8  [x2]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 4d3b:00a7  mov al, 0  [x2]
    c.a.l = (uint8_t)(0x0u);
    // 4d3b:00a9  out dx, al  [x2]
    c.ip = 0xaau; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:00aa  mov cx, 0xff  [x2]
    c.c.x = (uint16_t)(0xffu);
L4d45d:
    if (c.tracing) c.traceAt(0x4d45d);
    // 4d3b:00ad  mov dx, 0x3c9  [x510]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 4d3b:00b0  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xb1u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4d3b:00b1  out dx, al  [x510]
    c.ip = 0xb2u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:00b2  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xb3u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4d3b:00b3  out dx, al  [x510]
    c.ip = 0xb4u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:00b4  lodsb al, byte ptr [si]  [x510]
    c.ip = 0xb5u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 4d3b:00b5  out dx, al  [x510]
    c.ip = 0xb6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:00b6  loop 0xad  [x510]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L4d45d;
L4d468:
    if (c.tracing) c.traceAt(0x4d468);
    // 4d3b:00b8  pop ds  [x2]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:00b9  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L4d46a:
    if (c.tracing) c.traceAt(0x4d46a);
    // 4d3b:00ba  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:00bd  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4d3b:00bf  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 4d3b:00c2  mov ax, 6  [x1]
    c.a.x = (uint16_t)(0x6u);
    // 4d3b:00c5  int 0xff  [x1]
    c.ip = 0xc7u; c.d32 = false; c.intr(0xff, 0xc7u);
L4d477:
    if (c.tracing) c.traceAt(0x4d477);
    // 4d3b:00c7  mov dx, 2  [x1]
    c.dx_.x = (uint16_t)(0x2u);
    // 4d3b:00ca  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:00cd  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:00cf  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:00d1  mov ah, 0x10  [x1]
    c.a.h = (uint8_t)(0x10u);
    // 4d3b:00d3  int 0x10  [x1]
    c.ip = 0xd5u; c.d32 = false; c.intr(0x10, 0xd5u);
L4d485:
    if (c.tracing) c.traceAt(0x4d485);
    // 4d3b:00d5  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 4d3b:00d7  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:00d9  mov di, 0x13  [x1]
    c.di.x = (uint16_t)(0x13u);
    // 4d3b:00dc  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 4d3b:00df  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 4d3b:00e1  cld   [x1]
    c.df = false;
L4d492:
    if (c.tracing) c.traceAt(0x4d492);
    // 4d3b:00e2  rep stosb byte ptr es:[di], al  [x769]
    c.stos<8, false>(1);
L4d494:
    if (c.tracing) c.traceAt(0x4d494);
    // 4d3b:00e4  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:00e7  mov si, 0x13  [x1]
    c.si.x = (uint16_t)(0x13u);
    // 4d3b:00ea  push cs  [x1]
    c.push16(c.cs);
    // 4d3b:00eb  call 0x9a  [x1]
    c.push16(0xeeu); code_24(c, 0x4d44au); if (c.ip != 0xeeu) c.badReturn(0x4d49b);
L4d49e:
    if (c.tracing) c.traceAt(0x4d49e);
    // 4d3b:00ee  mov ah, 1  [x1]
    c.a.h = (uint8_t)(0x1u);
    // 4d3b:00f0  mov cl, 0  [x1]
    c.c.l = (uint8_t)(0x0u);
    // 4d3b:00f2  shl ah, cl  [x1]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4d3b:00f4  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4d3b:00f7  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:00f9  out dx, ax  [x1]
    c.ip = 0xfau; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4d3b:00fa  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 4d3b:00fd  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 4d3b:00ff  out dx, al  [x1]
    c.ip = 0x100u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0100  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 4d3b:0101  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 4d3b:0103  out dx, al  [x1]
    c.ip = 0x104u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0104  push ds  [x1]
    c.push16(c.ds);
    // 4d3b:0105  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 4d3b:0108  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:010a  mov ax, 0x24f1  [x1]
    c.a.x = (uint16_t)(0x24f1u);
    // 4d3b:010d  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4d3b:010f  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4d3b:0112  xor esi, esi  [x1]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
    // 4d3b:0115  cld   [x1]
    c.df = false;
    // 4d3b:0116  mov cx, 0x2580  [x1]
    c.c.x = (uint16_t)(0x2580u);
L4d4c9:
    if (c.tracing) c.traceAt(0x4d4c9);
    // 4d3b:0119  rep movsd dword ptr es:[di], dword ptr [si]  [x9601]
    c.ip = 0x11cu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L4d4cc:
    if (c.tracing) c.traceAt(0x4d4cc);
    // 4d3b:011c  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:011d  mov ah, 1  [x1]
    c.a.h = (uint8_t)(0x1u);
    // 4d3b:011f  mov cl, 1  [x1]
    c.c.l = (uint8_t)(0x1u);
    // 4d3b:0121  shl ah, cl  [x1]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4d3b:0123  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4d3b:0126  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:0128  out dx, ax  [x1]
    c.ip = 0x129u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4d3b:0129  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 4d3b:012c  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 4d3b:012e  out dx, al  [x1]
    c.ip = 0x12fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:012f  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 4d3b:0130  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 4d3b:0132  out dx, al  [x1]
    c.ip = 0x133u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0133  push ds  [x1]
    c.push16(c.ds);
    // 4d3b:0134  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 4d3b:0137  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:0139  mov ax, 0x2e53  [x1]
    c.a.x = (uint16_t)(0x2e53u);
    // 4d3b:013c  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4d3b:013e  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4d3b:0141  xor esi, esi  [x1]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
    // 4d3b:0144  cld   [x1]
    c.df = false;
    // 4d3b:0145  mov cx, 0x2580  [x1]
    c.c.x = (uint16_t)(0x2580u);
L4d4f8:
    if (c.tracing) c.traceAt(0x4d4f8);
    // 4d3b:0148  rep movsd dword ptr es:[di], dword ptr [si]  [x9601]
    c.ip = 0x14bu; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L4d4fb:
    if (c.tracing) c.traceAt(0x4d4fb);
    // 4d3b:014b  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:014c  mov ah, 1  [x1]
    c.a.h = (uint8_t)(0x1u);
    // 4d3b:014e  mov cl, 2  [x1]
    c.c.l = (uint8_t)(0x2u);
    // 4d3b:0150  shl ah, cl  [x1]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4d3b:0152  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4d3b:0155  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:0157  out dx, ax  [x1]
    c.ip = 0x158u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4d3b:0158  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 4d3b:015b  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 4d3b:015d  out dx, al  [x1]
    c.ip = 0x15eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:015e  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 4d3b:015f  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:0161  out dx, al  [x1]
    c.ip = 0x162u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0162  push ds  [x1]
    c.push16(c.ds);
    // 4d3b:0163  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 4d3b:0166  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:0168  mov ax, 0x37b5  [x1]
    c.a.x = (uint16_t)(0x37b5u);
    // 4d3b:016b  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4d3b:016d  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4d3b:0170  xor esi, esi  [x1]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
    // 4d3b:0173  cld   [x1]
    c.df = false;
    // 4d3b:0174  mov cx, 0x2580  [x1]
    c.c.x = (uint16_t)(0x2580u);
L4d527:
    if (c.tracing) c.traceAt(0x4d527);
    // 4d3b:0177  rep movsd dword ptr es:[di], dword ptr [si]  [x9601]
    c.ip = 0x17au; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L4d52a:
    if (c.tracing) c.traceAt(0x4d52a);
    // 4d3b:017a  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:017b  mov ah, 1  [x1]
    c.a.h = (uint8_t)(0x1u);
    // 4d3b:017d  mov cl, 3  [x1]
    c.c.l = (uint8_t)(0x3u);
    // 4d3b:017f  shl ah, cl  [x1]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 4d3b:0181  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 4d3b:0184  mov al, 2  [x1]
    c.a.l = (uint8_t)(0x2u);
    // 4d3b:0186  out dx, ax  [x1]
    c.ip = 0x187u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 4d3b:0187  mov dx, 0x3ce  [x1]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 4d3b:018a  mov al, 4  [x1]
    c.a.l = (uint8_t)(0x4u);
    // 4d3b:018c  out dx, al  [x1]
    c.ip = 0x18du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:018d  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 4d3b:018e  mov al, 3  [x1]
    c.a.l = (uint8_t)(0x3u);
    // 4d3b:0190  out dx, al  [x1]
    c.ip = 0x191u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 4d3b:0191  push ds  [x1]
    c.push16(c.ds);
    // 4d3b:0192  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 4d3b:0195  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:0197  mov ax, 0x4117  [x1]
    c.a.x = (uint16_t)(0x4117u);
    // 4d3b:019a  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 4d3b:019c  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 4d3b:019f  xor esi, esi  [x1]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
    // 4d3b:01a2  cld   [x1]
    c.df = false;
    // 4d3b:01a3  mov cx, 0x2580  [x1]
    c.c.x = (uint16_t)(0x2580u);
L4d556:
    if (c.tracing) c.traceAt(0x4d556);
    // 4d3b:01a6  rep movsd dword ptr es:[di], dword ptr [si]  [x9601]
    c.ip = 0x1a9u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L4d559:
    if (c.tracing) c.traceAt(0x4d559);
    // 4d3b:01a9  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 4d3b:01aa  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 4d3b:01ac  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 4d3b:01ae  mov di, 0x313  [x1]
    c.di.x = (uint16_t)(0x313u);
    // 4d3b:01b1  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 4d3b:01b4  mov ax, 0x4a79  [x1]
    c.a.x = (uint16_t)(0x4a79u);
    // 4d3b:01b7  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 4d3b:01ba  push cs  [x1]
    c.push16(c.cs);
    // 4d3b:01bb  call 0xe  [x1]
    c.push16(0x1beu); code_24(c, 0x4d3beu); if (c.ip != 0x1beu) c.badReturn(0x4d56b);
L4d56e:
    if (c.tracing) c.traceAt(0x4d56e);
    // 4d3b:01be  mov word ptr [0x2118], 0x13  [x1]
    c.w16(c.dsb + (uint16_t)(0x2118u), 0x13u);
    // 4d3b:01c4  mov word ptr [0x211a], 0x313  [x1]
    c.w16(c.dsb + (uint16_t)(0x211au), 0x313u);
    // 4d3b:01ca  mov word ptr [0x211c], 0x613  [x1]
    c.w16(c.dsb + (uint16_t)(0x211cu), 0x613u);
    // 4d3b:01d0  mov word ptr [0x211e], 0xc13  [x1]
    c.w16(c.dsb + (uint16_t)(0x211eu), 0xc13u);
    // 4d3b:01d6  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 4d3b:01d9  mov byte ptr [0x2117], 0x3d  [x1]
    c.w8(c.dsb + (uint16_t)(0x2117u), 0x3du);
    // 4d3b:01de  push cs  [x1]
    c.push16(c.cs);
    // 4d3b:01df  call 0x16  [x1]
    c.push16(0x1e2u); code_24(c, 0x4d3c6u); if (c.ip != 0x1e2u) c.badReturn(0x4d58f);
L4d592:
    if (c.tracing) c.traceAt(0x4d592);
    // 4d3b:01e2  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:01e5  mov si, 0x13  [x1]
    c.si.x = (uint16_t)(0x13u);
L4d598:
    if (c.tracing) c.traceAt(0x4d598);
    // 4d3b:01e8  mov bx, 0xe  [x967]
    c.b.x = (uint16_t)(0xeu);
    // 4d3b:01eb  int 0xff  [x967]
    c.ip = 0x1edu; c.d32 = false; c.intr(0xff, 0x1edu);
L4d59d:
    if (c.tracing) c.traceAt(0x4d59d);
    // 4d3b:01ed  mov bx, 0  [x967]
    c.b.x = (uint16_t)(0x0u);
    // 4d3b:01f0  int 0xff  [x967]
    c.ip = 0x1f2u; c.d32 = false; c.intr(0xff, 0x1f2u);
L4d5a2:
    if (c.tracing) c.traceAt(0x4d5a2);
    // 4d3b:01f2  cmp ah, 0x3b  [x967]
    c.sub<8>(c.a.h, 0x3bu, true);
    // 4d3b:01f5  jle 0x1e8  [x967]
    if ((c.zf || c.sf != c.of)) goto L4d598;
L4d5a7:
    if (c.tracing) c.traceAt(0x4d5a7);
    // 4d3b:01f7  mov byte ptr [0x2116], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2116u), 0x0u);
    // 4d3b:01fc  mov byte ptr [0x2115], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2115u), 0x0u);
    // 4d3b:0201  mov word ptr [0x2120], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x2120u), 0x0u);
L4d5b7:
    if (c.tracing) c.traceAt(0x4d5b7);
    // 4d3b:0207  mov bx, 0xe  [x61]
    c.b.x = (uint16_t)(0xeu);
    // 4d3b:020a  int 0xff  [x61]
    c.ip = 0x20cu; c.d32 = false; c.intr(0xff, 0x20cu);
L4d5bc:
    if (c.tracing) c.traceAt(0x4d5bc);
    // 4d3b:020c  push cs  [x61]
    c.push16(c.cs);
    // 4d3b:020d  call 0x5d  [x61]
    c.push16(0x210u); code_24(c, 0x4d40du); if (c.ip != 0x210u) c.badReturn(0x4d5bd);
L4d5c0:
    if (c.tracing) c.traceAt(0x4d5c0);
    // 4d3b:0210  inc word ptr [0x2120]  [x61]
    c.w16(c.dsb + (uint16_t)(0x2120u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2120u)), false));
    // 4d3b:0214  cmp word ptr [0x2120], 0x3c  [x61]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2120u)), 0x3cu, true);
    // 4d3b:0219  jle 0x207  [x61]
    if ((c.zf || c.sf != c.of)) goto L4d5b7;
L4d5cb:
    if (c.tracing) c.traceAt(0x4d5cb);
    // 4d3b:021b  mov word ptr [0x2118], 0x313  [x1]
    c.w16(c.dsb + (uint16_t)(0x2118u), 0x313u);
    // 4d3b:0221  mov word ptr [0x211a], 0x13  [x1]
    c.w16(c.dsb + (uint16_t)(0x211au), 0x13u);
    // 4d3b:0227  mov word ptr [0x211c], 0x613  [x1]
    c.w16(c.dsb + (uint16_t)(0x211cu), 0x613u);
    // 4d3b:022d  mov word ptr [0x211e], 0xc13  [x1]
    c.w16(c.dsb + (uint16_t)(0x211eu), 0xc13u);
    // 4d3b:0233  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 4d3b:0236  mov byte ptr [0x2117], 0x3d  [x1]
    c.w8(c.dsb + (uint16_t)(0x2117u), 0x3du);
    // 4d3b:023b  push cs  [x1]
    c.push16(c.cs);
    // 4d3b:023c  call 0x16  [x1]
    c.push16(0x23fu); code_24(c, 0x4d3c6u); if (c.ip != 0x23fu) c.badReturn(0x4d5ec);
L4d5ef:
    if (c.tracing) c.traceAt(0x4d5ef);
    // 4d3b:023f  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:0242  mov si, 0x13  [x1]
    c.si.x = (uint16_t)(0x13u);
    // 4d3b:0245  mov word ptr [0x2124], 0x258  [x1]
    c.w16(c.dsb + (uint16_t)(0x2124u), 0x258u);
L4d5fb:
    if (c.tracing) c.traceAt(0x4d5fb);
    // 4d3b:024b  mov bx, 0xe  [x600]
    c.b.x = (uint16_t)(0xeu);
    // 4d3b:024e  int 0xff  [x600]
    c.ip = 0x250u; c.d32 = false; c.intr(0xff, 0x250u);
L4d600:
    if (c.tracing) c.traceAt(0x4d600);
    // 4d3b:0250  dec word ptr [0x2124]  [x600]
    c.w16(c.dsb + (uint16_t)(0x2124u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0x2124u)), true));
    // 4d3b:0254  jne 0x24b  [x600]
    if (!c.zf) goto L4d5fb;
L4d606:
    if (c.tracing) c.traceAt(0x4d606);
    // 4d3b:0256  mov byte ptr [0x2116], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2116u), 0x0u);
    // 4d3b:025b  mov byte ptr [0x2115], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x2115u), 0x0u);
    // 4d3b:0260  mov word ptr [0x2120], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0x2120u), 0x0u);
L4d616:
    if (c.tracing) c.traceAt(0x4d616);
    // 4d3b:0266  mov bx, 0xe  [x61]
    c.b.x = (uint16_t)(0xeu);
    // 4d3b:0269  int 0xff  [x61]
    c.ip = 0x26bu; c.d32 = false; c.intr(0xff, 0x26bu);
L4d61b:
    if (c.tracing) c.traceAt(0x4d61b);
    // 4d3b:026b  push cs  [x61]
    c.push16(c.cs);
    // 4d3b:026c  call 0x5d  [x61]
    c.push16(0x26fu); code_24(c, 0x4d40du); if (c.ip != 0x26fu) c.badReturn(0x4d61c);
L4d61f:
    if (c.tracing) c.traceAt(0x4d61f);
    // 4d3b:026f  inc word ptr [0x2120]  [x61]
    c.w16(c.dsb + (uint16_t)(0x2120u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0x2120u)), false));
    // 4d3b:0273  cmp word ptr [0x2120], 0x3c  [x61]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0x2120u)), 0x3cu, true);
    // 4d3b:0278  jle 0x266  [x61]
    if ((c.zf || c.sf != c.of)) goto L4d616;
L4d62a:
    if (c.tracing) c.traceAt(0x4d62a);
    // 4d3b:027a  mov ax, 0x4b28  [x1]
    c.a.x = (uint16_t)(0x4b28u);
    // 4d3b:027d  mov si, 0x13  [x1]
    c.si.x = (uint16_t)(0x13u);
    // 4d3b:0280  push cs  [x1]
    c.push16(c.cs);
    // 4d3b:0281  call 0x9a  [x1]
    c.push16(0x284u); code_24(c, 0x4d44au); if (c.ip != 0x284u) c.badReturn(0x4d631);
L4d634:
    if (c.tracing) c.traceAt(0x4d634);
    // 4d3b:0284  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 4d3b:0286  int 0x21  [x1]
    c.ip = 0x288u; c.d32 = false; c.intr(0x21, 0x288u);
    c.notTranslated(0x4d638, "fall-through");
}

static Register reg24(24, {0x4d3be, 0x4d3c2, 0x4d3c4, 0x4d3c6, 0x4d3d0, 0x4d3f9, 0x4d405, 0x4d40c, 0x4d40d, 0x4d414, 0x4d424, 0x4d42e, 0x4d442, 0x4d449, 0x4d44a, 0x4d45d, 0x4d468, 0x4d46a, 0x4d477, 0x4d485, 0x4d492, 0x4d494, 0x4d49e, 0x4d4c9, 0x4d4cc, 0x4d4f8, 0x4d4fb, 0x4d527, 0x4d52a, 0x4d556, 0x4d559, 0x4d56e, 0x4d592, 0x4d598, 0x4d59d, 0x4d5a2, 0x4d5a7, 0x4d5b7, 0x4d5bc, 0x4d5c0, 0x4d5cb, 0x4d5ef, 0x4d5fb, 0x4d600, 0x4d606, 0x4d616, 0x4d61b, 0x4d61f, 0x4d62a, 0x4d634}, code_24);

}  // namespace angel
