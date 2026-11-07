// Program 14, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_14(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x7eb00: goto L7eb00;
    case 0x7eb0e: goto L7eb0e;
    case 0x7eb17: goto L7eb17;
    case 0x7eb29: goto L7eb29;
    case 0x7eb32: goto L7eb32;
    case 0x7eb88: goto L7eb88;
    case 0x7eb8f: goto L7eb8f;
    case 0x7eb95: goto L7eb95;
    case 0x7eb97: goto L7eb97;
    case 0x7ebb9: goto L7ebb9;
    case 0x7ebbc: goto L7ebbc;
    case 0x7ebde: goto L7ebde;
    case 0x7ebe1: goto L7ebe1;
    case 0x7ec03: goto L7ec03;
    case 0x7ec06: goto L7ec06;
    case 0x7ec28: goto L7ec28;
    case 0x7ec2c: goto L7ec2c;
    case 0x7ec48: goto L7ec48;
    case 0x7ec51: goto L7ec51;
    case 0x7ec63: goto L7ec63;
    case 0x7ec6c: goto L7ec6c;
    case 0x7ecac: goto L7ecac;
    case 0x7ecb3: goto L7ecb3;
    case 0x7ecb9: goto L7ecb9;
    case 0x7ecbb: goto L7ecbb;
    case 0x7ecd1: goto L7ecd1;
    case 0x7ecd4: goto L7ecd4;
    case 0x7ecea: goto L7ecea;
    case 0x7eced: goto L7eced;
    case 0x7ed03: goto L7ed03;
    case 0x7ed06: goto L7ed06;
    case 0x7ed1c: goto L7ed1c;
    case 0x7ed23: goto L7ed23;
    case 0x7ed37: goto L7ed37;
    case 0x7ed9b: goto L7ed9b;
    case 0x7eda4: goto L7eda4;
    case 0x7f078: goto L7f078;
    case 0x7f08e: goto L7f08e;
    case 0x7f097: goto L7f097;
    case 0x7f0a9: goto L7f0a9;
    case 0x7f0b2: goto L7f0b2;
    case 0x7f112: goto L7f112;
    case 0x7f119: goto L7f119;
    case 0x7f11f: goto L7f11f;
    case 0x7f121: goto L7f121;
    case 0x7f147: goto L7f147;
    case 0x7f14a: goto L7f14a;
    case 0x7f170: goto L7f170;
    case 0x7f173: goto L7f173;
    case 0x7f199: goto L7f199;
    case 0x7f19c: goto L7f19c;
    case 0x7f1c2: goto L7f1c2;
    case 0x7f1c4: goto L7f1c4;
    case 0x7f1dd: goto L7f1dd;
    case 0x7f1e6: goto L7f1e6;
    case 0x7f1f8: goto L7f1f8;
    case 0x7f201: goto L7f201;
    case 0x7f257: goto L7f257;
    case 0x7f25e: goto L7f25e;
    case 0x7f264: goto L7f264;
    case 0x7f266: goto L7f266;
    case 0x7f27e: goto L7f27e;
    case 0x7f28b: goto L7f28b;
    case 0x7f28e: goto L7f28e;
    case 0x7f2a6: goto L7f2a6;
    case 0x7f2b3: goto L7f2b3;
    case 0x7f2b6: goto L7f2b6;
    case 0x7f2ce: goto L7f2ce;
    case 0x7f2db: goto L7f2db;
    case 0x7f2de: goto L7f2de;
    case 0x7f2f6: goto L7f2f6;
    case 0x7f303: goto L7f303;
    case 0x7f308: goto L7f308;
    case 0x7f32a: goto L7f32a;
    case 0x7f38f: goto L7f38f;
    case 0x7f3ad: goto L7f3ad;
    case 0x7f3be: goto L7f3be;
    case 0x7f3ec: goto L7f3ec;
    case 0x7f415: goto L7f415;
    case 0x7f429: goto L7f429;
    case 0x7f457: goto L7f457;
    case 0x7f480: goto L7f480;
    case 0x7f484: goto L7f484;
    case 0x7f497: goto L7f497;
    case 0x7f4a0: goto L7f4a0;
    case 0x7f4b2: goto L7f4b2;
    case 0x7f4bb: goto L7f4bb;
    case 0x7f511: goto L7f511;
    case 0x7f518: goto L7f518;
    case 0x7f520: goto L7f520;
    case 0x7f523: goto L7f523;
    case 0x7f54a: goto L7f54a;
    case 0x7f54d: goto L7f54d;
    case 0x7f550: goto L7f550;
    case 0x7f577: goto L7f577;
    case 0x7f57a: goto L7f57a;
    case 0x7f57d: goto L7f57d;
    case 0x7f5a4: goto L7f5a4;
    case 0x7f5a7: goto L7f5a7;
    case 0x7f5aa: goto L7f5aa;
    case 0x7f5d1: goto L7f5d1;
    case 0x7f5d2: goto L7f5d2;
    case 0x7f5e5: goto L7f5e5;
    case 0x7f63d: goto L7f63d;
    case 0x7f640: goto L7f640;
    case 0x7f644: goto L7f644;
    case 0x7f649: goto L7f649;
    case 0x7f676: goto L7f676;
    case 0x7f681: goto L7f681;
    case 0x7f682: goto L7f682;
    case 0x7f695: goto L7f695;
    case 0x7f6a0: goto L7f6a0;
    case 0x7f6a2: goto L7f6a2;
    case 0x7f6b2: goto L7f6b2;
    case 0x7f6c5: goto L7f6c5;
    case 0x7f6d6: goto L7f6d6;
    case 0x7f6dd: goto L7f6dd;
    case 0x7f6e2: goto L7f6e2;
    case 0x7f6e7: goto L7f6e7;
    case 0x7f6f4: goto L7f6f4;
    case 0x7f701: goto L7f701;
    case 0x7f710: goto L7f710;
    case 0x7f731: goto L7f731;
    case 0x7f735: goto L7f735;
    case 0x7f756: goto L7f756;
    case 0x7f777: goto L7f777;
    case 0x7f77e: goto L7f77e;
    case 0x7f79e: goto L7f79e;
    case 0x7f7a5: goto L7f7a5;
    case 0x7f7a9: goto L7f7a9;
    case 0x7f7d7: goto L7f7d7;
    case 0x7f80e: goto L7f80e;
    case 0x7f825: goto L7f825;
    case 0x7f828: goto L7f828;
    case 0x7f834: goto L7f834;
    case 0x7f837: goto L7f837;
    case 0x7f841: goto L7f841;
    case 0x7f859: goto L7f859;
    case 0x7f88d: goto L7f88d;
    case 0x7f8b3: goto L7f8b3;
    case 0x7f8c4: goto L7f8c4;
    case 0x7f910: goto L7f910;
    case 0x7f92f: goto L7f92f;
    case 0x7f937: goto L7f937;
    case 0x7f939: goto L7f939;
    case 0x7f93f: goto L7f93f;
    case 0x7f94b: goto L7f94b;
    case 0x7f958: goto L7f958;
    case 0x7f98e: goto L7f98e;
    case 0x7f991: goto L7f991;
    case 0x7f996: goto L7f996;
    case 0x7f998: goto L7f998;
    case 0x7f999: goto L7f999;
    case 0x7f9ba: goto L7f9ba;
    case 0x7f9be: goto L7f9be;
    case 0x7f9c3: goto L7f9c3;
    case 0x7f9ce: goto L7f9ce;
    case 0x7f9dc: goto L7f9dc;
    case 0x7f9e2: goto L7f9e2;
    case 0x7f9e3: goto L7f9e3;
    case 0x7f9f3: goto L7f9f3;
    case 0x7f9fd: goto L7f9fd;
    case 0x7f9fe: goto L7f9fe;
    case 0x7fa11: goto L7fa11;
    case 0x7fa14: goto L7fa14;
    case 0x7fa18: goto L7fa18;
    case 0x7fa27: goto L7fa27;
    case 0x7fa2b: goto L7fa2b;
    case 0x7fa2f: goto L7fa2f;
    case 0x7fa33: goto L7fa33;
    case 0x7fa66: goto L7fa66;
    case 0x7fa98: goto L7fa98;
    case 0x7faab: goto L7faab;
    case 0x7fabe: goto L7fabe;
    case 0x7faea: goto L7faea;
    case 0x7fafd: goto L7fafd;
    case 0x7fb10: goto L7fb10;
    case 0x7fb23: goto L7fb23;
    default: c.callLinear(t); return;
    }
L7eb00:
    if (c.tracing) c.traceAt(0x7eb00);
    // 7eb0:0000  mov byte ptr [0xbb3], 0  [x2834]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0x0u);
    // 7eb0:0005  mov ax, word ptr [0xbb0]  [x2834]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb0u)));
    // 7eb0:0008  sub ax, word ptr [0xbac]  [x2834]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xbacu)), true));
    // 7eb0:000c  jns 0x17  [x2834]
    if (!c.sf) goto L7eb17;
L7eb0e:
    if (c.tracing) c.traceAt(0x7eb0e);
    // 7eb0:000e  nop   [x723]
    // 7eb0:000f  nop   [x723]
    // 7eb0:0010  mov byte ptr [0xbb3], 0xff  [x723]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0xffu);
    // 7eb0:0015  neg ax  [x723]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L7eb17:
    if (c.tracing) c.traceAt(0x7eb17);
    // 7eb0:0017  mov word ptr [0xbb4], ax  [x2834]
    c.w16(c.dsb + (uint16_t)(0xbb4u), c.a.x);
    // 7eb0:001a  mov byte ptr [0xbb2], 0  [x2834]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0x0u);
    // 7eb0:001f  mov bx, word ptr [0xbae]  [x2834]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaeu)));
    // 7eb0:0023  sub bx, word ptr [0xbaa]  [x2834]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbaau)), true));
    // 7eb0:0027  jns 0x32  [x2834]
    if (!c.sf) goto L7eb32;
L7eb29:
    if (c.tracing) c.traceAt(0x7eb29);
    // 7eb0:0029  nop   [x766]
    // 7eb0:002a  nop   [x766]
    // 7eb0:002b  mov byte ptr [0xbb2], 0xff  [x766]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0xffu);
    // 7eb0:0030  neg bx  [x766]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
L7eb32:
    if (c.tracing) c.traceAt(0x7eb32);
    // 7eb0:0032  mov word ptr [0xbb6], bx  [x2834]
    c.w16(c.dsb + (uint16_t)(0xbb6u), c.b.x);
    // 7eb0:0036  cmp ax, bx  [x2834]
    // 7eb0:0038  movzx eax, word ptr [0xbb4]  [x2834]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb4u)));
    // 7eb0:003e  cdq   [x2834]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:0040  shl eax, 0x18  [x2834]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0044  movzx ecx, word ptr [0xbc0]  [x2834]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:004a  div ecx  [x2834]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x4au); }   // #DE: int 0, then again
    // 7eb0:004d  mov dword ptr [0xbbc], eax  [x2834]
    c.w32(c.dsb + (uint16_t)(0xbbcu), c.a.e);
    // 7eb0:0051  movzx eax, word ptr [0xbb6]  [x2834]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb6u)));
    // 7eb0:0057  cdq   [x2834]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:0059  shl eax, 0x18  [x2834]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:005d  div ecx  [x2834]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x5du); }   // #DE: int 0, then again
    // 7eb0:0060  mov dword ptr [0xbb8], eax  [x2834]
    c.w32(c.dsb + (uint16_t)(0xbb8u), c.a.e);
    // 7eb0:0064  movzx ecx, word ptr [0xbac]  [x2834]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbacu)));
    // 7eb0:006a  shl ecx, 0x18  [x2834]
    c.c.e = (uint32_t)(c.shl<32>(c.c.e, (int)((0x18u) & 31), false));
    // 7eb0:006e  movzx edx, word ptr [0xbaa]  [x2834]
    c.dx_.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbaau)));
    // 7eb0:0074  shl edx, 0x18  [x2834]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x18u) & 31), false));
    // 7eb0:0078  mov si, word ptr [0xbc0]  [x2834]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:007c  mov al, byte ptr [0xbb2]  [x2834]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb2u)));
    // 7eb0:007f  mov ah, byte ptr [0xbb3]  [x2834]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb3u)));
    // 7eb0:0083  cmp ax, 0xffff  [x2834]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 7eb0:0086  je 0xbc  [x2834]
    if (c.zf) goto L7ebbc;
L7eb88:
    if (c.tracing) c.traceAt(0x7eb88);
    // 7eb0:0088  nop   [x2452]
    // 7eb0:0089  nop   [x2452]
    // 7eb0:008a  cmp ah, 0xff  [x2452]
    c.sub<8>(c.a.h, 0xffu, true);
    // 7eb0:008d  je 0xe1  [x2452]
    if (c.zf) goto L7ebe1;
L7eb8f:
    if (c.tracing) c.traceAt(0x7eb8f);
    // 7eb0:008f  nop   [x2111]
    // 7eb0:0090  nop   [x2111]
    // 7eb0:0091  cmp al, 0xff  [x2111]
    c.sub<8>(c.a.l, 0xffu, true);
    // 7eb0:0093  je 0x106  [x2111]
    if (c.zf) goto L7ec06;
L7eb95:
    if (c.tracing) c.traceAt(0x7eb95);
    // 7eb0:0095  nop   [x1727]
    // 7eb0:0096  nop   [x1727]
L7eb97:
    if (c.tracing) c.traceAt(0x7eb97);
    // 7eb0:0097  mov eax, ecx  [x390302]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:009a  shr eax, 0x18  [x390302]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:009e  mov bh, al  [x390302]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:00a0  mov eax, edx  [x390302]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:00a3  shr eax, 0x18  [x390302]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:00a7  mov bl, al  [x390302]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:00a9  mov ax, bx  [x390302]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:00ab  stosw word ptr es:[di], ax  [x390302]
    c.stos<16, false>(0);
    // 7eb0:00ac  add edx, dword ptr [0xbb8]  [x390302]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:00b1  add ecx, dword ptr [0xbbc]  [x390302]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:00b6  dec si  [x390302]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:00b7  jne 0x97  [x390302]
    if (!c.zf) goto L7eb97;
L7ebb9:
    if (c.tracing) c.traceAt(0x7ebb9);
    // 7eb0:00b9  jmp 0x128  [x1727]
    goto L7ec28;
L7ebbc:
    if (c.tracing) c.traceAt(0x7ebbc);
    // 7eb0:00bc  mov eax, ecx  [x86332]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:00bf  shr eax, 0x18  [x86332]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:00c3  mov bh, al  [x86332]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:00c5  mov eax, edx  [x86332]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:00c8  shr eax, 0x18  [x86332]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:00cc  mov bl, al  [x86332]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:00ce  mov ax, bx  [x86332]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:00d0  stosw word ptr es:[di], ax  [x86332]
    c.stos<16, false>(0);
    // 7eb0:00d1  sub edx, dword ptr [0xbb8]  [x86332]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:00d6  sub ecx, dword ptr [0xbbc]  [x86332]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:00db  dec si  [x86332]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:00dc  jne 0xbc  [x86332]
    if (!c.zf) goto L7ebbc;
L7ebde:
    if (c.tracing) c.traceAt(0x7ebde);
    // 7eb0:00de  jmp 0x128  [x382]
    goto L7ec28;
L7ebe1:
    if (c.tracing) c.traceAt(0x7ebe1);
    // 7eb0:00e1  mov eax, ecx  [x77066]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:00e4  shr eax, 0x18  [x77066]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:00e8  mov bh, al  [x77066]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:00ea  mov eax, edx  [x77066]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:00ed  shr eax, 0x18  [x77066]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:00f1  mov bl, al  [x77066]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:00f3  mov ax, bx  [x77066]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:00f5  stosw word ptr es:[di], ax  [x77066]
    c.stos<16, false>(0);
    // 7eb0:00f6  add edx, dword ptr [0xbb8]  [x77066]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:00fb  sub ecx, dword ptr [0xbbc]  [x77066]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0100  dec si  [x77066]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0101  jne 0xe1  [x77066]
    if (!c.zf) goto L7ebe1;
L7ec03:
    if (c.tracing) c.traceAt(0x7ec03);
    // 7eb0:0103  jmp 0x128  [x341]
    goto L7ec28;
L7ec06:
    if (c.tracing) c.traceAt(0x7ec06);
    // 7eb0:0106  mov eax, ecx  [x86784]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0109  shr eax, 0x18  [x86784]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:010d  mov bh, al  [x86784]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:010f  mov eax, edx  [x86784]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0112  shr eax, 0x18  [x86784]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0116  mov bl, al  [x86784]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0118  mov ax, bx  [x86784]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:011a  stosw word ptr es:[di], ax  [x86784]
    c.stos<16, false>(0);
    // 7eb0:011b  sub edx, dword ptr [0xbb8]  [x86784]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0120  add ecx, dword ptr [0xbbc]  [x86784]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0125  dec si  [x86784]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0126  jne 0x106  [x86784]
    if (!c.zf) goto L7ec06;
L7ec28:
    if (c.tracing) c.traceAt(0x7ec28);
    // 7eb0:0128  retf   [x2834]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7ec2c:
    if (c.tracing) c.traceAt(0x7ec2c);
    // 7eb0:012c  push ds  [x320242]
    c.push16(c.ds);
    // 7eb0:012d  push es  [x320242]
    c.push16(c.es);
    // 7eb0:012e  push fs  [x320242]
    c.push16(c.fs);
    // 7eb0:0130  push gs  [x320242]
    c.push16(c.gs);
    // 7eb0:0132  cld   [x320242]
    c.df = false;
    // 7eb0:0133  mov ax, ds  [x320242]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0135  mov es, ax  [x320242]
    c.loadEs(c.a.x);
    // 7eb0:0137  mov di, 0x1146  [x320242]
    c.di.x = (uint16_t)(0x1146u);
    // 7eb0:013a  mov byte ptr [0xbb3], 0  [x320242]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0x0u);
    // 7eb0:013f  mov ax, word ptr [0xbb0]  [x320242]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb0u)));
    // 7eb0:0142  sub ax, word ptr [0xbac]  [x320242]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xbacu)), true));
    // 7eb0:0146  jns 0x151  [x320242]
    if (!c.sf) goto L7ec51;
L7ec48:
    if (c.tracing) c.traceAt(0x7ec48);
    // 7eb0:0148  nop   [x144465]
    // 7eb0:0149  nop   [x144465]
    // 7eb0:014a  mov byte ptr [0xbb3], 0xff  [x144465]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0xffu);
    // 7eb0:014f  neg ax  [x144465]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L7ec51:
    if (c.tracing) c.traceAt(0x7ec51);
    // 7eb0:0151  mov word ptr [0xbb4], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbb4u), c.a.x);
    // 7eb0:0154  mov byte ptr [0xbb2], 0  [x320242]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0x0u);
    // 7eb0:0159  mov bx, word ptr [0xbae]  [x320242]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaeu)));
    // 7eb0:015d  sub bx, word ptr [0xbaa]  [x320242]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbaau)), true));
    // 7eb0:0161  jns 0x16c  [x320242]
    if (!c.sf) goto L7ec6c;
L7ec63:
    if (c.tracing) c.traceAt(0x7ec63);
    // 7eb0:0163  nop   [x164221]
    // 7eb0:0164  nop   [x164221]
    // 7eb0:0165  mov byte ptr [0xbb2], 0xff  [x164221]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0xffu);
    // 7eb0:016a  neg bx  [x164221]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
L7ec6c:
    if (c.tracing) c.traceAt(0x7ec6c);
    // 7eb0:016c  mov word ptr [0xbb6], bx  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbb6u), c.b.x);
    // 7eb0:0170  cmp ax, bx  [x320242]
    // 7eb0:0172  mov ax, word ptr [0xbb4]  [x320242]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb4u)));
    // 7eb0:0175  cdq   [x320242]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 7eb0:0176  shl ax, 8  [x320242]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x8u) & 31), false));
    // 7eb0:0179  mov cx, word ptr [0xbc0]  [x320242]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:017d  div cx  [x320242]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x17du); }   // #DE: int 0, then again
    // 7eb0:017f  mov word ptr [0x14ca], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0x14cau), c.a.x);
    // 7eb0:0182  mov ax, word ptr [0xbb6]  [x320242]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb6u)));
    // 7eb0:0185  cdq   [x320242]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 7eb0:0186  shl ax, 8  [x320242]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x8u) & 31), false));
    // 7eb0:0189  div cx  [x320242]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x189u); }   // #DE: int 0, then again
    // 7eb0:018b  mov word ptr [0x14cc], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0x14ccu), c.a.x);
    // 7eb0:018e  mov cx, word ptr [0xbac]  [x320242]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbacu)));
    // 7eb0:0192  shl cx, 8  [x320242]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x8u) & 31), false));
    // 7eb0:0195  mov dx, word ptr [0xbaa]  [x320242]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaau)));
    // 7eb0:0199  shl dx, 8  [x320242]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x8u) & 31), false));
    // 7eb0:019c  mov si, word ptr [0xbc0]  [x320242]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:01a0  mov al, byte ptr [0xbb2]  [x320242]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb2u)));
    // 7eb0:01a3  mov ah, byte ptr [0xbb3]  [x320242]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb3u)));
    // 7eb0:01a7  cmp ax, 0xffff  [x320242]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 7eb0:01aa  je 0x1d4  [x320242]
    if (c.zf) goto L7ecd4;
L7ecac:
    if (c.tracing) c.traceAt(0x7ecac);
    // 7eb0:01ac  nop   [x245714]
    // 7eb0:01ad  nop   [x245714]
    // 7eb0:01ae  cmp ah, 0xff  [x245714]
    c.sub<8>(c.a.h, 0xffu, true);
    // 7eb0:01b1  je 0x1ed  [x245714]
    if (c.zf) goto L7eced;
L7ecb3:
    if (c.tracing) c.traceAt(0x7ecb3);
    // 7eb0:01b3  nop   [x175777]
    // 7eb0:01b4  nop   [x175777]
    // 7eb0:01b5  cmp al, 0xff  [x175777]
    c.sub<8>(c.a.l, 0xffu, true);
    // 7eb0:01b7  je 0x206  [x175777]
    if (c.zf) goto L7ed06;
L7ecb9:
    if (c.tracing) c.traceAt(0x7ecb9);
    // 7eb0:01b9  nop   [x86084]
    // 7eb0:01ba  nop   [x86084]
L7ecbb:
    if (c.tracing) c.traceAt(0x7ecbb);
    // 7eb0:01bb  mov bh, ch  [x6886720]
    c.b.h = (uint8_t)(c.c.h);
    // 7eb0:01bd  add cx, word ptr [0x14ca]  [x6886720]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x14cau)), false));
    // 7eb0:01c1  mov bl, dh  [x6886720]
    c.b.l = (uint8_t)(c.dx_.h);
    // 7eb0:01c3  add dx, word ptr [0x14cc]  [x6886720]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x14ccu)), false));
    // 7eb0:01c7  sub bx, word ptr [0xbfa]  [x6886720]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbfau)), true));
    // 7eb0:01cb  mov ax, bx  [x6886720]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:01cd  stosw word ptr es:[di], ax  [x6886720]
    c.stos<16, false>(0);
    // 7eb0:01ce  dec si  [x6886720]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:01cf  jne 0x1bb  [x6886720]
    if (!c.zf) goto L7ecbb;
L7ecd1:
    if (c.tracing) c.traceAt(0x7ecd1);
    // 7eb0:01d1  jmp 0x21c  [x86084]
    goto L7ed1c;
L7ecd4:
    if (c.tracing) c.traceAt(0x7ecd4);
    // 7eb0:01d4  mov bh, ch  [x5962240]
    c.b.h = (uint8_t)(c.c.h);
    // 7eb0:01d6  sub cx, word ptr [0x14ca]  [x5962240]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x14cau)), false));
    // 7eb0:01da  mov bl, dh  [x5962240]
    c.b.l = (uint8_t)(c.dx_.h);
    // 7eb0:01dc  sub dx, word ptr [0x14cc]  [x5962240]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x14ccu)), false));
    // 7eb0:01e0  sub bx, word ptr [0xbfa]  [x5962240]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbfau)), true));
    // 7eb0:01e4  mov ax, bx  [x5962240]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:01e6  stosw word ptr es:[di], ax  [x5962240]
    c.stos<16, false>(0);
    // 7eb0:01e7  dec si  [x5962240]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:01e8  jne 0x1d4  [x5962240]
    if (!c.zf) goto L7ecd4;
L7ecea:
    if (c.tracing) c.traceAt(0x7ecea);
    // 7eb0:01ea  jmp 0x21c  [x74528]
    goto L7ed1c;
L7eced:
    if (c.tracing) c.traceAt(0x7eced);
    // 7eb0:01ed  mov bh, ch  [x5594960]
    c.b.h = (uint8_t)(c.c.h);
    // 7eb0:01ef  sub cx, word ptr [0x14ca]  [x5594960]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x14cau)), false));
    // 7eb0:01f3  mov bl, dh  [x5594960]
    c.b.l = (uint8_t)(c.dx_.h);
    // 7eb0:01f5  add dx, word ptr [0x14cc]  [x5594960]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x14ccu)), false));
    // 7eb0:01f9  sub bx, word ptr [0xbfa]  [x5594960]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbfau)), true));
    // 7eb0:01fd  mov ax, bx  [x5594960]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:01ff  stosw word ptr es:[di], ax  [x5594960]
    c.stos<16, false>(0);
    // 7eb0:0200  dec si  [x5594960]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0201  jne 0x1ed  [x5594960]
    if (!c.zf) goto L7eced;
L7ed03:
    if (c.tracing) c.traceAt(0x7ed03);
    // 7eb0:0203  jmp 0x21c  [x69937]
    goto L7ed1c;
L7ed06:
    if (c.tracing) c.traceAt(0x7ed06);
    // 7eb0:0206  mov bh, ch  [x7175440]
    c.b.h = (uint8_t)(c.c.h);
    // 7eb0:0208  add cx, word ptr [0x14ca]  [x7175440]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0x14cau)), false));
    // 7eb0:020c  mov bl, dh  [x7175440]
    c.b.l = (uint8_t)(c.dx_.h);
    // 7eb0:020e  sub dx, word ptr [0x14cc]  [x7175440]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0x14ccu)), false));
    // 7eb0:0212  sub bx, word ptr [0xbfa]  [x7175440]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbfau)), true));
    // 7eb0:0216  mov ax, bx  [x7175440]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:0218  stosw word ptr es:[di], ax  [x7175440]
    c.stos<16, false>(0);
    // 7eb0:0219  dec si  [x7175440]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:021a  jne 0x206  [x7175440]
    if (!c.zf) goto L7ed06;
L7ed1c:
    if (c.tracing) c.traceAt(0x7ed1c);
    // 7eb0:021c  pop gs  [x320242]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:021e  pop fs  [x320242]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:0220  pop es  [x320242]
    c.loadEs((uint16_t)c.pop16());
    // 7eb0:0221  pop ds  [x320242]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0222  retf   [x320242]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7ed23:
    if (c.tracing) c.traceAt(0x7ed23);
    // 7eb0:0223  push ds  [x1417]
    c.push16(c.ds);
    // 7eb0:0224  push es  [x1417]
    c.push16(c.es);
    // 7eb0:0225  push fs  [x1417]
    c.push16(c.fs);
    // 7eb0:0227  push gs  [x1417]
    c.push16(c.gs);
    // 7eb0:0229  mov ax, 0x553b  [x1417]
    c.a.x = (uint16_t)(0x553bu);
    // 7eb0:022c  mov gs, ax  [x1417]
    c.loadGs(c.a.x);
    // 7eb0:022e  mov si, 0x10fc  [x1417]
    c.si.x = (uint16_t)(0x10fcu);
    // 7eb0:0231  mov di, 0x113c  [x1417]
    c.di.x = (uint16_t)(0x113cu);
    // 7eb0:0234  mov cx, 4  [x1417]
    c.c.x = (uint16_t)(0x4u);
L7ed37:
    if (c.tracing) c.traceAt(0x7ed37);
    // 7eb0:0237  mov eax, dword ptr [si]  [x5668]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x)));
    // 7eb0:023a  add eax, dword ptr [0x14ce]  [x5668]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x14ceu)), false));
    // 7eb0:023f  and eax, 0x3ff  [x5668]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 7eb0:0245  mov eax, dword ptr gs:[eax*4]  [x5668]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4)));
    // 7eb0:024f  mov ebp, dword ptr [si + 4]  [x5668]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x4u)));
    // 7eb0:0253  imul ebp  [x5668]
    c.imul32(c.bp.e);
    // 7eb0:0256  sar eax, 0xe  [x5668]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:025a  add eax, 0x80  [x5668]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:0260  mov bh, al  [x5668]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0262  mov ebp, dword ptr [si + 0xc]  [x5668]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0xcu)));
    // 7eb0:0266  mov eax, dword ptr [si + 8]  [x5668]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x8u)));
    // 7eb0:026a  add eax, dword ptr [0x14ce]  [x5668]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x14ceu)), false));
    // 7eb0:026f  and eax, 0x3ff  [x5668]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (0x3ffu), false));
    // 7eb0:0275  mov eax, dword ptr gs:[eax*4 + 0x400]  [x5668]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4 + 0x400u)));
    // 7eb0:027f  imul ebp  [x5668]
    c.imul32(c.bp.e);
    // 7eb0:0282  sar eax, 0xe  [x5668]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:0286  add eax, 0x80  [x5668]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:028c  mov bl, al  [x5668]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:028e  mov byte ptr [di], bl  [x5668]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.b.l);
    // 7eb0:0290  mov byte ptr [di + 1], bh  [x5668]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x1u), c.b.h);
    // 7eb0:0293  add di, 2  [x5668]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 7eb0:0296  add si, 0x10  [x5668]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, true));
    // 7eb0:0299  loop 0x237  [x5668]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7ed37;
L7ed9b:
    if (c.tracing) c.traceAt(0x7ed9b);
    // 7eb0:029b  pop gs  [x1417]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:029d  pop fs  [x1417]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:029f  pop es  [x1417]
    c.loadEs((uint16_t)c.pop16());
    // 7eb0:02a0  pop ds  [x1417]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:02a1  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7eda4:
    if (c.tracing) c.traceAt(0x7eda4);
    // 7eb0:02a4  mov ah, byte ptr gs:[si + 0x600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eda7))));
    // 7eb0:02a9  mov al, byte ptr gs:[si + 0x400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edac))));
    // 7eb0:02ae  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:02b2  mov ah, byte ptr gs:[si + 0x200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edb5))));
    // 7eb0:02b7  mov al, byte ptr gs:[si]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edba))));
    // 7eb0:02bc  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:02be  mov ah, byte ptr gs:[si + 0xe00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edc1))));
    // 7eb0:02c3  mov al, byte ptr gs:[si + 0xc00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edc6))));
    // 7eb0:02c8  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:02cc  mov ah, byte ptr gs:[si + 0xa00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edcf))));
    // 7eb0:02d1  mov al, byte ptr gs:[si + 0x800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edd4))));
    // 7eb0:02d6  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:02d8  mov ah, byte ptr gs:[si + 0x1600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eddb))));
    // 7eb0:02dd  mov al, byte ptr gs:[si + 0x1400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ede0))));
    // 7eb0:02e2  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:02e6  mov ah, byte ptr gs:[si + 0x1200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ede9))));
    // 7eb0:02eb  mov al, byte ptr gs:[si + 0x1000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edee))));
    // 7eb0:02f0  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:02f2  mov ah, byte ptr gs:[si + 0x1e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edf5))));
    // 7eb0:02f7  mov al, byte ptr gs:[si + 0x1c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7edfa))));
    // 7eb0:02fc  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0300  mov ah, byte ptr gs:[si + 0x1a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee03))));
    // 7eb0:0305  mov al, byte ptr gs:[si + 0x1800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee08))));
    // 7eb0:030a  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:030c  mov ah, byte ptr gs:[si + 0x2600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee0f))));
    // 7eb0:0311  mov al, byte ptr gs:[si + 0x2400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee14))));
    // 7eb0:0316  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:031a  mov ah, byte ptr gs:[si + 0x2200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee1d))));
    // 7eb0:031f  mov al, byte ptr gs:[si + 0x2000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee22))));
    // 7eb0:0324  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0326  mov ah, byte ptr gs:[si + 0x2e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee29))));
    // 7eb0:032b  mov al, byte ptr gs:[si + 0x2c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee2e))));
    // 7eb0:0330  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0334  mov ah, byte ptr gs:[si + 0x2a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee37))));
    // 7eb0:0339  mov al, byte ptr gs:[si + 0x2800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee3c))));
    // 7eb0:033e  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0340  mov ah, byte ptr gs:[si + 0x3600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee43))));
    // 7eb0:0345  mov al, byte ptr gs:[si + 0x3400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee48))));
    // 7eb0:034a  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:034e  mov ah, byte ptr gs:[si + 0x3200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee51))));
    // 7eb0:0353  mov al, byte ptr gs:[si + 0x3000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee56))));
    // 7eb0:0358  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:035a  mov ah, byte ptr gs:[si + 0x3e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee5d))));
    // 7eb0:035f  mov al, byte ptr gs:[si + 0x3c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee62))));
    // 7eb0:0364  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0368  mov ah, byte ptr gs:[si + 0x3a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee6b))));
    // 7eb0:036d  mov al, byte ptr gs:[si + 0x3800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee70))));
    // 7eb0:0372  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0374  mov ah, byte ptr gs:[si + 0x4600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee77))));
    // 7eb0:0379  mov al, byte ptr gs:[si + 0x4400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee7c))));
    // 7eb0:037e  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0382  mov ah, byte ptr gs:[si + 0x4200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee85))));
    // 7eb0:0387  mov al, byte ptr gs:[si + 0x4000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee8a))));
    // 7eb0:038c  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:038e  mov ah, byte ptr gs:[si + 0x4e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee91))));
    // 7eb0:0393  mov al, byte ptr gs:[si + 0x4c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee96))));
    // 7eb0:0398  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:039c  mov ah, byte ptr gs:[si + 0x4a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ee9f))));
    // 7eb0:03a1  mov al, byte ptr gs:[si + 0x4800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eea4))));
    // 7eb0:03a6  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:03a8  mov ah, byte ptr gs:[si + 0x5600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eeab))));
    // 7eb0:03ad  mov al, byte ptr gs:[si + 0x5400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eeb0))));
    // 7eb0:03b2  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:03b6  mov ah, byte ptr gs:[si + 0x5200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eeb9))));
    // 7eb0:03bb  mov al, byte ptr gs:[si + 0x5000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eebe))));
    // 7eb0:03c0  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:03c2  mov ah, byte ptr gs:[si + 0x5e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eec5))));
    // 7eb0:03c7  mov al, byte ptr gs:[si + 0x5c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eeca))));
    // 7eb0:03cc  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:03d0  mov ah, byte ptr gs:[si + 0x5a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eed3))));
    // 7eb0:03d5  mov al, byte ptr gs:[si + 0x5800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eed8))));
    // 7eb0:03da  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:03dc  mov ah, byte ptr gs:[si + 0x6600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eedf))));
    // 7eb0:03e1  mov al, byte ptr gs:[si + 0x6400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eee4))));
    // 7eb0:03e6  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:03ea  mov ah, byte ptr gs:[si + 0x6200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eeed))));
    // 7eb0:03ef  mov al, byte ptr gs:[si + 0x6000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eef2))));
    // 7eb0:03f4  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:03f6  mov ah, byte ptr gs:[si + 0x6e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eef9))));
    // 7eb0:03fb  mov al, byte ptr gs:[si + 0x6c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7eefe))));
    // 7eb0:0400  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0404  mov ah, byte ptr gs:[si + 0x6a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef07))));
    // 7eb0:0409  mov al, byte ptr gs:[si + 0x6800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef0c))));
    // 7eb0:040e  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0410  mov ah, byte ptr gs:[si + 0x7600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef13))));
    // 7eb0:0415  mov al, byte ptr gs:[si + 0x7400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef18))));
    // 7eb0:041a  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:041e  mov ah, byte ptr gs:[si + 0x7200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef21))));
    // 7eb0:0423  mov al, byte ptr gs:[si + 0x7000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef26))));
    // 7eb0:0428  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:042a  mov ah, byte ptr gs:[si + 0x7e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef2d))));
    // 7eb0:042f  mov al, byte ptr gs:[si + 0x7c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef32))));
    // 7eb0:0434  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0438  mov ah, byte ptr gs:[si + 0x7a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef3b))));
    // 7eb0:043d  mov al, byte ptr gs:[si + 0x7800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef40))));
    // 7eb0:0442  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0444  mov ah, byte ptr gs:[si - 0x7a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef47))));
    // 7eb0:0449  mov al, byte ptr gs:[si - 0x7c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef4c))));
    // 7eb0:044e  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0452  mov ah, byte ptr gs:[si - 0x7e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef55))));
    // 7eb0:0457  mov al, byte ptr gs:[si - 0x8000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef5a))));
    // 7eb0:045c  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:045e  mov ah, byte ptr gs:[si - 0x7200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef61))));
    // 7eb0:0463  mov al, byte ptr gs:[si - 0x7400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef66))));
    // 7eb0:0468  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:046c  mov ah, byte ptr gs:[si - 0x7600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef6f))));
    // 7eb0:0471  mov al, byte ptr gs:[si - 0x7800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef74))));
    // 7eb0:0476  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0478  mov ah, byte ptr gs:[si - 0x6a00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef7b))));
    // 7eb0:047d  mov al, byte ptr gs:[si - 0x6c00]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef80))));
    // 7eb0:0482  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 7eb0:0486  mov ah, byte ptr gs:[si - 0x6e00]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef89))));
    // 7eb0:048b  mov al, byte ptr gs:[si - 0x7000]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef8e))));
    // 7eb0:0490  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:0492  mov ah, byte ptr gs:[si - 0x6200]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef95))));
    // 7eb0:0497  mov al, byte ptr gs:[si - 0x6400]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7ef9a))));
    // 7eb0:049c  shl eax, 0x10  [x453440]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 7eb0:04a0  mov ah, byte ptr gs:[si - 0x6600]  [x453440]
    c.a.h = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7efa3))));
    // 7eb0:04a5  mov al, byte ptr gs:[si - 0x6800]  [x453440]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x7efa8))));
    // 7eb0:04aa  stosd dword ptr es:[di], eax  [x453440]
    c.stos<32, false>(0);
    // 7eb0:04ac  retf   [x453440]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f078:
    if (c.tracing) c.traceAt(0x7f078);
    // 7eb0:0578  mov ax, ds  [x1417]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:057a  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:057c  mov di, 0xbfc  [x1417]
    c.di.x = (uint16_t)(0xbfcu);
    // 7eb0:057f  cld   [x1417]
    c.df = false;
    // 7eb0:0580  mov byte ptr [0xbb3], 0  [x1417]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0x0u);
    // 7eb0:0585  mov ax, word ptr [0xbb0]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb0u)));
    // 7eb0:0588  sub ax, word ptr [0xbac]  [x1417]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xbacu)), true));
    // 7eb0:058c  jns 0x597  [x1417]
    if (!c.sf) goto L7f097;
L7f08e:
    if (c.tracing) c.traceAt(0x7f08e);
    // 7eb0:058e  nop   [x341]
    // 7eb0:058f  nop   [x341]
    // 7eb0:0590  mov byte ptr [0xbb3], 0xff  [x341]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0xffu);
    // 7eb0:0595  neg ax  [x341]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L7f097:
    if (c.tracing) c.traceAt(0x7f097);
    // 7eb0:0597  mov word ptr [0xbb4], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb4u), c.a.x);
    // 7eb0:059a  mov byte ptr [0xbb2], 0  [x1417]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0x0u);
    // 7eb0:059f  mov bx, word ptr [0xbae]  [x1417]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaeu)));
    // 7eb0:05a3  sub bx, word ptr [0xbaa]  [x1417]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbaau)), true));
    // 7eb0:05a7  jns 0x5b2  [x1417]
    if (!c.sf) goto L7f0b2;
L7f0a9:
    if (c.tracing) c.traceAt(0x7f0a9);
    // 7eb0:05a9  nop   [x354]
    // 7eb0:05aa  nop   [x354]
    // 7eb0:05ab  mov byte ptr [0xbb2], 0xff  [x354]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0xffu);
    // 7eb0:05b0  neg bx  [x354]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
L7f0b2:
    if (c.tracing) c.traceAt(0x7f0b2);
    // 7eb0:05b2  mov word ptr [0xbb6], bx  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb6u), c.b.x);
    // 7eb0:05b6  cmp ax, bx  [x1417]
    // 7eb0:05b8  movzx eax, word ptr [0xbb4]  [x1417]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb4u)));
    // 7eb0:05be  cdq   [x1417]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:05c0  shl eax, 0x18  [x1417]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:05c4  movzx ecx, word ptr [0xbc0]  [x1417]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:05ca  div ecx  [x1417]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x5cau); }   // #DE: int 0, then again
    // 7eb0:05cd  mov dword ptr [0xbbc], eax  [x1417]
    c.w32(c.dsb + (uint16_t)(0xbbcu), c.a.e);
    // 7eb0:05d1  movzx eax, word ptr [0xbb6]  [x1417]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb6u)));
    // 7eb0:05d7  cdq   [x1417]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:05d9  shl eax, 0x18  [x1417]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:05dd  div ecx  [x1417]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x5ddu); }   // #DE: int 0, then again
    // 7eb0:05e0  mov dword ptr [0xbb8], eax  [x1417]
    c.w32(c.dsb + (uint16_t)(0xbb8u), c.a.e);
    // 7eb0:05e4  movzx ecx, word ptr [0xbac]  [x1417]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbacu)));
    // 7eb0:05ea  shl ecx, 0x18  [x1417]
    c.c.e = (uint32_t)(c.shl<32>(c.c.e, (int)((0x18u) & 31), false));
    // 7eb0:05ee  movzx edx, word ptr [0xbaa]  [x1417]
    c.dx_.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbaau)));
    // 7eb0:05f4  shl edx, 0x18  [x1417]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x18u) & 31), false));
    // 7eb0:05f8  shl dword ptr [0xbb8], 1  [x1417]
    c.w32(c.dsb + (uint16_t)(0xbb8u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0xbb8u)), (int)((0x1u) & 31), false));
    // 7eb0:05fd  shl dword ptr [0xbbc], 1  [x1417]
    c.w32(c.dsb + (uint16_t)(0xbbcu), c.shl<32>(c.r32(c.dsb + (uint16_t)(0xbbcu)), (int)((0x1u) & 31), false));
    // 7eb0:0602  mov si, word ptr [0xbc0]  [x1417]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:0606  mov al, byte ptr [0xbb2]  [x1417]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb2u)));
    // 7eb0:0609  mov ah, byte ptr [0xbb3]  [x1417]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb3u)));
    // 7eb0:060d  cmp ax, 0xffff  [x1417]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 7eb0:0610  je 0x64a  [x1417]
    if (c.zf) goto L7f14a;
L7f112:
    if (c.tracing) c.traceAt(0x7f112);
    // 7eb0:0612  nop   [x1247]
    // 7eb0:0613  nop   [x1247]
    // 7eb0:0614  cmp ah, 0xff  [x1247]
    c.sub<8>(c.a.h, 0xffu, true);
    // 7eb0:0617  je 0x673  [x1247]
    if (c.zf) goto L7f173;
L7f119:
    if (c.tracing) c.traceAt(0x7f119);
    // 7eb0:0619  nop   [x1076]
    // 7eb0:061a  nop   [x1076]
    // 7eb0:061b  cmp al, 0xff  [x1076]
    c.sub<8>(c.a.l, 0xffu, true);
    // 7eb0:061d  je 0x69c  [x1076]
    if (c.zf) goto L7f19c;
L7f11f:
    if (c.tracing) c.traceAt(0x7f11f);
    // 7eb0:061f  nop   [x892]
    // 7eb0:0620  nop   [x892]
L7f121:
    if (c.tracing) c.traceAt(0x7f121);
    // 7eb0:0621  mov eax, ecx  [x142720]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0624  shr eax, 0x18  [x142720]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0628  mov bh, al  [x142720]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:062a  mov eax, edx  [x142720]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:062d  shr eax, 0x18  [x142720]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0631  mov bl, al  [x142720]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0633  sub bx, 0x8080  [x142720]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8080u, false));
    // 7eb0:0637  mov ax, bx  [x142720]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:0639  stosw word ptr es:[di], ax  [x142720]
    c.stos<16, false>(0);
    // 7eb0:063a  add edx, dword ptr [0xbb8]  [x142720]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:063f  add ecx, dword ptr [0xbbc]  [x142720]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0644  dec si  [x142720]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0645  jne 0x621  [x142720]
    if (!c.zf) goto L7f121;
L7f147:
    if (c.tracing) c.traceAt(0x7f147);
    // 7eb0:0647  jmp 0x6c2  [x892]
    goto L7f1c2;
L7f14a:
    if (c.tracing) c.traceAt(0x7f14a);
    // 7eb0:064a  mov eax, ecx  [x27200]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:064d  shr eax, 0x18  [x27200]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0651  mov bh, al  [x27200]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0653  mov eax, edx  [x27200]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0656  shr eax, 0x18  [x27200]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:065a  mov bl, al  [x27200]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:065c  sub bx, 0x8080  [x27200]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8080u, false));
    // 7eb0:0660  mov ax, bx  [x27200]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:0662  stosw word ptr es:[di], ax  [x27200]
    c.stos<16, false>(0);
    // 7eb0:0663  sub edx, dword ptr [0xbb8]  [x27200]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0668  sub ecx, dword ptr [0xbbc]  [x27200]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:066d  dec si  [x27200]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:066e  jne 0x64a  [x27200]
    if (!c.zf) goto L7f14a;
L7f170:
    if (c.tracing) c.traceAt(0x7f170);
    // 7eb0:0670  jmp 0x6c2  [x170]
    goto L7f1c2;
L7f173:
    if (c.tracing) c.traceAt(0x7f173);
    // 7eb0:0673  mov eax, ecx  [x27360]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0676  shr eax, 0x18  [x27360]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:067a  mov bh, al  [x27360]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:067c  mov eax, edx  [x27360]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:067f  shr eax, 0x18  [x27360]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0683  mov bl, al  [x27360]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0685  sub bx, 0x8080  [x27360]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8080u, false));
    // 7eb0:0689  mov ax, bx  [x27360]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:068b  stosw word ptr es:[di], ax  [x27360]
    c.stos<16, false>(0);
    // 7eb0:068c  add edx, dword ptr [0xbb8]  [x27360]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0691  sub ecx, dword ptr [0xbbc]  [x27360]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0696  dec si  [x27360]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0697  jne 0x673  [x27360]
    if (!c.zf) goto L7f173;
L7f199:
    if (c.tracing) c.traceAt(0x7f199);
    // 7eb0:0699  jmp 0x6c2  [x171]
    goto L7f1c2;
L7f19c:
    if (c.tracing) c.traceAt(0x7f19c);
    // 7eb0:069c  mov eax, ecx  [x29440]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:069f  shr eax, 0x18  [x29440]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:06a3  mov bh, al  [x29440]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:06a5  mov eax, edx  [x29440]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:06a8  shr eax, 0x18  [x29440]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:06ac  mov bl, al  [x29440]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:06ae  sub bx, 0x8080  [x29440]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, 0x8080u, false));
    // 7eb0:06b2  mov ax, bx  [x29440]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:06b4  stosw word ptr es:[di], ax  [x29440]
    c.stos<16, false>(0);
    // 7eb0:06b5  sub edx, dword ptr [0xbb8]  [x29440]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:06ba  add ecx, dword ptr [0xbbc]  [x29440]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:06bf  dec si  [x29440]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:06c0  jne 0x69c  [x29440]
    if (!c.zf) goto L7f19c;
L7f1c2:
    if (c.tracing) c.traceAt(0x7f1c2);
    // 7eb0:06c2  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f1c4:
    if (c.tracing) c.traceAt(0x7f1c4);
    // 7eb0:06c4  push gs  [x2834]
    c.push16(c.gs);
    // 7eb0:06c6  mov di, 0  [x2834]
    c.di.x = (uint16_t)(0x0u);
    // 7eb0:06c9  cld   [x2834]
    c.df = false;
    // 7eb0:06ca  mov ax, 0x6d3c  [x2834]
    c.a.x = (uint16_t)(0x6d3cu);
    // 7eb0:06cd  mov gs, ax  [x2834]
    c.loadGs(c.a.x);
    // 7eb0:06cf  mov byte ptr [0xbb3], 0  [x2834]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0x0u);
    // 7eb0:06d4  mov ax, word ptr [0xbb0]  [x2834]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb0u)));
    // 7eb0:06d7  sub ax, word ptr [0xbac]  [x2834]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xbacu)), true));
    // 7eb0:06db  jns 0x6e6  [x2834]
    if (!c.sf) goto L7f1e6;
L7f1dd:
    if (c.tracing) c.traceAt(0x7f1dd);
    // 7eb0:06dd  nop   [x680]
    // 7eb0:06de  nop   [x680]
    // 7eb0:06df  mov byte ptr [0xbb3], 0xff  [x680]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0xffu);
    // 7eb0:06e4  neg ax  [x680]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L7f1e6:
    if (c.tracing) c.traceAt(0x7f1e6);
    // 7eb0:06e6  mov word ptr [0xbb4], ax  [x2834]
    c.w16(c.dsb + (uint16_t)(0xbb4u), c.a.x);
    // 7eb0:06e9  mov byte ptr [0xbb2], 0  [x2834]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0x0u);
    // 7eb0:06ee  mov bx, word ptr [0xbae]  [x2834]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaeu)));
    // 7eb0:06f2  sub bx, word ptr [0xbaa]  [x2834]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbaau)), true));
    // 7eb0:06f6  jns 0x701  [x2834]
    if (!c.sf) goto L7f201;
L7f1f8:
    if (c.tracing) c.traceAt(0x7f1f8);
    // 7eb0:06f8  nop   [x682]
    // 7eb0:06f9  nop   [x682]
    // 7eb0:06fa  mov byte ptr [0xbb2], 0xff  [x682]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0xffu);
    // 7eb0:06ff  neg bx  [x682]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
L7f201:
    if (c.tracing) c.traceAt(0x7f201);
    // 7eb0:0701  mov word ptr [0xbb6], bx  [x2834]
    c.w16(c.dsb + (uint16_t)(0xbb6u), c.b.x);
    // 7eb0:0705  cmp ax, bx  [x2834]
    // 7eb0:0707  movzx eax, word ptr [0xbb4]  [x2834]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb4u)));
    // 7eb0:070d  cdq   [x2834]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:070f  shl eax, 0x18  [x2834]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0713  movzx ecx, word ptr [0xbc0]  [x2834]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:0719  div ecx  [x2834]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x719u); }   // #DE: int 0, then again
    // 7eb0:071c  mov dword ptr [0xbbc], eax  [x2834]
    c.w32(c.dsb + (uint16_t)(0xbbcu), c.a.e);
    // 7eb0:0720  movzx eax, word ptr [0xbb6]  [x2834]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb6u)));
    // 7eb0:0726  cdq   [x2834]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:0728  shl eax, 0x18  [x2834]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:072c  div ecx  [x2834]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x72cu); }   // #DE: int 0, then again
    // 7eb0:072f  mov dword ptr [0xbb8], eax  [x2834]
    c.w32(c.dsb + (uint16_t)(0xbb8u), c.a.e);
    // 7eb0:0733  movzx ecx, word ptr [0xbac]  [x2834]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbacu)));
    // 7eb0:0739  shl ecx, 0x18  [x2834]
    c.c.e = (uint32_t)(c.shl<32>(c.c.e, (int)((0x18u) & 31), false));
    // 7eb0:073d  movzx edx, word ptr [0xbaa]  [x2834]
    c.dx_.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbaau)));
    // 7eb0:0743  shl edx, 0x18  [x2834]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x18u) & 31), false));
    // 7eb0:0747  mov bp, word ptr [0xbc0]  [x2834]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:074b  mov al, byte ptr [0xbb2]  [x2834]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb2u)));
    // 7eb0:074e  mov ah, byte ptr [0xbb3]  [x2834]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb3u)));
    // 7eb0:0752  cmp ax, 0xffff  [x2834]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 7eb0:0755  je 0x78e  [x2834]
    if (c.zf) goto L7f28e;
L7f257:
    if (c.tracing) c.traceAt(0x7f257);
    // 7eb0:0757  nop   [x2494]
    // 7eb0:0758  nop   [x2494]
    // 7eb0:0759  cmp ah, 0xff  [x2494]
    c.sub<8>(c.a.h, 0xffu, true);
    // 7eb0:075c  je 0x7b6  [x2494]
    if (c.zf) goto L7f2b6;
L7f25e:
    if (c.tracing) c.traceAt(0x7f25e);
    // 7eb0:075e  nop   [x2154]
    // 7eb0:075f  nop   [x2154]
    // 7eb0:0760  cmp al, 0xff  [x2154]
    c.sub<8>(c.a.l, 0xffu, true);
    // 7eb0:0762  je 0x7de  [x2154]
    if (c.zf) goto L7f2de;
L7f264:
    if (c.tracing) c.traceAt(0x7f264);
    // 7eb0:0764  nop   [x1812]
    // 7eb0:0765  nop   [x1812]
L7f266:
    if (c.tracing) c.traceAt(0x7f266);
    // 7eb0:0766  mov eax, ecx  [x289920]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0769  shr eax, 0x18  [x289920]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:076d  mov bh, al  [x289920]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:076f  mov eax, edx  [x289920]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0772  shr eax, 0x18  [x289920]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), true));
    // 7eb0:0776  mov bl, al  [x289920]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0778  mov si, bx  [x289920]
    c.si.x = (uint16_t)(c.b.x);
    // 7eb0:077a  push cs  [x289920]
    c.push16(c.cs);
    // 7eb0:077b  call 0x2a4  [x289920]
    c.push16(0x77eu); code_14(c, 0x7eda4u); if (c.ip != 0x77eu) c.badReturn(0x7f27b);
L7f27e:
    if (c.tracing) c.traceAt(0x7f27e);
    // 7eb0:077e  add edx, dword ptr [0xbb8]  [x289920]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0783  add ecx, dword ptr [0xbbc]  [x289920]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0788  dec bp  [x289920]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 7eb0:0789  jne 0x766  [x289920]
    if (!c.zf) goto L7f266;
L7f28b:
    if (c.tracing) c.traceAt(0x7f28b);
    // 7eb0:078b  jmp 0x803  [x1812]
    goto L7f303;
L7f28e:
    if (c.tracing) c.traceAt(0x7f28e);
    // 7eb0:078e  mov eax, ecx  [x54400]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0791  shr eax, 0x18  [x54400]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0795  mov bh, al  [x54400]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0797  mov eax, edx  [x54400]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:079a  shr eax, 0x18  [x54400]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), true));
    // 7eb0:079e  mov bl, al  [x54400]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:07a0  mov si, bx  [x54400]
    c.si.x = (uint16_t)(c.b.x);
    // 7eb0:07a2  push cs  [x54400]
    c.push16(c.cs);
    // 7eb0:07a3  call 0x2a4  [x54400]
    c.push16(0x7a6u); code_14(c, 0x7eda4u); if (c.ip != 0x7a6u) c.badReturn(0x7f2a3);
L7f2a6:
    if (c.tracing) c.traceAt(0x7f2a6);
    // 7eb0:07a6  sub edx, dword ptr [0xbb8]  [x54400]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:07ab  sub ecx, dword ptr [0xbbc]  [x54400]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:07b0  dec bp  [x54400]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 7eb0:07b1  jne 0x78e  [x54400]
    if (!c.zf) goto L7f28e;
L7f2b3:
    if (c.tracing) c.traceAt(0x7f2b3);
    // 7eb0:07b3  jmp 0x803  [x340]
    goto L7f303;
L7f2b6:
    if (c.tracing) c.traceAt(0x7f2b6);
    // 7eb0:07b6  mov eax, ecx  [x54400]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:07b9  shr eax, 0x18  [x54400]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:07bd  mov bh, al  [x54400]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:07bf  mov eax, edx  [x54400]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:07c2  shr eax, 0x18  [x54400]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), true));
    // 7eb0:07c6  mov bl, al  [x54400]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:07c8  mov si, bx  [x54400]
    c.si.x = (uint16_t)(c.b.x);
    // 7eb0:07ca  push cs  [x54400]
    c.push16(c.cs);
    // 7eb0:07cb  call 0x2a4  [x54400]
    c.push16(0x7ceu); code_14(c, 0x7eda4u); if (c.ip != 0x7ceu) c.badReturn(0x7f2cb);
L7f2ce:
    if (c.tracing) c.traceAt(0x7f2ce);
    // 7eb0:07ce  add edx, dword ptr [0xbb8]  [x54400]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:07d3  sub ecx, dword ptr [0xbbc]  [x54400]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:07d8  dec bp  [x54400]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 7eb0:07d9  jne 0x7b6  [x54400]
    if (!c.zf) goto L7f2b6;
L7f2db:
    if (c.tracing) c.traceAt(0x7f2db);
    // 7eb0:07db  jmp 0x803  [x340]
    goto L7f303;
L7f2de:
    if (c.tracing) c.traceAt(0x7f2de);
    // 7eb0:07de  mov eax, ecx  [x54720]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:07e1  shr eax, 0x18  [x54720]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:07e5  mov bh, al  [x54720]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:07e7  mov eax, edx  [x54720]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:07ea  shr eax, 0x18  [x54720]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), true));
    // 7eb0:07ee  mov bl, al  [x54720]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:07f0  mov si, bx  [x54720]
    c.si.x = (uint16_t)(c.b.x);
    // 7eb0:07f2  push cs  [x54720]
    c.push16(c.cs);
    // 7eb0:07f3  call 0x2a4  [x54720]
    c.push16(0x7f6u); code_14(c, 0x7eda4u); if (c.ip != 0x7f6u) c.badReturn(0x7f2f3);
L7f2f6:
    if (c.tracing) c.traceAt(0x7f2f6);
    // 7eb0:07f6  sub edx, dword ptr [0xbb8]  [x54720]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:07fb  add ecx, dword ptr [0xbbc]  [x54720]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0800  dec bp  [x54720]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 7eb0:0801  jne 0x7de  [x54720]
    if (!c.zf) goto L7f2de;
L7f303:
    if (c.tracing) c.traceAt(0x7f303);
    // 7eb0:0803  pop gs  [x2834]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:0805  retf   [x2834]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f308:
    if (c.tracing) c.traceAt(0x7f308);
    // 7eb0:0808  mov ax, word ptr [0xb96]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb96u)));
    // 7eb0:080b  not ax  [x1417]
    c.a.x = (uint16_t)(~(c.a.x));
    // 7eb0:080d  and ax, 0x400  [x1417]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x400u), false));
    // 7eb0:0810  add ax, 0xa000  [x1417]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 7eb0:0813  mov word ptr [0xb71], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb71u), c.a.x);
    // 7eb0:0816  mov word ptr [0xbc0], 0xa0  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbc0u), 0xa0u);
    // 7eb0:081c  mov ax, 0x553b  [x1417]
    c.a.x = (uint16_t)(0x553bu);
    // 7eb0:081f  mov gs, ax  [x1417]
    c.loadGs(c.a.x);
    // 7eb0:0821  mov si, 0xbc4  [x1417]
    c.si.x = (uint16_t)(0xbc4u);
    // 7eb0:0824  mov di, 0xbf4  [x1417]
    c.di.x = (uint16_t)(0xbf4u);
    // 7eb0:0827  mov cx, 3  [x1417]
    c.c.x = (uint16_t)(0x3u);
L7f32a:
    if (c.tracing) c.traceAt(0x7f32a);
    // 7eb0:082a  mov eax, dword ptr [si]  [x4251]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x)));
    // 7eb0:082d  add eax, dword ptr [0xba6]  [x4251]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xba6u)), false));
    // 7eb0:0832  mov eax, dword ptr gs:[eax*4]  [x4251]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4)));
    // 7eb0:083c  mov ebp, dword ptr [si + 4]  [x4251]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x4u)));
    // 7eb0:0840  imul ebp  [x4251]
    c.imul32(c.bp.e);
    // 7eb0:0843  sar eax, 0xe  [x4251]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:0847  add eax, 0x80  [x4251]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:084d  mov bh, al  [x4251]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:084f  mov ebp, dword ptr [si + 0xc]  [x4251]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0xcu)));
    // 7eb0:0853  mov eax, dword ptr [si + 8]  [x4251]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x8u)));
    // 7eb0:0857  add eax, dword ptr [0xba6]  [x4251]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xba6u)), false));
    // 7eb0:085c  mov eax, dword ptr gs:[eax*4 + 0x400]  [x4251]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4 + 0x400u)));
    // 7eb0:0866  imul ebp  [x4251]
    c.imul32(c.bp.e);
    // 7eb0:0869  sar eax, 0xe  [x4251]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:086d  add eax, 0x80  [x4251]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:0873  mov bl, al  [x4251]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0875  mov byte ptr [di], bl  [x4251]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.b.l);
    // 7eb0:0877  mov byte ptr [di + 1], bh  [x4251]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x1u), c.b.h);
    // 7eb0:087a  add di, 2  [x4251]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 7eb0:087d  mov eax, 0x3ff  [x4251]
    c.a.e = (uint32_t)(0x3ffu);
    // 7eb0:0883  and dword ptr [si], eax  [x4251]
    c.w32(c.dsb + (uint16_t)(c.si.x), c.logic<32>((c.r32(c.dsb + (uint16_t)(c.si.x))) & (c.a.e), false));
    // 7eb0:0886  and dword ptr [si + 8], eax  [x4251]
    c.w32(c.dsb + (uint16_t)(c.si.x + 0x8u), c.logic<32>((c.r32(c.dsb + (uint16_t)(c.si.x + 0x8u))) & (c.a.e), false));
    // 7eb0:088a  add si, 0x10  [x4251]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, true));
    // 7eb0:088d  loop 0x82a  [x4251]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f32a;
L7f38f:
    if (c.tracing) c.traceAt(0x7f38f);
    // 7eb0:088f  cld   [x1417]
    c.df = false;
    // 7eb0:0890  xor ah, ah  [x1417]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 7eb0:0892  mov si, 0xbf4  [x1417]
    c.si.x = (uint16_t)(0xbf4u);
    // 7eb0:0895  mov word ptr [0xbaa], 0x80  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaau), 0x80u);
    // 7eb0:089b  mov word ptr [0xbac], 0x80  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbacu), 0x80u);
    // 7eb0:08a1  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x8a2u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:08a2  mov word ptr [0xbae], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:08a5  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x8a6u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:08a6  mov word ptr [0xbb0], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:08a9  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:08aa  call 0x578  [x1417]
    c.push16(0x8adu); code_14(c, 0x7f078u); if (c.ip != 0x8adu) c.badReturn(0x7f3aa);
L7f3ad:
    if (c.tracing) c.traceAt(0x7f3ad);
    // 7eb0:08ad  mov ax, cs  [x1417]
    c.a.x = (uint16_t)(c.cs);
    // 7eb0:08af  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:08b1  mov di, 0x2a4  [x1417]
    c.di.x = (uint16_t)(0x2a4u);
    // 7eb0:08b4  add di, 3  [x1417]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, true));
    // 7eb0:08b7  mov si, 0xbfc  [x1417]
    c.si.x = (uint16_t)(0xbfcu);
    // 7eb0:08ba  mov cx, 0x14  [x1417]
    c.c.x = (uint16_t)(0x14u);
    // 7eb0:08bd  cld   [x1417]
    c.df = false;
L7f3be:
    if (c.tracing) c.traceAt(0x7f3be);
    // 7eb0:08be  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x8bfu; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:08bf  mov bx, ax  [x28340]
    c.b.x = (uint16_t)(c.a.x);
    // 7eb0:08c1  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:08c4  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x8c5u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:08c5  mov dx, ax  [x28340]
    c.dx_.x = (uint16_t)(c.a.x);
    // 7eb0:08c7  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:08ca  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x8cbu; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:08cb  mov bp, ax  [x28340]
    c.bp.x = (uint16_t)(c.a.x);
    // 7eb0:08cd  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:08d0  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x8d1u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:08d1  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:08d4  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:08d5  add di, 3  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 7eb0:08d8  mov ax, bp  [x28340]
    c.a.x = (uint16_t)(c.bp.x);
    // 7eb0:08da  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:08db  add di, 7  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, false));
    // 7eb0:08de  mov ax, dx  [x28340]
    c.a.x = (uint16_t)(c.dx_.x);
    // 7eb0:08e0  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:08e1  add di, 3  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 7eb0:08e4  mov ax, bx  [x28340]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:08e6  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:08e7  add di, 5  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x5u, true));
    // 7eb0:08ea  loop 0x8be  [x28340]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f3be;
L7f3ec:
    if (c.tracing) c.traceAt(0x7f3ec);
    // 7eb0:08ec  mov ah, 3  [x1417]
    c.a.h = (uint8_t)(0x3u);
    // 7eb0:08ee  mov dx, 0x3c4  [x1417]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 7eb0:08f1  mov al, 2  [x1417]
    c.a.l = (uint8_t)(0x2u);
    // 7eb0:08f3  out dx, ax  [x1417]
    c.ip = 0x8f4u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 7eb0:08f4  xor ah, ah  [x1417]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:08f6  mov si, 0xbf4  [x1417]
    c.si.x = (uint16_t)(0xbf4u);
    // 7eb0:08f9  add si, 2  [x1417]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 7eb0:08fc  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x8fdu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:08fd  mov word ptr [0xbaa], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaau), c.a.x);
    // 7eb0:0900  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x901u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0901  mov word ptr [0xbac], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbacu), c.a.x);
    // 7eb0:0904  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x905u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0905  mov word ptr [0xbae], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0908  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x909u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0909  mov word ptr [0xbb0], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:090c  mov ax, word ptr [0xb71]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb71u)));
    // 7eb0:090f  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0911  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0912  call 0x6c4  [x1417]
    c.push16(0x915u); code_14(c, 0x7f1c4u); if (c.ip != 0x915u) c.badReturn(0x7f412);
L7f415:
    if (c.tracing) c.traceAt(0x7f415);
    // 7eb0:0915  mov ax, cs  [x1417]
    c.a.x = (uint16_t)(c.cs);
    // 7eb0:0917  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0919  mov di, 0x2a4  [x1417]
    c.di.x = (uint16_t)(0x2a4u);
    // 7eb0:091c  add di, 3  [x1417]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 7eb0:091f  mov si, 0xbfc  [x1417]
    c.si.x = (uint16_t)(0xbfcu);
    // 7eb0:0922  add si, 2  [x1417]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 7eb0:0925  mov cx, 0x14  [x1417]
    c.c.x = (uint16_t)(0x14u);
    // 7eb0:0928  cld   [x1417]
    c.df = false;
L7f429:
    if (c.tracing) c.traceAt(0x7f429);
    // 7eb0:0929  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x92au; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:092a  mov bx, ax  [x28340]
    c.b.x = (uint16_t)(c.a.x);
    // 7eb0:092c  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:092f  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x930u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:0930  mov dx, ax  [x28340]
    c.dx_.x = (uint16_t)(c.a.x);
    // 7eb0:0932  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:0935  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x936u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:0936  mov bp, ax  [x28340]
    c.bp.x = (uint16_t)(c.a.x);
    // 7eb0:0938  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:093b  lodsw ax, word ptr [si]  [x28340]
    c.ip = 0x93cu; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 7eb0:093c  add si, 2  [x28340]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 7eb0:093f  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:0940  add di, 3  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 7eb0:0943  mov ax, bp  [x28340]
    c.a.x = (uint16_t)(c.bp.x);
    // 7eb0:0945  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:0946  add di, 7  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7u, false));
    // 7eb0:0949  mov ax, dx  [x28340]
    c.a.x = (uint16_t)(c.dx_.x);
    // 7eb0:094b  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:094c  add di, 3  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x3u, false));
    // 7eb0:094f  mov ax, bx  [x28340]
    c.a.x = (uint16_t)(c.b.x);
    // 7eb0:0951  stosw word ptr es:[di], ax  [x28340]
    c.stos<16, false>(0);
    // 7eb0:0952  add di, 5  [x28340]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x5u, true));
    // 7eb0:0955  loop 0x929  [x28340]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f429;
L7f457:
    if (c.tracing) c.traceAt(0x7f457);
    // 7eb0:0957  mov ah, 0xc  [x1417]
    c.a.h = (uint8_t)(0xcu);
    // 7eb0:0959  mov dx, 0x3c4  [x1417]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 7eb0:095c  mov al, 2  [x1417]
    c.a.l = (uint8_t)(0x2u);
    // 7eb0:095e  out dx, ax  [x1417]
    c.ip = 0x95fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 7eb0:095f  xor ah, ah  [x1417]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:0961  mov si, 0xbf4  [x1417]
    c.si.x = (uint16_t)(0xbf4u);
    // 7eb0:0964  add si, 2  [x1417]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 7eb0:0967  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x968u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0968  mov word ptr [0xbaa], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaau), c.a.x);
    // 7eb0:096b  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x96cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:096c  mov word ptr [0xbac], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbacu), c.a.x);
    // 7eb0:096f  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x970u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0970  mov word ptr [0xbae], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0973  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0x974u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0974  mov word ptr [0xbb0], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:0977  mov ax, word ptr [0xb71]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb71u)));
    // 7eb0:097a  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:097c  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:097d  call 0x6c4  [x1417]
    c.push16(0x980u); code_14(c, 0x7f1c4u); if (c.ip != 0x980u) c.badReturn(0x7f47d);
L7f480:
    if (c.tracing) c.traceAt(0x7f480);
    // 7eb0:0980  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f484:
    if (c.tracing) c.traceAt(0x7f484);
    // 7eb0:0984  mov ax, 0xa000  [x5668]
    c.a.x = (uint16_t)(0xa000u);
    // 7eb0:0987  mov fs, ax  [x5668]
    c.loadFs(c.a.x);
    // 7eb0:0989  mov byte ptr [0xbb3], 0  [x5668]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0x0u);
    // 7eb0:098e  mov ax, word ptr [0xbb0]  [x5668]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbb0u)));
    // 7eb0:0991  sub ax, word ptr [0xbac]  [x5668]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xbacu)), true));
    // 7eb0:0995  jns 0x9a0  [x5668]
    if (!c.sf) goto L7f4a0;
L7f497:
    if (c.tracing) c.traceAt(0x7f497);
    // 7eb0:0997  nop   [x2110]
    // 7eb0:0998  nop   [x2110]
    // 7eb0:0999  mov byte ptr [0xbb3], 0xff  [x2110]
    c.w8(c.dsb + (uint16_t)(0xbb3u), 0xffu);
    // 7eb0:099e  neg ax  [x2110]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
L7f4a0:
    if (c.tracing) c.traceAt(0x7f4a0);
    // 7eb0:09a0  mov word ptr [0xbb4], ax  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbb4u), c.a.x);
    // 7eb0:09a3  mov byte ptr [0xbb2], 0  [x5668]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0x0u);
    // 7eb0:09a8  mov bx, word ptr [0xbae]  [x5668]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbaeu)));
    // 7eb0:09ac  sub bx, word ptr [0xbaa]  [x5668]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xbaau)), true));
    // 7eb0:09b0  jns 0x9bb  [x5668]
    if (!c.sf) goto L7f4bb;
L7f4b2:
    if (c.tracing) c.traceAt(0x7f4b2);
    // 7eb0:09b2  nop   [x2110]
    // 7eb0:09b3  nop   [x2110]
    // 7eb0:09b4  mov byte ptr [0xbb2], 0xff  [x2110]
    c.w8(c.dsb + (uint16_t)(0xbb2u), 0xffu);
    // 7eb0:09b9  neg bx  [x2110]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, true));
L7f4bb:
    if (c.tracing) c.traceAt(0x7f4bb);
    // 7eb0:09bb  mov word ptr [0xbb6], bx  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbb6u), c.b.x);
    // 7eb0:09bf  cmp ax, bx  [x5668]
    // 7eb0:09c1  movzx eax, word ptr [0xbb4]  [x5668]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb4u)));
    // 7eb0:09c7  cdq   [x5668]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:09c9  shl eax, 0x18  [x5668]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:09cd  movzx ecx, word ptr [0xbc0]  [x5668]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:09d3  div ecx  [x5668]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x9d3u); }   // #DE: int 0, then again
    // 7eb0:09d6  mov dword ptr [0xbbc], eax  [x5668]
    c.w32(c.dsb + (uint16_t)(0xbbcu), c.a.e);
    // 7eb0:09da  movzx eax, word ptr [0xbb6]  [x5668]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbb6u)));
    // 7eb0:09e0  cdq   [x5668]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 7eb0:09e2  shl eax, 0x18  [x5668]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:09e6  div ecx  [x5668]
    while (!c.div32(c.c.e)) { c.d32 = false; c.intr(0, 0x9e6u); }   // #DE: int 0, then again
    // 7eb0:09e9  mov dword ptr [0xbb8], eax  [x5668]
    c.w32(c.dsb + (uint16_t)(0xbb8u), c.a.e);
    // 7eb0:09ed  movzx ecx, word ptr [0xbac]  [x5668]
    c.c.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbacu)));
    // 7eb0:09f3  shl ecx, 0x18  [x5668]
    c.c.e = (uint32_t)(c.shl<32>(c.c.e, (int)((0x18u) & 31), false));
    // 7eb0:09f7  movzx edx, word ptr [0xbaa]  [x5668]
    c.dx_.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xbaau)));
    // 7eb0:09fd  shl edx, 0x18  [x5668]
    c.dx_.e = (uint32_t)(c.shl<32>(c.dx_.e, (int)((0x18u) & 31), false));
    // 7eb0:0a01  mov si, word ptr [0xbc0]  [x5668]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc0u)));
    // 7eb0:0a05  mov al, byte ptr [0xbb2]  [x5668]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb2u)));
    // 7eb0:0a08  mov ah, byte ptr [0xbb3]  [x5668]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbb3u)));
    // 7eb0:0a0c  cmp ax, 0xffff  [x5668]
    c.sub<16>(c.a.x, 0xffffu, true);
    // 7eb0:0a0f  je 0xa4d  [x5668]
    if (c.zf) goto L7f54d;
L7f511:
    if (c.tracing) c.traceAt(0x7f511);
    // 7eb0:0a11  nop   [x4975]
    // 7eb0:0a12  nop   [x4975]
    // 7eb0:0a13  cmp ah, 0xff  [x4975]
    c.sub<8>(c.a.h, 0xffu, true);
    // 7eb0:0a16  je 0xa7a  [x4975]
    if (c.zf) goto L7f57a;
L7f518:
    if (c.tracing) c.traceAt(0x7f518);
    // 7eb0:0a18  nop   [x3558]
    // 7eb0:0a19  nop   [x3558]
    // 7eb0:0a1a  cmp al, 0xff  [x3558]
    c.sub<8>(c.a.l, 0xffu, true);
    // 7eb0:0a1c  je 0xaa7  [x3558]
    if (c.zf) goto L7f5a7;
L7f520:
    if (c.tracing) c.traceAt(0x7f520);
    // 7eb0:0a20  mov di, 0x15d3  [x2141]
    c.di.x = (uint16_t)(0x15d3u);
L7f523:
    if (c.tracing) c.traceAt(0x7f523);
    // 7eb0:0a23  mov eax, ecx  [x483866]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0a26  shr eax, 0x18  [x483866]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a2a  mov bh, al  [x483866]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0a2c  mov eax, edx  [x483866]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0a2f  shr eax, 0x18  [x483866]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a33  mov bl, al  [x483866]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0a35  mov al, bl  [x483866]
    c.a.l = (uint8_t)(c.b.l);
    // 7eb0:0a37  shr bx, 8  [x483866]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x8u) & 31), false));
    // 7eb0:0a3a  mov byte ptr es:[bx + di], al  [x483866]
    c.w8(c.esb + (uint16_t)(c.b.x + c.di.x), c.a.l);
    // 7eb0:0a3d  add edx, dword ptr [0xbb8]  [x483866]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0a42  add ecx, dword ptr [0xbbc]  [x483866]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0a47  dec si  [x483866]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0a48  jne 0xa23  [x483866]
    if (!c.zf) goto L7f523;
L7f54a:
    if (c.tracing) c.traceAt(0x7f54a);
    // 7eb0:0a4a  jmp 0xad1  [x2141]
    goto L7f5d1;
L7f54d:
    if (c.tracing) c.traceAt(0x7f54d);
    // 7eb0:0a4d  mov di, 0x14d3  [x693]
    c.di.x = (uint16_t)(0x14d3u);
L7f550:
    if (c.tracing) c.traceAt(0x7f550);
    // 7eb0:0a50  mov eax, ecx  [x156618]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0a53  shr eax, 0x18  [x156618]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a57  mov bh, al  [x156618]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0a59  mov eax, edx  [x156618]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0a5c  shr eax, 0x18  [x156618]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a60  mov bl, al  [x156618]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0a62  mov al, bl  [x156618]
    c.a.l = (uint8_t)(c.b.l);
    // 7eb0:0a64  shr bx, 8  [x156618]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x8u) & 31), false));
    // 7eb0:0a67  mov byte ptr es:[bx + di], al  [x156618]
    c.w8(c.esb + (uint16_t)(c.b.x + c.di.x), c.a.l);
    // 7eb0:0a6a  sub edx, dword ptr [0xbb8]  [x156618]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0a6f  sub ecx, dword ptr [0xbbc]  [x156618]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0a74  dec si  [x156618]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0a75  jne 0xa50  [x156618]
    if (!c.zf) goto L7f550;
L7f577:
    if (c.tracing) c.traceAt(0x7f577);
    // 7eb0:0a77  jmp 0xad1  [x693]
    goto L7f5d1;
L7f57a:
    if (c.tracing) c.traceAt(0x7f57a);
    // 7eb0:0a7a  mov di, 0x14d3  [x1417]
    c.di.x = (uint16_t)(0x14d3u);
L7f57d:
    if (c.tracing) c.traceAt(0x7f57d);
    // 7eb0:0a7d  mov eax, ecx  [x320242]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0a80  shr eax, 0x18  [x320242]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a84  mov bh, al  [x320242]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0a86  mov eax, edx  [x320242]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0a89  shr eax, 0x18  [x320242]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0a8d  mov bl, al  [x320242]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0a8f  mov al, bl  [x320242]
    c.a.l = (uint8_t)(c.b.l);
    // 7eb0:0a91  shr bx, 8  [x320242]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x8u) & 31), false));
    // 7eb0:0a94  mov byte ptr es:[bx + di], al  [x320242]
    c.w8(c.esb + (uint16_t)(c.b.x + c.di.x), c.a.l);
    // 7eb0:0a97  add edx, dword ptr [0xbb8]  [x320242]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0a9c  sub ecx, dword ptr [0xbbc]  [x320242]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0aa1  dec si  [x320242]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0aa2  jne 0xa7d  [x320242]
    if (!c.zf) goto L7f57d;
L7f5a4:
    if (c.tracing) c.traceAt(0x7f5a4);
    // 7eb0:0aa4  jmp 0xad1  [x1417]
    goto L7f5d1;
L7f5a7:
    if (c.tracing) c.traceAt(0x7f5a7);
    // 7eb0:0aa7  mov di, 0x15d3  [x1417]
    c.di.x = (uint16_t)(0x15d3u);
L7f5aa:
    if (c.tracing) c.traceAt(0x7f5aa);
    // 7eb0:0aaa  mov eax, ecx  [x320242]
    c.a.e = (uint32_t)(c.c.e);
    // 7eb0:0aad  shr eax, 0x18  [x320242]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0ab1  mov bh, al  [x320242]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0ab3  mov eax, edx  [x320242]
    c.a.e = (uint32_t)(c.dx_.e);
    // 7eb0:0ab6  shr eax, 0x18  [x320242]
    c.a.e = (uint32_t)(c.shr<32>(c.a.e, (int)((0x18u) & 31), false));
    // 7eb0:0aba  mov bl, al  [x320242]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0abc  mov al, bl  [x320242]
    c.a.l = (uint8_t)(c.b.l);
    // 7eb0:0abe  shr bx, 8  [x320242]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x8u) & 31), false));
    // 7eb0:0ac1  mov byte ptr es:[bx + di], al  [x320242]
    c.w8(c.esb + (uint16_t)(c.b.x + c.di.x), c.a.l);
    // 7eb0:0ac4  sub edx, dword ptr [0xbb8]  [x320242]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0xbb8u)), false));
    // 7eb0:0ac9  add ecx, dword ptr [0xbbc]  [x320242]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.dsb + (uint16_t)(0xbbcu)), true));
    // 7eb0:0ace  dec si  [x320242]
    c.si.x = (uint16_t)(c.dec<16>(c.si.x, true));
    // 7eb0:0acf  jne 0xaaa  [x320242]
    if (!c.zf) goto L7f5aa;
L7f5d1:
    if (c.tracing) c.traceAt(0x7f5d1);
    // 7eb0:0ad1  retf   [x5668]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f5d2:
    if (c.tracing) c.traceAt(0x7f5d2);
    // 7eb0:0ad2  mov ax, 0x553b  [x1417]
    c.a.x = (uint16_t)(0x553bu);
    // 7eb0:0ad5  mov gs, ax  [x1417]
    c.loadGs(c.a.x);
    // 7eb0:0ad7  mov ax, 0xa000  [x1417]
    c.a.x = (uint16_t)(0xa000u);
    // 7eb0:0ada  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0adc  mov si, 0x16d3  [x1417]
    c.si.x = (uint16_t)(0x16d3u);
    // 7eb0:0adf  mov di, 0x1723  [x1417]
    c.di.x = (uint16_t)(0x1723u);
    // 7eb0:0ae2  mov cx, 5  [x1417]
    c.c.x = (uint16_t)(0x5u);
L7f5e5:
    if (c.tracing) c.traceAt(0x7f5e5);
    // 7eb0:0ae5  mov eax, dword ptr [si]  [x7085]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x)));
    // 7eb0:0ae8  add eax, dword ptr [0xba6]  [x7085]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xba6u)), false));
    // 7eb0:0aed  mov eax, dword ptr gs:[eax*4]  [x7085]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4)));
    // 7eb0:0af7  mov ebp, dword ptr [si + 4]  [x7085]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x4u)));
    // 7eb0:0afb  imul ebp  [x7085]
    c.imul32(c.bp.e);
    // 7eb0:0afe  sar eax, 0xe  [x7085]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:0b02  add eax, 0x80  [x7085]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:0b08  mov bh, al  [x7085]
    c.b.h = (uint8_t)(c.a.l);
    // 7eb0:0b0a  mov ebp, dword ptr [si + 0xc]  [x7085]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0xcu)));
    // 7eb0:0b0e  mov eax, dword ptr [si + 8]  [x7085]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(c.si.x + 0x8u)));
    // 7eb0:0b12  add eax, dword ptr [0xba6]  [x7085]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xba6u)), false));
    // 7eb0:0b17  mov eax, dword ptr gs:[eax*4 + 0x400]  [x7085]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.a.e * 4 + 0x400u)));
    // 7eb0:0b21  imul ebp  [x7085]
    c.imul32(c.bp.e);
    // 7eb0:0b24  sar eax, 0xe  [x7085]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xeu) & 31), false));
    // 7eb0:0b28  add eax, 0x80  [x7085]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x80u, false));
    // 7eb0:0b2e  mov bl, al  [x7085]
    c.b.l = (uint8_t)(c.a.l);
    // 7eb0:0b30  mov byte ptr [di], bl  [x7085]
    c.w8(c.dsb + (uint16_t)(c.di.x), c.b.l);
    // 7eb0:0b32  mov byte ptr [di + 1], bh  [x7085]
    c.w8(c.dsb + (uint16_t)(c.di.x + 0x1u), c.b.h);
    // 7eb0:0b35  add di, 2  [x7085]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 7eb0:0b38  add si, 0x10  [x7085]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, true));
    // 7eb0:0b3b  loop 0xae5  [x7085]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f5e5;
L7f63d:
    if (c.tracing) c.traceAt(0x7f63d);
    // 7eb0:0b3d  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f640:
    if (c.tracing) c.traceAt(0x7f640);
    // 7eb0:0b40  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0b41  call 0xad2  [x1417]
    c.push16(0xb44u); code_14(c, 0x7f5d2u); if (c.ip != 0xb44u) c.badReturn(0x7f641);
L7f644:
    if (c.tracing) c.traceAt(0x7f644);
    // 7eb0:0b44  mov byte ptr [0x14d2], 0  [x1417]
    c.w8(c.dsb + (uint16_t)(0x14d2u), 0x0u);
L7f649:
    if (c.tracing) c.traceAt(0x7f649);
    // 7eb0:0b49  xor ah, ah  [x5668]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:0b4b  mov si, 0x1723  [x5668]
    c.si.x = (uint16_t)(0x1723u);
    // 7eb0:0b4e  mov al, byte ptr [0x14d2]  [x5668]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x14d2u)));
    // 7eb0:0b51  shl ax, 1  [x5668]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), false));
    // 7eb0:0b53  add si, ax  [x5668]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.a.x, false));
    // 7eb0:0b55  xor ah, ah  [x5668]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 7eb0:0b57  lodsb al, byte ptr [si]  [x5668]
    c.ip = 0xb58u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b58  mov word ptr [0xbaa], ax  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbaau), c.a.x);
    // 7eb0:0b5b  lodsb al, byte ptr [si]  [x5668]
    c.ip = 0xb5cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b5c  mov word ptr [0xbac], ax  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbacu), c.a.x);
    // 7eb0:0b5f  lodsb al, byte ptr [si]  [x5668]
    c.ip = 0xb60u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b60  mov word ptr [0xbae], ax  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0b63  lodsb al, byte ptr [si]  [x5668]
    c.ip = 0xb64u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b64  mov word ptr [0xbb0], ax  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:0b67  mov word ptr [0xbc0], 0xe2  [x5668]
    c.w16(c.dsb + (uint16_t)(0xbc0u), 0xe2u);
    // 7eb0:0b6d  cld   [x5668]
    c.df = false;
    // 7eb0:0b6e  mov ax, ds  [x5668]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0b70  mov es, ax  [x5668]
    c.loadEs(c.a.x);
    // 7eb0:0b72  push cs  [x5668]
    c.push16(c.cs);
    // 7eb0:0b73  call 0x984  [x5668]
    c.push16(0xb76u); code_14(c, 0x7f484u); if (c.ip != 0xb76u) c.badReturn(0x7f673);
L7f676:
    if (c.tracing) c.traceAt(0x7f676);
    // 7eb0:0b76  inc byte ptr [0x14d2]  [x5668]
    c.w8(c.dsb + (uint16_t)(0x14d2u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0x14d2u)), false));
    // 7eb0:0b7a  cmp byte ptr [0x14d2], 3  [x5668]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x14d2u)), 0x3u, true);
    // 7eb0:0b7f  jbe 0xb49  [x5668]
    if ((c.cf || c.zf)) goto L7f649;
L7f681:
    if (c.tracing) c.traceAt(0x7f681);
    // 7eb0:0b81  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f682:
    if (c.tracing) c.traceAt(0x7f682);
    // 7eb0:0b82  push ds  [x1]
    c.push16(c.ds);
    // 7eb0:0b83  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 7eb0:0b85  mov dx, 0x3c7  [x1]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 7eb0:0b88  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 7eb0:0b8a  out dx, al  [x1]
    c.ip = 0xb8bu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 7eb0:0b8b  cld   [x1]
    c.df = false;
    // 7eb0:0b8c  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 7eb0:0b8f  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 7eb0:0b91  out dx, al  [x1]
    c.ip = 0xb92u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 7eb0:0b92  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L7f695:
    if (c.tracing) c.traceAt(0x7f695);
    // 7eb0:0b95  mov dx, 0x3c9  [x255]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 7eb0:0b98  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb99u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b99  out dx, al  [x255]
    c.ip = 0xb9au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 7eb0:0b9a  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb9bu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b9b  out dx, al  [x255]
    c.ip = 0xb9cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 7eb0:0b9c  lodsb al, byte ptr [si]  [x255]
    c.ip = 0xb9du; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0b9d  out dx, al  [x255]
    c.ip = 0xb9eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 7eb0:0b9e  loop 0xb95  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f695;
L7f6a0:
    if (c.tracing) c.traceAt(0x7f6a0);
    // 7eb0:0ba0  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0ba1  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f6a2:
    if (c.tracing) c.traceAt(0x7f6a2);
    // 7eb0:0ba2  mov ax, 0x5d3c  [x1]
    c.a.x = (uint16_t)(0x5d3cu);
    // 7eb0:0ba5  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 7eb0:0ba7  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 7eb0:0ba9  mov dword ptr [0xb62], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb62u), 0x0u);
L7f6b2:
    if (c.tracing) c.traceAt(0x7f6b2);
    // 7eb0:0bb2  mov word ptr [0xb6d], 0  [x80]
    c.w16(c.dsb + (uint16_t)(0xb6du), 0x0u);
    // 7eb0:0bb8  mov ecx, dword ptr [0xb62]  [x80]
    c.c.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb62u)));
    // 7eb0:0bbd  mov cx, word ptr [ecx*2 + 0x500]  [x80]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint32_t)(c.c.e * 2 + 0x500u)));
L7f6c5:
    if (c.tracing) c.traceAt(0x7f6c5);
    // 7eb0:0bc5  mov ax, word ptr [0xb6d]  [x40961]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb6du)));
    // 7eb0:0bc8  sub ax, 0xff  [x40961]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0xffu, false));
    // 7eb0:0bcb  shl ax, 7  [x40961]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 7eb0:0bce  cdq   [x40961]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 7eb0:0bcf  idiv cx  [x40961]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0xbcfu); }   // #DE: int 0, then again
    // 7eb0:0bd1  add ax, 0x5a  [x40961]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x5au, true));
    // 7eb0:0bd4  jns 0xbdd  [x40961]
    if (!c.sf) goto L7f6dd;
L7f6d6:
    if (c.tracing) c.traceAt(0x7f6d6);
    // 7eb0:0bd6  nop   [x2554]
    // 7eb0:0bd7  nop   [x2554]
    // 7eb0:0bd8  xor ax, ax  [x2554]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 7eb0:0bda  jmp 0xbe7  [x2554]
    goto L7f6e7;
L7f6dd:
    if (c.tracing) c.traceAt(0x7f6dd);
    // 7eb0:0bdd  cmp ax, 0xff  [x38406]
    c.sub<16>(c.a.x, 0xffu, true);
    // 7eb0:0be0  jle 0xbe7  [x38406]
    if ((c.zf || c.sf != c.of)) goto L7f6e7;
L7f6e2:
    if (c.tracing) c.traceAt(0x7f6e2);
    // 7eb0:0be2  nop   [x986]
    // 7eb0:0be3  nop   [x986]
    // 7eb0:0be4  mov ax, 0xff  [x986]
    c.a.x = (uint16_t)(0xffu);
L7f6e7:
    if (c.tracing) c.traceAt(0x7f6e7);
    // 7eb0:0be7  stosb byte ptr es:[di], al  [x40960]
    c.stos<8, false>(0);
    // 7eb0:0be8  inc word ptr [0xb6d]  [x40960]
    c.w16(c.dsb + (uint16_t)(0xb6du), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xb6du)), false));
    // 7eb0:0bec  cmp word ptr [0xb6d], 0x200  [x40960]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xb6du)), 0x200u, true);
    // 7eb0:0bf2  jne 0xbc5  [x40960]
    if (!c.zf) goto L7f6c5;
L7f6f4:
    if (c.tracing) c.traceAt(0x7f6f4);
    // 7eb0:0bf4  inc dword ptr [0xb62]  [x80]
    c.w32(c.dsb + (uint16_t)(0xb62u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0xb62u)), false));
    // 7eb0:0bf9  cmp dword ptr [0xb62], 0x50  [x80]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xb62u)), 0x50u, true);
    // 7eb0:0bff  jne 0xbb2  [x80]
    if (!c.zf) goto L7f6b2;
L7f701:
    if (c.tracing) c.traceAt(0x7f701);
    // 7eb0:0c01  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f710:
    if (c.tracing) c.traceAt(0x7f710);
    // 7eb0:0c10  mov ax, word ptr [0xb96]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb96u)));
    // 7eb0:0c13  not ax  [x1417]
    c.a.x = (uint16_t)(~(c.a.x));
    // 7eb0:0c15  and ax, 0x400  [x1417]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x400u), false));
    // 7eb0:0c18  shl ah, 4  [x1417]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), true));
    // 7eb0:0c1b  mov dx, 0x3d4  [x1417]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 7eb0:0c1e  mov al, 0xc  [x1417]
    c.a.l = (uint8_t)(0xcu);
    // 7eb0:0c20  out dx, ax  [x1417]
    c.ip = 0xc21u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 7eb0:0c21  not word ptr [0xb96]  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb96u), ~(c.r16(c.dsb + (uint16_t)(0xb96u))));
    // 7eb0:0c25  retf   [x1417]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f731:
    if (c.tracing) c.traceAt(0x7f731);
    // 7eb0:0c31  mov cx, word ptr [0xbc2]  [x1417]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc2u)));
L7f735:
    if (c.tracing) c.traceAt(0x7f735);
    // 7eb0:0c35  mov eax, dword ptr [0x14ce]  [x1417]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14ceu)));
    // 7eb0:0c39  shr ax, 1  [x1417]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x1u) & 31), false));
    // 7eb0:0c3b  add ax, 0x100  [x1417]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x100u, false));
    // 7eb0:0c3e  and ax, 0x1ff  [x1417]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x1ffu), false));
    // 7eb0:0c41  mov word ptr [0xb93], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb93u), c.a.x);
    // 7eb0:0c44  mov ax, word ptr [0xba4]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xba4u)));
    // 7eb0:0c47  add byte ptr [0xbfa], al  [x1417]
    c.w8(c.dsb + (uint16_t)(0xbfau), c.add<8>(c.r8(c.dsb + (uint16_t)(0xbfau)), c.a.l, false));
    // 7eb0:0c4b  add byte ptr [0xbfb], ah  [x1417]
    c.w8(c.dsb + (uint16_t)(0xbfbu), c.add<8>(c.r8(c.dsb + (uint16_t)(0xbfbu)), c.a.h, false));
    // 7eb0:0c4f  cmp byte ptr [0xb9a], 1  [x1417]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xb9au)), 0x1u, true);
    // 7eb0:0c54  jne 0xc77  [x1417]
    if (!c.zf) goto L7f777;
L7f756:
    if (c.tracing) c.traceAt(0x7f756);
    // 7eb0:0c56  nop   [x696]
    // 7eb0:0c57  nop   [x696]
    // 7eb0:0c58  xor eax, eax  [x696]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 7eb0:0c5b  mov ax, word ptr es:[si + 4]  [x696]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x4u)));
    // 7eb0:0c5f  add ax, 0x100  [x696]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x100u, false));
    // 7eb0:0c62  and ax, 0x3ff  [x696]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3ffu), false));
    // 7eb0:0c65  mov eax, dword ptr [0xba0]  [x696]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xba0u)));
    // 7eb0:0c69  add dword ptr [0xba6], eax  [x696]
    c.w32(c.dsb + (uint16_t)(0xba6u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xba6u)), c.a.e, false));
    // 7eb0:0c6e  and dword ptr [0xba6], 0x3ff  [x696]
    c.w32(c.dsb + (uint16_t)(0xba6u), c.logic<32>((c.r32(c.dsb + (uint16_t)(0xba6u))) & (0x3ffu), true));
L7f777:
    if (c.tracing) c.traceAt(0x7f777);
    // 7eb0:0c77  cmp byte ptr [0xb9b], 1  [x1417]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xb9bu)), 0x1u, true);
    // 7eb0:0c7c  jne 0xca5  [x1417]
    if (!c.zf) goto L7f7a5;
L7f77e:
    if (c.tracing) c.traceAt(0x7f77e);
    // 7eb0:0c7e  nop   [x1417]
    // 7eb0:0c7f  nop   [x1417]
    // 7eb0:0c80  mov ax, word ptr es:[si + 6]  [x1417]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x + 0x6u)));
    // 7eb0:0c84  add ax, 0x100  [x1417]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x100u, false));
    // 7eb0:0c87  and ax, 0x3ff  [x1417]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x3ffu), false));
    // 7eb0:0c8a  mov eax, dword ptr [0xb9c]  [x1417]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb9cu)));
    // 7eb0:0c8e  add dword ptr [0x14ce], eax  [x1417]
    c.w32(c.dsb + (uint16_t)(0x14ceu), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14ceu)), c.a.e, false));
    // 7eb0:0c93  and dword ptr [0x14ce], 0x3ff  [x1417]
    c.w32(c.dsb + (uint16_t)(0x14ceu), c.logic<32>((c.r32(c.dsb + (uint16_t)(0x14ceu))) & (0x3ffu), true));
    // 7eb0:0c9c  loop 0xc35  [x1417]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f735;
L7f79e:
    if (c.tracing) c.traceAt(0x7f79e);
    // 7eb0:0c9e  add si, 0x10  [x1417]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 7eb0:0ca1  and si, 0x1fff  [x1417]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1fffu), true));
L7f7a5:
    if (c.tracing) c.traceAt(0x7f7a5);
    // 7eb0:0ca5  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0ca6  call 0x223  [x1417]
    c.push16(0xca9u); code_14(c, 0x7ed23u); if (c.ip != 0xca9u) c.badReturn(0x7f7a6);
L7f7a9:
    if (c.tracing) c.traceAt(0x7f7a9);
    // 7eb0:0ca9  xor ah, ah  [x1417]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), true));
    // 7eb0:0cab  mov si, 0x113c  [x1417]
    c.si.x = (uint16_t)(0x113cu);
    // 7eb0:0cae  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xcafu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0caf  mov word ptr [0xbaa], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaau), c.a.x);
    // 7eb0:0cb2  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xcb3u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cb3  mov word ptr [0xbac], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbacu), c.a.x);
    // 7eb0:0cb6  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xcb7u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cb7  mov word ptr [0xbae], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0cba  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xcbbu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cbb  mov word ptr [0xbb0], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:0cbe  mov word ptr [0xbc0], 0xe2  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbc0u), 0xe2u);
    // 7eb0:0cc4  cld   [x1417]
    c.df = false;
    // 7eb0:0cc5  push ds  [x1417]
    c.push16(c.ds);
    // 7eb0:0cc6  push es  [x1417]
    c.push16(c.es);
    // 7eb0:0cc7  push fs  [x1417]
    c.push16(c.fs);
    // 7eb0:0cc9  push gs  [x1417]
    c.push16(c.gs);
    // 7eb0:0ccb  mov ax, ds  [x1417]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0ccd  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0ccf  mov di, 0xbfc  [x1417]
    c.di.x = (uint16_t)(0xbfcu);
    // 7eb0:0cd2  cld   [x1417]
    c.df = false;
    // 7eb0:0cd3  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0cd4  call 0  [x1417]
    c.push16(0xcd7u); code_14(c, 0x7eb00u); if (c.ip != 0xcd7u) c.badReturn(0x7f7d4);
L7f7d7:
    if (c.tracing) c.traceAt(0x7f7d7);
    // 7eb0:0cd7  pop gs  [x1417]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:0cd9  pop fs  [x1417]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:0cdb  pop es  [x1417]
    c.loadEs((uint16_t)c.pop16());
    // 7eb0:0cdc  pop ds  [x1417]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0cdd  xor ah, ah  [x1417]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:0cdf  mov si, 0x113c  [x1417]
    c.si.x = (uint16_t)(0x113cu);
    // 7eb0:0ce2  add si, 4  [x1417]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 7eb0:0ce5  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xce6u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0ce6  mov word ptr [0xbaa], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaau), c.a.x);
    // 7eb0:0ce9  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xceau; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cea  mov word ptr [0xbac], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbacu), c.a.x);
    // 7eb0:0ced  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xceeu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cee  mov word ptr [0xbae], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0cf1  lodsb al, byte ptr [si]  [x1417]
    c.ip = 0xcf2u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0cf2  mov word ptr [0xbb0], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:0cf5  mov word ptr [0xbc0], 0xe2  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbc0u), 0xe2u);
    // 7eb0:0cfb  cld   [x1417]
    c.df = false;
    // 7eb0:0cfc  push ds  [x1417]
    c.push16(c.ds);
    // 7eb0:0cfd  push es  [x1417]
    c.push16(c.es);
    // 7eb0:0cfe  push fs  [x1417]
    c.push16(c.fs);
    // 7eb0:0d00  push gs  [x1417]
    c.push16(c.gs);
    // 7eb0:0d02  mov ax, ds  [x1417]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0d04  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0d06  mov di, 0xe7c  [x1417]
    c.di.x = (uint16_t)(0xe7cu);
    // 7eb0:0d09  cld   [x1417]
    c.df = false;
    // 7eb0:0d0a  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0d0b  call 0  [x1417]
    c.push16(0xd0eu); code_14(c, 0x7eb00u); if (c.ip != 0xd0eu) c.badReturn(0x7f80b);
L7f80e:
    if (c.tracing) c.traceAt(0x7f80e);
    // 7eb0:0d0e  pop gs  [x1417]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:0d10  pop fs  [x1417]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:0d12  pop es  [x1417]
    c.loadEs((uint16_t)c.pop16());
    // 7eb0:0d13  pop ds  [x1417]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0d14  mov ax, ds  [x1417]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0d16  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0d18  mov di, 0x14d3  [x1417]
    c.di.x = (uint16_t)(0x14d3u);
    // 7eb0:0d1b  cld   [x1417]
    c.df = false;
    // 7eb0:0d1c  mov cx, 0x40  [x1417]
    c.c.x = (uint16_t)(0x40u);
    // 7eb0:0d1f  mov eax, 0  [x1417]
    c.a.e = (uint32_t)(0x0u);
L7f825:
    if (c.tracing) c.traceAt(0x7f825);
    // 7eb0:0d25  rep stosd dword ptr es:[di], eax  [x92105]
    c.stos<32, false>(1);
L7f828:
    if (c.tracing) c.traceAt(0x7f828);
    // 7eb0:0d28  mov di, 0x15d3  [x1417]
    c.di.x = (uint16_t)(0x15d3u);
    // 7eb0:0d2b  mov cx, 0x40  [x1417]
    c.c.x = (uint16_t)(0x40u);
    // 7eb0:0d2e  mov eax, 0  [x1417]
    c.a.e = (uint32_t)(0x0u);
L7f834:
    if (c.tracing) c.traceAt(0x7f834);
    // 7eb0:0d34  rep stosd dword ptr es:[di], eax  [x92105]
    c.stos<32, false>(1);
L7f837:
    if (c.tracing) c.traceAt(0x7f837);
    // 7eb0:0d37  push ds  [x1417]
    c.push16(c.ds);
    // 7eb0:0d38  push es  [x1417]
    c.push16(c.es);
    // 7eb0:0d39  push fs  [x1417]
    c.push16(c.fs);
    // 7eb0:0d3b  push gs  [x1417]
    c.push16(c.gs);
    // 7eb0:0d3d  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0d3e  call 0xb40  [x1417]
    c.push16(0xd41u); code_14(c, 0x7f640u); if (c.ip != 0xd41u) c.badReturn(0x7f83e);
L7f841:
    if (c.tracing) c.traceAt(0x7f841);
    // 7eb0:0d41  pop gs  [x1417]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:0d43  pop fs  [x1417]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:0d45  pop es  [x1417]
    c.loadEs((uint16_t)c.pop16());
    // 7eb0:0d46  pop ds  [x1417]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0d47  mov ax, 0x6d3c  [x1417]
    c.a.x = (uint16_t)(0x6d3cu);
    // 7eb0:0d4a  mov es, ax  [x1417]
    c.loadEs(c.a.x);
    // 7eb0:0d4c  mov eax, dword ptr [0xb88]  [x1417]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb88u)));
    // 7eb0:0d50  mov word ptr [0xb60], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb60u), c.a.x);
    // 7eb0:0d53  mov word ptr [0xb6b], 0  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb6bu), 0x0u);
L7f859:
    if (c.tracing) c.traceAt(0x7f859);
    // 7eb0:0d59  mov si, word ptr [0xb6b]  [x320242]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb6bu)));
    // 7eb0:0d5d  shl si, 1  [x320242]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x1u) & 31), false));
    // 7eb0:0d5f  mov bx, si  [x320242]
    c.b.x = (uint16_t)(c.si.x);
    // 7eb0:0d61  add si, 0xe7c  [x320242]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xe7cu, false));
    // 7eb0:0d65  xor ah, ah  [x320242]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:0d67  lodsb al, byte ptr [si]  [x320242]
    c.ip = 0xd68u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0d68  mov word ptr [0xbaa], 0x80  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbaau), 0x80u);
    // 7eb0:0d6e  lodsb al, byte ptr [si]  [x320242]
    c.ip = 0xd6fu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0d6f  mov word ptr [0xbac], 0x80  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbacu), 0x80u);
    // 7eb0:0d75  mov si, bx  [x320242]
    c.si.x = (uint16_t)(c.b.x);
    // 7eb0:0d77  add si, 0xbfc  [x320242]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xbfcu, true));
    // 7eb0:0d7b  lodsb al, byte ptr [si]  [x320242]
    c.ip = 0xd7cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0d7c  mov word ptr [0xbae], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbaeu), c.a.x);
    // 7eb0:0d7f  lodsb al, byte ptr [si]  [x320242]
    c.ip = 0xd80u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 7eb0:0d80  mov word ptr [0xbb0], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbb0u), c.a.x);
    // 7eb0:0d83  mov word ptr [0xbc0], 0x50  [x320242]
    c.w16(c.dsb + (uint16_t)(0xbc0u), 0x50u);
    // 7eb0:0d89  push cs  [x320242]
    c.push16(c.cs);
    // 7eb0:0d8a  call 0x12c  [x320242]
    c.push16(0xd8du); code_14(c, 0x7ec2cu); if (c.ip != 0xd8du) c.badReturn(0x7f88a);
L7f88d:
    if (c.tracing) c.traceAt(0x7f88d);
    // 7eb0:0d8d  mov ax, 0x352a  [x320242]
    c.a.x = (uint16_t)(0x352au);
    // 7eb0:0d90  mov gs, ax  [x320242]
    c.loadGs(c.a.x);
    // 7eb0:0d92  mov dword ptr [0xb62], 5  [x320242]
    c.w32(c.dsb + (uint16_t)(0xb62u), 0x5u);
    // 7eb0:0d9b  mov bp, word ptr [0xb6b]  [x320242]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb6bu)));
    // 7eb0:0d9f  add bp, 0xd  [x320242]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0xdu, false));
    // 7eb0:0da2  mov di, bp  [x320242]
    c.di.x = (uint16_t)(c.bp.x);
    // 7eb0:0da4  shr bp, 1  [x320242]
    c.bp.x = (uint16_t)(c.shr<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 7eb0:0da6  mov bl, byte ptr [di + 0x15d3]  [x320242]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x15d3u)));
    // 7eb0:0daa  xor bh, bh  [x320242]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 7eb0:0dac  cmp bx, 0  [x320242]
    c.sub<16>(c.b.x, 0x0u, true);
    // 7eb0:0daf  je 0xe4b  [x320242]
    if (c.zf) goto L7f94b;
L7f8b3:
    if (c.tracing) c.traceAt(0x7f8b3);
    // 7eb0:0db3  mov word ptr [0xb8e], bx  [x264595]
    c.w16(c.dsb + (uint16_t)(0xb8eu), c.b.x);
    // 7eb0:0db7  mov bl, byte ptr [di + 0x14d3]  [x264595]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.di.x + 0x14d3u)));
    // 7eb0:0dbb  xor bh, bh  [x264595]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), false));
    // 7eb0:0dbd  cmp bx, 0  [x264595]
    c.sub<16>(c.b.x, 0x0u, true);
    // 7eb0:0dc0  je 0xe4b  [x264595]
    if (c.zf) goto L7f94b;
L7f8c4:
    if (c.tracing) c.traceAt(0x7f8c4);
    // 7eb0:0dc4  mov word ptr [0xb90], bx  [x264595]
    c.w16(c.dsb + (uint16_t)(0xb90u), c.b.x);
    // 7eb0:0dc8  xor eax, eax  [x264595]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 7eb0:0dcb  mov bx, word ptr [0xb8e]  [x264595]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb8eu)));
    // 7eb0:0dcf  mov word ptr [0xb54], bx  [x264595]
    c.w16(c.dsb + (uint16_t)(0xb54u), c.b.x);
    // 7eb0:0dd3  mov ebx, dword ptr [0xb50]  [x264595]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb50u)));
    // 7eb0:0dd8  shr ebx, 0x10  [x264595]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)((0x10u) & 31), false));
    // 7eb0:0ddc  mov dl, 0  [x264595]
    c.dx_.l = (uint8_t)(0x0u);
    // 7eb0:0dde  mov di, word ptr [0xb54]  [x264595]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb54u)));
    // 7eb0:0de2  movzx eax, word ptr [0xb6b]  [x264595]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xb6bu)));
    // 7eb0:0de8  add eax, 0xd  [x264595]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xdu, false));
    // 7eb0:0dec  mov eax, dword ptr [eax*4]  [x264595]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4)));
    // 7eb0:0df5  add di, ax  [x264595]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.a.x, false));
    // 7eb0:0df7  mov byte ptr [0xb92], 0  [x264595]
    c.w8(c.dsb + (uint16_t)(0xb92u), 0x0u);
    // 7eb0:0dfc  mov bx, word ptr [0xb54]  [x264595]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb54u)));
    // 7eb0:0e00  xor eax, eax  [x264595]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 7eb0:0e03  xor ecx, ecx  [x264595]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) ^ (c.c.e), true));
    // 7eb0:0e06  mov dx, word ptr [0xb6d]  [x264595]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb6du)));
    // 7eb0:0e0a  mov ebp, dword ptr [0xb62]  [x264595]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb62u)));
    // 7eb0:0e0f  std   [x264595]
    c.df = true;
L7f910:
    if (c.tracing) c.traceAt(0x7f910);
    // 7eb0:0e10  mov si, bp  [x19300477]
    c.si.x = (uint16_t)(c.bp.x);
    // 7eb0:0e12  add si, si  [x19300477]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.si.x, false));
    // 7eb0:0e14  mov si, word ptr [si + 0x1146]  [x19300477]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0x1146u)));
    // 7eb0:0e18  mov al, byte ptr fs:[si]  [x19300477]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 7eb0:0e1b  add ax, dx  [x19300477]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.dx_.x, false));
    // 7eb0:0e1d  mov cx, bp  [x19300477]
    c.c.x = (uint16_t)(c.bp.x);
    // 7eb0:0e1f  shl cx, 9  [x19300477]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x9u) & 31), false));
    // 7eb0:0e22  mov al, byte ptr ss:[ecx + eax]  [x19300477]
    c.a.l = (uint8_t)(c.r8(c.ssb + (uint32_t)(c.c.e + c.a.e)));
    // 7eb0:0e27  xor ah, ah  [x19300477]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 7eb0:0e29  mov cx, bx  [x19300477]
    c.c.x = (uint16_t)(c.b.x);
    // 7eb0:0e2b  sub cx, ax  [x19300477]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, true));
    // 7eb0:0e2d  jle 0xe39  [x19300477]
    if ((c.zf || c.sf != c.of)) goto L7f939;
L7f92f:
    if (c.tracing) c.traceAt(0x7f92f);
    // 7eb0:0e2f  nop   [x8964659]
    // 7eb0:0e30  nop   [x8964659]
    // 7eb0:0e31  mov bx, ax  [x8964659]
    c.b.x = (uint16_t)(c.a.x);
    // 7eb0:0e33  mov al, byte ptr gs:[si + 1]  [x8964659]
    c.a.l = (uint8_t)(c.r8(c.gsb + (uint16_t)(c.si.x + 0x1u)));
L7f937:
    if (c.tracing) c.traceAt(0x7f937);
    // 7eb0:0e37  rep stosb byte ptr es:[di], al  [x32146087]
    c.stos<8, false>(1);
L7f939:
    if (c.tracing) c.traceAt(0x7f939);
    // 7eb0:0e39  cmp bx, word ptr [0xb90]  [x19300477]
    c.sub<16>(c.b.x, c.r16(c.dsb + (uint16_t)(0xb90u)), true);
    // 7eb0:0e3d  jbe 0xe4b  [x19300477]
    if ((c.cf || c.zf)) goto L7f94b;
L7f93f:
    if (c.tracing) c.traceAt(0x7f93f);
    // 7eb0:0e3f  nop   [x19285634]
    // 7eb0:0e40  nop   [x19285634]
    // 7eb0:0e41  add ebp, 1  [x19285634]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, 0x1u, false));
    // 7eb0:0e45  cmp ebp, 0x50  [x19285634]
    c.sub<32>(c.bp.e, 0x50u, true);
    // 7eb0:0e49  jne 0xe10  [x19285634]
    if (!c.zf) goto L7f910;
L7f94b:
    if (c.tracing) c.traceAt(0x7f94b);
    // 7eb0:0e4b  mov ax, 0x453b  [x320242]
    c.a.x = (uint16_t)(0x453bu);
    // 7eb0:0e4e  mov gs, ax  [x320242]
    c.loadGs(c.a.x);
    // 7eb0:0e50  mov cx, bx  [x320242]
    c.c.x = (uint16_t)(c.b.x);
    // 7eb0:0e52  sub cx, word ptr [0xb90]  [x320242]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.r16(c.dsb + (uint16_t)(0xb90u)), true));
    // 7eb0:0e56  jle 0xe99  [x320242]
    if ((c.zf || c.sf != c.of)) goto L7f999;
L7f958:
    if (c.tracing) c.traceAt(0x7f958);
    // 7eb0:0e58  nop   [x249752]
    // 7eb0:0e59  nop   [x249752]
    // 7eb0:0e5a  movzx eax, word ptr [0xb6b]  [x249752]
    c.a.e = (uint32_t)(c.r16(c.dsb + (uint16_t)(0xb6bu)));
    // 7eb0:0e60  add eax, 0xd  [x249752]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0xdu, false));
    // 7eb0:0e64  mov si, ax  [x249752]
    c.si.x = (uint16_t)(c.a.x);
    // 7eb0:0e66  mov edi, dword ptr [eax*4]  [x249752]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint32_t)(c.a.e * 4)));
    // 7eb0:0e6f  add di, word ptr [0xb90]  [x249752]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xb90u)), false));
    // 7eb0:0e73  add si, word ptr [0xb93]  [x249752]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xb93u)), false));
    // 7eb0:0e77  and si, 0x1ff  [x249752]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) & (0x1ffu), false));
    // 7eb0:0e7b  shl si, 7  [x249752]
    c.si.x = (uint16_t)(c.shl<16>(c.si.x, (int)((0x7u) & 31), false));
    // 7eb0:0e7e  add si, word ptr [0xb90]  [x249752]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xb90u)), false));
    // 7eb0:0e82  inc cx  [x249752]
    c.c.x = (uint16_t)(c.inc<16>(c.c.x, false));
    // 7eb0:0e83  cld   [x249752]
    c.df = false;
    // 7eb0:0e84  mov dx, cx  [x249752]
    c.dx_.x = (uint16_t)(c.c.x);
    // 7eb0:0e86  shr cx, 2  [x249752]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), true));
    // 7eb0:0e89  push ds  [x249752]
    c.push16(c.ds);
    // 7eb0:0e8a  mov ax, gs  [x249752]
    c.a.x = (uint16_t)(c.gs);
    // 7eb0:0e8c  mov ds, ax  [x249752]
    c.loadDs(c.a.x);
L7f98e:
    if (c.tracing) c.traceAt(0x7f98e);
    // 7eb0:0e8e  rep movsd dword ptr es:[di], dword ptr [si]  [x4098874]
    c.ip = 0xe91u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L7f991:
    if (c.tracing) c.traceAt(0x7f991);
    // 7eb0:0e91  mov cx, dx  [x249752]
    c.c.x = (uint16_t)(c.dx_.x);
    // 7eb0:0e93  and cx, 3  [x249752]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
L7f996:
    if (c.tracing) c.traceAt(0x7f996);
    // 7eb0:0e96  rep movsb byte ptr es:[di], byte ptr [si]  [x608334]
    c.ip = 0xe98u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L7f998:
    if (c.tracing) c.traceAt(0x7f998);
    // 7eb0:0e98  pop ds  [x249752]
    c.loadDs((uint16_t)c.pop16());
L7f999:
    if (c.tracing) c.traceAt(0x7f999);
    // 7eb0:0e99  mov eax, dword ptr [0xb40]  [x320242]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb40u)));
    // 7eb0:0e9d  add dword ptr [0xb44], eax  [x320242]
    c.w32(c.dsb + (uint16_t)(0xb44u), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb44u)), c.a.e, false));
    // 7eb0:0ea2  mov eax, dword ptr [0xb38]  [x320242]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb38u)));
    // 7eb0:0ea6  add dword ptr [0xb3c], eax  [x320242]
    c.w32(c.dsb + (uint16_t)(0xb3cu), c.add<32>(c.r32(c.dsb + (uint16_t)(0xb3cu)), c.a.e, false));
    // 7eb0:0eab  mov ax, word ptr [0xb8c]  [x320242]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb8cu)));
    // 7eb0:0eae  add word ptr [0xb6b], ax  [x320242]
    c.w16(c.dsb + (uint16_t)(0xb6bu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xb6bu)), c.a.x, true));
    // 7eb0:0eb2  dec word ptr [0xb60]  [x320242]
    c.w16(c.dsb + (uint16_t)(0xb60u), c.dec<16>(c.r16(c.dsb + (uint16_t)(0xb60u)), true));
    // 7eb0:0eb6  jne 0xd59  [x320242]
    if (!c.zf) goto L7f859;
L7f9ba:
    if (c.tracing) c.traceAt(0x7f9ba);
    // 7eb0:0eba  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0ebb  call 0xc10  [x1417]
    c.push16(0xebeu); code_14(c, 0x7f710u); if (c.ip != 0xebeu) c.badReturn(0x7f9bb);
L7f9be:
    if (c.tracing) c.traceAt(0x7f9be);
    // 7eb0:0ebe  mov bx, 0xe  [x1417]
    c.b.x = (uint16_t)(0xeu);
    // 7eb0:0ec1  int 0xff  [x1417]
    c.ip = 0xec3u; c.d32 = false; c.intr(0xff, 0xec3u);
L7f9c3:
    if (c.tracing) c.traceAt(0x7f9c3);
    // 7eb0:0ec3  mov word ptr [0xbc2], ax  [x1417]
    c.w16(c.dsb + (uint16_t)(0xbc2u), c.a.x);
    // 7eb0:0ec6  push gs  [x1417]
    c.push16(c.gs);
    // 7eb0:0ec8  push fs  [x1417]
    c.push16(c.fs);
    // 7eb0:0eca  push cs  [x1417]
    c.push16(c.cs);
    // 7eb0:0ecb  call 0x808  [x1417]
    c.push16(0xeceu); code_14(c, 0x7f308u); if (c.ip != 0xeceu) c.badReturn(0x7f9cb);
L7f9ce:
    if (c.tracing) c.traceAt(0x7f9ce);
    // 7eb0:0ece  pop fs  [x1417]
    c.loadFs((uint16_t)c.pop16());
    // 7eb0:0ed0  pop gs  [x1417]
    c.loadGs((uint16_t)c.pop16());
    // 7eb0:0ed2  mov cx, word ptr [0xbc2]  [x1417]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbc2u)));
    // 7eb0:0ed6  sub word ptr [0xb98], cx  [x1417]
    c.w16(c.dsb + (uint16_t)(0xb98u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xb98u)), c.c.x, true));
    // 7eb0:0eda  js 0xee2  [x1417]
    if (c.sf) goto L7f9e2;
L7f9dc:
    if (c.tracing) c.traceAt(0x7f9dc);
    // 7eb0:0edc  nop   [x1417]
    // 7eb0:0edd  nop   [x1417]
    // 7eb0:0ede  jne 0xc31  [x1417]
    if (!c.zf) goto L7f731;
L7f9e2:
    if (c.tracing) c.traceAt(0x7f9e2);
    // 7eb0:0ee2  retf   [x7]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f9e3:
    if (c.tracing) c.traceAt(0x7f9e3);
    // 7eb0:0ee3  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0ee5  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 7eb0:0ee7  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 7eb0:0ee9  cld   [x1]
    c.df = false;
    // 7eb0:0eea  mov eax, 0  [x1]
    c.a.e = (uint32_t)(0x0u);
    // 7eb0:0ef0  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L7f9f3:
    if (c.tracing) c.traceAt(0x7f9f3);
    // 7eb0:0ef3  stosd dword ptr es:[di], eax  [x255]
    c.stos<32, false>(0);
    // 7eb0:0ef5  add eax, 0x100  [x255]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x100u, true));
    // 7eb0:0efb  loop 0xef3  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L7f9f3;
L7f9fd:
    if (c.tracing) c.traceAt(0x7f9fd);
    // 7eb0:0efd  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7f9fe:
    if (c.tracing) c.traceAt(0x7f9fe);
    // 7eb0:0efe  push ds  [x1]
    c.push16(c.ds);
    // 7eb0:0eff  mov cx, 0x50  [x1]
    c.c.x = (uint16_t)(0x50u);
    // 7eb0:0f02  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 7eb0:0f04  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 7eb0:0f06  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 7eb0:0f08  mov di, 0x500  [x1]
    c.di.x = (uint16_t)(0x500u);
    // 7eb0:0f0b  mov ax, 0x452a  [x1]
    c.a.x = (uint16_t)(0x452au);
    // 7eb0:0f0e  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 7eb0:0f10  cld   [x1]
    c.df = false;
L7fa11:
    if (c.tracing) c.traceAt(0x7fa11);
    // 7eb0:0f11  rep movsd dword ptr es:[di], dword ptr [si]  [x81]
    c.ip = 0xf14u; c.d32 = false; c.movs<32, false>(c.dsb, 1);
L7fa14:
    if (c.tracing) c.traceAt(0x7fa14);
    // 7eb0:0f14  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 7eb0:0f15  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L7fa18:
    if (c.tracing) c.traceAt(0x7fa18);
    // 7eb0:0f18  mov ax, 0x7d3c  [x1]
    c.a.x = (uint16_t)(0x7d3cu);
    // 7eb0:0f1b  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 7eb0:0f1d  mov ax, 0x34fa  [x1]
    c.a.x = (uint16_t)(0x34fau);
    // 7eb0:0f20  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 7eb0:0f23  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0f24  call 0xb82  [x1]
    c.push16(0xf27u); code_14(c, 0x7f682u); if (c.ip != 0xf27u) c.badReturn(0x7fa24);
L7fa27:
    if (c.tracing) c.traceAt(0x7fa27);
    // 7eb0:0f27  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0f28  call 0xee3  [x1]
    c.push16(0xf2bu); code_14(c, 0x7f9e3u); if (c.ip != 0xf2bu) c.badReturn(0x7fa28);
L7fa2b:
    if (c.tracing) c.traceAt(0x7fa2b);
    // 7eb0:0f2b  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0f2c  call 0xefe  [x1]
    c.push16(0xf2fu); code_14(c, 0x7f9feu); if (c.ip != 0xf2fu) c.badReturn(0x7fa2c);
L7fa2f:
    if (c.tracing) c.traceAt(0x7fa2f);
    // 7eb0:0f2f  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0f30  call 0xba2  [x1]
    c.push16(0xf33u); code_14(c, 0x7f6a2u); if (c.ip != 0xf33u) c.badReturn(0x7fa30);
L7fa33:
    if (c.tracing) c.traceAt(0x7fa33);
    // 7eb0:0f33  mov ax, 0x24fa  [x1]
    c.a.x = (uint16_t)(0x24fau);
    // 7eb0:0f36  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 7eb0:0f38  mov ax, 0x352a  [x1]
    c.a.x = (uint16_t)(0x352au);
    // 7eb0:0f3b  mov gs, ax  [x1]
    c.loadGs(c.a.x);
    // 7eb0:0f3d  mov dword ptr [0xb66], 0xc8  [x1]
    c.w32(c.dsb + (uint16_t)(0xb66u), 0xc8u);
    // 7eb0:0f46  mov dword ptr [0xb48], 0x9f  [x1]
    c.w32(c.dsb + (uint16_t)(0xb48u), 0x9fu);
    // 7eb0:0f4f  mov word ptr [0xb6d], 0xff  [x1]
    c.w16(c.dsb + (uint16_t)(0xb6du), 0xffu);
    // 7eb0:0f55  mov word ptr [0xb96], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xb96u), 0x0u);
    // 7eb0:0f5b  mov word ptr [0xb71], 0xa000  [x1]
    c.w16(c.dsb + (uint16_t)(0xb71u), 0xa000u);
    // 7eb0:0f61  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 7eb0:0f64  int 0xff  [x1]
    c.ip = 0xf66u; c.d32 = false; c.intr(0xff, 0xf66u);
L7fa66:
    if (c.tracing) c.traceAt(0x7fa66);
    // 7eb0:0f66  mov word ptr [0xbc2], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xbc2u), 0x1u);
    // 7eb0:0f6c  mov word ptr [0xba4], 0x100  [x1]
    c.w16(c.dsb + (uint16_t)(0xba4u), 0x100u);
    // 7eb0:0f72  mov dword ptr [0xb9c], 2  [x1]
    c.w32(c.dsb + (uint16_t)(0xb9cu), 0x2u);
    // 7eb0:0f7b  mov dword ptr [0xba0], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xba0u), 0x0u);
    // 7eb0:0f84  mov byte ptr [0xb9b], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xb9bu), 0x1u);
    // 7eb0:0f89  mov byte ptr [0xb9a], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xb9au), 0x0u);
    // 7eb0:0f8e  mov word ptr [0xb98], 0x2c2  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0x2c2u);
    // 7eb0:0f94  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0f95  call 0xc31  [x1]
    c.push16(0xf98u); code_14(c, 0x7f731u); if (c.ip != 0xf98u) c.badReturn(0x7fa95);
L7fa98:
    if (c.tracing) c.traceAt(0x7fa98);
    // 7eb0:0f98  mov dword ptr [0xb9c], 2  [x1]
    c.w32(c.dsb + (uint16_t)(0xb9cu), 0x2u);
    // 7eb0:0fa1  mov word ptr [0xb98], 0xa  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0xau);
    // 7eb0:0fa7  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0fa8  call 0xc31  [x1]
    c.push16(0xfabu); code_14(c, 0x7f731u); if (c.ip != 0xfabu) c.badReturn(0x7faa8);
L7faab:
    if (c.tracing) c.traceAt(0x7faab);
    // 7eb0:0fab  mov dword ptr [0xb9c], 1  [x1]
    c.w32(c.dsb + (uint16_t)(0xb9cu), 0x1u);
    // 7eb0:0fb4  mov word ptr [0xb98], 5  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0x5u);
    // 7eb0:0fba  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0fbb  call 0xc31  [x1]
    c.push16(0xfbeu); code_14(c, 0x7f731u); if (c.ip != 0xfbeu) c.badReturn(0x7fabb);
L7fabe:
    if (c.tracing) c.traceAt(0x7fabe);
    // 7eb0:0fbe  mov word ptr [0xba4], 0x101  [x1]
    c.w16(c.dsb + (uint16_t)(0xba4u), 0x101u);
    // 7eb0:0fc4  mov dword ptr [0xb9c], 1  [x1]
    c.w32(c.dsb + (uint16_t)(0xb9cu), 0x1u);
    // 7eb0:0fcd  mov dword ptr [0xba0], 1  [x1]
    c.w32(c.dsb + (uint16_t)(0xba0u), 0x1u);
    // 7eb0:0fd6  mov byte ptr [0xb9b], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xb9bu), 0x1u);
    // 7eb0:0fdb  mov byte ptr [0xb9a], 1  [x1]
    c.w8(c.dsb + (uint16_t)(0xb9au), 0x1u);
    // 7eb0:0fe0  mov word ptr [0xb98], 3  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0x3u);
    // 7eb0:0fe6  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0fe7  call 0xc31  [x1]
    c.push16(0xfeau); code_14(c, 0x7f731u); if (c.ip != 0xfeau) c.badReturn(0x7fae7);
L7faea:
    if (c.tracing) c.traceAt(0x7faea);
    // 7eb0:0fea  mov dword ptr [0xba0], 1  [x1]
    c.w32(c.dsb + (uint16_t)(0xba0u), 0x1u);
    // 7eb0:0ff3  mov word ptr [0xb98], 8  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0x8u);
    // 7eb0:0ff9  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:0ffa  call 0xc31  [x1]
    c.push16(0xffdu); code_14(c, 0x7f731u); if (c.ip != 0xffdu) c.badReturn(0x7fafa);
L7fafd:
    if (c.tracing) c.traceAt(0x7fafd);
    // 7eb0:0ffd  mov dword ptr [0xba0], 2  [x1]
    c.w32(c.dsb + (uint16_t)(0xba0u), 0x2u);
    // 7eb0:1006  mov word ptr [0xb98], 0xf  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0xfu);
    // 7eb0:100c  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:100d  call 0xc31  [x1]
    c.push16(0x1010u); code_14(c, 0x7f731u); if (c.ip != 0x1010u) c.badReturn(0x7fb0d);
L7fb10:
    if (c.tracing) c.traceAt(0x7fb10);
    // 7eb0:1010  mov dword ptr [0xba0], 3  [x1]
    c.w32(c.dsb + (uint16_t)(0xba0u), 0x3u);
    // 7eb0:1019  mov word ptr [0xb98], 0x29e  [x1]
    c.w16(c.dsb + (uint16_t)(0xb98u), 0x29eu);
    // 7eb0:101f  push cs  [x1]
    c.push16(c.cs);
    // 7eb0:1020  call 0xc31  [x1]
    c.push16(0x1023u); code_14(c, 0x7f731u); if (c.ip != 0x1023u) c.badReturn(0x7fb20);
L7fb23:
    if (c.tracing) c.traceAt(0x7fb23);
    // 7eb0:1023  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 7eb0:1025  int 0x21  [x1]
    c.ip = 0x1027u; c.d32 = false; c.intr(0x21, 0x1027u);
    c.notTranslated(0x7fb27, "fall-through");
}

static Register reg14(14, {0x7eb00, 0x7eb0e, 0x7eb17, 0x7eb29, 0x7eb32, 0x7eb88, 0x7eb8f, 0x7eb95, 0x7eb97, 0x7ebb9, 0x7ebbc, 0x7ebde, 0x7ebe1, 0x7ec03, 0x7ec06, 0x7ec28, 0x7ec2c, 0x7ec48, 0x7ec51, 0x7ec63, 0x7ec6c, 0x7ecac, 0x7ecb3, 0x7ecb9, 0x7ecbb, 0x7ecd1, 0x7ecd4, 0x7ecea, 0x7eced, 0x7ed03, 0x7ed06, 0x7ed1c, 0x7ed23, 0x7ed37, 0x7ed9b, 0x7eda4, 0x7f078, 0x7f08e, 0x7f097, 0x7f0a9, 0x7f0b2, 0x7f112, 0x7f119, 0x7f11f, 0x7f121, 0x7f147, 0x7f14a, 0x7f170, 0x7f173, 0x7f199, 0x7f19c, 0x7f1c2, 0x7f1c4, 0x7f1dd, 0x7f1e6, 0x7f1f8, 0x7f201, 0x7f257, 0x7f25e, 0x7f264, 0x7f266, 0x7f27e, 0x7f28b, 0x7f28e, 0x7f2a6, 0x7f2b3, 0x7f2b6, 0x7f2ce, 0x7f2db, 0x7f2de, 0x7f2f6, 0x7f303, 0x7f308, 0x7f32a, 0x7f38f, 0x7f3ad, 0x7f3be, 0x7f3ec, 0x7f415, 0x7f429, 0x7f457, 0x7f480, 0x7f484, 0x7f497, 0x7f4a0, 0x7f4b2, 0x7f4bb, 0x7f511, 0x7f518, 0x7f520, 0x7f523, 0x7f54a, 0x7f54d, 0x7f550, 0x7f577, 0x7f57a, 0x7f57d, 0x7f5a4, 0x7f5a7, 0x7f5aa, 0x7f5d1, 0x7f5d2, 0x7f5e5, 0x7f63d, 0x7f640, 0x7f644, 0x7f649, 0x7f676, 0x7f681, 0x7f682, 0x7f695, 0x7f6a0, 0x7f6a2, 0x7f6b2, 0x7f6c5, 0x7f6d6, 0x7f6dd, 0x7f6e2, 0x7f6e7, 0x7f6f4, 0x7f701, 0x7f710, 0x7f731, 0x7f735, 0x7f756, 0x7f777, 0x7f77e, 0x7f79e, 0x7f7a5, 0x7f7a9, 0x7f7d7, 0x7f80e, 0x7f825, 0x7f828, 0x7f834, 0x7f837, 0x7f841, 0x7f859, 0x7f88d, 0x7f8b3, 0x7f8c4, 0x7f910, 0x7f92f, 0x7f937, 0x7f939, 0x7f93f, 0x7f94b, 0x7f958, 0x7f98e, 0x7f991, 0x7f996, 0x7f998, 0x7f999, 0x7f9ba, 0x7f9be, 0x7f9c3, 0x7f9ce, 0x7f9dc, 0x7f9e2, 0x7f9e3, 0x7f9f3, 0x7f9fd, 0x7f9fe, 0x7fa11, 0x7fa14, 0x7fa18, 0x7fa27, 0x7fa2b, 0x7fa2f, 0x7fa33, 0x7fa66, 0x7fa98, 0x7faab, 0x7fabe, 0x7faea, 0x7fafd, 0x7fb10, 0x7fb23}, code_14);

}  // namespace angel
