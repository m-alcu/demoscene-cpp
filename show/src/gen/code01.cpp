// Part 0 (SKULL.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_1(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1a610: goto L1a610;
    case 0x1a61f: goto L1a61f;
    case 0x1a624: goto L1a624;
    case 0x1a62d: goto L1a62d;
    case 0x1a636: goto L1a636;
    case 0x1a646: goto L1a646;
    case 0x1a654: goto L1a654;
    case 0x1a656: goto L1a656;
    case 0x1a659: goto L1a659;
    case 0x1a65f: goto L1a65f;
    case 0x1a668: goto L1a668;
    case 0x1a674: goto L1a674;
    case 0x1a67c: goto L1a67c;
    case 0x1a67f: goto L1a67f;
    case 0x1a682: goto L1a682;
    case 0x1a685: goto L1a685;
    case 0x1a68a: goto L1a68a;
    case 0x1a68d: goto L1a68d;
    case 0x1a690: goto L1a690;
    case 0x1a692: goto L1a692;
    case 0x1a69c: goto L1a69c;
    case 0x1a69f: goto L1a69f;
    case 0x1a6a7: goto L1a6a7;
    case 0x1a6c0: goto L1a6c0;
    case 0x1a6c8: goto L1a6c8;
    case 0x1a6e1: goto L1a6e1;
    case 0x1a6eb: goto L1a6eb;
    case 0x1a6f1: goto L1a6f1;
    case 0x1a70a: goto L1a70a;
    case 0x1a710: goto L1a710;
    case 0x1a729: goto L1a729;
    case 0x1a731: goto L1a731;
    case 0x1a746: goto L1a746;
    case 0x1a765: goto L1a765;
    case 0x1a767: goto L1a767;
    case 0x1a76b: goto L1a76b;
    case 0x1a76e: goto L1a76e;
    case 0x1a771: goto L1a771;
    case 0x1a794: goto L1a794;
    case 0x1a7a9: goto L1a7a9;
    case 0x1a7be: goto L1a7be;
    case 0x1a7d3: goto L1a7d3;
    case 0x1a7fc: goto L1a7fc;
    case 0x1a7fe: goto L1a7fe;
    case 0x1a804: goto L1a804;
    case 0x1a80a: goto L1a80a;
    case 0x1a812: goto L1a812;
    case 0x1a81c: goto L1a81c;
    case 0x1a81e: goto L1a81e;
    case 0x1a820: goto L1a820;
    case 0x1a82a: goto L1a82a;
    case 0x1a836: goto L1a836;
    case 0x1a843: goto L1a843;
    case 0x1a846: goto L1a846;
    case 0x1a869: goto L1a869;
    case 0x1a871: goto L1a871;
    case 0x1a883: goto L1a883;
    case 0x1a88b: goto L1a88b;
    case 0x1a893: goto L1a893;
    case 0x1a8a0: goto L1a8a0;
    case 0x1a8c3: goto L1a8c3;
    case 0x1a8cb: goto L1a8cb;
    case 0x1a8ce: goto L1a8ce;
    case 0x1a8d1: goto L1a8d1;
    case 0x1a8d4: goto L1a8d4;
    case 0x1a8d5: goto L1a8d5;
    case 0x1a8d9: goto L1a8d9;
    case 0x1a8da: goto L1a8da;
    case 0x1a8de: goto L1a8de;
    case 0x1a8df: goto L1a8df;
    case 0x1a8ed: goto L1a8ed;
    case 0x1a8ee: goto L1a8ee;
    case 0x1a8f7: goto L1a8f7;
    case 0x1a905: goto L1a905;
    case 0x1a907: goto L1a907;
    case 0x1a90d: goto L1a90d;
    case 0x1a947: goto L1a947;
    case 0x1a952: goto L1a952;
    case 0x1a953: goto L1a953;
    case 0x1a991: goto L1a991;
    case 0x1a9db: goto L1a9db;
    case 0x1a9e4: goto L1a9e4;
    case 0x1a9f8: goto L1a9f8;
    case 0x1a9fa: goto L1a9fa;
    case 0x1aa04: goto L1aa04;
    case 0x1aa0e: goto L1aa0e;
    case 0x1aa14: goto L1aa14;
    case 0x1aa19: goto L1aa19;
    case 0x1aa2f: goto L1aa2f;
    case 0x1aa36: goto L1aa36;
    case 0x1aa3d: goto L1aa3d;
    case 0x1aa3e: goto L1aa3e;
    case 0x1aa64: goto L1aa64;
    case 0x1aa6c: goto L1aa6c;
    case 0x1aa70: goto L1aa70;
    case 0x1aa7e: goto L1aa7e;
    case 0x1aa83: goto L1aa83;
    case 0x1aa85: goto L1aa85;
    case 0x1aa86: goto L1aa86;
    case 0x1aa91: goto L1aa91;
    case 0x1aac0: goto L1aac0;
    case 0x1aad0: goto L1aad0;
    case 0x1aad8: goto L1aad8;
    case 0x1aae5: goto L1aae5;
    case 0x1aaf1: goto L1aaf1;
    case 0x1aaf2: goto L1aaf2;
    case 0x1ab06: goto L1ab06;
    case 0x1ab0a: goto L1ab0a;
    case 0x1ab5e: goto L1ab5e;
    case 0x1ab63: goto L1ab63;
    case 0x1ab67: goto L1ab67;
    case 0x1ab6f: goto L1ab6f;
    case 0x1ab71: goto L1ab71;
    case 0x1ab72: goto L1ab72;
    case 0x1ab76: goto L1ab76;
    case 0x1abaf: goto L1abaf;
    case 0x1abb0: goto L1abb0;
    case 0x1abb8: goto L1abb8;
    case 0x1abcd: goto L1abcd;
    case 0x1abe7: goto L1abe7;
    case 0x1abf5: goto L1abf5;
    case 0x1abfa: goto L1abfa;
    case 0x1ac0f: goto L1ac0f;
    case 0x1ac18: goto L1ac18;
    case 0x1ac22: goto L1ac22;
    case 0x1ac30: goto L1ac30;
    case 0x1ac31: goto L1ac31;
    case 0x1ac33: goto L1ac33;
    case 0x1ac4b: goto L1ac4b;
    case 0x1ac5f: goto L1ac5f;
    case 0x1ac78: goto L1ac78;
    case 0x1ac8c: goto L1ac8c;
    case 0x1ac95: goto L1ac95;
    case 0x1ac96: goto L1ac96;
    case 0x1ac9d: goto L1ac9d;
    case 0x1acb4: goto L1acb4;
    case 0x1acbe: goto L1acbe;
    case 0x1acd4: goto L1acd4;
    case 0x1acde: goto L1acde;
    case 0x1acdf: goto L1acdf;
    case 0x1ace0: goto L1ace0;
    case 0x1acf5: goto L1acf5;
    case 0x1acfe: goto L1acfe;
    case 0x1ad28: goto L1ad28;
    case 0x1ad2b: goto L1ad2b;
    case 0x1ad2e: goto L1ad2e;
    case 0x1ad30: goto L1ad30;
    case 0x1ad3a: goto L1ad3a;
    case 0x1ad3e: goto L1ad3e;
    case 0x1ad4a: goto L1ad4a;
    case 0x1ad56: goto L1ad56;
    case 0x1ad59: goto L1ad59;
    case 0x1ad6d: goto L1ad6d;
    case 0x1ad6f: goto L1ad6f;
    case 0x1ad7f: goto L1ad7f;
    case 0x1ad81: goto L1ad81;
    case 0x1ad86: goto L1ad86;
    case 0x1ad88: goto L1ad88;
    case 0x1ad9d: goto L1ad9d;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x5600  [x1]
    goto L1a610;
L1a610:
    if (c.tracing) c.traceAt(0x1a610);
    // 1501:5600  mov word ptr cs:[0x55fa], cx  [x1]
    if (c.r8(0x1a610) != 0x2e || c.r8(0x1a611) != 0x89) c.notTranslated(0x1a610, "rewritten instruction");
    c.w16(c.csb + (uint16_t)(0x55fau), c.c.x);
    // 1501:5605  mov word ptr cs:[0x55fc], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x55fcu), c.dx_.x);
    // 1501:560a  mov word ptr cs:[0x55fe], bx  [x1]
    c.w16(c.csb + (uint16_t)(0x55feu), c.b.x);
L1a61f:
    if (c.tracing) c.traceAt(0x1a61f);
    // 1501:560f  mov word ptr cs:[0x5600], bp  [x2]
    c.w16(c.csb + (uint16_t)(0x5600u), c.bp.x);
L1a624:
    if (c.tracing) c.traceAt(0x1a624);
    // 1501:5614  mov word ptr cs:[0x55f8], ax  [x2]
    c.w16(c.csb + (uint16_t)(0x55f8u), c.a.x);
    // 1501:5618  mov ax, 0x10  [x2]
    c.a.x = (uint16_t)(0x10u);
    // 1501:561b  int 0x10  [x2]
    c.ip = 0x561du; c.d32 = false; c.intr(0x10, 0x561du);
L1a62d:
    if (c.tracing) c.traceAt(0x1a62d);
    // 1501:561d  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:5620  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:5622  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:5624  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1a636:
    if (c.tracing) c.traceAt(0x1a636);
    // 1501:5626  mov word ptr [si - 0x7e8f], ax  [x200]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8171u), c.a.x);
    // 1501:562a  add si, 2  [x200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:562d  add ax, 0x50  [x200]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x50u, false));
    // 1501:5630  cmp si, 0x190  [x200]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:5634  jb 0x5626  [x200]
    if (c.cf) goto L1a636;
L1a646:
    if (c.tracing) c.traceAt(0x1a646);
    // 1501:5636  push es  [x1]
    c.push16(c.es);
    // 1501:5637  mov ax, word ptr cs:[0x55f8]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55f8u)));
    // 1501:563b  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:563d  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:563f  mov cx, 0x7d00  [x1]
    c.c.x = (uint16_t)(0x7d00u);
    // 1501:5642  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1a654:
    if (c.tracing) c.traceAt(0x1a654);
    // 1501:5644  rep stosw word ptr es:[di], ax  [x32001]
    c.stos<16, false>(1);
L1a656:
    if (c.tracing) c.traceAt(0x1a656);
    // 1501:5646  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5647  xor bx, bx  [x1]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1a659:
    if (c.tracing) c.traceAt(0x1a659);
    // 1501:5649  mov ah, 0x10  [x16]
    c.a.h = (uint8_t)(0x10u);
    // 1501:564b  mov al, 0  [x16]
    c.a.l = (uint8_t)(0x0u);
    // 1501:564d  int 0x10  [x16]
    c.ip = 0x564fu; c.d32 = false; c.intr(0x10, 0x564fu);
L1a65f:
    if (c.tracing) c.traceAt(0x1a65f);
    // 1501:564f  inc bl  [x16]
    c.b.l = (uint8_t)(c.inc<8>(c.b.l, false));
    // 1501:5651  inc bh  [x16]
    c.b.h = (uint8_t)(c.inc<8>(c.b.h, false));
    // 1501:5653  cmp bl, 0x10  [x16]
    c.sub<8>(c.b.l, 0x10u, true);
    // 1501:5656  jne 0x5649  [x16]
    if (!c.zf) goto L1a659;
L1a668:
    if (c.tracing) c.traceAt(0x1a668);
    // 1501:5658  xor al, al  [x1]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:565a  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:565c  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:565f  out dx, al  [x1]
    c.ip = 0x5660u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5660  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:5661  mov cx, 0x30  [x1]
    c.c.x = (uint16_t)(0x30u);
L1a674:
    if (c.tracing) c.traceAt(0x1a674);
    // 1501:5664  mov al, byte ptr [si - 0x12f0]  [x48]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + 0xffffed10u)));
    // 1501:5668  out dx, al  [x48]
    c.ip = 0x5669u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5669  inc si  [x48]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:566a  loop 0x5664  [x48]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a674;
L1a67c:
    if (c.tracing) c.traceAt(0x1a67c);
    // 1501:566c  call 0x59ea  [x1]
    c.push16(0x566fu); code_1(c, 0x1a9fau); if (c.ip != 0x566fu) c.badReturn(0x1a67c);
L1a67f:
    if (c.tracing) c.traceAt(0x1a67f);
    // 1501:566f  call 0x5a76  [x1]
    c.push16(0x5672u); code_1(c, 0x1aa86u); if (c.ip != 0x5672u) c.badReturn(0x1a67f);
L1a682:
    if (c.tracing) c.traceAt(0x1a682);
    // 1501:5672  call 0x5ba0  [x1]
    c.push16(0x5675u); code_1(c, 0x1abb0u); if (c.ip != 0x5675u) c.badReturn(0x1a682);
L1a685:
    if (c.tracing) c.traceAt(0x1a685);
    // 1501:5675  lcall cs:[0x55fe]  [x1]
    { const uint32_t t0 = c.r16(c.csb + (uint16_t)(0x55feu)); const uint16_t t1 = c.r16(c.csb + (uint16_t)(0x55feu) + 2); c.push16(c.cs); c.push16(0x567au); c.loadCs(t1); c.callLinear(c.csb + t0); }
L1a68a:
    if (c.tracing) c.traceAt(0x1a68a);
    // 1501:567a  mov cx, 0x62  [x1]
    c.c.x = (uint16_t)(0x62u);
L1a68d:
    if (c.tracing) c.traceAt(0x1a68d);
    // 1501:567d  call 0x58c1  [x98]
    c.push16(0x5680u); code_1(c, 0x1a8d1u); if (c.ip != 0x5680u) c.badReturn(0x1a68d);
L1a690:
    if (c.tracing) c.traceAt(0x1a690);
    // 1501:5680  loop 0x567d  [x98]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a68d;
L1a692:
    if (c.tracing) c.traceAt(0x1a692);
    // 1501:5682  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5685  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:5688  out dx, ax  [x1]
    c.ip = 0x5689u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5689  mov bx, 0x28  [x1]
    c.b.x = (uint16_t)(0x28u);
L1a69c:
    if (c.tracing) c.traceAt(0x1a69c);
    // 1501:568c  call 0x58c1  [x59]
    c.push16(0x568fu); code_1(c, 0x1a8d1u); if (c.ip != 0x568fu) c.badReturn(0x1a69c);
L1a69f:
    if (c.tracing) c.traceAt(0x1a69f);
    // 1501:568f  mov di, bx  [x59]
    c.di.x = (uint16_t)(c.b.x);
    // 1501:5691  mov ax, 0xffff  [x59]
    c.a.x = (uint16_t)(0xffffu);
    // 1501:5694  mov cx, 3  [x59]
    c.c.x = (uint16_t)(0x3u);
L1a6a7:
    if (c.tracing) c.traceAt(0x1a6a7);
    // 1501:5697  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:5698  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:5699  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569a  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569b  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569c  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569d  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569e  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:569f  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a0  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a1  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a2  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a3  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a4  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a5  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a6  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a7  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a8  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56a9  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56aa  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56ab  add di, 0x28  [x177]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
    // 1501:56ae  loop 0x5697  [x177]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a6a7;
L1a6c0:
    if (c.tracing) c.traceAt(0x1a6c0);
    // 1501:56b0  mov di, 0x6d60  [x59]
    c.di.x = (uint16_t)(0x6d60u);
    // 1501:56b3  sub di, bx  [x59]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.b.x, true));
    // 1501:56b5  mov cx, 3  [x59]
    c.c.x = (uint16_t)(0x3u);
L1a6c8:
    if (c.tracing) c.traceAt(0x1a6c8);
    // 1501:56b8  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56b9  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56ba  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56bb  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56bc  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56bd  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56be  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56bf  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c0  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c1  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c2  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c3  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c4  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c5  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c6  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c7  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c8  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56c9  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56ca  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56cb  stosw word ptr es:[di], ax  [x177]
    c.stos<16, false>(0);
    // 1501:56cc  add di, 0x28  [x177]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
    // 1501:56cf  loop 0x56b8  [x177]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a6c8;
L1a6e1:
    if (c.tracing) c.traceAt(0x1a6e1);
    // 1501:56d1  add bx, 0xf0  [x59]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0xf0u, false));
    // 1501:56d5  cmp bx, 0x36b0  [x59]
    c.sub<16>(c.b.x, 0x36b0u, true);
    // 1501:56d9  jb 0x568c  [x59]
    if (c.cf) goto L1a69c;
L1a6eb:
    if (c.tracing) c.traceAt(0x1a6eb);
    // 1501:56db  mov cx, 0x15e  [x1]
    c.c.x = (uint16_t)(0x15eu);
    // 1501:56de  mov di, 0x8028  [x1]
    c.di.x = (uint16_t)(0x8028u);
L1a6f1:
    if (c.tracing) c.traceAt(0x1a6f1);
    // 1501:56e1  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e2  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e3  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e4  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e5  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e6  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e7  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e8  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56e9  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56ea  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56eb  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56ec  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56ed  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56ee  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56ef  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f0  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f1  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f2  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f3  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f4  stosw word ptr es:[di], ax  [x350]
    c.stos<16, false>(0);
    // 1501:56f5  add di, 0x28  [x350]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x28u, true));
    // 1501:56f8  loop 0x56e1  [x350]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a6f1;
L1a70a:
    if (c.tracing) c.traceAt(0x1a70a);
    // 1501:56fa  mov word ptr [0x8f1e], 0x50  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8f1eu), 0x50u);
L1a710:
    if (c.tracing) c.traceAt(0x1a710);
    // 1501:5700  mov dx, 0x3c8  [x272]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5703  xor al, al  [x272]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:5705  out dx, al  [x272]
    c.ip = 0x5706u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5706  inc dx  [x272]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:5707  out dx, al  [x272]
    c.ip = 0x5708u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5708  out dx, al  [x272]
    c.ip = 0x5709u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5709  out dx, al  [x272]
    c.ip = 0x570au; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:570a  mov cx, 0x8000  [x272]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:570d  mov bx, 0xa000  [x272]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:5710  xor ax, ax  [x272]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:5712  cmp word ptr [0x801b], 0  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff801bu)), 0x0u, true);
    // 1501:5717  jne 0x5721  [x272]
    if (!c.zf) goto L1a731;
L1a729:
    if (c.tracing) c.traceAt(0x1a729);
    // 1501:5719  mov ax, 1  [x136]
    c.a.x = (uint16_t)(0x1u);
    // 1501:571c  mov bx, 0xa800  [x136]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:571f  xor cx, cx  [x136]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) ^ (c.c.x), true));
L1a731:
    if (c.tracing) c.traceAt(0x1a731);
    // 1501:5721  mov word ptr [0x801b], ax  [x272]
    c.w16(c.dsb + (uint16_t)(0x801bu), c.a.x);
    // 1501:5724  mov es, bx  [x272]
    c.loadEs(c.b.x);
    // 1501:5726  mov dx, 0x3d4  [x272]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:5729  mov al, 0xc  [x272]
    c.a.l = (uint8_t)(0xcu);
    // 1501:572b  mov ah, ch  [x272]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:572d  out dx, ax  [x272]
    c.ip = 0x572eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:572e  mov al, 0xd  [x272]
    c.a.l = (uint8_t)(0xdu);
    // 1501:5730  mov ah, cl  [x272]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:5732  out dx, ax  [x272]
    c.ip = 0x5733u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5733  call 0x58c1  [x272]
    c.push16(0x5736u); code_1(c, 0x1a8d1u); if (c.ip != 0x5736u) c.badReturn(0x1a743);
L1a746:
    if (c.tracing) c.traceAt(0x1a746);
    // 1501:5736  mov dx, 0x3c8  [x272]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:5739  xor al, al  [x272]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:573b  out dx, al  [x272]
    c.ip = 0x573cu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:573c  inc dx  [x272]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:573d  out dx, al  [x272]
    c.ip = 0x573eu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:573e  out dx, al  [x272]
    c.ip = 0x573fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:573f  out dx, al  [x272]
    c.ip = 0x5740u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:5740  mov dx, 0x3c4  [x272]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5743  mov ax, 0x102  [x272]
    c.a.x = (uint16_t)(0x102u);
    // 1501:5746  out dx, ax  [x272]
    c.ip = 0x5747u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5747  push es  [x272]
    c.push16(c.es);
    // 1501:5748  mov ax, word ptr cs:[0x55f8]  [x272]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55f8u)));
    // 1501:574c  mov es, ax  [x272]
    c.loadEs(c.a.x);
    // 1501:574e  xor di, di  [x272]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:5750  mov cx, 0xe88  [x272]
    c.c.x = (uint16_t)(0xe88u);
    // 1501:5753  xor ax, ax  [x272]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1a765:
    if (c.tracing) c.traceAt(0x1a765);
    // 1501:5755  rep stosw word ptr es:[di], ax  [x1012112]
    c.stos<16, false>(1);
L1a767:
    if (c.tracing) c.traceAt(0x1a767);
    // 1501:5757  pop es  [x272]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5758  call 0x5ae2  [x272]
    c.push16(0x575bu); code_1(c, 0x1aaf2u); if (c.ip != 0x575bu) c.badReturn(0x1a768);
L1a76b:
    if (c.tracing) c.traceAt(0x1a76b);
    // 1501:575b  call 0x5c21  [x272]
    c.push16(0x575eu); code_1(c, 0x1ac31u); if (c.ip != 0x575eu) c.badReturn(0x1a76b);
L1a76e:
    if (c.tracing) c.traceAt(0x1a76e);
    // 1501:575e  call 0x5b62  [x272]
    c.push16(0x5761u); code_1(c, 0x1ab72u); if (c.ip != 0x5761u) c.badReturn(0x1a76e);
L1a771:
    if (c.tracing) c.traceAt(0x1a771);
    // 1501:5761  mov dx, 0x3c4  [x272]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5764  mov ax, 0x102  [x272]
    c.a.x = (uint16_t)(0x102u);
    // 1501:5767  out dx, ax  [x272]
    c.ip = 0x5768u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5768  mov dx, 0x3ce  [x272]
    c.dx_.x = (uint16_t)(0x3ceu);
    // 1501:576b  mov ax, 4  [x272]
    c.a.x = (uint16_t)(0x4u);
    // 1501:576e  out dx, ax  [x272]
    c.ip = 0x576fu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:576f  mov ax, word ptr [0x8023]  [x272]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8023u)));
    // 1501:5772  mov word ptr [0x8021], ax  [x272]
    c.w16(c.dsb + (uint16_t)(0x8021u), c.a.x);
    // 1501:5775  mov word ptr [0x801d], 0  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801du), 0x0u);
    // 1501:577b  mov word ptr [0x801f], 0  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801fu), 0x0u);
    // 1501:5781  call 0x58cf  [x272]
    c.push16(0x5784u); code_1(c, 0x1a8dfu); if (c.ip != 0x5784u) c.badReturn(0x1a791);
L1a794:
    if (c.tracing) c.traceAt(0x1a794);
    // 1501:5784  add word ptr [0x8021], 0x320  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff8021u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8021u)), 0x320u, true));
    // 1501:578a  mov word ptr [0x801d], 0x16  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801du), 0x16u);
    // 1501:5790  mov word ptr [0x801f], 0xa  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801fu), 0xau);
    // 1501:5796  call 0x58cf  [x272]
    c.push16(0x5799u); code_1(c, 0x1a8dfu); if (c.ip != 0x5799u) c.badReturn(0x1a7a6);
L1a7a9:
    if (c.tracing) c.traceAt(0x1a7a9);
    // 1501:5799  add word ptr [0x8021], 0x320  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff8021u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8021u)), 0x320u, true));
    // 1501:579f  mov word ptr [0x801d], 0x2c  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801du), 0x2cu);
    // 1501:57a5  mov word ptr [0x801f], 0x14  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801fu), 0x14u);
    // 1501:57ab  call 0x58cf  [x272]
    c.push16(0x57aeu); code_1(c, 0x1a8dfu); if (c.ip != 0x57aeu) c.badReturn(0x1a7bb);
L1a7be:
    if (c.tracing) c.traceAt(0x1a7be);
    // 1501:57ae  add word ptr [0x8021], 0x320  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff8021u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8021u)), 0x320u, true));
    // 1501:57b4  mov word ptr [0x801d], 0x42  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801du), 0x42u);
    // 1501:57ba  mov word ptr [0x801f], 0x1e  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff801fu), 0x1eu);
    // 1501:57c0  call 0x58cf  [x272]
    c.push16(0x57c3u); code_1(c, 0x1a8dfu); if (c.ip != 0x57c3u) c.badReturn(0x1a7d0);
L1a7d3:
    if (c.tracing) c.traceAt(0x1a7d3);
    // 1501:57c3  mov dx, 0x3c8  [x272]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:57c6  xor al, al  [x272]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), false));
    // 1501:57c8  out dx, al  [x272]
    c.ip = 0x57c9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:57c9  inc dx  [x272]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, false));
    // 1501:57ca  out dx, al  [x272]
    c.ip = 0x57cbu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:57cb  out dx, al  [x272]
    c.ip = 0x57ccu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:57cc  out dx, al  [x272]
    c.ip = 0x57cdu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:57cd  push ds  [x272]
    c.push16(c.ds);
    // 1501:57ce  mov di, word ptr [0x8025]  [x272]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8025u)));
    // 1501:57d2  mov cx, word ptr [0x8b19]  [x272]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8b19u)));
    // 1501:57d6  mov bx, word ptr [0x8000]  [x272]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8000u)));
    // 1501:57da  mov ax, word ptr cs:[0x55f8]  [x272]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55f8u)));
    // 1501:57de  mov ds, ax  [x272]
    c.loadDs(c.a.x);
    // 1501:57e0  xor si, si  [x272]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:57e2  mov bp, 0x28  [x272]
    c.bp.x = (uint16_t)(0x28u);
    // 1501:57e5  mov ax, 0x1e  [x272]
    c.a.x = (uint16_t)(0x1eu);
    // 1501:57e8  sub ax, di  [x272]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.di.x, true));
    // 1501:57ea  jns 0x57ee  [x272]
    if (!c.sf) goto L1a7fe;
L1a7fc:
    if (c.tracing) c.traceAt(0x1a7fc);
    // 1501:57ec  add bp, ax  [x119]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, true));
L1a7fe:
    if (c.tracing) c.traceAt(0x1a7fe);
    // 1501:57ee  cmp bx, 0x90  [x272]
    c.sub<16>(c.b.x, 0x90u, true);
    // 1501:57f2  jb 0x5802  [x272]
    if (c.cf) goto L1a812;
L1a804:
    if (c.tracing) c.traceAt(0x1a804);
    // 1501:57f4  cmp cx, 0x128  [x188]
    c.sub<16>(c.c.x, 0x128u, true);
    // 1501:57f8  jae 0x5802  [x188]
    if (!c.cf) goto L1a812;
L1a80a:
    if (c.tracing) c.traceAt(0x1a80a);
    // 1501:57fa  sub bp, 0xa  [x60]
    c.bp.x = (uint16_t)(c.sub<16>(c.bp.x, 0xau, false));
    // 1501:57fd  add cx, 0x58  [x60]
    c.c.x = (uint16_t)(c.add<16>(c.c.x, 0x58u, true));
    // 1501:5800  jmp 0x57f4  [x60]
    goto L1a804;
L1a812:
    if (c.tracing) c.traceAt(0x1a812);
    // 1501:5802  mov dx, 0x50  [x272]
    c.dx_.x = (uint16_t)(0x50u);
    // 1501:5805  sub dx, bp  [x272]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.bp.x, false));
    // 1501:5807  shr bp, 1  [x272]
    c.bp.x = (uint16_t)(c.shr<16>(c.bp.x, (int)((0x1u) & 31), false));
    // 1501:5809  add di, 5  [x272]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x5u, true));
L1a81c:
    if (c.tracing) c.traceAt(0x1a81c);
    // 1501:580c  mov cx, bp  [x25296]
    c.c.x = (uint16_t)(c.bp.x);
L1a81e:
    if (c.tracing) c.traceAt(0x1a81e);
    // 1501:580e  rep movsw word ptr es:[di], word ptr [si]  [x343356]
    c.ip = 0x5810u; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1a820:
    if (c.tracing) c.traceAt(0x1a820);
    // 1501:5810  add di, dx  [x25296]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5812  add si, dx  [x25296]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.dx_.x, false));
    // 1501:5814  cmp di, 0x1d10  [x25296]
    c.sub<16>(c.di.x, 0x1d10u, true);
    // 1501:5818  jb 0x580c  [x25296]
    if (c.cf) goto L1a81c;
L1a82a:
    if (c.tracing) c.traceAt(0x1a82a);
    // 1501:581a  pop ds  [x272]
    c.loadDs((uint16_t)c.pop16());
    // 1501:581b  inc word ptr [0x8000]  [x272]
    c.w16(c.dsb + (uint16_t)(0xffff8000u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), false));
    // 1501:581f  cmp word ptr [0x8000], 0x70  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x70u, true);
    // 1501:5824  jae 0x5859  [x272]
    if (!c.cf) goto L1a869;
L1a836:
    if (c.tracing) c.traceAt(0x1a836);
    // 1501:5826  add word ptr [0x8b19], 8  [x111]
    c.w16(c.dsb + (uint16_t)(0xffff8b19u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x8u, false));
    // 1501:582b  cmp word ptr [0x8b19], 0x5a0  [x111]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x5a0u, true);
    // 1501:5831  jb 0x5859  [x111]
    if (c.cf) goto L1a869;
L1a843:
    if (c.tracing) c.traceAt(0x1a843);
    // 1501:5833  call 0x5c86  [x7]
    c.push16(0x5836u); code_1(c, 0x1ac96u); if (c.ip != 0x5836u) c.badReturn(0x1a843);
L1a846:
    if (c.tracing) c.traceAt(0x1a846);
    // 1501:5836  sub word ptr [0x8b19], 0x58  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8b19u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x58u, false));
    // 1501:583b  add word ptr [0x8023], 0x320  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8023u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8023u)), 0x320u, false));
    // 1501:5841  add word ptr [0x8025], 0xa  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8025u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8025u)), 0xau, false));
    // 1501:5846  cmp word ptr [0x8025], 0x50  [x7]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8025u)), 0x50u, true);
    // 1501:584b  jb 0x5859  [x7]
    if (c.cf) goto L1a869;
    c.notTranslated(0x1a85d, "fall-through");
L1a869:
    if (c.tracing) c.traceAt(0x1a869);
    // 1501:5859  cmp word ptr [0x8000], 0x90  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x90u, true);
    // 1501:585f  jne 0x5873  [x272]
    if (!c.zf) goto L1a883;
L1a871:
    if (c.tracing) c.traceAt(0x1a871);
    // 1501:5861  mov word ptr [0x8b19], 0x28  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8b19u), 0x28u);
    // 1501:5867  mov word ptr [0x8025], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8025u), 0x0u);
    // 1501:586d  mov word ptr [0x8023], 0  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8023u), 0x0u);
L1a883:
    if (c.tracing) c.traceAt(0x1a883);
    // 1501:5873  cmp word ptr [0x8000], 0x90  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x90u, true);
    // 1501:5879  jb 0x58b3  [x272]
    if (c.cf) goto L1a8c3;
L1a88b:
    if (c.tracing) c.traceAt(0x1a88b);
    // 1501:587b  cmp word ptr [0x8000], 0x100  [x129]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x100u, true);
    // 1501:5881  jae 0x58b3  [x129]
    if (!c.cf) goto L1a8c3;
L1a893:
    if (c.tracing) c.traceAt(0x1a893);
    // 1501:5883  add word ptr [0x8b19], 8  [x112]
    c.w16(c.dsb + (uint16_t)(0xffff8b19u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x8u, false));
    // 1501:5888  cmp word ptr [0x8b19], 0x180  [x112]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x180u, true);
    // 1501:588e  jb 0x58b3  [x112]
    if (c.cf) goto L1a8c3;
L1a8a0:
    if (c.tracing) c.traceAt(0x1a8a0);
    // 1501:5890  sub word ptr [0x8b19], 0x58  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8b19u), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8b19u)), 0x58u, false));
    // 1501:5895  add word ptr [0x8023], 0x320  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8023u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8023u)), 0x320u, false));
    // 1501:589b  add word ptr [0x8025], 0xa  [x7]
    c.w16(c.dsb + (uint16_t)(0xffff8025u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8025u)), 0xau, false));
    // 1501:58a0  cmp word ptr [0x8025], 0x50  [x7]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8025u)), 0x50u, true);
    // 1501:58a5  jb 0x58b3  [x7]
    if (c.cf) goto L1a8c3;
    c.notTranslated(0x1a8b7, "fall-through");
L1a8c3:
    if (c.tracing) c.traceAt(0x1a8c3);
    // 1501:58b3  cmp word ptr [0x8000], 0x110  [x272]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8000u)), 0x110u, true);
    // 1501:58b9  jne 0x58be  [x272]
    if (!c.zf) goto L1a8ce;
L1a8cb:
    if (c.tracing) c.traceAt(0x1a8cb);
    // 1501:58bb  jmp 0x5cd0  [x1]
    goto L1ace0;
L1a8ce:
    if (c.tracing) c.traceAt(0x1a8ce);
    // 1501:58be  jmp 0x5700  [x271]
    goto L1a710;
L1a8d1:
    if (c.tracing) c.traceAt(0x1a8d1);
    // 1501:58c1  mov dx, 0x3da  [x494]
    c.dx_.x = (uint16_t)(0x3dau);
L1a8d4:
    if (c.tracing) c.traceAt(0x1a8d4);
    // 1501:58c4  in al, dx  [x22973]
    c.ip = 0x58c5u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1a8d5:
    if (c.tracing) c.traceAt(0x1a8d5);
    // 1501:58c5  test al, 8  [x30466]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:58c7  je 0x58c4  [x30466]
    if (c.zf) goto L1a8d4;
L1a8d9:
    if (c.tracing) c.traceAt(0x1a8d9);
    // 1501:58c9  in al, dx  [x1560]
    c.ip = 0x58cau; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1a8da:
    if (c.tracing) c.traceAt(0x1a8da);
    // 1501:58ca  test al, 8  [x2080]
    c.logic<8>((c.a.l) & (0x8u), true);
    // 1501:58cc  jne 0x58c9  [x2080]
    if (!c.zf) goto L1a8d9;
L1a8de:
    if (c.tracing) c.traceAt(0x1a8de);
    // 1501:58ce  ret   [x494]
    c.ip = c.pop16(); return;
L1a8df:
    if (c.tracing) c.traceAt(0x1a8df);
    // 1501:58cf  mov si, word ptr [0x801d]  [x1088]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff801du)));
    // 1501:58d3  mov ax, word ptr [si - 0x728d]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d73u)));
    // 1501:58d7  cmp word ptr [si - 0x727b], ax  [x1088]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d85u)), c.a.x, true);
    // 1501:58db  jns 0x58de  [x1088]
    if (!c.sf) goto L1a8ee;
L1a8ed:
    if (c.tracing) c.traceAt(0x1a8ed);
    // 1501:58dd  ret   [x80]
    c.ip = c.pop16(); return;
L1a8ee:
    if (c.tracing) c.traceAt(0x1a8ee);
    // 1501:58de  mov word ptr [0x8f20], 0  [x1008]
    c.w16(c.dsb + (uint16_t)(0xffff8f20u), 0x0u);
    // 1501:58e4  mov cx, 0xa  [x1008]
    c.c.x = (uint16_t)(0xau);
L1a8f7:
    if (c.tracing) c.traceAt(0x1a8f7);
    // 1501:58e7  push cx  [x10080]
    c.push16(c.c.x);
    // 1501:58e8  push si  [x10080]
    c.push16(c.si.x);
    // 1501:58e9  mov ax, word ptr [si - 0x728b]  [x10080]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d75u)));
    // 1501:58ed  sub ax, word ptr [si - 0x728d]  [x10080]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d73u)), true));
    // 1501:58f1  dec al  [x10080]
    c.a.l = (uint8_t)(c.dec<8>(c.a.l, true));
    // 1501:58f3  jns 0x58f7  [x10080]
    if (!c.sf) goto L1a907;
L1a905:
    if (c.tracing) c.traceAt(0x1a905);
    // 1501:58f5  mov al, 0  [x456]
    c.a.l = (uint8_t)(0x0u);
L1a907:
    if (c.tracing) c.traceAt(0x1a907);
    // 1501:58f7  cmp al, 8  [x10080]
    c.sub<8>(c.a.l, 0x8u, true);
    // 1501:58f9  jb 0x58fd  [x10080]
    if (c.cf) goto L1a90d;
    c.notTranslated(0x1a90b, "fall-through");
L1a90d:
    if (c.tracing) c.traceAt(0x1a90d);
    // 1501:58fd  mov byte ptr [0x8f22], al  [x10080]
    c.w8(c.dsb + (uint16_t)(0x8f22u), c.a.l);
    // 1501:5900  mov di, word ptr [si - 0x71c5]  [x10080]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8e3bu)));
    // 1501:5904  add di, di  [x10080]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.di.x, false));
    // 1501:5906  mov di, word ptr [di - 0x7e8f]  [x10080]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffff8171u)));
    // 1501:590a  mov bx, word ptr [si - 0x728d]  [x10080]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d73u)));
    // 1501:590e  shr bx, 3  [x10080]
    c.b.x = (uint16_t)(c.shr<16>(c.b.x, (int)((0x3u) & 31), false));
    // 1501:5911  add di, bx  [x10080]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.b.x, false));
    // 1501:5913  mov word ptr [0x8f24], di  [x10080]
    c.w16(c.dsb + (uint16_t)(0xffff8f24u), c.di.x);
    // 1501:5917  mov bx, word ptr [si - 0x728d]  [x10080]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8d73u)));
    // 1501:591b  and bl, 7  [x10080]
    c.b.l = (uint8_t)(c.logic<8>((c.b.l) & (0x7u), false));
    // 1501:591e  mov byte ptr [0x8f23], bl  [x10080]
    c.w8(c.dsb + (uint16_t)(0xffff8f23u), c.b.l);
    // 1501:5922  mov ax, word ptr [si - 0x71c5]  [x10080]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8e3bu)));
    // 1501:5926  sub ax, 0x2e  [x10080]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0x2eu, false));
    // 1501:5929  neg ax  [x10080]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:592b  shl ax, 1  [x10080]
    c.a.x = (uint16_t)(c.shl<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:592d  inc ax  [x10080]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, true));
    // 1501:592e  mov word ptr [0x8f1e], ax  [x10080]
    c.w16(c.dsb + (uint16_t)(0x8f1eu), c.a.x);
    // 1501:5931  mov bp, 0xcda6  [x10080]
    c.bp.x = (uint16_t)(0xcda6u);
    // 1501:5934  call 0x5943  [x10080]
    c.push16(0x5937u); code_1(c, 0x1a953u); if (c.ip != 0x5937u) c.badReturn(0x1a944);
L1a947:
    if (c.tracing) c.traceAt(0x1a947);
    // 1501:5937  inc word ptr [0x8f20]  [x10080]
    c.w16(c.dsb + (uint16_t)(0xffff8f20u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8f20u)), false));
    // 1501:593b  pop si  [x10080]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:593c  add si, 2  [x10080]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:593f  pop cx  [x10080]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5940  loop 0x58e7  [x10080]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a8f7;
L1a952:
    if (c.tracing) c.traceAt(0x1a952);
    // 1501:5942  ret   [x1008]
    c.ip = c.pop16(); return;
L1a953:
    if (c.tracing) c.traceAt(0x1a953);
    // 1501:5943  add bp, word ptr [0x8021]  [x10080]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0xffff8021u)), false));
    // 1501:5947  add bp, word ptr [0x8f20]  [x10080]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.dsb + (uint16_t)(0xffff8f20u)), false));
    // 1501:594b  mov cx, word ptr [0x8f1e]  [x10080]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)));
    // 1501:594f  shr cx, 2  [x10080]
    c.c.x = (uint16_t)(c.shr<16>(c.c.x, (int)((0x2u) & 31), false));
    // 1501:5952  mov di, word ptr [0x8f24]  [x10080]
    c.di.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f24u)));
    // 1501:5956  mov si, word ptr [0x8f1e]  [x10080]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)));
    // 1501:595a  mov ax, 0xa0  [x10080]
    c.a.x = (uint16_t)(0xa0u);
    // 1501:595d  mul si  [x10080]
    c.mul16(c.si.x);
    // 1501:595f  sub ax, 0xa0  [x10080]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, 0xa0u, false));
    // 1501:5962  add ax, 0x8f26  [x10080]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x8f26u, false));
    // 1501:5965  mov si, ax  [x10080]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5967  mov al, byte ptr [0x8f23]  [x10080]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0x8f23u)));
    // 1501:596a  shl al, 3  [x10080]
    c.a.l = (uint8_t)(c.shl<8>(c.a.l, (int)((0x3u) & 31), false));
    // 1501:596d  add al, byte ptr [0x8f22]  [x10080]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.dsb + (uint16_t)(0xffff8f22u)), false));
    // 1501:5971  mov bh, al  [x10080]
    c.b.h = (uint8_t)(c.a.l);
    // 1501:5973  push es  [x10080]
    c.push16(c.es);
    // 1501:5974  mov ax, word ptr cs:[0x55f8]  [x10080]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55f8u)));
    // 1501:5978  mov es, ax  [x10080]
    c.loadEs(c.a.x);
    // 1501:597a  add di, word ptr [0x801f]  [x10080]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffff801fu)), true));
    // 1501:597e  mov dx, 0x50  [x10080]
    c.dx_.x = (uint16_t)(0x50u);
L1a991:
    if (c.tracing) c.traceAt(0x1a991);
    // 1501:5981  mov bl, byte ptr ds:[bp]  [x195613]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5985  add bx, bx  [x195613]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5987  mov ax, word ptr [bx]  [x195613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:5989  ror bx, 1  [x195613]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:598b  or word ptr es:[di], ax  [x195613]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:598e  add di, dx  [x195613]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:5990  lodsw ax, word ptr [si]  [x195613]
    c.ip = 0x5991u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:5991  add bp, ax  [x195613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:5993  mov bl, byte ptr ds:[bp]  [x195613]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:5997  add bx, bx  [x195613]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:5999  mov ax, word ptr [bx]  [x195613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:599b  ror bx, 1  [x195613]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:599d  or word ptr es:[di], ax  [x195613]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:59a0  add di, dx  [x195613]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:59a2  lodsw ax, word ptr [si]  [x195613]
    c.ip = 0x59a3u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:59a3  add bp, ax  [x195613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:59a5  mov bl, byte ptr ds:[bp]  [x195613]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:59a9  add bx, bx  [x195613]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:59ab  mov ax, word ptr [bx]  [x195613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:59ad  ror bx, 1  [x195613]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:59af  or word ptr es:[di], ax  [x195613]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:59b2  add di, dx  [x195613]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:59b4  lodsw ax, word ptr [si]  [x195613]
    c.ip = 0x59b5u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:59b5  add bp, ax  [x195613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, false));
    // 1501:59b7  mov bl, byte ptr ds:[bp]  [x195613]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:59bb  add bx, bx  [x195613]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:59bd  mov ax, word ptr [bx]  [x195613]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:59bf  ror bx, 1  [x195613]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:59c1  or word ptr es:[di], ax  [x195613]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:59c4  add di, dx  [x195613]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:59c6  lodsw ax, word ptr [si]  [x195613]
    c.ip = 0x59c7u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:59c7  add bp, ax  [x195613]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, true));
    // 1501:59c9  loop 0x5981  [x195613]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a991;
L1a9db:
    if (c.tracing) c.traceAt(0x1a9db);
    // 1501:59cb  mov cx, word ptr [0x8f1e]  [x10080]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)));
    // 1501:59cf  and cx, 3  [x10080]
    c.c.x = (uint16_t)(c.logic<16>((c.c.x) & (0x3u), true));
    // 1501:59d2  je 0x59e8  [x10080]
    if (c.zf) goto L1a9f8;
L1a9e4:
    if (c.tracing) c.traceAt(0x1a9e4);
    // 1501:59d4  mov bl, byte ptr ds:[bp]  [x21246]
    c.b.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.bp.x)));
    // 1501:59d8  add bx, bx  [x21246]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.b.x, false));
    // 1501:59da  mov ax, word ptr [bx]  [x21246]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x)));
    // 1501:59dc  ror bx, 1  [x21246]
    c.b.x = (uint16_t)(c.ror<16>(c.b.x, (int)((0x1u) & 31), false));
    // 1501:59de  or word ptr es:[di], ax  [x21246]
    c.w16(c.esb + (uint16_t)(c.di.x), c.logic<16>((c.r16(c.esb + (uint16_t)(c.di.x))) | (c.a.x), false));
    // 1501:59e1  add di, dx  [x21246]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.dx_.x, false));
    // 1501:59e3  lodsw ax, word ptr [si]  [x21246]
    c.ip = 0x59e4u; c.d32 = false; c.lods<16, false>(c.dsb, 0);
    // 1501:59e4  add bp, ax  [x21246]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.a.x, true));
    // 1501:59e6  loop 0x59d4  [x21246]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1a9e4;
L1a9f8:
    if (c.tracing) c.traceAt(0x1a9f8);
    // 1501:59e8  pop es  [x10080]
    c.loadEs((uint16_t)c.pop16());
    // 1501:59e9  ret   [x10080]
    c.ip = c.pop16(); return;
L1a9fa:
    if (c.tracing) c.traceAt(0x1a9fa);
    // 1501:59ea  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:59ec  mov byte ptr [0x8f05], 0  [x1]
    c.w8(c.dsb + (uint16_t)(0xffff8f05u), 0x0u);
    // 1501:59f1  mov cx, 8  [x1]
    c.c.x = (uint16_t)(0x8u);
L1aa04:
    if (c.tracing) c.traceAt(0x1aa04);
    // 1501:59f4  push cx  [x8]
    c.push16(c.c.x);
    // 1501:59f5  mov word ptr [0x8f03], 1  [x8]
    c.w16(c.dsb + (uint16_t)(0xffff8f03u), 0x1u);
    // 1501:59fb  mov cx, 8  [x8]
    c.c.x = (uint16_t)(0x8u);
L1aa0e:
    if (c.tracing) c.traceAt(0x1aa0e);
    // 1501:59fe  push cx  [x64]
    c.push16(c.c.x);
    // 1501:59ff  mov cx, 0x100  [x64]
    c.c.x = (uint16_t)(0x100u);
    // 1501:5a02  xor ax, ax  [x64]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1aa14:
    if (c.tracing) c.traceAt(0x1aa14);
    // 1501:5a04  pushaw   [x16384]
    { const uint32_t t0 = c.sp.x; c.push16(c.a.x); c.push16(c.c.x); c.push16(c.dx_.x); c.push16(c.b.x); c.push16(t0); c.push16(c.bp.x); c.push16(c.si.x); c.push16(c.di.x); }
    // 1501:5a05  push si  [x16384]
    c.push16(c.si.x);
    // 1501:5a06  call 0x5a2e  [x16384]
    c.push16(0x5a09u); code_1(c, 0x1aa3eu); if (c.ip != 0x5a09u) c.badReturn(0x1aa16);
L1aa19:
    if (c.tracing) c.traceAt(0x1aa19);
    // 1501:5a09  pop si  [x16384]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:5a0a  mov cl, byte ptr [0x8f05]  [x16384]
    c.c.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(0xffff8f05u)));
    // 1501:5a0e  xchg ah, al  [x16384]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5a10  shr ax, cl  [x16384]
    c.a.x = (uint16_t)(c.shr<16>(c.a.x, (int)(c.c.l & 31), false));
    // 1501:5a12  xchg ah, al  [x16384]
    { const uint32_t t0 = c.a.h; c.a.h = (uint8_t)(c.a.l); c.a.l = (uint8_t)(t0); }
    // 1501:5a14  mov word ptr [si], ax  [x16384]
    c.w16(c.dsb + (uint16_t)(c.si.x), c.a.x);
    // 1501:5a18  popaw   [x16384]
    c.di.x = c.pop16(); c.si.x = c.pop16(); c.bp.x = c.pop16(); c.pop16(); c.b.x = c.pop16(); c.dx_.x = c.pop16(); c.c.x = c.pop16(); c.a.x = c.pop16();
    // 1501:5a19  inc ax  [x16384]
    c.a.x = (uint16_t)(c.inc<16>(c.a.x, false));
    // 1501:5a1a  add si, 2  [x16384]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:5a1d  loop 0x5a04  [x16384]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa14;
L1aa2f:
    if (c.tracing) c.traceAt(0x1aa2f);
    // 1501:5a1f  inc word ptr [0x8f03]  [x64]
    c.w16(c.dsb + (uint16_t)(0xffff8f03u), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8f03u)), true));
    // 1501:5a23  pop cx  [x64]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5a24  loop 0x59fe  [x64]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa0e;
L1aa36:
    if (c.tracing) c.traceAt(0x1aa36);
    // 1501:5a26  inc byte ptr [0x8f05]  [x8]
    c.w8(c.dsb + (uint16_t)(0xffff8f05u), c.inc<8>(c.r8(c.dsb + (uint16_t)(0xffff8f05u)), true));
    // 1501:5a2a  pop cx  [x8]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5a2b  loop 0x59f4  [x8]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa04;
L1aa3d:
    if (c.tracing) c.traceAt(0x1aa3d);
    // 1501:5a2d  ret   [x1]
    c.ip = c.pop16(); return;
L1aa3e:
    if (c.tracing) c.traceAt(0x1aa3e);
    // 1501:5a2e  push ax  [x16384]
    c.push16(c.a.x);
    // 1501:5a2f  mov ax, word ptr [0x8f03]  [x16384]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8f03u)));
    // 1501:5a32  mov bx, 8  [x16384]
    c.b.x = (uint16_t)(0x8u);
    // 1501:5a35  cdq   [x16384]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:5a36  div bx  [x16384]
    while (!c.div16(c.b.x)) { c.d32 = false; c.intr(0, 0x5a36u); }   // #DE: int 0, then again
    // 1501:5a38  mov word ptr [0x8f1a], dx  [x16384]
    c.w16(c.dsb + (uint16_t)(0xffff8f1au), c.dx_.x);
    // 1501:5a3c  mov word ptr [0x8f18], ax  [x16384]
    c.w16(c.dsb + (uint16_t)(0x8f18u), c.a.x);
    // 1501:5a3f  mov word ptr [0x8f1c], 0  [x16384]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), 0x0u);
    // 1501:5a45  pop bx  [x16384]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5a46  mov cx, 8  [x16384]
    c.c.x = (uint16_t)(0x8u);
    // 1501:5a49  xor ax, ax  [x16384]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), false));
    // 1501:5a4b  mov bp, word ptr [0x8f1a]  [x16384]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1au)));
    // 1501:5a4f  mov dx, 8  [x16384]
    c.dx_.x = (uint16_t)(0x8u);
    // 1501:5a52  xor si, si  [x16384]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1aa64:
    if (c.tracing) c.traceAt(0x1aa64);
    // 1501:5a54  and al, byte ptr [si - 0x70fa]  [x131072]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (c.r8(c.dsb + (uint16_t)(c.si.x + 0xffff8f06u))), true));
    // 1501:5a58  rcl bl, 1  [x131072]
    c.b.l = (uint8_t)(c.rcl<8>(c.b.l, (int)((0x1u) & 31)));
    // 1501:5a5a  jae 0x5a60  [x131072]
    if (!c.cf) goto L1aa70;
L1aa6c:
    if (c.tracing) c.traceAt(0x1aa6c);
    // 1501:5a5c  or al, byte ptr [si - 0x70f2]  [x65536]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) | (c.r8(c.dsb + (uint16_t)(c.si.x + 0xffff8f0eu))), true));
L1aa70:
    if (c.tracing) c.traceAt(0x1aa70);
    // 1501:5a60  add si, word ptr [0x8f18]  [x131072]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8f18u)), false));
    // 1501:5a64  add word ptr [0x8f1c], bp  [x131072]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.bp.x, false));
    // 1501:5a68  cmp word ptr [0x8f1c], dx  [x131072]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.dx_.x, true);
    // 1501:5a6c  jb 0x5a73  [x131072]
    if (c.cf) goto L1aa83;
L1aa7e:
    if (c.tracing) c.traceAt(0x1aa7e);
    // 1501:5a6e  sub word ptr [0x8f1c], dx  [x57344]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.dx_.x, true));
    // 1501:5a72  inc si  [x57344]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
L1aa83:
    if (c.tracing) c.traceAt(0x1aa83);
    // 1501:5a73  loop 0x5a54  [x131072]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa64;
L1aa85:
    if (c.tracing) c.traceAt(0x1aa85);
    // 1501:5a75  ret   [x16384]
    c.ip = c.pop16(); return;
L1aa86:
    if (c.tracing) c.traceAt(0x1aa86);
    // 1501:5a76  mov word ptr [0x8f1e], 1  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8f1eu), 0x1u);
    // 1501:5a7c  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
    // 1501:5a7e  mov cx, 0x64  [x1]
    c.c.x = (uint16_t)(0x64u);
L1aa91:
    if (c.tracing) c.traceAt(0x1aa91);
    // 1501:5a81  push cx  [x100]
    c.push16(c.c.x);
    // 1501:5a82  push si  [x100]
    c.push16(c.si.x);
    // 1501:5a83  mov word ptr [0x8f16], 0xa  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8f16u), 0xau);
    // 1501:5a89  mov ax, 0x50  [x100]
    c.a.x = (uint16_t)(0x50u);
    // 1501:5a8c  cdq   [x100]
    c.dx_.x = (c.a.x & 0x8000) ? 0xFFFF : 0;
    // 1501:5a8d  div word ptr [0x8f1e]  [x100]
    while (!c.div16(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)))) { c.d32 = false; c.intr(0, 0x5a8du); }   // #DE: int 0, then again
    // 1501:5a91  mov word ptr [0x8f1a], dx  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8f1au), c.dx_.x);
    // 1501:5a95  mov bx, 0xa  [x100]
    c.b.x = (uint16_t)(0xau);
    // 1501:5a98  mul bx  [x100]
    c.mul16(c.b.x);
    // 1501:5a9a  mov word ptr [0x8f18], ax  [x100]
    c.w16(c.dsb + (uint16_t)(0x8f18u), c.a.x);
    // 1501:5a9d  mov word ptr [0x8f1c], 0  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), 0x0u);
    // 1501:5aa3  mov cx, 0x50  [x100]
    c.c.x = (uint16_t)(0x50u);
    // 1501:5aa6  xor ax, ax  [x100]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:5aa8  mov bx, word ptr [0x8f1a]  [x100]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1au)));
    // 1501:5aac  mov dx, word ptr [0x8f1e]  [x100]
    c.dx_.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)));
L1aac0:
    if (c.tracing) c.traceAt(0x1aac0);
    // 1501:5ab0  mov bp, ax  [x8001]
    c.bp.x = (uint16_t)(c.a.x);
    // 1501:5ab2  add ax, word ptr [0x8f18]  [x8001]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff8f18u)), false));
    // 1501:5ab6  add word ptr [0x8f1c], bx  [x8001]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.b.x, false));
    // 1501:5aba  cmp word ptr [0x8f1c], dx  [x8001]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.dx_.x, true);
    // 1501:5abe  jb 0x5ac8  [x8001]
    if (c.cf) goto L1aad8;
L1aad0:
    if (c.tracing) c.traceAt(0x1aad0);
    // 1501:5ac0  sub word ptr [0x8f1c], dx  [x3721]
    c.w16(c.dsb + (uint16_t)(0xffff8f1cu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1cu)), c.dx_.x, false));
    // 1501:5ac4  add ax, word ptr [0x8f16]  [x3721]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.dsb + (uint16_t)(0xffff8f16u)), true));
L1aad8:
    if (c.tracing) c.traceAt(0x1aad8);
    // 1501:5ac8  mov word ptr [si - 0x70da], ax  [x8000]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8f26u), c.a.x);
    // 1501:5acc  sub word ptr [si - 0x70da], bp  [x8000]
    c.w16(c.dsb + (uint16_t)(c.si.x + 0xffff8f26u), c.sub<16>(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8f26u)), c.bp.x, false));
    // 1501:5ad0  add si, 2  [x8000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, true));
    // 1501:5ad3  loop 0x5ab0  [x8000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aac0;
L1aae5:
    if (c.tracing) c.traceAt(0x1aae5);
    // 1501:5ad5  inc word ptr [0x8f1e]  [x100]
    c.w16(c.dsb + (uint16_t)(0xffff8f1eu), c.inc<16>(c.r16(c.dsb + (uint16_t)(0xffff8f1eu)), false));
    // 1501:5ad9  pop si  [x100]
    { const uint32_t t0 = c.pop16(); c.si.x = (uint16_t)(t0); }
    // 1501:5ada  add si, 0xa0  [x100]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0xa0u, true));
    // 1501:5ade  pop cx  [x100]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5adf  loop 0x5a81  [x100]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1aa91;
L1aaf1:
    if (c.tracing) c.traceAt(0x1aaf1);
    // 1501:5ae1  ret   [x1]
    c.ip = c.pop16(); return;
L1aaf2:
    if (c.tracing) c.traceAt(0x1aaf2);
    // 1501:5ae2  xor bp, bp  [x272]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:5ae4  mov cx, 0x8000  [x272]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:5ae7  xor di, di  [x272]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:5ae9  mov si, word ptr [0x8b19]  [x272]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8b19u)));
    // 1501:5aed  add si, 0x2c  [x272]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2cu, false));
    // 1501:5af0  cmp si, 0x5a0  [x272]
    c.sub<16>(c.si.x, 0x5a0u, true);
    // 1501:5af4  jb 0x5afa  [x272]
    if (c.cf) goto L1ab0a;
L1ab06:
    if (c.tracing) c.traceAt(0x1ab06);
    // 1501:5af6  sub si, 0x5a0  [x35]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x5a0u, true));
L1ab0a:
    if (c.tracing) c.traceAt(0x1ab0a);
    // 1501:5afa  mov bp, word ptr [di - 0x7ffd]  [x2176]
    c.bp.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.di.x + 0xffff8003u)));
    // 1501:5afe  mov ax, word ptr ds:[bp - 0x75f3]  [x2176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8a0du)));
    // 1501:5b03  mov word ptr ds:[bp - 0x74e3], ax  [x2176]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b1du), c.a.x);
    // 1501:5b08  mov ax, word ptr ds:[bp - 0x75f5]  [x2176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8a0bu)));
    // 1501:5b0d  imul word ptr [si - 0x7b97]  [x2176]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8469u)));
    // 1501:5b11  idiv cx  [x2176]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5b11u); }   // #DE: int 0, then again
    // 1501:5b13  push ax  [x2176]
    c.push16(c.a.x);
    // 1501:5b14  mov ax, word ptr ds:[bp - 0x75f1]  [x2176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8a0fu)));
    // 1501:5b19  imul word ptr [si - 0x7cff]  [x2176]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8301u)));
    // 1501:5b1d  idiv cx  [x2176]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5b1du); }   // #DE: int 0, then again
    // 1501:5b1f  pop bx  [x2176]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5b20  sub bx, ax  [x2176]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.a.x, false));
    // 1501:5b22  neg bx  [x2176]
    c.b.x = (uint16_t)(c.neg<16>(c.b.x, false));
    // 1501:5b24  mov word ptr ds:[bp - 0x74e5], bx  [x2176]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b1bu), c.b.x);
    // 1501:5b29  mov ax, word ptr ds:[bp - 0x75f1]  [x2176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8a0fu)));
    // 1501:5b2e  imul word ptr [si - 0x7b97]  [x2176]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8469u)));
    // 1501:5b32  idiv cx  [x2176]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5b32u); }   // #DE: int 0, then again
    // 1501:5b34  push ax  [x2176]
    c.push16(c.a.x);
    // 1501:5b35  mov ax, word ptr ds:[bp - 0x75f5]  [x2176]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8a0bu)));
    // 1501:5b3a  imul word ptr [si - 0x7cff]  [x2176]
    c.imul16(c.r16(c.dsb + (uint16_t)(c.si.x + 0xffff8301u)));
    // 1501:5b3e  idiv cx  [x2176]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5b3eu); }   // #DE: int 0, then again
    // 1501:5b40  pop bx  [x2176]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:5b41  add bx, ax  [x2176]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, c.a.x, false));
    // 1501:5b43  mov word ptr ds:[bp - 0x74e1], bx  [x2176]
    c.w16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b1fu), c.b.x);
    // 1501:5b48  test di, 3  [x2176]
    c.logic<16>((c.di.x) & (0x3u), true);
    // 1501:5b4c  jne 0x5b57  [x2176]
    if (!c.zf) goto L1ab67;
L1ab5e:
    if (c.tracing) c.traceAt(0x1ab5e);
    // 1501:5b4e  sub si, 0x58  [x1088]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, 0x58u, true));
    // 1501:5b51  jns 0x5b57  [x1088]
    if (!c.sf) goto L1ab67;
L1ab63:
    if (c.tracing) c.traceAt(0x1ab63);
    // 1501:5b53  add si, 0x5a0  [x82]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x5a0u, true));
L1ab67:
    if (c.tracing) c.traceAt(0x1ab67);
    // 1501:5b57  add di, 2  [x2176]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:5b5a  cmp di, 0x10  [x2176]
    c.sub<16>(c.di.x, 0x10u, true);
    // 1501:5b5d  jae 0x5b61  [x2176]
    if (!c.cf) goto L1ab71;
L1ab6f:
    if (c.tracing) c.traceAt(0x1ab6f);
    // 1501:5b5f  jmp 0x5afa  [x1904]
    goto L1ab0a;
L1ab71:
    if (c.tracing) c.traceAt(0x1ab71);
    // 1501:5b61  ret   [x272]
    c.ip = c.pop16(); return;
L1ab72:
    if (c.tracing) c.traceAt(0x1ab72);
    // 1501:5b62  xor bp, bp  [x272]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:5b64  xor di, di  [x272]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ab76:
    if (c.tracing) c.traceAt(0x1ab76);
    // 1501:5b66  mov si, word ptr ds:[bp - 0x74e1]  [x11968]
    c.si.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b1fu)));
    // 1501:5b6b  mov bx, word ptr ds:[bp - 0x74e5]  [x11968]
    c.b.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.bp.x + 0xffff8b1bu)));
    // 1501:5b70  mov cx, word ptr [0x8b1d]  [x11968]
    c.c.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0xffff8b1du)));
    // 1501:5b74  add si, word ptr [0x8a09]  [x11968]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8a09u)), false));
    // 1501:5b78  mov ax, 0x190  [x11968]
    c.a.x = (uint16_t)(0x190u);
    // 1501:5b7b  imul bx  [x11968]
    c.imul16(c.b.x);
    // 1501:5b7d  idiv si  [x11968]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x5b7du); }   // #DE: int 0, then again
    // 1501:5b7f  add ax, 0x28  [x11968]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x28u, false));
    // 1501:5b82  mov word ptr [di - 0x728d], ax  [x11968]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffff8d73u), c.a.x);
    // 1501:5b86  mov ax, 0x190  [x11968]
    c.a.x = (uint16_t)(0x190u);
    // 1501:5b89  imul cx  [x11968]
    c.imul16(c.c.x);
    // 1501:5b8b  idiv si  [x11968]
    while (!c.idiv16(c.si.x)) { c.d32 = false; c.intr(0, 0x5b8bu); }   // #DE: int 0, then again
    // 1501:5b8d  add ax, 0x2e  [x11968]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x2eu, false));
    // 1501:5b90  mov word ptr [di - 0x71c5], ax  [x11968]
    c.w16(c.dsb + (uint16_t)(c.di.x + 0xffff8e3bu), c.a.x);
    // 1501:5b94  add bp, 6  [x11968]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x6u, false));
    // 1501:5b97  add di, 2  [x11968]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:5b9a  cmp di, 0x58  [x11968]
    c.sub<16>(c.di.x, 0x58u, true);
    // 1501:5b9d  jne 0x5b66  [x11968]
    if (!c.zf) goto L1ab76;
L1abaf:
    if (c.tracing) c.traceAt(0x1abaf);
    // 1501:5b9f  ret   [x272]
    c.ip = c.pop16(); return;
L1abb0:
    if (c.tracing) c.traceAt(0x1abb0);
    // 1501:5ba0  mov word ptr [0x8027], 0xfe0c  [x1]
    c.w16(c.dsb + (uint16_t)(0xffff8027u), 0xfe0cu);
    // 1501:5ba6  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1abb8:
    if (c.tracing) c.traceAt(0x1abb8);
    // 1501:5ba8  mov cx, 0xa  [x910]
    c.c.x = (uint16_t)(0xau);
    // 1501:5bab  mov word ptr [0x8029], 1  [x910]
    c.w16(c.dsb + (uint16_t)(0xffff8029u), 0x1u);
    // 1501:5bb1  xor dx, dx  [x910]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:5bb3  mov ax, word ptr [0x8027]  [x910]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x8027u)));
    // 1501:5bb6  cmp word ptr [0x8027], 0  [x910]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8027u)), 0x0u, true);
    // 1501:5bbb  jns 0x5bd7  [x910]
    if (!c.sf) goto L1abe7;
L1abcd:
    if (c.tracing) c.traceAt(0x1abcd);
    // 1501:5bbd  not dx  [x500]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:5bbf  neg word ptr [0x8029]  [x500]
    c.w16(c.dsb + (uint16_t)(0xffff8029u), c.neg<16>(c.r16(c.dsb + (uint16_t)(0xffff8029u)), false));
    // 1501:5bc3  idiv cx  [x500]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5bc3u); }   // #DE: int 0, then again
    // 1501:5bc5  mov word ptr [0x802b], ax  [x500]
    c.w16(c.dsb + (uint16_t)(0x802bu), c.a.x);
    // 1501:5bc8  neg dx  [x500]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:5bca  mov word ptr [0x802d], dx  [x500]
    c.w16(c.dsb + (uint16_t)(0xffff802du), c.dx_.x);
    // 1501:5bce  neg ax  [x500]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:5bd0  sar ax, 1  [x500]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:5bd2  mov word ptr [0x802f], ax  [x500]
    c.w16(c.dsb + (uint16_t)(0x802fu), c.a.x);
    // 1501:5bd5  jmp 0x5be5  [x500]
    goto L1abf5;
L1abe7:
    if (c.tracing) c.traceAt(0x1abe7);
    // 1501:5bd7  idiv cx  [x410]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x5bd7u); }   // #DE: int 0, then again
    // 1501:5bd9  mov word ptr [0x802b], ax  [x410]
    c.w16(c.dsb + (uint16_t)(0x802bu), c.a.x);
    // 1501:5bdc  mov word ptr [0x802d], dx  [x410]
    c.w16(c.dsb + (uint16_t)(0xffff802du), c.dx_.x);
    // 1501:5be0  sar ax, 1  [x410]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:5be2  mov word ptr [0x802f], ax  [x410]
    c.w16(c.dsb + (uint16_t)(0x802fu), c.a.x);
L1abf5:
    if (c.tracing) c.traceAt(0x1abf5);
    // 1501:5be5  xor bx, bx  [x910]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:5be7  mov cx, 0xa  [x910]
    c.c.x = (uint16_t)(0xau);
L1abfa:
    if (c.tracing) c.traceAt(0x1abfa);
    // 1501:5bea  mov dx, 0  [x9100]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:5bed  add dx, word ptr [0x802b]  [x9100]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0xffff802bu)), false));
    // 1501:5bf1  mov ax, word ptr [0x802d]  [x9100]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(0x802du)));
    // 1501:5bf4  add word ptr [0x802f], ax  [x9100]
    c.w16(c.dsb + (uint16_t)(0xffff802fu), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff802fu)), c.a.x, false));
    // 1501:5bf8  cmp word ptr [0x802f], 0xa  [x9100]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff802fu)), 0xau, true);
    // 1501:5bfd  jl 0x5c08  [x9100]
    if ((c.sf != c.of)) goto L1ac18;
L1ac0f:
    if (c.tracing) c.traceAt(0x1ac0f);
    // 1501:5bff  sub word ptr [0x802f], 0xa  [x4706]
    c.w16(c.dsb + (uint16_t)(0xffff802fu), c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff802fu)), 0xau, false));
    // 1501:5c04  add dx, word ptr [0x8029]  [x4706]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.dsb + (uint16_t)(0xffff8029u)), true));
L1ac18:
    if (c.tracing) c.traceAt(0x1ac18);
    // 1501:5c08  mov word ptr cs:[bx + di + 8], dx  [x9100]
    c.w16(c.csb + (uint16_t)(c.b.x + c.di.x + 0x8u), c.dx_.x);
    // 1501:5c0d  add bx, 2  [x9100]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x2u, true));
    // 1501:5c10  loop 0x5bea  [x9100]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1abfa;
L1ac22:
    if (c.tracing) c.traceAt(0x1ac22);
    // 1501:5c12  add di, 0x16  [x910]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x16u, false));
    // 1501:5c15  add word ptr [0x8027], 1  [x910]
    c.w16(c.dsb + (uint16_t)(0xffff8027u), c.add<16>(c.r16(c.dsb + (uint16_t)(0xffff8027u)), 0x1u, false));
    // 1501:5c1a  cmp di, 0x4e20  [x910]
    c.sub<16>(c.di.x, 0x4e20u, true);
    // 1501:5c1e  jb 0x5ba8  [x910]
    if (c.cf) goto L1abb8;
L1ac30:
    if (c.tracing) c.traceAt(0x1ac30);
    // 1501:5c20  ret   [x1]
    c.ip = c.pop16(); return;
L1ac31:
    if (c.tracing) c.traceAt(0x1ac31);
    // 1501:5c21  xor bx, bx  [x272]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
L1ac33:
    if (c.tracing) c.traceAt(0x1ac33);
    // 1501:5c23  mov ax, word ptr [bx - 0x74a9]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b57u)));
    // 1501:5c27  sub ax, word ptr [bx - 0x74e5]  [x1088]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b1bu)), false));
    // 1501:5c2b  add ax, 0x1f4  [x1088]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1f4u, false));
    // 1501:5c2e  mov bp, 0x16  [x1088]
    c.bp.x = (uint16_t)(0x16u);
    // 1501:5c31  imul bp  [x1088]
    c.imul16(c.bp.x);
    // 1501:5c33  mov si, ax  [x1088]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5c35  mov ax, word ptr [bx - 0x74e5]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b1bu)));
    // 1501:5c39  xor di, di  [x1088]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1ac4b:
    if (c.tracing) c.traceAt(0x1ac4b);
    // 1501:5c3b  mov word ptr [bx + di - 0x74e5], ax  [x11968]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0xffff8b1bu), c.a.x);
    // 1501:5c3f  add ax, word ptr cs:[si + 8]  [x11968]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)), false));
    // 1501:5c44  add si, 2  [x11968]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5c47  add di, 6  [x11968]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:5c4a  cmp di, 0x42  [x11968]
    c.sub<16>(c.di.x, 0x42u, true);
    // 1501:5c4d  jb 0x5c3b  [x11968]
    if (c.cf) goto L1ac4b;
L1ac5f:
    if (c.tracing) c.traceAt(0x1ac5f);
    // 1501:5c4f  mov ax, word ptr [bx - 0x74a5]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b5bu)));
    // 1501:5c53  sub ax, word ptr [bx - 0x74e1]  [x1088]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b1fu)), false));
    // 1501:5c57  add ax, 0x1f4  [x1088]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x1f4u, false));
    // 1501:5c5a  mov bp, 0x16  [x1088]
    c.bp.x = (uint16_t)(0x16u);
    // 1501:5c5d  imul bp  [x1088]
    c.imul16(c.bp.x);
    // 1501:5c5f  mov si, ax  [x1088]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:5c61  mov ax, word ptr [bx - 0x74e1]  [x1088]
    c.a.x = (uint16_t)(c.r16(c.dsb + (uint16_t)(c.b.x + 0xffff8b1fu)));
    // 1501:5c65  mov di, 4  [x1088]
    c.di.x = (uint16_t)(0x4u);
L1ac78:
    if (c.tracing) c.traceAt(0x1ac78);
    // 1501:5c68  mov word ptr [bx + di - 0x74e5], ax  [x11968]
    c.w16(c.dsb + (uint16_t)(c.b.x + c.di.x + 0xffff8b1bu), c.a.x);
    // 1501:5c6c  add ax, word ptr cs:[si + 8]  [x11968]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(c.si.x + 0x8u)), false));
    // 1501:5c71  add si, 2  [x11968]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x2u, false));
    // 1501:5c74  add di, 6  [x11968]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x6u, false));
    // 1501:5c77  cmp di, 0x42  [x11968]
    c.sub<16>(c.di.x, 0x42u, true);
    // 1501:5c7a  jb 0x5c68  [x11968]
    if (c.cf) goto L1ac78;
L1ac8c:
    if (c.tracing) c.traceAt(0x1ac8c);
    // 1501:5c7c  add bx, 0x42  [x1088]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x42u, false));
    // 1501:5c7f  cmp bx, 0x108  [x1088]
    c.sub<16>(c.b.x, 0x108u, true);
    // 1501:5c83  jb 0x5c23  [x1088]
    if (c.cf) goto L1ac33;
L1ac95:
    if (c.tracing) c.traceAt(0x1ac95);
    // 1501:5c85  ret   [x272]
    c.ip = c.pop16(); return;
L1ac96:
    if (c.tracing) c.traceAt(0x1ac96);
    // 1501:5c86  cmp word ptr [0x8025], 0x46  [x7]
    c.sub<16>(c.r16(c.dsb + (uint16_t)(0xffff8025u)), 0x46u, true);
    // 1501:5c8b  jae 0x5ccf  [x7]
    if (!c.cf) goto L1acdf;
L1ac9d:
    if (c.tracing) c.traceAt(0x1ac9d);
    // 1501:5c8d  push es  [x7]
    c.push16(c.es);
    // 1501:5c8e  mov ax, 0xa000  [x7]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:5c91  mov es, ax  [x7]
    c.loadEs(c.a.x);
    // 1501:5c93  mov di, 0x235  [x7]
    c.di.x = (uint16_t)(0x235u);
    // 1501:5c96  add di, word ptr [0x8025]  [x7]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffff8025u)), false));
    // 1501:5c9a  mov si, 0xcda6  [x7]
    c.si.x = (uint16_t)(0xcda6u);
    // 1501:5c9d  add si, word ptr [0x8023]  [x7]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8023u)), true));
    // 1501:5ca1  mov cx, 0x50  [x7]
    c.c.x = (uint16_t)(0x50u);
L1acb4:
    if (c.tracing) c.traceAt(0x1acb4);
    // 1501:5ca4  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5ca5u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5ca5  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5ca6u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5ca6  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5ca7u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5ca7  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5ca8u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5ca8  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5ca9u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5ca9  add di, 0x46  [x560]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x46u, true));
    // 1501:5cac  loop 0x5ca4  [x560]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1acb4;
L1acbe:
    if (c.tracing) c.traceAt(0x1acbe);
    // 1501:5cae  mov ax, 0xa800  [x7]
    c.a.x = (uint16_t)(0xa800u);
    // 1501:5cb1  mov es, ax  [x7]
    c.loadEs(c.a.x);
    // 1501:5cb3  mov di, 0x235  [x7]
    c.di.x = (uint16_t)(0x235u);
    // 1501:5cb6  add di, word ptr [0x8025]  [x7]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, c.r16(c.dsb + (uint16_t)(0xffff8025u)), false));
    // 1501:5cba  mov si, 0xcda6  [x7]
    c.si.x = (uint16_t)(0xcda6u);
    // 1501:5cbd  add si, word ptr [0x8023]  [x7]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, c.r16(c.dsb + (uint16_t)(0xffff8023u)), true));
    // 1501:5cc1  mov cx, 0x50  [x7]
    c.c.x = (uint16_t)(0x50u);
L1acd4:
    if (c.tracing) c.traceAt(0x1acd4);
    // 1501:5cc4  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5cc5u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5cc5  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5cc6u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5cc6  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5cc7u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5cc7  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5cc8u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5cc8  movsw word ptr es:[di], word ptr [si]  [x560]
    c.ip = 0x5cc9u; c.d32 = false; c.movs<16, false>(c.dsb, 0);
    // 1501:5cc9  add di, 0x46  [x560]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x46u, true));
    // 1501:5ccc  loop 0x5cc4  [x560]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1acd4;
L1acde:
    if (c.tracing) c.traceAt(0x1acde);
    // 1501:5cce  pop es  [x7]
    c.loadEs((uint16_t)c.pop16());
L1acdf:
    if (c.tracing) c.traceAt(0x1acdf);
    // 1501:5ccf  ret   [x7]
    c.ip = c.pop16(); return;
L1ace0:
    if (c.tracing) c.traceAt(0x1ace0);
    // 1501:5cd0  push es  [x788]
    c.ip = 0x5cd0u; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:5cd1  mov ax, word ptr cs:[0x55fa]  [x788]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55fau)));
    // 1501:5cd5  mov es, ax  [x788]
    c.loadEs(c.a.x);
    // 1501:5cd7  mov si, word ptr cs:[0x55fc]  [x788]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x55fcu)));
    // 1501:5cdc  mov dx, word ptr es:[si]  [x788]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:5cdf  pop es  [x788]
    c.loadEs((uint16_t)c.pop16());
    // 1501:5ce0  cmp dx, 0  [x788]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:5ce3  je 0x5cd0  [x788]
    if (c.zf) goto L1ace0;
L1acf5:
    if (c.tracing) c.traceAt(0x1acf5);
    // 1501:5ce5  mov di, 0xd140  [x1]
    c.di.x = (uint16_t)(0xd140u);
    // 1501:5ce8  mov si, 0xe386  [x1]
    c.si.x = (uint16_t)(0xe386u);
    // 1501:5ceb  mov cx, 0x42  [x1]
    c.c.x = (uint16_t)(0x42u);
L1acfe:
    if (c.tracing) c.traceAt(0x1acfe);
    // 1501:5cee  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cefu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cef  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf0u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf0  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf1u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf1  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf2u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf2  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf3u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf3  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf4u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf4  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf5u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf5  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf6u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf6  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf7u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf7  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf8u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf8  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cf9u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cf9  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cfau; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cfa  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cfbu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cfb  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cfcu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cfc  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cfdu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cfd  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cfeu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cfe  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5cffu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5cff  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d00u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d00  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d01u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d01  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d02u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d02  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d03u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d03  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d04u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d04  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d05u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d05  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d06u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d06  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d07u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d07  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d08u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d08  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d09u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d09  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0au; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0a  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0bu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0b  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0cu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0c  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0du; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0d  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0eu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0e  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d0fu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d0f  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d10u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d10  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d11u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d11  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d12u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d12  movsb byte ptr es:[di], byte ptr [si]  [x66]
    c.ip = 0x5d13u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:5d13  add di, 0x2b  [x66]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2bu, true));
    // 1501:5d16  loop 0x5cee  [x66]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1acfe;
L1ad28:
    if (c.tracing) c.traceAt(0x1ad28);
    // 1501:5d18  mov cx, 0x18  [x1]
    c.c.x = (uint16_t)(0x18u);
L1ad2b:
    if (c.tracing) c.traceAt(0x1ad2b);
    // 1501:5d1b  call 0x58c1  [x24]
    c.push16(0x5d1eu); code_1(c, 0x1a8d1u); if (c.ip != 0x5d1eu) c.badReturn(0x1ad2b);
L1ad2e:
    if (c.tracing) c.traceAt(0x1ad2e);
    // 1501:5d1e  loop 0x5d1b  [x24]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ad2b;
L1ad30:
    if (c.tracing) c.traceAt(0x1ad30);
    // 1501:5d20  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5d23  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:5d26  out dx, ax  [x1]
    c.ip = 0x5d27u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d27  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
L1ad3a:
    if (c.tracing) c.traceAt(0x1ad3a);
    // 1501:5d2a  push cx  [x40]
    c.push16(c.c.x);
    // 1501:5d2b  call 0x58c1  [x40]
    c.push16(0x5d2eu); code_1(c, 0x1a8d1u); if (c.ip != 0x5d2eu) c.badReturn(0x1ad3b);
L1ad3e:
    if (c.tracing) c.traceAt(0x1ad3e);
    // 1501:5d2e  mov ax, 0xff  [x40]
    c.a.x = (uint16_t)(0xffu);
    // 1501:5d31  mov di, cx  [x40]
    c.di.x = (uint16_t)(c.c.x);
    // 1501:5d33  add di, 0x7fff  [x40]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x7fffu, true));
    // 1501:5d37  mov cx, 0x15e  [x40]
    c.c.x = (uint16_t)(0x15eu);
L1ad4a:
    if (c.tracing) c.traceAt(0x1ad4a);
    // 1501:5d3a  mov byte ptr es:[di], al  [x14000]
    c.w8(c.esb + (uint16_t)(c.di.x), c.a.l);
    // 1501:5d3d  mov byte ptr es:[di + 0x28], ah  [x14000]
    c.w8(c.esb + (uint16_t)(c.di.x + 0x28u), c.a.h);
    // 1501:5d41  add di, 0x50  [x14000]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x50u, true));
    // 1501:5d44  loop 0x5d3a  [x14000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ad4a;
L1ad56:
    if (c.tracing) c.traceAt(0x1ad56);
    // 1501:5d46  pop cx  [x40]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:5d47  loop 0x5d2a  [x40]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1ad3a;
L1ad59:
    if (c.tracing) c.traceAt(0x1ad59);
    // 1501:5d49  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:5d4c  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:5d4e  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5d51  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:5d54  out dx, ax  [x1]
    c.ip = 0x5d55u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d55  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:5d58  mov cx, 0x28  [x1]
    c.c.x = (uint16_t)(0x28u);
    // 1501:5d5b  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1ad6d:
    if (c.tracing) c.traceAt(0x1ad6d);
    // 1501:5d5d  rep stosw word ptr es:[di], ax  [x41]
    c.stos<16, false>(1);
L1ad6f:
    if (c.tracing) c.traceAt(0x1ad6f);
    // 1501:5d5f  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:5d62  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:5d65  out dx, ax  [x1]
    c.ip = 0x5d66u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d66  mov di, 0  [x1]
    c.di.x = (uint16_t)(0x0u);
    // 1501:5d69  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
    // 1501:5d6c  mov ax, 0xffff  [x1]
    c.a.x = (uint16_t)(0xffffu);
L1ad7f:
    if (c.tracing) c.traceAt(0x1ad7f);
    // 1501:5d6f  rep stosw word ptr es:[di], ax  [x21]
    c.stos<16, false>(1);
L1ad81:
    if (c.tracing) c.traceAt(0x1ad81);
    // 1501:5d71  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
    // 1501:5d73  mov cx, 0x14  [x1]
    c.c.x = (uint16_t)(0x14u);
L1ad86:
    if (c.tracing) c.traceAt(0x1ad86);
    // 1501:5d76  rep stosw word ptr es:[di], ax  [x21]
    c.stos<16, false>(1);
L1ad88:
    if (c.tracing) c.traceAt(0x1ad88);
    // 1501:5d78  mov al, 0x11  [x1]
    c.a.l = (uint8_t)(0x11u);
    // 1501:5d7a  mov cx, 0  [x1]
    c.c.x = (uint16_t)(0x0u);
    // 1501:5d7d  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:5d80  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:5d82  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:5d84  out dx, ax  [x1]
    c.ip = 0x5d85u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d85  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:5d87  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:5d89  out dx, ax  [x1]
    c.ip = 0x5d8au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d8a  call 0x58c1  [x1]
    c.push16(0x5d8du); code_1(c, 0x1a8d1u); if (c.ip != 0x5d8du) c.badReturn(0x1ad9a);
L1ad9d:
    if (c.tracing) c.traceAt(0x1ad9d);
    // 1501:5d8d  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:5d90  mov ax, 0x13  [x1]
    c.a.x = (uint16_t)(0x13u);
    // 1501:5d93  out dx, ax  [x1]
    c.ip = 0x5d94u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:5d94  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_1(1, {0x15010, 0x1a610, 0x1a61f, 0x1a624, 0x1a62d, 0x1a636, 0x1a646, 0x1a654, 0x1a656, 0x1a659, 0x1a65f, 0x1a668, 0x1a674, 0x1a67c, 0x1a67f, 0x1a682, 0x1a685, 0x1a68a, 0x1a68d, 0x1a690, 0x1a692, 0x1a69c, 0x1a69f, 0x1a6a7, 0x1a6c0, 0x1a6c8, 0x1a6e1, 0x1a6eb, 0x1a6f1, 0x1a70a, 0x1a710, 0x1a729, 0x1a731, 0x1a746, 0x1a765, 0x1a767, 0x1a76b, 0x1a76e, 0x1a771, 0x1a794, 0x1a7a9, 0x1a7be, 0x1a7d3, 0x1a7fc, 0x1a7fe, 0x1a804, 0x1a80a, 0x1a812, 0x1a81c, 0x1a81e, 0x1a820, 0x1a82a, 0x1a836, 0x1a843, 0x1a846, 0x1a869, 0x1a871, 0x1a883, 0x1a88b, 0x1a893, 0x1a8a0, 0x1a8c3, 0x1a8cb, 0x1a8ce, 0x1a8d1, 0x1a8d4, 0x1a8d5, 0x1a8d9, 0x1a8da, 0x1a8de, 0x1a8df, 0x1a8ed, 0x1a8ee, 0x1a8f7, 0x1a905, 0x1a907, 0x1a90d, 0x1a947, 0x1a952, 0x1a953, 0x1a991, 0x1a9db, 0x1a9e4, 0x1a9f8, 0x1a9fa, 0x1aa04, 0x1aa0e, 0x1aa14, 0x1aa19, 0x1aa2f, 0x1aa36, 0x1aa3d, 0x1aa3e, 0x1aa64, 0x1aa6c, 0x1aa70, 0x1aa7e, 0x1aa83, 0x1aa85, 0x1aa86, 0x1aa91, 0x1aac0, 0x1aad0, 0x1aad8, 0x1aae5, 0x1aaf1, 0x1aaf2, 0x1ab06, 0x1ab0a, 0x1ab5e, 0x1ab63, 0x1ab67, 0x1ab6f, 0x1ab71, 0x1ab72, 0x1ab76, 0x1abaf, 0x1abb0, 0x1abb8, 0x1abcd, 0x1abe7, 0x1abf5, 0x1abfa, 0x1ac0f, 0x1ac18, 0x1ac22, 0x1ac30, 0x1ac31, 0x1ac33, 0x1ac4b, 0x1ac5f, 0x1ac78, 0x1ac8c, 0x1ac95, 0x1ac96, 0x1ac9d, 0x1acb4, 0x1acbe, 0x1acd4, 0x1acde, 0x1acdf, 0x1ace0, 0x1acf5, 0x1acfe, 0x1ad28, 0x1ad2b, 0x1ad2e, 0x1ad30, 0x1ad3a, 0x1ad3e, 0x1ad4a, 0x1ad56, 0x1ad59, 0x1ad6d, 0x1ad6f, 0x1ad7f, 0x1ad81, 0x1ad86, 0x1ad88, 0x1ad9d}, code_1);

}  // namespace show
