// Program 7, translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include "cpu.h"

namespace angel {

static void code_7(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x66ed0: goto L66ed0;
    case 0x66ed4: goto L66ed4;
    case 0x66ed6: goto L66ed6;
    case 0x66ed8: goto L66ed8;
    case 0x66ee2: goto L66ee2;
    case 0x66f0b: goto L66f0b;
    case 0x66f17: goto L66f17;
    case 0x66f1e: goto L66f1e;
    case 0x66f1f: goto L66f1f;
    case 0x66f26: goto L66f26;
    case 0x66f2d: goto L66f2d;
    case 0x66f34: goto L66f34;
    case 0x66f42: goto L66f42;
    case 0x66f4c: goto L66f4c;
    case 0x66f4f: goto L66f4f;
    case 0x66f63: goto L66f63;
    case 0x66f6a: goto L66f6a;
    case 0x66f6b: goto L66f6b;
    case 0x67203: goto L67203;
    case 0x67207: goto L67207;
    case 0x67228: goto L67228;
    case 0x672e0: goto L672e0;
    case 0x672e2: goto L672e2;
    case 0x672f8: goto L672f8;
    case 0x6730e: goto L6730e;
    case 0x6732e: goto L6732e;
    case 0x67338: goto L67338;
    case 0x6734b: goto L6734b;
    case 0x67370: goto L67370;
    case 0x67390: goto L67390;
    case 0x6739a: goto L6739a;
    case 0x673ad: goto L673ad;
    case 0x673d2: goto L673d2;
    case 0x673dc: goto L673dc;
    case 0x67415: goto L67415;
    case 0x67419: goto L67419;
    case 0x6742e: goto L6742e;
    case 0x6743b: goto L6743b;
    case 0x67441: goto L67441;
    case 0x67445: goto L67445;
    case 0x67449: goto L67449;
    case 0x6744b: goto L6744b;
    case 0x67450: goto L67450;
    case 0x67452: goto L67452;
    case 0x67460: goto L67460;
    case 0x67469: goto L67469;
    case 0x67481: goto L67481;
    case 0x674aa: goto L674aa;
    case 0x674c9: goto L674c9;
    case 0x674d6: goto L674d6;
    case 0x674f6: goto L674f6;
    case 0x67500: goto L67500;
    case 0x67513: goto L67513;
    case 0x67538: goto L67538;
    case 0x6753f: goto L6753f;
    case 0x6754a: goto L6754a;
    case 0x6756a: goto L6756a;
    case 0x67574: goto L67574;
    case 0x67587: goto L67587;
    case 0x675ac: goto L675ac;
    case 0x675b9: goto L675b9;
    case 0x675ba: goto L675ba;
    case 0x675f0: goto L675f0;
    case 0x675f2: goto L675f2;
    case 0x67621: goto L67621;
    case 0x67631: goto L67631;
    case 0x67634: goto L67634;
    case 0x67639: goto L67639;
    case 0x6763a: goto L6763a;
    case 0x6765c: goto L6765c;
    case 0x6765f: goto L6765f;
    case 0x67660: goto L67660;
    case 0x67697: goto L67697;
    case 0x67699: goto L67699;
    case 0x676a6: goto L676a6;
    case 0x676b1: goto L676b1;
    case 0x676c3: goto L676c3;
    case 0x676cb: goto L676cb;
    case 0x676ff: goto L676ff;
    case 0x67701: goto L67701;
    case 0x67704: goto L67704;
    case 0x67707: goto L67707;
    case 0x67719: goto L67719;
    case 0x6771c: goto L6771c;
    case 0x67737: goto L67737;
    case 0x67769: goto L67769;
    case 0x677c1: goto L677c1;
    case 0x677d9: goto L677d9;
    case 0x677df: goto L677df;
    case 0x677e5: goto L677e5;
    case 0x677f1: goto L677f1;
    case 0x67812: goto L67812;
    case 0x67831: goto L67831;
    case 0x6783a: goto L6783a;
    case 0x67847: goto L67847;
    case 0x67858: goto L67858;
    case 0x6785d: goto L6785d;
    case 0x67863: goto L67863;
    case 0x67880: goto L67880;
    case 0x67911: goto L67911;
    case 0x6793a: goto L6793a;
    case 0x6794e: goto L6794e;
    case 0x67952: goto L67952;
    case 0x679b7: goto L679b7;
    case 0x679e8: goto L679e8;
    case 0x67a18: goto L67a18;
    case 0x67a26: goto L67a26;
    case 0x67a2c: goto L67a2c;
    case 0x67a31: goto L67a31;
    case 0x67a34: goto L67a34;
    case 0x67a36: goto L67a36;
    case 0x67a41: goto L67a41;
    case 0x67a4c: goto L67a4c;
    case 0x67a7c: goto L67a7c;
    case 0x67a8a: goto L67a8a;
    case 0x67a90: goto L67a90;
    case 0x67a95: goto L67a95;
    case 0x67a98: goto L67a98;
    case 0x67a9a: goto L67a9a;
    case 0x67aac: goto L67aac;
    case 0x67ab3: goto L67ab3;
    case 0x67aba: goto L67aba;
    case 0x67ac6: goto L67ac6;
    case 0x67acc: goto L67acc;
    case 0x67ae3: goto L67ae3;
    case 0x67aea: goto L67aea;
    case 0x67b36: goto L67b36;
    case 0x67b68: goto L67b68;
    case 0x67b81: goto L67b81;
    case 0x67b87: goto L67b87;
    case 0x67ba8: goto L67ba8;
    case 0x67bbb: goto L67bbb;
    case 0x67bd3: goto L67bd3;
    case 0x67bd4: goto L67bd4;
    case 0x67e15: goto L67e15;
    case 0x67e28: goto L67e28;
    case 0x67e33: goto L67e33;
    case 0x67e35: goto L67e35;
    case 0x67e57: goto L67e57;
    case 0x67e8c: goto L67e8c;
    case 0x67f2f: goto L67f2f;
    case 0x67f3a: goto L67f3a;
    case 0x67f45: goto L67f45;
    case 0x67f49: goto L67f49;
    case 0x67f4d: goto L67f4d;
    case 0x67f51: goto L67f51;
    case 0x67f52: goto L67f52;
    case 0x67f87: goto L67f87;
    case 0x67fde: goto L67fde;
    case 0x67feb: goto L67feb;
    case 0x67ff6: goto L67ff6;
    case 0x67ffa: goto L67ffa;
    case 0x67ffe: goto L67ffe;
    case 0x68002: goto L68002;
    case 0x68003: goto L68003;
    case 0x68062: goto L68062;
    case 0x68076: goto L68076;
    case 0x6807f: goto L6807f;
    case 0x68088: goto L68088;
    case 0x68089: goto L68089;
    case 0x68096: goto L68096;
    case 0x680a0: goto L680a0;
    case 0x680b8: goto L680b8;
    case 0x680cc: goto L680cc;
    case 0x680e0: goto L680e0;
    case 0x680ec: goto L680ec;
    case 0x680ee: goto L680ee;
    case 0x68112: goto L68112;
    case 0x68136: goto L68136;
    case 0x68140: goto L68140;
    case 0x68152: goto L68152;
    case 0x68164: goto L68164;
    case 0x68176: goto L68176;
    case 0x68184: goto L68184;
    case 0x68199: goto L68199;
    case 0x681a2: goto L681a2;
    case 0x681ab: goto L681ab;
    case 0x681e5: goto L681e5;
    case 0x681eb: goto L681eb;
    case 0x681f0: goto L681f0;
    case 0x681f5: goto L681f5;
    case 0x681fa: goto L681fa;
    case 0x68245: goto L68245;
    case 0x6824b: goto L6824b;
    case 0x6824f: goto L6824f;
    case 0x68255: goto L68255;
    case 0x68259: goto L68259;
    case 0x68264: goto L68264;
    case 0x6826e: goto L6826e;
    case 0x68272: goto L68272;
    case 0x68277: goto L68277;
    case 0x68289: goto L68289;
    case 0x682c0: goto L682c0;
    case 0x682c6: goto L682c6;
    case 0x682ca: goto L682ca;
    case 0x682d0: goto L682d0;
    case 0x682d4: goto L682d4;
    case 0x682df: goto L682df;
    case 0x682e9: goto L682e9;
    case 0x682ed: goto L682ed;
    case 0x682f2: goto L682f2;
    case 0x68304: goto L68304;
    case 0x6833b: goto L6833b;
    case 0x6834b: goto L6834b;
    case 0x6834f: goto L6834f;
    case 0x68355: goto L68355;
    case 0x68359: goto L68359;
    case 0x68364: goto L68364;
    case 0x6836e: goto L6836e;
    case 0x68372: goto L68372;
    case 0x68377: goto L68377;
    case 0x6837e: goto L6837e;
    case 0x6838c: goto L6838c;
    case 0x683c3: goto L683c3;
    case 0x683c9: goto L683c9;
    case 0x683cd: goto L683cd;
    case 0x683d7: goto L683d7;
    case 0x683db: goto L683db;
    case 0x683e0: goto L683e0;
    case 0x683f1: goto L683f1;
    case 0x6842d: goto L6842d;
    case 0x68433: goto L68433;
    case 0x68437: goto L68437;
    case 0x68441: goto L68441;
    case 0x6844b: goto L6844b;
    case 0x68455: goto L68455;
    case 0x6845f: goto L6845f;
    case 0x68469: goto L68469;
    case 0x68473: goto L68473;
    case 0x6847d: goto L6847d;
    case 0x68487: goto L68487;
    case 0x68491: goto L68491;
    case 0x68495: goto L68495;
    case 0x6849a: goto L6849a;
    case 0x684ac: goto L684ac;
    case 0x684b6: goto L684b6;
    case 0x684ed: goto L684ed;
    case 0x68524: goto L68524;
    case 0x6852a: goto L6852a;
    case 0x6852e: goto L6852e;
    case 0x68538: goto L68538;
    case 0x68542: goto L68542;
    case 0x6854c: goto L6854c;
    case 0x68556: goto L68556;
    case 0x6855a: goto L6855a;
    case 0x6855f: goto L6855f;
    case 0x68570: goto L68570;
    case 0x68574: goto L68574;
    case 0x68578: goto L68578;
    case 0x68582: goto L68582;
    case 0x6858c: goto L6858c;
    case 0x68596: goto L68596;
    case 0x685a0: goto L685a0;
    case 0x685a4: goto L685a4;
    case 0x685a9: goto L685a9;
    case 0x685bb: goto L685bb;
    case 0x685ca: goto L685ca;
    case 0x685ce: goto L685ce;
    case 0x685d2: goto L685d2;
    case 0x685dc: goto L685dc;
    case 0x685e0: goto L685e0;
    case 0x685e5: goto L685e5;
    case 0x685f7: goto L685f7;
    case 0x68601: goto L68601;
    case 0x68605: goto L68605;
    case 0x6860a: goto L6860a;
    case 0x68614: goto L68614;
    case 0x68618: goto L68618;
    case 0x6861d: goto L6861d;
    case 0x68635: goto L68635;
    case 0x68644: goto L68644;
    case 0x68646: goto L68646;
    case 0x6866a: goto L6866a;
    case 0x6867a: goto L6867a;
    case 0x6867e: goto L6867e;
    case 0x68683: goto L68683;
    case 0x68694: goto L68694;
    default: c.callLinear(t); return;
    }
L66ed0:
    if (c.tracing) c.traceAt(0x66ed0);
    // 66ed:0000  cld   [x3]
    c.df = false;
    // 66ed:0001  push ds  [x3]
    c.push16(c.ds);
    // 66ed:0002  mov ds, ax  [x3]
    c.loadDs(c.a.x);
L66ed4:
    if (c.tracing) c.traceAt(0x66ed4);
    // 66ed:0004  rep movsb byte ptr es:[di], byte ptr [si]  [x1539]
    c.ip = 0x6u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L66ed6:
    if (c.tracing) c.traceAt(0x66ed6);
    // 66ed:0006  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 66ed:0007  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66ed8:
    if (c.tracing) c.traceAt(0x66ed8);
    // 66ed:0008  mov si, 0  [x3]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:000b  mov bp, 0x300  [x3]
    c.bp.x = (uint16_t)(0x300u);
    // 66ed:000e  mov di, word ptr [0x21e3]  [x3]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21e3u)));
L66ee2:
    if (c.tracing) c.traceAt(0x66ee2);
    // 66ed:0012  xor ax, ax  [x2304]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 66ed:0014  xor cx, cx  [x2304]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), false));
    // 66ed:0016  mov bx, word ptr [0x21dd]  [x2304]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21ddu)));
    // 66ed:001a  mov al, byte ptr [bx + si]  [x2304]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 66ed:001c  mov bx, word ptr [0x21df]  [x2304]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21dfu)));
    // 66ed:0020  mov cl, byte ptr [bx + si]  [x2304]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.b.x + c.si.x)));
    // 66ed:0022  sub cx, ax  [x2304]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.a.x, false));
    // 66ed:0024  mov ax, cx  [x2304]
    c.a.x = (uint16_t)(c.c.x);
    // 66ed:0026  shl ax, 7  [x2304]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), false));
    // 66ed:0029  cdq   [x2304]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 66ed:002a  xor ch, ch  [x2304]
    c.c.h = (uint8_t)(c.logic<8>((c.c.h) ^ (c.c.h), false));
    // 66ed:002c  mov cl, byte ptr [0x21dc]  [x2304]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x21dcu)));
    // 66ed:0030  idiv cx  [x2304]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x30u); }   // #DE: int 0, then again
    // 66ed:0032  mov word ptr [di], ax  [x2304]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.a.x);
    // 66ed:0034  inc si  [x2304]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 66ed:0035  add di, 2  [x2304]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 66ed:0038  dec bp  [x2304]
    c.bp.x = (uint16_t)(c.dec<16>(c.bp.x, true));
    // 66ed:0039  jne 0x12  [x2304]
    if (!c.zf) goto L66ee2;
L66f0b:
    if (c.tracing) c.traceAt(0x66f0b);
    // 66ed:003b  mov si, word ptr [0x21dd]  [x3]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21ddu)));
    // 66ed:003f  mov di, word ptr [0x21e1]  [x3]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21e1u)));
    // 66ed:0043  mov cx, 0x300  [x3]
    c.c.x = (uint16_t)(0x300u);
    // 66ed:0046  cld   [x3]
    c.df = false;
L66f17:
    if (c.tracing) c.traceAt(0x66f17);
    // 66ed:0047  lodsb al, byte ptr [si]  [x2304]
    c.ip = 0x48u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 66ed:0048  shl ax, 7  [x2304]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x7u) & 31), true));
    // 66ed:004b  stosw word ptr es:[di], ax  [x2304]
    c.stos<16, false>(0);
    // 66ed:004c  loop 0x47  [x2304]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66f17;
L66f1e:
    if (c.tracing) c.traceAt(0x66f1e);
    // 66ed:004e  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66f1f:
    if (c.tracing) c.traceAt(0x66f1f);
    // 66ed:004f  cmp byte ptr [0x21da], 0  [x121]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x21dau)), 0x0u, true);
    // 66ed:0054  js 0x9a  [x121]
    if (c.sf) goto L66f6a;
L66f26:
    if (c.tracing) c.traceAt(0x66f26);
    // 66ed:0056  cmp byte ptr [0x21db], 0x3c  [x121]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0x21dbu)), 0x3cu, true);
    // 66ed:005b  jae 0x9a  [x121]
    if (!c.cf) goto L66f6a;
L66f2d:
    if (c.tracing) c.traceAt(0x66f2d);
    // 66ed:005d  mov ax, word ptr [0xd6]  [x120]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:0060  add byte ptr [0x21db], al  [x120]
    c.w8(c.dsb + (uint16_t)(0x21dbu), c.add<8>(c.r8(c.dsb + (uint16_t)(0x21dbu)), c.a.l, true));
L66f34:
    if (c.tracing) c.traceAt(0x66f34);
    // 66ed:0064  mov si, word ptr [0x21e3]  [x120]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21e3u)));
    // 66ed:0068  mov di, word ptr [0x21e1]  [x120]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21e1u)));
    // 66ed:006c  mov cx, 0x300  [x120]
    c.c.x = (uint16_t)(0x300u);
    // 66ed:006f  mov dx, 2  [x120]
    c.dx_.x = (uint16_t)(0x2u);
L66f42:
    if (c.tracing) c.traceAt(0x66f42);
    // 66ed:0072  mov bx, word ptr [si]  [x92160]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x)));
    // 66ed:0074  add word ptr [di], bx  [x92160]
    c.w16(c.dsb + (uint16_t)(c.di.x), c.add<16>(c.r16(c.dsb + (uint16_t)(c.di.x)), c.b.x, false));
    // 66ed:0076  add di, dx  [x92160]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 66ed:0078  add si, dx  [x92160]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, true));
    // 66ed:007a  loop 0x72  [x92160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66f42;
L66f4c:
    if (c.tracing) c.traceAt(0x66f4c);
    // 66ed:007c  dec ax  [x120]
    c.a.x = (uint16_t)(c.dec<16>(c.a.x, true));
    // 66ed:007d  jne 0x64  [x120]
    if (!c.zf) goto L66f34;
L66f4f:
    if (c.tracing) c.traceAt(0x66f4f);
    // 66ed:007f  mov dx, 0x3c7  [x120]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 66ed:0082  mov al, 1  [x120]
    c.a.l = (uint8_t)(0x1u);
    // 66ed:0084  out dx, al  [x120]
    c.ip = 0x85u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0085  inc dx  [x120]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 66ed:0086  xor al, al  [x120]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 66ed:0088  out dx, al  [x120]
    c.ip = 0x89u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0089  mov si, word ptr [0x21e1]  [x120]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x21e1u)));
    // 66ed:008d  mov cx, 0x300  [x120]
    c.c.x = (uint16_t)(0x300u);
    // 66ed:0090  mov dx, 0x3c9  [x120]
    c.dx_.x = (uint16_t)(0x3c9u);
L66f63:
    if (c.tracing) c.traceAt(0x66f63);
    // 66ed:0093  lodsw ax, word ptr [si]  [x92160]
    c.ip = 0x94u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 66ed:0094  sar ax, 7  [x92160]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x7u) & 31), true));
    // 66ed:0097  out dx, al  [x92160]
    c.ip = 0x98u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0098  loop 0x93  [x92160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L66f63;
L66f6a:
    if (c.tracing) c.traceAt(0x66f6a);
    // 66ed:009a  retf   [x121]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L66f6b:
    if (c.tracing) c.traceAt(0x66f6b);
    // 66ed:009b  mov ax, 0x24f1  [x18969]
    c.a.x = (uint16_t)(0x24f1u);
    // 66ed:009e  mov es, ax  [x18969]
    c.loadEs(c.a.x);
    // 66ed:00a0  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:00a5  mov edi, dword ptr [0x71]  [x18969]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 66ed:00aa  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:00ad  add edi, edi  [x18969]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 66ed:00b0  mov ebp, ebx  [x18969]
    c.bp.e = (uint32_t)(c.b.e);
    // 66ed:00b3  add ebx, edi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 66ed:00b6  sub ebp, edi  [x18969]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 66ed:00b9  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:00c3  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:00cd  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:00d0  mov dword ptr [0x49], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x49u), c.a.e);
    // 66ed:00d4  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:00de  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:00e8  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:00eb  mov dword ptr [0x4d], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x4du), c.a.e);
    // 66ed:00ef  mov ebx, edi  [x18969]
    c.b.e = (uint32_t)(c.di.e);
    // 66ed:00f2  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:00fc  mov dword ptr [0x51], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x51u), c.a.e);
    // 66ed:0100  mov ebp, dword ptr [0x75]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:0105  add ebp, ebp  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0108  mov eax, ebx  [x18969]
    c.a.e = (uint32_t)(c.b.e);
    // 66ed:010b  sub ebx, ebp  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 66ed:010e  add ebp, eax  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 66ed:0111  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:011b  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:0125  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0128  mov dword ptr [0x5d], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x5du), c.a.e);
    // 66ed:012c  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0136  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0140  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0143  mov dword ptr [0x69], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x69u), c.a.e);
    // 66ed:0147  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:014c  add ebx, dword ptr [0x71]  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x71u)), false));
    // 66ed:0151  sub ebx, dword ptr [0x75]  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0156  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:0159  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0163  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:016d  mov edx, ecx  [x18969]
    c.dx_.e = (uint32_t)(c.c.e);
    // 66ed:0170  neg edx  [x18969]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 66ed:0173  mov edi, eax  [x18969]
    c.di.e = (uint32_t)(c.a.e);
    // 66ed:0176  mov esi, dword ptr [0x75]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:017b  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:017e  add ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 66ed:0181  add ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 66ed:0184  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:018e  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0198  sub eax, esi  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:019b  sub ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 66ed:019e  sub edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 66ed:01a1  add edi, esi  [x18969]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 66ed:01a4  mov esi, dword ptr [0x71]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 66ed:01a9  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:01ac  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:01af  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:01b2  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:01bc  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:01c6  add eax, esi  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 66ed:01c9  add ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 66ed:01cc  add edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 66ed:01cf  sub edi, esi  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 66ed:01d2  mov esi, dword ptr [0x75]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:01d7  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:01da  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:01dd  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:01e0  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:01ea  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:01f4  sub eax, esi  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:01f7  sub ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 66ed:01fa  add edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 66ed:01fd  sub edi, esi  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 66ed:0200  sar eax, 2  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 66ed:0204  sar ecx, 2  [x18969]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 66ed:0208  sar edx, 2  [x18969]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 66ed:020c  sar edi, 2  [x18969]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 66ed:0210  mov dword ptr [0x55], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x55u), c.a.e);
    // 66ed:0214  mov dword ptr [0x59], ecx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x59u), c.c.e);
    // 66ed:0219  mov dword ptr [0x61], edx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x61u), c.dx_.e);
    // 66ed:021e  mov dword ptr [0x65], edi  [x18969]
    c.w32(c.dsb + (uint16_t)(0x65u), c.di.e);
    // 66ed:0223  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:0228  mov ebp, ebx  [x18969]
    c.bp.e = (uint32_t)(c.b.e);
    // 66ed:022b  add ebx, dword ptr [0x75]  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0230  sub ebp, dword ptr [0x75]  [x18969]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0235  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:0238  add ebp, ebp  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:023b  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0245  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:024f  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0252  add dword ptr [0x55], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x55u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x55u)), c.a.e, false));
    // 66ed:0257  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0261  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:026b  sar ecx, 1  [x18969]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 66ed:026e  sub dword ptr [0x59], ecx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x59u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x59u)), c.c.e, false));
    // 66ed:0273  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:027d  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0287  sar edx, 1  [x18969]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 66ed:028a  sub dword ptr [0x61], edx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x61u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x61u)), c.dx_.e, false));
    // 66ed:028f  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0299  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:02a3  sar edi, 1  [x18969]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 66ed:02a6  sub dword ptr [0x65], edi  [x18969]
    c.w32(c.dsb + (uint16_t)(0x65u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x65u)), c.di.e, false));
    // 66ed:02ab  shl dword ptr [0x49], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x49u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x49u)), (int)((0x4u) & 31), false));
    // 66ed:02b1  shl dword ptr [0x4d], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x4du), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x4du)), (int)((0x4u) & 31), false));
    // 66ed:02b7  shl dword ptr [0x55], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x55u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x55u)), (int)((0x4u) & 31), false));
    // 66ed:02bd  shl dword ptr [0x59], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x59u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x59u)), (int)((0x4u) & 31), false));
    // 66ed:02c3  shl dword ptr [0x61], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x61u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x61u)), (int)((0x4u) & 31), false));
    // 66ed:02c9  shl dword ptr [0x65], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x65u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x65u)), (int)((0x4u) & 31), false));
    // 66ed:02cf  shl dword ptr [0x51], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x51u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x51u)), (int)((0x4u) & 31), false));
    // 66ed:02d5  shl dword ptr [0x5d], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x5du), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x5du)), (int)((0x4u) & 31), false));
    // 66ed:02db  shl dword ptr [0x69], 4  [x18969]
    c.w32(c.dsb + (uint16_t)(0x69u), c.shl<32>(c.r32(c.dsb + (uint16_t)(0x69u)), (int)((0x4u) & 31), true));
    // 66ed:02e1  mov eax, dword ptr [0x49]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x49u)));
    // 66ed:02e5  mov dword ptr cs:[0x3a7], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3a7u), c.a.e);
    // 66ed:02ea  mov eax, dword ptr [0x4d]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4du)));
    // 66ed:02ee  mov dword ptr cs:[0x3ae], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3aeu), c.a.e);
    // 66ed:02f3  mov eax, dword ptr [0x51]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x51u)));
    // 66ed:02f7  mov dword ptr cs:[0x3b8], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3b8u), c.a.e);
    // 66ed:02fc  mov eax, dword ptr [0x55]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x55u)));
    // 66ed:0300  mov dword ptr cs:[0x3d8], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3d8u), c.a.e);
    // 66ed:0305  mov eax, dword ptr [0x59]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x59u)));
    // 66ed:0309  mov dword ptr cs:[0x3df], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3dfu), c.a.e);
    // 66ed:030e  mov eax, dword ptr [0x5d]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x5du)));
    // 66ed:0312  mov dword ptr cs:[0x3e9], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x3e9u), c.a.e);
    // 66ed:0317  mov eax, dword ptr [0x61]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x61u)));
    // 66ed:031b  mov dword ptr cs:[0x369], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x369u), c.a.e);
    // 66ed:0320  mov eax, dword ptr [0x65]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x65u)));
    // 66ed:0324  mov dword ptr cs:[0x370], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x370u), c.a.e);
    // 66ed:0329  mov eax, dword ptr [0x69]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x69u)));
    // 66ed:032d  mov dword ptr cs:[0x37a], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0x37au), c.a.e);
    // 66ed:0332  retf   [x18969]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67203:
    if (c.tracing) c.traceAt(0x67203);
    // 66ed:0333  push cs  [x18969]
    c.push16(c.cs);
    // 66ed:0334  call 0x9b  [x18969]
    c.push16(0x337u); code_7(c, 0x66f6bu); if (c.ip != 0x337u) c.badReturn(0x67204);
L67207:
    if (c.tracing) c.traceAt(0x67207);
    // 66ed:0337  lfs si, ptr [0x3d]  [x18969]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.si.x = (uint16_t)(t0); c.loadFs(t1); }
    // 66ed:033c  movzx esi, si  [x18969]
    c.si.e = (uint32_t)(c.si.x);
    // 66ed:0340  mov eax, dword ptr fs:[esi]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.si.e)));
    // 66ed:0345  shl eax, 4  [x18969]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 66ed:0349  mov word ptr [0x39], ax  [x18969]
    c.w16(c.dsb + (uint16_t)(0x39u), c.a.x);
    // 66ed:034c  add esi, 8  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x8u, false));
    // 66ed:0350  add word ptr [0x39], si  [x18969]
    c.w16(c.dsb + (uint16_t)(0x39u), c.add<16>(c.r16(c.dsb + (uint16_t)(0x39u)), c.si.x, true));
    // 66ed:0354  les di, ptr [0x41]  [x18969]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x41u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x41u) + 2); c.di.x = (uint16_t)(t0); c.loadEs(t1); }
L67228:
    if (c.tracing) c.traceAt(0x67228);
    // 66ed:0358  mov ebx, dword ptr fs:[si]  [x274116]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x)));
    // 66ed:035c  mov ecx, dword ptr fs:[si + 4]  [x274116]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x4u)));
    // 66ed:0361  mov edi, dword ptr fs:[si + 8]  [x274116]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.si.x + 0x8u)));
    // 66ed:0366  imul eax, ebx, 0xf4a0  [x274116]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x67239))));
    // 66ed:036d  imul ebp, ecx, 0xbb70  [x274116]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x67240))));
    // 66ed:0374  add eax, ebp  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:0377  imul ebp, edi, 0x3d080  [x274116]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x6724a))));
    // 66ed:037e  add eax, ebp  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:0381  mov dword ptr es:[si + 8], eax  [x274116]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x8u), c.a.e);
    // 66ed:0386  mov ebp, 5  [x274116]
    c.bp.e = (uint32_t)(0x5u);
    // 66ed:038c  imul ebp  [x274116]
    c.imul32(c.bp.e);
    // 66ed:038f  mov ebp, 0x2710  [x274116]
    c.bp.e = (uint32_t)(0x2710u);
    // 66ed:0395  idiv ebp  [x274116]
    while (!c.idiv32(c.bp.e)) { c.d32 = false; c.intr(0, 0x395u); }   // #DE: int 0, then again
    // 66ed:0398  neg eax  [x274116]
    c.a.e = (uint32_t)(c.neg<32>(c.a.e, false));
    // 66ed:039b  sub eax, dword ptr [0xba]  [x274116]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xbau)), false));
    // 66ed:03a0  mov dword ptr [0x8d], eax  [x274116]
    c.w32(c.dsb + (uint16_t)(0x8du), c.a.e);
    // 66ed:03a4  imul ebp, ebx, 0x3e150  [x274116]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x67277))));
    // 66ed:03ab  imul eax, ecx, 0  [x274116]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x6727e))));
    // 66ed:03b2  add ebp, eax  [x274116]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 66ed:03b5  imul eax, edi, 0xffff0730  [x274116]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x67288))));
    // 66ed:03bc  add eax, ebp  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:03bf  add eax, dword ptr [0xb2]  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb2u)), false));
    // 66ed:03c4  cdq   [x274116]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:03c6  idiv dword ptr [0x8d]  [x274116]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x8du)))) { c.d32 = false; c.intr(0, 0x3c6u); }   // #DE: int 0, then again
    // 66ed:03cb  add eax, 0x9f  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x9fu, false));
    // 66ed:03d1  mov dword ptr es:[si], eax  [x274116]
    c.w32(c.esb + (uint16_t)(c.si.x), c.a.e);
    // 66ed:03d5  imul ebp, ebx, 0x2d80  [x274116]
    c.bp.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x672a8))));
    // 66ed:03dc  imul eax, ecx, 0xfffc1150  [x274116]
    c.a.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x672af))));
    // 66ed:03e3  add ebp, eax  [x274116]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 66ed:03e6  imul eax, edi, 0xb5d0  [x274116]
    c.a.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x672b9))));
    // 66ed:03ed  add eax, ebp  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:03f0  sub eax, dword ptr [0xb6]  [x274116]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0xb6u)), false));
    // 66ed:03f5  cdq   [x274116]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:03f7  idiv dword ptr [0x8d]  [x274116]
    while (!c.idiv32(c.r32(c.dsb + (uint16_t)(0x8du)))) { c.d32 = false; c.intr(0, 0x3f7u); }   // #DE: int 0, then again
    // 66ed:03fc  add eax, 0x78  [x274116]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x78u, false));
    // 66ed:0400  mov dword ptr es:[si + 4], eax  [x274116]
    c.w32(c.esb + (uint16_t)(c.si.x + 0x4u), c.a.e);
    // 66ed:0405  add si, 0x10  [x274116]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x10u, false));
    // 66ed:0408  cmp si, word ptr [0x39]  [x274116]
    c.sub<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0x39u)), true);
    // 66ed:040c  jb 0x358  [x274116]
    if (c.cf) goto L67228;
L672e0:
    if (c.tracing) c.traceAt(0x672e0);
    // 66ed:0410  jmp 0x412  [x18969]
    goto L672e2;
L672e2:
    if (c.tracing) c.traceAt(0x672e2);
    // 66ed:0412  retf   [x18969]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L672f8:
    if (c.tracing) c.traceAt(0x672f8);
    // 66ed:0428  mov edx, dword ptr [0x91]  [x105085]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x91u)));
    // 66ed:042d  mov eax, dword ptr fs:[edx + 4]  [x105085]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:0433  imul eax, eax, 0x50  [x105085]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 66ed:0437  mov dword ptr [0x24], eax  [x105085]
    c.w32(c.dsb + (uint16_t)(0x24u), c.a.e);
    // 66ed:043b  xor edi, edi  [x105085]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
L6730e:
    if (c.tracing) c.traceAt(0x6730e);
    // 66ed:043e  mov edx, dword ptr [0x95]  [x108318]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x95u)));
    // 66ed:0443  mov esi, dword ptr fs:[edx]  [x108318]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:0448  mov edi, dword ptr fs:[edx + 4]  [x108318]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:044e  sub edx, 8  [x108318]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 66ed:0452  mov dword ptr [0x95], edx  [x108318]
    c.w32(c.dsb + (uint16_t)(0x95u), c.dx_.e);
    // 66ed:0457  cmp edx, dword ptr [0x99]  [x108318]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x99u)), true);
    // 66ed:045c  jge 0x468  [x108318]
    if ((c.sf == c.of)) goto L67338;
L6732e:
    if (c.tracing) c.traceAt(0x6732e);
    // 66ed:045e  mov edx, dword ptr [0x9d]  [x35910]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9du)));
    // 66ed:0463  mov dword ptr [0x95], edx  [x35910]
    c.w32(c.dsb + (uint16_t)(0x95u), c.dx_.e);
L67338:
    if (c.tracing) c.traceAt(0x67338);
    // 66ed:0468  mov eax, dword ptr fs:[edx]  [x108318]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:046d  mov ebx, dword ptr fs:[edx + 4]  [x108318]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:0473  mov edx, ebx  [x108318]
    c.dx_.e = (uint32_t)(c.b.e);
    // 66ed:0476  sub edx, edi  [x108318]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 66ed:0479  je 0x43e  [x108318]
    if (c.zf) goto L6730e;
L6734b:
    if (c.tracing) c.traceAt(0x6734b);
    // 66ed:047b  mov dword ptr [0x18], edx  [x105085]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 66ed:0480  mov ecx, ebx  [x105085]
    c.c.e = (uint32_t)(c.b.e);
    // 66ed:0483  sub ecx, edi  [x105085]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 66ed:0486  sub eax, esi  [x105085]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:0489  shl eax, 0x10  [x105085]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:048d  cdq   [x105085]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:048f  idiv ecx  [x105085]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x48fu); }   // #DE: int 0, then again
    // 66ed:0492  mov dword ptr cs:[0x5e5], eax  [x105085]
    c.w32(c.csb + (uint16_t)(0x5e5u), c.a.e);
    // 66ed:0497  shl esi, 0x10  [x105085]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 66ed:049b  mov dword ptr [0x10], esi  [x105085]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L67370:
    if (c.tracing) c.traceAt(0x67370);
    // 66ed:04a0  mov edx, dword ptr [0x91]  [x114893]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x91u)));
    // 66ed:04a5  mov esi, dword ptr fs:[edx]  [x114893]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:04aa  mov edi, dword ptr fs:[edx + 4]  [x114893]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:04b0  add edx, 8  [x114893]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 66ed:04b4  mov dword ptr [0x91], edx  [x114893]
    c.w32(c.dsb + (uint16_t)(0x91u), c.dx_.e);
    // 66ed:04b9  cmp edx, dword ptr [0x9d]  [x114893]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9du)), true);
    // 66ed:04be  jle 0x4ca  [x114893]
    if ((c.zf || c.sf != c.of)) goto L6739a;
L67390:
    if (c.tracing) c.traceAt(0x67390);
    // 66ed:04c0  mov edx, dword ptr [0x99]  [x26409]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x99u)));
    // 66ed:04c5  mov dword ptr [0x91], edx  [x26409]
    c.w32(c.dsb + (uint16_t)(0x91u), c.dx_.e);
L6739a:
    if (c.tracing) c.traceAt(0x6739a);
    // 66ed:04ca  mov eax, dword ptr fs:[edx]  [x114893]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:04cf  mov ebx, dword ptr fs:[edx + 4]  [x114893]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:04d5  mov edx, ebx  [x114893]
    c.dx_.e = (uint32_t)(c.b.e);
    // 66ed:04d8  sub edx, edi  [x114893]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 66ed:04db  je 0x4a0  [x114893]
    if (c.zf) goto L67370;
L673ad:
    if (c.tracing) c.traceAt(0x673ad);
    // 66ed:04dd  mov dword ptr [0x1c], edx  [x105085]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 66ed:04e2  mov ecx, ebx  [x105085]
    c.c.e = (uint32_t)(c.b.e);
    // 66ed:04e5  sub ecx, edi  [x105085]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 66ed:04e8  sub eax, esi  [x105085]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:04eb  shl eax, 0x10  [x105085]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:04ef  cdq   [x105085]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:04f1  idiv ecx  [x105085]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x4f1u); }   // #DE: int 0, then again
    // 66ed:04f4  mov dword ptr cs:[0x5ee], eax  [x105085]
    c.w32(c.csb + (uint16_t)(0x5eeu), c.a.e);
    // 66ed:04f9  shl esi, 0x10  [x105085]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 66ed:04fd  mov dword ptr [0x14], esi  [x105085]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L673d2:
    if (c.tracing) c.traceAt(0x673d2);
    // 66ed:0502  cmp dword ptr [0x24], 0  [x1994693]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x0u, true);
    // 66ed:0508  jl 0x5da  [x1994693]
    if ((c.sf != c.of)) goto L674aa;
L673dc:
    if (c.tracing) c.traceAt(0x673dc);
    // 66ed:050c  mov eax, dword ptr [0x10]  [x1861419]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x10u)));
    // 66ed:0510  mov edx, dword ptr [0x14]  [x1861419]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x14u)));
    // 66ed:0515  sar edx, 0x10  [x1861419]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x10u) & 31), false));
    // 66ed:0519  sar eax, 0x10  [x1861419]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:051d  mov bh, byte ptr gs:[eax*8 + 0x3e82]  [x1861419]
    c.b.h = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e82u)));
    // 66ed:0526  mov bl, byte ptr gs:[edx*8 + 0x3e84]  [x1861419]
    c.b.l = (uint8_t)(c.r8(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e84u)));
    // 66ed:052f  mov di, word ptr gs:[eax*8 + 0x3e80]  [x1861419]
    c.di.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e80u)));
    // 66ed:0538  mov cx, word ptr gs:[edx*8 + 0x3e80]  [x1861419]
    c.c.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e80u)));
    // 66ed:0541  sub cx, di  [x1861419]
    c.c.x = (uint16_t)(c.sub<16>(c.c.x, c.di.x, true));
    // 66ed:0543  je 0x590  [x1861419]
    if (c.zf) goto L67460;
L67415:
    if (c.tracing) c.traceAt(0x67415);
    // 66ed:0545  js 0x6e9  [x1371564]
    if (c.sf) goto L675b9;
L67419:
    if (c.tracing) c.traceAt(0x67419);
    // 66ed:0549  add edi, dword ptr [0x24]  [x1371121]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x24u)), true));
    // 66ed:054e  mov dx, 0x3c4  [x1371121]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:0551  mov al, 2  [x1371121]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:0553  mov ah, bh  [x1371121]
    c.a.h = (uint8_t)(c.b.h);
    // 66ed:0555  out dx, ax  [x1371121]
    c.ip = 0x556u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0556  mov eax, dword ptr [4]  [x1371121]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:055a  stosb byte ptr es:[di], al  [x1371121]
    c.stos<8, false>(0);
    // 66ed:055b  dec cx  [x1371121]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 66ed:055c  je 0x582  [x1371121]
    if (c.zf) goto L67452;
L6742e:
    if (c.tracing) c.traceAt(0x6742e);
    // 66ed:055e  mov ax, 0xf02  [x888121]
    c.a.x = (uint16_t)(0xf02u);
    // 66ed:0561  out dx, ax  [x888121]
    c.ip = 0x562u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0562  mov eax, dword ptr [4]  [x888121]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:0566  cmp cx, 2  [x888121]
    c.sub<16>(c.c.x, 0x2u, true);
    // 66ed:0569  jb 0x575  [x888121]
    if (c.cf) goto L67445;
L6743b:
    if (c.tracing) c.traceAt(0x6743b);
    // 66ed:056b  test di, 1  [x698763]
    c.logic<16>((c.di.x) & (0x1u), true);
    // 66ed:056f  jne 0x575  [x698763]
    if (!c.zf) goto L67445;
L67441:
    if (c.tracing) c.traceAt(0x67441);
    // 66ed:0571  stosb byte ptr es:[di], al  [x322851]
    c.stos<8, false>(0);
    // 66ed:0572  dec cx  [x322851]
    c.c.x = (uint16_t)(c.dec<16>(c.c.x, true));
    // 66ed:0573  je 0x5da  [x322851]
    if (c.zf) goto L674aa;
L67445:
    if (c.tracing) c.traceAt(0x67445);
    // 66ed:0575  mov si, cx  [x888121]
    c.si.x = (uint16_t)(c.c.x);
    // 66ed:0577  shr cx, 1  [x888121]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x1u) & 31), true));
L67449:
    if (c.tracing) c.traceAt(0x67449);
    // 66ed:0579  rep stosw word ptr es:[di], ax  [x3245279]
    c.stos<16, false>(1);
L6744b:
    if (c.tracing) c.traceAt(0x6744b);
    // 66ed:057b  mov cx, si  [x888121]
    c.c.x = (uint16_t)(c.si.x);
    // 66ed:057d  and cx, 1  [x888121]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x1u), true));
L67450:
    if (c.tracing) c.traceAt(0x67450);
    // 66ed:0580  rep stosb byte ptr es:[di], al  [x1407469]
    c.stos<8, false>(1);
L67452:
    if (c.tracing) c.traceAt(0x67452);
    // 66ed:0582  mov ah, bl  [x1371121]
    c.a.h = (uint8_t)(c.b.l);
    // 66ed:0584  mov al, 2  [x1371121]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:0586  out dx, ax  [x1371121]
    c.ip = 0x587u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0587  mov eax, dword ptr [4]  [x1371121]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:058b  mov byte ptr es:[di], al  [x1371121]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 66ed:058e  jmp 0x5da  [x1371121]
    goto L674aa;
L67460:
    if (c.tracing) c.traceAt(0x67460);
    // 66ed:0590  mov si, 0x8000  [x489855]
    c.si.x = (uint16_t)(0x8000u);
    // 66ed:0593  mov cx, ax  [x489855]
    c.c.x = (uint16_t)(c.a.x);
    // 66ed:0595  and cx, dx  [x489855]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 66ed:0597  js 0x5da  [x489855]
    if (c.sf) goto L674aa;
L67469:
    if (c.tracing) c.traceAt(0x67469);
    // 66ed:0599  mov ax, word ptr gs:[eax*8 + 0x3e86]  [x465747]
    c.a.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.a.e * 8 + 0x3e86u)));
    // 66ed:05a2  mov dx, word ptr gs:[edx*8 + 0x3e86]  [x465747]
    c.dx_.x = (uint16_t)(c.r16(c.gsb + (uint32_t)(c.dx_.e * 8 + 0x3e86u)));
    // 66ed:05ab  mov cx, ax  [x465747]
    c.c.x = (uint16_t)(c.a.x);
    // 66ed:05ad  and cx, dx  [x465747]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (c.dx_.x), true));
    // 66ed:05af  js 0x5da  [x465747]
    if (c.sf) goto L674aa;
L67481:
    if (c.tracing) c.traceAt(0x67481);
    // 66ed:05b1  add edi, dword ptr [0x24]  [x427965]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.r32(c.dsb + (uint16_t)(0x24u)), false));
    // 66ed:05b6  mov bx, 0xf03  [x427965]
    c.b.x = (uint16_t)(0xf03u);
    // 66ed:05b9  mov cx, ax  [x427965]
    c.c.x = (uint16_t)(c.a.x);
    // 66ed:05bb  and cl, bl  [x427965]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 66ed:05bd  mov al, bh  [x427965]
    c.a.l = (uint8_t)(c.b.h);
    // 66ed:05bf  shl al, cl  [x427965]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)(c.c.l & 31), false));
    // 66ed:05c1  mov cx, dx  [x427965]
    c.c.x = (uint16_t)(c.dx_.x);
    // 66ed:05c3  not cx  [x427965]
    c.c.x = (uint16_t)(~(c.c.x));
    // 66ed:05c5  and cl, bl  [x427965]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (c.b.l), false));
    // 66ed:05c7  mov ah, bh  [x427965]
    c.a.h = (uint8_t)(c.b.h);
    // 66ed:05c9  shr ah, cl  [x427965]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 66ed:05cb  and ah, al  [x427965]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) & (c.a.l), true));
    // 66ed:05cd  mov dx, 0x3c4  [x427965]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:05d0  mov al, 2  [x427965]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:05d2  out dx, ax  [x427965]
    c.ip = 0x5d3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:05d3  mov eax, dword ptr [4]  [x427965]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:05d7  mov byte ptr es:[di], al  [x427965]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
L674aa:
    if (c.tracing) c.traceAt(0x674aa);
    // 66ed:05da  add dword ptr [0x24], 0x50  [x1994250]
    c.w32(c.dsb + (uint16_t)(0x24u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x24u)), 0x50u, false));
    // 66ed:05e0  add dword ptr [0x10], 0xfffe7cb8  [x1994250]
    c.w32(c.dsb + (uint16_t)(0x10u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x10u)), (c.r32(0x674b5)), false));
    // 66ed:05e9  add dword ptr [0x14], 0x56666  [x1994250]
    c.w32(c.dsb + (uint16_t)(0x14u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x14u)), (c.r32(0x674be)), true));
    // 66ed:05f2  dec dword ptr [0x18]  [x1994250]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x18u)), true));
    // 66ed:05f7  jne 0x668  [x1994250]
    if (!c.zf) goto L67538;
L674c9:
    if (c.tracing) c.traceAt(0x674c9);
    // 66ed:05f9  mov eax, dword ptr [0x91]  [x183957]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x91u)));
    // 66ed:05fd  cmp eax, dword ptr [0x95]  [x183957]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x95u)), true);
    // 66ed:0602  je 0x6e9  [x183957]
    if (c.zf) goto L675b9;
L674d6:
    if (c.tracing) c.traceAt(0x674d6);
    // 66ed:0606  mov edx, dword ptr [0x95]  [x112474]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x95u)));
    // 66ed:060b  mov esi, dword ptr fs:[edx]  [x112474]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:0610  mov edi, dword ptr fs:[edx + 4]  [x112474]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:0616  sub edx, 8  [x112474]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, 0x8u, false));
    // 66ed:061a  mov dword ptr [0x95], edx  [x112474]
    c.w32(c.dsb + (uint16_t)(0x95u), c.dx_.e);
    // 66ed:061f  cmp edx, dword ptr [0x99]  [x112474]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x99u)), true);
    // 66ed:0624  jge 0x630  [x112474]
    if ((c.sf == c.of)) goto L67500;
L674f6:
    if (c.tracing) c.traceAt(0x674f6);
    // 66ed:0626  mov edx, dword ptr [0x9d]  [x24506]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x9du)));
    // 66ed:062b  mov dword ptr [0x95], edx  [x24506]
    c.w32(c.dsb + (uint16_t)(0x95u), c.dx_.e);
L67500:
    if (c.tracing) c.traceAt(0x67500);
    // 66ed:0630  mov eax, dword ptr fs:[edx]  [x112474]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:0635  mov ebx, dword ptr fs:[edx + 4]  [x112474]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:063b  mov edx, ebx  [x112474]
    c.dx_.e = (uint32_t)(c.b.e);
    // 66ed:063e  sub edx, edi  [x112474]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 66ed:0641  je 0x606  [x112474]
    if (c.zf) goto L674d6;
L67513:
    if (c.tracing) c.traceAt(0x67513);
    // 66ed:0643  mov dword ptr [0x18], edx  [x97698]
    c.w32(c.dsb + (uint16_t)(0x18u), c.dx_.e);
    // 66ed:0648  mov ecx, ebx  [x97698]
    c.c.e = (uint32_t)(c.b.e);
    // 66ed:064b  sub ecx, edi  [x97698]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 66ed:064e  sub eax, esi  [x97698]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:0651  shl eax, 0x10  [x97698]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:0655  cdq   [x97698]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:0657  idiv ecx  [x97698]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x657u); }   // #DE: int 0, then again
    // 66ed:065a  mov dword ptr cs:[0x5e5], eax  [x97698]
    c.w32(c.csb + (uint16_t)(0x5e5u), c.a.e);
    // 66ed:065f  shl esi, 0x10  [x97698]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 66ed:0663  mov dword ptr [0x10], esi  [x97698]
    c.w32(c.dsb + (uint16_t)(0x10u), c.si.e);
L67538:
    if (c.tracing) c.traceAt(0x67538);
    // 66ed:0668  dec dword ptr [0x1c]  [x1907991]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dec<32>(c.r32(c.dsb + (uint16_t)(0x1cu)), true));
    // 66ed:066d  jne 0x6dc  [x1907991]
    if (!c.zf) goto L675ac;
L6753f:
    if (c.tracing) c.traceAt(0x6753f);
    // 66ed:066f  mov eax, dword ptr [0x91]  [x94836]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x91u)));
    // 66ed:0673  cmp eax, dword ptr [0x95]  [x94836]
    c.sub<32>(c.a.e, c.r32(c.dsb + (uint16_t)(0x95u)), true);
    // 66ed:0678  je 0x6e9  [x94836]
    if (c.zf) goto L675b9;
L6754a:
    if (c.tracing) c.traceAt(0x6754a);
    // 66ed:067a  mov edx, dword ptr [0x91]  [x109611]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x91u)));
    // 66ed:067f  mov esi, dword ptr fs:[edx]  [x109611]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:0684  mov edi, dword ptr fs:[edx + 4]  [x109611]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:068a  add edx, 8  [x109611]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 66ed:068e  mov dword ptr [0x91], edx  [x109611]
    c.w32(c.dsb + (uint16_t)(0x91u), c.dx_.e);
    // 66ed:0693  cmp edx, dword ptr [0x9d]  [x109611]
    c.sub<32>(c.dx_.e, c.r32(c.dsb + (uint16_t)(0x9du)), true);
    // 66ed:0698  jle 0x6a4  [x109611]
    if ((c.zf || c.sf != c.of)) goto L67574;
L6756a:
    if (c.tracing) c.traceAt(0x6756a);
    // 66ed:069a  mov edx, dword ptr [0x99]  [x28771]
    c.dx_.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x99u)));
    // 66ed:069f  mov dword ptr [0x91], edx  [x28771]
    c.w32(c.dsb + (uint16_t)(0x91u), c.dx_.e);
L67574:
    if (c.tracing) c.traceAt(0x67574);
    // 66ed:06a4  mov eax, dword ptr fs:[edx]  [x109611]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e)));
    // 66ed:06a9  mov ebx, dword ptr fs:[edx + 4]  [x109611]
    c.b.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.dx_.e + 0x4u)));
    // 66ed:06af  mov edx, ebx  [x109611]
    c.dx_.e = (uint32_t)(c.b.e);
    // 66ed:06b2  sub edx, edi  [x109611]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.di.e, true));
    // 66ed:06b5  je 0x67a  [x109611]
    if (c.zf) goto L6754a;
L67587:
    if (c.tracing) c.traceAt(0x67587);
    // 66ed:06b7  mov dword ptr [0x1c], edx  [x94836]
    c.w32(c.dsb + (uint16_t)(0x1cu), c.dx_.e);
    // 66ed:06bc  mov ecx, ebx  [x94836]
    c.c.e = (uint32_t)(c.b.e);
    // 66ed:06bf  sub ecx, edi  [x94836]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 66ed:06c2  sub eax, esi  [x94836]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:06c5  shl eax, 0x10  [x94836]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:06c9  cdq   [x94836]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:06cb  idiv ecx  [x94836]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x6cbu); }   // #DE: int 0, then again
    // 66ed:06ce  mov dword ptr cs:[0x5ee], eax  [x94836]
    c.w32(c.csb + (uint16_t)(0x5eeu), c.a.e);
    // 66ed:06d3  shl esi, 0x10  [x94836]
    c.si.e = (uint32_t)(c.shl<32>(c.si.e, (int)((0x10u) & 31), true));
    // 66ed:06d7  mov dword ptr [0x14], esi  [x94836]
    c.w32(c.dsb + (uint16_t)(0x14u), c.si.e);
L675ac:
    if (c.tracing) c.traceAt(0x675ac);
    // 66ed:06dc  cmp dword ptr [0x24], 0x4ab0  [x1907991]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x24u)), (c.r32(0x675b1)), true);
    // 66ed:06e5  jl 0x502  [x1907991]
    if ((c.sf != c.of)) goto L673d2;
L675b9:
    if (c.tracing) c.traceAt(0x675b9);
    // 66ed:06e9  retf   [x105085]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L675ba:
    if (c.tracing) c.traceAt(0x675ba);
    // 66ed:06ea  mov ax, word ptr [0xa9]  [x424]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:06ed  not ax  [x424]
    c.a.x = (uint16_t)(~(c.a.x));
    // 66ed:06ef  and ax, 0x500  [x424]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:06f2  add ax, 0xa000  [x424]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 66ed:06f5  mov es, ax  [x424]
    c.loadEs(c.a.x);
    // 66ed:06f7  mov dx, 0x3ce  [x424]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 66ed:06fa  mov al, 5  [x424]
    c.a.l = (uint8_t)(0x5u);
    // 66ed:06fc  out dx, al  [x424]
    c.ip = 0x6fdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:06fd  inc dx  [x424]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 66ed:06fe  in al, dx  [x424]
    c.ip = 0x6ffu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 66ed:06ff  mov byte ptr [0xd5], al  [x424]
    c.w8(c.dsb + (uint16_t)(0xd5u), c.a.l);
    // 66ed:0702  and al, 0xfc  [x424]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 66ed:0704  or al, 1  [x424]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 66ed:0706  and al, 0xf7  [x424]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xf7u), true));
    // 66ed:0708  out dx, al  [x424]
    c.ip = 0x709u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0709  mov ah, 0xf  [x424]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:070b  mov dx, 0x3c4  [x424]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:070e  mov al, 2  [x424]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:0710  out dx, ax  [x424]
    c.ip = 0x711u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0711  push ds  [x424]
    c.push16(c.ds);
    // 66ed:0712  mov ax, 0xaa00  [x424]
    c.a.x = (uint16_t)(0xaa00u);
    // 66ed:0715  mov ds, ax  [x424]
    c.loadDs(c.a.x);
    // 66ed:0717  mov di, 0x1950  [x424]
    c.di.x = (uint16_t)(0x1950u);
    // 66ed:071a  mov si, di  [x424]
    c.si.x = (uint16_t)(c.di.x);
    // 66ed:071c  cld   [x424]
    c.df = false;
    // 66ed:071d  mov cx, 0xfa0  [x424]
    c.c.x = (uint16_t)(0xfa0u);
L675f0:
    if (c.tracing) c.traceAt(0x675f0);
    // 66ed:0720  rep movsb byte ptr es:[di], byte ptr [si]  [x1696424]
    c.ip = 0x722u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L675f2:
    if (c.tracing) c.traceAt(0x675f2);
    // 66ed:0722  pop ds  [x424]
    c.loadDs((uint16_t)c.pop16());
    // 66ed:0723  mov dx, 0x3ce  [x424]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 66ed:0726  mov al, 5  [x424]
    c.a.l = (uint8_t)(0x5u);
    // 66ed:0728  out dx, al  [x424]
    c.ip = 0x729u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0729  inc dx  [x424]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 66ed:072a  mov al, byte ptr [0xd5]  [x424]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xd5u)));
    // 66ed:072d  out dx, al  [x424]
    c.ip = 0x72eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:072e  mov ah, 0xf  [x424]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:0730  mov dx, 0x3c4  [x424]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:0733  mov al, 2  [x424]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:0735  out dx, ax  [x424]
    c.ip = 0x736u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0736  mov eax, 0  [x424]
    c.a.e = (uint32_t)(0x0u);
    // 66ed:073c  cld   [x424]
    c.df = false;
    // 66ed:073d  mov ax, 0x3e6b  [x424]
    c.a.x = (uint16_t)(0x3e6bu);
    // 66ed:0740  mov fs, ax  [x424]
    c.loadFs(c.a.x);
    // 66ed:0742  mov si, 0  [x424]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:0745  add si, 0x88  [x424]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x88u, true));
    // 66ed:0749  mov bl, 0x74  [x424]
    c.b.l = (uint8_t)(0x74u);
    // 66ed:074b  mov edi, 0x2850  [x424]
    c.di.e = (uint32_t)(0x2850u);
L67621:
    if (c.tracing) c.traceAt(0x67621);
    // 66ed:0751  mov al, byte ptr fs:[si]  [x49184]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 66ed:0754  mov ah, al  [x49184]
    c.a.h = (uint8_t)(c.a.l);
    // 66ed:0756  mov dx, ax  [x49184]
    c.dx_.x = (uint16_t)(c.a.x);
    // 66ed:0758  shl eax, 0x10  [x49184]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 66ed:075c  mov ax, dx  [x49184]
    c.a.x = (uint16_t)(c.dx_.x);
    // 66ed:075e  mov cx, 0x14  [x49184]
    c.c.x = (uint16_t)(0x14u);
L67631:
    if (c.tracing) c.traceAt(0x67631);
    // 66ed:0761  rep stosd dword ptr es:[di], eax  [x1032864]
    c.stos<32, false>(1);
L67634:
    if (c.tracing) c.traceAt(0x67634);
    // 66ed:0764  inc si  [x49184]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 66ed:0765  dec bl  [x49184]
    c.b.l = (uint8_t)(c.dec<8>(c.b.l, true));
    // 66ed:0767  jne 0x751  [x49184]
    if (!c.zf) goto L67621;
L67639:
    if (c.tracing) c.traceAt(0x67639);
    // 66ed:0769  retf   [x424]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6763a:
    if (c.tracing) c.traceAt(0x6763a);
    // 66ed:076a  mov ax, word ptr [0xa9]  [x783]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:076d  not ax  [x783]
    c.a.x = (uint16_t)(~(c.a.x));
    // 66ed:076f  and ax, 0x500  [x783]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:0772  add ax, 0xa000  [x783]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 66ed:0775  mov es, ax  [x783]
    c.loadEs(c.a.x);
    // 66ed:0777  mov ah, 0xf  [x783]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:0779  mov dx, 0x3c4  [x783]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:077c  mov al, 2  [x783]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:077e  out dx, ax  [x783]
    c.ip = 0x77fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:077f  mov eax, 0  [x783]
    c.a.e = (uint32_t)(0x0u);
    // 66ed:0785  cld   [x783]
    c.df = false;
    // 66ed:0786  xor edi, edi  [x783]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 66ed:0789  mov cx, 0x12c0  [x783]
    c.c.x = (uint16_t)(0x12c0u);
L6765c:
    if (c.tracing) c.traceAt(0x6765c);
    // 66ed:078c  rep stosd dword ptr es:[di], eax  [x3759183]
    c.stos<32, false>(1);
L6765f:
    if (c.tracing) c.traceAt(0x6765f);
    // 66ed:078f  retf   [x783]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67660:
    if (c.tracing) c.traceAt(0x67660);
    // 66ed:0790  mov ax, word ptr [0xa9]  [x404]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:0793  not ax  [x404]
    c.a.x = (uint16_t)(~(c.a.x));
    // 66ed:0795  and ax, 0x500  [x404]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:0798  add ax, 0xa000  [x404]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, false));
    // 66ed:079b  mov es, ax  [x404]
    c.loadEs(c.a.x);
    // 66ed:079d  mov dx, 0x3ce  [x404]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 66ed:07a0  mov al, 5  [x404]
    c.a.l = (uint8_t)(0x5u);
    // 66ed:07a2  out dx, al  [x404]
    c.ip = 0x7a3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:07a3  inc dx  [x404]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 66ed:07a4  in al, dx  [x404]
    c.ip = 0x7a5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
    // 66ed:07a5  mov byte ptr [0xd5], al  [x404]
    c.w8(c.dsb + (uint16_t)(0xd5u), c.a.l);
    // 66ed:07a8  and al, 0xfc  [x404]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xfcu), false));
    // 66ed:07aa  or al, 1  [x404]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (0x1u), false));
    // 66ed:07ac  and al, 0xf7  [x404]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0xf7u), true));
    // 66ed:07ae  out dx, al  [x404]
    c.ip = 0x7afu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:07af  mov ah, 0xf  [x404]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:07b1  mov dx, 0x3c4  [x404]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:07b4  mov al, 2  [x404]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:07b6  out dx, ax  [x404]
    c.ip = 0x7b7u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:07b7  push ds  [x404]
    c.push16(c.ds);
    // 66ed:07b8  mov ax, 0xaa00  [x404]
    c.a.x = (uint16_t)(0xaa00u);
    // 66ed:07bb  mov ds, ax  [x404]
    c.loadDs(c.a.x);
    // 66ed:07bd  mov di, 0x15e0  [x404]
    c.di.x = (uint16_t)(0x15e0u);
    // 66ed:07c0  mov si, 0x3e80  [x404]
    c.si.x = (uint16_t)(0x3e80u);
    // 66ed:07c3  cld   [x404]
    c.df = false;
    // 66ed:07c4  mov cx, 0x4b0  [x404]
    c.c.x = (uint16_t)(0x4b0u);
L67697:
    if (c.tracing) c.traceAt(0x67697);
    // 66ed:07c7  rep movsb byte ptr es:[di], byte ptr [si]  [x485204]
    c.ip = 0x7c9u; c.d32 = false; c.movs<8, false>(c.dsb, 1);
L67699:
    if (c.tracing) c.traceAt(0x67699);
    // 66ed:07c9  pop ds  [x404]
    c.loadDs((uint16_t)c.pop16());
    // 66ed:07ca  mov dx, 0x3ce  [x404]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 66ed:07cd  mov al, 5  [x404]
    c.a.l = (uint8_t)(0x5u);
    // 66ed:07cf  out dx, al  [x404]
    c.ip = 0x7d0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:07d0  inc dx  [x404]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 66ed:07d1  mov al, byte ptr [0xd5]  [x404]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xd5u)));
    // 66ed:07d4  out dx, al  [x404]
    c.ip = 0x7d5u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:07d5  retf   [x404]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L676a6:
    if (c.tracing) c.traceAt(0x676a6);
    // 66ed:07d6  mov ax, 0x54b5  [x1]
    c.a.x = (uint16_t)(0x54b5u);
    // 66ed:07d9  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:07db  xor edi, edi  [x1]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), true));
    // 66ed:07de  mov cx, 0x7d0  [x1]
    c.c.x = (uint16_t)(0x7d0u);
L676b1:
    if (c.tracing) c.traceAt(0x676b1);
    // 66ed:07e1  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:07e4  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 66ed:07e5  mov ax, 0xf  [x2000]
    c.a.x = (uint16_t)(0xfu);
    // 66ed:07e8  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 66ed:07e9  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:07ec  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 66ed:07ed  mov ax, 0  [x2000]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:07f0  stosw word ptr es:[di], ax  [x2000]
    c.stos<16, false>(0);
    // 66ed:07f1  loop 0x7e1  [x2000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L676b1;
L676c3:
    if (c.tracing) c.traceAt(0x676c3);
    // 66ed:07f3  mov cx, 0x140  [x1]
    c.c.x = (uint16_t)(0x140u);
    // 66ed:07f6  mov dl, 0xf  [x1]
    c.dx_.l = (uint8_t)(0xfu);
    // 66ed:07f8  mov bp, 0  [x1]
    c.bp.x = (uint16_t)(0x0u);
L676cb:
    if (c.tracing) c.traceAt(0x676cb);
    // 66ed:07fb  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 66ed:07fd  shr ax, 2  [x320]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)((0x2u) & 31), false));
    // 66ed:0800  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 66ed:0801  push cx  [x320]
    c.push16(c.c.x);
    // 66ed:0802  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 66ed:0804  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 66ed:0807  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:0809  shl ah, cl  [x320]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)(c.c.l & 31), false));
    // 66ed:080b  mov bh, ah  [x320]
    c.b.h = (uint8_t)(c.a.h);
    // 66ed:080d  xor ax, ax  [x320]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 66ed:080f  mov al, bh  [x320]
    c.a.l = (uint8_t)(c.b.h);
    // 66ed:0811  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 66ed:0812  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 66ed:0813  push cx  [x320]
    c.push16(c.c.x);
    // 66ed:0814  mov cx, bp  [x320]
    c.c.x = (uint16_t)(c.bp.x);
    // 66ed:0816  not cx  [x320]
    c.c.x = (uint16_t)(~(c.c.x));
    // 66ed:0818  and cl, 3  [x320]
    c.c.l = (uint8_t)(c.logic<8>((c.c.l) & (0x3u), false));
    // 66ed:081b  mov ah, 0xf  [x320]
    c.a.h = (uint8_t)(0xfu);
    // 66ed:081d  shr ah, cl  [x320]
    c.a.h = (uint8_t)(c.shr<8>(c.a.h, (int)(c.c.l & 31), false));
    // 66ed:081f  mov al, ah  [x320]
    c.a.l = (uint8_t)(c.a.h);
    // 66ed:0821  xor ah, ah  [x320]
    c.a.h = (uint8_t)(c.logic<8>((c.a.h) ^ (c.a.h), false));
    // 66ed:0823  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 66ed:0824  mov ax, bp  [x320]
    c.a.x = (uint16_t)(c.bp.x);
    // 66ed:0826  stosw word ptr es:[di], ax  [x320]
    c.stos<16, false>(0);
    // 66ed:0827  pop cx  [x320]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 66ed:0828  add dl, dl  [x320]
    c.dx_.l = (uint8_t)(c.add<8>(c.dx_.l, c.dx_.l, false));
    // 66ed:082a  cmp dl, 0x10  [x320]
    c.sub<8>(c.dx_.l, 0x10u, true);
    // 66ed:082d  jb 0x831  [x320]
    if (c.cf) goto L67701;
L676ff:
    if (c.tracing) c.traceAt(0x676ff);
    // 66ed:082f  mov dl, 0xf  [x320]
    c.dx_.l = (uint8_t)(0xfu);
L67701:
    if (c.tracing) c.traceAt(0x67701);
    // 66ed:0831  inc bp  [x320]
    c.bp.x = (uint16_t)(c.inc<16>(c.bp.x, true));
    // 66ed:0832  loop 0x7fb  [x320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L676cb;
L67704:
    if (c.tracing) c.traceAt(0x67704);
    // 66ed:0834  mov cx, 0x690  [x1]
    c.c.x = (uint16_t)(0x690u);
L67707:
    if (c.tracing) c.traceAt(0x67707);
    // 66ed:0837  mov ax, 0x4f  [x1680]
    c.a.x = (uint16_t)(0x4fu);
    // 66ed:083a  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 66ed:083b  mov ax, 0  [x1680]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:083e  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 66ed:083f  mov ax, 0xf  [x1680]
    c.a.x = (uint16_t)(0xfu);
    // 66ed:0842  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 66ed:0843  mov ax, 0xffff  [x1680]
    c.a.x = (uint16_t)(0xffffu);
    // 66ed:0846  stosw word ptr es:[di], ax  [x1680]
    c.stos<16, false>(0);
    // 66ed:0847  loop 0x837  [x1680]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67707;
L67719:
    if (c.tracing) c.traceAt(0x67719);
    // 66ed:0849  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L6771c:
    if (c.tracing) c.traceAt(0x6771c);
    // 66ed:084c  les bx, ptr [0x3d]  [x18969]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:0850  mov eax, dword ptr es:[bx + 4]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0x4u)));
    // 66ed:0855  mov byte ptr [0xab], al  [x18969]
    c.w8(c.dsb + (uint16_t)(0xabu), c.a.l);
    // 66ed:0858  mov ebx, dword ptr [0]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:085d  cmp dword ptr es:[bx - 4], 0  [x18969]
    c.sub<32>(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffffcu)), 0x0u, true);
    // 66ed:0863  je 0x993  [x18969]
    if (c.zf) goto L67863;
L67737:
    if (c.tracing) c.traceAt(0x67737);
    // 66ed:0867  mov dword ptr [8], 0  [x2372]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 66ed:0870  les bx, ptr [0x3d]  [x2372]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:0874  mov esi, dword ptr [0]  [x2372]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:0879  mov dword ptr [0xac], esi  [x2372]
    c.w32(c.dsb + (uint16_t)(0xacu), c.si.e);
    // 66ed:087e  mov eax, dword ptr es:[si - 8]  [x2372]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.si.x + 0xfffffff8u)));
    // 66ed:0883  mov dword ptr [0xc], eax  [x2372]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
    // 66ed:0887  les bx, ptr [0x3d]  [x2372]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:088b  lfs bp, ptr [0x41]  [x2372]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x41u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x41u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 66ed:0890  xor ebx, ebx  [x2372]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 66ed:0893  xor ebp, ebp  [x2372]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 66ed:0896  xor edx, edx  [x2372]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), true));
L67769:
    if (c.tracing) c.traceAt(0x67769);
    // 66ed:0899  mov ebx, esi  [x157003]
    c.b.e = (uint32_t)(c.si.e);
    // 66ed:089c  mov bx, word ptr es:[ebx]  [x157003]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint32_t)(c.b.e)));
    // 66ed:08a0  mov ecx, dword ptr es:[ebx]  [x157003]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:08a5  mov edi, ecx  [x157003]
    c.di.e = (uint32_t)(c.c.e);
    // 66ed:08a8  add ebx, 0x18  [x157003]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 66ed:08ac  xor eax, eax  [x157003]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) ^ (c.a.e), false));
    // 66ed:08af  mov ebp, dword ptr es:[ebx]  [x157003]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:08b4  add ebp, ebp  [x157003]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:08b7  add eax, dword ptr fs:[ebp*8 + 0x10]  [x157003]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 66ed:08c1  mov ebp, dword ptr es:[ebx + 4]  [x157003]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 66ed:08c7  add ebp, ebp  [x157003]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:08ca  add eax, dword ptr fs:[ebp*8 + 0x10]  [x157003]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 66ed:08d4  mov ebp, dword ptr es:[ebx + 8]  [x157003]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 66ed:08da  add ebp, ebp  [x157003]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:08dd  add eax, dword ptr fs:[ebp*8 + 0x10]  [x157003]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 66ed:08e7  add ebx, 0xc  [x157003]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 66ed:08eb  sub ecx, 3  [x157003]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 66ed:08ef  je 0x909  [x157003]
    if (c.zf) goto L677d9;
L677c1:
    if (c.tracing) c.traceAt(0x677c1);
    // 66ed:08f1  mov ebp, dword ptr es:[ebx]  [x140591]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:08f6  add ebp, ebp  [x140591]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:08f9  add eax, dword ptr fs:[ebp*8 + 0x10]  [x140591]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x10u)), false));
    // 66ed:0903  add ebx, 4  [x140591]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 66ed:0907  loop 0x8f1  [x140591]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L677c1;
L677d9:
    if (c.tracing) c.traceAt(0x677d9);
    // 66ed:0909  cmp edi, 4  [x157003]
    c.sub<32>(c.di.e, 0x4u, true);
    // 66ed:090d  jne 0x915  [x157003]
    if (!c.zf) goto L677e5;
L677df:
    if (c.tracing) c.traceAt(0x677df);
    // 66ed:090f  sar eax, 0x12  [x140591]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x12u) & 31), true));
    // 66ed:0913  jmp 0x921  [x140591]
    goto L677f1;
L677e5:
    if (c.tracing) c.traceAt(0x677e5);
    // 66ed:0915  sar eax, 0x10  [x16412]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x10u) & 31), false));
    // 66ed:0919  cdq   [x16412]
    c.dx_.e = (c.a.e & 0x80000000u) ? 0xFFFFFFFFu : 0;
    // 66ed:091b  mov ecx, edi  [x16412]
    c.c.e = (uint32_t)(c.di.e);
    // 66ed:091e  idiv ecx  [x16412]
    while (!c.idiv32(c.c.e)) { c.d32 = false; c.intr(0, 0x91eu); }   // #DE: int 0, then again
L677f1:
    if (c.tracing) c.traceAt(0x677f1);
    // 66ed:0921  add eax, 0x8000  [x157003]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x8000u, false));
    // 66ed:0927  mov word ptr es:[esi + 2], ax  [x157003]
    c.w16(c.esb + (uint32_t)(c.si.e + 0x2u), c.a.x);
    // 66ed:092c  add esi, 4  [x157003]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, 0x4u, false));
    // 66ed:0930  inc dword ptr [8]  [x157003]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 66ed:0935  mov eax, dword ptr [0xc]  [x157003]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 66ed:0939  cmp dword ptr [8], eax  [x157003]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 66ed:093e  jb 0x899  [x157003]
    if (c.cf) goto L67769;
L67812:
    if (c.tracing) c.traceAt(0x67812);
    // 66ed:0942  mov esi, dword ptr [0xac]  [x2372]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xacu)));
    // 66ed:0947  mov dword ptr [0], esi  [x2372]
    c.w32(c.dsb + (uint16_t)(0u), c.si.e);
    // 66ed:094c  mov edi, 4  [x2372]
    c.di.e = (uint32_t)(0x4u);
    // 66ed:0952  les bx, ptr [0x3d]  [x2372]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:0956  mov ebp, dword ptr [0]  [x2372]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:095b  mov edx, dword ptr es:[ebp - 8]  [x2372]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.bp.e + 0xfffffff8u)));
L67831:
    if (c.tracing) c.traceAt(0x67831);
    // 66ed:0961  mov ebx, ebp  [x2876]
    c.b.e = (uint32_t)(c.bp.e);
    // 66ed:0964  mov ecx, edx  [x2876]
    c.c.e = (uint32_t)(c.dx_.e);
    // 66ed:0967  xor esi, esi  [x2876]
    c.si.e = (uint32_t)(c.logic<32>((c.si.e) ^ (c.si.e), true));
L6783a:
    if (c.tracing) c.traceAt(0x6783a);
    // 66ed:096a  mov eax, dword ptr es:[ebx]  [x204749]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:096f  cmp eax, dword ptr es:[ebx + 4]  [x204749]
    c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)), true);
    // 66ed:0975  jae 0x988  [x204749]
    if (!c.cf) goto L67858;
L67847:
    if (c.tracing) c.traceAt(0x67847);
    // 66ed:0977  xchg dword ptr es:[ebx + 4], eax  [x7805]
    { const uint32_t t0 = c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)); c.w32(c.esb + (uint32_t)(c.b.e + 0x4u), c.a.e); c.a.e = (uint32_t)(t0); }
    // 66ed:097d  mov dword ptr es:[ebx], eax  [x7805]
    c.w32(c.esb + (uint32_t)(c.b.e), c.a.e);
    // 66ed:0982  mov esi, 1  [x7805]
    c.si.e = (uint32_t)(0x1u);
L67858:
    if (c.tracing) c.traceAt(0x67858);
    // 66ed:0988  add ebx, edi  [x204749]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, true));
    // 66ed:098b  loop 0x96a  [x204749]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L6783a;
L6785d:
    if (c.tracing) c.traceAt(0x6785d);
    // 66ed:098d  cmp esi, 0  [x2876]
    c.sub<32>(c.si.e, 0x0u, true);
    // 66ed:0991  jne 0x961  [x2876]
    if (!c.zf) goto L67831;
L67863:
    if (c.tracing) c.traceAt(0x67863);
    // 66ed:0993  mov bl, 0xfe  [x18969]
    c.b.l = (uint8_t)(0xfeu);
    // 66ed:0995  mov dword ptr [8], 0  [x18969]
    c.w32(c.dsb + (uint16_t)(0x8u), 0x0u);
    // 66ed:099e  les bx, ptr [0x3d]  [x18969]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:09a2  mov ebx, dword ptr [0]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:09a7  mov eax, dword ptr es:[bx - 8]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint16_t)(c.b.x + 0xfffffff8u)));
    // 66ed:09ac  mov dword ptr [0xc], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0xcu), c.a.e);
L67880:
    if (c.tracing) c.traceAt(0x67880);
    // 66ed:09b0  xor ebx, ebx  [x177222]
    c.b.e = (uint32_t)(c.logic<32>((c.b.e) ^ (c.b.e), false));
    // 66ed:09b3  xor ebp, ebp  [x177222]
    c.bp.e = (uint32_t)(c.logic<32>((c.bp.e) ^ (c.bp.e), false));
    // 66ed:09b6  xor edx, edx  [x177222]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) ^ (c.dx_.e), false));
    // 66ed:09b9  les bx, ptr [0x3d]  [x177222]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x3du)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x3du) + 2); c.b.x = (uint16_t)(t0); c.loadEs(t1); }
    // 66ed:09bd  lfs bp, ptr [0x41]  [x177222]
    { const uint32_t t0 = c.r16(c.dsb + (uint16_t)(0x41u)); const uint16_t t1 = c.r16(c.dsb + (uint16_t)(0x41u) + 2); c.bp.x = (uint16_t)(t0); c.loadFs(t1); }
    // 66ed:09c2  mov ax, 0x6455  [x177222]
    c.a.x = (uint16_t)(0x6455u);
    // 66ed:09c5  mov gs, ax  [x177222]
    c.loadGs(c.a.x);
    // 66ed:09c7  mov ebx, dword ptr [0]  [x177222]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:09cc  mov ax, word ptr es:[bx + 2]  [x177222]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x + 0x2u)));
    // 66ed:09d0  mov bx, word ptr es:[bx]  [x177222]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 66ed:09d3  mov ecx, dword ptr es:[ebx + 0x14]  [x177222]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x14u)));
    // 66ed:09d9  mov dword ptr [4], ecx  [x177222]
    c.w32(c.dsb + (uint16_t)(0x4u), c.c.e);
    // 66ed:09de  mov ecx, dword ptr es:[ebx]  [x177222]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:09e3  mov dword ptr gs:[edx], ecx  [x177222]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.c.e);
    // 66ed:09e8  add ebx, 0x18  [x177222]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 66ed:09ec  mov ebp, dword ptr es:[ebx]  [x177222]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:09f1  add ebp, ebp  [x177222]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:09f4  mov ecx, ebp  [x177222]
    c.c.e = (uint32_t)(c.bp.e);
    // 66ed:09f7  mov ebp, dword ptr es:[ebx + 4]  [x177222]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 66ed:09fd  add ebp, ebp  [x177222]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0a00  mov edi, dword ptr fs:[ebp*8 + 8]  [x177222]
    c.di.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 66ed:0a0a  mov esi, dword ptr fs:[ebp*8 + 0xc]  [x177222]
    c.si.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 66ed:0a14  mov ebp, dword ptr es:[ebx + 8]  [x177222]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 66ed:0a1a  add ebp, ebp  [x177222]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0a1d  mov edx, dword ptr fs:[ebp*8 + 8]  [x177222]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 66ed:0a27  mov ebp, dword ptr fs:[ebp*8 + 0xc]  [x177222]
    c.bp.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 66ed:0a31  mov ebx, ecx  [x177222]
    c.b.e = (uint32_t)(c.c.e);
    // 66ed:0a34  mov eax, ebp  [x177222]
    c.a.e = (uint32_t)(c.bp.e);
    // 66ed:0a37  sub eax, esi  [x177222]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, true));
    // 66ed:0a3a  mov dword ptr cs:[0xa51], eax  [x177222]
    c.w32(c.csb + (uint16_t)(0xa51u), c.a.e);
    // 66ed:0a3f  jmp 0xa41  [x177222]
    goto L67911;
L67911:
    if (c.tracing) c.traceAt(0x67911);
    // 66ed:0a41  mov eax, edi  [x177222]
    c.a.e = (uint32_t)(c.di.e);
    // 66ed:0a44  sub eax, dword ptr fs:[ebx*8 + 8]  [x177222]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0x8u)), false));
    // 66ed:0a4e  imul eax, eax, 0x17  [x177222]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, (c.r32(0x67921))));
    // 66ed:0a55  mov ecx, esi  [x177222]
    c.c.e = (uint32_t)(c.si.e);
    // 66ed:0a58  sub ecx, dword ptr fs:[ebx*8 + 0xc]  [x177222]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.r32(c.fsb + (uint32_t)(c.b.e * 8 + 0xcu)), true));
    // 66ed:0a62  mov dword ptr cs:[0xa73], ecx  [x177222]
    c.w32(c.csb + (uint16_t)(0xa73u), c.c.e);
    // 66ed:0a68  jmp 0xa6a  [x177222]
    goto L6793a;
L6793a:
    if (c.tracing) c.traceAt(0x6793a);
    // 66ed:0a6a  mov ecx, edx  [x177222]
    c.c.e = (uint32_t)(c.dx_.e);
    // 66ed:0a6d  sub ecx, edi  [x177222]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.di.e, false));
    // 66ed:0a70  imul ecx, ecx, 0x1f  [x177222]
    c.c.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x67943))));
    // 66ed:0a77  cmp eax, ecx  [x177222]
    c.sub<32>(c.a.e, c.c.e, true);
    // 66ed:0a7a  jl 0xceb  [x177222]
    if ((c.sf != c.of)) goto L67bbb;
L6794e:
    if (c.tracing) c.traceAt(0x6794e);
    // 66ed:0a7e  je 0xceb  [x126367]
    if (c.zf) goto L67bbb;
L67952:
    if (c.tracing) c.traceAt(0x67952);
    // 66ed:0a82  mov ebx, dword ptr [0]  [x122202]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:0a87  mov bx, word ptr es:[bx]  [x122202]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 66ed:0a8a  mov ecx, dword ptr es:[ebx]  [x122202]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:0a8f  mov dword ptr gs:[0], ecx  [x122202]
    c.w32(c.gsb + (uint16_t)(0u), c.c.e);
    // 66ed:0a95  add ebx, 0x18  [x122202]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x18u, false));
    // 66ed:0a99  mov dword ptr gs:[0xc], edi  [x122202]
    c.w32(c.gsb + (uint16_t)(0xcu), c.di.e);
    // 66ed:0a9f  mov dword ptr gs:[0x10], esi  [x122202]
    c.w32(c.gsb + (uint16_t)(0x10u), c.si.e);
    // 66ed:0aa5  mov dword ptr gs:[0x14], edx  [x122202]
    c.w32(c.gsb + (uint16_t)(0x14u), c.dx_.e);
    // 66ed:0aab  mov dword ptr gs:[0x18], ebp  [x122202]
    c.w32(c.gsb + (uint16_t)(0x18u), c.bp.e);
    // 66ed:0ab1  mov ebp, dword ptr es:[ebx]  [x122202]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:0ab6  add ebp, ebp  [x122202]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0ab9  mov eax, dword ptr fs:[ebp*8 + 8]  [x122202]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 66ed:0ac3  mov dword ptr gs:[4], eax  [x122202]
    c.w32(c.gsb + (uint16_t)(0x4u), c.a.e);
    // 66ed:0ac8  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x122202]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 66ed:0ad2  mov dword ptr gs:[8], eax  [x122202]
    c.w32(c.gsb + (uint16_t)(0x8u), c.a.e);
    // 66ed:0ad7  mov edx, 0x1c  [x122202]
    c.dx_.e = (uint32_t)(0x1cu);
    // 66ed:0add  add ebx, 0xc  [x122202]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xcu, false));
    // 66ed:0ae1  sub ecx, 3  [x122202]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, 0x3u, true));
    // 66ed:0ae5  je 0xb18  [x122202]
    if (c.zf) goto L679e8;
L679b7:
    if (c.tracing) c.traceAt(0x679b7);
    // 66ed:0ae7  mov ebp, dword ptr es:[ebx]  [x103288]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e)));
    // 66ed:0aec  add ebp, ebp  [x103288]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0aef  mov eax, dword ptr fs:[ebp*8 + 8]  [x103288]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0x8u)));
    // 66ed:0af9  mov dword ptr gs:[edx], eax  [x103288]
    c.w32(c.gsb + (uint32_t)(c.dx_.e), c.a.e);
    // 66ed:0afe  mov eax, dword ptr fs:[ebp*8 + 0xc]  [x103288]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint32_t)(c.bp.e * 8 + 0xcu)));
    // 66ed:0b08  mov dword ptr gs:[edx + 4], eax  [x103288]
    c.w32(c.gsb + (uint32_t)(c.dx_.e + 0x4u), c.a.e);
    // 66ed:0b0e  add edx, 8  [x103288]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, 0x8u, false));
    // 66ed:0b12  add ebx, 4  [x103288]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0x4u, true));
    // 66ed:0b16  loop 0xae7  [x103288]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L679b7;
L679e8:
    if (c.tracing) c.traceAt(0x679e8);
    // 66ed:0b18  xor edi, edi  [x122202]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 66ed:0b1b  mov ecx, dword ptr gs:[edi]  [x122202]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0b20  lea eax, [edi + 4]  [x122202]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 66ed:0b25  mov dword ptr [0x99], eax  [x122202]
    c.w32(c.dsb + (uint16_t)(0x99u), c.a.e);
    // 66ed:0b29  lea ebx, [ecx - 1]  [x122202]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 66ed:0b2e  lea eax, [eax + ebx*8]  [x122202]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 66ed:0b33  mov dword ptr [0x9d], eax  [x122202]
    c.w32(c.dsb + (uint16_t)(0x9du), c.a.e);
    // 66ed:0b37  dec ecx  [x122202]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 66ed:0b39  add edi, 4  [x122202]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x4u, true));
    // 66ed:0b3d  mov eax, dword ptr gs:[edi]  [x122202]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0b42  mov ebx, edi  [x122202]
    c.b.e = (uint32_t)(c.di.e);
    // 66ed:0b45  mov ebp, eax  [x122202]
    c.bp.e = (uint32_t)(c.a.e);
L67a18:
    if (c.tracing) c.traceAt(0x67a18);
    // 66ed:0b48  add edi, 8  [x347692]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 66ed:0b4c  mov edx, dword ptr gs:[edi]  [x347692]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0b51  cmp ebp, edx  [x347692]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 66ed:0b54  jle 0xb5c  [x347692]
    if ((c.zf || c.sf != c.of)) goto L67a2c;
L67a26:
    if (c.tracing) c.traceAt(0x67a26);
    // 66ed:0b56  mov ebp, edx  [x124632]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 66ed:0b59  mov ebx, edi  [x124632]
    c.b.e = (uint32_t)(c.di.e);
L67a2c:
    if (c.tracing) c.traceAt(0x67a2c);
    // 66ed:0b5c  cmp eax, edx  [x347692]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 66ed:0b5f  jge 0xb64  [x347692]
    if ((c.sf == c.of)) goto L67a34;
L67a31:
    if (c.tracing) c.traceAt(0x67a31);
    // 66ed:0b61  mov eax, edx  [x122502]
    c.a.e = (uint32_t)(c.dx_.e);
L67a34:
    if (c.tracing) c.traceAt(0x67a34);
    // 66ed:0b64  loop 0xb48  [x347692]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67a18;
L67a36:
    if (c.tracing) c.traceAt(0x67a36);
    // 66ed:0b66  mov ecx, ebp  [x122202]
    c.c.e = (uint32_t)(c.bp.e);
    // 66ed:0b69  cmp eax, 0  [x122202]
    c.sub<32>(c.a.e, 0x0u, true);
    // 66ed:0b6d  jle 0xceb  [x122202]
    if ((c.zf || c.sf != c.of)) goto L67bbb;
L67a41:
    if (c.tracing) c.traceAt(0x67a41);
    // 66ed:0b71  cmp ecx, 0x13f  [x119368]
    c.sub<32>(c.c.e, 0x13fu, true);
    // 66ed:0b78  jge 0xceb  [x119368]
    if ((c.sf == c.of)) goto L67bbb;
L67a4c:
    if (c.tracing) c.traceAt(0x67a4c);
    // 66ed:0b7c  xor edi, edi  [x116630]
    c.di.e = (uint32_t)(c.logic<32>((c.di.e) ^ (c.di.e), false));
    // 66ed:0b7f  mov ecx, dword ptr gs:[edi]  [x116630]
    c.c.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0b84  lea eax, [edi + 4]  [x116630]
    c.a.e = (uint32_t)((uint32_t)(c.di.e + 0x4u));
    // 66ed:0b89  mov dword ptr [0x99], eax  [x116630]
    c.w32(c.dsb + (uint16_t)(0x99u), c.a.e);
    // 66ed:0b8d  lea ebx, [ecx - 1]  [x116630]
    c.b.e = (uint32_t)((uint32_t)(c.c.e + 0xffffffffu));
    // 66ed:0b92  lea eax, [eax + ebx*8]  [x116630]
    c.a.e = (uint32_t)((uint32_t)(c.a.e + c.b.e * 8));
    // 66ed:0b97  mov dword ptr [0x9d], eax  [x116630]
    c.w32(c.dsb + (uint16_t)(0x9du), c.a.e);
    // 66ed:0b9b  dec ecx  [x116630]
    c.c.e = (uint32_t)(c.dec<32>(c.c.e, false));
    // 66ed:0b9d  add edi, 8  [x116630]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, true));
    // 66ed:0ba1  mov eax, dword ptr gs:[edi]  [x116630]
    c.a.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0ba6  mov ebx, edi  [x116630]
    c.b.e = (uint32_t)(c.di.e);
    // 66ed:0ba9  mov ebp, eax  [x116630]
    c.bp.e = (uint32_t)(c.a.e);
L67a7c:
    if (c.tracing) c.traceAt(0x67a7c);
    // 66ed:0bac  add edi, 8  [x332905]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, 0x8u, false));
    // 66ed:0bb0  mov edx, dword ptr gs:[edi]  [x332905]
    c.dx_.e = (uint32_t)(c.r32(c.gsb + (uint32_t)(c.di.e)));
    // 66ed:0bb5  cmp ebp, edx  [x332905]
    c.sub<32>(c.bp.e, c.dx_.e, true);
    // 66ed:0bb8  jle 0xbc0  [x332905]
    if ((c.zf || c.sf != c.of)) goto L67a90;
L67a8a:
    if (c.tracing) c.traceAt(0x67a8a);
    // 66ed:0bba  mov ebp, edx  [x116791]
    c.bp.e = (uint32_t)(c.dx_.e);
    // 66ed:0bbd  mov ebx, edi  [x116791]
    c.b.e = (uint32_t)(c.di.e);
L67a90:
    if (c.tracing) c.traceAt(0x67a90);
    // 66ed:0bc0  cmp eax, edx  [x332905]
    c.sub<32>(c.a.e, c.dx_.e, true);
    // 66ed:0bc3  jge 0xbc8  [x332905]
    if ((c.sf == c.of)) goto L67a98;
L67a95:
    if (c.tracing) c.traceAt(0x67a95);
    // 66ed:0bc5  mov eax, edx  [x117171]
    c.a.e = (uint32_t)(c.dx_.e);
L67a98:
    if (c.tracing) c.traceAt(0x67a98);
    // 66ed:0bc8  loop 0xbac  [x332905]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67a7c;
L67a9a:
    if (c.tracing) c.traceAt(0x67a9a);
    // 66ed:0bca  mov ecx, ebp  [x116630]
    c.c.e = (uint32_t)(c.bp.e);
    // 66ed:0bcd  sub ebx, 4  [x116630]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x4u, false));
    // 66ed:0bd1  cmp ecx, 0xef  [x116630]
    c.sub<32>(c.c.e, 0xefu, true);
    // 66ed:0bd8  jg 0xceb  [x116630]
    if ((!c.zf && c.sf == c.of)) goto L67bbb;
L67aac:
    if (c.tracing) c.traceAt(0x67aac);
    // 66ed:0bdc  cmp eax, ecx  [x110282]
    c.sub<32>(c.a.e, c.c.e, true);
    // 66ed:0bdf  je 0xceb  [x110282]
    if (c.zf) goto L67bbb;
L67ab3:
    if (c.tracing) c.traceAt(0x67ab3);
    // 66ed:0be3  cmp ax, 0  [x110282]
    c.sub<16>(c.a.x, 0x0u, true);
    // 66ed:0be6  jl 0xceb  [x110282]
    if ((c.sf != c.of)) goto L67bbb;
L67aba:
    if (c.tracing) c.traceAt(0x67aba);
    // 66ed:0bea  imul eax, eax, 0x50  [x105085]
    c.a.e = (uint32_t)(c.imul<32>(c.a.e, 0x50u));
    // 66ed:0bee  cmp eax, 0x4ab0  [x105085]
    c.sub<32>(c.a.e, 0x4ab0u, true);
    // 66ed:0bf4  jle 0xbfc  [x105085]
    if ((c.zf || c.sf != c.of)) goto L67acc;
L67ac6:
    if (c.tracing) c.traceAt(0x67ac6);
    // 66ed:0bf6  mov eax, 0x4ab0  [x3840]
    c.a.e = (uint32_t)(0x4ab0u);
L67acc:
    if (c.tracing) c.traceAt(0x67acc);
    // 66ed:0bfc  mov word ptr cs:[0x6e1], ax  [x105085]
    c.w16(c.csb + (uint16_t)(0x6e1u), c.a.x);
    // 66ed:0c00  mov dword ptr [0x91], ebx  [x105085]
    c.w32(c.dsb + (uint16_t)(0x91u), c.b.e);
    // 66ed:0c05  mov dword ptr [0x95], ebx  [x105085]
    c.w32(c.dsb + (uint16_t)(0x95u), c.b.e);
    // 66ed:0c0a  cmp byte ptr [0xab], 2  [x105085]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xabu)), 0x2u, true);
    // 66ed:0c0f  je 0xc98  [x105085]
    if (c.zf) goto L67b68;
L67ae3:
    if (c.tracing) c.traceAt(0x67ae3);
    // 66ed:0c13  cmp byte ptr [0xab], 1  [x78625]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(0xabu)), 0x1u, true);
    // 66ed:0c18  jne 0xc84  [x78625]
    if (!c.zf) { t = 0x67b54u; goto dispatch; }
L67aea:
    if (c.tracing) c.traceAt(0x67aea);
    // 66ed:0c1a  mov ebx, dword ptr [0]  [x78625]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0u)));
    // 66ed:0c1f  mov bx, word ptr es:[bx]  [x78625]
    c.b.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.b.x)));
    // 66ed:0c22  mov edi, dword ptr es:[ebx + 0xc]  [x78625]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0xcu)));
    // 66ed:0c28  mov ecx, dword ptr es:[ebx + 8]  [x78625]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x8u)));
    // 66ed:0c2e  mov ebx, dword ptr es:[ebx + 4]  [x78625]
    c.b.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e + 0x4u)));
    // 66ed:0c34  imul eax, ebx, 0xffffdae7  [x78625]
    c.a.e = (uint32_t)(c.imul<32>(c.b.e, (c.r32(0x67b07))));
    // 66ed:0c3b  imul ebp, ecx, 0x894  [x78625]
    c.bp.e = (uint32_t)(c.imul<32>(c.c.e, (c.r32(0x67b0e))));
    // 66ed:0c42  add eax, ebp  [x78625]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:0c45  imul ebp, edi, 0x3371  [x78625]
    c.bp.e = (uint32_t)(c.imul<32>(c.di.e, (c.r32(0x67b18))));
    // 66ed:0c4c  add eax, ebp  [x78625]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.bp.e, false));
    // 66ed:0c4f  sar eax, 0xf  [x78625]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0xfu) & 31), false));
    // 66ed:0c53  add eax, 0x10  [x78625]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, 0x10u, false));
    // 66ed:0c57  sar eax, 1  [x78625]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0c5a  cmp eax, 0xf  [x78625]
    c.sub<32>(c.a.e, 0xfu, true);
    // 66ed:0c5e  jle 0xc66  [x78625]
    if ((c.zf || c.sf != c.of)) goto L67b36;
    c.notTranslated(0x67b30, "fall-through");
L67b36:
    if (c.tracing) c.traceAt(0x67b36);
    // 66ed:0c66  mov ebx, dword ptr [4]  [x78625]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:0c6b  dec ebx  [x78625]
    c.b.e = (uint32_t)(c.dec<32>(c.b.e, false));
    // 66ed:0c6d  shl ebx, 4  [x78625]
    c.b.e = (uint32_t)(c.shl<32>(c.b.e, (int)((0x4u) & 31), false));
    // 66ed:0c71  add eax, ebx  [x78625]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.b.e, false));
    // 66ed:0c74  mov ah, al  [x78625]
    c.a.h = (uint8_t)(c.a.l);
    // 66ed:0c76  mov cx, ax  [x78625]
    c.c.x = (uint16_t)(c.a.x);
    // 66ed:0c78  shl eax, 0x10  [x78625]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 66ed:0c7c  mov ax, cx  [x78625]
    c.a.x = (uint16_t)(c.c.x);
    // 66ed:0c7e  mov dword ptr [4], eax  [x78625]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
    // 66ed:0c82  jmp 0xcd8  [x78625]
    goto L67ba8;
L67b68:
    if (c.tracing) c.traceAt(0x67b68);
    // 66ed:0c98  mov ebx, dword ptr [0xba]  [x26460]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbau)));
    // 66ed:0c9d  sub ebx, 0x27100  [x26460]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, 0x27100u, false));
    // 66ed:0ca4  mov cl, byte ptr [0xbe]  [x26460]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xbeu)));
    // 66ed:0ca8  shr ebx, cl  [x26460]
    c.b.e = (uint32_t)(c.shr<32>(c.b.e, (int)(c.c.l & 31), false));
    // 66ed:0cab  cmp ebx, 0xf  [x26460]
    c.sub<32>(c.b.e, 0xfu, true);
    // 66ed:0caf  jle 0xcb7  [x26460]
    if ((c.zf || c.sf != c.of)) goto L67b87;
L67b81:
    if (c.tracing) c.traceAt(0x67b81);
    // 66ed:0cb1  mov ebx, 0xf  [x7111]
    c.b.e = (uint32_t)(0xfu);
L67b87:
    if (c.tracing) c.traceAt(0x67b87);
    // 66ed:0cb7  neg ebx  [x26460]
    c.b.e = (uint32_t)(c.neg<32>(c.b.e, false));
    // 66ed:0cba  add ebx, 0xf  [x26460]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, 0xfu, false));
    // 66ed:0cbe  mov eax, dword ptr [4]  [x26460]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x4u)));
    // 66ed:0cc2  dec eax  [x26460]
    c.a.e = (uint32_t)(c.dec<32>(c.a.e, false));
    // 66ed:0cc4  shl eax, 4  [x26460]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x4u) & 31), false));
    // 66ed:0cc8  add al, bl  [x26460]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.l, false));
    // 66ed:0cca  mov ah, al  [x26460]
    c.a.h = (uint8_t)(c.a.l);
    // 66ed:0ccc  mov cx, ax  [x26460]
    c.c.x = (uint16_t)(c.a.x);
    // 66ed:0cce  shl eax, 0x10  [x26460]
    c.a.e = (uint32_t)(c.shl<32>(c.a.e, (int)((0x10u) & 31), true));
    // 66ed:0cd2  mov ax, cx  [x26460]
    c.a.x = (uint16_t)(c.c.x);
    // 66ed:0cd4  mov dword ptr [4], eax  [x26460]
    c.w32(c.dsb + (uint16_t)(0x4u), c.a.e);
L67ba8:
    if (c.tracing) c.traceAt(0x67ba8);
    // 66ed:0cd8  mov ax, 0x6455  [x105085]
    c.a.x = (uint16_t)(0x6455u);
    // 66ed:0cdb  mov fs, ax  [x105085]
    c.loadFs(c.a.x);
    // 66ed:0cdd  mov cx, 0x54b5  [x105085]
    c.c.x = (uint16_t)(0x54b5u);
    // 66ed:0ce0  mov gs, cx  [x105085]
    c.loadGs(c.c.x);
    // 66ed:0ce2  mov ax, word ptr [0xb0]  [x105085]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xb0u)));
    // 66ed:0ce5  mov es, ax  [x105085]
    c.loadEs(c.a.x);
    // 66ed:0ce7  push cs  [x105085]
    c.push16(c.cs);
    // 66ed:0ce8  call 0x428  [x105085]
    c.push16(0xcebu); code_7(c, 0x672f8u); if (c.ip != 0xcebu) c.badReturn(0x67bb8);
L67bbb:
    if (c.tracing) c.traceAt(0x67bbb);
    // 66ed:0ceb  add dword ptr [0], 4  [x177222]
    c.w32(c.dsb + (uint16_t)(0u), c.add<32>(c.r32(c.dsb + (uint16_t)(0u)), 0x4u, false));
    // 66ed:0cf1  inc dword ptr [8]  [x177222]
    c.w32(c.dsb + (uint16_t)(0x8u), c.inc<32>(c.r32(c.dsb + (uint16_t)(0x8u)), false));
    // 66ed:0cf6  mov eax, dword ptr [0xc]  [x177222]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xcu)));
    // 66ed:0cfa  cmp dword ptr [8], eax  [x177222]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0x8u)), c.a.e, true);
    // 66ed:0cff  jne 0x9b0  [x177222]
    if (!c.zf) goto L67880;
L67bd3:
    if (c.tracing) c.traceAt(0x67bd3);
    // 66ed:0d03  retf   [x18969]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67bd4:
    if (c.tracing) c.traceAt(0x67bd4);
    // 66ed:0d04  add dword ptr [0x6d], 0x58  [x18969]
    c.w32(c.dsb + (uint16_t)(0x6du), c.add<32>(c.r32(c.dsb + (uint16_t)(0x6du)), 0x58u, false));
    // 66ed:0d0a  add dword ptr [0x71], 0x19c  [x18969]
    c.w32(c.dsb + (uint16_t)(0x71u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x71u)), 0x19cu, false));
    // 66ed:0d13  add dword ptr [0x75], 0  [x18969]
    c.w32(c.dsb + (uint16_t)(0x75u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x75u)), 0x0u, false));
    // 66ed:0d19  mov ax, 0x24f1  [x18969]
    c.a.x = (uint16_t)(0x24f1u);
    // 66ed:0d1c  mov es, ax  [x18969]
    c.loadEs(c.a.x);
    // 66ed:0d1e  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:0d23  mov edi, dword ptr [0x71]  [x18969]
    c.di.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 66ed:0d28  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:0d2b  add edi, edi  [x18969]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.di.e, false));
    // 66ed:0d2e  mov ebp, ebx  [x18969]
    c.bp.e = (uint32_t)(c.b.e);
    // 66ed:0d31  add ebx, edi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.di.e, false));
    // 66ed:0d34  sub ebp, edi  [x18969]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.di.e, false));
    // 66ed:0d37  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0d41  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0d4b  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0d4e  mov dword ptr [0x49], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x49u), c.a.e);
    // 66ed:0d52  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0d5c  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:0d66  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0d69  mov dword ptr [0x4d], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x4du), c.a.e);
    // 66ed:0d6d  mov ebx, edi  [x18969]
    c.b.e = (uint32_t)(c.di.e);
    // 66ed:0d70  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0d7a  mov dword ptr [0x51], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x51u), c.a.e);
    // 66ed:0d7e  mov ebp, dword ptr [0x75]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:0d83  add ebp, ebp  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0d86  mov eax, ebx  [x18969]
    c.a.e = (uint32_t)(c.b.e);
    // 66ed:0d89  sub ebx, ebp  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.bp.e, false));
    // 66ed:0d8c  add ebp, eax  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.a.e, false));
    // 66ed:0d8f  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0d99  sub eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:0da3  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0da6  mov dword ptr [0x5d], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x5du), c.a.e);
    // 66ed:0daa  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0db4  add eax, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0dbe  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0dc1  mov dword ptr [0x69], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x69u), c.a.e);
    // 66ed:0dc5  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:0dca  add ebx, dword ptr [0x71]  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x71u)), false));
    // 66ed:0dcf  sub ebx, dword ptr [0x75]  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0dd4  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:0dd7  mov eax, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0de1  mov ecx, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0deb  mov edx, ecx  [x18969]
    c.dx_.e = (uint32_t)(c.c.e);
    // 66ed:0dee  neg edx  [x18969]
    c.dx_.e = (uint32_t)(c.neg<32>(c.dx_.e, false));
    // 66ed:0df1  mov edi, eax  [x18969]
    c.di.e = (uint32_t)(c.a.e);
    // 66ed:0df4  mov esi, dword ptr [0x75]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:0df9  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:0dfc  add ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 66ed:0dff  add ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.si.e, false));
    // 66ed:0e02  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0e0c  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0e16  sub eax, esi  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:0e19  sub ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 66ed:0e1c  sub edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.bp.e, false));
    // 66ed:0e1f  add edi, esi  [x18969]
    c.di.e = (uint32_t)(c.add<32>(c.di.e, c.si.e, false));
    // 66ed:0e22  mov esi, dword ptr [0x71]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 66ed:0e27  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:0e2a  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:0e2d  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:0e30  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0e3a  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0e44  add eax, esi  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.si.e, false));
    // 66ed:0e47  add ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.bp.e, false));
    // 66ed:0e4a  add edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 66ed:0e4d  sub edi, esi  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 66ed:0e50  mov esi, dword ptr [0x75]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:0e55  add esi, esi  [x18969]
    c.si.e = (uint32_t)(c.add<32>(c.si.e, c.si.e, false));
    // 66ed:0e58  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:0e5b  sub ebx, esi  [x18969]
    c.b.e = (uint32_t)(c.sub<32>(c.b.e, c.si.e, false));
    // 66ed:0e5e  mov esi, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.si.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0e68  mov ebp, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.bp.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0e72  sub eax, esi  [x18969]
    c.a.e = (uint32_t)(c.sub<32>(c.a.e, c.si.e, false));
    // 66ed:0e75  sub ecx, ebp  [x18969]
    c.c.e = (uint32_t)(c.sub<32>(c.c.e, c.bp.e, false));
    // 66ed:0e78  add edx, ebp  [x18969]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.bp.e, false));
    // 66ed:0e7b  sub edi, esi  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.si.e, false));
    // 66ed:0e7e  sar eax, 2  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x2u) & 31), false));
    // 66ed:0e82  sar ecx, 2  [x18969]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x2u) & 31), false));
    // 66ed:0e86  sar edx, 2  [x18969]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x2u) & 31), false));
    // 66ed:0e8a  sar edi, 2  [x18969]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x2u) & 31), false));
    // 66ed:0e8e  mov dword ptr [0x55], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x55u), c.a.e);
    // 66ed:0e92  mov dword ptr [0x59], ecx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x59u), c.c.e);
    // 66ed:0e97  mov dword ptr [0x61], edx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x61u), c.dx_.e);
    // 66ed:0e9c  mov dword ptr [0x65], edi  [x18969]
    c.w32(c.dsb + (uint16_t)(0x65u), c.di.e);
    // 66ed:0ea1  mov ebx, dword ptr [0x6d]  [x18969]
    c.b.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:0ea6  mov ebp, ebx  [x18969]
    c.bp.e = (uint32_t)(c.b.e);
    // 66ed:0ea9  add ebx, dword ptr [0x75]  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0eae  sub ebp, dword ptr [0x75]  [x18969]
    c.bp.e = (uint32_t)(c.sub<32>(c.bp.e, c.r32(c.dsb + (uint16_t)(0x75u)), false));
    // 66ed:0eb3  add ebx, ebx  [x18969]
    c.b.e = (uint32_t)(c.add<32>(c.b.e, c.b.e, false));
    // 66ed:0eb6  add ebp, ebp  [x18969]
    c.bp.e = (uint32_t)(c.add<32>(c.bp.e, c.bp.e, false));
    // 66ed:0eb9  mov eax, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0ec3  add eax, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:0ecd  sar eax, 1  [x18969]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x1u) & 31), false));
    // 66ed:0ed0  add dword ptr [0x55], eax  [x18969]
    c.w32(c.dsb + (uint16_t)(0x55u), c.add<32>(c.r32(c.dsb + (uint16_t)(0x55u)), c.a.e, false));
    // 66ed:0ed5  mov ecx, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.c.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0edf  add ecx, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0ee9  sar ecx, 1  [x18969]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x1u) & 31), false));
    // 66ed:0eec  sub dword ptr [0x59], ecx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x59u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x59u)), c.c.e, false));
    // 66ed:0ef1  mov edx, dword ptr es:[ebx*2 + 0x3000]  [x18969]
    c.dx_.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3000u)));
    // 66ed:0efb  sub edx, dword ptr es:[ebp*2 + 0x3000]  [x18969]
    c.dx_.e = (uint32_t)(c.sub<32>(c.dx_.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3000u)), false));
    // 66ed:0f05  sar edx, 1  [x18969]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x1u) & 31), false));
    // 66ed:0f08  sub dword ptr [0x61], edx  [x18969]
    c.w32(c.dsb + (uint16_t)(0x61u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x61u)), c.dx_.e, false));
    // 66ed:0f0d  mov edi, dword ptr es:[ebx*2 + 0x3400]  [x18969]
    c.di.e = (uint32_t)(c.r32(c.esb + (uint32_t)(c.b.e * 2 + 0x3400u)));
    // 66ed:0f17  sub edi, dword ptr es:[ebp*2 + 0x3400]  [x18969]
    c.di.e = (uint32_t)(c.sub<32>(c.di.e, c.r32(c.esb + (uint32_t)(c.bp.e * 2 + 0x3400u)), false));
    // 66ed:0f21  sar edi, 1  [x18969]
    c.di.e = (uint32_t)(c.sar<32>(c.di.e, (int)((0x1u) & 31), false));
    // 66ed:0f24  sub dword ptr [0x65], edi  [x18969]
    c.w32(c.dsb + (uint16_t)(0x65u), c.sub<32>(c.r32(c.dsb + (uint16_t)(0x65u)), c.di.e, true));
    // 66ed:0f29  mov eax, dword ptr [0x61]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x61u)));
    // 66ed:0f2d  mov dword ptr cs:[0xc37], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0xc37u), c.a.e);
    // 66ed:0f32  mov eax, dword ptr [0x65]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x65u)));
    // 66ed:0f36  mov dword ptr cs:[0xc3e], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0xc3eu), c.a.e);
    // 66ed:0f3b  mov eax, dword ptr [0x69]  [x18969]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x69u)));
    // 66ed:0f3f  mov dword ptr cs:[0xc48], eax  [x18969]
    c.w32(c.csb + (uint16_t)(0xc48u), c.a.e);
    // 66ed:0f44  retf   [x18969]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67e15:
    if (c.tracing) c.traceAt(0x67e15);
    // 66ed:0f45  push ds  [x3]
    c.push16(c.ds);
    // 66ed:0f46  mov ds, ax  [x3]
    c.loadDs(c.a.x);
    // 66ed:0f48  mov dx, 0x3c7  [x3]
    c.dx_.x = (uint16_t)(0x3c7u);
    // 66ed:0f4b  mov al, 1  [x3]
    c.a.l = (uint8_t)(0x1u);
    // 66ed:0f4d  out dx, al  [x3]
    c.ip = 0xf4eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0f4e  cld   [x3]
    c.df = false;
    // 66ed:0f4f  mov dx, 0x3c8  [x3]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 66ed:0f52  mov al, 0  [x3]
    c.a.l = (uint8_t)(0x0u);
    // 66ed:0f54  out dx, al  [x3]
    c.ip = 0xf55u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0f55  mov cx, 0xff  [x3]
    c.c.x = (uint16_t)(0xffu);
L67e28:
    if (c.tracing) c.traceAt(0x67e28);
    // 66ed:0f58  mov dx, 0x3c9  [x765]
    c.dx_.x = (uint16_t)(0x3c9u);
    // 66ed:0f5b  lodsb al, byte ptr [si]  [x765]
    c.ip = 0xf5cu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 66ed:0f5c  out dx, al  [x765]
    c.ip = 0xf5du; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0f5d  lodsb al, byte ptr [si]  [x765]
    c.ip = 0xf5eu; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 66ed:0f5e  out dx, al  [x765]
    c.ip = 0xf5fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0f5f  lodsb al, byte ptr [si]  [x765]
    c.ip = 0xf60u; c.d32 = false; c.lods<8, false>(c.dsb, 0);
    // 66ed:0f60  out dx, al  [x765]
    c.ip = 0xf61u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:0f61  loop 0xf58  [x765]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L67e28;
L67e33:
    if (c.tracing) c.traceAt(0x67e33);
    // 66ed:0f63  pop ds  [x3]
    c.loadDs((uint16_t)c.pop16());
    // 66ed:0f64  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67e35:
    if (c.tracing) c.traceAt(0x67e35);
    // 66ed:0f65  mov ax, word ptr [0xa9]  [x1208]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:0f68  not ax  [x1208]
    c.a.x = (uint16_t)(~(c.a.x));
    // 66ed:0f6a  and ax, 0x500  [x1208]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:0f6d  shl ah, 4  [x1208]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), false));
    // 66ed:0f70  mov dx, 0x3d4  [x1208]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 66ed:0f73  mov al, 0xc  [x1208]
    c.a.l = (uint8_t)(0xcu);
    // 66ed:0f75  out dx, ax  [x1208]
    c.ip = 0xf76u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:0f76  mov ax, word ptr [0xa9]  [x1208]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:0f79  and ax, 0x500  [x1208]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:0f7c  add ax, 0xa000  [x1208]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 66ed:0f7f  mov word ptr [0xb0], ax  [x1208]
    c.w16(c.dsb + (uint16_t)(0xb0u), c.a.x);
    // 66ed:0f82  not word ptr [0xa9]  [x1208]
    c.w16(c.dsb + (uint16_t)(0xa9u), ~(c.r16(c.dsb + (uint16_t)(0xa9u))));
    // 66ed:0f86  retf   [x1208]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67e57:
    if (c.tracing) c.traceAt(0x67e57);
    // 66ed:0f87  mov ax, 0x5068  [x46580]
    c.a.x = (uint16_t)(0x5068u);
    // 66ed:0f8a  mov fs, ax  [x46580]
    c.loadFs(c.a.x);
    // 66ed:0f8c  mov bx, word ptr fs:[0]  [x46580]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 66ed:0f91  mov cx, word ptr [0xbf]  [x46580]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbfu)));
    // 66ed:0f95  shl cx, 2  [x46580]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 66ed:0f98  add bx, cx  [x46580]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 66ed:0f9a  mov bx, word ptr fs:[bx]  [x46580]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:0f9d  mov cx, word ptr fs:[bx]  [x46580]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:0fa0  mov dx, word ptr fs:[bx + 2]  [x46580]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 66ed:0fa4  mov word ptr [0x3d], cx  [x46580]
    c.w16(c.dsb + (uint16_t)(0x3du), c.c.x);
    // 66ed:0fa8  mov word ptr [0x3f], dx  [x46580]
    c.w16(c.dsb + (uint16_t)(0x3fu), c.dx_.x);
    // 66ed:0fac  mov ax, word ptr fs:[bx + 4]  [x46580]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 66ed:0fb0  movzx eax, ax  [x46580]
    c.a.e = (uint32_t)(c.a.x);
    // 66ed:0fb4  mov dword ptr [0], eax  [x46580]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 66ed:0fb8  mov di, word ptr [0xd6]  [x46580]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
L67e8c:
    if (c.tracing) c.traceAt(0x67e8c);
    // 66ed:0fbc  mov eax, dword ptr fs:[bx + 0x16]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 66ed:0fc1  mov edx, dword ptr fs:[bx + 0x1a]  [x46580]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 66ed:0fc6  mov ecx, dword ptr fs:[bx + 0x1e]  [x46580]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 66ed:0fcb  sar eax, 8  [x46580]
    c.a.e = (uint32_t)(c.sar<32>(c.a.e, (int)((0x8u) & 31), false));
    // 66ed:0fcf  sar edx, 8  [x46580]
    c.dx_.e = (uint32_t)(c.sar<32>(c.dx_.e, (int)((0x8u) & 31), false));
    // 66ed:0fd3  sar ecx, 8  [x46580]
    c.c.e = (uint32_t)(c.sar<32>(c.c.e, (int)((0x8u) & 31), false));
    // 66ed:0fd7  mov dword ptr [0x6d], eax  [x46580]
    c.w32(c.dsb + (uint16_t)(0x6du), c.a.e);
    // 66ed:0fdb  mov dword ptr [0x71], edx  [x46580]
    c.w32(c.dsb + (uint16_t)(0x71u), c.dx_.e);
    // 66ed:0fe0  mov dword ptr [0x75], ecx  [x46580]
    c.w32(c.dsb + (uint16_t)(0x75u), c.c.e);
    // 66ed:0fe5  mov eax, dword ptr fs:[bx + 0x16]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x16u)));
    // 66ed:0fea  mov edx, dword ptr fs:[bx + 0x1a]  [x46580]
    c.dx_.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1au)));
    // 66ed:0fef  mov ecx, dword ptr fs:[bx + 0x1e]  [x46580]
    c.c.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x1eu)));
    // 66ed:0ff4  add eax, dword ptr fs:[bx + 6]  [x46580]
    c.a.e = (uint32_t)(c.add<32>(c.a.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0x6u)), false));
    // 66ed:0ff9  add edx, dword ptr fs:[bx + 0xa]  [x46580]
    c.dx_.e = (uint32_t)(c.add<32>(c.dx_.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xau)), false));
    // 66ed:0ffe  add ecx, dword ptr fs:[bx + 0xe]  [x46580]
    c.c.e = (uint32_t)(c.add<32>(c.c.e, c.r32(c.fsb + (uint16_t)(c.b.x + 0xeu)), false));
    // 66ed:1003  mov ebp, 0x3ffff  [x46580]
    c.bp.e = (uint32_t)(0x3ffffu);
    // 66ed:1009  and eax, ebp  [x46580]
    c.a.e = (uint32_t)(c.logic<32>((c.a.e) & (c.bp.e), false));
    // 66ed:100c  and edx, ebp  [x46580]
    c.dx_.e = (uint32_t)(c.logic<32>((c.dx_.e) & (c.bp.e), false));
    // 66ed:100f  and ecx, ebp  [x46580]
    c.c.e = (uint32_t)(c.logic<32>((c.c.e) & (c.bp.e), false));
    // 66ed:1012  mov dword ptr fs:[bx + 0x16], eax  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x16u), c.a.e);
    // 66ed:1017  mov dword ptr fs:[bx + 0x1a], edx  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1au), c.dx_.e);
    // 66ed:101c  mov dword ptr fs:[bx + 0x1e], ecx  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x1eu), c.c.e);
    // 66ed:1021  mov eax, dword ptr fs:[bx + 0x2e]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)));
    // 66ed:1026  mov dword ptr [0xba], eax  [x46580]
    c.w32(c.dsb + (uint16_t)(0xbau), c.a.e);
    // 66ed:102a  mov eax, dword ptr fs:[bx + 0x3e]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3eu)));
    // 66ed:102f  add dword ptr fs:[bx + 0x2e], eax  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2eu), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)), c.a.e, false));
    // 66ed:1034  mov eax, dword ptr fs:[bx + 0x2a]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)));
    // 66ed:1039  mov dword ptr [0xb6], eax  [x46580]
    c.w32(c.dsb + (uint16_t)(0xb6u), c.a.e);
    // 66ed:103d  mov eax, dword ptr fs:[bx + 0x3a]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3au)));
    // 66ed:1042  add dword ptr fs:[bx + 0x2a], eax  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2au), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)), c.a.e, false));
    // 66ed:1047  mov eax, dword ptr fs:[bx + 0x26]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)));
    // 66ed:104c  mov dword ptr [0xb2], eax  [x46580]
    c.w32(c.dsb + (uint16_t)(0xb2u), c.a.e);
    // 66ed:1050  mov eax, dword ptr fs:[bx + 0x36]  [x46580]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x36u)));
    // 66ed:1055  add dword ptr fs:[bx + 0x26], eax  [x46580]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x26u), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)), c.a.e, true));
    // 66ed:105a  dec di  [x46580]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 66ed:105b  jne 0xfbc  [x46580]
    if (!c.zf) goto L67e8c;
L67f2f:
    if (c.tracing) c.traceAt(0x67f2f);
    // 66ed:105f  cmp dword ptr [0xba], 0x27100  [x46580]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbau)), 0x27100u, true);
    // 66ed:1068  jle 0x1081  [x46580]
    if ((c.zf || c.sf != c.of)) goto L67f51;
L67f3a:
    if (c.tracing) c.traceAt(0x67f3a);
    // 66ed:106a  mov eax, dword ptr [0xd1]  [x23829]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xd1u)));
    // 66ed:106e  cmp dword ptr [0xba], eax  [x23829]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbau)), c.a.e, true);
    // 66ed:1073  jge 0x1081  [x23829]
    if ((c.sf == c.of)) goto L67f51;
L67f45:
    if (c.tracing) c.traceAt(0x67f45);
    // 66ed:1075  push cs  [x18967]
    c.push16(c.cs);
    // 66ed:1076  call 0x333  [x18967]
    c.push16(0x1079u); code_7(c, 0x67203u); if (c.ip != 0x1079u) c.badReturn(0x67f46);
L67f49:
    if (c.tracing) c.traceAt(0x67f49);
    // 66ed:1079  push cs  [x18967]
    c.push16(c.cs);
    // 66ed:107a  call 0xd04  [x18967]
    c.push16(0x107du); code_7(c, 0x67bd4u); if (c.ip != 0x107du) c.badReturn(0x67f4a);
L67f4d:
    if (c.tracing) c.traceAt(0x67f4d);
    // 66ed:107d  push cs  [x18967]
    c.push16(c.cs);
    // 66ed:107e  call 0x84c  [x18967]
    c.push16(0x1081u); code_7(c, 0x6771cu); if (c.ip != 0x1081u) c.badReturn(0x67f4e);
L67f51:
    if (c.tracing) c.traceAt(0x67f51);
    // 66ed:1081  retf   [x46580]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L67f52:
    if (c.tracing) c.traceAt(0x67f52);
    // 66ed:1082  mov ax, 0x5068  [x2]
    c.a.x = (uint16_t)(0x5068u);
    // 66ed:1085  mov fs, ax  [x2]
    c.loadFs(c.a.x);
    // 66ed:1087  mov bx, word ptr fs:[0]  [x2]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 66ed:108c  mov cx, word ptr [0xbf]  [x2]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbfu)));
    // 66ed:1090  shl cx, 2  [x2]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 66ed:1093  add bx, cx  [x2]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, false));
    // 66ed:1095  mov bx, word ptr fs:[bx]  [x2]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:1098  mov cx, word ptr fs:[bx]  [x2]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:109b  mov dx, word ptr fs:[bx + 2]  [x2]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 66ed:109f  mov word ptr [0x3d], cx  [x2]
    c.w16(c.dsb + (uint16_t)(0x3du), c.c.x);
    // 66ed:10a3  mov word ptr [0x3f], dx  [x2]
    c.w16(c.dsb + (uint16_t)(0x3fu), c.dx_.x);
    // 66ed:10a7  mov ax, word ptr fs:[bx + 4]  [x2]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 66ed:10ab  movzx eax, ax  [x2]
    c.a.e = (uint32_t)(c.a.x);
    // 66ed:10af  mov dword ptr [0], eax  [x2]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 66ed:10b3  mov di, word ptr [0xd6]  [x2]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
L67f87:
    if (c.tracing) c.traceAt(0x67f87);
    // 66ed:10b7  mov dword ptr [0x6d], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x0u);
    // 66ed:10c0  mov dword ptr [0x71], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:10c9  mov dword ptr [0x75], 0  [x2]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:10d2  mov eax, dword ptr fs:[bx + 0x2e]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)));
    // 66ed:10d7  mov dword ptr [0xba], eax  [x2]
    c.w32(c.dsb + (uint16_t)(0xbau), c.a.e);
    // 66ed:10db  mov eax, dword ptr fs:[bx + 0x3e]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3eu)));
    // 66ed:10e0  add dword ptr fs:[bx + 0x2e], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2eu), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2eu)), c.a.e, false));
    // 66ed:10e5  mov eax, dword ptr fs:[bx + 0x2a]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)));
    // 66ed:10ea  mov dword ptr [0xb6], eax  [x2]
    c.w32(c.dsb + (uint16_t)(0xb6u), c.a.e);
    // 66ed:10ee  mov eax, dword ptr fs:[bx + 0x3a]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x3au)));
    // 66ed:10f3  add dword ptr fs:[bx + 0x2a], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x2au), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x2au)), c.a.e, false));
    // 66ed:10f8  mov eax, dword ptr fs:[bx + 0x26]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)));
    // 66ed:10fd  mov dword ptr [0xb2], eax  [x2]
    c.w32(c.dsb + (uint16_t)(0xb2u), c.a.e);
    // 66ed:1101  mov eax, dword ptr fs:[bx + 0x36]  [x2]
    c.a.e = (uint32_t)(c.r32(c.fsb + (uint16_t)(c.b.x + 0x36u)));
    // 66ed:1106  add dword ptr fs:[bx + 0x26], eax  [x2]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x26u), c.add<32>(c.r32(c.fsb + (uint16_t)(c.b.x + 0x26u)), c.a.e, true));
    // 66ed:110b  dec di  [x2]
    c.di.x = (uint16_t)(c.dec<16>(c.di.x, true));
    // 66ed:110c  jne 0x10b7  [x2]
    if (!c.zf) goto L67f87;
L67fde:
    if (c.tracing) c.traceAt(0x67fde);
    // 66ed:110e  cmp dword ptr [0xba], 0x27100  [x2]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbau)), 0x27100u, true);
    // 66ed:1117  jle 0x1081  [x2]
    if ((c.zf || c.sf != c.of)) goto L67f51;
L67feb:
    if (c.tracing) c.traceAt(0x67feb);
    // 66ed:111b  mov eax, dword ptr [0xd1]  [x2]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xd1u)));
    // 66ed:111f  cmp dword ptr [0xba], eax  [x2]
    c.sub<32>(c.r32(c.dsb + (uint16_t)(0xbau)), c.a.e, true);
    // 66ed:1124  jge 0x1132  [x2]
    if ((c.sf == c.of)) goto L68002;
L67ff6:
    if (c.tracing) c.traceAt(0x67ff6);
    // 66ed:1126  push cs  [x2]
    c.push16(c.cs);
    // 66ed:1127  call 0x333  [x2]
    c.push16(0x112au); code_7(c, 0x67203u); if (c.ip != 0x112au) c.badReturn(0x67ff7);
L67ffa:
    if (c.tracing) c.traceAt(0x67ffa);
    // 66ed:112a  push cs  [x2]
    c.push16(c.cs);
    // 66ed:112b  call 0xd04  [x2]
    c.push16(0x112eu); code_7(c, 0x67bd4u); if (c.ip != 0x112eu) c.badReturn(0x67ffb);
L67ffe:
    if (c.tracing) c.traceAt(0x67ffe);
    // 66ed:112e  push cs  [x2]
    c.push16(c.cs);
    // 66ed:112f  call 0x84c  [x2]
    c.push16(0x1132u); code_7(c, 0x6771cu); if (c.ip != 0x1132u) c.badReturn(0x67fff);
L68002:
    if (c.tracing) c.traceAt(0x68002);
    // 66ed:1132  retf   [x2]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L68003:
    if (c.tracing) c.traceAt(0x68003);
    // 66ed:1133  mov ax, 0x5068  [x7]
    c.a.x = (uint16_t)(0x5068u);
    // 66ed:1136  mov fs, ax  [x7]
    c.loadFs(c.a.x);
    // 66ed:1138  mov bx, word ptr fs:[0]  [x7]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(0u)));
    // 66ed:113d  mov cx, word ptr [0xbf]  [x7]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xbfu)));
    // 66ed:1141  shl cx, 2  [x7]
    c.c.x = (uint16_t)(c.shl<16>(c.c.x, (int)((0x2u) & 31), false));
    // 66ed:1144  add bx, cx  [x7]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.c.x, true));
    // 66ed:1146  mov bx, word ptr fs:[bx]  [x7]
    c.b.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:1149  mov cx, word ptr fs:[bx]  [x7]
    c.c.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x)));
    // 66ed:114c  mov dx, word ptr fs:[bx + 2]  [x7]
    c.dx_.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x2u)));
    // 66ed:1150  mov word ptr [0x3d], cx  [x7]
    c.w16(c.dsb + (uint16_t)(0x3du), c.c.x);
    // 66ed:1154  mov word ptr [0x3f], dx  [x7]
    c.w16(c.dsb + (uint16_t)(0x3fu), c.dx_.x);
    // 66ed:1158  mov ax, word ptr fs:[bx + 4]  [x7]
    c.a.x = (uint16_t)(c.r16(c.fsb + (uint16_t)(c.b.x + 0x4u)));
    // 66ed:115c  movzx eax, ax  [x7]
    c.a.e = (uint32_t)(c.a.x);
    // 66ed:1160  mov dword ptr [0], eax  [x7]
    c.w32(c.dsb + (uint16_t)(0u), c.a.e);
    // 66ed:1164  mov eax, dword ptr [0x6d]  [x7]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x6du)));
    // 66ed:1168  mov dword ptr fs:[bx + 6], eax  [x7]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x6u), c.a.e);
    // 66ed:116d  mov eax, dword ptr [0x71]  [x7]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x71u)));
    // 66ed:1171  mov dword ptr fs:[bx + 0xa], eax  [x7]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0xau), c.a.e);
    // 66ed:1176  mov eax, dword ptr [0x75]  [x7]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0x75u)));
    // 66ed:117a  mov dword ptr fs:[bx + 0xe], eax  [x7]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0xeu), c.a.e);
    // 66ed:117f  mov eax, dword ptr [0xba]  [x7]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xbau)));
    // 66ed:1183  mov dword ptr fs:[bx + 0x3e], eax  [x7]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x3eu), c.a.e);
    // 66ed:1188  mov eax, dword ptr [0xb6]  [x7]
    c.a.e = (uint32_t)(c.r32(c.dsb + (uint16_t)(0xb6u)));
    // 66ed:118c  mov dword ptr fs:[bx + 0x3a], eax  [x7]
    c.w32(c.fsb + (uint16_t)(c.b.x + 0x3au), c.a.e);
    // 66ed:1191  retf   [x7]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L68062:
    if (c.tracing) c.traceAt(0x68062);
    // 66ed:1192  xor di, di  [x12]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 66ed:1194  mov ax, 0  [x12]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:1197  add al, bh  [x12]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.h, true));
    // 66ed:1199  mov si, ax  [x12]
    c.si.x = (uint16_t)(c.a.x);
    // 66ed:119b  mov ah, bl  [x12]
    c.a.h = (uint8_t)(c.b.l);
    // 66ed:119d  mov al, 2  [x12]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:119f  mov dx, 0x3c4  [x12]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:11a2  out dx, ax  [x12]
    c.ip = 0x11a3u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:11a3  mov cx, 0x3e80  [x12]
    c.c.x = (uint16_t)(0x3e80u);
L68076:
    if (c.tracing) c.traceAt(0x68076);
    // 66ed:11a6  mov al, byte ptr fs:[si]  [x192000]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 66ed:11a9  stosb byte ptr es:[di], al  [x192000]
    c.stos<8, false>(0);
    // 66ed:11aa  add si, 4  [x192000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 66ed:11ad  loop 0x11a6  [x192000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L68076;
L6807f:
    if (c.tracing) c.traceAt(0x6807f);
    // 66ed:11af  inc bh  [x12]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 66ed:11b1  shl bl, 1  [x12]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 66ed:11b3  cmp bl, 0x10  [x12]
    c.sub<8>(c.b.l, 0x10u, true);
    // 66ed:11b6  jb 0x1192  [x12]
    if (c.cf) goto L68062;
L68088:
    if (c.tracing) c.traceAt(0x68088);
    // 66ed:11b8  retf   [x3]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
L68089:
    if (c.tracing) c.traceAt(0x68089);
    // 66ed:11b9  mov ax, 0x64ce  [x1]
    c.a.x = (uint16_t)(0x64ceu);
    // 66ed:11bc  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 66ed:11be  mov bx, 0xa  [x1]
    c.b.x = (uint16_t)(0xau);
    // 66ed:11c1  mov ax, 2  [x1]
    c.a.x = (uint16_t)(0x2u);
    // 66ed:11c4  int 0xff  [x1]
    c.ip = 0x11c6u; c.d32 = false; c.intr(0xff, 0x11c6u);
L68096:
    if (c.tracing) c.traceAt(0x68096);
    // 66ed:11c6  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 66ed:11c9  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 66ed:11cb  out dx, al  [x1]
    c.ip = 0x11ccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:11cc  push cs  [x1]
    c.push16(c.cs);
    // 66ed:11cd  call 0x7d6  [x1]
    c.push16(0x11d0u); code_7(c, 0x676a6u); if (c.ip != 0x11d0u) c.badReturn(0x6809d);
L680a0:
    if (c.tracing) c.traceAt(0x680a0);
    // 66ed:11d0  mov ax, 0x52c1  [x1]
    c.a.x = (uint16_t)(0x52c1u);
    // 66ed:11d3  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 66ed:11d6  mov si, 0x41  [x1]
    c.si.x = (uint16_t)(0x41u);
    // 66ed:11d9  mov word ptr [si], bx  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.b.x);
    // 66ed:11db  mov word ptr [si + 2], ax  [x1]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0x2u), c.a.x);
    // 66ed:11de  mov ax, 0x3e3b  [x1]
    c.a.x = (uint16_t)(0x3e3bu);
    // 66ed:11e1  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:11e4  push cs  [x1]
    c.push16(c.cs);
    // 66ed:11e5  call 0xf45  [x1]
    c.push16(0x11e8u); code_7(c, 0x67e15u); if (c.ip != 0x11e8u) c.badReturn(0x680b5);
L680b8:
    if (c.tracing) c.traceAt(0x680b8);
    // 66ed:11e8  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 66ed:11ea  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:11ec  mov di, 0xd8  [x1]
    c.di.x = (uint16_t)(0xd8u);
    // 66ed:11ef  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:11f2  mov ax, 0x3e3b  [x1]
    c.a.x = (uint16_t)(0x3e3bu);
    // 66ed:11f5  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
    // 66ed:11f8  push cs  [x1]
    c.push16(c.cs);
    // 66ed:11f9  call 0  [x1]
    c.push16(0x11fcu); code_7(c, 0x66ed0u); if (c.ip != 0x11fcu) c.badReturn(0x680c9);
L680cc:
    if (c.tracing) c.traceAt(0x680cc);
    // 66ed:11fc  mov ax, ds  [x1]
    c.a.x = (uint16_t)(c.ds);
    // 66ed:11fe  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:1200  mov di, 0x3d8  [x1]
    c.di.x = (uint16_t)(0x3d8u);
    // 66ed:1203  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:1206  mov ax, 0x3e3b  [x1]
    c.a.x = (uint16_t)(0x3e3bu);
    // 66ed:1209  mov cx, 0x180  [x1]
    c.c.x = (uint16_t)(0x180u);
    // 66ed:120c  push cs  [x1]
    c.push16(c.cs);
    // 66ed:120d  call 0  [x1]
    c.push16(0x1210u); code_7(c, 0x66ed0u); if (c.ip != 0x1210u) c.badReturn(0x680dd);
L680e0:
    if (c.tracing) c.traceAt(0x680e0);
    // 66ed:1210  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 66ed:1212  mov di, 0x3d8  [x1]
    c.di.x = (uint16_t)(0x3d8u);
    // 66ed:1215  add di, 0x150  [x1]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x150u, true));
    // 66ed:1219  mov cx, 0x1ad  [x1]
    c.c.x = (uint16_t)(0x1adu);
L680ec:
    if (c.tracing) c.traceAt(0x680ec);
    // 66ed:121c  rep stosb byte ptr es:[di], al  [x430]
    c.stos<8, false>(1);
L680ee:
    if (c.tracing) c.traceAt(0x680ee);
    // 66ed:121e  mov word ptr [0x21dd], 0xd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21ddu), 0xd8u);
    // 66ed:1224  mov word ptr [0x21df], 0x12d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21dfu), 0x12d8u);
    // 66ed:122a  mov word ptr [0x21e1], 0x15d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e1u), 0x15d8u);
    // 66ed:1230  mov word ptr [0x21e3], 0x1bd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e3u), 0x1bd8u);
    // 66ed:1236  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 66ed:1239  mov byte ptr [0x21dc], 0x3d  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dcu), 0x3du);
    // 66ed:123e  push cs  [x1]
    c.push16(c.cs);
    // 66ed:123f  call 8  [x1]
    c.push16(0x1242u); code_7(c, 0x66ed8u); if (c.ip != 0x1242u) c.badReturn(0x6810f);
L68112:
    if (c.tracing) c.traceAt(0x68112);
    // 66ed:1242  mov word ptr [0x21dd], 0xd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21ddu), 0xd8u);
    // 66ed:1248  mov word ptr [0x21df], 0x3d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21dfu), 0x3d8u);
    // 66ed:124e  mov word ptr [0x21e1], 0x6d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e1u), 0x6d8u);
    // 66ed:1254  mov word ptr [0x21e3], 0xcd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e3u), 0xcd8u);
    // 66ed:125a  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 66ed:125d  mov byte ptr [0x21dc], 0x3d  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dcu), 0x3du);
    // 66ed:1262  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1263  call 8  [x1]
    c.push16(0x1266u); code_7(c, 0x66ed8u); if (c.ip != 0x1266u) c.badReturn(0x68133);
L68136:
    if (c.tracing) c.traceAt(0x68136);
    // 66ed:1266  mov ax, 0x64ce  [x1]
    c.a.x = (uint16_t)(0x64ceu);
    // 66ed:1269  mov si, 0xd8  [x1]
    c.si.x = (uint16_t)(0xd8u);
    // 66ed:126c  push cs  [x1]
    c.push16(c.cs);
    // 66ed:126d  call 0xf45  [x1]
    c.push16(0x1270u); code_7(c, 0x67e15u); if (c.ip != 0x1270u) c.badReturn(0x6813d);
L68140:
    if (c.tracing) c.traceAt(0x68140);
    // 66ed:1270  mov ax, 0x2cf2  [x1]
    c.a.x = (uint16_t)(0x2cf2u);
    // 66ed:1273  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 66ed:1275  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 66ed:1278  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:127a  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 66ed:127c  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 66ed:127e  push cs  [x1]
    c.push16(c.cs);
    // 66ed:127f  call 0x1192  [x1]
    c.push16(0x1282u); code_7(c, 0x68062u); if (c.ip != 0x1282u) c.badReturn(0x6814f);
L68152:
    if (c.tracing) c.traceAt(0x68152);
    // 66ed:1282  mov ax, 0x2cf2  [x1]
    c.a.x = (uint16_t)(0x2cf2u);
    // 66ed:1285  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 66ed:1287  mov ax, 0xa500  [x1]
    c.a.x = (uint16_t)(0xa500u);
    // 66ed:128a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:128c  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 66ed:128e  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 66ed:1290  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1291  call 0x1192  [x1]
    c.push16(0x1294u); code_7(c, 0x68062u); if (c.ip != 0x1294u) c.badReturn(0x68161);
L68164:
    if (c.tracing) c.traceAt(0x68164);
    // 66ed:1294  mov ax, 0x2cf2  [x1]
    c.a.x = (uint16_t)(0x2cf2u);
    // 66ed:1297  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 66ed:1299  mov ax, 0xaa00  [x1]
    c.a.x = (uint16_t)(0xaa00u);
    // 66ed:129c  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:129e  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 66ed:12a0  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
    // 66ed:12a2  push cs  [x1]
    c.push16(c.cs);
    // 66ed:12a3  call 0x1192  [x1]
    c.push16(0x12a6u); code_7(c, 0x68062u); if (c.ip != 0x12a6u) c.badReturn(0x68173);
L68176:
    if (c.tracing) c.traceAt(0x68176);
    // 66ed:12a6  mov ax, 0x40c0  [x1]
    c.a.x = (uint16_t)(0x40c0u);
    // 66ed:12a9  mov fs, ax  [x1]
    c.loadFs(c.a.x);
    // 66ed:12ab  mov ax, 0xaa00  [x1]
    c.a.x = (uint16_t)(0xaa00u);
    // 66ed:12ae  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:12b0  mov bl, 1  [x1]
    c.b.l = (uint8_t)(0x1u);
    // 66ed:12b2  xor bh, bh  [x1]
    c.b.h = (uint8_t)(c.logic<8>((c.b.h) ^ (c.b.h), true));
L68184:
    if (c.tracing) c.traceAt(0x68184);
    // 66ed:12b4  mov di, 0x3e80  [x4]
    c.di.x = (uint16_t)(0x3e80u);
    // 66ed:12b7  mov ax, 0  [x4]
    c.a.x = (uint16_t)(0x0u);
    // 66ed:12ba  add al, bh  [x4]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.b.h, true));
    // 66ed:12bc  mov si, ax  [x4]
    c.si.x = (uint16_t)(c.a.x);
    // 66ed:12be  mov ah, bl  [x4]
    c.a.h = (uint8_t)(c.b.l);
    // 66ed:12c0  mov al, 2  [x4]
    c.a.l = (uint8_t)(0x2u);
    // 66ed:12c2  mov dx, 0x3c4  [x4]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 66ed:12c5  out dx, ax  [x4]
    c.ip = 0x12c6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:12c6  mov cx, 0x4b0  [x4]
    c.c.x = (uint16_t)(0x4b0u);
L68199:
    if (c.tracing) c.traceAt(0x68199);
    // 66ed:12c9  mov al, byte ptr fs:[si]  [x4800]
    c.a.l = (uint8_t)(c.r8(c.fsb + (uint16_t)(c.si.x)));
    // 66ed:12cc  stosb byte ptr es:[di], al  [x4800]
    c.stos<8, false>(0);
    // 66ed:12cd  add si, 4  [x4800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, true));
    // 66ed:12d0  loop 0x12c9  [x4800]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L68199;
L681a2:
    if (c.tracing) c.traceAt(0x681a2);
    // 66ed:12d2  inc bh  [x4]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 66ed:12d4  shl bl, 1  [x4]
    c.b.l = (uint8_t)(c.shl<8>(c.b.l, (int)((0x1u) & 31), false));
    // 66ed:12d6  cmp bl, 0x10  [x4]
    c.sub<8>(c.b.l, 0x10u, true);
    // 66ed:12d9  jb 0x12b4  [x4]
    if (c.cf) goto L68184;
L681ab:
    if (c.tracing) c.traceAt(0x681ab);
    // 66ed:12db  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:12e4  mov word ptr [0xb0], 0xa000  [x1]
    c.w16(c.dsb + (uint16_t)(0xb0u), 0xa000u);
    // 66ed:12ea  mov word ptr [0xa9], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xa9u), 0x0u);
    // 66ed:12f0  mov ax, word ptr [0xa9]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:12f3  not ax  [x1]
    c.a.x = (uint16_t)(~(c.a.x));
    // 66ed:12f5  and ax, 0x500  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:12f8  shl ah, 4  [x1]
    c.a.h = (uint8_t)(c.shl<8>(c.a.h, (int)((0x4u) & 31), false));
    // 66ed:12fb  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 66ed:12fe  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 66ed:1300  out dx, ax  [x1]
    c.ip = 0x1301u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 66ed:1301  mov ax, word ptr [0xa9]  [x1]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xa9u)));
    // 66ed:1304  and ax, 0x500  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) & (0x500u), false));
    // 66ed:1307  add ax, 0xa000  [x1]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0xa000u, true));
    // 66ed:130a  mov word ptr [0xb0], ax  [x1]
    c.w16(c.dsb + (uint16_t)(0xb0u), c.a.x);
    // 66ed:130d  not word ptr [0xa9]  [x1]
    c.w16(c.dsb + (uint16_t)(0xa9u), ~(c.r16(c.dsb + (uint16_t)(0xa9u))));
    // 66ed:1311  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1312  call 0x6ea  [x1]
    c.push16(0x1315u); code_7(c, 0x675bau); if (c.ip != 0x1315u) c.badReturn(0x681e2);
L681e5:
    if (c.tracing) c.traceAt(0x681e5);
    // 66ed:1315  mov word ptr [0xd6], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xd6u), 0x1u);
L681eb:
    if (c.tracing) c.traceAt(0x681eb);
    // 66ed:131b  mov bx, 0xe  [x141]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:131e  int 0xff  [x141]
    c.ip = 0x1320u; c.d32 = false; c.intr(0xff, 0x1320u);
L681f0:
    if (c.tracing) c.traceAt(0x681f0);
    // 66ed:1320  mov bx, 0  [x141]
    c.b.x = (uint16_t)(0x0u);
    // 66ed:1323  int 0xff  [x141]
    c.ip = 0x1325u; c.d32 = false; c.intr(0xff, 0x1325u);
L681f5:
    if (c.tracing) c.traceAt(0x681f5);
    // 66ed:1325  cmp ax, 0xa03  [x141]
    c.sub<16>(c.a.x, 0xa03u, true);
    // 66ed:1328  jl 0x131b  [x141]
    if ((c.sf != c.of)) goto L681eb;
L681fa:
    if (c.tracing) c.traceAt(0x681fa);
    // 66ed:132a  mov dx, 0x3c6  [x1]
    c.dx_.x = (uint16_t)(0x3c6u);
    // 66ed:132d  mov al, 0xff  [x1]
    c.a.l = (uint8_t)(0xffu);
    // 66ed:132f  out dx, al  [x1]
    c.ip = 0x1330u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 66ed:1330  mov dword ptr [0xd1], 0x4c4b40  [x1]
    c.w32(c.dsb + (uint16_t)(0xd1u), 0x4c4b40u);
    // 66ed:1339  mov byte ptr [0xbe], 0x12  [x1]
    c.w8(c.dsb + (uint16_t)(0xbeu), 0x12u);
    // 66ed:133e  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:1344  mov dword ptr [0x6d], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x0u);
    // 66ed:134d  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:1356  mov dword ptr [0x75], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:135f  mov dword ptr [0xba], 0x834  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x834u);
    // 66ed:1368  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:1371  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1372  call 0x1133  [x1]
    c.push16(0x1375u); code_7(c, 0x68003u); if (c.ip != 0x1375u) c.badReturn(0x68242);
L68245:
    if (c.tracing) c.traceAt(0x68245);
    // 66ed:1375  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L6824b:
    if (c.tracing) c.traceAt(0x6824b);
    // 66ed:137b  push cs  [x181]
    c.push16(c.cs);
    // 66ed:137c  call 0x6ea  [x181]
    c.push16(0x137fu); code_7(c, 0x675bau); if (c.ip != 0x137fu) c.badReturn(0x6824c);
L6824f:
    if (c.tracing) c.traceAt(0x6824f);
    // 66ed:137f  mov word ptr [0xbf], 0xa  [x181]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0xau);
L68255:
    if (c.tracing) c.traceAt(0x68255);
    // 66ed:1385  push cs  [x18281]
    c.push16(c.cs);
    // 66ed:1386  call 0xf87  [x18281]
    c.push16(0x1389u); code_7(c, 0x67e57u); if (c.ip != 0x1389u) c.badReturn(0x68256);
L68259:
    if (c.tracing) c.traceAt(0x68259);
    // 66ed:1389  inc word ptr [0xbf]  [x18281]
    c.w16(c.dsb + (uint16_t)(0xbfu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), false));
    // 66ed:138d  cmp word ptr [0xbf], 0x6e  [x18281]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), 0x6eu, true);
    // 66ed:1392  jle 0x1385  [x18281]
    if ((c.zf || c.sf != c.of)) goto L68255;
L68264:
    if (c.tracing) c.traceAt(0x68264);
    // 66ed:1394  mov word ptr [0xbf], 0  [x181]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:139a  push cs  [x181]
    c.push16(c.cs);
    // 66ed:139b  call 0xf87  [x181]
    c.push16(0x139eu); code_7(c, 0x67e57u); if (c.ip != 0x139eu) c.badReturn(0x6826b);
L6826e:
    if (c.tracing) c.traceAt(0x6826e);
    // 66ed:139e  push cs  [x181]
    c.push16(c.cs);
    // 66ed:139f  call 0xf65  [x181]
    c.push16(0x13a2u); code_7(c, 0x67e35u); if (c.ip != 0x13a2u) c.badReturn(0x6826f);
L68272:
    if (c.tracing) c.traceAt(0x68272);
    // 66ed:13a2  mov bx, 0xe  [x181]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:13a5  int 0xff  [x181]
    c.ip = 0x13a7u; c.d32 = false; c.intr(0xff, 0x13a7u);
L68277:
    if (c.tracing) c.traceAt(0x68277);
    // 66ed:13a7  mov word ptr [0xd6], ax  [x181]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:13aa  mov ax, word ptr [0xd6]  [x181]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:13ad  add word ptr [0xcf], ax  [x181]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:13b1  cmp word ptr [0xcf], 0xb4  [x181]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0xb4u, true);
    // 66ed:13b7  jbe 0x137b  [x181]
    if ((c.cf || c.zf)) goto L6824b;
L68289:
    if (c.tracing) c.traceAt(0x68289);
    // 66ed:13b9  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:13bf  mov dword ptr [0x6d], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x0u);
    // 66ed:13c8  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:13d1  mov dword ptr [0x75], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:13da  mov dword ptr [0xba], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x0u);
    // 66ed:13e3  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:13ec  push cs  [x1]
    c.push16(c.cs);
    // 66ed:13ed  call 0x1133  [x1]
    c.push16(0x13f0u); code_7(c, 0x68003u); if (c.ip != 0x13f0u) c.badReturn(0x682bd);
L682c0:
    if (c.tracing) c.traceAt(0x682c0);
    // 66ed:13f0  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L682c6:
    if (c.tracing) c.traceAt(0x682c6);
    // 66ed:13f6  push cs  [x181]
    c.push16(c.cs);
    // 66ed:13f7  call 0x6ea  [x181]
    c.push16(0x13fau); code_7(c, 0x675bau); if (c.ip != 0x13fau) c.badReturn(0x682c7);
L682ca:
    if (c.tracing) c.traceAt(0x682ca);
    // 66ed:13fa  mov word ptr [0xbf], 0xa  [x181]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0xau);
L682d0:
    if (c.tracing) c.traceAt(0x682d0);
    // 66ed:1400  push cs  [x18281]
    c.push16(c.cs);
    // 66ed:1401  call 0xf87  [x18281]
    c.push16(0x1404u); code_7(c, 0x67e57u); if (c.ip != 0x1404u) c.badReturn(0x682d1);
L682d4:
    if (c.tracing) c.traceAt(0x682d4);
    // 66ed:1404  inc word ptr [0xbf]  [x18281]
    c.w16(c.dsb + (uint16_t)(0xbfu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), false));
    // 66ed:1408  cmp word ptr [0xbf], 0x6e  [x18281]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), 0x6eu, true);
    // 66ed:140d  jle 0x1400  [x18281]
    if ((c.zf || c.sf != c.of)) goto L682d0;
L682df:
    if (c.tracing) c.traceAt(0x682df);
    // 66ed:140f  mov word ptr [0xbf], 0  [x181]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:1415  push cs  [x181]
    c.push16(c.cs);
    // 66ed:1416  call 0xf87  [x181]
    c.push16(0x1419u); code_7(c, 0x67e57u); if (c.ip != 0x1419u) c.badReturn(0x682e6);
L682e9:
    if (c.tracing) c.traceAt(0x682e9);
    // 66ed:1419  push cs  [x181]
    c.push16(c.cs);
    // 66ed:141a  call 0xf65  [x181]
    c.push16(0x141du); code_7(c, 0x67e35u); if (c.ip != 0x141du) c.badReturn(0x682ea);
L682ed:
    if (c.tracing) c.traceAt(0x682ed);
    // 66ed:141d  mov bx, 0xe  [x181]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:1420  int 0xff  [x181]
    c.ip = 0x1422u; c.d32 = false; c.intr(0xff, 0x1422u);
L682f2:
    if (c.tracing) c.traceAt(0x682f2);
    // 66ed:1422  mov word ptr [0xd6], ax  [x181]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:1425  mov ax, word ptr [0xd6]  [x181]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:1428  add word ptr [0xcf], ax  [x181]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:142c  cmp word ptr [0xcf], 0xb4  [x181]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0xb4u, true);
    // 66ed:1432  jbe 0x13f6  [x181]
    if ((c.cf || c.zf)) goto L682c6;
L68304:
    if (c.tracing) c.traceAt(0x68304);
    // 66ed:1434  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:143a  mov dword ptr [0x6d], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x0u);
    // 66ed:1443  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:144c  mov dword ptr [0x75], 0xffffffb5  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0xffffffb5u);
    // 66ed:1455  mov dword ptr [0xba], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x0u);
    // 66ed:145e  mov dword ptr [0xb6], 0xfff6d840  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0xfff6d840u);
    // 66ed:1467  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1468  call 0x1133  [x1]
    c.push16(0x146bu); code_7(c, 0x68003u); if (c.ip != 0x146bu) c.badReturn(0x68338);
L6833b:
    if (c.tracing) c.traceAt(0x6833b);
    // 66ed:146b  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
    // 66ed:1471  mov byte ptr [0x21db], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dbu), 0x0u);
    // 66ed:1476  mov byte ptr [0x21da], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dau), 0x0u);
L6834b:
    if (c.tracing) c.traceAt(0x6834b);
    // 66ed:147b  push cs  [x61]
    c.push16(c.cs);
    // 66ed:147c  call 0x6ea  [x61]
    c.push16(0x147fu); code_7(c, 0x675bau); if (c.ip != 0x147fu) c.badReturn(0x6834c);
L6834f:
    if (c.tracing) c.traceAt(0x6834f);
    // 66ed:147f  mov word ptr [0xbf], 0xa  [x61]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0xau);
L68355:
    if (c.tracing) c.traceAt(0x68355);
    // 66ed:1485  push cs  [x6161]
    c.push16(c.cs);
    // 66ed:1486  call 0xf87  [x6161]
    c.push16(0x1489u); code_7(c, 0x67e57u); if (c.ip != 0x1489u) c.badReturn(0x68356);
L68359:
    if (c.tracing) c.traceAt(0x68359);
    // 66ed:1489  inc word ptr [0xbf]  [x6161]
    c.w16(c.dsb + (uint16_t)(0xbfu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), false));
    // 66ed:148d  cmp word ptr [0xbf], 0x6e  [x6161]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xbfu)), 0x6eu, true);
    // 66ed:1492  jle 0x1485  [x6161]
    if ((c.zf || c.sf != c.of)) goto L68355;
L68364:
    if (c.tracing) c.traceAt(0x68364);
    // 66ed:1494  mov word ptr [0xbf], 0  [x61]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:149a  push cs  [x61]
    c.push16(c.cs);
    // 66ed:149b  call 0xf87  [x61]
    c.push16(0x149eu); code_7(c, 0x67e57u); if (c.ip != 0x149eu) c.badReturn(0x6836b);
L6836e:
    if (c.tracing) c.traceAt(0x6836e);
    // 66ed:149e  push cs  [x61]
    c.push16(c.cs);
    // 66ed:149f  call 0xf65  [x61]
    c.push16(0x14a2u); code_7(c, 0x67e35u); if (c.ip != 0x14a2u) c.badReturn(0x6836f);
L68372:
    if (c.tracing) c.traceAt(0x68372);
    // 66ed:14a2  mov bx, 0xe  [x61]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:14a5  int 0xff  [x61]
    c.ip = 0x14a7u; c.d32 = false; c.intr(0xff, 0x14a7u);
L68377:
    if (c.tracing) c.traceAt(0x68377);
    // 66ed:14a7  mov word ptr [0xd6], ax  [x61]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:14aa  push cs  [x61]
    c.push16(c.cs);
    // 66ed:14ab  call 0x4f  [x61]
    c.push16(0x14aeu); code_7(c, 0x66f1fu); if (c.ip != 0x14aeu) c.badReturn(0x6837b);
L6837e:
    if (c.tracing) c.traceAt(0x6837e);
    // 66ed:14ae  mov ax, word ptr [0xd6]  [x61]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:14b1  add word ptr [0xcf], ax  [x61]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:14b5  cmp word ptr [0xcf], 0x3c  [x61]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0x3cu, true);
    // 66ed:14ba  jbe 0x147b  [x61]
    if ((c.cf || c.zf)) goto L6834b;
L6838c:
    if (c.tracing) c.traceAt(0x6838c);
    // 66ed:14bc  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:14c2  mov dword ptr [0x6d], 0x300  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x300u);
    // 66ed:14cb  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:14d4  mov dword ptr [0x75], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:14dd  mov dword ptr [0xba], 0x1f4  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x1f4u);
    // 66ed:14e6  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:14ef  push cs  [x1]
    c.push16(c.cs);
    // 66ed:14f0  call 0x1133  [x1]
    c.push16(0x14f3u); code_7(c, 0x68003u); if (c.ip != 0x14f3u) c.badReturn(0x683c0);
L683c3:
    if (c.tracing) c.traceAt(0x683c3);
    // 66ed:14f3  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L683c9:
    if (c.tracing) c.traceAt(0x683c9);
    // 66ed:14f9  push cs  [x61]
    c.push16(c.cs);
    // 66ed:14fa  call 0x76a  [x61]
    c.push16(0x14fdu); code_7(c, 0x6763au); if (c.ip != 0x14fdu) c.badReturn(0x683ca);
L683cd:
    if (c.tracing) c.traceAt(0x683cd);
    // 66ed:14fd  mov word ptr [0xbf], 0  [x61]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:1503  push cs  [x61]
    c.push16(c.cs);
    // 66ed:1504  call 0xf87  [x61]
    c.push16(0x1507u); code_7(c, 0x67e57u); if (c.ip != 0x1507u) c.badReturn(0x683d4);
L683d7:
    if (c.tracing) c.traceAt(0x683d7);
    // 66ed:1507  push cs  [x61]
    c.push16(c.cs);
    // 66ed:1508  call 0xf65  [x61]
    c.push16(0x150bu); code_7(c, 0x67e35u); if (c.ip != 0x150bu) c.badReturn(0x683d8);
L683db:
    if (c.tracing) c.traceAt(0x683db);
    // 66ed:150b  mov bx, 0xe  [x61]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:150e  int 0xff  [x61]
    c.ip = 0x1510u; c.d32 = false; c.intr(0xff, 0x1510u);
L683e0:
    if (c.tracing) c.traceAt(0x683e0);
    // 66ed:1510  mov word ptr [0xd6], ax  [x61]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:1513  mov ax, word ptr [0xd6]  [x61]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:1516  add word ptr [0xcf], ax  [x61]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:151a  cmp word ptr [0xcf], 0x3c  [x61]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0x3cu, true);
    // 66ed:151f  jbe 0x14f9  [x61]
    if ((c.cf || c.zf)) goto L683c9;
L683f1:
    if (c.tracing) c.traceAt(0x683f1);
    // 66ed:1521  mov byte ptr [0xbe], 0x11  [x1]
    c.w8(c.dsb + (uint16_t)(0xbeu), 0x11u);
    // 66ed:1526  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:152c  mov dword ptr [0x6d], 0x32  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x32u);
    // 66ed:1535  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:153e  mov dword ptr [0x75], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:1547  mov dword ptr [0xba], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x0u);
    // 66ed:1550  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:1559  push cs  [x1]
    c.push16(c.cs);
    // 66ed:155a  call 0x1133  [x1]
    c.push16(0x155du); code_7(c, 0x68003u); if (c.ip != 0x155du) c.badReturn(0x6842a);
L6842d:
    if (c.tracing) c.traceAt(0x6842d);
    // 66ed:155d  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L68433:
    if (c.tracing) c.traceAt(0x68433);
    // 66ed:1563  push cs  [x241]
    c.push16(c.cs);
    // 66ed:1564  call 0x76a  [x241]
    c.push16(0x1567u); code_7(c, 0x6763au); if (c.ip != 0x1567u) c.badReturn(0x68434);
L68437:
    if (c.tracing) c.traceAt(0x68437);
    // 66ed:1567  mov word ptr [0xbf], 9  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x9u);
    // 66ed:156d  push cs  [x241]
    c.push16(c.cs);
    // 66ed:156e  call 0xf87  [x241]
    c.push16(0x1571u); code_7(c, 0x67e57u); if (c.ip != 0x1571u) c.badReturn(0x6843e);
L68441:
    if (c.tracing) c.traceAt(0x68441);
    // 66ed:1571  mov word ptr [0xbf], 8  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x8u);
    // 66ed:1577  push cs  [x241]
    c.push16(c.cs);
    // 66ed:1578  call 0xf87  [x241]
    c.push16(0x157bu); code_7(c, 0x67e57u); if (c.ip != 0x157bu) c.badReturn(0x68448);
L6844b:
    if (c.tracing) c.traceAt(0x6844b);
    // 66ed:157b  mov word ptr [0xbf], 7  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x7u);
    // 66ed:1581  push cs  [x241]
    c.push16(c.cs);
    // 66ed:1582  call 0xf87  [x241]
    c.push16(0x1585u); code_7(c, 0x67e57u); if (c.ip != 0x1585u) c.badReturn(0x68452);
L68455:
    if (c.tracing) c.traceAt(0x68455);
    // 66ed:1585  mov word ptr [0xbf], 6  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x6u);
    // 66ed:158b  push cs  [x241]
    c.push16(c.cs);
    // 66ed:158c  call 0xf87  [x241]
    c.push16(0x158fu); code_7(c, 0x67e57u); if (c.ip != 0x158fu) c.badReturn(0x6845c);
L6845f:
    if (c.tracing) c.traceAt(0x6845f);
    // 66ed:158f  mov word ptr [0xbf], 5  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x5u);
    // 66ed:1595  push cs  [x241]
    c.push16(c.cs);
    // 66ed:1596  call 0xf87  [x241]
    c.push16(0x1599u); code_7(c, 0x67e57u); if (c.ip != 0x1599u) c.badReturn(0x68466);
L68469:
    if (c.tracing) c.traceAt(0x68469);
    // 66ed:1599  mov word ptr [0xbf], 4  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x4u);
    // 66ed:159f  push cs  [x241]
    c.push16(c.cs);
    // 66ed:15a0  call 0xf87  [x241]
    c.push16(0x15a3u); code_7(c, 0x67e57u); if (c.ip != 0x15a3u) c.badReturn(0x68470);
L68473:
    if (c.tracing) c.traceAt(0x68473);
    // 66ed:15a3  mov word ptr [0xbf], 3  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x3u);
    // 66ed:15a9  push cs  [x241]
    c.push16(c.cs);
    // 66ed:15aa  call 0xf87  [x241]
    c.push16(0x15adu); code_7(c, 0x67e57u); if (c.ip != 0x15adu) c.badReturn(0x6847a);
L6847d:
    if (c.tracing) c.traceAt(0x6847d);
    // 66ed:15ad  mov word ptr [0xbf], 2  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x2u);
    // 66ed:15b3  push cs  [x241]
    c.push16(c.cs);
    // 66ed:15b4  call 0xf87  [x241]
    c.push16(0x15b7u); code_7(c, 0x67e57u); if (c.ip != 0x15b7u) c.badReturn(0x68484);
L68487:
    if (c.tracing) c.traceAt(0x68487);
    // 66ed:15b7  mov word ptr [0xbf], 0  [x241]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:15bd  push cs  [x241]
    c.push16(c.cs);
    // 66ed:15be  call 0xf87  [x241]
    c.push16(0x15c1u); code_7(c, 0x67e57u); if (c.ip != 0x15c1u) c.badReturn(0x6848e);
L68491:
    if (c.tracing) c.traceAt(0x68491);
    // 66ed:15c1  push cs  [x241]
    c.push16(c.cs);
    // 66ed:15c2  call 0xf65  [x241]
    c.push16(0x15c5u); code_7(c, 0x67e35u); if (c.ip != 0x15c5u) c.badReturn(0x68492);
L68495:
    if (c.tracing) c.traceAt(0x68495);
    // 66ed:15c5  mov bx, 0xe  [x241]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:15c8  int 0xff  [x241]
    c.ip = 0x15cau; c.d32 = false; c.intr(0xff, 0x15cau);
L6849a:
    if (c.tracing) c.traceAt(0x6849a);
    // 66ed:15ca  mov word ptr [0xd6], ax  [x241]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:15cd  mov ax, word ptr [0xd6]  [x241]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:15d0  add word ptr [0xcf], ax  [x241]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:15d4  cmp word ptr [0xcf], 0xf0  [x241]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0xf0u, true);
    // 66ed:15da  jbe 0x1563  [x241]
    if ((c.cf || c.zf)) goto L68433;
L684ac:
    if (c.tracing) c.traceAt(0x684ac);
    // 66ed:15dc  mov ax, 0x4090  [x1]
    c.a.x = (uint16_t)(0x4090u);
    // 66ed:15df  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:15e2  push cs  [x1]
    c.push16(c.cs);
    // 66ed:15e3  call 0xf45  [x1]
    c.push16(0x15e6u); code_7(c, 0x67e15u); if (c.ip != 0x15e6u) c.badReturn(0x684b3);
L684b6:
    if (c.tracing) c.traceAt(0x684b6);
    // 66ed:15e6  mov word ptr [0xbf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:15ec  mov dword ptr [0x6d], 0x100  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x100u);
    // 66ed:15f5  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:15fe  mov dword ptr [0x75], 0xffffffd8  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0xffffffd8u);
    // 66ed:1607  mov dword ptr [0xba], 0xfffffc2c  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0xfffffc2cu);
    // 66ed:1610  mov dword ptr [0xb6], 0xfffc2f70  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0xfffc2f70u);
    // 66ed:1619  push cs  [x1]
    c.push16(c.cs);
    // 66ed:161a  call 0x1133  [x1]
    c.push16(0x161du); code_7(c, 0x68003u); if (c.ip != 0x161du) c.badReturn(0x684ea);
L684ed:
    if (c.tracing) c.traceAt(0x684ed);
    // 66ed:161d  mov word ptr [0xbf], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:1623  mov dword ptr [0x6d], 0x204  [x1]
    c.w32(c.dsb + (uint16_t)(0x6du), 0x204u);
    // 66ed:162c  mov dword ptr [0x71], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x71u), 0x0u);
    // 66ed:1635  mov dword ptr [0x75], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0x75u), 0x0u);
    // 66ed:163e  mov dword ptr [0xba], 0x1e78  [x1]
    c.w32(c.dsb + (uint16_t)(0xbau), 0x1e78u);
    // 66ed:1647  mov dword ptr [0xb6], 0  [x1]
    c.w32(c.dsb + (uint16_t)(0xb6u), 0x0u);
    // 66ed:1650  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1651  call 0x1133  [x1]
    c.push16(0x1654u); code_7(c, 0x68003u); if (c.ip != 0x1654u) c.badReturn(0x68521);
L68524:
    if (c.tracing) c.traceAt(0x68524);
    // 66ed:1654  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L6852a:
    if (c.tracing) c.traceAt(0x6852a);
    // 66ed:165a  push cs  [x77]
    c.push16(c.cs);
    // 66ed:165b  call 0x76a  [x77]
    c.push16(0x165eu); code_7(c, 0x6763au); if (c.ip != 0x165eu) c.badReturn(0x6852b);
L6852e:
    if (c.tracing) c.traceAt(0x6852e);
    // 66ed:165e  mov word ptr [0xbf], 3  [x77]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x3u);
    // 66ed:1664  push cs  [x77]
    c.push16(c.cs);
    // 66ed:1665  call 0xf87  [x77]
    c.push16(0x1668u); code_7(c, 0x67e57u); if (c.ip != 0x1668u) c.badReturn(0x68535);
L68538:
    if (c.tracing) c.traceAt(0x68538);
    // 66ed:1668  mov word ptr [0xbf], 2  [x77]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x2u);
    // 66ed:166e  push cs  [x77]
    c.push16(c.cs);
    // 66ed:166f  call 0xf87  [x77]
    c.push16(0x1672u); code_7(c, 0x67e57u); if (c.ip != 0x1672u) c.badReturn(0x6853f);
L68542:
    if (c.tracing) c.traceAt(0x68542);
    // 66ed:1672  mov word ptr [0xbf], 1  [x77]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:1678  push cs  [x77]
    c.push16(c.cs);
    // 66ed:1679  call 0xf87  [x77]
    c.push16(0x167cu); code_7(c, 0x67e57u); if (c.ip != 0x167cu) c.badReturn(0x68549);
L6854c:
    if (c.tracing) c.traceAt(0x6854c);
    // 66ed:167c  mov word ptr [0xbf], 0  [x77]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:1682  push cs  [x77]
    c.push16(c.cs);
    // 66ed:1683  call 0xf87  [x77]
    c.push16(0x1686u); code_7(c, 0x67e57u); if (c.ip != 0x1686u) c.badReturn(0x68553);
L68556:
    if (c.tracing) c.traceAt(0x68556);
    // 66ed:1686  push cs  [x77]
    c.push16(c.cs);
    // 66ed:1687  call 0xf65  [x77]
    c.push16(0x168au); code_7(c, 0x67e35u); if (c.ip != 0x168au) c.badReturn(0x68557);
L6855a:
    if (c.tracing) c.traceAt(0x6855a);
    // 66ed:168a  mov bx, 0xe  [x77]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:168d  int 0xff  [x77]
    c.ip = 0x168fu; c.d32 = false; c.intr(0xff, 0x168fu);
L6855f:
    if (c.tracing) c.traceAt(0x6855f);
    // 66ed:168f  mov word ptr [0xd6], ax  [x77]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:1692  mov ax, word ptr [0xd6]  [x77]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:1695  add word ptr [0xcf], ax  [x77]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:1699  cmp word ptr [0xcf], 0x4c  [x77]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0x4cu, true);
    // 66ed:169e  jbe 0x165a  [x77]
    if ((c.cf || c.zf)) goto L6852a;
L68570:
    if (c.tracing) c.traceAt(0x68570);
    // 66ed:16a0  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16a1  call 0x76a  [x164]
    c.push16(0x16a4u); code_7(c, 0x6763au); if (c.ip != 0x16a4u) c.badReturn(0x68571);
L68574:
    if (c.tracing) c.traceAt(0x68574);
    // 66ed:16a4  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16a5  call 0x790  [x164]
    c.push16(0x16a8u); code_7(c, 0x67660u); if (c.ip != 0x16a8u) c.badReturn(0x68575);
L68578:
    if (c.tracing) c.traceAt(0x68578);
    // 66ed:16a8  mov word ptr [0xbf], 3  [x164]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x3u);
    // 66ed:16ae  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16af  call 0xf87  [x164]
    c.push16(0x16b2u); code_7(c, 0x67e57u); if (c.ip != 0x16b2u) c.badReturn(0x6857f);
L68582:
    if (c.tracing) c.traceAt(0x68582);
    // 66ed:16b2  mov word ptr [0xbf], 2  [x164]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x2u);
    // 66ed:16b8  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16b9  call 0xf87  [x164]
    c.push16(0x16bcu); code_7(c, 0x67e57u); if (c.ip != 0x16bcu) c.badReturn(0x68589);
L6858c:
    if (c.tracing) c.traceAt(0x6858c);
    // 66ed:16bc  mov word ptr [0xbf], 1  [x164]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:16c2  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16c3  call 0xf87  [x164]
    c.push16(0x16c6u); code_7(c, 0x67e57u); if (c.ip != 0x16c6u) c.badReturn(0x68593);
L68596:
    if (c.tracing) c.traceAt(0x68596);
    // 66ed:16c6  mov word ptr [0xbf], 0  [x164]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x0u);
    // 66ed:16cc  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16cd  call 0xf87  [x164]
    c.push16(0x16d0u); code_7(c, 0x67e57u); if (c.ip != 0x16d0u) c.badReturn(0x6859d);
L685a0:
    if (c.tracing) c.traceAt(0x685a0);
    // 66ed:16d0  push cs  [x164]
    c.push16(c.cs);
    // 66ed:16d1  call 0xf65  [x164]
    c.push16(0x16d4u); code_7(c, 0x67e35u); if (c.ip != 0x16d4u) c.badReturn(0x685a1);
L685a4:
    if (c.tracing) c.traceAt(0x685a4);
    // 66ed:16d4  mov bx, 0xe  [x164]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:16d7  int 0xff  [x164]
    c.ip = 0x16d9u; c.d32 = false; c.intr(0xff, 0x16d9u);
L685a9:
    if (c.tracing) c.traceAt(0x685a9);
    // 66ed:16d9  mov word ptr [0xd6], ax  [x164]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:16dc  mov ax, word ptr [0xd6]  [x164]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:16df  add word ptr [0xcf], ax  [x164]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:16e3  cmp word ptr [0xcf], 0xf0  [x164]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0xf0u, true);
    // 66ed:16e9  jbe 0x16a0  [x164]
    if ((c.cf || c.zf)) goto L68570;
L685bb:
    if (c.tracing) c.traceAt(0x685bb);
    // 66ed:16eb  mov dword ptr [0xd1], 0x3938700  [x1]
    c.w32(c.dsb + (uint16_t)(0xd1u), 0x3938700u);
    // 66ed:16f4  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L685ca:
    if (c.tracing) c.traceAt(0x685ca);
    // 66ed:16fa  push cs  [x240]
    c.push16(c.cs);
    // 66ed:16fb  call 0x76a  [x240]
    c.push16(0x16feu); code_7(c, 0x6763au); if (c.ip != 0x16feu) c.badReturn(0x685cb);
L685ce:
    if (c.tracing) c.traceAt(0x685ce);
    // 66ed:16fe  push cs  [x240]
    c.push16(c.cs);
    // 66ed:16ff  call 0x790  [x240]
    c.push16(0x1702u); code_7(c, 0x67660u); if (c.ip != 0x1702u) c.badReturn(0x685cf);
L685d2:
    if (c.tracing) c.traceAt(0x685d2);
    // 66ed:1702  mov word ptr [0xbf], 1  [x240]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:1708  push cs  [x240]
    c.push16(c.cs);
    // 66ed:1709  call 0xf87  [x240]
    c.push16(0x170cu); code_7(c, 0x67e57u); if (c.ip != 0x170cu) c.badReturn(0x685d9);
L685dc:
    if (c.tracing) c.traceAt(0x685dc);
    // 66ed:170c  push cs  [x240]
    c.push16(c.cs);
    // 66ed:170d  call 0xf65  [x240]
    c.push16(0x1710u); code_7(c, 0x67e35u); if (c.ip != 0x1710u) c.badReturn(0x685dd);
L685e0:
    if (c.tracing) c.traceAt(0x685e0);
    // 66ed:1710  mov bx, 0xe  [x240]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:1713  int 0xff  [x240]
    c.ip = 0x1715u; c.d32 = false; c.intr(0xff, 0x1715u);
L685e5:
    if (c.tracing) c.traceAt(0x685e5);
    // 66ed:1715  mov word ptr [0xd6], ax  [x240]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:1718  mov ax, word ptr [0xd6]  [x240]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:171b  add word ptr [0xcf], ax  [x240]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:171f  cmp word ptr [0xcf], 0xf0  [x240]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0xf0u, true);
    // 66ed:1725  jb 0x16fa  [x240]
    if (c.cf) goto L685ca;
L685f7:
    if (c.tracing) c.traceAt(0x685f7);
    // 66ed:1727  mov word ptr [0xbf], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:172d  push cs  [x1]
    c.push16(c.cs);
    // 66ed:172e  call 0x1082  [x1]
    c.push16(0x1731u); code_7(c, 0x67f52u); if (c.ip != 0x1731u) c.badReturn(0x685fe);
L68601:
    if (c.tracing) c.traceAt(0x68601);
    // 66ed:1731  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1732  call 0xf65  [x1]
    c.push16(0x1735u); code_7(c, 0x67e35u); if (c.ip != 0x1735u) c.badReturn(0x68602);
L68605:
    if (c.tracing) c.traceAt(0x68605);
    // 66ed:1735  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:1738  int 0xff  [x1]
    c.ip = 0x173au; c.d32 = false; c.intr(0xff, 0x173au);
L6860a:
    if (c.tracing) c.traceAt(0x6860a);
    // 66ed:173a  mov word ptr [0xbf], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xbfu), 0x1u);
    // 66ed:1740  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1741  call 0x1082  [x1]
    c.push16(0x1744u); code_7(c, 0x67f52u); if (c.ip != 0x1744u) c.badReturn(0x68611);
L68614:
    if (c.tracing) c.traceAt(0x68614);
    // 66ed:1744  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1745  call 0xf65  [x1]
    c.push16(0x1748u); code_7(c, 0x67e35u); if (c.ip != 0x1748u) c.badReturn(0x68615);
L68618:
    if (c.tracing) c.traceAt(0x68618);
    // 66ed:1748  mov bx, 0xe  [x1]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:174b  int 0xff  [x1]
    c.ip = 0x174du; c.d32 = false; c.intr(0xff, 0x174du);
L6861d:
    if (c.tracing) c.traceAt(0x6861d);
    // 66ed:174d  push ds  [x1]
    c.push16(c.ds);
    // 66ed:174e  mov ax, 0x64ce  [x1]
    c.a.x = (uint16_t)(0x64ceu);
    // 66ed:1751  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:1753  mov di, 0xd8  [x1]
    c.di.x = (uint16_t)(0xd8u);
    // 66ed:1756  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 66ed:1759  mov ax, 0x4090  [x1]
    c.a.x = (uint16_t)(0x4090u);
    // 66ed:175c  mov ds, ax  [x1]
    c.loadDs(c.a.x);
    // 66ed:175e  mov cx, 0x180  [x1]
    c.c.x = (uint16_t)(0x180u);
    // 66ed:1761  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1762  call 0  [x1]
    c.push16(0x1765u); code_7(c, 0x66ed0u); if (c.ip != 0x1765u) c.badReturn(0x68632);
L68635:
    if (c.tracing) c.traceAt(0x68635);
    // 66ed:1765  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 66ed:1766  cld   [x1]
    c.df = false;
    // 66ed:1767  mov ax, 0x64ce  [x1]
    c.a.x = (uint16_t)(0x64ceu);
    // 66ed:176a  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 66ed:176c  mov di, 0x3d8  [x1]
    c.di.x = (uint16_t)(0x3d8u);
    // 66ed:176f  mov al, 0  [x1]
    c.a.l = (uint8_t)(0x0u);
    // 66ed:1771  mov cx, 0x300  [x1]
    c.c.x = (uint16_t)(0x300u);
L68644:
    if (c.tracing) c.traceAt(0x68644);
    // 66ed:1774  rep stosb byte ptr es:[di], al  [x769]
    c.stos<8, false>(1);
L68646:
    if (c.tracing) c.traceAt(0x68646);
    // 66ed:1776  mov word ptr [0x21dd], 0xd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21ddu), 0xd8u);
    // 66ed:177c  mov word ptr [0x21df], 0x3d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21dfu), 0x3d8u);
    // 66ed:1782  mov word ptr [0x21e1], 0x6d8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e1u), 0x6d8u);
    // 66ed:1788  mov word ptr [0x21e3], 0xcd8  [x1]
    c.w16(c.dsb + (uint16_t)(0x21e3u), 0xcd8u);
    // 66ed:178e  mov bx, 0  [x1]
    c.b.x = (uint16_t)(0x0u);
    // 66ed:1791  mov byte ptr [0x21dc], 0x3d  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dcu), 0x3du);
    // 66ed:1796  push cs  [x1]
    c.push16(c.cs);
    // 66ed:1797  call 8  [x1]
    c.push16(0x179au); code_7(c, 0x66ed8u); if (c.ip != 0x179au) c.badReturn(0x68667);
L6866a:
    if (c.tracing) c.traceAt(0x6866a);
    // 66ed:179a  mov byte ptr [0x21db], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dbu), 0x0u);
    // 66ed:179f  mov byte ptr [0x21da], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0x21dau), 0x0u);
    // 66ed:17a4  mov word ptr [0xcf], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xcfu), 0x0u);
L6867a:
    if (c.tracing) c.traceAt(0x6867a);
    // 66ed:17aa  push cs  [x60]
    c.push16(c.cs);
    // 66ed:17ab  call 0x4f  [x60]
    c.push16(0x17aeu); code_7(c, 0x66f1fu); if (c.ip != 0x17aeu) c.badReturn(0x6867b);
L6867e:
    if (c.tracing) c.traceAt(0x6867e);
    // 66ed:17ae  mov bx, 0xe  [x60]
    c.b.x = (uint16_t)(0xeu);
    // 66ed:17b1  int 0xff  [x60]
    c.ip = 0x17b3u; c.d32 = false; c.intr(0xff, 0x17b3u);
L68683:
    if (c.tracing) c.traceAt(0x68683);
    // 66ed:17b3  mov word ptr [0xd6], ax  [x60]
    c.w16(c.dsb + (uint16_t)(0xd6u), c.a.x);
    // 66ed:17b6  mov ax, word ptr [0xd6]  [x60]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xd6u)));
    // 66ed:17b9  add word ptr [0xcf], ax  [x60]
    c.w16(c.dsb + (uint16_t)(0xcfu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), c.a.x, false));
    // 66ed:17bd  cmp word ptr [0xcf], 0x3c  [x60]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xcfu)), 0x3cu, true);
    // 66ed:17c2  jl 0x17aa  [x60]
    if ((c.sf != c.of)) goto L6867a;
L68694:
    if (c.tracing) c.traceAt(0x68694);
    // 66ed:17c4  mov ah, 0x4c  [x1]
    c.a.h = (uint8_t)(0x4cu);
    // 66ed:17c6  int 0x21  [x1]
    c.ip = 0x17c8u; c.d32 = false; c.intr(0x21, 0x17c8u);
    c.notTranslated(0x68698, "fall-through");
}

static Register reg07(7, {0x66ed0, 0x66ed4, 0x66ed6, 0x66ed8, 0x66ee2, 0x66f0b, 0x66f17, 0x66f1e, 0x66f1f, 0x66f26, 0x66f2d, 0x66f34, 0x66f42, 0x66f4c, 0x66f4f, 0x66f63, 0x66f6a, 0x66f6b, 0x67203, 0x67207, 0x67228, 0x672e0, 0x672e2, 0x672f8, 0x6730e, 0x6732e, 0x67338, 0x6734b, 0x67370, 0x67390, 0x6739a, 0x673ad, 0x673d2, 0x673dc, 0x67415, 0x67419, 0x6742e, 0x6743b, 0x67441, 0x67445, 0x67449, 0x6744b, 0x67450, 0x67452, 0x67460, 0x67469, 0x67481, 0x674aa, 0x674c9, 0x674d6, 0x674f6, 0x67500, 0x67513, 0x67538, 0x6753f, 0x6754a, 0x6756a, 0x67574, 0x67587, 0x675ac, 0x675b9, 0x675ba, 0x675f0, 0x675f2, 0x67621, 0x67631, 0x67634, 0x67639, 0x6763a, 0x6765c, 0x6765f, 0x67660, 0x67697, 0x67699, 0x676a6, 0x676b1, 0x676c3, 0x676cb, 0x676ff, 0x67701, 0x67704, 0x67707, 0x67719, 0x6771c, 0x67737, 0x67769, 0x677c1, 0x677d9, 0x677df, 0x677e5, 0x677f1, 0x67812, 0x67831, 0x6783a, 0x67847, 0x67858, 0x6785d, 0x67863, 0x67880, 0x67911, 0x6793a, 0x6794e, 0x67952, 0x679b7, 0x679e8, 0x67a18, 0x67a26, 0x67a2c, 0x67a31, 0x67a34, 0x67a36, 0x67a41, 0x67a4c, 0x67a7c, 0x67a8a, 0x67a90, 0x67a95, 0x67a98, 0x67a9a, 0x67aac, 0x67ab3, 0x67aba, 0x67ac6, 0x67acc, 0x67ae3, 0x67aea, 0x67b36, 0x67b68, 0x67b81, 0x67b87, 0x67ba8, 0x67bbb, 0x67bd3, 0x67bd4, 0x67e15, 0x67e28, 0x67e33, 0x67e35, 0x67e57, 0x67e8c, 0x67f2f, 0x67f3a, 0x67f45, 0x67f49, 0x67f4d, 0x67f51, 0x67f52, 0x67f87, 0x67fde, 0x67feb, 0x67ff6, 0x67ffa, 0x67ffe, 0x68002, 0x68003, 0x68062, 0x68076, 0x6807f, 0x68088, 0x68089, 0x68096, 0x680a0, 0x680b8, 0x680cc, 0x680e0, 0x680ec, 0x680ee, 0x68112, 0x68136, 0x68140, 0x68152, 0x68164, 0x68176, 0x68184, 0x68199, 0x681a2, 0x681ab, 0x681e5, 0x681eb, 0x681f0, 0x681f5, 0x681fa, 0x68245, 0x6824b, 0x6824f, 0x68255, 0x68259, 0x68264, 0x6826e, 0x68272, 0x68277, 0x68289, 0x682c0, 0x682c6, 0x682ca, 0x682d0, 0x682d4, 0x682df, 0x682e9, 0x682ed, 0x682f2, 0x68304, 0x6833b, 0x6834b, 0x6834f, 0x68355, 0x68359, 0x68364, 0x6836e, 0x68372, 0x68377, 0x6837e, 0x6838c, 0x683c3, 0x683c9, 0x683cd, 0x683d7, 0x683db, 0x683e0, 0x683f1, 0x6842d, 0x68433, 0x68437, 0x68441, 0x6844b, 0x68455, 0x6845f, 0x68469, 0x68473, 0x6847d, 0x68487, 0x68491, 0x68495, 0x6849a, 0x684ac, 0x684b6, 0x684ed, 0x68524, 0x6852a, 0x6852e, 0x68538, 0x68542, 0x6854c, 0x68556, 0x6855a, 0x6855f, 0x68570, 0x68574, 0x68578, 0x68582, 0x6858c, 0x68596, 0x685a0, 0x685a4, 0x685a9, 0x685bb, 0x685ca, 0x685ce, 0x685d2, 0x685dc, 0x685e0, 0x685e5, 0x685f7, 0x68601, 0x68605, 0x6860a, 0x68614, 0x68618, 0x6861d, 0x68635, 0x68644, 0x68646, 0x6866a, 0x6867a, 0x6867e, 0x68683, 0x68694}, code_7);

}  // namespace angel
