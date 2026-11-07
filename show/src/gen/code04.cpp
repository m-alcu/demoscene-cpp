// Part 3 (ROT.COD), translated from the code the harness ran (translate.py).
// Generated: do not edit.
#include <cstring>

#include "cpu.h"

namespace show {

static void code_4(Cpu& c, uint32_t entry) {
    uint32_t t = entry;
dispatch:
    switch (t) {
    case 0x15010: goto L15010;
    case 0x1bba8: goto L1bba8;
    case 0x1bbc8: goto L1bbc8;
    case 0x1bbd0: goto L1bbd0;
    case 0x1bbd3: goto L1bbd3;
    case 0x1bbdd: goto L1bbdd;
    case 0x1bbe8: goto L1bbe8;
    case 0x1bbf8: goto L1bbf8;
    case 0x1bbfe: goto L1bbfe;
    case 0x1bc0e: goto L1bc0e;
    case 0x1bc14: goto L1bc14;
    case 0x1bc24: goto L1bc24;
    case 0x1bc2a: goto L1bc2a;
    case 0x1bc3a: goto L1bc3a;
    case 0x1bc40: goto L1bc40;
    case 0x1bc53: goto L1bc53;
    case 0x1bc59: goto L1bc59;
    case 0x1bc69: goto L1bc69;
    case 0x1bc6f: goto L1bc6f;
    case 0x1bc7f: goto L1bc7f;
    case 0x1bc85: goto L1bc85;
    case 0x1bc95: goto L1bc95;
    case 0x1bc9b: goto L1bc9b;
    case 0x1bc9f: goto L1bc9f;
    case 0x1bcaa: goto L1bcaa;
    case 0x1bcad: goto L1bcad;
    case 0x1bcc2: goto L1bcc2;
    case 0x1bcc8: goto L1bcc8;
    case 0x1bcc9: goto L1bcc9;
    case 0x1bccd: goto L1bccd;
    case 0x1bcce: goto L1bcce;
    case 0x1bcd2: goto L1bcd2;
    case 0x1bcd4: goto L1bcd4;
    case 0x1bce8: goto L1bce8;
    case 0x1bcf5: goto L1bcf5;
    case 0x1bcfb: goto L1bcfb;
    case 0x1bd0d: goto L1bd0d;
    case 0x1bd0e: goto L1bd0e;
    case 0x1bd12: goto L1bd12;
    case 0x1bd13: goto L1bd13;
    case 0x1bd17: goto L1bd17;
    case 0x1bd3e: goto L1bd3e;
    case 0x1bd47: goto L1bd47;
    case 0x1bd4a: goto L1bd4a;
    case 0x1bd4d: goto L1bd4d;
    case 0x1bd50: goto L1bd50;
    case 0x1bd61: goto L1bd61;
    case 0x1bd64: goto L1bd64;
    case 0x1bd67: goto L1bd67;
    case 0x1bd71: goto L1bd71;
    case 0x1bd82: goto L1bd82;
    case 0x1bd85: goto L1bd85;
    case 0x1bd8f: goto L1bd8f;
    case 0x1bde5: goto L1bde5;
    case 0x1bdfb: goto L1bdfb;
    case 0x1be0a: goto L1be0a;
    case 0x1be11: goto L1be11;
    case 0x1be1e: goto L1be1e;
    case 0x1be21: goto L1be21;
    case 0x1be2a: goto L1be2a;
    case 0x1be32: goto L1be32;
    case 0x1be37: goto L1be37;
    case 0x1be39: goto L1be39;
    case 0x1be3c: goto L1be3c;
    case 0x1be6e: goto L1be6e;
    case 0x1be74: goto L1be74;
    case 0x1be7f: goto L1be7f;
    case 0x1be85: goto L1be85;
    case 0x1be8d: goto L1be8d;
    case 0x1be8e: goto L1be8e;
    case 0x1be99: goto L1be99;
    case 0x1bec0: goto L1bec0;
    case 0x1bec9: goto L1bec9;
    case 0x1becb: goto L1becb;
    case 0x1bed6: goto L1bed6;
    case 0x1befd: goto L1befd;
    case 0x1bf06: goto L1bf06;
    case 0x1bf08: goto L1bf08;
    case 0x1bf0f: goto L1bf0f;
    case 0x1bf1f: goto L1bf1f;
    case 0x1bf26: goto L1bf26;
    case 0x1bf56: goto L1bf56;
    case 0x1c097: goto L1c097;
    case 0x1c0af: goto L1c0af;
    case 0x1c0c7: goto L1c0c7;
    case 0x1c0d2: goto L1c0d2;
    case 0x1c0e1: goto L1c0e1;
    case 0x1c0f8: goto L1c0f8;
    case 0x1c104: goto L1c104;
    case 0x1c120: goto L1c120;
    case 0x1c12c: goto L1c12c;
    case 0x1c136: goto L1c136;
    case 0x1c137: goto L1c137;
    case 0x1c14f: goto L1c14f;
    case 0x1c167: goto L1c167;
    case 0x1c172: goto L1c172;
    case 0x1c181: goto L1c181;
    case 0x1c198: goto L1c198;
    case 0x1c1a4: goto L1c1a4;
    case 0x1c1c5: goto L1c1c5;
    case 0x1c1d1: goto L1c1d1;
    case 0x1c1e0: goto L1c1e0;
    case 0x1c1e1: goto L1c1e1;
    case 0x1c359: goto L1c359;
    case 0x1c4d1: goto L1c4d1;
    case 0x1c4d3: goto L1c4d3;
    case 0x1c508: goto L1c508;
    case 0x1c50d: goto L1c50d;
    case 0x1c545: goto L1c545;
    case 0x1c546: goto L1c546;
    case 0x1c5eb: goto L1c5eb;
    case 0x1c5f0: goto L1c5f0;
    case 0x1c657: goto L1c657;
    case 0x1c662: goto L1c662;
    case 0x1c6a7: goto L1c6a7;
    case 0x1c6c5: goto L1c6c5;
    case 0x1c6d6: goto L1c6d6;
    case 0x1c6e0: goto L1c6e0;
    case 0x1c6f6: goto L1c6f6;
    case 0x1c701: goto L1c701;
    case 0x1c70b: goto L1c70b;
    case 0x1c730: goto L1c730;
    case 0x1c74e: goto L1c74e;
    case 0x1c75f: goto L1c75f;
    case 0x1c769: goto L1c769;
    case 0x1c77f: goto L1c77f;
    case 0x1c78a: goto L1c78a;
    case 0x1c794: goto L1c794;
    case 0x1c795: goto L1c795;
    case 0x1c79e: goto L1c79e;
    case 0x1c7b6: goto L1c7b6;
    case 0x1c7d4: goto L1c7d4;
    case 0x1c7e5: goto L1c7e5;
    case 0x1c7ea: goto L1c7ea;
    case 0x1c803: goto L1c803;
    case 0x1c80e: goto L1c80e;
    case 0x1c818: goto L1c818;
    case 0x1c82b: goto L1c82b;
    case 0x1c82c: goto L1c82c;
    case 0x1c833: goto L1c833;
    case 0x1c892: goto L1c892;
    case 0x1c893: goto L1c893;
    case 0x1c8a3: goto L1c8a3;
    case 0x1c8c3: goto L1c8c3;
    case 0x1c8c4: goto L1c8c4;
    case 0x1c8de: goto L1c8de;
    case 0x1c8e9: goto L1c8e9;
    case 0x1c8ec: goto L1c8ec;
    case 0x1c8ee: goto L1c8ee;
    case 0x1c8f1: goto L1c8f1;
    case 0x1c8f5: goto L1c8f5;
    case 0x1c907: goto L1c907;
    case 0x1c90f: goto L1c90f;
    case 0x1c911: goto L1c911;
    case 0x1c914: goto L1c914;
    case 0x1c917: goto L1c917;
    case 0x1c919: goto L1c919;
    case 0x1c91c: goto L1c91c;
    case 0x1c91d: goto L1c91d;
    case 0x1c921: goto L1c921;
    case 0x1c922: goto L1c922;
    case 0x1c926: goto L1c926;
    case 0x1c927: goto L1c927;
    case 0x1c935: goto L1c935;
    case 0x1c938: goto L1c938;
    case 0x1c93a: goto L1c93a;
    case 0x1c93f: goto L1c93f;
    case 0x1c943: goto L1c943;
    case 0x1c949: goto L1c949;
    case 0x1c94e: goto L1c94e;
    case 0x1c954: goto L1c954;
    case 0x1c957: goto L1c957;
    default: c.callLinear(t); return;
    }
L15010:
    if (c.tracing) c.traceAt(0x15010);
    // 1501:0000  jmp 0x6b98  [x1]
    goto L1bba8;
L1bba8:
    if (c.tracing) c.traceAt(0x1bba8);
    // 1501:6b98  mov word ptr cs:[0x6b92], cx  [x1]
    c.w16(c.csb + (uint16_t)(0x6b92u), c.c.x);
    // 1501:6b9d  mov word ptr cs:[0x6b94], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x6b94u), c.dx_.x);
    // 1501:6ba2  sub dx, 2  [x1]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, 0x2u, false));
    // 1501:6ba5  mov word ptr cs:[0x6b96], dx  [x1]
    c.w16(c.csb + (uint16_t)(0x6b96u), c.dx_.x);
    // 1501:6baa  mov word ptr cs:[0x6b90], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x6b90u), c.a.x);
    // 1501:6bae  mov ax, 0xa000  [x1]
    c.a.x = (uint16_t)(0xa000u);
    // 1501:6bb1  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:6bb3  sub si, si  [x1]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.si.x, true));
    // 1501:6bb5  mov cx, 0xfa00  [x1]
    c.c.x = (uint16_t)(0xfa00u);
L1bbc8:
    if (c.tracing) c.traceAt(0x1bbc8);
    // 1501:6bb8  cmp byte ptr [si], 0  [x64000]
    c.sub<8>(c.r8(c.dsb + (uint16_t)(c.si.x)), 0x0u, true);
    // 1501:6bbb  jne 0x6bc0  [x64000]
    if (!c.zf) goto L1bbd0;
    c.notTranslated(0x1bbcd, "fall-through");
L1bbd0:
    if (c.tracing) c.traceAt(0x1bbd0);
    // 1501:6bc0  inc si  [x64000]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, true));
    // 1501:6bc1  loop 0x6bb8  [x64000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bbc8;
L1bbd3:
    if (c.tracing) c.traceAt(0x1bbd3);
    // 1501:6bc3  mov dx, 0x3c8  [x1]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:6bc6  mov al, 1  [x1]
    c.a.l = (uint8_t)(0x1u);
    // 1501:6bc8  out dx, al  [x1]
    c.ip = 0x6bc9u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:6bc9  inc dx  [x1]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:6bca  mov cx, 0xff  [x1]
    c.c.x = (uint16_t)(0xffu);
L1bbdd:
    if (c.tracing) c.traceAt(0x1bbdd);
    // 1501:6bcd  mov al, 0x14  [x255]
    c.a.l = (uint8_t)(0x14u);
    // 1501:6bcf  out dx, al  [x255]
    c.ip = 0x6bd0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:6bd0  mov al, 6  [x255]
    c.a.l = (uint8_t)(0x6u);
    // 1501:6bd2  out dx, al  [x255]
    c.ip = 0x6bd3u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:6bd3  mov al, 0x14  [x255]
    c.a.l = (uint8_t)(0x14u);
    // 1501:6bd5  out dx, al  [x255]
    c.ip = 0x6bd6u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:6bd6  loop 0x6bcd  [x255]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bbdd;
L1bbe8:
    if (c.tracing) c.traceAt(0x1bbe8);
    // 1501:6bd8  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6bdb  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:6bde  out dx, ax  [x1]
    c.ip = 0x6bdfu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6bdf  mov di, 0x1f40  [x1]
    c.di.x = (uint16_t)(0x1f40u);
    // 1501:6be2  mov si, 0  [x1]
    c.si.x = (uint16_t)(0x0u);
    // 1501:6be5  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
L1bbf8:
    if (c.tracing) c.traceAt(0x1bbf8);
    // 1501:6be8  movsb byte ptr es:[di], byte ptr [si]  [x16000]
    c.ip = 0x6be9u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6be9  add si, 3  [x16000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6bec  loop 0x6be8  [x16000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bbf8;
L1bbfe:
    if (c.tracing) c.traceAt(0x1bbfe);
    // 1501:6bee  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6bf1  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:6bf4  out dx, ax  [x1]
    c.ip = 0x6bf5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6bf5  mov si, 1  [x1]
    c.si.x = (uint16_t)(0x1u);
    // 1501:6bf8  mov di, 0x1f40  [x1]
    c.di.x = (uint16_t)(0x1f40u);
    // 1501:6bfb  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
L1bc0e:
    if (c.tracing) c.traceAt(0x1bc0e);
    // 1501:6bfe  movsb byte ptr es:[di], byte ptr [si]  [x16000]
    c.ip = 0x6bffu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6bff  add si, 3  [x16000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c02  loop 0x6bfe  [x16000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc0e;
L1bc14:
    if (c.tracing) c.traceAt(0x1bc14);
    // 1501:6c04  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c07  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:6c0a  out dx, ax  [x1]
    c.ip = 0x6c0bu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c0b  mov si, 2  [x1]
    c.si.x = (uint16_t)(0x2u);
    // 1501:6c0e  mov di, 0x1f40  [x1]
    c.di.x = (uint16_t)(0x1f40u);
    // 1501:6c11  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
L1bc24:
    if (c.tracing) c.traceAt(0x1bc24);
    // 1501:6c14  movsb byte ptr es:[di], byte ptr [si]  [x16000]
    c.ip = 0x6c15u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c15  add si, 3  [x16000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c18  loop 0x6c14  [x16000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc24;
L1bc2a:
    if (c.tracing) c.traceAt(0x1bc2a);
    // 1501:6c1a  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c1d  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:6c20  out dx, ax  [x1]
    c.ip = 0x6c21u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c21  mov si, 3  [x1]
    c.si.x = (uint16_t)(0x3u);
    // 1501:6c24  mov di, 0x1f40  [x1]
    c.di.x = (uint16_t)(0x1f40u);
    // 1501:6c27  mov cx, 0x3e80  [x1]
    c.c.x = (uint16_t)(0x3e80u);
L1bc3a:
    if (c.tracing) c.traceAt(0x1bc3a);
    // 1501:6c2a  movsb byte ptr es:[di], byte ptr [si]  [x16000]
    c.ip = 0x6c2bu; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c2b  add si, 3  [x16000]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c2e  loop 0x6c2a  [x16000]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc3a;
L1bc40:
    if (c.tracing) c.traceAt(0x1bc40);
    // 1501:6c30  push ds  [x1]
    c.push16(c.ds);
    // 1501:6c31  push cs  [x1]
    c.push16(c.cs);
    // 1501:6c32  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:6c33  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c36  mov ax, 0x102  [x1]
    c.a.x = (uint16_t)(0x102u);
    // 1501:6c39  out dx, ax  [x1]
    c.ip = 0x6c3au; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c3a  mov di, 0x5dc0  [x1]
    c.di.x = (uint16_t)(0x5dc0u);
    // 1501:6c3d  mov si, 0xc  [x1]
    c.si.x = (uint16_t)(0xcu);
    // 1501:6c40  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1bc53:
    if (c.tracing) c.traceAt(0x1bc53);
    // 1501:6c43  movsb byte ptr es:[di], byte ptr [si]  [x3200]
    c.ip = 0x6c44u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c44  add si, 3  [x3200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c47  loop 0x6c43  [x3200]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc53;
L1bc59:
    if (c.tracing) c.traceAt(0x1bc59);
    // 1501:6c49  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c4c  mov ax, 0x202  [x1]
    c.a.x = (uint16_t)(0x202u);
    // 1501:6c4f  out dx, ax  [x1]
    c.ip = 0x6c50u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c50  mov di, 0x5dc0  [x1]
    c.di.x = (uint16_t)(0x5dc0u);
    // 1501:6c53  mov si, 0xd  [x1]
    c.si.x = (uint16_t)(0xdu);
    // 1501:6c56  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1bc69:
    if (c.tracing) c.traceAt(0x1bc69);
    // 1501:6c59  movsb byte ptr es:[di], byte ptr [si]  [x3200]
    c.ip = 0x6c5au; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c5a  add si, 3  [x3200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c5d  loop 0x6c59  [x3200]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc69;
L1bc6f:
    if (c.tracing) c.traceAt(0x1bc6f);
    // 1501:6c5f  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c62  mov ax, 0x402  [x1]
    c.a.x = (uint16_t)(0x402u);
    // 1501:6c65  out dx, ax  [x1]
    c.ip = 0x6c66u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c66  mov di, 0x5dc0  [x1]
    c.di.x = (uint16_t)(0x5dc0u);
    // 1501:6c69  mov si, 0xe  [x1]
    c.si.x = (uint16_t)(0xeu);
    // 1501:6c6c  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1bc7f:
    if (c.tracing) c.traceAt(0x1bc7f);
    // 1501:6c6f  movsb byte ptr es:[di], byte ptr [si]  [x3200]
    c.ip = 0x6c70u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c70  add si, 3  [x3200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c73  loop 0x6c6f  [x3200]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc7f;
L1bc85:
    if (c.tracing) c.traceAt(0x1bc85);
    // 1501:6c75  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6c78  mov ax, 0x802  [x1]
    c.a.x = (uint16_t)(0x802u);
    // 1501:6c7b  out dx, ax  [x1]
    c.ip = 0x6c7cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c7c  mov di, 0x5dc0  [x1]
    c.di.x = (uint16_t)(0x5dc0u);
    // 1501:6c7f  mov si, 0xf  [x1]
    c.si.x = (uint16_t)(0xfu);
    // 1501:6c82  mov cx, 0xc80  [x1]
    c.c.x = (uint16_t)(0xc80u);
L1bc95:
    if (c.tracing) c.traceAt(0x1bc95);
    // 1501:6c85  movsb byte ptr es:[di], byte ptr [si]  [x3200]
    c.ip = 0x6c86u; c.d32 = false; c.movs<8, false>(c.dsb, 0);
    // 1501:6c86  add si, 3  [x3200]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x3u, true));
    // 1501:6c89  loop 0x6c85  [x3200]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bc95;
L1bc9b:
    if (c.tracing) c.traceAt(0x1bc9b);
    // 1501:6c8b  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:6c8c  call 0x7917  [x1]
    c.push16(0x6c8fu); code_4(c, 0x1c927u); if (c.ip != 0x6c8fu) c.badReturn(0x1bc9c);
L1bc9f:
    if (c.tracing) c.traceAt(0x1bc9f);
    // 1501:6c8f  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:6c92  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 1501:6c94  mov ah, 4  [x1]
    c.a.h = (uint8_t)(0x4u);
    // 1501:6c96  out dx, ax  [x1]
    c.ip = 0x6c97u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6c97  call 0x7785  [x1]
    c.push16(0x6c9au); code_4(c, 0x1c795u); if (c.ip != 0x6c9au) c.badReturn(0x1bca7);
L1bcaa:
    if (c.tracing) c.traceAt(0x1bcaa);
    // 1501:6c9a  call 0x781c  [x1]
    c.push16(0x6c9du); code_4(c, 0x1c82cu); if (c.ip != 0x6c9du) c.badReturn(0x1bcaa);
L1bcad:
    if (c.tracing) c.traceAt(0x1bcad);
    // 1501:6c9d  push es  [x1134]
    c.ip = 0x6c9du; c.d32 = false; c.m.spinWait();      // (the part waits for the player's sync: on to the next interrupt)
    c.push16(c.es);
    // 1501:6c9e  mov ax, word ptr cs:[0x6b92]  [x1134]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b92u)));
    // 1501:6ca2  mov es, ax  [x1134]
    c.loadEs(c.a.x);
    // 1501:6ca4  mov si, word ptr cs:[0x6b94]  [x1134]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b94u)));
    // 1501:6ca9  mov dx, word ptr es:[si]  [x1134]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:6cac  pop es  [x1134]
    c.loadEs((uint16_t)c.pop16());
    // 1501:6cad  cmp dx, 0  [x1134]
    c.sub<16>(c.dx_.x, 0x0u, true);
    // 1501:6cb0  je 0x6c9d  [x1134]
    if (c.zf) goto L1bcad;
L1bcc2:
    if (c.tracing) c.traceAt(0x1bcc2);
    // 1501:6cb2  mov cx, 0x21  [x1]
    c.c.x = (uint16_t)(0x21u);
    // 1501:6cb5  mov dx, 0x3da  [x1]
    c.dx_.x = (uint16_t)(0x3dau);
L1bcc8:
    if (c.tracing) c.traceAt(0x1bcc8);
    // 1501:6cb8  in al, dx  [x124]
    c.ip = 0x6cb9u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1bcc9:
    if (c.tracing) c.traceAt(0x1bcc9);
    // 1501:6cb9  and al, 8  [x165]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:6cbb  jne 0x6cb8  [x165]
    if (!c.zf) goto L1bcc8;
L1bccd:
    if (c.tracing) c.traceAt(0x1bccd);
    // 1501:6cbd  in al, dx  [x1626]
    c.ip = 0x6cbeu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1bcce:
    if (c.tracing) c.traceAt(0x1bcce);
    // 1501:6cbe  and al, 8  [x2157]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:6cc0  je 0x6cbd  [x2157]
    if (c.zf) goto L1bccd;
L1bcd2:
    if (c.tracing) c.traceAt(0x1bcd2);
    // 1501:6cc2  loop 0x6cb8  [x33]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bcc8;
L1bcd4:
    if (c.tracing) c.traceAt(0x1bcd4);
    // 1501:6cc4  push es  [x1]
    c.push16(c.es);
    // 1501:6cc5  mov ax, word ptr cs:[0x6b92]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b92u)));
    // 1501:6cc9  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:6ccb  mov si, word ptr cs:[0x6b96]  [x1]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b96u)));
    // 1501:6cd0  mov ax, word ptr es:[si]  [x1]
    c.a.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:6cd3  mov word ptr cs:[8], ax  [x1]
    c.w16(c.csb + (uint16_t)(0x8u), c.a.x);
    // 1501:6cd7  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
L1bce8:
    if (c.tracing) c.traceAt(0x1bce8);
    // 1501:6cd8  mov ax, es  [x204]
    c.a.x = (uint16_t)(c.es);
    // 1501:6cda  mov bx, 0xa800  [x204]
    c.b.x = (uint16_t)(0xa800u);
    // 1501:6cdd  mov cx, 0  [x204]
    c.c.x = (uint16_t)(0x0u);
    // 1501:6ce0  cmp ax, 0xa000  [x204]
    c.sub<16>(c.a.x, 0xa000u, true);
    // 1501:6ce3  je 0x6ceb  [x204]
    if (c.zf) goto L1bcfb;
L1bcf5:
    if (c.tracing) c.traceAt(0x1bcf5);
    // 1501:6ce5  mov bx, 0xa000  [x102]
    c.b.x = (uint16_t)(0xa000u);
    // 1501:6ce8  mov cx, 0x8000  [x102]
    c.c.x = (uint16_t)(0x8000u);
L1bcfb:
    if (c.tracing) c.traceAt(0x1bcfb);
    // 1501:6ceb  mov es, bx  [x204]
    c.loadEs(c.b.x);
    // 1501:6ced  mov dx, 0x3d4  [x204]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:6cf0  mov al, 0xc  [x204]
    c.a.l = (uint8_t)(0xcu);
    // 1501:6cf2  mov ah, ch  [x204]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:6cf4  out dx, ax  [x204]
    c.ip = 0x6cf5u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6cf5  mov al, 0xd  [x204]
    c.a.l = (uint8_t)(0xdu);
    // 1501:6cf7  mov ah, cl  [x204]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:6cf9  out dx, ax  [x204]
    c.ip = 0x6cfau; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6cfa  mov dx, 0x3da  [x204]
    c.dx_.x = (uint16_t)(0x3dau);
L1bd0d:
    if (c.tracing) c.traceAt(0x1bd0d);
    // 1501:6cfd  in al, dx  [x810]
    c.ip = 0x6cfeu; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1bd0e:
    if (c.tracing) c.traceAt(0x1bd0e);
    // 1501:6cfe  and al, 8  [x1080]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:6d00  jne 0x6cfd  [x1080]
    if (!c.zf) goto L1bd0d;
L1bd12:
    if (c.tracing) c.traceAt(0x1bd12);
    // 1501:6d02  in al, dx  [x10284]
    c.ip = 0x6d03u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1bd13:
    if (c.tracing) c.traceAt(0x1bd13);
    // 1501:6d03  and al, 8  [x13644]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:6d05  je 0x6d02  [x13644]
    if (c.zf) goto L1bd12;
L1bd17:
    if (c.tracing) c.traceAt(0x1bd17);
    // 1501:6d07  mov ax, word ptr cs:[8]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:6d0b  mov word ptr cs:[0xa], ax  [x204]
    c.w16(c.csb + (uint16_t)(0xau), c.a.x);
    // 1501:6d0f  push es  [x204]
    c.push16(c.es);
    // 1501:6d10  mov bx, word ptr cs:[0x6b92]  [x204]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b92u)));
    // 1501:6d15  mov es, bx  [x204]
    c.loadEs(c.b.x);
    // 1501:6d17  mov si, word ptr cs:[0x6b96]  [x204]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b96u)));
    // 1501:6d1c  mov dx, word ptr es:[si]  [x204]
    c.dx_.x = (uint16_t)(c.r16(c.esb + (uint16_t)(c.si.x)));
    // 1501:6d1f  mov word ptr cs:[8], dx  [x204]
    c.w16(c.csb + (uint16_t)(0x8u), c.dx_.x);
    // 1501:6d24  pop es  [x204]
    c.loadEs((uint16_t)c.pop16());
    // 1501:6d25  cmp word ptr cs:[0x62c0], 0x80  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x62c0u)), 0x80u, true);
    // 1501:6d2c  jae 0x6d3a  [x204]
    if (!c.cf) goto L1bd4a;
L1bd3e:
    if (c.tracing) c.traceAt(0x1bd3e);
    // 1501:6d2e  test word ptr cs:[0x62c0], 1  [x128]
    c.logic<16>((c.r16(c.csb + (uint16_t)(0x62c0u))) & (0x1u), true);
    // 1501:6d35  je 0x6d3a  [x128]
    if (c.zf) goto L1bd4a;
L1bd47:
    if (c.tracing) c.traceAt(0x1bd47);
    // 1501:6d37  call 0x7883  [x64]
    c.push16(0x6d3au); code_4(c, 0x1c893u); if (c.ip != 0x6d3au) c.badReturn(0x1bd47);
L1bd4a:
    if (c.tracing) c.traceAt(0x1bd4a);
    // 1501:6d3a  call 0x75db  [x204]
    c.push16(0x6d3du); code_4(c, 0x1c5ebu); if (c.ip != 0x6d3du) c.badReturn(0x1bd4a);
L1bd4d:
    if (c.tracing) c.traceAt(0x1bd4d);
    // 1501:6d3d  call 0x7652  [x204]
    c.push16(0x6d40u); code_4(c, 0x1c662u); if (c.ip != 0x6d40u) c.badReturn(0x1bd4d);
L1bd50:
    if (c.tracing) c.traceAt(0x1bd50);
    // 1501:6d40  mov word ptr cs:[0x6454], 0xa0  [x204]
    c.w16(c.csb + (uint16_t)(0x6454u), 0xa0u);
    // 1501:6d47  mov word ptr cs:[0x6456], 0xff60  [x204]
    c.w16(c.csb + (uint16_t)(0x6456u), 0xff60u);
    // 1501:6d4e  call 0x7536  [x204]
    c.push16(0x6d51u); code_4(c, 0x1c546u); if (c.ip != 0x6d51u) c.badReturn(0x1bd5e);
L1bd61:
    if (c.tracing) c.traceAt(0x1bd61);
    // 1501:6d51  call 0x74c1  [x204]
    c.push16(0x6d54u); code_4(c, 0x1c4d1u); if (c.ip != 0x6d54u) c.badReturn(0x1bd61);
L1bd64:
    if (c.tracing) c.traceAt(0x1bd64);
    // 1501:6d54  call 0x6e2c  [x204]
    c.push16(0x6d57u); code_4(c, 0x1be3cu); if (c.ip != 0x6d57u) c.badReturn(0x1bd64);
L1bd67:
    if (c.tracing) c.traceAt(0x1bd67);
    // 1501:6d57  mov dx, 0x3c4  [x204]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6d5a  mov ax, 0x302  [x204]
    c.a.x = (uint16_t)(0x302u);
    // 1501:6d5d  out dx, ax  [x204]
    c.ip = 0x6d5eu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6d5e  call 0x6ebb  [x204]
    c.push16(0x6d61u); code_4(c, 0x1becbu); if (c.ip != 0x6d61u) c.badReturn(0x1bd6e);
L1bd71:
    if (c.tracing) c.traceAt(0x1bd71);
    // 1501:6d61  mov word ptr cs:[0x6454], 0x9c  [x204]
    c.w16(c.csb + (uint16_t)(0x6454u), 0x9cu);
    // 1501:6d68  mov word ptr cs:[0x6456], 0xff5c  [x204]
    c.w16(c.csb + (uint16_t)(0x6456u), 0xff5cu);
    // 1501:6d6f  call 0x7536  [x204]
    c.push16(0x6d72u); code_4(c, 0x1c546u); if (c.ip != 0x6d72u) c.badReturn(0x1bd7f);
L1bd82:
    if (c.tracing) c.traceAt(0x1bd82);
    // 1501:6d72  call 0x74c1  [x204]
    c.push16(0x6d75u); code_4(c, 0x1c4d1u); if (c.ip != 0x6d75u) c.badReturn(0x1bd82);
L1bd85:
    if (c.tracing) c.traceAt(0x1bd85);
    // 1501:6d75  mov dx, 0x3c4  [x204]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:6d78  mov ax, 0xc02  [x204]
    c.a.x = (uint16_t)(0xc02u);
    // 1501:6d7b  out dx, ax  [x204]
    c.ip = 0x6d7cu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:6d7c  call 0x6e7e  [x204]
    c.push16(0x6d7fu); code_4(c, 0x1be8eu); if (c.ip != 0x6d7fu) c.badReturn(0x1bd8c);
L1bd8f:
    if (c.tracing) c.traceAt(0x1bd8f);
    // 1501:6d7f  mov cx, 0x8000  [x204]
    c.c.x = (uint16_t)(0x8000u);
    // 1501:6d82  mov si, word ptr cs:[0x6458]  [x204]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6458u)));
    // 1501:6d87  mov ax, word ptr cs:[si + 0x65f0]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:6d8c  mov dx, 0x66  [x204]
    c.dx_.x = (uint16_t)(0x66u);
    // 1501:6d8f  sub dx, word ptr cs:[0x6482]  [x204]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x6482u)), false));
    // 1501:6d94  shl dx, 1  [x204]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 1501:6d96  imul dx  [x204]
    c.imul16(c.dx_.x);
    // 1501:6d98  idiv cx  [x204]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x6d98u); }   // #DE: int 0, then again
    // 1501:6d9a  add ax, 0x9d  [x204]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x9du, false));
    // 1501:6d9d  mov word ptr cs:[0x6476], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6476u), c.a.x);
    // 1501:6da1  mov ax, word ptr cs:[si + 0x65f0]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:6da6  mov dx, 0x66  [x204]
    c.dx_.x = (uint16_t)(0x66u);
    // 1501:6da9  sub dx, word ptr cs:[0x6482]  [x204]
    c.dx_.x = (uint16_t)(c.sub<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x6482u)), false));
    // 1501:6dae  shl dx, 1  [x204]
    c.dx_.x = (uint16_t)(c.shl<16>(c.dx_.x, (int)((0x1u) & 31), false));
    // 1501:6db0  imul dx  [x204]
    c.imul16(c.dx_.x);
    // 1501:6db2  idiv cx  [x204]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x6db2u); }   // #DE: int 0, then again
    // 1501:6db4  add ax, 0x66  [x204]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x66u, false));
    // 1501:6db7  mov word ptr cs:[0x6478], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6478u), c.a.x);
    // 1501:6dbb  mov ax, word ptr cs:[8]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x8u)));
    // 1501:6dbf  sub ax, word ptr cs:[0xa]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0xau)), false));
    // 1501:6dc4  xor dx, dx  [x204]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:6dc6  mov cx, 0x10  [x204]
    c.c.x = (uint16_t)(0x10u);
    // 1501:6dc9  div cx  [x204]
    while (!c.div16(c.c.x)) { c.d32 = false; c.intr(0, 0x6dc9u); }   // #DE: int 0, then again
    // 1501:6dcb  mov cx, ax  [x204]
    c.c.x = (uint16_t)(c.a.x);
    // 1501:6dcd  mov cx, 1  [x204]
    c.c.x = (uint16_t)(0x1u);
    // 1501:6dd0  cmp cx, 0  [x204]
    c.sub<16>(c.c.x, 0x0u, true);
    // 1501:6dd3  je 0x6e29  [x204]
    if (c.zf) goto L1be39;
L1bde5:
    if (c.tracing) c.traceAt(0x1bde5);
    // 1501:6dd5  add word ptr cs:[0x6458], 4  [x204]
    c.w16(c.csb + (uint16_t)(0x6458u), c.add<16>(c.r16(c.csb + (uint16_t)(0x6458u)), 0x4u, false));
    // 1501:6ddb  cmp word ptr cs:[0x6458], 0x5a0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6458u)), 0x5a0u, true);
    // 1501:6de2  jb 0x6deb  [x204]
    if (c.cf) goto L1bdfb;
    c.notTranslated(0x1bdf4, "fall-through");
L1bdfb:
    if (c.tracing) c.traceAt(0x1bdfb);
    // 1501:6deb  add word ptr cs:[0x645c], 8  [x204]
    c.w16(c.csb + (uint16_t)(0x645cu), c.add<16>(c.r16(c.csb + (uint16_t)(0x645cu)), 0x8u, false));
    // 1501:6df1  cmp word ptr cs:[0x645c], 0x5a0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x645cu)), 0x5a0u, true);
    // 1501:6df8  jb 0x6e01  [x204]
    if (c.cf) goto L1be11;
L1be0a:
    if (c.tracing) c.traceAt(0x1be0a);
    // 1501:6dfa  sub word ptr cs:[0x645c], 0x5a0  [x2]
    c.w16(c.csb + (uint16_t)(0x645cu), c.sub<16>(c.r16(c.csb + (uint16_t)(0x645cu)), 0x5a0u, true));
L1be11:
    if (c.tracing) c.traceAt(0x1be11);
    // 1501:6e01  inc word ptr cs:[0x62c0]  [x204]
    c.w16(c.csb + (uint16_t)(0x62c0u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x62c0u)), false));
    // 1501:6e06  cmp word ptr cs:[0x6482], 0x66  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6482u)), 0x66u, true);
    // 1501:6e0c  jne 0x6e11  [x204]
    if (!c.zf) goto L1be21;
L1be1e:
    if (c.tracing) c.traceAt(0x1be1e);
    // 1501:6e0e  jmp 0x78b4  [x1]
    goto L1c8c4;
L1be21:
    if (c.tracing) c.traceAt(0x1be21);
    // 1501:6e11  test word ptr cs:[0x62c0], 1  [x203]
    c.logic<16>((c.r16(c.csb + (uint16_t)(0x62c0u))) & (0x1u), true);
    // 1501:6e18  je 0x6e27  [x203]
    if (c.zf) goto L1be37;
L1be2a:
    if (c.tracing) c.traceAt(0x1be2a);
    // 1501:6e1a  cmp word ptr cs:[0x6482], 0x66  [x102]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6482u)), 0x66u, true);
    // 1501:6e20  jae 0x6e27  [x102]
    if (!c.cf) goto L1be37;
L1be32:
    if (c.tracing) c.traceAt(0x1be32);
    // 1501:6e22  inc word ptr cs:[0x6482]  [x102]
    c.w16(c.csb + (uint16_t)(0x6482u), c.inc<16>(c.r16(c.csb + (uint16_t)(0x6482u)), true));
L1be37:
    if (c.tracing) c.traceAt(0x1be37);
    // 1501:6e27  loop 0x6dd5  [x203]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bde5;
L1be39:
    if (c.tracing) c.traceAt(0x1be39);
    // 1501:6e29  jmp 0x6cd8  [x203]
    goto L1bce8;
L1be3c:
    if (c.tracing) c.traceAt(0x1be3c);
    // 1501:6e2c  mov ax, word ptr cs:[0x320c]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x320cu)));
    // 1501:6e30  mov word ptr cs:[0x645e], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x645eu), c.a.x);
    // 1501:6e34  mov ax, word ptr cs:[0x320e]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x320eu)));
    // 1501:6e38  mov word ptr cs:[0x6460], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6460u), c.a.x);
    // 1501:6e3c  mov ax, word ptr cs:[0x339c]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x339cu)));
    // 1501:6e40  mov word ptr cs:[0x6462], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6462u), c.a.x);
    // 1501:6e44  mov ax, word ptr cs:[0x339e]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x339eu)));
    // 1501:6e48  mov word ptr cs:[0x6464], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6464u), c.a.x);
    // 1501:6e4c  mov word ptr cs:[0x6486], 0  [x204]
    c.w16(c.csb + (uint16_t)(0x6486u), 0x0u);
    // 1501:6e53  mov ax, word ptr cs:[0x6462]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6462u)));
    // 1501:6e57  sub ax, word ptr cs:[0x645e]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x645eu)), true));
    // 1501:6e5c  jns 0x6e64  [x204]
    if (!c.sf) goto L1be74;
L1be6e:
    if (c.tracing) c.traceAt(0x1be6e);
    // 1501:6e5e  or word ptr cs:[0x6486], 2  [x89]
    c.w16(c.csb + (uint16_t)(0x6486u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x6486u))) | (0x2u), true));
L1be74:
    if (c.tracing) c.traceAt(0x1be74);
    // 1501:6e64  mov ax, word ptr cs:[0x6464]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6464u)));
    // 1501:6e68  sub ax, word ptr cs:[0x6460]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6460u)), true));
    // 1501:6e6d  jns 0x6e75  [x204]
    if (!c.sf) goto L1be85;
L1be7f:
    if (c.tracing) c.traceAt(0x1be7f);
    // 1501:6e6f  or word ptr cs:[0x6486], 4  [x110]
    c.w16(c.csb + (uint16_t)(0x6486u), c.logic<16>((c.r16(c.csb + (uint16_t)(0x6486u))) | (0x4u), true));
L1be85:
    if (c.tracing) c.traceAt(0x1be85);
    // 1501:6e75  mov si, word ptr cs:[0x6486]  [x204]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6486u)));
    // 1501:6e7a  call 0x6ef8  [x204]
    c.push16(0x6e7du); code_4(c, 0x1bf08u); if (c.ip != 0x6e7du) c.badReturn(0x1be8a);
L1be8d:
    if (c.tracing) c.traceAt(0x1be8d);
    // 1501:6e7d  ret   [x204]
    c.ip = c.pop16(); return;
L1be8e:
    if (c.tracing) c.traceAt(0x1be8e);
    // 1501:6e7e  push ds  [x204]
    c.push16(c.ds);
    // 1501:6e7f  mov ax, word ptr cs:[0x6b90]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b90u)));
    // 1501:6e83  mov ds, ax  [x204]
    c.loadDs(c.a.x);
    // 1501:6e85  xor bp, bp  [x204]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:6e87  xor di, di  [x204]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1be99:
    if (c.tracing) c.traceAt(0x1be99);
    // 1501:6e89  mov ax, word ptr cs:[bp + 0x320c]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x320cu)));
    // 1501:6e8e  mov word ptr cs:[0x645e], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x645eu), c.a.x);
    // 1501:6e92  mov ax, word ptr cs:[bp + 0x320e]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x320eu)));
    // 1501:6e97  mov word ptr cs:[0x6460], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6460u), c.a.x);
    // 1501:6e9b  mov ax, word ptr cs:[bp + 0x339c]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x339cu)));
    // 1501:6ea0  mov word ptr cs:[0x6462], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6462u), c.a.x);
    // 1501:6ea4  mov ax, word ptr cs:[bp + 0x339e]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x339eu)));
    // 1501:6ea9  mov word ptr cs:[0x6464], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6464u), c.a.x);
    // 1501:6ead  call 0x71d1  [x19584]
    c.push16(0x6eb0u); code_4(c, 0x1c1e1u); if (c.ip != 0x6eb0u) c.badReturn(0x1bebd);
L1bec0:
    if (c.tracing) c.traceAt(0x1bec0);
    // 1501:6eb0  add bp, 4  [x19584]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:6eb3  cmp bp, 0x180  [x19584]
    c.sub<16>(c.bp.x, 0x180u, true);
    // 1501:6eb7  jb 0x6e89  [x19584]
    if (c.cf) goto L1be99;
L1bec9:
    if (c.tracing) c.traceAt(0x1bec9);
    // 1501:6eb9  pop ds  [x204]
    c.loadDs((uint16_t)c.pop16());
    // 1501:6eba  ret   [x204]
    c.ip = c.pop16(); return;
L1becb:
    if (c.tracing) c.traceAt(0x1becb);
    // 1501:6ebb  push ds  [x204]
    c.push16(c.ds);
    // 1501:6ebc  mov ax, word ptr cs:[0x6b90]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b90u)));
    // 1501:6ec0  mov ds, ax  [x204]
    c.loadDs(c.a.x);
    // 1501:6ec2  xor bp, bp  [x204]
    c.bp.x = (uint16_t)(c.logic<16>((c.bp.x) ^ (c.bp.x), false));
    // 1501:6ec4  xor di, di  [x204]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1bed6:
    if (c.tracing) c.traceAt(0x1bed6);
    // 1501:6ec6  mov ax, word ptr cs:[bp + 0x320c]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x320cu)));
    // 1501:6ecb  mov word ptr cs:[0x645e], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x645eu), c.a.x);
    // 1501:6ecf  mov ax, word ptr cs:[bp + 0x320e]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x320eu)));
    // 1501:6ed4  mov word ptr cs:[0x6460], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6460u), c.a.x);
    // 1501:6ed8  mov ax, word ptr cs:[bp + 0x339c]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x339cu)));
    // 1501:6edd  mov word ptr cs:[0x6462], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6462u), c.a.x);
    // 1501:6ee1  mov ax, word ptr cs:[bp + 0x339e]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.bp.x + 0x339eu)));
    // 1501:6ee6  mov word ptr cs:[0x6464], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x6464u), c.a.x);
    // 1501:6eea  call 0x7349  [x19584]
    c.push16(0x6eedu); code_4(c, 0x1c359u); if (c.ip != 0x6eedu) c.badReturn(0x1befa);
L1befd:
    if (c.tracing) c.traceAt(0x1befd);
    // 1501:6eed  add bp, 4  [x19584]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, 0x4u, false));
    // 1501:6ef0  cmp bp, 0x180  [x19584]
    c.sub<16>(c.bp.x, 0x180u, true);
    // 1501:6ef4  jb 0x6ec6  [x19584]
    if (c.cf) goto L1bed6;
L1bf06:
    if (c.tracing) c.traceAt(0x1bf06);
    // 1501:6ef6  pop ds  [x204]
    c.loadDs((uint16_t)c.pop16());
    // 1501:6ef7  ret   [x204]
    c.ip = c.pop16(); return;
L1bf08:
    if (c.tracing) c.traceAt(0x1bf08);
    // 1501:6ef8  mov word ptr cs:[0x6452], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6452u), c.a.x);
    // 1501:6efc  call 0x7127  [x204]
    c.push16(0x6effu); code_4(c, 0x1c137u); if (c.ip != 0x6effu) c.badReturn(0x1bf0c);
L1bf0f:
    if (c.tracing) c.traceAt(0x1bf0f);
    // 1501:6eff  mov ax, word ptr cs:[0x6462]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6462u)));
    // 1501:6f03  sub ax, word ptr cs:[0x645e]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x645eu)), true));
    // 1501:6f08  mov word ptr cs:[0x6452], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6452u), c.a.x);
    // 1501:6f0c  call 0x7087  [x204]
    c.push16(0x6f0fu); code_4(c, 0x1c097u); if (c.ip != 0x6f0fu) c.badReturn(0x1bf1c);
L1bf1f:
    if (c.tracing) c.traceAt(0x1bf1f);
    // 1501:6f0f  xor si, si  [x204]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:6f11  xor di, di  [x204]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
    // 1501:6f13  mov cx, 0x28  [x204]
    c.c.x = (uint16_t)(0x28u);
L1bf26:
    if (c.tracing) c.traceAt(0x1bf26);
    // 1501:6f16  mov ax, word ptr cs:[si + 0x6f47]  [x8160]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x6f47u)));
    // 1501:6f1b  mov word ptr cs:[di + 0x71e2], ax  [x8160]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x71e2u), c.a.x);
    // 1501:6f20  mov ax, word ptr cs:[si + 0x6f49]  [x8160]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x6f49u)));
    // 1501:6f25  mov word ptr cs:[di + 0x735a], ax  [x8160]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x735au), c.a.x);
    // 1501:6f2a  mov ax, word ptr cs:[si + 0x6f4b]  [x8160]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x6f4bu)));
    // 1501:6f2f  mov word ptr cs:[di + 0x71e6], ax  [x8160]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x71e6u), c.a.x);
    // 1501:6f34  mov ax, word ptr cs:[si + 0x6f4d]  [x8160]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x6f4du)));
    // 1501:6f39  mov word ptr cs:[di + 0x735e], ax  [x8160]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x735eu), c.a.x);
    // 1501:6f3e  add di, 9  [x8160]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x9u, false));
    // 1501:6f41  add si, 8  [x8160]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x8u, true));
    // 1501:6f44  loop 0x6f16  [x8160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1bf26;
L1bf56:
    if (c.tracing) c.traceAt(0x1bf56);
    // 1501:6f46  ret   [x204]
    c.ip = c.pop16(); return;
L1c097:
    if (c.tracing) c.traceAt(0x1c097);
    // 1501:7087  mov cx, 0xa0  [x204]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:708a  mov word ptr cs:[0x646c], 1  [x204]
    c.w16(c.csb + (uint16_t)(0x646cu), 0x1u);
    // 1501:7091  xor dx, dx  [x204]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:7093  mov ax, word ptr cs:[0x6452]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6452u)));
    // 1501:7097  cmp word ptr cs:[0x6452], 0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x0u, true);
    // 1501:709d  jns 0x70b7  [x204]
    if (!c.sf) goto L1c0c7;
L1c0af:
    if (c.tracing) c.traceAt(0x1c0af);
    // 1501:709f  not dx  [x89]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:70a1  neg word ptr cs:[0x646c]  [x89]
    c.w16(c.csb + (uint16_t)(0x646cu), c.neg<16>(c.r16(c.csb + (uint16_t)(0x646cu)), false));
    // 1501:70a6  idiv cx  [x89]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x70a6u); }   // #DE: int 0, then again
    // 1501:70a8  mov word ptr cs:[0x6466], ax  [x89]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:70ac  neg dx  [x89]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:70ae  mov word ptr cs:[0x6468], dx  [x89]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:70b3  neg ax  [x89]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
    // 1501:70b5  jmp 0x70c2  [x89]
    goto L1c0d2;
L1c0c7:
    if (c.tracing) c.traceAt(0x1c0c7);
    // 1501:70b7  idiv cx  [x115]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x70b7u); }   // #DE: int 0, then again
    // 1501:70b9  mov word ptr cs:[0x6466], ax  [x115]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:70bd  mov word ptr cs:[0x6468], dx  [x115]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
L1c0d2:
    if (c.tracing) c.traceAt(0x1c0d2);
    // 1501:70c2  mov word ptr cs:[0x646a], 0  [x204]
    c.w16(c.csb + (uint16_t)(0x646au), 0x0u);
    // 1501:70c9  xor bx, bx  [x204]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:70cb  mov bp, 0  [x204]
    c.bp.x = (uint16_t)(0x0u);
    // 1501:70ce  mov cx, 0x50  [x204]
    c.c.x = (uint16_t)(0x50u);
L1c0e1:
    if (c.tracing) c.traceAt(0x1c0e1);
    // 1501:70d1  add bp, word ptr cs:[0x6466]  [x16320]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:70d6  mov ax, word ptr cs:[0x6468]  [x16320]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:70da  add word ptr cs:[0x646a], ax  [x16320]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:70df  cmp word ptr cs:[0x646a], 0xa0  [x16320]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, true);
    // 1501:70e6  jl 0x70f4  [x16320]
    if ((c.sf != c.of)) goto L1c104;
L1c0f8:
    if (c.tracing) c.traceAt(0x1c0f8);
    // 1501:70e8  sub word ptr cs:[0x646a], 0xa0  [x5050]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, false));
    // 1501:70ef  add bp, word ptr cs:[0x646c]  [x5050]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c104:
    if (c.tracing) c.traceAt(0x1c104);
    // 1501:70f4  add word ptr cs:[bx + 0x6f47], bp  [x16320]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x6f47u), c.add<16>(c.r16(c.csb + (uint16_t)(c.b.x + 0x6f47u)), c.bp.x, false));
    // 1501:70f9  add bp, word ptr cs:[0x6466]  [x16320]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:70fe  mov ax, word ptr cs:[0x6468]  [x16320]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:7102  add word ptr cs:[0x646a], ax  [x16320]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:7107  cmp word ptr cs:[0x646a], 0xa0  [x16320]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, true);
    // 1501:710e  jl 0x711c  [x16320]
    if ((c.sf != c.of)) goto L1c12c;
L1c120:
    if (c.tracing) c.traceAt(0x1c120);
    // 1501:7110  sub word ptr cs:[0x646a], 0xa0  [x6468]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, false));
    // 1501:7117  add bp, word ptr cs:[0x646c]  [x6468]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c12c:
    if (c.tracing) c.traceAt(0x1c12c);
    // 1501:711c  add word ptr cs:[bx + 0x6f49], bp  [x16320]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x6f49u), c.add<16>(c.r16(c.csb + (uint16_t)(c.b.x + 0x6f49u)), c.bp.x, false));
    // 1501:7121  add bx, 4  [x16320]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, true));
    // 1501:7124  loop 0x70d1  [x16320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c0e1;
L1c136:
    if (c.tracing) c.traceAt(0x1c136);
    // 1501:7126  ret   [x204]
    c.ip = c.pop16(); return;
L1c137:
    if (c.tracing) c.traceAt(0x1c137);
    // 1501:7127  mov cx, 0xa0  [x204]
    c.c.x = (uint16_t)(0xa0u);
    // 1501:712a  mov word ptr cs:[0x646c], 1  [x204]
    c.w16(c.csb + (uint16_t)(0x646cu), 0x1u);
    // 1501:7131  xor dx, dx  [x204]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:7133  mov ax, word ptr cs:[0x6452]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6452u)));
    // 1501:7137  cmp word ptr cs:[0x6452], 0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x0u, true);
    // 1501:713d  jns 0x7157  [x204]
    if (!c.sf) goto L1c167;
L1c14f:
    if (c.tracing) c.traceAt(0x1c14f);
    // 1501:713f  not dx  [x110]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:7141  neg word ptr cs:[0x646c]  [x110]
    c.w16(c.csb + (uint16_t)(0x646cu), c.neg<16>(c.r16(c.csb + (uint16_t)(0x646cu)), false));
    // 1501:7146  idiv cx  [x110]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7146u); }   // #DE: int 0, then again
    // 1501:7148  mov word ptr cs:[0x6466], ax  [x110]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:714c  neg dx  [x110]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:714e  mov word ptr cs:[0x6468], dx  [x110]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:7153  neg ax  [x110]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, true));
    // 1501:7155  jmp 0x7162  [x110]
    goto L1c172;
L1c167:
    if (c.tracing) c.traceAt(0x1c167);
    // 1501:7157  idiv cx  [x94]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7157u); }   // #DE: int 0, then again
    // 1501:7159  mov word ptr cs:[0x6466], ax  [x94]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:715d  mov word ptr cs:[0x6468], dx  [x94]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
L1c172:
    if (c.tracing) c.traceAt(0x1c172);
    // 1501:7162  mov word ptr cs:[0x646a], 0  [x204]
    c.w16(c.csb + (uint16_t)(0x646au), 0x0u);
    // 1501:7169  xor bx, bx  [x204]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:716b  mov bp, 0  [x204]
    c.bp.x = (uint16_t)(0x0u);
    // 1501:716e  mov cx, 0x50  [x204]
    c.c.x = (uint16_t)(0x50u);
L1c181:
    if (c.tracing) c.traceAt(0x1c181);
    // 1501:7171  add bp, word ptr cs:[0x6466]  [x16320]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:7176  mov ax, word ptr cs:[0x6468]  [x16320]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:717a  add word ptr cs:[0x646a], ax  [x16320]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:717f  cmp word ptr cs:[0x646a], 0xa0  [x16320]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, true);
    // 1501:7186  jl 0x7194  [x16320]
    if ((c.sf != c.of)) goto L1c1a4;
L1c198:
    if (c.tracing) c.traceAt(0x1c198);
    // 1501:7188  sub word ptr cs:[0x646a], 0xa0  [x5636]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, false));
    // 1501:718f  add bp, word ptr cs:[0x646c]  [x5636]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c1a4:
    if (c.tracing) c.traceAt(0x1c1a4);
    // 1501:7194  mov ax, 0x140  [x16320]
    c.a.x = (uint16_t)(0x140u);
    // 1501:7197  mul bp  [x16320]
    c.mul16(c.bp.x);
    // 1501:7199  mov word ptr cs:[bx + 0x6f47], ax  [x16320]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x6f47u), c.a.x);
    // 1501:719e  add bp, word ptr cs:[0x6466]  [x16320]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:71a3  mov ax, word ptr cs:[0x6468]  [x16320]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:71a7  add word ptr cs:[0x646a], ax  [x16320]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:71ac  cmp word ptr cs:[0x646a], 0xa0  [x16320]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, true);
    // 1501:71b3  jl 0x71c1  [x16320]
    if ((c.sf != c.of)) goto L1c1d1;
L1c1c5:
    if (c.tracing) c.traceAt(0x1c1c5);
    // 1501:71b5  sub word ptr cs:[0x646a], 0xa0  [x7020]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0xa0u, false));
    // 1501:71bc  add bp, word ptr cs:[0x646c]  [x7020]
    c.bp.x = (uint16_t)(c.add<16>(c.bp.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c1d1:
    if (c.tracing) c.traceAt(0x1c1d1);
    // 1501:71c1  mov ax, 0x140  [x16320]
    c.a.x = (uint16_t)(0x140u);
    // 1501:71c4  mul bp  [x16320]
    c.mul16(c.bp.x);
    // 1501:71c6  mov word ptr cs:[bx + 0x6f49], ax  [x16320]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x6f49u), c.a.x);
    // 1501:71cb  add bx, 4  [x16320]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, true));
    // 1501:71ce  loop 0x7171  [x16320]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c181;
L1c1e0:
    if (c.tracing) c.traceAt(0x1c1e0);
    // 1501:71d0  ret   [x204]
    c.ip = c.pop16(); return;
L1c1e1:
    if (c.tracing) c.traceAt(0x1c1e1);
    // 1501:71d1  mov ax, 0x140  [x19584]
    c.a.x = (uint16_t)(0x140u);
    // 1501:71d4  imul word ptr cs:[0x6460]  [x19584]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6460u)));
    // 1501:71d9  add ax, word ptr cs:[0x645e]  [x19584]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x645eu)), true));
    // 1501:71de  mov si, ax  [x19584]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:71e0  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c1f2))));
    // 1501:71e4  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c1f6))));
    // 1501:71e8  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:71e9  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c1fb))));
    // 1501:71ed  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c1ff))));
    // 1501:71f1  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:71f2  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c204))));
    // 1501:71f6  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c208))));
    // 1501:71fa  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:71fb  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c20d))));
    // 1501:71ff  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c211))));
    // 1501:7203  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7204  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c216))));
    // 1501:7208  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c21a))));
    // 1501:720c  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:720d  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c21f))));
    // 1501:7211  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c223))));
    // 1501:7215  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7216  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c228))));
    // 1501:721a  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c22c))));
    // 1501:721e  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:721f  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c231))));
    // 1501:7223  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c235))));
    // 1501:7227  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7228  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c23a))));
    // 1501:722c  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c23e))));
    // 1501:7230  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7231  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c243))));
    // 1501:7235  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c247))));
    // 1501:7239  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:723a  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c24c))));
    // 1501:723e  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c250))));
    // 1501:7242  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7243  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c255))));
    // 1501:7247  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c259))));
    // 1501:724b  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:724c  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c25e))));
    // 1501:7250  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c262))));
    // 1501:7254  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7255  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c267))));
    // 1501:7259  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c26b))));
    // 1501:725d  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:725e  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c270))));
    // 1501:7262  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c274))));
    // 1501:7266  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7267  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c279))));
    // 1501:726b  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c27d))));
    // 1501:726f  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7270  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c282))));
    // 1501:7274  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c286))));
    // 1501:7278  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7279  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c28b))));
    // 1501:727d  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c28f))));
    // 1501:7281  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7282  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c294))));
    // 1501:7286  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c298))));
    // 1501:728a  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:728b  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c29d))));
    // 1501:728f  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2a1))));
    // 1501:7293  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7294  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2a6))));
    // 1501:7298  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2aa))));
    // 1501:729c  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:729d  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2af))));
    // 1501:72a1  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2b3))));
    // 1501:72a5  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72a6  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2b8))));
    // 1501:72aa  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2bc))));
    // 1501:72ae  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72af  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2c1))));
    // 1501:72b3  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2c5))));
    // 1501:72b7  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72b8  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2ca))));
    // 1501:72bc  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2ce))));
    // 1501:72c0  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72c1  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2d3))));
    // 1501:72c5  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2d7))));
    // 1501:72c9  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72ca  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2dc))));
    // 1501:72ce  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2e0))));
    // 1501:72d2  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72d3  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2e5))));
    // 1501:72d7  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2e9))));
    // 1501:72db  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72dc  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2ee))));
    // 1501:72e0  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2f2))));
    // 1501:72e4  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72e5  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2f7))));
    // 1501:72e9  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c2fb))));
    // 1501:72ed  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72ee  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c300))));
    // 1501:72f2  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c304))));
    // 1501:72f6  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:72f7  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c309))));
    // 1501:72fb  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c30d))));
    // 1501:72ff  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7300  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c312))));
    // 1501:7304  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c316))));
    // 1501:7308  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7309  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c31b))));
    // 1501:730d  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c31f))));
    // 1501:7311  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7312  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c324))));
    // 1501:7316  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c328))));
    // 1501:731a  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:731b  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c32d))));
    // 1501:731f  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c331))));
    // 1501:7323  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7324  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c336))));
    // 1501:7328  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c33a))));
    // 1501:732c  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:732d  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c33f))));
    // 1501:7331  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c343))));
    // 1501:7335  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7336  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c348))));
    // 1501:733a  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c34c))));
    // 1501:733e  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:733f  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c351))));
    // 1501:7343  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c355))));
    // 1501:7347  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7348  ret   [x19584]
    c.ip = c.pop16(); return;
L1c359:
    if (c.tracing) c.traceAt(0x1c359);
    // 1501:7349  mov ax, 0x140  [x19584]
    c.a.x = (uint16_t)(0x140u);
    // 1501:734c  imul word ptr cs:[0x6460]  [x19584]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6460u)));
    // 1501:7351  add ax, word ptr cs:[0x645e]  [x19584]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x645eu)), true));
    // 1501:7356  mov si, ax  [x19584]
    c.si.x = (uint16_t)(c.a.x);
    // 1501:7358  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c36a))));
    // 1501:735c  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c36e))));
    // 1501:7360  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7361  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c373))));
    // 1501:7365  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c377))));
    // 1501:7369  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:736a  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c37c))));
    // 1501:736e  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c380))));
    // 1501:7372  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7373  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c385))));
    // 1501:7377  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c389))));
    // 1501:737b  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:737c  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c38e))));
    // 1501:7380  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c392))));
    // 1501:7384  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7385  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c397))));
    // 1501:7389  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c39b))));
    // 1501:738d  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:738e  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3a0))));
    // 1501:7392  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3a4))));
    // 1501:7396  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7397  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3a9))));
    // 1501:739b  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3ad))));
    // 1501:739f  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73a0  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3b2))));
    // 1501:73a4  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3b6))));
    // 1501:73a8  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73a9  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3bb))));
    // 1501:73ad  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3bf))));
    // 1501:73b1  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73b2  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3c4))));
    // 1501:73b6  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3c8))));
    // 1501:73ba  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73bb  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3cd))));
    // 1501:73bf  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3d1))));
    // 1501:73c3  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73c4  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3d6))));
    // 1501:73c8  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3da))));
    // 1501:73cc  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73cd  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3df))));
    // 1501:73d1  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3e3))));
    // 1501:73d5  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73d6  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3e8))));
    // 1501:73da  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3ec))));
    // 1501:73de  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73df  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3f1))));
    // 1501:73e3  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3f5))));
    // 1501:73e7  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73e8  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3fa))));
    // 1501:73ec  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c3fe))));
    // 1501:73f0  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73f1  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c403))));
    // 1501:73f5  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c407))));
    // 1501:73f9  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:73fa  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c40c))));
    // 1501:73fe  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c410))));
    // 1501:7402  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7403  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c415))));
    // 1501:7407  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c419))));
    // 1501:740b  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:740c  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c41e))));
    // 1501:7410  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c422))));
    // 1501:7414  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7415  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c427))));
    // 1501:7419  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c42b))));
    // 1501:741d  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:741e  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c430))));
    // 1501:7422  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c434))));
    // 1501:7426  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7427  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c439))));
    // 1501:742b  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c43d))));
    // 1501:742f  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7430  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c442))));
    // 1501:7434  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c446))));
    // 1501:7438  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7439  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c44b))));
    // 1501:743d  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c44f))));
    // 1501:7441  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7442  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c454))));
    // 1501:7446  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c458))));
    // 1501:744a  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:744b  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c45d))));
    // 1501:744f  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c461))));
    // 1501:7453  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7454  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c466))));
    // 1501:7458  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c46a))));
    // 1501:745c  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:745d  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c46f))));
    // 1501:7461  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c473))));
    // 1501:7465  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7466  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c478))));
    // 1501:746a  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c47c))));
    // 1501:746e  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:746f  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c481))));
    // 1501:7473  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c485))));
    // 1501:7477  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7478  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c48a))));
    // 1501:747c  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c48e))));
    // 1501:7480  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7481  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c493))));
    // 1501:7485  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c497))));
    // 1501:7489  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:748a  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c49c))));
    // 1501:748e  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4a0))));
    // 1501:7492  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:7493  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4a5))));
    // 1501:7497  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4a9))));
    // 1501:749b  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:749c  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4ae))));
    // 1501:74a0  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4b2))));
    // 1501:74a4  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:74a5  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4b7))));
    // 1501:74a9  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4bb))));
    // 1501:74ad  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:74ae  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4c0))));
    // 1501:74b2  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4c4))));
    // 1501:74b6  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:74b7  mov al, byte ptr [si]  [x19584]
    c.a.l = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4c9))));
    // 1501:74bb  mov ah, byte ptr [si]  [x19584]
    c.a.h = (uint8_t)(c.r8(c.dsb + (uint16_t)(c.si.x + (uint32_t)(int16_t)c.r16(0x1c4cd))));
    // 1501:74bf  stosw word ptr es:[di], ax  [x19584]
    c.stos<16, false>(0);
    // 1501:74c0  ret   [x19584]
    c.ip = c.pop16(); return;
L1c4d1:
    if (c.tracing) c.traceAt(0x1c4d1);
    // 1501:74c1  xor di, di  [x408]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1c4d3:
    if (c.tracing) c.traceAt(0x1c4d3);
    // 1501:74c3  mov ax, word ptr cs:[di + 0x352c]  [x40800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x352cu)));
    // 1501:74c8  sub ax, word ptr cs:[0x647a]  [x40800]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x647au)), false));
    // 1501:74cd  mov bx, ax  [x40800]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:74cf  add ax, word ptr cs:[0x6476]  [x40800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6476u)), false));
    // 1501:74d4  mov word ptr cs:[di + 0x320c], ax  [x40800]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x320cu), c.a.x);
    // 1501:74d9  mov ax, word ptr cs:[di + 0x352e]  [x40800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x352eu)));
    // 1501:74de  sub ax, word ptr cs:[0x647c]  [x40800]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x647cu)), false));
    // 1501:74e3  mov bx, ax  [x40800]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:74e5  add ax, word ptr cs:[0x6478]  [x40800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6478u)), false));
    // 1501:74ea  mov word ptr cs:[di + 0x320e], ax  [x40800]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x320eu), c.a.x);
    // 1501:74ef  add di, 4  [x40800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:74f2  cmp di, 0x190  [x40800]
    c.sub<16>(c.di.x, 0x190u, true);
    // 1501:74f6  jb 0x74c3  [x40800]
    if (c.cf) goto L1c4d3;
L1c508:
    if (c.tracing) c.traceAt(0x1c508);
    // 1501:74f8  mov di, 0x190  [x408]
    c.di.x = (uint16_t)(0x190u);
    // 1501:74fb  xor si, si  [x408]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), true));
L1c50d:
    if (c.tracing) c.traceAt(0x1c50d);
    // 1501:74fd  mov ax, word ptr cs:[si + 0x352c]  [x40800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x352cu)));
    // 1501:7502  sub ax, word ptr cs:[0x647e]  [x40800]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x647eu)), false));
    // 1501:7507  mov bx, ax  [x40800]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:7509  add ax, word ptr cs:[0x6476]  [x40800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6476u)), false));
    // 1501:750e  mov word ptr cs:[di + 0x320c], ax  [x40800]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x320cu), c.a.x);
    // 1501:7513  mov ax, word ptr cs:[si + 0x352e]  [x40800]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.si.x + 0x352eu)));
    // 1501:7518  sub ax, word ptr cs:[0x6480]  [x40800]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6480u)), false));
    // 1501:751d  mov bx, ax  [x40800]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:751f  add ax, word ptr cs:[0x6478]  [x40800]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x6478u)), false));
    // 1501:7524  mov word ptr cs:[di + 0x320e], ax  [x40800]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x320eu), c.a.x);
    // 1501:7529  add si, 4  [x40800]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x4u, false));
    // 1501:752c  add di, 4  [x40800]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:752f  cmp si, 0x190  [x40800]
    c.sub<16>(c.si.x, 0x190u, true);
    // 1501:7533  jb 0x74fd  [x40800]
    if (c.cf) goto L1c50d;
L1c545:
    if (c.tracing) c.traceAt(0x1c545);
    // 1501:7535  ret   [x408]
    c.ip = c.pop16(); return;
L1c546:
    if (c.tracing) c.traceAt(0x1c546);
    // 1501:7536  mov cx, 0x7fff  [x408]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:7539  mov si, word ptr cs:[0x645c]  [x408]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x645cu)));
    // 1501:753e  mov ax, 0  [x408]
    c.a.x = (uint16_t)(0x0u);
    // 1501:7541  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:7546  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7546u); }   // #DE: int 0, then again
    // 1501:7548  push ax  [x408]
    c.push16(c.a.x);
    // 1501:7549  mov ax, word ptr cs:[0x6454]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6454u)));
    // 1501:754d  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:7552  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7552u); }   // #DE: int 0, then again
    // 1501:7554  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:7555  add ax, bx  [x408]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:7557  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:755c  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x755cu); }   // #DE: int 0, then again
    // 1501:7561  mov word ptr cs:[0x647a], ax  [x408]
    c.w16(c.csb + (uint16_t)(0x647au), c.a.x);
    // 1501:7565  mov ax, 0  [x408]
    c.a.x = (uint16_t)(0x0u);
    // 1501:7568  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:756d  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x756du); }   // #DE: int 0, then again
    // 1501:756f  push ax  [x408]
    c.push16(c.a.x);
    // 1501:7570  mov ax, word ptr cs:[0x6454]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6454u)));
    // 1501:7574  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:7579  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7579u); }   // #DE: int 0, then again
    // 1501:757b  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:757c  sub ax, bx  [x408]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:757e  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:7583  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x7583u); }   // #DE: int 0, then again
    // 1501:7588  mov word ptr cs:[0x647c], ax  [x408]
    c.w16(c.csb + (uint16_t)(0x647cu), c.a.x);
    // 1501:758c  mov ax, 0  [x408]
    c.a.x = (uint16_t)(0x0u);
    // 1501:758f  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:7594  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7594u); }   // #DE: int 0, then again
    // 1501:7596  push ax  [x408]
    c.push16(c.a.x);
    // 1501:7597  mov ax, word ptr cs:[0x6456]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6456u)));
    // 1501:759b  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:75a0  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x75a0u); }   // #DE: int 0, then again
    // 1501:75a2  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:75a3  add ax, bx  [x408]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:75a5  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:75aa  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x75aau); }   // #DE: int 0, then again
    // 1501:75af  mov word ptr cs:[0x647e], ax  [x408]
    c.w16(c.csb + (uint16_t)(0x647eu), c.a.x);
    // 1501:75b3  mov ax, 0  [x408]
    c.a.x = (uint16_t)(0x0u);
    // 1501:75b6  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:75bb  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x75bbu); }   // #DE: int 0, then again
    // 1501:75bd  push ax  [x408]
    c.push16(c.a.x);
    // 1501:75be  mov ax, word ptr cs:[0x6456]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6456u)));
    // 1501:75c2  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:75c7  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x75c7u); }   // #DE: int 0, then again
    // 1501:75c9  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:75ca  sub ax, bx  [x408]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:75cc  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:75d1  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x75d1u); }   // #DE: int 0, then again
    // 1501:75d6  mov word ptr cs:[0x6480], ax  [x408]
    c.w16(c.csb + (uint16_t)(0x6480u), c.a.x);
    // 1501:75da  ret   [x408]
    c.ip = c.pop16(); return;
L1c5eb:
    if (c.tracing) c.traceAt(0x1c5eb);
    // 1501:75db  mov cx, 0x7fff  [x204]
    c.c.x = (uint16_t)(0x7fffu);
    // 1501:75de  xor di, di  [x204]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1c5f0:
    if (c.tracing) c.traceAt(0x1c5f0);
    // 1501:75e0  mov si, word ptr cs:[0x645c]  [x408]
    c.si.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x645cu)));
    // 1501:75e5  mov ax, word ptr cs:[di + 0x62c4]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x62c4u)));
    // 1501:75ea  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:75ef  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x75efu); }   // #DE: int 0, then again
    // 1501:75f1  push ax  [x408]
    c.push16(c.a.x);
    // 1501:75f2  mov ax, word ptr cs:[di + 0x62c2]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x62c2u)));
    // 1501:75f7  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:75fc  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x75fcu); }   // #DE: int 0, then again
    // 1501:75fe  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:75ff  add ax, bx  [x408]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, c.b.x, false));
    // 1501:7601  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:7606  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x7606u); }   // #DE: int 0, then again
    // 1501:760b  mov bx, ax  [x408]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:760d  mov word ptr cs:[di + 0x352c], ax  [x408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x352cu), c.a.x);
    // 1501:7612  mov ax, word ptr cs:[di + 0x62c4]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x62c4u)));
    // 1501:7617  imul word ptr cs:[si + 0x65f0]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x65f0u)));
    // 1501:761c  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x761cu); }   // #DE: int 0, then again
    // 1501:761e  push ax  [x408]
    c.push16(c.a.x);
    // 1501:761f  mov ax, word ptr cs:[di + 0x62c2]  [x408]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x62c2u)));
    // 1501:7624  imul word ptr cs:[si + 0x6488]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(c.si.x + 0x6488u)));
    // 1501:7629  idiv cx  [x408]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7629u); }   // #DE: int 0, then again
    // 1501:762b  pop bx  [x408]
    { const uint32_t t0 = c.pop16(); c.b.x = (uint16_t)(t0); }
    // 1501:762c  sub ax, bx  [x408]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.b.x, false));
    // 1501:762e  imul word ptr cs:[0x6482]  [x408]
    c.imul16(c.r16(c.csb + (uint16_t)(0x6482u)));
    // 1501:7633  idiv word ptr cs:[0x6484]  [x408]
    while (!c.idiv16(c.r16(c.csb + (uint16_t)(0x6484u)))) { c.d32 = false; c.intr(0, 0x7633u); }   // #DE: int 0, then again
    // 1501:7638  mov bx, ax  [x408]
    c.b.x = (uint16_t)(c.a.x);
    // 1501:763a  mov word ptr cs:[di + 0x352e], ax  [x408]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x352eu), c.a.x);
    // 1501:763f  add di, 4  [x408]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x4u, false));
    // 1501:7642  cmp di, 8  [x408]
    c.sub<16>(c.di.x, 0x8u, true);
    // 1501:7645  jb 0x75e0  [x408]
    if (c.cf) goto L1c5f0;
L1c657:
    if (c.tracing) c.traceAt(0x1c657);
    // 1501:7647  ret   [x204]
    c.ip = c.pop16(); return;
L1c662:
    if (c.tracing) c.traceAt(0x1c662);
    // 1501:7652  mov ax, word ptr cs:[0x352c]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x352cu)));
    // 1501:7656  mov word ptr cs:[0x7648], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x7648u), c.a.x);
    // 1501:765a  mov ax, word ptr cs:[0x352e]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x352eu)));
    // 1501:765e  mov word ptr cs:[0x764a], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x764au), c.a.x);
    // 1501:7662  mov ax, word ptr cs:[0x3530]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3530u)));
    // 1501:7666  mov word ptr cs:[0x764c], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x764cu), c.a.x);
    // 1501:766a  mov ax, word ptr cs:[0x3532]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x3532u)));
    // 1501:766e  mov word ptr cs:[0x764e], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x764eu), c.a.x);
    // 1501:7672  mov ax, word ptr cs:[0x764c]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x764cu)));
    // 1501:7676  sub ax, word ptr cs:[0x7648]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x7648u)), false));
    // 1501:767b  mov word ptr cs:[0x6452], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6452u), c.a.x);
    // 1501:767f  mov cx, 0x60  [x204]
    c.c.x = (uint16_t)(0x60u);
    // 1501:7682  mov word ptr cs:[0x646c], 1  [x204]
    c.w16(c.csb + (uint16_t)(0x646cu), 0x1u);
    // 1501:7689  xor dx, dx  [x204]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:768b  mov ax, word ptr cs:[0x6452]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6452u)));
    // 1501:768f  cmp word ptr cs:[0x6452], 0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x0u, true);
    // 1501:7695  jns 0x76b5  [x204]
    if (!c.sf) goto L1c6c5;
L1c6a7:
    if (c.tracing) c.traceAt(0x1c6a7);
    // 1501:7697  not dx  [x87]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:7699  neg word ptr cs:[0x646c]  [x87]
    c.w16(c.csb + (uint16_t)(0x646cu), c.neg<16>(c.r16(c.csb + (uint16_t)(0x646cu)), false));
    // 1501:769e  idiv cx  [x87]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x769eu); }   // #DE: int 0, then again
    // 1501:76a0  mov word ptr cs:[0x6466], ax  [x87]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:76a4  neg dx  [x87]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:76a6  mov word ptr cs:[0x6468], dx  [x87]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:76ab  neg ax  [x87]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:76ad  sar ax, 1  [x87]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:76af  mov word ptr cs:[0x646a], ax  [x87]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
    // 1501:76b3  jmp 0x76c6  [x87]
    goto L1c6d6;
L1c6c5:
    if (c.tracing) c.traceAt(0x1c6c5);
    // 1501:76b5  idiv cx  [x117]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x76b5u); }   // #DE: int 0, then again
    // 1501:76b7  mov word ptr cs:[0x6466], ax  [x117]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:76bb  mov word ptr cs:[0x6468], dx  [x117]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:76c0  sar ax, 1  [x117]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:76c2  mov word ptr cs:[0x646a], ax  [x117]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
L1c6d6:
    if (c.tracing) c.traceAt(0x1c6d6);
    // 1501:76c6  xor bx, bx  [x204]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:76c8  mov dx, word ptr cs:[0x7648]  [x204]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x7648u)));
    // 1501:76cd  mov cx, 0x60  [x204]
    c.c.x = (uint16_t)(0x60u);
L1c6e0:
    if (c.tracing) c.traceAt(0x1c6e0);
    // 1501:76d0  add dx, word ptr cs:[0x6466]  [x19584]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:76d5  mov ax, word ptr cs:[0x6468]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:76d9  add word ptr cs:[0x646a], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:76de  cmp word ptr cs:[0x646a], 0x60  [x19584]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x60u, true);
    // 1501:76e4  jl 0x76f1  [x19584]
    if ((c.sf != c.of)) goto L1c701;
L1c6f6:
    if (c.tracing) c.traceAt(0x1c6f6);
    // 1501:76e6  sub word ptr cs:[0x646a], 0x60  [x7806]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x60u, false));
    // 1501:76ec  add dx, word ptr cs:[0x646c]  [x7806]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c701:
    if (c.tracing) c.traceAt(0x1c701);
    // 1501:76f1  mov word ptr cs:[bx + 0x352c], dx  [x19584]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x352cu), c.dx_.x);
    // 1501:76f6  add bx, 4  [x19584]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, true));
    // 1501:76f9  loop 0x76d0  [x19584]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c6e0;
L1c70b:
    if (c.tracing) c.traceAt(0x1c70b);
    // 1501:76fb  mov ax, word ptr cs:[0x764e]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x764eu)));
    // 1501:76ff  sub ax, word ptr cs:[0x764a]  [x204]
    c.a.x = (uint16_t)(c.sub<16>(c.a.x, c.r16(c.csb + (uint16_t)(0x764au)), false));
    // 1501:7704  mov word ptr cs:[0x6452], ax  [x204]
    c.w16(c.csb + (uint16_t)(0x6452u), c.a.x);
    // 1501:7708  mov cx, 0x60  [x204]
    c.c.x = (uint16_t)(0x60u);
    // 1501:770b  mov word ptr cs:[0x646c], 1  [x204]
    c.w16(c.csb + (uint16_t)(0x646cu), 0x1u);
    // 1501:7712  xor dx, dx  [x204]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:7714  mov ax, word ptr cs:[0x6452]  [x204]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6452u)));
    // 1501:7718  cmp word ptr cs:[0x6452], 0  [x204]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x0u, true);
    // 1501:771e  jns 0x773e  [x204]
    if (!c.sf) goto L1c74e;
L1c730:
    if (c.tracing) c.traceAt(0x1c730);
    // 1501:7720  not dx  [x89]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:7722  neg word ptr cs:[0x646c]  [x89]
    c.w16(c.csb + (uint16_t)(0x646cu), c.neg<16>(c.r16(c.csb + (uint16_t)(0x646cu)), false));
    // 1501:7727  idiv cx  [x89]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x7727u); }   // #DE: int 0, then again
    // 1501:7729  mov word ptr cs:[0x6466], ax  [x89]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:772d  neg dx  [x89]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:772f  mov word ptr cs:[0x6468], dx  [x89]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:7734  neg ax  [x89]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:7736  sar ax, 1  [x89]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:7738  mov word ptr cs:[0x646a], ax  [x89]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
    // 1501:773c  jmp 0x774f  [x89]
    goto L1c75f;
L1c74e:
    if (c.tracing) c.traceAt(0x1c74e);
    // 1501:773e  idiv cx  [x115]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x773eu); }   // #DE: int 0, then again
    // 1501:7740  mov word ptr cs:[0x6466], ax  [x115]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:7744  mov word ptr cs:[0x6468], dx  [x115]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:7749  sar ax, 1  [x115]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:774b  mov word ptr cs:[0x646a], ax  [x115]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
L1c75f:
    if (c.tracing) c.traceAt(0x1c75f);
    // 1501:774f  xor bx, bx  [x204]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:7751  mov dx, word ptr cs:[0x764a]  [x204]
    c.dx_.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x764au)));
    // 1501:7756  mov cx, 0x60  [x204]
    c.c.x = (uint16_t)(0x60u);
L1c769:
    if (c.tracing) c.traceAt(0x1c769);
    // 1501:7759  add dx, word ptr cs:[0x6466]  [x19584]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:775e  mov ax, word ptr cs:[0x6468]  [x19584]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:7762  add word ptr cs:[0x646a], ax  [x19584]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:7767  cmp word ptr cs:[0x646a], 0x60  [x19584]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x60u, true);
    // 1501:776d  jl 0x777a  [x19584]
    if ((c.sf != c.of)) goto L1c78a;
L1c77f:
    if (c.tracing) c.traceAt(0x1c77f);
    // 1501:776f  sub word ptr cs:[0x646a], 0x60  [x6448]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x60u, false));
    // 1501:7775  add dx, word ptr cs:[0x646c]  [x6448]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c78a:
    if (c.tracing) c.traceAt(0x1c78a);
    // 1501:777a  mov word ptr cs:[bx + 0x352e], dx  [x19584]
    c.w16(c.csb + (uint16_t)(c.b.x + 0x352eu), c.dx_.x);
    // 1501:777f  add bx, 4  [x19584]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x4u, true));
    // 1501:7782  loop 0x7759  [x19584]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c769;
L1c794:
    if (c.tracing) c.traceAt(0x1c794);
    // 1501:7784  ret   [x204]
    c.ip = c.pop16(); return;
L1c795:
    if (c.tracing) c.traceAt(0x1c795);
    // 1501:7785  mov word ptr cs:[0x6452], 0xffc0  [x1]
    c.w16(c.csb + (uint16_t)(0x6452u), 0xffc0u);
    // 1501:778c  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), true));
L1c79e:
    if (c.tracing) c.traceAt(0x1c79e);
    // 1501:778e  mov cx, 0x3f  [x128]
    c.c.x = (uint16_t)(0x3fu);
    // 1501:7791  mov word ptr cs:[0x646c], 1  [x128]
    c.w16(c.csb + (uint16_t)(0x646cu), 0x1u);
    // 1501:7798  xor dx, dx  [x128]
    c.dx_.x = (uint16_t)(c.logic<16>((c.dx_.x) ^ (c.dx_.x), false));
    // 1501:779a  mov ax, word ptr cs:[0x6452]  [x128]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6452u)));
    // 1501:779e  cmp word ptr cs:[0x6452], 0  [x128]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x0u, true);
    // 1501:77a4  jns 0x77c4  [x128]
    if (!c.sf) goto L1c7d4;
L1c7b6:
    if (c.tracing) c.traceAt(0x1c7b6);
    // 1501:77a6  not dx  [x64]
    c.dx_.x = (uint16_t)(~(c.dx_.x));
    // 1501:77a8  neg word ptr cs:[0x646c]  [x64]
    c.w16(c.csb + (uint16_t)(0x646cu), c.neg<16>(c.r16(c.csb + (uint16_t)(0x646cu)), false));
    // 1501:77ad  idiv cx  [x64]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x77adu); }   // #DE: int 0, then again
    // 1501:77af  mov word ptr cs:[0x6466], ax  [x64]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:77b3  neg dx  [x64]
    c.dx_.x = (uint16_t)(c.neg<16>(c.dx_.x, false));
    // 1501:77b5  mov word ptr cs:[0x6468], dx  [x64]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:77ba  neg ax  [x64]
    c.a.x = (uint16_t)(c.neg<16>(c.a.x, false));
    // 1501:77bc  sar ax, 1  [x64]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:77be  mov word ptr cs:[0x646a], ax  [x64]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
    // 1501:77c2  jmp 0x77d5  [x64]
    goto L1c7e5;
L1c7d4:
    if (c.tracing) c.traceAt(0x1c7d4);
    // 1501:77c4  idiv cx  [x64]
    while (!c.idiv16(c.c.x)) { c.d32 = false; c.intr(0, 0x77c4u); }   // #DE: int 0, then again
    // 1501:77c6  mov word ptr cs:[0x6466], ax  [x64]
    c.w16(c.csb + (uint16_t)(0x6466u), c.a.x);
    // 1501:77ca  mov word ptr cs:[0x6468], dx  [x64]
    c.w16(c.csb + (uint16_t)(0x6468u), c.dx_.x);
    // 1501:77cf  sar ax, 1  [x64]
    c.a.x = (uint16_t)(c.sar<16>(c.a.x, (int)((0x1u) & 31), true));
    // 1501:77d1  mov word ptr cs:[0x646a], ax  [x64]
    c.w16(c.csb + (uint16_t)(0x646au), c.a.x);
L1c7e5:
    if (c.tracing) c.traceAt(0x1c7e5);
    // 1501:77d5  xor bx, bx  [x128]
    c.b.x = (uint16_t)(c.logic<16>((c.b.x) ^ (c.b.x), true));
    // 1501:77d7  mov cx, 0x3f  [x128]
    c.c.x = (uint16_t)(0x3fu);
L1c7ea:
    if (c.tracing) c.traceAt(0x1c7ea);
    // 1501:77da  mov dx, 0  [x8064]
    c.dx_.x = (uint16_t)(0x0u);
    // 1501:77dd  add dx, word ptr cs:[0x6466]  [x8064]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x6466u)), false));
    // 1501:77e2  mov ax, word ptr cs:[0x6468]  [x8064]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6468u)));
    // 1501:77e6  add word ptr cs:[0x646a], ax  [x8064]
    c.w16(c.csb + (uint16_t)(0x646au), c.add<16>(c.r16(c.csb + (uint16_t)(0x646au)), c.a.x, false));
    // 1501:77eb  cmp word ptr cs:[0x646a], 0x3f  [x8064]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x3fu, true);
    // 1501:77f1  jl 0x77fe  [x8064]
    if ((c.sf != c.of)) goto L1c80e;
L1c803:
    if (c.tracing) c.traceAt(0x1c803);
    // 1501:77f3  sub word ptr cs:[0x646a], 0x3f  [x3907]
    c.w16(c.csb + (uint16_t)(0x646au), c.sub<16>(c.r16(c.csb + (uint16_t)(0x646au)), 0x3fu, false));
    // 1501:77f9  add dx, word ptr cs:[0x646c]  [x3907]
    c.dx_.x = (uint16_t)(c.add<16>(c.dx_.x, c.r16(c.csb + (uint16_t)(0x646cu)), true));
L1c80e:
    if (c.tracing) c.traceAt(0x1c80e);
    // 1501:77fe  mov byte ptr cs:[bx + di + 0x36bc], dl  [x8064]
    c.w8(c.csb + (uint16_t)(c.b.x + c.di.x + 0x36bcu), c.dx_.l);
    // 1501:7803  add bx, 1  [x8064]
    c.b.x = (uint16_t)(c.add<16>(c.b.x, 0x1u, true));
    // 1501:7806  loop 0x77da  [x8064]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c7ea;
L1c818:
    if (c.tracing) c.traceAt(0x1c818);
    // 1501:7808  add di, 0x40  [x128]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x40u, false));
    // 1501:780b  add word ptr cs:[0x6452], 1  [x128]
    c.w16(c.csb + (uint16_t)(0x6452u), c.add<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x1u, false));
    // 1501:7811  cmp word ptr cs:[0x6452], 0x40  [x128]
    c.sub<16>(c.r16(c.csb + (uint16_t)(0x6452u)), 0x40u, true);
    // 1501:7817  jl 0x778e  [x128]
    if ((c.sf != c.of)) goto L1c79e;
L1c82b:
    if (c.tracing) c.traceAt(0x1c82b);
    // 1501:781b  ret   [x1]
    c.ip = c.pop16(); return;
L1c82c:
    if (c.tracing) c.traceAt(0x1c82c);
    // 1501:781c  sub di, di  [x1]
    c.di.x = (uint16_t)(c.sub<16>(c.di.x, c.di.x, false));
    // 1501:781e  sub si, si  [x1]
    c.si.x = (uint16_t)(c.sub<16>(c.si.x, c.si.x, true));
    // 1501:7820  mov cx, 0x100  [x1]
    c.c.x = (uint16_t)(0x100u);
L1c833:
    if (c.tracing) c.traceAt(0x1c833);
    // 1501:7823  mov al, byte ptr cs:[si + 0x5fbc]  [x256]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x5fbcu)));
    // 1501:7828  sub al, 0x14  [x256]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x14u, false));
    // 1501:782a  cwde   [x256]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:782b  add ax, 0x40  [x256]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x40u, false));
    // 1501:782e  mov dx, 0x40  [x256]
    c.dx_.x = (uint16_t)(0x40u);
    // 1501:7831  mul dx  [x256]
    c.mul16(c.dx_.x);
    // 1501:7833  mov word ptr cs:[di + 0x56bc], ax  [x256]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x56bcu), c.a.x);
    // 1501:7838  mov byte ptr cs:[si + 0x5cbc], 0x14  [x256]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x5cbcu), 0x14u);
    // 1501:783e  inc si  [x256]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:783f  add di, 2  [x256]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:7842  mov al, byte ptr cs:[si + 0x5fbc]  [x256]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x5fbcu)));
    // 1501:7847  sub al, 6  [x256]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x6u, false));
    // 1501:7849  cwde   [x256]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:784a  add ax, 0x40  [x256]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x40u, false));
    // 1501:784d  mov dx, 0x40  [x256]
    c.dx_.x = (uint16_t)(0x40u);
    // 1501:7850  mul dx  [x256]
    c.mul16(c.dx_.x);
    // 1501:7852  mov word ptr cs:[di + 0x56bc], ax  [x256]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x56bcu), c.a.x);
    // 1501:7857  mov byte ptr cs:[si + 0x5cbc], 6  [x256]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x5cbcu), 0x6u);
    // 1501:785d  inc si  [x256]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:785e  add di, 2  [x256]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, false));
    // 1501:7861  mov al, byte ptr cs:[si + 0x5fbc]  [x256]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x5fbcu)));
    // 1501:7866  sub al, 0x14  [x256]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, 0x14u, false));
    // 1501:7868  cwde   [x256]
    c.a.x = (uint16_t)(int8_t)c.a.l;
    // 1501:7869  add ax, 0x40  [x256]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x40u, false));
    // 1501:786c  mov dx, 0x40  [x256]
    c.dx_.x = (uint16_t)(0x40u);
    // 1501:786f  mul dx  [x256]
    c.mul16(c.dx_.x);
    // 1501:7871  mov word ptr cs:[di + 0x56bc], ax  [x256]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x56bcu), c.a.x);
    // 1501:7876  mov byte ptr cs:[si + 0x5cbc], 0x14  [x256]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x5cbcu), 0x14u);
    // 1501:787c  inc si  [x256]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:787d  add di, 2  [x256]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:7880  loop 0x7823  [x256]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c833;
L1c892:
    if (c.tracing) c.traceAt(0x1c892);
    // 1501:7882  ret   [x1]
    c.ip = c.pop16(); return;
L1c893:
    if (c.tracing) c.traceAt(0x1c893);
    // 1501:7883  mov si, 3  [x64]
    c.si.x = (uint16_t)(0x3u);
    // 1501:7886  mov di, 6  [x64]
    c.di.x = (uint16_t)(0x6u);
    // 1501:7889  mov dx, 0x3c8  [x64]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:788c  mov al, 1  [x64]
    c.a.l = (uint8_t)(0x1u);
    // 1501:788e  out dx, al  [x64]
    c.ip = 0x788fu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:788f  inc dx  [x64]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:7890  mov cx, 0x2fd  [x64]
    c.c.x = (uint16_t)(0x2fdu);
L1c8a3:
    if (c.tracing) c.traceAt(0x1c8a3);
    // 1501:7893  mov al, byte ptr cs:[si + 0x5cbc]  [x48960]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x + 0x5cbcu)));
    // 1501:7898  mov bx, word ptr cs:[di + 0x56bc]  [x48960]
    c.b.x = (uint16_t)(c.r16(c.csb + (uint16_t)(c.di.x + 0x56bcu)));
    // 1501:789d  inc word ptr cs:[di + 0x56bc]  [x48960]
    c.w16(c.csb + (uint16_t)(c.di.x + 0x56bcu), c.inc<16>(c.r16(c.csb + (uint16_t)(c.di.x + 0x56bcu)), false));
    // 1501:78a2  add al, byte ptr cs:[bx + 0x36bc]  [x48960]
    c.a.l = (uint8_t)(c.add<8>(c.a.l, c.r8(c.csb + (uint16_t)(c.b.x + 0x36bcu)), false));
    // 1501:78a7  mov byte ptr cs:[si + 0x5cbc], al  [x48960]
    c.w8(c.csb + (uint16_t)(c.si.x + 0x5cbcu), c.a.l);
    // 1501:78ac  out dx, al  [x48960]
    c.ip = 0x78adu; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:78ad  inc si  [x48960]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:78ae  add di, 2  [x48960]
    c.di.x = (uint16_t)(c.add<16>(c.di.x, 0x2u, true));
    // 1501:78b1  loop 0x7893  [x48960]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c8a3;
L1c8c3:
    if (c.tracing) c.traceAt(0x1c8c3);
    // 1501:78b3  ret   [x64]
    c.ip = c.pop16(); return;
L1c8c4:
    if (c.tracing) c.traceAt(0x1c8c4);
    // 1501:78b4  mov dx, 0x3c4  [x1]
    c.dx_.x = (uint16_t)(0x3c4u);
    // 1501:78b7  mov ax, 0xf02  [x1]
    c.a.x = (uint16_t)(0xf02u);
    // 1501:78ba  out dx, ax  [x1]
    c.ip = 0x78bbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:78bb  mov cx, 0x1f40  [x1]
    c.c.x = (uint16_t)(0x1f40u);
    // 1501:78be  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:78c1  mov al, 0xc  [x1]
    c.a.l = (uint8_t)(0xcu);
    // 1501:78c3  mov ah, ch  [x1]
    c.a.h = (uint8_t)(c.c.h);
    // 1501:78c5  out dx, ax  [x1]
    c.ip = 0x78c6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:78c6  mov al, 0xd  [x1]
    c.a.l = (uint8_t)(0xdu);
    // 1501:78c8  mov ah, cl  [x1]
    c.a.h = (uint8_t)(c.c.l);
    // 1501:78ca  out dx, ax  [x1]
    c.ip = 0x78cbu; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:78cb  call 0x7909  [x1]
    c.push16(0x78ceu); code_4(c, 0x1c919u); if (c.ip != 0x78ceu) c.badReturn(0x1c8db);
L1c8de:
    if (c.tracing) c.traceAt(0x1c8de);
    // 1501:78ce  mov dx, 0x3d4  [x1]
    c.dx_.x = (uint16_t)(0x3d4u);
    // 1501:78d1  mov al, 9  [x1]
    c.a.l = (uint8_t)(0x9u);
    // 1501:78d3  mov ah, 1  [x1]
    c.a.h = (uint8_t)(0x1u);
    // 1501:78d5  out dx, ax  [x1]
    c.ip = 0x78d6u; c.d32 = false; c.out16(c.dx_.x, c.a.x);
    // 1501:78d6  mov cx, 0xa0  [x1]
    c.c.x = (uint16_t)(0xa0u);
L1c8e9:
    if (c.tracing) c.traceAt(0x1c8e9);
    // 1501:78d9  call 0x7909  [x160]
    c.push16(0x78dcu); code_4(c, 0x1c919u); if (c.ip != 0x78dcu) c.badReturn(0x1c8e9);
L1c8ec:
    if (c.tracing) c.traceAt(0x1c8ec);
    // 1501:78dc  loop 0x78d9  [x160]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c8e9;
L1c8ee:
    if (c.tracing) c.traceAt(0x1c8ee);
    // 1501:78de  mov cx, 0x40  [x1]
    c.c.x = (uint16_t)(0x40u);
L1c8f1:
    if (c.tracing) c.traceAt(0x1c8f1);
    // 1501:78e1  push cx  [x64]
    c.push16(c.c.x);
    // 1501:78e2  call 0x7909  [x64]
    c.push16(0x78e5u); code_4(c, 0x1c919u); if (c.ip != 0x78e5u) c.badReturn(0x1c8f2);
L1c8f5:
    if (c.tracing) c.traceAt(0x1c8f5);
    // 1501:78e5  mov bx, 0x40  [x64]
    c.b.x = (uint16_t)(0x40u);
    // 1501:78e8  sub bx, cx  [x64]
    c.b.x = (uint16_t)(c.sub<16>(c.b.x, c.c.x, false));
    // 1501:78ea  mov dx, 0x3c8  [x64]
    c.dx_.x = (uint16_t)(0x3c8u);
    // 1501:78ed  xor al, al  [x64]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
    // 1501:78ef  out dx, al  [x64]
    c.ip = 0x78f0u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:78f0  inc dx  [x64]
    c.dx_.x = (uint16_t)(c.inc<16>(c.dx_.x, true));
    // 1501:78f1  mov si, 0x5fbc  [x64]
    c.si.x = (uint16_t)(0x5fbcu);
    // 1501:78f4  mov cx, 0x300  [x64]
    c.c.x = (uint16_t)(0x300u);
L1c907:
    if (c.tracing) c.traceAt(0x1c907);
    // 1501:78f7  mov al, byte ptr cs:[si]  [x49152]
    c.a.l = (uint8_t)(c.r8(c.csb + (uint16_t)(c.si.x)));
    // 1501:78fa  inc si  [x49152]
    c.si.x = (uint16_t)(c.inc<16>(c.si.x, false));
    // 1501:78fb  sub al, bl  [x49152]
    c.a.l = (uint8_t)(c.sub<8>(c.a.l, c.b.l, true));
    // 1501:78fd  jge 0x7901  [x49152]
    if ((c.sf == c.of)) goto L1c911;
L1c90f:
    if (c.tracing) c.traceAt(0x1c90f);
    // 1501:78ff  xor al, al  [x30541]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) ^ (c.a.l), true));
L1c911:
    if (c.tracing) c.traceAt(0x1c911);
    // 1501:7901  out dx, al  [x49152]
    c.ip = 0x7902u; c.d32 = false; c.out8(c.dx_.x, c.a.l);
    // 1501:7902  loop 0x78f7  [x49152]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c907;
L1c914:
    if (c.tracing) c.traceAt(0x1c914);
    // 1501:7904  pop cx  [x64]
    { const uint32_t t0 = c.pop16(); c.c.x = (uint16_t)(t0); }
    // 1501:7905  loop 0x78e1  [x64]
    c.c.x = (uint16_t)(c.c.x - 1); if (c.c.x) goto L1c8f1;
L1c917:
    if (c.tracing) c.traceAt(0x1c917);
    // 1501:7907  jmp 0x7947  [x1]
    goto L1c957;
L1c919:
    if (c.tracing) c.traceAt(0x1c919);
    // 1501:7909  mov dx, 0x3da  [x225]
    c.dx_.x = (uint16_t)(0x3dau);
L1c91c:
    if (c.tracing) c.traceAt(0x1c91c);
    // 1501:790c  in al, dx  [x885]
    c.ip = 0x790du; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1c91d:
    if (c.tracing) c.traceAt(0x1c91d);
    // 1501:790d  and al, 8  [x1180]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:790f  jne 0x790c  [x1180]
    if (!c.zf) goto L1c91c;
L1c921:
    if (c.tracing) c.traceAt(0x1c921);
    // 1501:7911  in al, dx  [x11352]
    c.ip = 0x7912u; c.d32 = false; c.a.l = c.in8(c.dx_.x);
L1c922:
    if (c.tracing) c.traceAt(0x1c922);
    // 1501:7912  and al, 8  [x15061]
    c.a.l = (uint8_t)(c.logic<8>((c.a.l) & (0x8u), true));
    // 1501:7914  je 0x7911  [x15061]
    if (c.zf) goto L1c921;
L1c926:
    if (c.tracing) c.traceAt(0x1c926);
    // 1501:7916  ret   [x225]
    c.ip = c.pop16(); return;
L1c927:
    if (c.tracing) c.traceAt(0x1c927);
    // 1501:7917  push ds  [x1]
    c.push16(c.ds);
    // 1501:7918  push es  [x1]
    c.push16(c.es);
    // 1501:7919  mov ax, word ptr cs:[0x6b90]  [x1]
    c.a.x = (uint16_t)(c.r16(c.csb + (uint16_t)(0x6b90u)));
    // 1501:791d  mov es, ax  [x1]
    c.loadEs(c.a.x);
    // 1501:791f  xor di, di  [x1]
    c.di.x = (uint16_t)(c.logic<16>((c.di.x) ^ (c.di.x), false));
    // 1501:7921  xor si, si  [x1]
    c.si.x = (uint16_t)(c.logic<16>((c.si.x) ^ (c.si.x), false));
    // 1501:7923  xor ax, ax  [x1]
    c.a.x = (uint16_t)(c.logic<16>((c.a.x) ^ (c.a.x), true));
L1c935:
    if (c.tracing) c.traceAt(0x1c935);
    // 1501:7925  mov cx, 0xa0  [x205]
    c.c.x = (uint16_t)(0xa0u);
L1c938:
    if (c.tracing) c.traceAt(0x1c938);
    // 1501:7928  rep movsw word ptr es:[di], word ptr [si]  [x33005]
    c.ip = 0x792au; c.d32 = false; c.movs<16, false>(c.dsb, 1);
L1c93a:
    if (c.tracing) c.traceAt(0x1c93a);
    // 1501:792a  add ax, 0x2aaa  [x205]
    c.a.x = (uint16_t)(c.add<16>(c.a.x, 0x2aaau, true));
    // 1501:792d  jae 0x7933  [x205]
    if (!c.cf) goto L1c943;
L1c93f:
    if (c.tracing) c.traceAt(0x1c93f);
    // 1501:792f  add si, 0x140  [x34]
    c.si.x = (uint16_t)(c.add<16>(c.si.x, 0x140u, true));
L1c943:
    if (c.tracing) c.traceAt(0x1c943);
    // 1501:7933  cmp si, 0xfa00  [x205]
    c.sub<16>(c.si.x, 0xfa00u, true);
    // 1501:7937  jb 0x793e  [x205]
    if (c.cf) goto L1c94e;
L1c949:
    if (c.tracing) c.traceAt(0x1c949);
    // 1501:7939  mov si, 0xc  [x1]
    c.si.x = (uint16_t)(0xcu);
    // 1501:793c  push cs  [x1]
    c.push16(c.cs);
    // 1501:793d  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
L1c94e:
    if (c.tracing) c.traceAt(0x1c94e);
    // 1501:793e  cmp di, 0x140  [x205]
    c.sub<16>(c.di.x, 0x140u, true);
    // 1501:7942  jae 0x7925  [x205]
    if (!c.cf) goto L1c935;
L1c954:
    if (c.tracing) c.traceAt(0x1c954);
    // 1501:7944  pop es  [x1]
    c.loadEs((uint16_t)c.pop16());
    // 1501:7945  pop ds  [x1]
    c.loadDs((uint16_t)c.pop16());
    // 1501:7946  ret   [x1]
    c.ip = c.pop16(); return;
L1c957:
    if (c.tracing) c.traceAt(0x1c957);
    // 1501:7947  retf   [x1]
    c.ip = c.pop16(); c.loadCs((uint16_t)c.pop16()); return;
}

static Register reg_code_4(4, {0x15010, 0x1bba8, 0x1bbc8, 0x1bbd0, 0x1bbd3, 0x1bbdd, 0x1bbe8, 0x1bbf8, 0x1bbfe, 0x1bc0e, 0x1bc14, 0x1bc24, 0x1bc2a, 0x1bc3a, 0x1bc40, 0x1bc53, 0x1bc59, 0x1bc69, 0x1bc6f, 0x1bc7f, 0x1bc85, 0x1bc95, 0x1bc9b, 0x1bc9f, 0x1bcaa, 0x1bcad, 0x1bcc2, 0x1bcc8, 0x1bcc9, 0x1bccd, 0x1bcce, 0x1bcd2, 0x1bcd4, 0x1bce8, 0x1bcf5, 0x1bcfb, 0x1bd0d, 0x1bd0e, 0x1bd12, 0x1bd13, 0x1bd17, 0x1bd3e, 0x1bd47, 0x1bd4a, 0x1bd4d, 0x1bd50, 0x1bd61, 0x1bd64, 0x1bd67, 0x1bd71, 0x1bd82, 0x1bd85, 0x1bd8f, 0x1bde5, 0x1bdfb, 0x1be0a, 0x1be11, 0x1be1e, 0x1be21, 0x1be2a, 0x1be32, 0x1be37, 0x1be39, 0x1be3c, 0x1be6e, 0x1be74, 0x1be7f, 0x1be85, 0x1be8d, 0x1be8e, 0x1be99, 0x1bec0, 0x1bec9, 0x1becb, 0x1bed6, 0x1befd, 0x1bf06, 0x1bf08, 0x1bf0f, 0x1bf1f, 0x1bf26, 0x1bf56, 0x1c097, 0x1c0af, 0x1c0c7, 0x1c0d2, 0x1c0e1, 0x1c0f8, 0x1c104, 0x1c120, 0x1c12c, 0x1c136, 0x1c137, 0x1c14f, 0x1c167, 0x1c172, 0x1c181, 0x1c198, 0x1c1a4, 0x1c1c5, 0x1c1d1, 0x1c1e0, 0x1c1e1, 0x1c359, 0x1c4d1, 0x1c4d3, 0x1c508, 0x1c50d, 0x1c545, 0x1c546, 0x1c5eb, 0x1c5f0, 0x1c657, 0x1c662, 0x1c6a7, 0x1c6c5, 0x1c6d6, 0x1c6e0, 0x1c6f6, 0x1c701, 0x1c70b, 0x1c730, 0x1c74e, 0x1c75f, 0x1c769, 0x1c77f, 0x1c78a, 0x1c794, 0x1c795, 0x1c79e, 0x1c7b6, 0x1c7d4, 0x1c7e5, 0x1c7ea, 0x1c803, 0x1c80e, 0x1c818, 0x1c82b, 0x1c82c, 0x1c833, 0x1c892, 0x1c893, 0x1c8a3, 0x1c8c3, 0x1c8c4, 0x1c8de, 0x1c8e9, 0x1c8ec, 0x1c8ee, 0x1c8f1, 0x1c8f5, 0x1c907, 0x1c90f, 0x1c911, 0x1c914, 0x1c917, 0x1c919, 0x1c91c, 0x1c91d, 0x1c921, 0x1c922, 0x1c926, 0x1c927, 0x1c935, 0x1c938, 0x1c93a, 0x1c93f, 0x1c943, 0x1c949, 0x1c94e, 0x1c954, 0x1c957}, code_4);

}  // namespace show
